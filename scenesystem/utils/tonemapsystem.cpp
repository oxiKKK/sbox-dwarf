
//
// scenesystem/utils/tonemapsystem.cpp
//
//	referenced by: libengine2.so
//
//	functions: 28
//

// <03A537B7> ../scenesystem/utils/tonemapsystem.cpp:26
// variables: 2
// function call: 1
ResourceManifestDesc_t* InitManifestDesc<TonemapManifest::CTemplateArg>(CTemplateArg& def)
{
	ResourceManifestDesc_t s_Manifest; // 26
	ManifestEntryGroupList_t s_pManifestEntries; // 26
	ResourceManifestEntry_t::ResourceManifestEntry_t(
				const char* pResourceName,
				bool bResourceNameIsManifestName,
				CStrongHandleVoid* pHandle);  // 28
} /* size: 170, variables: 2, inline expansions: 1 (50 bytes) */

// <03A503C7> ../scenesystem/utils/tonemapsystem.cpp:53
// variables: 40
// function calls: 212
void CTonemapRenderer::Render(ISceneView* pView, IRenderContext* pRenderContext, ISceneLayer* pLayer, SceneSystemPerFrameStats_t* pStats)
{
	IMaterialMode* pMode; // 66
	HRenderTexture colBuff; // 70
	RenderViewport_t adjustedViewport; // 78
	ScreenSpaceVertex_t ssVerts; // 84
	Vector renderTargetDimensions; // 85
	CDynamicVertexData<VertexPos2DTex2D_t> vb; // 88
	CRenderAttributes attributes; // 104
	{
		int __executeCount; // 61
	}
	CStrongHandle<InfoForResourceTypeIMaterial2>::HasData(); // 56
	CUtlStringToken::CUtlStringToken(); // 66
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 70
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
			const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 24920
			CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 24930
			CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 24940
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
			HRenderTexture defaultTxtr);  // 70
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 71
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 85
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
		CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 272
		{
			const OverflowChunk_t& p; // 279
			const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 25751
			CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 25761
			CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 25771
			CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1160
			CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							const OverflowChunk_t* pNode);  // 1160
			CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 279
			CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							const OverflowChunk_t* pNode);  // 1165
			CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 279
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
					i32x4 i4KMatch);  // 281
			CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
						int nIdx);  // 284
			CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 279
		}
		CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
				i32x4 n4Key,
				const Vector4D ** pValueOut);  // 270
		CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetValuePtrFromIndex(
					int nIdx);  // 275
		CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
				i32x4 n4Key,
				const Vector4D ** pValueOut);  // 381
		Vector4D::Vector4D(
			const Vector4D& vOther);  // 383
	}
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::GetValueOrDefault(
				uint32 k,
				Vector4D nDefault);  // 393
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 393
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::GetValueOrDefault(
				CUtlStringToken nTok,
				Vector4D nDefault);  // 241
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 241
	CRenderAttributes::GetVectorValue(
			CUtlStringToken nTokenID,
			Vector vDefaultValue);  // 85
	ISceneUtils::ComputeScreenSpaceVertices(
					const RenderViewport_t& viewport,
					const RenderViewport_t& destViewport,
					const RenderViewport_t& srcViewport,
					int nSrcTextureWidth,
					int nSrcTextureHeight,
					ScreenSpaceVertex_t* pVertices);  // 86
	Vector2D::Vector2D(); // 73
	Vector2D::Vector2D(); // 73
	VertexPos2DTex2D_t::VertexPos2DTex2D_t(); // 165
	CVertexDataBase<VertexPos2DTex2D_t>::ClearVertexFields(); // 171
	CVertexDataBase<VertexPos2DTex2D_t>::CVertexDataBase(); // 673
	CDynamicVertexData<VertexPos2DTex2D_t>::Lock(
		int nVertexCount);  // 680
	CDynamicVertexData<VertexPos2DTex2D_t>::CDynamicVertexData(
				IRenderContext* pRenderContext,
				int nVertexCount,
				const char* pDebugName,
				const char* pBudgetGroup);  // 88
	Vector2D::operator=(
			const Vector2D& vOther);  // 89
	Vector2D::operator=(
			const Vector2D& vOther);  // 73
	VertexPos2DTex2D_t::operator=(
			const VertexPos2DTex2D_t  &);  // 355
	{
	}
	CVertexDataBase<VertexPos2DTex2D_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexPos2DTex2D_t>::AdvanceVertex(); // 91
	Vector2D::operator=(
			const Vector2D& vOther);  // 92
	{
	}
	Vector2D::operator=(
			const Vector2D& vOther);  // 73
	VertexPos2DTex2D_t::operator=(
			const VertexPos2DTex2D_t  &);  // 355
	{
	}
	CVertexDataBase<VertexPos2DTex2D_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexPos2DTex2D_t>::AdvanceVertex(); // 94
	Vector2D::operator=(
			const Vector2D& vOther);  // 95
	{
	}
	Vector2D::operator=(
			const Vector2D& vOther);  // 73
	VertexPos2DTex2D_t::operator=(
			const VertexPos2DTex2D_t  &);  // 355
	{
	}
	CVertexDataBase<VertexPos2DTex2D_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexPos2DTex2D_t>::AdvanceVertex(); // 97
	Vector2D::operator=(
			const Vector2D& vOther);  // 98
	{
	}
	Vector2D::operator=(
			const Vector2D& vOther);  // 73
	VertexPos2DTex2D_t::operator=(
			const VertexPos2DTex2D_t  &);  // 355
	{
	}
	CVertexDataBase<VertexPos2DTex2D_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexPos2DTex2D_t>::AdvanceVertex(); // 100
	CDynamicVertexData<VertexPos2DTex2D_t>::Unlock(); // 760
	CDynamicVertexData<VertexPos2DTex2D_t>::Unlock(); // 639
	CDynamicVertexData<VertexPos2DTex2D_t>::Bind(
		int nSlot,
		int nOffset,
		int nStride);  // 640
	CDynamicVertexData<VertexPos2DTex2D_t>::UnlockAndBind(
			int nSlot,
			int nOffset,
			int nStride);  // 101
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
	CUtlString::CUtlString(); // 117
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<CUtlString, 2, CUtlString>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::CUtlIntrusiveList(); // 248
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::CUtlAttributeList(); // 898
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
	CRenderAttributes::CRenderAttributes(); // 104
	GetLayout(void); // 114
	CDynamicVertexData<VertexPos2DTex2D_t>::Unlock(); // 760
	CDynamicVertexData<VertexPos2DTex2D_t>::Unlock(); // 710
	{
	}
	{
	}
	CVertexDataBase<VertexPos2DTex2D_t>::~CVertexDataBase(); // 194
	CVertexDataBase<VertexPos2DTex2D_t>::~CVertexDataBase(); // 711
	CDynamicVertexData<VertexPos2DTex2D_t>::~CDynamicVertexData(); // 121
} /* size: 0, variables: 7, inline expansions: 144 (6183 bytes) */

// <03A4FFC7> ../scenesystem/utils/tonemapsystem.cpp:126
// variables: 6
// function calls: 10
void CTonemapSystem::CTonemapSystem()
{
	{
		KeyValues* pGameInfo; // 162
		KeyValues* pRenderingPipelineKeys; // 163
		{
			int i; // 132
		}
	}
	ITonemapSystem::ITonemapSystem(); // 126
	CHistogramBucket::CHistogramBucket(); // 126
	{
		KeyValues* pGameInfo; // 162
		KeyValues* pRenderingPipelineKeys; // 163
		{
			int i; // 132
		}
		CTonemapSystem::GetDefaultTonemappingScale(); // 143
		CTonemapSystem::GetDefaultTonemappingScale(); // 144
		CTonemapSystem::GetDefaultTonemappingScale(); // 145
		KeyValues::GetBool(
			const char* keyName,
			bool defaultValue);  // 166
		KeyValues::GetBool(
			const char* keyName,
			bool defaultValue);  // 171
	}
	SceneTonemapParameters_t::SceneTonemapParameters_t(); // 126
	SceneTonemapParameters_t::SceneTonemapParameters_t(); // 126
	SceneTonemapParameters_t::SceneTonemapParameters_t(); // 126
} /* size: 1097, inline expansions: 5 (542 bytes) */

// <03A4FF88> ../scenesystem/utils/tonemapsystem.cpp:126
// variables: 3
void CTonemapSystem::CTonemapSystem()
{
	{
		KeyValues* pGameInfo; // 162
		KeyValues* pRenderingPipelineKeys; // 163
		{
			int i; // 132
		}
	}
} /* size: 0 */

// <03A5C477> ../scenesystem/utils/tonemapsystem.cpp:193
void CTonemapSystem::GetDefaultTonemappingScale()
{
} /* size: 13 */

// <03A4FE2E> ../scenesystem/utils/tonemapsystem.cpp:202
// variable: 1
// function calls: 3
void CTonemapSystem::SetTonemapParameters(SceneTonemapParameters_t* pParams)
{
	{
		SceneTonemapParameters_t tmpParams; // 207
		SceneTonemapParameters_t::SceneTonemapParameters_t(); // 207
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 208
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 213
} /* size: 238, inline expansions: 1 (63 bytes) */

// <03A4FDF7> ../scenesystem/utils/tonemapsystem.cpp:223
float ChooseTonemapValue(float flValue1, float flValue2, float flValue3)
{
} /* size: 0 */

// <03A4F99B> ../scenesystem/utils/tonemapsystem.cpp:238
// function calls: 19
void CTonemapSystem::UpdateCurrentTonemapParameters()
{
	ConVar::GetInt(); // 241
	ConVar::GetFloat(); // 265
	ChooseTonemapValue(float flValue1,
				float flValue2,
				float flValue3);  // 265
	ConVar::GetFloat(); // 270
	ChooseTonemapValue(float flValue1,
				float flValue2,
				float flValue3);  // 270
	ConVar::GetFloat(); // 274
	ChooseTonemapValue(float flValue1,
				float flValue2,
				float flValue3);  // 274
	ConVar::GetFloat(); // 280
	ChooseTonemapValue(float flValue1,
				float flValue2,
				float flValue3);  // 280
	ConVar::GetFloat(); // 284
	ChooseTonemapValue(float flValue1,
				float flValue2,
				float flValue3);  // 284
	ChooseTonemapValue(float flValue1,
				float flValue2,
				float flValue3);  // 288
	ChooseTonemapValue(float flValue1,
				float flValue2,
				float flValue3);  // 292
	ChooseTonemapValue(float flValue1,
				float flValue2,
				float flValue3);  // 296
	ChooseTonemapValue(float flValue1,
				float flValue2,
				float flValue3);  // 300
	ConVar::GetFloat(); // 249
	ChooseTonemapValue(float flValue1,
				float flValue2,
				float flValue3);  // 249
	ConVar::GetFloat(); // 253
	ChooseTonemapValue(float flValue1,
				float flValue2,
				float flValue3);  // 253
} /* size: 898, inline expansions: 19 (530 bytes) */

// <03A4F96B> ../scenesystem/utils/tonemapsystem.cpp:307
void CTonemapSystem::GetCurrentTonemappingScale()
{
} /* size: 13 */

// <03A4F93B> ../scenesystem/utils/tonemapsystem.cpp:314
void CTonemapSystem::GetCurrentTonemappingMinLuminance()
{
} /* size: 13 */

// <03A4F90B> ../scenesystem/utils/tonemapsystem.cpp:321
void CTonemapSystem::GetCurrentTonemappingMaxLuminance()
{
} /* size: 13 */

// <03A4F830> ../scenesystem/utils/tonemapsystem.cpp:329
// variables: 3
// function call: 1
void CTonemapSystem::ReceiveBucketQueries()
{
	{
		int i; // 331
		{
			uint64 nPixelsCovered; // 347
			RenderQueryState_t queryState; // 348
		}
		CTonemapSystem::GetNumHistogramBuckets(); // 331
	}
} /* size: 209 */

// <03A4F662> ../scenesystem/utils/tonemapsystem.cpp:367
// variables: 8
// function calls: 2
void CTonemapSystem::GenerateRendererData()
{
	int nBucketIndex; // 370
	CHistogramBucket* pBucket; // 415
	TonemapRendererData_t data; // 431
	{
		int i; // 371
		CTonemapSystem::GetNumHistogramBuckets(); // 371
	}
	{
		int nOldestSoFar; // 384
		{
			int i; // 385
		}
	}
	{
		TonemapRendererData_t nullData; // 403
		{
			int __executeCount; // 400
		}
	}
	ConVar::GetInt(); // 438
} /* size: 688, variables: 3, inline expansions: 1 (10 bytes) */

// <03A4F51D> ../scenesystem/utils/tonemapsystem.cpp:461
// variables: 4
// function calls: 3
void CTonemapSystem::UpdateBucketRanges()
{
	float histogramRangesSource2; // 464
	{
		int i; // 482
		CTonemapSystem::GetNumHistogramBuckets(); // 482
		Lerp<float>(float flPercent,
				const float& A,
				const float& B);  // 484
	}
	{
		int nBucket; // 501
		{
			CHistogramBucket* pBucket; // 509
			Max<float>(const float& val1,
					const float& val2);  // 506
		}
	}
} /* size: 544, variables: 1 */

// <03A4F337> ../scenesystem/utils/tonemapsystem.cpp:517
// variables: 10
// function calls: 3
void CTonemapSystem::FindLocationOfPercentBrightPixels(float flPercentBrightPixels, float flPercentTargetToSnapToIfInSameBin)
{
	int nTotalValidPixels; // 519
	float flTotalPercentRangeTested; // 534
	float flTotalPercentPixelsTested; // 535
	{
		int i; // 520
		CTonemapSystem::GetNumHistogramBuckets(); // 520
		CHistogramBucket::ContainsValidData(); // 522
	}
	{
		int i; // 536
		{
			float flPixelPercentNeeded; // 541
			float flThisBinPercentOfTotalPixels; // 542
			float flThisBinLuminanceRange; // 543
			{
				float flPercentOfThesePixelsNeeded; // 555
				float flPercentLocationOfBorder; // 556
			}
			CHistogramBucket::ContainsValidData(); // 538
		}
	}
} /* size: 292, variables: 3 */

// <03A5C83A> ../scenesystem/utils/tonemapsystem.cpp:569
// variables: 6
// function calls: 2
void CTonemapSystem::ComputeTargetTonemapScalar(bool bGetIdealTargetForDebugMode)
{
	float flPercentLocationOfTarget; // 576
	float flTargetScalar; // 595
	float flAverageLuminanceLocation; // 598
	float flLastScale; // 611
	float flTargetScalarClamped; // 615
	{
		float flTargetScalar2; // 601
	}
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 615
	CTonemapSystem::ComputeTargetTonemapScalar(
					bool bGetIdealTargetForDebugMode);  // 569
} /* size: 269, variables: 5, inline expansions: 2 (257 bytes) */

// <03A4F287> ../scenesystem/utils/tonemapsystem.cpp:569
// variables: 6
void CTonemapSystem::ComputeTargetTonemapScalar(bool bGetIdealTargetForDebugMode)
{
	float flPercentLocationOfTarget; // 576
	float flTargetScalar; // 595
	float flAverageLuminanceLocation; // 598
	float flLastScale; // 611
	float flTargetScalarClamped; // 615
	{
		float flTargetScalar2; // 601
	}
} /* size: 0, variables: 5 */

// <03A4EF98> ../scenesystem/utils/tonemapsystem.cpp:622
// variables: 16
// function calls: 6
void CTonemapSystem::ComputeTargetExposureLogLuminance()
{
	float flAccum; // 624
	float flLogLum; // 625
	float flTotal; // 626
	float flRangeMin; // 634
	float flRangeMax; // 637
	const float  flRangeMinCount; // 641
	const float  flRangeMaxCount; // 642
	int nRangeMinBucket; // 643
	int nRangeMaxBucket; // 644
	float flRangeMinLum; // 661
	float flRangeMaxLum; // 662
	const float  flMidPointBrightness; // 684
	{
		int i; // 627
		CTonemapSystem::GetNumHistogramBuckets(); // 627
		Lerp<float>(float flPercent,
				const float& A,
				const float& B);  // 629
	}
	{
		int i; // 648
	}
	{
		float flBucketLerp; // 666
		Lerp<float>(float flPercent,
				const float& A,
				const float& B);  // 667
	}
	{
		float flBucketLerp; // 676
		Lerp<float>(float flPercent,
				const float& A,
				const float& B);  // 677
	}
	ConVar::GetFloat(); // 634
	ConVar::GetFloat(); // 637
} /* size: 694, variables: 12, inline expansions: 2 (24 bytes) */

// <03A4EEDA> ../scenesystem/utils/tonemapsystem.cpp:697
// variable: 1
// function calls: 2
void CTonemapSystem::ResetTonemappingScale(float flTonemapScale)
{
	{
		int i; // 715
		CTonemapSystem::GetNumHistogramBuckets(); // 715
		CHistogramBucket::ResetBucket(); // 717
	}
} /* size: 157 */

// <03A4E6A5> ../scenesystem/utils/tonemapsystem.cpp:722
// variables: 26
// function calls: 18
void CTonemapSystem::CalculateCurrentTonemapScalar(float64 flFrameTime_HACK)
{
	float flFrameTime; // 729
	float flTargetTonemapScalar; // 790
	float flElapsedTime; // 855
	float flExposureAdaptationSpeed; // 856
	const char   __FUNCTION__; // 12417
	float flForcedTonemapScale; // 937
	{
		int nNumHistogramBuckets; // 738
		int nMaxValidPixels; // 741
		int nTotalValidPixels; // 742
		{
			int nBucket; // 743
			{
				CHistogramBucket* pBucket; // 745
			}
		}
		{
			int nBucket; // 757
			{
				CHistogramBucket* pBucket; // 759
				CHistogramBucket::ContainsValidData(); // 760
			}
		}
		CTonemapSystem::GetNumHistogramBuckets(); // 738
	}
	{
		int i; // 779
		CTonemapSystem::GetNumHistogramBuckets(); // 779
		CHistogramBucket::ContainsValidData(); // 781
	}
	{
		int i; // 811
	}
	{
		float flWeightedAverage; // 823
		float flSumWeights; // 824
		int iMidPoint; // 825
		{
			int i; // 826
			{
				float flWeight; // 828
			}
		}
		clamp<float, float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 833
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 835
	}
	{
		float flRate; // 886
		float flCurrentTonemapEV; // 893
		float flTargetTonemapEV; // 894
		float flTonemapEVDelta; // 896
		float flHalfDelta; // 897
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 927
		}
		Max<float>(const float& val1,
				const float& val2);  // 917
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 925
	}
	ConVar::GetInt(); // 735
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 791
	ConVar::GetInt(); // 796
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 842
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 844
	ConVar::GetFloat(); // 937
} /* size: 0, variables: 6, inline expansions: 8 (55 bytes) */

// <03A4E63C> ../scenesystem/utils/tonemapsystem.cpp:976
// variable: 1
void MyDrawColorQuad_INTERNAL(ISceneView* pView, VertexColor_t& color, int nX, int nY, int nWidth, int nHeight)
{
	Rect_t rect; // 978
} /* size: 0, variables: 1 */

// <03A5C4A2> ../scenesystem/utils/tonemapsystem.cpp:983
// variables: 3
// function calls: 6
void PrintTextWithBorder(ISceneViewDebugOverlays* pOverlayList, const char* pStringToPrint, float flXPos, float flYPos, int b, int g, int r)
{
	{
		int x; // 985
		{
			int idX; // 987
			int idY; // 988
			VertexColor_t::VertexColor_t(
					uint8 ir,
					uint8 ig,
					uint8 ib,
					uint8 ia);  // 555
			Vector2D::Vector2D(
				vec_t X,
				vec_t Y);  // 555
			ISceneViewDebugOverlays::ScreenText(
					float fXpos,
					float fYpos,
					const char* pText,
					int r,
					int g,
					int b,
					int a,
					float64 flTimeToLive);  // 990
		}
	}
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 555
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 555
	ISceneViewDebugOverlays::ScreenText(
			float fXpos,
			float fYpos,
			const char* pText,
			int r,
			int g,
			int b,
			int a,
			float64 flTimeToLive);  // 992
} /* size: 299, inline expansions: 3 (64 bytes) */

// <03A4E5AE> ../scenesystem/utils/tonemapsystem.cpp:983
// variables: 3
void PrintTextWithBorder(ISceneViewDebugOverlays* pOverlayList, const char* pStringToPrint, float flXPos, float flYPos, int r, int g, int b)
{
	{
		int x; // 985
		{
			int idX; // 987
			int idY; // 988
		}
	}
} /* size: 0 */

// <03A5E3EF> ../scenesystem/utils/tonemapsystem.cpp:997
// variables: 22
// function call: 1
void CTonemapSystem::DrawDebugHistogram(ISceneView* pView, const RenderViewport_t& viewport)
{
	VertexColor_t black; // 1005
	VertexColor_t white; // 1006
	VertexColor_t red; // 1007
	VertexColor_t green; // 1008
	VertexColor_t darkGreen; // 1009
	VertexColor_t blue; // 1010
	VertexColor_t darkBlue; // 1011
	VertexColor_t gray; // 1012
	VertexColor_t yellow; // 1013
	int nViewportX; // 1016
	int nViewportY; // 1017
	int nViewportWidth; // 1018
	int nNumHistogramBuckets; // 1021
	float flLuminanceRangeMin; // 1023
	float flLuminanceRangeMax; // 1024
	const int  nBucketPixelWidth; // 1030
	int nMaxValidPixels; // 1033
	int nTotalValidPixels; // 1034
	int nTotalGraphPixelsWide; // 1035
	int xpStart; // 1072
	int yOffset; // 1073
	int xp; // 1075
	ConVar::GetInt(); // 999
} /* size: 41, variables: 22, inline expansions: 1 (7 bytes) */

// <03A5C9F4> ../scenesystem/utils/tonemapsystem.cpp:997
// variables: 51
// function calls: 65
void CTonemapSystem::DrawDebugHistogram(ISceneView* pView, const RenderViewport_t& viewport)
{
	VertexColor_t black; // 1005
	VertexColor_t white; // 1006
	VertexColor_t red; // 1007
	VertexColor_t green; // 1008
	VertexColor_t darkGreen; // 1009
	VertexColor_t blue; // 1010
	VertexColor_t darkBlue; // 1011
	VertexColor_t gray; // 1012
	VertexColor_t yellow; // 1013
	int nViewportX; // 1016
	int nViewportY; // 1017
	int nViewportWidth; // 1018
	int nNumHistogramBuckets; // 1021
	float flLuminanceRangeMin; // 1023
	float flLuminanceRangeMax; // 1024
	const int  nBucketPixelWidth; // 1030
	int nMaxValidPixels; // 1033
	int nTotalValidPixels; // 1034
	int nTotalGraphPixelsWide; // 1035
	int xpStart; // 1072
	int yOffset; // 1073
	int xp; // 1075
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 1005
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 1006
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 1007
	CTonemapSystem::GetNumHistogramBuckets(); // 1021
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 1008
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 1009
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 1010
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 1011
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 1012
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 1013
	{
		int nBucket; // 1036
		{
			CHistogramBucket* pBucket; // 1038
			float flLuminanceMin; // 1048
			float flLuminanceMax; // 1049
			int nWidth; // 1050
			CHistogramBucket::ContainsValidData(); // 1039
			Max<float>(const float& val1,
					const float& val2);  // 1048
			Min<float>(const float& val1,
					const float& val2);  // 1049
			Max<int>(const int& val1,
				const int& val2);  // 1050
		}
	}
	{
		int nBucket; // 1076
		{
			int np; // 1078
			CHistogramBucket& e; // 1079
			float flLuminanceMin; // 1083
			float flLuminanceMax; // 1084
			int width; // 1085
			{
				int height; // 1091
				Min<int>(const int& val1,
					const int& val2);  // 1091
				Max<int>(const int& val1,
					const int& val2);  // 1091
				Rect_t::Rect_t(
					int nX,
					int nY,
					int nWidth,
					int nHeight);  // 978
				MyDrawColorQuad_INTERNAL(ISceneView* pView,
							VertexColor_t& color,
							int nX,
							int nY,
							int nWidth,
							int nHeight);  // 1092
			}
			{
				int height; // 1096
				Rect_t::Rect_t(
					int nX,
					int nY,
					int nWidth,
					int nHeight);  // 978
				MyDrawColorQuad_INTERNAL(ISceneView* pView,
							VertexColor_t& color,
							int nX,
							int nY,
							int nWidth,
							int nHeight);  // 1097
			}
			CHistogramBucket::ContainsValidData(); // 1080
			Max<float>(const float& val1,
					const float& val2);  // 1083
			Min<float>(const float& val1,
					const float& val2);  // 1084
			Max<int>(const int& val1,
				const int& val2);  // 1085
		}
	}
	{
		float flYellowTargetPixelStart; // 1105
		float flYellowAveragePixelStart; // 1106
		float flTargetPixelStart; // 1108
		float flAveragePixelStart; // 1109
		int nHeight; // 1112
		int nHeightOffset; // 1113
		Rect_t::Rect_t(
			int nX,
			int nY,
			int nWidth,
			int nHeight);  // 978
		MyDrawColorQuad_INTERNAL(ISceneView* pView,
					VertexColor_t& color,
					int nX,
					int nY,
					int nWidth,
					int nHeight);  // 1116
		Rect_t::Rect_t(
			int nX,
			int nY,
			int nWidth,
			int nHeight);  // 978
		MyDrawColorQuad_INTERNAL(ISceneView* pView,
					VertexColor_t& color,
					int nX,
					int nY,
					int nWidth,
					int nHeight);  // 1117
		Rect_t::Rect_t(
			int nX,
			int nY,
			int nWidth,
			int nHeight);  // 978
		MyDrawColorQuad_INTERNAL(ISceneView* pView,
					VertexColor_t& color,
					int nX,
					int nY,
					int nWidth,
					int nHeight);  // 1118
		Rect_t::Rect_t(
			int nX,
			int nY,
			int nWidth,
			int nHeight);  // 978
		MyDrawColorQuad_INTERNAL(ISceneView* pView,
					VertexColor_t& color,
					int nX,
					int nY,
					int nWidth,
					int nHeight);  // 1121
		Rect_t::Rect_t(
			int nX,
			int nY,
			int nWidth,
			int nHeight);  // 978
		MyDrawColorQuad_INTERNAL(ISceneView* pView,
					VertexColor_t& color,
					int nX,
					int nY,
					int nWidth,
					int nHeight);  // 1122
		Rect_t::Rect_t(
			int nX,
			int nY,
			int nWidth,
			int nHeight);  // 978
		MyDrawColorQuad_INTERNAL(ISceneView* pView,
					VertexColor_t& color,
					int nX,
					int nY,
					int nWidth,
					int nHeight);  // 1123
	}
	{
		float flAutoExposureMin; // 1129
		float flAutoExposureMax; // 1130
		float flBarWidth; // 1132
		float flBarStart; // 1133
		float flExposureX; // 1137
		float flExposureY; // 1138
		CFmtStr minExposure; // 1143
		CFmtStr maxExposure; // 1147
		float flCurExposureRatio; // 1150
		CFmtStr curExposure; // 1153
		Rect_t::Rect_t(
			int nX,
			int nY,
			int nWidth,
			int nHeight);  // 978
		MyDrawColorQuad_INTERNAL(ISceneView* pView,
					VertexColor_t& color,
					int nX,
					int nY,
					int nWidth,
					int nHeight);  // 1139
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 81
		CFmtStrN<256>::String(); // 1144
		Rect_t::Rect_t(
			int nX,
			int nY,
			int nWidth,
			int nHeight);  // 978
		MyDrawColorQuad_INTERNAL(ISceneView* pView,
					VertexColor_t& color,
					int nX,
					int nY,
					int nWidth,
					int nHeight);  // 1140
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 81
		CFmtStrN<256>::String(); // 1148
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 81
		CFmtStrN<256>::String(); // 1154
		Rect_t::Rect_t(
			int nX,
			int nY,
			int nWidth,
			int nHeight);  // 978
		MyDrawColorQuad_INTERNAL(ISceneView* pView,
					VertexColor_t& color,
					int nX,
					int nY,
					int nWidth,
					int nHeight);  // 1157
		Rect_t::Rect_t(
			int nX,
			int nY,
			int nWidth,
			int nHeight);  // 978
		MyDrawColorQuad_INTERNAL(ISceneView* pView,
					VertexColor_t& color,
					int nX,
					int nY,
					int nWidth,
					int nHeight);  // 1160
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 1169
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 1169
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 1169
	}
} /* size: 2894, variables: 22, inline expansions: 10 (87 bytes) */

// <03A4E2BE> ../scenesystem/utils/tonemapsystem.cpp:997
// variables: 51
void CTonemapSystem::DrawDebugHistogram(ISceneView* pView, const RenderViewport_t& viewport)
{
	VertexColor_t black; // 1005
	VertexColor_t white; // 1006
	VertexColor_t red; // 1007
	VertexColor_t green; // 1008
	VertexColor_t darkGreen; // 1009
	VertexColor_t blue; // 1010
	VertexColor_t darkBlue; // 1011
	VertexColor_t gray; // 1012
	VertexColor_t yellow; // 1013
	int nViewportX; // 1016
	int nViewportY; // 1017
	int nViewportWidth; // 1018
	int nNumHistogramBuckets; // 1021
	float flLuminanceRangeMin; // 1023
	float flLuminanceRangeMax; // 1024
	const int  nBucketPixelWidth; // 1030
	int nMaxValidPixels; // 1033
	int nTotalValidPixels; // 1034
	int nTotalGraphPixelsWide; // 1035
	int xpStart; // 1072
	int yOffset; // 1073
	int xp; // 1075
	{
		int nBucket; // 1036
		{
			CHistogramBucket* pBucket; // 1038
			float flLuminanceMin; // 1048
			float flLuminanceMax; // 1049
			int nWidth; // 1050
		}
	}
	{
		int nBucket; // 1076
		{
			int np; // 1078
			CHistogramBucket& e; // 1079
			float flLuminanceMin; // 1083
			float flLuminanceMax; // 1084
			int width; // 1085
			{
				int height; // 1091
			}
			{
				int height; // 1096
			}
		}
	}
	{
		float flYellowTargetPixelStart; // 1105
		float flYellowAveragePixelStart; // 1106
		float flTargetPixelStart; // 1108
		float flAveragePixelStart; // 1109
		int nHeight; // 1112
		int nHeightOffset; // 1113
	}
	{
		float flAutoExposureMin; // 1129
		float flAutoExposureMax; // 1130
		float flBarWidth; // 1132
		float flBarStart; // 1133
		float flExposureX; // 1137
		float flExposureY; // 1138
		CFmtStr minExposure; // 1143
		CFmtStr maxExposure; // 1147
		float flCurExposureRatio; // 1150
		CFmtStr curExposure; // 1153
	}
} /* size: 0, variables: 22 */

// <03A4E25E> ../scenesystem/utils/tonemapsystem.cpp:1173
void CTonemapSystem::OverrideScaleWithWeight(float flScale, float flWeight)
{
} /* size: 59 */

// <03A4E22E> ../scenesystem/utils/tonemapsystem.cpp:1181
void CTonemapSystem::ShouldPerformTonemappingOnHDRInputTexture()
{
} /* size: 12 */

