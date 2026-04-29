
//
// worldrenderer/worldrenderermgr.cpp
//
//	referenced by: libengine2.so
//
//	functions: 82
//

// <00F3C5CA> worldrenderer/worldrenderermgr.cpp:41
void* __CreateCWorldRendererMgrIWorldRendererMgr_interface(void)
{
} /* size: 12 */

// <00F3C434> worldrenderer/worldrenderermgr.cpp:47
// function calls: 6
void CSingleWorldRep::CSingleWorldRep()
{
	IWorldReference::IWorldReference(); // 60
	CUtlString::CUtlString(); // 60
	CUtlString::CUtlString(); // 60
	CStrongHandle<InfoForResourceTypeWorld_t>::CStrongHandle(); // 60
	CStrongHandle<InfoForResourceTypeCVoxelVisibility>::CStrongHandle(); // 60
	CUtlStringToken::CUtlStringToken(); // 60
} /* size: 0, inline expansions: 6 (0 bytes) */

// <00F3C41B> worldrenderer/worldrenderermgr.cpp:47
void CSingleWorldRep::CSingleWorldRep()
{
} /* size: 0 */

// <00F3C0CF> worldrenderer/worldrenderermgr.cpp:64
// variables: 2
// function calls: 13
void CSingleWorldRep::CSingleWorldRep(const CreateWorldInfo_t& info)
{
	{
		CPathBufferString strBuf; // 87
	}
	IWorldReference::IWorldReference(); // 81
	CUtlString::CUtlString(
			const char* pString);  // 79
	CUtlString::CUtlString(
			const char* pString);  // 80
	CStrongHandle<InfoForResourceTypeWorld_t>::CStrongHandle(); // 81
	CStrongHandle<InfoForResourceTypeCVoxelVisibility>::CStrongHandle(); // 81
	{
		CPathBufferString strBuf; // 87
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 87
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 89
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 90
	}
} /* size: 424, inline expansions: 5 (18 bytes) */

// <00F3C09C> worldrenderer/worldrenderermgr.cpp:64
// variable: 1
void CSingleWorldRep::CSingleWorldRep(const CreateWorldInfo_t& info)
{
	{
		CPathBufferString strBuf; // 87
	}
} /* size: 0 */

// <00F3BF6F> worldrenderer/worldrenderermgr.cpp:93
// function calls: 4
void CSingleWorldRep::~CSingleWorldRep()
{
	CStrongHandle<InfoForResourceTypeCVoxelVisibility>::~CStrongHandle(); // 101
	CStrongHandle<InfoForResourceTypeWorld_t>::~CStrongHandle(); // 101
	CUtlString::~CUtlString(); // 101
	CUtlString::~CUtlString(); // 101
} /* size: 142, inline expansions: 4 (37 bytes) */

// <00F3BF56> worldrenderer/worldrenderermgr.cpp:93
void CSingleWorldRep::~CSingleWorldRep()
{
} /* size: 0 */

// <00F3BF0C> worldrenderer/worldrenderermgr.cpp:103
void CSingleWorldRep::Release()
{
} /* size: 27 */

// <00F3BEDE> worldrenderer/worldrenderermgr.cpp:109
void CSingleWorldRep::GetSceneWorld()
{
} /* size: 9 */

// <00F43EBF> worldrenderer/worldrenderermgr.cpp:114
void CSingleWorldRep::GetWorldGroupId()
{
} /* size: 8 */

// <00F3BE47> worldrenderer/worldrenderermgr.cpp:119
void CSingleWorldRep::PrecacheAllWorldNodes(WorldNodeFlags_t nCacheFlags, bool bBlockUntilFinished)
{
} /* size: 33 */

// <00F3BDCE> worldrenderer/worldrenderermgr.cpp:127
void CSingleWorldRep::GetCompileFingerprint(uint64* pOutTime, uint64* pOutFingerprint)
{
} /* size: 27 */

// <00F43EEA> worldrenderer/worldrenderermgr.cpp:135
void CSingleWorldRep::IsWorldLoaded()
{
} /* size: 53 */

// <00F3BD72> worldrenderer/worldrenderermgr.cpp:146
void CSingleWorldRep::ForceBlockingLoad()
{
} /* size: 33 */

// <00F44481> worldrenderer/worldrenderermgr.cpp:155
// function calls: 6
void CSingleWorldRep::IsErrorWorld()
{
	CWeakHandle<InfoForResourceTypeWorld_t>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 161
	CStrongHandle<InfoForResourceTypeWorld_t>::operator==(
			const CWeakHandle<InfoForResourceTypeWorld_t>& hResource);  // 161
	ResourceIsError(ResourceHandle_t hResource); // 164
	CSingleWorldRep::IsErrorWorld(); // 155
} /* size: 52, inline expansions: 6 (43 bytes) */

// <00F3BD59> worldrenderer/worldrenderermgr.cpp:155
void CSingleWorldRep::IsErrorWorld()
{
} /* size: 0 */

// <00F3BA5D> worldrenderer/worldrenderermgr.cpp:170
// variables: 2
// function calls: 10
void CSingleWorldRep::GetWorldBounds(Vector& vMin, Vector& vMax)
{
	const char   __FUNCTION__; // 52530
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 174
	}
	CSingleWorldRep::IsWorldLoaded(); // 172
	CWeakHandle<InfoForResourceTypeWorld_t>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 161
	CStrongHandle<InfoForResourceTypeWorld_t>::operator==(
			const CWeakHandle<InfoForResourceTypeWorld_t>& hResource);  // 161
	ResourceIsError(ResourceHandle_t hResource); // 164
	CSingleWorldRep::IsErrorWorld(); // 155
	CSingleWorldRep::IsErrorWorld(); // 172
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 179
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 180
} /* size: 0, variables: 1, inline expansions: 10 (150 bytes) */

// <00F3BA27> worldrenderer/worldrenderermgr.cpp:185
void CSingleWorldRep::HasWorldGeometry()
{
} /* size: 35 */

// <00F3B9F9> worldrenderer/worldrenderermgr.cpp:193
void CSingleWorldRep::IsMarkedForDeletion()
{
} /* size: 18 */

// <00F3B97D> worldrenderer/worldrenderermgr.cpp:198
void CSingleWorldRep::SetWorldLayerVisibility(const char* pLayerName, bool bVisible)
{
} /* size: 27 */

// <00F3B94F> worldrenderer/worldrenderermgr.cpp:206
void CSingleWorldRep::GetVoxelVisibility()
{
} /* size: 9 */

// <00F3B921> worldrenderer/worldrenderermgr.cpp:211
void CSingleWorldRep::GetGeometryWorld()
{
} /* size: 9 */

// <00F39B77> worldrenderer/worldrenderermgr.cpp:218
// variables: 22
// function calls: 100
void CVoxelVisibilityTypeManager::AllocateResource(ResourceHandle_t hResource, const ResourceId_t nId, const ResourceFileHeader_t* pHeader, IRD_RegisterResourceDataUtils* pUtils)
{
	unique_ptr<CVoxelVisibility, std::default_delete<CVoxelVisibility> > pVoxelVis; // 220
	const char   __FUNCTION__; // 52584
	{
		float flBoundExt; // 225
		uint32 nDWORDSPerCluster; // 230
		CVisBlockOffsetBuild build; // 233
		Vector::operator=(
				const Vector& vOther);  // 226
		CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 888
		CUtlMemory<unsigned char, int>::EnsureCapacity(
				int num);  // 241
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 226
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1431
		Vector::operator-(); // 226
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 227
		Vector::operator=(
				const Vector& vOther);  // 227
		memset(void* __dest,
			int __ch,
			size_t __len);  // 55
		V_memset(void* dest,
			int fill,
			uint count);  // 258
		CVoxelVisNode::InitAsLeaf(
				uint nRegion);  // 249
		CUtlMemory<unsigned char, int>::Base(); // 257
	}
	{
		ResourceHeaderBlockInfo_t kv3BlockInfo; // 266
		CUtlBuffer diskDataBuffer; // 275
		CKeyValues3Context diskKV3Data; // 276
		CUtlString errorMsg; // 277
		CKV3TransferLoadContext loadCtx; // 286
		ResourceBlockId_t vsvsBlockId; // 297
		ResourceHeaderBlockInfo_t vxvsBlockInfo; // 299
		int nPVSDataSizeBytes; // 309
		byte* pTest; // 329
		{
			CResourceNameGetter resourceName; // 269
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 184
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 180
			ResourceGetName(ResourceHandle_t hResource,
					CResourceName* pTarget);  // 196
			CResourceNameGetter::CResourceNameGetter(
						ResourceHandle_t hResource);  // 269
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 273
			CResourceName::Get(); // 270
		}
		{
			CResourceNameGetter resourceName; // 280
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 184
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 180
			ResourceGetName(ResourceHandle_t hResource,
					CResourceName* pTarget);  // 196
			CResourceNameGetter::CResourceNameGetter(
						ResourceHandle_t hResource);  // 280
			CUtlString::Get(); // 281
			CResourceName::Get(); // 281
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 284
		}
		{
			CResourceNameGetter resourceName; // 290
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 184
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 180
			ResourceGetName(ResourceHandle_t hResource,
					CResourceName* pTarget);  // 196
			CResourceNameGetter::CResourceNameGetter(
						ResourceHandle_t hResource);  // 290
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 89
			CKV3TransferContextBase::GetErrorMessage(); // 291
			CResourceName::Get(); // 291
		}
		{
			CResourceNameGetter resourceName; // 302
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 306
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 184
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 180
			ResourceGetName(ResourceHandle_t hResource,
					CResourceName* pTarget);  // 196
			CResourceNameGetter::CResourceNameGetter(
						ResourceHandle_t hResource);  // 302
			CResourceName::Get(); // 303
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 310
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 330
		}
		CUtlString::CUtlString(); // 277
		CUtlStack<const KeyValues3::Count(); // 413
		CKV3TransferLoadContext::LoadClassInstance<CVoxelVisibility>(
							CVoxelVisibility* pClassInstance,
							const KeyValues3* pNestedValue);  // 287
		CUtlString::~CUtlString(); // 334
		ValidateAlignment<unsigned char>(void); // 508
		CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned char, int>::Purge(); // 903
		CUtlMemory<unsigned char, int>::Purge(); // 510
		CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
		CUtlBuffer::~CUtlBuffer(); // 334
		CUtlMemory<unsigned char, int>::IsGrowable(); // 881
		CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 888
		CUtlMemory<unsigned char, int>::EnsureCapacity(
				int num);  // 312
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 313
		CUtlMemory<unsigned char, int>::Base(); // 316
		CUtlString::~CUtlString(); // 334
		ValidateAlignment<unsigned char>(void); // 508
		CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned char, int>::Purge(); // 903
		CUtlMemory<unsigned char, int>::Purge(); // 510
		CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
		CUtlBuffer::~CUtlBuffer(); // 334
	}
	{
		CResourceNameGetter resourceName; // 337
	}
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 173
	Vector::Vector(); // 173
	Vector::Vector(); // 173
	CVoxelVisibility::CVoxelVisibility(); // 220
	_Head_base<1, std::default_delete<CVoxelVisibility>, true>::_Head_base(); // 561
	_Tuple_impl<1, std::default_delete<CVoxelVisibility> >::_Tuple_impl(); // 303
	_Head_base<0, CVoxelVisibility::_Head_base(); // 303
	_Tuple_impl<0, CVoxelVisibility::_Tuple_impl(); // 966
	tuple<CVoxelVisibility::tuple(); // 169
	__uniq_ptr_impl<CVoxelVisibility, std::default_delete<CVoxelVisibility> >::_M_ptr(); // 169
	__uniq_ptr_impl<CVoxelVisibility, std::default_delete<CVoxelVisibility> >::__uniq_ptr_impl(
			pointer __p);  // 234
	__uniq_ptr_data<CVoxelVisibility, std::default_delete<CVoxelVisibility>, true, true>::__uniq_ptr_data(
			pointer);  // 311
	unique_ptr<CVoxelVisibility, std::default_delete<CVoxelVisibility> >::unique_ptr<>(
			pointer __p);  // 220
	{
		CVoxelVisibility *& __ptr; // 396
		__uniq_ptr_impl<CVoxelVisibility, std::default_delete<CVoxelVisibility> >::_M_ptr(); // 396
		unique_ptr<CVoxelVisibility, std::default_delete<CVoxelVisibility> >::get_deleter(); // 398
		ValidateAlignment<unsigned char>(void); // 508
		CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned char, int>::Purge(); // 903
		CUtlMemory<unsigned char, int>::Purge(); // 510
		CUtlMemory<unsigned char, int>::~CUtlMemory(); // 173
		CVoxelVisibility::~CVoxelVisibility(); // 92
		default_delete<CVoxelVisibility>::operator(
				CVoxelVisibility* __ptr);  // 398
	}
	unique_ptr<CVoxelVisibility, std::default_delete<CVoxelVisibility> >::~unique_ptr(); // 343
} /* size: 0, variables: 2, inline expansions: 15 (124 bytes) */

// <00F39992> worldrenderer/worldrenderermgr.cpp:346
// variable: 1
// function calls: 6
void CVoxelVisibilityTypeManager::DeallocateResource(void* pResourceData, IResourceDeallocatorUtils* pDealloc)
{
	CVoxelVisibility* pVis; // 348
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 173
	CVoxelVisibility::~CVoxelVisibility(); // 349
} /* size: 89, variables: 1, inline expansions: 6 (108 bytes) */

// <00F3966C> worldrenderer/worldrenderermgr.cpp:353
// variables: 3
// function calls: 9
void CWorldRendererMgr::Init()
{
	InitReturnVal_t nRetVal; // 355
	const char   __FUNCTION__; // 52275
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 361
	}
	CTier0AppSystem<IWorldRendererMgr, 0>::Init(); // 71
	CTier2AppSystem<IWorldRendererMgr, 0>::Init(); // 355
	ResourceTypeName(void); // 673
	IResourceSystem::InstallTypeManager<431316170614>(
					IResourceTypeManager* pTypeManager,
					const char* pErrorManifestName);  // 365
	ResourceTypeName(void); // 673
	IResourceSystem::InstallTypeManager<1936291446>(
					IResourceTypeManager* pTypeManager,
					const char* pErrorManifestName);  // 366
	ResourceTypeName(void); // 673
	IResourceSystem::InstallTypeManager<495874631030>(
					IResourceTypeManager* pTypeManager,
					const char* pErrorManifestName);  // 367
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 369
} /* size: 0, variables: 2, inline expansions: 9 (138 bytes) */

// <00F3954B> worldrenderer/worldrenderermgr.cpp:375
// variables: 2
// function calls: 2
void CWorldRendererMgr::Shutdown()
{
	const char   __FUNCTION__; // 52378
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 380
	}
	CTier0AppSystem<IWorldRendererMgr, 0>::Shutdown(); // 85
	CTier2AppSystem<IWorldRendererMgr, 0>::Shutdown(); // 387
} /* size: 0, variables: 1, inline expansions: 2 (52 bytes) */

// <00F3943F> worldrenderer/worldrenderermgr.cpp:391
// function calls: 2
void CWorldRendererMgr::Connect(CreateInterfaceFn factory)
{
	CTier0AppSystem<IWorldRendererMgr, 0>::Connect(
		CreateInterfaceFn factory);  // 54
	CTier2AppSystem<IWorldRendererMgr, 0>::Connect(
		CreateInterfaceFn factory);  // 393
} /* size: 100, inline expansions: 2 (54 bytes) */

// <00F392FC> worldrenderer/worldrenderermgr.cpp:400
// function calls: 5
void CWorldRendererMgr::Disconnect()
{
	CUtlVectorBase<ResourceManifestDesc_t::Count(); // 90
	CUtlMemory<ResourceManifestDesc_t::Base(); // 112
	CUtlVectorBase<ResourceManifestDesc_t::Base(); // 90
	CTier0AppSystem<IWorldRendererMgr, 0>::Disconnect(); // 96
	CTier2AppSystem<IWorldRendererMgr, 0>::Disconnect(); // 402
} /* size: 68, inline expansions: 5 (52 bytes) */

// <00F392CE> worldrenderer/worldrenderermgr.cpp:417
void CWorldRendererMgr::GetDependencies()
{
} /* size: 12 */

// <00F37CDD> worldrenderer/worldrenderermgr.cpp:426
// variables: 9
// function calls: 87
void CWorldRendererMgr::CreateWorld(const CreateWorldInfo_t& info)
{
	CUtlString vpkFolder; // 429
	CUtlString localWorldName; // 434
	CUtlString vpkPath; // 437
	CreateWorldInfo_t localInfo; // 439
	CSingleWorldRep* pSingleWorldRep; // 443
	bool bIsEmptyWorld; // 445
	const char   __FUNCTION__; // 52454
	CUtlString sWorldManifest; // 482
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 473
		CUtlString::Get(); // 99
		CUtlString::String(); // 473
	}
	CUtlString::CUtlString(
			const char* pString);  // 429
	CUtlString::~CUtlString(); // 429
	CUtlString::CUtlString(
			const char* pString);  // 434
	CUtlString::~CUtlString(); // 434
	CUtlString::Get(); // 437
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 80
	CFmtStrN<256>::Get(); // 437
	CUtlString::CUtlString(
			const char* pString);  // 437
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 437
	CUtlString::Get(); // 440
	V_strcmp(const char* s1,
		const char* s2);  // 445
	CUtlString::Get(); // 441
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 460
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 83
	CFmtStrN<256>::operator char const*(); // 464
	CUtlString::CUtlString(
			const char* pString);  // 464
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 464
	CUtlString::~CUtlString(); // 464
	CUtlString::~CUtlString(); // 464
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 464
	CUtlString::Get(); // 465
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 83
	CFmtStrN<256>::operator char const*(); // 465
	CUtlString::operator=(
			const char* src);  // 465
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 470
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 470
	CUtlString::Get(); // 99
	CUtlString::String(); // 472
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 465
	CWorldRendererMgr::CreateNewWorldRep(
				const CreateWorldInfo_t& info);  // 478
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 479
	CUtlString::Get(); // 482
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 80
	CFmtStrN<256>::Get(); // 482
	CUtlString::CUtlString(
			const char* pString);  // 482
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 482
	CUtlString::Get(); // 483
	CUtlString::~CUtlString(); // 498
	CUtlString::~CUtlString(); // 498
	CUtlString::~CUtlString(); // 498
	CUtlString::~CUtlString(); // 498
	CWorldRendererMgr::CreateNewWorldRep(
				const CreateWorldInfo_t& info);  // 450
	CUtlMemory<CSingleWorldRep::NumAllocated(); // 782
	CUtlMemory<CSingleWorldRep::Base(); // 112
	CUtlVectorBase<CSingleWorldRep::Base(); // 368
	CUtlVectorBase<CSingleWorldRep::ResetDbgInfo(); // 824
	CUtlVectorBase<CSingleWorldRep::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CSingleWorldRep::GrowVector(
			int num);  // 1223
	CUtlMemory<CSingleWorldRep::operator[](
			int i);  // 602
	CUtlVectorBase<CSingleWorldRep::Element(
		int i);  // 1097
	CUtlMemory<CSingleWorldRep::operator[](
			int i);  // 602
	CUtlVectorBase<CSingleWorldRep::Element(
		int i);  // 1097
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1097
	CUtlVectorBase<CSingleWorldRep::ShiftElementsRight(
				int elem,
				int num);  // 1224
	CUtlMemory<CSingleWorldRep::operator[](
			int i);  // 602
	CUtlVectorBase<CSingleWorldRep::Element(
		int i);  // 1225
	CopyConstruct<CSingleWorldRep*>(CSingleWorldRep** pMemory,
					CSingleWorldRep* const& src);  // 1225
	CUtlVectorBase<CSingleWorldRep::InsertBefore(
			int elem,
			CSingleWorldRep* const& src);  // 1187
	CUtlVectorBase<CSingleWorldRep::AddToHead(
			CSingleWorldRep* const& src);  // 489
} /* size: 0, variables: 8, inline expansions: 85 (2122 bytes) */

// <00F3774F> worldrenderer/worldrenderermgr.cpp:500
// variables: 5
// function calls: 18
void CWorldRendererMgr::DestroyWorldForReal(CSingleWorldRep* pWorldRep)
{
	const char   __FUNCTION__; // 52660
	{
		CUtlString sMountName; // 518
		CUtlString::Get(); // 354
		CUtlString::CUtlString(
				const CUtlString& string);  // 518
		CUtlString::Get(); // 99
		CUtlString::String(); // 519
		CUtlString::~CUtlString(); // 520
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 532
		CUtlString::Get(); // 532
	}
	{
		int i; // 1531
		CUtlVectorBase<CSingleWorldRep::Count(); // 1531
		CUtlMemory<CSingleWorldRep::operator[](
				int i);  // 609
		CUtlVectorBase<CSingleWorldRep::Element(
			int i);  // 1533
	}
	CUtlVectorBase<CSingleWorldRep::Find(
		CSingleWorldRep* const& src);  // 1617
	CUtlVectorBase<CSingleWorldRep::Remove(
		int elem);  // 1620
	CUtlVectorBase<CSingleWorldRep::FindAndRemove(
			CSingleWorldRep* const& src);  // 523
	{
		int i; // 1531
		CUtlVectorBase<CSingleWorldRep::Count(); // 1531
		CUtlMemory<CSingleWorldRep::operator[](
				int i);  // 609
		CUtlVectorBase<CSingleWorldRep::Element(
			int i);  // 1533
	}
	CUtlVectorBase<CSingleWorldRep::Find(
		CSingleWorldRep* const& src);  // 1617
	CUtlVectorBase<CSingleWorldRep::Remove(
		int elem);  // 1620
	CUtlVectorBase<CSingleWorldRep::FindAndRemove(
			CSingleWorldRep* const& src);  // 524
} /* size: 0, variables: 1, inline expansions: 6 (238 bytes) */

// <00F374A5> worldrenderer/worldrenderermgr.cpp:538
// function calls: 10
void CWorldRendererMgr::DestroyWorld(CSingleWorldRep* pWorldRep)
{
	CSingleWorldRep::IsWorldLoaded(); // 540
	CUtlMemory<CSingleWorldRep::NumAllocated(); // 1196
	CUtlMemory<CSingleWorldRep::operator[](
			int i);  // 602
	CUtlVectorBase<CSingleWorldRep::Element(
		int i);  // 1201
	CopyConstruct<CSingleWorldRep*>(CSingleWorldRep** pMemory,
					CSingleWorldRep* const& src);  // 1201
	CUtlMemory<CSingleWorldRep::Base(); // 112
	CUtlVectorBase<CSingleWorldRep::Base(); // 368
	CUtlVectorBase<CSingleWorldRep::ResetDbgInfo(); // 824
	CUtlVectorBase<CSingleWorldRep::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CSingleWorldRep::AddToTail(
			CSingleWorldRep* const& src);  // 548
} /* size: 230, inline expansions: 10 (218 bytes) */

// <00F37446> worldrenderer/worldrenderermgr.cpp:553
// function call: 1
void CWorldRendererMgr::GetWorldCount()
{
	CUtlVectorBase<CSingleWorldRep::Count(); // 555
} /* size: 11, inline expansions: 1 (0 bytes) */

// <00F373E7> worldrenderer/worldrenderermgr.cpp:558
// function call: 1
void CWorldRendererMgr::GetPendingWorldCount()
{
	CUtlVectorBase<CSingleWorldRep::Count(); // 560
} /* size: 11, inline expansions: 1 (0 bytes) */

// <00F37388> worldrenderer/worldrenderermgr.cpp:563
// function call: 1
void CWorldRendererMgr::GetDeletedWorldCount()
{
	CUtlVectorBase<CSingleWorldRep::Count(); // 565
} /* size: 11, inline expansions: 1 (0 bytes) */

// <00F372B1> worldrenderer/worldrenderermgr.cpp:568
// function calls: 3
void CWorldRendererMgr::GetWorldReference(int nWorld)
{
	CUtlVectorBase<CSingleWorldRep::Count(); // 570
	CUtlMemory<CSingleWorldRep::operator[](
			int i);  // 595
	CUtlVectorBase<CSingleWorldRep::operator[](
			int i);  // 572
} /* size: 35, inline expansions: 3 (6 bytes) */

// <00F37139> worldrenderer/worldrenderermgr.cpp:575
// variables: 2
// function calls: 5
void CWorldRendererMgr::GetWorldName(int nWorld)
{
	const char   __FUNCTION__; // 52481
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 577
	}
	CUtlVectorBase<CSingleWorldRep::Count(); // 577
	CUtlMemory<CSingleWorldRep::operator[](
			int i);  // 595
	CUtlVectorBase<CSingleWorldRep::operator[](
			int i);  // 578
	CUtlString::Get(); // 99
	CUtlString::String(); // 578
} /* size: 0, variables: 1, inline expansions: 5 (50 bytes) */

// <00F36E75> worldrenderer/worldrenderermgr.cpp:581
// variables: 3
// function calls: 8
void CWorldRendererMgr::FindWorld(WorldGroupId_t worldGroupId, const char* pWorldName)
{
	int nWorld; // 583
	CUtlVectorBase<CSingleWorldRep::Count(); // 641
	{
		int w; // 642
		{
			CSingleWorldRep* pWorldRep; // 644
			CUtlMemory<CSingleWorldRep::operator[](
					int i);  // 595
			CUtlVectorBase<CSingleWorldRep::operator[](
					int i);  // 644
			CUtlStringToken::operator==(
					const CUtlStringToken& other);  // 645
			CUtlString::Get(); // 645
		}
	}
	CWorldRendererMgr::FindLoadedWorldIndex(
				WorldGroupId_t worldGroupId,
				const char* pWorldName);  // 583
	CUtlMemory<CSingleWorldRep::operator[](
			int i);  // 595
	CUtlVectorBase<CSingleWorldRep::operator[](
			int i);  // 585
} /* size: 220, variables: 1, inline expansions: 4 (109 bytes) */

// <00F3699F> worldrenderer/worldrenderermgr.cpp:590
// variables: 4
// function calls: 15
void CWorldRendererMgr::GetBoundsForWorld(WorldGroupId_t worldGroupId, Vector& vBoundsMin, Vector& vBoundsMax)
{
	bool bFound; // 592
	{
		int i; // 596
		{
			Vector vMin; // 600
			Vector vMax; // 600
			Vector::Vector(); // 600
			Vector::Vector(); // 600
			CUtlMemory<CSingleWorldRep::operator[](
					int i);  // 588
			CUtlVectorBase<CSingleWorldRep::operator[](
					int i);  // 601
			VectorMin(const Vector& a,
					const Vector& b,
					Vector& result);  // 603
			VectorMax(const Vector& a,
					const Vector& b,
					Vector& result);  // 604
		}
		CUtlVectorBase<CSingleWorldRep::Count(); // 596
		CUtlStringToken::operator==(
				const CUtlStringToken& other);  // 598
		CUtlMemory<CSingleWorldRep::operator[](
				int i);  // 588
		CUtlVectorBase<CSingleWorldRep::operator[](
				int i);  // 598
		CSingleWorldRep::GetWorldGroupId(); // 598
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 593
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 594
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 612
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 613
} /* size: 456, variables: 1, inline expansions: 4 (69 bytes) */

// <00F3675B> worldrenderer/worldrenderermgr.cpp:617
// variables: 2
// function calls: 7
void CWorldRendererMgr::GetWorldNodeSceneObjects(WorldGroupId_t worldGroupId, CUtlVector<CSceneObject*, CUtlMemory<CSceneObject*, int> >* pOutSceneObjects)
{
	{
		int i; // 619
		{
			CWorld* pWorld; // 623
			CUtlMemory<CSingleWorldRep::operator[](
					int i);  // 588
			CUtlVectorBase<CSingleWorldRep::operator[](
					int i);  // 623
		}
		CUtlVectorBase<CSingleWorldRep::Count(); // 619
		CUtlMemory<CSingleWorldRep::operator[](
				int i);  // 588
		CUtlVectorBase<CSingleWorldRep::operator[](
				int i);  // 621
		CSingleWorldRep::GetWorldGroupId(); // 621
		CUtlStringToken::operator==(
				const CUtlStringToken& other);  // 621
	}
} /* size: 180 */

// <00F36684> worldrenderer/worldrenderermgr.cpp:632
// function calls: 3
void CWorldRendererMgr::GetWorldVisibility(int nWorld)
{
	CUtlVectorBase<CSingleWorldRep::Count(); // 634
	CUtlMemory<CSingleWorldRep::operator[](
			int i);  // 588
	CUtlVectorBase<CSingleWorldRep::operator[](
			int i);  // 636
} /* size: 43, inline expansions: 3 (6 bytes) */

// <00F442D1> worldrenderer/worldrenderermgr.cpp:639
// variables: 3
// function calls: 5
void CWorldRendererMgr::FindLoadedWorldIndex(WorldGroupId_t worldGroupId, const char* pWorldName)
{
	int nWorlds; // 641
	CUtlVectorBase<CSingleWorldRep::Count(); // 641
	{
		int w; // 642
		{
			CSingleWorldRep* pWorldRep; // 644
			CUtlMemory<CSingleWorldRep::operator[](
					int i);  // 595
			CUtlVectorBase<CSingleWorldRep::operator[](
					int i);  // 644
			CUtlStringToken::operator==(
					const CUtlStringToken& other);  // 645
			CUtlString::Get(); // 645
		}
	}
} /* size: 164, variables: 1, inline expansions: 1 (7 bytes) */

// <00F36614> worldrenderer/worldrenderermgr.cpp:639
// variables: 3
void CWorldRendererMgr::FindLoadedWorldIndex(WorldGroupId_t worldGroupId, const char* pWorldName)
{
	int nWorlds; // 641
	{
		int w; // 642
		{
			CSingleWorldRep* pWorldRep; // 644
		}
	}
} /* size: 0, variables: 1 */

// <00F364E9> worldrenderer/worldrenderermgr.cpp:651
// variables: 2
// function calls: 3
void CWorldRendererMgr::GetGeometryWorld(int nWorld)
{
	const char   __FUNCTION__; // 52584
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 653
	}
	CUtlVectorBase<CSingleWorldRep::Count(); // 653
	CUtlMemory<CSingleWorldRep::operator[](
			int i);  // 588
	CUtlVectorBase<CSingleWorldRep::operator[](
			int i);  // 654
} /* size: 0, variables: 1, inline expansions: 3 (6 bytes) */

// <00F35DE8> worldrenderer/worldrenderermgr.cpp:663
// variables: 14
// function calls: 16
void CWorldRendererMgr::UpdateObjectsForRendering(WorldGroupId_t worldGroupId, const Vector& vEye, float flLODScale, float flMaxVisibleDistance, const CFrustum* p3DSkyboxFrustum, bool bMainViewIsSkybox, float flTimeStep)
{
	const char   __FUNCTION__; // 52807
	ESceneObjectFlags nMainTraversalFlags; // 671
	WorldNodeFlags_t nSkipFlags; // 673
	Vector vOverlap; // 675
	WorldTraversalId_t traversalId; // 677
	int nWorlds; // 679
	Vector* pMinBounds; // 680
	Vector* pMaxBounds; // 681
	int nAccumFlags; // 682
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 666
	}
	{
		int w; // 683
		{
			CSingleWorldRep* pWorldRep; // 685
			{
				Vector vWorldMin; // 708
				Vector vWorldMax; // 709
				ConVar::GetInt(); // 351
				ConVar::GetBool(); // 694
				Vector::Vector(); // 708
				Vector::Vector(); // 709
				Vector::operator+=(
						const Vector& v);  // 713
				Vector::operator=(
						const Vector& vOther);  // 723
				Vector::operator-=(
						const Vector& v);  // 714
				Vector::operator=(
						const Vector& vOther);  // 722
				CFrustum::GetCameraPosition(); // 701
			}
			CSingleWorldRep::GetWorldGroupId(); // 687
			CUtlStringToken::operator!=(
					const CUtlStringToken& other);  // 687
			CUtlMemory<CSingleWorldRep::operator[](
					int i);  // 588
			CUtlVectorBase<CSingleWorldRep::operator[](
					int i);  // 685
		}
	}
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 675
	MakeTraversalId(WorldGroupId_t worldGroupId); // 677
	CUtlVectorBase<CSingleWorldRep::Count(); // 679
} /* size: 0, variables: 9, inline expansions: 3 (29 bytes) */

// <00F35D37> worldrenderer/worldrenderermgr.cpp:730
// function calls: 2
void SingleWorldEntityLump_t::~SingleWorldEntityLump_t()
{
	CStrongHandle<InfoForResourceTypeCEntityLump>::~CStrongHandle(); // 731
	CUtlString::~CUtlString(); // 731
} /* size: 0, inline expansions: 2 (0 bytes) */

// <00F35D19> worldrenderer/worldrenderermgr.cpp:730
void SingleWorldEntityLump_t::~SingleWorldEntityLump_t()
{
} /* size: 0 */

// <00F35B83> worldrenderer/worldrenderermgr.cpp:733
// function calls: 6
void SingleWorldEntityLump_t::SingleWorldEntityLump_t(const SingleWorldEntityLump_t& src)
{
	CUtlString::CUtlString(); // 733
	CStrongHandle<InfoForResourceTypeCEntityLump>::CStrongHandle(); // 733
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 735
} /* size: 0, inline expansions: 6 (0 bytes) */

// <00F35B58> worldrenderer/worldrenderermgr.cpp:733
void SingleWorldEntityLump_t::SingleWorldEntityLump_t(const SingleWorldEntityLump_t& src)
{
} /* size: 0 */

// <00F35A3D> worldrenderer/worldrenderermgr.cpp:738
// function calls: 4
void SingleWorldEntityLump_t::operator=(const SingleWorldEntityLump_t& other)
{
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 743
} /* size: 0, inline expansions: 4 (0 bytes) */

// <00F358F7> worldrenderer/worldrenderermgr.cpp:747
// variables: 2
// function calls: 3
void CWorldRendererMgr::GetEntityList(IWorldReference* pWorldRef, const char* pEntityLumpName)
{
	CSingleWorldRep* pWorldRep; // 749
	CWorld* pWorld; // 755
	CUtlVectorBase<CSingleWorldRep::Count(); // 750
	CUtlMemory<CSingleWorldRep::operator[](
			int i);  // 588
	CUtlVectorBase<CSingleWorldRep::operator[](
			int i);  // 751
} /* size: 0, variables: 2, inline expansions: 3 (0 bytes) */

// <00F35844> worldrenderer/worldrenderermgr.cpp:764
// variables: 2
void CWorldRendererMgr::LoadEntityLump(IWorldReference* pWorldRef, const char* pEntityLumpName, EntityLumpLoadType_t nLoadType)
{
	CSingleWorldRep* pWorldRep; // 766
	CWorld* pWorld; // 767
} /* size: 43, variables: 2 */

// <00F357A6> worldrenderer/worldrenderermgr.cpp:779
// variables: 2
void CWorldRendererMgr::IsEntityLumpLoaded(IWorldReference* pWorldRef, const char* pEntityLumpName)
{
	CSingleWorldRep* pWorldRep; // 781
	CWorld* pWorld; // 782
} /* size: 27, variables: 2 */

// <00F35708> worldrenderer/worldrenderermgr.cpp:790
// variables: 2
void CWorldRendererMgr::UnloadEntityLump(IWorldReference* pWorldRef, const char* pEntityLumpName)
{
	CSingleWorldRep* pWorldRep; // 792
	CWorld* pWorld; // 793
} /* size: 25, variables: 2 */

// <00F4599E> worldrenderer/worldrenderermgr.cpp:800
void CWorldRendererMgr::CreateNewWorldRep(const CreateWorldInfo_t& info)
{
} /* size: 0 */

// <00F3524B> worldrenderer/worldrenderermgr.cpp:805
// variables: 3
// function calls: 17
void CWorldRendererMgr::GetSceneWorldsForWorldGroup(WorldGroupId_t nGroupId, CUtlVector<ISceneWorld*, CUtlMemory<ISceneWorld*, int> >& worldsOut)
{
	int nWorlds; // 807
	{
		int w; // 808
		{
			CSingleWorldRep* pWorldRep; // 810
			CUtlMemory<CSingleWorldRep::operator[](
					int i);  // 588
			CUtlVectorBase<CSingleWorldRep::operator[](
					int i);  // 810
			CUtlStringToken::operator==(
					const CUtlStringToken& other);  // 811
			CUtlMemory<ISceneWorld::NumAllocated(); // 1196
			CUtlMemory<ISceneWorld::Base(); // 112
			CUtlVectorBase<ISceneWorld::Base(); // 368
			CUtlVectorBase<ISceneWorld::ResetDbgInfo(); // 824
			CUtlMemory<ISceneWorld::IsGrowable(); // 823
			CUtlMemory<ISceneWorld::IsExternallyAllocated(); // 859
			CUtlMemory<ISceneWorld::IsExternallyAllocated(); // 861
			CUtlMemory<ISceneWorld::Grow(
				int num);  // 806
			CUtlVectorBase<ISceneWorld::GrowMemory(
					int num);  // 1198
			CUtlMemory<ISceneWorld::operator[](
					int i);  // 602
			CUtlVectorBase<ISceneWorld::Element(
				int i);  // 1201
			CopyConstruct<ISceneWorld*>(ISceneWorld** pMemory,
							ISceneWorld* const& src);  // 1201
			CUtlVectorBase<ISceneWorld::AddToTail(
					ISceneWorld* const& src);  // 813
		}
	}
	CUtlVectorBase<CSingleWorldRep::Count(); // 807
} /* size: 401, variables: 1, inline expansions: 1 (10 bytes) */

// <00F34C79> worldrenderer/worldrenderermgr.cpp:818
// variables: 6
// function calls: 19
void CWorldRendererMgr::FindSingleWorld(const char* pWorldName, WorldGroupId_t worldGroupId, bool bCanShareWithDifferentWorldGroups)
{
	{
		int w; // 821
		{
			CSingleWorldRep* pWorldRep; // 823
			CUtlMemory<CSingleWorldRep::operator[](
					int i);  // 588
			CUtlVectorBase<CSingleWorldRep::operator[](
					int i);  // 823
			CUtlString::Get(); // 99
			CUtlString::String(); // 824
			CUtlStringToken::operator==(
					const CUtlStringToken& other);  // 824
			CUtlVectorBase<CSingleWorldRep::Remove(
				int elem);  // 826
		}
		CUtlVectorBase<CSingleWorldRep::Count(); // 821
	}
	{
		int w; // 832
		{
			CSingleWorldRep* pWorldRep; // 834
			CUtlMemory<CSingleWorldRep::operator[](
					int i);  // 588
			CUtlVectorBase<CSingleWorldRep::operator[](
					int i);  // 834
			CUtlString::Get(); // 99
			CUtlString::String(); // 835
			CUtlStringToken::operator==(
					const CUtlStringToken& other);  // 835
		}
		CUtlVectorBase<CSingleWorldRep::Count(); // 832
	}
	{
		int w; // 842
		{
			CSingleWorldRep* pWorldRep; // 844
			CUtlMemory<CSingleWorldRep::operator[](
					int i);  // 588
			CUtlVectorBase<CSingleWorldRep::operator[](
					int i);  // 844
			CUtlString::Get(); // 99
			CUtlString::String(); // 845
			CUtlStringToken::operator==(
					const CUtlStringToken& other);  // 845
		}
		CUtlVectorBase<CSingleWorldRep::Count(); // 842
	}
} /* size: 358 */

// <00F45A05> worldrenderer/worldrenderermgr.cpp:856
// variable: 1
// function calls: 3
void CWorldRendererMgr::FindWindEntry(const ISceneWorld* pWorld)
{
	{
		int i; // 858
		CUtlVectorBase<CWorldRendererMgr::WindEntry_t, CUtlMemory<CWorldRendererMgr::WindEntry_t, int> >::Count(); // 858
		CUtlMemory<CWorldRendererMgr::WindEntry_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CWorldRendererMgr::WindEntry_t, CUtlMemory<CWorldRendererMgr::WindEntry_t, int> >::operator[](
				int i);  // 860
	}
} /* size: 0 */

// <00F34C46> worldrenderer/worldrenderermgr.cpp:856
// variable: 1
void CWorldRendererMgr::FindWindEntry(const ISceneWorld* pWorld)
{
	{
		int i; // 858
	}
} /* size: 0 */

// <00F45AE9> worldrenderer/worldrenderermgr.cpp:869
// variables: 2
// function calls: 26
void CWorldRendererMgr::FindOrCreateWindEntry(const ISceneWorld* pWorld)
{
	WindEntry_t* pEntry; // 871
	{
		int i; // 858
		CUtlVectorBase<CWorldRendererMgr::WindEntry_t, CUtlMemory<CWorldRendererMgr::WindEntry_t, int> >::Count(); // 858
		CUtlMemory<CWorldRendererMgr::WindEntry_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CWorldRendererMgr::WindEntry_t, CUtlMemory<CWorldRendererMgr::WindEntry_t, int> >::operator[](
				int i);  // 860
	}
	CWorldRendererMgr::FindWindEntry(
			const ISceneWorld* pWorld);  // 871
	CUtlMemory<CWorldRendererMgr::WindEntry_t, int>::NumAllocated(); // 1143
	CUtlMemory<CWorldRendererMgr::WindEntry_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CWorldRendererMgr::WindEntry_t, CUtlMemory<CWorldRendererMgr::WindEntry_t, int> >::Element(
		int i);  // 1148
	Vector::Vector(); // 217
	Vector::Vector(); // 217
	Vector::Vector(); // 217
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 219
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 224
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 226
	WindEntry_t::WindEntry_t(); // 1479
	Construct<CWorldRendererMgr::WindEntry_t>(WindEntry_t* pMemory); // 1148
	CUtlMemory<CWorldRendererMgr::WindEntry_t, int>::IsGrowable(); // 823
	CUtlMemory<CWorldRendererMgr::WindEntry_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CWorldRendererMgr::WindEntry_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CWorldRendererMgr::WindEntry_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<CWorldRendererMgr::WindEntry_t, CUtlMemory<CWorldRendererMgr::WindEntry_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CWorldRendererMgr::WindEntry_t, CUtlMemory<CWorldRendererMgr::WindEntry_t, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CWorldRendererMgr::WindEntry_t, CUtlMemory<CWorldRendererMgr::WindEntry_t, int> >::AddToTail(); // 1156
	CUtlMemory<CWorldRendererMgr::WindEntry_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CWorldRendererMgr::WindEntry_t, CUtlMemory<CWorldRendererMgr::WindEntry_t, int> >::Element(
		int i);  // 1156
	CUtlVectorBase<CWorldRendererMgr::WindEntry_t, CUtlMemory<CWorldRendererMgr::WindEntry_t, int> >::AddToTailGetPtr(); // 875
	CWorldRendererMgr::FindOrCreateWindEntry(
				const ISceneWorld* pWorld);  // 869
} /* size: 504, variables: 1, inline expansions: 23 (2119 bytes) */

// <00F34C13> worldrenderer/worldrenderermgr.cpp:869
// variable: 1
void CWorldRendererMgr::FindOrCreateWindEntry(const ISceneWorld* pWorld)
{
	WindEntry_t* pEntry; // 871
} /* size: 0, variables: 1 */

// <00F34BD3> worldrenderer/worldrenderermgr.cpp:884
float ClampedSmoothStep(float flStart, float flEnd, float flPercent)
{
} /* size: 0 */

// <00F34A4E> worldrenderer/worldrenderermgr.cpp:892
// variables: 2
// function calls: 3
void CWorldRendererMgr::SetWindForWorld(const ISceneWorld* pSceneWorld, const Vector& vWindDir, float flWindSpeed, float flTime, bool bOverride)
{
	float flNewSpeed; // 894
	WindEntry_t* pWindEntry; // 896
	Vector::operator=(
			const Vector& vOther);  // 899
	ConVar::GetFloat(); // 903
	Vector::operator=(
			const Vector& vOther);  // 905
} /* size: 197, variables: 2, inline expansions: 3 (65 bytes) */

// <00F34818> worldrenderer/worldrenderermgr.cpp:917
// variable: 1
// function calls: 9
void CWorldRendererMgr::ForgetWindForWorld(const ISceneWorld* pSceneWorld)
{
	{
		int i; // 919
		CUtlVectorBase<CWorldRendererMgr::WindEntry_t, CUtlMemory<CWorldRendererMgr::WindEntry_t, int> >::Count(); // 919
		CUtlMemory<CWorldRendererMgr::WindEntry_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CWorldRendererMgr::WindEntry_t, CUtlMemory<CWorldRendererMgr::WindEntry_t, int> >::operator[](
				int i);  // 921
		CUtlMemory<CWorldRendererMgr::WindEntry_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CWorldRendererMgr::WindEntry_t, CUtlMemory<CWorldRendererMgr::WindEntry_t, int> >::Element(
			int i);  // 1114
		memmove(void* __dest,
			const void* __src,
			size_t __len);  // 115
		V_memmove(void* dest,
				const void* src,
				size_t count);  // 1114
		CUtlVectorBase<CWorldRendererMgr::WindEntry_t, CUtlMemory<CWorldRendererMgr::WindEntry_t, int> >::ShiftElementsLeft(
					int elem,
					int num);  // 1608
		CUtlVectorBase<CWorldRendererMgr::WindEntry_t, CUtlMemory<CWorldRendererMgr::WindEntry_t, int> >::Remove(
			int elem);  // 923
	}
} /* size: 146 */

// <00F343E2> worldrenderer/worldrenderermgr.cpp:932
// variables: 4
// function calls: 14
void CWorldRendererMgr::GetCurrentWindParams(const ISceneWorld* pSceneWorld, Vector& vStrengthFreq, Vector& vOffset, Vector& vWindDir)
{
	float flWindStrength; // 934
	Vector vWindOffset; // 935
	WindEntry_t* pWindEntry; // 937
	{
		int i; // 858
		CUtlVectorBase<CWorldRendererMgr::WindEntry_t, CUtlMemory<CWorldRendererMgr::WindEntry_t, int> >::Count(); // 858
		CUtlMemory<CWorldRendererMgr::WindEntry_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CWorldRendererMgr::WindEntry_t, CUtlMemory<CWorldRendererMgr::WindEntry_t, int> >::operator[](
				int i);  // 860
	}
	CWorldRendererMgr::FindWindEntry(
			const ISceneWorld* pWorld);  // 937
	Vector::operator=(
			const Vector& vOther);  // 941
	Vector::operator=(
			const Vector& vOther);  // 942
	ConVar::GetFloat(); // 952
	ConVar::GetFloat(); // 952
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 952
	Vector::operator=(
			const Vector& vOther);  // 953
	ConVar::GetFloat(); // 946
	ConVar::GetString(); // 947
	Vector::NormalizeInPlace(); // 948
	Vector::operator=(
			const Vector& vOther);  // 949
} /* size: 309, variables: 3, inline expansions: 11 (215 bytes) */

// <00F46128> worldrenderer/worldrenderermgr.cpp:958
// variables: 2
void CWorldRendererMgr::GetWorldVPKFullPath(const char* pVpkPath, CBufferString* pOutFullPath)
{
	CUtlString vpkPath; // 964
	const char* result; // 974
} /* size: 0, variables: 2 */

// <00F453AA> worldrenderer/worldrenderermgr.cpp:958
// variables: 2
// function calls: 15
void CBufferString::GetWorldVPKFullPath()
{
	CUtlString vpkPath; // 964
	const char* result; // 974
	CUtlString::CUtlString(
			const char* pString);  // 964
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 968
	CFileSystemPassThru::RelativePathToFullPath(
				const char* pFileName,
				const char* pPathID,
				CBufferString* pLocalPath,
				PathTypeFilter_t pathFilter);  // 163
	CFileSystemPassThru::RelativePathToFullPath(
				const char* pFileName,
				const char* pPathID,
				CBufferString* pLocalPath,
				PathTypeFilter_t pathFilter);  // 163
	CFileSystemPassThru::RelativePathToFullPath(
				const char* pFileName,
				const char* pPathID,
				CBufferString* pLocalPath,
				PathTypeFilter_t pathFilter);  // 163
	CFileSystemPassThru::RelativePathToFullPath(
				const char* pFileName,
				const char* pPathID,
				CBufferString* pLocalPath,
				PathTypeFilter_t pathFilter);  // 968
	CUtlString::~CUtlString(); // 983
	CUtlString::Get(); // 974
	CFileSystemPassThru::GetSymLink(
			const char* pPath,
			const char* pathID);  // 227
	CFileSystemPassThru::GetSymLink(
			const char* pPath,
			const char* pathID);  // 974
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 977
} /* size: 586, variables: 2, inline expansions: 15 (670 bytes) */

// <00F3379D> worldrenderer/worldrenderermgr.cpp:987
// variables: 3
// function calls: 45
void CWorldRendererMgr::MountWorldVPK(const char* pWorldName, const char* pVpkPath)
{
	CSuppressAsyncFileRequestFlushOnPathChangeScopeGuard sg; // 989
	CPathBufferString vpkFullPath; // 993
	UtlSymId_t nRefCountIndex; // 998
	CFileSystemPassThru::SuppressAsyncFileRequestFlushOnPathChange(
							bool bEnable);  // 208
	CFileSystemPassThru::SuppressAsyncFileRequestFlushOnPathChange(
							bool bEnable);  // 208
	CFileSystemPassThru::SuppressAsyncFileRequestFlushOnPathChange(
							bool bEnable);  // 208
	CFileSystemPassThru::SuppressAsyncFileRequestFlushOnPathChange(
							bool bEnable);  // 774
	CSuppressAsyncFileRequestFlushOnPathChangeScopeGuard::CSuppressAsyncFileRequestFlushOnPathChangeScopeGuard(); // 989
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 993
	CWorldRendererMgr::GetWorldVPKFullPath(
				const char* pVpkPath,
				CBufferString* pOutFullPath);  // 994
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1016
	CFileSystemPassThru::SuppressAsyncFileRequestFlushOnPathChange(
							bool bEnable);  // 208
	CFileSystemPassThru::SuppressAsyncFileRequestFlushOnPathChange(
							bool bEnable);  // 208
	CFileSystemPassThru::SuppressAsyncFileRequestFlushOnPathChange(
							bool bEnable);  // 208
	CFileSystemPassThru::SuppressAsyncFileRequestFlushOnPathChange(
							bool bEnable);  // 779
	CSuppressAsyncFileRequestFlushOnPathChangeScopeGuard::~CSuppressAsyncFileRequestFlushOnPathChangeScopeGuard(); // 1016
	CUtlSymbol::IsValid(); // 88
	CUtlSymbolTable::FindElement(
			const char* pString);  // 90
	CUtlStringMap<int, CUtlSymbolTable>::Find(
		const char* pString);  // 998
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 53
	{
	}
	CUtlMemory<int, int>::operator[](
			int i);  // 588
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 54
	CUtlStringMap<int, CUtlSymbolTable>::operator[](
			IndexType_t n);  // 1005
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 53
	{
	}
	CUtlMemory<int, int>::operator[](
			int i);  // 588
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 54
	CUtlStringMap<int, CUtlSymbolTable>::operator[](
			IndexType_t n);  // 1010
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 1014
	CUtlSymbol::IsValid(); // 64
	CUtlSymbolTable::AddStringElement(
			const char* pString);  // 109
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 111
	CUtlMemory<int, int>::NumAllocated(); // 1196
	CUtlMemory<int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
		int i);  // 1201
	CopyConstruct<int>(int* pMemory,
				const int& src);  // 1201
	CUtlMemory<int, int>::Base(); // 112
	CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 368
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
			const int& src);  // 118
	{
	}
	CUtlMemory<int, int>::operator[](
			int i);  // 588
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 126
	{
	}
	CUtlStringMap<int, CUtlSymbolTable>::Insert(
		const char* pString,
		const int& item);  // 1001
} /* size: 0, variables: 3, inline expansions: 45 (1930 bytes) */

// <00F31F42> worldrenderer/worldrenderermgr.cpp:1021
// variables: 12
// function calls: 98
void CWorldRendererMgr::UnmountWorldVPK(const char* pWorldName)
{
	UtlSymId_t nRefCountIndex; // 1025
	CPathBufferString vpkFullPath; // 1027
	UtlSymId_t i; // 1029
	const char   __FUNCTION__; // 52557
	bool found; // 1069
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > paths; // 1070
	CUtlString vpkName; // 1071
	{
		CUtlString name; // 1032
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 609
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
			int i);  // 110
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
		CUtlSymbolTable::GetElementString(
				int nElement);  // 182
		CUtlStringMap<int, CUtlSymbolTable>::String(
			int n);  // 188
		CUtlStringMap<int, CUtlSymbolTable>::GetElementName(
				int n);  // 1032
		CUtlString::CUtlString(
				const char* pString);  // 1032
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 76
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
		CUtlSymbolTable::GetNumStrings(); // 76
		{
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 79
		CUtlStringMap<int, CUtlSymbolTable>::Count(); // 155
		CUtlStringMap<int, CUtlSymbolTable>::Next(
			IndexType_t i);  // 1043
		CUtlString::~CUtlString(); // 1044
		CUtlString::Get(); // 441
		CUtlString::operator char const*(); // 1039
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 901
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 671
		CBufferStringN<200>::operator=(
				const char* pSrc);  // 1039
		CUtlString::~CUtlString(); // 1044
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1048
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1055
	}
	{
		int i; // 1073
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 1073
		CUtlString::Get(); // 1075
		CFileSystemPassThru::RemoveVPKFile(
				const char* pPkName,
				const char* pPathID);  // 197
		CFileSystemPassThru::RemoveVPKFile(
				const char* pPkName,
				const char* pPathID);  // 197
		CFileSystemPassThru::RemoveVPKFile(
				const char* pPkName,
				const char* pPathID);  // 197
		CFileSystemPassThru::RemoveVPKFile(
				const char* pPkName,
				const char* pPathID);  // 1078
		CUtlString::Get(); // 1075
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 1075
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 1077
		CUtlString::Get(); // 1077
		CUtlString::Get(); // 1078
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 1078
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 76
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
	CUtlSymbolTable::GetNumStrings(); // 76
	{
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 79
	CUtlStringMap<int, CUtlSymbolTable>::Count(); // 142
	CUtlStringMap<int, CUtlSymbolTable>::First(); // 1029
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 1027
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 53
	{
	}
	CUtlMemory<int, int>::operator[](
			int i);  // 588
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 54
	CUtlStringMap<int, CUtlSymbolTable>::operator[](
			IndexType_t n);  // 1055
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 53
	{
	}
	CUtlMemory<int, int>::operator[](
			int i);  // 588
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 54
	CUtlStringMap<int, CUtlSymbolTable>::operator[](
			IndexType_t n);  // 1056
	CUtlMemory<int, int>::operator[](
			int i);  // 588
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 54
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 53
	{
	}
	CUtlStringMap<int, CUtlSymbolTable>::operator[](
			IndexType_t n);  // 1060
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 53
	{
	}
	CUtlMemory<int, int>::operator[](
			int i);  // 588
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 54
	CUtlStringMap<int, CUtlSymbolTable>::operator[](
			IndexType_t n);  // 1065
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1083
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 1070
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 80
	CFmtStrN<256>::Get(); // 1071
	CUtlString::CUtlString(
			const char* pString);  // 1071
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 1071
	CUtlString::~CUtlString(); // 1083
	{
		int i; // 1721
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
	ValidateAlignment<CUtlString>(void); // 508
	CUtlMemory<CUtlString, int>::Purge(); // 510
	CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 1083
} /* size: 0, variables: 7, inline expansions: 51 (1376 bytes) */

// <00F31229> worldrenderer/worldrenderermgr.cpp:1086
// variables: 4
// function calls: 48
void CWorldRendererMgr::SetupWorldResources(CSingleWorldRep* pSingleWorldRep)
{
	CResourceNameFmt sGeometryWorld; // 1088
	CResourceNameFmt sWorldVisiblityName; // 1089
	matrix3x4a_t mWorldTransform; // 1127
	Vector vWorldOrigin; // 1139
	CUtlString::Get(); // 1088
	CUtlString::Get(); // 1089
	CWeakHandle<InfoForResourceTypeWorld_t>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 703
	CWeakHandle<InfoForResourceTypeWorld_t>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 705
	IResourceSystem::FindOrRegisterResourceByName<431316170614>(
							const CResourceName& resourceName,
							bool bWarnIfNotLoaded);  // 1092
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 570
	CStrongHandle<InfoForResourceTypeWorld_t>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CStrongHandle<InfoForResourceTypeWorld_t>::operator=(
			const CWeakHandle<InfoForResourceTypeWorld_t>& src);  // 1092
	CWeakHandle<InfoForResourceTypeWorld_t>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 1093
	CStrongHandle<InfoForResourceTypeWorld_t>::operator==(
			const CWeakHandle<InfoForResourceTypeWorld_t>& hResource);  // 1093
	ResourceIsError(ResourceHandle_t hResource); // 1099
	CWeakHandle<InfoForResourceTypeWorld_t>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	CWeakHandle<InfoForResourceTypeWorld_t>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeWorld_t>::operator CWeakHandle<InfoForResourceTypeWorld_t>(); // 1107
	matrix3x4_t::matrix3x4_t(); // 303
	matrix3x4a_t::matrix3x4a_t(); // 1127
	matrix3x4_t::SetToIdentity(); // 1128
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 1139
	CUtlVectorBase<CSingleWorldRep::Count(); // 1148
	CStrongHandle<InfoForResourceTypeCVoxelVisibility>::HasData(); // 1163
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 367
	CResourceNameFmt::~CResourceNameFmt(); // 1174
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 367
	CResourceNameFmt::~CResourceNameFmt(); // 1174
	CResourceName::String(); // 1101
	CWeakHandle<InfoForResourceTypeCVoxelVisibility>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 703
	CWeakHandle<InfoForResourceTypeCVoxelVisibility>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 705
	IResourceSystem::FindOrRegisterResourceByName<1936291446>(
						const CResourceName& resourceName,
						bool bWarnIfNotLoaded);  // 1144
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 570
	CStrongHandle<InfoForResourceTypeCVoxelVisibility>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CStrongHandle<InfoForResourceTypeCVoxelVisibility>::operator=(
			const CWeakHandle<InfoForResourceTypeCVoxelVisibility>& src);  // 1144
	CResourceName::String(); // 1095
} /* size: 1186, variables: 4, inline expansions: 48 (830 bytes) */

// <00F30C5E> worldrenderer/worldrenderermgr.cpp:1176
// variable: 1
// function calls: 23
void CWorldRendererMgr::CreateWorld_Internal(CSingleWorldRep* pSingleWorldRep)
{
	{
		matrix3x4a_t mWorldTransform; // 1200
		CWeakHandle<InfoForResourceTypeWorld_t>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 1185
		CStrongHandle<InfoForResourceTypeWorld_t>::Init(
			ResourceHandleTyped_t hResource);  // 673
		CStrongHandle<InfoForResourceTypeWorld_t>::operator=(
				const CWeakHandle<InfoForResourceTypeWorld_t>& src);  // 1185
		CWeakHandle<InfoForResourceTypeWorld_t>::InitUntypedUnchecked(
					ResourceHandle_t hUntypedResource);  // 227
		CWeakHandle<InfoForResourceTypeWorld_t>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
		CStrongHandle<InfoForResourceTypeWorld_t>::operator CWeakHandle<InfoForResourceTypeWorld_t>(); // 1187
		matrix3x4_t::matrix3x4_t(); // 303
		matrix3x4a_t::matrix3x4a_t(); // 1200
		matrix3x4_t::SetToIdentity(); // 1201
		CUtlString::Get(); // 99
		CUtlString::String(); // 1192
	}
	CUtlMemory<CSingleWorldRep::NumAllocated(); // 1196
	CUtlMemory<CSingleWorldRep::operator[](
			int i);  // 602
	CUtlVectorBase<CSingleWorldRep::Element(
		int i);  // 1201
	CopyConstruct<CSingleWorldRep*>(CSingleWorldRep** pMemory,
					CSingleWorldRep* const& src);  // 1201
	CUtlMemory<CSingleWorldRep::Base(); // 112
	CUtlVectorBase<CSingleWorldRep::Base(); // 368
	CUtlVectorBase<CSingleWorldRep::ResetDbgInfo(); // 824
	CUtlVectorBase<CSingleWorldRep::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CSingleWorldRep::AddToTail(
			CSingleWorldRep* const& src);  // 1210
} /* size: 475, inline expansions: 9 (199 bytes) */

// <00F30322> worldrenderer/worldrenderermgr.cpp:1215
// variables: 10
// function calls: 37
void CWorldRendererMgr::ServiceWorldRequests()
{
	bool bTimeIsUp; // 1217
	float flFrameThreshold; // 1218
	CFastTimer serviceTimer; // 1219
	int nDeletes; // 1253
	{
		int nRequests; // 1225
		{
			int r; // 1226
			{
				CSingleWorldRep* pWorldRep; // 1228
				float flElapsedTime; // 1243
				CCycleCount::GetMillisecondsF(); // 1243
				CUtlMemory<CSingleWorldRep::operator[](
						int i);  // 588
				CUtlVectorBase<CSingleWorldRep::operator[](
						int i);  // 1228
				CCycleCount::Init(
					uint64 cycles);  // 238
				CCycleCount::CCycleCount(); // 356
				PLAT_CPU_TIME(void); // 263
				CCycleCount::Sample(); // 357
				CCycleCount::Init(
					uint64 cycles);  // 238
				CCycleCount::CCycleCount(); // 359
				CFastTimer::GetDurationInProgress(); // 1243
				CUtlVectorBase<CSingleWorldRep::Remove(
					int elem);  // 1240
			}
		}
		CUtlVectorBase<CSingleWorldRep::Count(); // 1225
	}
	{
		int i; // 1254
		{
			CSingleWorldRep* pWorldRep; // 1256
			CSingleWorldRep::IsWorldLoaded(); // 1257
			CWeakHandle<InfoForResourceTypeWorld_t>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 161
			CStrongHandle<InfoForResourceTypeWorld_t>::operator==(
					const CWeakHandle<InfoForResourceTypeWorld_t>& hResource);  // 161
			ResourceIsError(ResourceHandle_t hResource); // 164
			CSingleWorldRep::IsErrorWorld(); // 155
			CSingleWorldRep::IsErrorWorld(); // 1257
			CUtlVectorBase<CSingleWorldRep::Remove(
				int elem);  // 1260
			CUtlMemory<CSingleWorldRep::operator[](
					int i);  // 588
			CUtlVectorBase<CSingleWorldRep::operator[](
					int i);  // 1256
		}
	}
	ConVar::GetFloat(); // 1218
	CCycleCount::Init(
		uint64 cycles);  // 238
	CCycleCount::CCycleCount(); // 63
	CFastTimer::CFastTimer(); // 1219
	PLAT_CPU_TIME(void); // 263
	CCycleCount::Sample(); // 335
	CFastTimer::Start(); // 1220
	CUtlVectorBase<CSingleWorldRep::Count(); // 1253
	CCycleCount::Init(
		uint64 cycles);  // 238
	CCycleCount::CCycleCount(); // 344
	PLAT_CPU_TIME(void); // 263
	CCycleCount::Sample(); // 345
	CFastTimer::End(); // 1264
	CCycleCount::GetMillisecondsF(); // 1267
} /* size: 970, variables: 4, inline expansions: 14 (289 bytes) */

// <00F302CF> worldrenderer/worldrenderermgr.cpp:1271
void CWorldRendererMgr::SetOverrideRenderTime(float flRenderFrameTime, float flRenderTime)
{
} /* size: 15 */

// <00F2FB09> worldrenderer/worldrenderermgr.cpp:1277
// variables: 7
// function calls: 32
void CWorldRendererMgr::OnClientPreOutput(float flRenderFrameTime, float flRenderTime)
{
	Vector vSpeed; // 1288
	{
		int i; // 1292
		{
			WindEntry_t& windEntry; // 1295
			{
				const float  flWindDirVel; // 1299
				Vector vDirDelta; // 1300
				float flDirDistance; // 1301
				float flLerpAmount; // 1310
				Vector::Vector(); // 1443
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::operator-(
						const Vector& v);  // 1300
				_mm_load_ss(const float* __P); // 21
				_mm_sqrt_ss(__m128 __A); // 21
				_mm_cvtss_f32(__m128 __A); // 21
				FastSqrt(float x); // 1249
				VectorLength(const Vector& v); // 1256
				Vector::Length(); // 1301
				Vector::NormalizeInPlace(); // 1304
				Vector::NormalizeInPlace(); // 1307
				Vector::Vector(); // 1450
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::operator*(
						float fl);  // 1306
				Vector::operator+=(
						const Vector& v);  // 1306
				ConVar::GetFloat(); // 1310
				clamp<float, float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 886
				ClampedSmoothStep(float flStart,
							float flEnd,
							float flPercent);  // 1310
				Lerp<float>(float flPercent,
						const float& A,
						const float& B);  // 1311
			}
			CUtlMemory<CWorldRendererMgr::WindEntry_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CWorldRendererMgr::WindEntry_t, CUtlMemory<CWorldRendererMgr::WindEntry_t, int> >::operator[](
					int i);  // 1295
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 1314
			Vector::operator=(
					const Vector& vOther);  // 1314
		}
		CUtlVectorBase<CWorldRendererMgr::WindEntry_t, CUtlMemory<CWorldRendererMgr::WindEntry_t, int> >::Count(); // 1292
	}
	Vector::Vector(); // 1288
	ConVar::GetString(); // 1289
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 1317
	Vector::operator=(
			const Vector& vOther);  // 1317
} /* size: 681, variables: 1, inline expansions: 6 (101 bytes) */

// <00F2EBC2> worldrenderer/worldrenderermgr.cpp:1320
// variables: 12
// function calls: 55
void CWorldRendererMgr::Cmd_world_layer_list(const CCommandContext& ctx, const CCommand& args)
{
	int nNumWorlds; // 1322
	{
		int iWorld; // 1323
		{
			CSingleWorldRep* pWorldRep; // 1325
			CWorld* pWorld; // 1326
			const char* pWorldName; // 1330
			CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > layerNames; // 1333
			const int  nNumLayers; // 1336
			{
				int iLayer; // 1337
				{
					const char* pLayerName; // 1339
					CUtlMemory<CUtlString, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
							int i);  // 1339
					CUtlString::Get(); // 1339
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 771
					CBufferString::Get(); // 83
					CFmtStrN<256>::operator char const*(); // 1342
					LoggingMetaData_t::LoggingMetaData_t(
								uint64 TypeID,
								uint8* pData,
								size_t nDataSize,
								LoggingVerbosity_t verbosity);  // 171
					{
						int nLinkCommandLen; // 174
						V_strlen(const char* str); // 174
						DWordSwapC<unsigned int>(unsigned int dw); // 181
						memcpy(void* __dest,
							const void* __src,
							size_t __len);  // 75
						V_memcpy(void* dest,
							const void* src,
							int count);  // 182
					}
					CLoggingMetaCommandLink::CLoggingMetaCommandLink(
								const char* pLinkCommand,
								LoggingVerbosity_t verbosity,
								CommandLinkFlags_e nFlags);  // 1342
					CLoggingMetaCommandLink::~CLoggingMetaCommandLink(); // 1342
					CBufferString::~CBufferString(); // 587
					CBufferStringN<256>::~CBufferStringN(); // 41
					CFmtStrN<256>::~CFmtStrN(); // 1342
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 771
					CBufferString::Get(); // 83
					CFmtStrN<256>::operator char const*(); // 1341
					LoggingMetaData_t::LoggingMetaData_t(
								uint64 TypeID,
								uint8* pData,
								size_t nDataSize,
								LoggingVerbosity_t verbosity);  // 171
					{
						int nLinkCommandLen; // 174
						V_strlen(const char* str); // 174
						DWordSwapC<unsigned int>(unsigned int dw); // 181
						memcpy(void* __dest,
							const void* __src,
							size_t __len);  // 75
						V_memcpy(void* dest,
							const void* src,
							int count);  // 182
					}
					CLoggingMetaCommandLink::CLoggingMetaCommandLink(
								const char* pLinkCommand,
								LoggingVerbosity_t verbosity,
								CommandLinkFlags_e nFlags);  // 1341
					CLoggingMetaCommandLink::~CLoggingMetaCommandLink(); // 1341
					CBufferString::~CBufferString(); // 587
					CBufferStringN<256>::~CBufferStringN(); // 41
					CFmtStrN<256>::~CFmtStrN(); // 1341
				}
			}
			CUtlMemory<CSingleWorldRep::operator[](
					int i);  // 588
			CUtlVectorBase<CSingleWorldRep::operator[](
					int i);  // 1325
			CUtlString::Get(); // 1330
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
			CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
			CUtlMemory<CUtlString, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 1333
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 1336
			{
				int i; // 1721
				CUtlMemory<CUtlString, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
					int i);  // 1723
				CUtlString::~CUtlString(); // 1526
				Destruct<CUtlString>(CUtlString* pMemory); // 1723
			}
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
			CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
			CUtlMemory<CUtlString, int>::Purge(); // 903
			CUtlMemory<CUtlString, int>::Purge(); // 1799
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
			ValidateAlignment<CUtlString>(void); // 508
			CUtlMemory<CUtlString, int>::Purge(); // 510
			CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
			CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 1345
		}
	}
	CUtlVectorBase<CSingleWorldRep::Count(); // 1322
} /* size: 1697, variables: 1, inline expansions: 1 (20 bytes) */

// <00F461A3> worldrenderer/worldrenderermgr.cpp:1349
// variables: 6
// function calls: 15
void CWorldRendererMgr::Cmd_world_layer_set_visible(const CCommandContext& ctx, const CCommand& args)
{
	const char* pWorldName; // 1357
	const char* pLayerName; // 1358
	const char* pVisible; // 1359
	CSingleWorldRep* pWorldRep; // 1361
	CWorld* pWorld; // 1362
	bool bVisible; // 1369
	CCommand::ArgC(); // 1351
	CCommand::Arg(
		int nIndex);  // 189
	CCommand::operator[](
			int nIndex);  // 1353
	CCommand::Arg(
		int nIndex);  // 189
	CCommand::operator[](
			int nIndex);  // 1357
	CCommand::Arg(
		int nIndex);  // 189
	CCommand::operator[](
			int nIndex);  // 1358
	CCommand::Arg(
		int nIndex);  // 189
	CCommand::operator[](
			int nIndex);  // 1359
	CUtlStringToken::CUtlStringToken(); // 1361
	CCommand::Arg(
		int nIndex);  // 189
	CCommand::operator[](
			int nIndex);  // 1365
	CCommand::Arg(
		int nIndex);  // 189
	CCommand::operator[](
			int nIndex);  // 1377
	CWorldRendererMgr::Cmd_world_layer_set_visible(
					const CCommandContext& ctx,
					const CCommand& args);  // 1349
} /* size: 395, variables: 6, inline expansions: 15 (415 bytes) */

// <00F2EB41> worldrenderer/worldrenderermgr.cpp:1349
// variables: 6
void CWorldRendererMgr::Cmd_world_layer_set_visible(const CCommandContext& ctx, const CCommand& args)
{
	const char* pWorldName; // 1357
	const char* pLayerName; // 1358
	const char* pVisible; // 1359
	CSingleWorldRep* pWorldRep; // 1361
	CWorld* pWorld; // 1362
	bool bVisible; // 1369
} /* size: 0, variables: 6 */

// <00F2E987> worldrenderer/worldrenderermgr.cpp:1382
// variables: 5
// function call: 1
void PrintWorldInfo(CSingleWorldRep* pWorldRep)
{
	const char* pWorldName; // 1384
	CWorld* pWorld; // 1394
	{
		int nNodes; // 1397
		int nLoaded; // 1398
		{
			int n; // 1399
		}
	}
	CUtlString::Get(); // 1384
} /* size: 312, variables: 2, inline expansions: 1 (18 bytes) */

// <00F2E589> worldrenderer/worldrenderermgr.cpp:1415
// variables: 6
// function calls: 9
void CWorldRendererMgr::Cmd_world_dump_loaded_worlds(const CCommandContext& ctx, const CCommand& args)
{
	{
		int w; // 1419
		{
			CSingleWorldRep* pWorldRep; // 1421
			CUtlMemory<CSingleWorldRep::operator[](
					int i);  // 588
			CUtlVectorBase<CSingleWorldRep::operator[](
					int i);  // 1421
		}
		CUtlVectorBase<CSingleWorldRep::Count(); // 1419
	}
	{
		int w; // 1427
		{
			CSingleWorldRep* pWorldRep; // 1429
			CUtlMemory<CSingleWorldRep::operator[](
					int i);  // 588
			CUtlVectorBase<CSingleWorldRep::operator[](
					int i);  // 1429
		}
		CUtlVectorBase<CSingleWorldRep::Count(); // 1427
	}
	{
		int w; // 1435
		{
			CSingleWorldRep* pWorldRep; // 1437
			CUtlMemory<CSingleWorldRep::operator[](
					int i);  // 588
			CUtlVectorBase<CSingleWorldRep::operator[](
					int i);  // 1437
		}
		CUtlVectorBase<CSingleWorldRep::Count(); // 1435
	}
} /* size: 334 */

// <00F2E55B> worldrenderer/worldrenderermgr.cpp:1445
void CWorldManager::WantsAsyncProcessData()
{
} /* size: 10 */

// <00F2E157> worldrenderer/worldrenderermgr.cpp:1452
// variable: 1
// function calls: 14
void CWorldManager::AsyncProcessData(ResourceHandle_t hResource, const ResourceFileHeader_t* pHeader)
{
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::get_deleter(); // 374
	__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::release(); // 497
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::release(); // 374
	default_delete<IAsyncProcessedDataResult>::default_delete<CKV3ResourceBlockHelper>(
						const default_delete<CKV3ResourceBlockHelper>  &);  // 104
	_Head_base<1, std::default_delete<IAsyncProcessedDataResult>, true>::_Head_base<std::default_delete<CKV3ResourceBlockHelper> >(
									default_delete<CKV3ResourceBlockHelper>& __h);  // 571
	_Tuple_impl<1, std::default_delete<IAsyncProcessedDataResult> >::_Tuple_impl<std::default_delete<CKV3ResourceBlockHelper> >(
									default_delete<CKV3ResourceBlockHelper>& __head);  // 315
	_Head_base<0, IAsyncProcessedDataResult::_Head_base<IAsyncProcessedDataResult*&>(
						IAsyncProcessedDataResult *& __h);  // 315
	_Tuple_impl<0, IAsyncProcessedDataResult::_Tuple_impl<IAsyncProcessedDataResult*&, std::default_delete<CKV3ResourceBlockHelper> >(
												IAsyncProcessedDataResult *& __head);  // 985
	tuple<IAsyncProcessedDataResult::tuple<IAsyncProcessedDataResult*&, std::default_delete<CKV3ResourceBlockHelper> >(); // 174
	__uniq_ptr_impl<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::__uniq_ptr_impl<std::default_delete<CKV3ResourceBlockHelper> >(
									pointer __p,
									default_delete<CKV3ResourceBlockHelper>& __d);  // 234
	__uniq_ptr_data<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult>, true, true>::__uniq_ptr_data<std::default_delete<CKV3ResourceBlockHelper> >(
									pointer,
									default_delete<CKV3ResourceBlockHelper> &);  // 374
	unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >(
												unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >& __u);  // 1460
	{
		CKV3ResourceBlockHelper *& __ptr; // 396
		__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::_M_ptr(); // 396
	}
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::~unique_ptr(); // 1460
} /* size: 145, inline expansions: 13 (68 bytes) */

// <00F2CD95> worldrenderer/worldrenderermgr.cpp:1470
// variables: 6
// function calls: 87
void CWorldManager::AllocateResource(ResourceHandle_t hResource, ResourceId_t nId, const ResourceFileHeader_t* pHeader, IRD_RegisterResourceDataUtils* pUtils)
{
	{
		CKV3ResourceBlockHelper* pResult; // 1481
		World_t* pDataFromDisk; // 1491
		__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::_M_ptr(); // 472
		unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::get(); // 465
		unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::operator->(); // 55
		CKV3ResourceBlockHelper::GetKV3(); // 1491
		IKV3TransferInterface_ResourceLoad::IKV3TransferInterface_ResourceLoad(); // 19
		ResourceId_t::ResourceId_t(); // 19
		CKV3Transfer_ResourceLoadInterface::CKV3Transfer_ResourceLoadInterface(
							IRD_RegisterResourceDataUtils* pDataUtils,
							ResourceHandle_t hOriginatingResource,
							ResourceId_t nOriginatingResourceId);  // 26
		CKV3TransferContextBase::AddInterface<CKV3Transfer_ResourceLoadInterface>(
								CKV3Transfer_ResourceLoadInterface* pInterface);  // 27
		IKV3TransferInterface_UtlSymbolLarge::IKV3TransferInterface_UtlSymbolLarge(); // 48
		CKV3Transfer_UtlSymbolLargeInterface<CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> >::CKV3Transfer_UtlSymbolLargeInterface(
							CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* pSymbolTable);  // 30
		{
			CResourceNameGetter name; // 41
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 184
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 180
			ResourceGetName(ResourceHandle_t hResource,
					CResourceName* pTarget);  // 196
			CResourceNameGetter::CResourceNameGetter(
						ResourceHandle_t hResource);  // 41
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 89
			CKV3TransferContextBase::GetErrorMessage(); // 42
			CResourceName::Get(); // 42
			{
				int i; // 1721
				CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::operator[](
						int i);  // 602
				Element(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this,
					int i);  // 1723
				CStrongHandle<InfoForResourceTypeCEntityLump>::~CStrongHandle(); // 211
				CStrongHandleCopyable<InfoForResourceTypeCEntityLump>::~CStrongHandleCopyable(); // 1526
				Destruct<CStrongHandleCopyable<InfoForResourceTypeCEntityLump> >(CStrongHandleCopyable<InfoForResourceTypeCEntityLump>* pMemory); // 1723
			}
			RemoveAll(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this); // 1798
			CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::IsExternallyAllocated(); // 905
			CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::Purge(); // 903
			CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::Purge(); // 1799
			CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::Base(); // 112
			Base(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this); // 368
			ResetDbgInfo(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this); // 1800
			Purge(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this); // 560
			ValidateAlignment<CStrongHandleCopyable<InfoForResourceTypeCEntityLump> >(void); // 508
			CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::IsExternallyAllocated(); // 905
			CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::Purge(); // 510
			CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::~CUtlMemory(); // 562
			~CUtlVectorBase(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this); // 410
			~CUtlVector(const CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResourceT this); // 51
			{
				int i; // 1721
				CUtlMemory<CStrongHandle<InfoForResourceTypeCTextureBase>, int>::operator[](
						int i);  // 602
				Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandle<InfoForResourceTypeCTexture this,
					int i);  // 1723
				CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 1526
				Destruct<CStrongHandle<InfoForResourceTypeCTextureBase> >(CStrongHandle<InfoForResourceTypeCTextureBase>* pMemory); // 1723
			}
			RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandle<InfoForResourceTypeCTexture this); // 1798
			CUtlMemory<CStrongHandle<InfoForResourceTypeCTextureBase>, int>::IsExternallyAllocated(); // 905
			CUtlMemory<CStrongHandle<InfoForResourceTypeCTextureBase>, int>::Purge(); // 903
			CUtlMemory<CStrongHandle<InfoForResourceTypeCTextureBase>, int>::Purge(); // 1799
			CUtlMemory<CStrongHandle<InfoForResourceTypeCTextureBase>, int>::Base(); // 112
			Base(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandle<InfoForResourceTypeCTexture this); // 368
			ResetDbgInfo(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandle<InfoForResourceTypeCTexture this); // 1800
			Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandle<InfoForResourceTypeCTexture this); // 560
			ValidateAlignment<CStrongHandle<InfoForResourceTypeCTextureBase> >(void); // 508
			CUtlMemory<CStrongHandle<InfoForResourceTypeCTextureBase>, int>::IsExternallyAllocated(); // 905
			CUtlMemory<CStrongHandle<InfoForResourceTypeCTextureBase>, int>::Purge(); // 510
			CUtlMemory<CStrongHandle<InfoForResourceTypeCTextureBase>, int>::~CUtlMemory(); // 562
			~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandle<InfoForResourceTypeCTexture this); // 410
			~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandle<InfoForResourceTypeCTextureBase this); // 173
			BakedLightingInfo_t::~BakedLightingInfo_t(); // 51
			CUtlMemory<NodeData_t, int>::IsExternallyAllocated(); // 905
			CUtlMemory<NodeData_t, int>::Purge(); // 903
			CUtlMemory<NodeData_t, int>::Purge(); // 1799
			CUtlMemory<NodeData_t, int>::Base(); // 112
			CUtlVectorBase<NodeData_t, CUtlMemory<NodeData_t, int> >::Base(); // 368
			CUtlVectorBase<NodeData_t, CUtlMemory<NodeData_t, int> >::ResetDbgInfo(); // 1800
			CUtlVectorBase<NodeData_t, CUtlMemory<NodeData_t, int> >::Purge(); // 560
			ValidateAlignment<NodeData_t>(void); // 508
			CUtlMemory<NodeData_t, int>::IsExternallyAllocated(); // 905
			CUtlMemory<NodeData_t, int>::Purge(); // 510
			CUtlMemory<NodeData_t, int>::~CUtlMemory(); // 562
			CUtlVectorBase<NodeData_t, CUtlMemory<NodeData_t, int> >::~CUtlVectorBase(); // 410
			CUtlVector<NodeData_t, CUtlMemory<NodeData_t, int> >::~CUtlVector(); // 51
			World_t::~World_t(); // 45
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 47
		}
		LoadKV3TransferResourceClass<World_t>(ResourceHandle_t hResource,
							ResourceId_t nId,
							const KeyValues3* pKV3,
							IRD_RegisterResourceDataUtils* pDataUtils,
							CUtlSymbolTableLarge* pOptionalSymbolTable);  // 1491
	}
	{
		CResourceNameGetter resourceName; // 1502
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 180
		ResourceGetName(ResourceHandle_t hResource,
				CResourceName* pTarget);  // 196
		CResourceNameGetter::CResourceNameGetter(
					ResourceHandle_t hResource);  // 1502
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 1507
		CResourceName::Get(); // 1503
	}
} /* size: 1218 */

