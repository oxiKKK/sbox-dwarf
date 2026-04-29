
//
// meshsystem/meshinstance_imp.cpp
//
//	referenced by: libmeshsystem.so
//
//	functions: 24
//

// <0007F496> meshsystem/meshinstance_imp.cpp:41
void CMeshSystem::ClearHighWaterMarks()
{
} /* size: 5 */

// <0007F3B3> meshsystem/meshinstance_imp.cpp:55
// function calls: 4
void CMeshInstance_Imp::CMeshInstance_Imp()
{
	CStrongHandle<InfoForResourceTypeCModel>::CStrongHandle(); // 38
	CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::CModelMeshHandleBase(); // 155
	CModelMeshHandleStrong::CModelMeshHandleStrong(); // 146
	CMeshInstance::CMeshInstance(); // 56
} /* size: 83, inline expansions: 4 (63 bytes) */

// <0007F39A> meshsystem/meshinstance_imp.cpp:55
void CMeshInstance_Imp::CMeshInstance_Imp()
{
} /* size: 0 */

// <0007EC7D> meshsystem/meshinstance_imp.cpp:60
// function calls: 32
void CMeshInstance_Imp::CMeshInstance_Imp(CModelMeshHandle hRenderMesh, int nSceneObjectIndex, ESceneObjectFlags nOriginalSceneObjectFlags, CSceneObject* pSceneObject, MeshGroupMask_t nMeshGroupMask, LODGroupMask_t nLODGroupMask)
{
	{
		{
		}
		CStrongHandle<InfoForResourceTypeCModel>::CStrongHandle(); // 38
		CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::CModelMeshHandleBase(); // 164
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 570
		CStrongHandle<InfoForResourceTypeCModel>::Init(
			ResourceHandleTyped_t hResource);  // 673
		CStrongHandle<InfoForResourceTypeCModel>::operator=(
				const CWeakHandle<InfoForResourceTypeCModel>& src);  // 180
		CWeakHandle<InfoForResourceTypeCModel>::Init(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 273
		CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCModel>& src);  // 100
		CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >::GetModelHandle(); // 180
		CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::Assign(
			const CModelMeshHandle& h);  // 165
		CModelMeshHandleStrong::CModelMeshHandleStrong(
					const CModelMeshHandle& h);  // 174
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 604
		CStrongHandle<InfoForResourceTypeCModel>::Init(
			const CStrongHandle<InfoForResourceTypeCModel>& src);  // 666
		CStrongHandle<InfoForResourceTypeCModel>::operator=(
				const CStrongHandle<InfoForResourceTypeCModel>& src);  // 38
		CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::operator=(
				const CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >  &);  // 151
		CModelMeshHandleStrong::operator=(
				const CModelMeshHandleStrong  &);  // 174
		CStrongHandle<InfoForResourceTypeCModel>::~CStrongHandle(); // 38
		CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::~CModelMeshHandleBase(); // 151
		CModelMeshHandleStrong::~CModelMeshHandleStrong(); // 174
		CStrongHandle<InfoForResourceTypeCModel>::CStrongHandle(); // 38
		CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::CModelMeshHandleBase(); // 155
		CModelMeshHandleStrong::CModelMeshHandleStrong(); // 171
	}
	CMeshInstance::CMeshInstance(
			CModelMeshHandle hRenderMesh,
			int nSceneObjectIndex,
			ESceneObjectFlags nOriginalSceneObjectFlags,
			CSceneObject* pSceneObject,
			MeshGroupMask_t nMeshGroupMask,
			LODGroupMask_t nLODGroupMask);  // 62
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 38
	CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >::CModelMeshHandleBase(); // 137
	CWeakHandle<InfoForResourceTypeCModel>::Init(
		const CWeakHandle<InfoForResourceTypeCModel>& src);  // 273
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 100
	CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >::GetModelHandle(); // 180
	CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >::GetMeshIndex(); // 181
	CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >::Assign(
		const CModelMeshHandle& h);  // 138
	CModelMeshHandle::CModelMeshHandle(
			const CModelMeshHandle& h);  // 62
} /* size: 0, inline expansions: 9 (327 bytes) */

// <0007EC1C> meshsystem/meshinstance_imp.cpp:60
void CMeshInstance_Imp::CMeshInstance_Imp(CModelMeshHandle hRenderMesh, int nSceneObjectIndex, ESceneObjectFlags nOriginalSceneObjectFlags, CSceneObject* pSceneObject, MeshGroupMask_t nMeshGroupMask, LODGroupMask_t nLODGroupMask)
{
} /* size: 0 */

// <0007E6EC> meshsystem/meshinstance_imp.cpp:66
// function calls: 26
void CMeshInstance_Imp::~CMeshInstance_Imp()
{
	CMeshInstance_Imp::DestroyOwnedVBAndIB(); // 68
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 71
	CUtlVectorBase<CachedSlotAndExtraData_t, CUtlMemory<CachedSlotAndExtraData_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CachedSlotAndExtraData_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CachedSlotAndExtraData_t, int>::Purge(); // 903
	CUtlMemory<CachedSlotAndExtraData_t, int>::Purge(); // 1799
	CUtlVectorBase<CachedSlotAndExtraData_t, CUtlMemory<CachedSlotAndExtraData_t, int> >::Purge(); // 560
	ValidateAlignment<CachedSlotAndExtraData_t>(void); // 508
	CUtlMemory<CachedSlotAndExtraData_t, int>::Purge(); // 510
	CUtlMemory<CachedSlotAndExtraData_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CachedSlotAndExtraData_t, CUtlMemory<CachedSlotAndExtraData_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CachedSlotAndExtraData_t, CUtlMemory<CachedSlotAndExtraData_t, int> >::~CUtlVector(); // 71
	CMeshInstanceAnimatableData::~CMeshInstanceAnimatableData(); // 187
	CStrongHandle<InfoForResourceTypeCModel>::~CStrongHandle(); // 38
	CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::~CModelMeshHandleBase(); // 151
	CModelMeshHandleStrong::~CModelMeshHandleStrong(); // 190
	CMeshInstance::~CMeshInstance(); // 69
} /* size: 216, inline expansions: 26 (663 bytes) */

// <0007E108> meshsystem/meshinstance_imp.cpp:66
// function calls: 29
void CMeshInstance_Imp::~CMeshInstance_Imp()
{
	CMeshInstance_Imp::DestroyOwnedVBAndIB(); // 68
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 71
	CUtlVectorBase<CachedSlotAndExtraData_t, CUtlMemory<CachedSlotAndExtraData_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CachedSlotAndExtraData_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CachedSlotAndExtraData_t, int>::Purge(); // 903
	CUtlMemory<CachedSlotAndExtraData_t, int>::Purge(); // 1799
	CUtlVectorBase<CachedSlotAndExtraData_t, CUtlMemory<CachedSlotAndExtraData_t, int> >::Purge(); // 560
	ValidateAlignment<CachedSlotAndExtraData_t>(void); // 508
	CUtlMemory<CachedSlotAndExtraData_t, int>::Purge(); // 510
	CUtlMemory<CachedSlotAndExtraData_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CachedSlotAndExtraData_t, CUtlMemory<CachedSlotAndExtraData_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CachedSlotAndExtraData_t, CUtlMemory<CachedSlotAndExtraData_t, int> >::~CUtlVector(); // 71
	CMeshInstanceAnimatableData::~CMeshInstanceAnimatableData(); // 187
	CStrongHandle<InfoForResourceTypeCModel>::~CStrongHandle(); // 38
	CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::~CModelMeshHandleBase(); // 151
	CModelMeshHandleStrong::~CModelMeshHandleStrong(); // 190
	CMeshInstance::~CMeshInstance(); // 69
	CMeshInstance_Imp::~CMeshInstance_Imp(); // 69
	CUtlMemoryPool<CMeshInstance_Imp>::Free(
		CMeshInstance_Imp* pMem);  // 38
	operator delete(void* pData); // 69
} /* size: 232, inline expansions: 29 (869 bytes) */

// <0007E0EF> meshsystem/meshinstance_imp.cpp:66
void CMeshInstance_Imp::~CMeshInstance_Imp()
{
} /* size: 0 */

// <00081F89> meshsystem/meshinstance_imp.cpp:71
void CMeshInstance_Imp::DestroyOwnedVBAndIB()
{
} /* size: 17 */

// <00081DB3> meshsystem/meshinstance_imp.cpp:71
// variables: 4
// function calls: 6
void CMeshInstance_Imp::DestroyOwnedVBAndIB()
{
	{
	}
	{
		int nDrawCall; // 79
		int nDrawCallCount; // 79
		CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Count(); // 79
		{
			const CMaterialDrawDescriptor& drawDesc; // 81
			CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::operator[](
					int i);  // 81
			{
				int nVertBuf; // 82
				CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::Count(); // 82
			}
			CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::operator[](
					int i);  // 86
		}
	}
} /* size: 0 */

// <0007E076> meshsystem/meshinstance_imp.cpp:71
// variables: 6
void CMeshInstance_Imp::DestroyOwnedVBAndIB()
{
	const char   __FUNCTION__; // 32362
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 77
	}
	{
		int nDrawCall; // 79
		int nDrawCallCount; // 79
		{
			const CMaterialDrawDescriptor& drawDesc; // 81
			{
				int nVertBuf; // 82
			}
		}
	}
} /* size: 0, variables: 1 */

// <0007D941> meshsystem/meshinstance_imp.cpp:93
// variables: 7
// function calls: 27
void CMeshInstance_Imp::SetMaterialOverrides(HMaterial* pMaterialHandles, int nMaterialHandles)
{
	const CRenderMesh* pMesh; // 95
	const CSceneObjectData* pOriginalSceneObjectData; // 96
	const CSceneObjectData* pOldSceneObjectData; // 97
	CSceneObjectData* pNewSceneObjectData; // 98
	int nDraws; // 100
	{
		int d; // 106
		{
			CMaterialDrawDescriptor* pDrawCall; // 110
			CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::operator[](
					int i);  // 297
			CSceneObjectData::GetDrawCall(
					int nDraw);  // 110
			CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
				const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
			CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 111
			CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::operator[](
					int i);  // 298
			CSceneObjectData::GetDrawCall(
					int nDraw);  // 112
		}
		CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 108
		CWeakHandle<InfoForResourceTypeIMaterial2>::operator!=(
				const CWeakHandle<InfoForResourceTypeIMaterial2>& hResource);  // 108
	}
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 64
	CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::GetData(); // 95
	CUtlMemory<CSceneObjectData, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
			int i);  // 96
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 72
	CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::IsValid(); // 287
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 64
	CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::GetData(); // 292
	CUtlMemory<CSceneObjectData, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
			int i);  // 305
	CMeshInstance::GetSceneObjectData(); // 97
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Count(); // 296
	CSceneObjectData::GetNumDrawCalls(); // 100
	CMeshInstance_Imp::DestroyOwnedVBAndIB(); // 117
	CMeshInstance::SetAndOwnDrawDataOverride(
					CSceneObjectData* pDrawDataOverride);  // 118
} /* size: 559, variables: 5, inline expansions: 15 (576 bytes) */

// <0007D4DB> meshsystem/meshinstance_imp.cpp:122
// variables: 5
// function calls: 17
void CMeshInstance_Imp::SetMaterialOverrides(MaterialOverrideDesc_t* pOverrideDescs, int nMaterialOverrides)
{
	int nDraws; // 124
	HMaterial* pMaterialOverrideIndicesPerDraw; // 126
	{
		int s; // 127
		CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 331
		CWeakHandle<InfoForResourceTypeIMaterial2>::operator=(
				const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 129
	}
	{
		int s; // 132
		{
			int nDrawCall; // 134
			CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 135
			CWeakHandle<InfoForResourceTypeIMaterial2>::operator!=(
					const CWeakHandle<InfoForResourceTypeIMaterial2>& hResource);  // 135
			CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
				const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 331
			CWeakHandle<InfoForResourceTypeIMaterial2>::operator=(
					const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 139
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
	CMeshInstance::GetSceneObjectData(); // 322
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Count(); // 325
	CMeshInstance::GetNumDrawCalls(); // 124
} /* size: 622, variables: 2, inline expansions: 9 (472 bytes) */

// <0007CEE9> meshsystem/meshinstance_imp.cpp:145
// variables: 7
// function calls: 21
void CMeshInstance_Imp::ResetMaterialOverrides()
{
	const CRenderMesh* pMesh; // 147
	const CSceneObjectData* pOriginalSceneObjectData; // 148
	const CSceneObjectData* pOldSceneObjectData; // 149
	CSceneObjectData* pNewSceneObjectData; // 150
	int nDraws; // 152
	{
		int d; // 154
		{
			CMaterialDrawDescriptor* pDrawCall; // 156
			CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::operator[](
					int i);  // 297
			CSceneObjectData::GetDrawCall(
					int nDraw);  // 156
			CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::operator[](
					int i);  // 298
			CSceneObjectData::GetDrawCall(
					int nDraw);  // 157
		}
	}
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 64
	CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::GetData(); // 147
	CUtlMemory<CSceneObjectData, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
			int i);  // 148
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 72
	CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::IsValid(); // 287
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 64
	CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::GetData(); // 292
	CUtlMemory<CSceneObjectData, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
			int i);  // 305
	CMeshInstance::GetSceneObjectData(); // 149
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Count(); // 296
	CSceneObjectData::GetNumDrawCalls(); // 152
	CMeshInstance_Imp::DestroyOwnedVBAndIB(); // 162
	CMeshInstance::SetAndOwnDrawDataOverride(
					CSceneObjectData* pDrawDataOverride);  // 163
} /* size: 495, variables: 5, inline expansions: 15 (577 bytes) */

// <0007CA93> meshsystem/meshinstance_imp.cpp:167
// variables: 5
// function calls: 17
void CMeshInstance_Imp::SetMaterialOverride(HMaterial hMaterial, bool bChainThrough)
{
	const CSceneObjectData* pOldSceneObjectData; // 169
	int nDraws; // 170
	{
		HMaterial* pMaterialList; // 174
		bool bAllInvalid; // 175
		{
			int d; // 176
			CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
				const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 331
			CWeakHandle<InfoForResourceTypeIMaterial2>::operator=(
					const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 178
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
	CMeshInstance::GetSceneObjectData(); // 169
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Count(); // 170
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 172
	CWeakHandle<InfoForResourceTypeIMaterial2>::operator!=(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& hResource);  // 172
	CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
		const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 191
	CSceneObject::UpdateFlagsBasedOnMaterial(); // 197
} /* size: 0, variables: 2, inline expansions: 15 (309 bytes) */

// <0007C99E> meshsystem/meshinstance_imp.cpp:202
// variables: 2
// function calls: 2
void CMeshInstance_Imp::SetMaterialGroup(uint32 nIDHash, bool bChainThrough)
{
	const CModel* pModel; // 204
	int nMaterialGroupIndex; // 205
	CStrongHandle<InfoForResourceTypeCModel>::GetData(); // 101
	CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::GetModelData(); // 204
} /* size: 94, variables: 2, inline expansions: 2 (24 bytes) */

// <0007C8F4> meshsystem/meshinstance_imp.cpp:213
// function call: 1
void CMeshInstance_Imp::SetMaterialGroupOverride(int nGroup, bool bChainThrough)
{
	CSceneObject::UpdateFlagsBasedOnMaterial(); // 221
} /* size: 94, inline expansions: 1 (31 bytes) */

// <0007C21C> meshsystem/meshinstance_imp.cpp:225
// variables: 10
// function calls: 25
void CMeshInstance_Imp::ApplyMaterialGroupOverride(int nGroup, bool bChainThrough)
{
	const CRenderMesh* pMesh; // 227
	const CSceneObjectData* pOriginalSceneObjectData; // 228
	const CSceneObjectData* pSceneObjectData; // 229
	int nDraws; // 230
	HMaterial* pMaterialHandles; // 232
	const CModel* pModel; // 234
	bool bHasAtLeastOneOverride; // 237
	{
		int d; // 238
		{
			ResourceId_t nOldResourceId; // 240
			CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::operator[](
					int i);  // 240
			CWeakHandle<InfoForResourceTypeIMaterial2>::operator ResourceHandle_t(); // 240
			CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
				const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 331
			CWeakHandle<InfoForResourceTypeIMaterial2>::operator=(
					const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 242
			CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 245
			CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::operator[](
					int i);  // 245
			CWeakHandle<InfoForResourceTypeIMaterial2>::operator!=(
					const CWeakHandle<InfoForResourceTypeIMaterial2>& hResource);  // 245
		}
	}
	{
		CMeshInstance_Imp* pNextImp; // 258
	}
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 64
	CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::GetData(); // 227
	CUtlMemory<CSceneObjectData, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
			int i);  // 228
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 72
	CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::IsValid(); // 287
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 64
	CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::GetData(); // 292
	CUtlMemory<CSceneObjectData, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
			int i);  // 305
	CMeshInstance::GetSceneObjectData(); // 229
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Count(); // 230
	CStrongHandle<InfoForResourceTypeCModel>::GetData(); // 101
	CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::GetModelData(); // 234
} /* size: 0, variables: 7, inline expansions: 14 (502 bytes) */

// <0007BE9E> meshsystem/meshinstance_imp.cpp:264
// variables: 2
// function calls: 4
void CMeshInstance_Imp::CreateSingleDrawCallMeshHelper(VertexBufferHandle_t hVB, IndexBufferHandle_t hIB, HMaterial hMaterial, RenderPrimitiveType_t nPrimitiveType, int nVertices, int nIndices, const Vector& vBoundsMin, const Vector& vBoundsMax, bool bTranslucent, RenderMeshDrawPrimitiveFlags_t nRenderMeshDrawPrimitiveFlags, bool bOwnVBAndIB)
{
	CSceneObjectData* pNewSceneObject; // 277
	CMaterialDrawDescriptor* pDrawCall; // 279
	CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
		const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 283
	CMeshInstance_Imp::DestroyOwnedVBAndIB(); // 286
	CMeshInstance::SetAndOwnDrawDataOverride(
					CSceneObjectData* pDrawDataOverride);  // 287
} /* size: 340, variables: 2, inline expansions: 4 (90 bytes) */

// <0007B99F> meshsystem/meshinstance_imp.cpp:292
// variables: 4
// function calls: 9
void CMeshInstance_Imp::AppendDrawCallMeshHelper(VertexBufferHandle_t hVB, IndexBufferHandle_t hIB, HMaterial hMaterial, RenderPrimitiveType_t nPrimitiveType, int nStartVertex, int nVertexCount, int nStartIndex, int nIndexCount, const Vector& vBoundsMin, const Vector& vBoundsMax, bool bTranslucent, bool bOwnVBAndIB)
{
	const char   __FUNCTION__; // 32477
	CSceneObjectData* pNewSceneObject; // 297
	CMaterialDrawDescriptor* pDrawCall; // 300
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 296
	}
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 72
	CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::IsValid(); // 287
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 64
	CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::GetData(); // 292
	CUtlMemory<CSceneObjectData, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
			int i);  // 305
	CMeshInstance::GetSceneObjectData(); // 297
	CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
		const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 304
} /* size: 0, variables: 3, inline expansions: 9 (257 bytes) */

// <0007B3A4> meshsystem/meshinstance_imp.cpp:316
// variables: 4
// function calls: 22
void CMeshInstance_Imp::ReplaceVBsIBs(const CVertexBufferOverride* pVBs, const CIndexBufferOverride* pIBs)
{
	CSceneObjectData* pNewSceneObject; // 318
	{
		int i; // 320
		{
			CMaterialDrawDescriptor& drawCall; // 322
			CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::operator[](
					int i);  // 322
			CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::RemoveAll(); // 333
			CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::Count(); // 1369
			AlignedByteArrayExplicit_t<4, CRenderBufferBinding, 8>::Base(); // 268
			CUtlMemoryFixed<CRenderBufferBinding, 4>::Base(); // 112
			CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::Base(); // 368
			CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::ResetDbgInfo(); // 824
			CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::GrowMemory(
					int num);  // 784
			CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::GrowVector(
					int num);  // 1373
			{
				int i; // 1376
				CopyConstruct<CRenderBufferBinding>(CRenderBufferBinding* pMemory,
									const CRenderBufferBinding& src);  // 1378
			}
			CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::AddVectorToTail<CUtlMemoryFixed<CRenderBufferBinding, 4> >(
											const CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >& src);  // 334
		}
		CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Count(); // 320
	}
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 72
	CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::IsValid(); // 287
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 64
	CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::GetData(); // 292
	CUtlMemory<CSceneObjectData, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
			int i);  // 305
	CMeshInstance::GetSceneObjectData(); // 318
	CMeshInstance_Imp::DestroyOwnedVBAndIB(); // 338
	CMeshInstance::SetAndOwnDrawDataOverride(
					CSceneObjectData* pDrawDataOverride);  // 339
} /* size: 464, variables: 1, inline expansions: 9 (292 bytes) */

// <0007A6FE> meshsystem/meshinstance_imp.cpp:344
// variables: 12
// function calls: 48
void CMeshInstance_Imp::AddExtraVertexStreams(ExtraSceneObjectStreamDesc_t* pStreamDescs, int nExtraStreams)
{
	const CSceneObjectData* pOldSceneObjectData; // 346
	int nDraws; // 347
	CUtlVector<int, CUtlMemory<int, int> >** pExtraBufferIndicesPerDraw; // 350
	CSceneObjectData* pNewSceneObjectData; // 368
	{
		int s; // 352
		{
			int nDrawCall; // 354
			CUtlMemory<int, int>::NumAllocated(); // 1196
			CUtlMemory<int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
				int i);  // 1201
			CopyConstruct<int>(int* pMemory,
						const int& src);  // 1201
			CUtlMemory<int, int>::IsGrowable(); // 823
			CUtlMemory<int, int>::IsExternallyAllocated(); // 859
			CUtlMemory<int, int>::IsExternallyAllocated(); // 861
			CUtlMemory<int, int>::Grow(
				int num);  // 806
			CUtlMemory<int, int>::Base(); // 112
			CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 368
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
					const int& src);  // 364
			CUtlMemory<int, int>::ValidateGrowSize(); // 475
			CUtlMemory<int, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 361
		}
	}
	{
		int d; // 371
		{
			int nExtraVertexStreams; // 373
			CUtlVector<int, CUtlMemory<int, int> >* pOverridesIndicesForDraw; // 374
			CMaterialDrawDescriptor* pDrawCall; // 381
			{
				int v; // 382
				{
					int nOverrideIndex; // 384
					CUtlMemory<int, int>::operator[](
							int i);  // 602
					CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
						int i);  // 384
					operator|(RenderMeshDrawPrimitiveFlags_t a,
							RenderMeshDrawPrimitiveFlags_t b);  // 55
					operator|=(RenderMeshDrawPrimitiveFlags_t& a,
							RenderMeshDrawPrimitiveFlags_t b);  // 386
				}
			}
			CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 377
			CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::operator[](
					int i);  // 297
			CSceneObjectData::GetDrawCall(
					int nDraw);  // 381
			CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
			CUtlMemory<int, int>::IsExternallyAllocated(); // 905
			CUtlMemory<int, int>::Purge(); // 903
			CUtlMemory<int, int>::Purge(); // 1799
			CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
			ValidateAlignment<int>(void); // 508
			CUtlMemory<int, int>::Purge(); // 510
			CUtlMemory<int, int>::~CUtlMemory(); // 562
			CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
			CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 392
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
	CMeshInstance::GetSceneObjectData(); // 346
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Count(); // 347
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 351
	CMeshInstance_Imp::DestroyOwnedVBAndIB(); // 397
	CMeshInstance::SetAndOwnDrawDataOverride(
					CSceneObjectData* pDrawDataOverride);  // 398
} /* size: 0, variables: 4, inline expansions: 12 (365 bytes) */

// <0007A66F> meshsystem/meshinstance_imp.cpp:403
// function calls: 2
void CMeshInstance_Imp::GetModel()
{
	CStrongHandle<InfoForResourceTypeCModel>::GetData(); // 101
	CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::GetModelData(); // 405
} /* size: 17, inline expansions: 2 (24 bytes) */

// <0007A569> meshsystem/meshinstance_imp.cpp:408
// function calls: 5
void CMeshInstance_Imp::GetModelHandle()
{
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCModel>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCModel>::operator CWeakHandle<InfoForResourceTypeCModel>(); // 100
	CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::GetModelHandle(); // 410
} /* size: 15, inline expansions: 5 (20 bytes) */

