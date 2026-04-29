
//
// resourcesystem/resourcemanifest.cpp
//
//	referenced by: libengine2.so
//
//	functions: 63
//

// <023F64C6> resourcesystem/resourcemanifest.cpp:41
// variables: 26
// function calls: 130
void CResourceManifestTypeManager::AllocateResource(ResourceHandle_t hResource, ResourceId_t nId, const ResourceFileHeader_t* pHeader, IRD_RegisterResourceDataUtils* pUtils)
{
	CResourceManifestFromDiskInternal* pManifestInternal; // 43
	const char   __FUNCTION__; // 59147
	{
		const ResourceManifestOld_t* pManifestData; // 50
		int nCount; // 58
		{
			int i; // 60
			{
				const char* pResourceName; // 62
				CResourceName resourceName; // 63
				CUtlMemory<CStrongHandleVoid, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::operator[](
						int i);  // 64
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 318
				CResourceName::~CResourceName(); // 65
				ResolveOffset(const int32* pOffset); // 304
				CResourceArrayBase::GetRawPtr(); // 416
				CResourceArray<CResourceString>::GetPtr(); // 379
				CResourceArray<CResourceString>::operator[](
						int nIndex);  // 62
				ResolveOffset(const int32* pOffset); // 160
				CResourcePointerBase::GetRawPtr(); // 706
				ResolveOffset(const int32* pOffset); // 160
				CResourcePointerBase::GetRawPtr(); // 712
				CResourceString::operator char const*(); // 62
			}
		}
		CResourceArrayBase::Count(); // 58
		CRD_RegisterResourceDataUtils::SetDataRegistrationFailed(); // 54
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 180
		ResourceGetName(ResourceHandle_t hResource,
				CResourceName* pTarget);  // 196
		CResourceNameGetter::CResourceNameGetter(
					ResourceHandle_t hResource);  // 53
		CResourceName::Get(); // 53
		Color::SetColor(
			int _r,
			int _g,
			int _b,
			int _a);  // 50
		Color::Color(
			int _r,
			int _g,
			int _b,
			int _a);  // 53
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 53
	}
	{
		const ResourceManifestNew_t* pManifestData; // 74
		int nCount; // 75
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 72
		}
		{
			const ResourceManifestGroup_t* pGroup; // 82
			int nResourcesInGroup; // 83
			{
				int iResource; // 85
				{
					const char* pResourceName; // 87
					CResourceName resourceName; // 88
					CUtlMemory<CStrongHandleVoid, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::operator[](
							int i);  // 89
					CBufferString::~CBufferString(); // 587
					CBufferStringN<200>::~CBufferStringN(); // 318
					CResourceName::~CResourceName(); // 90
					ResolveOffset(const int32* pOffset); // 304
					CResourceArrayBase::GetRawPtr(); // 416
					CResourceArray<CResourceString>::GetPtr(); // 379
					CResourceArray<CResourceString>::operator[](
							int nIndex);  // 87
					ResolveOffset(const int32* pOffset); // 160
					CResourcePointerBase::GetRawPtr(); // 706
					ResolveOffset(const int32* pOffset); // 160
					CResourcePointerBase::GetRawPtr(); // 712
					CResourceString::operator char const*(); // 87
				}
			}
			ResolveOffset(const int32* pOffset); // 304
			CResourceArrayBase::GetRawPtr(); // 416
			CResourceArray<ResourceManifestGroup_t>::GetPtr(); // 379
			CResourceArray<ResourceManifestGroup_t>::operator[](
					int nIndex);  // 82
			CResourceArrayBase::Count(); // 83
		}
		{
			CLoadingResource* pLoadingResource; // 94
			CResourceManifest* pTargetManifest; // 97
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 95
			}
			{
				int iGroup; // 98
				{
					const ResourceManifestGroup_t* pGroup; // 100
					int nResourcesInGroup; // 101
					CUtlVectorFixedGrowable<char const*, 16> resourcePtrs; // 103
					{
						int iResource; // 106
						{
							const char* pResourceName; // 108
							ResolveOffset(const int32* pOffset); // 160
							CResourcePointerBase::GetRawPtr(); // 706
							ResolveOffset(const int32* pOffset); // 160
							CResourcePointerBase::GetRawPtr(); // 712
							CResourceString::operator char const*(); // 108
							ResolveOffset(const int32* pOffset); // 304
							CResourceArrayBase::GetRawPtr(); // 416
							CResourceArray<CResourceString>::GetPtr(); // 379
							CResourceArray<CResourceString>::operator[](
									int nIndex);  // 108
							CUtlMemory<char const::operator[](
									int i);  // 588
							CUtlVectorBase<char const::operator[](
									int i);  // 109
						}
					}
					{
						ResourceManifestCreationInfo_t info; // 114
						CPathBufferString nameBuf; // 120
						ResourceManifestCreationInfo_t::ResourceManifestCreationInfo_t(); // 114
						CUtlMemory<char const::Base(); // 112
						CUtlVectorBase<char const::Base(); // 116
						CLoadingResource::IsLoadingStreamingData(); // 117
						CUtlSymbolLarge::String(); // 148
						CBufferString::Append(
							const char* pString,
							int nChars,
							bool bExact);  // 148
						ResourceGetName(ResourceNameHandle_t hResourceName,
								CBufferString* pOutBuffer,
								bool bAppend);  // 172
						ResourceGetName(ResourceHandle_t hResource,
								CBufferString* pOutBuffer,
								bool bAppend);  // 121
						CLoadingResource::GetPriority(); // 118
						CBufferString::InitMinConstruct(
								bool bGrowable);  // 712
						CBufferString::CBufferString(); // 591
						CBufferStringN<200>::CBufferStringN(); // 120
						CBufferString::ReadBuffer(); // 1374
						CBufferString::ReadBuffer(); // 781
						CBufferString::operator char const*(); // 122
						V_GetFileName(const char* path); // 122
						CLoadingResource::RegisterAssociatedManifest(
										HResourceManifest hManifest);  // 127
						CBufferString::~CBufferString(); // 587
						CBufferStringN<200>::~CBufferStringN(); // 130
					}
					CUtlVectorBase<char const::RemoveMultipleFromTail(
								int num);  // 1323
					CUtlMemory<char const::Base(); // 112
					CUtlVectorBase<char const::Base(); // 368
					CUtlVectorBase<char const::ResetDbgInfo(); // 824
					CUtlVectorBase<char const::GrowMemory(
							int num);  // 784
					CUtlVectorBase<char const::GrowVector(
							int num);  // 1445
					CUtlVectorBase<char const::InsertMultipleBefore(
								int elem,
								int num);  // 1437
					CUtlVectorBase<char const::InsertMultipleBefore(
								int elem,
								int num);  // 1294
					CUtlVectorBase<char const::AddMultipleToTail(
								int num);  // 1319
					CUtlVectorBase<char const::SetCount(
						int count);  // 104
					CUtlVectorBase<char const::RemoveAll(); // 1798
					AlignedByteArrayExplicit_t<16, char const::Base(); // 237
					CUtlMemory<char const::IsExternallyAllocated(); // 577
					CUtlMemory<char const::ConvertToExternalMemory(
								const char ** pMemory,
								int numElements,
								int nCopyElements,
								bool bSetGrowable,
								uint32 nGrowable_GrowSize);  // 207
					CUtlMemoryFixedGrowable_Base<char const::Purge_FixedGrowable(
								const char ** pFixedMemory,
								int nFixedElements,
								int nPurgeToCount);  // 203
					CUtlMemoryFixedGrowable_Base<char const::Purge_FixedGrowable(
								const char ** pFixedMemory,
								int nFixedElements,
								int nPurgeToCount);  // 237
					CUtlMemoryFixedGrowable<char const::Purge(
						int numElements);  // 1799
					CUtlMemory<char const::Base(); // 112
					CUtlVectorBase<char const::Base(); // 368
					CUtlVectorBase<char const::ResetDbgInfo(); // 1800
					CUtlVectorBase<char const::Purge(); // 560
					ValidateAlignment<char const*>(void); // 508
					CUtlMemory<char const::Purge(); // 903
					CUtlMemory<char const::Purge(); // 510
					CUtlMemory<char const::~CUtlMemory(); // 191
					CUtlMemoryFixedGrowable_Base<char const::~CUtlMemoryFixedGrowable_Base(); // 223
					CUtlMemoryFixedGrowable<char const::~CUtlMemoryFixedGrowable(); // 562
					CUtlVectorBase<char const::~CUtlVectorBase(); // 478
					CUtlVectorFixedGrowable<char const::~CUtlVectorFixedGrowable(); // 135
					ResolveOffset(const int32* pOffset); // 304
					CResourceArrayBase::GetRawPtr(); // 416
					CResourceArray<ResourceManifestGroup_t>::GetPtr(); // 379
					CResourceArray<ResourceManifestGroup_t>::operator[](
							int nIndex);  // 100
					CResourceArrayBase::Count(); // 101
					CUtlMemory<char const::CUtlMemory(
							const char ** pMemory,
							int numElements,
							bool bGrowable,
							uint32 nGrowable_GrowSize);  // 197
					CUtlMemory<char const::EnsureCapacity(
							int num);  // 199
					CUtlMemoryFixedGrowable_Base<char const::CUtlMemoryFixedGrowable_Base(
									const char ** pFixedMemory,
									int nFixedElements,
									int nGrowSize,
									int nInitAllocationCount);  // 228
					AlignedByteArrayExplicit_t<16, char const::AlignedByteArrayExplicit_t(); // 1597
					AlignedByteArray_t<16, char const::AlignedByteArray_t(); // 228
					AlignedByteArrayExplicit_t<16, char const::Base(); // 231
					CUtlMemoryFixedGrowable<char const::CUtlMemoryFixedGrowable(
								int nGrowSize,
								int nInitSize);  // 527
					CUtlVectorBase<char const::ResetDbgInfo(); // 530
					CUtlVectorBase<char const::CUtlVectorBase(
							int growSize,
							int initCapacity);  // 484
					CUtlVectorFixedGrowable<char const::CUtlVectorFixedGrowable(
								int growSize);  // 103
				}
				CResourceArrayBase::Count(); // 98
			}
		}
		CResourceArrayBase::Count(); // 75
	}
	CUtlMemory<CStrongHandleVoid, int>::ValidateGrowSize(); // 475
	CUtlMemory<CStrongHandleVoid, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::CUtlVector(); // 90
	CResourceManifestFromDiskInternal::CResourceManifestFromDiskInternal(); // 43
	CRD_RegisterResourceDataUtils::SetFinalResourceData(
				void* pData);  // 139
} /* size: 0, variables: 2, inline expansions: 7 (13 bytes) */

// <023FAEE0> resourcesystem/resourcemanifest.cpp:144
// variable: 1
// function call: 1
void CResourceManifestTypeManager::DeallocateResource(void* pResourceData, IResourceDeallocatorUtils* pDealloc)
{
	CResourceManifestFromDiskInternal* pManifestInternal; // 146
	CResourceManifestTypeManager::DeallocateResource(
				void* pResourceData,
				IResourceDeallocatorUtils* pDealloc);  // 144
} /* size: 49, variables: 1, inline expansions: 1 (28 bytes) */

// <023F6489> resourcesystem/resourcemanifest.cpp:144
// variable: 1
void CResourceManifestTypeManager::DeallocateResource(void* pResourceData, IResourceDeallocatorUtils* pDealloc)
{
	CResourceManifestFromDiskInternal* pManifestInternal; // 146
} /* size: 0, variables: 1 */

// <023F60DE> resourcesystem/resourcemanifest.cpp:150
// variables: 2
// function calls: 13
void CResourceManifestTypeManager::AddToLoadingList(CResourceManifestFromDiskInternal* pVRMan, ResourceHandle_t hResource)
{
	const char   __FUNCTION__; // 59147
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 152
	}
	CUtlMemory<CResourceManifestFromDiskInternal::NumAllocated(); // 1196
	CUtlMemory<CResourceManifestFromDiskInternal::Base(); // 112
	CUtlVectorBase<CResourceManifestFromDiskInternal::Base(); // 368
	CUtlVectorBase<CResourceManifestFromDiskInternal::ResetDbgInfo(); // 824
	CUtlMemory<CResourceManifestFromDiskInternal::IsGrowable(); // 823
	CUtlMemory<CResourceManifestFromDiskInternal::IsExternallyAllocated(); // 859
	CUtlMemory<CResourceManifestFromDiskInternal::IsExternallyAllocated(); // 861
	CUtlMemory<CResourceManifestFromDiskInternal::Grow(
		int num);  // 806
	CUtlVectorBase<CResourceManifestFromDiskInternal::GrowMemory(
			int num);  // 1198
	CUtlMemory<CResourceManifestFromDiskInternal::operator[](
			int i);  // 602
	CUtlVectorBase<CResourceManifestFromDiskInternal::Element(
		int i);  // 1201
	CopyConstruct<CResourceManifestFromDiskInternal*>(CResourceManifestFromDiskInternal** pMemory,
								CResourceManifestFromDiskInternal* const& src);  // 1201
	CUtlVectorBase<CResourceManifestFromDiskInternal::AddToTail(
			CResourceManifestFromDiskInternal* const& src);  // 157
} /* size: 0, variables: 1, inline expansions: 13 (784 bytes) */

// <023F5D5F> resourcesystem/resourcemanifest.cpp:160
// variables: 4
// function calls: 13
void CResourceManifestTypeManager::RemoveFromLoadingList(CResourceManifestFromDiskInternal* pVRMan)
{
	const char   __FUNCTION__; // 59210
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 162
	}
	{
		int i; // 1531
		CUtlVectorBase<CResourceManifestFromDiskInternal::Count(); // 1531
		CUtlMemory<CResourceManifestFromDiskInternal::operator[](
				int i);  // 609
		CUtlVectorBase<CResourceManifestFromDiskInternal::Element(
			int i);  // 1533
	}
	CUtlVectorBase<CResourceManifestFromDiskInternal::Find(
		CResourceManifestFromDiskInternal* const& src);  // 1629
	CUtlMemory<CResourceManifestFromDiskInternal::operator[](
			int i);  // 602
	CUtlVectorBase<CResourceManifestFromDiskInternal::Element(
		int i);  // 1575
	Destruct<CResourceManifestFromDiskInternal*>(CResourceManifestFromDiskInternal** pMemory); // 1575
	{
		const bool  bNotLast; // 1578
		CUtlMemory<CResourceManifestFromDiskInternal::operator[](
				int i);  // 602
		CUtlVectorBase<CResourceManifestFromDiskInternal::Element(
			int i);  // 1584
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 1584
	}
	CUtlVectorBase<CResourceManifestFromDiskInternal::FastRemove(
			int elem);  // 1632
	CUtlVectorBase<CResourceManifestFromDiskInternal::FindAndFastRemove(
				CResourceManifestFromDiskInternal* const& src);  // 165
} /* size: 0, variables: 1, inline expansions: 6 (150 bytes) */

// <023F5B35> resourcesystem/resourcemanifest.cpp:168
// variables: 3
// function calls: 6
void CResourceManifestTypeManager::FrameUpdate(int nFinishedFrameCount)
{
	int nCount; // 170
	{
		int i; // 173
		{
			CResourceManifest* pManifest; // 175
			CUtlMemory<CResourceManifestFromDiskInternal::operator[](
					int i);  // 588
			CUtlVectorBase<CResourceManifestFromDiskInternal::operator[](
					int i);  // 175
			{
			}
			CResourceManifest::GetState(); // 176
			CUtlMemory<CResourceManifestFromDiskInternal::operator[](
					int i);  // 588
			CUtlVectorBase<CResourceManifestFromDiskInternal::operator[](
					int i);  // 178
		}
	}
	CUtlVectorBase<CResourceManifestFromDiskInternal::Count(); // 170
} /* size: 0, variables: 1, inline expansions: 1 (3 bytes) */

// <023F58BB> resourcesystem/resourcemanifest.cpp:183
// variable: 1
// function calls: 12
void CResourceManifestFromDiskInternal::~CResourceManifestFromDiskInternal()
{
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
	CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::~CUtlVector(); // 190
} /* size: 187, inline expansions: 7 (420 bytes) */

// <023F589F> resourcesystem/resourcemanifest.cpp:183
void CResourceManifestFromDiskInternal::~CResourceManifestFromDiskInternal()
{
} /* size: 0 */

// <023F5342> resourcesystem/resourcemanifest.cpp:200
// function calls: 18
void CResourceManifest::CResourceManifest(ResourceManifestType_t nType, ResourceManifestLoadPriority_t nPriority, bool bLoadStreamingData, const char* pDebugName)
{
	{
		{
		}
	}
	{
		CUtlString::CUtlString(
				const char* pString);  // 202
		CUtlMemory<CStrongHandleVoid, int>::ValidateGrowSize(); // 475
		CUtlMemory<CStrongHandleVoid, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::CUtlVector(); // 202
		CUtlMemory<short unsigned int, int>::ValidateGrowSize(); // 475
		CUtlMemory<short unsigned int, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >::CUtlVector(); // 202
		{
		}
		CUtlMemory<CResourceManifest::LoadingResourceReference_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<CResourceManifest::LoadingResourceReference_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		ResetDbgInfo(const CUtlVectorBase<CResourceManifest::LoadingResourceReference_t, CUtlMemory<CResourceManifest::LoadingResourceReferenc this); // 530
		CUtlVectorBase(const CUtlVectorBase<CResourceManifest::LoadingResourceReference_t, CUtlMemory<CResourceManifest::LoadingResourceReferenc this,
				int growSize,
				int initCapacity);  // 419
		CUtlVector(const CUtlVector<CResourceManifest::LoadingResourceReference_t, CUtlMemory<CResourceManifest::LoadingResourceReference_t, this,
				int growSize,
				int initCapacity);  // 141
		CUtlSortVector(const CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingR this,
				int nGrowSize,
				int initSize);  // 180
		LoadingInfo_t::LoadingInfo_t(); // 208
	}
} /* size: 0 */

// <023F52D3> resourcesystem/resourcemanifest.cpp:200
// variables: 2
void CResourceManifest::CResourceManifest(ResourceManifestType_t nType, ResourceManifestLoadPriority_t nPriority, bool bLoadStreamingData, const char* pDebugName)
{
	const char   __FUNCTION__; // 59168
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 204
	}
} /* size: 0, variables: 1 */

// <023F43DE> resourcesystem/resourcemanifest.cpp:221
// variables: 16
// function calls: 66
void CResourceManifest::~CResourceManifest()
{
	{
		int nLoadingResourceCount; // 225
		{
			int i; // 226
			{
				CLoadingResource* pLoadingResource; // 228
			}
		}
	}
	{
		UtlSymId_t& groupReference; // 247
		CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >& __for_range; // 56267
		iterator __for_begin; // 56278
		iterator __for_end; // 56289
	}
	CResourceManifest::HasStartedLoading(); // 223
	{
		int nLoadingResourceCount; // 225
		Count(const CUtlVectorBase<CResourceManifest::LoadingResourceReference_t, CUtlMemory<CResourceManifest::LoadingResourceRe this); // 644
		CResourceManifest::GetLoadingResourceCount(); // 225
		{
			int i; // 226
			{
				CLoadingResource* pLoadingResource; // 228
				CUtlSymbolLarge::String(); // 160
				ResourceGetName(ResourceNameHandle_t hResourceName,
						CResourceName* pTarget);  // 184
				ResourceGetName(ResourceNameHandle_t hResourceName,
						CResourceName* pTarget);  // 180
				ResourceGetName(ResourceHandle_t hResource,
						CResourceName* pTarget);  // 196
				CResourceNameGetter::CResourceNameGetter(
							ResourceHandle_t hResource);  // 231
				CUtlMemory<CResourceManifest::LoadingResourceReference_t, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CResourceManifest::LoadingResourceReference_t, CUtlMemory<CResourceManifest::LoadingResourceReferenc this,
						int i);  // 233
				CUtlMemory<CResourceManifest::LoadingResourceReference_t, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CResourceManifest::LoadingResourceReference_t, CUtlMemory<CResourceManifest::LoadingResourceReferenc this,
						int i);  // 652
				CResourceManifest::GetLoadingResource(
							int nIndex);  // 228
				CLoadingResource::GetDependencyCount(); // 231
				CLoadingResource::GetResource(); // 231
				CResourceName::Get(); // 231
				CLoadingResource::GetResourceId(); // 231
				CUtlString::Get(); // 541
				CResourceManifest::GetDebugName(); // 231
				ResourceId_t::GetRaw(); // 231
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 318
				CResourceName::~CResourceName(); // 191
				CResourceNameGetter::~CResourceNameGetter(); // 231
			}
		}
	}
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
	CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::Purge(); // 241
	{
		UtlSymId_t& groupReference; // 247
		CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >& __for_range; // 56267
		iterator __for_begin; // 56278
		iterator __for_end; // 56289
		CUtlMemory<short unsigned int, int>::Base(); // 112
		CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Base(); // 102
		CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::begin(); // 247
		CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 104
		CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::end(); // 247
	}
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<short unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<short unsigned int, int>::Purge(); // 903
	CUtlMemory<short unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Purge(); // 560
	ValidateAlignment<short unsigned int>(void); // 508
	CUtlMemory<short unsigned int, int>::Purge(); // 510
	CUtlMemory<short unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlVector(); // 259
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
	CUtlVector<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::~CUtlVector(); // 259
	CUtlString::~CUtlString(); // 259
} /* size: 854, inline expansions: 28 (805 bytes) */

// <023F4359> resourcesystem/resourcemanifest.cpp:221
// variables: 7
void CResourceManifest::~CResourceManifest()
{
	{
		int nLoadingResourceCount; // 225
		{
			int i; // 226
			{
				CLoadingResource* pLoadingResource; // 228
			}
		}
	}
	{
		UtlSymId_t& groupReference; // 247
		CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >& __for_range; // 56308
		iterator __for_begin; // 18280
		iterator __for_end; // 18280
	}
} /* size: 0 */

// <023F3D2A> resourcesystem/resourcemanifest.cpp:264
// function calls: 26
void CManifestResourceGatherer::CManifestResourceGatherer()
{
	CUtlMemory<char const::CUtlMemory(
			const char ** pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<char const::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<char const::CUtlMemoryFixedGrowable_Base(
					const char ** pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	{
	}
	AlignedByteArrayExplicit_t<64, char const::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<64, char const::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<64, char const::Base(); // 231
	CUtlMemoryFixedGrowable<char const::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<char const::ResetDbgInfo(); // 530
	CUtlVectorBase<char const::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<char const::CUtlVectorFixedGrowable(
				int growSize);  // 49
	ResourceFenceGroup_t::ResourceFenceGroup_t(); // 264
	CUtlMemory<CUtlHashtableEntry<char const::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<char const::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	CUtlHashtable<char const::Init(); // 178
	CUtlHashtable<char const::CUtlHashtable(
			int minimumSize);  // 26
	CUtlMemory<char const::ValidateGrowSize(); // 475
	CUtlMemory<char const::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<char const::ResetDbgInfo(); // 530
	CUtlVectorBase<char const::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<char const::CUtlVector(); // 26
	CStableSymbolTable::CStableSymbolTable(); // 264
	CUtlMemory<CManifestResourceGatherer::ResourceFenceGroup_t::ValidateGrowSize(); // 475
	CUtlMemory<CManifestResourceGatherer::ResourceFenceGroup_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CManifestResourceGatherer::ResourceFenceGroup_t::ResetDbgInfo(); // 530
	CUtlVectorBase<CManifestResourceGatherer::ResourceFenceGroup_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CManifestResourceGatherer::ResourceFenceGroup_t::CUtlVector(); // 264
} /* size: 218, inline expansions: 26 (535 bytes) */

// <023F3D0D> resourcesystem/resourcemanifest.cpp:264
void CManifestResourceGatherer::CManifestResourceGatherer()
{
} /* size: 0 */

// <023F2D08> resourcesystem/resourcemanifest.cpp:271
// variables: 3
// function calls: 80
void CManifestResourceGatherer::~CManifestResourceGatherer()
{
	{
		int i; // 1807
		CUtlMemory<char const::IsExternallyAllocated(); // 577
		CUtlMemory<char const::ConvertToExternalMemory(
					const char ** pMemory,
					int numElements,
					int nCopyElements,
					bool bSetGrowable,
					uint32 nGrowable_GrowSize);  // 207
		CUtlMemoryFixedGrowable_Base<char const::Purge_FixedGrowable(
					const char ** pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 203
		CUtlMemoryFixedGrowable_Base<char const::Purge_FixedGrowable(
					const char ** pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 237
		AlignedByteArrayExplicit_t<64, char const::Base(); // 237
		CUtlMemoryFixedGrowable<char const::Purge(
			int numElements);  // 1799
		CUtlVectorBase<char const::RemoveAll(); // 1798
		CUtlVectorBase<char const::ResetDbgInfo(); // 1800
		CUtlVectorBase<char const::Purge(); // 560
		ValidateAlignment<char const*>(void); // 508
		CUtlMemory<char const::Purge(); // 903
		CUtlMemory<char const::Purge(); // 510
		CUtlMemory<char const::~CUtlMemory(); // 191
		CUtlMemoryFixedGrowable_Base<char const::~CUtlMemoryFixedGrowable_Base(); // 223
		CUtlMemoryFixedGrowable<char const::~CUtlMemoryFixedGrowable(); // 562
		CUtlVectorBase<char const::~CUtlVectorBase(); // 478
		CUtlVectorFixedGrowable<char const::~CUtlVectorFixedGrowable(); // 49
		ResourceFenceGroup_t::~ResourceFenceGroup_t(); // 1809
		CUtlMemory<CManifestResourceGatherer::ResourceFenceGroup_t::operator[](
				int i);  // 602
		CUtlVectorBase<CManifestResourceGatherer::ResourceFenceGroup_t::Element(
			int i);  // 1809
	}
	CUtlVectorBase<CManifestResourceGatherer::ResourceFenceGroup_t::RemoveAll(); // 1798
	CUtlMemory<CManifestResourceGatherer::ResourceFenceGroup_t::Purge(); // 903
	CUtlMemory<CManifestResourceGatherer::ResourceFenceGroup_t::IsExternallyAllocated(); // 905
	CUtlMemory<CManifestResourceGatherer::ResourceFenceGroup_t::Purge(); // 1799
	CUtlVectorBase<CManifestResourceGatherer::ResourceFenceGroup_t::ResetDbgInfo(); // 1800
	CUtlVectorBase<CManifestResourceGatherer::ResourceFenceGroup_t::Purge(); // 1811
	CUtlVectorBase<CManifestResourceGatherer::ResourceFenceGroup_t::PurgeAndDeleteElements(); // 273
	CUtlVectorBase<char const::RemoveAll(); // 1798
	CUtlMemory<char const::IsExternallyAllocated(); // 905
	CUtlMemory<char const::Purge(); // 903
	CUtlMemory<char const::Purge(); // 1799
	CUtlVectorBase<char const::Purge(); // 560
	ValidateAlignment<char const*>(void); // 508
	CUtlMemory<char const::Purge(); // 510
	CUtlMemory<char const::~CUtlMemory(); // 562
	CUtlVectorBase<char const::~CUtlVectorBase(); // 410
	CUtlVector<char const::~CUtlVector(); // 27
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<char const::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<char const::Count(); // 897
			CUtlHashtableEntry<char const::IsValid(); // 899
			CUtlHashtableEntry<char const::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<char const*, int> >(CUtlKeyValuePair<char const*, int>* pMemory); // 902
		}
	}
	CUtlHashtable<char const::RemoveAll(); // 188
	ValidateAlignment<CUtlHashtableEntry<char const*, int> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<char const::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<char const::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<char const::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<char const::~CUtlMemory(); // 188
	CUtlHashtable<char const::~CUtlHashtable(); // 27
	CStableSymbolTable::~CStableSymbolTable(); // 274
	CUtlVectorBase<CManifestResourceGatherer::ResourceFenceGroup_t::RemoveAll(); // 1798
	CUtlMemory<CManifestResourceGatherer::ResourceFenceGroup_t::IsExternallyAllocated(); // 905
	CUtlMemory<CManifestResourceGatherer::ResourceFenceGroup_t::Purge(); // 903
	CUtlMemory<CManifestResourceGatherer::ResourceFenceGroup_t::Purge(); // 1799
	CUtlVectorBase<CManifestResourceGatherer::ResourceFenceGroup_t::Purge(); // 560
	ValidateAlignment<CManifestResourceGatherer::ResourceFenceGroup_t*>(void); // 508
	CUtlMemory<CManifestResourceGatherer::ResourceFenceGroup_t::Purge(); // 510
	CUtlMemory<CManifestResourceGatherer::ResourceFenceGroup_t::~CUtlMemory(); // 562
	CUtlVectorBase<CManifestResourceGatherer::ResourceFenceGroup_t::~CUtlVectorBase(); // 410
	CUtlVector<CManifestResourceGatherer::ResourceFenceGroup_t::~CUtlVector(); // 274
	CUtlVectorBase<char const::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<64, char const::Base(); // 237
	CUtlMemory<char const::IsExternallyAllocated(); // 577
	CUtlMemory<char const::ConvertToExternalMemory(
				const char ** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<char const::Purge_FixedGrowable(
				const char ** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<char const::Purge_FixedGrowable(
				const char ** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<char const::Purge(
		int numElements);  // 1799
	CUtlMemory<char const::Base(); // 112
	CUtlVectorBase<char const::Base(); // 368
	CUtlVectorBase<char const::ResetDbgInfo(); // 1800
	CUtlVectorBase<char const::Purge(); // 560
	CUtlMemory<char const::Purge(); // 903
	CUtlMemory<char const::Purge(); // 510
	ValidateAlignment<char const*>(void); // 508
	CUtlMemory<char const::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<char const::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<char const::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<char const::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<char const::~CUtlVectorFixedGrowable(); // 49
	ResourceFenceGroup_t::~ResourceFenceGroup_t(); // 274
} /* size: 645, inline expansions: 55 (2035 bytes) */

// <023F2CEB> resourcesystem/resourcemanifest.cpp:271
void CManifestResourceGatherer::~CManifestResourceGatherer()
{
} /* size: 0 */

// <023F2678> resourcesystem/resourcemanifest.cpp:279
// variables: 3
// function calls: 24
void CResourceManifest::AddManifestRootEntry(CManifestResourceGatherer* pGatherer, const char* pEntry)
{
	CPathBufferString fixedResourceName; // 281
	bool bWasCodeBasedManifestName; // 288
	CodeResourceManifest_t* pCodeManifest; // 290
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 281
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 290
	CUtlMemory<short unsigned int, int>::NumAllocated(); // 1196
	CUtlMemory<short unsigned int, int>::Base(); // 112
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Base(); // 368
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::ResetDbgInfo(); // 824
	CUtlMemory<short unsigned int, int>::IsGrowable(); // 823
	CUtlMemory<short unsigned int, int>::IsExternallyAllocated(); // 859
	CUtlMemory<short unsigned int, int>::IsExternallyAllocated(); // 861
	CUtlMemory<short unsigned int, int>::Grow(
		int num);  // 806
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::GrowMemory(
			int num);  // 1198
	CUtlMemory<short unsigned int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Element(
		int i);  // 1201
	CopyConstruct<short unsigned int>(short unsigned int* pMemory,
						const short unsigned int& src);  // 1201
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::AddToTail(
			const short unsigned int& src);  // 299
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 305
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 307
} /* size: 672, variables: 3, inline expansions: 24 (1190 bytes) */

// <023F2237> resourcesystem/resourcemanifest.cpp:312
// variables: 2
// function calls: 18
void CManifestResourceGatherer::AddResource(const char* pFixedResourceName)
{
	bool bIsNewResource; // 315
	int nId; // 316
	CStableSymbolTable::FindOrAddSymbol(
			const char* pSymbol,
			bool* pIsNewSymbol);  // 316
	CUtlVectorBase<CManifestResourceGatherer::ResourceFenceGroup_t::Count(); // 372
	CUtlMemory<CManifestResourceGatherer::ResourceFenceGroup_t::operator[](
			int i);  // 630
	CUtlVectorBase<CManifestResourceGatherer::ResourceFenceGroup_t::Tail(); // 373
	CManifestResourceGatherer::CurrentGroup(); // 320
	CUtlVectorBase<char const::Count(); // 30
	CUtlMemory<char const::operator[](
			int i);  // 595
	CUtlVectorBase<char const::operator[](
			int i);  // 30
	CStableSymbolTable::GetSymbol(
			int id);  // 320
	CUtlMemory<char const::NumAllocated(); // 1247
	CUtlMemory<char const::operator[](
			int i);  // 602
	CUtlVectorBase<char const::Element(
		int i);  // 1252
	Construct<char const*, char const*>(const char ** pMemory); // 1252
	CUtlMemory<char const::Base(); // 112
	CUtlVectorBase<char const::Base(); // 368
	CUtlVectorBase<char const::ResetDbgInfo(); // 824
	CUtlVectorBase<char const::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<char const::AddToTail(
			const char  *& src);  // 320
} /* size: 207, variables: 2, inline expansions: 18 (226 bytes) */

// <023F1C83> resourcesystem/resourcemanifest.cpp:327
// function calls: 24
void CManifestResourceGatherer::InsertFence()
{
	CUtlMemory<char const::CUtlMemory(
			const char ** pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<char const::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<char const::CUtlMemoryFixedGrowable_Base(
					const char ** pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	{
	}
	AlignedByteArrayExplicit_t<64, char const::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<64, char const::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<64, char const::Base(); // 231
	CUtlMemoryFixedGrowable<char const::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<char const::ResetDbgInfo(); // 530
	CUtlVectorBase<char const::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<char const::CUtlVectorFixedGrowable(
				int growSize);  // 49
	ResourceFenceGroup_t::ResourceFenceGroup_t(); // 329
	CUtlMemory<CManifestResourceGatherer::ResourceFenceGroup_t::NumAllocated(); // 1247
	CUtlMemory<CManifestResourceGatherer::ResourceFenceGroup_t::Base(); // 112
	CUtlVectorBase<CManifestResourceGatherer::ResourceFenceGroup_t::Base(); // 368
	CUtlVectorBase<CManifestResourceGatherer::ResourceFenceGroup_t::ResetDbgInfo(); // 824
	CUtlMemory<CManifestResourceGatherer::ResourceFenceGroup_t::IsGrowable(); // 823
	CUtlMemory<CManifestResourceGatherer::ResourceFenceGroup_t::IsExternallyAllocated(); // 859
	CUtlMemory<CManifestResourceGatherer::ResourceFenceGroup_t::IsExternallyAllocated(); // 861
	CUtlMemory<CManifestResourceGatherer::ResourceFenceGroup_t::Grow(
		int num);  // 806
	CUtlVectorBase<CManifestResourceGatherer::ResourceFenceGroup_t::GrowMemory(
			int num);  // 1249
	CUtlMemory<CManifestResourceGatherer::ResourceFenceGroup_t::operator[](
			int i);  // 602
	CUtlVectorBase<CManifestResourceGatherer::ResourceFenceGroup_t::Element(
		int i);  // 1252
	Construct<CManifestResourceGatherer::ResourceFenceGroup_t*, CManifestResourceGatherer::ResourceFenceGroup_t*>(ResourceFenceGroup_t** pMemory); // 1252
	CUtlVectorBase<CManifestResourceGatherer::ResourceFenceGroup_t::AddToTail(
			ResourceFenceGroup_t *& src);  // 329
} /* size: 447, inline expansions: 24 (1300 bytes) */

// <023FA7E2> resourcesystem/resourcemanifest.cpp:335
// function call: 1
void CManifestResourceGatherer::NumGroups()
{
	CUtlVectorBase<CManifestResourceGatherer::ResourceFenceGroup_t::Count(); // 337
} /* size: 14, inline expansions: 1 (0 bytes) */

// <023F1C66> resourcesystem/resourcemanifest.cpp:335
void CManifestResourceGatherer::NumGroups()
{
} /* size: 0 */

// <023FA83C> resourcesystem/resourcemanifest.cpp:343
// function calls: 6
void CManifestResourceGatherer::GetGroupResources(int iGroup)
{
	CUtlMemory<CManifestResourceGatherer::ResourceFenceGroup_t::operator[](
			int i);  // 588
	CUtlVectorBase<CManifestResourceGatherer::ResourceFenceGroup_t::operator[](
			int i);  // 364
	CManifestResourceGatherer::GetGroup(
		int iGroup);  // 359
	CManifestResourceGatherer::GetGroup(
		int iGroup);  // 345
	CUtlMemory<char const::Base(); // 112
	CUtlVectorBase<char const::Base(); // 345
} /* size: 30, inline expansions: 6 (44 bytes) */

// <023F1C3C> resourcesystem/resourcemanifest.cpp:343
void CManifestResourceGatherer::GetGroupResources(int iGroup)
{
} /* size: 0 */

// <023FA9BD> resourcesystem/resourcemanifest.cpp:351
// function calls: 5
void CManifestResourceGatherer::GetGroupResourceCount(int iGroup)
{
	CUtlMemory<CManifestResourceGatherer::ResourceFenceGroup_t::operator[](
			int i);  // 588
	CUtlVectorBase<CManifestResourceGatherer::ResourceFenceGroup_t::operator[](
			int i);  // 364
	CManifestResourceGatherer::GetGroup(
		int iGroup);  // 359
	CManifestResourceGatherer::GetGroup(
		int iGroup);  // 353
	CUtlVectorBase<char const::Count(); // 353
} /* size: 29, inline expansions: 5 (44 bytes) */

// <023F1C12> resourcesystem/resourcemanifest.cpp:351
void CManifestResourceGatherer::GetGroupResourceCount(int iGroup)
{
} /* size: 0 */

// <023FAB0E> resourcesystem/resourcemanifest.cpp:359
// function calls: 3
void CManifestResourceGatherer::GetGroup(int iGroup)
{
	CUtlMemory<CManifestResourceGatherer::ResourceFenceGroup_t::operator[](
			int i);  // 588
	CUtlVectorBase<CManifestResourceGatherer::ResourceFenceGroup_t::operator[](
			int i);  // 364
	CManifestResourceGatherer::GetGroup(
		int iGroup);  // 359
} /* size: 0, inline expansions: 3 (0 bytes) */

// <023F1BE8> resourcesystem/resourcemanifest.cpp:359
void CManifestResourceGatherer::GetGroup(int iGroup)
{
} /* size: 0 */

// <023FABE6> resourcesystem/resourcemanifest.cpp:370
// function calls: 3
void CManifestResourceGatherer::CurrentGroup()
{
	CUtlVectorBase<CManifestResourceGatherer::ResourceFenceGroup_t::Count(); // 372
	CUtlMemory<CManifestResourceGatherer::ResourceFenceGroup_t::operator[](
			int i);  // 630
	CUtlVectorBase<CManifestResourceGatherer::ResourceFenceGroup_t::Tail(); // 373
} /* size: 0, inline expansions: 3 (0 bytes) */

// <023F1BCB> resourcesystem/resourcemanifest.cpp:370
void CManifestResourceGatherer::CurrentGroup()
{
} /* size: 0 */

// <023F11D4> resourcesystem/resourcemanifest.cpp:381
// variables: 8
// function calls: 39
void CResourceManifest::Initialize(int nCount, const char ** ppResourceFiles)
{
	const char   __FUNCTION__; // 59042
	CManifestResourceGatherer resourceGatherer; // 385
	CResourceManifest* pTargetManifest; // 391
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 383
	}
	{
		int iEntry; // 386
	}
	{
		int iGroup; // 392
		{
			int nGroupResourceCount; // 394
			const char ** ppGroupResources; // 395
			CUtlMemory<CManifestResourceGatherer::ResourceFenceGroup_t::operator[](
					int i);  // 588
			CUtlVectorBase<CManifestResourceGatherer::ResourceFenceGroup_t::operator[](
					int i);  // 364
			CManifestResourceGatherer::GetGroup(
				int iGroup);  // 359
			CManifestResourceGatherer::GetGroup(
				int iGroup);  // 353
			CUtlVectorBase<char const::Count(); // 353
			CManifestResourceGatherer::GetGroupResourceCount(
						int iGroup);  // 394
			CUtlMemory<char const::Base(); // 112
			CUtlVectorBase<char const::Base(); // 345
			CManifestResourceGatherer::GetGroupResources(
						int iGroup);  // 395
		}
		CUtlVectorBase<CManifestResourceGatherer::ResourceFenceGroup_t::Count(); // 337
		CManifestResourceGatherer::NumGroups(); // 392
	}
	CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::Count(); // 383
	CUtlMemory<char const::CUtlMemory(
			const char ** pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<char const::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<char const::CUtlMemoryFixedGrowable_Base(
					const char ** pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<64, char const::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<64, char const::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<64, char const::Base(); // 231
	CUtlMemoryFixedGrowable<char const::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<char const::ResetDbgInfo(); // 530
	CUtlVectorBase<char const::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<char const::CUtlVectorFixedGrowable(
				int growSize);  // 49
	ResourceFenceGroup_t::ResourceFenceGroup_t(); // 264
	CUtlMemory<CUtlHashtableEntry<char const::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<char const::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	CUtlHashtable<char const::Init(); // 178
	CUtlHashtable<char const::CUtlHashtable(
			int minimumSize);  // 26
	CUtlMemory<char const::ValidateGrowSize(); // 475
	CUtlMemory<char const::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<char const::ResetDbgInfo(); // 530
	CUtlVectorBase<char const::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<char const::CUtlVector(); // 26
	CStableSymbolTable::CStableSymbolTable(); // 264
	CUtlVectorBase<CManifestResourceGatherer::ResourceFenceGroup_t::ResetDbgInfo(); // 530
	CUtlMemory<CManifestResourceGatherer::ResourceFenceGroup_t::ValidateGrowSize(); // 475
	CUtlMemory<CManifestResourceGatherer::ResourceFenceGroup_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CManifestResourceGatherer::ResourceFenceGroup_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CManifestResourceGatherer::ResourceFenceGroup_t::CUtlVector(); // 264
	CManifestResourceGatherer::CManifestResourceGatherer(); // 385
} /* size: 0, variables: 3, inline expansions: 28 (602 bytes) */

// <023EEDA6> resourcesystem/resourcemanifest.cpp:411
// variables: 54
// function calls: 126
void CResourceManifest::InitializeInternal(int nNumItems, const char ** ppResourceFiles)
{
	const char   __FUNCTION__; // 59189
	SortedItem_t* pSorted; // 428
	CUtlHashtable<const ResourceBindingBase_t*, empty_t, DefaultHashFunctor<const ResourceBindingBase_t*>, DefaultEqualFunctor<const ResourceBindingBase_t*>, undefined_t, CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t*, empty_t>, int> > rootResourceLookup; // 452
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 414
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 415
	}
	{
		int i; // 431
		{
			ResourceType_t nResourceType; // 433
			const ResourceTypeRegistration_t* pReg; // 434
			CBufferString::Set(
				const char* pString,
				int nChars,
				bool bExact);  // 601
			CBufferString::InitMinConstruct(
					bool bGrowable);  // 712
			CBufferString::CBufferString(); // 596
			CBufferStringN<30>::CBufferStringN(
					const char* pString,
					int nChars,
					bool bExact,
					bool bGrowable);  // 128
			CBufferString::Length(); // 130
			{
				int i; // 131
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 788
				CBufferString::operator[](
						int i);  // 133
				CBufferString::RemoveTail(
						int nChars);  // 135
			}
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 142
			{
				int i; // 98
			}
			CharsToResourceType(ResourceType_t* pOutType,
						const char* pChars);  // 142
			CBufferString::~CBufferString(); // 587
			CBufferStringN<30>::~CBufferStringN(); // 144
			DeduceResourceTypeFromResourceName(const char* pResourceName); // 433
		}
	}
	{
		int i; // 444
	}
	{
		int i; // 453
		{
			const char* pResourceName; // 455
			CResourceName resourceName; // 456
			ResourceHandle_t hResource; // 457
			bool bDidInsert; // 466
			{
				_DebuggerBreakInlineExpressionWrapper(void); // 460
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 463
				CUtlSymbolLarge::String(); // 160
				ResourceGetName(ResourceNameHandle_t hResourceName,
						CResourceName* pTarget);  // 184
				ResourceGetName(ResourceHandle_t hResource,
						CResourceName* pTarget);  // 196
				CResourceNameGetter::CResourceNameGetter(
							ResourceHandle_t hResource);  // 463
				CResourceName::Get(); // 463
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 318
				CResourceName::~CResourceName(); // 191
				CResourceNameGetter::~CResourceNameGetter(); // 463
			}
			{
				int nIndex; // 470
				CUtlMemory<CStrongHandleVoid, int>::NumAllocated(); // 1143
				CUtlMemory<CStrongHandleVoid, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::Element(
					int i);  // 1148
				CStrongHandle<ResourceBindingVoid_t>::CStrongHandle(); // 266
				CStrongHandleVoid::CStrongHandleVoid(); // 1479
				Construct<CStrongHandleVoid>(CStrongHandleVoid* pMemory); // 1148
				CUtlMemory<CStrongHandleVoid, int>::Base(); // 112
				CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::Base(); // 368
				CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::GrowMemory(
						int num);  // 1145
				CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::AddToTail(); // 470
				CUtlMemory<CStrongHandleVoid, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::operator[](
						int i);  // 471
				ThreadInterlockedIncrement(volatile int32* p); // 576
				CInterlockedIntT<int, 4>::operator++(); // 570
				CStrongHandle<ResourceBindingVoid_t>::Init(
					ResourceHandleTyped_t hResource);  // 659
				CStrongHandle<ResourceBindingVoid_t>::operator=(
						ResourceHandleTyped_t hResource);  // 275
				CStrongHandleVoid::operator=(
						ResourceHandle_t hResource);  // 471
			}
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 184
			ResourceGetName(ResourceHandle_t hResource,
					CResourceName* pTarget);  // 196
			CResourceNameGetter::CResourceNameGetter(
						ResourceHandle_t hResource);  // 463
			CResourceName::Get(); // 463
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 463
			Mix32HashFunctor::operator(
					uint32 n);  // 139
			PointerHashFunctor::operator(
					const void* s);  // 256
			CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::Base(); // 650
			IdealIndex(uint32_if32BitStorage h,
					uint32 m);  // 653
			CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::Count(); // 651
			CUtlHashtableEntry<const ResourceBindingBase_t::IdealIndex(
					uint32 slotmask);  // 656
			CUtlHashtableEntry<const ResourceBindingBase_t::IdealIndex(
					uint32 slotmask);  // 667
			CUtlHashtable<const ResourceBindingBase_t::DoLookup<const ResourceBindingBase_t*>(
								const ResourceBindingBase_t* x,
								unsigned int h,
								handle_t* pPreviousInChain);  // 697
			CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::operator[](
					int i);  // 706
			CUtlKeyValuePair<const ResourceBindingBase_t::CUtlKeyValuePair<const ResourceBindingBase_t*>(
									const ResourceBindingBase_t* const& k);  // 1514
			Construct<CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t>, const ResourceBindingBase_t*&>(CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t>* pMemory); // 706
			CUtlHashtable<const ResourceBindingBase_t::DoInsert<const ResourceBindingBase_t*>(
								const ResourceBindingBase_t* k,
								unsigned int h,
								bool* pDidInsert);  // 695
			CUtlHashtable<const ResourceBindingBase_t::DoInsert<const ResourceBindingBase_t*>(
								const ResourceBindingBase_t* k,
								unsigned int h,
								bool* pDidInsert);  // 256
			CUtlHashtable<const ResourceBindingBase_t::InsertIfNotFound(
					KeyArg_t k,
					bool* pDidInsert);  // 467
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 473
		}
	}
	__countl_zero<long unsigned int>(long unsigned int __x); // 388
	__bit_width<long unsigned int>(long unsigned int __x); // 1555
	__lg<long int>(long int __n); // 1907
	{
		SortedItem_t* __i; // 1776
		{
			value_type __val; // 1781
			{
				ptrdiff_t __n; // 700
				__distance<CResourceManifest::InitializeInternal(int, char const**)::SortedItem_t*>(SortedItem_t* __first,
															SortedItem_t* __last,
															random_access_iterator_tag); // 153
				distance<CResourceManifest::InitializeInternal(int, char const**)::SortedItem_t*>(SortedItem_t* __first,
															SortedItem_t* __last); // 700
				__advance<CResourceManifest::InitializeInternal(int, char const**)::SortedItem_t*, long int>(SortedItem_t *& __i,
																long int __n,
																random_access_iterator_tag); // 226
				advance<CResourceManifest::InitializeInternal(int, char const**)::SortedItem_t*, long int>(SortedItem_t *& __i,
																long int __n); // 701
				__assign_one<true, CResourceManifest::InitializeInternal(int, char const**)::SortedItem_t*, CResourceManifest::InitializeInternal(int, char const**)::SortedItem_t*>(SortedItem_t *& __out,
																SortedItem_t *& __in); // 709
			}
			__copy_move_backward_a2<true, CResourceManifest::InitializeInternal(int, char const**)::SortedItem_t*, CResourceManifest::InitializeInternal(int, char const**)::SortedItem_t*>(SortedItem_t* __first,
																SortedItem_t* __last,
																SortedItem_t* __result); // 753
			__copy_move_backward_a1<true, CResourceManifest::InitializeInternal(int, char const**)::SortedItem_t*, CResourceManifest::InitializeInternal(int, char const**)::SortedItem_t*>(SortedItem_t* __first,
																SortedItem_t* __last,
																SortedItem_t* __result); // 783
			__copy_move_backward_a<true, CResourceManifest::InitializeInternal(int, char const**)::SortedItem_t*, CResourceManifest::InitializeInternal(int, char const**)::SortedItem_t*>(SortedItem_t* __first,
																SortedItem_t* __last,
																SortedItem_t* __result); // 882
			move_backward<CResourceManifest::InitializeInternal(int, char const**)::SortedItem_t*, CResourceManifest::InitializeInternal(int, char const**)::SortedItem_t*>(SortedItem_t* __first,
																SortedItem_t* __last,
																SortedItem_t* __result); // 1782
		}
		SortedItem_t::operator<(
				const SortedItem_t& rhs);  // 45
		_Iter_less_iter::operator(
																SortedItem_t* __it1,
																SortedItem_t* __it2);  // 1778
		SortedItem_t::operator<(
				const SortedItem_t& rhs);  // 98
		_Val_less_iter::operator(
																SortedItem_t& __val,
																SortedItem_t* __it);  // 1758
		__unguarded_linear_insert<CResourceManifest::InitializeInternal(int, char const**)::SortedItem_t*, __gnu_cxx::__ops::_Val_less_iter>(SortedItem_t* __last,
																_Val_less_iter __comp); // 1786
	}
	__insertion_sort<CResourceManifest::InitializeInternal(int, char const**)::SortedItem_t*, __gnu_cxx::__ops::_Iter_less_iter>(SortedItem_t* __first,
																SortedItem_t* __last,
																_Iter_less_iter __comp); // 1818
	{
		SortedItem_t* __i; // 1798
		SortedItem_t::operator<(
				const SortedItem_t& rhs);  // 98
		_Val_less_iter::operator(
																SortedItem_t& __val,
																SortedItem_t* __it);  // 1758
		__unguarded_linear_insert<CResourceManifest::InitializeInternal(int, char const**)::SortedItem_t*, __gnu_cxx::__ops::_Val_less_iter>(SortedItem_t* __last,
																_Val_less_iter __comp); // 1799
	}
	__unguarded_insertion_sort<CResourceManifest::InitializeInternal(int, char const**)::SortedItem_t*, __gnu_cxx::__ops::_Iter_less_iter>(SortedItem_t* __first,
																SortedItem_t* __last,
																_Iter_less_iter __comp); // 1819
	{
		SortedItem_t* __i; // 1776
		{
			value_type __val; // 1781
			{
				ptrdiff_t __n; // 700
				__distance<CResourceManifest::InitializeInternal(int, char const**)::SortedItem_t*>(SortedItem_t* __first,
															SortedItem_t* __last,
															random_access_iterator_tag); // 153
				distance<CResourceManifest::InitializeInternal(int, char const**)::SortedItem_t*>(SortedItem_t* __first,
															SortedItem_t* __last); // 700
				__advance<CResourceManifest::InitializeInternal(int, char const**)::SortedItem_t*, long int>(SortedItem_t *& __i,
																long int __n,
																random_access_iterator_tag); // 226
				advance<CResourceManifest::InitializeInternal(int, char const**)::SortedItem_t*, long int>(SortedItem_t *& __i,
																long int __n); // 701
				__assign_one<true, CResourceManifest::InitializeInternal(int, char const**)::SortedItem_t*, CResourceManifest::InitializeInternal(int, char const**)::SortedItem_t*>(SortedItem_t *& __out,
																SortedItem_t *& __in); // 709
			}
			__copy_move_backward_a2<true, CResourceManifest::InitializeInternal(int, char const**)::SortedItem_t*, CResourceManifest::InitializeInternal(int, char const**)::SortedItem_t*>(SortedItem_t* __first,
																SortedItem_t* __last,
																SortedItem_t* __result); // 753
			__copy_move_backward_a1<true, CResourceManifest::InitializeInternal(int, char const**)::SortedItem_t*, CResourceManifest::InitializeInternal(int, char const**)::SortedItem_t*>(SortedItem_t* __first,
																SortedItem_t* __last,
																SortedItem_t* __result); // 783
			__copy_move_backward_a<true, CResourceManifest::InitializeInternal(int, char const**)::SortedItem_t*, CResourceManifest::InitializeInternal(int, char const**)::SortedItem_t*>(SortedItem_t* __first,
																SortedItem_t* __last,
																SortedItem_t* __result); // 882
			move_backward<CResourceManifest::InitializeInternal(int, char const**)::SortedItem_t*, CResourceManifest::InitializeInternal(int, char const**)::SortedItem_t*>(SortedItem_t* __first,
																SortedItem_t* __last,
																SortedItem_t* __result); // 1782
		}
		SortedItem_t::operator<(
				const SortedItem_t& rhs);  // 45
		_Iter_less_iter::operator(
																SortedItem_t* __it1,
																SortedItem_t* __it2);  // 1778
		SortedItem_t::operator<(
				const SortedItem_t& rhs);  // 98
		_Val_less_iter::operator(
																SortedItem_t& __val,
																SortedItem_t* __it);  // 1758
		__unguarded_linear_insert<CResourceManifest::InitializeInternal(int, char const**)::SortedItem_t*, __gnu_cxx::__ops::_Val_less_iter>(SortedItem_t* __last,
																_Val_less_iter __comp); // 1786
	}
	__insertion_sort<CResourceManifest::InitializeInternal(int, char const**)::SortedItem_t*, __gnu_cxx::__ops::_Iter_less_iter>(SortedItem_t* __first,
																SortedItem_t* __last,
																_Iter_less_iter __comp); // 1823
	__final_insertion_sort<CResourceManifest::InitializeInternal(int, char const**)::SortedItem_t*, __gnu_cxx::__ops::_Iter_less_iter>(SortedItem_t* __first,
																SortedItem_t* __last,
																_Iter_less_iter __comp); // 1909
	__sort<CResourceManifest::InitializeInternal(int, char const**)::SortedItem_t*, __gnu_cxx::__ops::_Iter_less_iter>(SortedItem_t* __first,
																SortedItem_t* __last,
																_Iter_less_iter __comp); // 4841
	sort<CResourceManifest::InitializeInternal(int, char const**)::SortedItem_t*>(SortedItem_t* __first,
											SortedItem_t* __last); // 440
	CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	CUtlHashtable<const ResourceBindingBase_t::Init(); // 178
	CUtlHashtable<const ResourceBindingBase_t::CUtlHashtable(
			int minimumSize);  // 452
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
	CUtlHashtable<const ResourceBindingBase_t::~CUtlHashtable(); // 482
} /* size: 0, variables: 3, inline expansions: 20 (2560 bytes) */

// <023EEB78> resourcesystem/resourcemanifest.cpp:487
// variables: 3
// function calls: 6
void CResourceManifest::IncreasePriority(ResourceManifestLoadPriority_t nPriority)
{
	{
		int nRootResourceCount; // 499
		{
			int i; // 500
			{
				CLoadingResource* pLoadingResource; // 502
				CUtlMemory<CResourceManifest::LoadingResourceReference_t, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CResourceManifest::LoadingResourceReference_t, CUtlMemory<CResourceManifest::LoadingResourceReferenc this,
						int i);  // 652
				CResourceManifest::GetLoadingResource(
							int nIndex);  // 502
			}
		}
		Count(const CUtlVectorBase<CResourceManifest::LoadingResourceReference_t, CUtlMemory<CResourceManifest::LoadingResourceRe this); // 644
		CResourceManifest::GetLoadingResourceCount(); // 499
	}
	CResourceManifest::HasStartedLoading(); // 497
} /* size: 151, inline expansions: 1 (16 bytes) */

// <023FAC9B> resourcesystem/resourcemanifest.cpp:521
void CResourceManifest::HasStartedLoading()
{
} /* size: 23 */

// <023EEAD5> resourcesystem/resourcemanifest.cpp:529
// variables: 2
void CResourceManifest::SetPriority(ResourceManifestLoadPriority_t nPriority)
{
	const char   __FUNCTION__; // 59063
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 532
	}
} /* size: 0, variables: 1 */

// <023FACC4> resourcesystem/resourcemanifest.cpp:539
// function call: 1
void CResourceManifest::GetDebugName()
{
	CUtlString::Get(); // 541
} /* size: 23, inline expansions: 1 (18 bytes) */

// <023EEAB8> resourcesystem/resourcemanifest.cpp:539
void CResourceManifest::GetDebugName()
{
} /* size: 0 */

// <023EEA65> resourcesystem/resourcemanifest.cpp:547
void CResourceManifest::SetCompletionCallback(ResourceManifestLoadCompletionCallback_t callback, void* pContext)
{
} /* size: 24 */

// <023EE9BA> resourcesystem/resourcemanifest.cpp:559
// variables: 2
void CResourceManifest::InvokeCompletionCallback()
{
	const char   __FUNCTION__; // 59252
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 561
	}
} /* size: 0, variables: 1 */

// <023FAD1E> resourcesystem/resourcemanifest.cpp:571
void CResourceManifest::IsLoadingStreamingData()
{
} /* size: 0 */

// <023EE96A> resourcesystem/resourcemanifest.cpp:579
void CResourceManifest::IsLoaded()
{
} /* size: 9 */

// <023EE8A6> resourcesystem/resourcemanifest.cpp:587
// function calls: 2
void CResourceManifest::MarkLoaded()
{
	CUtlString::Get(); // 541
	CResourceManifest::GetDebugName(); // 589
} /* size: 86, inline expansions: 2 (14 bytes) */

// <023EDB0E> resourcesystem/resourcemanifest.cpp:596
// variables: 9
// function calls: 42
void CResourceManifest::StartLoading()
{
	const char   __FUNCTION__; // 59084
	CAsyncStackTop asyncTrackerTop; // 603
	int nRootResourceCount; // 605
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 600
	}
	{
		int i; // 606
		{
			ResourceHandle_t hResource; // 608
			CResourceName resourceName; // 610
			CStackAnnotation<char const*, char const*, void, void, void, void, void, void, void> streamResourceAnnotation; // 613
			LoadRequest_t request; // 614
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 184
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 180
			ResourceGetName(ResourceHandle_t hResource,
					CResourceName* pTarget);  // 611
			CDeferredCallStackMarker::CDeferredCallStackMarker(); // 613
			CUtlString::Get(); // 541
			CResourceManifest::GetDebugName(); // 613
			CStackAnnotationVariableHandler<char::CStackAnnotationVariableHandler(
							ConstructorVarType var);  // 102
			CStackAnnotationVariableHandler<char const::CStackAnnotationVariableHandler(
							ConstructorVarType var);  // 603
			CStackAnnotationVariableHandler<char::CStackAnnotationVariableHandler(
							ConstructorVarType var);  // 102
			CStackAnnotationVariableHandler<char const::CStackAnnotationVariableHandler(
							ConstructorVarType var);  // 602
			CStackAnnotation<char const::CStackAnnotation(
					const char* pVarDescA,
					ConstructorVarType VarA,
					const char* pVarDescB,
					ConstructorVarType VarB,
					const CCallStackMarkerBase& marker);  // 613
			CResourceManifest::IsLoadingStreamingData(); // 614
			{
			}
			CResourceManifest::GetPriority(); // 614
			LoadRequest_t::LoadRequest_t(
					CResourceManifest* pManifest,
					ResourceManifestLoadPriority_t nPriority,
					bool bLoadStreamingData,
					ResourceHandle_t hReferringResource,
					ResourceHandle_t hResource,
					const CResourceName& resourceName);  // 614
			CStackAnnotation<char const::~CStackAnnotation(); // 616
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 616
			CUtlMemory<CStrongHandleVoid, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::operator[](
					int i);  // 608
			CStrongHandle<ResourceBindingVoid_t>::operator ResourceHandle_t(); // 608
		}
	}
	CUtlString::Get(); // 541
	CResourceManifest::GetDebugName(); // 598
	CUtlMemory<UtlLinkedListElem_t<CResourceManifest::IsIdxValid(
			short unsigned int i);  // 588
	CUtlMemory<UtlLinkedListElem_t<CResourceManifest::operator[](
			short unsigned int i);  // 594
	CUtlLinkedList<CResourceManifest::IsValidIndex(
			short unsigned int i);  // 583
	CUtlMemory<UtlLinkedListElem_t<CResourceManifest::IsIdxAfter(
			short unsigned int i,
			const Iterator_t& it);  // 591
	CUtlLinkedList<CResourceManifest::IsValidIndex(
			short unsigned int i);  // 977
	{
	}
	CUtlMemory<UtlLinkedListElem_t<CResourceManifest::operator[](
			short unsigned int i);  // 367
	CUtlLinkedList<CResourceManifest::InternalElement(
			short unsigned int i);  // 982
	CUtlMemory<UtlLinkedListElem_t<CResourceManifest::operator[](
			short unsigned int i);  // 367
	CUtlLinkedList<CResourceManifest::InternalElement(
			short unsigned int i);  // 1011
	CUtlLinkedList<CResourceManifest::LinkBefore(
			short unsigned int before,
			short unsigned int elem);  // 822
	CopyConstruct<CResourceManifest*>(CResourceManifest** pMemory,
						CResourceManifest* const& src);  // 825
	CUtlMemory<UtlLinkedListElem_t<CResourceManifest::operator[](
			short unsigned int i);  // 482
	CUtlLinkedList<CResourceManifest::Element(
		short unsigned int i);  // 825
	CUtlLinkedList<CResourceManifest::InsertBefore(
			short unsigned int before,
			CResourceManifest* const& src);  // 856
	CUtlLinkedList<CResourceManifest::AddToTail(
			CResourceManifest* const& src);  // 557
	CResourceSystem::AllocateLoadingManifestIndex(
					CResourceManifest* pManifest);  // 601
	CDeferredCallStackMarker::CDeferredCallStackMarker(); // 603
	CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::Count(); // 605
} /* size: 0, variables: 3, inline expansions: 20 (1159 bytes) */

// <023ECE8B> resourcesystem/resourcemanifest.cpp:622
// variables: 5
// function calls: 49
void CResourceManifest::RegisterLoadingResource(CLoadingResource* pLoadingResource)
{
	LoadingResourceReference_t ref; // 627
	const char   __FUNCTION__; // 59231
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 631
	}
	CLoadingResource::GetResource(); // 628
	{
	}
	Count(const CUtlVectorBase<CResourceManifest::LoadingResourceReference_t, CUtlMemory<CResourceManifest::LoadingResourceRe this); // 267
	{
		int mid; // 270
		CUtlMemory<CResourceManifest::LoadingResourceReference_t, int>::operator[](
				int i);  // 609
		Element(const CUtlVectorBase<CResourceManifest::LoadingResourceReference_t, CUtlMemory<CResourceManifest::LoadingResourceRe this,
			int i);  // 271
		LoadingResourceReference_t::operator<(
				const LoadingResourceReference_t& other);  // 33
		CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourceReference_t>::Less(
			const LoadingResourceReference_t& lhs,
			const LoadingResourceReference_t& rhs,
			void *);  // 271
	}
	Find<CResourceManifest::LoadingResourceReference_t>(const CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::Lo this,
								const LoadingResourceReference_t& src);  // 632
	{
	}
	Count(const CUtlVectorBase<CResourceManifest::LoadingResourceReference_t, CUtlMemory<CResourceManifest::LoadingResourceRe this); // 320
	{
		int mid; // 323
		CUtlMemory<CResourceManifest::LoadingResourceReference_t, int>::operator[](
				int i);  // 609
		Element(const CUtlVectorBase<CResourceManifest::LoadingResourceReference_t, CUtlMemory<CResourceManifest::LoadingResourceRe this,
			int i);  // 324
		LoadingResourceReference_t::operator<(
				const LoadingResourceReference_t& other);  // 33
		CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourceReference_t>::Less(
			const LoadingResourceReference_t& lhs,
			const LoadingResourceReference_t& rhs,
			void *);  // 324
	}
	{
	}
	FindLessOrEqual<CResourceManifest::LoadingResourceReference_t>(const CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::Lo this,
									const LoadingResourceReference_t& src,
									bool* pFound);  // 348
	FindLessOrEqual<CResourceManifest::LoadingResourceReference_t>(const CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::Lo this,
									const LoadingResourceReference_t& src);  // 174
	CUtlMemory<CResourceManifest::LoadingResourceReference_t, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CResourceManifest::LoadingResourceReference_t, CUtlMemory<CResourceManifest::LoadingResourceReferenc this,
		int i);  // 1097
	CUtlMemory<CResourceManifest::LoadingResourceReference_t, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CResourceManifest::LoadingResourceReference_t, CUtlMemory<CResourceManifest::LoadingResourceReferenc this,
		int i);  // 1097
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1097
	ShiftElementsRight(const CUtlVectorBase<CResourceManifest::LoadingResourceReference_t, CUtlMemory<CResourceManifest::LoadingResourceReferenc this,
				int elem,
				int num);  // 1224
	CUtlMemory<CResourceManifest::LoadingResourceReference_t, int>::NumAllocated(); // 782
	CUtlMemory<CResourceManifest::LoadingResourceReference_t, int>::IsGrowable(); // 823
	CUtlMemory<CResourceManifest::LoadingResourceReference_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CResourceManifest::LoadingResourceReference_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CResourceManifest::LoadingResourceReference_t, int>::Grow(
		int num);  // 806
	ResetDbgInfo(const CUtlVectorBase<CResourceManifest::LoadingResourceReference_t, CUtlMemory<CResourceManifest::LoadingResourceReferenc this); // 824
	GrowMemory(const CUtlVectorBase<CResourceManifest::LoadingResourceReference_t, CUtlMemory<CResourceManifest::LoadingResourceReferenc this,
			int num);  // 784
	GrowVector(const CUtlVectorBase<CResourceManifest::LoadingResourceReference_t, CUtlMemory<CResourceManifest::LoadingResourceReferenc this,
			int num);  // 1223
	CUtlMemory<CResourceManifest::LoadingResourceReference_t, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CResourceManifest::LoadingResourceReference_t, CUtlMemory<CResourceManifest::LoadingResourceReferenc this,
		int i);  // 1225
	CopyConstruct<CResourceManifest::LoadingResourceReference_t>(LoadingResourceReference_t* pMemory,
									const LoadingResourceReference_t& src);  // 1225
	InsertBefore(const CUtlVectorBase<CResourceManifest::LoadingResourceReference_t, CUtlMemory<CResourceManifest::LoadingResourceReferenc this,
			int elem,
			const LoadingResourceReference_t& src);  // 175
	Insert(const CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingR this,
		const LoadingResourceReference_t& src);  // 636
	CLoadingResource::GetDependencyCount(); // 638
	CUtlSymbolLarge::String(); // 160
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 184
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 180
	ResourceGetName(ResourceHandle_t hResource,
			CResourceName* pTarget);  // 196
	CResourceNameGetter::CResourceNameGetter(
				ResourceHandle_t hResource);  // 638
	CLoadingResource::GetResource(); // 638
	CResourceName::Get(); // 638
	CLoadingResource::GetResourceId(); // 638
	CUtlString::Get(); // 541
	CResourceManifest::GetDebugName(); // 638
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 638
} /* size: 0, variables: 2, inline expansions: 41 (3133 bytes) */

// <023FAD47> resourcesystem/resourcemanifest.cpp:642
// function call: 1
void CResourceManifest::GetLoadingResourceCount()
{
	Count(const CUtlVectorBase<CResourceManifest::LoadingResourceReference_t, CUtlMemory<CResourceManifest::LoadingResourceRe this); // 644
} /* size: 18, inline expansions: 1 (3 bytes) */

// <023ECE6E> resourcesystem/resourcemanifest.cpp:642
void CResourceManifest::GetLoadingResourceCount()
{
} /* size: 0 */

// <023FADA1> resourcesystem/resourcemanifest.cpp:647
// variables: 2
// function calls: 2
void CResourceManifest::GetLoadingResource(int nIndex)
{
	const LoadingResourceReference_t& ref; // 652
	CLoadingResource* pLoadingResource; // 653
	CUtlMemory<CResourceManifest::LoadingResourceReference_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CResourceManifest::LoadingResourceReference_t, CUtlMemory<CResourceManifest::LoadingResourceReferenc this,
			int i);  // 652
} /* size: 43, variables: 2, inline expansions: 2 (22 bytes) */

// <023ECE2A> resourcesystem/resourcemanifest.cpp:647
// variables: 2
void CResourceManifest::GetLoadingResource(int nIndex)
{
	const LoadingResourceReference_t& ref; // 652
	CLoadingResource* pLoadingResource; // 653
} /* size: 0, variables: 2 */

// <023ECC77> resourcesystem/resourcemanifest.cpp:659
// variables: 3
// function calls: 5
void CResourceManifest::ReportUnfinishedState()
{
	int nCount; // 661
	{
		int i; // 662
		{
			CLoadingResource* pLoadingResource; // 664
			CUtlMemory<CResourceManifest::LoadingResourceReference_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CResourceManifest::LoadingResourceReference_t, CUtlMemory<CResourceManifest::LoadingResourceReferenc this,
					int i);  // 652
			CResourceManifest::GetLoadingResource(
						int nIndex);  // 664
		}
	}
	Count(const CUtlVectorBase<CResourceManifest::LoadingResourceReference_t, CUtlMemory<CResourceManifest::LoadingResourceRe this); // 644
	CResourceManifest::GetLoadingResourceCount(); // 661
} /* size: 113, variables: 1, inline expansions: 2 (16 bytes) */

// <023ECB98> resourcesystem/resourcemanifest.cpp:673
// function calls: 2
void CResourceManifest::FinalizeAfterLoading()
{
	CUtlString::Get(); // 541
	CResourceManifest::GetDebugName(); // 675
} /* size: 89, inline expansions: 2 (14 bytes) */

// <023EC403> resourcesystem/resourcemanifest.cpp:679
// function calls: 33
void CResourceManifest::CleanupLoadingData()
{
	RemoveAll(const CUtlVectorBase<CResourceManifest::LoadingResourceReference_t, CUtlMemory<CResourceManifest::LoadingResourceReferenc this); // 1798
	CUtlMemory<CResourceManifest::LoadingResourceReference_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CResourceManifest::LoadingResourceReference_t, int>::Purge(); // 903
	CUtlMemory<CResourceManifest::LoadingResourceReference_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CResourceManifest::LoadingResourceReference_t, CUtlMemory<CResourceManifest::LoadingResourceReferenc this); // 560
	ValidateAlignment<CResourceManifest::LoadingResourceReference_t>(void); // 508
	CUtlMemory<CResourceManifest::LoadingResourceReference_t, int>::Purge(); // 510
	CUtlMemory<CResourceManifest::LoadingResourceReference_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CResourceManifest::LoadingResourceReference_t, CUtlMemory<CResourceManifest::LoadingResourceReferenc this); // 410
	~CUtlVector(const CUtlVector<CResourceManifest::LoadingResourceReference_t, CUtlMemory<CResourceManifest::LoadingResourceReference_t, this); // 38
	~CUtlSortVector(const CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingR this); // 180
	LoadingInfo_t::~LoadingInfo_t(); // 689
	CUtlMemory<UtlLinkedListElem_t<CResourceManifest::operator[](
			short unsigned int i);  // 594
	CUtlLinkedList<CResourceManifest::IsValidIndex(
			short unsigned int i);  // 583
	CUtlMemory<UtlLinkedListElem_t<CResourceManifest::IsIdxValid(
			short unsigned int i);  // 588
	CUtlMemory<UtlLinkedListElem_t<CResourceManifest::IsIdxAfter(
			short unsigned int i,
			const Iterator_t& it);  // 591
	CUtlLinkedList<CResourceManifest::IsValidIndex(
			short unsigned int i);  // 749
	{
	}
	CUtlMemory<UtlLinkedListElem_t<CResourceManifest::operator[](
			short unsigned int i);  // 367
	CUtlLinkedList<CResourceManifest::InternalElement(
			short unsigned int i);  // 752
	Destruct<CResourceManifest*>(CResourceManifest** pMemory); // 753
	CUtlLinkedList<CResourceManifest::Free(
		short unsigned int elem);  // 907
	CUtlLinkedList<CResourceManifest::Remove(
		short unsigned int elem);  // 563
	CUtlLinkedList<CResourceManifest::Count(); // 564
	CUtlMemory<UtlLinkedListElem_t<CResourceManifest::NumAllocated(); // 519
	CUtlLinkedList<CResourceManifest::MaxElementIndex(); // 564
	CUtlMemory<UtlLinkedListElem_t<CResourceManifest::IsExternallyAllocated(); // 905
	CUtlMemory<UtlLinkedListElem_t<CResourceManifest::Purge(); // 903
	CUtlMemory<UtlLinkedListElem_t<CResourceManifest::Purge(); // 643
	CUtlLinkedList<CResourceManifest::ResetDbgInfo(); // 650
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlLinkedListElem_t<CResourceManifest::InvalidIterator(); // 648
	CUtlLinkedList<CResourceManifest::Purge(); // 567
	CResourceSystem::FreeLoadingManifestIndex(
				LoadingResourceManifestIndex_t nIndex);  // 685
} /* size: 0, inline expansions: 33 (1368 bytes) */

// <023EC293> resourcesystem/resourcemanifest.cpp:697
// variables: 2
// function calls: 4
void CResourceManifest::IsRootResource(ResourceHandle_t hResource)
{
	int nCount; // 699
	{
		int i; // 700
		CUtlMemory<CStrongHandleVoid, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::operator[](
				int i);  // 702
		CStrongHandle<ResourceBindingVoid_t>::operator==(
				ResourceHandle_t hResource);  // 702
	}
	CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::Count(); // 699
} /* size: 59, variables: 1, inline expansions: 1 (4 bytes) */

// <023EC261> resourcesystem/resourcemanifest.cpp:711
void CResourceManifest::GetNextFenceManifest()
{
} /* size: 9 */

// <023EC22E> resourcesystem/resourcemanifest.cpp:719
void CResourceManifest::IsMarkedForDeletion()
{
} /* size: 9 */

// <023EC1FB> resourcesystem/resourcemanifest.cpp:727
void CResourceManifest::MarkForDeletion()
{
} /* size: 9 */

// <023EC1C8> resourcesystem/resourcemanifest.cpp:735
void CResourceManifest::IsInLoadQueue()
{
} /* size: 9 */

// <023EC185> resourcesystem/resourcemanifest.cpp:743
void CResourceManifest::MarkInLoadQueue(bool bInLoadQueue)
{
} /* size: 9 */

// <023EC152> resourcesystem/resourcemanifest.cpp:751
void CResourceManifest::IsInInitialGroup()
{
} /* size: 12 */

// <023EC10C> resourcesystem/resourcemanifest.cpp:759
void CResourceManifest::AdvanceToNextFenceManifest()
{
} /* size: 81 */

// <023EC0D9> resourcesystem/resourcemanifest.cpp:776
void CResourceManifest::GetManifestIndex()
{
} /* size: 8 */

// <023FAE81> resourcesystem/resourcemanifest.cpp:784
void CResourceManifest::GetState()
{
	{
	}
} /* size: 0 */

// <023EC07D> resourcesystem/resourcemanifest.cpp:784
// variables: 2
void CResourceManifest::GetState()
{
	const char   __FUNCTION__; // 59000
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 786
	}
} /* size: 0, variables: 1 */

// <023EBDEC> resourcesystem/resourcemanifest.cpp:794
// variables: 6
// function calls: 6
void CResourceManifest::GetStateInternal()
{
	const char   __FUNCTION__; // 59147
	int nCount; // 812
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 798
	}
	{
		int i; // 813
		{
			CLoadingResource* pLoadingResource; // 815
			CUtlMemory<CResourceManifest::LoadingResourceReference_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CResourceManifest::LoadingResourceReference_t, CUtlMemory<CResourceManifest::LoadingResourceReferenc this,
					int i);  // 652
			CResourceManifest::GetLoadingResource(
						int nIndex);  // 815
		}
	}
	{
		ActiveManifestState_t nSubsequentState; // 823
	}
	CResourceManifest::HasStartedLoading(); // 809
	Count(const CUtlVectorBase<CResourceManifest::LoadingResourceReference_t, CUtlMemory<CResourceManifest::LoadingResourceRe this); // 644
	CResourceManifest::GetLoadingResourceCount(); // 812
} /* size: 0, variables: 2, inline expansions: 3 (23 bytes) */

// <023EBB1D> resourcesystem/resourcemanifest.cpp:914
// variables: 5
// function calls: 9
void CResourceManifest::CreateFenceManifest(int nNumResources, const char ** ppResources)
{
	CFmtStr fenceManifestName; // 916
	ResourceManifestLoadBehavior_t nType; // 917
	ResourceManifestLoadPriority_t nPriority; // 918
	ResourceManifestCreationInfo_t info; // 919
	CResourceManifest* pFenceManifest; // 920
	CUtlString::Get(); // 916
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 80
	CFmtStrN<256>::Get(); // 919
	ResourceManifestCreationInfo_t::ResourceManifestCreationInfo_t(
					int nCount,
					const char ** ppResourceFiles,
					ResourceManifestLoadBehavior_t nLoadBehavior,
					const char* pDebugName,
					ResourceManifestLoadPriority_t nPriority);  // 919
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 927
} /* size: 304, variables: 5, inline expansions: 9 (230 bytes) */

