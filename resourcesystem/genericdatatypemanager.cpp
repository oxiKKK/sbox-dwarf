
//
// resourcesystem/genericdatatypemanager.cpp
//
//	referenced by: libengine2.so
//
//	functions: 10
//

// <021D43F1> resourcesystem/genericdatatypemanager.cpp:19
// function calls: 2
void InstallGenericDataTypeManager(void)
{
	ResourceTypeName(void); // 673
	IResourceSystem::InstallTypeManager<418564367478>(
					IResourceTypeManager* pTypeManager,
					const char* pErrorManifestName);  // 21
} /* size: 50, inline expansions: 2 (36 bytes) */

// <021D43B1> resourcesystem/genericdatatypemanager.cpp:27
void RemoveGenericDataTypeManager(void)
{
} /* size: 33 */

// <021D3A2E> resourcesystem/genericdatatypemanager.cpp:35
// variables: 6
// function calls: 33
void CGenericDataTypeManager::RegisterExtRefs(HGenericData hResource, CGenericDataResource* pData, KeyValues3* pKV3, IRD_RegisterResourceDataUtils* pUtils)
{
	CUtlSymbolTable resourceNames; // 37
	int nNum; // 48
	{
		CKeyValues3Iterator it; // 39
		{
			const char* pResourceName; // 43
			CKeyValues3Iterator::operator->(); // 43
		}
		CKeyValues3Iterator::operator->(); // 41
		KeyValues3::GetAllFlags(); // 892
		KeyValues3::HasFlag(
			KeyValues3Flag_t nFlag);  // 41
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
		CKeyValues3Iterator::~CKeyValues3Iterator(); // 46
	}
	{
		UtlSymId_t iResource; // 51
		{
			const char* pResourceName; // 53
			CUtlSymbol::CUtlSymbol(
					UtlSymId_t id);  // 53
			CUtlMemory<CStrongHandleVoid, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::operator[](
					int i);  // 54
			CWeakHandle<InfoForResourceTypeCGenericDataResource>::operator ResourceHandle_t(); // 54
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 54
		}
	}
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
	CUtlSymbolTable::GetNumStrings(); // 48
} /* size: 569, variables: 2, inline expansions: 2 (28 bytes) */

// <021D3182> resourcesystem/genericdatatypemanager.cpp:61
// variables: 4
// function calls: 29
void CGenericDataTypeManager::AllocateEx(HGenericData hResource, ResourceId_t nId, CKV3ResourceBlockHelper* pHelper, IRD_RegisterResourceDataUtils* pUtils)
{
	const char* pDataType; // 63
	CUtlSymbolLarge symType; // 71
	CGenericDataResource* pNewData; // 73
	{
		CResourceNameGetter resourceName; // 66
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 180
		ResourceGetName(ResourceHandle_t hResource,
				CResourceName* pTarget);  // 488
		CWeakHandle<InfoForResourceTypeCGenericDataResource>::GetResourceName(
				CResourceName* pOutName);  // 206
		CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCGenericDataResource>(
										const CWeakHandle<InfoForResourceTypeCGenericDataResource>& resourceHandle);  // 66
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 69
		CResourceName::Get(); // 67
	}
	CKV3ResourceBlockHelper::GetKV3(); // 63
	CKV3MemberName::CKV3MemberName<18>(
				const char& str);  // 63
	V_isempty(const char* pszString); // 64
	V_strlen(const char* str); // 68
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::AddString(
			const char* pString);  // 71
	CUtlSymbolLarge::CUtlSymbolLarge(); // 36
	CUtlMemory<CStrongHandleVoid, int>::ValidateGrowSize(); // 475
	CUtlMemory<CStrongHandleVoid, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::CUtlVector(); // 36
	CGenericDataResource::CGenericDataResource(); // 73
	__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::_M_ptr(); // 472
	unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::get(); // 60
	CKV3ResourceBlockHelper::GetKV3Context(); // 75
	CUtlSymbolLarge::operator=(
			const CUtlSymbolLarge& src);  // 76
	CWeakHandle<InfoForResourceTypeCGenericDataResource>::Init(
		const CWeakHandle<InfoForResourceTypeCGenericDataResource>& src);  // 273
	CWeakHandle<InfoForResourceTypeCGenericDataResource>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCGenericDataResource>& src);  // 78
} /* size: 548, variables: 3, inline expansions: 18 (327 bytes) */

// <021D2B39> resourcesystem/genericdatatypemanager.cpp:87
// variables: 11
// function calls: 21
void CGenericDataTypeManager::FinalizeResource(ResourceHandle_t hResourceUntyped, ResourceLoadType_t nLoadType)
{
	HGenericData hResource; // 89
	CResourceNameGetter resourceName; // 91
	{
		ListenerList_t* pListenerList; // 92
		{
			IGenericDataResourceListener* pListener; // 96
			CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> >& __for_range; // 49948
			iterator __for_begin; // 61330
			iterator __for_end; // 61330
			CUtlVectorBase<IGenericDataResourceListener::Count(); // 104
			CUtlVectorBase<IGenericDataResourceListener::end(); // 96
			CUtlMemory<IGenericDataResourceListener::Base(); // 112
			CUtlVectorBase<IGenericDataResourceListener::Base(); // 102
			CUtlVectorBase<IGenericDataResourceListener::begin(); // 96
			CWeakHandle<InfoForResourceTypeCGenericDataResource>::Init(
				const CWeakHandle<InfoForResourceTypeCGenericDataResource>& src);  // 273
			CWeakHandle<InfoForResourceTypeCGenericDataResource>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCGenericDataResource>& src);  // 98
		}
		{
			IGenericDataResourceListener* pListener; // 103
			CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> >& __for_range; // 49948
			iterator __for_begin; // 61330
			iterator __for_end; // 61330
			CWeakHandle<InfoForResourceTypeCGenericDataResource>::Init(
				const CWeakHandle<InfoForResourceTypeCGenericDataResource>& src);  // 273
			CWeakHandle<InfoForResourceTypeCGenericDataResource>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCGenericDataResource>& src);  // 105
		}
	}
	CUtlSymbolLarge::String(); // 160
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 184
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 180
	ResourceGetName(ResourceHandle_t hResource,
			CResourceName* pTarget);  // 488
	CWeakHandle<InfoForResourceTypeCGenericDataResource>::GetResourceName(
			CResourceName* pOutName);  // 206
	CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCGenericDataResource>(
									const CWeakHandle<InfoForResourceTypeCGenericDataResource>& resourceHandle);  // 91
	CWeakHandle<InfoForResourceTypeCGenericDataResource>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 89
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 109
} /* size: 390, variables: 2, inline expansions: 12 (327 bytes) */

// <021D21E2> resourcesystem/genericdatatypemanager.cpp:114
// variables: 8
// function calls: 37
void CGenericDataTypeManager::DeallocateResource(void* pResourceData, IResourceDeallocatorUtils* pDealloc)
{
	TypedResourceHandle_t hResource; // 116
	{
		CResourceNameGetter resourceName; // 120
		{
			ListenerList_t* pListenerList; // 121
			{
				IGenericDataResourceListener* pListener; // 123
				CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> >& __for_range; // 49948
				iterator __for_begin; // 61330
				iterator __for_end; // 61330
				CUtlMemory<IGenericDataResourceListener::Base(); // 112
				CUtlVectorBase<IGenericDataResourceListener::Base(); // 102
				CUtlVectorBase<IGenericDataResourceListener::begin(); // 123
				CUtlVectorBase<IGenericDataResourceListener::Count(); // 104
				CUtlVectorBase<IGenericDataResourceListener::end(); // 123
				CWeakHandle<InfoForResourceTypeCGenericDataResource>::Init(
					const CWeakHandle<InfoForResourceTypeCGenericDataResource>& src);  // 273
				CWeakHandle<InfoForResourceTypeCGenericDataResource>::CWeakHandle(
						const CWeakHandle<InfoForResourceTypeCGenericDataResource>& src);  // 125
			}
		}
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 180
		ResourceGetName(ResourceHandle_t hResource,
				CResourceName* pTarget);  // 488
		CWeakHandle<InfoForResourceTypeCGenericDataResource>::GetResourceName(
				CResourceName* pOutName);  // 206
		CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCGenericDataResource>(
										const CWeakHandle<InfoForResourceTypeCGenericDataResource>& resourceHandle);  // 120
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 128
	}
	CResourceDeallocatorUtils::GetResourceHandle(); // 116
	CWeakHandle<InfoForResourceTypeCGenericDataResource>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 116
	CResourceDeallocatorUtils::IsQueuedReloadDeallocate(); // 118
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
	CUtlVector<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::~CUtlVector(); // 36
	CGenericDataResource::~CGenericDataResource(); // 129
} /* size: 642, variables: 1, inline expansions: 15 (616 bytes) */

// <021D1C92> resourcesystem/genericdatatypemanager.cpp:135
// variables: 2
// function calls: 16
void CGenericDataTypeManager::RegisterListener(const CResourceName& resourceName, IGenericDataResourceListener* pListener)
{
	ListenerList_t* pList; // 137
	{
		{
			int i; // 1531
			CUtlVectorBase<IGenericDataResourceListener::Count(); // 1531
			CUtlMemory<IGenericDataResourceListener::operator[](
					int i);  // 609
			CUtlVectorBase<IGenericDataResourceListener::Element(
				int i);  // 1533
		}
		CUtlVectorBase<IGenericDataResourceListener::Find(
			IGenericDataResourceListener* const& src);  // 138
		_DebuggerBreakInlineExpressionWrapper(void); // 138
	}
	CUtlMemory<IGenericDataResourceListener::NumAllocated(); // 1196
	CopyConstruct<IGenericDataResourceListener*>(IGenericDataResourceListener** pMemory,
							IGenericDataResourceListener* const& src);  // 1201
	CUtlMemory<IGenericDataResourceListener::operator[](
			int i);  // 602
	CUtlVectorBase<IGenericDataResourceListener::Element(
		int i);  // 1201
	CUtlMemory<IGenericDataResourceListener::IsGrowable(); // 823
	CUtlMemory<IGenericDataResourceListener::IsExternallyAllocated(); // 859
	CUtlMemory<IGenericDataResourceListener::IsExternallyAllocated(); // 861
	CUtlMemory<IGenericDataResourceListener::Grow(
		int num);  // 806
	CUtlVectorBase<IGenericDataResourceListener::ResetDbgInfo(); // 824
	CUtlVectorBase<IGenericDataResourceListener::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<IGenericDataResourceListener::AddToTail(
			IGenericDataResourceListener* const& src);  // 140
} /* size: 0, variables: 1, inline expansions: 11 (730 bytes) */

// <021D1649> resourcesystem/genericdatatypemanager.cpp:146
// variables: 2
// function calls: 15
void CGenericDataTypeManager::UnregisterListener(const CResourceName& resourceName, IGenericDataResourceListener* pListener)
{
	ListenerList_t* pList; // 148
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 149
	}
	{
		int i; // 1531
		CUtlVectorBase<IGenericDataResourceListener::Count(); // 1531
		CUtlMemory<IGenericDataResourceListener::operator[](
				int i);  // 609
		CUtlVectorBase<IGenericDataResourceListener::Element(
			int i);  // 1533
	}
	CUtlVectorBase<IGenericDataResourceListener::Find(
		IGenericDataResourceListener* const& src);  // 1617
	CUtlMemory<IGenericDataResourceListener::operator[](
			int i);  // 602
	CUtlVectorBase<IGenericDataResourceListener::Element(
		int i);  // 1114
	CUtlMemory<IGenericDataResourceListener::operator[](
			int i);  // 602
	CUtlVectorBase<IGenericDataResourceListener::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<IGenericDataResourceListener::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<IGenericDataResourceListener::Remove(
		int elem);  // 1620
	CUtlVectorBase<IGenericDataResourceListener::FindAndRemove(
			IGenericDataResourceListener* const& src);  // 152
	_DebuggerBreakInlineExpressionWrapper(void); // 152
} /* size: 0, variables: 1, inline expansions: 11 (307 bytes) */

// <021D10D1> resourcesystem/genericdatatypemanager.cpp:158
// variable: 1
// function calls: 18
void CGenericDataTypeManager::GetListenerListForId(ResourceId_t nId, bool bCreateIfNotFound)
{
	UtlHashHandle_t h; // 160
	HashItem<ResourceId_t>(const ResourceId_t& item); // 50
	DefaultHashFunctor<ResourceId_t>::operator(
			ResourceId_t s);  // 218
	CUtlHashtable<ResourceId_t, CUtlVector<IGenericDataResourceListener::Find(
		KeyArg_t k);  // 160
	CUtlMemory<CUtlHashtableEntry<ResourceId_t, CUtlVector<IGenericDataResourceListener::operator[](
			int i);  // 297
	CUtlHashtable<ResourceId_t, CUtlVector<IGenericDataResourceListener::operator[](
			handle_t idx);  // 168
	HashItem<ResourceId_t>(const ResourceId_t& item); // 50
	DefaultHashFunctor<ResourceId_t>::operator(
			ResourceId_t s);  // 249
	CUtlMemory<CUtlHashtableEntry<ResourceId_t, CUtlVector<IGenericDataResourceListener::operator[](
			int i);  // 720
	CUtlKeyValuePair<ResourceId_t, CUtlVector<IGenericDataResourceListener::CUtlKeyValuePair<ResourceId_t, CUtlVector<IGenericDataResourceListener*>*>(
											const ResourceId_t& k,
											CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> >* const& v);  // 1514
	Construct<CUtlKeyValuePair<ResourceId_t, CUtlVector<IGenericDataResourceListener*>*>, const ResourceId_t&, CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> >*&>(CUtlKeyValuePair<ResourceId_t, CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> > pMemory); // 720
	CUtlHashtable<ResourceId_t, CUtlVector<IGenericDataResourceListener::DoInsert<const ResourceId_t&>(
					const ResourceId_t& k,
					Arg_t v,
					unsigned int h,
					bool* pDidInsert);  // 714
	CUtlHashtable<ResourceId_t, CUtlVector<IGenericDataResourceListener::DoInsert<const ResourceId_t&>(
					const ResourceId_t& k,
					Arg_t v,
					unsigned int h,
					bool* pDidInsert);  // 249
	CUtlHashtable<ResourceId_t, CUtlVector<IGenericDataResourceListener::Insert(
		KeyArg_t k,
		ValueArg_t v,
		bool* pDidInsert);  // 166
	CUtlVectorBase<IGenericDataResourceListener::ResetDbgInfo(); // 530
	CUtlMemory<IGenericDataResourceListener::ValidateGrowSize(); // 475
	CUtlMemory<IGenericDataResourceListener::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<IGenericDataResourceListener::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<IGenericDataResourceListener::CUtlVector(); // 166
} /* size: 318, variables: 1, inline expansions: 18 (526 bytes) */

// <021D10A3> resourcesystem/genericdatatypemanager.cpp:174
void CResourceSystem::GetGenericDataTypeManager()
{
} /* size: 12 */

