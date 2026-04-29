
//
// scenesystem/skybox.cpp
//
//	referenced by: libengine2.so
//
//	functions: 5
//	class: 1
//	struct: 1
//

// <037DA34F> ../scenesystem/skybox.cpp:17
// member functions: 8
// member variable: 1
// vtable entries: 4
// class size: 8
class CSkyBoxObjectDesc : public ISceneObjectDesc {
public:
	/* class ISceneObjectDesc <ancestor>; */ /* 0 8 */
	void ~CSkyBoxObjectDesc(CSkyBoxObjectDesc* );
	void CSkyBoxObjectDesc(CSkyBoxObjectDesc* , CSkyBoxObjectDesc& );
	void CSkyBoxObjectDesc(CSkyBoxObjectDesc* , const CSkyBoxObjectDesc& );
	void CSkyBoxObjectDesc(CSkyBoxObjectDesc* );
	/* ../scenesystem/skybox.cpp:23 */
	virtual const char* GetTypeName(CSkyBoxObjectDesc* );
	/* ../scenesystem/skybox.cpp:44 */
	virtual void DrawArray(CSkyBoxObjectDesc* , IRenderContext* , CMeshDrawPrimitive_t* , int, const ISceneView* , ISceneLayer* , SceneSystemPerFrameStats_t& );
	/* ../scenesystem/skybox.cpp:121 */
	virtual void DeleteNonPooledObject(CSkyBoxObjectDesc* , CSceneObject* );
protected:
	/* ../scenesystem/skybox.cpp:126 */
	virtual CSceneObject* Create(CSkyBoxObjectDesc* );
};

// <037E4D74> ../scenesystem/skybox.cpp:23
void CSkyBoxObjectDesc::GetTypeName()
{
} /* size: 12 */

// <037DA4BB> ../scenesystem/skybox.cpp:37
// member variables: 2
// struct size: 96
struct SkyConstantBuffer_t {
	matrix3x4_t m_matSkyOsToWs; /* 0 48 */
	matrix3x4_t m_matSkyWsToOs; /* 48 48 */
};

// <037E16A2> ../scenesystem/skybox.cpp:44
// variables: 60
// function calls: 225
void CSkyBoxObjectDesc::DrawArray(IRenderContext* pCtx, CMeshDrawPrimitive_t* pRenderList, int nNumRenderablesToDraw, const ISceneView* pViewInterface, ISceneLayer* pLayer, SceneSystemPerFrameStats_t& stats)
{
	const CSceneSkyBoxObject* pObj; // 50
	const IMaterial2* pMaterial; // 54
	IMaterialMode* pMaterialMode; // 58
	SkyConstantBuffer_t* pSkyConstants; // 62
	DynamicLockDesc_t skyLock; // 63
	ConstantBufferHandle_t hSkyConstantBuffer; // 64
	CRenderAttributes attributes; // 79
	ESkyboxFogType_t nFogType; // 88
	const CSimpleStaticShapeDesc& box; // 107
	MaterialRenderablePass_t renderablePass; // 108
	int nNumPasses; // 109
	{
		int __executeCount; // 68
	}
	{
		float flMinStart; // 93
		float flMinEnd; // 94
		CSceneSkyBoxObject::GetFogMinStart(); // 93
		CSceneSkyBoxObject::GetFogMinEnd(); // 94
		CSceneSkyBoxObject::GetFogMinStart(); // 98
		DEG2RAD(float flDegrees); // 98
		CSceneSkyBoxObject::GetFogMinEnd(); // 99
		DEG2RAD(float flDegrees); // 99
		CSceneSkyBoxObject::GetFogMaxStart(); // 102
		DEG2RAD(float flDegrees); // 102
		CSceneSkyBoxObject::GetFogMaxEnd(); // 103
		DEG2RAD(float flDegrees); // 103
	}
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator CWeakHandle<InfoForResourceTypeIMaterial2>(); // 64
	CSceneSkyBoxObject::GetMaterial(); // 54
	CInterlockedIntT<int, 4>::operator int(); // 294
	ResourceHandleToData<IMaterial2>(const ResourceBindingBase_t* hResource); // 54
	ISceneLayer::GetShaderMode(); // 58
	CSceneObject::GetTransform(); // 75
	matrix3x4_t::matrix3x4_t(); // 2781
	matrix3x4_t::Transposed(); // 75
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
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
	CUtlString::CUtlString(); // 117
	CUtlAttributeListChunk<CUtlString, 2, CUtlString>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::CUtlIntrusiveList(); // 248
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::CUtlAttributeList(); // 898
	CRenderAttributes::CRenderAttributes(); // 79
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
		CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t>& __for_range; // 26183
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_begin; // 26193
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_end; // 26203
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Constant this,
						OverflowChunk_t* pNode);  // 1151
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAt this); // 317
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Constant this,
						OverflowChunk_t* pNode);  // 1156
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAt this); // 317
	}
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::FindIndexOfMatch(
			i32x4 n4Key,
			ConstantBufferAttr_t** pValueOut);  // 309
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::FindIndexOfMatch(
			i32x4 n4Key,
			ConstantBufferAttr_t** pValueOut);  // 356
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 356
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
		CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t>& __for_range; // 34574
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_begin; // 34584
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_end; // 34594
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Constant this,
						OverflowChunk_t* pNode);  // 1151
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAt this); // 337
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Constant this,
						OverflowChunk_t* pNode);  // 1156
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAt this); // 337
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
	ConstantBufferAttr_t::ConstantBufferAttr_t(
				const ConstantBufferAttr_t& other);  // 571
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::SetValue(
		const CUtlStringToken& nTok,
		ConstantBufferAttr_t nValue);  // 732
	ConstantBufferAttr_t::ConstantBufferAttr_t(
				ConstantBufferHandle_t hBuf,
				uint32 nV);  // 732
	CRenderAttributes::SetConstantBufferValue(
				CUtlStringToken nTokenID,
				ConstantBufferHandle_t cb,
				uint32 nView);  // 80
	CSceneObject::GetExtraData(); // 81
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
	CRenderAttributes::SetParent(
			const CRenderAttributes* pParent);  // 83
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 86
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
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 26674
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 26684
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 26694
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
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 35278
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 35288
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 35298
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
		AddToHead<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t, CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>(OverflowChunk_t *& head,
																OverflowChunk_t* node);  // 960
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::AddToHead(
				OverflowChunk_t* node);  // 560
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
					int nIdx);  // 563
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
		Vector4D nValue);  // 236
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 236
	CRenderAttributes::SetVectorValue(
			CUtlStringToken nTokenID,
			Vector vValue);  // 86
	CSceneSkyBoxObject::GetFogType(); // 88
} /* size: 2630, variables: 11, inline expansions: 131 (6335 bytes) */

// <037E1609> ../scenesystem/skybox.cpp:121
// function call: 1
void CSkyBoxObjectDesc::DeleteNonPooledObject(CSceneObject* pObject)
{
	ISceneObjectDesc::DeleteNonPooledObject(
				CSceneObject* pObject);  // 123
} /* size: 25, inline expansions: 1 (20 bytes) */

// <037E0FEA> ../scenesystem/skybox.cpp:126
// variable: 1
// function calls: 23
void CSkyBoxObjectDesc::Create()
{
	CSceneSkyBoxObject* pNew; // 128
	IGenericInterface::IGenericInterface(); // 1428
	{
	}
	AlignedByteArrayExplicit_t<3, unsigned int, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<3, unsigned int>::AlignedByteArray_t(); // 228
	CUtlMemory<unsigned int, int>::CUtlMemory(
			unsigned int* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<unsigned int, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::CUtlMemoryFixedGrowable_Base(
					unsigned int* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<3, unsigned int, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<unsigned int, 3, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<unsigned int, 3>::CUtlVectorFixedGrowable(
				int growSize);  // 1428
	matrix3x4_t::matrix3x4_t(); // 303
	matrix3x4a_t::matrix3x4a_t(); // 1428
	CUtlStringToken::CUtlStringToken(); // 1428
	CManagedHandle::CManagedHandle(); // 1428
	CSceneObject::CSceneObject(); // 53
	CThreadMutex::CThreadMutex(
			const char* pName);  // 53
	CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(); // 53
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 47
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 46
	CSceneSkyBoxObject::CSceneSkyBoxObject(); // 128
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 130
	CSceneObject::SetLayerMatchID(
			CUtlStringToken nTok);  // 130
} /* size: 434, variables: 1, inline expansions: 23 (924 bytes) */

// <037E0A24> ../scenesystem/skybox.cpp:135
// variables: 3
// function calls: 22
void CSceneSystem::CreateSkyBox(HMaterial hSkyMaterial, ISceneWorld* pWorld)
{
	CSceneSkyBoxObject* pNew; // 137
	Vector vecMins; // 139
	Vector vecMaxes; // 139
	CSceneObject::SetBounds(
			const Vector& vecWorldMins,
			const Vector& vecWorldMaxes);  // 140
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 67
	Vector::Vector(
		vec_t xyz);  // 140
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 67
	Vector::Vector(
		vec_t xyz);  // 140
	Vector::Vector(); // 139
	Vector::Vector(); // 139
	CSceneObject::EnsureExtraData(); // 2289
	CSceneObject::EnsureExtraData(); // 2268
	CSceneObject::SetDepthSortBias(
			float flDepthBias);  // 2263
	CSceneObject::SetDepthSortBias(
			float flDepthBias);  // 141
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1940
	CSceneObject::SetFlags(
		ESceneObjectFlags nFlagsToOR);  // 1966
	CSceneObject::SetLoaded(); // 143
	CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
		const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 144
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 570
	CStrongHandle<InfoForResourceTypeIMaterial2>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator=(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 65
	CSceneSkyBoxObject::SetMaterial(
			HMaterial hMaterial);  // 144
} /* size: 432, variables: 3, inline expansions: 22 (751 bytes) */

