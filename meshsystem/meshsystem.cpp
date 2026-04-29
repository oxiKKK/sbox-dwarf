
//
// meshsystem/meshsystem.cpp
//
//	referenced by: libmeshsystem.so
//
//	functions: 68
//

// <0018789D> meshsystem/meshsystem.cpp:39
void* __CreateCMeshSystemIMeshSystem_interface(void)
{
} /* size: 12 */

// <00187798> meshsystem/meshsystem.cpp:45
// variables: 2
// function call: 1
ResourceManifestDesc_t* InitManifestDesc<VModelError::CTemplateArg>(CTemplateArg& def)
{
	ResourceManifestDesc_t s_Manifest; // 45
	ManifestEntryGroupList_t s_pManifestEntries; // 45
	ResourceManifestEntry_t::ResourceManifestEntry_t(
				const char* pResourceName,
				bool bResourceNameIsManifestName,
				CStrongHandleVoid* pHandle);  // 47
} /* size: 170, variables: 2, inline expansions: 1 (50 bytes) */

// <0015E364> meshsystem/meshsystem.cpp:49
void IndexModelSequences(const CModel *)
{
} /* size: 0 */

// <0018757B> meshsystem/meshsystem.cpp:54
// function calls: 9
void* CModelTypeManager::GetErrorResource()
{
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 56
	CStrongHandle<InfoForResourceTypeCModel>::operator==(
			const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 56
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCModel>::GetHandle(); // 65
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCModel>(const CWeakHandle<InfoForResourceTypeCModel>& hResource); // 65
} /* size: 131, inline expansions: 9 (26 bytes) */

// <0016F6D2> meshsystem/meshsystem.cpp:71
void AsyncProcessDataResults::AsyncProcessDataResults()
{
} /* size: 0 */

// <0016F6B6> meshsystem/meshsystem.cpp:71
inline void AsyncProcessDataResults::AsyncProcessDataResults()
{
} /* size: 0 */

// <00184CE6> meshsystem/meshsystem.cpp:74
// variables: 17
// function calls: 187
void AsyncProcessDataResults::~AsyncProcessDataResults()
{
	{
		int i; // 1807
		CUtlMemory<CModelTypeManager::AsyncProcessDataResults::MeshData::operator[](
				int i);  // 602
		CUtlVectorBase<CModelTypeManager::AsyncProcessDataResults::MeshData::Element(
			int i);  // 1809
		{
			int i; // 1721
			CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this,
				int i);  // 1723
			CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::RemoveAll(); // 1798
			CUtlMemory<RenderInputLayoutField_t, int>::IsExternallyAllocated(); // 905
			CUtlMemory<RenderInputLayoutField_t, int>::Purge(); // 903
			CUtlMemory<RenderInputLayoutField_t, int>::Purge(); // 1799
			CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Purge(); // 560
			ValidateAlignment<RenderInputLayoutField_t>(void); // 508
			CUtlMemory<RenderInputLayoutField_t, int>::Purge(); // 510
			CUtlMemory<RenderInputLayoutField_t, int>::~CUtlMemory(); // 562
			CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::~CUtlVectorBase(); // 410
			CUtlVector<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::~CUtlVector(); // 489
			CUtlVectorFixedGrowableCompat<RenderInputLayoutField_t, 4>::~CUtlVectorFixedGrowableCompat(); // 782
			BufferInfo_t::~BufferInfo_t(); // 1526
			Destruct<RuntimeBuffersInfo_t::BufferInfo_t>(BufferInfo_t* pMemory); // 1723
		}
		RemoveAll(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 1798
		AlignedByteArrayExplicit_t<1, RuntimeBuffersInfo_t::BufferInfo_t, 8>::Base(); // 237
		CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::IsExternallyAllocated(); // 577
		CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::ConvertToExternalMemory(
					BufferInfo_t* pMemory,
					int numElements,
					int nCopyElements,
					bool bSetGrowable,
					uint32 nGrowable_GrowSize);  // 207
		CUtlMemoryFixedGrowable_Base<RuntimeBuffersInfo_t::BufferInfo_t, int>::Purge_FixedGrowable(
					BufferInfo_t* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 203
		CUtlMemoryFixedGrowable_Base<RuntimeBuffersInfo_t::BufferInfo_t, int>::Purge_FixedGrowable(
					BufferInfo_t* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 237
		CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, int>::Purge(
			int numElements);  // 1799
		ResetDbgInfo(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 1800
		Purge(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 560
		ValidateAlignment<RuntimeBuffersInfo_t::BufferInfo_t>(void); // 508
		CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::Purge(); // 903
		CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::Purge(); // 510
		CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::~CUtlMemory(); // 191
		CUtlMemoryFixedGrowable_Base<RuntimeBuffersInfo_t::BufferInfo_t, int>::~CUtlMemoryFixedGrowable_Base(); // 223
		CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, int>::~CUtlMemoryFixedGrowable(); // 562
		~CUtlVectorBase(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 478
		CUtlVectorFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1>::~CUtlVectorFixedGrowable(); // 777
		{
			int i; // 1721
			CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this,
				int i);  // 1723
			CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::RemoveAll(); // 1798
			CUtlMemory<RenderInputLayoutField_t, int>::IsExternallyAllocated(); // 905
			CUtlMemory<RenderInputLayoutField_t, int>::Purge(); // 903
			CUtlMemory<RenderInputLayoutField_t, int>::Purge(); // 1799
			CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Purge(); // 560
			ValidateAlignment<RenderInputLayoutField_t>(void); // 508
			CUtlMemory<RenderInputLayoutField_t, int>::Purge(); // 510
			CUtlMemory<RenderInputLayoutField_t, int>::~CUtlMemory(); // 562
			CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::~CUtlVectorBase(); // 410
			CUtlVector<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::~CUtlVector(); // 489
			CUtlVectorFixedGrowableCompat<RenderInputLayoutField_t, 4>::~CUtlVectorFixedGrowableCompat(); // 782
			BufferInfo_t::~BufferInfo_t(); // 1526
			Destruct<RuntimeBuffersInfo_t::BufferInfo_t>(BufferInfo_t* pMemory); // 1723
		}
		RemoveAll(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 1798
		CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::IsExternallyAllocated(); // 577
		CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::ConvertToExternalMemory(
					BufferInfo_t* pMemory,
					int numElements,
					int nCopyElements,
					bool bSetGrowable,
					uint32 nGrowable_GrowSize);  // 207
		CUtlMemoryFixedGrowable_Base<RuntimeBuffersInfo_t::BufferInfo_t, int>::Purge_FixedGrowable(
					BufferInfo_t* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 203
		CUtlMemoryFixedGrowable_Base<RuntimeBuffersInfo_t::BufferInfo_t, int>::Purge_FixedGrowable(
					BufferInfo_t* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 237
		AlignedByteArrayExplicit_t<1, RuntimeBuffersInfo_t::BufferInfo_t, 8>::Base(); // 237
		CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, int>::Purge(
			int numElements);  // 1799
		ResetDbgInfo(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 1800
		Purge(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 560
		ValidateAlignment<RuntimeBuffersInfo_t::BufferInfo_t>(void); // 508
		CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::Purge(); // 903
		CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::Purge(); // 510
		CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::~CUtlMemory(); // 191
		CUtlMemoryFixedGrowable_Base<RuntimeBuffersInfo_t::BufferInfo_t, int>::~CUtlMemoryFixedGrowable_Base(); // 223
		CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, int>::~CUtlMemoryFixedGrowable(); // 562
		~CUtlVectorBase(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 478
		CUtlVectorFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1>::~CUtlVectorFixedGrowable(); // 777
		RuntimeBuffersInfo_t::~RuntimeBuffersInfo_t(); // 79
		{
			CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData> *& __ptr; // 396
			_M_ptr(const __uniq_ptr_impl<CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>, std::default_delete<CEmbeddedIntrospectedOrKV this); // 396
			get_deleter(const unique_ptr<CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>, std::default_delete<CEmbeddedIntrospectedOrKV3Bloc this); // 398
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
			unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::~unique_ptr(); // 217
			CIntrospectedToKV3ResourceBlockHelper::~CIntrospectedToKV3ResourceBlockHelper(); // 217
			CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>::~CEmbeddedIntrospectedOrKV3BlockHelper(); // 92
			default_delete<CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData> >::operator(
					CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>* __ptr);  // 86
			default_delete<CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData> >::operator(
					CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>* __ptr);  // 398
		}
		~unique_ptr(const unique_ptr<CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>, std::default_delete<CEmbeddedIntrospectedOrKV3Bloc this); // 79
		MeshData::~MeshData(); // 1809
	}
	CUtlVectorBase<CModelTypeManager::AsyncProcessDataResults::MeshData::RemoveAll(); // 1798
	CUtlMemoryFixedGrowable_Base<CModelTypeManager::AsyncProcessDataResults::MeshData::Purge_FixedGrowable(
				MeshData** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CModelTypeManager::AsyncProcessDataResults::MeshData::Purge_FixedGrowable(
				MeshData** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<4, CModelTypeManager::AsyncProcessDataResults::MeshData::Base(); // 237
	CUtlMemoryFixedGrowable<CModelTypeManager::AsyncProcessDataResults::MeshData::Purge(
		int numElements);  // 1799
	CUtlMemory<CModelTypeManager::AsyncProcessDataResults::MeshData::Base(); // 112
	CUtlVectorBase<CModelTypeManager::AsyncProcessDataResults::MeshData::Base(); // 368
	CUtlVectorBase<CModelTypeManager::AsyncProcessDataResults::MeshData::ResetDbgInfo(); // 1800
	CUtlVectorBase<CModelTypeManager::AsyncProcessDataResults::MeshData::Purge(); // 1811
	CUtlVectorBase<CModelTypeManager::AsyncProcessDataResults::MeshData::PurgeAndDeleteElements(); // 76
	CUtlString::~CUtlString(); // 77
	{
		PhysData *& __ptr; // 396
		_M_ptr(const __uniq_ptr_impl<CModelTypeManager::AsyncProcessDataResults::PhysData, std::default_delete<CModelTypeManager::AsyncP this); // 396
		get_deleter(const unique_ptr<CModelTypeManager::AsyncProcessDataResults::PhysData, std::default_delete<CModelTypeManager::AsyncProces this); // 398
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
		unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::~unique_ptr(); // 217
		CIntrospectedToKV3ResourceBlockHelper::~CIntrospectedToKV3ResourceBlockHelper(); // 217
		CEmbeddedIntrospectedOrKV3BlockHelper<VPhysXAggregateData_t>::~CEmbeddedIntrospectedOrKV3BlockHelper(); // 96
		PhysData::~PhysData(); // 92
		default_delete<CModelTypeManager::AsyncProcessDataResults::PhysData>::operator(
				PhysData* __ptr);  // 86
		default_delete<CModelTypeManager::AsyncProcessDataResults::PhysData>::operator(
				PhysData* __ptr);  // 398
	}
	~unique_ptr(const unique_ptr<CModelTypeManager::AsyncProcessDataResults::PhysData, std::default_delete<CModelTypeManager::AsyncProces this); // 77
	{
		AnimData *& __ptr; // 396
		_M_ptr(const __uniq_ptr_impl<CModelTypeManager::AsyncProcessDataResults::AnimData, std::default_delete<CModelTypeManager::AsyncP this); // 396
		get_deleter(const unique_ptr<CModelTypeManager::AsyncProcessDataResults::AnimData, std::default_delete<CModelTypeManager::AsyncProces this); // 398
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
		unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::~unique_ptr(); // 217
		CIntrospectedToKV3ResourceBlockHelper::~CIntrospectedToKV3ResourceBlockHelper(); // 217
		CEmbeddedIntrospectedOrKV3BlockHelper<CSequenceGroupData>::~CEmbeddedIntrospectedOrKV3BlockHelper(); // 89
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
		unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::~unique_ptr(); // 217
		CIntrospectedToKV3ResourceBlockHelper::~CIntrospectedToKV3ResourceBlockHelper(); // 217
		CEmbeddedIntrospectedOrKV3BlockHelper<CAnimData>::~CEmbeddedIntrospectedOrKV3BlockHelper(); // 89
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
		unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::~unique_ptr(); // 217
		CIntrospectedToKV3ResourceBlockHelper::~CIntrospectedToKV3ResourceBlockHelper(); // 217
		CEmbeddedIntrospectedOrKV3BlockHelper<CAnimationGroup>::~CEmbeddedIntrospectedOrKV3BlockHelper(); // 89
		AnimData::~AnimData(); // 92
		default_delete<CModelTypeManager::AsyncProcessDataResults::AnimData>::operator(
				AnimData* __ptr);  // 86
		default_delete<CModelTypeManager::AsyncProcessDataResults::AnimData>::operator(
				AnimData* __ptr);  // 398
	}
	~unique_ptr(const unique_ptr<CModelTypeManager::AsyncProcessDataResults::AnimData, std::default_delete<CModelTypeManager::AsyncProces this); // 77
	CUtlVectorBase<CModelTypeManager::AsyncProcessDataResults::MeshData::RemoveAll(); // 1798
	CUtlMemoryFixedGrowable_Base<CModelTypeManager::AsyncProcessDataResults::MeshData::Purge_FixedGrowable(
				MeshData** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CModelTypeManager::AsyncProcessDataResults::MeshData::Purge_FixedGrowable(
				MeshData** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<CModelTypeManager::AsyncProcessDataResults::MeshData::Purge(
		int numElements);  // 1799
	CUtlMemory<CModelTypeManager::AsyncProcessDataResults::MeshData::Base(); // 112
	CUtlVectorBase<CModelTypeManager::AsyncProcessDataResults::MeshData::Base(); // 368
	CUtlVectorBase<CModelTypeManager::AsyncProcessDataResults::MeshData::ResetDbgInfo(); // 1800
	CUtlVectorBase<CModelTypeManager::AsyncProcessDataResults::MeshData::Purge(); // 560
	CUtlMemory<CModelTypeManager::AsyncProcessDataResults::MeshData::IsExternallyAllocated(); // 905
	CUtlMemory<CModelTypeManager::AsyncProcessDataResults::MeshData::Purge(); // 903
	CUtlMemory<CModelTypeManager::AsyncProcessDataResults::MeshData::Purge(); // 510
	ValidateAlignment<CModelTypeManager::AsyncProcessDataResults::MeshData*>(void); // 508
	CUtlMemory<CModelTypeManager::AsyncProcessDataResults::MeshData::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CModelTypeManager::AsyncProcessDataResults::MeshData::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CModelTypeManager::AsyncProcessDataResults::MeshData::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CModelTypeManager::AsyncProcessDataResults::MeshData::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CModelTypeManager::AsyncProcessDataResults::MeshData::~CUtlVectorFixedGrowable(); // 77
	{
		IAsyncProcessedDataResult *& __ptr; // 396
		__uniq_ptr_impl<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::_M_ptr(); // 396
		unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::get_deleter(); // 398
		default_delete<IAsyncProcessedDataResult>::operator(
				IAsyncProcessedDataResult* __ptr);  // 398
	}
	unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::~unique_ptr(); // 77
} /* size: 1338, inline expansions: 31 (1742 bytes) */

// <00184C7E> meshsystem/meshsystem.cpp:74
void AsyncProcessDataResults::~AsyncProcessDataResults()
{
} /* size: 36 */

// <00184C65> meshsystem/meshsystem.cpp:74
inline void AsyncProcessDataResults::~AsyncProcessDataResults()
{
} /* size: 0 */

// <00182AC8> meshsystem/meshsystem.cpp:79
void MeshData::MeshData()
{
} /* size: 0 */

// <00182AAC> meshsystem/meshsystem.cpp:79
inline void MeshData::MeshData()
{
} /* size: 0 */

// <0016FC40> meshsystem/meshsystem.cpp:79
void MeshData::~MeshData()
{
} /* size: 0 */

// <0016FC24> meshsystem/meshsystem.cpp:79
inline void MeshData::~MeshData()
{
} /* size: 0 */

// <0016E96E> meshsystem/meshsystem.cpp:89
void AnimData::AnimData()
{
} /* size: 0 */

// <0016E952> meshsystem/meshsystem.cpp:89
inline void AnimData::AnimData()
{
} /* size: 0 */

// <0016BA5D> meshsystem/meshsystem.cpp:89
void AnimData::~AnimData()
{
} /* size: 0 */

// <0016BA41> meshsystem/meshsystem.cpp:89
inline void AnimData::~AnimData()
{
} /* size: 0 */

// <0016E672> meshsystem/meshsystem.cpp:96
void PhysData::PhysData()
{
} /* size: 0 */

// <0016E656> meshsystem/meshsystem.cpp:96
inline void PhysData::PhysData()
{
} /* size: 0 */

// <0016B9D3> meshsystem/meshsystem.cpp:96
void PhysData::~PhysData()
{
} /* size: 0 */

// <0016B9B7> meshsystem/meshsystem.cpp:96
inline void PhysData::~PhysData()
{
} /* size: 0 */

// <00183579> meshsystem/meshsystem.cpp:116
// variables: 16
// function calls: 90
void CModelTypeManager::ProcessControlBlock(CModel_Imp* pModel, const ResourceFileHeader_t* pRawDiskHeader, const AsyncProcessDataResults& asyncMeshData, IRD_RegisterResourceDataUtils* pUtils, ResourceHandle_t hOriginatingResource, ResourceId_t nOriginatingResourceId)
{
	const bool  bBlocksAreKV3; // 123
	CConvertOldDiskCtx convertCtx; // 125
	{
		const MeshData* pMeshData; // 130
		const CUtlVectorFixedGrowable<CModelTypeManager::AsyncProcessDataResults::MeshData*, 4>& __for_range; // 61664
		const_iterator __for_begin; // 55750
		const_iterator __for_end; // 55750
		{
			CRenderMesh* pMesh; // 132
			{
				CMorphSetData* pMorphData; // 146
				{
					CKV3TransferLoadContext loadCtx; // 271
					CKV3Transfer_ResourceLoadInterface resourceLoadInterface; // 272
					CUtlStack<const KeyValues3::Count(); // 413
					CKV3TransferLoadContext::LoadClassInstance<CMorphSetData>(
									CMorphSetData* pClassInstance,
									const KeyValues3* pNestedValue);  // 275
					CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase(); // 325
					CRefCounted<CRefCountServiceBase<true, CRefMT> >::CRefCounted(); // 165
					CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(); // 165
					CUtlMemory<MorphBundleType_t, int>::ValidateGrowSize(); // 475
					CUtlMemory<MorphBundleType_t, int>::CUtlMemory(
							int nGrowSize,
							int nInitAllocationCount);  // 527
					CUtlVectorBase<MorphBundleType_t, CUtlMemory<MorphBundleType_t, int> >::ResetDbgInfo(); // 530
					CUtlVectorBase<MorphBundleType_t, CUtlMemory<MorphBundleType_t, int> >::CUtlVectorBase(
							int growSize,
							int initCapacity);  // 418
					CUtlVector<MorphBundleType_t, CUtlMemory<MorphBundleType_t, int> >::CUtlVector(); // 165
					CUtlMemory<CMorphData, int>::ValidateGrowSize(); // 475
					CUtlMemory<CMorphData, int>::CUtlMemory(
							int nGrowSize,
							int nInitAllocationCount);  // 527
					CUtlVectorBase<CMorphData, CUtlMemory<CMorphData, int> >::ResetDbgInfo(); // 530
					CUtlVectorBase<CMorphData, CUtlMemory<CMorphData, int> >::CUtlVectorBase(
							int growSize,
							int initCapacity);  // 418
					CUtlVector<CMorphData, CUtlMemory<CMorphData, int> >::CUtlVector(); // 165
					CUtlMemory<CFlexDesc, int>::ValidateGrowSize(); // 475
					CUtlMemory<CFlexDesc, int>::CUtlMemory(
							int nGrowSize,
							int nInitAllocationCount);  // 527
					CUtlVectorBase<CFlexDesc, CUtlMemory<CFlexDesc, int> >::ResetDbgInfo(); // 530
					CUtlVectorBase<CFlexDesc, CUtlMemory<CFlexDesc, int> >::CUtlVectorBase(
							int growSize,
							int initCapacity);  // 418
					CUtlVector<CFlexDesc, CUtlMemory<CFlexDesc, int> >::CUtlVector(); // 165
					CUtlMemory<CFlexController, int>::ValidateGrowSize(); // 475
					CUtlMemory<CFlexController, int>::CUtlMemory(
							int nGrowSize,
							int nInitAllocationCount);  // 527
					CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::ResetDbgInfo(); // 530
					CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::CUtlVectorBase(
							int growSize,
							int initCapacity);  // 418
					CUtlVector<CFlexController, CUtlMemory<CFlexController, int> >::CUtlVector(); // 165
					CUtlMemory<CFlexRule, int>::ValidateGrowSize(); // 475
					CUtlMemory<CFlexRule, int>::CUtlMemory(
							int nGrowSize,
							int nInitAllocationCount);  // 527
					CUtlVectorBase<CFlexRule, CUtlMemory<CFlexRule, int> >::ResetDbgInfo(); // 530
					CUtlVectorBase<CFlexRule, CUtlMemory<CFlexRule, int> >::CUtlVectorBase(
							int growSize,
							int initCapacity);  // 418
					CUtlVector<CFlexRule, CUtlMemory<CFlexRule, int> >::CUtlVector(); // 165
					CMorphSetData::CMorphSetData(); // 269
					IKV3TransferInterface_ResourceLoad::IKV3TransferInterface_ResourceLoad(); // 19
					ResourceId_t::ResourceId_t(); // 19
					CKV3Transfer_ResourceLoadInterface::CKV3Transfer_ResourceLoadInterface(
										IRD_RegisterResourceDataUtils* pDataUtils,
										ResourceHandle_t hOriginatingResource,
										ResourceId_t nOriginatingResourceId);  // 272
					CKV3TransferContextBase::AddInterface<CKV3Transfer_ResourceLoadInterface>(
											CKV3Transfer_ResourceLoadInterface* pInterface);  // 273
				}
				{
				}
				CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>::PerformKV3Transfer(
							ResourceHandle_t hParentResource,
							ResourceId_t nParentResourceId,
							IRD_RegisterResourceDataUtils* pUtils);  // 140
				_M_ptr(const __uniq_ptr_impl<CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>, std::default_delete<CEmbeddedIntrospect this); // 472
				get(const unique_ptr<CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>, std::default_delete<CEmbeddedIntrospectedOrK this); // 465
				operator->(const unique_ptr<CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>, std::default_delete<CEmbeddedIntrospectedOrK this); // 146
				{
				}
				CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>::TakeControlOfData(); // 146
				ThreadInterlockedDecrement(volatile int32* p); // 159
				Decrement(int* p); // 204
				CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
				CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
				CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 148
			}
			_M_ptr(const __uniq_ptr_impl<CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>, std::default_delete<CEmbeddedIntrospect this); // 472
			get(const unique_ptr<CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>, std::default_delete<CEmbeddedIntrospectedOrK this); // 489
			operator bool(const unique_ptr<CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>, std::default_delete<CEmbeddedIntrospectedOrK this); // 854
			operator==<CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>, std::default_delete<CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData> > >(const unique_ptr<CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>, std::default_delete<CEmbeddedIntrospectedOrKV3Bloc __x,
																nullptr_t);  // 138
		}
		CUtlMemory<CModelTypeManager::AsyncProcessDataResults::MeshData::Base(); // 113
		CUtlVectorBase<CModelTypeManager::AsyncProcessDataResults::MeshData::Base(); // 103
		CUtlVectorBase<CModelTypeManager::AsyncProcessDataResults::MeshData::begin(); // 130
		CUtlVectorBase<CModelTypeManager::AsyncProcessDataResults::MeshData::Count(); // 105
		CUtlVectorBase<CModelTypeManager::AsyncProcessDataResults::MeshData::end(); // 130
	}
	{
		EmbeddedAnimInfo_t embeddedAnimInfo; // 159
		CAnimationGroupResource* pAnim; // 170
		_M_ptr(const __uniq_ptr_impl<CModelTypeManager::AsyncProcessDataResults::AnimData, std::default_delete<CModelTypeManager:: this); // 472
		get(const unique_ptr<CModelTypeManager::AsyncProcessDataResults::AnimData, std::default_delete<CModelTypeManager::Async this); // 465
		operator->(const unique_ptr<CModelTypeManager::AsyncProcessDataResults::AnimData, std::default_delete<CModelTypeManager::Async this); // 166
	}
	{
		EmbeddedPhysicsInfo_t embeddedPhysicsInfo; // 182
		CPhysAggregateDataHandle pPhys; // 189
		_M_ptr(const __uniq_ptr_impl<CModelTypeManager::AsyncProcessDataResults::PhysData, std::default_delete<CModelTypeManager:: this); // 472
		get(const unique_ptr<CModelTypeManager::AsyncProcessDataResults::PhysData, std::default_delete<CModelTypeManager::Async this); // 465
		operator->(const unique_ptr<CModelTypeManager::AsyncProcessDataResults::PhysData, std::default_delete<CModelTypeManager::Async this); // 187
		CPhysAggregateDataHandle::IsValid(); // 128
		CPhysAggregateDataHandle::operator bool(); // 190
		CPhysAggregateDataHandle::Clear(); // 115
		CPhysAggregateDataHandle::~CPhysAggregateDataHandle(); // 194
	}
	CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	CUtlHashtable<const ResourceBindingBase_t::Init(); // 178
	CUtlHashtable<const ResourceBindingBase_t::CUtlHashtable(
			int minimumSize);  // 20
	CConvertOldDiskCtx::CConvertOldDiskCtx(); // 125
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
	CConvertOldDiskCtx::~CConvertOldDiskCtx(); // 197
	_M_ptr(const __uniq_ptr_impl<CModelTypeManager::AsyncProcessDataResults::AnimData, std::default_delete<CModelTypeManager:: this); // 472
	get(const unique_ptr<CModelTypeManager::AsyncProcessDataResults::AnimData, std::default_delete<CModelTypeManager::Async this); // 489
	operator bool(const unique_ptr<CModelTypeManager::AsyncProcessDataResults::AnimData, std::default_delete<CModelTypeManager::Async this); // 854
	operator==<CModelTypeManager::AsyncProcessDataResults::AnimData, std::default_delete<CModelTypeManager::AsyncProcessDataResults::AnimData> >(const unique_ptr<CModelTypeManager::AsyncProcessDataResults::AnimData, std::default_delete<CModelTypeManager::AsyncProces __x,
																nullptr_t);  // 157
	_M_ptr(const __uniq_ptr_impl<CModelTypeManager::AsyncProcessDataResults::PhysData, std::default_delete<CModelTypeManager:: this); // 472
	get(const unique_ptr<CModelTypeManager::AsyncProcessDataResults::PhysData, std::default_delete<CModelTypeManager::Async this); // 489
	operator bool(const unique_ptr<CModelTypeManager::AsyncProcessDataResults::PhysData, std::default_delete<CModelTypeManager::Async this); // 854
	operator==<CModelTypeManager::AsyncProcessDataResults::PhysData, std::default_delete<CModelTypeManager::AsyncProcessDataResults::PhysData> >(const unique_ptr<CModelTypeManager::AsyncProcessDataResults::PhysData, std::default_delete<CModelTypeManager::AsyncProces __x,
																nullptr_t);  // 180
} /* size: 0, variables: 2, inline expansions: 21 (519 bytes) */

// <00182B49> meshsystem/meshsystem.cpp:201
// variables: 10
// function calls: 41
void CModelTypeManager::OnAnimGraphsReloaded()
{
	CUtlVector<const ResourceBindingBase_t*, CUtlMemory<const ResourceBindingBase_t*, int> > modelResources; // 203
	{
		ResourceHandle_t hModelUntyped; // 206
		CUtlVector<const ResourceBindingBase_t*, CUtlMemory<const ResourceBindingBase_t*, int> >& __for_range; // 55693
		iterator __for_begin; // 62022
		iterator __for_end; // 62022
		{
			HModel hModel; // 208
			HAnimationGraph hModelGraph; // 212
			bool bReferencesReloadedGraph; // 216
			CModel* pModel; // 220
			CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 234
			CWeakHandle<InfoForResourceTypeCModel>::InitUntyped(
					ResourceHandle_t hUntypedResource);  // 235
			FromUntypedHandle(ResourceHandle_t hResource); // 208
			CWeakHandle<InfoForResourceTypeCModel>::HasData(); // 209
			CWeakHandle<InfoForResourceTypeIAnimationGraph>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 213
			CWeakHandle<InfoForResourceTypeIAnimationGraph>::operator==(
					const CWeakHandle<InfoForResourceTypeIAnimationGraph>& hResource);  // 213
			CWeakHandle<InfoForResourceTypeIAnimationGraph>::GetBinding(); // 223
			CStrongHandle<InfoForResourceTypeIAnimationGraph>::CStrongHandle(
					ResourceHandleTyped_t hResource);  // 223
			CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>::CStrongHandleCopyable(
						const CWeakHandle<InfoForResourceTypeIAnimationGraph>& src);  // 216
			{
				int i; // 1531
				Count(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>, CUtlMemory<CStrongHandleCopyable<In this); // 1531
				CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>, int>::operator[](
						int i);  // 609
				Element(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>, CUtlMemory<CStrongHandleCopyable<In this,
					int i);  // 1533
				CStrongHandle<InfoForResourceTypeIAnimationGraph>::operator==(
						const CStrongHandle<InfoForResourceTypeIAnimationGraph>& hResource);  // 1533
			}
			Find(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>, CUtlMemory<CStrongHandleCopyable<In this,
				const CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>& src);  // 1563
			HasElement(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>, CUtlMemory<CStrongHandleCopyable<In this,
					const CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>& src);  // 216
			CStrongHandle<InfoForResourceTypeIAnimationGraph>::~CStrongHandle(); // 211
			CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>::~CStrongHandleCopyable(); // 216
			CInterlockedIntT<int, 4>::operator int(); // 288
			ResourceHandleToNonConstData<InfoForResourceTypeCModel>(const CWeakHandle<InfoForResourceTypeCModel>& hResource); // 220
		}
		CUtlMemory<const ResourceBindingBase_t::Base(); // 112
		CUtlVectorBase<const ResourceBindingBase_t::Base(); // 102
		CUtlVectorBase<const ResourceBindingBase_t::begin(); // 206
		CUtlVectorBase<const ResourceBindingBase_t::Count(); // 104
		CUtlVectorBase<const ResourceBindingBase_t::end(); // 206
	}
	CUtlMemory<const ResourceBindingBase_t::ValidateGrowSize(); // 475
	CUtlMemory<const ResourceBindingBase_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<const ResourceBindingBase_t::ResetDbgInfo(); // 530
	CUtlVectorBase<const ResourceBindingBase_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<const ResourceBindingBase_t::CUtlVector(); // 203
	CUtlMemory<const ResourceBindingBase_t::Purge(); // 903
	CUtlMemory<const ResourceBindingBase_t::IsExternallyAllocated(); // 905
	CUtlMemory<const ResourceBindingBase_t::Purge(); // 1799
	CUtlVectorBase<const ResourceBindingBase_t::RemoveAll(); // 1798
	CUtlVectorBase<const ResourceBindingBase_t::Purge(); // 560
	ValidateAlignment<const ResourceBindingBase_t*>(void); // 508
	CUtlMemory<const ResourceBindingBase_t::Purge(); // 510
	CUtlMemory<const ResourceBindingBase_t::~CUtlMemory(); // 562
	CUtlVectorBase<const ResourceBindingBase_t::~CUtlVectorBase(); // 410
	CUtlVector<const ResourceBindingBase_t::~CUtlVector(); // 224
} /* size: 443, variables: 1, inline expansions: 15 (229 bytes) */

// <00182B1B> meshsystem/meshsystem.cpp:229
void CModelTypeManager::WantsAsyncProcessData()
{
} /* size: 10 */

// <0017B035> meshsystem/meshsystem.cpp:237
// variables: 61
// function calls: 495
void CModelTypeManager::AsyncProcessData(ResourceHandle_t hResource, const ResourceFileHeader_t* pHeader)
{

early_exit: // 452
	unique_ptr<CModelTypeManager::AsyncProcessDataResults, std::default_delete<CModelTypeManager::AsyncProcessDataResults> > pResults; // 239
	ResourceHeaderBlockInfo_t controlBlockInfo; // 244
	{
		CUtlBuffer diskDataBuffer; // 250
		{
			const CKeyValues3Context* pControlBlock; // 256
			{
				const KeyValues3* pEmbeddedMeshes; // 261
				{
					int iMesh; // 263
					{
						const KeyValues3* pMeshInfo; // 265
						const char* pMeshName; // 266
						int nMeshIndex; // 267
						int nDataBlock; // 268
						int nVBIBBlock; // 269
						int nMorphBlock; // 270
						const char* pMorphTextureName; // 271
						MeshData* pMeshData; // 315
						ResourceHeaderBlockInfo_t meshDataBlockInfo; // 323
						ResourceHeaderBlockInfo_t meshVBIBBlockInfo; // 324
						CUtlString errorMsg; // 352
						CUtlBuffer meshBlockDataBuffer; // 353
						{
							ResourceHeaderBlockInfo_t meshMorphBlockInfo; // 337
							CIntrospectedToKV3ResourceBlockHelper::CIntrospectedToKV3ResourceBlockHelper(); // 212
							_Head_base<1, std::default_delete<CKV3ResourceBlockHelper>, true>::_Head_base(); // 561
							_Tuple_impl<1, std::default_delete<CKV3ResourceBlockHelper> >::_Tuple_impl(); // 303
							_Head_base<0, CKV3ResourceBlockHelper::_Head_base(); // 303
							_Tuple_impl<0, CKV3ResourceBlockHelper::_Tuple_impl(); // 966
							tuple<CKV3ResourceBlockHelper::tuple(); // 167
							__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::__uniq_ptr_impl(); // 232
							__uniq_ptr_data<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper>, true, true>::__uniq_ptr_data(); // 298
							unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::unique_ptr<>(); // 212
							CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>::CEmbeddedIntrospectedOrKV3BlockHelper(); // 31
							_Head_base<1, std::default_delete<CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData> >, true>::_Head_base(); // 561
							_Tuple_impl<1, std::default_delete<CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData> > >::_Tuple_impl(); // 303
							_Head_base<0, CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>::_Head_base(); // 303
							_Tuple_impl<0, CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>::_Tuple_impl(); // 966
							tuple<CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>::tuple(); // 169
							_M_ptr(const __uniq_ptr_impl<CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>, std::default_delete<CEmbeddedIntrospectedOrKV this); // 169
							__uniq_ptr_impl(const __uniq_ptr_impl<CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>, std::default_delete<CEmbeddedIntrospectedOrKV this,
									pointer __p);  // 234
							__uniq_ptr_data(const __uniq_ptr_data<CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>, std::default_delete<CEmbeddedIntrospectedOrKV this,
									pointer);  // 311
							unique_ptr<>(const unique_ptr<CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>, std::default_delete<CEmbeddedIntrospectedOrKV3Bloc this,
									pointer __p);  // 31
							make_unique<CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData> >(void); // 340
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
							unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::~unique_ptr(); // 217
							CIntrospectedToKV3ResourceBlockHelper::~CIntrospectedToKV3ResourceBlockHelper(); // 217
							CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>::~CEmbeddedIntrospectedOrKV3BlockHelper(); // 92
							default_delete<CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData> >::operator(
									CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>* __ptr);  // 86
							default_delete<CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData> >::operator(
									CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>* __ptr);  // 204
							reset(const __uniq_ptr_impl<CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>, std::default_delete<CEmbeddedIntrospectedOrKV this,
								pointer __p);  // 184
							operator=(const __uniq_ptr_impl<CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>, std::default_delete<CEmbeddedIntrospectedOrKV this,
									__uniq_ptr_impl<CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>, std::default_delete<CEmbeddedIntrospectedOrKV3Block __u);  // 236
							operator=(const __uniq_ptr_data<CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>, std::default_delete<CEmbeddedIntrospectedOrKV this,
									__uniq_ptr_data<CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>, std::default_delete<CEmbeddedIntrospectedOrKV3Block);  // 408
							operator=(const unique_ptr<CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>, std::default_delete<CEmbeddedIntrospectedOrKV3Bloc this,
									unique_ptr<CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>, std::default_delete<CEmbeddedIntrospectedOrKV3BlockHelpe);  // 340
							{
								CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData> *& __ptr; // 396
								_M_ptr(const __uniq_ptr_impl<CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>, std::default_delete<CEmbeddedIntrospectedOrKV this); // 396
							}
							~unique_ptr(const unique_ptr<CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>, std::default_delete<CEmbeddedIntrospectedOrKV3Bloc this); // 340
							_M_ptr(const __uniq_ptr_impl<CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>, std::default_delete<CEmbeddedIntrospect this); // 472
							get(const unique_ptr<CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>, std::default_delete<CEmbeddedIntrospectedOrK this); // 465
							operator->(const unique_ptr<CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>, std::default_delete<CEmbeddedIntrospectedOrK this); // 341
							{
							}
							__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::release(); // 184
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
									CKV3ResourceBlockHelper* __ptr);  // 204
							__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::reset(
								pointer __p);  // 184
							__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::operator=(
									__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >& __u);  // 236
							__uniq_ptr_data<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper>, true, true>::operator=(
									__uniq_ptr_data<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper>, true, true> &);  // 408
							unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::operator=(
									unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> > &);  // 244
							__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::_M_ptr(); // 472
							unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::get(); // 489
							unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::operator bool(); // 854
							operator==<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >(const unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >& __x,
																nullptr_t);  // 245
							{
								CKV3ResourceBlockHelper *& __ptr; // 396
								__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::_M_ptr(); // 396
							}
							unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::~unique_ptr(); // 244
							__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::_M_ptr(); // 472
							unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::get(); // 465
							unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::operator->(); // 55
							CKV3ResourceBlockHelper::GetKV3(); // 247
							CIntrospectedToKV3ResourceBlockHelper::GetKV3(); // 254
							{
							}
							CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>::InitContext(
									ResourceHandle_t hParentResource,
									const ResourceFileHeader_t* pRawDiskHeader,
									const ResourceHeaderBlockInfo_t* pBlockInfo,
									bool bDataIsKV3,
									const char* pIntrospectedRootStructName);  // 231
							CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>::InitContext(
									ResourceHandle_t hParentResource,
									const ResourceFileHeader_t* pRawDiskHeader,
									const ResourceHeaderBlockInfo_t* pBlockInfo,
									bool bDataIsKV3,
									const char* pIntrospectedRootStructName);  // 341
						}
						{
							const uint32  m; // 61
							uint32 h; // 62
							uint32 k; // 63
							const int  r; // 64
						}
						CUtlStringToken::CUtlStringToken(
								const char& str);  // 13
						CKV3MemberName::CKV3MemberName<5>(
									const char& str);  // 266
						CKV3MemberName::CKV3MemberName<11>(
									const char& str);  // 267
						CKV3MemberName::CKV3MemberName<11>(
									const char& str);  // 268
						CKV3MemberName::CKV3MemberName<11>(
									const char& str);  // 269
						CKV3MemberName::CKV3MemberName<12>(
									const char& str);  // 270
						CKV3MemberName::CKV3MemberName<14>(
									const char& str);  // 271
						CResourceArrayBase::Count(); // 273
						ResolveOffset(const int32* pOffset); // 304
						CResourceArrayBase::GetRawPtr(); // 416
						CResourceArray<ResourceBlockEntry_t>::GetPtr(); // 379
						CResourceArray<ResourceBlockEntry_t>::operator[](
								int nIndex);  // 280
						CResourceArray<ResourceBlockEntry_t>::operator[](
								int nIndex);  // 294
						CResourceArray<ResourceBlockEntry_t>::operator[](
								int nIndex);  // 308
						CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::CUtlMemory(
								BufferInfo_t* pMemory,
								int numElements,
								bool bGrowable,
								uint32 nGrowable_GrowSize);  // 197
						CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::EnsureCapacity(
								int num);  // 199
						CUtlMemoryFixedGrowable_Base<RuntimeBuffersInfo_t::BufferInfo_t, int>::CUtlMemoryFixedGrowable_Base(
										BufferInfo_t* pFixedMemory,
										int nFixedElements,
										int nGrowSize,
										int nInitAllocationCount);  // 228
						{
						}
						AlignedByteArrayExplicit_t<1, RuntimeBuffersInfo_t::BufferInfo_t, 8>::AlignedByteArrayExplicit_t(); // 1597
						AlignedByteArray_t<1, RuntimeBuffersInfo_t::BufferInfo_t>::AlignedByteArray_t(); // 228
						AlignedByteArrayExplicit_t<1, RuntimeBuffersInfo_t::BufferInfo_t, 8>::Base(); // 231
						CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, int>::CUtlMemoryFixedGrowable(
									int nGrowSize,
									int nInitSize);  // 527
						ResetDbgInfo(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 530
						CUtlVectorBase(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this,
								int growSize,
								int initCapacity);  // 484
						CUtlVectorFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1>::CUtlVectorFixedGrowable(
									int growSize);  // 776
						{
						}
						AlignedByteArrayExplicit_t<1, RuntimeBuffersInfo_t::BufferInfo_t, 8>::AlignedByteArrayExplicit_t(); // 1597
						AlignedByteArray_t<1, RuntimeBuffersInfo_t::BufferInfo_t>::AlignedByteArray_t(); // 228
						CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::CUtlMemory(
								BufferInfo_t* pMemory,
								int numElements,
								bool bGrowable,
								uint32 nGrowable_GrowSize);  // 197
						CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::EnsureCapacity(
								int num);  // 199
						CUtlMemoryFixedGrowable_Base<RuntimeBuffersInfo_t::BufferInfo_t, int>::CUtlMemoryFixedGrowable_Base(
										BufferInfo_t* pFixedMemory,
										int nFixedElements,
										int nGrowSize,
										int nInitAllocationCount);  // 228
						AlignedByteArrayExplicit_t<1, RuntimeBuffersInfo_t::BufferInfo_t, 8>::Base(); // 231
						CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, int>::CUtlMemoryFixedGrowable(
									int nGrowSize,
									int nInitSize);  // 527
						ResetDbgInfo(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 530
						CUtlVectorBase(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this,
								int growSize,
								int initCapacity);  // 484
						CUtlVectorFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1>::CUtlVectorFixedGrowable(
									int growSize);  // 776
						RuntimeBuffersInfo_t::RuntimeBuffersInfo_t(); // 79
						_Head_base<1, std::default_delete<CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData> >, true>::_Head_base(); // 561
						_Tuple_impl<1, std::default_delete<CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData> > >::_Tuple_impl(); // 303
						_Head_base<0, CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>::_Head_base(); // 303
						_Tuple_impl<0, CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>::_Tuple_impl(); // 966
						tuple<CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>::tuple(); // 167
						__uniq_ptr_impl(const __uniq_ptr_impl<CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>, std::default_delete<CEmbeddedIntrospectedOrKV this); // 232
						__uniq_ptr_data(const __uniq_ptr_data<CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>, std::default_delete<CEmbeddedIntrospectedOrKV this); // 298
						unique_ptr<>(const unique_ptr<CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>, std::default_delete<CEmbeddedIntrospectedOrKV3Bloc this); // 79
						MeshData::MeshData(); // 315
						CUtlMemory<CModelTypeManager::AsyncProcessDataResults::MeshData::NumAllocated(); // 1196
						CUtlMemory<CModelTypeManager::AsyncProcessDataResults::MeshData::Base(); // 112
						CUtlVectorBase<CModelTypeManager::AsyncProcessDataResults::MeshData::Base(); // 368
						CUtlVectorBase<CModelTypeManager::AsyncProcessDataResults::MeshData::ResetDbgInfo(); // 824
						CUtlMemory<CModelTypeManager::AsyncProcessDataResults::MeshData::IsGrowable(); // 823
						CUtlMemory<CModelTypeManager::AsyncProcessDataResults::MeshData::IsExternallyAllocated(); // 859
						CUtlMemory<CModelTypeManager::AsyncProcessDataResults::MeshData::IsExternallyAllocated(); // 861
						CUtlMemory<CModelTypeManager::AsyncProcessDataResults::MeshData::Grow(
							int num);  // 806
						CUtlVectorBase<CModelTypeManager::AsyncProcessDataResults::MeshData::GrowMemory(
								int num);  // 1198
						CUtlMemory<CModelTypeManager::AsyncProcessDataResults::MeshData::operator[](
								int i);  // 602
						CUtlVectorBase<CModelTypeManager::AsyncProcessDataResults::MeshData::Element(
							int i);  // 1201
						CopyConstruct<CModelTypeManager::AsyncProcessDataResults::MeshData*>(MeshData** pMemory,
															MeshData* const& src);  // 1201
						CUtlVectorBase<CModelTypeManager::AsyncProcessDataResults::MeshData::AddToTail(
								MeshData* const& src);  // 316
						CUtlString::CUtlString(); // 352
						ValidateAlignment<unsigned char>(void); // 508
						CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
						CUtlMemory<unsigned char, int>::Purge(); // 903
						CUtlMemory<unsigned char, int>::Purge(); // 510
						CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
						CUtlBuffer::~CUtlBuffer(); // 360
						CUtlString::~CUtlString(); // 360
						CUtlString::Get(); // 356
						ValidateAlignment<unsigned char>(void); // 508
						CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
						CUtlMemory<unsigned char, int>::Purge(); // 510
						CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
						CUtlBuffer::~CUtlBuffer(); // 360
					}
				}
				CKeyValues3Context::Root(); // 261
				CKV3MemberName::CKV3MemberName<16>(
							const char& str);  // 261
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 101
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 96
				KeyValues3::FindMember(
						CKV3MemberName memberName,
						KeyValues3* pDefaultValue);  // 101
				KeyValues3::FindMember(
						CKV3MemberName memberName,
						const KeyValues3* pDefaultValue);  // 261
			}
			{
				const KeyValues3* pEmbeddedAnimation; // 364
				{
					int nAnimGroupDataBlockIndex; // 366
					int nAnimDataBlockIndex; // 367
					int nSeqGroupDataBlockIndex; // 368
					ResourceHeaderBlockInfo_t animGroupBlockInfo; // 390
					ResourceHeaderBlockInfo_t animDataBlockInfo; // 396
					ResourceHeaderBlockInfo_t seqGroupBlockInfo; // 402
					CKV3MemberName::CKV3MemberName<17>(
								const char& str);  // 366
					CKV3MemberName::CKV3MemberName<16>(
								const char& str);  // 367
					CKV3MemberName::CKV3MemberName<20>(
								const char& str);  // 368
					CResourceArrayBase::Count(); // 370
					ResolveOffset(const int32* pOffset); // 304
					CResourceArrayBase::GetRawPtr(); // 416
					CResourceArray<ResourceBlockEntry_t>::GetPtr(); // 379
					CResourceArray<ResourceBlockEntry_t>::operator[](
							int nIndex);  // 380
					ResolveOffset(const int32* pOffset); // 304
					CResourceArrayBase::GetRawPtr(); // 416
					CResourceArray<ResourceBlockEntry_t>::GetPtr(); // 379
					CResourceArray<ResourceBlockEntry_t>::operator[](
							int nIndex);  // 381
					ResolveOffset(const int32* pOffset); // 304
					CResourceArrayBase::GetRawPtr(); // 416
					CResourceArray<ResourceBlockEntry_t>::GetPtr(); // 379
					CResourceArray<ResourceBlockEntry_t>::operator[](
							int nIndex);  // 382
					CIntrospectedToKV3ResourceBlockHelper::CIntrospectedToKV3ResourceBlockHelper(); // 212
					_Head_base<1, std::default_delete<CKV3ResourceBlockHelper>, true>::_Head_base(); // 561
					_Tuple_impl<1, std::default_delete<CKV3ResourceBlockHelper> >::_Tuple_impl(); // 303
					_Head_base<0, CKV3ResourceBlockHelper::_Head_base(); // 303
					_Tuple_impl<0, CKV3ResourceBlockHelper::_Tuple_impl(); // 966
					tuple<CKV3ResourceBlockHelper::tuple(); // 167
					__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::__uniq_ptr_impl(); // 232
					__uniq_ptr_data<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper>, true, true>::__uniq_ptr_data(); // 298
					unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::unique_ptr<>(); // 212
					CEmbeddedIntrospectedOrKV3BlockHelper<CAnimationGroup>::CEmbeddedIntrospectedOrKV3BlockHelper(); // 89
					CIntrospectedToKV3ResourceBlockHelper::CIntrospectedToKV3ResourceBlockHelper(); // 212
					_Head_base<1, std::default_delete<CKV3ResourceBlockHelper>, true>::_Head_base(); // 561
					_Tuple_impl<1, std::default_delete<CKV3ResourceBlockHelper> >::_Tuple_impl(); // 303
					_Head_base<0, CKV3ResourceBlockHelper::_Head_base(); // 303
					_Tuple_impl<0, CKV3ResourceBlockHelper::_Tuple_impl(); // 966
					tuple<CKV3ResourceBlockHelper::tuple(); // 167
					__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::__uniq_ptr_impl(); // 232
					__uniq_ptr_data<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper>, true, true>::__uniq_ptr_data(); // 298
					unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::unique_ptr<>(); // 212
					CEmbeddedIntrospectedOrKV3BlockHelper<CAnimData>::CEmbeddedIntrospectedOrKV3BlockHelper(); // 89
					CIntrospectedToKV3ResourceBlockHelper::CIntrospectedToKV3ResourceBlockHelper(); // 212
					_Head_base<1, std::default_delete<CKV3ResourceBlockHelper>, true>::_Head_base(); // 561
					_Tuple_impl<1, std::default_delete<CKV3ResourceBlockHelper> >::_Tuple_impl(); // 303
					_Head_base<0, CKV3ResourceBlockHelper::_Head_base(); // 303
					_Tuple_impl<0, CKV3ResourceBlockHelper::_Tuple_impl(); // 966
					tuple<CKV3ResourceBlockHelper::tuple(); // 167
					__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::__uniq_ptr_impl(); // 232
					__uniq_ptr_data<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper>, true, true>::__uniq_ptr_data(); // 298
					unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::unique_ptr<>(); // 212
					CEmbeddedIntrospectedOrKV3BlockHelper<CSequenceGroupData>::CEmbeddedIntrospectedOrKV3BlockHelper(); // 89
					AnimData::AnimData(); // 31
					_Head_base<1, std::default_delete<CModelTypeManager::AsyncProcessDataResults::AnimData>, true>::_Head_base(); // 561
					_Tuple_impl<1, std::default_delete<CModelTypeManager::AsyncProcessDataResults::AnimData> >::_Tuple_impl(); // 303
					_Head_base<0, CModelTypeManager::AsyncProcessDataResults::AnimData::_Head_base(); // 303
					_Tuple_impl<0, CModelTypeManager::AsyncProcessDataResults::AnimData::_Tuple_impl(); // 966
					tuple<CModelTypeManager::AsyncProcessDataResults::AnimData::tuple(); // 169
					_M_ptr(const __uniq_ptr_impl<CModelTypeManager::AsyncProcessDataResults::AnimData, std::default_delete<CModelTypeManager::AsyncP this); // 169
					__uniq_ptr_impl(const __uniq_ptr_impl<CModelTypeManager::AsyncProcessDataResults::AnimData, std::default_delete<CModelTypeManager::AsyncP this,
							pointer __p);  // 234
					__uniq_ptr_data(const __uniq_ptr_data<CModelTypeManager::AsyncProcessDataResults::AnimData, std::default_delete<CModelTypeManager::AsyncP this,
							pointer);  // 311
					unique_ptr<>(const unique_ptr<CModelTypeManager::AsyncProcessDataResults::AnimData, std::default_delete<CModelTypeManager::AsyncProces this,
							pointer __p);  // 31
					make_unique<CModelTypeManager::AsyncProcessDataResults::AnimData>(void); // 408
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
					unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::~unique_ptr(); // 217
					CIntrospectedToKV3ResourceBlockHelper::~CIntrospectedToKV3ResourceBlockHelper(); // 217
					CEmbeddedIntrospectedOrKV3BlockHelper<CSequenceGroupData>::~CEmbeddedIntrospectedOrKV3BlockHelper(); // 89
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
					unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::~unique_ptr(); // 217
					CIntrospectedToKV3ResourceBlockHelper::~CIntrospectedToKV3ResourceBlockHelper(); // 217
					CEmbeddedIntrospectedOrKV3BlockHelper<CAnimData>::~CEmbeddedIntrospectedOrKV3BlockHelper(); // 89
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
					unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::~unique_ptr(); // 217
					CIntrospectedToKV3ResourceBlockHelper::~CIntrospectedToKV3ResourceBlockHelper(); // 217
					CEmbeddedIntrospectedOrKV3BlockHelper<CAnimationGroup>::~CEmbeddedIntrospectedOrKV3BlockHelper(); // 89
					AnimData::~AnimData(); // 92
					default_delete<CModelTypeManager::AsyncProcessDataResults::AnimData>::operator(
							AnimData* __ptr);  // 86
					default_delete<CModelTypeManager::AsyncProcessDataResults::AnimData>::operator(
							AnimData* __ptr);  // 204
					reset(const __uniq_ptr_impl<CModelTypeManager::AsyncProcessDataResults::AnimData, std::default_delete<CModelTypeManager::AsyncP this,
						pointer __p);  // 184
					operator=(const __uniq_ptr_impl<CModelTypeManager::AsyncProcessDataResults::AnimData, std::default_delete<CModelTypeManager::AsyncP this,
							__uniq_ptr_impl<CModelTypeManager::AsyncProcessDataResults::AnimData, std::default_delete<CModelTypeManager::AsyncProcess __u);  // 236
					operator=(const __uniq_ptr_data<CModelTypeManager::AsyncProcessDataResults::AnimData, std::default_delete<CModelTypeManager::AsyncP this,
							__uniq_ptr_data<CModelTypeManager::AsyncProcessDataResults::AnimData, std::default_delete<CModelTypeManager::AsyncProcess);  // 408
					operator=(const unique_ptr<CModelTypeManager::AsyncProcessDataResults::AnimData, std::default_delete<CModelTypeManager::AsyncProces this,
							unique_ptr<CModelTypeManager::AsyncProcessDataResults::AnimData, std::default_delete<CModelTypeManager::AsyncProcessDataR);  // 408
					_M_ptr(const __uniq_ptr_impl<CModelTypeManager::AsyncProcessDataResults::AnimData, std::default_delete<CModelTypeManager:: this); // 472
					get(const unique_ptr<CModelTypeManager::AsyncProcessDataResults::AnimData, std::default_delete<CModelTypeManager::Async this); // 465
					operator->(const unique_ptr<CModelTypeManager::AsyncProcessDataResults::AnimData, std::default_delete<CModelTypeManager::Async this); // 409
					{
						AnimData *& __ptr; // 396
						_M_ptr(const __uniq_ptr_impl<CModelTypeManager::AsyncProcessDataResults::AnimData, std::default_delete<CModelTypeManager::AsyncP this); // 396
					}
					~unique_ptr(const unique_ptr<CModelTypeManager::AsyncProcessDataResults::AnimData, std::default_delete<CModelTypeManager::AsyncProces this); // 408
					{
					}
					__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::release(); // 184
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
							CKV3ResourceBlockHelper* __ptr);  // 204
					__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::reset(
						pointer __p);  // 184
					__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::operator=(
							__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >& __u);  // 236
					__uniq_ptr_data<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper>, true, true>::operator=(
							__uniq_ptr_data<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper>, true, true> &);  // 408
					unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::operator=(
							unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> > &);  // 244
					{
						CKV3ResourceBlockHelper *& __ptr; // 396
						__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::_M_ptr(); // 396
					}
					unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::~unique_ptr(); // 244
					__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::_M_ptr(); // 472
					unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::get(); // 489
					unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::operator bool(); // 854
					operator==<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >(const unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >& __x,
																nullptr_t);  // 245
					__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::_M_ptr(); // 472
					unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::get(); // 465
					unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::operator->(); // 55
					CKV3ResourceBlockHelper::GetKV3(); // 247
					CIntrospectedToKV3ResourceBlockHelper::GetKV3(); // 254
					{
					}
					CEmbeddedIntrospectedOrKV3BlockHelper<CAnimationGroup>::InitContext(
							ResourceHandle_t hParentResource,
							const ResourceFileHeader_t* pRawDiskHeader,
							const ResourceHeaderBlockInfo_t* pBlockInfo,
							bool bDataIsKV3,
							const char* pIntrospectedRootStructName);  // 231
					CEmbeddedIntrospectedOrKV3BlockHelper<CAnimationGroup>::InitContext(
							ResourceHandle_t hParentResource,
							const ResourceFileHeader_t* pRawDiskHeader,
							const ResourceHeaderBlockInfo_t* pBlockInfo,
							bool bDataIsKV3,
							const char* pIntrospectedRootStructName);  // 409
					_M_ptr(const __uniq_ptr_impl<CModelTypeManager::AsyncProcessDataResults::AnimData, std::default_delete<CModelTypeManager:: this); // 472
					get(const unique_ptr<CModelTypeManager::AsyncProcessDataResults::AnimData, std::default_delete<CModelTypeManager::Async this); // 465
					operator->(const unique_ptr<CModelTypeManager::AsyncProcessDataResults::AnimData, std::default_delete<CModelTypeManager::Async this); // 410
					{
					}
					__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::release(); // 184
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
							CKV3ResourceBlockHelper* __ptr);  // 204
					__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::reset(
						pointer __p);  // 184
					__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::operator=(
							__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >& __u);  // 236
					__uniq_ptr_data<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper>, true, true>::operator=(
							__uniq_ptr_data<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper>, true, true> &);  // 408
					unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::operator=(
							unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> > &);  // 244
					{
						CKV3ResourceBlockHelper *& __ptr; // 396
						__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::_M_ptr(); // 396
					}
					unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::~unique_ptr(); // 244
					__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::_M_ptr(); // 472
					unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::get(); // 489
					unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::operator bool(); // 854
					operator==<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >(const unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >& __x,
																nullptr_t);  // 245
					__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::_M_ptr(); // 472
					unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::get(); // 465
					unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::operator->(); // 55
					CKV3ResourceBlockHelper::GetKV3(); // 247
					CIntrospectedToKV3ResourceBlockHelper::GetKV3(); // 254
					{
					}
					CEmbeddedIntrospectedOrKV3BlockHelper<CAnimData>::InitContext(
							ResourceHandle_t hParentResource,
							const ResourceFileHeader_t* pRawDiskHeader,
							const ResourceHeaderBlockInfo_t* pBlockInfo,
							bool bDataIsKV3,
							const char* pIntrospectedRootStructName);  // 231
					CEmbeddedIntrospectedOrKV3BlockHelper<CAnimData>::InitContext(
							ResourceHandle_t hParentResource,
							const ResourceFileHeader_t* pRawDiskHeader,
							const ResourceHeaderBlockInfo_t* pBlockInfo,
							bool bDataIsKV3,
							const char* pIntrospectedRootStructName);  // 410
					_M_ptr(const __uniq_ptr_impl<CModelTypeManager::AsyncProcessDataResults::AnimData, std::default_delete<CModelTypeManager:: this); // 472
					get(const unique_ptr<CModelTypeManager::AsyncProcessDataResults::AnimData, std::default_delete<CModelTypeManager::Async this); // 465
					operator->(const unique_ptr<CModelTypeManager::AsyncProcessDataResults::AnimData, std::default_delete<CModelTypeManager::Async this); // 411
					{
					}
					__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::release(); // 184
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
							CKV3ResourceBlockHelper* __ptr);  // 204
					__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::reset(
						pointer __p);  // 184
					__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::operator=(
							__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >& __u);  // 236
					__uniq_ptr_data<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper>, true, true>::operator=(
							__uniq_ptr_data<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper>, true, true> &);  // 408
					unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::operator=(
							unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> > &);  // 244
					{
						CKV3ResourceBlockHelper *& __ptr; // 396
						__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::_M_ptr(); // 396
					}
					unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::~unique_ptr(); // 244
					__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::_M_ptr(); // 472
					unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::get(); // 489
					unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::operator bool(); // 854
					operator==<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >(const unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >& __x,
																nullptr_t);  // 245
					__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::_M_ptr(); // 472
					unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::get(); // 465
					unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::operator->(); // 55
					CKV3ResourceBlockHelper::GetKV3(); // 247
					CIntrospectedToKV3ResourceBlockHelper::GetKV3(); // 254
					{
					}
					CEmbeddedIntrospectedOrKV3BlockHelper<CSequenceGroupData>::InitContext(
							ResourceHandle_t hParentResource,
							const ResourceFileHeader_t* pRawDiskHeader,
							const ResourceHeaderBlockInfo_t* pBlockInfo,
							bool bDataIsKV3,
							const char* pIntrospectedRootStructName);  // 231
					CEmbeddedIntrospectedOrKV3BlockHelper<CSequenceGroupData>::InitContext(
							ResourceHandle_t hParentResource,
							const ResourceFileHeader_t* pRawDiskHeader,
							const ResourceHeaderBlockInfo_t* pBlockInfo,
							bool bDataIsKV3,
							const char* pIntrospectedRootStructName);  // 411
				}
				CKeyValues3Context::Root(); // 364
				CKV3MemberName::CKV3MemberName<19>(
							const char& str);  // 364
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 101
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 96
				KeyValues3::FindMember(
						CKV3MemberName memberName,
						KeyValues3* pDefaultValue);  // 101
				KeyValues3::FindMember(
						CKV3MemberName memberName,
						const KeyValues3* pDefaultValue);  // 364
			}
			{
				const KeyValues3* pEmbeddedPhysics; // 418
				{
					int nPhysDataBlockIndex; // 420
					ResourceHeaderBlockInfo_t physDataBlockInfo; // 436
					CEmbeddedIntrospectedOrKV3BlockHelper<VPhysXAggregateData_t> blockHandler; // 442
					CKV3MemberName::CKV3MemberName<16>(
								const char& str);  // 420
					CResourceArrayBase::Count(); // 422
					ResolveOffset(const int32* pOffset); // 304
					CResourceArrayBase::GetRawPtr(); // 416
					CResourceArray<ResourceBlockEntry_t>::GetPtr(); // 379
					CResourceArray<ResourceBlockEntry_t>::operator[](
							int nIndex);  // 429
					CIntrospectedToKV3ResourceBlockHelper::CIntrospectedToKV3ResourceBlockHelper(); // 212
					_Head_base<1, std::default_delete<CKV3ResourceBlockHelper>, true>::_Head_base(); // 561
					_Tuple_impl<1, std::default_delete<CKV3ResourceBlockHelper> >::_Tuple_impl(); // 303
					_Head_base<0, CKV3ResourceBlockHelper::_Head_base(); // 303
					_Tuple_impl<0, CKV3ResourceBlockHelper::_Tuple_impl(); // 966
					tuple<CKV3ResourceBlockHelper::tuple(); // 167
					__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::__uniq_ptr_impl(); // 232
					__uniq_ptr_data<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper>, true, true>::__uniq_ptr_data(); // 298
					unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::unique_ptr<>(); // 212
					CEmbeddedIntrospectedOrKV3BlockHelper<VPhysXAggregateData_t>::CEmbeddedIntrospectedOrKV3BlockHelper(); // 442
					CIntrospectedToKV3ResourceBlockHelper::CIntrospectedToKV3ResourceBlockHelper(); // 212
					_Head_base<1, std::default_delete<CKV3ResourceBlockHelper>, true>::_Head_base(); // 561
					_Tuple_impl<1, std::default_delete<CKV3ResourceBlockHelper> >::_Tuple_impl(); // 303
					_Head_base<0, CKV3ResourceBlockHelper::_Head_base(); // 303
					_Tuple_impl<0, CKV3ResourceBlockHelper::_Tuple_impl(); // 966
					tuple<CKV3ResourceBlockHelper::tuple(); // 167
					__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::__uniq_ptr_impl(); // 232
					__uniq_ptr_data<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper>, true, true>::__uniq_ptr_data(); // 298
					unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::unique_ptr<>(); // 212
					CEmbeddedIntrospectedOrKV3BlockHelper<VPhysXAggregateData_t>::CEmbeddedIntrospectedOrKV3BlockHelper(); // 96
					PhysData::PhysData(); // 31
					_Head_base<1, std::default_delete<CModelTypeManager::AsyncProcessDataResults::PhysData>, true>::_Head_base(); // 561
					_Tuple_impl<1, std::default_delete<CModelTypeManager::AsyncProcessDataResults::PhysData> >::_Tuple_impl(); // 303
					_Head_base<0, CModelTypeManager::AsyncProcessDataResults::PhysData::_Head_base(); // 303
					_Tuple_impl<0, CModelTypeManager::AsyncProcessDataResults::PhysData::_Tuple_impl(); // 966
					tuple<CModelTypeManager::AsyncProcessDataResults::PhysData::tuple(); // 169
					_M_ptr(const __uniq_ptr_impl<CModelTypeManager::AsyncProcessDataResults::PhysData, std::default_delete<CModelTypeManager::AsyncP this); // 169
					__uniq_ptr_impl(const __uniq_ptr_impl<CModelTypeManager::AsyncProcessDataResults::PhysData, std::default_delete<CModelTypeManager::AsyncP this,
							pointer __p);  // 234
					__uniq_ptr_data(const __uniq_ptr_data<CModelTypeManager::AsyncProcessDataResults::PhysData, std::default_delete<CModelTypeManager::AsyncP this,
							pointer);  // 311
					unique_ptr<>(const unique_ptr<CModelTypeManager::AsyncProcessDataResults::PhysData, std::default_delete<CModelTypeManager::AsyncProces this,
							pointer __p);  // 31
					make_unique<CModelTypeManager::AsyncProcessDataResults::PhysData>(void); // 443
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
					unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::~unique_ptr(); // 217
					CIntrospectedToKV3ResourceBlockHelper::~CIntrospectedToKV3ResourceBlockHelper(); // 217
					CEmbeddedIntrospectedOrKV3BlockHelper<VPhysXAggregateData_t>::~CEmbeddedIntrospectedOrKV3BlockHelper(); // 96
					PhysData::~PhysData(); // 92
					default_delete<CModelTypeManager::AsyncProcessDataResults::PhysData>::operator(
							PhysData* __ptr);  // 86
					default_delete<CModelTypeManager::AsyncProcessDataResults::PhysData>::operator(
							PhysData* __ptr);  // 204
					reset(const __uniq_ptr_impl<CModelTypeManager::AsyncProcessDataResults::PhysData, std::default_delete<CModelTypeManager::AsyncP this,
						pointer __p);  // 184
					operator=(const __uniq_ptr_impl<CModelTypeManager::AsyncProcessDataResults::PhysData, std::default_delete<CModelTypeManager::AsyncP this,
							__uniq_ptr_impl<CModelTypeManager::AsyncProcessDataResults::PhysData, std::default_delete<CModelTypeManager::AsyncProcess __u);  // 236
					operator=(const __uniq_ptr_data<CModelTypeManager::AsyncProcessDataResults::PhysData, std::default_delete<CModelTypeManager::AsyncP this,
							__uniq_ptr_data<CModelTypeManager::AsyncProcessDataResults::PhysData, std::default_delete<CModelTypeManager::AsyncProcess);  // 408
					operator=(const unique_ptr<CModelTypeManager::AsyncProcessDataResults::PhysData, std::default_delete<CModelTypeManager::AsyncProces this,
							unique_ptr<CModelTypeManager::AsyncProcessDataResults::PhysData, std::default_delete<CModelTypeManager::AsyncProcessDataR);  // 443
					_M_ptr(const __uniq_ptr_impl<CModelTypeManager::AsyncProcessDataResults::PhysData, std::default_delete<CModelTypeManager:: this); // 472
					get(const unique_ptr<CModelTypeManager::AsyncProcessDataResults::PhysData, std::default_delete<CModelTypeManager::Async this); // 465
					operator->(const unique_ptr<CModelTypeManager::AsyncProcessDataResults::PhysData, std::default_delete<CModelTypeManager::Async this); // 444
					{
						PhysData *& __ptr; // 396
						_M_ptr(const __uniq_ptr_impl<CModelTypeManager::AsyncProcessDataResults::PhysData, std::default_delete<CModelTypeManager::AsyncP this); // 396
					}
					~unique_ptr(const unique_ptr<CModelTypeManager::AsyncProcessDataResults::PhysData, std::default_delete<CModelTypeManager::AsyncProces this); // 443
					{
					}
					__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::release(); // 184
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
							CKV3ResourceBlockHelper* __ptr);  // 204
					__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::reset(
						pointer __p);  // 184
					__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::operator=(
							__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >& __u);  // 236
					__uniq_ptr_data<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper>, true, true>::operator=(
							__uniq_ptr_data<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper>, true, true> &);  // 408
					unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::operator=(
							unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> > &);  // 244
					{
						CKV3ResourceBlockHelper *& __ptr; // 396
						__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::_M_ptr(); // 396
					}
					unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::~unique_ptr(); // 244
					__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::_M_ptr(); // 472
					unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::get(); // 489
					unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::operator bool(); // 854
					operator==<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >(const unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >& __x,
																nullptr_t);  // 245
					__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::_M_ptr(); // 472
					unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::get(); // 465
					unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::operator->(); // 55
					CKV3ResourceBlockHelper::GetKV3(); // 247
					CIntrospectedToKV3ResourceBlockHelper::GetKV3(); // 254
					{
					}
					CEmbeddedIntrospectedOrKV3BlockHelper<VPhysXAggregateData_t>::InitContext(
							ResourceHandle_t hParentResource,
							const ResourceFileHeader_t* pRawDiskHeader,
							const ResourceHeaderBlockInfo_t* pBlockInfo,
							bool bDataIsKV3,
							const char* pIntrospectedRootStructName);  // 231
					CEmbeddedIntrospectedOrKV3BlockHelper<VPhysXAggregateData_t>::InitContext(
							ResourceHandle_t hParentResource,
							const ResourceFileHeader_t* pRawDiskHeader,
							const ResourceHeaderBlockInfo_t* pBlockInfo,
							bool bDataIsKV3,
							const char* pIntrospectedRootStructName);  // 444
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
					unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::~unique_ptr(); // 217
					CIntrospectedToKV3ResourceBlockHelper::~CIntrospectedToKV3ResourceBlockHelper(); // 217
					CEmbeddedIntrospectedOrKV3BlockHelper<VPhysXAggregateData_t>::~CEmbeddedIntrospectedOrKV3BlockHelper(); // 448
				}
				CKeyValues3Context::Root(); // 418
				CKV3MemberName::CKV3MemberName<17>(
							const char& str);  // 418
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 101
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 96
				KeyValues3::FindMember(
						CKV3MemberName memberName,
						KeyValues3* pDefaultValue);  // 101
				KeyValues3::FindMember(
						CKV3MemberName memberName,
						const KeyValues3* pDefaultValue);  // 418
			}
		}
		ValidateAlignment<unsigned char>(void); // 508
		CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned char, int>::Purge(); // 903
		CUtlMemory<unsigned char, int>::Purge(); // 510
		CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
		CUtlBuffer::~CUtlBuffer(); // 450
	}
	_M_ptr(const __uniq_ptr_impl<CModelTypeManager::AsyncProcessDataResults, std::default_delete<CModelTypeManager::AsyncProce this); // 472
	get(const unique_ptr<CModelTypeManager::AsyncProcessDataResults, std::default_delete<CModelTypeManager::AsyncProcessDat this); // 465
	operator->(const unique_ptr<CModelTypeManager::AsyncProcessDataResults, std::default_delete<CModelTypeManager::AsyncProcessDat this); // 241
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
			unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> > &);  // 241
	{
		IAsyncProcessedDataResult *& __ptr; // 396
		__uniq_ptr_impl<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::_M_ptr(); // 396
		unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::get_deleter(); // 398
		default_delete<IAsyncProcessedDataResult>::operator(
				IAsyncProcessedDataResult* __ptr);  // 398
	}
	unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::~unique_ptr(); // 241
	get_deleter(const unique_ptr<CModelTypeManager::AsyncProcessDataResults, std::default_delete<CModelTypeManager::AsyncProcessDataResul this); // 374
	release(const unique_ptr<CModelTypeManager::AsyncProcessDataResults, std::default_delete<CModelTypeManager::AsyncProcessDataResul this); // 374
	default_delete<IAsyncProcessedDataResult>::default_delete<CModelTypeManager::AsyncProcessDataResults>(
									const default_delete<CModelTypeManager::AsyncProcessDataResults>  &);  // 104
	_Head_base<1, std::default_delete<IAsyncProcessedDataResult>, true>::_Head_base<std::default_delete<CModelTypeManager::AsyncProcessDataResults> >(
											default_delete<CModelTypeManager::AsyncProcessDataResults>& __h);  // 571
	_Tuple_impl<1, std::default_delete<IAsyncProcessedDataResult> >::_Tuple_impl<std::default_delete<CModelTypeManager::AsyncProcessDataResults> >(
											default_delete<CModelTypeManager::AsyncProcessDataResults>& __head);  // 315
	_Head_base<0, IAsyncProcessedDataResult::_Head_base<IAsyncProcessedDataResult*&>(
						IAsyncProcessedDataResult *& __h);  // 315
	_Tuple_impl<0, IAsyncProcessedDataResult::_Tuple_impl<IAsyncProcessedDataResult*&, std::default_delete<CModelTypeManager::AsyncProcessDataResults> >(
															IAsyncProcessedDataResult *& __head);  // 985
	tuple<IAsyncProcessedDataResult::tuple<IAsyncProcessedDataResult*&, std::default_delete<CModelTypeManager::AsyncProcessDataResults> >(); // 174
	__uniq_ptr_impl<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::__uniq_ptr_impl<std::default_delete<CModelTypeManager::AsyncProcessDataResults> >(
												pointer __p,
												default_delete<CModelTypeManager::AsyncProcessDataResults>& __d);  // 234
	__uniq_ptr_data<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult>, true, true>::__uniq_ptr_data<std::default_delete<CModelTypeManager::AsyncProcessDataResults> >(
												pointer,
												default_delete<CModelTypeManager::AsyncProcessDataResults> &);  // 374
	unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::unique_ptr<CModelTypeManager::AsyncProcessDataResults, std::default_delete<CModelTypeManager::AsyncProcessDataResults> >(
																unique_ptr<CModelTypeManager::AsyncProcessDataResults, std::default_delete<CModelTypeManager::AsyncProcessDataResults> >  __u);  // 455
	{
		AsyncProcessDataResults *& __ptr; // 396
		_M_ptr(const __uniq_ptr_impl<CModelTypeManager::AsyncProcessDataResults, std::default_delete<CModelTypeManager::AsyncProcessData this); // 396
	}
	~unique_ptr(const unique_ptr<CModelTypeManager::AsyncProcessDataResults, std::default_delete<CModelTypeManager::AsyncProcessDataResul this); // 456
} /* size: 0, variables: 2, goto labels: 1, inline expansions: 22 (253 bytes) */

// <0017A87C> meshsystem/meshsystem.cpp:461
// variables: 7
// function calls: 19
void CModelTypeManager::AllocateResource(ResourceHandle_t hResource, ResourceId_t nId, const ResourceFileHeader_t* pHeader, IRD_RegisterResourceDataUtils* pUtils)
{
	AsyncProcessDataResults* pAsyncResults; // 463
	const char   __FUNCTION__; // 13470
	CModel_Imp* pModel; // 468
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 464
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 471
	}
	{
		CResourceNameGetter resourceName; // 479
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 180
		ResourceGetName(ResourceHandle_t hResource,
				CResourceName* pTarget);  // 196
		CResourceNameGetter::CResourceNameGetter(
					ResourceHandle_t hResource);  // 479
		CUtlString::Get(); // 480
		CResourceName::Get(); // 480
	}
	{
		CResourceNameGetter resourceName; // 490
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 180
		ResourceGetName(ResourceHandle_t hResource,
				CResourceName* pTarget);  // 196
		CResourceNameGetter::CResourceNameGetter(
					ResourceHandle_t hResource);  // 490
		CResourceName::Get(); // 491
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 497
	}
	__uniq_ptr_impl<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::_M_ptr(); // 472
	unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::get(); // 466
} /* size: 0, variables: 3, inline expansions: 2 (0 bytes) */

// <0017A2D8> meshsystem/meshsystem.cpp:504
// variable: 1
// function calls: 19
void CModelTypeManager::AllocateTypesafe(PermModelData_t* pDataFromDisk, IKV3ResourceAllocatorUtils* pUtils)
{
	CModel_Imp* pModel; // 506
	CWeakHandle<InfoForResourceTypeCModel>::Init(
		const CWeakHandle<InfoForResourceTypeCModel>& src);  // 273
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 160
	CAllocatorUtils::GetResourceHandle(); // 506
	CUtlSymbolLarge::String(); // 160
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 184
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 180
	ResourceGetName(ResourceHandle_t hResource,
			CResourceName* pTarget);  // 488
	CWeakHandle<InfoForResourceTypeCModel>::GetResourceName(
			CResourceName* pOutName);  // 206
	CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCModel>(
							const CWeakHandle<InfoForResourceTypeCModel>& resourceHandle);  // 506
	CResourceName::Get(); // 506
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 506
	CAllocatorUtils::GetDataUtils(); // 509
	CWeakHandle<InfoForResourceTypeCModel>::Init(
		const CWeakHandle<InfoForResourceTypeCModel>& src);  // 273
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 160
	CAllocatorUtils::GetResourceHandle(); // 509
	CWeakHandle<InfoForResourceTypeCModel>::operator ResourceHandle_t(); // 509
} /* size: 413, variables: 1, inline expansions: 19 (462 bytes) */

// <0018CE0C> meshsystem/meshsystem.cpp:516
// function calls: 3
void CModelTypeManager::DeallocateTypesafe(CModel* pData, IKV3ResourceDeallocatorUtils* pUtils)
{
	CDeallocatorUtils::GetDeallocUtils(); // 518
	CResourceDeallocatorUtils::GetDeallocationType(); // 518
	CModelTypeManager::DeallocateTypesafe(
				CModel* pData,
				IKV3ResourceDeallocatorUtils* pUtils);  // 516
} /* size: 129, inline expansions: 3 (26 bytes) */

// <0017A2A5> meshsystem/meshsystem.cpp:516
void CModelTypeManager::DeallocateTypesafe(CModel* pData, IKV3ResourceDeallocatorUtils* pUtils)
{
} /* size: 0 */

// <0017652C> meshsystem/meshsystem.cpp:531
// variables: 4
// function calls: 38
void CModelTypeManager::FinalizeResource(ResourceHandle_t hResource, ResourceLoadType_t nLoadType)
{
	CToolsStallMonitorScope stall_monitor_scope_check_object; // 533
	CModel_Imp* pModel; // 534
	{
		HModel hModel; // 552
		CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 234
		CWeakHandle<InfoForResourceTypeCModel>::InitUntyped(
				ResourceHandle_t hUntypedResource);  // 235
		FromUntypedHandle(ResourceHandle_t hResource); // 552
		CWeakHandle<InfoForResourceTypeCModel>::GetBinding(); // 223
		CStrongHandle<InfoForResourceTypeCModel>::CStrongHandle(
				ResourceHandleTyped_t hResource);  // 223
		CStrongHandleCopyable<InfoForResourceTypeCModel>::CStrongHandleCopyable(
					const CWeakHandle<InfoForResourceTypeCModel>& src);  // 553
		{
			int i; // 1531
			Count(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCModel>, CUtlMemory<CStrongHandleCopyable<InfoForReso this); // 1531
			CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCModel>, int>::operator[](
					int i);  // 609
			Element(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCModel>, CUtlMemory<CStrongHandleCopyable<InfoForReso this,
				int i);  // 1533
			CStrongHandle<InfoForResourceTypeCModel>::operator==(
					const CStrongHandle<InfoForResourceTypeCModel>& hResource);  // 1533
		}
		Find(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCModel>, CUtlMemory<CStrongHandleCopyable<InfoForReso this,
			const CStrongHandleCopyable<InfoForResourceTypeCModel>& src);  // 553
		CStrongHandle<InfoForResourceTypeCModel>::~CStrongHandle(); // 211
		CStrongHandleCopyable<InfoForResourceTypeCModel>::~CStrongHandleCopyable(); // 554
		CStrongHandle<InfoForResourceTypeCModel>::~CStrongHandle(); // 211
		CStrongHandleCopyable<InfoForResourceTypeCModel>::~CStrongHandleCopyable(); // 553
		CWeakHandle<InfoForResourceTypeCModel>::GetBinding(); // 223
		CStrongHandle<InfoForResourceTypeCModel>::CStrongHandle(
				ResourceHandleTyped_t hResource);  // 223
		CStrongHandleCopyable<InfoForResourceTypeCModel>::CStrongHandleCopyable(
					const CWeakHandle<InfoForResourceTypeCModel>& src);  // 554
		CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCModel>, int>::NumAllocated(); // 1247
		CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCModel>, int>::Base(); // 112
		Base(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCModel>, CUtlMemory<CStrongHandleCopyable<InfoForResourceTy this); // 368
		ResetDbgInfo(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCModel>, CUtlMemory<CStrongHandleCopyable<InfoForResourceTy this); // 824
		CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCModel>, int>::IsGrowable(); // 823
		CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCModel>, int>::IsExternallyAllocated(); // 859
		CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCModel>, int>::IsExternallyAllocated(); // 861
		CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCModel>, int>::Grow(
			int num);  // 806
		GrowMemory(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCModel>, CUtlMemory<CStrongHandleCopyable<InfoForResourceTy this,
				int num);  // 1249
		CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCModel>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCModel>, CUtlMemory<CStrongHandleCopyable<InfoForResourceTy this,
			int i);  // 1252
		CStrongHandle<InfoForResourceTypeCModel>::CStrongHandle(); // 224
		CStrongHandle<InfoForResourceTypeCModel>::Move(
			CStrongHandle<InfoForResourceTypeCModel>& moveSrc);  // 224
		CStrongHandleCopyable<InfoForResourceTypeCModel>::CStrongHandleCopyable(
					CStrongHandleCopyable<InfoForResourceTypeCModel>& src);  // 1514
		Construct<CStrongHandleCopyable<InfoForResourceTypeCModel>, CStrongHandleCopyable<InfoForResourceTypeCModel> >(CStrongHandleCopyable<InfoForResourceTypeCModel>* pMemory); // 1252
		AddToTail(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCModel>, CUtlMemory<CStrongHandleCopyable<InfoForResourceTy this,
				CStrongHandleCopyable<InfoForResourceTypeCModel>& src);  // 554
	}
	CToolsStallMonitorScope::CToolsStallMonitorScope(
				const char* pScopeName,
				bool bDisableDetection,
				uint32 nStallThresholdMS);  // 533
	CInterlockedIntT<int, 4>::operator int(); // 294
	ResourceHandleToData<CModel_Imp*>(const ResourceBindingBase_t* hResource); // 534
	CToolsStallMonitorScope::~CToolsStallMonitorScope(); // 556
} /* size: 755, variables: 2, inline expansions: 4 (59 bytes) */

// <00175CF3> meshsystem/meshsystem.cpp:562
// variables: 2
// function calls: 34
void CModelTypeManager::NotifyResourceStatusChange(const ResourceStatusChange_t* pChanges, int nNumChanges)
{
	{
		int i; // 564
		{
			const ResourceLoadType_t  nLoadType; // 566
			CWeakHandle<InfoForResourceTypeIAnimationGraph>::CWeakHandle(); // 234
			{
				CUtlSymbolLarge::String(); // 160
				ResourceGetName(ResourceNameHandle_t hResourceName,
						CResourceName* pTarget);  // 184
				ResourceGetName(ResourceHandle_t hResource,
						CResourceName* pTarget);  // 196
				CResourceNameGetter::CResourceNameGetter(
							ResourceHandle_t hResource);  // 310
				CResourceName::Get(); // 310
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 318
				CResourceName::~CResourceName(); // 191
				CResourceNameGetter::~CResourceNameGetter(); // 310
			}
			CWeakHandle<InfoForResourceTypeIAnimationGraph>::InitUntyped(
					ResourceHandle_t hUntypedResource);  // 306
			CWeakHandle<InfoForResourceTypeIAnimationGraph>::InitUntyped(
					ResourceHandle_t hUntypedResource);  // 235
			FromUntypedHandle(ResourceHandle_t hResource); // 579
			CWeakHandle<InfoForResourceTypeIAnimationGraph>::GetBinding(); // 223
			CStrongHandle<InfoForResourceTypeIAnimationGraph>::CStrongHandle(
					ResourceHandleTyped_t hResource);  // 223
			CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>::CStrongHandleCopyable(
						const CWeakHandle<InfoForResourceTypeIAnimationGraph>& src);  // 579
			CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>, int>::NumAllocated(); // 1247
			CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>, int>::Base(); // 112
			Base(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>, CUtlMemory<CStrongHandleCopyable<InfoForR this); // 368
			ResetDbgInfo(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>, CUtlMemory<CStrongHandleCopyable<InfoForR this); // 824
			CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>, int>::IsGrowable(); // 823
			CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>, int>::IsExternallyAllocated(); // 859
			CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>, int>::IsExternallyAllocated(); // 861
			CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>, int>::Grow(
				int num);  // 806
			GrowMemory(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>, CUtlMemory<CStrongHandleCopyable<InfoForR this,
					int num);  // 1249
			CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>, CUtlMemory<CStrongHandleCopyable<InfoForR this,
				int i);  // 1252
			CStrongHandle<InfoForResourceTypeIAnimationGraph>::CStrongHandle(); // 224
			CStrongHandle<InfoForResourceTypeIAnimationGraph>::Move(
				CStrongHandle<InfoForResourceTypeIAnimationGraph>& moveSrc);  // 224
			CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>::CStrongHandleCopyable(
						CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>& src);  // 1514
			Construct<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>, CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph> >(CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>* pMemory); // 1252
			AddToTail(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>, CUtlMemory<CStrongHandleCopyable<InfoForR this,
					CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>& src);  // 579
			CStrongHandle<InfoForResourceTypeIAnimationGraph>::~CStrongHandle(); // 211
			CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>::~CStrongHandleCopyable(); // 579
		}
	}
} /* size: 800 */

// <0017528E> meshsystem/meshsystem.cpp:589
// variables: 8
// function calls: 44
void CModelTypeManager::FrameUpdate(int nFinishedFrameCount)
{
	{
		HModelStrongCopyable& hModel; // 593
		CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCModel>, CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCModel>, int> >& __for_range; // 314
		iterator __for_begin; // 43979
		iterator __for_end; // 43979
		{
			CUtlVector<CSceneObject*, CUtlMemory<CSceneObject*, int> > sceneObjectsToUpdate; // 595
			{
				int s; // 597
				CUtlVectorBase<CSceneObject::Count(); // 597
				CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
				CWeakHandle<InfoForResourceTypeCModel>::InitUntypedUnchecked(
							ResourceHandle_t hUntypedResource);  // 227
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
				CStrongHandle<InfoForResourceTypeCModel>::operator CWeakHandle<InfoForResourceTypeCModel>(); // 599
				CUtlMemory<CSceneObject::operator[](
						int i);  // 588
				CUtlVectorBase<CSceneObject::operator[](
						int i);  // 599
			}
			CUtlMemory<CSceneObject::ValidateGrowSize(); // 475
			CUtlMemory<CSceneObject::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<CSceneObject::ResetDbgInfo(); // 530
			CUtlVectorBase<CSceneObject::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<CSceneObject::CUtlVector(); // 595
			CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
			CWeakHandle<InfoForResourceTypeCModel>::InitUntypedUnchecked(
						ResourceHandle_t hUntypedResource);  // 227
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
			CStrongHandle<InfoForResourceTypeCModel>::operator CWeakHandle<InfoForResourceTypeCModel>(); // 596
			CUtlVectorBase<CSceneObject::RemoveAll(); // 1798
			CUtlMemory<CSceneObject::IsExternallyAllocated(); // 905
			CUtlMemory<CSceneObject::Purge(); // 903
			CUtlMemory<CSceneObject::Purge(); // 1799
			CUtlVectorBase<CSceneObject::Purge(); // 560
			ValidateAlignment<CSceneObject*>(void); // 508
			CUtlMemory<CSceneObject::Purge(); // 510
			CUtlMemory<CSceneObject::~CUtlMemory(); // 562
			CUtlVectorBase<CSceneObject::~CUtlVectorBase(); // 410
			CUtlVector<CSceneObject::~CUtlVector(); // 601
		}
		CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCModel>, int>::Base(); // 112
		Base(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCModel>, CUtlMemory<CStrongHandleCopyable<InfoForResourceTy this); // 102
		begin(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCModel>, CUtlMemory<CStrongHandleCopyable<InfoForResourceTy this); // 593
		end(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCModel>, CUtlMemory<CStrongHandleCopyable<InfoForResourceTy this); // 593
	}
	Count(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCModel>, CUtlMemory<CStrongHandleCopyable<InfoForReso this); // 591
	{
		int i; // 1721
		CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCModel>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCModel>, CUtlMemory<CStrongHandleCopyable<InfoForResourceTy this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCModel>::~CStrongHandle(); // 211
		CStrongHandleCopyable<InfoForResourceTypeCModel>::~CStrongHandleCopyable(); // 1526
		Destruct<CStrongHandleCopyable<InfoForResourceTypeCModel> >(CStrongHandleCopyable<InfoForResourceTypeCModel>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCModel>, CUtlMemory<CStrongHandleCopyable<InfoForResourceTy this); // 602
	Count(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>, CUtlMemory<CStrongHandleCopyable<In this); // 605
	{
		int i; // 1721
		CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>, CUtlMemory<CStrongHandleCopyable<InfoForR this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeIAnimationGraph>::~CStrongHandle(); // 211
		CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>::~CStrongHandleCopyable(); // 1526
		Destruct<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph> >(CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>, CUtlMemory<CStrongHandleCopyable<InfoForR this); // 609
} /* size: 455, inline expansions: 4 (144 bytes) */

// <00174EE1> meshsystem/meshsystem.cpp:631
// function calls: 12
void CModelTypeManager::CModelTypeManager()
{
	CTypesafeIntrospectedToKV3TypeManager<1818520950, PermModelData_t>::CTypesafeIntrospectedToKV3TypeManager(); // 632
	IToolsResourceListener::IToolsResourceListener(); // 632
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCModel>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCModel>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCModel>, CUtlMemory<CStrongHandleCopyable<InfoForResourceTy this); // 530
	CUtlVectorBase(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCModel>, CUtlMemory<CStrongHandleCopyable<InfoForResourceTy this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCModel>, CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCM this); // 632
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>, CUtlMemory<CStrongHandleCopyable<InfoForR this); // 530
	CUtlVectorBase(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>, CUtlMemory<CStrongHandleCopyable<InfoForR this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>, CUtlMemory<CStrongHandleCopyable<InfoForResou this); // 632
} /* size: 0, inline expansions: 12 (0 bytes) */

// <00174EC8> meshsystem/meshsystem.cpp:631
void CModelTypeManager::CModelTypeManager()
{
} /* size: 0 */

// <00174DBA> meshsystem/meshsystem.cpp:638
// variables: 3
// function calls: 2
void CModelTypeManager::InstallResourceType()
{
	bool bIsConsoleApp; // 640
	bool bIsDedicatedServer; // 641
	const char* pErrorManifest; // 642
	ResourceTypeName(void); // 673
	IResourceSystem::InstallTypeManager<1818520950>(
					IResourceTypeManager* pTypeManager,
					const char* pErrorManifestName);  // 643
} /* size: 157, variables: 3, inline expansions: 2 (21 bytes) */

// <0018E7DC> meshsystem/meshsystem.cpp:647
void CModelTypeManager::RemoveResourceType()
{
} /* size: 0 */

// <0018C867> meshsystem/meshsystem.cpp:657
// function calls: 6
void CMeshSystem::GetDependencies()
{
	AppSystemInfo_t::AppSystemInfo_t(
			const char* pModuleName,
			const char* pInterfaceName);  // 666
	AppSystemInfo_t::AppSystemInfo_t(
			const char* pModuleName,
			const char* pInterfaceName);  // 666
	AppSystemInfo_t::AppSystemInfo_t(
			const char* pModuleName,
			const char* pInterfaceName);  // 666
	AppSystemInfo_t::AppSystemInfo_t(
			const char* pModuleName,
			const char* pInterfaceName);  // 666
	AppSystemInfo_t::AppSystemInfo_t(
			const char* pModuleName,
			const char* pInterfaceName);  // 666
	CMeshSystem::GetDependencies(); // 657
} /* size: 220, inline expansions: 6 (282 bytes) */

// <00174D60> meshsystem/meshsystem.cpp:657
// variable: 1
void CMeshSystem::GetDependencies()
{
	AppSystemInfo_t s_pDependencies; // 659
} /* size: 0, variables: 1 */

// <00174CEF> meshsystem/meshsystem.cpp:674
void* CMeshSystem::QueryInterface(const char* pInterfaceName)
{
} /* size: 52 */

// <00174C8B> meshsystem/meshsystem.cpp:683
void CMeshSystem::Init()
{
} /* size: 79 */

// <00174BDE> meshsystem/meshsystem.cpp:693
// function call: 1
void CMeshSystem::Shutdown()
{
	CModelTypeManager::RemoveResourceType(); // 697
} /* size: 117, inline expansions: 1 (41 bytes) */

// <00174A9A> meshsystem/meshsystem.cpp:702
// variable: 1
// function calls: 3
void CMeshSystem::PrepareRenderMesh(CRenderMesh* pMeshData)
{
	{
		int i; // 708
		CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::Count(); // 708
		CUtlMemory<CSceneObjectData, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
				int i);  // 710
	}
} /* size: 94 */

// <00174666> meshsystem/meshsystem.cpp:714
// variables: 2
// function calls: 12
void CMeshSystem::FindOrCreateProceduralModel(const char* pResourceName, bool bIsAnonymous, CModelBuilder* pModelBuilder)
{
	CResourceName resourceStr; // 716
	CModel_Imp* pModel; // 720
	CResourceName::String(); // 718
	CResourceName::String(); // 720
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCModel>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 693
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 695
	IResourceSystem::FindOrCreateProceduralResource<1818520950>(
							const CResourceName& resourceName,
							void* pResourceData,
							ProceduralResourceType_t type);  // 723
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 724
} /* size: 284, variables: 2, inline expansions: 12 (140 bytes) */

// <0017429F> meshsystem/meshsystem.cpp:726
// variables: 2
// function calls: 11
void CMeshSystem::FindOrCreateProceduralMesh(const char* pResourceName, bool bIsAnonymous)
{
	CResourceName resourceStr; // 728
	CRenderMesh* pRenderMesh; // 730
	CResourceName::String(); // 731
	CWeakHandle<InfoForResourceTypeCRenderMesh>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCRenderMesh>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 693
	CWeakHandle<InfoForResourceTypeCRenderMesh>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 695
	IResourceSystem::FindOrCreateProceduralResource<448612625782>(
							const CResourceName& resourceName,
							void* pResourceData,
							ProceduralResourceType_t type);  // 733
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 734
} /* size: 256, variables: 2, inline expansions: 11 (136 bytes) */

// <001740D9> meshsystem/meshsystem.cpp:736
// variables: 4
// function calls: 2
void CMeshSystem::DrawRenderable(IRenderContext* pRenderContext, HModel hModel, RenderShaderHandle_t hVS, RenderShaderHandle_t hPS, int nExplicitInstanceCount)
{
	const CModel* pModel; // 738
	int nMeshes; // 742
	{
		int m; // 743
		{
			const CRenderMesh* pRenderMesh; // 745
		}
	}
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCModel>(const CWeakHandle<InfoForResourceTypeCModel>& hResource); // 738
} /* size: 145, variables: 2, inline expansions: 2 (25 bytes) */

// <00174041> meshsystem/meshsystem.cpp:753
void CMeshSystem::GetRenderableBounds(const CRenderMesh* pRenderMesh, Vector& vMinBounds, Vector& vMaxBounds)
{
} /* size: 33 */

// <0018E834> meshsystem/meshsystem.cpp:761
void CMeshSystem::GetMeshTranslucencyType(const CRenderMesh* pRenderMesh)
{
} /* size: 27 */

// <0018CB75> meshsystem/meshsystem.cpp:770
// function calls: 9
void CMeshSystem::GetModelBounds(HModel hModel, Vector& vMinBounds, Vector& vMaxBounds)
{
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 772
	CWeakHandle<InfoForResourceTypeCModel>::operator==(
			const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 772
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCModel>(const CWeakHandle<InfoForResourceTypeCModel>& hResource); // 779
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 774
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 775
	CMeshSystem::GetModelBounds(
			HModel hModel,
			Vector& vMinBounds,
			Vector& vMaxBounds);  // 770
} /* size: 77, inline expansions: 9 (74 bytes) */

// <00173FDB> meshsystem/meshsystem.cpp:770
void CMeshSystem::GetModelBounds(HModel hModel, Vector& vMinBounds, Vector& vMaxBounds)
{
} /* size: 0 */

// <0018E888> meshsystem/meshsystem.cpp:782
void CMeshSystem::GetAnimatableDesc()
{
} /* size: 0 */

// <00173BF5> meshsystem/meshsystem.cpp:792
// variable: 1
// function calls: 14
void CMeshSystem::CreateMeshInstance(ISceneObjectDesc* pDesc, uint32 nSceneSystemFrameCounter)
{
	CMeshInstance_Imp* pMeshInstance; // 794
	CMeshSystem::GetAnimatableDesc(); // 795
	CUtlMemory<CachedSlotAndExtraData_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CachedSlotAndExtraData_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CachedSlotAndExtraData_t, CUtlMemory<CachedSlotAndExtraData_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CachedSlotAndExtraData_t, CUtlMemory<CachedSlotAndExtraData_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CachedSlotAndExtraData_t, CUtlMemory<CachedSlotAndExtraData_t, int> >::CUtlVector(); // 75
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 75
	CMeshInstanceAnimatableData::CMeshInstanceAnimatableData(); // 260
	CMeshInstance::AllocateAnimatableData(
				uint32 nSceneSystemFrameCounter,
				const int16* pLocalToMasterTable,
				int nFlexDescCount);  // 256
	CMeshInstance::AllocateAnimatableData(
				uint32 nSceneSystemFrameCounter,
				const int16* pLocalToMasterTable,
				int nFlexDescCount);  // 797
} /* size: 241, variables: 1, inline expansions: 14 (449 bytes) */

// <00173114> meshsystem/meshsystem.cpp:803
// variables: 3
// function calls: 41
void CMeshSystem::CreateMeshInstance(ISceneObjectDesc* pDesc, uint32 nSceneSystemFrameCounter, CModelMeshHandle hRenderMesh, int nSceneObjectIndex, ESceneObjectFlags nOriginalSceneObjectFlags, CSceneObject* pSceneObject, MeshGroupMask_t nMeshGroupMask, LODGroupMask_t nLODGroupMask, const int16* pLocalToMasterTable)
{
	CMeshInstance_Imp* pMeshInstance; // 806
	{
		const CRenderMesh* pMesh; // 809
		int nFlexDescCount; // 811
		CWeakHandle<InfoForResourceTypeCModel>::HasData(); // 64
		CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >::GetData(); // 809
		CUtlMemory<CachedSlotAndExtraData_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<CachedSlotAndExtraData_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CachedSlotAndExtraData_t, CUtlMemory<CachedSlotAndExtraData_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CachedSlotAndExtraData_t, CUtlMemory<CachedSlotAndExtraData_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CachedSlotAndExtraData_t, CUtlMemory<CachedSlotAndExtraData_t, int> >::CUtlVector(); // 75
		CUtlMemory<float, int>::ValidateGrowSize(); // 475
		CUtlMemory<float, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 75
		CMeshInstanceAnimatableData::CMeshInstanceAnimatableData(); // 260
		CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveMultipleFromTail(
					int num);  // 1323
		CUtlMemory<float, int>::NumAllocated(); // 782
		CUtlMemory<float, int>::IsGrowable(); // 823
		CUtlMemory<float, int>::IsExternallyAllocated(); // 859
		CUtlMemory<float, int>::IsExternallyAllocated(); // 861
		CUtlMemory<float, int>::Grow(
			int num);  // 806
		CUtlMemory<float, int>::Base(); // 112
		CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 368
		CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<float, CUtlMemory<float, int> >::GrowMemory(
				int num);  // 784
		CUtlVectorBase<float, CUtlMemory<float, int> >::GrowVector(
				int num);  // 1445
		CUtlVectorBase<float, CUtlMemory<float, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<float, CUtlMemory<float, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<float, CUtlMemory<float, int> >::AddMultipleToTail(
					int num);  // 1319
		CUtlVectorBase<float, CUtlMemory<float, int> >::SetCount(
			int count);  // 269
		CMeshInstance::AllocateAnimatableData(
					uint32 nSceneSystemFrameCounter,
					const int16* pLocalToMasterTable,
					int nFlexDescCount);  // 256
		CMeshInstance::AllocateAnimatableData(
					uint32 nSceneSystemFrameCounter,
					const int16* pLocalToMasterTable,
					int nFlexDescCount);  // 817
	}
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 38
	CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >::CModelMeshHandleBase(); // 137
	CWeakHandle<InfoForResourceTypeCModel>::Init(
		const CWeakHandle<InfoForResourceTypeCModel>& src);  // 273
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 100
	CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >::GetModelHandle(); // 180
	CWeakHandle<InfoForResourceTypeCModel>::Init(
		const CWeakHandle<InfoForResourceTypeCModel>& src);  // 331
	CWeakHandle<InfoForResourceTypeCModel>::operator=(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 180
	CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >::GetMeshIndex(); // 181
	CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >::Assign(
		const CModelMeshHandle& h);  // 138
	CModelMeshHandle::CModelMeshHandle(
			const CModelMeshHandle& h);  // 806
	CMeshSystem::GetAnimatableDesc(); // 807
} /* size: 623, variables: 1, inline expansions: 11 (87 bytes) */

// <0018CEFF> meshsystem/meshsystem.cpp:822
// variables: 4
// function calls: 23
void CMeshSystem::DestroyMeshInstance(CMeshInstance* pMeshInstance)
{
	CMeshInstance_Imp* pMeshInstance_Imp; // 829
	CUtlVector<CMeshInstance_Imp*, CUtlMemory<CMeshInstance_Imp*, int> > deletionQueue; // 831
	CMeshInstance_Imp* pNext; // 832
	CUtlMemory<CMeshInstance_Imp::ValidateGrowSize(); // 475
	CUtlMemory<CMeshInstance_Imp::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CMeshInstance_Imp::ResetDbgInfo(); // 530
	CUtlVectorBase<CMeshInstance_Imp::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CMeshInstance_Imp::CUtlVector(); // 831
	CMeshInstance::GetNext(); // 832
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1097
	CUtlMemory<CMeshInstance_Imp::operator[](
			int i);  // 602
	CUtlVectorBase<CMeshInstance_Imp::Element(
		int i);  // 1097
	CUtlVectorBase<CMeshInstance_Imp::ShiftElementsRight(
				int elem,
				int num);  // 1224
	CopyConstruct<CMeshInstance_Imp*>(CMeshInstance_Imp** pMemory,
						CMeshInstance_Imp* const& src);  // 1225
	CUtlMemory<CMeshInstance_Imp::Grow(
		int num);  // 806
	CUtlVectorBase<CMeshInstance_Imp::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CMeshInstance_Imp::GrowVector(
			int num);  // 1223
	CUtlVectorBase<CMeshInstance_Imp::InsertBefore(
			int elem,
			CMeshInstance_Imp* const& src);  // 1187
	CUtlVectorBase<CMeshInstance_Imp::AddToHead(
			CMeshInstance_Imp* const& src);  // 835
	{
		int i; // 839
	}
	CUtlMemory<CMeshInstance_Imp::Purge(); // 903
	CUtlMemory<CMeshInstance_Imp::Purge(); // 1799
	CUtlVectorBase<CMeshInstance_Imp::Purge(); // 560
	CUtlVectorBase<CMeshInstance_Imp::~CUtlVectorBase(); // 410
	CUtlVector<CMeshInstance_Imp::~CUtlVector(); // 845
	CMeshSystem::DestroyMeshInstance(
				CMeshInstance* pMeshInstance);  // 822
} /* size: 364, variables: 3, inline expansions: 23 (1314 bytes) */

// <00173086> meshsystem/meshsystem.cpp:822
// variables: 4
void CMeshSystem::DestroyMeshInstance(CMeshInstance* pMeshInstance)
{
	CMeshInstance_Imp* pMeshInstance_Imp; // 829
	CUtlVector<CMeshInstance_Imp*, CUtlMemory<CMeshInstance_Imp*, int> > deletionQueue; // 831
	CMeshInstance_Imp* pNext; // 832
	{
		int i; // 839
	}
} /* size: 0, variables: 3 */

// <00173048> meshsystem/meshsystem.cpp:847
void CMeshSystem::DeleteSceneWorldInfo(ISceneWorld* pSceneWorld)
{
} /* size: 0 */

// <00173005> meshsystem/meshsystem.cpp:852
void CMeshSystem::EnableTraceLines()
{
} /* size: 19 */

// <00172FB7> meshsystem/meshsystem.cpp:857
void CMeshSystem::GetToolsGeometryInfo(const CRenderMesh* pRenderMesh, const CUtlVector<TraceDataForDraw_t, CUtlMemory<TraceDataForDraw_t, int> > ** ppOutTraceData)
{
} /* size: 29 */

// <00172B92> meshsystem/meshsystem.cpp:874
// variable: 1
// function calls: 19
void CMeshSystem::CreateRenderMesh(const char* pName)
{
	CSmartPtr<CRenderMesh, CRefCountAccessor> pRenderMesh; // 876
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
			CRenderMesh* pObj);  // 319
	CSmartPtr<CRenderMesh, CRefCountAccessor>::CSmartPtr(
			CRenderMesh* pObj);  // 876
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 877
	CSmartPtr<CRenderMesh, CRefCountAccessor>::operator->(); // 880
} /* size: 238, variables: 1, inline expansions: 19 (610 bytes) */

// <00172B32> meshsystem/meshsystem.cpp:885
void CMeshSystem::InvalidateMeshRayTrace(CRenderMesh* pRenderMesh)
{
} /* size: 12 */

// <00172AD2> meshsystem/meshsystem.cpp:890
void CMeshSystem::FindOrCreateMeshRayTrace(const CRenderMesh* pMesh)
{
} /* size: 35 */

// <0017280A> meshsystem/meshsystem.cpp:898
// variables: 7
// function calls: 5
void CMeshSystem::UpdateTranslucencyFlagsForAllLoadedMeshes()
{
	int nStart; // 900
	{
		ResourceHandle_t hResource; // 903
		int nCount; // 904
		{
			int i; // 912
			{
				CModel* pModel; // 919
				{
					int m; // 922
					{
						CRenderMesh* pRenderMesh; // 924
					}
				}
				CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 234
				CWeakHandle<InfoForResourceTypeCModel>::InitUntyped(
						ResourceHandle_t hUntypedResource);  // 235
				FromUntypedHandle(ResourceHandle_t hResource); // 919
				CInterlockedIntT<int, 4>::operator int(); // 288
				ResourceHandleToNonConstData<InfoForResourceTypeCModel>(const CWeakHandle<InfoForResourceTypeCModel>& hResource); // 919
			}
		}
	}
} /* size: 442, variables: 1 */

// <0017218D> meshsystem/meshsystem.cpp:936
// function calls: 25
void CMeshSystem::CMeshSystem()
{
	IAppSystem::IAppSystem(); // 208
	IMeshSystem::IMeshSystem(); // 120
	CBaseAppSystem<IMeshSystem>::CBaseAppSystem(); // 171
	CTier0AppSystem<IMeshSystem, 0>::CTier0AppSystem(); // 225
	CTier1AppSystem<IMeshSystem, 0>::CTier1AppSystem(); // 48
	CUtlMemory<ResourceManifestDesc_t::ValidateGrowSize(); // 475
	CUtlMemory<ResourceManifestDesc_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ResourceManifestDesc_t::ResetDbgInfo(); // 530
	CUtlVectorBase<ResourceManifestDesc_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ResourceManifestDesc_t::CUtlVector(); // 48
	CTier2AppSystem<IMeshSystem, 0>::CTier2AppSystem(); // 18
	CTier3AppSystem<IMeshSystem, 0>::CTier3AppSystem(); // 936
	CTypesafeIntrospectedToKV3TypeManager<1818520950, PermModelData_t>::CTypesafeIntrospectedToKV3TypeManager(); // 632
	IToolsResourceListener::IToolsResourceListener(); // 632
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCModel>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCModel>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCModel>, CUtlMemory<CStrongHandleCopyable<InfoForResourceTy this); // 530
	CUtlVectorBase(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCModel>, CUtlMemory<CStrongHandleCopyable<InfoForResourceTy this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCModel>, CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCM this); // 632
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>, CUtlMemory<CStrongHandleCopyable<InfoForR this); // 530
	CUtlVectorBase(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>, CUtlMemory<CStrongHandleCopyable<InfoForR this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>, CUtlMemory<CStrongHandleCopyable<InfoForResou this); // 632
	CModelTypeManager::CModelTypeManager(); // 936
} /* size: 218, inline expansions: 25 (354 bytes) */

// <00172174> meshsystem/meshsystem.cpp:936
void CMeshSystem::CMeshSystem()
{
} /* size: 0 */

// <001719AC> meshsystem/meshsystem.cpp:940
// variables: 2
// function calls: 42
void CMeshSystem::~CMeshSystem()
{
	{
		int i; // 1721
		CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>, CUtlMemory<CStrongHandleCopyable<InfoForR this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeIAnimationGraph>::~CStrongHandle(); // 211
		CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>::~CStrongHandleCopyable(); // 1526
		Destruct<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph> >(CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>, CUtlMemory<CStrongHandleCopyable<InfoForR this); // 1798
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>, int>::Purge(); // 903
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>, CUtlMemory<CStrongHandleCopyable<InfoForR this); // 560
	ValidateAlignment<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph> >(void); // 508
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>, int>::Purge(); // 510
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>, CUtlMemory<CStrongHandleCopyable<InfoForR this); // 410
	~CUtlVector(const CUtlVector<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>, CUtlMemory<CStrongHandleCopyable<InfoForResou this); // 20
	{
		int i; // 1721
		CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCModel>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCModel>, CUtlMemory<CStrongHandleCopyable<InfoForResourceTy this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCModel>::~CStrongHandle(); // 211
		CStrongHandleCopyable<InfoForResourceTypeCModel>::~CStrongHandleCopyable(); // 1526
		Destruct<CStrongHandleCopyable<InfoForResourceTypeCModel> >(CStrongHandleCopyable<InfoForResourceTypeCModel>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCModel>, CUtlMemory<CStrongHandleCopyable<InfoForResourceTy this); // 1798
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCModel>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCModel>, int>::Purge(); // 903
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCModel>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCModel>, CUtlMemory<CStrongHandleCopyable<InfoForResourceTy this); // 560
	ValidateAlignment<CStrongHandleCopyable<InfoForResourceTypeCModel> >(void); // 508
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCModel>, int>::Purge(); // 510
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCModel>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCModel>, CUtlMemory<CStrongHandleCopyable<InfoForResourceTy this); // 410
	~CUtlVector(const CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCModel>, CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCM this); // 20
	CBaseIntrospectedToKV3TypeManager::~CBaseIntrospectedToKV3TypeManager(); // 113
	CTypesafeIntrospectedToKV3TypeManager<1818520950, PermModelData_t>::~CTypesafeIntrospectedToKV3TypeManager(); // 20
	CModelTypeManager::~CModelTypeManager(); // 942
	CUtlMemory<ResourceManifestDesc_t::IsExternallyAllocated(); // 905
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 903
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 1799
	CUtlVectorBase<ResourceManifestDesc_t::RemoveAll(); // 1798
	CUtlVectorBase<ResourceManifestDesc_t::Purge(); // 560
	CUtlVectorBase<ResourceManifestDesc_t::~CUtlVectorBase(); // 410
	CUtlVector<ResourceManifestDesc_t::~CUtlVector(); // 42
	CTier2AppSystem<IMeshSystem, 0>::~CTier2AppSystem(); // 18
	CTier3AppSystem<IMeshSystem, 0>::~CTier3AppSystem(); // 942
} /* size: 347, inline expansions: 32 (1400 bytes) */

// <00171945> meshsystem/meshsystem.cpp:940
void CMeshSystem::~CMeshSystem()
{
} /* size: 36 */

// <001717A8> meshsystem/meshsystem.cpp:944
// function calls: 4
void CMeshSystem::ComputeSceneObjectTranslucencyFlags(const CRenderMesh* pRenderMesh, ESceneObjectFlags nFlags)
{
	CMeshSystem::GetMeshTranslucencyType(
				const CRenderMesh* pRenderMesh);  // 946
	operator|=(ESceneObjectFlags& a,
			ESceneObjectFlags b);  // 967
	CMeshSystem::ComputeSceneObjectTranslucencyFlags(
						RenderMeshTranslucencyType_t nType,
						ESceneObjectFlags nFlags);  // 949
	CMeshSystem::ComputeSceneObjectTranslucencyFlags(
						RenderMeshTranslucencyType_t nType,
						ESceneObjectFlags nFlags);  // 946
} /* size: 202, inline expansions: 4 (146 bytes) */

// <0018CA82> meshsystem/meshsystem.cpp:949
// function calls: 3
void CMeshSystem::ComputeSceneObjectTranslucencyFlags(RenderMeshTranslucencyType_t nType, ESceneObjectFlags nFlags)
{
	operator|=(ESceneObjectFlags& a,
			ESceneObjectFlags b);  // 972
	operator|=(ESceneObjectFlags& a,
			ESceneObjectFlags b);  // 967
	CMeshSystem::ComputeSceneObjectTranslucencyFlags(
						RenderMeshTranslucencyType_t nType,
						ESceneObjectFlags nFlags);  // 949
} /* size: 98, inline expansions: 3 (77 bytes) */

// <00171775> meshsystem/meshsystem.cpp:949
void CMeshSystem::ComputeSceneObjectTranslucencyFlags(RenderMeshTranslucencyType_t nType, ESceneObjectFlags nFlags)
{
} /* size: 0 */

