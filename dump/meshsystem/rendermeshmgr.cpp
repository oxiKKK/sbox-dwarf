
//
// meshsystem/rendermeshmgr.cpp
//
//	referenced by: libmeshsystem.so
//
//	functions: 37
//

// <00413722> meshsystem/rendermeshmgr.cpp:27
// variables: 2
// function call: 1
ResourceManifestDesc_t* InitManifestDesc<VMeshError::CTemplateArg>(CTemplateArg& def)
{
	ResourceManifestDesc_t s_Manifest; // 27
	ManifestEntryGroupList_t s_pManifestEntries; // 27
	ResourceManifestEntry_t::ResourceManifestEntry_t(
				const char* pResourceName,
				bool bResourceNameIsManifestName,
				CStrongHandleVoid* pHandle);  // 29
} /* size: 170, variables: 2, inline expansions: 1 (50 bytes) */

// <0040FA12> meshsystem/rendermeshmgr.cpp:36
// variables: 30
// function calls: 112
void CMeshRayTrace::CMeshRayTrace(const CRenderMesh* pMeshData)
{
	{
		const CUtlVector<TraceDataForDraw_t, CUtlMemory<TraceDataForDraw_t, int> >* pTraceData; // 45
		{
			int i; // 48
			{
				const TraceDataForDraw_t& traceData; // 50
				int16 nFlags; // 52
				ResourceId_t id; // 54
				uint64 nMaterial; // 55
				{
					int t; // 57
					{
						int i0; // 59
						int i1; // 60
						int i2; // 61
						const TraceVertex_t& vx0; // 63
						const TraceVertex_t& vx1; // 64
						const TraceVertex_t& vx2; // 65
						int idx; // 67
					}
				}
			}
		}
	}
	Vector::Vector(); // 831
	Vector::Vector(); // 831
	FourVectors::FourVectors(); // 831
	CUtlMemory<CacheOptimizedKDNode_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CacheOptimizedKDNode_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CacheOptimizedKDNode_t, CUtlMemory<CacheOptimizedKDNode_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CacheOptimizedKDNode_t, CUtlMemory<CacheOptimizedKDNode_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CacheOptimizedKDNode_t, CUtlMemory<CacheOptimizedKDNode_t, int> >::CUtlVector(); // 831
	CUtlBlockMemory<CacheOptimizedTriangle_t, int>::Init(
		int nGrowSize,
		int nInitSize);  // 126
	CUtlBlockMemory<CacheOptimizedTriangle_t, int>::CUtlBlockMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CacheOptimizedTriangle_t, CUtlBlockMemory<CacheOptimizedTriangle_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CacheOptimizedTriangle_t, CUtlBlockMemory<CacheOptimizedTriangle_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 14
	CUtlBlockVector<CacheOptimizedTriangle_t, int>::CUtlBlockVector(
			int growSize,
			int initCapacity);  // 831
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 831
	CUtlMemory<LightDesc_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<LightDesc_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<LightDesc_t, CUtlMemory<LightDesc_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<LightDesc_t, CUtlMemory<LightDesc_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<LightDesc_t, CUtlMemory<LightDesc_t, int> >::CUtlVector(); // 831
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 831
	CUtlMemory<long long unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<long long unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<long long unsigned int, CUtlMemory<long long unsigned int, int> >::CUtlVector(); // 831
	CUtlBlockMemory<Vector2D, int>::Init(
		int nGrowSize,
		int nInitSize);  // 126
	CUtlBlockMemory<Vector2D, int>::CUtlBlockMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector2D, CUtlBlockMemory<Vector2D, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector2D, CUtlBlockMemory<Vector2D, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 14
	CUtlBlockVector<Vector2D, int>::CUtlBlockVector(
			int growSize,
			int initCapacity);  // 831
	CUtlMemory<TraceVertex_t::ValidateGrowSize(); // 475
	CUtlMemory<TraceVertex_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<TraceVertex_t::ResetDbgInfo(); // 530
	CUtlVectorBase<TraceVertex_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<TraceVertex_t::CUtlVector(); // 831
	CUtlMemory<InstancedRayTracingEnvironmentBVHNode_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<InstancedRayTracingEnvironmentBVHNode_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<InstancedRayTracingEnvironmentBVHNode_t, CUtlMemory<InstancedRayTracingEnvironmentBVHNode_t, int> > this); // 530
	CUtlVectorBase(const CUtlVectorBase<InstancedRayTracingEnvironmentBVHNode_t, CUtlMemory<InstancedRayTracingEnvironmentBVHNode_t, int> >  this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector<InstancedRayTracingEnvironmentBVHNode_t, CUtlMemory<InstancedRayTracingEnvironmentBVHNode_t, int> >::CUtlVector(); // 831
	FourVectors::DuplicateVector(
			const Vector& v);  // 833
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 838
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 837
	CUtlMemory<InstancedRayTracingEnvironmentReference_t::ValidateGrowSize(); // 475
	CUtlMemory<InstancedRayTracingEnvironmentReference_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<InstancedRayTracingEnvironmentReference_t::ResetDbgInfo(); // 530
	CUtlVectorBase<InstancedRayTracingEnvironmentReference_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<InstancedRayTracingEnvironmentReference_t::CUtlVector(); // 1895
	CUtlVectorAutoPurge<InstancedRayTracingEnvironmentReference_t::CUtlVectorAutoPurge(); // 831
	CUtlMemory<RayTracingEnvironment::ValidateGrowSize(); // 475
	CUtlMemory<RayTracingEnvironment::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<RayTracingEnvironment::ResetDbgInfo(); // 530
	CUtlVectorBase<RayTracingEnvironment::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<RayTracingEnvironment::CUtlVector(); // 831
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 831
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 831
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 833
	RayTracingEnvironment::RayTracingEnvironment(); // 36
	{
		const CUtlVector<TraceDataForDraw_t, CUtlMemory<TraceDataForDraw_t, int> >* pTraceData; // 45
		Node_t::Node_t(
			const KeyType_t& k,
			const ElemType_t& e);  // 207
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CRenderMesh::operator[](
				short unsigned int i);  // 611
		CUtlRBTree<CUtlMap<const CRenderMesh::LeftChild(
				short unsigned int i);  // 1667
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CRenderMesh::operator[](
				short unsigned int i);  // 539
		CUtlRBTree<CUtlMap<const CRenderMesh::Element(
			short unsigned int i);  // 1665
		CKeyLess::operator(
				const Node_t& left,
				const Node_t& right);  // 1665
		CKeyLess::operator(
				const Node_t& left,
				const Node_t& right);  // 1669
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CRenderMesh::operator[](
				short unsigned int i);  // 617
		CUtlRBTree<CUtlMap<const CRenderMesh::RightChild(
				short unsigned int i);  // 1677
		CUtlRBTree<CUtlMap<const CRenderMesh::FindInsertionPosition(
					const Node_t& insert,
					bool bCheckForDuplicates,
					short unsigned int& parent,
					bool& leftchild,
					bool& isDuplicate);  // 1693
		{
			short unsigned int newNode; // 1709
			{
			}
		}
		{
			short unsigned int newNode; // 1696
		}
		CUtlRBTree<CUtlMap<const CRenderMesh::Insert(
			const Node_t& insert,
			ERBTreeInsertBehavior eInsertBehavior);  // 207
		CUtlMap<const CRenderMesh::Insert(
			const KeyType_t& key,
			const ElemType_t& insert,
			ERBTreeInsertBehavior eInsertBehavior);  // 39
		{
			int i; // 48
			CUtlVectorBase<TraceDataForDraw_t, CUtlMemory<TraceDataForDraw_t, int> >::Count(); // 48
			{
				const TraceDataForDraw_t& traceData; // 50
				int16 nFlags; // 52
				ResourceId_t id; // 54
				uint64 nMaterial; // 55
				CInterlockedIntT<int, 4>::operator int(); // 282
				ResourceHandleToData<InfoForResourceTypeIMaterial2>(const CWeakHandle<InfoForResourceTypeIMaterial2>& hResource); // 16
				IMaterial2::GetIntAttributeOrDefault(
							CUtlStringToken name,
							int nDefault);  // 20
				IMaterial2::GetIntAttributeOrDefault(
							CUtlStringToken name,
							int nDefault);  // 24
				IMaterial2::GetIntAttributeOrDefault(
							CUtlStringToken name,
							int nDefault);  // 28
				IMaterial2::GetIntAttributeOrDefault(
							CUtlStringToken name,
							int nDefault);  // 32
				IMaterial2::GetIntAttributeOrDefault(
							CUtlStringToken name,
							int nDefault);  // 36
				IMaterial2::GetIntAttributeOrDefault(
							CUtlStringToken name,
							int nDefault);  // 41
				IMaterial2::GetIntAttributeOrDefault(
							CUtlStringToken name,
							int nDefault);  // 45
				IMaterial2::GetIntAttributeOrDefault(
							CUtlStringToken name,
							int nDefault);  // 49
				IMaterial2::GetIntAttributeOrDefault(
							CUtlStringToken name,
							int nDefault);  // 53
				IMaterial2::GetIntAttributeOrDefault(
							CUtlStringToken name,
							int nDefault);  // 57
				IMaterial2::GetIntAttributeOrDefault(
							CUtlStringToken name,
							int nDefault);  // 61
				IMaterial2::GetIntAttributeOrDefault(
							CUtlStringToken name,
							int nDefault);  // 65
				GetRayTracingFlagsForMaterial(HMaterial hMaterial); // 52
				CUtlMemory<TraceDataForDraw_t, int>::operator[](
						int i);  // 609
				CUtlVectorBase<TraceDataForDraw_t, CUtlMemory<TraceDataForDraw_t, int> >::Element(
					int i);  // 50
				CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
				CStrongHandle<InfoForResourceTypeIMaterial2>::GetHandle(); // 52
				CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
				CStrongHandle<InfoForResourceTypeIMaterial2>::GetHandle(); // 54
				CWeakHandle<InfoForResourceTypeIMaterial2>::operator ResourceHandle_t(); // 54
				{
					int t; // 57
					{
						int i0; // 59
						int i1; // 60
						int i2; // 61
						const TraceVertex_t& vx0; // 63
						const TraceVertex_t& vx1; // 64
						const TraceVertex_t& vx2; // 65
						int idx; // 67
					}
				}
				ResourceId_t::GetRaw(); // 55
			}
		}
	}
	IRefCounted::IRefCounted(); // 194
	IMeshRayTrace::IMeshRayTrace(); // 351
	CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase(); // 351
	CRefCounted1<IMeshRayTrace, CRefCountServiceBase<true, CRefMT> >::CRefCounted1(); // 36
} /* size: 0, inline expansions: 74 (1752 bytes) */

// <0040F93D> meshsystem/rendermeshmgr.cpp:36
// variables: 14
void CMeshRayTrace::CMeshRayTrace(const CRenderMesh* pMeshData)
{
	{
		const CUtlVector<TraceDataForDraw_t, CUtlMemory<TraceDataForDraw_t, int> >* pTraceData; // 45
		{
			int i; // 48
			{
				const TraceDataForDraw_t& traceData; // 50
				int16 nFlags; // 52
				ResourceId_t id; // 54
				uint64 nMaterial; // 55
				{
					int t; // 57
					{
						int i0; // 59
						int i1; // 60
						int i2; // 61
						const TraceVertex_t& vx0; // 63
						const TraceVertex_t& vx1; // 64
						const TraceVertex_t& vx2; // 65
						int idx; // 67
					}
				}
			}
		}
	}
} /* size: 0 */

// <0040F5D3> meshsystem/rendermeshmgr.cpp:77
// function calls: 12
void CMeshRayTrace::~CMeshRayTrace()
{
	Node_t::Node_t(
		const KeyType_t& k);  // 342
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CRenderMesh::operator[](
			short unsigned int i);  // 545
	CUtlRBTree<CUtlMap<const CRenderMesh::Element(
		short unsigned int i);  // 1894
	CKeyLess::operator(
			const Node_t& left,
			const Node_t& right);  // 1894
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CRenderMesh::operator[](
			short unsigned int i);  // 611
	CUtlRBTree<CUtlMap<const CRenderMesh::LeftChild(
			short unsigned int i);  // 1895
	CKeyLess::operator(
			const Node_t& left,
			const Node_t& right);  // 1896
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CRenderMesh::operator[](
			short unsigned int i);  // 617
	CUtlRBTree<CUtlMap<const CRenderMesh::RightChild(
			short unsigned int i);  // 1897
	CUtlRBTree<CUtlMap<const CRenderMesh::Find(
		const Node_t& search);  // 1227
	CUtlRBTree<CUtlMap<const CRenderMesh::Remove(
		const Node_t& search);  // 342
	CUtlMap<const CRenderMesh::Remove(
		const KeyType_t& key);  // 81
} /* size: 286, inline expansions: 12 (517 bytes) */

// <0040F56B> meshsystem/rendermeshmgr.cpp:77
void CMeshRayTrace::~CMeshRayTrace()
{
} /* size: 36 */

// <0040F28B> meshsystem/rendermeshmgr.cpp:86
// variable: 1
// function calls: 9
void Find(const CRenderMesh* pMeshData)
{
	IndexType_t idx; // 91
	CUtlRBTree<CUtlMap<const CRenderMesh::FindAltKeyType<const CRenderMesh*>(
						const CRenderMesh* const& search);  // 243
	CUtlMap<const CRenderMesh::Find(
		const KeyType_t& key);  // 91
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CRenderMesh::IsIdxValid(
			short unsigned int i);  // 661
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CRenderMesh::IsIdxAfter(
			short unsigned int i,
			const Iterator_t& it);  // 664
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CRenderMesh::operator[](
			short unsigned int i);  // 611
	CUtlRBTree<CUtlMap<const CRenderMesh::LeftChild(
			short unsigned int i);  // 667
	CUtlRBTree<CUtlMap<const CRenderMesh::IsValidIndex(
			short unsigned int i);  // 659
	CUtlRBTree<CUtlMap<const CRenderMesh::IsValidIndex(
			short unsigned int i);  // 190
	CUtlMap<const CRenderMesh::IsValidIndex(
			IndexType_t i);  // 93
} /* size: 100, variables: 1, inline expansions: 9 (218 bytes) */

// <0040EF98> meshsystem/rendermeshmgr.cpp:102
// variable: 1
// function calls: 10
void MarkOutOfDate(const CRenderMesh* pMeshData)
{
	IndexType_t idx; // 104
	CUtlRBTree<CUtlMap<const CRenderMesh::FindAltKeyType<const CRenderMesh*>(
						const CRenderMesh* const& search);  // 243
	CUtlMap<const CRenderMesh::Find(
		const KeyType_t& key);  // 104
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CRenderMesh::IsIdxValid(
			short unsigned int i);  // 661
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CRenderMesh::IsIdxAfter(
			short unsigned int i,
			const Iterator_t& it);  // 664
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CRenderMesh::operator[](
			short unsigned int i);  // 611
	CUtlRBTree<CUtlMap<const CRenderMesh::LeftChild(
			short unsigned int i);  // 667
	CUtlRBTree<CUtlMap<const CRenderMesh::IsValidIndex(
			short unsigned int i);  // 659
	CUtlRBTree<CUtlMap<const CRenderMesh::IsValidIndex(
			short unsigned int i);  // 190
	CUtlMap<const CRenderMesh::IsValidIndex(
			IndexType_t i);  // 106
	CUtlMap<const CRenderMesh::RemoveAt(
		IndexType_t i);  // 109
} /* size: 115, variables: 1, inline expansions: 10 (233 bytes) */

// <0040EF6A> meshsystem/rendermeshmgr.cpp:117
void CMeshRayTrace::GetRayTracingEnvironment()
{
} /* size: 9 */

// <0040EBE0> meshsystem/rendermeshmgr.cpp:123
// variables: 6
// function calls: 9
void CMeshRayTrace::GetMeshTraceData(int nHitIndex)
{
	const CUtlVector<TraceDataForDraw_t, CUtlMemory<TraceDataForDraw_t, int> >* pTraceData; // 125
	const char   __FUNCTION__; // 50477
	const TriIntersectData_t& tri; // 130
	int nId; // 131
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 128
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 133
	}
	CUtlBlockMemory<CacheOptimizedTriangle_t, int>::MajorIndex(
			int i);  // 243
	CUtlBlockMemory<CacheOptimizedTriangle_t, int>::IsIdxValid(
			int i);  // 199
	CUtlBlockMemory<CacheOptimizedTriangle_t, int>::MajorIndex(
			int i);  // 200
	CUtlBlockMemory<CacheOptimizedTriangle_t, int>::MinorIndex(
			int i);  // 201
	{
	}
	CUtlBlockMemory<CacheOptimizedTriangle_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CacheOptimizedTriangle_t, CUtlBlockMemory<CacheOptimizedTriangle_t, int> >::operator[](
			int i);  // 130
	CUtlVectorBase<TraceDataForDraw_t, CUtlMemory<TraceDataForDraw_t, int> >::IsValidIndex(
			int i);  // 133
	CUtlMemory<TraceDataForDraw_t, int>::operator[](
			int i);  // 609
	CUtlVectorBase<TraceDataForDraw_t, CUtlMemory<TraceDataForDraw_t, int> >::Element(
		int i);  // 135
} /* size: 0, variables: 4, inline expansions: 9 (390 bytes) */

// <0040EBB2> meshsystem/rendermeshmgr.cpp:139
void CMeshRayTrace::IsOutOfDate()
{
} /* size: 12 */

// <0040EADD> meshsystem/rendermeshmgr.cpp:147
// function call: 1
void CRenderMeshManager::CRenderMeshManager()
{
	{
		{
		}
	}
	{
		IResourceTypeManager::IResourceTypeManager(); // 148
		{
		}
	}
} /* size: 0 */

// <0040EAA0> meshsystem/rendermeshmgr.cpp:147
// variables: 2
void CRenderMeshManager::CRenderMeshManager()
{
	const char   __FUNCTION__; // 50531
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 150
	}
} /* size: 0, variables: 1 */

// <0040EA72> meshsystem/rendermeshmgr.cpp:154
void CRenderMeshManager::~CRenderMeshManager()
{
} /* size: 16 */

// <0040E9EE> meshsystem/rendermeshmgr.cpp:154
// function call: 1
void CRenderMeshManager::~CRenderMeshManager()
{
	CRenderMeshManager::~CRenderMeshManager(); // 157
} /* size: 25, inline expansions: 1 (11 bytes) */

// <0040E7EE> meshsystem/rendermeshmgr.cpp:162
// variable: 1
// function calls: 9
void* CRenderMeshManager::GetErrorResource()
{
	CRenderMesh* pMesh; // 169
	CWeakHandle<InfoForResourceTypeCRenderMesh>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 164
	CStrongHandle<InfoForResourceTypeCRenderMesh>::operator==(
			const CWeakHandle<InfoForResourceTypeCRenderMesh>& hResource);  // 164
	CWeakHandle<InfoForResourceTypeCRenderMesh>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCRenderMesh>::GetHandle(); // 169
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCRenderMesh>(const CWeakHandle<InfoForResourceTypeCRenderMesh>& hResource); // 169
} /* size: 35, variables: 1, inline expansions: 9 (26 bytes) */

// <0040E64B> meshsystem/rendermeshmgr.cpp:176
// variables: 2
// function calls: 6
void CRenderMeshManager::DeallocateResource(void* pResourceData, IResourceDeallocatorUtils* pUtils)
{
	CRenderMesh* pData; // 178
	CRenderMesh* pRenderMesh; // 185
	CResourceDeallocatorUtils::GetDeallocationType(); // 179
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 187
} /* size: 142, variables: 2, inline expansions: 6 (165 bytes) */

// <004187A9> meshsystem/rendermeshmgr.cpp:193
// function calls: 20
void CRenderMeshManager::FinalizeResource(ResourceHandle_t hResource, ResourceLoadType_t nLoadType)
{
	{
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceHandle_t hResource,
				CResourceName* pTarget);  // 196
		CResourceNameGetter::CResourceNameGetter(
					ResourceHandle_t hResource);  // 310
		CResourceName::Get(); // 310
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 310
	}
	CWeakHandle<InfoForResourceTypeCRenderMesh>::InitUntyped(
			ResourceHandle_t hUntypedResource);  // 306
	CWeakHandle<InfoForResourceTypeCRenderMesh>::InitUntyped(
			ResourceHandle_t hUntypedResource);  // 235
	CWeakHandle<InfoForResourceTypeCRenderMesh>::CWeakHandle(); // 234
	FromUntypedHandle(ResourceHandle_t hResource); // 200
	CInterlockedIntT<int, 4>::operator int(); // 288
	ResourceHandleToNonConstData<InfoForResourceTypeCRenderMesh>(const CWeakHandle<InfoForResourceTypeCRenderMesh>& hResource); // 200
	IRenderDevice::IsEmptyAPI(); // 390
	IRenderDevice::IsNoOpDevice(); // 389
	CRenderMeshManager::UpdateTranslucencyFlags(
				CRenderMesh* pMesh,
				int nFlags);  // 209
	CRenderMeshManager::FinalizeRenderMesh(
				CRenderMesh* pRenderMesh,
				bool bIsReload);  // 200
	CRenderMeshManager::FinalizeResource(
			ResourceHandle_t hResource,
			ResourceLoadType_t nLoadType);  // 193
} /* size: 494, inline expansions: 11 (1459 bytes) */

// <0040E61A> meshsystem/rendermeshmgr.cpp:193
void CRenderMeshManager::FinalizeResource(ResourceHandle_t hResource, ResourceLoadType_t nLoadType)
{
} /* size: 0 */

// <00418655> meshsystem/rendermeshmgr.cpp:206
// function calls: 3
void CRenderMeshManager::FinalizeRenderMesh(CRenderMesh* pRenderMesh, bool bIsReload)
{
	IRenderDevice::IsEmptyAPI(); // 390
	IRenderDevice::IsNoOpDevice(); // 389
	CRenderMeshManager::UpdateTranslucencyFlags(
				CRenderMesh* pMesh,
				int nFlags);  // 209
} /* size: 69, inline expansions: 3 (43 bytes) */

// <0040E5E9> meshsystem/rendermeshmgr.cpp:206
void CRenderMeshManager::FinalizeRenderMesh(CRenderMesh* pRenderMesh, bool bIsReload)
{
} /* size: 0 */

// <0040E4F0> meshsystem/rendermeshmgr.cpp:216
// variables: 3
// function calls: 2
void CRenderMeshManager::InstallResourceType()
{
	bool bIsConsoleApp; // 218
	bool bIsDedicatedServer; // 219
	const char* pErrorManifest; // 220
	ResourceTypeName(void); // 673
	IResourceSystem::InstallTypeManager<448612625782>(
					IResourceTypeManager* pTypeManager,
					const char* pErrorManifestName);  // 221
} /* size: 152, variables: 3, inline expansions: 2 (38 bytes) */

// <0040E4A9> meshsystem/rendermeshmgr.cpp:224
void CRenderMeshManager::RemoveResourceType()
{
} /* size: 26 */

// <0040E47B> meshsystem/rendermeshmgr.cpp:229
void CRenderMeshManager::EnableTraceLines()
{
} /* size: 9 */

// <0040DD9B> meshsystem/rendermeshmgr.cpp:350
// variable: 1
// function calls: 4
void CRenderMeshManager::FindOrCreateMeshRayTrace(const CRenderMesh* pMesh)
{
	IMeshRayTrace* pFound; // 355
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 199
	CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 356
	CRefCounted1<IMeshRayTrace, CRefCountServiceBase<true, CRefMT> >::AddRef(); // 359
} /* size: 163, variables: 1, inline expansions: 4 (20 bytes) */

// <0040DB04> meshsystem/rendermeshmgr.cpp:366
// variables: 4
// function calls: 8
void CRenderMeshManager::UpdateInputLayoutsForMesh(CRenderMesh* pMesh)
{
	int nSceneObjCount; // 373
	{
		int i; // 374
		{
			int nDrawCallCount; // 376
			{
				int j; // 377
				CUtlMemory<CSceneObjectData, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
						int i);  // 379
				CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::operator[](
						int i);  // 379
			}
			CUtlMemory<CSceneObjectData, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
					int i);  // 376
			CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Count(); // 376
		}
	}
	CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::Count(); // 373
} /* size: 134, variables: 1, inline expansions: 1 (4 bytes) */

// <00418CDB> meshsystem/rendermeshmgr.cpp:385
// variables: 5
// function calls: 2
void CRenderMeshManager::UpdateTranslucencyFlags(CRenderMesh* pMesh, int nFlags)
{
	int nSceneObjCount; // 399
	int nTotalDrawCallCount; // 400
	int nTotalTranslucentDrawCallCount; // 401
	bool bCachedDataChanged; // 402
	RenderMeshTranslucencyType_t nOldType; // 416
	IRenderDevice::IsEmptyAPI(); // 390
	IRenderDevice::IsNoOpDevice(); // 389
} /* size: 69, variables: 5, inline expansions: 2 (10 bytes) */

// <0041799F> meshsystem/rendermeshmgr.cpp:385
// variables: 15
// function calls: 50
void CRenderMesh::UpdateTranslucencyFlags()
{
	int nSceneObjCount; // 399
	int nTotalDrawCallCount; // 400
	int nTotalTranslucentDrawCallCount; // 401
	bool bCachedDataChanged; // 402
	RenderMeshTranslucencyType_t nOldType; // 416
	CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::Count(); // 399
	{
		int i; // 404
		{
			int nDrawCallCount; // 406
			int nTranslucentDrawCallCount; // 407
			CUtlMemory<CSceneObjectData, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
					int i);  // 406
			CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Count(); // 406
			CUtlMemory<CMaterialDrawDescriptor, int>::Base(); // 112
			CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Base(); // 408
			CUtlMemory<CSceneObjectData, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
					int i);  // 410
		}
	}
	{
		CUtlVector<CMeshInstance*, CUtlMemory<CMeshInstance*, int> > meshInstances; // 425
		int nInstances; // 429
		CUtlMemory<CMeshInstance::ValidateGrowSize(); // 475
		CUtlMemory<CMeshInstance::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CMeshInstance::ResetDbgInfo(); // 530
		CUtlVectorBase<CMeshInstance::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CMeshInstance::CUtlVector(); // 425
		{
			int i; // 430
			{
				CMeshInstance* pInstance; // 432
				CSceneObjectData* pSceneObjectData; // 435
				ESceneObjectFlags nNewFlags; // 446
				CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 72
				CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::IsValid(); // 287
				CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 64
				CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::GetData(); // 292
				CUtlMemory<CSceneObjectData, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
						int i);  // 305
				CMeshInstance::GetSceneObjectData(); // 435
				CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Count(); // 437
				CUtlMemory<CSceneObjectData, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
						int i);  // 437
				CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Count(); // 437
				{
					int draw; // 439
					CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Count(); // 439
					CUtlMemory<CSceneObjectData, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
							int i);  // 441
					CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::operator[](
							int i);  // 441
					CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::operator[](
							int i);  // 441
					CUtlMemory<CSceneObjectData, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
							int i);  // 442
					CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::operator[](
							int i);  // 442
					CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::operator[](
							int i);  // 442
				}
				{
				}
				CUtlMemory<CMeshInstance::operator[](
						int i);  // 588
				CUtlVectorBase<CMeshInstance::operator[](
						int i);  // 432
			}
		}
		CUtlVectorBase<CMeshInstance::Count(); // 429
		CUtlVectorBase<CMeshInstance::RemoveAll(); // 1798
		CUtlMemory<CMeshInstance::IsExternallyAllocated(); // 905
		CUtlMemory<CMeshInstance::Purge(); // 903
		CUtlMemory<CMeshInstance::Purge(); // 1799
		CUtlVectorBase<CMeshInstance::Purge(); // 560
		ValidateAlignment<CMeshInstance*>(void); // 508
		CUtlMemory<CMeshInstance::Purge(); // 510
		CUtlMemory<CMeshInstance::~CUtlMemory(); // 562
		CUtlVectorBase<CMeshInstance::~CUtlVectorBase(); // 410
		CUtlVector<CMeshInstance::~CUtlVector(); // 453
	}
} /* size: 0, variables: 5, inline expansions: 1 (17 bytes) */

// <0040D9A5> meshsystem/rendermeshmgr.cpp:385
// variables: 17
void CRenderMeshManager::UpdateTranslucencyFlags(CRenderMesh* pMesh, int nFlags)
{
	int nSceneObjCount; // 399
	int nTotalDrawCallCount; // 400
	int nTotalTranslucentDrawCallCount; // 401
	bool bCachedDataChanged; // 402
	RenderMeshTranslucencyType_t nOldType; // 416
	const char   __FUNCTION__; // 50651
	{
		int i; // 404
		{
			int nDrawCallCount; // 406
			int nTranslucentDrawCallCount; // 407
		}
	}
	{
		CUtlVector<CMeshInstance*, CUtlMemory<CMeshInstance*, int> > meshInstances; // 425
		int nInstances; // 429
		{
			int i; // 430
			{
				CMeshInstance* pInstance; // 432
				CSceneObjectData* pSceneObjectData; // 435
				ESceneObjectFlags nNewFlags; // 446
				{
					int draw; // 439
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 447
				}
			}
		}
	}
} /* size: 0, variables: 6 */

// <0040D0EE> meshsystem/rendermeshmgr.cpp:459
// variables: 4
// function calls: 28
void CRenderMeshManager::CreateMeshFromData(const char* pMeshName, const CKeyValues3Context& diskKV3Data, const RuntimeBuffersInfo_t& buffersInfo, bool bIsErrorMesh, IRD_RegisterResourceDataUtils* pUtils, ResourceHandle_t hOriginatingResource, ResourceId_t nOriginatingResourceId)
{
	CSmartPtr<CRenderMesh, CRefCountAccessor> pRenderMeshPtr; // 467
	CRenderMesh* pRenderMesh; // 468
	{
		CKV3TransferLoadContext loadCtx; // 473
		CKV3Transfer_ResourceLoadInterface resourceLoadInterface; // 474
		CSmartPtr<CRenderMesh, CRefCountAccessor>::operator=(
				CSmartPtr<CRenderMesh, CRefCountAccessor>& other);  // 470
		CSmartPtr<CRenderMesh, CRefCountAccessor>::~CSmartPtr(); // 470
		IKV3TransferInterface_ResourceLoad::IKV3TransferInterface_ResourceLoad(); // 19
		ResourceId_t::ResourceId_t(); // 19
		CKV3Transfer_ResourceLoadInterface::CKV3Transfer_ResourceLoadInterface(
							IRD_RegisterResourceDataUtils* pDataUtils,
							ResourceHandle_t hOriginatingResource,
							ResourceId_t nOriginatingResourceId);  // 474
		CKV3TransferContextBase::AddInterface<CKV3Transfer_ResourceLoadInterface>(
								CKV3Transfer_ResourceLoadInterface* pInterface);  // 475
		CKeyValues3Context::Root(); // 476
		CUtlStack<const KeyValues3::Count(); // 413
		CKV3TransferLoadContext::LoadClassInstance<CRenderMesh>(
						CRenderMesh* pClassInstance,
						const KeyValues3* pNestedValue);  // 476
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 89
		CKV3TransferContextBase::GetErrorMessage(); // 479
	}
	CSmartPtr<CRenderMesh, CRefCountAccessor>::operator=(
			CRenderMesh* pObj);  // 319
	CSmartPtr<CRenderMesh, CRefCountAccessor>::CSmartPtr(
			CRenderMesh* pObj);  // 467
	IRenderDevice::IsEmptyAPI(); // 390
	IRenderDevice::IsNoOpDevice(); // 489
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 199
	CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 329
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::AddRef(); // 500
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
	Release<CRenderMesh>(CRenderMesh* pObj); // 344
	CSmartPtr<CRenderMesh, CRefCountAccessor>::~CSmartPtr(); // 502
} /* size: 650, variables: 2, inline expansions: 15 (311 bytes) */

// <0040A929> meshsystem/rendermeshmgr.cpp:507
void AsyncProcessDataResult::AsyncProcessDataResult()
{
} /* size: 0 */

// <0040A90C> meshsystem/rendermeshmgr.cpp:507
inline void AsyncProcessDataResult::AsyncProcessDataResult()
{
} /* size: 0 */

// <0040778E> meshsystem/rendermeshmgr.cpp:507
// variables: 2
// function calls: 67
void AsyncProcessDataResult::~AsyncProcessDataResult()
{
	{
		int i; // 1721
		CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this,
			int i);  // 1723
		CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::RemoveAll(); // 1798
		CUtlMemory<RenderInputLayoutField_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<RenderInputLayoutField_t, int>::Purge(); // 903
		CUtlMemory<RenderInputLayoutField_t, int>::Purge(); // 1799
		CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Purge(); // 560
		ValidateAlignment<RenderInputLayoutField_t>(void); // 508
		CUtlMemory<RenderInputLayoutField_t, int>::Purge(); // 510
		CUtlMemory<RenderInputLayoutField_t, int>::~CUtlMemory(); // 562
		CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::~CUtlVector(); // 489
		CUtlVectorFixedGrowableCompat<RenderInputLayoutField_t, 4>::~CUtlVectorFixedGrowableCompat(); // 782
		BufferInfo_t::~BufferInfo_t(); // 1526
		Destruct<RuntimeBuffersInfo_t::BufferInfo_t>(BufferInfo_t* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 1798
	CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::IsExternallyAllocated(); // 577
	CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::ConvertToExternalMemory(
				BufferInfo_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<RuntimeBuffersInfo_t::BufferInfo_t, int>::Purge_FixedGrowable(
				BufferInfo_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<RuntimeBuffersInfo_t::BufferInfo_t, int>::Purge_FixedGrowable(
				BufferInfo_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<1, RuntimeBuffersInfo_t::BufferInfo_t, 8>::Base(); // 237
	CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, int>::Purge(
		int numElements);  // 1799
	ResetDbgInfo(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 1800
	Purge(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 560
	ValidateAlignment<RuntimeBuffersInfo_t::BufferInfo_t>(void); // 508
	CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::Purge(); // 903
	CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::Purge(); // 510
	CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<RuntimeBuffersInfo_t::BufferInfo_t, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, int>::~CUtlMemoryFixedGrowable(); // 562
	~CUtlVectorBase(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 478
	CUtlVectorFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1>::~CUtlVectorFixedGrowable(); // 777
	{
		int i; // 1721
		CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this,
			int i);  // 1723
		CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::RemoveAll(); // 1798
		CUtlMemory<RenderInputLayoutField_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<RenderInputLayoutField_t, int>::Purge(); // 903
		CUtlMemory<RenderInputLayoutField_t, int>::Purge(); // 1799
		CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Purge(); // 560
		ValidateAlignment<RenderInputLayoutField_t>(void); // 508
		CUtlMemory<RenderInputLayoutField_t, int>::Purge(); // 510
		CUtlMemory<RenderInputLayoutField_t, int>::~CUtlMemory(); // 562
		CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::~CUtlVector(); // 489
		CUtlVectorFixedGrowableCompat<RenderInputLayoutField_t, 4>::~CUtlVectorFixedGrowableCompat(); // 782
		BufferInfo_t::~BufferInfo_t(); // 1526
		Destruct<RuntimeBuffersInfo_t::BufferInfo_t>(BufferInfo_t* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 1798
	CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::IsExternallyAllocated(); // 577
	CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::ConvertToExternalMemory(
				BufferInfo_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<RuntimeBuffersInfo_t::BufferInfo_t, int>::Purge_FixedGrowable(
				BufferInfo_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<RuntimeBuffersInfo_t::BufferInfo_t, int>::Purge_FixedGrowable(
				BufferInfo_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<1, RuntimeBuffersInfo_t::BufferInfo_t, 8>::Base(); // 237
	CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::Base(); // 112
	Base(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 368
	ResetDbgInfo(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 1800
	Purge(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 560
	CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::Purge(); // 903
	CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::Purge(); // 510
	ValidateAlignment<RuntimeBuffersInfo_t::BufferInfo_t>(void); // 508
	CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<RuntimeBuffersInfo_t::BufferInfo_t, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, int>::~CUtlMemoryFixedGrowable(); // 562
	~CUtlVectorBase(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 478
	CUtlVectorFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1>::~CUtlVectorFixedGrowable(); // 777
	RuntimeBuffersInfo_t::~RuntimeBuffersInfo_t(); // 507
} /* size: 525, inline expansions: 37 (2792 bytes) */

// <00406A76> meshsystem/rendermeshmgr.cpp:507
// variables: 2
// function calls: 69
void AsyncProcessDataResult::~AsyncProcessDataResult()
{
	{
		int i; // 1721
		CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this,
			int i);  // 1723
		CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::RemoveAll(); // 1798
		CUtlMemory<RenderInputLayoutField_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<RenderInputLayoutField_t, int>::Purge(); // 903
		CUtlMemory<RenderInputLayoutField_t, int>::Purge(); // 1799
		CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Purge(); // 560
		ValidateAlignment<RenderInputLayoutField_t>(void); // 508
		CUtlMemory<RenderInputLayoutField_t, int>::Purge(); // 510
		CUtlMemory<RenderInputLayoutField_t, int>::~CUtlMemory(); // 562
		CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::~CUtlVector(); // 489
		CUtlVectorFixedGrowableCompat<RenderInputLayoutField_t, 4>::~CUtlVectorFixedGrowableCompat(); // 782
		BufferInfo_t::~BufferInfo_t(); // 1526
		Destruct<RuntimeBuffersInfo_t::BufferInfo_t>(BufferInfo_t* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 1798
	CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::IsExternallyAllocated(); // 577
	CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::ConvertToExternalMemory(
				BufferInfo_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<RuntimeBuffersInfo_t::BufferInfo_t, int>::Purge_FixedGrowable(
				BufferInfo_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<RuntimeBuffersInfo_t::BufferInfo_t, int>::Purge_FixedGrowable(
				BufferInfo_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<1, RuntimeBuffersInfo_t::BufferInfo_t, 8>::Base(); // 237
	CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, int>::Purge(
		int numElements);  // 1799
	ResetDbgInfo(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 1800
	Purge(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 560
	ValidateAlignment<RuntimeBuffersInfo_t::BufferInfo_t>(void); // 508
	CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::Purge(); // 903
	CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::Purge(); // 510
	CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<RuntimeBuffersInfo_t::BufferInfo_t, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, int>::~CUtlMemoryFixedGrowable(); // 562
	~CUtlVectorBase(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 478
	CUtlVectorFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1>::~CUtlVectorFixedGrowable(); // 777
	{
		int i; // 1721
		CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this,
			int i);  // 1723
		CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::RemoveAll(); // 1798
		CUtlMemory<RenderInputLayoutField_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<RenderInputLayoutField_t, int>::Purge(); // 903
		CUtlMemory<RenderInputLayoutField_t, int>::Purge(); // 1799
		CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Purge(); // 560
		ValidateAlignment<RenderInputLayoutField_t>(void); // 508
		CUtlMemory<RenderInputLayoutField_t, int>::Purge(); // 510
		CUtlMemory<RenderInputLayoutField_t, int>::~CUtlMemory(); // 562
		CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::~CUtlVector(); // 489
		CUtlVectorFixedGrowableCompat<RenderInputLayoutField_t, 4>::~CUtlVectorFixedGrowableCompat(); // 782
		BufferInfo_t::~BufferInfo_t(); // 1526
		Destruct<RuntimeBuffersInfo_t::BufferInfo_t>(BufferInfo_t* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 1798
	CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::IsExternallyAllocated(); // 577
	CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::ConvertToExternalMemory(
				BufferInfo_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<RuntimeBuffersInfo_t::BufferInfo_t, int>::Purge_FixedGrowable(
				BufferInfo_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<RuntimeBuffersInfo_t::BufferInfo_t, int>::Purge_FixedGrowable(
				BufferInfo_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<1, RuntimeBuffersInfo_t::BufferInfo_t, 8>::Base(); // 237
	CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::Base(); // 112
	Base(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 368
	ResetDbgInfo(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 1800
	Purge(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 560
	CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::Purge(); // 903
	CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::Purge(); // 510
	ValidateAlignment<RuntimeBuffersInfo_t::BufferInfo_t>(void); // 508
	CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<RuntimeBuffersInfo_t::BufferInfo_t, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, int>::~CUtlMemoryFixedGrowable(); // 562
	~CUtlVectorBase(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 478
	CUtlVectorFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1>::~CUtlVectorFixedGrowable(); // 777
	RuntimeBuffersInfo_t::~RuntimeBuffersInfo_t(); // 507
	IAsyncProcessedDataResult::~IAsyncProcessedDataResult(); // 507
	AsyncProcessDataResult::~AsyncProcessDataResult(); // 507
} /* size: 541, inline expansions: 39 (3317 bytes) */

// <00406A59> meshsystem/rendermeshmgr.cpp:507
inline void AsyncProcessDataResult::~AsyncProcessDataResult()
{
} /* size: 0 */

// <0040D0C0> meshsystem/rendermeshmgr.cpp:513
void CRenderMeshManager::WantsAsyncProcessData()
{
} /* size: 10 */

// <0040C9B8> meshsystem/rendermeshmgr.cpp:518
// variables: 6
// function calls: 24
void CRenderMeshManager::AsyncProcessData(ResourceHandle_t hResource, const ResourceFileHeader_t* pHeader)
{
	ResourceHeaderBlockInfo_t dataBlockEntry; // 525
	ResourceHeaderBlockInfo_t vbibBlockEntry; // 526
	unique_ptr<CRenderMeshManager::AsyncProcessDataResult, std::default_delete<CRenderMeshManager::AsyncProcessDataResult> > pResult; // 534
	CUtlBuffer diskDataBuffer; // 537
	CUtlString errorMsg; // 538
	CUtlString::CUtlString(); // 538
	CUtlString::Get(); // 541
	CUtlString::~CUtlString(); // 551
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 551
	{
		AsyncProcessDataResult *& __ptr; // 396
		_M_ptr(const __uniq_ptr_impl<CRenderMeshManager::AsyncProcessDataResult, std::default_delete<CRenderMeshManager::AsyncProcessDat this); // 396
		get_deleter(const unique_ptr<CRenderMeshManager::AsyncProcessDataResult, std::default_delete<CRenderMeshManager::AsyncProcessDataResu this); // 398
		default_delete<CRenderMeshManager::AsyncProcessDataResult>::operator(
				AsyncProcessDataResult* __ptr);  // 398
	}
	~unique_ptr(const unique_ptr<CRenderMeshManager::AsyncProcessDataResult, std::default_delete<CRenderMeshManager::AsyncProcessDataResu this); // 551
	get_deleter(const unique_ptr<CRenderMeshManager::AsyncProcessDataResult, std::default_delete<CRenderMeshManager::AsyncProcessDataResu this); // 374
	release(const unique_ptr<CRenderMeshManager::AsyncProcessDataResult, std::default_delete<CRenderMeshManager::AsyncProcessDataResu this); // 374
	default_delete<IAsyncProcessedDataResult>::default_delete<CRenderMeshManager::AsyncProcessDataResult>(
									const default_delete<CRenderMeshManager::AsyncProcessDataResult>  &);  // 104
	_Head_base<1, std::default_delete<IAsyncProcessedDataResult>, true>::_Head_base<std::default_delete<CRenderMeshManager::AsyncProcessDataResult> >(
											default_delete<CRenderMeshManager::AsyncProcessDataResult>& __h);  // 571
	_Tuple_impl<1, std::default_delete<IAsyncProcessedDataResult> >::_Tuple_impl<std::default_delete<CRenderMeshManager::AsyncProcessDataResult> >(
											default_delete<CRenderMeshManager::AsyncProcessDataResult>& __head);  // 315
	_Head_base<0, IAsyncProcessedDataResult::_Head_base<IAsyncProcessedDataResult*&>(
						IAsyncProcessedDataResult *& __h);  // 315
	_Tuple_impl<0, IAsyncProcessedDataResult::_Tuple_impl<IAsyncProcessedDataResult*&, std::default_delete<CRenderMeshManager::AsyncProcessDataResult> >(
															IAsyncProcessedDataResult *& __head);  // 985
	tuple<IAsyncProcessedDataResult::tuple<IAsyncProcessedDataResult*&, std::default_delete<CRenderMeshManager::AsyncProcessDataResult> >(); // 174
	__uniq_ptr_impl<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::__uniq_ptr_impl<std::default_delete<CRenderMeshManager::AsyncProcessDataResult> >(
												pointer __p,
												default_delete<CRenderMeshManager::AsyncProcessDataResult>& __d);  // 234
	__uniq_ptr_data<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult>, true, true>::__uniq_ptr_data<std::default_delete<CRenderMeshManager::AsyncProcessDataResult> >(
												pointer,
												default_delete<CRenderMeshManager::AsyncProcessDataResult> &);  // 374
	unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::unique_ptr<CRenderMeshManager::AsyncProcessDataResult, std::default_delete<CRenderMeshManager::AsyncProcessDataResult> >(
																unique_ptr<CRenderMeshManager::AsyncProcessDataResult, std::default_delete<CRenderMeshManager::AsyncProcessDataResult> >  __u);  // 550
} /* size: 631, variables: 5, inline expansions: 21 (350 bytes) */

// <0040C074> meshsystem/rendermeshmgr.cpp:553
// variables: 4
// function calls: 29
void CRenderMeshManager::AllocateResource(ResourceHandle_t hResource, const ResourceId_t nId, const ResourceFileHeader_t* pHeader, IRD_RegisterResourceDataUtils* pUtils)
{
	CResourceNameGetter meshName; // 562
	bool bIsErrorMesh; // 563
	AsyncProcessDataResult* pMeshData; // 565
	CRenderMesh* pRenderMesh; // 573
	CUtlSymbolLarge::String(); // 160
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 184
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 180
	ResourceGetName(ResourceHandle_t hResource,
			CResourceName* pTarget);  // 196
	CResourceNameGetter::CResourceNameGetter(
				ResourceHandle_t hResource);  // 562
	CWeakHandle<InfoForResourceTypeCRenderMesh>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCRenderMesh>::GetHandle(); // 563
	CResourceName::Get(); // 573
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 583
	CUtlSymbolLarge::String(); // 160
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 184
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 180
	ResourceGetName(ResourceHandle_t hResource,
			CResourceName* pTarget);  // 196
	CResourceNameGetter::CResourceNameGetter(
				ResourceHandle_t hResource);  // 557
	CResourceName::Get(); // 557
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 557
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 583
	CResourceName::Get(); // 576
	CResourceName::Get(); // 568
} /* size: 677, variables: 4, inline expansions: 29 (534 bytes) */

