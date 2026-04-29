
//
// sbox/rendertools.cpp
//
//	referenced by: libengine2.so
//
//	functions: 14
//

// <01942FC4> sbox/rendertools.cpp:13
// variables: 3
// function calls: 5
void SetRenderState(IRenderContext* renderContext, CRenderAttributes* attributes, IMaterialMode* pMode, VertexLayout* layout, SceneSystemPerFrameStats_t* stats)
{
	CRenderPixEvent e; // 19
	RenderInputLayout_t hInputLayout; // 22
	{
		InputLayoutVariation_t inputLayoutVariation; // 25
	}
	CRenderPixEvent::CRenderPixEvent(
			IRenderContext* pRenderContext,
			Color c,
			const char* pName);  // 19
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 46
	Color::Color(
		int _r,
		int _g,
		int _b);  // 19
	CRenderPixEvent::Release(); // 906
	CRenderPixEvent::~CRenderPixEvent(); // 30
} /* size: 179, variables: 2, inline expansions: 5 (64 bytes) */

// <01942A98> sbox/rendertools.cpp:32
// variables: 8
// function calls: 9
void Draw(IRenderContext* renderContext, RenderPrimitiveType_t primitiveType, VertexLayout* layout, void* vertices, int numVertices, uint16* indices, int numIndices, SceneSystemPerFrameStats_t* stats)
{
	CRenderPixEvent e; // 36
	BufferDesc_t vertexDesc; // 38
	DynamicLockDesc_t vertexLockDesc; // 44
	DynamicVertexBufferHandle_t vb; // 45
	{
		const int  indexSize; // 54
		BufferDesc_t indexDesc; // 55
		DynamicLockDesc_t indexLockDesc; // 61
		DynamicIndexBufferHandle_t ib; // 62
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 65
	}
	CRenderPixEvent::CRenderPixEvent(
			IRenderContext* pRenderContext,
			Color c,
			const char* pName);  // 36
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 46
	Color::Color(
		int _r,
		int _g,
		int _b);  // 36
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 48
	CRenderPixEvent::Release(); // 906
	CRenderPixEvent::~CRenderPixEvent(); // 90
	CRenderPixEvent::Release(); // 906
	CRenderPixEvent::~CRenderPixEvent(); // 90
} /* size: 653, variables: 4, inline expansions: 8 (114 bytes) */

// <0194290E> sbox/rendertools.cpp:92
// variable: 1
void Compute(IRenderContext* pCtx, CRenderAttributes* attributes, IMaterialMode* pMode, int tx, int ty, int tz)
{
	bool createdContext; // 94
} /* size: 310, variables: 1 */

// <019427A5> sbox/rendertools.cpp:114
// variable: 1
void ComputeIndirect(IRenderContext* pCtx, CRenderAttributes* attributes, IMaterialMode* pMode, RenderBufferHandle_t hIndirectBuffer, uint nIndirectBufferOffset)
{
	bool createdContext; // 116
} /* size: 305, variables: 1 */

// <0194252A> sbox/rendertools.cpp:136
// variable: 1
// function calls: 4
void CopyTexture(IRenderContext* pCtx, HRenderTexture sourceTexture, HRenderTexture destTexture, Rect_t pSrcRect, int nDestX, int nDestY, uint nSrcMipSlice, uint nSrcArraySlice, uint nDstMipSlice, uint nDstArraySlice)
{
	bool createdContext; // 138
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 146
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 146
} /* size: 353, variables: 1, inline expansions: 4 (58 bytes) */

// <01941474> sbox/rendertools.cpp:156
// variables: 29
// function calls: 63
void SetDynamicConstantBufferData(CRenderAttributes* attributes, CUtlStringToken nTokenID, IRenderContext* pCtx, void* pData, int nSize)
{
	bool bTempContext; // 162
	DynamicLockDesc_t lock; // 170
	ConstantBufferHandle_t hConstantBuffer; // 171
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 177
	ConstantBufferAttr_t::ConstantBufferAttr_t(
				ConstantBufferHandle_t hBuf,
				uint32 nV);  // 732
	ConstantBufferAttr_t::ConstantBufferAttr_t(
				const ConstantBufferAttr_t& other);  // 571
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
	FindIndexOfMatch(const CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>   this,
			i32x4 i4KMatch);  // 311
	CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::GetValuePtrFromIndex(
				int nIdx);  // 314
	{
		OverflowChunk_t& p; // 317
		CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t>& __for_range; // 46283
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_begin; // 46293
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_end; // 46303
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBu this); // 1151
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Constant this,
						OverflowChunk_t* pNode);  // 1151
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAt this); // 317
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Constant this,
						OverflowChunk_t* pNode);  // 1156
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAt this); // 317
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
		FindIndexOfMatch(const CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>   this,
				i32x4 i4KMatch);  // 319
		CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::GetValuePtrFromIndex(
					int nIdx);  // 322
		operator++(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Constant this); // 317
	}
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::FindIndexOfMatch(
			i32x4 n4Key,
			ConstantBufferAttr_t** pValueOut);  // 309
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::FindIndexOfMatch(
			i32x4 n4Key,
			ConstantBufferAttr_t** pValueOut);  // 356
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::FindIndexOfMatch(
			uint32 nKey,
			ConstantBufferAttr_t** pValueOut);  // 547
	ConstantBufferAttr_t::operator=(
			const ConstantBufferAttr_t& other);  // 551
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
	FindIndexOfMatch(const CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>   this,
			i32x4 i4KMatch);  // 330
	CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::GetKeyPtrFromIndex(
				int nIdx);  // 333
	CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::GetValuePtrFromIndex(
				int nIdx);  // 334
	{
		OverflowChunk_t& p; // 337
		CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t>& __for_range; // 58038
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_begin; // 58048
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_end; // 58058
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
		FindIndexOfMatch(const CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>   this,
				i32x4 i4KMatch);  // 339
		CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::GetKeyPtrFromIndex(
					int nIdx);  // 342
		CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::GetValuePtrFromIndex(
					int nIdx);  // 343
		operator++(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Constant this); // 337
	}
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				ConstantBufferAttr_t** pValueOut);  // 328
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				ConstantBufferAttr_t** pValueOut);  // 556
	ConstantBufferAttr_t::operator=(
			const ConstantBufferAttr_t& other);  // 566
	{
		OverflowChunk_t* pNew; // 559
		ConstantBufferAttr_t::ConstantBufferAttr_t(); // 117
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
		CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::CUtlAttributeListChunk(); // 254
		OverflowChunk_t::OverflowChunk_t(); // 559
		AddToHead<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t, CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t>(OverflowChunk_t *& head,
																OverflowChunk_t* node);  // 960
		AddToHead(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAt this,
				OverflowChunk_t* node);  // 560
		CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::GetKeyPtrFromIndex(
					int nIdx);  // 562
	}
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::SetValue(
		uint32 nKey,
		ConstantBufferAttr_t nValue);  // 571
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::SetValue(
		const CUtlStringToken& nTok,
		ConstantBufferAttr_t nValue);  // 732
	CRenderAttributes::SetConstantBufferValue(
				CUtlStringToken nTokenID,
				ConstantBufferHandle_t cb,
				uint32 nView);  // 182
} /* size: 786, variables: 3, inline expansions: 20 (2143 bytes) */

// <019412AF> sbox/rendertools.cpp:195
// variable: 1
// function calls: 5
void ResolveDepthBuffer(IRenderContext* pRenderContext, HRenderTexture texture, Rect_t viewport)
{
	CRenderPixEvent e; // 197
	CRenderPixEvent::CRenderPixEvent(
			IRenderContext* pRenderContext,
			Color c,
			const char* pName);  // 197
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 198
	CRenderPixEvent::Release(); // 906
	CRenderPixEvent::~CRenderPixEvent(); // 199
} /* size: 133, variables: 1, inline expansions: 5 (74 bytes) */

// <019410E5> sbox/rendertools.cpp:201
// variable: 1
// function calls: 5
void ResolveFrameBuffer(IRenderContext* pRenderContext, HRenderTexture texture, Rect_t viewport)
{
	CRenderPixEvent e; // 203
	CRenderPixEvent::CRenderPixEvent(
			IRenderContext* pRenderContext,
			Color c,
			const char* pName);  // 203
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 204
	CRenderPixEvent::Release(); // 906
	CRenderPixEvent::~CRenderPixEvent(); // 205
} /* size: 136, variables: 1, inline expansions: 5 (74 bytes) */

// <019409E3> sbox/rendertools.cpp:207
// variables: 19
// function calls: 15
void DrawRenderable(IRenderContext* pRenderContext, ISceneLayer* pLayer, CRenderAttributes* attributes, const CRenderMesh* pRenderable, int nInstanceCount, RenderBufferHandle_t hDrawArgBuffer, uint32 nBufferOffset)
{
	int nSceneObjects; // 209
	const char   __FUNCTION__; // 55397
	{
		int s; // 210
		{
			const CSceneObjectData* pSceneObjectData; // 212
			int nDraws; // 214
			{
				int d; // 215
				{
					const CMaterialDrawDescriptor* pCurDraw; // 217
					const IMaterial2* pMaterial; // 218
					IMaterialMode* pMode; // 222
					int nVertexBuffers; // 226
					RenderInputLayout_t hInputLayout; // 229
					int nCurrentVB; // 239
					IndexBufferHandle_t hIB; // 247
					int nIBBindOffset; // 248
					EBatchFlags nBatchFlags; // 251
					MaterialRenderablePass_t renderablePass; // 259
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 227
					}
					{
						VertexBufferHandle_t hVB; // 242
						int nVBBindOffset; // 243
					}
					CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::operator[](
							int i);  // 217
					CWeakHandle<InfoForResourceTypeIMaterial2>::GetData(); // 218
					ISceneLayer::GetShaderMode(); // 222
					CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::Count(); // 226
					operator&(RenderMeshDrawPrimitiveFlags_t a,
							RenderMeshDrawPrimitiveFlags_t b);  // 252
					CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
						const CUtlStringToken& nTok,
						IntVector4D nValue);  // 515
					CRenderAttributes::SetComboValue(
							CUtlStringToken nTokenID,
							uint8 nValue);  // 257
					ISceneLayer::GetFillModeStateOverride(); // 261
					ISceneLayer::GetDepthBiasStateOverride(); // 261
					ISceneLayer::GetStencilStateOverride(); // 261
				}
			}
			CUtlMemory<CSceneObjectData, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
					int i);  // 212
			CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Count(); // 214
		}
	}
	CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::Count(); // 209
} /* size: 0, variables: 2, inline expansions: 1 (17 bytes) */

// <0193EC62> sbox/rendertools.cpp:294
// variables: 17
// function calls: 123
void DrawModel(IRenderContext* renderContext, ISceneLayer* sceneLayer, HModel hModel, CTransformUnaligned* transforms, int numTransforms, CRenderAttributes* pAttributes)
{
	const CModel* pModel; // 299
	CRenderPixEvent e; // 303
	CRenderAttributes attributes; // 324
	int nLodLevel; // 327
	LODGroupMask_t lodGroupMask; // 328
	int nMeshes; // 330
	{
		int nFirstTransformSlotIndex; // 308
		SceneSystemTransformEntry_t* pTransforms; // 309
		ExtraShaderData_t extraData; // 313
		{
			int i; // 314
			{
				matrix3x4_t matrix; // 316
				matrix3x4_t::matrix3x4_t(); // 248
				CTransformUnaligned::ToMatrix(); // 316
				matrix3x4_t::Base(); // 291
				matrix3x4_t::Base(); // 291
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 291
				matrix3x4a_t::operator=(
						const matrix3x4_t& src);  // 317
			}
		}
		Vector4D::Vector4D(
			vec_t X,
			vec_t Y,
			vec_t Z,
			vec_t W);  // 313
	}
	{
		int m; // 331
		{
			const CRenderMesh* pRenderMesh; // 336
		}
	}
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCModel>(const CWeakHandle<InfoForResourceTypeCModel>& hResource); // 299
	CRenderPixEvent::CRenderPixEvent(
			IRenderContext* pRenderContext,
			Color c,
			const char* pName);  // 303
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 46
	Color::Color(
		int _r,
		int _g,
		int _b);  // 303
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 45
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 46
	SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveList(); // 248
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::CUtlAttributeList(); // 898
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<VMatrix, 1, VMatrix>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::CUtlIntrusiveList(); // 248
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::CUtlAttributeList(); // 898
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 45
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 46
	SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveList(); // 248
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::CUtlAttributeList(); // 898
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
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this); // 248
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::CUtlAttributeList(); // 898
	{
		uint32* pThis; // 978
		const uint32* pDefault; // 979
		CSamplerStateDescBase::CSamplerStateDescBase(); // 927
		{
			float32 flZeros; // 936
			float32 flOnes; // 937
			CSamplerStateDescBase::SetFilterMode(
					RsFilter_t filter);  // 928
			CSamplerStateDescBase::SetTextureAddressModeU(
						RsTextureAddressMode_t addressMode);  // 929
			CSamplerStateDescBase::SetTextureAddressModeV(
						RsTextureAddressMode_t addressMode);  // 930
			CSamplerStateDescBase::SetTextureAddressModeW(
						RsTextureAddressMode_t addressMode);  // 931
			Min<unsigned int>(const unsigned int& val1,
						const unsigned int& val2);  // 800
			CSamplerStateDescBase::SetMaxAnisotropy(
					uint32 nMaxAniso);  // 933
			CSamplerStateDescBase::SetMipLodBias(
					float32 flBias);  // 932
			CSamplerStateDescBase::SetBorderColor(
					const float32* pBorderColor);  // 938
			CSamplerStateDescBase::SetComparisonFunc(
						RsComparison_t compFunc);  // 934
			CSamplerStateDescBase::SetMinMaxLod(
					uint32 nMinLod,
					uint32 nMaxLod);  // 935
			CSamplerStateDescBase::SetGlobalMipBiasOverrideAllowed(
							bool bAllow);  // 939
		}
		CSamplerStateDesc::CSamplerStateDesc(
					RsFilter_t filter,
					RsTextureAddressMode_t addressU,
					RsTextureAddressMode_t addressV,
					RsTextureAddressMode_t addressW,
					float32 flMipLodBias,
					uint32 nMaxAniso,
					RsComparison_t comparisonFunc,
					uint32 nMinLod,
					uint32 nMaxLod,
					bool bWhiteBorder,
					bool bAllowGlobalMipBiasOverride);  // 970
		DefaultSamplerStateDesc(void); // 959
		DefaultSamplerStateDesc(void); // 979
	}
	CSamplerStateDescBase::CSamplerStateDescBase(); // 975
	CSamplerStateDesc::CSamplerStateDesc(); // 31
	SamplerAttrForStorage_t::SamplerAttrForStorage_t(); // 117
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 45
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 46
	SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t this); // 248
	CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::CUtlAttributeList(); // 898
	ConstantBufferAttr_t::ConstantBufferAttr_t(); // 117
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAt this); // 248
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::CUtlAttributeList(); // 898
	DescriptorSetAttr_t::DescriptorSetAttr_t(); // 117
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr this); // 248
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::CUtlAttributeList(); // 898
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<void::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList<CUtlAttributeList<void::CUtlIntrusiveList(); // 248
	CUtlAttributeList<void::CUtlAttributeList(); // 898
	CUtlString::CUtlString(); // 117
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<CUtlString, 2, CUtlString>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::CUtlIntrusiveList(); // 248
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::CUtlAttributeList(); // 898
	CRenderAttributes::CRenderAttributes(); // 324
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetParent(
			const ThisType_t* pParent);  // 866
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::SetParent(
			const ThisType_t* pParent);  // 867
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetParent(
			const ThisType_t* pParent);  // 868
	CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::SetParent(
			const ThisType_t* pParent);  // 869
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::SetParent(
			const ThisType_t* pParent);  // 870
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::SetParent(
			const ThisType_t* pParent);  // 871
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::SetParent(
			const ThisType_t* pParent);  // 872
	CUtlAttributeList<void::SetParent(
			const ThisType_t* pParent);  // 873
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::SetParent(
			const ThisType_t* pParent);  // 874
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetParent(
			const ThisType_t* pParent);  // 878
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::SetParent(
			const ThisType_t* pParent);  // 879
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetParent(
			const ThisType_t* pParent);  // 880
	CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::SetParent(
			const ThisType_t* pParent);  // 881
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::SetParent(
			const ThisType_t* pParent);  // 882
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::SetParent(
			const ThisType_t* pParent);  // 883
	CRenderAttributes::SetParent(
			const CRenderAttributes* pParent);  // 861
	CRenderAttributes::SetParent(
			const CRenderAttributes* pParent);  // 325
	CRenderPixEvent::Release(); // 906
	CRenderPixEvent::~CRenderPixEvent(); // 342
	CRenderPixEvent::Release(); // 906
	CRenderPixEvent::~CRenderPixEvent(); // 342
} /* size: 1452, variables: 6, inline expansions: 100 (3151 bytes) */

// <0193D184> sbox/rendertools.cpp:344
// variables: 12
// function calls: 113
void DrawModel(IRenderContext* renderContext, ISceneLayer* sceneLayer, HModel hModel, RenderBufferHandle_t hDrawArgBuffer, int nBufferOffset, CRenderAttributes* pAttributes)
{
	const CModel* pModel; // 346
	CRenderPixEvent e; // 350
	CRenderAttributes attributes; // 352
	int nLodLevel; // 355
	LODGroupMask_t lodGroupMask; // 356
	int nMeshes; // 358
	{
		int m; // 359
		{
			const CRenderMesh* pRenderMesh; // 364
		}
	}
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCModel>(const CWeakHandle<InfoForResourceTypeCModel>& hResource); // 346
	CRenderPixEvent::CRenderPixEvent(
			IRenderContext* pRenderContext,
			Color c,
			const char* pName);  // 350
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 46
	Color::Color(
		int _r,
		int _g,
		int _b);  // 350
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 45
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 46
	SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveList(); // 248
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::CUtlAttributeList(); // 898
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<VMatrix, 1, VMatrix>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::CUtlIntrusiveList(); // 248
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::CUtlAttributeList(); // 898
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 45
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 46
	SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveList(); // 248
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::CUtlAttributeList(); // 898
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
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this); // 248
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::CUtlAttributeList(); // 898
	{
		uint32* pThis; // 978
		const uint32* pDefault; // 979
		CSamplerStateDescBase::CSamplerStateDescBase(); // 927
		{
			float32 flZeros; // 936
			float32 flOnes; // 937
			CSamplerStateDescBase::SetFilterMode(
					RsFilter_t filter);  // 928
			CSamplerStateDescBase::SetTextureAddressModeU(
						RsTextureAddressMode_t addressMode);  // 929
			CSamplerStateDescBase::SetTextureAddressModeV(
						RsTextureAddressMode_t addressMode);  // 930
			CSamplerStateDescBase::SetTextureAddressModeW(
						RsTextureAddressMode_t addressMode);  // 931
			Min<unsigned int>(const unsigned int& val1,
						const unsigned int& val2);  // 800
			CSamplerStateDescBase::SetMaxAnisotropy(
					uint32 nMaxAniso);  // 933
			CSamplerStateDescBase::SetMipLodBias(
					float32 flBias);  // 932
			CSamplerStateDescBase::SetBorderColor(
					const float32* pBorderColor);  // 938
			CSamplerStateDescBase::SetComparisonFunc(
						RsComparison_t compFunc);  // 934
			CSamplerStateDescBase::SetMinMaxLod(
					uint32 nMinLod,
					uint32 nMaxLod);  // 935
			CSamplerStateDescBase::SetGlobalMipBiasOverrideAllowed(
							bool bAllow);  // 939
		}
		CSamplerStateDesc::CSamplerStateDesc(
					RsFilter_t filter,
					RsTextureAddressMode_t addressU,
					RsTextureAddressMode_t addressV,
					RsTextureAddressMode_t addressW,
					float32 flMipLodBias,
					uint32 nMaxAniso,
					RsComparison_t comparisonFunc,
					uint32 nMinLod,
					uint32 nMaxLod,
					bool bWhiteBorder,
					bool bAllowGlobalMipBiasOverride);  // 970
		DefaultSamplerStateDesc(void); // 959
		DefaultSamplerStateDesc(void); // 979
	}
	CSamplerStateDescBase::CSamplerStateDescBase(); // 975
	CSamplerStateDesc::CSamplerStateDesc(); // 31
	SamplerAttrForStorage_t::SamplerAttrForStorage_t(); // 117
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 45
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 46
	SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t this); // 248
	CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::CUtlAttributeList(); // 898
	ConstantBufferAttr_t::ConstantBufferAttr_t(); // 117
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAt this); // 248
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::CUtlAttributeList(); // 898
	DescriptorSetAttr_t::DescriptorSetAttr_t(); // 117
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr this); // 248
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::CUtlAttributeList(); // 898
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<void::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList<CUtlAttributeList<void::CUtlIntrusiveList(); // 248
	CUtlAttributeList<void::CUtlAttributeList(); // 898
	CUtlString::CUtlString(); // 117
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<CUtlString, 2, CUtlString>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::CUtlIntrusiveList(); // 248
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::CUtlAttributeList(); // 898
	CRenderAttributes::CRenderAttributes(); // 352
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetParent(
			const ThisType_t* pParent);  // 866
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::SetParent(
			const ThisType_t* pParent);  // 867
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetParent(
			const ThisType_t* pParent);  // 868
	CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::SetParent(
			const ThisType_t* pParent);  // 869
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::SetParent(
			const ThisType_t* pParent);  // 870
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::SetParent(
			const ThisType_t* pParent);  // 871
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::SetParent(
			const ThisType_t* pParent);  // 872
	CUtlAttributeList<void::SetParent(
			const ThisType_t* pParent);  // 873
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::SetParent(
			const ThisType_t* pParent);  // 874
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetParent(
			const ThisType_t* pParent);  // 878
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::SetParent(
			const ThisType_t* pParent);  // 879
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetParent(
			const ThisType_t* pParent);  // 880
	CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::SetParent(
			const ThisType_t* pParent);  // 881
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::SetParent(
			const ThisType_t* pParent);  // 882
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::SetParent(
			const ThisType_t* pParent);  // 883
	CRenderAttributes::SetParent(
			const CRenderAttributes* pParent);  // 861
	CRenderAttributes::SetParent(
			const CRenderAttributes* pParent);  // 353
	CRenderPixEvent::Release(); // 906
	CRenderPixEvent::~CRenderPixEvent(); // 370
} /* size: 1084, variables: 6, inline expansions: 98 (2990 bytes) */

// <01939B2D> sbox/rendertools.cpp:377
// variables: 65
// function calls: 221
void DrawSceneObject(IRenderContext* renderContext, ISceneLayer* sceneLayer, CSceneObject* sceneObject, CTransformUnaligned transform, Vector4D color, HMaterial material, CRenderAttributes* pAttributes)
{
	ISceneView* pView; // 379
	const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CU* renderTags; // 380
	const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CU* excludeTags; // 381
	CRenderPixEvent e; // 389
	matrix3x4_t matrix; // 390
	CMeshDrawPrimitive_t drawPrim; // 392
	ISceneObjectDesc* pDesc; // 403
	int nLodLevel; // 406
	LODGroupMask_t lodGroupMask; // 408
	int nFirstTransformSlotIndex; // 410
	SceneSystemTransformEntry_t* pTransforms; // 411
	SceneSystemPerFrameStats_t stats; // 418
	CMeshInstance* pMesh; // 420
	{
		const CSceneObjectData* pSceneObjectData; // 423
		bool shouldRender; // 425
		{
			int i; // 437
			{
				HMaterial usualMaterial; // 445
				HRenderTexture outTexture; // 446
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 446
				CWeakHandle<InfoForResourceTypeIMaterial2>::operator!=(
						const CWeakHandle<InfoForResourceTypeIMaterial2>& hResource);  // 447
				CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
				StaticInvalidHandle(void); // 447
				CWeakHandle<InfoForResourceTypeIMaterial2>::operator->(); // 447
				CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 449
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
					OverflowChunk_t& p; // 317
					CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t>& __for_range; // 46448
					CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 46458
					CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 46468
					Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1151
					CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForS this,
									OverflowChunk_t* pNode);  // 1151
					begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this); // 317
					CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForS this,
									OverflowChunk_t* pNode);  // 1156
					end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this); // 317
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
							i32x4 i4KMatch);  // 319
					operator++(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForS this); // 317
					CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
								int nIdx);  // 322
				}
				CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
						i32x4 n4Key,
						TextureAttrForStorage_t** pValueOut);  // 309
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
							int nIdx);  // 314
				CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
						i32x4 n4Key,
						TextureAttrForStorage_t** pValueOut);  // 356
				{
					__m128i retVal; // 1105
					_mm_set_epi32(int __q3,
							int __q2,
							int __q1,
							int __q0);  // 648
					_mm_set1_epi32(int __A); // 1106
				}
				ReplicateIX4<>(int nValue); // 356
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
					CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t>& __for_range; // 58314
					CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 58324
					CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 58334
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
				CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
				CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1000
				TextureAttrForStorage_t::operator=(
						const TextureAttr_t& other);  // 566
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
						int32 nSingleMipLevelToBind);  // 449
				CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
					const CUtlStringToken& nTok,
					IntVector4D nValue);  // 571
				CRenderAttributes::SetBoolValue(
						CUtlStringToken nTokenID,
						bool bValue);  // 450
				CWeakHandle<InfoForResourceTypeIMaterial2>::operator const ResourceHandleInfo_t<InfoForResourceTypeIMaterial2>::RuntimeClass_t*(); // 458
				{
					__m128i retVal; // 1105
					_mm_set_epi32(int __q3,
							int __q2,
							int __q1,
							int __q0);  // 648
					_mm_set1_epi32(int __A); // 1106
				}
				ReplicateIX4<>(int nValue); // 536
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
					CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t>& __for_range; // 58314
					CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 58324
					CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 58334
					Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1151
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
							TextureAttrForStorage_t** pValueOut);  // 536
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
				StaticInvalidHandle(void); // 947
				CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
				CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 947
				ReleaseValueFromAttribute<CRenderAttributes::TextureAttrForStorage_t>(TextureAttrForStorage_t* pT); // 540
				CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::DeleteValue(
						CUtlStringToken nTok);  // 691
				CRenderAttributes::DeleteTextureValue(
							CUtlStringToken nToken);  // 454
				CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
					const CUtlStringToken& nTok,
					IntVector4D nValue);  // 571
				CRenderAttributes::SetBoolValue(
						CUtlStringToken nTokenID,
						bool bValue);  // 455
				CMeshDrawPrimitive_t::SetMaterial(
						const IMaterial2* pMaterial);  // 458
			}
			CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 441
			CWeakHandle<InfoForResourceTypeIMaterial2>::operator!=(
					const CWeakHandle<InfoForResourceTypeIMaterial2>& hResource);  // 441
			CMeshDrawPrimitive_t::SetMaterial(
					const IMaterial2* pMaterial);  // 462
			CWeakHandle<InfoForResourceTypeIMaterial2>::operator const ResourceHandleInfo_t<InfoForResourceTypeIMaterial2>::RuntimeClass_t*(); // 462
			CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 72
			CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::IsValid(); // 287
			CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 64
			CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::GetData(); // 292
			CUtlMemory<CSceneObjectData, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
					int i);  // 305
			CMeshInstance::GetSceneObjectData(); // 342
			CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::operator[](
					int i);  // 345
			CMeshInstance::GetDrawCall(
					int d);  // 1163
			CMeshDrawPrimitive_t::SetMeshAndDrawCall(
						CMeshInstance* pMeshInstance,
						int nDrawCall);  // 439
			CMeshDrawPrimitive_t::GetDrawCall(); // 467
			operator&(RenderMeshDrawPrimitiveFlags_t a,
					RenderMeshDrawPrimitiveFlags_t b);  // 467
			operator|=(EBatchFlags& a,
					EBatchFlags b);  // 468
			operator&(RenderMeshDrawPrimitiveFlags_t a,
					RenderMeshDrawPrimitiveFlags_t b);  // 470
			operator|=(EBatchFlags& a,
					EBatchFlags b);  // 472
			ISceneLayer::GetParentView(); // 479
			ISceneObjectDesc::DrawArrayExt(
					IRenderContext* pCtx,
					CMeshDrawPrimitive_t* pRenderList,
					int nNumRenderablesToDraw,
					const ISceneView* pView,
					ISceneLayer* pLayer,
					SceneSystemPerFrameStats_t& perFrameStats,
					const IMaterial2* pMaterial);  // 479
			CSceneObject::GetFlags(); // 474
			operator|=(EBatchFlags& a,
					EBatchFlags b);  // 476
			CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Count(); // 296
			CSceneObjectData::GetNumDrawCalls(); // 437
		}
		CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 72
		CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::IsValid(); // 287
		CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 64
		CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::GetData(); // 292
		CUtlMemory<CSceneObjectData, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
				int i);  // 305
		CMeshInstance::GetSceneObjectData(); // 423
		CMeshInstance::GetLODGroupMask(); // 428
		CSceneObject::GetCurrentMeshGroupMask(); // 2204
		CSceneObject::GetCurrentMeshGroupMask(); // 432
		CMeshInstance::GetMeshGroupMask(); // 432
		CMeshInstance::GetNext(); // 483
	}
	ISceneLayer::GetParentView(); // 379
	{
		uint tag; // 952
		CUtlVectorFixedGrowable<unsigned int, 3>& __for_range; // 46301
		iterator __for_begin; // 46311
		iterator __for_end; // 46321
		CUtlMemory<unsigned int, int>::Base(); // 112
		CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::Base(); // 102
		CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::begin(); // 952
		CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::Count(); // 104
		CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::end(); // 952
		IdealIndex(uint32_if32BitStorage h,
				uint32 m);  // 653
		CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 650
		CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 651
		CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
				uint32 slotmask);  // 656
		CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
				uint32 slotmask);  // 667
		DoLookup<unsigned int>(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, und this,
					unsigned int x,
					unsigned int h,
					handle_t* pPreviousInChain);  // 218
		Mix32HashFunctor::operator(
				uint32 n);  // 218
		Find(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, und this,
			KeyArg_t k);  // 235
		HasElement(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, und this,
				KeyArg_t k);  // 954
	}
	CSceneObject::IsInTagsList(
			const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined pTags);  // 383
	{
		uint tag; // 952
		CUtlVectorFixedGrowable<unsigned int, 3>& __for_range; // 46301
		iterator __for_begin; // 46311
		iterator __for_end; // 46321
		CUtlMemory<unsigned int, int>::Base(); // 112
		CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::Base(); // 102
		CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::begin(); // 952
		CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::Count(); // 104
		CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::end(); // 952
		Mix32HashFunctor::operator(
				uint32 n);  // 218
		IdealIndex(uint32_if32BitStorage h,
				uint32 m);  // 653
		CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 650
		CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 651
		CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
				uint32 slotmask);  // 656
		CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
				uint32 slotmask);  // 667
		DoLookup<unsigned int>(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, und this,
					unsigned int x,
					unsigned int h,
					handle_t* pPreviousInChain);  // 218
		Find(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, und this,
			KeyArg_t k);  // 235
		HasElement(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, und this,
				KeyArg_t k);  // 954
	}
	CSceneObject::IsInTagsList(
			const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined pTags);  // 386
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 46
	Color::Color(
		int _r,
		int _g,
		int _b);  // 389
	CRenderPixEvent::CRenderPixEvent(
			IRenderContext* pRenderContext,
			Color c,
			const char* pName);  // 389
	matrix3x4_t::matrix3x4_t(); // 248
	CTransformUnaligned::ToMatrix(); // 390
	LightProbeVolumeBinding_t::LightProbeVolumeBinding_t(); // 1113
	Vector4D::Vector4D(); // 1113
	CMeshDrawPrimitive_t::CMeshDrawPrimitive_t(); // 392
	Vector4D::operator=(
			const Vector4D& vOther);  // 2494
	CMeshDrawPrimitive_t::SetMaterial(
			const IMaterial2* pMaterial);  // 2490
	CMeshDrawPrimitive_t::InitForObject(
			const CSceneObject* pObj,
			const Vector4D& vRGBAModulation,
			const ISceneLayer* pLayer);  // 393
	CSceneObject::GetBakedLightingInfo(); // 401
	CSceneObject::GetDesc(); // 403
	CSceneObject::GetCurrentLODLevel(); // 406
	matrix3x4_t::Base(); // 291
	matrix3x4_t::Base(); // 291
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 291
	matrix3x4a_t::operator=(
			const matrix3x4_t& src);  // 414
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 110
	SceneSystemPerFrameStats_t::SceneSystemPerFrameStats_t(); // 418
	CSceneObject::GetMeshInstanceData(); // 420
	CRenderPixEvent::Release(); // 906
	CRenderPixEvent::~CRenderPixEvent(); // 485
} /* size: 3523, variables: 13, inline expansions: 27 (1217 bytes) */

// <0193889B> sbox/rendertools.cpp:488
// variables: 28
// function calls: 58
void TraceRays(IRenderContext* pCtx, CRenderAttributes* attributes, IMaterialMode* pMode, uint32 nWidth, uint32 nHeight, uint32 nDepth)
{
	bool createdContext; // 490
	const char   __FUNCTION__; // 55277
	{
		RenderShaderHandle_t hRayTraceShader; // 504
		CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > shaderData; // 505
		uint32 staticDataHash; // 506
		bool bHasRayTraceShader; // 508
		RenderRayTracePipelineHandle_t hPipeline; // 513
		IRaytraceShaderBindingTable* pSBT; // 514
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 501
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 509
		}
		{
			CUtlVector<RayTraceGeneralShader_t, CUtlMemory<RayTraceGeneralShader_t, int> > generalShaders; // 517
			CUtlVector<RayTraceHitShaderGroup_t, CUtlMemory<RayTraceHitShaderGroup_t, int> > hitShaders; // 524
			RayTracePipelineStateCreateDesc_t pipeDesc; // 535
			ShaderBindingTableCreateDesc_t sbtDesc; // 552
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 546
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 557
			}
			CUtlMemory<RayTraceGeneralShader_t, int>::EnsureCapacity(
					int num);  // 1006
			CUtlVectorBase<RayTraceGeneralShader_t, CUtlMemory<RayTraceGeneralShader_t, int> >::EnsureCapacity(
					int num);  // 427
			CUtlMemory<RayTraceGeneralShader_t, int>::ValidateGrowSize(); // 475
			CUtlMemory<RayTraceGeneralShader_t, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<RayTraceGeneralShader_t, CUtlMemory<RayTraceGeneralShader_t, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<RayTraceGeneralShader_t, CUtlMemory<RayTraceGeneralShader_t, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 426
			initializer_list<RayTraceGeneralShader_t>::size(); // 427
			{
				const RayTraceGeneralShader_t& v; // 429
				initializer_list<RayTraceGeneralShader_t>& __for_range; // 64012
				const_iterator __for_begin; // 64022
				const_iterator __for_end; // 64032
				initializer_list<RayTraceGeneralShader_t>::begin(); // 429
				initializer_list<RayTraceGeneralShader_t>::end(); // 429
				CUtlMemory<RayTraceGeneralShader_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<RayTraceGeneralShader_t, CUtlMemory<RayTraceGeneralShader_t, int> >::Element(
					int i);  // 1201
				CopyConstruct<RayTraceGeneralShader_t>(RayTraceGeneralShader_t* pMemory,
									const RayTraceGeneralShader_t& src);  // 1201
				CUtlVectorBase<RayTraceGeneralShader_t, CUtlMemory<RayTraceGeneralShader_t, int> >::AddToTail(
						const RayTraceGeneralShader_t& src);  // 430
			}
			CUtlVector<RayTraceGeneralShader_t, CUtlMemory<RayTraceGeneralShader_t, int> >::CUtlVector(
					initializer_list<RayTraceGeneralShader_t> initializerList);  // 521
			CUtlMemory<RayTraceHitShaderGroup_t, int>::EnsureCapacity(
					int num);  // 1006
			CUtlVectorBase<RayTraceHitShaderGroup_t, CUtlMemory<RayTraceHitShaderGroup_t, int> >::EnsureCapacity(
					int num);  // 427
			CUtlMemory<RayTraceHitShaderGroup_t, int>::ValidateGrowSize(); // 475
			CUtlMemory<RayTraceHitShaderGroup_t, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<RayTraceHitShaderGroup_t, CUtlMemory<RayTraceHitShaderGroup_t, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<RayTraceHitShaderGroup_t, CUtlMemory<RayTraceHitShaderGroup_t, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 426
			initializer_list<RayTraceHitShaderGroup_t>::size(); // 427
			{
				const RayTraceHitShaderGroup_t& v; // 429
				initializer_list<RayTraceHitShaderGroup_t>& __for_range; // 63797
				const_iterator __for_begin; // 63807
				const_iterator __for_end; // 63817
				initializer_list<RayTraceHitShaderGroup_t>::begin(); // 429
				initializer_list<RayTraceHitShaderGroup_t>::end(); // 429
				CopyConstruct<RayTraceHitShaderGroup_t>(RayTraceHitShaderGroup_t* pMemory,
									const RayTraceHitShaderGroup_t& src);  // 1201
				CUtlVectorBase<RayTraceHitShaderGroup_t, CUtlMemory<RayTraceHitShaderGroup_t, int> >::AddToTail(
						const RayTraceHitShaderGroup_t& src);  // 430
			}
			CUtlVector<RayTraceHitShaderGroup_t, CUtlMemory<RayTraceHitShaderGroup_t, int> >::CUtlVector(
					initializer_list<RayTraceHitShaderGroup_t> initializerList);  // 533
			{
				const uint32  m; // 61
				uint32 h; // 62
				uint32 k; // 63
				const int  r; // 64
			}
			CUtlStringToken::CUtlStringToken(
					const char& str);  // 561
			CUtlMemory<RayTraceHitShaderGroup_t, int>::Purge(); // 903
			CUtlMemory<RayTraceHitShaderGroup_t, int>::Purge(); // 1799
			CUtlVectorBase<RayTraceHitShaderGroup_t, CUtlMemory<RayTraceHitShaderGroup_t, int> >::Purge(); // 560
			ValidateAlignment<RayTraceHitShaderGroup_t>(void); // 508
			CUtlMemory<RayTraceHitShaderGroup_t, int>::Purge(); // 510
			CUtlMemory<RayTraceHitShaderGroup_t, int>::~CUtlMemory(); // 562
			CUtlVectorBase<RayTraceHitShaderGroup_t, CUtlMemory<RayTraceHitShaderGroup_t, int> >::~CUtlVectorBase(); // 410
			CUtlVector<RayTraceHitShaderGroup_t, CUtlMemory<RayTraceHitShaderGroup_t, int> >::~CUtlVector(); // 565
			CUtlMemory<RayTraceGeneralShader_t, int>::Purge(); // 903
			CUtlMemory<RayTraceGeneralShader_t, int>::Purge(); // 1799
			CUtlVectorBase<RayTraceGeneralShader_t, CUtlMemory<RayTraceGeneralShader_t, int> >::Purge(); // 560
			ValidateAlignment<RayTraceGeneralShader_t>(void); // 508
			CUtlMemory<RayTraceGeneralShader_t, int>::Purge(); // 510
			CUtlMemory<RayTraceGeneralShader_t, int>::~CUtlMemory(); // 562
			CUtlVectorBase<RayTraceGeneralShader_t, CUtlMemory<RayTraceGeneralShader_t, int> >::~CUtlVectorBase(); // 410
			CUtlVector<RayTraceGeneralShader_t, CUtlMemory<RayTraceGeneralShader_t, int> >::~CUtlVector(); // 565
		}
		CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
		CUtlMemory<unsigned char, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVector(); // 505
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
		CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned char, int>::Purge(); // 903
		CUtlMemory<unsigned char, int>::Purge(); // 1799
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
		ValidateAlignment<unsigned char>(void); // 508
		CUtlMemory<unsigned char, int>::Purge(); // 510
		CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
		CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 573
	}
} /* size: 0, variables: 2 */

// <01938831> sbox/rendertools.cpp:582
void TraceRaysIndirect(IRenderContext* pCtx, CRenderAttributes* attributes, IMaterialMode* pMode, RenderBufferHandle_t hIndirectBuffer, uint32 nIndirectBufferOffset)
{
} /* size: 5 */

