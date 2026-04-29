
//
// resourcesystem/streamingresourcedata.cpp
//
//	referenced by: libengine2.so
//
//	functions: 13
//

// <022DF91D> resourcesystem/streamingresourcedata.cpp:27
// function calls: 6
void FindStreamingResourceData(ResourceHandle_t hResource)
{
	CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::MajorIndex(
			int i);  // 243
	CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::IsIdxValid(
			short unsigned int i);  // 191
	CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::MajorIndex(
			int i);  // 192
	CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::MinorIndex(
			int i);  // 193
	{
	}
	CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::operator[](
			short unsigned int i);  // 494
	CUtlLinkedList<CStreamingResourceData::operator[](
			short unsigned int i);  // 33
} /* size: 0, inline expansions: 6 (295 bytes) */

// <022DF216> resourcesystem/streamingresourcedata.cpp:27
void FindStreamingResourceData(ResourceHandle_t hResource)
{
} /* size: 0 */

// <022DEF91> resourcesystem/streamingresourcedata.cpp:42
// variable: 1
// function calls: 7
void CreateAsyncResourceDataRequest(ResourceHandle_t hResource, int64 nFileOffset, size_t nLoadSizeBytes, const char* pFileNameOverride)
{
	CStreamingResourceData* pStreamingResourceData; // 45
	CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::MajorIndex(
			int i);  // 243
	CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::IsIdxValid(
			short unsigned int i);  // 191
	CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::MajorIndex(
			int i);  // 192
	CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::MinorIndex(
			int i);  // 193
	{
	}
	CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::operator[](
			short unsigned int i);  // 494
	CUtlLinkedList<CStreamingResourceData::operator[](
			short unsigned int i);  // 33
	FindStreamingResourceData(ResourceHandle_t hResource); // 45
} /* size: 0, variables: 1, inline expansions: 7 (515 bytes) */

// <022DE165> resourcesystem/streamingresourcedata.cpp:58
// function calls: 50
void CStreamingResourceData::CStreamingResourceData(ResourceHandle_t hResource)
{
	{
		{
		}
		{
		}
	}
	{
		{
		}
		GetID(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this,
			UtlTSHashHandle_t hHash);  // 503
		ResourceId_t::ResourceId_t(
				uint64 value);  // 503
		CResourceSystem::ResourceHandleToResourceId(
						ResourceHandle_t hResource);  // 62
		MakeWritableHandle(ResourceHandle_t hResource); // 63
		{
		}
		CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::MajorIndex(
				int i);  // 243
		CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::IsIdxValid(
				short unsigned int i);  // 588
		CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::IsIdxAfter(
				short unsigned int i,
				const Iterator_t& it);  // 591
		CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::MinorIndex(
				int i);  // 201
		CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::operator[](
				short unsigned int i);  // 594
		CUtlLinkedList<CStreamingResourceData::IsValidIndex(
				short unsigned int i);  // 977
		{
		}
		CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::MajorIndex(
				int i);  // 243
		CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::IsIdxValid(
				short unsigned int i);  // 191
		CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::MinorIndex(
				int i);  // 193
		CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::MajorIndex(
				int i);  // 192
		{
		}
		CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::operator[](
				short unsigned int i);  // 367
		CUtlLinkedList<CStreamingResourceData::InternalElement(
				short unsigned int i);  // 982
		CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::MajorIndex(
				int i);  // 243
		CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::IsIdxValid(
				short unsigned int i);  // 191
		CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::MajorIndex(
				int i);  // 192
		CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::MinorIndex(
				int i);  // 193
		{
		}
		CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::operator[](
				short unsigned int i);  // 367
		CUtlLinkedList<CStreamingResourceData::InternalElement(
				short unsigned int i);  // 1011
		CUtlLinkedList<CStreamingResourceData::LinkBefore(
				short unsigned int before,
				short unsigned int elem);  // 822
		CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::MajorIndex(
				int i);  // 243
		CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::IsIdxValid(
				short unsigned int i);  // 191
		CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::MajorIndex(
				int i);  // 192
		CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::MinorIndex(
				int i);  // 193
		{
		}
		CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::operator[](
				short unsigned int i);  // 482
		CUtlLinkedList<CStreamingResourceData::Element(
			short unsigned int i);  // 825
		CopyConstruct<CStreamingResourceData*>(CStreamingResourceData** pMemory,
							CStreamingResourceData* const& src);  // 825
		CUtlLinkedList<CStreamingResourceData::InsertBefore(
				short unsigned int before,
				CStreamingResourceData* const& src);  // 856
		CUtlLinkedList<CStreamingResourceData::AddToTail(
				CStreamingResourceData* const& src);  // 68
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 180
		ResourceGetName(ResourceHandle_t hResource,
				CResourceName* pTarget);  // 196
		CResourceNameGetter::CResourceNameGetter(
					ResourceHandle_t hResource);  // 70
		CResourceName::Get(); // 70
		ResourceId_t::GetRaw(); // 70
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 70
		IAsyncResourceDataRequestOwner::IAsyncResourceDataRequestOwner(); // 58
		ResourceId_t::ResourceId_t(); // 58
		CUtlMemory<CAsyncResourceDataRequest::ValidateGrowSize(); // 475
		CUtlMemory<CAsyncResourceDataRequest::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CAsyncResourceDataRequest::ResetDbgInfo(); // 530
		CUtlVectorBase<CAsyncResourceDataRequest::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CAsyncResourceDataRequest::CUtlVector(); // 58
	}
} /* size: 0 */

// <022DE101> resourcesystem/streamingresourcedata.cpp:58
// variables: 3
void CStreamingResourceData::CStreamingResourceData(ResourceHandle_t hResource)
{
	const char   __FUNCTION__; // 49086
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 60
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 67
	}
} /* size: 0, variables: 1 */

// <022DD342> resourcesystem/streamingresourcedata.cpp:77
// variables: 8
// function calls: 51
void CStreamingResourceData::~CStreamingResourceData()
{
	{
		{
			int nCount; // 90
			{
			}
			{
			}
			{
				int i; // 91
				{
					CAsyncResourceDataRequest* pRequest; // 93
					{
					}
				}
			}
			{
			}
			{
			}
		}
	}
	{
		{
			int nCount; // 90
			{
			}
			{
			}
			CUtlVectorBase<CAsyncResourceDataRequest::Count(); // 90
			{
				int i; // 91
				{
					CAsyncResourceDataRequest* pRequest; // 93
					CUtlMemory<CAsyncResourceDataRequest::operator[](
							int i);  // 588
					CUtlVectorBase<CAsyncResourceDataRequest::operator[](
							int i);  // 93
					{
						int i; // 1531
						CUtlVectorBase<CAsyncResourceDataRequest::Count(); // 1531
						CUtlMemory<CAsyncResourceDataRequest::operator[](
								int i);  // 609
						CUtlVectorBase<CAsyncResourceDataRequest::Element(
							int i);  // 1533
					}
					CUtlVectorBase<CAsyncResourceDataRequest::Find(
						CAsyncResourceDataRequest* const& src);  // 95
					InvalidIndex(void); // 95
					{
					}
				}
			}
			CUtlVectorBase<CAsyncResourceDataRequest::Count(); // 97
			{
			}
			CUtlVectorBase<CAsyncResourceDataRequest::RemoveAll(); // 98
			{
			}
			CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::MajorIndex(
					int i);  // 243
			CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::IsIdxValid(
					short unsigned int i);  // 588
			CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::IsIdxAfter(
					short unsigned int i,
					const Iterator_t& it);  // 591
			CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::MinorIndex(
					int i);  // 201
			CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::operator[](
					short unsigned int i);  // 594
			CUtlLinkedList<CStreamingResourceData::IsValidIndex(
					short unsigned int i);  // 749
			{
			}
			CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::MajorIndex(
					int i);  // 243
			CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::IsIdxValid(
					short unsigned int i);  // 191
			CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::MajorIndex(
					int i);  // 192
			CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::MinorIndex(
					int i);  // 193
			{
			}
			CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::operator[](
					short unsigned int i);  // 367
			CUtlLinkedList<CStreamingResourceData::InternalElement(
					short unsigned int i);  // 752
			Destruct<CStreamingResourceData*>(CStreamingResourceData** pMemory); // 753
			CUtlLinkedList<CStreamingResourceData::Free(
				short unsigned int elem);  // 907
			CUtlLinkedList<CStreamingResourceData::Remove(
				short unsigned int elem);  // 104
			CUtlLinkedList<CStreamingResourceData::Count(); // 109
			MakeWritableHandle(ResourceHandle_t hResource); // 114
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 184
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 180
			ResourceGetName(ResourceHandle_t hResource,
					CResourceName* pTarget);  // 196
			CResourceNameGetter::CResourceNameGetter(
						ResourceHandle_t hResource);  // 79
			CResourceName::Get(); // 79
			ResourceId_t::GetRaw(); // 79
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 79
			{
				int i; // 359
			}
			CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::Purge(); // 354
			CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::Purge(); // 643
			CUtlLinkedList<CStreamingResourceData::ResetDbgInfo(); // 650
			Iterator_t::Iterator_t(
					short unsigned int i);  // 59
			CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::InvalidIterator(); // 648
			CUtlLinkedList<CStreamingResourceData::Purge(); // 111
		}
		CUtlMemory<CAsyncResourceDataRequest::IsExternallyAllocated(); // 905
		CUtlMemory<CAsyncResourceDataRequest::Purge(); // 903
		CUtlMemory<CAsyncResourceDataRequest::Purge(); // 1799
		CUtlVectorBase<CAsyncResourceDataRequest::RemoveAll(); // 1798
		CUtlVectorBase<CAsyncResourceDataRequest::Purge(); // 560
		CUtlVectorBase<CAsyncResourceDataRequest::~CUtlVectorBase(); // 410
		CUtlVector<CAsyncResourceDataRequest::~CUtlVector(); // 115
	}
} /* size: 0 */

// <022DD26D> resourcesystem/streamingresourcedata.cpp:77
// variables: 9
void CStreamingResourceData::~CStreamingResourceData()
{
	const char   __FUNCTION__; // 49107
	{
		int nCount; // 90
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 82
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 83
		}
		{
			int i; // 91
			{
				CAsyncResourceDataRequest* pRequest; // 93
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 95
				}
			}
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 97
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 101
		}
	}
} /* size: 0, variables: 1 */

// <022DCF14> resourcesystem/streamingresourcedata.cpp:119
// function calls: 11
void CStreamingResourceData::Cancel()
{
	CUtlSymbolLarge::String(); // 160
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 184
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 180
	ResourceGetName(ResourceHandle_t hResource,
			CResourceName* pTarget);  // 196
	CResourceNameGetter::CResourceNameGetter(
				ResourceHandle_t hResource);  // 121
	CResourceName::Get(); // 121
	ResourceId_t::GetRaw(); // 121
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 121
} /* size: 267, inline expansions: 11 (259 bytes) */

// <022DFAB3> resourcesystem/streamingresourcedata.cpp:129
// variables: 2
// function calls: 4
void CStreamingResourceData::IncreasePriority(ResourceManifestLoadPriority_t nPriority)
{
	int nCount; // 138
	{
	}
	CUtlVectorBase<CAsyncResourceDataRequest::Count(); // 138
	{
		int i; // 139
		CUtlMemory<CAsyncResourceDataRequest::operator[](
				int i);  // 588
		CUtlVectorBase<CAsyncResourceDataRequest::operator[](
				int i);  // 141
	}
	CStreamingResourceData::IncreasePriority(
			ResourceManifestLoadPriority_t nPriority);  // 129
} /* size: 0, variables: 1, inline expansions: 2 (53 bytes) */

// <022DCE94> resourcesystem/streamingresourcedata.cpp:129
// variables: 4
void CStreamingResourceData::IncreasePriority(ResourceManifestLoadPriority_t nPriority)
{
	const char   __FUNCTION__; // 49044
	int nCount; // 138
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 131
	}
	{
		int i; // 139
	}
} /* size: 0, variables: 2 */

// <022DC91B> resourcesystem/streamingresourcedata.cpp:148
// variables: 7
// function calls: 15
void CStreamingResourceData::CreateAsyncResourceDataRequestInternal(int64 nFileOffset, size_t nLoadSizeBytes, const char* pFileNameOverride)
{
	const char   __FUNCTION__; // 49149
	CLoadingResource* pLoadingResource; // 152
	ResourceManifestLoadPriority_t nPriority; // 153
	const ResourceTypeRegistration_t* pReg; // 156
	const bool  bAllowMemoryMapping; // 157
	CAsyncResourceDataRequest* pExternalRequest; // 164
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 150
	}
	CLoadingResource::GetPriority(); // 153
	ResourceId_t::GetRaw(); // 167
	CUtlMemory<CAsyncResourceDataRequest::NumAllocated(); // 1196
	CUtlMemory<CAsyncResourceDataRequest::Base(); // 112
	CUtlVectorBase<CAsyncResourceDataRequest::Base(); // 368
	CUtlVectorBase<CAsyncResourceDataRequest::ResetDbgInfo(); // 824
	CUtlMemory<CAsyncResourceDataRequest::IsGrowable(); // 823
	CUtlMemory<CAsyncResourceDataRequest::IsExternallyAllocated(); // 859
	CUtlMemory<CAsyncResourceDataRequest::IsExternallyAllocated(); // 861
	CUtlMemory<CAsyncResourceDataRequest::Grow(
		int num);  // 806
	CUtlVectorBase<CAsyncResourceDataRequest::GrowMemory(
			int num);  // 1198
	CUtlMemory<CAsyncResourceDataRequest::operator[](
			int i);  // 602
	CUtlVectorBase<CAsyncResourceDataRequest::Element(
		int i);  // 1201
	CopyConstruct<CAsyncResourceDataRequest*>(CAsyncResourceDataRequest** pMemory,
							CAsyncResourceDataRequest* const& src);  // 1201
	CUtlVectorBase<CAsyncResourceDataRequest::AddToTail(
			CAsyncResourceDataRequest* const& src);  // 169
} /* size: 0, variables: 6, inline expansions: 15 (699 bytes) */

// <022DC8DC> resourcesystem/streamingresourcedata.cpp:180
void CStreamingResourceData::OnAsyncProcessResourceData(CAsyncResourceDataRequest* pRequest)
{
} /* size: 5 */

// <022DC23D> resourcesystem/streamingresourcedata.cpp:185
// variables: 6
// function calls: 22
void CStreamingResourceData::OnAsyncDataRequestComplete(CAsyncResourceDataRequest* pRequest)
{
	bool bRemoved; // 187
	const char   __FUNCTION__; // 49128
	const ResourceTypeRegistration_t* pReg; // 197
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 188
	}
	{
		CLoadingResource* pLoadingResource; // 206
	}
	{
		int i; // 1531
		CUtlVectorBase<CAsyncResourceDataRequest::Count(); // 1531
		CUtlMemory<CAsyncResourceDataRequest::operator[](
				int i);  // 609
		CUtlVectorBase<CAsyncResourceDataRequest::Element(
			int i);  // 1533
	}
	CUtlVectorBase<CAsyncResourceDataRequest::Find(
		CAsyncResourceDataRequest* const& src);  // 1617
	CUtlMemory<CAsyncResourceDataRequest::operator[](
			int i);  // 602
	CUtlVectorBase<CAsyncResourceDataRequest::Element(
		int i);  // 1114
	CUtlMemory<CAsyncResourceDataRequest::operator[](
			int i);  // 602
	CUtlVectorBase<CAsyncResourceDataRequest::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<CAsyncResourceDataRequest::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<CAsyncResourceDataRequest::Remove(
		int elem);  // 1620
	CUtlVectorBase<CAsyncResourceDataRequest::FindAndRemove(
			CAsyncResourceDataRequest* const& src);  // 187
	CUtlVectorBase<CAsyncResourceDataRequest::Count(); // 194
	ResourceId_t::GetRaw(); // 194
	Plat_TickDiffMicroSec(uint64 nStartTicks,
				uint64 nEndTicks,
				uint64 nFreq);  // 301
	CCycleCount::GetMicroseconds64(); // 66
	CAsyncResourceDataRequest::GetUserCallbackTimeUs(); // 198
	Plat_TickDiffMicroSec(uint64 nStartTicks,
				uint64 nEndTicks,
				uint64 nFreq);  // 301
	CCycleCount::GetMicroseconds64(); // 67
	CAsyncResourceDataRequest::GetAsyncUserCallbackTimeUs(); // 199
	CUtlVectorBase<CAsyncResourceDataRequest::Count(); // 204
} /* size: 0, variables: 3, inline expansions: 19 (548 bytes) */

