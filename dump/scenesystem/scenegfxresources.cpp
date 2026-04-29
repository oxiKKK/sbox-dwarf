
//
// scenesystem/scenegfxresources.cpp
//
//	referenced by: libengine2.so
//
//	functions: 37
//	structs: 2
//

// <033A5461> ../scenesystem/scenegfxresources.cpp:244
// member variable: 1
// struct size: 4
struct InstanceIDElement_t {
	float m_nId; /* 0 4 */
};

// <033A54FF> ../scenesystem/scenegfxresources.cpp:285
// member variables: 3
// struct size: 24
struct InputLayerDesciptorRecord_t {
	const char * m_pName; /* 0 8 */
	int m_nNumFields; /* 8 4 */
	const class RenderInputLayoutField_t * m_pFields; /* 16 8 */
};

// <033C5994> ../scenesystem/scenegfxresources.cpp:315
// variables: 24
// function calls: 44
void CSceneSystem::CreateStaticShape(int nNumVertices, const float* pVertices, int nNumIndices, const int* pIndices, CSimpleStaticShapeDesc& shapeOut, bool bScaleToUnitSphere, const char* pGroupName, int nLayoutFields, RenderInputLayoutField_t* pLayoutFields)
{
	const char   __FUNCTION__; // 54252
	CRenderContextPtr pCtx; // 322
	float flVertexScale; // 323
	CIndexData<short unsigned int> ib; // 344
	BufferDesc_t vertexDesc; // 353
	CVertexData<Vector> vb; // 369
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 318
	}
	{
		int nTri; // 328
		{
			int nIdx0; // 330
			int nIdx1; // 331
			int nIdx2; // 332
			Vector vecP0; // 333
			Vector vecP1; // 334
			Vector vecP2; // 335
			Vector vecPlaneNormal; // 336
			float flDist; // 337
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 337
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 333
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 336
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 336
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1508
			CrossProduct(const Vector& a,
					const Vector& b);  // 336
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 334
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 335
		}
	}
	{
		int i; // 346
		{
		}
		CIndexDataBase<short unsigned int>::Index(
			short unsigned int nIndex);  // 348
	}
	{
		int i; // 371
		{
		}
		Vector::operator=(
				const Vector& vOther);  // 355
		{
		}
		CVertexDataBase<Vector>::AdvanceVertex(); // 270
		CVertexDataBase<Vector>::AdvanceVertex(); // 376
	}
	CRenderContextPtr::CRenderContextPtr<>(
				IRenderDevice* pDevice,
				const char* pDebugStringFmt);  // 322
	CreateIndexBuffer<short unsigned int>(int nNumIndices,
						const char* pDebugName,
						const char* pBudgetGroupName);  // 343
	CIndexData<short unsigned int>::Init(
		IRenderContext* pRenderContext,
		IndexBufferHandle_t hIndexBuffer);  // 328
	CIndexDataBase<short unsigned int>::ClearIndexFields(); // 89
	CIndexDataBase<short unsigned int>::CIndexDataBase(); // 325
	CIndexData<short unsigned int>::CIndexData(
			IRenderContext* pRenderContext,
			IndexBufferHandle_t hIndexBuffer);  // 344
	{
		LockDesc_t desc; // 459
		bool bOk; // 460
	}
	{
	}
	{
	}
	CIndexData<short unsigned int>::Lock(
		int nMaxIndexCount);  // 345
	{
		LockDesc_t desc; // 492
	}
	{
	}
	CIndexData<short unsigned int>::Unlock(); // 350
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 180
	CVertexDataBase<Vector>::ClearVertexFields(); // 495
	CVertexData<Vector>::Init(
		IRenderContext* pRenderContext,
		VertexBufferHandle_t hVertexBuffer);  // 436
	CVertexDataBase<Vector>::ClearVertexFields(); // 171
	Vector::Vector(); // 165
	CVertexDataBase<Vector>::CVertexDataBase(); // 433
	CVertexData<Vector>::CVertexData(
			IRenderContext* pRenderContext,
			VertexBufferHandle_t hVertexBuffer);  // 369
	{
		LockDesc_t desc; // 557
		bool bOk; // 558
	}
	{
	}
	{
	}
	CVertexData<Vector>::Lock(
		int nMaxVertexCount);  // 370
	{
		LockDesc_t desc; // 588
	}
	{
	}
	CVertexData<Vector>::Unlock(); // 378
	CVertexData<Vector>::Release(); // 502
	CVertexData<Vector>::Release(); // 461
	{
	}
	{
	}
	CVertexDataBase<Vector>::~CVertexDataBase(); // 194
	CVertexDataBase<Vector>::~CVertexDataBase(); // 462
	CVertexData<Vector>::~CVertexData(); // 379
	{
	}
	{
	}
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 105
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 343
	CIndexData<short unsigned int>::~CIndexData(); // 379
	CRenderContextPtr::Release(); // 845
	CRenderContextPtr::~CRenderContextPtr(); // 379
} /* size: 0, variables: 6, inline expansions: 28 (2174 bytes) */

// <033C5949> ../scenesystem/scenegfxresources.cpp:381
void CSceneSystem::ShutdownShape(CSimpleStaticShapeDesc& shape)
{
} /* size: 101 */

// <033C4E3C> ../scenesystem/scenegfxresources.cpp:397
// variables: 3
// function calls: 46
void CreateMonitorRenderTarget(int nTargetWidth, int nTargetHeight, ImageFormat fmt, HRenderTextureStrong* pTextureOut, RenderTargetDesc_t* pDescOut, const char* pName, HRenderTextureStrong& hDepthStencil)
{
	CTextureCreationDesc specRT; // 399
	CPathBufferString tempStr; // 410
	{
		HRenderTexture hConvertToWeak; // 415
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
		CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 415
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
		CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 416
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 416
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 175
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 177
		RenderTargetDesc_t::Init(
			HRenderTexture hColor,
			HRenderTexture hDepth,
			RenderColorSpace_t allowSrgbWrites);  // 416
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 222
	V_memset(void* dest,
		int fill,
		size_t count);  // 142
	CTextureDesc::CTextureDesc(); // 221
	Vector4D::Vector4D(); // 221
	CUtlMemory<TextureCreationExtraData_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<TextureCreationExtraData_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::CUtlVector(); // 221
	CTextureCreationDesc::CTextureCreationDesc(); // 399
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 410
	Vector4D::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz,
		vec_t iw);  // 407
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 412
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 673
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 412
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 418
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::RemoveAll(); // 1798
	CUtlMemory<TextureCreationExtraData_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<TextureCreationExtraData_t, int>::Purge(); // 903
	CUtlMemory<TextureCreationExtraData_t, int>::Purge(); // 1799
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::Purge(); // 560
	ValidateAlignment<TextureCreationExtraData_t>(void); // 508
	CUtlMemory<TextureCreationExtraData_t, int>::Purge(); // 510
	CUtlMemory<TextureCreationExtraData_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::~CUtlVector(); // 234
	CTextureCreationDesc::~CTextureCreationDesc(); // 418
} /* size: 0, variables: 2, inline expansions: 33 (0 bytes) */

// <033C4995> ../scenesystem/scenegfxresources.cpp:423
// variables: 2
// function calls: 14
ResourceManifestDesc_t* InitManifestDesc<SceneSystemInit::CTemplateArg>(CTemplateArg& def)
{
	ResourceManifestDesc_t s_Manifest; // 423
	ManifestEntryGroupList_t s_pManifestEntries; // 423
	ResourceManifestEntry_t::ResourceManifestEntry_t(
				const char* pResourceName,
				bool bResourceNameIsManifestName,
				CStrongHandleVoid* pHandle);  // 440
	ResourceManifestEntry_t::ResourceManifestEntry_t(
				const char* pResourceName,
				bool bResourceNameIsManifestName,
				CStrongHandleVoid* pHandle);  // 440
	ResourceManifestEntry_t::ResourceManifestEntry_t(
				const char* pResourceName,
				bool bResourceNameIsManifestName,
				CStrongHandleVoid* pHandle);  // 440
	ResourceManifestEntry_t::ResourceManifestEntry_t(
				const char* pResourceName,
				bool bResourceNameIsManifestName,
				CStrongHandleVoid* pHandle);  // 440
	ResourceManifestEntry_t::ResourceManifestEntry_t(
				const char* pResourceName,
				bool bResourceNameIsManifestName,
				CStrongHandleVoid* pHandle);  // 440
	ResourceManifestEntry_t::ResourceManifestEntry_t(
				const char* pResourceName,
				bool bResourceNameIsManifestName,
				CStrongHandleVoid* pHandle);  // 440
	ResourceManifestEntry_t::ResourceManifestEntry_t(
				const char* pResourceName,
				bool bResourceNameIsManifestName,
				CStrongHandleVoid* pHandle);  // 440
	ResourceManifestEntry_t::ResourceManifestEntry_t(
				const char* pResourceName,
				bool bResourceNameIsManifestName,
				CStrongHandleVoid* pHandle);  // 440
	ResourceManifestEntry_t::ResourceManifestEntry_t(
				const char* pResourceName,
				bool bResourceNameIsManifestName,
				CStrongHandleVoid* pHandle);  // 440
	ResourceManifestEntry_t::ResourceManifestEntry_t(
				const char* pResourceName,
				bool bResourceNameIsManifestName,
				CStrongHandleVoid* pHandle);  // 440
	ResourceManifestEntry_t::ResourceManifestEntry_t(
				const char* pResourceName,
				bool bResourceNameIsManifestName,
				CStrongHandleVoid* pHandle);  // 440
	ResourceManifestEntry_t::ResourceManifestEntry_t(
				const char* pResourceName,
				bool bResourceNameIsManifestName,
				CStrongHandleVoid* pHandle);  // 440
	ResourceManifestEntry_t::ResourceManifestEntry_t(
				const char* pResourceName,
				bool bResourceNameIsManifestName,
				CStrongHandleVoid* pHandle);  // 440
	ResourceManifestEntry_t::ResourceManifestEntry_t(
				const char* pResourceName,
				bool bResourceNameIsManifestName,
				CStrongHandleVoid* pHandle);  // 440
} /* size: 812, variables: 2, inline expansions: 14 (692 bytes) */

// <033C47F6> ../scenesystem/scenegfxresources.cpp:449
// variables: 2
// function calls: 3
ResourceManifestDesc_t* InitManifestDesc<SceneSystemExtraInit::CTemplateArg>(CTemplateArg& def)
{
	ResourceManifestDesc_t s_Manifest; // 449
	ManifestEntryGroupList_t s_pManifestEntries; // 449
	ResourceManifestEntry_t::ResourceManifestEntry_t(
				const char* pResourceName,
				bool bResourceNameIsManifestName,
				CStrongHandleVoid* pHandle);  // 453
	ResourceManifestEntry_t::ResourceManifestEntry_t(
				const char* pResourceName,
				bool bResourceNameIsManifestName,
				CStrongHandleVoid* pHandle);  // 453
	ResourceManifestEntry_t::ResourceManifestEntry_t(
				const char* pResourceName,
				bool bResourceNameIsManifestName,
				CStrongHandleVoid* pHandle);  // 453
} /* size: 276, variables: 2, inline expansions: 3 (156 bytes) */

// <033C21AA> ../scenesystem/scenegfxresources.cpp:457
// variables: 55
// function calls: 168
void ApplyDepthAwareMask(IRenderContext* pRenderContext, RenderViewport_t* pViewport, HRenderTexture& hDst)
{
	IMaterialMode* pMode; // 463
	CRenderAttributes attrs; // 467
	const CTextureDesc* desc; // 473
	int nQuarterWidth; // 475
	int nQuarterHeight; // 476
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 459
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator->(); // 463
	CUtlStringToken::CUtlStringToken(); // 463
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 469
	{
		int i; // 212
		{
			int nTestResult; // 217
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 217
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 217
			{
				const int  nIndex; // 220
			}
		}
	}
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
			i32x4 i4KMatch);  // 311
	{
		const OverflowChunk_t& p; // 279
		const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 27760
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 27770
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 27780
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
						const OverflowChunk_t* pNode);  // 1160
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
						const OverflowChunk_t* pNode);  // 1165
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 281
		operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 279
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
					int nIdx);  // 284
	}
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
			i32x4 n4Key,
			const TextureAttrForStorage_t ** pValueOut);  // 270
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
				int nIdx);  // 314
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
			i32x4 n4Key,
			TextureAttrForStorage_t** pValueOut);  // 356
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
			uint32 nKey,
			TextureAttrForStorage_t** pValueOut);  // 547
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1000
	TextureAttrForStorage_t::operator=(
			const TextureAttr_t& other);  // 551
	{
		int i; // 212
		{
			int nTestResult; // 217
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 217
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 217
			{
				const int  nIndex; // 220
			}
		}
	}
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
			i32x4 i4KMatch);  // 330
	{
		OverflowChunk_t& p; // 337
		CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t>& __for_range; // 27653
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 27663
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 27673
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForS this,
						OverflowChunk_t* pNode);  // 1151
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this); // 337
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForS this,
						OverflowChunk_t* pNode);  // 1156
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this); // 337
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 339
		operator++(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForS this); // 337
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetKeyPtrFromIndex(
					int nIdx);  // 342
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
					int nIdx);  // 343
	}
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				TextureAttrForStorage_t** pValueOut);  // 328
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetKeyPtrFromIndex(
				int nIdx);  // 333
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
				int nIdx);  // 334
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				TextureAttrForStorage_t** pValueOut);  // 556
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1000
	TextureAttrForStorage_t::operator=(
			const TextureAttr_t& other);  // 566
	{
		OverflowChunk_t* pNew; // 559
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
					ResourceHandle_t hUntypedResource);  // 227
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 76
		TextureAttrForStorage_t::TextureAttrForStorage_t(); // 117
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 45
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 46
		SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 118
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::CUtlAttributeListChunk(); // 254
		OverflowChunk_t::OverflowChunk_t(); // 559
		AddToHead<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t, CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t>(OverflowChunk_t *& head,
																OverflowChunk_t* node);  // 960
		AddToHead(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this,
				OverflowChunk_t* node);  // 560
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetKeyPtrFromIndex(
					int nIdx);  // 562
	}
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::SetValue(
		uint32 nKey,
		TextureAttr_t nValue);  // 571
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 90
	TextureAttr_t::TextureAttr_t(
			const TextureAttr_t  &);  // 571
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::SetValue(
		const CUtlStringToken& nTok,
		TextureAttr_t nValue);  // 619
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 619
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 93
	TextureAttr_t::TextureAttr_t(
			HRenderTexture hT,
			int32 nMip);  // 619
	CRenderAttributes::SetTextureValue(
			CUtlStringToken nTokenID,
			HRenderTexture txtr,
			int32 nSingleMipLevelToBind);  // 469
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 469
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 470
	{
		int i; // 212
		{
			int nTestResult; // 217
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 217
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 217
			{
				const int  nIndex; // 220
			}
		}
	}
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
			i32x4 i4KMatch);  // 311
	{
		const OverflowChunk_t& p; // 279
		const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 27760
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 27770
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 27780
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
						const OverflowChunk_t* pNode);  // 1160
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
						const OverflowChunk_t* pNode);  // 1165
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 281
		operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 279
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
					int nIdx);  // 284
	}
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
			i32x4 n4Key,
			const TextureAttrForStorage_t ** pValueOut);  // 270
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
				int nIdx);  // 314
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
			i32x4 n4Key,
			TextureAttrForStorage_t** pValueOut);  // 356
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
			uint32 nKey,
			TextureAttrForStorage_t** pValueOut);  // 547
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1000
	TextureAttrForStorage_t::operator=(
			const TextureAttr_t& other);  // 551
	{
		int i; // 212
		{
			int nTestResult; // 217
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 217
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 217
			{
				const int  nIndex; // 220
			}
		}
	}
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
			i32x4 i4KMatch);  // 330
	{
		OverflowChunk_t& p; // 337
		CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t>& __for_range; // 27653
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 27663
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 27673
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForS this,
						OverflowChunk_t* pNode);  // 1151
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this); // 337
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForS this,
						OverflowChunk_t* pNode);  // 1156
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this); // 337
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 339
		operator++(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForS this); // 337
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetKeyPtrFromIndex(
					int nIdx);  // 342
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
					int nIdx);  // 343
	}
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				TextureAttrForStorage_t** pValueOut);  // 328
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetKeyPtrFromIndex(
				int nIdx);  // 333
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
				int nIdx);  // 334
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				TextureAttrForStorage_t** pValueOut);  // 556
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1000
	TextureAttrForStorage_t::operator=(
			const TextureAttr_t& other);  // 566
	{
		OverflowChunk_t* pNew; // 559
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
					ResourceHandle_t hUntypedResource);  // 227
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 76
		TextureAttrForStorage_t::TextureAttrForStorage_t(); // 117
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 45
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 46
		SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 118
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::CUtlAttributeListChunk(); // 254
		OverflowChunk_t::OverflowChunk_t(); // 559
		AddToHead<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t, CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t>(OverflowChunk_t *& head,
																OverflowChunk_t* node);  // 960
		AddToHead(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this,
				OverflowChunk_t* node);  // 560
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetKeyPtrFromIndex(
					int nIdx);  // 562
	}
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::SetValue(
		uint32 nKey,
		TextureAttr_t nValue);  // 571
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 90
	TextureAttr_t::TextureAttr_t(
			const TextureAttr_t  &);  // 571
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::SetValue(
		const CUtlStringToken& nTok,
		TextureAttr_t nValue);  // 619
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 619
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 93
	TextureAttr_t::TextureAttr_t(
			HRenderTexture hT,
			int32 nMip);  // 619
	CRenderAttributes::SetTextureValue(
			CUtlStringToken nTokenID,
			HRenderTexture txtr,
			int32 nSingleMipLevelToBind);  // 470
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 470
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 473
} /* size: 0, variables: 5, inline expansions: 66 (6010 bytes) */

// <033BD8D8> ../scenesystem/scenegfxresources.cpp:482
// variables: 113
// function calls: 304
void CSceneSystem::DownsampleTexture(IRenderContext* pRenderContext, HRenderTexture& hSrc, RenderViewport_t* pViewport, uint8 nDownsampleType, bool bDepthAware)
{
	IMaterialMode* pMode; // 485
	CRenderAttributes attrs; // 489
	const CTextureDesc* desc; // 491
	int nNumMips; // 492
	int nSrcWidth; // 495
	int nSrcHeight; // 496
	{
		int i; // 505
		{
			int width; // 508
			int height; // 509
			Max<int>(const int& val1,
				const int& val2);  // 508
			Max<int>(const int& val1,
				const int& val2);  // 509
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 515
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 619
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 93
			TextureAttr_t::TextureAttr_t(
					HRenderTexture hT,
					int32 nMip);  // 619
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 90
			TextureAttr_t::TextureAttr_t(
					const TextureAttr_t  &);  // 571
			{
				__m128i retVal; // 1105
				_mm_set_epi32(int __q3,
						int __q2,
						int __q1,
						int __q0);  // 648
				_mm_set1_epi32(int __A); // 1106
			}
			ReplicateIX4<>(int nValue); // 356
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						const int  nIndex; // 220
					}
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
				}
			}
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 311
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 27760
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 27770
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 27780
				Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1160
				begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1165
				end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 279
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
							int nIdx);  // 284
			}
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 270
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
						int nIdx);  // 314
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					TextureAttrForStorage_t** pValueOut);  // 356
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					uint32 nKey,
					TextureAttrForStorage_t** pValueOut);  // 547
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1000
			TextureAttrForStorage_t::operator=(
					const TextureAttr_t& other);  // 551
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 330
			{
				OverflowChunk_t& p; // 337
				CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t>& __for_range; // 27653
				CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 27663
				CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 27673
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForS this,
								OverflowChunk_t* pNode);  // 1151
				begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this); // 337
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForS this,
								OverflowChunk_t* pNode);  // 1156
				end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this); // 337
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 339
				operator++(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForS this); // 337
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetKeyPtrFromIndex(
							int nIdx);  // 342
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
							int nIdx);  // 343
			}
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexAndKeyOfMatch(
						i32x4 n4Key,
						uint32** pKeyOut,
						TextureAttrForStorage_t** pValueOut);  // 328
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetKeyPtrFromIndex(
						int nIdx);  // 333
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
						int nIdx);  // 334
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexAndKeyOfMatch(
						i32x4 n4Key,
						uint32** pKeyOut,
						TextureAttrForStorage_t** pValueOut);  // 556
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1000
			TextureAttrForStorage_t::operator=(
					const TextureAttr_t& other);  // 566
			{
				OverflowChunk_t* pNew; // 559
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
				CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
							ResourceHandle_t hUntypedResource);  // 227
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
				StaticInvalidHandle(void); // 76
				TextureAttrForStorage_t::TextureAttrForStorage_t(); // 117
				_mm_store_ps(float* __P,
						__m128 __A);  // 2680
				StoreAlignedIntSIMD<>(i32x4& pSIMD,
							const fltx4& a);  // 45
				_mm_store_ps(float* __P,
						__m128 __A);  // 2680
				StoreAlignedIntSIMD<>(i32x4& pSIMD,
							const fltx4& a);  // 46
				SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 118
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::CUtlAttributeListChunk(); // 254
				OverflowChunk_t::OverflowChunk_t(); // 559
				AddToHead<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t, CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t>(OverflowChunk_t *& head,
																OverflowChunk_t* node);  // 960
				AddToHead(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this,
						OverflowChunk_t* node);  // 560
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetKeyPtrFromIndex(
							int nIdx);  // 562
			}
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::SetValue(
				uint32 nKey,
				TextureAttr_t nValue);  // 571
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::SetValue(
				const CUtlStringToken& nTok,
				TextureAttr_t nValue);  // 619
			CRenderAttributes::SetTextureValue(
					CUtlStringToken nTokenID,
					HRenderTexture txtr,
					int32 nSingleMipLevelToBind);  // 515
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 516
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 619
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 93
			TextureAttr_t::TextureAttr_t(
					HRenderTexture hT,
					int32 nMip);  // 619
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 90
			TextureAttr_t::TextureAttr_t(
					const TextureAttr_t  &);  // 571
			{
				__m128i retVal; // 1105
				_mm_set_epi32(int __q3,
						int __q2,
						int __q1,
						int __q0);  // 648
				_mm_set1_epi32(int __A); // 1106
			}
			ReplicateIX4<>(int nValue); // 356
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						const int  nIndex; // 220
					}
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
				}
			}
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 311
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 27760
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 27770
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 27780
				Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1160
				begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1165
				end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 279
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
							int nIdx);  // 284
			}
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 270
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
						int nIdx);  // 314
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					TextureAttrForStorage_t** pValueOut);  // 356
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					uint32 nKey,
					TextureAttrForStorage_t** pValueOut);  // 547
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1000
			TextureAttrForStorage_t::operator=(
					const TextureAttr_t& other);  // 551
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 330
			{
				OverflowChunk_t& p; // 337
				CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t>& __for_range; // 27653
				CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 27663
				CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 27673
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForS this,
								OverflowChunk_t* pNode);  // 1151
				begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this); // 337
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForS this,
								OverflowChunk_t* pNode);  // 1156
				end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this); // 337
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 339
				operator++(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForS this); // 337
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetKeyPtrFromIndex(
							int nIdx);  // 342
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
							int nIdx);  // 343
			}
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexAndKeyOfMatch(
						i32x4 n4Key,
						uint32** pKeyOut,
						TextureAttrForStorage_t** pValueOut);  // 328
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetKeyPtrFromIndex(
						int nIdx);  // 333
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
						int nIdx);  // 334
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexAndKeyOfMatch(
						i32x4 n4Key,
						uint32** pKeyOut,
						TextureAttrForStorage_t** pValueOut);  // 556
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1000
			TextureAttrForStorage_t::operator=(
					const TextureAttr_t& other);  // 566
			{
				OverflowChunk_t* pNew; // 559
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
				CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
							ResourceHandle_t hUntypedResource);  // 227
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
				StaticInvalidHandle(void); // 76
				TextureAttrForStorage_t::TextureAttrForStorage_t(); // 117
				_mm_store_ps(float* __P,
						__m128 __A);  // 2680
				StoreAlignedIntSIMD<>(i32x4& pSIMD,
							const fltx4& a);  // 45
				_mm_store_ps(float* __P,
						__m128 __A);  // 2680
				StoreAlignedIntSIMD<>(i32x4& pSIMD,
							const fltx4& a);  // 46
				SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 118
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::CUtlAttributeListChunk(); // 254
				OverflowChunk_t::OverflowChunk_t(); // 559
				AddToHead<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t, CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t>(OverflowChunk_t *& head,
																OverflowChunk_t* node);  // 960
				AddToHead(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this,
						OverflowChunk_t* node);  // 560
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetKeyPtrFromIndex(
							int nIdx);  // 562
			}
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::SetValue(
				uint32 nKey,
				TextureAttr_t nValue);  // 571
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::SetValue(
				const CUtlStringToken& nTok,
				TextureAttr_t nValue);  // 619
			CRenderAttributes::SetTextureValue(
					CUtlStringToken nTokenID,
					HRenderTexture txtr,
					int32 nSingleMipLevelToBind);  // 516
			Vector2D::Vector2D(
				vec_t X,
				vec_t Y);  // 517
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						const int  nIndex; // 220
					}
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
				}
			}
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 311
			{
				OverflowChunk_t& p; // 317
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 15721
				CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 15731
				CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 15741
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1151
				CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								OverflowChunk_t* pNode);  // 1151
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 317
				CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								OverflowChunk_t* pNode);  // 1156
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 317
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 319
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
							int nIdx);  // 322
				CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 317
			}
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					Vector4D** pValueOut);  // 309
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetValuePtrFromIndex(
						int nIdx);  // 314
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					Vector4D** pValueOut);  // 356
			{
				__m128i retVal; // 1105
				_mm_set_epi32(int __q3,
						int __q2,
						int __q1,
						int __q0);  // 648
				_mm_set1_epi32(int __A); // 1106
			}
			ReplicateIX4<>(int nValue); // 356
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					uint32 nKey,
					Vector4D** pValueOut);  // 547
			Vector4D::operator=(
					const Vector4D& vOther);  // 566
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 330
			{
				OverflowChunk_t& p; // 337
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 32424
				CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 32434
				CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 32444
				CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								OverflowChunk_t* pNode);  // 1151
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 337
				CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								OverflowChunk_t* pNode);  // 1156
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 337
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 339
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetKeyPtrFromIndex(
							int nIdx);  // 342
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
							int nIdx);  // 343
				CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 337
			}
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexAndKeyOfMatch(
						i32x4 n4Key,
						uint32** pKeyOut,
						Vector4D** pValueOut);  // 328
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetKeyPtrFromIndex(
						int nIdx);  // 333
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetValuePtrFromIndex(
						int nIdx);  // 334
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexAndKeyOfMatch(
						i32x4 n4Key,
						uint32** pKeyOut,
						Vector4D** pValueOut);  // 556
			{
				OverflowChunk_t* pNew; // 559
				_mm_store_ps(float* __P,
						__m128 __A);  // 2680
				StoreAlignedIntSIMD<>(i32x4& pSIMD,
							const fltx4& a);  // 39
				SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::CUtlAttributeListChunk(); // 254
				OverflowChunk_t::OverflowChunk_t(); // 559
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
							int nIdx);  // 563
				AddToHead<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t, CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>(OverflowChunk_t *& head,
																OverflowChunk_t* node);  // 960
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::AddToHead(
						OverflowChunk_t* node);  // 560
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetKeyPtrFromIndex(
							int nIdx);  // 562
			}
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetValue(
				uint32 nKey,
				Vector4D nValue);  // 571
			Vector4D::Vector4D(
				const Vector4D& vOther);  // 571
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetValue(
				const CUtlStringToken& nTok,
				Vector4D nValue);  // 195
			Vector4D::Vector4D(
				vec_t X,
				vec_t Y,
				vec_t Z,
				vec_t W);  // 195
			CRenderAttributes::SetVector2DValue(
					CUtlStringToken nTokenID,
					Vector2D vValue);  // 517
			Vector2D::Vector2D(
				vec_t X,
				vec_t Y);  // 518
			Vector4D::Vector4D(
				vec_t X,
				vec_t Y,
				vec_t Z,
				vec_t W);  // 195
			Vector4D::Vector4D(
				const Vector4D& vOther);  // 571
			{
				__m128i retVal; // 1105
				_mm_set_epi32(int __q3,
						int __q2,
						int __q1,
						int __q0);  // 648
				_mm_set1_epi32(int __A); // 1106
			}
			ReplicateIX4<>(int nValue); // 356
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						const int  nIndex; // 220
					}
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
				}
			}
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 311
			{
				OverflowChunk_t& p; // 317
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 15721
				CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 15731
				CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 15741
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1151
				CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								OverflowChunk_t* pNode);  // 1151
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 317
				CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								OverflowChunk_t* pNode);  // 1156
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 317
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 319
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
							int nIdx);  // 322
				CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 317
			}
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					Vector4D** pValueOut);  // 309
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetValuePtrFromIndex(
						int nIdx);  // 314
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					Vector4D** pValueOut);  // 356
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					uint32 nKey,
					Vector4D** pValueOut);  // 547
			Vector4D::operator=(
					const Vector4D& vOther);  // 566
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 330
			{
				OverflowChunk_t& p; // 337
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 32424
				CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 32434
				CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 32444
				CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								OverflowChunk_t* pNode);  // 1151
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 337
				CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								OverflowChunk_t* pNode);  // 1156
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 337
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 339
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetKeyPtrFromIndex(
							int nIdx);  // 342
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
							int nIdx);  // 343
				CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 337
			}
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexAndKeyOfMatch(
						i32x4 n4Key,
						uint32** pKeyOut,
						Vector4D** pValueOut);  // 328
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetKeyPtrFromIndex(
						int nIdx);  // 333
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetValuePtrFromIndex(
						int nIdx);  // 334
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexAndKeyOfMatch(
						i32x4 n4Key,
						uint32** pKeyOut,
						Vector4D** pValueOut);  // 556
			{
				OverflowChunk_t* pNew; // 559
				_mm_store_ps(float* __P,
						__m128 __A);  // 2680
				StoreAlignedIntSIMD<>(i32x4& pSIMD,
							const fltx4& a);  // 39
				SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::CUtlAttributeListChunk(); // 254
				OverflowChunk_t::OverflowChunk_t(); // 559
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
							int nIdx);  // 563
				AddToHead<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t, CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>(OverflowChunk_t *& head,
																OverflowChunk_t* node);  // 960
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::AddToHead(
						OverflowChunk_t* node);  // 560
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetKeyPtrFromIndex(
							int nIdx);  // 562
			}
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetValue(
				uint32 nKey,
				Vector4D nValue);  // 571
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetValue(
				const CUtlStringToken& nTok,
				Vector4D nValue);  // 195
			CRenderAttributes::SetVector2DValue(
					CUtlStringToken nTokenID,
					Vector2D vValue);  // 518
		}
	}
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator->(); // 485
	CUtlStringToken::CUtlStringToken(); // 485
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 491
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		IntVector4D nValue);  // 515
	CRenderAttributes::SetComboValue(
			CUtlStringToken nTokenID,
			uint8 nValue);  // 504
} /* size: 0, variables: 6, inline expansions: 6 (127 bytes) */

// <033BD180> ../scenesystem/scenegfxresources.cpp:527
// variables: 10
// function calls: 16
IndexBufferHandle_t CreateNxNTesselatedIndexBuffer(int nNumU, int nNumV, int nBaseIndex, int nIndexStride)
{
	int nNumVerts; // 530
	IndexBufferHandle_t hIB; // 531
	CRenderContextPtr pRenderContext; // 533
	CIndexData<short unsigned int> ib; // 534
	{
		int nV; // 536
		{
			uint16 nVertBase; // 538
			{
				int nU; // 539
				{
				}
				CIndexDataBase<short unsigned int>::Index2(
					uint16 nIndex1,
					uint16 nIndex2);  // 541
				{
				}
				CIndexDataBase<short unsigned int>::Index2(
					uint16 nIndex1,
					uint16 nIndex2);  // 542
				{
				}
				CIndexDataBase<short unsigned int>::Index2(
					uint16 nIndex1,
					uint16 nIndex2);  // 543
			}
		}
	}
	CreateIndexBuffer<short unsigned int>(int nNumIndices,
						const char* pDebugName,
						const char* pBudgetGroupName);  // 531
	CRenderContextPtr::CRenderContextPtr<>(
				IRenderDevice* pDevice,
				const char* pDebugStringFmt);  // 533
	CIndexDataBase<short unsigned int>::ClearIndexFields(); // 89
	CIndexDataBase<short unsigned int>::CIndexDataBase(); // 325
	CIndexData<short unsigned int>::Init(
		IRenderContext* pRenderContext,
		IndexBufferHandle_t hIndexBuffer);  // 328
	CIndexData<short unsigned int>::CIndexData(
			IRenderContext* pRenderContext,
			IndexBufferHandle_t hIndexBuffer);  // 534
	{
		LockDesc_t desc; // 459
		bool bOk; // 460
	}
	{
	}
	{
	}
	CIndexData<short unsigned int>::Lock(
		int nMaxIndexCount);  // 535
	{
		LockDesc_t desc; // 492
	}
	{
	}
	CIndexData<short unsigned int>::Unlock(); // 547
	{
	}
	{
	}
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 105
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 343
	CIndexData<short unsigned int>::~CIndexData(); // 549
	CRenderContextPtr::Release(); // 845
	CRenderContextPtr::~CRenderContextPtr(); // 549
} /* size: 0, variables: 4, inline expansions: 13 (845 bytes) */

// <033BCABA> ../scenesystem/scenegfxresources.cpp:551
// variables: 8
// function calls: 16
IndexBufferHandle_t CreateManyQuadsIndexBuffer(int nNumQuads)
{
	IndexBufferHandle_t hIB; // 553
	CRenderContextPtr pRenderContext; // 555
	CIndexData<short unsigned int> ib; // 556
	{
		int i; // 558
		{
			const uint16  nVertBase; // 560
			{
			}
			CIndexDataBase<short unsigned int>::Index2(
				uint16 nIndex1,
				uint16 nIndex2);  // 561
			{
			}
			CIndexDataBase<short unsigned int>::Index2(
				uint16 nIndex1,
				uint16 nIndex2);  // 562
			{
			}
			CIndexDataBase<short unsigned int>::Index2(
				uint16 nIndex1,
				uint16 nIndex2);  // 563
		}
	}
	CreateIndexBuffer<short unsigned int>(int nNumIndices,
						const char* pDebugName,
						const char* pBudgetGroupName);  // 553
	CRenderContextPtr::CRenderContextPtr<>(
				IRenderDevice* pDevice,
				const char* pDebugStringFmt);  // 555
	CIndexDataBase<short unsigned int>::ClearIndexFields(); // 89
	CIndexDataBase<short unsigned int>::CIndexDataBase(); // 325
	CIndexData<short unsigned int>::Init(
		IRenderContext* pRenderContext,
		IndexBufferHandle_t hIndexBuffer);  // 328
	CIndexData<short unsigned int>::CIndexData(
			IRenderContext* pRenderContext,
			IndexBufferHandle_t hIndexBuffer);  // 556
	{
		LockDesc_t desc; // 459
		bool bOk; // 460
	}
	{
	}
	{
	}
	CIndexData<short unsigned int>::Lock(
		int nMaxIndexCount);  // 557
	{
		LockDesc_t desc; // 492
	}
	{
	}
	CIndexData<short unsigned int>::Unlock(); // 565
	{
	}
	{
	}
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 105
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 343
	CIndexData<short unsigned int>::~CIndexData(); // 567
	CRenderContextPtr::Release(); // 845
	CRenderContextPtr::~CRenderContextPtr(); // 567
} /* size: 0, variables: 3, inline expansions: 13 (856 bytes) */

// <033BCA94> ../scenesystem/scenegfxresources.cpp:573
int GetNumIndicesForNxNTriTripTessellation(int nTessellationLevel)
{
} /* size: 0 */

// <033BC804> ../scenesystem/scenegfxresources.cpp:581
// variables: 8
// function calls: 4
void FillPreTessPatchIB(IndexBufferHandle_t hIB, int nTessellationLevel, int nIndices)
{
	CRenderContextPtr pCtx; // 583
	int nTotalIBBytes; // 586
	uint32* pIndices; // 587
	LockDesc_t lockDesc; // 588
	int nSubdivLevel; // 593
	int iVertIndex; // 595
	{
		int v; // 596
		{
			int u; // 599
		}
	}
	CRenderContextPtr::CRenderContextPtr<>(
				IRenderDevice* pDevice,
				const char* pDebugStringFmt);  // 583
	CRenderContextPtr::operator->(); // 589
	CRenderContextPtr::Release(); // 845
	CRenderContextPtr::~CRenderContextPtr(); // 618
} /* size: 600, variables: 6, inline expansions: 4 (78 bytes) */

// <033BC524> ../scenesystem/scenegfxresources.cpp:624
// variables: 11
// function calls: 4
void FillPreTessPatchVB(VertexBufferHandle_t hVB, int nTessellationLevel, int nVertices)
{
	CRenderContextPtr pCtx; // 626
	int nTotalVBBytes; // 628
	Vector2D* pVertices; // 629
	LockDesc_t lockDesc; // 630
	int nSubdivLevel; // 634
	float flUStep; // 639
	float flVStep; // 640
	float flVStart; // 642
	{
		int v; // 643
		{
			float flUStart; // 645
			{
				int u; // 646
			}
		}
	}
	CRenderContextPtr::CRenderContextPtr<>(
				IRenderDevice* pDevice,
				const char* pDebugStringFmt);  // 626
	CRenderContextPtr::operator->(); // 631
	CRenderContextPtr::Release(); // 845
	CRenderContextPtr::~CRenderContextPtr(); // 659
} /* size: 310, variables: 8, inline expansions: 4 (78 bytes) */

// <033BC3DD> ../scenesystem/scenegfxresources.cpp:661
// variables: 3
// function calls: 2
IndexBufferHandle_t CreateNxNTriStrippedIB(int nDivisionsPerSide)
{
	int nTessellationLevel; // 664
	int nIndices; // 666
	IndexBufferHandle_t hIB; // 668
	CreateIndexBuffer<unsigned int>(int nNumIndices,
					const char* pDebugName,
					const char* pBudgetGroupName);  // 668
	GetNumIndicesForNxNTriTripTessellation(int nTessellationLevel); // 666
} /* size: 155, variables: 3, inline expansions: 2 (74 bytes) */

// <033BC16E> ../scenesystem/scenegfxresources.cpp:675
// variables: 5
// function calls: 6
VertexBufferHandle_t CreateNxNTriStrippedVB(int nDivisionsPerSide)
{
	int nTessellationLevel; // 678
	int nVertices; // 680
	BufferDesc_t vertexDesc; // 683
	CBufferString debugName; // 687
	VertexBufferHandle_t hVB; // 691
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 687
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 689
	CBufferString::~CBufferString(); // 696
} /* size: 223, variables: 5, inline expansions: 6 (116 bytes) */

// <033BB546> ../scenesystem/scenegfxresources.cpp:698
// variables: 6
// function calls: 47
HRenderTexture CreateSolidTexture(const char* pName, int nWidth, int nHeight, int nDepth, const Vector4D& vColor, bool bIsVolumeTexture, bool bIsCubeTexture, bool bIsTextureArray)
{
	const char   __FUNCTION__; // 54279
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > tmpMem; // 701
	int nSize; // 702
	CTextureCreationDesc spec; // 715
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 700
	}
	{
		int i; // 708
	}
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVector(); // 701
	CUtlMemory<unsigned char, int>::Grow(
		int num);  // 806
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
		int count);  // 707
	V_memset(void* dest,
		int fill,
		size_t count);  // 142
	CTextureDesc::CTextureDesc(); // 221
	Vector4D::Vector4D(); // 221
	CUtlMemory<TextureCreationExtraData_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<TextureCreationExtraData_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::CUtlVector(); // 221
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 222
	CTextureCreationDesc::CTextureCreationDesc(); // 715
	operator|=(RuntimeTextureSpecificationFlags_t& a,
			RuntimeTextureSpecificationFlags_t b);  // 724
	operator|(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 35
	operator|=(RuntimeTextureSpecificationFlags_t& a,
			RuntimeTextureSpecificationFlags_t b);  // 728
	operator|(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 35
	operator|=(RuntimeTextureSpecificationFlags_t& a,
			RuntimeTextureSpecificationFlags_t b);  // 732
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::RemoveAll(); // 1798
	CUtlMemory<TextureCreationExtraData_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<TextureCreationExtraData_t, int>::Purge(); // 903
	CUtlMemory<TextureCreationExtraData_t, int>::Purge(); // 1799
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::Purge(); // 560
	ValidateAlignment<TextureCreationExtraData_t>(void); // 508
	CUtlMemory<TextureCreationExtraData_t, int>::Purge(); // 510
	CUtlMemory<TextureCreationExtraData_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::~CUtlVector(); // 234
	CTextureCreationDesc::~CTextureCreationDesc(); // 736
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 1799
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 736
} /* size: 0, variables: 4, inline expansions: 47 (901 bytes) */

// <033D2F09> ../scenesystem/scenegfxresources.cpp:738
// variables: 4
// function calls: 43
HRenderTexture CreateSolidTexture16BitSingleChannel(const char* pName, bool bIsTextureArray, bool bIsCubeTexture, bool bIsVolumeTexture, float flValue, int nDepth, int nHeight, int nWidth)
{
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> > tmpMem; // 741
	int nSize; // 742
	CTextureCreationDesc spec; // 752
	CUtlMemory<short unsigned int, int>::Grow(
		int num);  // 806
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::SetCount(
		int count);  // 747
	CUtlMemory<short unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<short unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >::CUtlVector(); // 741
	{
		int i; // 748
	}
	V_memset(void* dest,
		int fill,
		size_t count);  // 142
	CTextureDesc::CTextureDesc(); // 221
	Vector4D::Vector4D(); // 221
	CUtlMemory<TextureCreationExtraData_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<TextureCreationExtraData_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::CUtlVector(); // 221
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 222
	CTextureCreationDesc::CTextureCreationDesc(); // 752
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::RemoveAll(); // 1798
	CUtlMemory<TextureCreationExtraData_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<TextureCreationExtraData_t, int>::Purge(); // 903
	CUtlMemory<TextureCreationExtraData_t, int>::Purge(); // 1799
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::Purge(); // 560
	ValidateAlignment<TextureCreationExtraData_t>(void); // 508
	CUtlMemory<TextureCreationExtraData_t, int>::Purge(); // 510
	CUtlMemory<TextureCreationExtraData_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::~CUtlVector(); // 234
	CTextureCreationDesc::~CTextureCreationDesc(); // 774
	CUtlMemory<short unsigned int, int>::Purge(); // 903
	CUtlMemory<short unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Purge(); // 560
	ValidateAlignment<short unsigned int>(void); // 508
	CUtlMemory<short unsigned int, int>::Purge(); // 510
	CUtlMemory<short unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlVector(); // 774
	operator|=(RuntimeTextureSpecificationFlags_t& a,
			RuntimeTextureSpecificationFlags_t b);  // 770
} /* size: 311, variables: 3, inline expansions: 43 (648 bytes) */

// <033BB442> ../scenesystem/scenegfxresources.cpp:738
// variables: 6
HRenderTexture CreateSolidTexture16BitSingleChannel(const char* pName, int nWidth, int nHeight, int nDepth, float flValue, bool bIsVolumeTexture, bool bIsCubeTexture, bool bIsTextureArray)
{
	const char   __FUNCTION__; // 54710
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> > tmpMem; // 741
	int nSize; // 742
	CTextureCreationDesc spec; // 752
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 740
	}
	{
		int i; // 748
	}
} /* size: 0, variables: 4 */

// <033BB39E> ../scenesystem/scenegfxresources.cpp:777
// variables: 2
void CSceneSystem::GetWellKnownInputLayoutFields(SceneSystemWellKnownInputLayoutID_t nID, int* pNumFieldsOut)
{
	const char   __FUNCTION__; // 54551
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 779
	}
} /* size: 0, variables: 1 */

// <033B7E6E> ../scenesystem/scenegfxresources.cpp:784
// variables: 32
// function calls: 159
void CSceneSystem::InitGfxObjects()
{
	CRenderContextPtr pCtx; // 786
	BufferDesc_t instIDDesc; // 788
	int nVertexDataSize; // 789
	LockDesc_t bufferLock; // 790
	const char   __FUNCTION__; // 54171
	InstanceEntryID* pIDs; // 822
	CTextureCreationDesc compositeMorphTextureAtlasTexHeader; // 878
	CIndexData<short unsigned int> ib; // 926
	BufferDesc_t vertexDesc; // 946
	CVertexData<Vertex2DPos_t> vb; // 954
	{
		BufferDesc_t bufferDesc; // 795
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 793
		}
	}
	{
		int nSlot; // 823
	}
	{
		int nCMTAtlasWidth; // 847
		int nCMTAtlasHeight; // 848
		int nCMTAtlasChunkSize; // 849
		CMTAtlasDesc_t::InitSize(
			int nChunkSize,
			int nLogicalWidth,
			int nHeight);  // 875
	}
	{
		RenderViewport_t viewport; // 898
		CRenderContextPtr pRenderContext; // 900
		Vector4D vClearColor; // 902
		CRenderContextPtr::CRenderContextPtr<char const*>(
						IRenderDevice* pDevice,
						const RenderTargetDesc_t& renderTargetDesc);  // 900
		RenderViewport_t::RenderViewport_t(); // 898
		RenderViewport_t::Init(
			int x,
			int y,
			int nWidth,
			int nHeight,
			float flMinZ,
			float flMaxZ);  // 899
		CRenderContextPtr::operator->(); // 901
		Vector4D::Vector4D(
			vec_t X,
			vec_t Y,
			vec_t Z,
			vec_t W);  // 902
		RenderClearInfo_t::RenderClearInfo_t(
					const Vector4D& vecRGBAColor,
					int nFlags);  // 241
		IRenderContext::Clear(
			const Vector4D& vecRGBAColor,
			int nFlags);  // 903
		CRenderContextPtr::Release(); // 845
		CRenderContextPtr::~CRenderContextPtr(); // 904
	}
	{
		float* pIDsOut; // 916
		{
			int j; // 917
		}
	}
	{
		int i; // 972
		{
			InputLayerDesciptorRecord_t* pDesc; // 974
			RenderInputLayout_t hBaseLayout; // 975
		}
	}
	{
		CTextureCreationDesc spec; // 1029
		uint32 tmpMem; // 1037
		V_memset(void* dest,
			int fill,
			size_t count);  // 142
		CTextureDesc::CTextureDesc(); // 221
		Vector4D::Vector4D(); // 221
		CUtlMemory<TextureCreationExtraData_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<TextureCreationExtraData_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::CUtlVector(); // 221
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 222
		CTextureCreationDesc::CTextureCreationDesc(); // 1029
		CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 673
		CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1039
		CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::RemoveAll(); // 1798
		CUtlMemory<TextureCreationExtraData_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<TextureCreationExtraData_t, int>::Purge(); // 903
		CUtlMemory<TextureCreationExtraData_t, int>::Purge(); // 1799
		CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::Purge(); // 560
		ValidateAlignment<TextureCreationExtraData_t>(void); // 508
		CUtlMemory<TextureCreationExtraData_t, int>::Purge(); // 510
		CUtlMemory<TextureCreationExtraData_t, int>::~CUtlMemory(); // 562
		CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::~CUtlVector(); // 234
		CTextureCreationDesc::~CTextureCreationDesc(); // 1040
	}
	CRenderContextPtr::CRenderContextPtr<>(
				IRenderDevice* pDevice,
				const char* pDebugStringFmt);  // 786
	CMTAtlasDesc_t::InitSize(
		int nChunkSize,
		int nLogicalWidth,
		int nHeight);  // 835
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 222
	V_memset(void* dest,
		int fill,
		size_t count);  // 142
	CTextureDesc::CTextureDesc(); // 221
	Vector4D::Vector4D(); // 221
	CUtlMemory<TextureCreationExtraData_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<TextureCreationExtraData_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::CUtlVector(); // 221
	CTextureCreationDesc::CTextureCreationDesc(); // 878
	Vector4D::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz,
		vec_t iw);  // 886
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 673
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 889
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 890
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 890
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 175
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 177
	RenderTargetDesc_t::Init(
		HRenderTexture hColor,
		HRenderTexture hDepth,
		RenderColorSpace_t allowSrgbWrites);  // 890
	CreateIndexBuffer<short unsigned int>(int nNumIndices,
						const char* pDebugName,
						const char* pBudgetGroupName);  // 925
	CIndexData<short unsigned int>::Init(
		IRenderContext* pRenderContext,
		IndexBufferHandle_t hIndexBuffer);  // 328
	CIndexDataBase<short unsigned int>::ClearIndexFields(); // 89
	CIndexDataBase<short unsigned int>::CIndexDataBase(); // 325
	CIndexData<short unsigned int>::CIndexData(
			IRenderContext* pRenderContext,
			IndexBufferHandle_t hIndexBuffer);  // 926
	{
		LockDesc_t desc; // 459
		bool bOk; // 460
	}
	{
	}
	CIndexData<short unsigned int>::Lock(
		int nMaxIndexCount);  // 927
	CIndexDataBase<short unsigned int>::Index2(
		uint16 nIndex1,
		uint16 nIndex2);  // 928
	{
	}
	CIndexDataBase<short unsigned int>::Index2(
		uint16 nIndex1,
		uint16 nIndex2);  // 929
	{
	}
	CIndexDataBase<short unsigned int>::Index2(
		uint16 nIndex1,
		uint16 nIndex2);  // 930
	{
		LockDesc_t desc; // 492
	}
	{
	}
	CIndexData<short unsigned int>::Unlock(); // 931
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 180
	CVertexDataBase<Vertex2DPos_t>::ClearVertexFields(); // 495
	CVertexData<Vertex2DPos_t>::Init(
		IRenderContext* pRenderContext,
		VertexBufferHandle_t hVertexBuffer);  // 436
	Vector2D::Vector2D(); // 72
	Vertex2DPos_t::Vertex2DPos_t(); // 165
	CVertexDataBase<Vertex2DPos_t>::ClearVertexFields(); // 171
	CVertexDataBase<Vertex2DPos_t>::CVertexDataBase(); // 433
	CVertexData<Vertex2DPos_t>::CVertexData(
			IRenderContext* pRenderContext,
			VertexBufferHandle_t hVertexBuffer);  // 954
	{
		LockDesc_t desc; // 557
		bool bOk; // 558
	}
	{
	}
	CVertexData<Vertex2DPos_t>::Lock(
		int nMaxVertexCount);  // 956
	Vector2D::Init(
		vec_t ix,
		vec_t iy);  // 958
	{
	}
	CVertexDataBase<Vertex2DPos_t>::AdvanceVertex(); // 270
	{
	}
	Vector2D::operator=(
			const Vector2D& vOther);  // 72
	Vertex2DPos_t::operator=(
			const Vertex2DPos_t  &);  // 355
	CVertexDataBase<Vertex2DPos_t>::AdvanceVertex(); // 959
	Vector2D::Init(
		vec_t ix,
		vec_t iy);  // 961
	{
	}
	CVertexDataBase<Vertex2DPos_t>::AdvanceVertex(); // 270
	{
	}
	Vector2D::operator=(
			const Vector2D& vOther);  // 72
	Vertex2DPos_t::operator=(
			const Vertex2DPos_t  &);  // 355
	CVertexDataBase<Vertex2DPos_t>::AdvanceVertex(); // 962
	Vector2D::Init(
		vec_t ix,
		vec_t iy);  // 964
	{
	}
	CVertexDataBase<Vertex2DPos_t>::AdvanceVertex(); // 270
	{
	}
	Vector2D::operator=(
			const Vector2D& vOther);  // 72
	Vertex2DPos_t::operator=(
			const Vertex2DPos_t  &);  // 355
	CVertexDataBase<Vertex2DPos_t>::AdvanceVertex(); // 965
	Vector2D::Init(
		vec_t ix,
		vec_t iy);  // 967
	{
	}
	CVertexDataBase<Vertex2DPos_t>::AdvanceVertex(); // 270
	{
	}
	Vector2D::operator=(
			const Vector2D& vOther);  // 72
	Vertex2DPos_t::operator=(
			const Vertex2DPos_t  &);  // 355
	CVertexDataBase<Vertex2DPos_t>::AdvanceVertex(); // 968
	{
		LockDesc_t desc; // 588
	}
	{
	}
	CVertexData<Vertex2DPos_t>::Unlock(); // 970
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 1007
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 673
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1007
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 1008
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 673
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1008
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 1009
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 673
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1009
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 1010
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 673
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1010
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 1011
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 673
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1011
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 1012
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 673
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1012
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 1013
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 673
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1013
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 673
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1014
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 673
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1015
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 1024
	CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1024
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 1026
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 673
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1026
	CVertexData<Vertex2DPos_t>::Release(); // 502
	CVertexData<Vertex2DPos_t>::Release(); // 461
	{
	}
	{
	}
	CVertexDataBase<Vertex2DPos_t>::~CVertexDataBase(); // 194
	CVertexDataBase<Vertex2DPos_t>::~CVertexDataBase(); // 462
	CVertexData<Vertex2DPos_t>::~CVertexData(); // 1054
	{
	}
	{
	}
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 105
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 343
	CIndexData<short unsigned int>::~CIndexData(); // 1054
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::RemoveAll(); // 1798
	CUtlMemory<TextureCreationExtraData_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<TextureCreationExtraData_t, int>::Purge(); // 903
	CUtlMemory<TextureCreationExtraData_t, int>::Purge(); // 1799
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::Purge(); // 560
	ValidateAlignment<TextureCreationExtraData_t>(void); // 508
	CUtlMemory<TextureCreationExtraData_t, int>::Purge(); // 510
	CUtlMemory<TextureCreationExtraData_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::~CUtlVector(); // 234
	CTextureCreationDesc::~CTextureCreationDesc(); // 1054
	CRenderContextPtr::Release(); // 845
	CRenderContextPtr::~CRenderContextPtr(); // 1054
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 1020
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 673
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1020
} /* size: 0, variables: 10, inline expansions: 125 (4308 bytes) */

// <033D3F75> ../scenesystem/scenegfxresources.cpp:1056
// function call: 1
void CSceneSystem::OnMaxSwapChainDimensionsChanged(int nNewWidth, int nNewHeight)
{
	CSceneSystem::SetRenderTargetSize(
				SceneSystemRenderTargetSize_t nID,
				int nWidth,
				int nHeight);  // 1064
} /* size: 91, inline expansions: 1 (20 bytes) */

// <033B7E3B> ../scenesystem/scenegfxresources.cpp:1056
void CSceneSystem::OnMaxSwapChainDimensionsChanged(int nNewWidth, int nNewHeight)
{
} /* size: 0 */

// <033B7A0A> ../scenesystem/scenegfxresources.cpp:1067
// variables: 22
// function calls: 5
void CSceneSystem::ShutdownGfxObjects()
{
	{
		IndexBufferHandle_t& hIdxBuf; // 1093
		IndexBufferHandle_t__ *& __for_range; // 5601
		IndexBufferHandle_t__** __for_begin; // 5607
		IndexBufferHandle_t__** __for_end; // 5607
	}
	{
		VertexBufferHandle_t& hVBuf; // 1102
		VertexBufferHandle_t__ *& __for_range; // 5635
		VertexBufferHandle_t__** __for_begin; // 5641
		VertexBufferHandle_t__** __for_end; // 5641
	}
	{
		int i; // 1111
		{
			int j; // 1113
		}
	}
	{
		CSimpleStaticShapeDesc& shape; // 1123
		CSimpleStaticShapeDesc& __for_range; // 5669
		CSimpleStaticShapeDesc* __for_begin; // 10326
		CSimpleStaticShapeDesc* __for_end; // 10326
	}
	{
		CStrongHandle<InfoForResourceTypeIMaterial2>& hMaterial; // 1128
		CStrongHandle<InfoForResourceTypeIMaterial2>& __for_range; // 5691
		CStrongHandle<InfoForResourceTypeIMaterial2>* __for_begin; // 55135
		CStrongHandle<InfoForResourceTypeIMaterial2>* __for_end; // 55135
		CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 1130
		CStrongHandle<InfoForResourceTypeIMaterial2>::Init(
			ResourceHandleTyped_t hResource);  // 673
		CStrongHandle<InfoForResourceTypeIMaterial2>::operator=(
				const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 1130
	}
	{
		CStrongHandle<InfoForResourceTypeCTextureBase>& hTexture; // 1133
		CStrongHandle<InfoForResourceTypeCTextureBase>& __for_range; // 5713
		CStrongHandle<InfoForResourceTypeCTextureBase>* __for_begin; // 20616
		CStrongHandle<InfoForResourceTypeCTextureBase>* __for_end; // 20616
	}
} /* size: 549 */

// <033B797B> ../scenesystem/scenegfxresources.cpp:1153
// variables: 2
void CSceneSystem::GetWellKnownVertexBuffer(SceneSystemWellKnownVertexBufferObjectID_t nID)
{
	const char   __FUNCTION__; // 54431
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1155
	}
} /* size: 0, variables: 1 */

// <033B78EC> ../scenesystem/scenegfxresources.cpp:1159
// variables: 2
void CSceneSystem::GetWellKnownIndexBuffer(SceneSystemWellKnownIndexBufferObjectID_t nID)
{
	const char   __FUNCTION__; // 54404
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1161
	}
} /* size: 0, variables: 1 */

// <033B7848> ../scenesystem/scenegfxresources.cpp:1165
// variables: 2
void CSceneSystem::GetWellKnownInputLayout(SceneSystemWellKnownInputLayoutID_t nID, InputLayoutVariation_t nVariation)
{
	const char   __FUNCTION__; // 54404
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1167
	}
} /* size: 0, variables: 1 */

// <033B770E> ../scenesystem/scenegfxresources.cpp:1172
// variables: 2
// function calls: 4
void CSceneSystem::GetWellKnownTexture(SceneSystemWellKnownTextureObjectID_t nID)
{
	const char   __FUNCTION__; // 54306
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1174
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 1175
} /* size: 0, variables: 1, inline expansions: 4 (34 bytes) */

// <033D2B34> ../scenesystem/scenegfxresources.cpp:1178
// function call: 1
void CSceneSystem::GetWellKnownMaterial(SceneSystemWellKnownMaterialObjectID_t nID)
{
	{
	}
	CStrongHandle<InfoForResourceTypeIMaterial2>::HasData(); // 1181
} /* size: 0, inline expansions: 1 (39 bytes) */

// <033B76A9> ../scenesystem/scenegfxresources.cpp:1178
// variables: 2
void CSceneSystem::GetWellKnownMaterial(SceneSystemWellKnownMaterialObjectID_t nID)
{
	const char   __FUNCTION__; // 54333
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1180
	}
} /* size: 0, variables: 1 */

// <033B75F2> ../scenesystem/scenegfxresources.cpp:1187
// variables: 2
// function call: 1
void CSceneSystem::GetWellKnownMaterialHandle(SceneSystemWellKnownMaterialObjectID_t nID)
{
	const char   __FUNCTION__; // 54480
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1189
	}
	CStrongHandle<InfoForResourceTypeIMaterial2>::HasHandle(); // 1190
} /* size: 0, variables: 1, inline expansions: 1 (22 bytes) */

// <033B7563> ../scenesystem/scenegfxresources.cpp:1196
// variables: 2
void CSceneSystem::GetWellKnownShape(SceneSystemWellKnownShapeID_t nID)
{
	const char   __FUNCTION__; // 54252
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1198
	}
} /* size: 0, variables: 1 */

// <033B745C> ../scenesystem/scenegfxresources.cpp:1202
// variables: 3
void CSceneSystem::GetRenderTargetSize(SceneSystemRenderTargetSize_t nSize, int* pOutWidth, int* pOutHeight)
{
	const char   __FUNCTION__; // 54306
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1204
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1207
	}
} /* size: 0, variables: 1 */

// <033D2AD2> ../scenesystem/scenegfxresources.cpp:1213
void CSceneSystem::SetRenderTargetSize(SceneSystemRenderTargetSize_t nID, int nWidth, int nHeight)
{
	{
	}
} /* size: 0 */

// <033B73DD> ../scenesystem/scenegfxresources.cpp:1213
// variables: 2
void CSceneSystem::SetRenderTargetSize(SceneSystemRenderTargetSize_t nID, int nWidth, int nHeight)
{
	const char   __FUNCTION__; // 54306
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1215
	}
} /* size: 0, variables: 1 */

// <033B6817> ../scenesystem/scenegfxresources.cpp:1220
// variables: 2
// function calls: 37
void CBlitTextureToRenderTargetLayer::CBlitTextureToRenderTargetLayer(const RenderViewport_t& srcViewport, BlitSetup_t* setup)
{
	IProceduralLayerRenderer::IProceduralLayerRenderer(); // 1220
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 81
	BlitSetup_t::BlitSetup_t(
			const BlitSetup_t  &);  // 1220
	RsBlendStateDesc_t::SetAlphaToCoverageEnabled(
					bool bEnable);  // 453
	RsBlendStateDesc_t::SetIndependentBlendEnabled(
					bool bEnable);  // 454
	{
		int i; // 455
		RsBlendStateDesc_t::SetAlphaBlendEnabled(
					bool bEnable,
					int nRenderTargetIdx);  // 457
		RsBlendStateDesc_t::SetSrcBlend(
				RsBlendMode_t blendMode,
				int nRenderTargetIdx);  // 458
		RsBlendStateDesc_t::SetRenderTargetWriteMask(
					uint8 nWriteMask,
					int nRenderTargetIdx);  // 464
		RsBlendStateDesc_t::SetDestBlend(
				RsBlendMode_t blendMode,
				int nRenderTargetIdx);  // 459
		RsBlendStateDesc_t::SetBlendOp(
				RsBlendOp_t blendOp,
				int nRenderTargetIdx);  // 460
		RsBlendStateDesc_t::SetSrcBlendAlpha(
				RsBlendMode_t blendMode,
				int nRenderTargetIdx);  // 461
		RsBlendStateDesc_t::SetDestBlendAlpha(
					RsBlendMode_t blendMode,
					int nRenderTargetIdx);  // 462
		RsBlendStateDesc_t::SetBlendOpAlpha(
				RsBlendOp_t blendOp,
				int nRenderTargetIdx);  // 463
		RsBlendStateDesc_t::SetSrgbWriteEnabled(
					bool bEnable,
					int nRenderTargetIdx);  // 465
	}
	RsBlendStateDesc_t::RsBlendStateDesc_t(
				bool bBlendEnable,
				bool bAlphaToCoverageEnable,
				bool bIndependendBlendEnable,
				RsBlendMode_t srcBlend,
				RsBlendMode_t destBlend,
				RsBlendOp_t blendOp,
				RsBlendMode_t srcBlendAlpha,
				RsBlendMode_t destBlendAlpha,
				RsBlendOp_t blendOpAlpha,
				uint8 nRenderTargetWriteMask,
				bool bSrgbWriteEnable);  // 646
	DefaultBlendStateDesc(void); // 640
	DefaultBlendStateDesc(void); // 656
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 656
	RsBlendStateDesc_t::RsBlendStateDesc_t(); // 1220
	RsBlendStateDesc_t::SetAlphaToCoverageEnabled(
					bool bEnable);  // 453
	RsBlendStateDesc_t::SetIndependentBlendEnabled(
					bool bEnable);  // 454
	{
		int i; // 455
		RsBlendStateDesc_t::SetAlphaBlendEnabled(
					bool bEnable,
					int nRenderTargetIdx);  // 457
		RsBlendStateDesc_t::SetSrcBlend(
				RsBlendMode_t blendMode,
				int nRenderTargetIdx);  // 458
		RsBlendStateDesc_t::SetRenderTargetWriteMask(
					uint8 nWriteMask,
					int nRenderTargetIdx);  // 464
		RsBlendStateDesc_t::SetDestBlend(
				RsBlendMode_t blendMode,
				int nRenderTargetIdx);  // 459
		RsBlendStateDesc_t::SetBlendOp(
				RsBlendOp_t blendOp,
				int nRenderTargetIdx);  // 460
		RsBlendStateDesc_t::SetSrcBlendAlpha(
				RsBlendMode_t blendMode,
				int nRenderTargetIdx);  // 461
		RsBlendStateDesc_t::SetDestBlendAlpha(
					RsBlendMode_t blendMode,
					int nRenderTargetIdx);  // 462
		RsBlendStateDesc_t::SetBlendOpAlpha(
				RsBlendOp_t blendOp,
				int nRenderTargetIdx);  // 463
		RsBlendStateDesc_t::SetSrgbWriteEnabled(
					bool bEnable,
					int nRenderTargetIdx);  // 465
	}
	RsBlendStateDesc_t::RsBlendStateDesc_t(
				bool bBlendEnable,
				bool bAlphaToCoverageEnable,
				bool bIndependendBlendEnable,
				RsBlendMode_t srcBlend,
				RsBlendMode_t destBlend,
				RsBlendOp_t blendOp,
				RsBlendMode_t srcBlendAlpha,
				RsBlendMode_t destBlendAlpha,
				RsBlendOp_t blendOpAlpha,
				uint8 nRenderTargetWriteMask,
				bool bSrgbWriteEnable);  // 646
	DefaultBlendStateDesc(void); // 640
	DefaultBlendStateDesc(void); // 1222
	RsBlendStateDesc_t::SetAlphaBlendEnabled(
				bool bEnable,
				int nRenderTargetIdx);  // 1226
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 81
	BlitSetup_t::BlitSetup_t(); // 1220
} /* size: 625, inline expansions: 19 (1426 bytes) */

// <033B67E4> ../scenesystem/scenegfxresources.cpp:1220
void CBlitTextureToRenderTargetLayer::CBlitTextureToRenderTargetLayer(const RenderViewport_t& srcViewport, BlitSetup_t* setup)
{
} /* size: 0 */

// <033B311E> ../scenesystem/scenegfxresources.cpp:1231
// variables: 66
// function calls: 207
void CBlitTextureToRenderTargetLayer::Render(ISceneView* pViewInterface, IRenderContext* pRenderContext, ISceneLayer* pLayer, SceneSystemPerFrameStats_t* pStats)
{
	const IMaterial2* pMat; // 1233
	IMaterialMode* pMode; // 1237
	HRenderTexture hTex; // 1241
	const CTextureDesc* pTex; // 1245
	CDynamicVertexData<VertexUVPos_t> vbQuad; // 1249
	RenderViewport_t dstViewport; // 1251
	ScreenSpaceVertex_t ssVerts; // 1254
	CRenderAttributes attributes; // 1276
	bool bIsVolumeTexture; // 1277
	int nSliceIdx; // 1280
	float flTexCoordW; // 1281
	{
		RsBlendStateHandle_t h; // 1291
	}
	CStrongHandle<InfoForResourceTypeIMaterial2>::HasData(); // 1181
	CSceneSystem::GetWellKnownMaterial(
				SceneSystemWellKnownMaterialObjectID_t nID);  // 1233
	CUtlStringToken::CUtlStringToken(); // 1237
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 1241
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 624
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 93
	TextureAttr_t::TextureAttr_t(
			HRenderTexture hT,
			int32 nMip);  // 624
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 376
	{
		int nIndex; // 381
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 272
		{
			const OverflowChunk_t& p; // 279
			const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 27760
			CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 27770
			CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 27780
			Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
			CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
							const OverflowChunk_t* pNode);  // 1160
			begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
			CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
							const OverflowChunk_t* pNode);  // 1165
			end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 281
			operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 279
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
						int nIdx);  // 284
		}
		CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
				i32x4 n4Key,
				const TextureAttrForStorage_t ** pValueOut);  // 270
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
					int nIdx);  // 275
		CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
				i32x4 n4Key,
				const TextureAttrForStorage_t ** pValueOut);  // 381
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>::ResourceHandleTyped_t(); // 993
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			ResourceHandleTyped_t hResource);  // 266
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				ResourceHandleTyped_t hResource);  // 993
		TextureAttr_t::TextureAttr_t(
				const TextureAttrForStorage_t& other);  // 383
	}
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::GetValueOrDefault(
				uint32 k,
				TextureAttr_t nDefault);  // 393
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 90
	TextureAttr_t::TextureAttr_t(
			const TextureAttr_t  &);  // 393
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::GetValueOrDefault(
				CUtlStringToken nTok,
				TextureAttr_t nDefault);  // 625
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 90
	TextureAttr_t::TextureAttr_t(
			const TextureAttr_t  &);  // 625
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 625
	CRenderAttributes::GetTextureValue(
			CUtlStringToken nTokenID,
			HRenderTexture defaultTxtr);  // 1241
	CWeakHandle<InfoForResourceTypeCTextureBase>::HasData(); // 1242
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1245
	CDynamicVertexData<VertexUVPos_t>::Lock(
		int nVertexCount);  // 680
	Vector::Vector(); // 103
	VertexPos_t::VertexPos_t(); // 257
	Vector2D::Vector2D(); // 257
	VertexUVPos_t::VertexUVPos_t(); // 165
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 180
	CVertexDataBase<VertexUVPos_t>::ClearVertexFields(); // 171
	CVertexDataBase<VertexUVPos_t>::CVertexDataBase(); // 673
	CDynamicVertexData<VertexUVPos_t>::CDynamicVertexData(
				IRenderContext* pRenderContext,
				int nVertexCount,
				const char* pDebugName,
				const char* pBudgetGroup);  // 1249
	RenderViewport_t::RenderViewport_t(); // 1251
	ISceneUtils::ComputeScreenSpaceVertices(
					const RenderViewport_t& viewport,
					const RenderViewport_t& destViewport,
					const RenderViewport_t& srcViewport,
					int nSrcTextureWidth,
					int nSrcTextureHeight,
					ScreenSpaceVertex_t* pVertices);  // 1255
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 103
	VertexPos_t::operator=(
			const VertexPos_t  &);  // 257
	Vector2D::operator=(
			const Vector2D& vOther);  // 257
	VertexUVPos_t::operator=(
			const VertexUVPos_t  &);  // 355
	{
	}
	CVertexDataBase<VertexUVPos_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexUVPos_t>::AdvanceVertex(); // 1259
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 1257
	Vector2D::operator=(
			const Vector2D& vOther);  // 1258
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 1261
	Vector2D::operator=(
			const Vector2D& vOther);  // 1262
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 103
	VertexPos_t::operator=(
			const VertexPos_t  &);  // 257
	Vector2D::operator=(
			const Vector2D& vOther);  // 257
	VertexUVPos_t::operator=(
			const VertexUVPos_t  &);  // 355
	{
	}
	CVertexDataBase<VertexUVPos_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexUVPos_t>::AdvanceVertex(); // 1263
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 1265
	Vector2D::operator=(
			const Vector2D& vOther);  // 1266
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 103
	VertexPos_t::operator=(
			const VertexPos_t  &);  // 257
	Vector2D::operator=(
			const Vector2D& vOther);  // 257
	VertexUVPos_t::operator=(
			const VertexUVPos_t  &);  // 355
	{
	}
	CVertexDataBase<VertexUVPos_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexUVPos_t>::AdvanceVertex(); // 1267
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 1269
	Vector2D::operator=(
			const Vector2D& vOther);  // 1270
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 103
	VertexPos_t::operator=(
			const VertexPos_t  &);  // 257
	Vector2D::operator=(
			const Vector2D& vOther);  // 257
	VertexUVPos_t::operator=(
			const VertexUVPos_t  &);  // 355
	{
	}
	CVertexDataBase<VertexUVPos_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexUVPos_t>::AdvanceVertex(); // 1271
	CDynamicVertexData<VertexUVPos_t>::Unlock(); // 760
	CDynamicVertexData<VertexUVPos_t>::Unlock(); // 639
	CDynamicVertexData<VertexUVPos_t>::Bind(
		int nSlot,
		int nOffset,
		int nStride);  // 640
	CDynamicVertexData<VertexUVPos_t>::UnlockAndBind(
			int nSlot,
			int nOffset,
			int nStride);  // 1273
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		IntVector4D nValue);  // 515
	CRenderAttributes::SetComboValue(
			CUtlStringToken nTokenID,
			uint8 nValue);  // 1278
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 376
	{
		int nIndex; // 381
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 272
		{
			const OverflowChunk_t& p; // 279
			const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 28357
			CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 28367
			CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 28377
			CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1160
			CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							const OverflowChunk_t* pNode);  // 1160
			CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 279
			CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							const OverflowChunk_t* pNode);  // 1165
			CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 279
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 281
			CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetValuePtrFromIndex(
						int nIdx);  // 284
			CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 279
		}
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
				i32x4 n4Key,
				const IntVector4D ** pValueOut);  // 270
		CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::GetValuePtrFromIndex(
					int nIdx);  // 275
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
				i32x4 n4Key,
				const IntVector4D ** pValueOut);  // 381
	}
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::GetValueOrDefault(
				uint32 k,
				IntVector4D nDefault);  // 393
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::GetValueOrDefault(
				CUtlStringToken nTok,
				IntVector4D nDefault);  // 465
	CRenderAttributes::GetIntValue(
			CUtlStringToken nTokenID,
			int nDefaultValue);  // 1280
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 1285
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		IntVector4D nValue);  // 571
	CRenderAttributes::SetBoolValue(
			CUtlStringToken nTokenID,
			bool bValue);  // 1285
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 1286
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		IntVector4D nValue);  // 571
	CRenderAttributes::SetBoolValue(
			CUtlStringToken nTokenID,
			bool bValue);  // 1286
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 1287
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 277
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 571
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 356
	{
		int i; // 212
		{
			int nTestResult; // 217
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 217
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 217
			{
				const int  nIndex; // 220
			}
		}
	}
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
			i32x4 i4KMatch);  // 311
	{
		OverflowChunk_t& p; // 317
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 15721
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 15731
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 15741
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1151
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 317
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 317
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 319
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
					int nIdx);  // 322
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 317
	}
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
			i32x4 n4Key,
			Vector4D** pValueOut);  // 309
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetValuePtrFromIndex(
				int nIdx);  // 314
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
			i32x4 n4Key,
			Vector4D** pValueOut);  // 356
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
			uint32 nKey,
			Vector4D** pValueOut);  // 547
	Vector4D::operator=(
			const Vector4D& vOther);  // 566
	{
		int i; // 212
		{
			int nTestResult; // 217
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 217
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 217
			{
				const int  nIndex; // 220
			}
		}
	}
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
			i32x4 i4KMatch);  // 330
	{
		OverflowChunk_t& p; // 337
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 32424
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 32434
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 32444
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 337
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 337
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 339
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetKeyPtrFromIndex(
					int nIdx);  // 342
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
					int nIdx);  // 343
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 337
	}
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				Vector4D** pValueOut);  // 328
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetKeyPtrFromIndex(
				int nIdx);  // 333
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetValuePtrFromIndex(
				int nIdx);  // 334
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				Vector4D** pValueOut);  // 556
	{
		OverflowChunk_t* pNew; // 559
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::CUtlAttributeListChunk(); // 254
		OverflowChunk_t::OverflowChunk_t(); // 559
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
					int nIdx);  // 563
		AddToHead<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t, CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>(OverflowChunk_t *& head,
																OverflowChunk_t* node);  // 960
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::AddToHead(
				OverflowChunk_t* node);  // 560
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetKeyPtrFromIndex(
					int nIdx);  // 562
	}
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetValue(
		uint32 nKey,
		Vector4D nValue);  // 571
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		Vector4D nValue);  // 277
	CRenderAttributes::SetVector4DValue(
			CUtlStringToken nTokenID,
			Vector4D vValue);  // 1287
	CDynamicVertexData<VertexUVPos_t>::Unlock(); // 710
	{
	}
	{
	}
	CVertexDataBase<VertexUVPos_t>::~CVertexDataBase(); // 194
	CVertexDataBase<VertexUVPos_t>::~CVertexDataBase(); // 711
	CDynamicVertexData<VertexUVPos_t>::~CDynamicVertexData(); // 1295
} /* size: 0, variables: 11, inline expansions: 108 (7100 bytes) */

// <033B13FF> ../scenesystem/scenegfxresources.cpp:1300
// variables: 13
// function calls: 116
void CSceneSystem::FindOrCreateFrameBufferScratchTexture(ISceneView* pView, CUtlStringToken nFrameBufferCopyKey, const RenderViewport_t& requiredTextureDim, const ImageFormat nImageFormat, const RuntimeTextureSpecificationFlags_t nExtraFlags)
{
	CThreadFastMutex fbstLock; // 1302
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_1303; // 1303
	uint32_t key; // 1305
	UtlHashHandle_t h; // 1310
	FrameBufferScratchTexInfo_t* pFbi; // 1311
	int16 nNumMips; // 1337
	CTextureCreationDesc texDesc; // 1339
	{
		FrameBufferScratchTexInfo_t tmp; // 1327
		CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(); // 1630
		FrameBufferScratchTexInfo_t::FrameBufferScratchTexInfo_t(); // 1327
		CUtlMemory<CUtlHashtableEntry<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t>, int>::operator[](
				int i);  // 720
		CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(); // 1638
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 604
		CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
			const CStrongHandle<InfoForResourceTypeCTextureBase>& src);  // 666
		CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CStrongHandle<InfoForResourceTypeCTextureBase>& src);  // 1640
		FrameBufferScratchTexInfo_t::FrameBufferScratchTexInfo_t(
						const FrameBufferScratchTexInfo_t& src);  // 64
		CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t>::CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t>(
												const unsigned int& k,
												const FrameBufferScratchTexInfo_t& v);  // 1514
		Construct<CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t>, unsigned int&, const CSceneSystem::FrameBufferScratchTexInfo_t&>(CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t>* pMemory); // 720
		DoInsert<unsigned int>(const CUtlHashtable<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t, DefaultHashFunctor<unsigned int>, DefaultEqu this,
					unsigned int k,
					Arg_t v,
					unsigned int h,
					bool* pDidInsert);  // 714
		DoInsert<unsigned int>(const CUtlHashtable<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t, DefaultHashFunctor<unsigned int>, DefaultEqu this,
					unsigned int k,
					Arg_t v,
					unsigned int h,
					bool* pDidInsert);  // 249
		Insert(const CUtlHashtable<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t, DefaultHashFunctor<unsigned int>, DefaultEqu this,
			KeyArg_t k,
			ValueArg_t v,
			bool* pDidInsert);  // 1329
		CUtlMemory<CUtlHashtableEntry<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t>, int>::operator[](
				int i);  // 295
		CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t>::GetValue(); // 295
		Element(const CUtlHashtable<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t, DefaultHashFunctor<unsigned int>, DefaultEqu this,
			handle_t idx);  // 1330
		CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 1621
		FrameBufferScratchTexInfo_t::~FrameBufferScratchTexInfo_t(); // 1331
	}
	{
		RenderTargetDesc_t renderTargetDesc; // 1360
		RenderViewport_t viewport; // 1361
		CRenderContextPtr pRenderContext; // 1363
		Vector4D vClearColor; // 1365
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
		CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 1360
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 1360
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 141
		{
			int i; // 121
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 123
		}
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 127
		RenderTargetDesc_t::Clear(); // 142
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 177
		RenderTargetDesc_t::Init(
			HRenderTexture hColor,
			HRenderTexture hDepth,
			RenderColorSpace_t allowSrgbWrites);  // 143
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 143
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 143
		RenderTargetDesc_t::RenderTargetDesc_t(
					HRenderTexture hColor,
					HRenderTexture hDepth,
					RenderColorSpace_t allowSrgbWrites);  // 1360
		CRenderContextPtr::CRenderContextPtr<char const*>(
						IRenderDevice* pDevice,
						const RenderTargetDesc_t& renderTargetDesc);  // 1363
		RenderViewport_t::RenderViewport_t(); // 1361
		RenderViewport_t::Init(
			int x,
			int y,
			int nWidth,
			int nHeight,
			float flMinZ,
			float flMaxZ);  // 1362
		CRenderContextPtr::operator->(); // 1364
		Vector4D::Vector4D(
			vec_t X,
			vec_t Y,
			vec_t Z,
			vec_t W);  // 1365
		RenderClearInfo_t::RenderClearInfo_t(
					const Vector4D& vecRGBAColor,
					int nFlags);  // 241
		IRenderContext::Clear(
			const Vector4D& vecRGBAColor,
			int nFlags);  // 1366
		CRenderContextPtr::Release(); // 845
		CRenderContextPtr::~CRenderContextPtr(); // 1367
	}
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 1303
	CUtlStringToken::GetHashCode(); // 1305
	Mix32HashFunctor::operator(
			uint32 n);  // 218
	Find(const CUtlHashtable<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t, DefaultHashFunctor<unsigned int>, Defa this,
		KeyArg_t k);  // 1310
	CUtlMemory<CUtlHashtableEntry<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t>, int>::operator[](
			int i);  // 295
	CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t>::GetValue(); // 295
	Element(const CUtlHashtable<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t, DefaultHashFunctor<unsigned int>, DefaultEqu this,
		handle_t idx);  // 1314
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 1318
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 1322
	CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1322
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 1337
	V_memset(void* dest,
		int fill,
		size_t count);  // 142
	CTextureDesc::CTextureDesc(); // 221
	Vector4D::Vector4D(); // 221
	CUtlMemory<TextureCreationExtraData_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<TextureCreationExtraData_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::CUtlVector(); // 221
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 222
	CTextureCreationDesc::CTextureCreationDesc(); // 1339
	operator|(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 35
	operator|=(RuntimeTextureSpecificationFlags_t& a,
			RuntimeTextureSpecificationFlags_t b);  // 1350
	Vector4D::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz,
		vec_t iw);  // 1347
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 83
	CFmtStrN<256>::operator char const*(); // 1355
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 673
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1355
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 1355
	IsDepthFormat(ImageFormat fmt); // 1358
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 1369
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::RemoveAll(); // 1798
	CUtlMemory<TextureCreationExtraData_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<TextureCreationExtraData_t, int>::Purge(); // 903
	CUtlMemory<TextureCreationExtraData_t, int>::Purge(); // 1799
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::Purge(); // 560
	ValidateAlignment<TextureCreationExtraData_t>(void); // 508
	CUtlMemory<TextureCreationExtraData_t, int>::Purge(); // 510
	CUtlMemory<TextureCreationExtraData_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::~CUtlVector(); // 234
	CTextureCreationDesc::~CTextureCreationDesc(); // 1370
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 1370
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 1302
	Min<short unsigned int>(const short unsigned int& val1,
				const short unsigned int& val2);  // 1337
} /* size: 1715, variables: 7, inline expansions: 67 (1467 bytes) */

