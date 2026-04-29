
//
// resourcesystem/codemanifestmanager.cpp
//
//	referenced by: libengine2.so
//
//	functions: 27
//

// <0219450F> resourcesystem/codemanifestmanager.cpp:21
// variables: 11
// function calls: 33
void CCodeResourceManifestManager::AddManifestDescToNamedManifest(ResourceManifestDesc_t* pDesc, CodeResourceManifest_t* pManifest)
{
	{
		size_t iGroup; // 24
		{
			const ManifestEntryGroup_t* pGroup; // 26
			CodeResourceManifestFenceGroup_t* pManifestGroup; // 27
			{
				const ResourceManifestEntry_t& entry; // 29
				const initializer_list<ResourceManifestEntry_t>& __for_range; // 20930
				const_iterator __for_begin; // 19436
				const_iterator __for_end; // 19436
				{
					ResourceManifestEntry_t* pEntry; // 31
					CPathBufferString fixedResourceNameBuf; // 32
					const char* pFixedResourceName; // 33
					UtlSymId_t id; // 40
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 781
					CBufferString::operator char const*(); // 37
					CUtlSymbol::IsValid(); // 88
					CUtlSymbolTable::FindElement(
							const char* pString);  // 90
					CUtlStringMap<ResourceManifestEntry_t::Find(
						const char* pString);  // 40
					CUtlVectorBase<ResourceManifestEntry_t::Count(); // 53
					{
					}
					CUtlMemory<ResourceManifestEntry_t::operator[](
							int i);  // 588
					CUtlVectorBase<ResourceManifestEntry_t::operator[](
							int i);  // 54
					CUtlStringMap<ResourceManifestEntry_t::operator[](
							IndexType_t n);  // 43
					CUtlVectorBase<ResourceManifestEntry_t::Count(); // 53
					{
					}
					CUtlMemory<ResourceManifestEntry_t::operator[](
							int i);  // 588
					CUtlVectorBase<ResourceManifestEntry_t::operator[](
							int i);  // 54
					CUtlStringMap<ResourceManifestEntry_t::operator[](
							IndexType_t n);  // 44
					CBufferString::~CBufferString(); // 587
					CBufferStringN<200>::~CBufferStringN(); // 51
					CBufferString::InitMinConstruct(
							bool bGrowable);  // 712
					CBufferString::CBufferString(); // 591
					CBufferStringN<200>::CBufferStringN(); // 32
					CUtlSymbol::IsValid(); // 64
					CUtlSymbolTable::AddStringElement(
							const char* pString);  // 37
					CUtlVectorBase<ResourceManifestEntry_t::Count(); // 43
					CUtlMemory<ResourceManifestEntry_t::operator[](
							int i);  // 588
					CUtlVectorBase<ResourceManifestEntry_t::operator[](
							int i);  // 47
					{
					}
					CUtlMemory<ResourceManifestEntry_t::operator[](
							int i);  // 588
					CUtlVectorBase<ResourceManifestEntry_t::operator[](
							int i);  // 41
					CUtlStringMap<ResourceManifestEntry_t::operator[](
							const char* pString);  // 35
					CUtlStringMap<ResourceManifestEntry_t::operator[](
							const char* pString);  // 49
				}
				initializer_list<ResourceManifestEntry_t>::begin(); // 29
				initializer_list<ResourceManifestEntry_t>::size(); // 79
				initializer_list<ResourceManifestEntry_t>::end(); // 29
			}
			initializer_list<std::initializer_list<ResourceManifestEntry_t> >::begin(); // 26
		}
		initializer_list<std::initializer_list<ResourceManifestEntry_t> >::size(); // 24
	}
} /* size: 0 */

// <02195CA0> resourcesystem/codemanifestmanager.cpp:62
void CCodeResourceManifestManager::RemoveManifestDescFromNamedManifest(ResourceManifestDesc_t* pDesc, CodeResourceManifest_t* pManifest)
{
} /* size: 0 */

// <0219566F> resourcesystem/codemanifestmanager.cpp:62
// variables: 13
// function calls: 24
void ResourceManifestDesc_t::RemoveManifestDescFromNamedManifest()
{
	{
		size_t iGroup; // 68
		initializer_list<std::initializer_list<ResourceManifestEntry_t> >::size(); // 68
		{
			const ManifestEntryGroup_t* pGroup; // 70
			CodeResourceManifestFenceGroup_t* pManifestGroup; // 71
			{
				const ResourceManifestEntry_t& entry; // 73
				const initializer_list<ResourceManifestEntry_t>& __for_range; // 56500
				const_iterator __for_begin; // 56511
				const_iterator __for_end; // 56522
				{
					ResourceManifestEntry_t* pEntry; // 75
					CPathBufferString fixedResourceNameBuf; // 79
					const char* pFixedResourceName; // 80
					UtlSymId_t id; // 88
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 781
					CBufferString::operator char const*(); // 84
					CBufferString::InitMinConstruct(
							bool bGrowable);  // 712
					CBufferString::CBufferString(); // 591
					CBufferStringN<200>::CBufferStringN(); // 79
					CUtlSymbol::IsValid(); // 88
					CUtlSymbolTable::FindElement(
							const char* pString);  // 90
					CUtlStringMap<ResourceManifestEntry_t::Find(
						const char* pString);  // 88
					{
						ResourceManifestEntry_t* pPrev; // 91
						ResourceManifestEntry_t* pCur; // 92
						CUtlVectorBase<ResourceManifestEntry_t::Count(); // 53
						{
						}
						CUtlMemory<ResourceManifestEntry_t::operator[](
								int i);  // 588
						CUtlVectorBase<ResourceManifestEntry_t::operator[](
								int i);  // 54
						CUtlStringMap<ResourceManifestEntry_t::operator[](
								IndexType_t n);  // 92
						CUtlVectorBase<ResourceManifestEntry_t::Count(); // 53
						{
						}
						CUtlMemory<ResourceManifestEntry_t::operator[](
								int i);  // 588
						CUtlVectorBase<ResourceManifestEntry_t::operator[](
								int i);  // 54
						CUtlStringMap<ResourceManifestEntry_t::operator[](
								IndexType_t n);  // 110
					}
					CBufferString::~CBufferString(); // 587
					CBufferStringN<200>::~CBufferStringN(); // 114
				}
				initializer_list<ResourceManifestEntry_t>::begin(); // 73
				initializer_list<ResourceManifestEntry_t>::size(); // 79
				initializer_list<ResourceManifestEntry_t>::end(); // 73
			}
			initializer_list<std::initializer_list<ResourceManifestEntry_t> >::begin(); // 70
		}
	}
} /* size: 0 */

// <02194435> resourcesystem/codemanifestmanager.cpp:62
// variables: 13
void CCodeResourceManifestManager::RemoveManifestDescFromNamedManifest(ResourceManifestDesc_t* pDesc, CodeResourceManifest_t* pManifest)
{
	{
		size_t iGroup; // 68
		{
			const ManifestEntryGroup_t* pGroup; // 70
			CodeResourceManifestFenceGroup_t* pManifestGroup; // 71
			{
				const ResourceManifestEntry_t& entry; // 73
				const initializer_list<ResourceManifestEntry_t>& __for_range; // 20930
				const_iterator __for_begin; // 19436
				const_iterator __for_end; // 19436
				{
					ResourceManifestEntry_t* pEntry; // 75
					CPathBufferString fixedResourceNameBuf; // 79
					const char* pFixedResourceName; // 80
					UtlSymId_t id; // 88
					{
						ResourceManifestEntry_t* pPrev; // 91
						ResourceManifestEntry_t* pCur; // 92
					}
				}
			}
		}
	}
} /* size: 0 */

// <02193068> resourcesystem/codemanifestmanager.cpp:122
// variables: 19
// function calls: 70
void CCodeResourceManifestManager::RegisterNamedManifest(ResourceManifestDesc_t* pDesc)
{
	const char   __FUNCTION__; // 14901
	{
		const ManifestEntryGroup_t& group; // 125
		initializer_list<std::initializer_list<ResourceManifestEntry_t> >& __for_range; // 56395
		const_iterator __for_begin; // 19699
		const_iterator __for_end; // 19699
		{
			const ResourceManifestEntry_t& entry; // 127
			const initializer_list<ResourceManifestEntry_t>& __for_range; // 20930
			const_iterator __for_begin; // 19436
			const_iterator __for_end; // 19436
			{
				ResourceManifestEntry_t* pEntry; // 129
				const char* pResourceName; // 133
				const char* pResourceFileExtension; // 134
				{
					CPathBufferString fixedResourceName; // 141
					CBufferString::InitMinConstruct(
							bool bGrowable);  // 712
					CBufferString::CBufferString(); // 596
					CBufferString::Set(
						const char* pString,
						int nChars,
						bool bExact);  // 601
					CBufferStringN<200>::CBufferStringN(
							const char* pString,
							int nChars,
							bool bExact,
							bool bGrowable);  // 141
					CBufferString::~CBufferString(); // 587
					CBufferStringN<200>::~CBufferStringN(); // 144
				}
			}
			initializer_list<ResourceManifestEntry_t>::begin(); // 127
			initializer_list<ResourceManifestEntry_t>::size(); // 79
			initializer_list<ResourceManifestEntry_t>::end(); // 127
		}
		initializer_list<std::initializer_list<ResourceManifestEntry_t> >::begin(); // 125
		initializer_list<std::initializer_list<ResourceManifestEntry_t> >::size(); // 79
		initializer_list<std::initializer_list<ResourceManifestEntry_t> >::end(); // 125
	}
	{
		CFmtStr manifestName; // 151
		UtlSymId_t nameId; // 152
		CodeResourceManifest_t* pNamedManifest; // 162
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 80
		CFmtStrN<256>::Get(); // 152
		CUtlSymbol::IsValid(); // 88
		CUtlSymbolTable::FindElement(
				const char* pString);  // 90
		CUtlStringMap<CodeResourceManifest_t::Find(
			const char* pString);  // 152
		CUtlVectorBase<CodeResourceManifest_t::Count(); // 53
		{
		}
		CUtlMemory<CodeResourceManifest_t::operator[](
				int i);  // 588
		CUtlVectorBase<CodeResourceManifest_t::operator[](
				int i);  // 54
		CUtlStringMap<CodeResourceManifest_t::operator[](
				IndexType_t n);  // 155
		CUtlMemory<CodeResourceManifestFenceGroup_t::ValidateGrowSize(); // 475
		CUtlMemory<CodeResourceManifestFenceGroup_t::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CodeResourceManifestFenceGroup_t::ResetDbgInfo(); // 530
		CUtlVectorBase<CodeResourceManifestFenceGroup_t::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CodeResourceManifestFenceGroup_t::CUtlVector(); // 444
		CUtlMemory<ResourceManifestDesc_t::ValidateGrowSize(); // 475
		CUtlMemory<ResourceManifestDesc_t::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<ResourceManifestDesc_t::ResetDbgInfo(); // 530
		CUtlVectorBase<ResourceManifestDesc_t::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<ResourceManifestDesc_t::CUtlVector(); // 444
		CodeResourceManifest_t::CodeResourceManifest_t(); // 162
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 80
		CFmtStrN<256>::Get(); // 164
		CUtlSymbol::IsValid(); // 64
		CUtlSymbolTable::AddStringElement(
				const char* pString);  // 109
		CUtlVectorBase<CodeResourceManifest_t::Count(); // 111
		CUtlMemory<CodeResourceManifest_t::NumAllocated(); // 1196
		CUtlMemory<CodeResourceManifest_t::operator[](
				int i);  // 602
		CUtlVectorBase<CodeResourceManifest_t::Element(
			int i);  // 1201
		CopyConstruct<CodeResourceManifest_t*>(CodeResourceManifest_t** pMemory,
							CodeResourceManifest_t* const& src);  // 1201
		CUtlMemory<CodeResourceManifest_t::Base(); // 112
		CUtlVectorBase<CodeResourceManifest_t::Base(); // 368
		CUtlVectorBase<CodeResourceManifest_t::ResetDbgInfo(); // 824
		CUtlVectorBase<CodeResourceManifest_t::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<CodeResourceManifest_t::AddToTail(
				CodeResourceManifest_t* const& src);  // 118
		{
		}
		CUtlMemory<CodeResourceManifest_t::operator[](
				int i);  // 588
		CUtlVectorBase<CodeResourceManifest_t::operator[](
				int i);  // 126
		{
		}
		CUtlStringMap<CodeResourceManifest_t::Insert(
			const char* pString,
			CodeResourceManifest_t* const& item);  // 164
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 165
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 80
		CFmtStrN<256>::Get(); // 157
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 165
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 169
	}
	{
		CFmtStr groupManifestName; // 176
		CodeResourceManifest_t* pGroupManifest; // 177
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 80
		CFmtStrN<256>::Get(); // 177
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 179
	}
} /* size: 0, variables: 1 */

// <0219268C> resourcesystem/codemanifestmanager.cpp:185
// variables: 8
// function calls: 34
void CCodeResourceManifestManager::UnregisterNamedManifest(ResourceManifestDesc_t* pDesc)
{
	const char   __FUNCTION__; // 14922
	{
		CFmtStr manifestName; // 195
		UtlSymId_t nameId; // 196
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 197
		}
		{
			CodeResourceManifest_t* pManifest; // 200
			CUtlVectorBase<CodeResourceManifest_t::Count(); // 53
			{
			}
			CUtlMemory<CodeResourceManifest_t::operator[](
					int i);  // 588
			CUtlVectorBase<CodeResourceManifest_t::operator[](
					int i);  // 54
			CUtlStringMap<CodeResourceManifest_t::operator[](
					IndexType_t n);  // 200
			CUtlVectorBase<CodeResourceManifest_t::Count(); // 53
			{
			}
			CUtlMemory<CodeResourceManifest_t::operator[](
					int i);  // 588
			CUtlVectorBase<CodeResourceManifest_t::operator[](
					int i);  // 54
			CUtlStringMap<CodeResourceManifest_t::operator[](
					IndexType_t n);  // 202
		}
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 80
		CFmtStrN<256>::Get(); // 196
		CUtlSymbol::IsValid(); // 88
		CUtlSymbolTable::FindElement(
				const char* pString);  // 90
		CUtlStringMap<CodeResourceManifest_t::Find(
			const char* pString);  // 196
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 204
	}
	{
		CFmtStr groupManifestName; // 209
		UtlSymId_t id; // 210
		{
			CodeResourceManifest_t* pManifest; // 213
			CUtlVectorBase<CodeResourceManifest_t::Count(); // 53
			{
			}
			CUtlMemory<CodeResourceManifest_t::operator[](
					int i);  // 588
			CUtlVectorBase<CodeResourceManifest_t::operator[](
					int i);  // 54
			CUtlStringMap<CodeResourceManifest_t::operator[](
					IndexType_t n);  // 213
			CCodeResourceManifestManager::RemoveManifestDescFromNamedManifest(
								ResourceManifestDesc_t* pDesc,
								CodeResourceManifest_t* pManifest);  // 214
		}
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 80
		CFmtStrN<256>::Get(); // 210
		CUtlSymbol::IsValid(); // 88
		CUtlSymbolTable::FindElement(
				const char* pString);  // 90
		CUtlStringMap<CodeResourceManifest_t::Find(
			const char* pString);  // 210
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 216
	}
	CResourceSystem::IsShuttingDown(); // 187
} /* size: 0, variables: 1, inline expansions: 1 (7 bytes) */

// <021923D5> resourcesystem/codemanifestmanager.cpp:222
// variables: 2
// function calls: 7
void CCodeResourceManifestManager::FindCodeBasedManifest(const char* pResourceName, bool* pOutWasCodeBasedManifestName)
{
	const char* pResourceFileExtension; // 225
	UtlSymId_t nNamedManifestId; // 233
	CUtlSymbol::IsValid(); // 88
	CUtlSymbolTable::FindElement(
			const char* pString);  // 90
	CUtlStringMap<CodeResourceManifest_t::Find(
		const char* pString);  // 233
	CUtlVectorBase<CodeResourceManifest_t::Count(); // 53
	{
	}
	CUtlMemory<CodeResourceManifest_t::operator[](
			int i);  // 588
	CUtlVectorBase<CodeResourceManifest_t::operator[](
			int i);  // 54
	CUtlStringMap<CodeResourceManifest_t::operator[](
			IndexType_t n);  // 237
} /* size: 0, variables: 2, inline expansions: 7 (105 bytes) */

// <021915C2> resourcesystem/codemanifestmanager.cpp:243
// variables: 12
// function calls: 57
void CCodeResourceManifestManager::VisitCodeManifest(CManifestResourceGatherer* pGatherer, CodeResourceManifest_t* pCodeManifest, CodeManifestVisitMode_t nVisitMode)
{
	int nNumGroups; // 248
	{
		int iFenceGroup; // 249
		{
			CodeResourceManifestFenceGroup_t* pGroup; // 256
			int nCount; // 257
			{
				int iEntry; // 258
				{
					bool bComputedHandle; // 260
					ResourceHandle_t hResource; // 263
					const char* pResourceName; // 267
					{
						ResourceManifestEntry_t* pEntry; // 268
						{
							CFmtStr codeManifestName; // 273
							UtlSymId_t nEntryId; // 274
							CBufferString::ReadBuffer(); // 1374
							CBufferString::ReadBuffer(); // 771
							CBufferString::Get(); // 80
							CFmtStrN<256>::Get(); // 274
							CUtlMemoryBlockAllocator::PageFromBlock(
									blockpooloffset_t nBlock);  // 508
							CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
									int i);  // 509
							CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
									int i);  // 595
							CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
									int i);  // 511
							CUtlMemoryBlockAllocator::OffsetFromBlock(
									blockpooloffset_t nBlock);  // 511
							CUtlMemoryBlockAllocator::MemFromBlock(
									blockpooloffset_t nIndex);  // 186
							CUtlSymbolTable::StringFromIndex(
									const blockpooloffset_t& index);  // 110
							CUtlMemory<unsigned int, int>::operator[](
									int i);  // 609
							CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
								int i);  // 110
							CUtlSymbolTable::GetElementString(
									int nElement);  // 182
							CUtlStringMap<ResourceManifestEntry_t::String(
								int n);  // 273
							CUtlSymbol::IsValid(); // 88
							CUtlSymbolTable::FindElement(
									const char* pString);  // 90
							CUtlStringMap<CodeResourceManifest_t::Find(
								const char* pString);  // 274
							CUtlVectorBase<CodeResourceManifest_t::Count(); // 53
							{
							}
							CUtlMemory<CodeResourceManifest_t::operator[](
									int i);  // 588
							CUtlVectorBase<CodeResourceManifest_t::operator[](
									int i);  // 54
							CUtlStringMap<CodeResourceManifest_t::operator[](
									IndexType_t n);  // 277
							CBufferString::~CBufferString(); // 587
							CBufferStringN<256>::~CBufferStringN(); // 41
							CFmtStrN<256>::~CFmtStrN(); // 280
						}
						{
							CResourceName resourceName; // 293
							CBufferString::~CBufferString(); // 587
							CBufferStringN<200>::~CBufferStringN(); // 318
							CResourceName::~CResourceName(); // 296
						}
						CUtlMemory<unsigned int, int>::operator[](
								int i);  // 609
						CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
							int i);  // 110
						CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
								int i);  // 509
						CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
								int i);  // 595
						CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
								int i);  // 511
						CUtlMemoryBlockAllocator::OffsetFromBlock(
								blockpooloffset_t nBlock);  // 511
						CUtlMemoryBlockAllocator::MemFromBlock(
								blockpooloffset_t nIndex);  // 186
						CUtlSymbolTable::StringFromIndex(
								const blockpooloffset_t& index);  // 110
						CUtlSymbolTable::GetElementString(
								int nElement);  // 182
						CUtlStringMap<ResourceManifestEntry_t::String(
							int n);  // 284
						ThreadInterlockedIncrement(volatile int32* p); // 576
						CInterlockedIntT<int, 4>::operator++(); // 570
						CStrongHandle<ResourceBindingVoid_t>::Init(
							ResourceHandleTyped_t hResource);  // 659
						CStrongHandle<ResourceBindingVoid_t>::operator=(
								ResourceHandleTyped_t hResource);  // 275
						CStrongHandleVoid::operator=(
								ResourceHandle_t hResource);  // 298
						CStrongHandle<ResourceBindingVoid_t>::HasHandle(); // 303
						CStrongHandle<ResourceBindingVoid_t>::Init(
							ResourceHandleTyped_t hResource);  // 659
						CStrongHandle<ResourceBindingVoid_t>::operator=(
								ResourceHandleTyped_t hResource);  // 275
						CStrongHandleVoid::operator=(
								ResourceHandle_t hResource);  // 309
						CUtlVectorBase<ResourceManifestEntry_t::Count(); // 53
						{
						}
						CUtlMemory<ResourceManifestEntry_t::operator[](
								int i);  // 588
						CUtlVectorBase<ResourceManifestEntry_t::operator[](
								int i);  // 54
						CUtlStringMap<ResourceManifestEntry_t::operator[](
								IndexType_t n);  // 268
					}
				}
			}
			CUtlMemory<CodeResourceManifestFenceGroup_t::operator[](
					int i);  // 588
			CUtlVectorBase<CodeResourceManifestFenceGroup_t::operator[](
					int i);  // 256
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
			CUtlSymbolTable::GetNumStrings(); // 177
			CUtlStringMap<ResourceManifestEntry_t::GetNumStrings(); // 257
		}
	}
	CUtlVectorBase<CodeResourceManifestFenceGroup_t::Count(); // 248
} /* size: 0, variables: 1, inline expansions: 1 (4 bytes) */

// <0219639E> resourcesystem/codemanifestmanager.cpp:327
// variables: 2
// function calls: 34
void CCodeResourceManifestManager::FindCodeManifest(const char* pName, bool bCreateIfNotFound)
{
	UtlSymId_t id; // 329
	CodeResourceManifest_t* pManifest; // 336
	CUtlSymbol::IsValid(); // 88
	CUtlSymbolTable::FindElement(
			const char* pString);  // 90
	CUtlStringMap<CodeResourceManifest_t::Find(
		const char* pString);  // 329
	CUtlVectorBase<CodeResourceManifest_t::Count(); // 53
	{
	}
	CUtlMemory<CodeResourceManifest_t::operator[](
			int i);  // 588
	CUtlVectorBase<CodeResourceManifest_t::operator[](
			int i);  // 54
	CUtlStringMap<CodeResourceManifest_t::operator[](
			IndexType_t n);  // 331
	CUtlMemory<CodeResourceManifestFenceGroup_t::ValidateGrowSize(); // 475
	CUtlMemory<CodeResourceManifestFenceGroup_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CodeResourceManifestFenceGroup_t::ResetDbgInfo(); // 530
	CUtlVectorBase<CodeResourceManifestFenceGroup_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CodeResourceManifestFenceGroup_t::CUtlVector(); // 444
	CUtlMemory<ResourceManifestDesc_t::ValidateGrowSize(); // 475
	CUtlMemory<ResourceManifestDesc_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ResourceManifestDesc_t::ResetDbgInfo(); // 530
	CUtlVectorBase<ResourceManifestDesc_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ResourceManifestDesc_t::CUtlVector(); // 444
	CodeResourceManifest_t::CodeResourceManifest_t(); // 336
	CUtlSymbol::IsValid(); // 64
	CUtlSymbolTable::AddStringElement(
			const char* pString);  // 109
	CUtlVectorBase<CodeResourceManifest_t::Count(); // 111
	CUtlMemory<CodeResourceManifest_t::NumAllocated(); // 1196
	CUtlMemory<CodeResourceManifest_t::operator[](
			int i);  // 602
	CUtlVectorBase<CodeResourceManifest_t::Element(
		int i);  // 1201
	CopyConstruct<CodeResourceManifest_t*>(CodeResourceManifest_t** pMemory,
						CodeResourceManifest_t* const& src);  // 1201
	CUtlMemory<CodeResourceManifest_t::Base(); // 112
	CUtlVectorBase<CodeResourceManifest_t::Base(); // 368
	CUtlVectorBase<CodeResourceManifest_t::ResetDbgInfo(); // 824
	CUtlVectorBase<CodeResourceManifest_t::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CodeResourceManifest_t::AddToTail(
			CodeResourceManifest_t* const& src);  // 118
	{
	}
	CUtlMemory<CodeResourceManifest_t::operator[](
			int i);  // 588
	CUtlVectorBase<CodeResourceManifest_t::operator[](
			int i);  // 126
	{
	}
	CUtlStringMap<CodeResourceManifest_t::Insert(
		const char* pString,
		CodeResourceManifest_t* const& item);  // 337
	CCodeResourceManifestManager::FindCodeManifest(
			const char* pName,
			bool bCreateIfNotFound);  // 327
} /* size: 0, variables: 2, inline expansions: 34 (977 bytes) */

// <02191576> resourcesystem/codemanifestmanager.cpp:327
// variables: 2
void CCodeResourceManifestManager::FindCodeManifest(const char* pName, bool bCreateIfNotFound)
{
	UtlSymId_t id; // 329
	CodeResourceManifest_t* pManifest; // 336
} /* size: 0, variables: 2 */

// <02196E97> resourcesystem/codemanifestmanager.cpp:344
// variable: 1
void CCodeResourceManifestManager::IsResourceManifestGroupKnown(const char* pManifestGroupName)
{
	CFmtStr codeManifestName; // 352
} /* size: 88, variables: 1 */

// <02196CA6> resourcesystem/codemanifestmanager.cpp:344
// variable: 1
// function calls: 7
void CCodeResourceManifestManager::IsResourceManifestGroupKnown(const char* pManifestGroupName)
{
	CFmtStr codeManifestName; // 352
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 80
	CFmtStrN<256>::Get(); // 353
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 354
} /* size: 165, variables: 1, inline expansions: 7 (184 bytes) */

// <02197111> resourcesystem/codemanifestmanager.cpp:359
// variable: 1
void CCodeResourceManifestManager::IsResourceManifestNamedKnown(const char* pManifestName)
{
	CFmtStr codeManifestName; // 367
} /* size: 88, variables: 1 */

// <02196F20> resourcesystem/codemanifestmanager.cpp:359
// variable: 1
// function calls: 7
void CCodeResourceManifestManager::IsResourceManifestNamedKnown(const char* pManifestName)
{
	CFmtStr codeManifestName; // 367
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 80
	CFmtStrN<256>::Get(); // 368
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 369
} /* size: 165, variables: 1, inline expansions: 7 (184 bytes) */

// <02195EAE> resourcesystem/codemanifestmanager.cpp:375
// variable: 1
void CCodeResourceManifestManager::DisconnectResourceManifestHandles(CodeManifestNameSymbol_t nNameId)
{
	CManifestResourceGatherer resourceGatherer; // 380
} /* size: 25, variables: 1 */

// <02195D12> resourcesystem/codemanifestmanager.cpp:375
// variable: 1
// function calls: 4
void CCodeResourceManifestManager::DisconnectResourceManifestHandles(CodeManifestNameSymbol_t nNameId)
{
	CManifestResourceGatherer resourceGatherer; // 380
	CUtlVectorBase<CodeResourceManifest_t::Count(); // 53
	{
	}
	CUtlMemory<CodeResourceManifest_t::operator[](
			int i);  // 588
	CUtlVectorBase<CodeResourceManifest_t::operator[](
			int i);  // 54
	CUtlStringMap<CodeResourceManifest_t::operator[](
			IndexType_t n);  // 381
} /* size: 0, variables: 1, inline expansions: 4 (48 bytes) */

// <02190E77> resourcesystem/codemanifestmanager.cpp:387
// variables: 5
// function calls: 20
void CCodeResourceManifestManager::GetCodeManifestResources(const char* pName, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& resourceNames)
{
	UtlSymId_t id; // 389
	CManifestResourceGatherer resourceGatherer; // 396
	{
		int iGroup; // 399
		{
			const char ** ppResources; // 401
			{
				int iResource; // 402
				CUtlMemory<CUtlString, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
					int i);  // 1252
				CUtlString::Get(); // 354
				CUtlString::CUtlString(
						const CUtlString& string);  // 1514
				Construct<CUtlString, CUtlString>(CUtlString* pMemory); // 1252
				CUtlMemory<CUtlString, int>::NumAllocated(); // 1247
				CUtlMemory<CUtlString, int>::Base(); // 112
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
						int num);  // 1249
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
						CUtlString& src);  // 404
				CUtlString::~CUtlString(); // 404
				CUtlString::CUtlString(
						const char* pString);  // 404
			}
		}
	}
	CUtlSymbol::IsValid(); // 88
	CUtlSymbolTable::FindElement(
			const char* pString);  // 90
	CUtlStringMap<CodeResourceManifest_t::Find(
		const char* pString);  // 389
	CUtlVectorBase<CodeResourceManifest_t::Count(); // 53
	{
	}
	CUtlMemory<CodeResourceManifest_t::operator[](
			int i);  // 588
	CUtlVectorBase<CodeResourceManifest_t::operator[](
			int i);  // 54
	CUtlStringMap<CodeResourceManifest_t::operator[](
			IndexType_t n);  // 397
} /* size: 0, variables: 2, inline expansions: 7 (181 bytes) */

// <02195F12> resourcesystem/codemanifestmanager.cpp:414
// variable: 1
// function calls: 8
void CCodeResourceManifestManager::GetNamedManifestResources(const char* pName, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& resourceNames)
{
	CFmtStr codeManifestName; // 422
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 80
	CFmtStrN<256>::Get(); // 423
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 424
	CCodeResourceManifestManager::GetNamedManifestResources(
					const char* pName,
					CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& resourceNames);  // 414
} /* size: 252, variables: 1, inline expansions: 8 (266 bytes) */

// <02190E37> resourcesystem/codemanifestmanager.cpp:414
// variable: 1
void CCodeResourceManifestManager::GetNamedManifestResources(const char* pName, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& resourceNames)
{
	CFmtStr codeManifestName; // 422
} /* size: 0, variables: 1 */

// <02196164> resourcesystem/codemanifestmanager.cpp:429
// variable: 1
// function calls: 8
void CCodeResourceManifestManager::GetGroupManifestResources(const char* pGroupName, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& resourceNames)
{
	CFmtStr codeManifestName; // 437
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 80
	CFmtStrN<256>::Get(); // 438
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 439
	CCodeResourceManifestManager::GetNamedManifestResources(
					const char* pName,
					CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& resourceNames);  // 414
} /* size: 252, variables: 1, inline expansions: 8 (266 bytes) */

// <02190DF7> resourcesystem/codemanifestmanager.cpp:429
// variable: 1
void CCodeResourceManifestManager::GetGroupManifestResources(const char* pGroupName, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& resourceNames)
{
	CFmtStr codeManifestName; // 437
} /* size: 0, variables: 1 */

// <02190B62> resourcesystem/codemanifestmanager.cpp:444
// function calls: 10
void CodeResourceManifest_t::CodeResourceManifest_t()
{
	CUtlMemory<CodeResourceManifestFenceGroup_t::ValidateGrowSize(); // 475
	CUtlMemory<CodeResourceManifestFenceGroup_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CodeResourceManifestFenceGroup_t::ResetDbgInfo(); // 530
	CUtlVectorBase<CodeResourceManifestFenceGroup_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CodeResourceManifestFenceGroup_t::CUtlVector(); // 444
	CUtlMemory<ResourceManifestDesc_t::ValidateGrowSize(); // 475
	CUtlMemory<ResourceManifestDesc_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ResourceManifestDesc_t::ResetDbgInfo(); // 530
	CUtlVectorBase<ResourceManifestDesc_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ResourceManifestDesc_t::CUtlVector(); // 444
} /* size: 0, inline expansions: 10 (0 bytes) */

// <02190B45> resourcesystem/codemanifestmanager.cpp:444
void CodeResourceManifest_t::CodeResourceManifest_t()
{
} /* size: 0 */

// <021903E5> resourcesystem/codemanifestmanager.cpp:452
// variable: 1
// function calls: 38
void CodeResourceManifest_t::~CodeResourceManifest_t()
{
	{
		int i; // 1807
		CUtlMemory<CodeResourceManifestFenceGroup_t::operator[](
				int i);  // 602
		CUtlVectorBase<CodeResourceManifestFenceGroup_t::Element(
			int i);  // 1809
		CUtlVectorBase<ResourceManifestEntry_t::RemoveAll(); // 1798
		CUtlMemory<ResourceManifestEntry_t::IsExternallyAllocated(); // 905
		CUtlMemory<ResourceManifestEntry_t::Purge(); // 903
		CUtlMemory<ResourceManifestEntry_t::Purge(); // 1799
		CUtlVectorBase<ResourceManifestEntry_t::Purge(); // 560
		ValidateAlignment<ResourceManifestEntry_t*>(void); // 508
		CUtlMemory<ResourceManifestEntry_t::Purge(); // 510
		CUtlMemory<ResourceManifestEntry_t::~CUtlMemory(); // 562
		CUtlVectorBase<ResourceManifestEntry_t::~CUtlVectorBase(); // 410
		CUtlVector<ResourceManifestEntry_t::~CUtlVector(); // 15
		CUtlStringMap<ResourceManifestEntry_t::~CUtlStringMap(); // 16
		CodeResourceManifestFenceGroup_t::~CodeResourceManifestFenceGroup_t(); // 1809
	}
	CUtlVectorBase<CodeResourceManifestFenceGroup_t::RemoveAll(); // 1798
	CUtlMemory<CodeResourceManifestFenceGroup_t::IsExternallyAllocated(); // 905
	CUtlMemory<CodeResourceManifestFenceGroup_t::Purge(); // 903
	CUtlMemory<CodeResourceManifestFenceGroup_t::Purge(); // 1799
	CUtlVectorBase<CodeResourceManifestFenceGroup_t::ResetDbgInfo(); // 1800
	CUtlVectorBase<CodeResourceManifestFenceGroup_t::Purge(); // 1811
	CUtlVectorBase<CodeResourceManifestFenceGroup_t::PurgeAndDeleteElements(); // 454
	CUtlMemory<ResourceManifestDesc_t::IsExternallyAllocated(); // 905
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 903
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 1799
	CUtlVectorBase<ResourceManifestDesc_t::RemoveAll(); // 1798
	CUtlVectorBase<ResourceManifestDesc_t::Purge(); // 560
	ValidateAlignment<ResourceManifestDesc_t*>(void); // 508
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 510
	CUtlMemory<ResourceManifestDesc_t::~CUtlMemory(); // 562
	CUtlVectorBase<ResourceManifestDesc_t::~CUtlVectorBase(); // 410
	CUtlVector<ResourceManifestDesc_t::~CUtlVector(); // 455
	CUtlVectorBase<CodeResourceManifestFenceGroup_t::RemoveAll(); // 1798
	CUtlMemory<CodeResourceManifestFenceGroup_t::IsExternallyAllocated(); // 905
	CUtlMemory<CodeResourceManifestFenceGroup_t::Purge(); // 903
	CUtlMemory<CodeResourceManifestFenceGroup_t::Purge(); // 1799
	CUtlVectorBase<CodeResourceManifestFenceGroup_t::Purge(); // 560
	CUtlVectorBase<CodeResourceManifestFenceGroup_t::~CUtlVectorBase(); // 410
	CUtlVector<CodeResourceManifestFenceGroup_t::~CUtlVector(); // 455
} /* size: 281, inline expansions: 24 (607 bytes) */

// <021903C8> resourcesystem/codemanifestmanager.cpp:452
void CodeResourceManifest_t::~CodeResourceManifest_t()
{
} /* size: 0 */

// <0218FCFE> resourcesystem/codemanifestmanager.cpp:460
// variable: 1
// function calls: 24
void CodeResourceManifest_t::FindOrCreateGroup(int nGroupIndex)
{
	{
		int i; // 465
		CUtlMemory<CodeResourceManifestFenceGroup_t::Base(); // 112
		CUtlVectorBase<CodeResourceManifestFenceGroup_t::Base(); // 368
		CUtlVectorBase<CodeResourceManifestFenceGroup_t::ResetDbgInfo(); // 824
		CUtlMemory<CodeResourceManifestFenceGroup_t::IsGrowable(); // 823
		CUtlMemory<CodeResourceManifestFenceGroup_t::IsExternallyAllocated(); // 859
		CUtlMemory<CodeResourceManifestFenceGroup_t::IsExternallyAllocated(); // 861
		CUtlMemory<CodeResourceManifestFenceGroup_t::Grow(
			int num);  // 806
		CUtlVectorBase<CodeResourceManifestFenceGroup_t::GrowMemory(
				int num);  // 1249
		CUtlMemory<CodeResourceManifestFenceGroup_t::operator[](
				int i);  // 602
		CUtlVectorBase<CodeResourceManifestFenceGroup_t::Element(
			int i);  // 1252
		Construct<CodeResourceManifestFenceGroup_t*, CodeResourceManifestFenceGroup_t*>(CodeResourceManifestFenceGroup_t** pMemory); // 1252
		CUtlMemory<CodeResourceManifestFenceGroup_t::NumAllocated(); // 1247
		CUtlVectorBase<CodeResourceManifestFenceGroup_t::AddToTail(
				CodeResourceManifestFenceGroup_t *& src);  // 467
		CUtlMemory<ResourceManifestEntry_t::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 472
		CUtlMemory<ResourceManifestEntry_t::ValidateGrowSize(); // 475
		CUtlMemory<ResourceManifestEntry_t::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<ResourceManifestEntry_t::ResetDbgInfo(); // 530
		CUtlVectorBase<ResourceManifestEntry_t::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 419
		CUtlVector<ResourceManifestEntry_t::CUtlVector(
				int growSize,
				int initCapacity);  // 30
		CUtlStringMap<ResourceManifestEntry_t::CUtlStringMap(
				bool caseInsensitive,
				int growSize,
				int initSize);  // 16
		CodeResourceManifestFenceGroup_t::CodeResourceManifestFenceGroup_t(); // 467
	}
	CUtlVectorBase<CodeResourceManifestFenceGroup_t::Count(); // 462
	CUtlMemory<CodeResourceManifestFenceGroup_t::operator[](
			int i);  // 588
	CUtlVectorBase<CodeResourceManifestFenceGroup_t::operator[](
			int i);  // 471
} /* size: 373, inline expansions: 3 (12 bytes) */

// <0218F53A> resourcesystem/codemanifestmanager.cpp:476
// variables: 5
// function calls: 28
void CCodeResourceManifestManager::GetAllCodeManifests(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& resourceNames)
{
	{
		short unsigned int i; // 478
		{
			CManifestResourceGatherer resourceGatherer; // 480
			{
				int iGroup; // 483
				{
					const char ** ppResources; // 485
					{
						int iResource; // 486
						CUtlMemory<CUtlString, int>::operator[](
								int i);  // 602
						CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
							int i);  // 1252
						CUtlString::Get(); // 354
						CUtlString::CUtlString(
								const CUtlString& string);  // 1514
						Construct<CUtlString, CUtlString>(CUtlString* pMemory); // 1252
						CUtlMemory<CUtlString, int>::NumAllocated(); // 1247
						CUtlMemory<CUtlString, int>::Base(); // 112
						CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
						CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
						CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
								int num);  // 1249
						CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
								CUtlString& src);  // 488
						CUtlString::~CUtlString(); // 488
						CUtlString::CUtlString(
								const char* pString);  // 488
					}
				}
			}
			CUtlVectorBase<CodeResourceManifest_t::Count(); // 53
			{
			}
			CUtlMemory<CodeResourceManifest_t::operator[](
					int i);  // 588
			CUtlVectorBase<CodeResourceManifest_t::operator[](
					int i);  // 54
			CUtlStringMap<CodeResourceManifest_t::operator[](
					IndexType_t n);  // 481
		}
		CUtlVectorBase<CodeResourceManifest_t::Count(); // 76
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
		CUtlSymbolTable::GetNumStrings(); // 76
		{
		}
		CUtlVectorBase<CodeResourceManifest_t::Count(); // 79
		CUtlStringMap<CodeResourceManifest_t::Count(); // 142
		CUtlStringMap<CodeResourceManifest_t::First(); // 478
		CUtlVectorBase<CodeResourceManifest_t::Count(); // 76
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
		CUtlSymbolTable::GetNumStrings(); // 76
		{
		}
		CUtlVectorBase<CodeResourceManifest_t::Count(); // 79
		CUtlStringMap<CodeResourceManifest_t::Count(); // 478
	}
} /* size: 0 */

