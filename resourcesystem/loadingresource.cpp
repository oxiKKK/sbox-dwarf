
//
// resourcesystem/loadingresource.cpp
//
//	referenced by: libengine2.so
//
//	functions: 51
//

// <022C51F2> resourcesystem/loadingresource.cpp:31
// function calls: 6
void FindLoadingResource(ResourceHandle_t hResource)
{
	CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MajorIndex(
			int i);  // 243
	CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::IsIdxValid(
			short unsigned int i);  // 191
	CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MajorIndex(
			int i);  // 192
	CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MinorIndex(
			int i);  // 193
	{
	}
	CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::operator[](
			short unsigned int i);  // 494
	CUtlLinkedList<CLoadingResource::operator[](
			short unsigned int i);  // 37
} /* size: 0, inline expansions: 6 (295 bytes) */

// <022B1A64> resourcesystem/loadingresource.cpp:31
void FindLoadingResource(ResourceHandle_t hResource)
{
} /* size: 0 */

// <022C5388> resourcesystem/loadingresource.cpp:42
// variable: 1
// function calls: 7
void FindLoadingResource(ResourceHandle_t hResource, LoadingResourceSerialNumber_t nSerialNumber)
{
	CLoadingResource* pLoadingResource; // 50
	CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MajorIndex(
			int i);  // 243
	CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::IsIdxValid(
			short unsigned int i);  // 191
	CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MajorIndex(
			int i);  // 192
	CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MinorIndex(
			int i);  // 193
	{
	}
	CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::operator[](
			short unsigned int i);  // 494
	CUtlLinkedList<CLoadingResource::operator[](
			short unsigned int i);  // 50
	CLoadingResource::GetDependencySerialNumber(); // 51
} /* size: 0, variables: 1, inline expansions: 7 (307 bytes) */

// <022B1A35> resourcesystem/loadingresource.cpp:42
// variable: 1
void FindLoadingResource(ResourceHandle_t hResource, LoadingResourceSerialNumber_t nSerialNumber)
{
	CLoadingResource* pLoadingResource; // 50
} /* size: 0, variables: 1 */

// <022B0AC2> resourcesystem/loadingresource.cpp:62
// variables: 14
// function calls: 44
void ProcessLoadRequest(const LoadRequest_t& info, ResourceHandle_t hActuallyLoadingReferringResource)
{
	const char   __FUNCTION__; // 19315
	uint32 nOriginatingManifestIndex; // 85
	ResourceHandle_t hJukedReferringResource; // 118
	CLoadingResource* pLoadingResource; // 128
	const CScopeGuardLambdaImpl<CLoadingResource::ProcessLoadRequest(const LoadRequest_t&, ResourceHandle_t)::<lambda()> >& generated_id_131; // 131
	bool bIsExtRef; // 148
	bool bPartiallyLoaded; // 149
	bool bAlreadyLoaded; // 150
	bool bWantsReload; // 151
	bool bWantsFullLoad; // 152
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 64
	}
	{
		CLoadingResource* pLoadingReferringResource; // 92
		CLoadingResource::GetFirstOriginatingManifestIndex(); // 95
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 121
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 166
	}
	ConVar::GetInt(); // 79
	CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MajorIndex(
			int i);  // 243
	CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::IsIdxValid(
			short unsigned int i);  // 191
	CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MajorIndex(
			int i);  // 192
	CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MinorIndex(
			int i);  // 193
	{
	}
	CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::operator[](
			short unsigned int i);  // 494
	CUtlLinkedList<CLoadingResource::operator[](
			short unsigned int i);  // 37
	FindLoadingResource(ResourceHandle_t hResource); // 119
	CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MajorIndex(
			int i);  // 243
	CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::IsIdxValid(
			short unsigned int i);  // 191
	CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MajorIndex(
			int i);  // 192
	CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MinorIndex(
			int i);  // 193
	{
	}
	CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::operator[](
			short unsigned int i);  // 494
	CUtlLinkedList<CLoadingResource::operator[](
			short unsigned int i);  // 37
	FindLoadingResource(ResourceHandle_t hResource); // 128
	CScopeGuardLambdaImpl<CLoadingResource::ProcessLoadRequest(const LoadRequest_t&, ResourceHandle_t)::<lambda()> >::CScopeGuardLambdaImpl(
				class& lambda); // 39
	MakeScopeGuardLambda<CLoadingResource::ProcessLoadRequest(const LoadRequest_t&, ResourceHandle_t)::<lambda()> >(class& lambda); // 131
	CLoadingResource::RegisterReferringResource(
					CResourceManifest* pManifest,
					ResourceHandle_t hReferringResource,
					ResourceManifestLoadPriority_t nPriority);  // 142
	operator()(const class* __closure); // 31
	CScopeGuardLambdaImpl<CLoadingResource::ProcessLoadRequest(const LoadRequest_t&, ResourceHandle_t)::<lambda()> >::~CScopeGuardLambdaImpl()::<lambda()> >* this); // 176
	CResourceSystem::DoesResourceNeedFinalization(
					ResourceHandle_t hResource);  // 149
	CLoadingResource::RegisterReferringResource(
					CResourceManifest* pManifest,
					ResourceHandle_t hReferringResource,
					ResourceManifestLoadPriority_t nPriority);  // 159
	CUtlSymbolLarge::String(); // 160
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 184
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 180
	ResourceGetName(ResourceHandle_t hResource,
			CResourceName* pTarget);  // 196
	CResourceNameGetter::CResourceNameGetter(
				ResourceHandle_t hResource);  // 74
	CResourceName::Get(); // 74
	GetID(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this,
		UtlTSHashHandle_t hHash);  // 503
	ResourceId_t::ResourceId_t(
			uint64 value);  // 503
	CResourceSystem::ResourceHandleToResourceId(
					ResourceHandle_t hResource);  // 74
	ResourceId_t::GetRaw(); // 74
	ResourceId_t::GetRaw(); // 74
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 74
	ResourceId_t::GetRaw(); // 69
	EnsureExtRefStreamingData(CResourceManifest* pManifest,
					bool bLoadStreamingData,
					ResourceManifestLoadPriority_t nPriority,
					ResourceHandle_t hResource,
					ResourceHandle_t hReferringResource);  // 175
	operator()(const class* __closure); // 31
	CScopeGuardLambdaImpl<CLoadingResource::ProcessLoadRequest(const LoadRequest_t&, ResourceHandle_t)::<lambda()> >::~CScopeGuardLambdaImpl()::<lambda()> >* this); // 176
	CLoadingResource::RegisterReferringResource(
					CResourceManifest* pManifest,
					ResourceHandle_t hReferringResource,
					ResourceManifestLoadPriority_t nPriority);  // 170
} /* size: 0, variables: 10, inline expansions: 42 (1439 bytes) */

// <022C8DCD> resourcesystem/loadingresource.cpp:178
// variables: 2
void EnsureExtRefStreamingData(CResourceManifest* pManifest, bool bLoadStreamingData, ResourceManifestLoadPriority_t nPriority, ResourceHandle_t hResource, ResourceHandle_t hReferringResource)
{
	CUtlHashtableEntry<ResourceId_t, const ResourceBindingBase_t*> pMemory; // 187
	ExtRefHashTable_t table; // 188
} /* size: 0, variables: 2 */

// <022C81AB> resourcesystem/loadingresource.cpp:178
// variables: 11
// function calls: 45
void EnsureExtRefStreamingData(CResourceManifest* pManifest, bool bLoadStreamingData, ResourceManifestLoadPriority_t nPriority, ResourceHandle_t hResource, ResourceHandle_t hReferringResource)
{
	CUtlHashtableEntry<ResourceId_t, const ResourceBindingBase_t*> pMemory; // 187
	ExtRefHashTable_t table; // 188
	CUtlMemory<CUtlHashtableEntry<ResourceId_t, const ResourceBindingBase_t::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<ResourceId_t, const ResourceBindingBase_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	CUtlHashtable<ResourceId_t, const ResourceBindingBase_t::Init(); // 178
	CUtlHashtable<ResourceId_t, const ResourceBindingBase_t::CUtlHashtable(
			int minimumSize);  // 188
	{
		uint i; // 425
		CUtlHashtableEntry<ResourceId_t, const ResourceBindingBase_t::MarkInvalid(); // 426
	}
	CUtlMemory<CUtlHashtableEntry<ResourceId_t, const ResourceBindingBase_t::SetExternalBuffer(
				CUtlHashtableEntry<ResourceId_t, const ResourceBindingBase_t*>* pMemory,
				int numElements,
				bool bGrowable,
				uint32 nGrowable_GrowSize);  // 430
	CUtlHashtable<ResourceId_t, const ResourceBindingBase_t::SetExternalBuffer(
				entry_t* pBuffer,
				unsigned int nSize,
				bool bAssumeOwnership,
				bool bGrowable);  // 189
	{
		UtlHashHandle_t h; // 191
		CUtlMemory<CUtlHashtableEntry<ResourceId_t, const ResourceBindingBase_t::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<ResourceId_t, const ResourceBindingBase_t::Count(); // 915
			CUtlHashtableEntry<ResourceId_t, const ResourceBindingBase_t::IsValid(); // 917
		}
		CUtlHashtable<ResourceId_t, const ResourceBindingBase_t::NextHandle(
				handle_t start);  // 208
		CUtlHashtable<ResourceId_t, const ResourceBindingBase_t::FirstHandle(); // 191
		{
			ResourceHandle_t hExtRef; // 193
			CUtlMemory<CUtlHashtableEntry<ResourceId_t, const ResourceBindingBase_t::operator[](
					int i);  // 297
			CUtlHashtable<ResourceId_t, const ResourceBindingBase_t::operator[](
					handle_t idx);  // 193
			{
				CResourceName extRefName; // 199
				LoadRequest_t request; // 201
				CUtlSymbolLarge::String(); // 160
				ResourceGetName(ResourceNameHandle_t hResourceName,
						CResourceName* pTarget);  // 184
				ResourceGetName(ResourceNameHandle_t hResourceName,
						CResourceName* pTarget);  // 180
				ResourceGetName(ResourceHandle_t hResource,
						CResourceName* pTarget);  // 200
				LoadRequest_t::LoadRequest_t(
						CResourceManifest* pManifest,
						ResourceManifestLoadPriority_t nPriority,
						bool bLoadStreamingData,
						ResourceHandle_t hReferringResource,
						ResourceHandle_t hResource,
						const CResourceName& resourceName);  // 201
				CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MajorIndex(
						int i);  // 243
				CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::IsIdxValid(
						short unsigned int i);  // 191
				CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MajorIndex(
						int i);  // 192
				CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MinorIndex(
						int i);  // 193
				{
				}
				CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::operator[](
						short unsigned int i);  // 494
				CUtlLinkedList<CLoadingResource::operator[](
						short unsigned int i);  // 37
				FindLoadingResource(ResourceHandle_t hResource); // 202
				{
				}
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 318
				CResourceName::~CResourceName(); // 204
			}
		}
		CUtlMemory<CUtlHashtableEntry<ResourceId_t, const ResourceBindingBase_t::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<ResourceId_t, const ResourceBindingBase_t::Count(); // 915
			CUtlHashtableEntry<ResourceId_t, const ResourceBindingBase_t::IsValid(); // 917
		}
		CUtlHashtable<ResourceId_t, const ResourceBindingBase_t::NextHandle(
				handle_t start);  // 191
	}
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<ResourceId_t, const ResourceBindingBase_t::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<ResourceId_t, const ResourceBindingBase_t::Count(); // 897
			CUtlHashtableEntry<ResourceId_t, const ResourceBindingBase_t::IsValid(); // 899
			CUtlHashtableEntry<ResourceId_t, const ResourceBindingBase_t::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<ResourceId_t, const ResourceBindingBase_t*> >(CUtlKeyValuePair<ResourceId_t, const ResourceBindingBase_t*>* pMemory); // 902
		}
	}
	CUtlHashtable<ResourceId_t, const ResourceBindingBase_t::RemoveAll(); // 188
	ValidateAlignment<CUtlHashtableEntry<ResourceId_t, const ResourceBindingBase_t*> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<ResourceId_t, const ResourceBindingBase_t::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<ResourceId_t, const ResourceBindingBase_t::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<ResourceId_t, const ResourceBindingBase_t::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<ResourceId_t, const ResourceBindingBase_t::~CUtlMemory(); // 188
	CUtlHashtable<ResourceId_t, const ResourceBindingBase_t::~CUtlHashtable(); // 208
} /* size: 0, variables: 2, inline expansions: 13 (421 bytes) */

// <022B09E3> resourcesystem/loadingresource.cpp:178
// variables: 9
void EnsureExtRefStreamingData(CResourceManifest* pManifest, bool bLoadStreamingData, ResourceManifestLoadPriority_t nPriority, ResourceHandle_t hResource, ResourceHandle_t hReferringResource)
{
	bool s_bPreventReentrancy; // 181
	CUtlHashtableEntry<ResourceId_t, const ResourceBindingBase_t*> pMemory; // 187
	ExtRefHashTable_t table; // 188
	const char   __FUNCTION__; // 19499
	{
		UtlHashHandle_t h; // 191
		{
			ResourceHandle_t hExtRef; // 193
			{
				CResourceName extRefName; // 199
				LoadRequest_t request; // 201
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 202
				}
			}
		}
	}
} /* size: 0, variables: 4 */

// <022AFE2C> resourcesystem/loadingresource.cpp:213
// function calls: 43
void CLoadingResource::CLoadingResource(ResourceHandle_t hResource, ResourceId_t nId, ResourceManifestLoadPriority_t nPriority, bool bStreamingDataRequested, uint32 nFirstOriginatingManifestIndex)
{
	{
		{
		}
		{
		}
		{
		}
	}
	{
		CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::ValidateGrowSize(); // 475
		CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 178
		CUtlHashtable<const ResourceBindingBase_t::Init(); // 178
		CUtlHashtable<const ResourceBindingBase_t::CUtlHashtable(
				int minimumSize);  // 213
		{
		}
		{
		}
		MakeWritableHandle(ResourceHandle_t hResource); // 220
		{
		}
		CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MajorIndex(
				int i);  // 243
		CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::IsIdxValid(
				short unsigned int i);  // 588
		CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::IsIdxAfter(
				short unsigned int i,
				const Iterator_t& it);  // 591
		CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MinorIndex(
				int i);  // 201
		CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::operator[](
				short unsigned int i);  // 594
		CUtlLinkedList<CLoadingResource::IsValidIndex(
				short unsigned int i);  // 977
		{
		}
		CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MajorIndex(
				int i);  // 243
		CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::IsIdxValid(
				short unsigned int i);  // 191
		CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MinorIndex(
				int i);  // 193
		CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MajorIndex(
				int i);  // 192
		{
		}
		CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::operator[](
				short unsigned int i);  // 367
		CUtlLinkedList<CLoadingResource::InternalElement(
				short unsigned int i);  // 982
		CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MajorIndex(
				int i);  // 243
		CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::IsIdxValid(
				short unsigned int i);  // 191
		CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MajorIndex(
				int i);  // 192
		CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MinorIndex(
				int i);  // 193
		{
		}
		CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::operator[](
				short unsigned int i);  // 367
		CUtlLinkedList<CLoadingResource::InternalElement(
				short unsigned int i);  // 1011
		CUtlLinkedList<CLoadingResource::LinkBefore(
				short unsigned int before,
				short unsigned int elem);  // 822
		CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MajorIndex(
				int i);  // 243
		CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::IsIdxValid(
				short unsigned int i);  // 191
		CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MajorIndex(
				int i);  // 192
		CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MinorIndex(
				int i);  // 193
		{
		}
		CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::operator[](
				short unsigned int i);  // 482
		CUtlLinkedList<CLoadingResource::Element(
			short unsigned int i);  // 825
		CopyConstruct<CLoadingResource*>(CLoadingResource** pMemory,
						CLoadingResource* const& src);  // 825
		CUtlLinkedList<CLoadingResource::InsertBefore(
				short unsigned int before,
				CLoadingResource* const& src);  // 856
		CUtlLinkedList<CLoadingResource::AddToTail(
				CLoadingResource* const& src);  // 245
		ResourceId_t::ResourceId_t(); // 213
		IAsyncResourceDataRequestOwner::IAsyncResourceDataRequestOwner(); // 213
		_Head_base<1, std::default_delete<IAsyncProcessedDataResult>, true>::_Head_base(); // 561
		_Tuple_impl<1, std::default_delete<IAsyncProcessedDataResult> >::_Tuple_impl(); // 303
		_Head_base<0, IAsyncProcessedDataResult::_Head_base(); // 303
		_Tuple_impl<0, IAsyncProcessedDataResult::_Tuple_impl(); // 966
		tuple<IAsyncProcessedDataResult::tuple(); // 167
		__uniq_ptr_impl<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::__uniq_ptr_impl(); // 232
		__uniq_ptr_data<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult>, true, true>::__uniq_ptr_data(); // 298
		unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::unique_ptr<>(); // 213
	}
} /* size: 0 */

// <022AFD77> resourcesystem/loadingresource.cpp:213
// variables: 4
void CLoadingResource::CLoadingResource(ResourceHandle_t hResource, ResourceId_t nId, ResourceManifestLoadPriority_t nPriority, bool bStreamingDataRequested, uint32 nFirstOriginatingManifestIndex)
{
	const char   __FUNCTION__; // 19261
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 215
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 216
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 244
	}
} /* size: 0, variables: 1 */

// <022AE4D3> resourcesystem/loadingresource.cpp:251
// variables: 10
// function calls: 96
void CLoadingResource::~CLoadingResource()
{
	{
		{
		}
		{
			UtlHashHandle_t h; // 271
			{
				CLoadingResource* pExtrefLoadingResource; // 275
			}
		}
		{
		}
	}
	{
		{
		}
		default_delete<IAsyncProcessedDataResult>::operator(
				IAsyncProcessedDataResult* __ptr);  // 204
		__uniq_ptr_impl<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::reset(
			pointer __p);  // 511
		unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::reset(
			pointer __p);  // 436
		unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::operator=(
				nullptr_t);  // 269
		{
			UtlHashHandle_t h; // 271
			CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::Base(); // 914
			{
				int i; // 915
				CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::Count(); // 915
				CUtlHashtableEntry<const ResourceBindingBase_t::IsValid(); // 917
			}
			CUtlHashtable<const ResourceBindingBase_t::NextHandle(
					handle_t start);  // 208
			CUtlHashtable<const ResourceBindingBase_t::FirstHandle(); // 271
			InvalidHandle(void); // 271
			{
				CLoadingResource* pExtrefLoadingResource; // 275
				CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::operator[](
						int i);  // 297
				CUtlHashtable<const ResourceBindingBase_t::operator[](
						handle_t idx);  // 275
				CUtlHashtable<const ResourceBindingBase_t::Key(
					handle_t idx);  // 275
				CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MajorIndex(
						int i);  // 243
				CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::IsIdxValid(
						short unsigned int i);  // 191
				CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MajorIndex(
						int i);  // 192
				CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MinorIndex(
						int i);  // 193
				{
				}
				CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::operator[](
						short unsigned int i);  // 494
				CUtlLinkedList<CLoadingResource::operator[](
						short unsigned int i);  // 50
				CLoadingResource::GetDependencySerialNumber(); // 51
				FindLoadingResource(ResourceHandle_t hResource,
							LoadingResourceSerialNumber_t nSerialNumber);  // 275
				CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::operator[](
						int i);  // 297
				CUtlHashtable<const ResourceBindingBase_t::operator[](
						handle_t idx);  // 280
				CLoadingResource::RemoveDependency(
						LoadingResourceSerialNumber_t nSerialNumber);  // 280
				CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::operator[](
						int i);  // 293
				CUtlHashtable<const ResourceBindingBase_t::Key(
					handle_t idx);  // 283
				{
				}
				CInterlockedIntT<int, 4>::operator int(); // 83
				{
				}
				ThreadInterlockedDecrement(volatile int32* p); // 586
				CInterlockedIntT<int, 4>::operator--(); // 84
				ResourceRelease(ResourceHandle_t hResource,
						uintp nLeakTrackingPairingID,
						ResourceLeakTrackingGroup_t leakTrackingGroup);  // 74
				ResourceRelease(ResourceHandle_t hResource,
						uintp nLeakTrackingPairingID,
						ResourceLeakTrackingGroup_t leakTrackingGroup);  // 283
				CUtlSymbolLarge::String(); // 160
				ResourceGetName(ResourceNameHandle_t hResourceName,
						CResourceName* pTarget);  // 184
				ResourceGetName(ResourceNameHandle_t hResourceName,
						CResourceName* pTarget);  // 180
				ResourceGetName(ResourceHandle_t hResource,
						CResourceName* pTarget);  // 196
				CResourceNameGetter::CResourceNameGetter(
							ResourceHandle_t hResource);  // 278
				CResourceName::Get(); // 278
				ResourceId_t::GetRaw(); // 278
				CUtlSymbolLarge::String(); // 160
				ResourceGetName(ResourceNameHandle_t hResourceName,
						CResourceName* pTarget);  // 184
				ResourceGetName(ResourceNameHandle_t hResourceName,
						CResourceName* pTarget);  // 180
				ResourceGetName(ResourceHandle_t hResource,
						CResourceName* pTarget);  // 196
				CResourceNameGetter::CResourceNameGetter(
							ResourceHandle_t hResource);  // 278
				CResourceName::Get(); // 278
				ResourceId_t::GetRaw(); // 278
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 318
				CResourceName::~CResourceName(); // 191
				CResourceNameGetter::~CResourceNameGetter(); // 278
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 318
				CResourceName::~CResourceName(); // 191
				CResourceNameGetter::~CResourceNameGetter(); // 278
			}
			CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::Base(); // 914
			{
				int i; // 915
				CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::Count(); // 915
				CUtlHashtableEntry<const ResourceBindingBase_t::IsValid(); // 917
			}
			CUtlHashtable<const ResourceBindingBase_t::NextHandle(
					handle_t start);  // 271
		}
		{
		}
		CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MajorIndex(
				int i);  // 243
		CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::IsIdxValid(
				short unsigned int i);  // 588
		CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::IsIdxAfter(
				short unsigned int i,
				const Iterator_t& it);  // 591
		CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MinorIndex(
				int i);  // 201
		CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::operator[](
				short unsigned int i);  // 594
		CUtlLinkedList<CLoadingResource::IsValidIndex(
				short unsigned int i);  // 749
		{
		}
		CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MajorIndex(
				int i);  // 243
		CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::IsIdxValid(
				short unsigned int i);  // 191
		CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MajorIndex(
				int i);  // 192
		CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MinorIndex(
				int i);  // 193
		{
		}
		CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::operator[](
				short unsigned int i);  // 367
		CUtlLinkedList<CLoadingResource::InternalElement(
				short unsigned int i);  // 752
		Destruct<CLoadingResource*>(CLoadingResource** pMemory); // 753
		CUtlLinkedList<CLoadingResource::Free(
			short unsigned int elem);  // 907
		CUtlLinkedList<CLoadingResource::Remove(
			short unsigned int elem);  // 290
		CUtlLinkedList<CLoadingResource::Count(); // 295
		MakeWritableHandle(ResourceHandle_t hResource); // 300
		{
			int i; // 359
		}
		CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::Purge(); // 354
		CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::Purge(); // 643
		CUtlLinkedList<CLoadingResource::ResetDbgInfo(); // 650
		Iterator_t::Iterator_t(
				short unsigned int i);  // 59
		CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::InvalidIterator(); // 648
		CUtlLinkedList<CLoadingResource::Purge(); // 297
		{
			entry_t* table; // 896
			CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::Base(); // 896
			{
				int i; // 897
				CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::Count(); // 897
				CUtlHashtableEntry<const ResourceBindingBase_t::IsValid(); // 899
				CUtlHashtableEntry<const ResourceBindingBase_t::MarkInvalid(); // 901
				Destruct<CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int> >(CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int>* pMemory); // 902
			}
		}
		CUtlHashtable<const ResourceBindingBase_t::RemoveAll(); // 188
		ValidateAlignment<CUtlHashtableEntry<const ResourceBindingBase_t*, unsigned int> >(void); // 508
		CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::Purge(); // 903
		CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::Purge(); // 510
		CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::~CUtlMemory(); // 188
		CUtlHashtable<const ResourceBindingBase_t::~CUtlHashtable(); // 301
		{
			IAsyncProcessedDataResult *& __ptr; // 396
			__uniq_ptr_impl<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::_M_ptr(); // 396
			unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::get_deleter(); // 398
			default_delete<IAsyncProcessedDataResult>::operator(
					IAsyncProcessedDataResult* __ptr);  // 398
		}
		unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::~unique_ptr(); // 301
	}
} /* size: 0 */

// <022AE457> resourcesystem/loadingresource.cpp:251
// variables: 5
void CLoadingResource::~CLoadingResource()
{
	const char   __FUNCTION__; // 19288
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 265
	}
	{
		UtlHashHandle_t h; // 271
		{
			CLoadingResource* pExtrefLoadingResource; // 275
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 287
	}
} /* size: 0, variables: 1 */

// <022C556C> resourcesystem/loadingresource.cpp:332
void CLoadingResource::AddDependency()
{
	{
	}
} /* size: 0 */

// <022AE3FF> resourcesystem/loadingresource.cpp:332
// variables: 2
void CLoadingResource::AddDependency()
{
	const char   __FUNCTION__; // 19180
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 334
	}
} /* size: 0, variables: 1 */

// <022C6B66> resourcesystem/loadingresource.cpp:339
// variable: 1
void CLoadingResource::RemoveDependency(LoadingResourceSerialNumber_t nSerialNumber)
{
	int nRefCount; // 346
} /* size: 21, variables: 1 */

// <022C6A9C> resourcesystem/loadingresource.cpp:339
// variable: 1
void CLoadingResource::RemoveDependency(LoadingResourceSerialNumber_t nSerialNumber)
{
	int nRefCount; // 346
	{
	}
	{
	}
} /* size: 0, variables: 1 */

// <022AE38A> resourcesystem/loadingresource.cpp:339
// variables: 4
void CLoadingResource::RemoveDependency(LoadingResourceSerialNumber_t nSerialNumber)
{
	const char   __FUNCTION__; // 19261
	int nRefCount; // 346
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 344
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 345
	}
} /* size: 0, variables: 2 */

// <022ADFF4> resourcesystem/loadingresource.cpp:362
// variable: 1
// function calls: 11
void CLoadingResource::Cancel()
{
	{
		const ResourceTypeRegistration_t* pReg; // 369
	}
	CUtlSymbolLarge::String(); // 160
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 184
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 180
	ResourceGetName(ResourceHandle_t hResource,
			CResourceName* pTarget);  // 196
	CResourceNameGetter::CResourceNameGetter(
				ResourceHandle_t hResource);  // 364
	CResourceName::Get(); // 364
	ResourceId_t::GetRaw(); // 364
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 364
} /* size: 374, inline expansions: 11 (285 bytes) */

// <022C811A> resourcesystem/loadingresource.cpp:379
// variables: 3
void CLoadingResource::RegisterReferringResource(CResourceManifest* pManifest, ResourceHandle_t hReferringResource, ResourceManifestLoadPriority_t nPriority)
{
	CLoadingResource* pReferringResource; // 392
	bool bDidInsert; // 416
	UtlHashHandle_t h; // 417
} /* size: 0, variables: 3 */

// <022C6BC1> resourcesystem/loadingresource.cpp:379
// variables: 4
// function calls: 74
void CLoadingResource::RegisterReferringResource(CResourceManifest* pManifest, ResourceHandle_t hReferringResource, ResourceManifestLoadPriority_t nPriority)
{
	CLoadingResource* pReferringResource; // 392
	bool bDidInsert; // 416
	UtlHashHandle_t h; // 417
	CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MajorIndex(
			int i);  // 243
	CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::IsIdxValid(
			short unsigned int i);  // 191
	CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MajorIndex(
			int i);  // 192
	CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MinorIndex(
			int i);  // 193
	{
	}
	CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::operator[](
			short unsigned int i);  // 494
	CUtlLinkedList<CLoadingResource::operator[](
			short unsigned int i);  // 37
	FindLoadingResource(ResourceHandle_t hResource); // 392
	{
		ResourceId_t id; // 399
		{
		}
		GetID(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this,
			UtlTSHashHandle_t hHash);  // 503
		ResourceId_t::ResourceId_t(
				uint64 value);  // 503
		CResourceSystem::ResourceHandleToResourceId(
						ResourceHandle_t hResource);  // 399
	}
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
	Construct<CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int>, const ResourceBindingBase_t*&>(CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int>* pMemory); // 706
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
			bool* pDidInsert);  // 417
	{
	}
	CLoadingResource::AddDependency(); // 420
	CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::operator[](
			int i);  // 297
	CUtlHashtable<const ResourceBindingBase_t::operator[](
			handle_t idx);  // 420
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 71
	ResourceAddRef(ResourceHandle_t hResource,
			uintp nLeakTrackingPairingID,
			ResourceLeakTrackingGroup_t leakTrackingGroup);  // 421
	CUtlSymbolLarge::String(); // 160
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 184
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 180
	ResourceGetName(ResourceHandle_t hResource,
			CResourceName* pTarget);  // 196
	CResourceNameGetter::CResourceNameGetter(
				ResourceHandle_t hResource);  // 422
	CResourceName::Get(); // 422
	CUtlSymbolLarge::String(); // 160
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 184
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 180
	ResourceGetName(ResourceHandle_t hResource,
			CResourceName* pTarget);  // 196
	CResourceNameGetter::CResourceNameGetter(
				ResourceHandle_t hResource);  // 422
	ResourceId_t::GetRaw(); // 422
	CResourceName::Get(); // 422
	ResourceId_t::GetRaw(); // 422
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 422
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 422
	CLoadingResource::SetExtRefDepth_R(
			int nDepth);  // 425
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 180
	CUtlSymbolLarge::String(); // 160
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 184
	ResourceGetName(ResourceHandle_t hResource,
			CResourceName* pTarget);  // 196
	CResourceNameGetter::CResourceNameGetter(
				ResourceHandle_t hResource);  // 412
	CResourceName::Get(); // 412
	CUtlSymbolLarge::String(); // 160
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 184
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 180
	ResourceGetName(ResourceHandle_t hResource,
			CResourceName* pTarget);  // 196
	CResourceNameGetter::CResourceNameGetter(
				ResourceHandle_t hResource);  // 412
	CResourceName::Get(); // 412
	ResourceId_t::GetRaw(); // 412
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 412
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 412
} /* size: 0, variables: 3, inline expansions: 71 (2636 bytes) */

// <022ADF5D> resourcesystem/loadingresource.cpp:379
// variables: 6
void CLoadingResource::RegisterReferringResource(CResourceManifest* pManifest, ResourceHandle_t hReferringResource, ResourceManifestLoadPriority_t nPriority)
{
	CLoadingResource* pReferringResource; // 392
	const char   __FUNCTION__; // 19499
	bool bDidInsert; // 416
	UtlHashHandle_t h; // 417
	{
		ResourceId_t id; // 399
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 397
		}
	}
} /* size: 0, variables: 4 */

// <022C55B4> resourcesystem/loadingresource.cpp:428
void CLoadingResource::SetExtRefDepth_R(int nDepth)
{
} /* size: 0 */

// <022C4193> resourcesystem/loadingresource.cpp:428
// variables: 4
// function calls: 31
void CLoadingResource::SetExtRefDepth_R(int nDepth)
{
	{
		UtlHashHandle_t h; // 442
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::Count(); // 915
			CUtlHashtableEntry<const ResourceBindingBase_t::IsValid(); // 917
		}
		CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::Base(); // 914
		CUtlHashtable<const ResourceBindingBase_t::NextHandle(
				handle_t start);  // 208
		CUtlHashtable<const ResourceBindingBase_t::FirstHandle(); // 442
		{
			CLoadingResource* pLoadingResource; // 444
			CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MajorIndex(
					int i);  // 243
			CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::IsIdxValid(
					short unsigned int i);  // 191
			CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MajorIndex(
					int i);  // 192
			CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MinorIndex(
					int i);  // 193
			{
			}
			CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::operator[](
					short unsigned int i);  // 494
			CUtlLinkedList<CLoadingResource::operator[](
					short unsigned int i);  // 50
			CLoadingResource::GetDependencySerialNumber(); // 51
			FindLoadingResource(ResourceHandle_t hResource,
						LoadingResourceSerialNumber_t nSerialNumber);  // 444
			CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::operator[](
					int i);  // 297
			CUtlHashtable<const ResourceBindingBase_t::operator[](
					handle_t idx);  // 444
			CLoadingResource::SetExtRefDepth_R(
					int nDepth);  // 447
		}
		CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::Count(); // 915
			CUtlHashtableEntry<const ResourceBindingBase_t::IsValid(); // 917
		}
		CUtlHashtable<const ResourceBindingBase_t::NextHandle(
				handle_t start);  // 442
	}
	CUtlSymbolLarge::String(); // 160
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 184
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 180
	ResourceGetName(ResourceHandle_t hResource,
			CResourceName* pTarget);  // 196
	CResourceNameGetter::CResourceNameGetter(
				ResourceHandle_t hResource);  // 439
	CResourceName::Get(); // 439
	ResourceId_t::GetRaw(); // 439
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 439
} /* size: 0, inline expansions: 11 (209 bytes) */

// <022ADF1B> resourcesystem/loadingresource.cpp:428
// variables: 2
void CLoadingResource::SetExtRefDepth_R(int nDepth)
{
	{
		UtlHashHandle_t h; // 442
		{
			CLoadingResource* pLoadingResource; // 444
		}
	}
} /* size: 0 */

// <022AD823> resourcesystem/loadingresource.cpp:456
// variables: 9
// function calls: 15
void CLoadingResource::BeginLoadingResource(bool bIsHighPriority)
{
	const char   __FUNCTION__; // 19369
	const ResourceTypeRegistration_t* pReg; // 463
	CAsyncStackResume asyncStack; // 484
	int nBytesToRead; // 507
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 458
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 460
	}
	{
		bool bIsReloading; // 510
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 513
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 516
	}
	CAppSystemDict::IsInToolsMode(); // 110
	CTier1Application::IsInToolsMode(); // 465
	{
	}
	CLoadingResource::ShouldFail(
			const ResourceTypeRegistration_t* pReg);  // 470
	GetFromBinding(const ResourceBindingBase_t* pBinding); // 481
	CDeferredCallStackMarker::CDeferredCallStackMarker(); // 484
	GetFromBinding(const ResourceBindingBase_t* pBinding); // 99
	GetAsyncTrackerForResource(ResourceHandle_t hResource); // 484
	GetFromBinding(const ResourceBindingBase_t* pBinding); // 526
	{
	}
	CLoadingResource::RegisterPendingResourceFileRequest(
						PendingRequestType_t requestType);  // 533
	{
	}
	CDeferredCallStackMarkerProxy::Detach(); // 359
	CDeferredCallStackMarkerProxy::~CDeferredCallStackMarkerProxy(); // 224
	CAsyncStackResume::~CAsyncStackResume(); // 537
	{
	}
	CDeferredCallStackMarkerProxy::Detach(); // 359
	CDeferredCallStackMarkerProxy::~CDeferredCallStackMarkerProxy(); // 224
	CAsyncStackResume::~CAsyncStackResume(); // 537
} /* size: 0, variables: 4, inline expansions: 15 (754 bytes) */

// <022AD751> resourcesystem/loadingresource.cpp:543
// variables: 3
void CLoadingResource::InitializeAsAlreadyLoaded()
{
	const char   __FUNCTION__; // 19499
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 545
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 547
	}
} /* size: 0, variables: 1 */

// <022C566D> resourcesystem/loadingresource.cpp:556
// function call: 1
void CLoadingResource::EnsureStreamingDataRequested()
{
	{
	}
	{
	}
	CLoadingResource::EnsureStreamingDataRequested(); // 556
} /* size: 0, inline expansions: 1 (42 bytes) */

// <022AD6DB> resourcesystem/loadingresource.cpp:556
// variables: 3
void CLoadingResource::EnsureStreamingDataRequested()
{
	const char   __FUNCTION__; // 19580
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 558
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 563
	}
} /* size: 0, variables: 1 */

// <022AD5DE> resourcesystem/loadingresource.cpp:579
// variables: 2
void CLoadingResource::HandleAdditionalLoadRequest(ResourceManifestLoadPriority_t nPriority, bool bLoadStreamingData)
{
	const char   __FUNCTION__; // 19553
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 581
	}
} /* size: 0, variables: 1 */

// <022AD50A> resourcesystem/loadingresource.cpp:596
// variables: 3
void ShouldLoadStreamingData(bool bStreamingDataRequested, ResourceHandle_t hResource)
{
	const ResourceTypeRegistration_t* pReg; // 598
	const char   __FUNCTION__; // 19445
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 616
	}
} /* size: 159, variables: 2 */

// <022ACFB9> resourcesystem/loadingresource.cpp:625
// variables: 7
// function calls: 19
void CLoadingResource::IncreasePriority(ResourceManifestLoadPriority_t nPriority)
{
	const char   __FUNCTION__; // 19261
	CStreamingResourceData* pStreamingResourceData; // 629
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 627
	}
	{
		UtlHashHandle_t h; // 646
		{
			CLoadingResource* pLoadingResource; // 648
			CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MajorIndex(
					int i);  // 243
			CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::IsIdxValid(
					short unsigned int i);  // 191
			CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MajorIndex(
					int i);  // 192
			CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MinorIndex(
					int i);  // 193
			{
			}
			CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::operator[](
					short unsigned int i);  // 494
			CUtlLinkedList<CLoadingResource::operator[](
					short unsigned int i);  // 50
			CLoadingResource::GetDependencySerialNumber(); // 51
			FindLoadingResource(ResourceHandle_t hResource,
						LoadingResourceSerialNumber_t nSerialNumber);  // 648
			CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::operator[](
					int i);  // 297
			CUtlHashtable<const ResourceBindingBase_t::operator[](
					handle_t idx);  // 648
		}
		CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::Count(); // 915
			CUtlHashtableEntry<const ResourceBindingBase_t::IsValid(); // 917
		}
		CUtlHashtable<const ResourceBindingBase_t::NextHandle(
				handle_t start);  // 208
		CUtlHashtable<const ResourceBindingBase_t::FirstHandle(); // 646
		CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::Count(); // 915
			CUtlHashtableEntry<const ResourceBindingBase_t::IsValid(); // 917
		}
		CUtlHashtable<const ResourceBindingBase_t::NextHandle(
				handle_t start);  // 646
	}
} /* size: 0, variables: 2 */

// <022C5600> resourcesystem/loadingresource.cpp:665
void CLoadingResource::ShouldFail(const ResourceTypeRegistration_t* pReg)
{
	{
	}
} /* size: 0 */

// <022ACF54> resourcesystem/loadingresource.cpp:665
// variables: 2
void CLoadingResource::ShouldFail(const ResourceTypeRegistration_t* pReg)
{
	const char   __FUNCTION__; // 19104
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 669
	}
} /* size: 0, variables: 1 */

// <022C563C> resourcesystem/loadingresource.cpp:685
void CLoadingResource::NoteResourceDataLoaded(CAsyncResourceDataRequest* pRequest)
{
} /* size: 0 */

// <022ACED7> resourcesystem/loadingresource.cpp:693
// variable: 1
void CLoadingResource::WantsAsyncProcessResourceData()
{
	const ResourceTypeRegistration_t* pReg; // 695
} /* size: 75, variables: 1 */

// <022ACAE6> resourcesystem/loadingresource.cpp:706
// variables: 7
// function calls: 10
void CLoadingResource::OnAsyncProcessResourceData(CAsyncResourceDataRequest* pRequest)
{
	const char   __FUNCTION__; // 19526
	const ResourceTypeRegistration_t* pReg; // 713
	const ResourceFileHeader_t* pDataHeader; // 714
	const size_t  nDataSize; // 715
	bool IsValveResource; // 717
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 710
	}
	__uniq_ptr_impl<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::release(); // 184
	default_delete<IAsyncProcessedDataResult>::operator(
			IAsyncProcessedDataResult* __ptr);  // 204
	__uniq_ptr_impl<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::reset(
		pointer __p);  // 184
	__uniq_ptr_impl<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::operator=(
			__uniq_ptr_impl<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >& __u);  // 236
	__uniq_ptr_data<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult>, true, true>::operator=(
			__uniq_ptr_data<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult>, true, true> &);  // 408
	unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::operator=(
			unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> > &);  // 723
	{
		IAsyncProcessedDataResult *& __ptr; // 396
		__uniq_ptr_impl<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::_M_ptr(); // 396
		unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::get_deleter(); // 398
		default_delete<IAsyncProcessedDataResult>::operator(
				IAsyncProcessedDataResult* __ptr);  // 398
	}
	unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::~unique_ptr(); // 723
} /* size: 0, variables: 5, inline expansions: 7 (161 bytes) */

// <022C5725> resourcesystem/loadingresource.cpp:734
// function call: 1
void CLoadingResource::OnAsyncDataRequestComplete(CAsyncResourceDataRequest* pRequest)
{
	{
	}
	{
	}
	CLoadingResource::OnAsyncDataRequestComplete(
					CAsyncResourceDataRequest* pRequest);  // 734
} /* size: 0, inline expansions: 1 (66 bytes) */

// <022ACA63> resourcesystem/loadingresource.cpp:734
// variables: 3
void CLoadingResource::OnAsyncDataRequestComplete(CAsyncResourceDataRequest* pRequest)
{
	const char   __FUNCTION__; // 19526
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 736
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 739
	}
} /* size: 0, variables: 1 */

// <022AC1C5> resourcesystem/loadingresource.cpp:754
// variables: 8
// function calls: 19
void CLoadingResource::OnResourceDataLoaded(CAsyncResourceDataRequest* pRequest)
{
	const char   __FUNCTION__; // 19369
	const ResourceTypeRegistration_t* pReg; // 760
	CAsyncStackTop asyncTop; // 762
	const AsyncRequestStatus_t  status; // 776
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 756
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 758
	}
	{
		CResourceNameGetter parentName; // 788
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceHandle_t hResource,
				CResourceName* pTarget);  // 196
		CResourceNameGetter::CResourceNameGetter(
					ResourceHandle_t hResource);  // 788
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 790
		CResourceName::Get(); // 789
		Color::SetColor(
			int _r,
			int _g,
			int _b,
			int _a);  // 50
		Color::Color(
			int _r,
			int _g,
			int _b,
			int _a);  // 789
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 803
	}
	CDeferredCallStackMarker::CDeferredCallStackMarker(); // 762
	GetFromBinding(const ResourceBindingBase_t* pBinding); // 99
	GetAsyncTrackerForResource(ResourceHandle_t hResource); // 762
	{
	}
	{
	}
	CLoadingResource::RegisterPendingResourceFileRequest(
						PendingRequestType_t requestType);  // 265
	CLoadingResource::RegisterPendingResourceFileRequest(
						PendingRequestType_t requestType);  // 769
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 793
	CResourceSystem::IsShuttingDown(); // 801
} /* size: 0, variables: 4, inline expansions: 8 (158 bytes) */

// <022ABC3E> resourcesystem/loadingresource.cpp:814
// variables: 2
// function calls: 21
void CLoadingResource::ValidateResourceHeader(const ResourceFileHeader_t* pHeader, uint32 nFileSize)
{
	{
		CBufferString resourceName; // 821
		CFmtStr message; // 823
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 821
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
				bool bAppend);  // 822
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 776
		CBufferString::String(); // 823
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 81
		CFmtStrN<256>::String(); // 825
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 827
		CBufferString::~CBufferString(); // 827
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 81
		CFmtStrN<256>::String(); // 824
	}
} /* size: 560 */

// <022AB14B> resourcesystem/loadingresource.cpp:838
// variables: 17
// function calls: 27
void CLoadingResource::RegisterResourceData(CAsyncResourceDataRequest* pRequest)
{
	const char   __FUNCTION__; // 19369
	const ResourceTypeRegistration_t* pReg; // 842
	CPathBufferString resourceName; // 850
	CStackAnnotation<const ResourceNameInfo_t*, void, void, void, void, void, void, void, void> resourceNameAnnotation; // 852
	bool bIsTheErrorResource; // 857
	CRD_RegisterResourceDataUtils registerResourceDataUtils; // 861
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 840
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 843
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 847
	}
	{
		const ResourceFileHeader_t* pHeader; // 868
		ResourceDeallocationType_t nDeallocationType; // 871
		void* pOldResourceData; // 872
		const int64  managedstartTime; // 874
		const uint32  nBytesLoaded; // 878
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 866
		}
		{
			const int64  startTime; // 883
		}
		ComputeDeallocationType(ResourceHandle_t hResource); // 871
		CRD_RegisterResourceDataUtils::SetDataRegistrationFailed(); // 889
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 890
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 926
	}
	CResourceSystem::InFrameUpdate(); // 847
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 850
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
			bool bAppend);  // 851
	CDeferredCallStackMarker::CDeferredCallStackMarker(); // 852
	CStackAnnotationVariableHandler<const ResourceNameInfo_t::CStackAnnotationVariableHandler(
					ConstructorVarType var);  // 625
	CStackAnnotation<const ResourceNameInfo_t::CStackAnnotation(
			const char* pVarDescA,
			ConstructorVarType VarA,
			const CCallStackMarkerBase& marker);  // 852
	__uniq_ptr_impl<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::_M_ptr(); // 472
	unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::get(); // 861
	IRD_RegisterResourceDataUtils::IRD_RegisterResourceDataUtils(); // 23
	CRD_RegisterResourceDataUtils::CRD_RegisterResourceDataUtils(
					ResourceBindingBase_t* pBinding,
					IAsyncResourceDataRequest* pDataRequest,
					IAsyncProcessedDataResult* pAsyncResult);  // 861
	CStackAnnotation<const ResourceNameInfo_t::~CStackAnnotation(); // 939
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 939
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 854
	ResourceId_t::GetRaw(); // 854
} /* size: 0, variables: 6, inline expansions: 22 (601 bytes) */

// <022AAD58> resourcesystem/loadingresource.cpp:943
// variables: 6
// function calls: 10
void CLoadingResource::OnResourceLoadFailed()
{
	const char   __FUNCTION__; // 19369
	const ResourceTypeRegistration_t* pReg; // 947
	void* pNoData; // 956
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 945
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 948
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 950
	}
	CUtlSymbolLarge::String(); // 160
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 184
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 180
	ResourceGetName(ResourceHandle_t hResource,
			CResourceName* pTarget);  // 196
	CResourceNameGetter::CResourceNameGetter(
				ResourceHandle_t hResource);  // 959
	CResourceName::Get(); // 959
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 959
} /* size: 0, variables: 3, inline expansions: 10 (213 bytes) */

// <022AA972> resourcesystem/loadingresource.cpp:966
// variables: 4
// function calls: 11
void CLoadingResource::BeginLoadingStreamingData()
{
	const char   __FUNCTION__; // 19499
	const ResourceTypeRegistration_t* pReg; // 971
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 968
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 975
	}
	CUtlSymbolLarge::String(); // 160
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 184
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 180
	ResourceGetName(ResourceHandle_t hResource,
			CResourceName* pTarget);  // 196
	CResourceNameGetter::CResourceNameGetter(
				ResourceHandle_t hResource);  // 973
	CResourceName::Get(); // 973
	ResourceId_t::GetRaw(); // 973
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 973
} /* size: 0, variables: 2, inline expansions: 11 (264 bytes) */

// <022AA4A4> resourcesystem/loadingresource.cpp:991
// variables: 3
// function calls: 13
void CLoadingResource::MarkLoadingWorkPending(bool bHasWork)
{
	const char   __FUNCTION__; // 19418
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 995
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 996
	}
	{
	}
	{
	}
	CLoadingResource::RegisterPendingStreamingDataRequest(
						PendingRequestType_t requestType);  // 248
	CLoadingResource::RegisterPendingStreamingDataRequest(
						PendingRequestType_t requestType);  // 1000
	CUtlSymbolLarge::String(); // 160
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 184
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 180
	ResourceGetName(ResourceHandle_t hResource,
			CResourceName* pTarget);  // 196
	CResourceNameGetter::CResourceNameGetter(
				ResourceHandle_t hResource);  // 998
	CResourceName::Get(); // 998
	ResourceId_t::GetRaw(); // 998
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 998
} /* size: 0, variables: 1, inline expansions: 13 (414 bytes) */

// <022AA039> resourcesystem/loadingresource.cpp:1004
// variables: 4
// function calls: 19
void CLoadingResource::IsReadyToFinalize()
{
	{
		UtlHashHandle_t h; // 1023
		{
			CLoadingResource* pLoadingResource; // 1025
			CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MajorIndex(
					int i);  // 243
			CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::IsIdxValid(
					short unsigned int i);  // 191
			CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MajorIndex(
					int i);  // 192
			CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MinorIndex(
					int i);  // 193
			{
			}
			CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::operator[](
					short unsigned int i);  // 494
			CUtlLinkedList<CLoadingResource::operator[](
					short unsigned int i);  // 50
			CLoadingResource::GetDependencySerialNumber(); // 51
			FindLoadingResource(ResourceHandle_t hResource,
						LoadingResourceSerialNumber_t nSerialNumber);  // 1025
			CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::operator[](
					int i);  // 296
			CUtlHashtable<const ResourceBindingBase_t::operator[](
					handle_t idx);  // 1025
		}
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::Count(); // 915
			CUtlHashtableEntry<const ResourceBindingBase_t::IsValid(); // 917
		}
		CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::Base(); // 914
		CUtlHashtable<const ResourceBindingBase_t::NextHandle(
				handle_t start);  // 208
		CUtlHashtable<const ResourceBindingBase_t::FirstHandle(); // 1023
		CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::Count(); // 915
			CUtlHashtableEntry<const ResourceBindingBase_t::IsValid(); // 917
		}
		CUtlHashtable<const ResourceBindingBase_t::NextHandle(
				handle_t start);  // 1023
	}
} /* size: 0 */

// <022A9526> resourcesystem/loadingresource.cpp:1040
// variables: 4
// function calls: 44
void CLoadingResource::ReportUnfinishedState()
{
	{
		UtlHashHandle_t h; // 1071
		{
			CLoadingResource* pLoadingResource; // 1073
			CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MajorIndex(
					int i);  // 243
			CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::IsIdxValid(
					short unsigned int i);  // 191
			CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MajorIndex(
					int i);  // 192
			CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MinorIndex(
					int i);  // 193
			{
			}
			CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::operator[](
					short unsigned int i);  // 494
			CUtlLinkedList<CLoadingResource::operator[](
					short unsigned int i);  // 50
			CLoadingResource::GetDependencySerialNumber(); // 51
			FindLoadingResource(ResourceHandle_t hResource,
						LoadingResourceSerialNumber_t nSerialNumber);  // 1073
			CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::operator[](
					int i);  // 297
			CUtlHashtable<const ResourceBindingBase_t::operator[](
					handle_t idx);  // 1073
		}
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::Count(); // 915
			CUtlHashtableEntry<const ResourceBindingBase_t::IsValid(); // 917
		}
		CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::Base(); // 914
		CUtlHashtable<const ResourceBindingBase_t::NextHandle(
				handle_t start);  // 208
		CUtlHashtable<const ResourceBindingBase_t::FirstHandle(); // 1071
		CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::Count(); // 915
			CUtlHashtableEntry<const ResourceBindingBase_t::IsValid(); // 917
		}
		CUtlHashtable<const ResourceBindingBase_t::NextHandle(
				handle_t start);  // 1071
	}
	CUtlSymbolLarge::String(); // 160
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 184
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 180
	ResourceGetName(ResourceHandle_t hResource,
			CResourceName* pTarget);  // 196
	CResourceNameGetter::CResourceNameGetter(
				ResourceHandle_t hResource);  // 1049
	CResourceName::Get(); // 1049
	ResourceId_t::GetRaw(); // 1049
	CUtlSymbolLarge::String(); // 160
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 184
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 180
	ResourceGetName(ResourceHandle_t hResource,
			CResourceName* pTarget);  // 196
	CResourceNameGetter::CResourceNameGetter(
				ResourceHandle_t hResource);  // 1057
	CResourceName::Get(); // 1057
	ResourceId_t::GetRaw(); // 1057
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 1065
	CUtlSymbolLarge::String(); // 160
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 184
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 180
	ResourceGetName(ResourceHandle_t hResource,
			CResourceName* pTarget);  // 196
	CResourceNameGetter::CResourceNameGetter(
				ResourceHandle_t hResource);  // 1065
	CResourceName::Get(); // 1065
	ResourceId_t::GetRaw(); // 1065
} /* size: 0, inline expansions: 25 (610 bytes) */

// <022A87E2> resourcesystem/loadingresource.cpp:1084
// variables: 4
// function calls: 53
void CLoadingResource::AddLoadingResources(LoadingResourceTable_t& resources)
{
	{
		UtlHashHandle_t h; // 1099
		{
			CLoadingResource* pLoadingResource; // 1101
			CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MajorIndex(
					int i);  // 243
			CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::IsIdxValid(
					short unsigned int i);  // 191
			CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MajorIndex(
					int i);  // 192
			CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MinorIndex(
					int i);  // 193
			{
			}
			CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::operator[](
					short unsigned int i);  // 494
			CUtlLinkedList<CLoadingResource::operator[](
					short unsigned int i);  // 50
			CLoadingResource::GetDependencySerialNumber(); // 51
			FindLoadingResource(ResourceHandle_t hResource,
						LoadingResourceSerialNumber_t nSerialNumber);  // 1101
			CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::operator[](
					int i);  // 297
			CUtlHashtable<const ResourceBindingBase_t::operator[](
					handle_t idx);  // 1101
		}
		CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::Count(); // 915
			CUtlHashtableEntry<const ResourceBindingBase_t::IsValid(); // 917
		}
		CUtlHashtable<const ResourceBindingBase_t::NextHandle(
				handle_t start);  // 208
		CUtlHashtable<const ResourceBindingBase_t::FirstHandle(); // 1099
		CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::Count(); // 915
			CUtlHashtableEntry<const ResourceBindingBase_t::IsValid(); // 917
		}
		CUtlHashtable<const ResourceBindingBase_t::NextHandle(
				handle_t start);  // 1099
	}
	Mix32HashFunctor::operator(
			uint32 n);  // 139
	PointerHashFunctor::operator(
			const void* s);  // 218
	CUtlHashtable<CLoadingResource::Find(
		KeyArg_t k);  // 235
	CUtlHashtable<CLoadingResource::HasElement(
			KeyArg_t k);  // 1091
	CUtlMemory<CUtlHashtableEntry<CLoadingResource::operator[](
			int i);  // 706
	CUtlKeyValuePair<CLoadingResource::CUtlKeyValuePair<CLoadingResource*>(
						CLoadingResource* const& k);  // 1514
	Construct<CUtlKeyValuePair<CLoadingResource*, empty_t>, CLoadingResource*&>(CUtlKeyValuePair<CLoadingResource*, empty_t>* pMemory); // 706
	CUtlHashtable<CLoadingResource::DoInsert<CLoadingResource*>(
					CLoadingResource* k,
					unsigned int h,
					bool* pDidInsert);  // 695
	CUtlHashtable<CLoadingResource::DoInsert<CLoadingResource*>(
					CLoadingResource* k,
					unsigned int h,
					bool* pDidInsert);  // 240
	CUtlHashtable<CLoadingResource::Insert(
		KeyArg_t k);  // 1094
	CUtlMemory<CLoadingResource::NumAllocated(); // 1247
	CUtlMemory<CLoadingResource::Base(); // 112
	CUtlVectorBase<CLoadingResource::Base(); // 368
	CUtlVectorBase<CLoadingResource::ResetDbgInfo(); // 824
	CUtlMemory<CLoadingResource::IsGrowable(); // 823
	CUtlMemory<CLoadingResource::IsExternallyAllocated(); // 859
	CUtlMemory<CLoadingResource::IsExternallyAllocated(); // 861
	CUtlMemory<CLoadingResource::Grow(
		int num);  // 806
	CUtlVectorBase<CLoadingResource::GrowMemory(
			int num);  // 1249
	CUtlMemory<CLoadingResource::operator[](
			int i);  // 602
	CUtlVectorBase<CLoadingResource::Element(
		int i);  // 1252
	Construct<CLoadingResource*, CLoadingResource*>(CLoadingResource** pMemory); // 1252
	CUtlVectorBase<CLoadingResource::AddToTail(
			CLoadingResource *& src);  // 1095
	CUtlSymbolLarge::String(); // 160
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 184
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 180
	ResourceGetName(ResourceHandle_t hResource,
			CResourceName* pTarget);  // 196
	CResourceNameGetter::CResourceNameGetter(
				ResourceHandle_t hResource);  // 1093
	CResourceName::Get(); // 1093
	ResourceId_t::GetRaw(); // 1093
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 1093
} /* size: 0, inline expansions: 34 (1531 bytes) */

// <022A8723> resourcesystem/loadingresource.cpp:1113
// variables: 2
// function call: 1
void CLoadingResource::RegisterStreamingAsyncResourceDataRequest()
{
	const char   __FUNCTION__; // 19881
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1115
	}
	CLoadingResource::IsExpectingStreamingDataRequest(); // 1118
} /* size: 0, variables: 1, inline expansions: 1 (7 bytes) */

// <022A86F5> resourcesystem/loadingresource.cpp:1124
void CLoadingResource::RegisterAllStreamingAsyncDataRequestsComplete()
{
} /* size: 21 */

// <022A8304> resourcesystem/loadingresource.cpp:1135
// variables: 4
// function calls: 13
void CLoadingResource::MarkResourceNotLoadable()
{
	const ResourceTypeRegistration_t* pReg; // 1137
	void* pNoData; // 1141
	CPathBufferString fileName; // 1144
	const char* pResourceType; // 1146
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 1144
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
			bool bAppend);  // 1145
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1148
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 1147
	ResourceId_t::GetRaw(); // 1147
} /* size: 381, variables: 4, inline expansions: 13 (317 bytes) */

// <022A6C42> resourcesystem/loadingresource.cpp:1154
// variables: 17
// function calls: 82
void CLoadingResource::FinalizeLoadRequest(CUtlVector<ResourceStatusChange_t, CUtlMemory<ResourceStatusChange_t, int> >* pOutStatusChanges)
{
	const char   __FUNCTION__; // 19342
	const ResourceTypeRegistration_t* pReg; // 1159
	CAsyncStackResume asyncStack; // 1180
	int nIndex; // 1184
	ResourceHandle_t* pHandles; // 1185
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1156
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1157
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1174
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1175
	}
	{
		UtlHashHandle_t h; // 1186
		{
			CLoadingResource* pLoadingResource; // 1191
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1194
			}
			CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MajorIndex(
					int i);  // 243
			CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::IsIdxValid(
					short unsigned int i);  // 191
			CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MajorIndex(
					int i);  // 192
			CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MinorIndex(
					int i);  // 193
			{
			}
			CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::operator[](
					short unsigned int i);  // 494
			CUtlLinkedList<CLoadingResource::operator[](
					short unsigned int i);  // 50
			CLoadingResource::GetDependencySerialNumber(); // 51
			FindLoadingResource(ResourceHandle_t hResource,
						LoadingResourceSerialNumber_t nSerialNumber);  // 1191
			CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::operator[](
					int i);  // 297
			CUtlHashtable<const ResourceBindingBase_t::operator[](
					handle_t idx);  // 1191
			CLoadingResource::GetExtRefDepth(); // 1194
			CLoadingResource::GetExtRefDepth(); // 1194
		}
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::Count(); // 915
			CUtlHashtableEntry<const ResourceBindingBase_t::IsValid(); // 917
		}
		CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::Base(); // 914
		CUtlHashtable<const ResourceBindingBase_t::NextHandle(
				handle_t start);  // 208
		CUtlHashtable<const ResourceBindingBase_t::FirstHandle(); // 1186
		CResourceSystem::IsDebugModeEnabled(
					ResourceSystemDebugMode_t mode);  // 1189
		CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::operator[](
				int i);  // 293
		CUtlHashtable<const ResourceBindingBase_t::Key(
			handle_t idx);  // 1200
		CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::Count(); // 915
			CUtlHashtableEntry<const ResourceBindingBase_t::IsValid(); // 917
		}
		CUtlHashtable<const ResourceBindingBase_t::NextHandle(
				handle_t start);  // 1186
	}
	{
		const uint64  nStartUs; // 1211
	}
	{
		ResourceStatusChange_t* pChange; // 1218
		CUtlMemory<ResourceStatusChange_t, int>::NumAllocated(); // 1143
		CUtlMemory<ResourceStatusChange_t, int>::Base(); // 112
		CUtlVectorBase<ResourceStatusChange_t, CUtlMemory<ResourceStatusChange_t, int> >::Base(); // 368
		CUtlVectorBase<ResourceStatusChange_t, CUtlMemory<ResourceStatusChange_t, int> >::ResetDbgInfo(); // 824
		CUtlMemory<ResourceStatusChange_t, int>::IsGrowable(); // 823
		CUtlMemory<ResourceStatusChange_t, int>::IsExternallyAllocated(); // 859
		CUtlMemory<ResourceStatusChange_t, int>::IsExternallyAllocated(); // 861
		CUtlMemory<ResourceStatusChange_t, int>::Grow(
			int num);  // 806
		CUtlVectorBase<ResourceStatusChange_t, CUtlMemory<ResourceStatusChange_t, int> >::GrowMemory(
				int num);  // 1145
		CUtlMemory<ResourceStatusChange_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<ResourceStatusChange_t, CUtlMemory<ResourceStatusChange_t, int> >::Element(
			int i);  // 1148
		ResourceId_t::ResourceId_t(); // 266
		ResourceStatusChange_t::ResourceStatusChange_t(); // 1479
		Construct<ResourceStatusChange_t>(ResourceStatusChange_t* pMemory); // 1148
		CUtlVectorBase<ResourceStatusChange_t, CUtlMemory<ResourceStatusChange_t, int> >::AddToTail(); // 1156
		CUtlMemory<ResourceStatusChange_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<ResourceStatusChange_t, CUtlMemory<ResourceStatusChange_t, int> >::Element(
			int i);  // 1156
		CUtlVectorBase<ResourceStatusChange_t, CUtlMemory<ResourceStatusChange_t, int> >::AddToTailGetPtr(); // 1218
	}
	{
		CResourceNameGetter name; // 1230
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 180
		ResourceGetName(ResourceHandle_t hResource,
				CResourceName* pTarget);  // 196
		CResourceNameGetter::CResourceNameGetter(
					ResourceHandle_t hResource);  // 1230
		CResourceName::Get(); // 1231
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 1232
	}
	ConVar::GetInt(); // 1162
	CDeferredCallStackMarker::CDeferredCallStackMarker(); // 1180
	GetFromBinding(const ResourceBindingBase_t* pBinding); // 99
	GetAsyncTrackerForResource(ResourceHandle_t hResource); // 1180
	CUtlHashtable<const ResourceBindingBase_t::Count(); // 1185
	CUtlHashtable<const ResourceBindingBase_t::Count(); // 1202
	{
	}
	CDeferredCallStackMarkerProxy::Detach(); // 359
	CDeferredCallStackMarkerProxy::~CDeferredCallStackMarkerProxy(); // 224
	CAsyncStackResume::~CAsyncStackResume(); // 1235
	CUtlSymbolLarge::String(); // 160
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 184
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 180
	ResourceGetName(ResourceHandle_t hResource,
			CResourceName* pTarget);  // 196
	CResourceNameGetter::CResourceNameGetter(
				ResourceHandle_t hResource);  // 1164
	CResourceName::Get(); // 1164
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 1164
	CUtlSymbolLarge::String(); // 160
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 184
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 180
	ResourceGetName(ResourceHandle_t hResource,
			CResourceName* pTarget);  // 196
	CResourceNameGetter::CResourceNameGetter(
				ResourceHandle_t hResource);  // 1160
	CResourceName::Get(); // 1160
	ResourceId_t::GetRaw(); // 1160
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 1160
} /* size: 0, variables: 5, inline expansions: 30 (897 bytes) */

