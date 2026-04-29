
//
// meshsystem/model_imp.cpp
//
//	referenced by: libmeshsystem.so
//
//	functions: 29
//

// <0036E849> meshsystem/model_imp.cpp:22
// function calls: 17
void CModel_Imp::CModel_Imp(const char* pName)
{
	CUtlMemory<CStrongHandleVoid, int>::ValidateGrowSize(); // 475
	CUtlMemory<CStrongHandleVoid, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::CUtlVector(); // 23
	CUtlMemory<EmbeddedMeshData_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<EmbeddedMeshData_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<EmbeddedMeshData_t, CUtlMemory<EmbeddedMeshData_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<EmbeddedMeshData_t, CUtlMemory<EmbeddedMeshData_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<EmbeddedMeshData_t, CUtlMemory<EmbeddedMeshData_t, int> >::CUtlVector(); // 23
	CPhysAggregateDataHandle::CPhysAggregateDataHandle(); // 23
	CUtlMemory<CBoneConstraintBase::ValidateGrowSize(); // 475
	CUtlMemory<CBoneConstraintBase::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CBoneConstraintBase::ResetDbgInfo(); // 530
	CUtlVectorBase<CBoneConstraintBase::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CBoneConstraintBase::CUtlVector(); // 23
	CUtlString::operator=(
			const char* src);  // 25
} /* size: 214, inline expansions: 17 (339 bytes) */

// <0036E824> meshsystem/model_imp.cpp:22
void CModel_Imp::CModel_Imp(const char* pName)
{
} /* size: 0 */

// <0036D2FC> meshsystem/model_imp.cpp:30
// variables: 23
// function calls: 81
void CModel_Imp::InitFromV0Data(const PermModelData_t* pPermData, bool bIsReload)
{
	CConvertOldDiskCtx convertCtx; // 32
	const char   __FUNCTION__; // 27494
	{
		const KeyValues3* pModelResourceKV; // 34
		{
			const char* pModelName; // 36
			HModel hModel; // 37
			CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 718
			IResourceSystem::FindExistingResourceByName(
							const CResourceName& resourceName);  // 720
			CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 720
			IResourceSystem::FindExistingResourceByName<1818520950>(
								const CResourceName& resourceName);  // 37
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 37
			CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 38
			CWeakHandle<InfoForResourceTypeCModel>::Init(
				const CWeakHandle<InfoForResourceTypeCModel>& src);  // 273
			CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCModel>& src);  // 41
			CUtlMemory<CAnimationGroupResource::NumAllocated(); // 1196
			CUtlMemory<CAnimationGroupResource::operator[](
					int i);  // 602
			CUtlVectorBase<CAnimationGroupResource::Element(
				int i);  // 1201
			CopyConstruct<CAnimationGroupResource*>(CAnimationGroupResource** pMemory,
								CAnimationGroupResource* const& src);  // 1201
			CUtlMemory<CAnimationGroupResource::Base(); // 112
			CUtlVectorBase<CAnimationGroupResource::Base(); // 368
			CUtlVectorBase<CAnimationGroupResource::ResetDbgInfo(); // 824
			CUtlVectorBase<CAnimationGroupResource::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<CAnimationGroupResource::AddToTail(
					CAnimationGroupResource* const& src);  // 45
			CUtlString::operator=(
					const char* src);  // 49
		}
		CUtlString::operator=(
				const char* src);  // 58
		CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 59
		CWeakHandle<InfoForResourceTypeCModel>::Init(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 331
		CWeakHandle<InfoForResourceTypeCModel>::operator=(
				const CWeakHandle<InfoForResourceTypeCModel>& src);  // 59
	}
	{
		int nMeshes; // 64
		{
			int m; // 66
			{
				const CRenderMesh* pMeshData; // 68
				{
					const CRenderSkeleton* pSkeleton; // 71
					{
						int b; // 72
						{
							int nModelBone; // 74
							{
								const RenderSkeletonBone_t* pRenderBone; // 77
								{
									const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 78
								}
								{
									const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 79
								}
								{
									const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
								}
							}
						}
					}
				}
			}
		}
	}
	{
		const CPhysAggregateData* pPhys; // 87
		{
			KeyValues3 physicsKV3; // 90
			{
				int i; // 96
				{
					CStrongHandleVoid* pHandle; // 98
					CUtlMemory<CStrongHandleVoid, int>::Base(); // 112
					CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::Base(); // 368
					CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::GrowMemory(
							int num);  // 1145
					CUtlMemory<CStrongHandleVoid, int>::NumAllocated(); // 1143
					CUtlMemory<CStrongHandleVoid, int>::operator[](
							int i);  // 602
					CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::Element(
						int i);  // 1148
					CStrongHandle<ResourceBindingVoid_t>::CStrongHandle(); // 266
					CStrongHandleVoid::CStrongHandleVoid(); // 1479
					Construct<CStrongHandleVoid>(CStrongHandleVoid* pMemory); // 1148
					CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::AddToTail(); // 1156
					CUtlMemory<CStrongHandleVoid, int>::operator[](
							int i);  // 602
					CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::Element(
						int i);  // 1156
					CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::AddToTailGetPtr(); // 98
					CStrongHandle<ResourceBindingVoid_t>::operator ResourceHandle_t(); // 99
					CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>::operator[](
							int i);  // 99
					ThreadInterlockedIncrement(volatile int32* p); // 576
					CInterlockedIntT<int, 4>::operator++(); // 570
					CStrongHandle<ResourceBindingVoid_t>::Init(
						ResourceHandleTyped_t hResource);  // 659
					CStrongHandle<ResourceBindingVoid_t>::operator=(
							ResourceHandleTyped_t hResource);  // 275
					CStrongHandleVoid::operator=(
							ResourceHandle_t hResource);  // 99
				}
				CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>::Count(); // 96
			}
		}
		CPhysAggregateDataHandle::Get(); // 87
	}
	CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	CUtlHashtable<const ResourceBindingBase_t::Init(); // 178
	CUtlHashtable<const ResourceBindingBase_t::CUtlHashtable(
			int minimumSize);  // 20
	CConvertOldDiskCtx::CConvertOldDiskCtx(); // 32
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::Count(); // 897
			CUtlHashtableEntry<const ResourceBindingBase_t::IsValid(); // 899
			CUtlHashtableEntry<const ResourceBindingBase_t::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t> >(CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t>* pMemory); // 902
		}
	}
	CUtlHashtable<const ResourceBindingBase_t::RemoveAll(); // 188
	CUtlHashtable<const ResourceBindingBase_t::~CUtlHashtable(); // 25
	CConvertOldDiskCtx::~CConvertOldDiskCtx(); // 105
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::Count(); // 897
			CUtlHashtableEntry<const ResourceBindingBase_t::IsValid(); // 899
			CUtlHashtableEntry<const ResourceBindingBase_t::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t> >(CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t>* pMemory); // 902
		}
	}
	CUtlHashtable<const ResourceBindingBase_t::RemoveAll(); // 188
	ValidateAlignment<CUtlHashtableEntry<const ResourceBindingBase_t*, empty_t> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::~CUtlMemory(); // 188
	CUtlHashtable<const ResourceBindingBase_t::~CUtlHashtable(); // 25
	CConvertOldDiskCtx::~CConvertOldDiskCtx(); // 105
	CModel_Imp::SetupRuntimeDerivedData(); // 103
} /* size: 1224, variables: 2, inline expansions: 17 (973 bytes) */

// <0036C489> meshsystem/model_imp.cpp:110
// variables: 8
// function calls: 61
void CModel_Imp::InitEmbeddedData(bool bIsReload)
{
	const char   __FUNCTION__; // 27548
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
	{
		int iMesh; // 115
		{
			CRenderMesh* pRenderMesh; // 119
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 117
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 118
			}
			CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 204
			CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
			CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 122
			CUtlMemory<EmbeddedMeshData_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<EmbeddedMeshData_t, CUtlMemory<EmbeddedMeshData_t, int> >::operator[](
					int i);  // 117
			CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int this,
					int i);  // 118
			CSmartPtr<CRenderMesh, CRefCountAccessor>::operator==(
					const CRenderMesh* pOther);  // 118
			CUtlMemory<EmbeddedMeshData_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<EmbeddedMeshData_t, CUtlMemory<EmbeddedMeshData_t, int> >::operator[](
					int i);  // 119
			CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int this,
					int i);  // 121
			ThreadInterlockedIncrement(volatile int32* p); // 158
			Increment(int* p); // 199
			CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 329
			CRefCounted<CRefCountServiceBase<true, CRefMT> >::AddRef(); // 21
			AddRef<CRenderMesh>(CRenderMesh* pObj); // 366
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 204
			CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
			CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
			CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
			Release<CRenderMesh>(CRenderMesh* pObj); // 370
			CSmartPtr<CRenderMesh, CRefCountAccessor>::operator=(
					CRenderMesh* pObj);  // 121
			CUtlMemory<EmbeddedMeshData_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<EmbeddedMeshData_t, CUtlMemory<EmbeddedMeshData_t, int> >::operator[](
					int i);  // 122
		}
		CUtlVectorBase<EmbeddedMeshData_t, CUtlMemory<EmbeddedMeshData_t, int> >::Count(); // 115
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 130
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 137
	}
	CUtlVectorBase<EmbeddedMeshData_t, CUtlMemory<EmbeddedMeshData_t, int> >::Count(); // 112
	Count(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this); // 114
	CUtlVectorBase<EmbeddedMeshData_t, CUtlMemory<EmbeddedMeshData_t, int> >::RemoveAll(); // 124
	CUtlMemory<EmbeddedMeshData_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<EmbeddedMeshData_t, int>::Purge(); // 903
	CUtlMemory<EmbeddedMeshData_t, int>::Purge(); // 1799
	CUtlVectorBase<EmbeddedMeshData_t, CUtlMemory<EmbeddedMeshData_t, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<EmbeddedMeshData_t, CUtlMemory<EmbeddedMeshData_t, int> >::Purge(); // 125
	CUtlVectorBase<CAnimationGroupResource::Count(); // 130
	CUtlMemory<CAnimationGroupResource::NumAllocated(); // 1196
	CUtlMemory<CAnimationGroupResource::operator[](
			int i);  // 602
	CUtlVectorBase<CAnimationGroupResource::Element(
		int i);  // 1201
	CopyConstruct<CAnimationGroupResource*>(CAnimationGroupResource** pMemory,
						CAnimationGroupResource* const& src);  // 1201
	CUtlMemory<CAnimationGroupResource::Base(); // 112
	CUtlVectorBase<CAnimationGroupResource::Base(); // 368
	CUtlVectorBase<CAnimationGroupResource::ResetDbgInfo(); // 824
	CUtlVectorBase<CAnimationGroupResource::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CAnimationGroupResource::AddToTail(
			CAnimationGroupResource* const& src);  // 131
	CPhysAggregateDataHandle::IsValid(); // 128
	CPhysAggregateDataHandle::operator bool(); // 135
	CPhysAggregateDataHandle::Get(); // 137
	CPhysAggregateDataHandle::Clear(); // 205
	CPhysAggregateDataHandle::Set(
		CPhysAggregateData* pData);  // 143
	CPhysAggregateDataHandle::Get(); // 143
	CPhysAggregateDataHandle::operator=(
			const CPhysAggregateDataHandle& rhs);  // 138
	CPhysAggregateDataHandle::Set(
		CPhysAggregateData* pData);  // 110
	CPhysAggregateDataHandle::CPhysAggregateDataHandle(
				CPhysAggregateData* pData);  // 139
	CPhysAggregateDataHandle::Clear(); // 205
	CPhysAggregateDataHandle::Set(
		CPhysAggregateData* pData);  // 143
	CPhysAggregateDataHandle::operator=(
			const CPhysAggregateDataHandle& rhs);  // 139
	CPhysAggregateDataHandle::Clear(); // 115
	CPhysAggregateDataHandle::~CPhysAggregateDataHandle(); // 139
} /* size: 0, variables: 1, inline expansions: 32 (774 bytes) */

// <00368532> meshsystem/model_imp.cpp:146
// variables: 6
// function calls: 60
void CModel_Imp::~CModel_Imp()
{
	{
		int iGroup; // 149
	}
	{
		int iMesh; // 155
	}
	{
		int iGroup; // 149
		CUtlVectorBase<CAnimationGroupResource::Count(); // 149
		CUtlMemory<CAnimationGroupResource::operator[](
				int i);  // 588
		CUtlVectorBase<CAnimationGroupResource::operator[](
				int i);  // 151
	}
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 153
	{
		int iMesh; // 155
		CUtlVectorBase<EmbeddedMeshData_t, CUtlMemory<EmbeddedMeshData_t, int> >::Count(); // 155
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 204
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 157
		CUtlMemory<EmbeddedMeshData_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<EmbeddedMeshData_t, CUtlMemory<EmbeddedMeshData_t, int> >::operator[](
				int i);  // 157
	}
	CUtlVectorBase<EmbeddedMeshData_t, CUtlMemory<EmbeddedMeshData_t, int> >::RemoveAll(); // 159
	CUtlVectorBase<const CBoneConstraintBase::RemoveAll(); // 161
	{
		int i; // 1807
		CUtlMemory<CBoneConstraintBase::operator[](
				int i);  // 602
		CUtlVectorBase<CBoneConstraintBase::Element(
			int i);  // 1809
	}
	CUtlVectorBase<CBoneConstraintBase::RemoveAll(); // 1798
	CUtlMemory<CBoneConstraintBase::Purge(); // 903
	CUtlMemory<CBoneConstraintBase::IsExternallyAllocated(); // 905
	CUtlMemory<CBoneConstraintBase::Purge(); // 1799
	CUtlVectorBase<CBoneConstraintBase::ResetDbgInfo(); // 1800
	CUtlVectorBase<CBoneConstraintBase::Purge(); // 1811
	CUtlVectorBase<CBoneConstraintBase::PurgeAndDeleteElements(); // 162
	CUtlVectorBase<CBoneConstraintBase::RemoveAll(); // 1798
	CUtlMemory<CBoneConstraintBase::IsExternallyAllocated(); // 905
	CUtlMemory<CBoneConstraintBase::Purge(); // 903
	CUtlMemory<CBoneConstraintBase::Purge(); // 1799
	CUtlVectorBase<CBoneConstraintBase::Purge(); // 560
	ValidateAlignment<CBoneConstraintBase*>(void); // 508
	CUtlMemory<CBoneConstraintBase::Purge(); // 510
	CUtlMemory<CBoneConstraintBase::~CUtlMemory(); // 562
	CUtlVectorBase<CBoneConstraintBase::~CUtlVectorBase(); // 410
	CUtlVector<CBoneConstraintBase::~CUtlVector(); // 171
	CPhysAggregateDataHandle::Clear(); // 115
	CPhysAggregateDataHandle::~CPhysAggregateDataHandle(); // 171
	CUtlVectorBase<EmbeddedMeshData_t, CUtlMemory<EmbeddedMeshData_t, int> >::RemoveAll(); // 1798
	CUtlMemory<EmbeddedMeshData_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<EmbeddedMeshData_t, int>::Purge(); // 903
	CUtlMemory<EmbeddedMeshData_t, int>::Purge(); // 1799
	CUtlVectorBase<EmbeddedMeshData_t, CUtlMemory<EmbeddedMeshData_t, int> >::Purge(); // 560
	ValidateAlignment<EmbeddedMeshData_t>(void); // 508
	CUtlMemory<EmbeddedMeshData_t, int>::Purge(); // 510
	CUtlMemory<EmbeddedMeshData_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<EmbeddedMeshData_t, CUtlMemory<EmbeddedMeshData_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<EmbeddedMeshData_t, CUtlMemory<EmbeddedMeshData_t, int> >::~CUtlVector(); // 171
	{
		int i; // 1721
		CUtlMemory<CStrongHandleVoid, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::Element(
			int i);  // 1723
		CStrongHandle<ResourceBindingVoid_t>::~CStrongHandle(); // 262
		CStrongHandleVoid::~CStrongHandleVoid(); // 1526
		Destruct<CStrongHandleVoid>(CStrongHandleVoid* pMemory); // 1723
	}
	CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::RemoveAll(); // 1798
	CUtlMemory<CStrongHandleVoid, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandleVoid, int>::Purge(); // 903
	CUtlMemory<CStrongHandleVoid, int>::Purge(); // 1799
	CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::Purge(); // 560
	ValidateAlignment<CStrongHandleVoid>(void); // 508
	CUtlMemory<CStrongHandleVoid, int>::Purge(); // 510
	CUtlMemory<CStrongHandleVoid, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::~CUtlVector(); // 171
} /* size: 660, inline expansions: 42 (1173 bytes) */

// <003684C9> meshsystem/model_imp.cpp:146
void CModel_Imp::~CModel_Imp()
{
} /* size: 36 */

// <0036848F> meshsystem/model_imp.cpp:146
// variables: 2
void CModel_Imp::~CModel_Imp()
{
	{
		int iGroup; // 149
	}
	{
		int iMesh; // 155
	}
} /* size: 0 */

// <0036845F> meshsystem/model_imp.cpp:177
void CModel_Imp::IsInitialized()
{
} /* size: 12 */

// <003664D1> meshsystem/model_imp.cpp:185
// variables: 14
// function calls: 131
void CModel_Imp::SetupMeshGroups()
{
	int nMeshGroups; // 187
	int nMeshes; // 188
	bool bZeroMeshAddedToBody; // 192
	{
		int g; // 195
		{
			CPathBufferString fixedName; // 200
			const char* pDelimiter; // 201
			{
				int nPart; // 207
				MeshGroupMask_t nMaskForSubMesh; // 218
				bool bAddedMesh; // 219
				{
					int m; // 220
					{
						const MeshGroupMask_t& nMask; // 222
						MeshGroupMask_t nGroupMask; // 223
						CUtlMemory<long long unsigned int, int>::operator[](
								int i);  // 588
						CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::operator[](
								int i);  // 222
					}
				}
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 781
				CBufferString::operator char const*(); // 207
				CUtlMemory<CModel::BodyPart_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> >::operator[](
						int i);  // 236
				CUtlMemory<long long unsigned int, int>::NumAllocated(); // 1196
				CUtlMemory<long long unsigned int, int>::operator[](
						int i);  // 602
				CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::Element(
					int i);  // 1201
				CopyConstruct<long long unsigned int>(long long unsigned int* pMemory,
									const long long unsigned int& src);  // 1201
				CUtlMemory<long long unsigned int, int>::Base(); // 112
				CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::Base(); // 368
				CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::AddToTail(
						const long long unsigned int& src);  // 236
				CUtlMemory<CModel::BodyPart_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> >::operator[](
						int i);  // 237
				CUtlMemory<CModel::BodyPart_t, int>::NumAllocated(); // 1143
				CUtlMemory<CModel::BodyPart_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> >::Element(
					int i);  // 1148
				CUtlString::CUtlString(); // 654
				CUtlStringToken::CUtlStringToken(); // 654
				CUtlMemory<long long unsigned int, int>::ValidateGrowSize(); // 475
				CUtlMemory<long long unsigned int, int>::CUtlMemory(
						int nGrowSize,
						int nInitAllocationCount);  // 527
				CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::ResetDbgInfo(); // 530
				CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::CUtlVectorBase(
						int growSize,
						int initCapacity);  // 418
				CUtlVector<long long unsigned int, CUtlMemory<long long unsigned int, int> >::CUtlVector(); // 654
				BodyPart_t::BodyPart_t(); // 1479
				Construct<CModel::BodyPart_t>(BodyPart_t* pMemory); // 1148
				CUtlMemory<CModel::BodyPart_t, int>::Base(); // 112
				CUtlVectorBase<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> >::Base(); // 368
				CUtlVectorBase<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> >::GrowMemory(
						int num);  // 1145
				CUtlVectorBase<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> >::AddToTail(); // 210
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 781
				CBufferString::operator char const*(); // 211
				CUtlMemory<CModel::BodyPart_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> >::operator[](
						int i);  // 211
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 781
				CBufferString::operator char const*(); // 212
				CUtlStringToken::CUtlStringToken(); // 121
				{
				}
				MakeStringToken(const char* pString,
						bool bWriteToDatabase);  // 119
				MakeStringToken(const char* pString,
						bool bWriteToDatabase);  // 212
				CUtlMemory<CModel::BodyPart_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> >::operator[](
						int i);  // 212
				CUtlMemory<CModel::BodyPart_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> >::operator[](
						int i);  // 213
				{
					int i; // 1531
					CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 1531
					CUtlMemory<CUtlString, int>::operator[](
							int i);  // 609
					CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
						int i);  // 1533
				}
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Find(
					const CUtlString& src);  // 1563
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::HasElement(
						const CUtlString& src);  // 214
				CUtlMemory<CModel::BodyPart_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> >::operator[](
						int i);  // 214
				CUtlString::~CUtlString(); // 214
			}
			CBufferString::Set(
				const char* pString,
				int nChars,
				bool bExact);  // 601
			CBufferString::InitMinConstruct(
					bool bGrowable);  // 712
			CBufferString::CBufferString(); // 596
			CBufferStringN<200>::CBufferStringN(
					const char* pString,
					int nChars,
					bool bExact,
					bool bGrowable);  // 200
			CUtlMemory<CUtlStringToken, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::operator[](
					int i);  // 197
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
					int i);  // 200
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 200
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 201
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 239
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
					int i);  // 197
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 197
			CUtlStringToken::CUtlStringToken(); // 121
			{
			}
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 119
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 197
		}
	}
	{
		int nBody; // 244
		CUtlMemory<CModel::BodyPart_t, int>::NumAllocated(); // 782
		CUtlMemory<CModel::BodyPart_t, int>::Base(); // 112
		CUtlVectorBase<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> >::Base(); // 368
		CUtlVectorBase<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> >::GrowMemory(
				int num);  // 784
		CUtlVectorBase<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> >::GrowVector(
				int num);  // 1171
		CUtlMemory<CModel::BodyPart_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> >::Element(
			int i);  // 1097
		CUtlMemory<CModel::BodyPart_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> >::Element(
			int i);  // 1097
		memmove(void* __dest,
			const void* __src,
			size_t __len);  // 115
		V_memmove(void* dest,
				const void* src,
				size_t count);  // 1097
		CUtlVectorBase<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> >::ShiftElementsRight(
					int elem,
					int num);  // 1172
		CUtlMemory<CModel::BodyPart_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> >::Element(
			int i);  // 1173
		CUtlStringToken::CUtlStringToken(); // 654
		CUtlString::CUtlString(); // 654
		CUtlMemory<long long unsigned int, int>::ValidateGrowSize(); // 475
		CUtlMemory<long long unsigned int, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<long long unsigned int, CUtlMemory<long long unsigned int, int> >::CUtlVector(); // 654
		BodyPart_t::BodyPart_t(); // 1479
		Construct<CModel::BodyPart_t>(BodyPart_t* pMemory); // 1173
		CUtlVectorBase<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> >::InsertBefore(
				int elem);  // 1136
		CUtlVectorBase<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> >::AddToHead(); // 244
		CUtlMemory<CModel::BodyPart_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> >::operator[](
				int i);  // 245
		CUtlStringToken::CUtlStringToken(); // 121
		{
		}
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 119
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 246
		CUtlMemory<CModel::BodyPart_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> >::operator[](
				int i);  // 246
		CUtlMemory<long long unsigned int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::operator[](
				int i);  // 247
		CUtlMemory<CModel::BodyPart_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> >::operator[](
				int i);  // 247
		CUtlMemory<CModel::BodyPart_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> >::operator[](
				int i);  // 248
		CUtlMemory<long long unsigned int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::operator[](
				int i);  // 248
		CUtlMemory<long long unsigned int, int>::NumAllocated(); // 1196
		CUtlMemory<long long unsigned int, int>::operator[](
				int i);  // 602
		CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::Element(
			int i);  // 1201
		CopyConstruct<long long unsigned int>(long long unsigned int* pMemory,
							const long long unsigned int& src);  // 1201
		CUtlMemory<long long unsigned int, int>::Base(); // 112
		CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::Base(); // 368
		CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::AddToTail(
				const long long unsigned int& src);  // 248
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 187
} /* size: 0, variables: 3, inline expansions: 1 (7 bytes) */

// <00365856> meshsystem/model_imp.cpp:254
// variables: 9
// function calls: 45
void CModel_Imp::SetupMaterialGroups()
{
	int nGroups; // 256
	const CModelMaterialGroup& group; // 269
	int nMaterials; // 270
	{
		int g; // 262
		{
			const CModelMaterialGroup& group; // 264
			CUtlMemory<CUtlStringToken, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::operator[](
					int i);  // 265
			CUtlMemory<CModelMaterialGroup, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> >::operator[](
					int i);  // 264
			CUtlString::Get(); // 265
			CUtlStringToken::CUtlStringToken(); // 121
			{
			}
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 119
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 265
		}
	}
	{
		int m; // 271
		{
			HMaterial hMat; // 273
			ResourceId_t nMaterialId; // 275
			CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMat this,
					int i);  // 273
			CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
			CStrongHandle<InfoForResourceTypeIMaterial2>::GetHandle(); // 273
			HashItem<ResourceId_t>(const ResourceId_t& item); // 50
			DefaultHashFunctor<ResourceId_t>::operator(
					ResourceId_t s);  // 249
			CUtlMemory<CUtlHashtableEntry<ResourceId_t, int>, int>::Base(); // 650
			IdealIndex(uint32_if32BitStorage h,
					uint32 m);  // 653
			CUtlMemory<CUtlHashtableEntry<ResourceId_t, int>, int>::Count(); // 651
			CUtlHashtableEntry<ResourceId_t, int>::IdealIndex(
					uint32 slotmask);  // 656
			CUtlHashtableEntry<ResourceId_t, int>::IdealIndex(
					uint32 slotmask);  // 667
			ResourceId_t::operator==(
					const ResourceId_t& other);  // 154
			DefaultEqualFunctor<ResourceId_t>::operator(
					Arg_t a,
					Arg_t b);  // 670
			DoLookup<const ResourceId_t&>(const CUtlHashtable<ResourceId_t, int, DefaultHashFunctor<ResourceId_t>, DefaultEqualFunctor<ResourceId_t>, undefin this,
							const ResourceId_t& x,
							unsigned int h,
							handle_t* pPreviousInChain);  // 716
			CUtlMemory<CUtlHashtableEntry<ResourceId_t, int>, int>::operator[](
					int i);  // 720
			CUtlKeyValuePair<ResourceId_t, int>::CUtlKeyValuePair<ResourceId_t, int>(
								const ResourceId_t& k,
								const int& v);  // 1514
			Construct<CUtlKeyValuePair<ResourceId_t, int>, const ResourceId_t&, int&>(CUtlKeyValuePair<ResourceId_t, int>* pMemory); // 720
			DoInsert<const ResourceId_t&>(const CUtlHashtable<ResourceId_t, int, DefaultHashFunctor<ResourceId_t>, DefaultEqualFunctor<ResourceId_t>, undefined_t,  this,
							const ResourceId_t& k,
							Arg_t v,
							unsigned int h,
							bool* pDidInsert);  // 714
			DoInsert<const ResourceId_t&>(const CUtlHashtable<ResourceId_t, int, DefaultHashFunctor<ResourceId_t>, DefaultEqualFunctor<ResourceId_t>, undefined_t,  this,
							const ResourceId_t& k,
							Arg_t v,
							unsigned int h,
							bool* pDidInsert);  // 249
			Insert(const CUtlHashtable<ResourceId_t, int, DefaultHashFunctor<ResourceId_t>, DefaultEqualFunctor<ResourceId_t>, undefined_t,  this,
				KeyArg_t k,
				ValueArg_t v,
				bool* pDidInsert);  // 276
		}
	}
	CUtlMemory<CUtlStringToken, int>::NumAllocated(); // 782
	CUtlMemory<CUtlStringToken, int>::Base(); // 112
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Base(); // 368
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
		CUtlMemory<CUtlStringToken, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Element(
			int i);  // 1453
		CUtlStringToken::CUtlStringToken(); // 1479
		Construct<CUtlStringToken>(CUtlStringToken* pMemory); // 1453
	}
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::AddMultipleToTail(
				int num);  // 261
	CUtlMemory<CModelMaterialGroup, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> >::operator[](
			int i);  // 269
	Count(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMat this); // 270
} /* size: 0, variables: 3, inline expansions: 12 (559 bytes) */

// <00375973> meshsystem/model_imp.cpp:283
void CModel_Imp::AppendMesh(const CRenderMesh* pRenderMesh)
{
} /* size: 0 */

// <003649D3> meshsystem/model_imp.cpp:293
// variables: 9
// function calls: 51
void CModel_Imp::AppendFlexControllers(const CRenderMesh* pRenderMesh)
{
	const CMorphSet* pMorphSet; // 298
	const int  nMorphSetControllerCount; // 302
	{
		int nMorphSetController; // 303
		{
			const CFlexController* pController; // 305
			const char* pszControllerName; // 306
			const CUtlStringToken  tControllerName; // 308
			const uint32  nControllerHash; // 309
			{
				const int  nModelController; // 313
				CUtlMemory<const CFlexController::NumAllocated(); // 1196
				CUtlMemory<const CFlexController::Base(); // 112
				CUtlVectorBase<const CFlexController::Base(); // 368
				CUtlVectorBase<const CFlexController::ResetDbgInfo(); // 824
				CUtlMemory<const CFlexController::IsGrowable(); // 823
				CUtlMemory<const CFlexController::IsExternallyAllocated(); // 859
				CUtlMemory<const CFlexController::IsExternallyAllocated(); // 861
				CUtlMemory<const CFlexController::Grow(
					int num);  // 806
				CUtlVectorBase<const CFlexController::GrowMemory(
						int num);  // 1198
				CopyConstruct<const CFlexController*>(const CFlexController ** pMemory,
									const CFlexController* const& src);  // 1201
				CUtlMemory<const CFlexController::operator[](
						int i);  // 602
				CUtlVectorBase<const CFlexController::Element(
					int i);  // 1201
				CUtlVectorBase<const CFlexController::AddToTail(
						const CFlexController* const& src);  // 313
				CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::operator[](
						int i);  // 720
				CUtlKeyValuePair<unsigned int, int>::CUtlKeyValuePair<unsigned int, int>(
									const unsigned int& k,
									const int& v);  // 1514
				Construct<CUtlKeyValuePair<unsigned int, int>, unsigned int&, int&>(CUtlKeyValuePair<unsigned int, int>* pMemory); // 720
				DoInsert<unsigned int>(const CUtlHashtable<unsigned int, int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CU this,
							unsigned int k,
							Arg_t v,
							unsigned int h,
							bool* pDidInsert);  // 714
				DoInsert<unsigned int>(const CUtlHashtable<unsigned int, int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CU this,
							unsigned int k,
							Arg_t v,
							unsigned int h,
							bool* pDidInsert);  // 249
				Insert(const CUtlHashtable<unsigned int, int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CU this,
					KeyArg_t k,
					ValueArg_t v,
					bool* pDidInsert);  // 314
				CUtlMemory<CUtlHashtableEntry<int, unsigned int>, int>::Base(); // 650
				IdealIndex(uint32_if32BitStorage h,
						uint32 m);  // 653
				CUtlMemory<CUtlHashtableEntry<int, unsigned int>, int>::Count(); // 651
				CUtlHashtableEntry<int, unsigned int>::IdealIndex(
						uint32 slotmask);  // 656
				CUtlHashtableEntry<int, unsigned int>::IdealIndex(
						uint32 slotmask);  // 667
				DoLookup<int>(const CUtlHashtable<int, unsigned int, IdentityHashFunctor, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlH this,
						int x,
						unsigned int h,
						handle_t* pPreviousInChain);  // 716
				CUtlMemory<CUtlHashtableEntry<int, unsigned int>, int>::operator[](
						int i);  // 720
				CUtlKeyValuePair<int, unsigned int>::CUtlKeyValuePair<int, unsigned int>(
									const int& k,
									const unsigned int& v);  // 1514
				Construct<CUtlKeyValuePair<int, unsigned int>, int&, unsigned int&>(CUtlKeyValuePair<int, unsigned int>* pMemory); // 720
				DoInsert<int>(const CUtlHashtable<int, unsigned int, IdentityHashFunctor, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtab this,
						int k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 714
				DoInsert<int>(const CUtlHashtable<int, unsigned int, IdentityHashFunctor, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtab this,
						int k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 249
				Insert(const CUtlHashtable<int, unsigned int, IdentityHashFunctor, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtab this,
					KeyArg_t k,
					ValueArg_t v,
					bool* pDidInsert);  // 315
			}
			Find(const CUtlHashtable<unsigned int, int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMem this,
				KeyArg_t k);  // 235
			HasElement(const CUtlHashtable<unsigned int, int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMem this,
					KeyArg_t k);  // 311
			CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::Count(); // 161
			CUtlMemory<FlexControllerMapping_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::operator[](
					int i);  // 166
			{
			}
			CMorphSet::GetFlexController(
						int i);  // 159
			CMorphSet::GetFlexController(
						int i);  // 305
			CUtlStringToken::CUtlStringToken(); // 121
			{
			}
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 119
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 308
			CUtlString::Get(); // 93
			CFlexController::pszName(); // 306
		}
	}
	CRenderMesh::GetMorphSet(); // 298
	CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::Count(); // 156
	CMorphSet::GetFlexControllerCount(); // 302
	CUtlVectorBase<const CFlexController::Count(); // 319
	{
		int i; // 1554
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1554
		CUtlMemory<int, int>::operator[](
				int i);  // 602
		CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
			int i);  // 1556
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::FillWithValue(
			const int& src);  // 320
} /* size: 0, variables: 2, inline expansions: 5 (77 bytes) */

// <00375718> meshsystem/model_imp.cpp:324
// variables: 3
// function calls: 6
void CModel_Imp::FindAttachment(const char* pAttachmentName)
{
	uint32 nFindHash; // 326
	int nAttachments; // 328
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 326
	CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::Count(); // 328
	{
		int a; // 329
		CUtlMemory<AttachmentPairing_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::operator[](
				int i);  // 331
	}
} /* size: 0, variables: 2, inline expansions: 4 (0 bytes) */

// <00364986> meshsystem/model_imp.cpp:324
// variables: 3
void CModel_Imp::FindAttachment(const char* pAttachmentName)
{
	uint32 nFindHash; // 326
	int nAttachments; // 328
	{
		int a; // 329
	}
} /* size: 0, variables: 2 */

// <00363A39> meshsystem/model_imp.cpp:341
// variables: 10
// function calls: 54
void CModel_Imp::AppendAttachments(const CRenderMesh* pMesh)
{
	int nAttachments; // 348
	{
		int a; // 349
		{
			const char* pName; // 351
			int nMapAttach; // 353
			AttachmentPairing_t& attachment; // 360
			float flTotalWeight; // 366
			{
				int b; // 367
				{
					const char* pInfluenceName; // 375
					CUtlString::Get(); // 375
					CUtlStringToken::CUtlStringToken(); // 121
					{
					}
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 119
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 376
					CModel::GetModelName(); // 380
				}
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
						int i);  // 545
				CUtlRBTree<CUtlMap<char const::Element(
					int i);  // 93
				CUtlMap<char const::operator[](
						IndexType_t i);  // 186
				CUtlDict<CAttachment, int>::Element(
					int i);  // 213
				CUtlDict<CAttachment, int>::operator[](
						int i);  // 391
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
						int i);  // 545
				CUtlRBTree<CUtlMap<char const::Element(
					int i);  // 93
				CUtlMap<char const::operator[](
						IndexType_t i);  // 186
				CUtlDict<CAttachment, int>::Element(
					int i);  // 213
				CUtlDict<CAttachment, int>::operator[](
						int i);  // 367
			}
			{
				int b; // 400
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
						int i);  // 545
				CUtlRBTree<CUtlMap<char const::Element(
					int i);  // 93
				CUtlMap<char const::operator[](
						IndexType_t i);  // 186
				CUtlDict<CAttachment, int>::Element(
					int i);  // 213
				CUtlDict<CAttachment, int>::operator[](
						int i);  // 400
			}
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
					int i);  // 545
			CUtlRBTree<CUtlMap<char const::Element(
				int i);  // 93
			CUtlMap<char const::operator[](
					IndexType_t i);  // 186
			CUtlDict<CAttachment, int>::Element(
				int i);  // 213
			CUtlDict<CAttachment, int>::operator[](
					int i);  // 351
			CUtlString::Get(); // 351
			CUtlStringToken::CUtlStringToken(); // 121
			{
			}
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 119
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 326
			CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::Count(); // 328
			{
				int a; // 329
				CUtlMemory<AttachmentPairing_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::operator[](
						int i);  // 331
			}
			CModel_Imp::FindAttachment(
					const char* pAttachmentName);  // 353
			CUtlMemory<AttachmentPairing_t, int>::NumAllocated(); // 1143
			CUtlMemory<AttachmentPairing_t, int>::IsGrowable(); // 823
			CUtlMemory<AttachmentPairing_t, int>::IsExternallyAllocated(); // 859
			CUtlMemory<AttachmentPairing_t, int>::IsExternallyAllocated(); // 861
			CUtlMemory<AttachmentPairing_t, int>::Grow(
				int num);  // 806
			CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::GrowMemory(
					int num);  // 1145
			CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::AddToTail(); // 359
			CUtlMemory<AttachmentPairing_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::operator[](
					int i);  // 360
			CUtlStringToken::CUtlStringToken(); // 121
			{
			}
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 119
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 362
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
					int i);  // 545
			CUtlRBTree<CUtlMap<char const::Element(
				int i);  // 93
			CUtlMap<char const::operator[](
					IndexType_t i);  // 186
			CUtlDict<CAttachment, int>::Element(
				int i);  // 213
			CUtlDict<CAttachment, int>::operator[](
					int i);  // 363
		}
	}
	CUtlRBTree<CUtlMap<char const::Count()(char const* const&, char const* const&)>::Node_t, this); // 177
	CUtlMap<char const::Count()(char const* const&, char const* const&)>* this); // 232
	CUtlDict<CAttachment, int>::Count(); // 348
} /* size: 0, variables: 1, inline expansions: 3 (21 bytes) */

// <00363651> meshsystem/model_imp.cpp:409
// variables: 4
// function calls: 15
void CModel_Imp::ClearInternalData()
{
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::Count(); // 897
			CUtlHashtableEntry<unsigned int, int>::IsValid(); // 899
			CUtlHashtableEntry<unsigned int, int>::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<unsigned int, int> >(CUtlKeyValuePair<unsigned int, int>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<unsigned int, int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CU this); // 411
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
	RemoveAll(const CUtlHashtable<int, unsigned int, IdentityHashFunctor, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtab this); // 412
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 413
	CUtlVectorBase<const CFlexController::RemoveAll(); // 414
	CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >::RemoveAll(); // 415
} /* size: 300, inline expansions: 5 (234 bytes) */

// <00362F33> meshsystem/model_imp.cpp:424
// variables: 17
// function calls: 21
void CModel_Imp::ComputeRuntimeFlags()
{
	bool bHasTransparent; // 427
	bool bHasOpaque; // 428
	int nMeshes; // 429
	bool bHasEvents; // 465
	bool bHasLODs; // 498
	{
		int m; // 430
		{
			const CRenderMesh* pMesh; // 434
			{
				RenderMeshTranslucencyType_t nTranslucencyType; // 437
			}
		}
		CUtlMemory<long long unsigned int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::operator[](
				int i);  // 432
	}
	{
		HSequence hSequence; // 466
		HSequence::operator==(
				const HSequence& other);  // 466
	}
	{
		int a; // 479
		{
			const CAnimDesc* pAnimDesc; // 481
			const CAnimEncodeDifference* pDiff; // 482
			{
				int m; // 484
				CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 484
				CUtlMemory<unsigned char, int>::operator[](
						int i);  // 595
				CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator[](
						int i);  // 486
				operator|(ModelFlags_t a,
						ModelFlags_t b);  // 241
				operator|=(ModelFlags_t& a,
						ModelFlags_t b);  // 488
			}
			operator&(ModelFlags_t a,
					ModelFlags_t b);  // 493
		}
	}
	{
		LODGroupMask_t mask; // 499
		CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& __for_range; // 56012
		iterator __for_begin; // 16912
		iterator __for_end; // 16912
		CUtlMemory<unsigned char, int>::Base(); // 112
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 102
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::begin(); // 499
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 104
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::end(); // 499
	}
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 505
	operator|(ModelFlags_t a,
			ModelFlags_t b);  // 241
	operator|=(ModelFlags_t& a,
			ModelFlags_t b);  // 476
	operator|(ModelFlags_t a,
			ModelFlags_t b);  // 241
	operator|=(ModelFlags_t& a,
			ModelFlags_t b);  // 458
	operator|(ModelFlags_t a,
			ModelFlags_t b);  // 241
	operator|=(ModelFlags_t& a,
			ModelFlags_t b);  // 461
} /* size: 493, variables: 5, inline expansions: 7 (74 bytes) */

// <00362D4D> meshsystem/model_imp.cpp:510
// variables: 4
// function calls: 4
void CModel_Imp::FixupHullAndViewBounds()
{
	{
		Vector* pMinView; // 514
		Vector* pMaxView; // 515
	}
	{
		Vector* pMinHull; // 521
		Vector* pMaxHull; // 522
	}
	Vector::operator==(
			const Vector& src);  // 512
	Vector::operator==(
			const Vector& src);  // 512
	Vector::operator==(
			const Vector& src);  // 519
	Vector::operator==(
			const Vector& src);  // 519
} /* size: 346, inline expansions: 4 (272 bytes) */

// <003615C6> meshsystem/model_imp.cpp:528
// variables: 11
// function calls: 94
void CModel_Imp::AppendModelMeshesAndAnimations()
{
	int nMeshes; // 532
	int nAnims; // 533
	int nBones; // 534
	{
		int m; // 539
		{
			const CRenderMesh* pMesh; // 541
			CModel_Imp::AppendMesh(
					const CRenderMesh* pRenderMesh);  // 545
			CUtlMemory<short unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
					int i);  // 546
		}
	}
	{
		CUtlVectorFixedGrowable<const CAnimationGroupResource*, 4> animGroups; // 558
		{
			int iAnimGroup; // 559
			CUtlVectorBase<CAnimationGroupResource::Count(); // 559
			CUtlMemory<const CAnimationGroupResource::Base(); // 112
			CUtlVectorBase<const CAnimationGroupResource::Base(); // 368
			CUtlVectorBase<const CAnimationGroupResource::ResetDbgInfo(); // 824
			CUtlMemory<const CAnimationGroupResource::IsGrowable(); // 823
			CUtlMemory<const CAnimationGroupResource::IsExternallyAllocated(); // 859
			CUtlMemory<const CAnimationGroupResource::IsExternallyAllocated(); // 861
			CUtlMemory<const CAnimationGroupResource::Grow(
				int num);  // 806
			CUtlVectorBase<const CAnimationGroupResource::GrowMemory(
					int num);  // 1198
			CUtlMemory<const CAnimationGroupResource::operator[](
					int i);  // 602
			CUtlVectorBase<const CAnimationGroupResource::Element(
				int i);  // 1201
			CopyConstruct<const CAnimationGroupResource*>(const CAnimationGroupResource ** pMemory,
									const CAnimationGroupResource* const& src);  // 1201
			CUtlMemory<const CAnimationGroupResource::NumAllocated(); // 1196
			CUtlVectorBase<const CAnimationGroupResource::AddToTail(
					const CAnimationGroupResource* const& src);  // 561
			CUtlMemory<CAnimationGroupResource::operator[](
					int i);  // 588
			CUtlVectorBase<CAnimationGroupResource::operator[](
					int i);  // 561
		}
		CUtlMemory<const CAnimationGroupResource::CUtlMemory(
				const CAnimationGroupResource ** pMemory,
				int numElements,
				bool bGrowable,
				uint32 nGrowable_GrowSize);  // 197
		CUtlMemory<const CAnimationGroupResource::EnsureCapacity(
				int num);  // 199
		CUtlMemoryFixedGrowable_Base<const CAnimationGroupResource::CUtlMemoryFixedGrowable_Base(
						const CAnimationGroupResource ** pFixedMemory,
						int nFixedElements,
						int nGrowSize,
						int nInitAllocationCount);  // 228
		AlignedByteArrayExplicit_t<4, const CAnimationGroupResource::AlignedByteArrayExplicit_t(); // 1597
		AlignedByteArray_t<4, const CAnimationGroupResource::AlignedByteArray_t(); // 228
		AlignedByteArrayExplicit_t<4, const CAnimationGroupResource::Base(); // 231
		CUtlMemoryFixedGrowable<const CAnimationGroupResource::CUtlMemoryFixedGrowable(
					int nGrowSize,
					int nInitSize);  // 527
		CUtlVectorBase<const CAnimationGroupResource::ResetDbgInfo(); // 530
		CUtlVectorBase<const CAnimationGroupResource::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 484
		CUtlVectorFixedGrowable<const CAnimationGroupResource::CUtlVectorFixedGrowable(
					int growSize);  // 558
		CUtlVectorBase<const CAnimationGroupResource::Count(); // 564
		CUtlMemory<const CAnimationGroupResource::Base(); // 112
		CUtlVectorBase<const CAnimationGroupResource::Base(); // 564
		CUtlVectorBase<const CAnimationGroupResource::RemoveAll(); // 1798
		AlignedByteArrayExplicit_t<4, const CAnimationGroupResource::Base(); // 237
		CUtlMemory<const CAnimationGroupResource::IsExternallyAllocated(); // 577
		CUtlMemory<const CAnimationGroupResource::ConvertToExternalMemory(
					const CAnimationGroupResource ** pMemory,
					int numElements,
					int nCopyElements,
					bool bSetGrowable,
					uint32 nGrowable_GrowSize);  // 207
		CUtlMemoryFixedGrowable_Base<const CAnimationGroupResource::Purge_FixedGrowable(
					const CAnimationGroupResource ** pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 203
		CUtlMemoryFixedGrowable_Base<const CAnimationGroupResource::Purge_FixedGrowable(
					const CAnimationGroupResource ** pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 237
		CUtlMemoryFixedGrowable<const CAnimationGroupResource::Purge(
			int numElements);  // 1799
		CUtlMemory<const CAnimationGroupResource::Base(); // 112
		CUtlVectorBase<const CAnimationGroupResource::Base(); // 368
		CUtlVectorBase<const CAnimationGroupResource::ResetDbgInfo(); // 1800
		CUtlVectorBase<const CAnimationGroupResource::Purge(); // 560
		ValidateAlignment<const CAnimationGroupResource*>(void); // 508
		CUtlMemory<const CAnimationGroupResource::Purge(); // 903
		CUtlMemory<const CAnimationGroupResource::Purge(); // 510
		CUtlMemory<const CAnimationGroupResource::~CUtlMemory(); // 191
		CUtlMemoryFixedGrowable_Base<const CAnimationGroupResource::~CUtlMemoryFixedGrowable_Base(); // 223
		CUtlMemoryFixedGrowable<const CAnimationGroupResource::~CUtlMemoryFixedGrowable(); // 562
		CUtlVectorBase<const CAnimationGroupResource::~CUtlVectorBase(); // 478
		CUtlVectorFixedGrowable<const CAnimationGroupResource::~CUtlVectorFixedGrowable(); // 569
	}
	{
		const KeyValues3* pAnimGraphResourceKV; // 575
		{
			const char* pGraphName; // 577
			HAnimationGraph hGraph; // 580
			CWeakHandle<InfoForResourceTypeIAnimationGraph>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 720
			IResourceSystem::FindExistingResourceByName(
							const CResourceName& resourceName);  // 720
			IResourceSystem::FindExistingResourceByName<7525640765879247222>(
									const CResourceName& resourceName);  // 580
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 580
			CWeakHandle<InfoForResourceTypeIAnimationGraph>::Init(
				const CWeakHandle<InfoForResourceTypeIAnimationGraph>& src);  // 273
			CWeakHandle<InfoForResourceTypeIAnimationGraph>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeIAnimationGraph>& src);  // 582
			CWeakHandle<InfoForResourceTypeIAnimationGraph>::GetData(); // 584
			CSmartPtr<IAnimGraphModelBinding, CRefCountAccessor>::Get(); // 413
			ThreadInterlockedIncrement(volatile int32* p); // 158
			Increment(int* p); // 290
			CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
			AddRef<IAnimGraphModelBinding>(IAnimGraphModelBinding* pObj); // 386
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 295
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
			Release<const IAnimGraphModelBinding>(const IAnimGraphModelBinding* pObj); // 390
			CSmartPtr<const IAnimGraphModelBinding, CRefCountAccessor>::operator=<IAnimGraphModelBinding>(
								IAnimGraphModelBinding* pObj);  // 413
			CSmartPtr<const IAnimGraphModelBinding, CRefCountAccessor>::operator=<IAnimGraphModelBinding>(
								const CSmartPtr<IAnimGraphModelBinding, CRefCountAccessor>& other);  // 586
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 295
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
			Release<IAnimGraphModelBinding>(IAnimGraphModelBinding* pObj); // 344
			CSmartPtr<IAnimGraphModelBinding, CRefCountAccessor>::~CSmartPtr(); // 586
		}
	}
	CUtlVectorBase<CAnimationGroupResource::Count(); // 533
	{
		int i; // 1554
		CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 1554
		CUtlMemory<short unsigned int, int>::operator[](
				int i);  // 602
		CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Element(
			int i);  // 1556
	}
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::FillWithValue(
			const short unsigned int& src);  // 538
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const IAnimGraphModelBinding>(const IAnimGraphModelBinding* pObj); // 370
	CSmartPtr<const IAnimGraphModelBinding, CRefCountAccessor>::operator=(
			const IAnimGraphModelBinding* pObj);  // 572
} /* size: 1409, variables: 3, inline expansions: 9 (164 bytes) */

// <003611F4> meshsystem/model_imp.cpp:600
// variable: 1
// function calls: 17
void CModel_Imp::AddEmbeddedMesh(CRenderMesh* pMesh, int nExpectedIndex)
{
	EmbeddedMeshData_t* pMeshData; // 602
	CUtlMemory<EmbeddedMeshData_t, int>::NumAllocated(); // 1143
	CUtlMemory<EmbeddedMeshData_t, int>::Base(); // 112
	CUtlVectorBase<EmbeddedMeshData_t, CUtlMemory<EmbeddedMeshData_t, int> >::Base(); // 368
	CUtlVectorBase<EmbeddedMeshData_t, CUtlMemory<EmbeddedMeshData_t, int> >::ResetDbgInfo(); // 824
	CUtlMemory<EmbeddedMeshData_t, int>::IsGrowable(); // 823
	CUtlMemory<EmbeddedMeshData_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<EmbeddedMeshData_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<EmbeddedMeshData_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<EmbeddedMeshData_t, CUtlMemory<EmbeddedMeshData_t, int> >::GrowMemory(
			int num);  // 1145
	CUtlMemory<EmbeddedMeshData_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<EmbeddedMeshData_t, CUtlMemory<EmbeddedMeshData_t, int> >::Element(
		int i);  // 1148
	EmbeddedMeshData_t::EmbeddedMeshData_t(); // 1479
	Construct<EmbeddedMeshData_t>(EmbeddedMeshData_t* pMemory); // 1148
	CUtlVectorBase<EmbeddedMeshData_t, CUtlMemory<EmbeddedMeshData_t, int> >::AddToTail(); // 1156
	CUtlMemory<EmbeddedMeshData_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<EmbeddedMeshData_t, CUtlMemory<EmbeddedMeshData_t, int> >::Element(
		int i);  // 1156
	CUtlVectorBase<EmbeddedMeshData_t, CUtlMemory<EmbeddedMeshData_t, int> >::AddToTailGetPtr(); // 602
} /* size: 430, variables: 1, inline expansions: 17 (1558 bytes) */

// <00361164> meshsystem/model_imp.cpp:610
// variables: 2
void CModel_Imp::AddEmbeddedAnimData(CAnimationGroupResource* pAnimData)
{
	const char   __FUNCTION__; // 27624
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 612
	}
} /* size: 0, variables: 1 */

// <00360FEE> meshsystem/model_imp.cpp:619
// variables: 2
// function calls: 5
void CModel_Imp::AddEmbeddedPhysData(const CPhysAggregateDataHandle& pPhys)
{
	const char   __FUNCTION__; // 27624
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 621
	}
	CPhysAggregateDataHandle::Get(); // 621
	CPhysAggregateDataHandle::Get(); // 143
	CPhysAggregateDataHandle::Clear(); // 205
	CPhysAggregateDataHandle::Set(
		CPhysAggregateData* pData);  // 143
	CPhysAggregateDataHandle::operator=(
			const CPhysAggregateDataHandle& rhs);  // 622
} /* size: 0, variables: 1, inline expansions: 5 (274 bytes) */

// <0035E5FC> meshsystem/model_imp.cpp:628
// variables: 28
// function calls: 158
void CModel_Imp::InitFromBuilder(CModelBuilder* pBuilder)
{
	const char   __FUNCTION__; // 27521
	int nMeshes; // 652
	int nAnims; // 667
	int nMeshGroups; // 675
	int nMaterialGroups; // 684
	int nTables; // 705
	int nTotalIndices; // 708
	int nIndex; // 716
	int nBoneFlexDrivers; // 733
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 642
	}
	{
		int m; // 656
		CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int this,
				int i);  // 658
		ThreadInterlockedIncrement(volatile int32* p); // 158
		Increment(int* p); // 199
		CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 329
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::AddRef(); // 21
		AddRef<CRenderMesh>(CRenderMesh* pObj); // 366
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 204
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
		Release<CRenderMesh>(CRenderMesh* pObj); // 370
		CSmartPtr<CRenderMesh, CRefCountAccessor>::operator=(
				CRenderMesh* pObj);  // 658
		CUtlMemory<long long unsigned int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::operator[](
				int i);  // 659
		CUtlMemory<long long unsigned int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::operator[](
				int i);  // 659
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 588
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator[](
				int i);  // 660
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 588
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator[](
				int i);  // 660
	}
	{
		int a; // 669
		CUtlMemory<CAnimationGroupResource::operator[](
				int i);  // 588
		CUtlVectorBase<CAnimationGroupResource::operator[](
				int i);  // 671
		CUtlMemory<CAnimationGroupResource::operator[](
				int i);  // 588
		CUtlVectorBase<CAnimationGroupResource::operator[](
				int i);  // 671
	}
	{
		int g; // 677
		CUtlString::Get(); // 679
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 679
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 679
		CUtlString::operator=(
				const char* src);  // 679
	}
	{
		int g; // 686
		{
			int nMaterials; // 690
			{
				int m; // 692
				CUtlMemory<CBuilderMaterialGroup, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::operator[](
						int i);  // 694
				CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2 this,
						int i);  // 694
				CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2 this,
						int i);  // 694
				CUtlMemory<CModelMaterialGroup, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> >::operator[](
						int i);  // 694
				ThreadInterlockedIncrement(volatile int32* p); // 576
				CInterlockedIntT<int, 4>::operator++(); // 604
				CStrongHandle<InfoForResourceTypeIMaterial2>::Init(
					const CStrongHandle<InfoForResourceTypeIMaterial2>& src);  // 666
				CStrongHandle<InfoForResourceTypeIMaterial2>::operator=(
						const CStrongHandle<InfoForResourceTypeIMaterial2>& src);  // 694
			}
			CUtlString::Get(); // 688
			CUtlMemory<CBuilderMaterialGroup, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::operator[](
					int i);  // 688
			CUtlMemory<CModelMaterialGroup, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> >::operator[](
					int i);  // 688
			CUtlString::operator=(
					const char* src);  // 688
			CUtlMemory<CBuilderMaterialGroup, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::operator[](
					int i);  // 690
			Count(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMat this); // 690
			CUtlMemory<CModelMaterialGroup, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> >::operator[](
					int i);  // 691
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 706
	}
	{
		int t; // 709
		CUtlMemory<short unsigned int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
				int i);  // 711
		CUtlMemory<CUtlVector<short int, CUtlMemory<short int, int> >, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<short int, CUtlMemory<short int, int> >, CUtlMemory<CUtlVector<short int, CUtlMemory<shor this,
				int i);  // 712
		CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 712
	}
	{
		int t; // 717
		{
			int i; // 719
			CUtlMemory<CUtlVector<short int, CUtlMemory<short int, int> >, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CUtlVector<short int, CUtlMemory<short int, int> >, CUtlMemory<CUtlVector<short int, CUtlMemory<shor this,
					int i);  // 719
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 719
			CUtlMemory<short int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::Element(
				int i);  // 721
			CUtlMemory<short int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
					int i);  // 721
		}
	}
	{
		int i; // 727
		CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 727
		CUtlMemory<float, int>::operator[](
				int i);  // 588
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
				int i);  // 729
		CUtlMemory<float, int>::operator[](
				int i);  // 588
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
				int i);  // 729
	}
	{
		int b; // 735
		{
			const BuilderModelBoneFlexDriver_t* pSrcDriver; // 737
			CBoneFlexDriver* pDstDriver; // 738
			int nControls; // 742
			{
				int c; // 744
				{
					const BuilderModelBoneFlexDriverControl_t* pSrcControl; // 746
					CBoneFlexDriverControl* pDstControl; // 747
					CUtlMemory<BuilderModelBoneFlexDriverControl_t, int>::operator[](
							int i);  // 595
					CUtlVectorBase<BuilderModelBoneFlexDriverControl_t, CUtlMemory<BuilderModelBoneFlexDriverControl_t, int> >::operator[](
							int i);  // 746
					CUtlMemory<CBoneFlexDriverControl, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CBoneFlexDriverControl, CUtlMemory<CBoneFlexDriverControl, int> >::operator[](
							int i);  // 747
					CUtlString::Get(); // 750
					CUtlString::operator=(
							const char* src);  // 750
					CUtlString::Get(); // 751
					CUtlStringToken::CUtlStringToken(); // 121
					{
					}
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 119
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 751
				}
			}
			CUtlString::Get(); // 739
			CUtlMemory<BuilderModelBoneFlexDriver_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<BuilderModelBoneFlexDriver_t, CUtlMemory<BuilderModelBoneFlexDriver_t, int> >::operator[](
					int i);  // 737
			CUtlMemory<CBoneFlexDriver, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CBoneFlexDriver, CUtlMemory<CBoneFlexDriver, int> >::operator[](
					int i);  // 738
			CUtlString::operator=(
					const char* src);  // 739
			CUtlStringToken::CUtlStringToken(); // 121
			{
			}
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 119
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 740
			CUtlString::Get(); // 740
			CUtlVectorBase<BuilderModelBoneFlexDriverControl_t, CUtlMemory<BuilderModelBoneFlexDriverControl_t, int> >::Count(); // 742
		}
	}
	CUtlString::Get(); // 630
	CUtlString::operator=(
			const char* src);  // 630
	Vector::operator=(
			const Vector& vOther);  // 632
	Vector::operator=(
			const Vector& vOther);  // 633
	Vector::operator=(
			const Vector& vOther);  // 634
	Vector::operator=(
			const Vector& vOther);  // 635
	Vector::operator=(
			const Vector& vOther);  // 637
	CUtlString::IsEmpty(); // 642
	CUtlString::Get(); // 646
	CUtlMemory<unsigned char, int>::NumAllocated(); // 782
	CUtlMemory<unsigned char, int>::IsGrowable(); // 823
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 859
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 861
	CUtlMemory<unsigned char, int>::Grow(
		int num);  // 806
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 368
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::SetCount(
		int count);  // 655
	CPhysAggregateDataHandle::Get(); // 143
	CPhysAggregateDataHandle::Clear(); // 205
	CPhysAggregateDataHandle::Set(
		CPhysAggregateData* pData);  // 143
	CPhysAggregateDataHandle::operator=(
			const CPhysAggregateDataHandle& rhs);  // 664
	CUtlVectorBase<CAnimationGroupResource::Count(); // 667
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 675
	CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::Count(); // 684
	Count(const CUtlVectorBase<CUtlVector<short int, CUtlMemory<short int, int> >, CUtlMemory<CUtlVector<short int, CUtlMemor this); // 705
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 726
	CUtlVectorBase<BuilderModelBoneFlexDriver_t, CUtlMemory<BuilderModelBoneFlexDriver_t, int> >::Count(); // 733
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
			const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& src);  // 757
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 759
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 764
	CUtlMemory<Vector, int>::Base(); // 112
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 766
	CModel_Imp::SetupRuntimeDerivedData(); // 769
	CUtlMemory<int, int>::Base(); // 112
	CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 761
	CUtlMemory<int, int>::Base(); // 112
	CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 102
	CUtlVectorBase<int, CUtlMemory<int, int> >::begin(); // 1344
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<int>(const int* pFrom,
				const int* pFromEnd,
				int* pTo);  // 173
	UtlTraitsCopyRange<int>(const int* pFrom,
				const int* pFromEnd,
				int* pTo);  // 1344
	CUtlVectorBase<int, CUtlMemory<int, int> >::CopyArray(
			const int* pArray,
			int size);  // 761
} /* size: 0, variables: 9, inline expansions: 65 (3375 bytes) */

// <0035DC75> meshsystem/model_imp.cpp:775
// variables: 5
// function calls: 34
void CModel_Imp::RegisterAdditionalExtRefs(ResourceHandle_t hModel, IRD_RegisterResourceDataUtils* pUtils)
{
	CUtlSymbolTable resourceNames; // 777
	{
		CKeyValues3Iterator it; // 778
		{
			const char* pResourceName; // 782
			CKeyValues3Iterator::operator->(); // 782
		}
		CKeyValues3Iterator::operator->(); // 780
		KeyValues3::GetAllFlags(); // 892
		KeyValues3::HasFlag(
			KeyValues3Flag_t nFlag);  // 780
		RemoveAll(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 1798
		AlignedByteArrayExplicit_t<4, CKeyValues3Iterator::StackEntry_t, 8>::Base(); // 237
		CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::IsExternallyAllocated(); // 577
		CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::ConvertToExternalMemory(
					StackEntry_t* pMemory,
					int numElements,
					int nCopyElements,
					bool bSetGrowable,
					uint32 nGrowable_GrowSize);  // 207
		CUtlMemoryFixedGrowable_Base<CKeyValues3Iterator::StackEntry_t, int>::Purge_FixedGrowable(
					StackEntry_t* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 203
		CUtlMemoryFixedGrowable_Base<CKeyValues3Iterator::StackEntry_t, int>::Purge_FixedGrowable(
					StackEntry_t* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 237
		CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int>::Purge(
			int numElements);  // 1799
		CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 368
		ResetDbgInfo(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 1800
		Purge(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 560
		ValidateAlignment<CKeyValues3Iterator::StackEntry_t>(void); // 508
		CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::Purge(); // 903
		CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::Purge(); // 510
		CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::~CUtlMemory(); // 191
		CUtlMemoryFixedGrowable_Base<CKeyValues3Iterator::StackEntry_t, int>::~CUtlMemoryFixedGrowable_Base(); // 223
		CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int>::~CUtlMemoryFixedGrowable(); // 562
		~CUtlVectorBase(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 478
		CUtlVectorFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4>::~CUtlVectorFixedGrowable(); // 284
		CKeyValues3Iterator::~CKeyValues3Iterator(); // 785
	}
	{
		UtlSymId_t iResource; // 789
		{
			const char* pResourceName; // 791
			CUtlSymbol::CUtlSymbol(
					UtlSymId_t id);  // 791
			CUtlMemory<CStrongHandleVoid, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::operator[](
					int i);  // 792
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 792
		}
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
		CUtlSymbolTable::GetNumStrings(); // 789
	}
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
	CUtlSymbolTable::GetNumStrings(); // 787
} /* size: 561, variables: 1, inline expansions: 2 (0 bytes) */

// <003759EF> meshsystem/model_imp.cpp:799
void CModel_Imp::SetupRuntimeDerivedData()
{
} /* size: 0 */

// <0035D273> meshsystem/model_imp.cpp:816
// variables: 11
// function calls: 36
void CModel_Imp::SetupBoneConstraints()
{
	const CRenderMesh* pMesh0; // 818
	const KeyValues3* pBoneConstraintList; // 830
	{
		CBaseConstraint* pConstraint; // 821
		const CUtlVector<CBaseConstraint*, CUtlMemory<CBaseConstraint*, int> >& __for_range; // 46652
		const_iterator __for_begin; // 43242
		const_iterator __for_end; // 43242
		CUtlMemory<CBaseConstraint::Base(); // 113
		CUtlVectorBase<CBaseConstraint::Base(); // 103
		CUtlVectorBase<CBaseConstraint::begin(); // 821
		CUtlVectorBase<CBaseConstraint::Count(); // 105
		CUtlVectorBase<CBaseConstraint::end(); // 821
		CUtlMemory<const CBoneConstraintBase::NumAllocated(); // 1247
		CUtlMemory<const CBoneConstraintBase::operator[](
				int i);  // 602
		CUtlVectorBase<const CBoneConstraintBase::Element(
			int i);  // 1252
		Construct<const CBoneConstraintBase*, const CBoneConstraintBase*>(const CBoneConstraintBase ** pMemory); // 1252
		CUtlMemory<const CBoneConstraintBase::Base(); // 112
		CUtlVectorBase<const CBoneConstraintBase::Base(); // 368
		CUtlVectorBase<const CBoneConstraintBase::ResetDbgInfo(); // 824
		CUtlVectorBase<const CBoneConstraintBase::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<const CBoneConstraintBase::AddToTail(
				const CBoneConstraintBase  *& src);  // 825
	}
	{
		const int  nBoneConstraintCount; // 833
		{
			int nAnimConstraint; // 835
			{
				const KeyValues3* pBoneConstraintKV3; // 837
				CBoneConstraintBase* pBoneConstraint; // 839
				CKV3TransferLoadContext loadContext; // 840
				CUtlMemory<CBoneConstraintBase::NumAllocated(); // 1196
				CUtlMemory<CBoneConstraintBase::Base(); // 112
				CUtlVectorBase<CBoneConstraintBase::Base(); // 368
				CUtlVectorBase<CBoneConstraintBase::ResetDbgInfo(); // 824
				CUtlMemory<CBoneConstraintBase::IsGrowable(); // 823
				CUtlMemory<CBoneConstraintBase::IsExternallyAllocated(); // 859
				CUtlMemory<CBoneConstraintBase::IsExternallyAllocated(); // 861
				CUtlMemory<CBoneConstraintBase::Grow(
					int num);  // 806
				CUtlVectorBase<CBoneConstraintBase::GrowMemory(
						int num);  // 1198
				CUtlMemory<CBoneConstraintBase::operator[](
						int i);  // 602
				CUtlVectorBase<CBoneConstraintBase::Element(
					int i);  // 1201
				CopyConstruct<CBoneConstraintBase*>(CBoneConstraintBase** pMemory,
									CBoneConstraintBase* const& src);  // 1201
				CUtlVectorBase<CBoneConstraintBase::AddToTail(
						CBoneConstraintBase* const& src);  // 846
				CUtlMemory<const CBoneConstraintBase::NumAllocated(); // 1196
				CUtlMemory<const CBoneConstraintBase::operator[](
						int i);  // 602
				CUtlVectorBase<const CBoneConstraintBase::Element(
					int i);  // 1201
				CopyConstruct<const CBoneConstraintBase*>(const CBoneConstraintBase ** pMemory,
										const CBoneConstraintBase* const& src);  // 1201
				CUtlMemory<const CBoneConstraintBase::Base(); // 112
				CUtlVectorBase<const CBoneConstraintBase::Base(); // 368
				CUtlVectorBase<const CBoneConstraintBase::ResetDbgInfo(); // 824
				CUtlVectorBase<const CBoneConstraintBase::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<const CBoneConstraintBase::AddToTail(
						const CBoneConstraintBase* const& src);  // 847
			}
		}
	}
} /* size: 867, variables: 2 */

// <0035C9CA> meshsystem/model_imp.cpp:857
// variables: 5
// function calls: 38
void CModel_Imp::AddStateDrivenMorph(int nGroupIndex, uint32 nGroupChoice, const char* pMorphControllerName)
{
	LocalFlexController_t nMorph; // 859
	int nIndexForMorph; // 863
	StateDrivenMorph_t& groupInfo; // 870
	Activator_t* pActivator; // 871
	{
		int i; // 208
		CUtlVectorBase<StateDrivenMorph_t, CUtlMemory<StateDrivenMorph_t, int> >::Count(); // 208
		CUtlMemory<StateDrivenMorph_t, int>::operator[](
				int i);  // 609
		CUtlVectorBase<StateDrivenMorph_t, CUtlMemory<StateDrivenMorph_t, int> >::Element(
			int i);  // 210
	}
	CUtlVectorBase<StateDrivenMorph_t, CUtlMemory<StateDrivenMorph_t, int> >::FindByField<LocalFlexController_t, StateDrivenMorph_t>(
								LocalFlexController_t StateDrivenMorph_t::* pField,
								LocalFlexController_t matchValue);  // 863
	CUtlMemory<StateDrivenMorph_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<StateDrivenMorph_t, CUtlMemory<StateDrivenMorph_t, int> >::operator[](
			int i);  // 870
	CUtlMemory<StateDrivenMorph_t::Activator_t, int>::NumAllocated(); // 1143
	CUtlMemory<StateDrivenMorph_t::Activator_t, int>::Base(); // 112
	CUtlVectorBase<StateDrivenMorph_t::Activator_t, CUtlMemory<StateDrivenMorph_t::Activator_t, int> >::Base(); // 368
	CUtlVectorBase<StateDrivenMorph_t::Activator_t, CUtlMemory<StateDrivenMorph_t::Activator_t, int> >::ResetDbgInfo(); // 824
	CUtlMemory<StateDrivenMorph_t::Activator_t, int>::IsGrowable(); // 823
	CUtlMemory<StateDrivenMorph_t::Activator_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<StateDrivenMorph_t::Activator_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<StateDrivenMorph_t::Activator_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<StateDrivenMorph_t::Activator_t, CUtlMemory<StateDrivenMorph_t::Activator_t, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<StateDrivenMorph_t::Activator_t, CUtlMemory<StateDrivenMorph_t::Activator_t, int> >::AddToTail(); // 1156
	CUtlMemory<StateDrivenMorph_t::Activator_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<StateDrivenMorph_t::Activator_t, CUtlMemory<StateDrivenMorph_t::Activator_t, int> >::Element(
		int i);  // 1156
	CUtlVectorBase<StateDrivenMorph_t::Activator_t, CUtlMemory<StateDrivenMorph_t::Activator_t, int> >::AddToTailGetPtr(); // 871
	CUtlMemory<StateDrivenMorph_t, int>::NumAllocated(); // 1143
	CUtlMemory<StateDrivenMorph_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<StateDrivenMorph_t, CUtlMemory<StateDrivenMorph_t, int> >::Element(
		int i);  // 1148
	CUtlMemory<StateDrivenMorph_t::Activator_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<StateDrivenMorph_t::Activator_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<StateDrivenMorph_t::Activator_t, CUtlMemory<StateDrivenMorph_t::Activator_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<StateDrivenMorph_t::Activator_t, CUtlMemory<StateDrivenMorph_t::Activator_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<StateDrivenMorph_t::Activator_t, CUtlMemory<StateDrivenMorph_t::Activator_t, int> >::CUtlVector(); // 291
	StateDrivenMorph_t::StateDrivenMorph_t(); // 1479
	Construct<StateDrivenMorph_t>(StateDrivenMorph_t* pMemory); // 1148
	CUtlMemory<StateDrivenMorph_t, int>::IsGrowable(); // 823
	CUtlMemory<StateDrivenMorph_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<StateDrivenMorph_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<StateDrivenMorph_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<StateDrivenMorph_t, CUtlMemory<StateDrivenMorph_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<StateDrivenMorph_t, CUtlMemory<StateDrivenMorph_t, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<StateDrivenMorph_t, CUtlMemory<StateDrivenMorph_t, int> >::AddToTail(); // 866
	CUtlMemory<StateDrivenMorph_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<StateDrivenMorph_t, CUtlMemory<StateDrivenMorph_t, int> >::operator[](
			int i);  // 867
} /* size: 795, variables: 4, inline expansions: 35 (2232 bytes) */

// <0035C30E> meshsystem/model_imp.cpp:879
// variables: 13
// function calls: 9
void CModel_Imp::SetupStateDrivenMorphs()
{
	{
		const KeyValues3* pMaterialGroupMorphs; // 881
		{
			int iEntry; // 883
			{
				const KeyValues3* pBodyGroupMorph; // 885
				const char* pBodyGroup; // 886
				int nBodyGroupChoice; // 887
				const char* pMorphControllerName; // 888
				int nBodyGroupIndex; // 890
				CKV3MemberName::CKV3MemberName<15>(
							const char& str);  // 886
				CKV3MemberName::CKV3MemberName<17>(
							const char& str);  // 887
				CKV3MemberName::CKV3MemberName<11>(
							const char& str);  // 888
			}
		}
	}
	{
		const KeyValues3* pMaterialGroupMorphs; // 898
		{
			int iEntry; // 900
			{
				const KeyValues3* pBodyGroupMorph; // 902
				const char* pMaterialGroupName; // 903
				const char* pMorphControllerName; // 904
				CUtlStringToken materialGroupToken; // 906
				CKV3MemberName::CKV3MemberName<19>(
							const char& str);  // 903
				CUtlStringToken::GetHashCode(); // 910
				CKV3MemberName::CKV3MemberName<11>(
							const char& str);  // 904
				CUtlStringToken::CUtlStringToken(); // 121
				{
				}
				MakeStringToken(const char* pString,
						bool bWriteToDatabase);  // 119
				MakeStringToken(const char* pString,
						bool bWriteToDatabase);  // 906
			}
		}
	}
} /* size: 0 */

// <0035AEC3> meshsystem/model_imp.cpp:918
// variables: 10
// function calls: 73
void CModel_Imp::SetupVisemes()
{
	{
		const KeyValues3* pVisemes; // 923
		{
			int i; // 925
			{
				const KeyValues3* pViseme; // 927
				CUtlHashtable<int, float, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, float>, int> >& morphs; // 933
				{
					int j; // 934
					{
						const char* pMorphName; // 936
						int flexController; // 937
						CUtlStringToken::CUtlStringToken(); // 121
						{
						}
						MakeStringToken(const char* pString,
								bool bWriteToDatabase);  // 119
						MakeStringToken(const char* pString,
								bool bWriteToDatabase);  // 151
						KV3MakeLowerHash(const char* pStr); // 23
						CKV3MemberName::CKV3MemberName(
								const char* pString);  // 938
						Mix32HashFunctor::operator(
								uint32 n);  // 249
						CUtlMemory<CUtlHashtableEntry<int, float>, int>::Base(); // 650
						IdealIndex(uint32_if32BitStorage h,
								uint32 m);  // 653
						CUtlMemory<CUtlHashtableEntry<int, float>, int>::Count(); // 651
						CUtlHashtableEntry<int, float>::IdealIndex(
								uint32 slotmask);  // 656
						CUtlHashtableEntry<int, float>::IdealIndex(
								uint32 slotmask);  // 667
						DoLookup<int>(const CUtlHashtable<int, float, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHash this,
								int x,
								unsigned int h,
								handle_t* pPreviousInChain);  // 716
						CUtlMemory<CUtlHashtableEntry<int, float>, int>::operator[](
								int i);  // 720
						CUtlKeyValuePair<int, float>::CUtlKeyValuePair<int, float>(
										const int& k,
										const float& v);  // 1514
						Construct<CUtlKeyValuePair<int, float>, int&, float&>(CUtlKeyValuePair<int, float>* pMemory); // 720
						DoInsert<int>(const CUtlHashtable<int, float, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableE this,
								int k,
								Arg_t v,
								unsigned int h,
								bool* pDidInsert);  // 714
						DoInsert<int>(const CUtlHashtable<int, float, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableE this,
								int k,
								Arg_t v,
								unsigned int h,
								bool* pDidInsert);  // 249
						Insert(const CUtlHashtable<int, float, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableE this,
							KeyArg_t k,
							ValueArg_t v,
							bool* pDidInsert);  // 938
					}
				}
				CUtlString::CUtlString(
						const char* pString);  // 931
				KeyValues3::Internal_Type(); // 90
				KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
				KeyValues3::GetType(); // 260
				KeyValues3::IsTable(); // 928
				Count(const CUtlVectorBase<CUtlHashtable<int, float, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtl this); // 931
				CUtlString::Get(); // 441
				CUtlString::operator char const*(); // 249
				{
					uint32 c; // 354
				}
				StringHashFunctor::operator(
						const char* s);  // 249
				CUtlMemory<CUtlHashtableEntry<CUtlString, int>, int>::Base(); // 650
				CUtlMemory<CUtlHashtableEntry<CUtlString, int>, int>::Count(); // 651
				IdealIndex(uint32_if32BitStorage h,
						uint32 m);  // 653
				CUtlHashtableEntry<CUtlString, int>::IdealIndex(
						uint32 slotmask);  // 656
				CUtlString::Get(); // 441
				CUtlString::operator char const*(); // 670
				CUtlHashtableEntry<CUtlString, int>::IdealIndex(
						uint32 slotmask);  // 667
				V_strcmp(const char* s1,
					const char* s2);  // 127
				StringEqualFunctor::operator(
						const char* a,
						const char* b);  // 670
				DoLookup<const CUtlString&>(const CUtlHashtable<CUtlString, int, DefaultHashFunctor<CUtlString>, DefaultEqualFunctor<CUtlString>, undefined_t,  this,
								const CUtlString& x,
								unsigned int h,
								handle_t* pPreviousInChain);  // 716
				CUtlMemory<CUtlHashtableEntry<CUtlString, int>, int>::operator[](
						int i);  // 720
				CUtlString::Get(); // 354
				CUtlString::CUtlString(
						const CUtlString& string);  // 64
				CUtlKeyValuePair<CUtlString, int>::CUtlKeyValuePair<CUtlString, int>(
									const CUtlString& k,
									const int& v);  // 1514
				Construct<CUtlKeyValuePair<CUtlString, int>, const CUtlString&, int&>(CUtlKeyValuePair<CUtlString, int>* pMemory); // 720
				DoInsert<const CUtlString&>(const CUtlHashtable<CUtlString, int, DefaultHashFunctor<CUtlString>, DefaultEqualFunctor<CUtlString>, undefined_t, CUtlMe this,
								const CUtlString& k,
								Arg_t v,
								unsigned int h,
								bool* pDidInsert);  // 714
				DoInsert<const CUtlString&>(const CUtlHashtable<CUtlString, int, DefaultHashFunctor<CUtlString>, DefaultEqualFunctor<CUtlString>, undefined_t, CUtlMe this,
								const CUtlString& k,
								Arg_t v,
								unsigned int h,
								bool* pDidInsert);  // 249
				Insert(const CUtlHashtable<CUtlString, int, DefaultHashFunctor<CUtlString>, DefaultEqualFunctor<CUtlString>, undefined_t, CUtlMe this,
					KeyArg_t k,
					ValueArg_t v,
					bool* pDidInsert);  // 931
				CUtlString::~CUtlString(); // 931
				NumAllocated(const CUtlMemory<CUtlHashtable<int, float, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemo this); // 1143
				Base(const CUtlMemory<CUtlHashtable<int, float, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUt this); // 112
				Base(const CUtlVectorBase<CUtlHashtable<int, float, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory this); // 368
				ResetDbgInfo(const CUtlVectorBase<CUtlHashtable<int, float, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory this); // 824
				IsGrowable(const CUtlMemory<CUtlHashtable<int, float, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemo this); // 823
				IsExternallyAllocated(const CUtlMemory<CUtlHashtable<int, float, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemo this); // 859
				IsExternallyAllocated(const CUtlMemory<CUtlHashtable<int, float, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemo this); // 861
				Grow(const CUtlMemory<CUtlHashtable<int, float, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUt this,
					int num);  // 806
				GrowMemory(const CUtlVectorBase<CUtlHashtable<int, float, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory this,
						int num);  // 1145
				operator[](const CUtlMemory<CUtlHashtable<int, float, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUt this,
						int i);  // 602
				Element(const CUtlVectorBase<CUtlHashtable<int, float, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory this,
					int i);  // 1148
				CUtlMemory<CUtlHashtableEntry<int, float>, int>::ValidateGrowSize(); // 475
				CUtlMemory<CUtlHashtableEntry<int, float>, int>::CUtlMemory(
						int nGrowSize,
						int nInitAllocationCount);  // 178
				Init(const CUtlHashtable<int, float, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableE this); // 178
				CUtlHashtable(const CUtlHashtable<int, float, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableE this,
						int minimumSize);  // 1479
				Construct<CUtlHashtable<int, float> >(CUtlHashtable<int, float, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<i pMemory); // 1148
				AddToTail(const CUtlVectorBase<CUtlHashtable<int, float, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory this); // 933
				operator[](const CUtlMemory<CUtlHashtable<int, float, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUt this,
						int i);  // 588
				operator[](const CUtlVectorBase<CUtlHashtable<int, float, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory this,
						int i);  // 933
			}
		}
	}
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<CUtlString, int>, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<CUtlString, int>, int>::Count(); // 897
			CUtlHashtableEntry<CUtlString, int>::IsValid(); // 899
			CUtlHashtableEntry<CUtlString, int>::MarkInvalid(); // 901
			CUtlString::~CUtlString(); // 51
			CUtlKeyValuePair<CUtlString, int>::~CUtlKeyValuePair(); // 1526
			Destruct<CUtlKeyValuePair<CUtlString, int> >(CUtlKeyValuePair<CUtlString, int>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<CUtlString, int, DefaultHashFunctor<CUtlString>, DefaultEqualFunctor<CUtlString>, undefined_t, CUtlMe this); // 921
} /* size: 0, inline expansions: 1 (130 bytes) */

