
//
// meshsystem/sceneobjecthelpers.cpp
//
//	referenced by: libmeshsystem.so
//
//	functions: 16
//

// <004DD1CD> meshsystem/sceneobjecthelpers.cpp:16
// variables: 12
// function calls: 27
void CMeshSystem::CreateMeshInstanceChain(HModel hModel, Vector& vMinBounds, Vector& vMaxBounds, RenderMeshTranslucencyType_t& nTotalTranlucencyType, ESceneObjectFlags& nFlags, ISceneObjectDesc* pDesc)
{
	int nMeshes; // 18
	CMeshInstance* pHead; // 27
	CMeshInstance** ppCurrentMeshInstanceHead; // 28
	{
		int m; // 29
		{
			CModelMeshHandle hMesh; // 32
			const CRenderMesh* pRenderableData; // 33
			RenderMeshTranslucencyType_t nTranslucencyType; // 38
			MeshGroupMask_t nMeshGroupMask; // 51
			LODGroupMask_t nLODGroupMask; // 52
			int nSceneObjects; // 55
			{
				int s; // 56
				{
					const CSceneObjectData& sceneObjectData; // 62
					CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 59
					CWeakHandle<InfoForResourceTypeCModel>::Init(
						const CWeakHandle<InfoForResourceTypeCModel>& src);  // 331
					CWeakHandle<InfoForResourceTypeCModel>::operator=(
							const CWeakHandle<InfoForResourceTypeCModel>& src);  // 180
					CWeakHandle<InfoForResourceTypeCModel>::Init(
						const CWeakHandle<InfoForResourceTypeCModel>& src);  // 273
					CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(
							const CWeakHandle<InfoForResourceTypeCModel>& src);  // 100
					CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >::GetModelHandle(); // 180
					CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >::Assign(
						const CModelMeshHandle& h);  // 138
					CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 38
					CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >::CModelMeshHandleBase(); // 137
					CModelMeshHandle::CModelMeshHandle(
							const CModelMeshHandle& h);  // 59
					VectorMin(const Vector& a,
							const Vector& b,
							Vector& result);  // 63
					CUtlMemory<CSceneObjectData, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
							int i);  // 62
					VectorMax(const Vector& a,
							const Vector& b,
							Vector& result);  // 64
				}
			}
			CWeakHandle<InfoForResourceTypeCModel>::Init(
				const CWeakHandle<InfoForResourceTypeCModel>& src);  // 273
			CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCModel>& src);  // 32
			CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 33
			CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 38
			CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >::CModelMeshHandleBase(); // 131
			CWeakHandle<InfoForResourceTypeCModel>::operator=(
					const CWeakHandle<InfoForResourceTypeCModel>& src);  // 132
			CModelMeshHandle::CModelMeshHandle(
					HModel hModel,
					int iMesh);  // 32
			CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 51
			CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 52
			CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::Count(); // 55
		}
	}
	CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 18
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 23
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 24
} /* size: 966, variables: 3, inline expansions: 3 (62 bytes) */

// <004DC90F> meshsystem/sceneobjecthelpers.cpp:73
// variables: 13
// function calls: 22
void CMeshSystem::UpdateDrawCallFlags(CMaterialDrawDescriptor* pDrawCalls, int nDrawCallCount, int* out_nTranslucentDrawCallCount, bool bMaterialOverride)
{
	bool bCachedDataChanged; // 75
	int nTranslucentDrawCallCount; // 76
	{
		int i; // 77
		{
			CMaterialDrawDescriptor* pDrawCall; // 79
			HMaterial hMat; // 81
			{
				const IMaterial2* pMaterial; // 84
				{
					bool bTranslucent; // 87
					bool bAlphaTest; // 88
					bool bShadowFastPath; // 89
					bool bDefaultShadowMaterial; // 97
					bool bCamBatchWithNonStaticShaderConstants; // 107
					{
						bool bAllowPerDrawCulling; // 121
						bool bDidAllowPerDrawCulling; // 127
						IMaterial2::GetBoolAttributeOrDefault(
										CUtlStringToken name,
										bool bDefault);  // 121
						IMaterial2::GetBoolAttributeOrDefault(
										CUtlStringToken name,
										bool bDefault);  // 124
					}
					IMaterial2::GetIntAttributeOrDefault(
								CUtlStringToken name,
								int nDefault);  // 87
					IMaterial2::GetBoolAttributeOrDefault(
									CUtlStringToken name,
									bool bDefault);  // 89
					IMaterial2::GetIntAttributeOrDefault(
								CUtlStringToken name,
								int nDefault);  // 88
					IMaterial2::GetIntAttributeOrDefault(
								CUtlStringToken name,
								int nDefault);  // 93
					CUtlStringToken::CUtlStringToken(
							const char& str);  // 93
					operator|(RenderMeshDrawPrimitiveFlags_t a,
							RenderMeshDrawPrimitiveFlags_t b);  // 55
					operator|=(RenderMeshDrawPrimitiveFlags_t& a,
							RenderMeshDrawPrimitiveFlags_t b);  // 95
					IMaterial2::GetIntAttributeOrDefault(
								CUtlStringToken name,
								int nDefault);  // 97
					operator&(RenderMeshDrawPrimitiveFlags_t a,
							RenderMeshDrawPrimitiveFlags_t b);  // 104
					IMaterial2::GetIntAttributeOrDefault(
								CUtlStringToken name,
								int nDefault);  // 107
					operator|(RenderMeshDrawPrimitiveFlags_t a,
							RenderMeshDrawPrimitiveFlags_t b);  // 110
					operator&(RenderMeshDrawPrimitiveFlags_t a,
							RenderMeshDrawPrimitiveFlags_t b);  // 118
					operator&(RenderMeshDrawPrimitiveFlags_t a,
							RenderMeshDrawPrimitiveFlags_t b);  // 114
					operator|(RenderMeshDrawPrimitiveFlags_t a,
							RenderMeshDrawPrimitiveFlags_t b);  // 100
				}
				CInterlockedIntT<int, 4>::operator int(); // 282
				ResourceHandleToData<InfoForResourceTypeIMaterial2>(const CWeakHandle<InfoForResourceTypeIMaterial2>& hResource); // 84
			}
			CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 82
			CWeakHandle<InfoForResourceTypeIMaterial2>::operator!=(
					const CWeakHandle<InfoForResourceTypeIMaterial2>& hResource);  // 82
		}
	}
} /* size: 741, variables: 2 */

// <004EBEED> meshsystem/sceneobjecthelpers.cpp:139
void CMeshSystem::GetTranslucencyType(int nDraws, int nTranslucencDraws)
{
} /* size: 21 */

// <004EBF25> meshsystem/sceneobjecthelpers.cpp:153
// variable: 1
// function calls: 7
void CMeshSystem::UpdateTranslucencyAndDescForSceneObject(CSceneObject* pObject, ESceneObjectFlags nNewFlags, RenderMeshTranslucencyType_t nMeshTranslucencyType)
{
	bool bPartiallyAlphaBlended; // 161
	CSceneObject::SetOriginalFlags(
			ESceneObjectFlags nOriginalFlags);  // 155
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1934
	CSceneObject::ChangeFlags(
			ESceneObjectFlags nNewFlags,
			ESceneObjectFlags nNewFlagsMask);  // 159
	CSceneObject::SetPartiallyAlphaBlended(
				bool bPartiallyAlphaBlended);  // 162
	CSceneObject::SetPartiallyAlphaBlended(
				bool bPartiallyAlphaBlended);  // 162
	CMeshSystem::UpdateTranslucencyAndDescForSceneObject(
						CSceneObject* pObject,
						ESceneObjectFlags nNewFlags,
						RenderMeshTranslucencyType_t nMeshTranslucencyType);  // 153
} /* size: 126, variables: 1, inline expansions: 7 (205 bytes) */

// <004DC895> meshsystem/sceneobjecthelpers.cpp:153
// variable: 1
void CMeshSystem::UpdateTranslucencyAndDescForSceneObject(CSceneObject* pObject, ESceneObjectFlags nNewFlags, RenderMeshTranslucencyType_t nMeshTranslucencyType)
{
	bool bPartiallyAlphaBlended; // 161
} /* size: 0, variables: 1 */

// <004DC1E4> meshsystem/sceneobjecthelpers.cpp:165
// variables: 9
// function calls: 26
void CMeshSystem::UpdateTranslucencyFlagsOnMaterialChange(CSceneObject* pObject)
{
	int nTotalDrawCallCount; // 170
	int nTotalTranslucentDrawCallCount; // 171
	bool bMaterialOverride; // 172
	ESceneObjectFlags nOriginalFlags; // 174
	CMeshInstance* pCurrentMeshInstance; // 175
	RenderMeshTranslucencyType_t nTranslucencyType; // 190
	ESceneObjectFlags nNewFlags; // 191
	{
		int nDrawCallCount; // 178
		int nTranslucentDrawCallCount; // 180
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
		CMeshInstance::GetNumDrawCalls(); // 178
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
		CMeshInstance::GetDrawCallsPtr(); // 181
		CMeshInstance::GetNext(); // 187
	}
	CSceneObject::HasMeshInstanceData(); // 167
	CSceneObject::GetExtraData(); // 172
	Count(const CUtlVectorBase<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, CUtlMemo this); // 135
	IsEmpty(const CUtlVectorBase<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, CUtlMemo this); // 172
	CSceneObject::GetMeshInstanceData(); // 175
	CMeshSystem::GetTranslucencyType(
				int nDraws,
				int nTranslucencDraws);  // 190
} /* size: 659, variables: 7, inline expansions: 6 (33 bytes) */

// <004DB6C6> meshsystem/sceneobjecthelpers.cpp:196
// variables: 8
// function calls: 47
void CMeshSystem::FindAllSceneObjectsWithModel(HModel hModel, CUtlVector<CSceneObject*, CUtlMemory<CSceneObject*, int> >& sceneObjectsOut)
{
	CUtlVector<ISceneWorld*, CUtlMemory<ISceneWorld*, int> > activeSceneWorlds; // 198
	int nWorlds; // 200
	{
		int w; // 201
		{
			CUtlVector<CSceneObject*, CUtlMemory<CSceneObject*, int> > potentialMatches; // 203
			int nSceneObjects; // 206
			{
				int s; // 207
				{
					CSceneObject* pObject; // 209
					CMeshInstance* pMeshInstance; // 210
					CUtlMemory<CSceneObject::operator[](
							int i);  // 588
					CUtlVectorBase<CSceneObject::operator[](
							int i);  // 209
					CSceneObject::GetMeshInstanceData(); // 210
					CWeakHandle<InfoForResourceTypeCModel>::operator==(
							const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 211
					CUtlMemory<CSceneObject::NumAllocated(); // 1196
					CUtlMemory<CSceneObject::operator[](
							int i);  // 602
					CUtlVectorBase<CSceneObject::Element(
						int i);  // 1201
					CopyConstruct<CSceneObject*>(CSceneObject** pMemory,
									CSceneObject* const& src);  // 1201
					CUtlMemory<CSceneObject::Base(); // 112
					CUtlVectorBase<CSceneObject::Base(); // 368
					CUtlVectorBase<CSceneObject::ResetDbgInfo(); // 824
					CUtlVectorBase<CSceneObject::GrowMemory(
							int num);  // 1198
					CUtlVectorBase<CSceneObject::AddToTail(
							CSceneObject* const& src);  // 213
				}
			}
			CUtlMemory<CSceneObject::ValidateGrowSize(); // 475
			CUtlMemory<CSceneObject::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<CSceneObject::ResetDbgInfo(); // 530
			CUtlVectorBase<CSceneObject::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<CSceneObject::CUtlVector(); // 203
			CUtlMemory<ISceneWorld::operator[](
					int i);  // 588
			CUtlVectorBase<ISceneWorld::operator[](
					int i);  // 204
			CUtlVectorBase<CSceneObject::Count(); // 206
			CUtlMemory<CSceneObject::Purge(); // 903
			CUtlMemory<CSceneObject::IsExternallyAllocated(); // 905
			CUtlMemory<CSceneObject::Purge(); // 1799
			CUtlVectorBase<CSceneObject::RemoveAll(); // 1798
			CUtlVectorBase<CSceneObject::Purge(); // 560
			ValidateAlignment<CSceneObject*>(void); // 508
			CUtlMemory<CSceneObject::Purge(); // 510
			CUtlMemory<CSceneObject::~CUtlMemory(); // 562
			CUtlVectorBase<CSceneObject::~CUtlVectorBase(); // 410
			CUtlVector<CSceneObject::~CUtlVector(); // 216
		}
	}
	CUtlMemory<ISceneWorld::ValidateGrowSize(); // 475
	CUtlMemory<ISceneWorld::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ISceneWorld::ResetDbgInfo(); // 530
	CUtlVectorBase<ISceneWorld::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ISceneWorld::CUtlVector(); // 198
	CUtlVectorBase<ISceneWorld::Count(); // 200
	CUtlVectorBase<ISceneWorld::RemoveAll(); // 1798
	CUtlMemory<ISceneWorld::IsExternallyAllocated(); // 905
	CUtlMemory<ISceneWorld::Purge(); // 903
	CUtlMemory<ISceneWorld::Purge(); // 1799
	CUtlVectorBase<ISceneWorld::Purge(); // 560
	ValidateAlignment<ISceneWorld*>(void); // 508
	CUtlMemory<ISceneWorld::Purge(); // 510
	CUtlMemory<ISceneWorld::~CUtlMemory(); // 562
	CUtlVectorBase<ISceneWorld::~CUtlVectorBase(); // 410
	CUtlVector<ISceneWorld::~CUtlVector(); // 217
} /* size: 514, variables: 2, inline expansions: 16 (218 bytes) */

// <004DAA36> meshsystem/sceneobjecthelpers.cpp:219
// variables: 10
// function calls: 52
void CMeshSystem::FindAllMeshInstancesWithMesh(const CRenderMesh* pMesh, CUtlVector<CMeshInstance*, CUtlMemory<CMeshInstance*, int> >& meshInstancesOut)
{
	CUtlVector<ISceneWorld*, CUtlMemory<ISceneWorld*, int> > activeSceneWorlds; // 221
	int nWorlds; // 223
	const char   __FUNCTION__; // 4105
	{
		int w; // 224
		{
			CUtlVector<CSceneObject*, CUtlMemory<CSceneObject*, int> > potentialMatches; // 226
			int nSceneObjects; // 229
			{
				int s; // 230
				{
					CSceneObject* pObject; // 232
					CMeshInstance* pMeshInstance; // 234
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 233
					}
					CUtlMemory<CSceneObject::operator[](
							int i);  // 588
					CUtlVectorBase<CSceneObject::operator[](
							int i);  // 232
					CSceneObject::GetMeshInstanceData(); // 234
					CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 64
					CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::GetData(); // 235
					CUtlMemory<CMeshInstance::NumAllocated(); // 1196
					CUtlMemory<CMeshInstance::Base(); // 112
					CUtlVectorBase<CMeshInstance::Base(); // 368
					CUtlVectorBase<CMeshInstance::ResetDbgInfo(); // 824
					CUtlMemory<CMeshInstance::IsGrowable(); // 823
					CUtlMemory<CMeshInstance::IsExternallyAllocated(); // 859
					CUtlMemory<CMeshInstance::IsExternallyAllocated(); // 861
					CUtlMemory<CMeshInstance::Grow(
						int num);  // 806
					CUtlVectorBase<CMeshInstance::GrowMemory(
							int num);  // 1198
					CUtlMemory<CMeshInstance::operator[](
							int i);  // 602
					CUtlVectorBase<CMeshInstance::Element(
						int i);  // 1201
					CopyConstruct<CMeshInstance*>(CMeshInstance** pMemory,
									CMeshInstance* const& src);  // 1201
					CUtlVectorBase<CMeshInstance::AddToTail(
							CMeshInstance* const& src);  // 237
				}
			}
			CUtlMemory<CSceneObject::ValidateGrowSize(); // 475
			CUtlMemory<CSceneObject::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<CSceneObject::ResetDbgInfo(); // 530
			CUtlVectorBase<CSceneObject::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<CSceneObject::CUtlVector(); // 226
			CUtlMemory<ISceneWorld::operator[](
					int i);  // 588
			CUtlVectorBase<ISceneWorld::operator[](
					int i);  // 227
			CUtlVectorBase<CSceneObject::Count(); // 229
			CUtlVectorBase<CSceneObject::RemoveAll(); // 1798
			CUtlMemory<CSceneObject::IsExternallyAllocated(); // 905
			CUtlMemory<CSceneObject::Purge(); // 903
			CUtlMemory<CSceneObject::Purge(); // 1799
			CUtlVectorBase<CSceneObject::Purge(); // 560
			ValidateAlignment<CSceneObject*>(void); // 508
			CUtlMemory<CSceneObject::Purge(); // 510
			CUtlMemory<CSceneObject::~CUtlMemory(); // 562
			CUtlVectorBase<CSceneObject::~CUtlVectorBase(); // 410
			CUtlVector<CSceneObject::~CUtlVector(); // 240
		}
	}
	CUtlMemory<ISceneWorld::ValidateGrowSize(); // 475
	CUtlMemory<ISceneWorld::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ISceneWorld::ResetDbgInfo(); // 530
	CUtlVectorBase<ISceneWorld::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ISceneWorld::CUtlVector(); // 221
	CUtlVectorBase<ISceneWorld::Count(); // 223
	CUtlVectorBase<ISceneWorld::RemoveAll(); // 1798
	CUtlMemory<ISceneWorld::IsExternallyAllocated(); // 905
	CUtlMemory<ISceneWorld::Purge(); // 903
	CUtlMemory<ISceneWorld::Purge(); // 1799
	CUtlVectorBase<ISceneWorld::Purge(); // 560
	ValidateAlignment<ISceneWorld*>(void); // 508
	CUtlMemory<ISceneWorld::Purge(); // 510
	CUtlMemory<ISceneWorld::~CUtlMemory(); // 562
	CUtlVectorBase<ISceneWorld::~CUtlVectorBase(); // 410
	CUtlVector<ISceneWorld::~CUtlVector(); // 241
} /* size: 0, variables: 3, inline expansions: 16 (218 bytes) */

// <004DA24B> meshsystem/sceneobjecthelpers.cpp:243
// variables: 12
// function calls: 22
CSceneObject* CreateSceneObject(HModel hModel, const char* pDescName, ESceneObjectFlags nFlags, ESceneObjectTypeFlags nObjectTypeFlags, ISceneWorld* pWorld, SceneObjectCreationFlags_t nCreationFlags, int nBoundsGroupIndex)
{
	const CModel* pModel; // 245
	ISceneObjectDesc* pDesc; // 249
	RenderMeshTranslucencyType_t nTotalTranlucencyType; // 259
	Vector vMinBounds; // 260
	Vector vMaxBounds; // 261
	CMeshInstance* pHead; // 262
	CSceneObject* pNew; // 270
	{
		bool bMustSetMask; // 290
		int nMeshes; // 291
		MeshGroupMask_t nDefaultMeshGroupMask; // 292
		{
			int m; // 293
			{
				MeshGroupMask_t nMeshMask; // 295
			}
		}
		CSceneObject::EnsureExtraData(); // 2289
		CSceneObject::EnsureExtraData(); // 2198
		CSceneObject::ResetMeshGroups(
				MeshGroupMask_t nMask);  // 2177
		CSceneObject::ResetMeshGroups(
				MeshGroupMask_t nMask);  // 305
	}
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCModel>(const CWeakHandle<InfoForResourceTypeCModel>& hResource); // 245
	Vector::Vector(); // 260
	Vector::Vector(); // 261
	CWeakHandle<InfoForResourceTypeCModel>::Init(
		const CWeakHandle<InfoForResourceTypeCModel>& src);  // 273
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 262
	CSceneObject::SetBoundsGroupIndex(
				int nIndex);  // 284
	CMeshInstance::AttachToSceneObjectRecursive(
					CSceneObject* pSceneObject);  // 310
	CSceneObject::SetMeshInstanceData(
				CMeshInstance* pMeshInstance,
				MeshInstanceOwnership_t nOwnership);  // 311
	CSceneObject::SetBounds(
			const Vector& vecWorldMins,
			const Vector& vecWorldMaxes);  // 315
	CSceneObject::AddObjectTypeFlags(
				ESceneObjectTypeFlags nFlags);  // 314
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1940
	CSceneObject::SetFlags(
		ESceneObjectFlags nFlagsToOR);  // 1966
	CSceneObject::SetLoaded(); // 316
	CSceneObject::UpdateFlagsBasedOnMaterial(); // 317
	CSceneObject::UpdateRayTraceObject(); // 318
	CSceneObject::GetFlags(); // 319
} /* size: 798, variables: 7, inline expansions: 18 (295 bytes) */

// <004D9927> meshsystem/sceneobjecthelpers.cpp:325
// variables: 8
// function calls: 33
void CMeshSystem::CreateSceneObject(HModel hModel, const CTransform& mModelToWorld, const char* pDescName, ESceneObjectFlags nFlags, ESceneObjectTypeFlags nObjectTypeFlags, ISceneWorld* pWorld, SceneObjectCreationFlags_t nCreationFlags, int nBoundsGroupIndex)
{
	CSceneObject* pNew; // 327
	ISceneObjectDesc* pNewDesc; // 331
	{
		CSceneAnimatableObject* pAnimatableObject; // 334
		const CModel* pModel; // 335
		CInterlockedIntT<int, 4>::operator int(); // 282
		ResourceHandleToData<InfoForResourceTypeCModel>(const CWeakHandle<InfoForResourceTypeCModel>& hResource); // 335
		_mm_cvtss_f32(__m128 __A); // 1553
		GetWSIMD<>(fltx4 a); // 98
		VectorAligned::operator fltx4(); // 98
		CTransform::GetScale(); // 362
		{
			int i; // 325
			{
				int j; // 327
			}
		}
		matrix3x4_t::ScaleUpper3x3Matrix(
					float flScale);  // 365
		CTransform::ToMatrix(); // 337
		matrix3x4_t::matrix3x4_t(); // 290
		matrix3x4_t::Base(); // 291
		matrix3x4_t::Base(); // 291
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 291
		matrix3x4a_t::operator=(
				const matrix3x4_t& src);  // 290
		matrix3x4a_t::matrix3x4a_t(
				const matrix3x4_t& src);  // 337
	}
	CWeakHandle<InfoForResourceTypeCModel>::Init(
		const CWeakHandle<InfoForResourceTypeCModel>& src);  // 273
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 327
	CSceneObject::GetDesc(); // 331
	_mm_cvtss_f32(__m128 __A); // 1553
	GetWSIMD<>(fltx4 a); // 98
	VectorAligned::operator fltx4(); // 98
	CTransform::GetScale(); // 362
	{
		int i; // 325
		{
			int j; // 327
		}
	}
	matrix3x4_t::ScaleUpper3x3Matrix(
				float flScale);  // 365
	CTransform::ToMatrix(); // 2098
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
			const matrix3x4_t& mTransform);  // 2098
	CSceneObject::SetTransform(
			const CTransform& transform);  // 341
} /* size: 1029, variables: 2, inline expansions: 18 (1243 bytes) */

// <004D92D7> meshsystem/sceneobjecthelpers.cpp:347
// variables: 4
// function calls: 20
void CMeshSystem::CreateSceneObject(HModel hModel, const matrix3x4_t& mModelToWorld, const char* pDescName, ESceneObjectFlags nFlags, ESceneObjectTypeFlags nObjectTypeFlags, ISceneWorld* pWorld, SceneObjectCreationFlags_t nCreationFlags, int nBoundsGroupIndex)
{
	CSceneObject* pNew; // 349
	ISceneObjectDesc* pNewDesc; // 353
	{
		CSceneAnimatableObject* pAnimatableObject; // 356
		const CModel* pModel; // 357
		CInterlockedIntT<int, 4>::operator int(); // 282
		ResourceHandleToData<InfoForResourceTypeCModel>(const CWeakHandle<InfoForResourceTypeCModel>& hResource); // 357
		matrix3x4_t::matrix3x4_t(); // 290
		matrix3x4_t::Base(); // 291
		matrix3x4_t::Base(); // 291
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 291
		matrix3x4a_t::operator=(
				const matrix3x4_t& src);  // 290
		matrix3x4a_t::matrix3x4a_t(
				const matrix3x4_t& src);  // 359
	}
	CWeakHandle<InfoForResourceTypeCModel>::Init(
		const CWeakHandle<InfoForResourceTypeCModel>& src);  // 273
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 349
	CSceneObject::GetDesc(); // 353
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
			const matrix3x4_t& mTransform);  // 363
} /* size: 513, variables: 2, inline expansions: 11 (379 bytes) */

// <004D8926> meshsystem/sceneobjecthelpers.cpp:369
// variables: 5
// function calls: 34
void CMeshSystem::CreateSceneObjectForSceneObjectData(CModelMeshHandle hMesh, int nSceneObjectIndex, ESceneObjectFlags nFlags, ISceneWorld* pWorld, SceneObjectCreationFlags_t nCreationFlags, ISceneObjectDesc* pDesc, int nBoundsGroupIndex)
{
	const CRenderMesh* pRenderableData; // 371
	const CSceneObjectData* pSceneObjectData; // 372
	ESceneObjectFlags nOriginalSceneObjectFlags; // 374
	CSceneObject* pNew; // 377
	CMeshInstance* pMeshInstance; // 381
	CWeakHandle<InfoForResourceTypeCModel>::HasData(); // 64
	CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >::GetData(); // 371
	CUtlMemory<CSceneObjectData, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
			int i);  // 372
	CSceneObject::SetBoundsGroupIndex(
				int nIndex);  // 378
	CWeakHandle<InfoForResourceTypeCModel>::Init(
		const CWeakHandle<InfoForResourceTypeCModel>& src);  // 331
	CWeakHandle<InfoForResourceTypeCModel>::operator=(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 180
	CWeakHandle<InfoForResourceTypeCModel>::Init(
		const CWeakHandle<InfoForResourceTypeCModel>& src);  // 273
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 100
	CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >::GetModelHandle(); // 180
	CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >::GetMeshIndex(); // 181
	CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >::Assign(
		const CModelMeshHandle& h);  // 138
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 38
	CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >::CModelMeshHandleBase(); // 137
	CModelMeshHandle::CModelMeshHandle(
			const CModelMeshHandle& h);  // 381
	{
	}
	CSceneObject::SetMeshInstanceData(
				CMeshInstance* pMeshInstance,
				MeshInstanceOwnership_t nOwnership);  // 382
	CSceneObject::SetBounds(
			const Vector& vecWorldMins,
			const Vector& vecWorldMaxes);  // 385
	CSceneObject::UpdateFlagsBasedOnMaterial(); // 392
	CSceneObject::UpdateRayTraceObject(); // 393
	CSceneObject::GetFlags(); // 394
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1940
	CSceneObject::SetFlags(
		ESceneObjectFlags nFlagsToOR);  // 1966
	CSceneObject::SetLoaded(); // 398
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
				const Vector4D& vTint);  // 390
} /* size: 0, variables: 5, inline expansions: 34 (892 bytes) */

// <004D81B0> meshsystem/sceneobjecthelpers.cpp:402
// variables: 5
// function calls: 28
void CMeshSystem::CreateSceneObjectsFromMesh(CModelMeshHandle hMesh, ESceneObjectFlags nFlags, ISceneWorld* pWorld, CUtlVector<CSceneObject*, CUtlMemory<CSceneObject*, int> >* pObjectsOut, SceneObjectCreationFlags_t nCreationFlags, int nBoundsGroupIndex)
{
	const CRenderMesh* pRenderableData; // 405
	int nSceneObjects; // 409
	ISceneObjectDesc* pDesc; // 415
	{
		int s; // 416
		{
			CSceneObject* pNew; // 419
			CUtlMemory<CSceneObject::NumAllocated(); // 1196
			CUtlMemory<CSceneObject::operator[](
					int i);  // 602
			CUtlVectorBase<CSceneObject::Element(
				int i);  // 1201
			CopyConstruct<CSceneObject*>(CSceneObject** pMemory,
							CSceneObject* const& src);  // 1201
			CUtlMemory<CSceneObject::Base(); // 112
			CUtlVectorBase<CSceneObject::Base(); // 368
			CUtlVectorBase<CSceneObject::ResetDbgInfo(); // 824
			CUtlVectorBase<CSceneObject::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<CSceneObject::AddToTail(
					CSceneObject* const& src);  // 424
			CWeakHandle<InfoForResourceTypeCModel>::Init(
				const CWeakHandle<InfoForResourceTypeCModel>& src);  // 331
			CWeakHandle<InfoForResourceTypeCModel>::operator=(
					const CWeakHandle<InfoForResourceTypeCModel>& src);  // 180
			CWeakHandle<InfoForResourceTypeCModel>::Init(
				const CWeakHandle<InfoForResourceTypeCModel>& src);  // 273
			CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCModel>& src);  // 100
			CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >::GetModelHandle(); // 180
			CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >::GetMeshIndex(); // 181
			CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >::Assign(
				const CModelMeshHandle& h);  // 138
			CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 38
			CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >::CModelMeshHandleBase(); // 137
			CModelMeshHandle::CModelMeshHandle(
					const CModelMeshHandle& h);  // 419
		}
	}
	CWeakHandle<InfoForResourceTypeCModel>::HasData(); // 64
	CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >::GetData(); // 405
	CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::Count(); // 409
	CUtlVectorBase<CSceneObject::Count(); // 412
	CUtlMemory<CSceneObject::IsGrowable(); // 881
	CUtlMemory<CSceneObject::IsExternallyAllocated(); // 888
	CUtlMemory<CSceneObject::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<CSceneObject::ResetDbgInfo(); // 1024
	CUtlVectorBase<CSceneObject::EnsureCapacity(
			int num);  // 412
} /* size: 598, variables: 3, inline expansions: 9 (392 bytes) */

// <004D7BAC> meshsystem/sceneobjecthelpers.cpp:431
// variables: 4
// function calls: 20
void CMeshSystem::CreateSceneObjects(HModel hModel, ESceneObjectFlags nFlags, ISceneWorld* pWorld, CUtlVector<CSceneObject*, CUtlMemory<CSceneObject*, int> >* pObjectsOut, SceneObjectCreationFlags_t nCreationFlags, int nBoundsGroupIndex)
{
	const CModel* pModel; // 433
	int nMeshes; // 437
	{
		int m; // 441
		CWeakHandle<InfoForResourceTypeCModel>::Init(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 273
		CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCModel>& src);  // 443
		CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 38
		CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >::CModelMeshHandleBase(); // 131
		CWeakHandle<InfoForResourceTypeCModel>::Init(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 331
		CWeakHandle<InfoForResourceTypeCModel>::operator=(
				const CWeakHandle<InfoForResourceTypeCModel>& src);  // 132
		CModelMeshHandle::CModelMeshHandle(
				HModel hModel,
				int iMesh);  // 443
	}
	{
		CSceneObject* pSceneObject; // 449
		CWeakHandle<InfoForResourceTypeCModel>::Init(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 273
		CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCModel>& src);  // 449
		CUtlMemory<CSceneObject::NumAllocated(); // 1196
		CUtlMemory<CSceneObject::operator[](
				int i);  // 602
		CUtlVectorBase<CSceneObject::Element(
			int i);  // 1201
		CopyConstruct<CSceneObject*>(CSceneObject** pMemory,
						CSceneObject* const& src);  // 1201
		CUtlMemory<CSceneObject::Base(); // 112
		CUtlVectorBase<CSceneObject::Base(); // 368
		CUtlVectorBase<CSceneObject::ResetDbgInfo(); // 824
		CUtlVectorBase<CSceneObject::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<CSceneObject::AddToTail(
				CSceneObject* const& src);  // 453
	}
	CWeakHandle<InfoForResourceTypeCModel>::GetData(); // 433
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 439
} /* size: 442, variables: 2, inline expansions: 2 (35 bytes) */

// <004D7918> meshsystem/sceneobjecthelpers.cpp:459
// variables: 6
// function calls: 7
void CMeshSystem::RemoveUnusedMeshGroups(CSceneObject* pSceneObject, MeshGroupMask_t nMask)
{
	int nRemoved; // 466
	bool bOwnsMeshInstance; // 467
	CMeshInstance* pHead; // 468
	CMeshInstance** ppTail; // 469
	{
		CMeshInstance* pInstance; // 471
		{
			CMeshInstance* pNext; // 473
			CMeshInstance::GetMeshGroupMask(); // 476
		}
	}
	CSceneObject::HasMeshInstanceData(); // 461
	CSceneObject::GetMeshInstanceData(); // 468
	CSceneObject::GetMeshInstanceData(); // 493
	CSceneObject::SetOwnsMeshInstanceData(
				bool bOwns);  // 495
	{
	}
	CSceneObject::ClearMeshInstanceData(); // 496
	CSceneObject::SetMeshInstanceData(
				CMeshInstance* pMeshInstance,
				MeshInstanceOwnership_t nOwnership);  // 500
} /* size: 0, variables: 4, inline expansions: 6 (107 bytes) */

// <004D66FB> meshsystem/sceneobjecthelpers.cpp:508
// variables: 11
// function calls: 67
void CMeshSystem::ChangeModel(CSceneObject* pObject, HModel hModel)
{
	MeshGroupMask_t meshGroupMask; // 512
	CSceneAnimatableObject* pSceneAnimatableObject; // 526
	RenderMeshTranslucencyType_t nTotalTranlucencyType; // 529
	Vector vMinBounds; // 530
	Vector vMaxBounds; // 531
	ESceneObjectFlags nFlags; // 532
	CMeshInstance* pHead; // 533
	const matrix3x4_t& mTransform; // 545
	Vector vWorldMins; // 547
	Vector vWorldMaxs; // 548
	CSceneObject::DestroyRayTraceInstance(); // 510
	CSceneObject::GetCurrentMeshGroupMask(); // 2204
	CSceneObject::GetCurrentMeshGroupMask(); // 512
	CSceneObject::GetOwnsMeshInstanceData(); // 515
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1934
	CSceneObject::ChangeFlags(
			ESceneObjectFlags nNewFlags,
			ESceneObjectFlags nNewFlagsMask);  // 1951
	CSceneObject::ClearFlags(
			ESceneObjectFlags nFlagsToClear);  // 1971
	CSceneObject::ClearLoaded(); // 524
	CSceneObject::GetFlags(); // 532
	Vector::Vector(); // 530
	Vector::Vector(); // 531
	CSceneObject::GetDesc(); // 533
	CWeakHandle<InfoForResourceTypeCModel>::Init(
		const CWeakHandle<InfoForResourceTypeCModel>& src);  // 273
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 533
	CSceneObject::EnsureExtraData(); // 2289
	CSceneObject::EnsureExtraData(); // 2198
	CSceneObject::ResetMeshGroups(
			MeshGroupMask_t nMask);  // 2177
	CSceneObject::ResetMeshGroups(
			MeshGroupMask_t nMask);  // 539
	CMeshInstance::AttachToSceneObjectRecursive(
					CSceneObject* pSceneObject);  // 542
	CSceneObject::SetMeshInstanceData(
				CMeshInstance* pMeshInstance,
				MeshInstanceOwnership_t nOwnership);  // 543
	CSceneObject::GetTransform(); // 545
	Vector::Vector(); // 547
	Vector::Vector(); // 548
	CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::Count(); // 135
	CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::IsEmpty(); // 2090
	CSceneObject::SetTransform(
			const matrix3x4_t& mTransform);  // 551
	CSceneObject::SetBounds(
			const Vector& vecWorldMins,
			const Vector& vecWorldMaxes);  // 552
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1940
	CSceneObject::SetFlags(
		ESceneObjectFlags nFlagsToOR);  // 1966
	CSceneObject::SetLoaded(); // 553
	CSceneObject::UpdateFlagsBasedOnMaterial(); // 554
	CSceneObject::UpdateRayTraceObject(); // 555
	CWeakHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 559
	matrix3x4_t::matrix3x4_t(); // 290
	matrix3x4_t::Base(); // 291
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 291
	matrix3x4a_t::operator=(
			const matrix3x4_t& src);  // 290
	matrix3x4a_t::matrix3x4a_t(
			const matrix3x4_t& src);  // 559
	CSceneObject::GetModel(); // 981
	matrix3x4_t::matrix3x4_t(); // 290
	matrix3x4_t::Base(); // 291
	matrix3x4_t::Base(); // 291
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 291
	matrix3x4a_t::operator=(
			const matrix3x4_t& src);  // 290
	matrix3x4a_t::matrix3x4a_t(
			const matrix3x4_t& src);  // 985
	CUtlMemory<matrix3x4a_t, int>::Base(); // 112
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Base(); // 989
	CSceneAnimatableObject::CalculateWorldSpaceBones(); // 562
	CSceneObject::GetModel(); // 994
	matrix3x4_t::matrix3x4_t(); // 290
	matrix3x4_t::Base(); // 291
	matrix3x4_t::Base(); // 291
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 291
	matrix3x4a_t::operator=(
			const matrix3x4_t& src);  // 290
	matrix3x4a_t::matrix3x4a_t(
			const matrix3x4_t& src);  // 998
	CUtlMemory<matrix3x4a_t, int>::Base(); // 112
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Base(); // 1003
	CUtlMemory<matrix3x4a_t, int>::Base(); // 112
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Base(); // 1003
	CSceneAnimatableObject::FinishUpdate(); // 563
	{
	}
	{
		CMeshInstance* pMeshInstanceToDelete; // 1795
		CSceneObject::GetMeshInstanceData(); // 1795
	}
	{
	}
	CSceneObject::DestroyMeshInstanceData(); // 517
} /* size: 0, variables: 10, inline expansions: 66 (1964 bytes) */

