
//
// meshutils/hullivr.cpp
//
//	referenced by: libengine2.so
//
//	functions: 32
//	classes: 2
//

// <05E808A3> meshutils/hullivr.cpp:26
// variables: 6
// function calls: 58
void CHullIVR::CHullIVR(const RnHullSimplificationParams_t* pSimplificationParams, const qhConvex* pSource)
{
	{
		COpMeshBuilder builder; // 37
		{
			int a; // 39
		}
	}
	HullIVRCollapseCost_t::HullIVRCollapseCost_t(); // 37
	HullIVRVertexData_t::HullIVRVertexData_t(); // 991
	ValidateGrowSize(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this); // 475
	CUtlMemory(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this); // 384
	ValidateGrowSize(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this); // 475
	CUtlMemory(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this); // 384
	CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::CHalfEdgeComponentList(); // 991
	ValidateGrowSize(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::Comp this); // 475
	CUtlMemory(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::Comp this,
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>:: this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>:: this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::Comp this); // 384
	ValidateGrowSize(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::Comp this); // 475
	CUtlMemory(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::Comp this,
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>:: this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>:: this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::Comp this); // 384
	CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::CHalfEdgeComponentList(); // 991
	ValidateGrowSize(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Componen this); // 475
	CUtlMemory(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Componen this,
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Comp this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Comp this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Componen this); // 384
	ValidateGrowSize(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Componen this); // 475
	CUtlMemory(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Componen this,
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Comp this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Comp this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Componen this); // 384
	CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::CHalfEdgeComponentList(); // 991
	CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::CHalfEdgeMesh(); // 26
	{
		COpMeshBuilder builder; // 37
		SetLessFunc(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>: this,
				CHullIVR* lessfunc);  // 35
		{
			int a; // 39
		}
		ConVar::GetFloat(); // 45
		{
			entry_t* table; // 896
			CUtlMemory<CUtlHashtableEntry<qhVertex::Base(); // 896
			{
				int i; // 897
				CUtlMemory<CUtlHashtableEntry<qhVertex::Count(); // 897
				CUtlHashtableEntry<qhVertex::IsValid(); // 899
				CUtlHashtableEntry<qhVertex::MarkInvalid(); // 901
				Destruct<CUtlKeyValuePair<qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t> >(CUtlKeyValuePair<qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex pMemory); // 902
			}
		}
		CUtlHashtable<qhVertex::RemoveAll(); // 188
		ValidateAlignment<CUtlHashtableEntry<qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t> >(void); // 508
		CUtlMemory<CUtlHashtableEntry<qhVertex::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlHashtableEntry<qhVertex::Purge(); // 903
		CUtlMemory<CUtlHashtableEntry<qhVertex::Purge(); // 510
		CUtlMemory<CUtlHashtableEntry<qhVertex::~CUtlMemory(); // 188
		CUtlHashtable<qhVertex::~CUtlHashtable(); // 145
		COpMeshBuilder::~COpMeshBuilder(); // 47
	}
	RnHullSimplificationParams_t::RnHullSimplificationParams_t(
					HullSimplificationAlgorithm_t nAlgo);  // 26
	ValidateGrowSize(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this); // 475
	CUtlMemory(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
			int growSize,
			int initCapacity);  // 419
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
			int growSize,
			int initCapacity);  // 96
	CUtlPriorityQueue(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>: this,
				int growSize,
				int initSize,
				CHullIVR* lessfunc);  // 26
} /* size: 738, inline expansions: 43 (1242 bytes) */

// <05E80855> meshutils/hullivr.cpp:26
// variables: 2
void CHullIVR::CHullIVR(const RnHullSimplificationParams_t* pSimplificationParams, const qhConvex* pSource)
{
	{
		COpMeshBuilder builder; // 37
		{
			int a; // 39
		}
	}
} /* size: 0 */

// <05E801F0> meshutils/hullivr.cpp:49
// variables: 4
// function calls: 29
void CHullIVR::~CHullIVR()
{
	{
		VertexHandle_t vh; // 51
		{
			HullIVRHole_t *& refPtr; // 53
		}
	}
	{
		VertexHandle_t vh; // 51
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_ this); // 443
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>:: this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_ this,
				int i);  // 446
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::InvalidHandle(); // 452
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Next(
			ComponentHandle_t handle);  // 439
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Next(
			ComponentHandle_t handle);  // 435
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::First(); // 1194
		CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::FirstVertex(); // 51
		CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::InvalidVertex(); // 51
		ComponentHandleWithListPointer_t::operator!=(
				const ComponentHandleWithListPointer_t& src);  // 51
		{
			HullIVRHole_t *& refPtr; // 53
			operator delete(void* pThat); // 54
		}
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_ this); // 443
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>:: this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_ this,
				int i);  // 446
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::InvalidHandle(); // 452
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Next(
			ComponentHandle_t handle);  // 439
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Next(
			ComponentHandle_t handle);  // 1204
		CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::NextVertex(
				VertexHandle_t hVertex);  // 51
	}
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 1798
	IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>:: this); // 905
	Purge(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this); // 903
	Purge(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this); // 1799
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>(void); // 508
	Purge(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this); // 510
	~CUtlMemory(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 410
	~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this); // 38
	~CUtlPriorityQueue(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>: this); // 57
} /* size: 514, inline expansions: 11 (222 bytes) */

// <05E801B3> meshutils/hullivr.cpp:49
// variables: 2
void CHullIVR::~CHullIVR()
{
	{
		VertexHandle_t vh; // 51
		{
			HullIVRHole_t *& refPtr; // 53
		}
	}
} /* size: 0 */

// <05E7F72D> meshutils/hullivr.cpp:60
// variables: 6
// function calls: 40
void CHullIVR::CreateConvex()
{
	int nVerts; // 62
	CUtlVector<qhVector3, CUtlMemory<qhVector3, int> > verts; // 63
	qhConvex* pOut; // 74
	{
		VertexHandle_t vh; // 66
		{
			qhVector3* pOut; // 68
			const Vector& vIn; // 69
			CUtlMemory<qhVector3, int>::Grow(
				int num);  // 806
			CUtlVectorBase<qhVector3, CUtlMemory<qhVector3, int> >::GrowMemory(
					int num);  // 1145
			CUtlVectorBase<qhVector3, CUtlMemory<qhVector3, int> >::AddToTail(); // 1156
			CUtlMemory<qhVector3, int>::operator[](
					int i);  // 602
			CUtlVectorBase<qhVector3, CUtlMemory<qhVector3, int> >::Element(
				int i);  // 1156
			CUtlVectorBase<qhVector3, CUtlMemory<qhVector3, int> >::AddToTailGetPtr(); // 68
		}
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_ this); // 443
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>:: this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_ this,
				int i);  // 446
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::InvalidHandle(); // 452
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Next(
			ComponentHandle_t handle);  // 439
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Next(
			ComponentHandle_t handle);  // 435
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::First(); // 1194
		CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::FirstVertex(); // 66
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_ this); // 443
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>:: this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_ this,
				int i);  // 446
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::InvalidHandle(); // 452
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Next(
			ComponentHandle_t handle);  // 439
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Next(
			ComponentHandle_t handle);  // 1204
		CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::NextVertex(
				VertexHandle_t hVertex);  // 66
		ComponentHandleWithListPointer_t::operator!=(
				const ComponentHandleWithListPointer_t& src);  // 66
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_ this); // 575
	CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Count(); // 1151
	CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::GetNumVertices(); // 62
	CUtlMemory<qhVector3, int>::ValidateGrowSize(); // 475
	CUtlMemory<qhVector3, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<qhVector3, CUtlMemory<qhVector3, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<qhVector3, CUtlMemory<qhVector3, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<qhVector3, CUtlMemory<qhVector3, int> >::CUtlVector(); // 63
	CUtlMemory<qhVector3, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<qhVector3, CUtlMemory<qhVector3, int> >::EnsureCapacity(
			int num);  // 64
	CUtlMemory<qhVector3, int>::Purge(); // 903
	CUtlMemory<qhVector3, int>::Purge(); // 1799
	CUtlVectorBase<qhVector3, CUtlMemory<qhVector3, int> >::Purge(); // 560
	ValidateAlignment<qhVector3>(void); // 508
	CUtlMemory<qhVector3, int>::Purge(); // 510
	CUtlMemory<qhVector3, int>::~CUtlMemory(); // 562
	CUtlVectorBase<qhVector3, CUtlMemory<qhVector3, int> >::~CUtlVectorBase(); // 410
	CUtlVector<qhVector3, CUtlMemory<qhVector3, int> >::~CUtlVector(); // 83
} /* size: 800, variables: 3, inline expansions: 18 (207 bytes) */

// <05E7F587> meshutils/hullivr.cpp:87
// variables: 3
// function calls: 4
void CHullIVR::CompareCost(const VertexHandle_t& vh0, const VertexHandle_t& vh1)
{
	const HullIVRCollapseCost_t& l; // 89
	const HullIVRCollapseCost_t& r; // 89
	float flDiff; // 91
	ConVar::GetInt(); // 93
	HullIVRCollapseCost_t::GetSilhouetteLossAngle(); // 95
	HullIVRCollapseCost_t::GetSilhouetteLossAngle(); // 95
	RAD2DEG(float flRadians); // 95
} /* size: 255, variables: 3, inline expansions: 4 (28 bytes) */

// <05E3B5AB> meshutils/hullivr.cpp:112
// member functions: 4
// member variables: 2
// class size: 8
class CMinAngleSinCos {
	/* meshutils/hullivr.cpp:115 */
	void AppendSinCos(CMinAngleSinCos* , float, float);
	/* meshutils/hullivr.cpp:123 */
	float GetBestAngle(CMinAngleSinCos* );
protected:
	float m_flBestCosine; /* 0 4 */
	float m_flBestSine; /* 4 4 */
	void AppendSinCos(class CMinAngleSinCos *, float, float); /* linkage=_ZN15CMinAngleSinCos12AppendSinCosEff */
	float GetBestAngle(class CMinAngleSinCos *); /* linkage=_ZN15CMinAngleSinCos12GetBestAngleEv */
};

// <05E7F556> meshutils/hullivr.cpp:115
inline void CMinAngleSinCos::AppendSinCos(float flSine, float flCosine)
{
} /* size: 0 */

// <05E7F53D> meshutils/hullivr.cpp:123
inline void CMinAngleSinCos::GetBestAngle()
{
} /* size: 0 */

// <05E7E811> meshutils/hullivr.cpp:133
void CHullIvrVertRing::~CHullIvrVertRing()
{
} /* size: 0 */

// <05E7E7F5> meshutils/hullivr.cpp:133
inline void CHullIvrVertRing::~CHullIvrVertRing()
{
} /* size: 0 */

// <05E3C712> meshutils/hullivr.cpp:133
// member functions: 12
// member variables: 2
// class size: 232
class CHullIvrVertRing : public CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, 12> {
public:
	/* class CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, 12> <ancestor>; */ /* 0 224 */
private:
	CHullIVR * m_pHullIvr; /* 224 8 */
	/* meshutils/hullivr.cpp:137 */
	void CHullIvrVertRing(CHullIvrVertRing* , CHullIVR* );
	/* meshutils/hullivr.cpp:138 */
	Vector GetNormal(const CHullIvrVertRing* , int, const Vector& );
	/* meshutils/hullivr.cpp:145 */
	Vector GetBisector(CHullIvrVertRing* , int, const Vector& );
	/* meshutils/hullivr.cpp:152 */
	void AppendSilhouette(CHullIvrVertRing* , int, Vector, Vector, CMinAngleSinCos& );
	/* meshutils/hullivr.cpp:181 */
	int Prev(const CHullIvrVertRing* , int);
	void ~CHullIvrVertRing(CHullIvrVertRing* );
	void CHullIvrVertRing(class CHullIvrVertRing *, class CHullIVR *); /* linkage=_ZN16CHullIvrVertRingC4EP8CHullIVR */
	class Vector GetNormal(const class CHullIvrVertRing  *, int, const class Vector  &); /* linkage=_ZNK16CHullIvrVertRing9GetNormalEiRK6Vector */
	class Vector GetBisector(class CHullIvrVertRing *, int, const class Vector  &); /* linkage=_ZN16CHullIvrVertRing11GetBisectorEiRK6Vector */
	void AppendSilhouette(class CHullIvrVertRing *, int, class Vector, class Vector, class CMinAngleSinCos &); /* linkage=_ZN16CHullIvrVertRing16AppendSilhouetteEi6VectorS0_R15CMinAngleSinCos */
	int Prev(const class CHullIvrVertRing  *, int); /* linkage=_ZNK16CHullIvrVertRing4PrevEi */
	void ~CHullIvrVertRing(class CHullIvrVertRing *); /* linkage=_ZN16CHullIvrVertRingD4Ev */
} __attribute__((__aligned__(8)));

// <05E7F4ED> meshutils/hullivr.cpp:137
void CHullIvrVertRing::CHullIvrVertRing(CHullIVR* pHullIvr)
{
} /* size: 0 */

// <05E7F4C8> meshutils/hullivr.cpp:137
inline void CHullIvrVertRing::CHullIvrVertRing(CHullIVR* pHullIvr)
{
} /* size: 0 */

// <05E7F477> meshutils/hullivr.cpp:138
// variables: 3
inline void CHullIvrVertRing::GetNormal(int i0, const Vector& vPeak)
{
	int i1; // 140
	Vector v1; // 141
	Vector v0; // 142
} /* size: 0, variables: 3 */

// <05E7F426> meshutils/hullivr.cpp:145
// variables: 3
inline void CHullIvrVertRing::GetBisector(int i0, const Vector& vPeak)
{
	int i1; // 147
	Vector v1; // 148
	Vector v0; // 149
} /* size: 0, variables: 3 */

// <05E7E84C> meshutils/hullivr.cpp:152
// variables: 14
// function calls: 50
void CHullIvrVertRing::AppendSilhouette(int nPlane, Vector vPeak, Vector vGjkNormal, CMinAngleSinCos& outAngle)
{
	Vector vPlaneBisector; // 154
	float flBisectY; // 155
	float flBisectX; // 156
	Vector vTangent; // 157
	float flTangentLen; // 159
	{
		VertexHandle_t hRingVert; // 164
		CHullIvrVertRing& __for_range; // 23311
		iterator __for_begin; // 21195
		iterator __for_end; // 21195
		{
			Vector vSpoke; // 166
			float flSpokeY; // 167
			float flSpokeX; // 167
			float flSpokeLen; // 168
			{
				float flCosine; // 171
				CMinAngleSinCos::AppendSinCos(
						float flSine,
						float flCosine);  // 172
			}
			CMinAngleSinCos::AppendSinCos(
					float flSine,
					float flCosine);  // 177
			CHullIVR::GetPos(
				const VertexHandle_t& vh);  // 166
			Vector::Vector(); // 1443
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::operator-(
					const Vector& v);  // 166
			DotProduct(const Vector& a,
					const Vector& b);  // 167
			DotProduct(const Vector& a,
					const Vector& b);  // 167
		}
		Base(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this); // 112
		Base(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 102
		begin(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 164
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_ this); // 104
		end(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 164
	}
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
			int i);  // 149
	CHullIVR::GetPos(
		const VertexHandle_t& vh);  // 149
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_ this); // 183
	CHullIvrVertRing::Prev(
		int i0);  // 147
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
			int i);  // 148
	CHullIVR::GetPos(
		const VertexHandle_t& vh);  // 148
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 148
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 149
	Vector::Normalized(); // 150
	Vector::Normalized(); // 150
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 150
	Vector::Normalized(); // 150
	CHullIvrVertRing::GetBisector(
			int i0,
			const Vector& vPeak);  // 154
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 155
	DotProduct(const Vector& a,
			const Vector& b);  // 155
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 157
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 157
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 159
	Vector::operator/=(
			float fl);  // 162
} /* size: 1214, variables: 5, inline expansions: 37 (1016 bytes) */

// <05E7E828> meshutils/hullivr.cpp:181
inline void CHullIvrVertRing::Prev(int i0)
{
} /* size: 0 */

// <05E7A2B1> meshutils/hullivr.cpp:188
// variables: 33
// function calls: 290
void CHullIVR::Revaluate(const VertexHandle_t& vhReval)
{
	HullIVRVertexData_t* pPeakData; // 190
	CHullIvrVertRing ring; // 194
	const char   __FUNCTION__; // 60146
	Tri_t* pTriEnd; // 209
	HullIVRCollapseCost_t& cost; // 212
	const VertexHandle_t* pVerts; // 229
	CUtlVectorFixedGrowable<Vector, 8> arrHoleVerts; // 230
	CGJKShapeProxy peakProxy; // 235
	CGJKShapeProxy ringProxy; // 235
	DistanceQueryResult_t query; // 237
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 206
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 210
	}
	{
		int i0; // 219
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_ this); // 219
		clamp<float, float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 221
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>:: this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_ this,
				int i);  // 141
		CHullIVR::GetPos(
			const VertexHandle_t& vh);  // 141
		CHullIvrVertRing::Prev(
			int i0);  // 140
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 141
		CHullIVR::GetPos(
			const VertexHandle_t& vh);  // 142
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>:: this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_ this,
				int i);  // 142
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 142
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1508
		CrossProduct(const Vector& a,
				const Vector& b);  // 143
		Vector::Normalized(); // 143
		CHullIvrVertRing::GetNormal(
				int i0,
				const Vector& vPeak);  // 221
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_ this); // 183
		CHullIvrVertRing::Prev(
			int i0);  // 221
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>:: this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_ this,
				int i);  // 141
		CHullIVR::GetPos(
			const VertexHandle_t& vh);  // 141
		CHullIvrVertRing::Prev(
			int i0);  // 140
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>:: this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_ this,
				int i);  // 142
		CHullIVR::GetPos(
			const VertexHandle_t& vh);  // 142
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 141
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 142
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1508
		CrossProduct(const Vector& a,
				const Vector& b);  // 143
		Vector::Normalized(); // 143
		CHullIvrVertRing::GetNormal(
				int i0,
				const Vector& vPeak);  // 221
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1508
		CrossProduct(const Vector& a,
				const Vector& b);  // 221
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 221
	}
	{
		int v; // 232
		CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 8, int> >::Count(); // 232
		CHullIVR::GetPos(
			const VertexHandle_t& vh);  // 233
		CUtlMemory<Vector, int>::operator[](
				int i);  // 588
		CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 8, int> >::operator[](
				int i);  // 233
		Vector::operator=(
				const Vector& vOther);  // 233
	}
	{
		CMinAngleSinCos oldAngle; // 242
		CMinAngleSinCos newAngle; // 242
		Vector vGjkDrop; // 243
		Vector vGjkNormal; // 244
		float flOldAngle; // 256
		float flNewAngle; // 257
		{
			int nPlane; // 249
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_ this); // 249
		}
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 243
		Vector::Normalized(); // 244
		CMinAngleSinCos::GetBestAngle(); // 256
		CMinAngleSinCos::GetBestAngle(); // 257
	}
	{
		int nHoleTri; // 278
		{
			const Tri_t& t; // 280
			Vector v0; // 282
			Vector v1; // 283
			Vector v2; // 284
			float flVolume; // 285
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 282
			HullIVRHole_t::GetTris(); // 280
			CHullIVR::GetPos(
				const VertexHandle_t& vh);  // 282
			CHullIVR::GetPos(
				const VertexHandle_t& vh);  // 283
			Vector::Vector(); // 1443
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::operator-(
					const Vector& v);  // 283
			CHullIVR::GetPos(
				const VertexHandle_t& vh);  // 284
			Vector::Vector(); // 1443
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::operator-(
					const Vector& v);  // 284
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1508
			CrossProduct(const Vector& a,
					const Vector& b);  // 285
			DotProduct(const Vector& a,
					const Vector& b);  // 285
		}
		HullIVRHole_t::NumTris(); // 278
	}
	CUtlMemory(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
			ComponentHandleWithListPointer_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	EnsureCapacity(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
			int num);  // 199
	CUtlMemoryFixedGrowable_Base(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>: this,
					ComponentHandleWithListPointer_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t(const AlignedByteArrayExplicit_t<12, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t this); // 1597
	AlignedByteArray_t(const AlignedByteArray_t<12, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Verte this); // 228
	Base(const AlignedByteArrayExplicit_t<12, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t this); // 231
	CUtlMemoryFixedGrowable(const CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vert this,
				int nGrowSize,
				int nInitSize);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable(const CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vert this,
				int growSize);  // 137
	CHullIvrVertRing::CHullIvrVertRing(
			CHullIVR* pHullIvr);  // 194
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_ this); // 541
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>:: this,
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_ this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 476
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>:: this,
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_ this,
			int i);  // 480
	CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::GetComponent(
			ComponentHandle_t handle);  // 1369
	CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex(
		VertexHandle_t vertexHandle);  // 6983
	IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>:: this); // 888
	EnsureCapacity(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
			int num);  // 1006
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 1024
	EnsureCapacity(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
			int num);  // 6991
	{
		const HalfEdge_t* pEdge; // 7002
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdg this); // 541
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t> this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdg this,
				int i);  // 546
		ComponentHandleWithListPointer_t::operator!=(
				const ComponentHandleWithListPointer_t& src);  // 547
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::GetComponentIndex(
					ComponentHandle_t handle);  // 476
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t> this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdg this,
				int i);  // 480
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::GetComponent(
				ComponentHandle_t handle);  // 1385
		CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Edge(
			HalfEdgeHandle_t edgeHandle);  // 7002
		NumAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>:: this); // 1196
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
				int i);  // 602
		Element(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
			int i);  // 1201
		CopyConstruct<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory,
																const ComponentHandleWithListPointer_t& src);  // 1201
		Base(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this); // 112
		Base(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 368
		ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 824
		GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
				int num);  // 1198
		AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
				const ComponentHandleWithListPointer_t& src);  // 7003
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdg this); // 541
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t> this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdg this,
				int i);  // 546
		ComponentHandleWithListPointer_t::operator!=(
				const ComponentHandleWithListPointer_t& src);  // 547
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::GetComponentIndex(
					ComponentHandle_t handle);  // 476
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t> this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdg this,
				int i);  // 480
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::GetComponent(
				ComponentHandle_t handle);  // 1385
		CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Edge(
			HalfEdgeHandle_t edgeHandle);  // 7004
	}
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 7006
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_ this); // 7008
	{
	}
	CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::GetVerticesConnectedToVertexByEdge<CHullIvrVertRing>(
								VertexHandle_t hVertex,
								CHullIvrVertRing& vertices);  // 195
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_ this); // 206
	HullIVRHole_t::NumVerts(); // 192
	{
		int i; // 202
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_ this); // 202
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>:: this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_ this,
				int i);  // 203
	}
	operator delete(void* pThat); // 199
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_ this); // 200
	{
	}
	operator new(size_t,
			int nVerts);  // 200
	HullIVRVertexData_t::SetHoleVerts<CHullIvrVertRing>(
					const CHullIvrVertRing& verts);  // 207
	HullIVRHole_t::GetTris(); // 209
	Base(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 209
	CHullIVR::Triangulate(
			const VertexHandle_t* pVerts,
			int nVerts,
			Tri_t* pTrisOut);  // 209
	HullIVRHole_t::GetTris(); // 91
	HullIVRHole_t::NumTris(); // 91
	HullIVRHole_t::GetTrisEnd(); // 210
	CUtlMemory<Vector, int>::CUtlMemory(
			Vector* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<Vector, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<Vector, int>::CUtlMemoryFixedGrowable_Base(
					Vector* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<8, Vector, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<8, Vector>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<8, Vector, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<Vector, 8, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 8, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 8, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<Vector, 8>::CUtlVectorFixedGrowable(
				int growSize);  // 230
	HullIVRHole_t::NumVerts(); // 231
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 8, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlMemory<Vector, int>::Base(); // 112
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 8, int> >::Base(); // 368
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 8, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 8, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 8, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
	}
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 8, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 8, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 8, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 8, int> >::SetCount(
		int count);  // 231
	CGJKShapeProxy::CGJKShapeProxy(
			int nVertexCount,
			const Vector* pVertexBuffer,
			float flScale);  // 235
	CGJKShapeProxy::CGJKShapeProxy(
			int nVertexCount,
			const Vector* pVertexBuffer,
			float flScale);  // 235
	CUtlMemory<Vector, int>::Base(); // 112
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 8, int> >::Base(); // 235
	NumAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>:: this); // 1143
	Base(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 824
	GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
			int num);  // 1145
	AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 228
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
			int i);  // 229
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
			int i);  // 230
	SetIndex(const VertexHandle_t& heapElement,
		int nNewIndex,
		CHullIVR* pMesh);  // 230
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_ this); // 71
	Count(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vert this); // 207
	{
		int parent; // 213
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
				int i);  // 238
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
				int i);  // 239
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
				int i);  // 240
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
				int i);  // 242
		SetIndex(const VertexHandle_t& heapElement,
			int nNewIndex,
			CHullIVR* pMesh);  // 242
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
				int i);  // 243
		SetIndex(const VertexHandle_t& heapElement,
			int nNewIndex,
			CHullIVR* pMesh);  // 243
		Swap(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>: this,
			int index1,
			int index2);  // 218
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
				int i);  // 214
		VertexOp_t::operator(
				const VertexHandle_t& lhs,
				const VertexHandle_t& rhs,
				CHullIVR* pMesh);  // 214
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
				int i);  // 214
	}
	PercolateUp(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>: this,
			int index);  // 205
	PercolateUp(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>: this,
			int index);  // 232
	Insert(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>: this,
		const ComponentHandleWithListPointer_t& element);  // 295
	{
		int child; // 174
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
				int i);  // 178
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
				int i);  // 178
		VertexOp_t::operator(
				const VertexHandle_t& lhs,
				const VertexHandle_t& rhs,
				CHullIVR* pMesh);  // 178
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
				int i);  // 238
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
				int i);  // 239
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
				int i);  // 240
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
				int i);  // 242
		SetIndex(const VertexHandle_t& heapElement,
			int nNewIndex,
			CHullIVR* pMesh);  // 242
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
				int i);  // 243
		SetIndex(const VertexHandle_t& heapElement,
			int nNewIndex,
			CHullIVR* pMesh);  // 243
		Swap(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>: this,
			int index1,
			int index2);  // 197
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
				int i);  // 189
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
				int i);  // 189
		VertexOp_t::operator(
				const VertexHandle_t& lhs,
				const VertexHandle_t& rhs,
				CHullIVR* pMesh);  // 189
	}
	PercolateDown(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>: this,
			int index);  // 138
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_ this); // 71
	Count(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vert this); // 207
	{
		int parent; // 213
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
				int i);  // 238
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
				int i);  // 239
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
				int i);  // 240
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
				int i);  // 242
		SetIndex(const VertexHandle_t& heapElement,
			int nNewIndex,
			CHullIVR* pMesh);  // 242
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
				int i);  // 243
		SetIndex(const VertexHandle_t& heapElement,
			int nNewIndex,
			CHullIVR* pMesh);  // 243
		Swap(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>: this,
			int index1,
			int index2);  // 218
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
				int i);  // 214
		VertexOp_t::operator(
				const VertexHandle_t& lhs,
				const VertexHandle_t& rhs,
				CHullIVR* pMesh);  // 214
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
				int i);  // 214
	}
	PercolateUp(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>: this,
			int index);  // 205
	PercolateUp(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>: this,
			int index);  // 145
	RevaluateElement(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>: this,
			const int  nStartingIndex);  // 297
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 8, int> >::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<8, Vector, 4>::Base(); // 237
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
	CUtlMemoryFixedGrowable<Vector, 8, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<Vector, int>::Base(); // 112
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 8, int> >::Base(); // 368
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 8, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 8, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<Vector, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<Vector, 8, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 8, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<Vector, 8>::~CUtlVectorFixedGrowable(); // 298
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 1798
	Base(const AlignedByteArrayExplicit_t<12, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t this); // 237
	IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>:: this); // 577
	ConvertToExternalMemory(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
				ComponentHandleWithListPointer_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	Purge_FixedGrowable(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>: this,
				ComponentHandleWithListPointer_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	Purge_FixedGrowable(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>: this,
				ComponentHandleWithListPointer_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	Purge(const CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vert this,
		int numElements);  // 1799
	Base(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 1800
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>(void); // 508
	Purge(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this); // 903
	Purge(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this); // 510
	~CUtlMemory(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this); // 191
	~CUtlMemoryFixedGrowable_Base(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>: this); // 223
	~CUtlMemoryFixedGrowable(const CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vert this); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 478
	~CUtlVectorFixedGrowable(const CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vert this); // 133
	CHullIvrVertRing::~CHullIvrVertRing(); // 298
} /* size: 0, variables: 10, inline expansions: 126 (7143 bytes) */

// <05E86A74> meshutils/hullivr.cpp:309
// variables: 2
void CHullIVR::Triangulate(const VertexHandle_t* pVerts, int nVerts, Tri_t* pTrisOut)
{
	int nBestIndex; // 323
	Tri_t* pTrisRunning; // 360
} /* size: 0, variables: 2 */

// <05E85FD1> meshutils/hullivr.cpp:309
// variables: 14
// function calls: 38
void CHullIVR::Triangulate(const VertexHandle_t* pVerts, int nVerts, Tri_t* pTrisOut)
{
	int nBestIndex; // 323
	Tri_t* pTrisRunning; // 360
	{
		CUtlVector<Vector, CUtlMemory<Vector, int> > pPos; // 327
		const Vector& vA; // 331
		const Vector& vB; // 331
		float flBestCover; // 332
		CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
		CUtlMemory<Vector, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 327
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
				int num);  // 784
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowVector(
				int num);  // 1445
		{
			int i; // 1451
		}
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddMultipleToTail(
					int num);  // 1319
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::SetCount(
			int count);  // 328
		{
			int iv; // 329
			CHullIVR::GetPos(
				const VertexHandle_t& vh);  // 330
			Vector::operator=(
					const Vector& vOther);  // 330
		}
		CUtlMemory<Vector, int>::operator[](
				int i);  // 588
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
				int i);  // 331
		{
			int i0; // 333
			{
				const Vector& v0; // 335
				Vector vNormal; // 336
				float flWorstProtrusion; // 337
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::Vector(); // 1443
				Vector::operator-(
						const Vector& v);  // 336
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::Vector(); // 1443
				Vector::operator-(
						const Vector& v);  // 336
				Vector::Normalized(); // 336
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 1508
				CrossProduct(const Vector& a,
						const Vector& b);  // 336
				{
					int it; // 338
					{
						float flProtrusion; // 342
						Vector::Vector(); // 1443
						VectorSubtract(const Vector& a,
								const Vector& b,
								Vector& c);  // 1444
						Vector::operator-(
								const Vector& v);  // 342
						DotProduct(const Vector& a,
								const Vector& b);  // 342
					}
				}
			}
		}
		CUtlMemory<Vector, int>::Purge(); // 903
		CUtlMemory<Vector, int>::Purge(); // 1799
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
		ValidateAlignment<Vector>(void); // 508
		CUtlMemory<Vector, int>::Purge(); // 510
		CUtlMemory<Vector, int>::~CUtlMemory(); // 562
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
		CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 358
	}
	CHullIVR::Triangulate(
			const VertexHandle_t* pVerts,
			int nVerts,
			Tri_t* pTrisOut);  // 368
	{
	}
	CHullIVR::Triangulate(
			const VertexHandle_t* pVerts,
			int nVerts,
			Tri_t* pTrisOut);  // 363
	{
	}
} /* size: 0, variables: 2, inline expansions: 2 (180 bytes) */

// <05E7A108> meshutils/hullivr.cpp:309
// variables: 16
void CHullIVR::Triangulate(const VertexHandle_t* pVerts, int nVerts, Tri_t* pTrisOut)
{
	int nBestIndex; // 323
	Tri_t* pTrisRunning; // 360
	const char   __FUNCTION__; // 60200
	{
		CUtlVector<Vector, CUtlMemory<Vector, int> > pPos; // 327
		const Vector& vA; // 331
		const Vector& vB; // 331
		float flBestCover; // 332
		{
			int iv; // 329
		}
		{
			int i0; // 333
			{
				const Vector& v0; // 335
				Vector vNormal; // 336
				float flWorstProtrusion; // 337
				{
					int it; // 338
					{
						float flProtrusion; // 342
					}
				}
			}
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 364
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 369
	}
} /* size: 0, variables: 3 */

// <05E79406> meshutils/hullivr.cpp:376
// variables: 13
// function calls: 51
void CHullIVR::GetFaceOuterProduct(FaceHandle_t fh)
{
	CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, 8> verts; // 378
	Vector vCenter; // 382
	Vector vNormal; // 387
	Vector vPrev; // 387
	{
		VertexHandle_t vh; // 383
		CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, 8>& __for_range; // 19814
		iterator __for_begin; // 29984
		iterator __for_end; // 29984
		Base(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this); // 112
		Base(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 102
		begin(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 383
		end(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 383
		CHullIVR::GetPos(
			const VertexHandle_t& vh);  // 384
		Vector::operator+=(
				const Vector& v);  // 384
	}
	{
		VertexHandle_t vh; // 388
		CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, 8>& __for_range; // 19814
		iterator __for_begin; // 29984
		iterator __for_end; // 29984
		{
			Vector vNext; // 390
			CHullIVR::GetPos(
				const VertexHandle_t& vh);  // 390
			Vector::Vector(); // 1443
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::operator-(
					const Vector& v);  // 390
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1508
			CrossProduct(const Vector& a,
					const Vector& b);  // 391
			Vector::operator+=(
					const Vector& v);  // 391
		}
	}
	CUtlMemory(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
			ComponentHandleWithListPointer_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	EnsureCapacity(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
			int num);  // 199
	CUtlMemoryFixedGrowable_Base(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>: this,
					ComponentHandleWithListPointer_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t(const AlignedByteArrayExplicit_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t> this); // 1597
	AlignedByteArray_t(const AlignedByteArray_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex this); // 228
	Base(const AlignedByteArrayExplicit_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t> this); // 231
	CUtlMemoryFixedGrowable(const CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vert this,
				int nGrowSize,
				int nInitSize);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable(const CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vert this,
				int growSize);  // 378
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_ this); // 380
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 1798
	Base(const AlignedByteArrayExplicit_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t> this); // 237
	IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>:: this); // 577
	ConvertToExternalMemory(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
				ComponentHandleWithListPointer_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	Purge_FixedGrowable(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>: this,
				ComponentHandleWithListPointer_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	Purge_FixedGrowable(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>: this,
				ComponentHandleWithListPointer_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	Purge(const CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vert this,
		int numElements);  // 1799
	Base(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 1800
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>(void); // 508
	Purge(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this); // 903
	Purge(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this); // 510
	~CUtlMemory(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this); // 191
	~CUtlMemoryFixedGrowable_Base(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>: this); // 223
	~CUtlMemoryFixedGrowable(const CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vert this); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 478
	~CUtlVectorFixedGrowable(const CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vert this); // 394
	Vector::operator/=(
			float fl);  // 385
	CHullIVR::GetPos(
		const VertexHandle_t& vh);  // 387
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
			int i);  // 630
	Tail(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 387
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 387
	Vector::Normalized(); // 393
} /* size: 921, variables: 4, inline expansions: 38 (1271 bytes) */

// <05E77F40> meshutils/hullivr.cpp:396
// variables: 8
// function calls: 90
void CHullIVR::ReduceVertices()
{
	int nReducedVerts; // 406
	{
		VertexHandle_t vh; // 400
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_ this); // 443
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>:: this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_ this,
				int i);  // 446
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::InvalidHandle(); // 452
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Next(
			ComponentHandle_t handle);  // 439
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Next(
			ComponentHandle_t handle);  // 435
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::First(); // 1194
		CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::FirstVertex(); // 400
		ComponentHandleWithListPointer_t::operator!=(
				const ComponentHandleWithListPointer_t& src);  // 400
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_ this); // 443
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>:: this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_ this,
				int i);  // 446
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::InvalidHandle(); // 452
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Next(
			ComponentHandle_t handle);  // 439
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Next(
			ComponentHandle_t handle);  // 1204
		CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::NextVertex(
				VertexHandle_t hVertex);  // 400
	}
	{
		int numFaces; // 409
		int numVerts; // 412
		VertexHandle_t vh; // 416
		HullIVRVertexData_t* pData; // 417
		DEG2RAD(float flDegrees); // 178
		CHullIVR::GetAcceptableSilhouetteLossAngle(); // 434
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t> this); // 575
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Count(); // 1184
		CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::GetNumFaces(); // 409
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_ this); // 575
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Count(); // 1151
		CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::GetNumVertices(); // 412
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>:: this,
				int i);  // 609
		Element(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_ this,
			int i);  // 54
		ElementAtHead(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vert this); // 416
		SetIndex(const VertexHandle_t& heapElement,
			int nNewIndex,
			CHullIVR* pMesh);  // 109
		{
			const bool  bNotLast; // 1578
			operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
					int i);  // 602
			Element(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
				int i);  // 1584
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 1584
		}
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
				int i);  // 602
		Element(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
			int i);  // 1575
		Destruct<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory); // 1575
		FastRemove(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
				int elem);  // 110
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_ this); // 71
		Count(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vert this); // 167
		{
			int child; // 174
			operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
					int i);  // 588
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
					int i);  // 178
			operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
					int i);  // 588
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
					int i);  // 178
			VertexOp_t::operator(
					const VertexHandle_t& lhs,
					const VertexHandle_t& rhs,
					CHullIVR* pMesh);  // 178
			operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
					int i);  // 588
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
					int i);  // 238
			operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
					int i);  // 588
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
					int i);  // 239
			operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
					int i);  // 588
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
					int i);  // 240
			operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
					int i);  // 588
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
					int i);  // 242
			SetIndex(const VertexHandle_t& heapElement,
				int nNewIndex,
				CHullIVR* pMesh);  // 242
			operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
					int i);  // 588
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
					int i);  // 243
			SetIndex(const VertexHandle_t& heapElement,
				int nNewIndex,
				CHullIVR* pMesh);  // 243
			Swap(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>: this,
				int index1,
				int index2);  // 197
			operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
					int i);  // 588
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
					int i);  // 189
			operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
					int i);  // 588
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
					int i);  // 189
			VertexOp_t::operator(
					const VertexHandle_t& lhs,
					const VertexHandle_t& rhs,
					CHullIVR* pMesh);  // 189
		}
		PercolateDown(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>: this,
				int index);  // 117
		SetIndex(const VertexHandle_t& heapElement,
			int nNewIndex,
			CHullIVR* pMesh);  // 114
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
				int i);  // 114
		RemoveAtHead(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>: this); // 418
		HullIVRHole_t::NumVerts(); // 421
		HullIVRCollapseCost_t::GetSilhouetteLossAngle(); // 434
		CHullIVR::GetAcceptableSilhouetteLossDist(); // 435
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_ this); // 575
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Count(); // 1151
		CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::GetNumVertices(); // 437
		RnHullSimplificationParams_t::GetMaxRuntimeVerts(); // 437
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t> this); // 575
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Count(); // 1184
		CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::GetNumFaces(); // 438
		RnHullSimplificationParams_t::GetMaxRuntimeFaces(); // 438
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdg this); // 575
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::Count(); // 1161
		CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::GetNumHalfEdges(); // 439
		RnHullSimplificationParams_t::GetMaxRuntimeEdges(); // 439
	}
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 1798
	IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>:: this); // 905
	Purge(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this); // 903
	Purge(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this); // 1799
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 1800
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 77
	Purge(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>: this); // 398
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_ this); // 71
	Count(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vert this); // 407
} /* size: 1429, variables: 1, inline expansions: 9 (261 bytes) */

// <05E77402> meshutils/hullivr.cpp:453
// variables: 11
// function calls: 37
void CHullIVR::ReduceVertex(const VertexHandle_t vh)
{
	HullIVRVertexData_t* pPeakData; // 458
	HullIVRHole_t* pHole; // 459
	CUtlVector<HullIVRHole_t::Tri_t*, CUtlMemory<HullIVRHole_t::Tri_t*, int> > failedTris; // 472
	{
		int nTri; // 473
		{
			Tri_t* pTri; // 475
			FaceAddInfo_t addInfo; // 476
			HullIVRHole_t::GetTris(); // 475
			FullEdgeHandle_t::FullEdgeHandle_t(); // 236
			FullEdgeHandle_t::FullEdgeHandle_t(); // 236
			FaceAddInfo_t::FaceAddInfo_t(); // 476
			CUtlMemory<HullIVRHole_t::Tri_t::operator[](
					int i);  // 602
			CUtlVectorBase<HullIVRHole_t::Tri_t::Element(
				int i);  // 1201
			CopyConstruct<HullIVRHole_t::Tri_t*>(Tri_t** pMemory,
								Tri_t* const& src);  // 1201
			CUtlMemory<HullIVRHole_t::Tri_t::Grow(
				int num);  // 806
			CUtlVectorBase<HullIVRHole_t::Tri_t::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<HullIVRHole_t::Tri_t::AddToTail(
					Tri_t* const& src);  // 480
		}
		HullIVRHole_t::NumTris(); // 473
	}
	{
		int i; // 488
		{
			FaceAddInfo_t addInfo; // 490
			FullEdgeHandle_t::FullEdgeHandle_t(); // 236
			FullEdgeHandle_t::FullEdgeHandle_t(); // 236
			FaceAddInfo_t::FaceAddInfo_t(); // 490
			CUtlMemory<HullIVRHole_t::Tri_t::operator[](
					int i);  // 588
			CUtlVectorBase<HullIVRHole_t::Tri_t::operator[](
					int i);  // 491
			Destruct<HullIVRHole_t::Tri_t*>(Tri_t** pMemory); // 1575
			{
				const bool  bNotLast; // 1578
				CUtlMemory<HullIVRHole_t::Tri_t::operator[](
						int i);  // 602
				CUtlVectorBase<HullIVRHole_t::Tri_t::Element(
					int i);  // 1584
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 1584
			}
			CUtlVectorBase<HullIVRHole_t::Tri_t::FastRemove(
					int elem);  // 492
		}
	}
	{
		int iv; // 499
		{
			VertexHandle_t hHoleVert; // 501
		}
		HullIVRHole_t::NumVerts(); // 499
	}
	CUtlMemory<HullIVRHole_t::Tri_t::ValidateGrowSize(); // 475
	CUtlMemory<HullIVRHole_t::Tri_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<HullIVRHole_t::Tri_t::ResetDbgInfo(); // 530
	CUtlVectorBase<HullIVRHole_t::Tri_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<HullIVRHole_t::Tri_t::CUtlVector(); // 472
	operator delete(void* pThat); // 505
	CUtlMemory<HullIVRHole_t::Tri_t::Purge(); // 903
	CUtlMemory<HullIVRHole_t::Tri_t::Purge(); // 1799
	CUtlVectorBase<HullIVRHole_t::Tri_t::Purge(); // 560
	ValidateAlignment<HullIVRHole_t::Tri_t*>(void); // 508
	CUtlMemory<HullIVRHole_t::Tri_t::Purge(); // 510
	CUtlMemory<HullIVRHole_t::Tri_t::~CUtlMemory(); // 562
	CUtlVectorBase<HullIVRHole_t::Tri_t::~CUtlVectorBase(); // 410
	CUtlVector<HullIVRHole_t::Tri_t::~CUtlVector(); // 512
} /* size: 1087, variables: 3, inline expansions: 14 (323 bytes) */

// <05E76B6D> meshutils/hullivr.cpp:516
// variables: 7
// function calls: 33
void COpMeshBuilder::COpMeshBuilder(const qhConvex* pConvex, CHullIVR* pOut)
{
	{
		CUtlVector<const qhFace*, CUtlMemory<const qhFace*, int> > failedFaces; // 520
		{
			const qhFace* itFace; // 521
		}
		{
			int i; // 529
		}
	}
	CUtlMemory<CUtlHashtableEntry<qhVertex::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<qhVertex::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	CUtlHashtable<qhVertex::Init(); // 178
	CUtlHashtable<qhVertex::CUtlHashtable(
			int minimumSize);  // 516
	{
		CUtlVector<const qhFace*, CUtlMemory<const qhFace*, int> > failedFaces; // 520
		{
			const qhFace* itFace; // 521
			qhList<qhFace>::End(); // 521
			qhConvex::GetFaceList(); // 521
			qhList<qhFace>::Begin(); // 521
			qhConvex::GetFaceList(); // 521
			CUtlMemory<const qhFace::operator[](
					int i);  // 602
			CUtlVectorBase<const qhFace::Element(
				int i);  // 1201
			CopyConstruct<const qhFace*>(const qhFace ** pMemory,
							const qhFace* const& src);  // 1201
			CUtlMemory<const qhFace::Grow(
				int num);  // 806
			CUtlVectorBase<const qhFace::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<const qhFace::AddToTail(
					const qhFace* const& src);  // 524
		}
		CUtlMemory<const qhFace::ValidateGrowSize(); // 475
		CUtlMemory<const qhFace::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<const qhFace::ResetDbgInfo(); // 530
		CUtlVectorBase<const qhFace::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<const qhFace::CUtlVector(); // 520
		CUtlVectorBase<const qhFace::IsEmpty(); // 528
		{
			int i; // 529
			CUtlMemory<const qhFace::operator[](
					int i);  // 588
			CUtlVectorBase<const qhFace::operator[](
					int i);  // 530
			Destruct<const qhFace*>(const qhFace ** pMemory); // 1575
			{
				const bool  bNotLast; // 1578
				CUtlMemory<const qhFace::operator[](
						int i);  // 602
				CUtlVectorBase<const qhFace::Element(
					int i);  // 1584
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 1584
			}
			CUtlVectorBase<const qhFace::FastRemove(
					int elem);  // 531
		}
		CUtlMemory<const qhFace::Purge(); // 903
		CUtlMemory<const qhFace::Purge(); // 1799
		CUtlVectorBase<const qhFace::Purge(); // 560
		CUtlVectorBase<const qhFace::~CUtlVectorBase(); // 410
		CUtlVector<const qhFace::~CUtlVector(); // 532
	}
} /* size: 486, inline expansions: 4 (11 bytes) */

// <05E76B07> meshutils/hullivr.cpp:516
// variables: 3
void COpMeshBuilder::COpMeshBuilder(const qhConvex* pConvex, CHullIVR* pOut)
{
	{
		CUtlVector<const qhFace*, CUtlMemory<const qhFace*, int> > failedFaces; // 520
		{
			const qhFace* itFace; // 521
		}
		{
			int i; // 529
		}
	}
} /* size: 0 */

// <05E7619F> meshutils/hullivr.cpp:534
// variables: 3
// function calls: 41
void COpMeshBuilder::AddConvexFace(const qhFace* itFace)
{
	CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, 16> vh; // 536
	const qhHalfEdge* he; // 537
	const qhHalfEdge* heStart; // 537
	CUtlMemory(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
			ComponentHandleWithListPointer_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	EnsureCapacity(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
			int num);  // 199
	CUtlMemoryFixedGrowable_Base(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>: this,
					ComponentHandleWithListPointer_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t(const AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t this); // 1597
	AlignedByteArray_t(const AlignedByteArray_t<16, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Verte this); // 228
	Base(const AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t this); // 231
	CUtlMemoryFixedGrowable(const CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vert this,
				int nGrowSize,
				int nInitSize);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable(const CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vert this,
				int growSize);  // 536
	Base(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 824
	GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
			int num);  // 1249
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
			int i);  // 602
	Element(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
		int i);  // 1252
	Construct<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory); // 1252
	NumAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>:: this); // 1247
	AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
			ComponentHandleWithListPointer_t& src);  // 540
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_ this); // 543
	Base(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 543
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 1798
	IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>:: this); // 577
	ConvertToExternalMemory(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
				ComponentHandleWithListPointer_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	Purge_FixedGrowable(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>: this,
				ComponentHandleWithListPointer_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	Purge_FixedGrowable(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>: this,
				ComponentHandleWithListPointer_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	Base(const AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t this); // 237
	Purge(const CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vert this,
		int numElements);  // 1799
	Base(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 1800
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>(void); // 508
	Purge(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this); // 903
	Purge(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this); // 510
	~CUtlMemory(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this); // 191
	~CUtlMemoryFixedGrowable_Base(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>: this); // 223
	~CUtlMemoryFixedGrowable(const CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vert this); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 478
	~CUtlVectorFixedGrowable(const CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vert this); // 544
} /* size: 422, variables: 3, inline expansions: 41 (898 bytes) */

// <05E75AED> meshutils/hullivr.cpp:545
// variables: 4
// function calls: 20
void COpMeshBuilder::MapVert(qhVertex* v)
{
	bool bInserted; // 547
	UtlHashHandle_t hFound; // 548
	VertexHandle_t* pVertHandle; // 549
	{
		HullIVRVertexData_t* pData; // 553
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 12
		AsVector(const qhVector3& V); // 554
		Vector::operator=(
				const Vector& vOther);  // 554
	}
	Mix32HashFunctor::operator(
			uint32 n);  // 139
	PointerHashFunctor::operator(
			const void* s);  // 256
	CUtlMemory<CUtlHashtableEntry<qhVertex::Base(); // 650
	IdealIndex(uint32_if32BitStorage h,
			uint32 m);  // 653
	CUtlMemory<CUtlHashtableEntry<qhVertex::Count(); // 651
	CUtlHashtableEntry<qhVertex::IdealIndex(
			uint32 slotmask);  // 656
	CUtlHashtableEntry<qhVertex::IdealIndex(
			uint32 slotmask);  // 667
	CUtlHashtable<qhVertex::DoLookup<qhVertex*>(
				qhVertex* x,
				unsigned int h,
				handle_t* pPreviousInChain);  // 697
	CUtlMemory<CUtlHashtableEntry<qhVertex::operator[](
			int i);  // 706
	CUtlKeyValuePair<qhVertex::CUtlKeyValuePair<qhVertex*>(
					qhVertex* const& k);  // 1514
	Construct<CUtlKeyValuePair<qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>, qhVertex*&>(CUtlKeyValuePair<qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex pMemory); // 706
	CUtlHashtable<qhVertex::DoInsert<qhVertex*>(
				qhVertex* k,
				unsigned int h,
				bool* pDidInsert);  // 695
	CUtlHashtable<qhVertex::DoInsert<qhVertex*>(
				qhVertex* k,
				unsigned int h,
				bool* pDidInsert);  // 256
	CUtlHashtable<qhVertex::InsertIfNotFound(
			KeyArg_t k,
			bool* pDidInsert);  // 548
	CUtlMemory<CUtlHashtableEntry<qhVertex::operator[](
			int i);  // 297
	CUtlKeyValuePair<qhVertex::GetValue(); // 297
	CUtlHashtable<qhVertex::operator[](
			handle_t idx);  // 549
} /* size: 369, variables: 3, inline expansions: 17 (899 bytes) */

// <05E75891> meshutils/hullivr.cpp:561
// variables: 4
// function calls: 9
float IsAngleLessThanTan(const Vector& a, const Vector& b, float flTan)
{
	float cosine; // 563
	float sine; // 563
	const char   __FUNCTION__; // 60379
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 565
	}
	DotProduct(const Vector& a,
			const Vector& b);  // 563
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 563
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 563
} /* size: 0, variables: 3, inline expansions: 9 (194 bytes) */

// <05E70013> meshutils/hullivr.cpp:573
// variables: 70
// function calls: 370
void CHullIVR::StraightenAllFaces()
{
	CUtlVector<CHullIVR::StraightenAllFaces()::Face_t, CUtlMemory<CHullIVR::StraightenAllFaces()::Face_t, int> > faces; // 581
	CDisjointSetForest faceIslands; // 588
	const char   __FUNCTION__; // 60379
	CUtlVector<int, CUtlMemory<int, int> > islands; // 612
	CUtlPriorityQueue<CHullIVR::VertexSet_t*, CDefUtlPriorityQueueLessFunc<CHullIVR::VertexSet_t*>, CUtlMemory<CHullIVR::VertexSet_t*, int>, CDefUtlPriorityQueueSetIndexFunc<CHullIVR::VertexSet_t*>, bool (*)(CHullIVR::VertexSet_t* const&, CHullIVR::VertexSet_t* const&)> vsets; // 630
	CUtlHashtable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, empty_t, DefaultHashFunctor<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>, DefaultEqualFunctor<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>, undefined_t, CUtlMemory<CUtlHashtableEntry<CH displacedVerts; // 669
	{
		FaceHandle_t fh; // 583
		{
			Face_t face; // 585
			CUtlMemory<CHullIVR::StraightenAllFaces()::Face_t, int>::operator[](
					int i); // 602
			CUtlVectorBase<CHullIVR::StraightenAllFaces()::Face_t, CUtlMemory<CHullIVR::StraightenAllFaces()::Face_t, int> >::Element(
				int i); // 1201
			CopyConstruct<CHullIVR::StraightenAllFaces()::Face_t>(Face_t* pMemory,
										const Face_t& src); // 1201
			CUtlMemory<CHullIVR::StraightenAllFaces()::Face_t, int>::Grow(
				int num); // 806
			CUtlVectorBase<CHullIVR::StraightenAllFaces()::Face_t, CUtlMemory<CHullIVR::StraightenAllFaces()::Face_t, int> >::GrowMemory(
					int num); // 1198
			CUtlVectorBase<CHullIVR::StraightenAllFaces()::Face_t, CUtlMemory<CHullIVR::StraightenAllFaces()::Face_t, int> >::AddToTail(
					const Face_t& src); // 586
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t> this); // 541
			operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Co this,
					int i);  // 595
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t> this,
					int i);  // 546
			ComponentHandleWithListPointer_t::operator!=(
					const ComponentHandleWithListPointer_t& src);  // 547
			CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::GetComponentIndex(
						ComponentHandle_t handle);  // 466
			operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Componen this,
					int i);  // 588
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Comp this,
					int i);  // 470
			CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::GetComponent(
					ComponentHandle_t handle);  // 1395
			CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face(
				FaceHandle_t faceHandle);  // 1527
			CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::GetFaceData(
					FaceHandle_t hFace);  // 586
		}
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t> this); // 443
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Co this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t> this,
				int i);  // 446
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::InvalidHandle(); // 452
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Next(
			ComponentHandle_t handle);  // 439
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Next(
			ComponentHandle_t handle);  // 435
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::First(); // 1274
		CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::FirstFace(); // 583
		ComponentHandleWithListPointer_t::operator!=(
				const ComponentHandleWithListPointer_t& src);  // 583
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t> this); // 443
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Co this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t> this,
				int i);  // 446
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::InvalidHandle(); // 452
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Next(
			ComponentHandle_t handle);  // 439
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Next(
			ComponentHandle_t handle);  // 1284
		CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::NextFace(
			FaceHandle_t hFace);  // 583
	}
	{
		HalfEdgeHandle_t eh; // 589
		{
			FaceHandle_t f0; // 591
			HalfEdgeHandle_t eh1; // 594
			FaceHandle_t f1; // 597
			int nFace0; // 603
			int nFace1; // 603
			Vector op0; // 604
			Vector op1; // 604
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 600
			}
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdg this); // 541
			operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t> this,
					int i);  // 595
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdg this,
					int i);  // 546
			ComponentHandleWithListPointer_t::operator!=(
					const ComponentHandleWithListPointer_t& src);  // 547
			CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::GetComponentIndex(
						ComponentHandle_t handle);  // 476
			operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t> this,
					int i);  // 595
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdg this,
					int i);  // 480
			CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::GetComponent(
					ComponentHandle_t handle);  // 1385
			CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Edge(
				HalfEdgeHandle_t edgeHandle);  // 5754
			CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::InvalidHandle(); // 1093
			CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::InvalidFace(); // 5759
			CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::GetFaceConnectedToHalfEdge(
							HalfEdgeHandle_t hEdge);  // 591
			ComponentHandleWithListPointer_t::operator==(
					const ComponentHandleWithListPointer_t& src);  // 592
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdg this); // 541
			operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t> this,
					int i);  // 595
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdg this,
					int i);  // 546
			ComponentHandleWithListPointer_t::operator!=(
					const ComponentHandleWithListPointer_t& src);  // 547
			CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::GetComponentIndex(
						ComponentHandle_t handle);  // 476
			operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t> this,
					int i);  // 595
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdg this,
					int i);  // 480
			CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::GetComponent(
					ComponentHandle_t handle);  // 1385
			CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Edge(
				HalfEdgeHandle_t edgeHandle);  // 5609
			CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::InvalidHandle(); // 1072
			CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::InvalidHalfEdge(); // 5614
			CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::GetOppositeHalfEdge(
						HalfEdgeHandle_t hEdge);  // 594
			ComponentHandleWithListPointer_t::operator==(
					const ComponentHandleWithListPointer_t& src);  // 595
			CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::InvalidHandle(); // 1093
			CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::InvalidFace(); // 5759
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdg this); // 541
			operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t> this,
					int i);  // 595
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdg this,
					int i);  // 546
			ComponentHandleWithListPointer_t::operator!=(
					const ComponentHandleWithListPointer_t& src);  // 547
			CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::GetComponentIndex(
						ComponentHandle_t handle);  // 476
			operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t> this,
					int i);  // 595
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdg this,
					int i);  // 480
			CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::GetComponent(
					ComponentHandle_t handle);  // 1385
			CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Edge(
				HalfEdgeHandle_t edgeHandle);  // 5754
			CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::GetFaceConnectedToHalfEdge(
							HalfEdgeHandle_t hEdge);  // 597
			ComponentHandleWithListPointer_t::operator==(
					const ComponentHandleWithListPointer_t& src);  // 598
			ComponentHandleWithListPointer_t::operator!=(
					const ComponentHandleWithListPointer_t& src);  // 600
			ComponentHandleWithListPointer_t::operator==(
					const ComponentHandleWithListPointer_t& src);  // 601
			CUtlMemory<CHullIVR::StraightenAllFaces()::Face_t, int>::operator[](
					int i); // 588
			CUtlVectorBase<CHullIVR::StraightenAllFaces()::Face_t, CUtlMemory<CHullIVR::StraightenAllFaces()::Face_t, int> >::operator[](
					int i); // 604
			CUtlMemory<CHullIVR::StraightenAllFaces()::Face_t, int>::operator[](
					int i); // 588
			CUtlVectorBase<CHullIVR::StraightenAllFaces()::Face_t, CUtlMemory<CHullIVR::StraightenAllFaces()::Face_t, int> >::operator[](
					int i); // 604
			ConVar::GetFloat(); // 605
			{
				int nNode; // 69
				CUtlMemory<CDisjointSetForest::Node_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::operator[](
						int i);  // 69
			}
			{
				int nNode; // 76
				CUtlMemory<CDisjointSetForest::Node_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::operator[](
						int i);  // 76
			}
			CDisjointSetForest::Find(
				int nStartNode);  // 89
			{
				int nNode; // 69
				CUtlMemory<CDisjointSetForest::Node_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::operator[](
						int i);  // 69
			}
			{
				int nNode; // 76
				CUtlMemory<CDisjointSetForest::Node_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::operator[](
						int i);  // 76
			}
			CDisjointSetForest::Find(
				int nStartNode);  // 90
			CUtlMemory<CDisjointSetForest::Node_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::operator[](
					int i);  // 91
			CUtlMemory<CDisjointSetForest::Node_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::operator[](
					int i);  // 91
			CDisjointSetForest::Union(
				int nNodeA,
				int nNodeB);  // 608
		}
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdg this); // 443
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t> this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdg this,
				int i);  // 446
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::InvalidHandle(); // 452
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::Next(
			ComponentHandle_t handle);  // 439
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::Next(
			ComponentHandle_t handle);  // 435
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::First(); // 1214
		CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::FirstHalfEdge(); // 589
		ComponentHandleWithListPointer_t::operator!=(
				const ComponentHandleWithListPointer_t& src);  // 589
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::InvalidHandle(); // 452
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::Next(
			ComponentHandle_t handle);  // 439
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdg this); // 443
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t> this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdg this,
				int i);  // 446
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::Next(
			ComponentHandle_t handle);  // 1224
		CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::NextHalfEdge(
				HalfEdgeHandle_t hHalfEdge);  // 589
	}
	{
		int f; // 617
		{
			int nIsland; // 619
			{
				int nNode; // 69
				CUtlMemory<CDisjointSetForest::Node_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::operator[](
						int i);  // 69
			}
			{
				int nNode; // 76
				CUtlMemory<CDisjointSetForest::Node_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::operator[](
						int i);  // 76
			}
			CDisjointSetForest::Find(
				int nStartNode);  // 619
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 622
		}
	}
	{
		int i; // 633
		{
			CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::ComponentHandleWithListPointer_t, 8> mergeFaces; // 635
			Vector vNormal; // 636
			{
				int j; // 637
				Base(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Componen this); // 112
				Base(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Comp this); // 368
				ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Comp this); // 824
				IsGrowable(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Co this); // 823
				IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Co this); // 859
				IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Co this); // 861
				Grow(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Componen this,
					int num);  // 806
				GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Comp this,
						int num);  // 1198
				CopyConstruct<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory,
																const ComponentHandleWithListPointer_t& src);  // 1201
				operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Componen this,
						int i);  // 602
				Element(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Comp this,
					int i);  // 1201
				AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Comp this,
						const ComponentHandleWithListPointer_t& src);  // 639
				Vector::operator+=(
						const Vector& v);  // 640
				CUtlMemory<int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
						int i);  // 637
				CUtlMemory<CHullIVR::StraightenAllFaces()::Face_t, int>::operator[](
						int i); // 588
				CUtlVectorBase<CHullIVR::StraightenAllFaces()::Face_t, CUtlMemory<CHullIVR::StraightenAllFaces()::Face_t, int> >::operator[](
						int i); // 639
			}
			{
				bool bNormalOk; // 647
				{
					int j; // 648
					ConVar::GetFloat(); // 650
					CUtlMemory<CHullIVR::StraightenAllFaces()::Face_t, int>::operator[](
							int i); // 588
					CUtlVectorBase<CHullIVR::StraightenAllFaces()::Face_t, CUtlMemory<CHullIVR::StraightenAllFaces()::Face_t, int> >::operator[](
							int i); // 650
					CUtlMemory<int, int>::operator[](
							int i);  // 588
					CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
							int i);  // 648
				}
				{
					VertexSet_t* pVSet; // 658
					Base(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Componen this); // 112
					Base(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Comp this); // 659
					ValidateGrowSize(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t> this); // 475
					CUtlMemory(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t> this,
							int nGrowSize,
							int nInitAllocationCount);  // 178
					Init(const CUtlHashtable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Com this); // 178
					CUtlHashtable(const CUtlHashtable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Com this,
							int minimumSize);  // 135
					VertexSet_t::VertexSet_t(); // 658
					Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t> this); // 659
					ConVar::GetFloat(); // 660
					{
						entry_t* table; // 896
						Base(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t> this); // 896
						{
							int i; // 897
							Count(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceD this); // 897
							IsValid(const CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Ver this); // 899
							MarkInvalid(const CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t> this); // 901
							Destruct<CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, Vector> >(CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon pMemory); // 902
						}
					}
					RemoveAll(const CUtlHashtable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Com this); // 188
					ValidateAlignment<CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, Vector> >(void); // 508
					IsExternallyAllocated(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceD this); // 905
					Purge(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t> this); // 903
					Purge(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t> this); // 510
					~CUtlMemory(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t> this); // 188
					~CUtlHashtable(const CUtlHashtable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Com this); // 135
					VertexSet_t::~VertexSet_t(); // 661
					CUtlMemory<CHullIVR::VertexSet_t::Grow(
						int num);  // 806
					CUtlVectorBase<CHullIVR::VertexSet_t::GrowMemory(
							int num);  // 1145
					CUtlVectorBase<CHullIVR::VertexSet_t::AddToTail(); // 228
					CUtlMemory<CHullIVR::VertexSet_t::operator[](
							int i);  // 588
					CUtlVectorBase<CHullIVR::VertexSet_t::operator[](
							int i);  // 229
					{
						int parent; // 213
						CUtlPriorityQueue<CHullIVR::VertexSet_t::Swap(
							int index1,
							int index2);  // 218
						CUtlMemory<CHullIVR::VertexSet_t::operator[](
								int i);  // 588
						CUtlVectorBase<CHullIVR::VertexSet_t::operator[](
								int i);  // 214
						CUtlMemory<CHullIVR::VertexSet_t::operator[](
								int i);  // 588
						CUtlVectorBase<CHullIVR::VertexSet_t::operator[](
								int i);  // 214
						CDefUtlPriorityQueueLessFunc<CHullIVR::VertexSet_t::operator(
																VertexSet_t* const& lhs,
																VertexSet_t* const& rhs,
																bool (*lessFuncPtr)(VertexSet_t* const &, VertexSet_t* const &));  // 214
					}
					CUtlPriorityQueue<CHullIVR::VertexSet_t::PercolateUp(
							int index);  // 232
					CUtlPriorityQueue<CHullIVR::VertexSet_t::Insert(
						VertexSet_t* const& element);  // 663
				}
				Vector::NormalizeInPlace(); // 646
			}
			CUtlMemory(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Componen this,
					ComponentHandleWithListPointer_t* pMemory,
					int numElements,
					bool bGrowable,
					uint32 nGrowable_GrowSize);  // 197
			EnsureCapacity(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Componen this,
					int num);  // 199
			CUtlMemoryFixedGrowable_Base(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>: this,
							ComponentHandleWithListPointer_t* pFixedMemory,
							int nFixedElements,
							int nGrowSize,
							int nInitAllocationCount);  // 228
			AlignedByteArrayExplicit_t(const AlignedByteArrayExplicit_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t> this); // 1597
			AlignedByteArray_t(const AlignedByteArray_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t this); // 228
			Base(const AlignedByteArrayExplicit_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t> this); // 231
			CUtlMemoryFixedGrowable(const CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face this,
						int nGrowSize,
						int nInitSize);  // 527
			ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Comp this); // 530
			CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Comp this,
					int growSize,
					int initCapacity);  // 484
			CUtlVectorFixedGrowable(const CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face this,
						int growSize);  // 635
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t> this); // 643
			IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Co this); // 577
			ConvertToExternalMemory(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Componen this,
						ComponentHandleWithListPointer_t* pMemory,
						int numElements,
						int nCopyElements,
						bool bSetGrowable,
						uint32 nGrowable_GrowSize);  // 207
			Purge_FixedGrowable(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>: this,
						ComponentHandleWithListPointer_t* pFixedMemory,
						int nFixedElements,
						int nPurgeToCount);  // 203
			Purge_FixedGrowable(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>: this,
						ComponentHandleWithListPointer_t* pFixedMemory,
						int nFixedElements,
						int nPurgeToCount);  // 237
			Base(const AlignedByteArrayExplicit_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t> this); // 237
			Purge(const CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face this,
				int numElements);  // 1799
			RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Comp this); // 1798
			Base(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Componen this); // 112
			Base(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Comp this); // 368
			ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Comp this); // 1800
			Purge(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Comp this); // 560
			ValidateAlignment<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::ComponentHandleWithListPointer_t>(void); // 508
			Purge(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Componen this); // 903
			Purge(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Componen this); // 510
			~CUtlMemory(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Componen this); // 191
			~CUtlMemoryFixedGrowable_Base(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>: this); // 223
			~CUtlMemoryFixedGrowable(const CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face this); // 562
			~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Comp this); // 478
			~CUtlVectorFixedGrowable(const CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face this); // 666
		}
	}
	{
		VertexSet_t* pVSet; // 672
		bool bSkip; // 676
		{
			UtlHashHandle_t it; // 677
			Base(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceD this); // 914
			{
				int i; // 915
				Count(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceD this); // 915
				IsValid(const CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Ver this); // 917
			}
			NextHandle(const CUtlHashtable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t this,
					handle_t start);  // 208
			FirstHandle(const CUtlHashtable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t this); // 677
			operator[](const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceD this,
					int i);  // 293
			Key(const CUtlHashtable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t this,
				handle_t idx);  // 679
			HashItem<unsigned int>(const unsigned int& item); // 73
			ComponentHandleWithListPointer_t::AsInt(); // 72
			operator()(const DefaultHashFunctor<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Ver this,
					const VertexHandle_t& s); // 218
			Find(const CUtlHashtable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t this,
				KeyArg_t k);  // 679
			Base(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceD this); // 914
			{
				int i; // 915
				Count(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceD this); // 915
				IsValid(const CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Ver this); // 917
			}
			NextHandle(const CUtlHashtable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t this,
					handle_t start);  // 677
		}
		{
			UtlHashHandle_t it; // 688
			{
				VertexHandle_t vh; // 690
				operator[](const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceD this,
						int i);  // 293
				Key(const CUtlHashtable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t this,
					handle_t idx);  // 690
				HashItem<unsigned int>(const unsigned int& item); // 73
				ComponentHandleWithListPointer_t::AsInt(); // 72
				operator()(const DefaultHashFunctor<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Ver this,
						const VertexHandle_t& s); // 240
				operator[](const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t> this,
						int i);  // 706
				CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>(const CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>:: this,
																const ComponentHandleWithListPointer_t& k);  // 1514
				Construct<CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, empty_t>, const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t&>(CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon pMemory); // 706
				DoInsert<const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t&>(const CUtlHashtable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Com this,
																const ComponentHandleWithListPointer_t& k,
																unsigned int h,
																bool* pDidInsert);  // 695
				DoInsert<const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t&>(const CUtlHashtable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Com this,
																const ComponentHandleWithListPointer_t& k,
																unsigned int h,
																bool* pDidInsert);  // 240
				Insert(const CUtlHashtable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Com this,
					KeyArg_t k);  // 691
				operator[](const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t> this,
						int i);  // 297
				operator[](const CUtlHashtable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Com this,
						handle_t idx);  // 692
				Vector::operator=(
						const Vector& vOther);  // 692
			}
			{
				int i; // 915
				IsValid(const CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Ver this); // 917
			}
			NextHandle(const CUtlHashtable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t this,
					handle_t start);  // 208
			FirstHandle(const CUtlHashtable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t this); // 688
			{
				int i; // 915
				Count(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceD this); // 915
				IsValid(const CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Ver this); // 917
			}
			Base(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceD this); // 914
			NextHandle(const CUtlHashtable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t this,
					handle_t start);  // 688
		}
		{
			const bool  bNotLast; // 1578
			CUtlMemory<CHullIVR::VertexSet_t::operator[](
					int i);  // 602
			CUtlVectorBase<CHullIVR::VertexSet_t::Element(
				int i);  // 1584
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 1584
		}
		Destruct<CHullIVR::VertexSet_t*>(VertexSet_t** pMemory); // 1575
		CUtlVectorBase<CHullIVR::VertexSet_t::FastRemove(
				int elem);  // 110
		{
			int child; // 174
			CUtlMemory<CHullIVR::VertexSet_t::operator[](
					int i);  // 588
			CUtlVectorBase<CHullIVR::VertexSet_t::operator[](
					int i);  // 178
			CUtlMemory<CHullIVR::VertexSet_t::operator[](
					int i);  // 588
			CUtlVectorBase<CHullIVR::VertexSet_t::operator[](
					int i);  // 178
			CDefUtlPriorityQueueLessFunc<CHullIVR::VertexSet_t::operator(
														VertexSet_t* const& lhs,
														VertexSet_t* const& rhs,
														bool (*lessFuncPtr)(VertexSet_t* const &, VertexSet_t* const &));  // 178
			CUtlMemory<CHullIVR::VertexSet_t::operator[](
					int i);  // 588
			CUtlVectorBase<CHullIVR::VertexSet_t::operator[](
					int i);  // 239
			CUtlPriorityQueue<CHullIVR::VertexSet_t::Swap(
				int index1,
				int index2);  // 197
			CUtlMemory<CHullIVR::VertexSet_t::operator[](
					int i);  // 588
			CUtlVectorBase<CHullIVR::VertexSet_t::operator[](
					int i);  // 189
			CDefUtlPriorityQueueLessFunc<CHullIVR::VertexSet_t::operator(
														VertexSet_t* const& lhs,
														VertexSet_t* const& rhs,
														bool (*lessFuncPtr)(VertexSet_t* const &, VertexSet_t* const &));  // 189
		}
		CUtlPriorityQueue<CHullIVR::VertexSet_t::PercolateDown(
				int index);  // 117
		CUtlPriorityQueue<CHullIVR::VertexSet_t::RemoveAtHead(); // 673
		{
			entry_t* table; // 896
			Base(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t> this); // 896
			{
				int i; // 897
				Count(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceD this); // 897
				IsValid(const CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Ver this); // 899
				MarkInvalid(const CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t> this); // 901
				Destruct<CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, Vector> >(CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon pMemory); // 902
			}
		}
		RemoveAll(const CUtlHashtable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Com this); // 188
		ValidateAlignment<CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, Vector> >(void); // 508
		IsExternallyAllocated(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceD this); // 905
		Purge(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t> this); // 903
		Purge(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t> this); // 510
		~CUtlMemory(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t> this); // 188
		~CUtlHashtable(const CUtlHashtable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Com this); // 135
		VertexSet_t::~VertexSet_t(); // 696
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t> this); // 575
	CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Count(); // 1184
	CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::GetNumFaces(); // 582
	CUtlMemory<CHullIVR::StraightenAllFaces()::Face_t, int>::ValidateGrowSize()::Face_t, int>* this); // 475
	CUtlMemory<CHullIVR::StraightenAllFaces()::Face_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount); // 527
	CUtlVectorBase<CHullIVR::StraightenAllFaces()::Face_t, CUtlMemory<CHullIVR::StraightenAllFaces()::Face_t, int> >::ResetDbgInfo()::Face_t, CUtlMemory<CHullIVR::StraightenAllFaces()::Face_t, int> >* this); // 530
	CUtlVectorBase<CHullIVR::StraightenAllFaces()::Face_t, CUtlMemory<CHullIVR::StraightenAllFaces()::Face_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity); // 418
	CUtlVector<CHullIVR::StraightenAllFaces()::Face_t, CUtlMemory<CHullIVR::StraightenAllFaces()::Face_t, int> >::CUtlVector()::Face_t, CUtlMemory<CHullIVR::StraightenAllFaces()::Face_t, int> >* this); // 581
	CUtlMemory<CHullIVR::StraightenAllFaces()::Face_t, int>::EnsureCapacity(
			int num); // 1006
	CUtlVectorBase<CHullIVR::StraightenAllFaces()::Face_t, CUtlMemory<CHullIVR::StraightenAllFaces()::Face_t, int> >::EnsureCapacity(
			int num); // 582
	CUtlMemory<CDisjointSetForest::Node_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CDisjointSetForest::Node_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::CUtlVector(); // 36
	CUtlMemory<CDisjointSetForest::Node_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::SetCount(
		int count);  // 38
	{
		int i; // 39
		CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::operator[](
				int i);  // 41
		CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::operator[](
				int i);  // 42
	}
	CDisjointSetForest::CDisjointSetForest(
				int nCount);  // 588
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 612
	CUtlMemory<int, int>::Grow(
		int num);  // 806
	CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<int, CUtlMemory<int, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<int, CUtlMemory<int, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<int, CUtlMemory<int, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<int, CUtlMemory<int, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<int, CUtlMemory<int, int> >::SetCount(
		int count);  // 613
	{
		int i; // 1554
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::FillWithValue(
			const int& src);  // 614
	CUtlMemory<CHullIVR::VertexSet_t::ValidateGrowSize(); // 475
	CUtlMemory<CHullIVR::VertexSet_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CHullIVR::VertexSet_t::ResetDbgInfo(); // 530
	CUtlVectorBase<CHullIVR::VertexSet_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<CHullIVR::VertexSet_t::CUtlVector(
			int growSize,
			int initCapacity);  // 96
	CUtlPriorityQueue<CHullIVR::VertexSet_t::CUtlPriorityQueue(
				int growSize,
				int initSize,
				bool (*lessfunc)(VertexSet_t* const &, VertexSet_t* const &));  // 630
	ValidateGrowSize(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t> this); // 475
	CUtlMemory(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t> this,
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Com this); // 178
	CUtlHashtable(const CUtlHashtable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Com this,
			int minimumSize);  // 669
	CUtlVectorBase<CHullIVR::VertexSet_t::Count(); // 71
	CUtlPriorityQueue<CHullIVR::VertexSet_t::Count(); // 670
	{
		entry_t* table; // 896
		Base(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t> this); // 896
		{
			int i; // 897
			Count(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceD this); // 897
			IsValid(const CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Ver this); // 899
			MarkInvalid(const CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t> this); // 901
			Destruct<CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, empty_t> >(CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Com this); // 188
	ValidateAlignment<CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, empty_t> >(void); // 508
	IsExternallyAllocated(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceD this); // 905
	Purge(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t> this); // 903
	Purge(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t> this); // 510
	~CUtlMemory(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t> this); // 188
	~CUtlHashtable(const CUtlHashtable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Com this); // 698
	CUtlMemory<CHullIVR::VertexSet_t::Purge(); // 903
	CUtlMemory<CHullIVR::VertexSet_t::Purge(); // 1799
	CUtlVectorBase<CHullIVR::VertexSet_t::Purge(); // 560
	ValidateAlignment<CHullIVR::VertexSet_t*>(void); // 508
	CUtlMemory<CHullIVR::VertexSet_t::Purge(); // 510
	CUtlMemory<CHullIVR::VertexSet_t::~CUtlMemory(); // 562
	CUtlVectorBase<CHullIVR::VertexSet_t::~CUtlVectorBase(); // 410
	CUtlVector<CHullIVR::VertexSet_t::~CUtlVector(); // 38
	CUtlPriorityQueue<CHullIVR::VertexSet_t::~CUtlPriorityQueue(); // 698
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 698
	CUtlMemory<CDisjointSetForest::Node_t, int>::Purge(); // 903
	CUtlMemory<CDisjointSetForest::Node_t, int>::Purge(); // 1799
	CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::Purge(); // 560
	ValidateAlignment<CDisjointSetForest::Node_t>(void); // 508
	CUtlMemory<CDisjointSetForest::Node_t, int>::Purge(); // 510
	CUtlMemory<CDisjointSetForest::Node_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::~CUtlVector(); // 17
	CDisjointSetForest::~CDisjointSetForest(); // 698
	CUtlMemory<CHullIVR::StraightenAllFaces()::Face_t, int>::Purge()::Face_t, int>* this); // 903
	CUtlMemory<CHullIVR::StraightenAllFaces()::Face_t, int>::Purge()::Face_t, int>* this); // 1799
	CUtlVectorBase<CHullIVR::StraightenAllFaces()::Face_t, CUtlMemory<CHullIVR::StraightenAllFaces()::Face_t, int> >::Purge()::Face_t, CUtlMemory<CHullIVR::StraightenAllFaces()::Face_t, int> >* this); // 560
	ValidateAlignment<CHullIVR::StraightenAllFaces()::Face_t>(void); // 508
	CUtlMemory<CHullIVR::StraightenAllFaces()::Face_t, int>::Purge()::Face_t, int>* this); // 510
	CUtlMemory<CHullIVR::StraightenAllFaces()::Face_t, int>::~CUtlMemory()::Face_t, int>* this); // 562
	CUtlVectorBase<CHullIVR::StraightenAllFaces()::Face_t, CUtlMemory<CHullIVR::StraightenAllFaces()::Face_t, int> >::~CUtlVectorBase()::Face_t, CUtlMemory<CHullIVR::StraightenAllFaces()::Face_t, int> >* this); // 410
	CUtlVector<CHullIVR::StraightenAllFaces()::Face_t, CUtlMemory<CHullIVR::StraightenAllFaces()::Face_t, int> >::~CUtlVector()::Face_t, CUtlMemory<CHullIVR::StraightenAllFaces()::Face_t, int> >* this); // 698
} /* size: 0, variables: 6, inline expansions: 89 (3398 bytes) */

// <05E6ECDE> meshutils/hullivr.cpp:702
// variables: 20
// function calls: 79
void CHullIVR::StraightenFaces(const FaceHandle_t* pFaces, int numFaces, const Vector& vNormal, CUtlHashtable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Component allVerts)
{
	Vector vFaceCenter; // 704
	float flVertWeight; // 705
	float flMaxDisplacement; // 726
	{
		int f; // 706
		{
			CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, 8> faceVerts; // 708
			{
				VertexHandle_t vh; // 710
				CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, 8>& __for_range; // 19814
				iterator __for_begin; // 29984
				iterator __for_end; // 29984
				{
					bool bDidInsert; // 712
					Vector* pPos; // 713
					{
						HullIVRVertexData_t* pData; // 716
						float flWeight; // 717
						Vector::operator+=(
								const Vector& v);  // 719
						VectorMultiply(const Vector& a,
								vec_t b,
								Vector& c);  // 1451
						Vector::Vector(); // 1450
						Vector::operator*(
								float fl);  // 719
						Vector::operator=(
								const Vector& vOther);  // 720
					}
					HashItem<unsigned int>(const unsigned int& item); // 73
					ComponentHandleWithListPointer_t::AsInt(); // 72
					operator()(const DefaultHashFunctor<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Ver this,
							const VertexHandle_t& s); // 246
					Base(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceD this); // 650
					IdealIndex(uint32_if32BitStorage h,
							uint32 m);  // 653
					Count(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceD this); // 651
					IdealIndex(const CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Ver this,
							uint32 slotmask);  // 656
					ComponentHandleWithListPointer_t::operator==(
							const ComponentHandleWithListPointer_t& src);  // 154
					operator()(const DefaultEqualFunctor<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Ve this,
							Arg_t a,
							Arg_t b); // 670
					IdealIndex(const CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Ver this,
							uint32 slotmask);  // 667
					DoLookup<const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t&>(const CUtlHashtable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t this,
																const ComponentHandleWithListPointer_t& x,
																unsigned int h,
																handle_t* pPreviousInChain);  // 697
					operator[](const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t> this,
							int i);  // 706
					Vector::Vector(); // 61
					CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>(const CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>:: this,
																const ComponentHandleWithListPointer_t& k);  // 1514
					Construct<CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, Vector>, const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t&>(CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon pMemory); // 706
					DoInsert<const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t&>(const CUtlHashtable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Com this,
																const ComponentHandleWithListPointer_t& k,
																unsigned int h,
																bool* pDidInsert);  // 695
					DoInsert<const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t&>(const CUtlHashtable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Com this,
																const ComponentHandleWithListPointer_t& k,
																unsigned int h,
																bool* pDidInsert);  // 246
					operator[](const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t> this,
							int i);  // 247
					FindOrInsertDefaultGetPtr(const CUtlHashtable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Com this,
									KeyArg_t k,
									bool* pDidInsert);  // 713
				}
				Base(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this); // 112
				Base(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 102
				begin(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 710
				Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_ this); // 104
				end(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 710
			}
			CUtlMemory(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
					ComponentHandleWithListPointer_t* pMemory,
					int numElements,
					bool bGrowable,
					uint32 nGrowable_GrowSize);  // 197
			EnsureCapacity(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
					int num);  // 199
			CUtlMemoryFixedGrowable_Base(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>: this,
							ComponentHandleWithListPointer_t* pFixedMemory,
							int nFixedElements,
							int nGrowSize,
							int nInitAllocationCount);  // 228
			AlignedByteArrayExplicit_t(const AlignedByteArrayExplicit_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t> this); // 1597
			AlignedByteArray_t(const AlignedByteArray_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex this); // 228
			Base(const AlignedByteArrayExplicit_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t> this); // 231
			CUtlMemoryFixedGrowable(const CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vert this,
						int nGrowSize,
						int nInitSize);  // 527
			ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 530
			CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
					int growSize,
					int initCapacity);  // 484
			CUtlVectorFixedGrowable(const CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vert this,
						int growSize);  // 708
			IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>:: this); // 577
			ConvertToExternalMemory(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
						ComponentHandleWithListPointer_t* pMemory,
						int numElements,
						int nCopyElements,
						bool bSetGrowable,
						uint32 nGrowable_GrowSize);  // 207
			Purge_FixedGrowable(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>: this,
						ComponentHandleWithListPointer_t* pFixedMemory,
						int nFixedElements,
						int nPurgeToCount);  // 203
			Purge_FixedGrowable(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>: this,
						ComponentHandleWithListPointer_t* pFixedMemory,
						int nFixedElements,
						int nPurgeToCount);  // 237
			Base(const AlignedByteArrayExplicit_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t> this); // 237
			Purge(const CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vert this,
				int numElements);  // 1799
			RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 1798
			Base(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this); // 112
			Base(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 368
			ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 1800
			Purge(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 560
			ValidateAlignment<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>(void); // 508
			Purge(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this); // 903
			Purge(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this); // 510
			~CUtlMemory(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this); // 191
			~CUtlMemoryFixedGrowable_Base(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>: this); // 223
			~CUtlMemoryFixedGrowable(const CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vert this); // 562
			~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 478
			~CUtlVectorFixedGrowable(const CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vert this); // 723
		}
	}
	{
		UtlHashHandle_t it; // 727
		{
			Vector& refPos; // 729
			float flHeight; // 730
			operator[](const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t> this,
					int i);  // 297
			operator[](const CUtlHashtable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Com this,
					handle_t idx);  // 729
			DotProduct(const Vector& a,
					const Vector& b);  // 730
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 732
			Vector::Vector(); // 1443
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::operator-(
					const Vector& v);  // 730
			Vector::operator-=(
					const Vector& v);  // 732
		}
		Base(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceD this); // 914
		{
			int i; // 915
			Count(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceD this); // 915
			IsValid(const CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Ver this); // 917
		}
		NextHandle(const CUtlHashtable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t this,
				handle_t start);  // 208
		FirstHandle(const CUtlHashtable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t this); // 727
		{
			int i; // 915
			Count(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceD this); // 915
			IsValid(const CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Ver this); // 917
		}
		Base(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceD this); // 914
		NextHandle(const CUtlHashtable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t this,
				handle_t start);  // 727
	}
	Vector::operator/=(
			float fl);  // 724
} /* size: 1312, variables: 3, inline expansions: 1 (48 bytes) */

// <05E6EB81> meshutils/hullivr.cpp:740
// variables: 3
// function calls: 2
void HullIVRHole_t::Dump()
{
	{
		int i; // 743
	}
	{
		int i; // 745
		{
			Tri_t* p; // 747
			HullIVRHole_t::GetTris(); // 747
		}
		HullIVRHole_t::NumTris(); // 745
	}
} /* size: 211 */

// <05E6CF21> meshutils/hullivr.cpp:753
// variables: 20
// function calls: 113
void CHullIVR::SaveObj(const char* pFileName)
{
	IFileSystem* pFileSystem; // 770
	FileHandle_t f; // 771
	CUtlHashtable<int, unsigned int, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, unsigned int>, int> > mapVert; // 776
	uint nVert; // 777
	{
		VertexHandle_t vh; // 778
		{
			HullIVRVertexData_t* vd; // 781
			const Vector& v; // 782
			{
				int vi; // 784
				{
					VertexHandle_t hHoleVert; // 786
				}
				HullIVRHole_t::NumVerts(); // 784
			}
			{
				int ti; // 790
				{
					const Tri_t& t; // 792
					HullIVRHole_t::GetTris(); // 792
				}
				HullIVRHole_t::NumTris(); // 790
			}
			ComponentHandleWithListPointer_t::AsInt(); // 780
			CUtlMemory<CUtlHashtableEntry<int, unsigned int>, int>::operator[](
					int i);  // 720
			CUtlKeyValuePair<int, unsigned int>::CUtlKeyValuePair<int, unsigned int>(
								const int& k,
								const unsigned int& v);  // 1514
			Construct<CUtlKeyValuePair<int, unsigned int>, int&, unsigned int&>(CUtlKeyValuePair<int, unsigned int>* pMemory); // 720
			DoInsert<int>(const CUtlHashtable<int, unsigned int, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHas this,
					int k,
					Arg_t v,
					unsigned int h,
					bool* pDidInsert);  // 714
			DoInsert<int>(const CUtlHashtable<int, unsigned int, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHas this,
					int k,
					Arg_t v,
					unsigned int h,
					bool* pDidInsert);  // 249
			Mix32HashFunctor::operator(
					uint32 n);  // 249
			Insert(const CUtlHashtable<int, unsigned int, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHas this,
				KeyArg_t k,
				ValueArg_t v,
				bool* pDidInsert);  // 780
			RAD2DEG(float flRadians); // 783
			HullIVRCollapseCost_t::GetSilhouetteLossAngle(); // 783
		}
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_ this); // 443
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>:: this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_ this,
				int i);  // 446
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::InvalidHandle(); // 452
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Next(
			ComponentHandle_t handle);  // 439
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Next(
			ComponentHandle_t handle);  // 435
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::First(); // 1194
		CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::FirstVertex(); // 778
		ComponentHandleWithListPointer_t::operator!=(
				const ComponentHandleWithListPointer_t& src);  // 778
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_ this); // 443
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>:: this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_ this,
				int i);  // 446
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::InvalidHandle(); // 452
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Next(
			ComponentHandle_t handle);  // 439
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Next(
			ComponentHandle_t handle);  // 1204
		CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::NextVertex(
				VertexHandle_t hVertex);  // 778
	}
	{
		FaceHandle_t fh; // 800
		{
			CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, 8> verts; // 802
			CBufferString dbg; // 805
			{
				VertexHandle_t vh; // 808
				CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, 8>& __for_range; // 19814
				iterator __for_begin; // 29984
				iterator __for_end; // 29984
				Base(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this); // 112
				Base(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 102
				begin(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 808
				Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_ this); // 104
				end(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 808
				Mix32HashFunctor::operator(
						uint32 n);  // 218
				Find(const CUtlHashtable<int, unsigned int, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<C this,
					KeyArg_t k);  // 227
				CUtlMemory<CUtlHashtableEntry<int, unsigned int>, int>::operator[](
						int i);  // 295
				Element(const CUtlHashtable<int, unsigned int, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHas this,
					handle_t idx);  // 227
				FindGetPtr(const CUtlHashtable<int, unsigned int, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHas this,
						KeyArg_t k);  // 810
				ComponentHandleWithListPointer_t::AsInt(); // 810
			}
			CUtlMemory(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
					ComponentHandleWithListPointer_t* pMemory,
					int numElements,
					bool bGrowable,
					uint32 nGrowable_GrowSize);  // 197
			EnsureCapacity(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
					int num);  // 199
			CUtlMemoryFixedGrowable_Base(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>: this,
							ComponentHandleWithListPointer_t* pFixedMemory,
							int nFixedElements,
							int nGrowSize,
							int nInitAllocationCount);  // 228
			AlignedByteArrayExplicit_t(const AlignedByteArrayExplicit_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t> this); // 1597
			AlignedByteArray_t(const AlignedByteArray_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex this); // 228
			Base(const AlignedByteArrayExplicit_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t> this); // 231
			CUtlMemoryFixedGrowable(const CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vert this,
						int nGrowSize,
						int nInitSize);  // 527
			ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 530
			CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
					int growSize,
					int initCapacity);  // 484
			CUtlVectorFixedGrowable(const CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vert this,
						int growSize);  // 802
			CBufferString::InitMinConstruct(
					bool bGrowable);  // 712
			CBufferString::CBufferString(); // 805
			CBufferString::WriteBuffer(); // 1390
			CBufferString::WriteBuffer(); // 803
			CBufferString::Access(); // 813
			CBufferString::~CBufferString(); // 814
			RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 1798
			IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>:: this); // 577
			ConvertToExternalMemory(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
						ComponentHandleWithListPointer_t* pMemory,
						int numElements,
						int nCopyElements,
						bool bSetGrowable,
						uint32 nGrowable_GrowSize);  // 207
			Purge_FixedGrowable(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>: this,
						ComponentHandleWithListPointer_t* pFixedMemory,
						int nFixedElements,
						int nPurgeToCount);  // 203
			Purge_FixedGrowable(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>: this,
						ComponentHandleWithListPointer_t* pFixedMemory,
						int nFixedElements,
						int nPurgeToCount);  // 237
			Base(const AlignedByteArrayExplicit_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t> this); // 237
			Purge(const CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vert this,
				int numElements);  // 1799
			Base(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this); // 112
			Base(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 368
			ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 1800
			Purge(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 560
			ValidateAlignment<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>(void); // 508
			Purge(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this); // 903
			Purge(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this); // 510
			~CUtlMemory(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this); // 191
			~CUtlMemoryFixedGrowable_Base(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>: this); // 223
			~CUtlMemoryFixedGrowable(const CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vert this); // 562
			~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 478
			~CUtlVectorFixedGrowable(const CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vert this); // 814
		}
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t> this); // 443
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Co this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t> this,
				int i);  // 446
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::InvalidHandle(); // 452
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Next(
			ComponentHandle_t handle);  // 439
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Next(
			ComponentHandle_t handle);  // 435
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::First(); // 1274
		CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::FirstFace(); // 800
		ComponentHandleWithListPointer_t::operator!=(
				const ComponentHandleWithListPointer_t& src);  // 800
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t> this); // 443
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Co this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t> this,
				int i);  // 446
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::InvalidHandle(); // 452
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Next(
			ComponentHandle_t handle);  // 439
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Next(
			ComponentHandle_t handle);  // 1284
		CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::NextFace(
			FaceHandle_t hFace);  // 800
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t> this); // 575
	CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Count(); // 1184
	CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::GetNumFaces(); // 773
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_ this); // 575
	CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Count(); // 1151
	CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::GetNumVertices(); // 773
	CUtlMemory<CUtlHashtableEntry<int, unsigned int>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<int, unsigned int>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<int, unsigned int, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHas this); // 178
	CUtlHashtable(const CUtlHashtable<int, unsigned int, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHas this,
			int minimumSize);  // 776
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<int, unsigned int>, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<int, unsigned int>, int>::Count(); // 897
			CUtlHashtableEntry<int, unsigned int>::IsValid(); // 899
			CUtlHashtableEntry<int, unsigned int>::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<int, unsigned int> >(CUtlKeyValuePair<int, unsigned int>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<int, unsigned int, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHas this); // 188
	ValidateAlignment<CUtlHashtableEntry<int, unsigned int> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<int, unsigned int>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<int, unsigned int>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<int, unsigned int>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<int, unsigned int>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<int, unsigned int, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHas this); // 818
} /* size: 0, variables: 4, inline expansions: 17 (374 bytes) */

