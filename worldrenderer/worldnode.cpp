
//
// worldrenderer/worldnode.cpp
//
//	referenced by: libengine2.so
//
//	functions: 37
//

// <0110DD07> worldrenderer/worldnode.cpp:39
void CWorldNode::CWorldNode(WorldNode_t* pWorldNodeData)
{
} /* size: 0 */

// <0110BA20> worldrenderer/worldnode.cpp:46
void CWorldNode::~CWorldNode()
{
} /* size: 0 */

// <0110A77C> worldrenderer/worldnode.cpp:52
// variables: 13
// function calls: 79
void CWorldNode::ApplyStreamOverrides(CWorldSceneObjectRef** pSceneObjects, int nSceneObjects, CNodeSceneObjectData* pNodeData, const ExtraVertexStreamOverride_t* pStreamOverrides, int* pOverrideIndices, int nOverrides)
{
	CUtlVector<ExtraSceneObjectStreamDesc_t, CUtlMemory<ExtraSceneObjectStreamDesc_t, int> > streamDescs; // 55
	{
		int s; // 56
		{
			CMeshInstance* pMeshInstance; // 59
			{
				uint nMeshIndex; // 62
				uint nStartDrawCall; // 63
				CModelMeshHandle hCurrentMesh; // 64
				{
					const CSceneObjectData* pSceneObjectData; // 69
					uint nNumDrawCalls; // 70
					uint nEndDrawCall; // 71
					{
						int o; // 73
						{
							int nOverrideIndex; // 75
							const ExtraVertexStreamOverride_t* pStreamOverride; // 76
							ExtraSceneObjectStreamDesc_t& streamDesc; // 90
							CUtlMemory<VertexBufferHandle_t__::operator[](
									int i);  // 588
							CUtlVectorBase<VertexBufferHandle_t__::operator[](
									int i);  // 87
							CUtlMemory<ExtraSceneObjectStreamDesc_t, int>::operator[](
									int i);  // 602
							CUtlVectorBase<ExtraSceneObjectStreamDesc_t, CUtlMemory<ExtraSceneObjectStreamDesc_t, int> >::Element(
								int i);  // 1148
							SceneObjectOverrideBase_t::SceneObjectOverrideBase_t(); // 38
							CRenderBufferBinding::CRenderBufferBinding(); // 38
							ExtraSceneObjectStreamDesc_t::ExtraSceneObjectStreamDesc_t(); // 1479
							Construct<ExtraSceneObjectStreamDesc_t>(ExtraSceneObjectStreamDesc_t* pMemory); // 1148
							CUtlMemory<ExtraSceneObjectStreamDesc_t, int>::Grow(
								int num);  // 806
							CUtlVectorBase<ExtraSceneObjectStreamDesc_t, CUtlMemory<ExtraSceneObjectStreamDesc_t, int> >::GrowMemory(
									int num);  // 1145
							CUtlVectorBase<ExtraSceneObjectStreamDesc_t, CUtlMemory<ExtraSceneObjectStreamDesc_t, int> >::AddToTail(); // 90
							CUtlMemory<VertexBufferHandle_t__::operator[](
									int i);  // 588
							CUtlVectorBase<VertexBufferHandle_t__::operator[](
									int i);  // 92
							CastPtrToUint64(const void* p); // 92
							operator&(MeshDrawPrimitiveFlags_t a,
									MeshDrawPrimitiveFlags_t b);  // 45
							operator&(MeshDrawPrimitiveFlags_t a,
									MeshDrawPrimitiveFlags_t b);  // 46
							operator&(MeshDrawPrimitiveFlags_t a,
									MeshDrawPrimitiveFlags_t b);  // 47
							operator&(MeshDrawPrimitiveFlags_t a,
									MeshDrawPrimitiveFlags_t b);  // 48
							operator&(MeshDrawPrimitiveFlags_t a,
									MeshDrawPrimitiveFlags_t b);  // 49
							operator&(MeshDrawPrimitiveFlags_t a,
									MeshDrawPrimitiveFlags_t b);  // 50
							operator&(MeshDrawPrimitiveFlags_t a,
									MeshDrawPrimitiveFlags_t b);  // 51
							ConvertV0DrawPrimitiveFlags(MeshDrawPrimitiveFlags_t nOld); // 94
							CUtlMemory<VertexBufferHandle_t__::operator[](
									int i);  // 588
							CUtlVectorBase<VertexBufferHandle_t__::operator[](
									int i);  // 97
							CUtlMemory<VertexBufferHandle_t__::NumAllocated(); // 1196
							CUtlMemory<VertexBufferHandle_t__::operator[](
									int i);  // 602
							CUtlVectorBase<VertexBufferHandle_t__::Element(
								int i);  // 1201
							CopyConstruct<VertexBufferHandle_t__*>(VertexBufferHandle_t__** pMemory,
												VertexBufferHandle_t__* const& src);  // 1201
							CUtlMemory<VertexBufferHandle_t__::Base(); // 112
							CUtlVectorBase<VertexBufferHandle_t__::Base(); // 368
							CUtlVectorBase<VertexBufferHandle_t__::ResetDbgInfo(); // 824
							CUtlVectorBase<VertexBufferHandle_t__::GrowMemory(
									int num);  // 1198
							CUtlVectorBase<VertexBufferHandle_t__::AddToTail(
									VertexBufferHandle_t__* const& src);  // 97
						}
					}
					CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 72
					CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::IsValid(); // 287
					CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 64
					CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::GetData(); // 292
					CUtlMemory<CSceneObjectData, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
							int i);  // 305
					CMeshInstance::GetSceneObjectData(); // 69
					CUtlVectorBase<ExtraSceneObjectStreamDesc_t, CUtlMemory<ExtraSceneObjectStreamDesc_t, int> >::RemoveAll(); // 67
					CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Count(); // 70
					CMeshInstance::GetNext(); // 105
					CWeakHandle<InfoForResourceTypeCModel>::Init(
						const CWeakHandle<InfoForResourceTypeCModel>& src);  // 273
					CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(
							const CWeakHandle<InfoForResourceTypeCModel>& src);  // 100
					CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >::GetModelHandle(); // 97
					CStrongHandle<InfoForResourceTypeCModel>::operator!=(
							const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 97
					CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::operator!=<CWeakHandle<InfoForResourceTypeCModel> >(
												const CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >& rhs);  // 109
					CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 38
					CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >::CModelMeshHandleBase(); // 142
					CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
					FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
					CStrongHandle<InfoForResourceTypeCModel>::operator CWeakHandle<InfoForResourceTypeCModel>(); // 100
					CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::GetModelHandle(); // 188
					CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >::Assign(
						const CModelMeshHandleStrong& h);  // 143
					CModelMeshHandle::CModelMeshHandle(
							const CModelMeshHandleStrong& h);  // 113
				}
				CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 38
				CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >::CModelMeshHandleBase(); // 142
				CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
				CStrongHandle<InfoForResourceTypeCModel>::operator CWeakHandle<InfoForResourceTypeCModel>(); // 100
				CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::GetModelHandle(); // 188
				CWeakHandle<InfoForResourceTypeCModel>::Init(
					const CWeakHandle<InfoForResourceTypeCModel>& src);  // 331
				CWeakHandle<InfoForResourceTypeCModel>::operator=(
						const CWeakHandle<InfoForResourceTypeCModel>& src);  // 188
				CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::GetMeshIndex(); // 189
				CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >::Assign(
					const CModelMeshHandleStrong& h);  // 143
				CModelMeshHandle::CModelMeshHandle(
						const CModelMeshHandleStrong& h);  // 64
			}
			CWorldSceneObjectRef::SceneObject(); // 59
			CSceneObject::GetMeshInstanceData(); // 59
		}
	}
	CUtlMemory<ExtraSceneObjectStreamDesc_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<ExtraSceneObjectStreamDesc_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ExtraSceneObjectStreamDesc_t, CUtlMemory<ExtraSceneObjectStreamDesc_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<ExtraSceneObjectStreamDesc_t, CUtlMemory<ExtraSceneObjectStreamDesc_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ExtraSceneObjectStreamDesc_t, CUtlMemory<ExtraSceneObjectStreamDesc_t, int> >::CUtlVector(); // 55
	CUtlMemory<ExtraSceneObjectStreamDesc_t, int>::Purge(); // 903
	CUtlMemory<ExtraSceneObjectStreamDesc_t, int>::Purge(); // 1799
	CUtlVectorBase<ExtraSceneObjectStreamDesc_t, CUtlMemory<ExtraSceneObjectStreamDesc_t, int> >::Purge(); // 560
	CUtlVectorBase<ExtraSceneObjectStreamDesc_t, CUtlMemory<ExtraSceneObjectStreamDesc_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<ExtraSceneObjectStreamDesc_t, CUtlMemory<ExtraSceneObjectStreamDesc_t, int> >::~CUtlVector(); // 122
} /* size: 0, variables: 1, inline expansions: 10 (242 bytes) */

// <0110A751> worldrenderer/worldnode.cpp:125
int GetLayerIndexForSceneObject(int nSceneObjectIndex, const WorldNode_t* pWorldData)
{
} /* size: 0 */

// <01105F9F> worldrenderer/worldnode.cpp:136
// variables: 17
// function calls: 341
void CWorldNode::CreateProceduralModelsForOldMeshes()
{
	int nSceneObjects; // 138
	{
		int s; // 139
		{
			SceneObject_t* pMapSceneObjectData; // 141
			HRenderMesh_Internal hOldMesh; // 142
			CModelBuilder modelBuilder; // 149
			HModel hModel; // 153
			CUtlMemory<SceneObject_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<SceneObject_t, CUtlMemory<SceneObject_t, int> >::operator[](
					int i);  // 141
			CWeakHandle<InfoForResourceTypeCRenderMesh>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
			CStrongHandle<InfoForResourceTypeCRenderMesh>::GetHandle(); // 142
			CWeakHandle<InfoForResourceTypeCRenderMesh>::HasData(); // 143
			CStrongHandle<InfoForResourceTypeCModel>::HasIdentity(); // 146
			CInterlockedIntT<int, 4>::operator int(); // 282
			ResourceHandleToData<InfoForResourceTypeCRenderMesh>(const CWeakHandle<InfoForResourceTypeCRenderMesh>& hResource); // 150
			CWeakHandle<InfoForResourceTypeCModel>::GetBinding(); // 673
			ThreadInterlockedIncrement(volatile int32* p); // 576
			CInterlockedIntT<int, 4>::operator++(); // 570
			CStrongHandle<InfoForResourceTypeCModel>::Init(
				ResourceHandleTyped_t hResource);  // 673
			CStrongHandle<InfoForResourceTypeCModel>::operator=(
					const CWeakHandle<InfoForResourceTypeCModel>& src);  // 154
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll(); // 1798
			CUtlMemory<Vector, int>::IsExternallyAllocated(); // 905
			CUtlMemory<Vector, int>::Purge(); // 903
			CUtlMemory<Vector, int>::Purge(); // 1799
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
			ValidateAlignment<Vector>(void); // 508
			CUtlMemory<Vector, int>::Purge(); // 510
			CUtlMemory<Vector, int>::~CUtlMemory(); // 562
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
			CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 273
			CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
			CUtlMemory<int, int>::IsExternallyAllocated(); // 905
			CUtlMemory<int, int>::Purge(); // 903
			CUtlMemory<int, int>::Purge(); // 1799
			CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
			ValidateAlignment<int>(void); // 508
			CUtlMemory<int, int>::Purge(); // 510
			CUtlMemory<int, int>::~CUtlMemory(); // 562
			CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
			CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 273
			CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
			CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
			CUtlMemory<CAnimationGroupResource::Purge(); // 903
			CUtlMemory<CAnimationGroupResource::Purge(); // 1799
			CUtlVectorBase<CAnimationGroupResource::Purge(); // 560
			ValidateAlignment<CAnimationGroupResource*>(void); // 508
			CUtlMemory<CAnimationGroupResource::Purge(); // 510
			CUtlMemory<CAnimationGroupResource::~CUtlMemory(); // 562
			CUtlVectorBase<CAnimationGroupResource::~CUtlVectorBase(); // 410
			CUtlVector<CAnimationGroupResource::~CUtlVector(); // 273
			{
				int i; // 1721
				CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::operator[](
						int i);  // 602
				Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this,
					int i);  // 1723
				CStrongHandle<InfoForResourceTypeCAnimationGroup>::~CStrongHandle(); // 1526
				Destruct<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(CStrongHandle<InfoForResourceTypeCAnimationGroup>* pMemory); // 1723
			}
			RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 1798
			CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::IsExternallyAllocated(); // 905
			CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 903
			CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 1799
			Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 560
			ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(void); // 508
			CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 510
			CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::~CUtlMemory(); // 562
			~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 410
			~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimatio this); // 273
			CPhysAggregateDataHandle::Clear(); // 115
			CPhysAggregateDataHandle::~CPhysAggregateDataHandle(); // 273
			CStrongHandle<InfoForResourceTypeCPhysAggregateData>::~CStrongHandle(); // 273
			CUtlMemory<BuilderModelBoneFlexDriver_t, int>::IsExternallyAllocated(); // 905
			CUtlMemory<BuilderModelBoneFlexDriver_t, int>::Purge(); // 903
			CUtlMemory<BuilderModelBoneFlexDriver_t, int>::Purge(); // 1799
			CUtlVectorBase<BuilderModelBoneFlexDriver_t, CUtlMemory<BuilderModelBoneFlexDriver_t, int> >::Purge(); // 560
			ValidateAlignment<BuilderModelBoneFlexDriver_t>(void); // 508
			CUtlMemory<BuilderModelBoneFlexDriver_t, int>::Purge(); // 510
			CUtlMemory<BuilderModelBoneFlexDriver_t, int>::~CUtlMemory(); // 562
			CUtlVectorBase<BuilderModelBoneFlexDriver_t, CUtlMemory<BuilderModelBoneFlexDriver_t, int> >::~CUtlVectorBase(); // 410
			CUtlVector<BuilderModelBoneFlexDriver_t, CUtlMemory<BuilderModelBoneFlexDriver_t, int> >::~CUtlVector(); // 273
			{
				int i; // 1721
				CUtlMemory<CUtlVector<short int, CUtlMemory<short int, int> >, int>::operator[](
						int i);  // 602
				Element(const CUtlVectorBase<CUtlVector<short int, CUtlMemory<short int, int> >, CUtlMemory<CUtlVector<short int, CUtlMemory<shor this,
					int i);  // 1723
				CUtlVectorBase<short int, CUtlMemory<short int, int> >::RemoveAll(); // 1798
				CUtlMemory<short int, int>::IsExternallyAllocated(); // 905
				CUtlMemory<short int, int>::Purge(); // 903
				CUtlMemory<short int, int>::Purge(); // 1799
				CUtlVectorBase<short int, CUtlMemory<short int, int> >::Purge(); // 560
				ValidateAlignment<short int>(void); // 508
				CUtlMemory<short int, int>::Purge(); // 510
				CUtlMemory<short int, int>::~CUtlMemory(); // 562
				CUtlVectorBase<short int, CUtlMemory<short int, int> >::~CUtlVectorBase(); // 410
				CUtlVector<short int, CUtlMemory<short int, int> >::~CUtlVector(); // 1526
				Destruct<CUtlVector<short int> >(CUtlVector<short int, CUtlMemory<short int, int> >* pMemory); // 1723
			}
			RemoveAll(const CUtlVectorBase<CUtlVector<short int, CUtlMemory<short int, int> >, CUtlMemory<CUtlVector<short int, CUtlMemory<shor this); // 1798
			CUtlMemory<CUtlVector<short int, CUtlMemory<short int, int> >, int>::IsExternallyAllocated(); // 905
			CUtlMemory<CUtlVector<short int, CUtlMemory<short int, int> >, int>::Purge(); // 903
			CUtlMemory<CUtlVector<short int, CUtlMemory<short int, int> >, int>::Purge(); // 1799
			Purge(const CUtlVectorBase<CUtlVector<short int, CUtlMemory<short int, int> >, CUtlMemory<CUtlVector<short int, CUtlMemory<shor this); // 560
			ValidateAlignment<CUtlVector<short int> >(void); // 508
			CUtlMemory<CUtlVector<short int, CUtlMemory<short int, int> >, int>::Purge(); // 510
			CUtlMemory<CUtlVector<short int, CUtlMemory<short int, int> >, int>::~CUtlMemory(); // 562
			~CUtlVectorBase(const CUtlVectorBase<CUtlVector<short int, CUtlMemory<short int, int> >, CUtlMemory<CUtlVector<short int, CUtlMemory<shor this); // 410
			~CUtlVector(const CUtlVector<CUtlVector<short int, CUtlMemory<short int, int> >, CUtlMemory<CUtlVector<short int, CUtlMemory<short in this); // 273
			CUtlVectorBase<const CFlexController::RemoveAll(); // 1798
			CUtlMemory<const CFlexController::IsExternallyAllocated(); // 905
			CUtlMemory<const CFlexController::Purge(); // 903
			CUtlMemory<const CFlexController::Purge(); // 1799
			CUtlVectorBase<const CFlexController::Purge(); // 560
			ValidateAlignment<const CFlexController*>(void); // 508
			CUtlMemory<const CFlexController::Purge(); // 510
			CUtlMemory<const CFlexController::~CUtlMemory(); // 562
			CUtlVectorBase<const CFlexController::~CUtlVectorBase(); // 410
			CUtlVector<const CFlexController::~CUtlVector(); // 273
			CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
			CUtlMemory<int, int>::IsExternallyAllocated(); // 905
			CUtlMemory<int, int>::Purge(); // 903
			CUtlMemory<int, int>::Purge(); // 1799
			CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
			ValidateAlignment<int>(void); // 508
			CUtlMemory<int, int>::Purge(); // 510
			CUtlMemory<int, int>::~CUtlMemory(); // 562
			CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
			CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 15
			CUtlStringMap<int, CUtlSymbolTable>::~CUtlStringMap(); // 273
			CUtlVectorBase<bool, CUtlMemory<bool, int> >::RemoveAll(); // 1798
			CUtlMemory<bool, int>::IsExternallyAllocated(); // 905
			CUtlMemory<bool, int>::Purge(); // 903
			CUtlMemory<bool, int>::Purge(); // 1799
			CUtlVectorBase<bool, CUtlMemory<bool, int> >::Purge(); // 560
			ValidateAlignment<bool>(void); // 508
			CUtlMemory<bool, int>::Purge(); // 510
			CUtlMemory<bool, int>::~CUtlMemory(); // 562
			CUtlVectorBase<bool, CUtlMemory<bool, int> >::~CUtlVectorBase(); // 410
			CUtlVector<bool, CUtlMemory<bool, int> >::~CUtlVector(); // 79
			CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::RemoveAll(); // 1798
			CUtlMemory<Quaternion, int>::IsExternallyAllocated(); // 905
			CUtlMemory<Quaternion, int>::Purge(); // 903
			CUtlMemory<Quaternion, int>::Purge(); // 1799
			CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Purge(); // 560
			ValidateAlignment<Quaternion>(void); // 508
			CUtlMemory<Quaternion, int>::Purge(); // 510
			CUtlMemory<Quaternion, int>::~CUtlMemory(); // 562
			CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::~CUtlVectorBase(); // 410
			CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >::~CUtlVector(); // 79
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll(); // 1798
			CUtlMemory<Vector, int>::IsExternallyAllocated(); // 905
			CUtlMemory<Vector, int>::Purge(); // 903
			CUtlMemory<Vector, int>::Purge(); // 1799
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
			ValidateAlignment<Vector>(void); // 508
			CUtlMemory<Vector, int>::Purge(); // 510
			CUtlMemory<Vector, int>::~CUtlMemory(); // 562
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
			CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 79
			CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::RemoveAll(); // 1798
			CUtlMemory<CModelSkeleton::BoneFlags_t, int>::IsExternallyAllocated(); // 905
			CUtlMemory<CModelSkeleton::BoneFlags_t, int>::Purge(); // 903
			CUtlMemory<CModelSkeleton::BoneFlags_t, int>::Purge(); // 1799
			CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::Purge(); // 560
			ValidateAlignment<CModelSkeleton::BoneFlags_t>(void); // 508
			CUtlMemory<CModelSkeleton::BoneFlags_t, int>::Purge(); // 510
			CUtlMemory<CModelSkeleton::BoneFlags_t, int>::~CUtlMemory(); // 562
			CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::~CUtlVectorBase(); // 410
			CUtlVector<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::~CUtlVector(); // 79
			CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
			CUtlMemory<float, int>::IsExternallyAllocated(); // 905
			CUtlMemory<float, int>::Purge(); // 903
			CUtlMemory<float, int>::Purge(); // 1799
			CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
			ValidateAlignment<float>(void); // 508
			CUtlMemory<float, int>::Purge(); // 510
			CUtlMemory<float, int>::~CUtlMemory(); // 562
			CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
			CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 79
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::RemoveAll(); // 1798
			CUtlMemory<short int, int>::IsExternallyAllocated(); // 905
			CUtlMemory<short int, int>::Purge(); // 903
			CUtlMemory<short int, int>::Purge(); // 1799
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::Purge(); // 560
			ValidateAlignment<short int>(void); // 508
			CUtlMemory<short int, int>::Purge(); // 510
			CUtlMemory<short int, int>::~CUtlMemory(); // 562
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::~CUtlVectorBase(); // 410
			CUtlVector<short int, CUtlMemory<short int, int> >::~CUtlVector(); // 79
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
			CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
			CUtlMemory<unsigned int, int>::Purge(); // 903
			CUtlMemory<unsigned int, int>::Purge(); // 1799
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
			ValidateAlignment<unsigned int>(void); // 508
			CUtlMemory<unsigned int, int>::Purge(); // 510
			CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
			CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 79
			{
				int i; // 1721
				CUtlMemory<CUtlString, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
					int i);  // 1723
				CUtlString::~CUtlString(); // 1526
				Destruct<CUtlString>(CUtlString* pMemory); // 1723
			}
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
			CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
			CUtlMemory<CUtlString, int>::Purge(); // 903
			CUtlMemory<CUtlString, int>::Purge(); // 1799
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
			ValidateAlignment<CUtlString>(void); // 508
			CUtlMemory<CUtlString, int>::Purge(); // 510
			CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
			CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 79
			{
				entry_t* table; // 896
				CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Base(); // 896
				{
					int i; // 897
					CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Count(); // 897
					CUtlHashtableEntry<unsigned int, short unsigned int>::IsValid(); // 899
					CUtlHashtableEntry<unsigned int, short unsigned int>::MarkInvalid(); // 901
					Destruct<CUtlKeyValuePair<unsigned int, short unsigned int> >(CUtlKeyValuePair<unsigned int, short unsigned int>* pMemory); // 902
				}
			}
			RemoveAll(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this); // 188
			ValidateAlignment<CUtlHashtableEntry<unsigned int, short unsigned int> >(void); // 508
			CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::IsExternallyAllocated(); // 905
			CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Purge(); // 903
			CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Purge(); // 510
			CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::~CUtlMemory(); // 188
			~CUtlHashtable(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this); // 127
			BoneDict_t::~BoneDict_t(); // 79
			CModelSkeletonBuilder::~CModelSkeletonBuilder(); // 273
			{
				int i; // 1721
				CUtlMemory<CBuilderMaterialGroup, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::Element(
					int i);  // 1723
				{
					int i; // 1721
					CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::operator[](
							int i);  // 602
					Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2 this,
						int i);  // 1723
					CStrongHandle<InfoForResourceTypeIMaterial2>::~CStrongHandle(); // 1526
					Destruct<CStrongHandle<InfoForResourceTypeIMaterial2> >(CStrongHandle<InfoForResourceTypeIMaterial2>* pMemory); // 1723
				}
				RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2 this); // 1798
				CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::IsExternallyAllocated(); // 905
				CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::Purge(); // 903
				CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::Purge(); // 1799
				Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2 this); // 560
				ValidateAlignment<CStrongHandle<InfoForResourceTypeIMaterial2> >(void); // 508
				CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::Purge(); // 510
				CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::~CUtlMemory(); // 562
				~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2 this); // 410
				~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, i this); // 24
				CUtlString::~CUtlString(); // 24
				CBuilderMaterialGroup::~CBuilderMaterialGroup(); // 1526
				Destruct<CBuilderMaterialGroup>(CBuilderMaterialGroup* pMemory); // 1723
			}
			CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::RemoveAll(); // 1798
			CUtlMemory<CBuilderMaterialGroup, int>::IsExternallyAllocated(); // 905
			CUtlMemory<CBuilderMaterialGroup, int>::Purge(); // 903
			CUtlMemory<CBuilderMaterialGroup, int>::Purge(); // 1799
			CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::Purge(); // 560
			ValidateAlignment<CBuilderMaterialGroup>(void); // 508
			CUtlMemory<CBuilderMaterialGroup, int>::Purge(); // 510
			CUtlMemory<CBuilderMaterialGroup, int>::~CUtlMemory(); // 562
			CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::~CUtlVectorBase(); // 410
			CUtlVector<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::~CUtlVector(); // 273
			{
				int i; // 1721
				CUtlMemory<CUtlString, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
					int i);  // 1723
				CUtlString::~CUtlString(); // 1526
				Destruct<CUtlString>(CUtlString* pMemory); // 1723
			}
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
			CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
			CUtlMemory<CUtlString, int>::Purge(); // 903
			CUtlMemory<CUtlString, int>::Purge(); // 1799
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
			ValidateAlignment<CUtlString>(void); // 508
			CUtlMemory<CUtlString, int>::Purge(); // 510
			CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
			CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 273
			CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
			CUtlMemory<float, int>::IsExternallyAllocated(); // 905
			CUtlMemory<float, int>::Purge(); // 903
			CUtlMemory<float, int>::Purge(); // 1799
			CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
			ValidateAlignment<float>(void); // 508
			CUtlMemory<float, int>::Purge(); // 510
			CUtlMemory<float, int>::~CUtlMemory(); // 562
			CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
			CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 273
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
			CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
			CUtlMemory<unsigned char, int>::Purge(); // 903
			CUtlMemory<unsigned char, int>::Purge(); // 1799
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
			ValidateAlignment<unsigned char>(void); // 508
			CUtlMemory<unsigned char, int>::Purge(); // 510
			CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
			CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 273
			CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::RemoveAll(); // 1798
			CUtlMemory<long long unsigned int, int>::IsExternallyAllocated(); // 905
			CUtlMemory<long long unsigned int, int>::Purge(); // 903
			CUtlMemory<long long unsigned int, int>::Purge(); // 1799
			CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::Purge(); // 560
			ValidateAlignment<long long unsigned int>(void); // 508
			CUtlMemory<long long unsigned int, int>::Purge(); // 510
			CUtlMemory<long long unsigned int, int>::~CUtlMemory(); // 562
			CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::~CUtlVectorBase(); // 410
			CUtlVector<long long unsigned int, CUtlMemory<long long unsigned int, int> >::~CUtlVector(); // 273
			{
				int i; // 1721
				CUtlMemory<CModelBuilder::CompileTimeMesh_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CModelBuilder::CompileTimeMesh_t, CUtlMemory<CModelBuilder::CompileTimeMesh_t, int> >::Element(
					int i);  // 1723
				CUtlString::~CUtlString(); // 365
				CStrongHandle<InfoForResourceTypeCRenderMesh>::~CStrongHandle(); // 365
				CompileTimeMesh_t::~CompileTimeMesh_t(); // 1526
				Destruct<CModelBuilder::CompileTimeMesh_t>(CompileTimeMesh_t* pMemory); // 1723
			}
			CUtlVectorBase<CModelBuilder::CompileTimeMesh_t, CUtlMemory<CModelBuilder::CompileTimeMesh_t, int> >::RemoveAll(); // 1798
			CUtlMemory<CModelBuilder::CompileTimeMesh_t, int>::IsExternallyAllocated(); // 905
			CUtlMemory<CModelBuilder::CompileTimeMesh_t, int>::Purge(); // 903
			CUtlMemory<CModelBuilder::CompileTimeMesh_t, int>::Purge(); // 1799
			CUtlVectorBase<CModelBuilder::CompileTimeMesh_t, CUtlMemory<CModelBuilder::CompileTimeMesh_t, int> >::Purge(); // 560
			ValidateAlignment<CModelBuilder::CompileTimeMesh_t>(void); // 508
			CUtlMemory<CModelBuilder::CompileTimeMesh_t, int>::Purge(); // 510
			CUtlMemory<CModelBuilder::CompileTimeMesh_t, int>::~CUtlMemory(); // 562
			CUtlVectorBase<CModelBuilder::CompileTimeMesh_t, CUtlMemory<CModelBuilder::CompileTimeMesh_t, int> >::~CUtlVectorBase(); // 410
			CUtlVector<CModelBuilder::CompileTimeMesh_t, CUtlMemory<CModelBuilder::CompileTimeMesh_t, int> >::~CUtlVector(); // 273
			{
				int i; // 1721
				CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::operator[](
						int i);  // 602
				Element(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int this,
					int i);  // 1723
				ThreadInterlockedDecrement(volatile int32* p); // 159
				Decrement(int* p); // 204
				CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
				CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
				CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
				Release<CRenderMesh>(CRenderMesh* pObj); // 344
				CSmartPtr<CRenderMesh, CRefCountAccessor>::~CSmartPtr(); // 1526
				Destruct<CSmartPtr<CRenderMesh> >(CSmartPtr<CRenderMesh, CRefCountAccessor>* pMemory); // 1723
			}
			RemoveAll(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int this); // 1798
			CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::IsExternallyAllocated(); // 905
			CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::Purge(); // 903
			CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::Purge(); // 1799
			Purge(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int this); // 560
			ValidateAlignment<CSmartPtr<CRenderMesh> >(void); // 508
			CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::Purge(); // 510
			CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::~CUtlMemory(); // 562
			~CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int this); // 410
			~CUtlVector(const CUtlVector<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int> > this); // 273
			{
				int i; // 1721
				CUtlMemory<CUtlString, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
					int i);  // 1723
				CUtlString::~CUtlString(); // 1526
				Destruct<CUtlString>(CUtlString* pMemory); // 1723
			}
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
			CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
			CUtlMemory<CUtlString, int>::Purge(); // 903
			CUtlMemory<CUtlString, int>::Purge(); // 1799
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
			ValidateAlignment<CUtlString>(void); // 508
			CUtlMemory<CUtlString, int>::Purge(); // 510
			CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
			CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 273
			CUtlString::~CUtlString(); // 54
			CUtlString::~CUtlString(); // 54
			CBuilderModelInfo::~CBuilderModelInfo(); // 273
			CUtlString::~CUtlString(); // 273
			CModelBuilder::~CModelBuilder(); // 155
		}
	}
	CUtlVectorBase<SceneObject_t, CUtlMemory<SceneObject_t, int> >::Count(); // 138
} /* size: 2402, variables: 1, inline expansions: 1 (4 bytes) */

// <011054ED> worldrenderer/worldnode.cpp:160
// variables: 6
// function calls: 45
void CWorldNode::ApplyMaterialOverridesToMeshChain(CMeshInstance* pMeshInstance, const CUtlVector<int, CUtlMemory<int, int> >& sceneObjectMaterialOverrides)
{
	const int  nNumOverrides; // 165
	CUtlVector<MaterialOverrideDesc_t, CUtlMemory<MaterialOverrideDesc_t, int> > overrideDescriptions; // 167
	uint32 nMeshIndex; // 170
	{
		int iOverride; // 176
		{
			const MaterialOverride_t& matOverride; // 178
			{
				MaterialOverrideDesc_t* pMaterialOverride; // 194
				CUtlMemory<MaterialOverrideDesc_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<MaterialOverrideDesc_t, CUtlMemory<MaterialOverrideDesc_t, int> >::Element(
					int i);  // 1148
				SceneObjectOverrideBase_t::SceneObjectOverrideBase_t(); // 45
				CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
				CWeakHandle<InfoForResourceTypeIMaterial2>::InitUntypedUnchecked(
							ResourceHandle_t hUntypedResource);  // 227
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
				StaticInvalidHandle(void); // 45
				MaterialOverrideDesc_t::MaterialOverrideDesc_t(); // 1479
				Construct<MaterialOverrideDesc_t>(MaterialOverrideDesc_t* pMemory); // 1148
				CUtlMemory<MaterialOverrideDesc_t, int>::Grow(
					int num);  // 806
				CUtlVectorBase<MaterialOverrideDesc_t, CUtlMemory<MaterialOverrideDesc_t, int> >::GrowMemory(
						int num);  // 1145
				CUtlVectorBase<MaterialOverrideDesc_t, CUtlMemory<MaterialOverrideDesc_t, int> >::AddToTail(); // 1156
				CUtlVectorBase<MaterialOverrideDesc_t, CUtlMemory<MaterialOverrideDesc_t, int> >::AddToTailGetPtr(); // 194
				CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
				CStrongHandle<InfoForResourceTypeIMaterial2>::GetHandle(); // 195
				CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
					const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 331
				CWeakHandle<InfoForResourceTypeIMaterial2>::operator=(
						const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 195
			}
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 178
			CUtlMemory<MaterialOverride_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<MaterialOverride_t, CUtlMemory<MaterialOverride_t, int> >::operator[](
					int i);  // 178
			CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
			CStrongHandle<InfoForResourceTypeIMaterial2>::GetHandle(); // 179
			CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
			CWeakHandle<InfoForResourceTypeIMaterial2>::InitUntypedUnchecked(
						ResourceHandle_t hUntypedResource);  // 227
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
			CStrongHandle<InfoForResourceTypeIMaterial2>::GetHandle(); // 186
		}
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 135
	CUtlVectorBase<int, CUtlMemory<int, int> >::IsEmpty(); // 162
	CUtlMemory<MaterialOverrideDesc_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<MaterialOverrideDesc_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<MaterialOverrideDesc_t, CUtlMemory<MaterialOverrideDesc_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<MaterialOverrideDesc_t, CUtlMemory<MaterialOverrideDesc_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<MaterialOverrideDesc_t, CUtlMemory<MaterialOverrideDesc_t, int> >::CUtlVector(); // 167
	CUtlMemory<MaterialOverrideDesc_t, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<MaterialOverrideDesc_t, CUtlMemory<MaterialOverrideDesc_t, int> >::EnsureCapacity(
			int num);  // 168
	CUtlVectorBase<MaterialOverrideDesc_t, CUtlMemory<MaterialOverrideDesc_t, int> >::RemoveAll(); // 175
	CMeshInstance::GetNext(); // 207
	CUtlMemory<MaterialOverrideDesc_t, int>::Purge(); // 903
	CUtlMemory<MaterialOverrideDesc_t, int>::Purge(); // 1799
	CUtlVectorBase<MaterialOverrideDesc_t, CUtlMemory<MaterialOverrideDesc_t, int> >::Purge(); // 560
	CUtlVectorBase<MaterialOverrideDesc_t, CUtlMemory<MaterialOverrideDesc_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<MaterialOverrideDesc_t, CUtlMemory<MaterialOverrideDesc_t, int> >::~CUtlVector(); // 210
} /* size: 752, variables: 3, inline expansions: 16 (402 bytes) */

// <01105491> worldrenderer/worldnode.cpp:212
// variables: 2
void SetEnvMapAndBakedLightingInfo(CSceneObject** pObjects, int nObjects, const CSceneSystemBakedLightingInfo* pBakedLightingInfo, int nLightProbeVolumePrecomputedHandshake)
{
	{
		int o; // 216
	}
	{
		int o; // 225
	}
} /* size: 0 */

// <01104DDA> worldrenderer/worldnode.cpp:232
// variables: 3
// function calls: 24
void CWorldNode::SetSingleObjectParams(CSceneObject* pObj, const CreateSceneObjectsParams_t& params)
{
	const SceneObject_t* pMapSceneObjectData; // 234
	const CUtlVector<int, CUtlMemory<int, int> >* pMaterialOverrides; // 235
	const char* pSkin; // 242
	Vector4D::operator!=(
			const Vector4D& src);  // 237
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 237
	CUtlString::Get(); // 242
	CSceneObject::GetMeshInstanceData(); // 245
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 245
	CMeshInstance::UseMaterialGroup(
			uint32 nIDHash,
			bool bChainThrough);  // 245
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 253
	CSceneObject::GetMeshInstanceData(); // 255
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 417
	Vector4D::Vector4D(); // 707
	Vector4DSubtract(const Vector4D& a,
			const Vector4D& b,
			Vector4D& c);  // 708
	Vector4D::LengthSqr(); // 709
	Vector4D::DistToSqr(
			const Vector4D& vOther);  // 417
	CSceneObject::SetAlphaFade(
			float fAlpha);  // 423
	CSceneObject::SetTintRGBA_Gamma(
				const Vector4D& vTint);  // 415
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 2375
	CSceneObject::SetAlphaFade(
			float fAlpha);  // 431
	CSceneObject::SetTintRGBA_Gamma(
				const Vector4D& vTint);  // 239
	CSceneObject::EnsureExtraData(); // 2289
	CSceneObject::EnsureExtraData(); // 2198
	CSceneObject::ResetMeshGroups(
			MeshGroupMask_t nMask);  // 2177
	CSceneObject::ResetMeshGroups(
			MeshGroupMask_t nMask);  // 250
} /* size: 0, variables: 3, inline expansions: 24 (1115 bytes) */

// <011044B7> worldrenderer/worldnode.cpp:259
// variables: 4
// function calls: 37
void CWorldNode::InsertObjectRefs(CUtlVector<CSceneObject*, CUtlMemory<CSceneObject*, int> >& sceneObjects, const CreateSceneObjectsParams_t& params)
{
	int nObjects; // 261
	int nPreviousSceneObjects; // 262
	int nObject; // 265
	{
		int p; // 266
		CUtlVectorBase<CWorldSceneObjectRef::Count(); // 266
		matrix3x4_t::Base(); // 291
		matrix3x4_t::Base(); // 291
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 291
		matrix3x4a_t::operator=(
				const matrix3x4_t& src);  // 2082
		CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::Count(); // 135
		CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::IsEmpty(); // 2090
		CSceneObject::SetTransform(
				const matrix3x4_t& mTransform);  // 269
		CUtlMemory<CSceneObject::operator[](
				int i);  // 588
		CUtlVectorBase<CSceneObject::operator[](
				int i);  // 268
		CUtlMemory<CWorldSceneObjectRef::operator[](
				int i);  // 588
		CUtlVectorBase<CWorldSceneObjectRef::operator[](
				int i);  // 268
		CUtlMemory<CWorldSceneObjectRef::operator[](
				int i);  // 588
		CUtlVectorBase<CWorldSceneObjectRef::operator[](
				int i);  // 269
		CWorldSceneObjectRef::SceneObject(); // 269
		CUtlMemory<signed char, int>::operator[](
				int i);  // 588
		CUtlVectorBase<signed char, CUtlMemory<signed char, int> >::operator[](
				int i);  // 270
	}
	CUtlVectorBase<CSceneObject::Count(); // 261
	CUtlMemory<CWorldSceneObjectRef::NumAllocated(); // 782
	CUtlMemory<CWorldSceneObjectRef::Base(); // 112
	CUtlVectorBase<CWorldSceneObjectRef::Base(); // 368
	CUtlVectorBase<CWorldSceneObjectRef::ResetDbgInfo(); // 824
	CUtlVectorBase<CWorldSceneObjectRef::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CWorldSceneObjectRef::GrowVector(
			int num);  // 1445
	CUtlVectorBase<CWorldSceneObjectRef::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<CWorldSceneObjectRef::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<CWorldSceneObjectRef::AddMultipleToTail(
				int num);  // 262
	CUtlMemory<signed char, int>::NumAllocated(); // 782
	CUtlMemory<signed char, int>::Base(); // 112
	CUtlVectorBase<signed char, CUtlMemory<signed char, int> >::Base(); // 368
	CUtlVectorBase<signed char, CUtlMemory<signed char, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<signed char, CUtlMemory<signed char, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<signed char, CUtlMemory<signed char, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<signed char, CUtlMemory<signed char, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<signed char, CUtlMemory<signed char, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<signed char, CUtlMemory<signed char, int> >::AddMultipleToTail(
				int num);  // 263
} /* size: 571, variables: 3, inline expansions: 19 (649 bytes) */

// <01116850> worldrenderer/worldnode.cpp:277
// function calls: 7
void CWorldNode::ApplyStreamOverrides(int nStartSceneObject, int nCount, const CreateSceneObjectsParams_t& params)
{
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 282
	CUtlMemory<int, int>::Base(); // 112
	CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 282
	CUtlMemory<ExtraVertexStreamOverride_t, int>::Base(); // 112
	CUtlVectorBase<ExtraVertexStreamOverride_t, CUtlMemory<ExtraVertexStreamOverride_t, int> >::Base(); // 283
	CUtlMemory<CWorldSceneObjectRef::Base(); // 112
	CUtlVectorBase<CWorldSceneObjectRef::Base(); // 282
} /* size: 0, inline expansions: 7 (0 bytes) */

// <01104473> worldrenderer/worldnode.cpp:277
void CWorldNode::ApplyStreamOverrides(int nStartSceneObject, int nCount, const CreateSceneObjectsParams_t& params)
{
} /* size: 0 */

// <01103600> worldrenderer/worldnode.cpp:286
// variables: 6
// function calls: 57
void CWorldNode::CreateSceneObjectsForModel(const CreateSceneObjectsParams_t& params)
{
	CUtlVectorFixedGrowableCompat<CSceneObject*, 4> outputObjects; // 288
	int nStartRef; // 311
	{
		CSceneObject* pNew; // 292
		CWeakHandle<InfoForResourceTypeCModel>::Init(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 273
		CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCModel>& src);  // 292
		CUtlMemory<CSceneObject::NumAllocated(); // 1196
		CUtlMemory<CSceneObject::Base(); // 112
		CUtlVectorBase<CSceneObject::Base(); // 368
		CUtlVectorBase<CSceneObject::ResetDbgInfo(); // 824
		CUtlMemory<CSceneObject::IsGrowable(); // 823
		CUtlMemory<CSceneObject::IsExternallyAllocated(); // 859
		CUtlMemory<CSceneObject::IsExternallyAllocated(); // 861
		CUtlMemory<CSceneObject::Grow(
			int num);  // 806
		CUtlVectorBase<CSceneObject::GrowMemory(
				int num);  // 1198
		CUtlMemory<CSceneObject::operator[](
				int i);  // 602
		CUtlVectorBase<CSceneObject::Element(
			int i);  // 1201
		CopyConstruct<CSceneObject*>(CSceneObject** pMemory,
						CSceneObject* const& src);  // 1201
		CUtlVectorBase<CSceneObject::AddToTail(
				CSceneObject* const& src);  // 294
	}
	{
		int i; // 305
		CUtlVectorBase<CSceneObject::Count(); // 305
		CUtlMemory<CSceneObject::operator[](
				int i);  // 588
		CUtlVectorBase<CSceneObject::operator[](
				int i);  // 307
	}
	CUtlMemory<CSceneObject::CUtlMemory(
			CSceneObject** pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 535
	CUtlVectorBase<CSceneObject::ResetDbgInfo(); // 538
	CUtlVectorBase<CSceneObject::CUtlVectorBase(
			CSceneObject** pMemory,
			int allocationCount,
			int initialCount,
			bool bGrowable);  // 420
	CUtlVector<CSceneObject::CUtlVector(
			CSceneObject** pMemory,
			int allocationCount,
			int initialCount,
			bool bGrowable);  // 495
	AlignedByteArrayExplicit_t<4, CSceneObject::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<4, CSceneObject::AlignedByteArray_t(); // 495
	AlignedByteArrayExplicit_t<4, CSceneObject::Base(); // 497
	CUtlVectorFixedGrowableCompat<CSceneObject::CUtlVectorFixedGrowableCompat(
					int growSize);  // 288
	CWeakHandle<InfoForResourceTypeCModel>::Init(
		const CWeakHandle<InfoForResourceTypeCModel>& src);  // 273
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 302
	CUtlMemory<CSceneObject::Base(); // 112
	CUtlVectorBase<CSceneObject::Base(); // 310
	{
		int o; // 216
		CSceneObject::EnableLightingCache(); // 2297
		CSceneObject::EnableLightingCache(); // 485
		CSceneObject::SetLightProbeVolumePrecomputedHandshake(
							int nValue);  // 218
	}
	{
		int o; // 225
		CSceneObject::EnableLightingCache(); // 2297
		CSceneObject::EnableLightingCache(); // 491
		CSceneObject::SetBakedLightingInfo(
					const CSceneSystemBakedLightingInfo* pBakedLightingInfo);  // 227
	}
	SetEnvMapAndBakedLightingInfo(CSceneObject** pObjects,
					int nObjects,
					const CSceneSystemBakedLightingInfo* pBakedLightingInfo,
					int nLightProbeVolumePrecomputedHandshake);  // 310
	CUtlVectorBase<CSceneObject::Count(); // 312
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 282
	CUtlMemory<int, int>::Base(); // 112
	CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 282
	CUtlMemory<ExtraVertexStreamOverride_t, int>::Base(); // 112
	CUtlVectorBase<ExtraVertexStreamOverride_t, CUtlMemory<ExtraVertexStreamOverride_t, int> >::Base(); // 283
	CUtlMemory<CWorldSceneObjectRef::Base(); // 112
	CUtlVectorBase<CWorldSceneObjectRef::Base(); // 282
	CWorldNode::ApplyStreamOverrides(
				int nStartSceneObject,
				int nCount,
				const CreateSceneObjectsParams_t& params);  // 312
	CUtlVectorBase<CSceneObject::RemoveAll(); // 1798
	CUtlMemory<CSceneObject::IsExternallyAllocated(); // 905
	CUtlMemory<CSceneObject::Purge(); // 903
	CUtlMemory<CSceneObject::Purge(); // 1799
	CUtlVectorBase<CSceneObject::Purge(); // 560
	ValidateAlignment<CSceneObject*>(void); // 508
	CUtlMemory<CSceneObject::Purge(); // 510
	CUtlMemory<CSceneObject::~CUtlMemory(); // 562
	CUtlVectorBase<CSceneObject::~CUtlVectorBase(); // 410
	CUtlVector<CSceneObject::~CUtlVector(); // 489
	CUtlVectorFixedGrowableCompat<CSceneObject::~CUtlVectorFixedGrowableCompat(); // 313
} /* size: 1017, variables: 2, inline expansions: 33 (669 bytes) */

// <01102EEB> worldrenderer/worldnode.cpp:316
// variables: 10
// function calls: 24
void CWorldNode::CreateExtraVertexStreams(CNodeSceneObjectData* pNodeData)
{
	int nExtraVertexStreams; // 319
	{
		CRenderContextPtr pRenderContext; // 322
		{
			int v; // 326
			{
				WorldNodeOnDiskBufferData_t* pBufferData; // 329
				int nLayoutFields; // 330
				RenderInputLayoutField_t* pLayoutFields; // 331
				{
					BufferDesc_t bufferDesc; // 336
					VertexBufferHandle_t hVB; // 341
					int nVertexDataSize; // 343
					{
						const void* pVertexData; // 346
						CUtlMemory<unsigned char, int>::Base(); // 112
						CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 346
					}
					CUtlMemory<VertexBufferHandle_t__::operator[](
							int i);  // 588
					CUtlVectorBase<VertexBufferHandle_t__::operator[](
							int i);  // 350
				}
				CUtlMemory<VertexBufferHandle_t__::operator[](
						int i);  // 588
				CUtlVectorBase<VertexBufferHandle_t__::operator[](
						int i);  // 354
				CUtlMemory<RenderInputLayoutField_t, int>::Base(); // 112
				CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Base(); // 331
				CUtlMemory<WorldNodeOnDiskBufferData_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<WorldNodeOnDiskBufferData_t, CUtlMemory<WorldNodeOnDiskBufferData_t, int> >::operator[](
						int i);  // 329
				CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Count(); // 330
			}
		}
		CRenderContextPtr::CRenderContextPtr<>(
					IRenderDevice* pDevice,
					const char* pDebugStringFmt);  // 322
		CUtlMemory<VertexBufferHandle_t__::NumAllocated(); // 782
		CUtlMemory<VertexBufferHandle_t__::Base(); // 112
		CUtlVectorBase<VertexBufferHandle_t__::Base(); // 368
		CUtlVectorBase<VertexBufferHandle_t__::ResetDbgInfo(); // 824
		CUtlVectorBase<VertexBufferHandle_t__::GrowMemory(
				int num);  // 784
		CUtlVectorBase<VertexBufferHandle_t__::GrowVector(
				int num);  // 1445
		CUtlVectorBase<VertexBufferHandle_t__::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<VertexBufferHandle_t__::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<VertexBufferHandle_t__::AddMultipleToTail(
					int num);  // 325
		CRenderContextPtr::Release(); // 845
		CRenderContextPtr::~CRenderContextPtr(); // 357
	}
	CUtlVectorBase<WorldNodeOnDiskBufferData_t, CUtlMemory<WorldNodeOnDiskBufferData_t, int> >::Count(); // 319
} /* size: 479, variables: 1, inline expansions: 1 (23 bytes) */

// <010FF13B> worldrenderer/worldnode.cpp:361
// variables: 46
// function calls: 259
void CWorldNode::CreateSceneObjects(CNodeSceneObjectData* pNodeData, CWorld* pWorld, ISceneWorld* pSceneWorld)
{
	const int  nSceneObjects; // 363
	const matrix3x4a_t& mWorldTransform; // 364
	CUtlVector<int, CUtlMemory<int, int> >** ppStreamOverride; // 369
	CUtlVector<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> > sceneObjectMaterialOverrides; // 372
	int nMaterialOverrides; // 379
	int nStreamOverrides; // 386
	const bool  bAllowPrecomputedVisMembers; // 402
	CUtlVectorFixedGrowable<unsigned int, 8> visClusterMembership; // 403
	const char   __FUNCTION__; // 54600
	{
		int s; // 375
	}
	{
		int m; // 380
		{
			int nSceneObjectIndex; // 382
			CUtlMemory<int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
				int i);  // 1201
			CopyConstruct<int>(int* pMemory,
						const int& src);  // 1201
			CUtlMemory<int, int>::NumAllocated(); // 1196
			CUtlMemory<int, int>::Base(); // 112
			CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 368
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
					const int& src);  // 383
			CUtlMemory<MaterialOverride_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<MaterialOverride_t, CUtlMemory<MaterialOverride_t, int> >::operator[](
					int i);  // 382
			CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::operator[](
					int i);  // 383
		}
	}
	{
		int s; // 387
		{
			int nSceneObjectIndex; // 389
			CUtlMemory<int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
				int i);  // 1201
			CUtlMemory<int, int>::NumAllocated(); // 1196
			CopyConstruct<int>(int* pMemory,
						const int& src);  // 1201
			CUtlMemory<int, int>::Base(); // 112
			CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 368
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
					const int& src);  // 396
			CUtlMemory<ExtraVertexStreamOverride_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<ExtraVertexStreamOverride_t, CUtlMemory<ExtraVertexStreamOverride_t, int> >::operator[](
					int i);  // 389
			CUtlMemory<int, int>::ValidateGrowSize(); // 475
			CUtlMemory<int, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 393
		}
	}
	{
		int s; // 404
		{
			const SceneObject_t* pMapSceneObjectData; // 406
			int nPreviousSceneObjects; // 407
			int8 nLayerIndex; // 408
			CWorldSceneObjectRef* pSceneObjectRef; // 410
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 413
			}
			{
				HModel hModel; // 421
				matrix3x4_t mOriginalTransform; // 425
				matrix3x4_t mTransform; // 429
				ESceneObjectFlags nRenderableFlags; // 433
				CreateSceneObjectsParams_t createParams; // 461
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 477
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 487
				}
				{
					int i; // 498
					CUtlVectorBase<CWorldSceneObjectRef::Count(); // 498
					CSceneObject::SafeSquare(
							float x);  // 678
					CSceneObject::SafeSquare(
							float x);  // 679
					CSceneObject::SetFadeAndCullDistance(
								float flStartFadeDistance,
								float flCullDistance);  // 669
					CSceneObject::SetFadeAndCullDistance(
								float flStartFadeDistance,
								float flCullDistance);  // 500
					CUtlMemory<CWorldSceneObjectRef::operator[](
							int i);  // 588
					CUtlVectorBase<CWorldSceneObjectRef::operator[](
							int i);  // 500
					CWorldSceneObjectRef::SceneObject(); // 500
				}
				{
					int i; // 506
					CUtlVectorBase<CWorldSceneObjectRef::Count(); // 506
					Vector::operator=(
							const Vector& vOther);  // 2337
					CSceneObject::EnsureExtraData(); // 2289
					CSceneObject::EnsureExtraData(); // 2335
					CSceneObject::SetLightingOrigin(
								const Vector& v,
								bool bWorldSpace);  // 508
					CUtlMemory<CWorldSceneObjectRef::operator[](
							int i);  // 588
					CUtlVectorBase<CWorldSceneObjectRef::operator[](
							int i);  // 508
					CWorldSceneObjectRef::SceneObject(); // 508
				}
				{
					int i; // 514
					CUtlVectorBase<CWorldSceneObjectRef::Count(); // 514
					CUtlMemory<CWorldSceneObjectRef::operator[](
							int i);  // 588
					CUtlVectorBase<CWorldSceneObjectRef::operator[](
							int i);  // 516
					CWorldSceneObjectRef::SceneObject(); // 516
					CUtlStringToken::CUtlStringToken(); // 114
					StringTokenFromHashCode(uint32 nHashCode); // 516
				}
				{
					int i; // 522
					CUtlVectorBase<CWorldSceneObjectRef::Count(); // 522
					CSceneObject::EnableLightingCache(); // 2297
					CSceneObject::EnableLightingCache(); // 485
					CSceneObject::SetLightProbeVolumePrecomputedHandshake(
										int nValue);  // 524
					CUtlMemory<CWorldSceneObjectRef::operator[](
							int i);  // 588
					CUtlVectorBase<CWorldSceneObjectRef::operator[](
							int i);  // 524
					CWorldSceneObjectRef::SceneObject(); // 524
				}
				{
					int i; // 530
					CUtlVectorBase<CWorldSceneObjectRef::Count(); // 530
					CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
						const CUtlStringToken& nTok,
						IntVector4D nValue);  // 456
					CRenderAttributes::SetIntValue(
							CUtlStringToken nTokenID,
							int nValue);  // 1552
					CSceneObject::EnsureExtraData(); // 2289
					CSceneObject::EnsureExtraData(); // 1551
					CSceneObject::SetIntValue(
							const CUtlStringToken& attrName,
							int nValue);  // 532
					CUtlMemory<CWorldSceneObjectRef::operator[](
							int i);  // 588
					CUtlVectorBase<CWorldSceneObjectRef::operator[](
							int i);  // 532
					CWorldSceneObjectRef::SceneObject(); // 532
				}
				{
					int nFinalLODOverride; // 538
					const CModel* pModel; // 539
					{
						int i; // 545
						CUtlVectorBase<CWorldSceneObjectRef::Count(); // 545
						CSceneObject::EnsureExtraData(); // 2289
						CSceneObject::EnsureExtraData(); // 2230
						CSceneObject::DisableLOD(); // 2225
						CSceneObject::SetLOD(
							int nLOD);  // 2221
						CSceneObject::SetLOD(
							int nLOD);  // 547
						CUtlMemory<CWorldSceneObjectRef::operator[](
								int i);  // 588
						CUtlVectorBase<CWorldSceneObjectRef::operator[](
								int i);  // 547
						CWorldSceneObjectRef::SceneObject(); // 547
					}
					CWeakHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 539
					Min<int>(const int& val1,
						const int& val2);  // 542
				}
				{
					int i; // 553
					CUtlVectorBase<CWorldSceneObjectRef::Count(); // 553
					CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
						const CUtlStringToken& nTok,
						IntVector4D nValue);  // 515
					CRenderAttributes::SetComboValue(
							CUtlStringToken nTokenID,
							uint8 nValue);  // 1577
					CSceneObject::EnsureExtraData(); // 2289
					CSceneObject::EnsureExtraData(); // 1576
					CSceneObject::SetComboValue(
							const CUtlStringToken& attrName,
							uint8 nValue);  // 555
					CUtlMemory<CWorldSceneObjectRef::operator[](
							int i);  // 588
					CUtlVectorBase<CWorldSceneObjectRef::operator[](
							int i);  // 562
					CSceneObject::SetUniqueBatchGroup(
								bool bUnique);  // 562
					CUtlMemory<CWorldSceneObjectRef::operator[](
							int i);  // 588
					CUtlVectorBase<CWorldSceneObjectRef::operator[](
							int i);  // 555
				}
				{
					const int  nClusterCount; // 568
					const int  nClusterOffset; // 569
					{
						int i; // 572
						CUtlMemory<short unsigned int, int>::operator[](
								int i);  // 588
						CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
								int i);  // 574
						CUtlMemory<unsigned int, int>::operator[](
								int i);  // 588
						CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 8, int> >::operator[](
								int i);  // 574
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 577
					}
					{
						int i; // 578
						CUtlVectorBase<CWorldSceneObjectRef::Count(); // 578
						CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 8, int> >::Count(); // 580
						CUtlMemory<unsigned int, int>::Base(); // 112
						CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 8, int> >::Base(); // 580
						CUtlMemory<CWorldSceneObjectRef::operator[](
								int i);  // 588
						CUtlVectorBase<CWorldSceneObjectRef::operator[](
								int i);  // 580
					}
					CUtlMemory<unsigned int, int>::NumAllocated(); // 782
					CUtlMemory<unsigned int, int>::Base(); // 112
					CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 8, int> >::Base(); // 368
					CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 8, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 8, int> >::GrowMemory(
							int num);  // 784
					CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 8, int> >::GrowVector(
							int num);  // 1445
					CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 8, int> >::InsertMultipleBefore(
								int elem,
								int num);  // 1437
					CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 8, int> >::InsertMultipleBefore(
								int elem,
								int num);  // 1294
					CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 8, int> >::AddMultipleToTail(
								int num);  // 1319
					CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 8, int> >::SetCount(
						int count);  // 570
				}
				{
					int i; // 586
					CUtlVectorBase<CWorldSceneObjectRef::Count(); // 586
					CSceneObject::MirrorFlags(); // 1901
					CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
										ESceneObjectFlags flags);  // 1981
					CSceneObject::EnableRendering(); // 588
					CUtlMemory<CWorldSceneObjectRef::operator[](
							int i);  // 588
					CUtlVectorBase<CWorldSceneObjectRef::operator[](
							int i);  // 588
					CWorldSceneObjectRef::SceneObject(); // 588
					CWorldSceneObjectRef::SceneObject(); // 589
					CSceneObject::MirrorFlags(); // 1901
					CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
										ESceneObjectFlags flags);  // 1940
					CSceneObject::SetFlags(
						ESceneObjectFlags nFlagsToOR);  // 589
					CUtlMemory<CWorldSceneObjectRef::operator[](
							int i);  // 588
					CUtlVectorBase<CWorldSceneObjectRef::operator[](
							int i);  // 589
				}
				CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
				StaticInvalidHandle(void); // 421
				CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
				CStrongHandle<InfoForResourceTypeCModel>::GetHandle(); // 422
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 426
				matrix3x4_t::matrix3x4_t(); // 425
				matrix3x4_t::matrix3x4_t(); // 429
				operator|=(ESceneObjectFlags& a,
						ESceneObjectFlags b);  // 437
				CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 41
				matrix3x4_t::matrix3x4_t(); // 41
				CreateSceneObjectsParams_t::CreateSceneObjectsParams_t(); // 461
				CWeakHandle<InfoForResourceTypeCModel>::Init(
					const CWeakHandle<InfoForResourceTypeCModel>& src);  // 331
				CWeakHandle<InfoForResourceTypeCModel>::operator=(
						const CWeakHandle<InfoForResourceTypeCModel>& src);  // 462
				CWorldRendererBakedLightingInfo::GetBakedLightingInfo(); // 264
				CWorld::GetSceneSystemBakedLightingInfo(); // 467
				CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::operator[](
						int i);  // 474
				operator|=(ESceneObjectFlags& a,
						ESceneObjectFlags b);  // 489
				Vector::operator!=(
						const Vector& src);  // 504
			}
			CUtlMemory<CWorldSceneObjectRef::operator[](
					int i);  // 602
			CUtlVectorBase<CWorldSceneObjectRef::Element(
				int i);  // 1201
			CopyConstruct<CWorldSceneObjectRef*>(CWorldSceneObjectRef** pMemory,
								CWorldSceneObjectRef* const& src);  // 1201
			CUtlMemory<CWorldSceneObjectRef::NumAllocated(); // 1196
			CUtlMemory<CWorldSceneObjectRef::Base(); // 112
			CUtlVectorBase<CWorldSceneObjectRef::Base(); // 368
			CUtlVectorBase<CWorldSceneObjectRef::ResetDbgInfo(); // 824
			CUtlVectorBase<CWorldSceneObjectRef::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<CWorldSceneObjectRef::AddToTail(
					CWorldSceneObjectRef* const& src);  // 415
			CUtlMemory<signed char, int>::NumAllocated(); // 1196
			CUtlMemory<signed char, int>::operator[](
					int i);  // 602
			CUtlVectorBase<signed char, CUtlMemory<signed char, int> >::Element(
				int i);  // 1201
			CopyConstruct<signed char>(signed char* pMemory,
							const signed char& src);  // 1201
			CUtlMemory<signed char, int>::Base(); // 112
			CUtlVectorBase<signed char, CUtlMemory<signed char, int> >::Base(); // 368
			CUtlVectorBase<signed char, CUtlMemory<signed char, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<signed char, CUtlMemory<signed char, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<signed char, CUtlMemory<signed char, int> >::AddToTail(
					const signed char& src);  // 416
			CUtlMemory<SceneObject_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<SceneObject_t, CUtlMemory<SceneObject_t, int> >::operator[](
					int i);  // 406
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 127
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 595
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator[](
					int i);  // 129
			GetLayerIndexForSceneObject(int nSceneObjectIndex,
							const WorldNode_t* pWorldData);  // 408
			CUtlVectorBase<CWorldSceneObjectRef::Count(); // 407
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 598
	}
	CUtlVectorBase<SceneObject_t, CUtlMemory<SceneObject_t, int> >::Count(); // 363
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::CUtlVector(); // 372
	{
		int i; // 1696
		CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::Element(
			int i);  // 1697
		CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
		CUtlMemory<int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<int, int>::Purge(); // 903
		CUtlMemory<int, int>::Purge(); // 1799
		CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
		ValidateAlignment<int>(void); // 508
		CUtlMemory<int, int>::Purge(); // 510
		CUtlMemory<int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 1526
		Destruct<CUtlVector<int> >(CUtlVector<int, CUtlMemory<int, int> >* pMemory); // 1697
	}
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::Grow(
		int num);  // 806
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
		CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::Element(
			int i);  // 1453
		CUtlMemory<int, int>::ValidateGrowSize(); // 475
		CUtlMemory<int, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 1479
		Construct<CUtlVector<int> >(CUtlVector<int, CUtlMemory<int, int> >* pMemory); // 1453
	}
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::SetCount(
		int count);  // 373
	{
		int i; // 1721
		CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::Element(
			int i);  // 1723
		CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
		CUtlMemory<int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<int, int>::Purge(); // 903
		CUtlMemory<int, int>::Purge(); // 1799
		CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 1800
		CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
		ValidateAlignment<int>(void); // 508
		CUtlMemory<int, int>::Purge(); // 510
		CUtlMemory<int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 1526
		Destruct<CUtlVector<int> >(CUtlVector<int, CUtlMemory<int, int> >* pMemory); // 1723
	}
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::Purge(); // 1799
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::Purge(); // 560
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::~CUtlVector(); // 601
	CUtlVectorBase<MaterialOverride_t, CUtlMemory<MaterialOverride_t, int> >::Count(); // 379
	CUtlVectorBase<ExtraVertexStreamOverride_t, CUtlMemory<ExtraVertexStreamOverride_t, int> >::Count(); // 386
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 402
	CUtlMemory<unsigned int, int>::CUtlMemory(
			unsigned int* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<unsigned int, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::CUtlMemoryFixedGrowable_Base(
					unsigned int* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<8, unsigned int, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<8, unsigned int>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<8, unsigned int, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<unsigned int, 8, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 8, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 8, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<unsigned int, 8>::CUtlVectorFixedGrowable(
				int growSize);  // 403
	CUtlVectorBase<CWorldSceneObjectRef::Count(); // 598
	CUtlVectorBase<signed char, CUtlMemory<signed char, int> >::Count(); // 598
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 8, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 577
	CUtlMemory<unsigned int, int>::ConvertToExternalMemory(
				unsigned int* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::Purge_FixedGrowable(
				unsigned int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::Purge_FixedGrowable(
				unsigned int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<8, unsigned int, 4>::Base(); // 237
	CUtlMemoryFixedGrowable<unsigned int, 8, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 8, int> >::Base(); // 368
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 8, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 8, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<unsigned int, 8, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 8, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<unsigned int, 8>::~CUtlVectorFixedGrowable(); // 601
} /* size: 0, variables: 9, inline expansions: 55 (2893 bytes) */

// <01116636> worldrenderer/worldnode.cpp:604
// variables: 3
// function calls: 2
void CWorldNode::CreateAggregateSceneObjects(CNodeSceneObjectData* pNodeData, CWorld* pWorld, ISceneWorld* pSceneWorld)
{
	ISceneObjectDesc* pAggregateDesc; // 611
	CUtlVectorFixedGrowableCompat<unsigned int, 32> visMembership; // 614
	const matrix3x4a_t& mWorldTransform; // 615
	CUtlVectorBase<AggregateSceneObject_t, CUtlMemory<AggregateSceneObject_t, int> >::Count(); // 135
	CUtlVectorBase<AggregateSceneObject_t, CUtlMemory<AggregateSceneObject_t, int> >::IsEmpty(); // 606
} /* size: 0, variables: 3, inline expansions: 2 (0 bytes) */

// <01114E0C> worldrenderer/worldnode.cpp:604
// variables: 25
// function calls: 93
void CWorldNode::CreateAggregateSceneObjects(CWorld* pWorld, ISceneWorld* pSceneWorld, CNodeSceneObjectData* pNodeData)
{
	ISceneObjectDesc* pAggregateDesc; // 611
	CUtlVectorFixedGrowableCompat<unsigned int, 32> visMembership; // 614
	const matrix3x4a_t& mWorldTransform; // 615
	{
	}
	CUtlMemory<unsigned int, int>::CUtlMemory(
			unsigned int* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 535
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 538
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			unsigned int* pMemory,
			int allocationCount,
			int initialCount,
			bool bGrowable);  // 420
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(
			unsigned int* pMemory,
			int allocationCount,
			int initialCount,
			bool bGrowable);  // 495
	AlignedByteArrayExplicit_t<32, unsigned int, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<32, unsigned int>::AlignedByteArray_t(); // 495
	AlignedByteArrayExplicit_t<32, unsigned int, 4>::Base(); // 497
	CUtlVectorFixedGrowableCompat<unsigned int, 32>::CUtlVectorFixedGrowableCompat(
					int growSize);  // 614
	{
		const AggregateSceneObject_t& src; // 616
		CUtlVector<AggregateSceneObject_t, CUtlMemory<AggregateSceneObject_t, int> >& __for_range; // 34737
		iterator __for_begin; // 34747
		iterator __for_end; // 34757
		CUtlMemory<AggregateSceneObject_t, int>::Base(); // 112
		CUtlVectorBase<AggregateSceneObject_t, CUtlMemory<AggregateSceneObject_t, int> >::Base(); // 102
		CUtlVectorBase<AggregateSceneObject_t, CUtlMemory<AggregateSceneObject_t, int> >::begin(); // 616
		CUtlVectorBase<AggregateSceneObject_t, CUtlMemory<AggregateSceneObject_t, int> >::Count(); // 104
		CUtlVectorBase<AggregateSceneObject_t, CUtlMemory<AggregateSceneObject_t, int> >::end(); // 616
		{
			HModel hModel; // 618
			const CModel* pModel; // 619
			ESceneObjectTypeFlags nSceneObjectTypeFlags; // 628
			SceneObjectCreationFlags_t nCreationFlags; // 629
			ESceneObjectFlags nSceneObjectFlags; // 630
			CAggregateSceneObject* pAggregate; // 645
			AABB_t aggregateWorldBounds; // 654
			CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
			CStrongHandle<InfoForResourceTypeCModel>::operator CWeakHandle<InfoForResourceTypeCModel>(); // 618
			CInterlockedIntT<int, 4>::operator int(); // 282
			ResourceHandleToData<InfoForResourceTypeCModel>(const CWeakHandle<InfoForResourceTypeCModel>& hResource); // 619
			{
			}
			operator&=(ESceneObjectFlags& a,
					ESceneObjectFlags b);  // 638
			TransformAABB(const matrix3x4_t& matTransform,
					const AABB_t& boundsIn,
					AABB_t* pBoundsOut);  // 655
			Vector::operator=(
					const Vector& vOther);  // 28
			Vector::operator=(
					const Vector& vOther);  // 29
			Vector::Vector(); // 27
			Vector::Vector(); // 27
			AABB_t::AABB_t(
				const Vector& vMins,
				const Vector& vMaxs);  // 655
			Vector::Vector(); // 24
			Vector::Vector(); // 24
			AABB_t::AABB_t(); // 654
			CSceneObject::SetBoundsGroupIndex(
						int nIndex);  // 657
			matrix3x4_t::Base(); // 291
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 291
			matrix3x4a_t::operator=(
					const matrix3x4_t& src);  // 2082
			CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::Count(); // 135
			CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::IsEmpty(); // 2090
			CSceneObject::SetTransform(
					const matrix3x4_t& mTransform);  // 660
			CSceneObject::SetBounds(
					const Vector& vecWorldMins,
					const Vector& vecWorldMaxes);  // 625
			CSceneObject::SetBounds(
					const AABB_t& bounds);  // 661
			CUtlVectorBase<AggregateMeshInfo_t, CUtlMemory<AggregateMeshInfo_t, int> >::Count(); // 662
			CWeakHandle<InfoForResourceTypeCModel>::Init(
				const CWeakHandle<InfoForResourceTypeCModel>& src);  // 273
			CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCModel>& src);  // 662
			CSceneObject::EnableLightingCache(); // 2297
			CSceneObject::EnableLightingCache(); // 491
			CSceneObject::SetBakedLightingInfo(
						const CSceneSystemBakedLightingInfo* pBakedLightingInfo);  // 668
			{
				const AggregateMeshInfo_t& meshInfo; // 671
				const CUtlVector<AggregateMeshInfo_t, CUtlMemory<AggregateMeshInfo_t, int> >& __for_range; // 34904
				const_iterator __for_begin; // 34914
				const_iterator __for_end; // 34924
				CUtlMemory<AggregateMeshInfo_t, int>::Base(); // 113
				CUtlVectorBase<AggregateMeshInfo_t, CUtlMemory<AggregateMeshInfo_t, int> >::Base(); // 103
				CUtlVectorBase<AggregateMeshInfo_t, CUtlMemory<AggregateMeshInfo_t, int> >::begin(); // 671
				CUtlVectorBase<AggregateMeshInfo_t, CUtlMemory<AggregateMeshInfo_t, int> >::Count(); // 105
				CUtlVectorBase<AggregateMeshInfo_t, CUtlMemory<AggregateMeshInfo_t, int> >::end(); // 671
				{
					const uint  invalidFlags; // 674
					AABB_t fragmentWorldBounds; // 678
					matrix3x4_t mOriginalTransform; // 679
					matrix3x4_t mWorldFromModel; // 680
					FragmentFlags_t fragmentFlags; // 700
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveMultipleFromTail(
								int num);  // 1323
					CUtlMemory<unsigned int, int>::NumAllocated(); // 782
					CUtlMemory<unsigned int, int>::Base(); // 112
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
							int num);  // 784
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowVector(
							int num);  // 1445
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::InsertMultipleBefore(
								int elem,
								int num);  // 1437
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::InsertMultipleBefore(
								int elem,
								int num);  // 1294
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddMultipleToTail(
								int num);  // 1319
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::SetCount(
						int count);  // 685
					{
					}
					{
						const int  nOffset; // 688
						{
							int i; // 689
							CUtlMemory<short unsigned int, int>::operator[](
									int i);  // 588
							CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
									int i);  // 691
							CUtlMemory<unsigned int, int>::operator[](
									int i);  // 588
							CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
									int i);  // 691
						}
					}
					{
					}
					Vector::Vector(); // 24
					Vector::Vector(); // 24
					AABB_t::AABB_t(); // 678
					matrix3x4_t::matrix3x4_t(); // 680
					Vector::Vector(); // 27
					Vector::Vector(); // 27
					Vector::operator=(
							const Vector& vOther);  // 28
					Vector::operator=(
							const Vector& vOther);  // 29
					AABB_t::AABB_t(
						const Vector& vMins,
						const Vector& vMaxs);  // 683
					TransformAABB(const matrix3x4_t& matTransform,
							const AABB_t& boundsIn,
							AABB_t* pBoundsOut);  // 683
				}
			}
			CSceneObject::MirrorFlags(); // 1901
			CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
								ESceneObjectFlags flags);  // 1940
			CSceneObject::SetFlags(
				ESceneObjectFlags nFlagsToOR);  // 1966
			CSceneObject::SetLoaded(); // 726
			CSceneObject::MirrorFlags(); // 1901
			CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
								ESceneObjectFlags flags);  // 1981
			CSceneObject::EnableRendering(); // 727
			CSceneObject::UpdateFlagsBasedOnMaterial(); // 728
		}
	}
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 489
	CUtlVectorFixedGrowableCompat<unsigned int, 32>::~CUtlVectorFixedGrowableCompat(); // 733
} /* size: 0, variables: 3, inline expansions: 19 (354 bytes) */

// <010FEEF2> worldrenderer/worldnode.cpp:604
// variables: 30
void CWorldNode::CreateAggregateSceneObjects(CNodeSceneObjectData* pNodeData, CWorld* pWorld, ISceneWorld* pSceneWorld)
{
	ISceneObjectDesc* pAggregateDesc; // 611
	const char   __FUNCTION__; // 54813
	CUtlVectorFixedGrowableCompat<unsigned int, 32> visMembership; // 614
	const matrix3x4a_t& mWorldTransform; // 615
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 612
	}
	{
		const AggregateSceneObject_t& src; // 616
		CUtlVector<AggregateSceneObject_t, CUtlMemory<AggregateSceneObject_t, int> >& __for_range; // 35095
		iterator __for_begin; // 58888
		iterator __for_end; // 58888
		{
			HModel hModel; // 618
			const CModel* pModel; // 619
			ESceneObjectTypeFlags nSceneObjectTypeFlags; // 628
			SceneObjectCreationFlags_t nCreationFlags; // 629
			ESceneObjectFlags nSceneObjectFlags; // 630
			CAggregateSceneObject* pAggregate; // 645
			AABB_t aggregateWorldBounds; // 654
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 626
			}
			{
				const AggregateMeshInfo_t& meshInfo; // 671
				const CUtlVector<AggregateMeshInfo_t, CUtlMemory<AggregateMeshInfo_t, int> >& __for_range; // 32186
				const_iterator __for_begin; // 28739
				const_iterator __for_end; // 28739
				{
					const uint  invalidFlags; // 674
					AABB_t fragmentWorldBounds; // 678
					matrix3x4_t mOriginalTransform; // 679
					matrix3x4_t mWorldFromModel; // 680
					FragmentFlags_t fragmentFlags; // 700
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 675
					}
					{
						const int  nOffset; // 688
						{
							int i; // 689
						}
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 696
					}
				}
			}
		}
	}
} /* size: 0, variables: 4 */

// <010FE37B> worldrenderer/worldnode.cpp:736
// variables: 9
// function calls: 39
void CWorldNode::CreateSceneObjects(CWorld* pWorld, int nWorldNode, ISceneWorld* pSceneWorld)
{
	CNodeSceneObjectData* pNodeData; // 741
	const char   __FUNCTION__; // 54600
	const int  nSceneObjects; // 749
	const matrix3x4a_t& mWorldTransform; // 750
	CUtlVector<AABB_t, CUtlMemory<AABB_t, int> > boundsGroups; // 752
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 747
	}
	{
		int i; // 754
		CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::Count(); // 754
		CUtlMemory<AABB_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::operator[](
				int i);  // 756
		CUtlMemory<AABB_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::operator[](
				int i);  // 756
		TransformAABB(const matrix3x4_t& matTransform,
				const AABB_t& boundsIn,
				AABB_t* pBoundsOut);  // 756
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 762
	}
	CUtlVectorBase<SceneObject_t, CUtlMemory<SceneObject_t, int> >::Count(); // 749
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::ResetDbgInfo(); // 530
	CUtlMemory<AABB_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<AABB_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<AABB_t, CUtlMemory<AABB_t, int> >::CUtlVector(); // 752
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::Count(); // 753
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlMemory<AABB_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<AABB_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<AABB_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
	}
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::SetCount(
		int count);  // 753
	CUtlVectorBase<CWorldSceneObjectRef::Count(); // 762
	CUtlVectorBase<signed char, CUtlMemory<signed char, int> >::Count(); // 762
	CUtlVectorBase<AggregateSceneObject_t, CUtlMemory<AggregateSceneObject_t, int> >::Count(); // 135
	CUtlVectorBase<AggregateSceneObject_t, CUtlMemory<AggregateSceneObject_t, int> >::IsEmpty(); // 606
	CWorldNode::CreateAggregateSceneObjects(
					CNodeSceneObjectData* pNodeData,
					CWorld* pWorld,
					ISceneWorld* pSceneWorld);  // 773
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::RemoveAll(); // 1798
	CUtlMemory<AABB_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<AABB_t, int>::Purge(); // 903
	CUtlMemory<AABB_t, int>::Purge(); // 1799
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::Purge(); // 560
	ValidateAlignment<AABB_t>(void); // 508
	CUtlMemory<AABB_t, int>::Purge(); // 510
	CUtlMemory<AABB_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<AABB_t, CUtlMemory<AABB_t, int> >::~CUtlVector(); // 786
} /* size: 0, variables: 5, inline expansions: 33 (1420 bytes) */

// <010FE12B> worldrenderer/worldnode.cpp:788
// variables: 3
// function calls: 7
void CWorldNode::DestroySceneObjects(CWorld* pWorld, int nWorldNode)
{
	CNodeSceneObjectData* pNodeData; // 790
	int nSceneObjects; // 798
	{
		int s; // 799
		CUtlMemory<CWorldSceneObjectRef::operator[](
				int i);  // 588
		CUtlVectorBase<CWorldSceneObjectRef::operator[](
				int i);  // 801
	}
	CUtlVectorBase<VertexBufferHandle_t__::RemoveAll(); // 793
	CUtlVectorBase<CWorldSceneObjectRef::Count(); // 798
	CUtlVectorBase<CWorldSceneObjectRef::RemoveAll(); // 803
	CUtlVectorBase<signed char, CUtlMemory<signed char, int> >::RemoveAll(); // 808
	CUtlVectorBase<signed char, CUtlMemory<signed char, int> >::RemoveAll(); // 809
} /* size: 156, variables: 2, inline expansions: 5 (47 bytes) */

// <010FE0B0> worldrenderer/worldnode.cpp:813
// variables: 3
float CalcLuminance(uint8* pLinearValues)
{
	float flRed; // 815
	float flGreen; // 816
	float flBlue; // 817
} /* size: 0, variables: 3 */

// <010FDF45> worldrenderer/worldnode.cpp:823
// variables: 2
// function calls: 4
void CWorldNode::GetLayerIndexByName(const char* pName)
{
	int nLayers; // 825
	{
		int i; // 826
		CUtlString::Get(); // 828
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 828
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 825
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <010FDDCF> worldrenderer/worldnode.cpp:838
// variables: 2
// function calls: 4
void CWorldNode::SetLayerVisibility(const char* pLayerName, bool bVisible)
{
	const int  nNumLayers; // 840
	{
		int iLayer; // 841
		CUtlString::Get(); // 843
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 843
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 840
} /* size: 185, variables: 1, inline expansions: 1 (7 bytes) */

// <01114143> worldrenderer/worldnode.cpp:864
// variable: 1
// function call: 1
void CWorldNodeManager::AllocateTypesafe(WorldNode_t* pDataFromDisk, IKV3ResourceAllocatorUtils* pUtils)
{
	CWorldNode* pWorldNode; // 866
	CWorldNode::CWorldNode(
			WorldNode_t* pWorldNodeData);  // 866
} /* size: 43, variables: 1, inline expansions: 1 (11 bytes) */

// <010FDD8F> worldrenderer/worldnode.cpp:864
// variable: 1
void CWorldNodeManager::AllocateTypesafe(WorldNode_t* pDataFromDisk, IKV3ResourceAllocatorUtils* pUtils)
{
	CWorldNode* pWorldNode; // 866
} /* size: 0, variables: 1 */

// <01116730> worldrenderer/worldnode.cpp:870
// function calls: 2
void CWorldNodeManager::DeallocateTypesafe(CWorldNode* pData, IKV3ResourceDeallocatorUtils* pUtils)
{
	CWorldNode::~CWorldNode(); // 872
	CWorldNodeManager::DeallocateTypesafe(
				CWorldNode* pData,
				IKV3ResourceDeallocatorUtils* pUtils);  // 870
} /* size: 97, inline expansions: 2 (113 bytes) */

// <010FDD5C> worldrenderer/worldnode.cpp:870
void CWorldNodeManager::DeallocateTypesafe(CWorldNode* pData, IKV3ResourceDeallocatorUtils* pUtils)
{
} /* size: 0 */

// <010FDD2E> worldrenderer/worldnode.cpp:875
void CWorldNodeManager::WantsAsyncProcessData()
{
} /* size: 10 */

// <010FCB66> worldrenderer/worldnode.cpp:880
// variables: 4
// function calls: 76
void CWorldNodeManager::AsyncProcessData(ResourceHandle_t hResource, const ResourceFileHeader_t* pHeader)
{
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 44
	}
	CUtlString::CUtlString(); // 28
	_Head_base<1, std::default_delete<CKeyValues3Context>, true>::_Head_base(); // 561
	_Tuple_impl<1, std::default_delete<CKeyValues3Context> >::_Tuple_impl(); // 303
	_Head_base<0, CKeyValues3Context::_Head_base(); // 303
	_Tuple_impl<0, CKeyValues3Context::_Tuple_impl(); // 966
	tuple<CKeyValues3Context::tuple(); // 169
	__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::_M_ptr(); // 169
	__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::__uniq_ptr_impl(
			pointer __p);  // 234
	__uniq_ptr_data<CKeyValues3Context, std::default_delete<CKeyValues3Context>, true, true>::__uniq_ptr_data(
			pointer);  // 311
	unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::unique_ptr<>(
			pointer __p);  // 31
	make_unique<CKeyValues3Context>(void); // 66
	IAsyncProcessedDataResult::IAsyncProcessedDataResult(); // 65
	_Head_base<1, std::default_delete<CKeyValues3Context>, true>::_Head_base(); // 561
	_Tuple_impl<1, std::default_delete<CKeyValues3Context> >::_Tuple_impl(); // 303
	_Head_base<0, CKeyValues3Context::_Head_base(); // 303
	_Tuple_impl<0, CKeyValues3Context::_Tuple_impl(); // 966
	tuple<CKeyValues3Context::tuple(); // 167
	__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::__uniq_ptr_impl(); // 232
	__uniq_ptr_data<CKeyValues3Context, std::default_delete<CKeyValues3Context>, true, true>::__uniq_ptr_data(); // 298
	unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::unique_ptr<>(); // 65
	default_delete<CKeyValues3Context>::operator(
			CKeyValues3Context* __ptr);  // 86
	default_delete<CKeyValues3Context>::operator(
			CKeyValues3Context* __ptr);  // 204
	__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::reset(
		pointer __p);  // 184
	__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::operator=(
			__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >& __u);  // 236
	__uniq_ptr_data<CKeyValues3Context, std::default_delete<CKeyValues3Context>, true, true>::operator=(
			__uniq_ptr_data<CKeyValues3Context, std::default_delete<CKeyValues3Context>, true, true> &);  // 408
	unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::operator=(
			unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> > &);  // 66
	{
		CKeyValues3Context *& __ptr; // 396
		__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::_M_ptr(); // 396
	}
	unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::~unique_ptr(); // 66
	CKV3ResourceBlockHelper::CKV3ResourceBlockHelper(); // 29
	__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::_M_ptr(); // 472
	unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::get(); // 30
	_Head_base<1, std::default_delete<CKV3ResourceBlockHelper>, true>::_Head_base(); // 561
	_Tuple_impl<1, std::default_delete<CKV3ResourceBlockHelper> >::_Tuple_impl(); // 303
	_Head_base<0, CKV3ResourceBlockHelper::_Head_base(); // 303
	_Tuple_impl<0, CKV3ResourceBlockHelper::_Tuple_impl(); // 966
	tuple<CKV3ResourceBlockHelper::tuple(); // 169
	__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::_M_ptr(); // 169
	__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::__uniq_ptr_impl(
			pointer __p);  // 234
	__uniq_ptr_data<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper>, true, true>::__uniq_ptr_data(
			pointer);  // 311
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::unique_ptr<>(
			pointer __p);  // 29
	CUtlString::Get(); // 32
	{
		CKV3ResourceBlockHelper *& __ptr; // 396
		__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::_M_ptr(); // 396
		unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::get_deleter(); // 398
		{
			CKeyValues3Context *& __ptr; // 396
			__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::_M_ptr(); // 396
			unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::get_deleter(); // 398
			default_delete<CKeyValues3Context>::operator(
					CKeyValues3Context* __ptr);  // 86
			default_delete<CKeyValues3Context>::operator(
					CKeyValues3Context* __ptr);  // 398
		}
		unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::~unique_ptr(); // 20
		IAsyncProcessedDataResult::~IAsyncProcessedDataResult(); // 20
		CKV3ResourceBlockHelper::~CKV3ResourceBlockHelper(); // 20
		CKV3ResourceBlockHelper::~CKV3ResourceBlockHelper(); // 92
		default_delete<CKV3ResourceBlockHelper>::operator(
				CKV3ResourceBlockHelper* __ptr);  // 398
	}
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::~unique_ptr(); // 37
	CUtlString::~CUtlString(); // 37
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 37
	FromBlock(const ResourceHeaderBlockInfo_t* pBlockInfo,
			const KV3ID_t& expectedFormat);  // 50
	FromDataBlock(const ResourceFileHeader_t* pHeader,
			const KV3ID_t& expectedFormat);  // 884
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::get_deleter(); // 374
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::release(); // 374
	default_delete<IAsyncProcessedDataResult>::default_delete<CKV3ResourceBlockHelper>(
						const default_delete<CKV3ResourceBlockHelper>  &);  // 104
	_Head_base<1, std::default_delete<IAsyncProcessedDataResult>, true>::_Head_base<std::default_delete<CKV3ResourceBlockHelper> >(
									default_delete<CKV3ResourceBlockHelper>& __h);  // 571
	_Tuple_impl<1, std::default_delete<IAsyncProcessedDataResult> >::_Tuple_impl<std::default_delete<CKV3ResourceBlockHelper> >(
									default_delete<CKV3ResourceBlockHelper>& __head);  // 315
	_Head_base<0, IAsyncProcessedDataResult::_Head_base<IAsyncProcessedDataResult*&>(
						IAsyncProcessedDataResult *& __h);  // 315
	_Tuple_impl<0, IAsyncProcessedDataResult::_Tuple_impl<IAsyncProcessedDataResult*&, std::default_delete<CKV3ResourceBlockHelper> >(
												IAsyncProcessedDataResult *& __head);  // 985
	tuple<IAsyncProcessedDataResult::tuple<IAsyncProcessedDataResult*&, std::default_delete<CKV3ResourceBlockHelper> >(); // 174
	__uniq_ptr_impl<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::__uniq_ptr_impl<std::default_delete<CKV3ResourceBlockHelper> >(
									pointer __p,
									default_delete<CKV3ResourceBlockHelper>& __d);  // 234
	__uniq_ptr_data<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult>, true, true>::__uniq_ptr_data<std::default_delete<CKV3ResourceBlockHelper> >(
									pointer,
									default_delete<CKV3ResourceBlockHelper> &);  // 374
	unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >(
												unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >& __u);  // 884
	{
		CKV3ResourceBlockHelper *& __ptr; // 396
		__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::_M_ptr(); // 396
	}
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::~unique_ptr(); // 884
} /* size: 0, inline expansions: 62 (1520 bytes) */

// <010FBFE9> worldrenderer/worldnode.cpp:896
// variables: 5
// function calls: 36
void CWorldNodeManager::AllocateResource(ResourceHandle_t hResource, ResourceId_t nId, const ResourceFileHeader_t* pHeader, IRD_RegisterResourceDataUtils* pUtils)
{
	{
		CKV3ResourceBlockHelper* pHelper; // 907
		WorldNode_t* pDataFromDisk; // 917
		CWorldNode* pWorldNode; // 924
		__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::_M_ptr(); // 472
		unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::get(); // 465
		unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::operator->(); // 55
		CKV3ResourceBlockHelper::GetKV3(); // 917
		IKV3TransferInterface_ResourceLoad::IKV3TransferInterface_ResourceLoad(); // 19
		ResourceId_t::ResourceId_t(); // 19
		CKV3Transfer_ResourceLoadInterface::CKV3Transfer_ResourceLoadInterface(
							IRD_RegisterResourceDataUtils* pDataUtils,
							ResourceHandle_t hOriginatingResource,
							ResourceId_t nOriginatingResourceId);  // 26
		CKV3TransferContextBase::AddInterface<CKV3Transfer_ResourceLoadInterface>(
								CKV3Transfer_ResourceLoadInterface* pInterface);  // 27
		IKV3TransferInterface_UtlSymbolLarge::IKV3TransferInterface_UtlSymbolLarge(); // 48
		CKV3Transfer_UtlSymbolLargeInterface<CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> >::CKV3Transfer_UtlSymbolLargeInterface(
							CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* pSymbolTable);  // 30
		{
			CResourceNameGetter name; // 41
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 184
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 180
			ResourceGetName(ResourceHandle_t hResource,
					CResourceName* pTarget);  // 196
			CResourceNameGetter::CResourceNameGetter(
						ResourceHandle_t hResource);  // 41
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 89
			CKV3TransferContextBase::GetErrorMessage(); // 42
			CResourceName::Get(); // 42
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 47
		}
		LoadKV3TransferResourceClass<WorldNode_t>(ResourceHandle_t hResource,
								ResourceId_t nId,
								const KeyValues3* pKV3,
								IRD_RegisterResourceDataUtils* pDataUtils,
								CUtlSymbolTableLarge* pOptionalSymbolTable);  // 917
		CWorldNode::CWorldNode(
				WorldNode_t* pWorldNodeData);  // 924
	}
	{
		CResourceNameGetter resourceName; // 929
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 180
		ResourceGetName(ResourceHandle_t hResource,
				CResourceName* pTarget);  // 196
		CResourceNameGetter::CResourceNameGetter(
					ResourceHandle_t hResource);  // 929
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 934
		CResourceName::Get(); // 930
	}
} /* size: 946 */

// <010FBEFF> worldrenderer/worldnode.cpp:937
// function call: 1
void CWorldNodeManager::CWorldNodeManager()
{
	{
		{
		}
	}
	{
		CTypesafeIntrospectedToKV3TypeManager<431366240118, WorldNode_t>::CTypesafeIntrospectedToKV3TypeManager(); // 937
		{
		}
	}
} /* size: 0 */

// <010FBEC0> worldrenderer/worldnode.cpp:937
// variables: 2
void CWorldNodeManager::CWorldNodeManager()
{
	const char   __FUNCTION__; // 54573
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 939
	}
} /* size: 0, variables: 1 */

// <010FBE30> worldrenderer/worldnode.cpp:943
// function calls: 2
void CWorldNodeManager::~CWorldNodeManager()
{
	CBaseIntrospectedToKV3TypeManager::~CBaseIntrospectedToKV3TypeManager(); // 113
	CTypesafeIntrospectedToKV3TypeManager<431366240118, WorldNode_t>::~CTypesafeIntrospectedToKV3TypeManager(); // 946
} /* size: 16, inline expansions: 2 (0 bytes) */

// <010FBD49> worldrenderer/worldnode.cpp:943
// function calls: 3
void CWorldNodeManager::~CWorldNodeManager()
{
	CBaseIntrospectedToKV3TypeManager::~CBaseIntrospectedToKV3TypeManager(); // 113
	CTypesafeIntrospectedToKV3TypeManager<431366240118, WorldNode_t>::~CTypesafeIntrospectedToKV3TypeManager(); // 946
	CWorldNodeManager::~CWorldNodeManager(); // 946
} /* size: 25, inline expansions: 3 (11 bytes) */

// <010FBD30> worldrenderer/worldnode.cpp:943
void CWorldNodeManager::~CWorldNodeManager()
{
} /* size: 0 */

// <010FBC70> worldrenderer/worldnode.cpp:948
// function calls: 2
void CWorldNodeManager::InstallResourceType()
{
	ResourceTypeName(void); // 673
	IResourceSystem::InstallTypeManager<431366240118>(
					IResourceTypeManager* pTypeManager,
					const char* pErrorManifestName);  // 950
} /* size: 46, inline expansions: 2 (29 bytes) */

// <010FBC29> worldrenderer/worldnode.cpp:953
void CWorldNodeManager::RemoveResourceType()
{
} /* size: 26 */

// <010FB1A8> worldrenderer/worldnode.cpp:959
// variables: 6
// function calls: 51
void CWorldNode::ApplyTags(CSceneObject* pObj)
{
	CUtlStringToken solidToken; // 961
	CUtlStringToken worldToken; // 962
	CUtlStringToken mapToken; // 963
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 961
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 962
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 963
	{
		int i; // 1531
		CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::Count(); // 1531
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 609
		CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::Element(
			int i);  // 1533
	}
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::Find(
		const unsigned int& src);  // 1563
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::HasElement(
			const unsigned int& src);  // 991
	CSceneObject::HasTag(
		uint hash);  // 980
	CUtlMemory<unsigned int, int>::NumAllocated(); // 1196
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::Element(
		int i);  // 1201
	CopyConstruct<unsigned int>(unsigned int* pMemory,
					const unsigned int& src);  // 1201
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::Base(); // 368
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::AddToTail(
			const unsigned int& src);  // 981
	CSceneObject::AddTag(
		uint hash);  // 965
	{
		int i; // 1531
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 609
		CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::Element(
			int i);  // 1533
		CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::Count(); // 1531
	}
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::Find(
		const unsigned int& src);  // 1563
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::HasElement(
			const unsigned int& src);  // 991
	CSceneObject::HasTag(
		uint hash);  // 980
	CUtlMemory<unsigned int, int>::NumAllocated(); // 1196
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::Element(
		int i);  // 1201
	CopyConstruct<unsigned int>(unsigned int* pMemory,
					const unsigned int& src);  // 1201
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::Base(); // 368
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::AddToTail(
			const unsigned int& src);  // 981
	CSceneObject::AddTag(
		uint hash);  // 966
	{
		int i; // 1531
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 609
		CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::Element(
			int i);  // 1533
		CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::Count(); // 1531
	}
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::Find(
		const unsigned int& src);  // 1563
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::HasElement(
			const unsigned int& src);  // 991
	CSceneObject::HasTag(
		uint hash);  // 980
	CUtlMemory<unsigned int, int>::NumAllocated(); // 1196
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::Element(
		int i);  // 1201
	CopyConstruct<unsigned int>(unsigned int* pMemory,
					const unsigned int& src);  // 1201
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::Base(); // 368
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::AddToTail(
			const unsigned int& src);  // 981
	CSceneObject::AddTag(
		uint hash);  // 967
} /* size: 523, variables: 3, inline expansions: 42 (1713 bytes) */

