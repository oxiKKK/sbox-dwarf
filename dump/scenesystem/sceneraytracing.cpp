
//
// scenesystem/sceneraytracing.cpp
//
//	referenced by: libengine2.so
//
//	functions: 10
//

// <036AC442> ../scenesystem/sceneraytracing.cpp:11
// function calls: 14
void CSceneSystem::CreateRayTraceWorld(const char* pWorldDebugName, int nMaxRayTypes)
{
	IRayTraceSceneWorld::IRayTraceSceneWorld(); // 24
	CUtlMemory<TLASInstance_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<TLASInstance_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<TLASInstance_t, CUtlMemory<TLASInstance_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<TLASInstance_t, CUtlMemory<TLASInstance_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<TLASInstance_t, CUtlMemory<TLASInstance_t, int> >::CUtlVector(); // 24
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 139
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 138
	AABB_t::MakeInvalid(); // 245
	Vector::Vector(); // 24
	Vector::Vector(); // 24
	AABB_t::AABB_t(); // 244
	Invalid(void); // 24
	CRayTraceSceneWorld::CRayTraceSceneWorld(
				int nMaxRayTypes);  // 13
} /* size: 135, inline expansions: 14 (206 bytes) */

// <036AC388> ../scenesystem/sceneraytracing.cpp:17
// function call: 1
void CSceneSystem::DestroyRayTraceWorld(IRayTraceSceneWorld* pRayTraceSceneWorld)
{
	CRayTraceSceneWorld::~CRayTraceSceneWorld(); // 19
} /* size: 77, inline expansions: 1 (32 bytes) */

// <036AC039> ../scenesystem/sceneraytracing.cpp:23
// function calls: 13
void CRayTraceSceneWorld::CRayTraceSceneWorld(int nMaxRayTypes)
{
	IRayTraceSceneWorld::IRayTraceSceneWorld(); // 24
	CUtlMemory<TLASInstance_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<TLASInstance_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<TLASInstance_t, CUtlMemory<TLASInstance_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<TLASInstance_t, CUtlMemory<TLASInstance_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<TLASInstance_t, CUtlMemory<TLASInstance_t, int> >::CUtlVector(); // 24
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 139
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 138
	AABB_t::MakeInvalid(); // 245
	Vector::Vector(); // 24
	Vector::Vector(); // 24
	AABB_t::AABB_t(); // 244
	Invalid(void); // 24
} /* size: 0, inline expansions: 13 (0 bytes) */

// <036AC014> ../scenesystem/sceneraytracing.cpp:23
void CRayTraceSceneWorld::CRayTraceSceneWorld(int nMaxRayTypes)
{
} /* size: 0 */

// <036ABE74> ../scenesystem/sceneraytracing.cpp:29
// function calls: 7
void CRayTraceSceneWorld::~CRayTraceSceneWorld()
{
	{
		{
		}
	}
	{
		{
		}
		CUtlMemory<TLASInstance_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<TLASInstance_t, int>::Purge(); // 903
		CUtlMemory<TLASInstance_t, int>::Purge(); // 1799
		CUtlVectorBase<TLASInstance_t, CUtlMemory<TLASInstance_t, int> >::RemoveAll(); // 1798
		CUtlVectorBase<TLASInstance_t, CUtlMemory<TLASInstance_t, int> >::Purge(); // 560
		CUtlVectorBase<TLASInstance_t, CUtlMemory<TLASInstance_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<TLASInstance_t, CUtlMemory<TLASInstance_t, int> >::~CUtlVector(); // 38
	}
} /* size: 0 */

// <036ABE0C> ../scenesystem/sceneraytracing.cpp:29
void CRayTraceSceneWorld::~CRayTraceSceneWorld()
{
} /* size: 36 */

// <036ABDCE> ../scenesystem/sceneraytracing.cpp:29
// variables: 2
void CRayTraceSceneWorld::~CRayTraceSceneWorld()
{
	const char   __FUNCTION__; // 30354
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 31
	}
} /* size: 0, variables: 1 */

// <036ABC68> ../scenesystem/sceneraytracing.cpp:41
// variables: 2
// function calls: 4
void CRayTraceSceneWorld::BeginBuild()
{
	const char   __FUNCTION__; // 30129
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 43
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 139
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 138
	AABB_t::MakeInvalid(); // 47
	CUtlVectorBase<TLASInstance_t, CUtlMemory<TLASInstance_t, int> >::RemoveAll(); // 46
} /* size: 0, variables: 1, inline expansions: 4 (59 bytes) */

// <036AAE59> ../scenesystem/sceneraytracing.cpp:51
// variables: 25
// function calls: 54
void CRayTraceSceneWorld::AddSceneWorldToBuild(ISceneWorld* pWorldInterface, IRenderContext* pRenderContext)
{
	const char   __FUNCTION__; // 30354
	CSceneWorld* pWorld; // 55
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 53
	}
	{
		CSceneWorldObjectList& objectList; // 58
		CSceneWorldObjectList& __for_range; // 21630
		CSceneWorldObjectList* __for_begin; // 12046
		CSceneWorldObjectList* __for_end; // 12046
		{
			const CSceneWorldObjectListChunk* pChunk; // 60
			const CUtlVector<CSceneWorldObjectListChunk*, CUtlMemory<CSceneWorldObjectListChunk*, int> >& __for_range; // 11488
			const_iterator __for_begin; // 8078
			const_iterator __for_end; // 8078
			{
				int i; // 62
				{
					CSceneObject* pSceneObject; // 64
					matrix3x4_t mTransform; // 73
					AABB_t aabb; // 74
					MeshGroupMask_t meshGroupMask; // 75
					LODGroupMask_t lodGroupMask; // 76
					{
						CMeshInstance* pMesh; // 78
						{
							MeshGroupMask_t meshMask; // 80
							LODGroupMask_t meshLodMask; // 84
							const CMaterialDrawDescriptor* pDrawCalls; // 88
							int nDrawCount; // 89
							{
								int iDraw; // 90
								{
									const CMaterialDrawDescriptor& draw; // 92
									{
										TLASInstance_t* pTLASInstance; // 97
										CUtlMemory<TLASInstance_t, int>::NumAllocated(); // 1143
										CUtlMemory<TLASInstance_t, int>::Base(); // 112
										CUtlVectorBase<TLASInstance_t, CUtlMemory<TLASInstance_t, int> >::Base(); // 368
										CUtlVectorBase<TLASInstance_t, CUtlMemory<TLASInstance_t, int> >::ResetDbgInfo(); // 824
										CUtlMemory<TLASInstance_t, int>::IsGrowable(); // 823
										CUtlMemory<TLASInstance_t, int>::IsExternallyAllocated(); // 859
										CUtlMemory<TLASInstance_t, int>::IsExternallyAllocated(); // 861
										CUtlMemory<TLASInstance_t, int>::Grow(
											int num);  // 806
										CUtlVectorBase<TLASInstance_t, CUtlMemory<TLASInstance_t, int> >::GrowMemory(
												int num);  // 1145
										matrix3x4_t::matrix3x4_t(); // 1301
										TLASInstance_t::TLASInstance_t(); // 1479
										Construct<TLASInstance_t>(TLASInstance_t* pMemory); // 1148
										CUtlVectorBase<TLASInstance_t, CUtlMemory<TLASInstance_t, int> >::AddToTail(); // 1156
										CUtlMemory<TLASInstance_t, int>::operator[](
												int i);  // 602
										CUtlVectorBase<TLASInstance_t, CUtlMemory<TLASInstance_t, int> >::Element(
											int i);  // 1156
										CUtlVectorBase<TLASInstance_t, CUtlMemory<TLASInstance_t, int> >::AddToTailGetPtr(); // 97
										VectorMin(const Vector& a,
												const Vector& b,
												Vector& result);  // 99
										VectorMax(const Vector& a,
												const Vector& b,
												Vector& result);  // 100
										AABB_t::AddAABBToBounds(
												const AABB_t& other);  // 105
									}
								}
							}
							CMeshInstance::GetMeshGroupMask(); // 80
							CMeshInstance::GetLODGroupMask(); // 84
							CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 72
							CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::IsValid(); // 287
							CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 64
							CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::GetData(); // 292
							CUtlMemory<CSceneObjectData, int>::operator[](
									int i);  // 595
							CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
									int i);  // 305
							CMeshInstance::GetSceneObjectData(); // 332
							CUtlMemory<CMaterialDrawDescriptor, int>::Base(); // 113
							CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Base(); // 335
							CMeshInstance::GetDrawCallsPtr(); // 88
							CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 72
							CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::IsValid(); // 287
							CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 64
							CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::GetData(); // 292
							CUtlMemory<CSceneObjectData, int>::operator[](
									int i);  // 595
							CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
									int i);  // 305
							CMeshInstance::GetSceneObjectData(); // 322
							CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Count(); // 325
							CMeshInstance::GetNumDrawCalls(); // 89
						}
						CSceneObject::GetMeshInstanceData(); // 78
						CMeshInstance::GetNext(); // 78
					}
					CSceneObject::GetBounds(
							AABB_t& bounds);  // 638
					Vector::Vector(); // 24
					Vector::Vector(); // 24
					AABB_t::AABB_t(); // 637
					CSceneObject::GetBounds(); // 74
					CSceneObject::HasFlags(
						ESceneObjectFlags nFlags);  // 67
					CSceneObject::GetCurrentLODGroupMask(); // 75
				}
			}
			CUtlMemory<CSceneWorldObjectListChunk::Base(); // 113
			CUtlVectorBase<CSceneWorldObjectListChunk::Base(); // 103
			CUtlVectorBase<CSceneWorldObjectListChunk::begin(); // 60
			CUtlVectorBase<CSceneWorldObjectListChunk::Count(); // 105
			CUtlVectorBase<CSceneWorldObjectListChunk::end(); // 60
		}
	}
} /* size: 0, variables: 2 */

// <036A8986> ../scenesystem/sceneraytracing.cpp:115
// variables: 35
// function calls: 157
void CRayTraceSceneWorld::EndBuild(IRenderContext* pRenderContext, CRenderAttributes* attrs)
{
	const char   __FUNCTION__; // 30080
	uint32 nMaxInstances; // 123
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 117
	}
	{
		CUtlVectorFixedGrowable<RenderDescriptorDesc_t, 32> descSetLayout; // 140
		CUtlVector<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> > descSetBindings; // 141
		RenderDescriptorDesc_t* pRDD; // 142
		int nSrvBinding; // 144
		CUtlMemory<RenderDescriptorDesc_t, int>::CUtlMemory(
				RenderDescriptorDesc_t* pMemory,
				int numElements,
				bool bGrowable,
				uint32 nGrowable_GrowSize);  // 197
		CUtlMemory<RenderDescriptorDesc_t, int>::EnsureCapacity(
				int num);  // 199
		CUtlMemoryFixedGrowable_Base<RenderDescriptorDesc_t, int>::CUtlMemoryFixedGrowable_Base(
						RenderDescriptorDesc_t* pFixedMemory,
						int nFixedElements,
						int nGrowSize,
						int nInitAllocationCount);  // 228
		AlignedByteArrayExplicit_t<32, RenderDescriptorDesc_t, 8>::AlignedByteArrayExplicit_t(); // 1597
		AlignedByteArray_t<32, RenderDescriptorDesc_t>::AlignedByteArray_t(); // 228
		AlignedByteArrayExplicit_t<32, RenderDescriptorDesc_t, 8>::Base(); // 231
		CUtlMemoryFixedGrowable<RenderDescriptorDesc_t, 32, int>::CUtlMemoryFixedGrowable(
					int nGrowSize,
					int nInitSize);  // 527
		CUtlVectorBase<RenderDescriptorDesc_t, CUtlMemoryFixedGrowable<RenderDescriptorDesc_t, 32, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<RenderDescriptorDesc_t, CUtlMemoryFixedGrowable<RenderDescriptorDesc_t, 32, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 484
		CUtlVectorFixedGrowable<RenderDescriptorDesc_t, 32>::CUtlVectorFixedGrowable(
					int growSize);  // 140
		CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::GrowMemory(
				int num);  // 1145
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
					ResourceHandle_t hUntypedResource);  // 227
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 756
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 844
		DescriptorBindParams_t(const union DescriptorBindParams_t* this); // 759
		RenderDescriptorBinding_t::RenderDescriptorBinding_t(); // 1479
		Construct<RenderDescriptorBinding_t>(RenderDescriptorBinding_t* pMemory); // 1148
		CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::AddToTail(); // 1156
		CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::AddToTailGetPtr(); // 151
		RenderDescriptorDesc_t::RenderDescriptorDesc_t(); // 1479
		Construct<RenderDescriptorDesc_t>(RenderDescriptorDesc_t* pMemory); // 1148
		CUtlVectorBase<RenderDescriptorDesc_t, CUtlMemoryFixedGrowable<RenderDescriptorDesc_t, 32, int> >::AddToTail(); // 1156
		CUtlVectorBase<RenderDescriptorDesc_t, CUtlMemoryFixedGrowable<RenderDescriptorDesc_t, 32, int> >::AddToTailGetPtr(); // 147
		CUtlMemory<RenderDescriptorBinding_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<RenderDescriptorBinding_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::CUtlVector(); // 141
		RenderDescriptorBinding_t::InitAccelerationStructure(
						const RenderDescriptorDesc_t& rdd,
						RenderTLASHandle_t hTLAS,
						uint32 nArrayIndex);  // 151
		CUtlMemory<RenderDescriptorDesc_t, int>::Base(); // 112
		CUtlVectorBase<RenderDescriptorDesc_t, CUtlMemoryFixedGrowable<RenderDescriptorDesc_t, 32, int> >::Base(); // 154
		CUtlVectorBase<RenderDescriptorDesc_t, CUtlMemoryFixedGrowable<RenderDescriptorDesc_t, 32, int> >::Count(); // 153
		CUtlMemory<RenderDescriptorBinding_t, int>::Purge(); // 903
		CUtlMemory<RenderDescriptorBinding_t, int>::Purge(); // 1799
		CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::Purge(); // 560
		ValidateAlignment<RenderDescriptorBinding_t>(void); // 508
		CUtlMemory<RenderDescriptorBinding_t, int>::Purge(); // 903
		CUtlMemory<RenderDescriptorBinding_t, int>::Purge(); // 510
		CUtlMemory<RenderDescriptorBinding_t, int>::~CUtlMemory(); // 562
		CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::~CUtlVector(); // 158
		CUtlVectorBase<RenderDescriptorDesc_t, CUtlMemoryFixedGrowable<RenderDescriptorDesc_t, 32, int> >::RemoveAll(); // 1798
		AlignedByteArrayExplicit_t<32, RenderDescriptorDesc_t, 8>::Base(); // 237
		CUtlMemory<RenderDescriptorDesc_t, int>::IsExternallyAllocated(); // 577
		CUtlMemory<RenderDescriptorDesc_t, int>::ConvertToExternalMemory(
					RenderDescriptorDesc_t* pMemory,
					int numElements,
					int nCopyElements,
					bool bSetGrowable,
					uint32 nGrowable_GrowSize);  // 207
		CUtlMemoryFixedGrowable_Base<RenderDescriptorDesc_t, int>::Purge_FixedGrowable(
					RenderDescriptorDesc_t* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 203
		CUtlMemoryFixedGrowable_Base<RenderDescriptorDesc_t, int>::Purge_FixedGrowable(
					RenderDescriptorDesc_t* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 237
		CUtlMemoryFixedGrowable<RenderDescriptorDesc_t, 32, int>::Purge(
			int numElements);  // 1799
		CUtlMemory<RenderDescriptorDesc_t, int>::Base(); // 112
		CUtlVectorBase<RenderDescriptorDesc_t, CUtlMemoryFixedGrowable<RenderDescriptorDesc_t, 32, int> >::Base(); // 368
		CUtlVectorBase<RenderDescriptorDesc_t, CUtlMemoryFixedGrowable<RenderDescriptorDesc_t, 32, int> >::ResetDbgInfo(); // 1800
		CUtlVectorBase<RenderDescriptorDesc_t, CUtlMemoryFixedGrowable<RenderDescriptorDesc_t, 32, int> >::Purge(); // 560
		ValidateAlignment<RenderDescriptorDesc_t>(void); // 508
		CUtlMemory<RenderDescriptorDesc_t, int>::Purge(); // 903
		CUtlMemory<RenderDescriptorDesc_t, int>::Purge(); // 510
		CUtlMemory<RenderDescriptorDesc_t, int>::~CUtlMemory(); // 191
		CUtlMemoryFixedGrowable_Base<RenderDescriptorDesc_t, int>::~CUtlMemoryFixedGrowable_Base(); // 223
		CUtlMemoryFixedGrowable<RenderDescriptorDesc_t, 32, int>::~CUtlMemoryFixedGrowable(); // 562
		CUtlVectorBase<RenderDescriptorDesc_t, CUtlMemoryFixedGrowable<RenderDescriptorDesc_t, 32, int> >::~CUtlVectorBase(); // 478
		CUtlVectorFixedGrowable<RenderDescriptorDesc_t, 32>::~CUtlVectorFixedGrowable(); // 158
	}
	{
		CUtlVector<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> > descSetBindings; // 162
		RenderDescriptorDesc_t desc; // 163
		CUtlMemory<RenderDescriptorBinding_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<RenderDescriptorBinding_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::CUtlVector(); // 162
		RenderDescriptorDesc_t::RenderDescriptorDesc_t(); // 163
		CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::GrowMemory(
				int num);  // 1145
		CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
					ResourceHandle_t hUntypedResource);  // 227
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 756
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 844
		DescriptorBindParams_t(const union DescriptorBindParams_t* this); // 759
		RenderDescriptorBinding_t::RenderDescriptorBinding_t(); // 1479
		Construct<RenderDescriptorBinding_t>(RenderDescriptorBinding_t* pMemory); // 1148
		CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::AddToTail(); // 1156
		CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::AddToTailGetPtr(); // 168
		RenderDescriptorBinding_t::InitAccelerationStructure(
						const RenderDescriptorDesc_t& rdd,
						RenderTLASHandle_t hTLAS,
						uint32 nArrayIndex);  // 168
		CUtlMemory<RenderDescriptorBinding_t, int>::Purge(); // 903
		CUtlMemory<RenderDescriptorBinding_t, int>::Purge(); // 1799
		CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::Purge(); // 560
		ValidateAlignment<RenderDescriptorBinding_t>(void); // 508
		CUtlMemory<RenderDescriptorBinding_t, int>::Purge(); // 903
		CUtlMemory<RenderDescriptorBinding_t, int>::Purge(); // 510
		CUtlMemory<RenderDescriptorBinding_t, int>::~CUtlMemory(); // 562
		CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::~CUtlVector(); // 172
	}
	CUtlVectorBase<TLASInstance_t, CUtlMemory<TLASInstance_t, int> >::Count(); // 123
	RoundUpToMultipleOf<int>(int n,
				int m);  // 107
	RoundUpToMultipleOf<int>(int n,
				int m);  // 123
	Max<int>(const int& val1,
		const int& val2);  // 123
	CUtlVectorBase<TLASInstance_t, CUtlMemory<TLASInstance_t, int> >::Count(); // 133
	CUtlMemory<TLASInstance_t, int>::Base(); // 112
	CUtlVectorBase<TLASInstance_t, CUtlMemory<TLASInstance_t, int> >::Base(); // 133
	DescriptorSetAttr_t::DescriptorSetAttr_t(
				RenderDescriptorSetHandle_t hDescSet,
				int32 nCbufferOffset0,
				int32 nCbufferOffset1,
				int32 nCbufferOffset2,
				int32 nCbufferOffset3);  // 807
	DescriptorSetAttr_t::DescriptorSetAttr_t(
				const DescriptorSetAttr_t& other);  // 571
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 356
	{
		int i; // 212
		{
			int nTestResult; // 217
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 217
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 217
			{
				const int  nIndex; // 220
			}
		}
	}
	CUtlAttributeListChunk<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t>::FindIndexOfMatch(
			i32x4 i4KMatch);  // 311
	CUtlAttributeListChunk<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t>::GetValuePtrFromIndex(
				int nIdx);  // 314
	{
		OverflowChunk_t& p; // 317
		CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::OverflowChunk_t>& __for_range; // 61870
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::OverflowChunk_t> __for_begin; // 61880
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::OverflowChunk_t> __for_end; // 61890
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorS this); // 1151
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Descripto this,
						OverflowChunk_t* pNode);  // 1151
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr this); // 317
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Descripto this,
						OverflowChunk_t* pNode);  // 1156
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr this); // 317
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 319
		CUtlAttributeListChunk<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t>::GetValuePtrFromIndex(
					int nIdx);  // 322
		operator++(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Descripto this); // 317
	}
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::FindIndexOfMatch(
			i32x4 n4Key,
			DescriptorSetAttr_t** pValueOut);  // 309
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::FindIndexOfMatch(
			i32x4 n4Key,
			DescriptorSetAttr_t** pValueOut);  // 356
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::FindIndexOfMatch(
			uint32 nKey,
			DescriptorSetAttr_t** pValueOut);  // 547
	DescriptorSetAttr_t::operator=(
			const DescriptorSetAttr_t& other);  // 566
	{
		int i; // 212
		{
			int nTestResult; // 217
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 217
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 217
			{
				const int  nIndex; // 220
			}
		}
	}
	CUtlAttributeListChunk<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t>::FindIndexOfMatch(
			i32x4 i4KMatch);  // 330
	CUtlAttributeListChunk<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t>::GetKeyPtrFromIndex(
				int nIdx);  // 333
	CUtlAttributeListChunk<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t>::GetValuePtrFromIndex(
				int nIdx);  // 334
	{
		OverflowChunk_t& p; // 337
		CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::OverflowChunk_t>& __for_range; // 3968
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::OverflowChunk_t> __for_begin; // 3978
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::OverflowChunk_t> __for_end; // 3988
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 339
		CUtlAttributeListChunk<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t>::GetKeyPtrFromIndex(
					int nIdx);  // 342
		CUtlAttributeListChunk<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t>::GetValuePtrFromIndex(
					int nIdx);  // 343
		operator++(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Descripto this); // 337
	}
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				DescriptorSetAttr_t** pValueOut);  // 328
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				DescriptorSetAttr_t** pValueOut);  // 556
	{
		OverflowChunk_t* pNew; // 559
		DescriptorSetAttr_t::DescriptorSetAttr_t(); // 117
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
		CUtlAttributeListChunk<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t>::CUtlAttributeListChunk(); // 254
		OverflowChunk_t::OverflowChunk_t(); // 559
		AddToHead<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::OverflowChunk_t, CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::OverflowChunk_t>(OverflowChunk_t *& head,
																OverflowChunk_t* node);  // 960
		AddToHead(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr this,
				OverflowChunk_t* node);  // 560
	}
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::SetValue(
		uint32 nKey,
		DescriptorSetAttr_t nValue);  // 571
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::SetValue(
		const CUtlStringToken& nTok,
		DescriptorSetAttr_t nValue);  // 807
	CRenderAttributes::SetDescriptorSetValue(
				CUtlStringToken nTokenID,
				RenderDescriptorSetHandle_t hDescSet,
				int32 nCbufferOffset0,
				int32 nCbufferOffset1,
				int32 nCbufferOffset2,
				int32 nCbufferOffset3);  // 174
} /* size: 0, variables: 2, inline expansions: 24 (2281 bytes) */

