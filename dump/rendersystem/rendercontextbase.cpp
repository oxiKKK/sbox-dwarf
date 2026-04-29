
//
// rendersystem/rendercontextbase.cpp
//
//	referenced by: librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 91
//

// <001019D5> rendersystem/rendercontextbase.cpp:34
// variables: 4
// function calls: 9
void* CCommandStream::AllocExtraDataBlock(int nBytes, int nAlign)
{
	const int  nHeaderBytes; // 43
	void* pBlock; // 46
	int nBlockBytes; // 47
	ExtraData_t* pHeader; // 74
	CUtlMemoryPool<CLargeCommandBufferChunk>::Alloc(); // 169
	operator new(size_t size); // 61
	CUtlMemoryPool<CMediumCommandBufferChunk>::Alloc(); // 153
	operator new(size_t size); // 56
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 71
	CUtlMemoryPool<CCommandBufferChunk>::Alloc(); // 81
	operator new(size_t size); // 51
} /* size: 307, variables: 4, inline expansions: 9 (96 bytes) */

// <000FFD43> rendersystem/rendercontextbase.cpp:112
// variables: 14
// function calls: 127
void CRenderContextBase::CRenderContextBase()
{
	{
		int i; // 130
	}
	{
		int32 nType; // 134
		{
			int32 nSlot; // 136
		}
	}
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
	CRenderAttributes::CRenderAttributes(); // 192
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 192
	IRenderContext::IRenderContext(); // 120
	IStreamBuilderCallback<CCommandStream>::IStreamBuilderCallback(); // 120
	CCommandStreamBuilder::Reset(); // 617
	CCommandStreamBuilder::CCommandStreamBuilder(); // 120
	RenderViewport_t::RenderViewport_t(); // 120
	{
		uint32* pThis; // 978
		const uint32* pDefault; // 979
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
		CSamplerStateDescBase::CSamplerStateDescBase(); // 927
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
	CSamplerStateDesc::CSamplerStateDesc(); // 120
	CRenderContextBase::GetDevice(); // 124
	{
		int i; // 130
	}
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 1069
	CRenderDeviceBase::GetContextFrameCount(); // 124
	CCommandStreamBuilder::Init(
		IStreamBuilderCallback<CCommandStream>* pCallback);  // 126
	{
		int32 nType; // 134
		{
			int32 nSlot; // 136
		}
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 693
	IRenderContext::ResetMaterialStateHint(); // 145
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 151
	CUtlMemory<IRenderContext::ValidateGrowSize(); // 475
	CUtlMemory<IRenderContext::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<IRenderContext::ResetDbgInfo(); // 530
	CUtlVectorBase<IRenderContext::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<IRenderContext::CUtlVector(); // 120
} /* size: 1295, inline expansions: 97 (3616 bytes) */

// <000FFCFD> rendersystem/rendercontextbase.cpp:112
// variables: 3
void CRenderContextBase::CRenderContextBase()
{
	{
		int i; // 130
	}
	{
		int32 nType; // 134
		{
			int32 nSlot; // 136
		}
	}
} /* size: 0 */

// <000FF9E5> rendersystem/rendercontextbase.cpp:158
// function calls: 14
void CRenderContextBase::~CRenderContextBase()
{
	{
		{
		}
	}
	{
		CCommandStreamBuilder::HasStreamStarted(); // 160
		{
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<unsigned int, 4>::operator--(); // 161
		CUtlVectorBase<IRenderContext::RemoveAll(); // 1798
		CUtlMemory<IRenderContext::IsExternallyAllocated(); // 905
		CUtlMemory<IRenderContext::Purge(); // 903
		CUtlMemory<IRenderContext::Purge(); // 1799
		CUtlVectorBase<IRenderContext::Purge(); // 560
		ValidateAlignment<IRenderContext*>(void); // 508
		CUtlMemory<IRenderContext::Purge(); // 510
		CUtlMemory<IRenderContext::~CUtlMemory(); // 562
		CUtlVectorBase<IRenderContext::~CUtlVectorBase(); // 410
		CUtlVector<IRenderContext::~CUtlVector(); // 162
		IRenderContext::~IRenderContext(); // 162
	}
} /* size: 0 */

// <000FF97D> rendersystem/rendercontextbase.cpp:158
void CRenderContextBase::~CRenderContextBase()
{
} /* size: 0 */

// <000FF940> rendersystem/rendercontextbase.cpp:158
// variables: 2
void CRenderContextBase::~CRenderContextBase()
{
	const char   __FUNCTION__; // 40479
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 160
	}
} /* size: 0, variables: 1 */

// <000FE0CB> rendersystem/rendercontextbase.cpp:158
// variables: 2
void CRenderContextBase::~CRenderContextBase()
{
	const char   __FUNCTION__; // 10523
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 160
	}
} /* size: 0, variables: 1 */

// <001052E3> rendersystem/rendercontextbase.cpp:167
void CRenderContextBase::GetDevice()
{
} /* size: 15 */

// <0010530C> rendersystem/rendercontextbase.cpp:176
void CRenderContextBase::OnNewStreamStarted(CCommandStream* pStream)
{
} /* size: 5 */

// <000FF84D> rendersystem/rendercontextbase.cpp:184
// variables: 2
void CRenderContextBase::SetIsSecondaryContext(RenderContextCreationInfo_t* pOptInfo, bool bSupportByDefault)
{
	const char   __FUNCTION__; // 40533
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 186
	}
} /* size: 0, variables: 1 */

// <000FDFD8> rendersystem/rendercontextbase.cpp:184
// variables: 2
void CRenderContextBase::SetIsSecondaryContext(RenderContextCreationInfo_t* pOptInfo, bool bSupportByDefault)
{
	const char   __FUNCTION__; // 10577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 186
	}
} /* size: 0, variables: 1 */

// <000FEDDD> rendersystem/rendercontextbase.cpp:194
// variables: 9
// function calls: 36
void CRenderContextBase::SetDefaultState()
{
	float pBlendFactor; // 202
	const char   __FUNCTION__; // 40381
	{
		int i; // 209
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 211
		}
		{
			int s; // 212
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
			DefaultSamplerStateDesc(void); // 214
		}
	}
	{
		int32 nType; // 218
	}
	{
		void* pRasterizerState; // 804
		CRenderContextBase::SetRasterizerStateInternal(
						void* pRS);  // 805
	}
	CRenderContextBase::SetRasterizerStateInternal(
					void* pRS);  // 809
	CRenderContextBase::SetCullMode(
			RenderCullMode_t eCullMode);  // 799
	CRenderContextBase::SetCullMode(
			RenderCullMode_t eCullMode);  // 201
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 418
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 419
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 420
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 421
	CRenderContextBase::SetBlendStateInternal(
				void* pBS,
				const float* pBlendFactor,
				uint32 nMultisampleMask);  // 883
	CRenderContextBase::SetBlendMode(
			RenderBlendMode_t eBlendMode,
			const float* pBlendFactor);  // 203
	CRenderContextBase::SetDepthStencilStateInternal(
					void* pDS,
					uint32 nStencilRef);  // 862
	CRenderContextBase::SetZBufferMode(
			RenderZBufferMode_t eZBufferMode);  // 204
	CInterlockedIntT<unsigned int, 4>::operator()(const CInterlockedIntT<unsigned int, 4>* this); // 207
	memset(void* __dest,
		int __ch,
		size_t __len);  // 223
	memset(void* __dest,
		int __ch,
		size_t __len);  // 224
	memset(void* __dest,
		int __ch,
		size_t __len);  // 225
	memset(void* __dest,
		int __ch,
		size_t __len);  // 226
} /* size: 0, variables: 2, inline expansions: 20 (885 bytes) */

// <000FD568> rendersystem/rendercontextbase.cpp:194
// variables: 9
// function calls: 36
void CRenderContextBase::SetDefaultState()
{
	float pBlendFactor; // 202
	const char   __FUNCTION__; // 10425
	{
		int i; // 209
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 211
		}
		{
			int s; // 212
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
			DefaultSamplerStateDesc(void); // 214
		}
	}
	{
		int32 nType; // 218
	}
	{
		void* pRasterizerState; // 804
		CRenderContextBase::SetRasterizerStateInternal(
						void* pRS);  // 805
	}
	CRenderContextBase::SetRasterizerStateInternal(
					void* pRS);  // 809
	CRenderContextBase::SetCullMode(
			RenderCullMode_t eCullMode);  // 799
	CRenderContextBase::SetCullMode(
			RenderCullMode_t eCullMode);  // 201
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 418
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 419
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 420
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 421
	CRenderContextBase::SetBlendStateInternal(
				void* pBS,
				const float* pBlendFactor,
				uint32 nMultisampleMask);  // 883
	CRenderContextBase::SetBlendMode(
			RenderBlendMode_t eBlendMode,
			const float* pBlendFactor);  // 203
	CRenderContextBase::SetDepthStencilStateInternal(
					void* pDS,
					uint32 nStencilRef);  // 862
	CRenderContextBase::SetZBufferMode(
			RenderZBufferMode_t eZBufferMode);  // 204
	CInterlockedIntT<unsigned int, 4>::operator()(const CInterlockedIntT<unsigned int, 4>* this); // 207
	memset(void* __dest,
		int __ch,
		size_t __len);  // 223
	memset(void* __dest,
		int __ch,
		size_t __len);  // 224
	memset(void* __dest,
		int __ch,
		size_t __len);  // 225
	memset(void* __dest,
		int __ch,
		size_t __len);  // 226
} /* size: 0, variables: 2, inline expansions: 20 (0 bytes) */

// <000FEC9D> rendersystem/rendercontextbase.cpp:241
// variables: 2
// function calls: 2
void CRenderContextBase::SetViewports(int nCount, const RenderViewport_t* pViewports)
{
	const char   __FUNCTION__; // 40305
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 244
	}
	Min<int>(const int& val1,
		const int& val2);  // 243
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 245
} /* size: 0, variables: 1, inline expansions: 2 (23 bytes) */

// <000FD428> rendersystem/rendercontextbase.cpp:241
// variables: 2
// function calls: 2
void CRenderContextBase::SetViewports(int nCount, const RenderViewport_t* pViewports)
{
	const char   __FUNCTION__; // 10349
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 244
	}
	Min<int>(const int& val1,
		const int& val2);  // 243
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 245
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <000FEBF9> rendersystem/rendercontextbase.cpp:248
// variables: 2
void CRenderContextBase::GetViewport(RenderViewport_t* pViewport, int nViewport)
{
	const char   __FUNCTION__; // 40278
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 250
	}
} /* size: 0, variables: 1 */

// <000FD384> rendersystem/rendercontextbase.cpp:248
// variables: 2
void CRenderContextBase::GetViewport(RenderViewport_t* pViewport, int nViewport)
{
	const char   __FUNCTION__; // 10322
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 250
	}
} /* size: 0, variables: 1 */

// <0010555C> rendersystem/rendercontextbase.cpp:256
void CRenderContextBase::SetDebugFlag(RenderDebugFlag_t nFlag, bool bOnOff)
{
} /* size: 32 */

// <000FEA81> rendersystem/rendercontextbase.cpp:268
// variable: 1
// function calls: 2
void CRenderContextBase::SetDebugString(const char* pDebugStringFmt, ...)
{
	va_list args; // 271
	CRenderContextBase::VaSetDebugString(
			const char* pDebugStringFmt,
			typedef __va_list_tag __va_list_tag* arglist);  // 278
	CRenderContextBase::VaSetDebugString(
			const char* pDebugStringFmt,
			typedef __va_list_tag __va_list_tag* arglist);  // 273
} /* size: 240, variables: 1, inline expansions: 2 (66 bytes) */

// <0010576A> rendersystem/rendercontextbase.cpp:278
// function call: 1
void CRenderContextBase::VaSetDebugString(const char* pDebugStringFmt, typedef __va_list_tag __va_list_tag* arglist)
{
	CRenderContextBase::VaSetDebugString(
			const char* pDebugStringFmt,
			typedef __va_list_tag __va_list_tag* arglist);  // 278
} /* size: 49, inline expansions: 1 (32 bytes) */

// <000FEA4E> rendersystem/rendercontextbase.cpp:278
void CRenderContextBase::VaSetDebugString(const char* pDebugStringFmt, typedef __va_list_tag __va_list_tag* arglist)
{
} /* size: 0 */

// <0010533C> rendersystem/rendercontextbase.cpp:290
void CRenderContextBase::GetDebugString()
{
} /* size: 12 */

// <000FE4E8> rendersystem/rendercontextbase.cpp:299
// variable: 1
// function calls: 15
void CRenderContextBase::SetStatesToDefault(uint32 nSetFlags, uint32 nNotSetFlags)
{
	{
		float blendFactor; // 351
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 418
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 419
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 420
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 421
		CRenderContextBase::SetBlendStateInternal(
					void* pBS,
					const float* pBlendFactor,
					uint32 nMultisampleMask);  // 876
		CRenderContextBase::SetBlendState(
				RsBlendStateHandle_t blendState,
				const float* pBlendFactor,
				uint32 nSampleMask);  // 352
	}
	CRenderContextBase::SetOverrideDepthStencilState(
					RsDepthStencilStateHandle_t dsState,
					uint32 nStencilRef);  // 340
	CRenderContextBase::SetDepthStencilStateInternal(
					void* pDS,
					uint32 nStencilRef);  // 848
	CRenderContextBase::SetDepthStencilState(
				RsDepthStencilStateHandle_t depthStencilState,
				uint32 nStencilRef);  // 343
	CRenderContextBase::SetRasterizerStateInternal(
					void* pRS);  // 793
	CRenderContextBase::SetRasterizerState(
				RsRasterizerStateHandle_t rasterizerState);  // 334
} /* size: 903, inline expansions: 5 (251 bytes) */

// <000FE1A8> rendersystem/rendercontextbase.cpp:357
// variables: 4
// function calls: 10
void CRenderContextBase::SetSamplerStateVS(int nSamplerIndex, RsFilter_t eFilterMode, RsTextureAddressMode_t eUWrapMode, RsTextureAddressMode_t eVWrapMode, RsTextureAddressMode_t eWWrapMode, RsComparison_t eTextureComparisonMode)
{
	bool bChanged; // 361
	const char   __FUNCTION__; // 40430
	CSamplerStateDesc& desc; // 364
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 363
	}
	CSamplerStateDescBase::GetFilterMode(); // 372
	CSamplerStateDescBase::SetFilterMode(
			RsFilter_t filter);  // 374
	CSamplerStateDescBase::GetTextureAddressModeU(); // 378
	CSamplerStateDescBase::SetTextureAddressModeU(
				RsTextureAddressMode_t addressMode);  // 380
	CSamplerStateDescBase::GetTextureAddressModeV(); // 384
	CSamplerStateDescBase::SetTextureAddressModeV(
				RsTextureAddressMode_t addressMode);  // 386
	CSamplerStateDescBase::GetTextureAddressModeW(); // 390
	CSamplerStateDescBase::SetTextureAddressModeW(
				RsTextureAddressMode_t addressMode);  // 392
	CSamplerStateDescBase::GetComparisonFunc(); // 396
	CSamplerStateDescBase::SetComparisonFunc(
				RsComparison_t compFunc);  // 398
} /* size: 0, variables: 3, inline expansions: 10 (105 bytes) */

// <000FC933> rendersystem/rendercontextbase.cpp:357
// variables: 4
// function calls: 10
void CRenderContextBase::SetSamplerStateVS(int nSamplerIndex, RsFilter_t eFilterMode, RsTextureAddressMode_t eUWrapMode, RsTextureAddressMode_t eVWrapMode, RsTextureAddressMode_t eWWrapMode, RsComparison_t eTextureComparisonMode)
{
	bool bChanged; // 361
	const char   __FUNCTION__; // 10474
	CSamplerStateDesc& desc; // 364
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 363
	}
	CSamplerStateDescBase::GetFilterMode(); // 372
	CSamplerStateDescBase::SetFilterMode(
			RsFilter_t filter);  // 374
	CSamplerStateDescBase::GetTextureAddressModeU(); // 378
	CSamplerStateDescBase::SetTextureAddressModeU(
				RsTextureAddressMode_t addressMode);  // 380
	CSamplerStateDescBase::GetTextureAddressModeV(); // 384
	CSamplerStateDescBase::SetTextureAddressModeV(
				RsTextureAddressMode_t addressMode);  // 386
	CSamplerStateDescBase::GetTextureAddressModeW(); // 390
	CSamplerStateDescBase::SetTextureAddressModeW(
				RsTextureAddressMode_t addressMode);  // 392
	CSamplerStateDescBase::GetComparisonFunc(); // 396
	CSamplerStateDescBase::SetComparisonFunc(
				RsComparison_t compFunc);  // 398
} /* size: 0, variables: 3, inline expansions: 10 (0 bytes) */

// <000FDE62> rendersystem/rendercontextbase.cpp:409
// variables: 4
// function calls: 10
void CRenderContextBase::SetSamplerStatePS(int nSamplerIndex, RsFilter_t eFilterMode, RsTextureAddressMode_t eUWrapMode, RsTextureAddressMode_t eVWrapMode, RsTextureAddressMode_t eWWrapMode, RsComparison_t eTextureComparisonMode)
{
	const char   __FUNCTION__; // 40430
	CSamplerStateDesc& desc; // 414
	bool bChanged; // 416
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 413
	}
	CSamplerStateDescBase::GetFilterMode(); // 424
	CSamplerStateDescBase::SetFilterMode(
			RsFilter_t filter);  // 426
	CSamplerStateDescBase::GetTextureAddressModeU(); // 430
	CSamplerStateDescBase::SetTextureAddressModeU(
				RsTextureAddressMode_t addressMode);  // 432
	CSamplerStateDescBase::GetTextureAddressModeV(); // 436
	CSamplerStateDescBase::SetTextureAddressModeV(
				RsTextureAddressMode_t addressMode);  // 438
	CSamplerStateDescBase::GetTextureAddressModeW(); // 442
	CSamplerStateDescBase::SetTextureAddressModeW(
				RsTextureAddressMode_t addressMode);  // 444
	CSamplerStateDescBase::GetComparisonFunc(); // 448
	CSamplerStateDescBase::SetComparisonFunc(
				RsComparison_t compFunc);  // 450
} /* size: 0, variables: 3, inline expansions: 10 (105 bytes) */

// <000FC5ED> rendersystem/rendercontextbase.cpp:409
// variables: 4
// function calls: 10
void CRenderContextBase::SetSamplerStatePS(int nSamplerIndex, RsFilter_t eFilterMode, RsTextureAddressMode_t eUWrapMode, RsTextureAddressMode_t eVWrapMode, RsTextureAddressMode_t eWWrapMode, RsComparison_t eTextureComparisonMode)
{
	const char   __FUNCTION__; // 10474
	CSamplerStateDesc& desc; // 414
	bool bChanged; // 416
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 413
	}
	CSamplerStateDescBase::GetFilterMode(); // 424
	CSamplerStateDescBase::SetFilterMode(
			RsFilter_t filter);  // 426
	CSamplerStateDescBase::GetTextureAddressModeU(); // 430
	CSamplerStateDescBase::SetTextureAddressModeU(
				RsTextureAddressMode_t addressMode);  // 432
	CSamplerStateDescBase::GetTextureAddressModeV(); // 436
	CSamplerStateDescBase::SetTextureAddressModeV(
				RsTextureAddressMode_t addressMode);  // 438
	CSamplerStateDescBase::GetTextureAddressModeW(); // 442
	CSamplerStateDescBase::SetTextureAddressModeW(
				RsTextureAddressMode_t addressMode);  // 444
	CSamplerStateDescBase::GetComparisonFunc(); // 448
	CSamplerStateDescBase::SetComparisonFunc(
				RsComparison_t compFunc);  // 450
} /* size: 0, variables: 3, inline expansions: 10 (0 bytes) */

// <000FDD5D> rendersystem/rendercontextbase.cpp:461
// function calls: 3
void CRenderContextBase::SetSamplerState(int32 nSamplerIndex, const CSamplerStateDesc* pSamplerDesc, RenderShaderType_t nTargetPipelineStage)
{
	CHANGE_FLAG_SAMPLERSTATES(RenderShaderType_t nType); // 468
	CSamplerStateDesc::operator!=(
			const CSamplerStateDesc& state);  // 471
	CHANGE_FLAG_SAMPLERSTATES(RenderShaderType_t nType); // 474
} /* size: 161, inline expansions: 3 (40 bytes) */

// <000FDBCA> rendersystem/rendercontextbase.cpp:479
// variables: 4
// function calls: 3
void CRenderContextBase::SetSamplerStates(int nStartSamplerIndex, int nSamplerCount, const CSamplerStateDesc* pSamplerDescs, RenderShaderType_t nTargetPipelineStage)
{
	int nHighestSamplerIndex; // 484
	CSamplerStateDesc* pDestSamplerDesc; // 491
	int nMask; // 493
	{
		int i; // 494
		CHANGE_FLAG_SAMPLERSTATES(RenderShaderType_t nType); // 500
		CSamplerStateDesc::operator!=(
				const CSamplerStateDesc& state);  // 496
	}
	CHANGE_FLAG_SAMPLERSTATES(RenderShaderType_t nType); // 488
} /* size: 281, variables: 3, inline expansions: 1 (11 bytes) */

// <000FD915> rendersystem/rendercontextbase.cpp:506
// variables: 4
// function calls: 4
void CRenderContextBase::LockDynamicConstantBuffer(uint32 nSize, DynamicLockDesc_t* pLockDesc)
{
	uint32 nViewAlignedSize; // 509
	int nBucket; // 510
	ConstantBufferHandle_t hRet; // 511
	{
		ConstantBuffer_t* pBuf; // 514
		ConstantBuffer_t::GetData(); // 515
	}
	AlignValue<unsigned int>(unsigned int val,
				uintp alignment);  // 509
	SmallestPowerOfTwoGreaterOrEqual(uint32 x); // 81
	CalculateBucket(uint32 nAllocSize); // 510
} /* size: 150, variables: 3, inline expansions: 3 (99 bytes) */

// <00106F38> rendersystem/rendercontextbase.cpp:528
// variables: 3
// function calls: 19
void CRenderContextBase::UnlockDynamicConstantBuffer(ConstantBufferHandle_t hBuffer, uint32 nWrittenSizeInBytes)
{
	ConstantBuffer_t* pBuffer; // 530
	CommandDynamicCBUpdate_t cmd; // 544
	ConstantBuffer_t::GetNumViews(); // 539
	ConstantBuffer_t::GetViewRequestedSize(); // 539
	{
	}
	CommandBase_t::CommandBase_t(
			int nOpCode,
			bool bSkipOnLostDevice,
			int nCmdSizeInBytes);  // 117
	CommandHelper_t<CommandDynamicCBUpdate_t, 8, false>::CommandHelper_t(); // 197
	CommandDynamicCBUpdate_t::CommandDynamicCBUpdate_t(); // 544
	CCommandStreamBuilder::AvailableCommandBufferSpace(); // 677
	CUtlMemoryPool<CCommandBufferChunk>::Alloc(); // 81
	operator new(size_t size); // 133
	Alloc(void); // 328
	AllocateChunk(void); // 690
	CCommandStreamBuilder::EnsureStream(); // 695
	{
		CommandJump_t cmd; // 705
		CommandBase_t::CommandBase_t(
				int nOpCode,
				bool bSkipOnLostDevice,
				int nCmdSizeInBytes);  // 117
		CommandHelper_t<CommandJump_t, 1, false>::CommandHelper_t(); // 143
		CommandJump_t::CommandJump_t(); // 705
		CCommandStreamBuilder::Store<CommandJump_t>(
					CommandJump_t obj);  // 707
	}
	CCommandStreamBuilder::GrowForCapacity(
			int nNumBytes);  // 681
	CCommandStreamBuilder::EnsureCapacity(
			int nNumBytes);  // 530
	CCommandStreamBuilder::WriteCmd<CommandDynamicCBUpdate_t>(
						const CommandDynamicCBUpdate_t& obj);  // 546
	{
	}
	CRenderContextBase::UnlockDynamicConstantBuffer(
					ConstantBufferHandle_t hBuffer,
					uint32 nWrittenSizeInBytes);  // 528
} /* size: 0, variables: 2, inline expansions: 15 (649 bytes) */

// <000FD838> rendersystem/rendercontextbase.cpp:528
// variables: 5
void CRenderContextBase::UnlockDynamicConstantBuffer(ConstantBufferHandle_t hBuffer, uint32 nWrittenSizeInBytes)
{
	ConstantBuffer_t* pBuffer; // 530
	const char   __FUNCTION__; // 40680
	CommandDynamicCBUpdate_t cmd; // 544
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 534
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 539
	}
} /* size: 0, variables: 3 */

// <000FBFC3> rendersystem/rendercontextbase.cpp:528
// variables: 5
void CRenderContextBase::UnlockDynamicConstantBuffer(ConstantBufferHandle_t hBuffer, uint32 nWrittenSizeInBytes)
{
	ConstantBuffer_t* pBuffer; // 530
	const char   __FUNCTION__; // 10724
	CommandDynamicCBUpdate_t cmd; // 544
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 534
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 539
	}
} /* size: 0, variables: 3 */

// <000FD7C2> rendersystem/rendercontextbase.cpp:553
void CRenderContextBase::GetMaxToRender(int vertexSize, int indexSize, int* pMaxVerts, int* pMaxIndices)
{
} /* size: 77 */

// <000FD564> rendersystem/rendercontextbase.cpp:582
// function calls: 11
void CRenderContextBase::DependsOn(CDependencyDescriptor* pDesc)
{
	CCommandStreamBuilder::EnsureStream(); // 584
	CCommandStreamBuilder::GetCurrentStream(); // 585
	CUtlMemory<CDependencyDescriptor::NumAllocated(); // 1196
	CUtlMemory<CDependencyDescriptor::operator[](
			int i);  // 602
	CUtlVectorBase<CDependencyDescriptor::Element(
		int i);  // 1201
	CopyConstruct<CDependencyDescriptor*>(CDependencyDescriptor** pMemory,
						CDependencyDescriptor* const& src);  // 1201
	CUtlMemory<CDependencyDescriptor::Base(); // 112
	CUtlVectorBase<CDependencyDescriptor::Base(); // 368
	CUtlVectorBase<CDependencyDescriptor::ResetDbgInfo(); // 824
	CUtlVectorBase<CDependencyDescriptor::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CDependencyDescriptor::AddToTail(
			CDependencyDescriptor* const& src);  // 585
} /* size: 171, inline expansions: 11 (205 bytes) */

// <000FD305> rendersystem/rendercontextbase.cpp:588
// function calls: 11
void CRenderContextBase::Satisfies(CDependencyDescriptor* pDesc)
{
	CCommandStreamBuilder::EnsureStream(); // 590
	CCommandStreamBuilder::GetCurrentStream(); // 591
	CUtlMemory<CDependencyDescriptor::NumAllocated(); // 1196
	CUtlMemory<CDependencyDescriptor::operator[](
			int i);  // 602
	CUtlVectorBase<CDependencyDescriptor::Element(
		int i);  // 1201
	CopyConstruct<CDependencyDescriptor*>(CDependencyDescriptor** pMemory,
						CDependencyDescriptor* const& src);  // 1201
	CUtlMemory<CDependencyDescriptor::Base(); // 112
	CUtlVectorBase<CDependencyDescriptor::Base(); // 368
	CUtlVectorBase<CDependencyDescriptor::ResetDbgInfo(); // 824
	CUtlVectorBase<CDependencyDescriptor::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CDependencyDescriptor::AddToTail(
			CDependencyDescriptor* const& src);  // 591
} /* size: 195, inline expansions: 11 (259 bytes) */

// <001055FE> rendersystem/rendercontextbase.cpp:598
// function call: 1
void CRenderContextBase::BindRenderTargets(const RenderTargetDesc_t& renderTargetDesc)
{
	IRenderContext::IsSecondaryContext(); // 601
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0010559F> rendersystem/rendercontextbase.cpp:598
void RenderTargetDesc_t& renderTargetDesc, const CRenderContextBase::BindRenderTargets()
{
	{
	}
} /* size: 23 */

// <000FD2BB> rendersystem/rendercontextbase.cpp:598
// variables: 2
void CRenderContextBase::BindRenderTargets(const RenderTargetDesc_t& renderTargetDesc)
{
	const char   __FUNCTION__; // 40430
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 601
	}
} /* size: 0, variables: 1 */

// <000FBA46> rendersystem/rendercontextbase.cpp:598
// variables: 2
void CRenderContextBase::BindRenderTargets(const RenderTargetDesc_t& renderTargetDesc)
{
	const char   __FUNCTION__; // 10474
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 601
	}
} /* size: 0, variables: 1 */

// <000FD14E> rendersystem/rendercontextbase.cpp:604
// variables: 3
// function calls: 3
void CRenderContextBase::Submit()
{
	const char   __FUNCTION__; // 40158
	CDisplayList* pDisplayList; // 610
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 608
	}
	IRenderContext::IsSecondaryContext(); // 608
	DisplayListToSubmit_t::DisplayListToSubmit_t(
				CDisplayList* pList,
				bool bPersist);  // 533
	IRenderDevice::SubmitDisplayList(
				CDisplayList* pCommandList);  // 613
} /* size: 0, variables: 2, inline expansions: 3 (26 bytes) */

// <000FB8D9> rendersystem/rendercontextbase.cpp:604
// variables: 3
// function calls: 3
void CRenderContextBase::Submit()
{
	const char   __FUNCTION__; // 10207
	CDisplayList* pDisplayList; // 610
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 608
	}
	IRenderContext::IsSecondaryContext(); // 608
	DisplayListToSubmit_t::DisplayListToSubmit_t(
				CDisplayList* pList,
				bool bPersist);  // 533
	IRenderDevice::SubmitDisplayList(
				CDisplayList* pCommandList);  // 613
} /* size: 0, variables: 2, inline expansions: 3 (0 bytes) */

// <000FCF67> rendersystem/rendercontextbase.cpp:617
// variables: 4
// function calls: 2
void CRenderContextBase::SubmitSecondaryDisplayList(CDisplayList* pDisplayList, bool bDontFreeAfterExecute)
{
	const char   __FUNCTION__; // 40653
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 621
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 623
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 627
	}
	IRenderContext::IsSecondaryContext(); // 621
	CCommandStream::IsFromPrimaryContext(); // 623
} /* size: 141, variables: 1, inline expansions: 2 (0 bytes) */

// <000FB6F2> rendersystem/rendercontextbase.cpp:617
// variables: 4
// function calls: 2
void CRenderContextBase::SubmitSecondaryDisplayList(CDisplayList* pDisplayList, bool bDontFreeAfterExecute)
{
	const char   __FUNCTION__; // 10697
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 621
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 623
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 627
	}
	IRenderContext::IsSecondaryContext(); // 621
	CCommandStream::IsFromPrimaryContext(); // 623
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <000FCE53> rendersystem/rendercontextbase.cpp:639
// variables: 2
// function call: 1
void CRenderContextBase::Present(SwapChainHandle_t hSwapChain, int nPresentId)
{
	bool bPreviousPresentCameBack; // 641
	const CSwapChainBase* pSwapChain; // 648
	CRenderDeviceBase::GetSwapChain<CSwapChainBase>(
					SwapChainHandle_t hSwapChain);  // 648
} /* size: 149, variables: 2, inline expansions: 1 (8 bytes) */

// <000FB64F> rendersystem/rendercontextbase.cpp:639
// variable: 1
void CRenderContextBase::Present(SwapChainHandle_t hSwapChain, int nPresentId)
{
	bool bPreviousPresentCameBack; // 641
} /* size: 0, variables: 1 */

// <000FC9AA> rendersystem/rendercontextbase.cpp:664
// variables: 2
// function calls: 18
void CRenderContextBase::QueuePresent(SwapChainHandle_t hSwapChain, int nPresentId)
{
	CommandPresent_t cmd; // 666
	CommandBase_t::CommandBase_t(
			int nOpCode,
			bool bSkipOnLostDevice,
			int nCmdSizeInBytes);  // 117
	CommandHelper_t<CommandPresent_t, 4, false>::CommandHelper_t(); // 132
	CommandPresent_t::CommandPresent_t(); // 666
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 1069
	CRenderDeviceBase::GetContextFrameCount(); // 667
	CCommandStreamBuilder::AvailableCommandBufferSpace(); // 677
	CUtlMemoryPool<CCommandBufferChunk>::Alloc(); // 81
	operator new(size_t size); // 133
	Alloc(void); // 328
	AllocateChunk(void); // 690
	CCommandStreamBuilder::EnsureStream(); // 695
	{
		CommandJump_t cmd; // 705
		CommandBase_t::CommandBase_t(
				int nOpCode,
				bool bSkipOnLostDevice,
				int nCmdSizeInBytes);  // 117
		CommandHelper_t<CommandJump_t, 1, false>::CommandHelper_t(); // 143
		CommandJump_t::CommandJump_t(); // 705
		CCommandStreamBuilder::Store<CommandJump_t>(
					CommandJump_t obj);  // 707
	}
	CCommandStreamBuilder::GrowForCapacity(
			int nNumBytes);  // 681
	CCommandStreamBuilder::EnsureCapacity(
			int nNumBytes);  // 530
	CCommandStreamBuilder::WriteCmd<CommandPresent_t>(
					const CommandPresent_t& obj);  // 670
} /* size: 273, variables: 1, inline expansions: 14 (573 bytes) */

// <000FC4E6> rendersystem/rendercontextbase.cpp:679
// variables: 3
// function calls: 16
void CRenderContextBase::Flush()
{
	CPipelineFence* pFence; // 681
	CommandFence_t cmd; // 683
	CommandBase_t::CommandBase_t(
			int nOpCode,
			bool bSkipOnLostDevice,
			int nCmdSizeInBytes);  // 117
	CommandHelper_t<CommandFence_t, 6, false>::CommandHelper_t(); // 187
	CommandFence_t::CommandFence_t(); // 683
	CCommandStreamBuilder::AvailableCommandBufferSpace(); // 677
	CUtlMemoryPool<CCommandBufferChunk>::Alloc(); // 81
	operator new(size_t size); // 133
	Alloc(void); // 328
	AllocateChunk(void); // 690
	CCommandStreamBuilder::EnsureStream(); // 695
	{
		CommandJump_t cmd; // 705
		CommandBase_t::CommandBase_t(
				int nOpCode,
				bool bSkipOnLostDevice,
				int nCmdSizeInBytes);  // 117
		CommandHelper_t<CommandJump_t, 1, false>::CommandHelper_t(); // 143
		CommandJump_t::CommandJump_t(); // 705
		CCommandStreamBuilder::Store<CommandJump_t>(
					CommandJump_t obj);  // 707
	}
	CCommandStreamBuilder::GrowForCapacity(
			int nNumBytes);  // 681
	CCommandStreamBuilder::EnsureCapacity(
			int nNumBytes);  // 530
	CCommandStreamBuilder::WriteCmd<CommandFence_t>(
				const CommandFence_t& obj);  // 686
} /* size: 269, variables: 2, inline expansions: 12 (495 bytes) */

// <001078B3> rendersystem/rendercontextbase.cpp:698
// variables: 3
void SubrectPixelDifference(int nTargetWidth, int nTargetHeight, int nX, int nY, int nWidth, int nHeight, int nAccumDiff)
{
	int nX2; // 700
	int nY2; // 701
	int nDiff; // 705
	{
	}
} /* size: 0, variables: 3 */

// <000FC41C> rendersystem/rendercontextbase.cpp:698
// variables: 5
void SubrectPixelDifference(int nTargetWidth, int nTargetHeight, int nX, int nY, int nWidth, int nHeight, int nAccumDiff)
{
	int nX2; // 700
	int nY2; // 701
	const char   __FUNCTION__; // 40560
	int nDiff; // 705
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 703
	}
} /* size: 0, variables: 4 */

// <000FAC18> rendersystem/rendercontextbase.cpp:698
// variables: 5
void SubrectPixelDifference(int nTargetWidth, int nTargetHeight, int nX, int nY, int nWidth, int nHeight, int nAccumDiff)
{
	int nX2; // 700
	int nY2; // 701
	const char   __FUNCTION__; // 10604
	int nDiff; // 705
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 703
	}
} /* size: 0, variables: 4 */

// <00107963> rendersystem/rendercontextbase.cpp:739
// variable: 1
// function calls: 3
void SubrectPixelDifference(HRenderTexture hTarget, int nX, int nY, int nWidth, int nHeight, int nAccumDiff)
{
	const CTextureDesc* pDesc; // 741
	{
	}
	SubrectPixelDifference(int nTargetWidth,
				int nTargetHeight,
				int nX,
				int nY,
				int nWidth,
				int nHeight,
				int nAccumDiff);  // 742
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 741
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <000FC3B8> rendersystem/rendercontextbase.cpp:739
// variable: 1
void SubrectPixelDifference(HRenderTexture hTarget, int nX, int nY, int nWidth, int nHeight, int nAccumDiff)
{
	const CTextureDesc* pDesc; // 741
} /* size: 0, variables: 1 */

// <000FBE06> rendersystem/rendercontextbase.cpp:745
// variables: 3
// function calls: 18
void SubrectPixelDifference(const RenderTargetDesc_t& targets, int nMaxTarget, const RenderClearInfo_t& clearInfo, int nX, int nY, int nWidth, int nHeight, int nAccumDiff)
{
	int nDiff; // 753
	{
		int nTestFlag; // 756
		{
			int i; // 757
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 741
			SubrectPixelDifference(HRenderTexture hTarget,
						int nX,
						int nY,
						int nWidth,
						int nHeight,
						int nAccumDiff);  // 762
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 759
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 759
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 762
		}
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 768
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator!=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 768
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 770
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 741
	SubrectPixelDifference(HRenderTexture hTarget,
				int nX,
				int nY,
				int nWidth,
				int nHeight,
				int nAccumDiff);  // 770
} /* size: 0, variables: 1, inline expansions: 9 (0 bytes) */

// <000FBDAA> rendersystem/rendercontextbase.cpp:783
void CRenderContextBase::FindOrCreateRasterizerState(const RsRasterizerStateDesc_t* pRsDesc)
{
} /* size: 23 */

// <00105365> rendersystem/rendercontextbase.cpp:789
// variable: 1
// function call: 1
void CRenderContextBase::SetRasterizerState(RsRasterizerStateHandle_t rasterizerState)
{
	void* pRasterizerState; // 792
	CRenderContextBase::SetRasterizerStateInternal(
					void* pRS);  // 793
} /* size: 46, variables: 1, inline expansions: 1 (23 bytes) */

// <000FBD77> rendersystem/rendercontextbase.cpp:789
// variable: 1
void CRenderContextBase::SetRasterizerState(RsRasterizerStateHandle_t rasterizerState)
{
	void* pRasterizerState; // 792
} /* size: 0, variables: 1 */

// <00105683> rendersystem/rendercontextbase.cpp:799
// variable: 1
// function calls: 3
void CRenderContextBase::SetCullMode(RenderCullMode_t eCullMode)
{
	{
		void* pRasterizerState; // 804
		CRenderContextBase::SetRasterizerStateInternal(
						void* pRS);  // 805
	}
	CRenderContextBase::SetRasterizerStateInternal(
					void* pRS);  // 809
	CRenderContextBase::SetCullMode(
			RenderCullMode_t eCullMode);  // 799
} /* size: 97, inline expansions: 2 (89 bytes) */

// <000FBD42> rendersystem/rendercontextbase.cpp:799
// variable: 1
void CRenderContextBase::SetCullMode(RenderCullMode_t eCullMode)
{
	{
		void* pRasterizerState; // 804
	}
} /* size: 0 */

// <000FBCF0> rendersystem/rendercontextbase.cpp:814
// variable: 1
void CRenderContextBase::FlipHandedness(bool bFlip)
{
	uint8 nNew; // 816
} /* size: 28, variables: 1 */

// <000FBBAC> rendersystem/rendercontextbase.cpp:826
// variable: 1
// function calls: 4
void CRenderContextBase::SetOverrideRasterizerState(RsRasterizerStateHandle_t rasterizerState)
{
	{
		void* pRasterizerState; // 804
		CRenderContextBase::SetRasterizerStateInternal(
						void* pRS);  // 805
	}
	CRenderContextBase::SetRasterizerStateInternal(
					void* pRS);  // 809
	CRenderContextBase::SetCullMode(
			RenderCullMode_t eCullMode);  // 799
	CRenderContextBase::SetCullMode(
			RenderCullMode_t eCullMode);  // 831
} /* size: 116, inline expansions: 3 (129 bytes) */

// <000FBB50> rendersystem/rendercontextbase.cpp:836
void CRenderContextBase::FindOrCreateDepthStencilState(const RsDepthStencilStateDesc_t* pDsDesc)
{
} /* size: 23 */

// <001053E6> rendersystem/rendercontextbase.cpp:843
// variable: 1
// function call: 1
void CRenderContextBase::SetDepthStencilState(RsDepthStencilStateHandle_t depthStencilState, uint32 nStencilRef)
{
	void* pDepthStencilState; // 847
	CRenderContextBase::SetDepthStencilStateInternal(
					void* pDS,
					uint32 nStencilRef);  // 848
} /* size: 89, variables: 1, inline expansions: 1 (46 bytes) */

// <000FBB10> rendersystem/rendercontextbase.cpp:843
// variable: 1
void CRenderContextBase::SetDepthStencilState(RsDepthStencilStateHandle_t depthStencilState, uint32 nStencilRef)
{
	void* pDepthStencilState; // 847
} /* size: 0, variables: 1 */

// <00105475> rendersystem/rendercontextbase.cpp:852
void CRenderContextBase::SetOverrideDepthStencilState(RsDepthStencilStateHandle_t dsState, uint32 nStencilRef)
{
} /* size: 18 */

// <001054AC> rendersystem/rendercontextbase.cpp:859
// function call: 1
void CRenderContextBase::SetZBufferMode(RenderZBufferMode_t eZBufferMode)
{
	CRenderContextBase::SetDepthStencilStateInternal(
					void* pDS,
					uint32 nStencilRef);  // 862
} /* size: 81, inline expansions: 1 (37 bytes) */

// <000FBAB7> rendersystem/rendercontextbase.cpp:859
void CRenderContextBase::SetZBufferMode(RenderZBufferMode_t eZBufferMode)
{
} /* size: 0 */

// <000FBA5B> rendersystem/rendercontextbase.cpp:866
void CRenderContextBase::FindOrCreateBlendState(const RsBlendStateDesc_t* pBlendDesc)
{
} /* size: 23 */

// <00107445> rendersystem/rendercontextbase.cpp:873
// variable: 1
// function calls: 9
void CRenderContextBase::SetBlendState(RsBlendStateHandle_t blendState, const float* pBlendFactor, uint32 nSampleMask)
{
	void* pBlendState; // 875
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 418
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 419
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 420
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 421
	CRenderContextBase::SetBlendStateInternal(
				void* pBS,
				const float* pBlendFactor,
				uint32 nMultisampleMask);  // 876
} /* size: 241, variables: 1, inline expansions: 9 (227 bytes) */

// <000FBA0E> rendersystem/rendercontextbase.cpp:873
// variable: 1
void CRenderContextBase::SetBlendState(RsBlendStateHandle_t blendState, const float* pBlendFactor, uint32 nSampleMask)
{
	void* pBlendState; // 875
} /* size: 0, variables: 1 */

// <00107686> rendersystem/rendercontextbase.cpp:880
// function calls: 9
void CRenderContextBase::SetBlendMode(RenderBlendMode_t eBlendMode, const float* pBlendFactor)
{
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 418
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 419
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 420
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 421
	CRenderContextBase::SetBlendStateInternal(
				void* pBS,
				const float* pBlendFactor,
				uint32 nMultisampleMask);  // 883
} /* size: 266, inline expansions: 9 (233 bytes) */

// <000FB9DB> rendersystem/rendercontextbase.cpp:880
void CRenderContextBase::SetBlendMode(RenderBlendMode_t eBlendMode, const float* pBlendFactor)
{
} /* size: 0 */

// <000FB98F> rendersystem/rendercontextbase.cpp:887
void CRenderContextBase::SetTessellationState(bool bEnableTessellation, uint32 nInputPatchSize)
{
} /* size: 18 */

// <000FB893> rendersystem/rendercontextbase.cpp:894
// variable: 1
// function calls: 2
void CRenderContextBase::MarkTexturesUsedThisFrame(int nTexCount, const texture_use_info_t* pTextureUseRecords)
{
	{
		int i; // 896
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 898
	}
} /* size: 129 */

// <00107B1B> rendersystem/rendercontextbase.cpp:904
// variables: 36
// function calls: 162
void CRenderContextBase::OnReleaseRenderContext()
{
	{
		OverflowChunk_t& p; // 404
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 2734
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 2744
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 2754
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1151
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 404
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 404
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::Clear(); // 406
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 404
	}
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 45
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 46
	SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::Clear(); // 409
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::Clear(
		bool bFreeHashMemory);  // 128
	{
		OverflowChunk_t& p; // 404
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>& __for_range; // 2653
		CUtlIntrusiveListIterator<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t> __for_begin; // 2663
		CUtlIntrusiveListIterator<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t> __for_end; // 2673
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::Head(); // 1151
		CUtlIntrusiveListIterator<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::begin(); // 404
		CUtlIntrusiveListIterator<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::end(); // 404
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
		CUtlAttributeListChunk<VMatrix, 2, VMatrix>::Clear(); // 406
		CUtlIntrusiveListIterator<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::operator++(); // 404
	}
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<VMatrix, 1, VMatrix>::Clear(); // 409
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::Clear(
		bool bFreeHashMemory);  // 129
	{
		OverflowChunk_t& p; // 404
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 2572
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 2582
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 2592
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1151
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 404
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 404
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::Clear(); // 406
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 404
	}
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 45
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 46
	SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::Clear(); // 409
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::Clear(
		bool bFreeHashMemory);  // 130
	{
		OverflowChunk_t& p; // 404
		CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t>& __for_range; // 2491
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 2501
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 2511
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1151
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForS this,
						OverflowChunk_t* pNode);  // 1151
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this); // 404
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForS this,
						OverflowChunk_t* pNode);  // 1156
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this); // 404
		{
			int i; // 77
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 947
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 947
			ReleaseValueFromAttribute<CRenderAttributes::TextureAttrForStorage_t>(TextureAttrForStorage_t* pT); // 81
		}
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::ReleaseValues(); // 88
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 45
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 46
		SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 89
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::Clear(); // 406
		operator++(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForS this); // 404
	}
	{
		int i; // 77
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 947
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 947
		ReleaseValueFromAttribute<CRenderAttributes::TextureAttrForStorage_t>(TextureAttrForStorage_t* pT); // 81
	}
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::ReleaseValues(); // 88
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 45
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 46
	SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::Clear(); // 409
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::Clear(
		bool bFreeHashMemory);  // 131
	{
		OverflowChunk_t& p; // 404
		CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t>& __for_range; // 2410
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_begin; // 2420
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_end; // 2430
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBu this); // 1151
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Constant this,
						OverflowChunk_t* pNode);  // 1151
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAt this); // 404
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Constant this,
						OverflowChunk_t* pNode);  // 1156
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAt this); // 404
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
		CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::Clear(); // 406
		operator++(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Constant this); // 404
	}
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::Clear(); // 409
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::Clear(
		bool bFreeHashMemory);  // 132
	{
		OverflowChunk_t& p; // 404
		CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::OverflowChunk_t>& __for_range; // 2329
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::OverflowChunk_t> __for_begin; // 2339
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::OverflowChunk_t> __for_end; // 2349
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorS this); // 1151
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Descripto this,
						OverflowChunk_t* pNode);  // 1151
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr this); // 404
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Descripto this,
						OverflowChunk_t* pNode);  // 1156
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr this); // 404
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
		CUtlAttributeListChunk<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t>::Clear(); // 406
		operator++(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Descripto this); // 404
	}
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t>::Clear(); // 409
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::Clear(
		bool bFreeHashMemory);  // 133
	{
		OverflowChunk_t& p; // 404
		CUtlIntrusiveList<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t>& __for_range; // 2248
		CUtlIntrusiveListIterator<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_begin; // 2258
		CUtlIntrusiveListIterator<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_end; // 2268
		CUtlIntrusiveList<CUtlAttributeList<void::Head(); // 1151
		CUtlIntrusiveListIterator<CUtlAttributeList<void::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<void::begin(); // 404
		CUtlIntrusiveListIterator<CUtlAttributeList<void::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<void::end(); // 404
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
		CUtlAttributeListChunk<void::Clear(); // 406
		CUtlIntrusiveListIterator<CUtlAttributeList<void::operator++(); // 404
	}
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<void::Clear(); // 409
	CUtlAttributeList<void::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<void::Clear(
		bool bFreeHashMemory);  // 134
	{
		OverflowChunk_t& p; // 404
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>& __for_range; // 2167
		CUtlIntrusiveListIterator<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t> __for_begin; // 2177
		CUtlIntrusiveListIterator<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t> __for_end; // 2187
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::Head(); // 1151
		CUtlIntrusiveListIterator<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::begin(); // 404
		CUtlIntrusiveListIterator<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::end(); // 404
		{
			int i; // 77
			CUtlString::Clear(); // 962
			ReleaseValueFromAttribute<CUtlString>(CUtlString* pS); // 81
		}
		CUtlAttributeListChunk<CUtlString, 2, CUtlString>::ReleaseValues(); // 88
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
		CUtlAttributeListChunk<CUtlString, 2, CUtlString>::Clear(); // 406
		CUtlIntrusiveListIterator<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::operator++(); // 404
	}
	{
		int i; // 77
		CUtlString::Clear(); // 962
		ReleaseValueFromAttribute<CUtlString>(CUtlString* pS); // 81
	}
	CUtlAttributeListChunk<CUtlString, 2, CUtlString>::ReleaseValues(); // 88
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<CUtlString, 2, CUtlString>::Clear(); // 409
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::Clear(
		bool bFreeHashMemory);  // 135
	CRenderAttributes::Clear(
		bool bFreeHashMemory,
		bool bResetParent);  // 909
	CTextureManagerBase::GetTextureManagerRWLock(); // 913
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
	CThreadRWLock_FastRead::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 913
	CRenderContextBase::OnReleaseRenderContext(); // 904
} /* size: 906, inline expansions: 62 (3211 bytes) */

// <000FB87A> rendersystem/rendercontextbase.cpp:904
void CRenderContextBase::OnReleaseRenderContext()
{
} /* size: 0 */

// <001062B2> rendersystem/rendercontextbase.cpp:904
// variables: 36
// function calls: 162
void CRenderContextBase::OnReleaseRenderContext()
{
	{
		OverflowChunk_t& p; // 404
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 32271
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 32281
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 32291
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1151
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 404
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 404
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::Clear(); // 406
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 404
	}
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 45
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 46
	SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::Clear(); // 409
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::Clear(
		bool bFreeHashMemory);  // 128
	{
		OverflowChunk_t& p; // 404
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>& __for_range; // 32190
		CUtlIntrusiveListIterator<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t> __for_begin; // 32200
		CUtlIntrusiveListIterator<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t> __for_end; // 32210
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::Head(); // 1151
		CUtlIntrusiveListIterator<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::begin(); // 404
		CUtlIntrusiveListIterator<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::end(); // 404
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
		CUtlAttributeListChunk<VMatrix, 2, VMatrix>::Clear(); // 406
		CUtlIntrusiveListIterator<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::operator++(); // 404
	}
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<VMatrix, 1, VMatrix>::Clear(); // 409
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::Clear(
		bool bFreeHashMemory);  // 129
	{
		OverflowChunk_t& p; // 404
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 32109
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 32119
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 32129
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1151
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 404
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 404
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::Clear(); // 406
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 404
	}
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 45
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 46
	SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::Clear(); // 409
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::Clear(
		bool bFreeHashMemory);  // 130
	{
		OverflowChunk_t& p; // 404
		CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t>& __for_range; // 32028
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 32038
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 32048
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1151
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForS this,
						OverflowChunk_t* pNode);  // 1151
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this); // 404
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForS this,
						OverflowChunk_t* pNode);  // 1156
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this); // 404
		{
			int i; // 77
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 947
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 947
			ReleaseValueFromAttribute<CRenderAttributes::TextureAttrForStorage_t>(TextureAttrForStorage_t* pT); // 81
		}
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::ReleaseValues(); // 88
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 45
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 46
		SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 89
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::Clear(); // 406
		operator++(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForS this); // 404
	}
	{
		int i; // 77
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 947
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 947
		ReleaseValueFromAttribute<CRenderAttributes::TextureAttrForStorage_t>(TextureAttrForStorage_t* pT); // 81
	}
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::ReleaseValues(); // 88
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 45
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 46
	SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::Clear(); // 409
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::Clear(
		bool bFreeHashMemory);  // 131
	{
		OverflowChunk_t& p; // 404
		CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t>& __for_range; // 31947
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_begin; // 31957
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_end; // 31967
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBu this); // 1151
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Constant this,
						OverflowChunk_t* pNode);  // 1151
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAt this); // 404
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Constant this,
						OverflowChunk_t* pNode);  // 1156
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAt this); // 404
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
		CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::Clear(); // 406
		operator++(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Constant this); // 404
	}
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::Clear(); // 409
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::Clear(
		bool bFreeHashMemory);  // 132
	{
		OverflowChunk_t& p; // 404
		CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::OverflowChunk_t>& __for_range; // 31866
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::OverflowChunk_t> __for_begin; // 31876
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::OverflowChunk_t> __for_end; // 31886
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorS this); // 1151
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Descripto this,
						OverflowChunk_t* pNode);  // 1151
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr this); // 404
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Descripto this,
						OverflowChunk_t* pNode);  // 1156
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr this); // 404
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
		CUtlAttributeListChunk<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t>::Clear(); // 406
		operator++(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Descripto this); // 404
	}
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t>::Clear(); // 409
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::Clear(
		bool bFreeHashMemory);  // 133
	{
		OverflowChunk_t& p; // 404
		CUtlIntrusiveList<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t>& __for_range; // 31785
		CUtlIntrusiveListIterator<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_begin; // 31795
		CUtlIntrusiveListIterator<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_end; // 31805
		CUtlIntrusiveList<CUtlAttributeList<void::Head(); // 1151
		CUtlIntrusiveListIterator<CUtlAttributeList<void::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<void::begin(); // 404
		CUtlIntrusiveListIterator<CUtlAttributeList<void::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<void::end(); // 404
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
		CUtlAttributeListChunk<void::Clear(); // 406
		CUtlIntrusiveListIterator<CUtlAttributeList<void::operator++(); // 404
	}
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<void::Clear(); // 409
	CUtlAttributeList<void::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<void::Clear(
		bool bFreeHashMemory);  // 134
	{
		OverflowChunk_t& p; // 404
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>& __for_range; // 31704
		CUtlIntrusiveListIterator<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t> __for_begin; // 31714
		CUtlIntrusiveListIterator<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t> __for_end; // 31724
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::Head(); // 1151
		CUtlIntrusiveListIterator<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::begin(); // 404
		CUtlIntrusiveListIterator<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::end(); // 404
		{
			int i; // 77
			CUtlString::Clear(); // 962
			ReleaseValueFromAttribute<CUtlString>(CUtlString* pS); // 81
		}
		CUtlAttributeListChunk<CUtlString, 2, CUtlString>::ReleaseValues(); // 88
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
		CUtlAttributeListChunk<CUtlString, 2, CUtlString>::Clear(); // 406
		CUtlIntrusiveListIterator<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::operator++(); // 404
	}
	{
		int i; // 77
		CUtlString::Clear(); // 962
		ReleaseValueFromAttribute<CUtlString>(CUtlString* pS); // 81
	}
	CUtlAttributeListChunk<CUtlString, 2, CUtlString>::ReleaseValues(); // 88
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<CUtlString, 2, CUtlString>::Clear(); // 409
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::Clear(
		bool bFreeHashMemory);  // 135
	CRenderAttributes::Clear(
		bool bFreeHashMemory,
		bool bResetParent);  // 909
	CTextureManagerBase::GetTextureManagerRWLock(); // 913
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
	CThreadRWLock_FastRead::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 913
	CRenderContextBase::OnReleaseRenderContext(); // 904
} /* size: 0, inline expansions: 62 (0 bytes) */

// <000FB7F4> rendersystem/rendercontextbase.cpp:919
// variables: 2
void CRenderContextBase::SemaphoreSignalAtEnd()
{
	const char   __FUNCTION__; // 40506
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 921
	}
} /* size: 38, variables: 1 */

// <000F9FF0> rendersystem/rendercontextbase.cpp:919
// variables: 2
void CRenderContextBase::SemaphoreSignalAtEnd()
{
	const char   __FUNCTION__; // 10550
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 921
	}
} /* size: 0, variables: 1 */

// <000FB398> rendersystem/rendercontextbase.cpp:926
// variables: 2
// function calls: 16
void CRenderContextBase::StartRenderDocCapture(PlatWindow_t hWnd)
{
	CommandStartRenderDocCapture_t cmd; // 928
	CommandBase_t::CommandBase_t(
			int nOpCode,
			bool bSkipOnLostDevice,
			int nCmdSizeInBytes);  // 117
	CommandHelper_t<CommandStartRenderDocCapture_t, 9, false>::CommandHelper_t(); // 204
	CommandStartRenderDocCapture_t::CommandStartRenderDocCapture_t(); // 928
	CCommandStreamBuilder::AvailableCommandBufferSpace(); // 677
	CUtlMemoryPool<CCommandBufferChunk>::Alloc(); // 81
	operator new(size_t size); // 133
	Alloc(void); // 328
	AllocateChunk(void); // 690
	CCommandStreamBuilder::EnsureStream(); // 695
	{
		CommandJump_t cmd; // 705
		CommandBase_t::CommandBase_t(
				int nOpCode,
				bool bSkipOnLostDevice,
				int nCmdSizeInBytes);  // 117
		CommandHelper_t<CommandJump_t, 1, false>::CommandHelper_t(); // 143
		CommandJump_t::CommandJump_t(); // 705
		CCommandStreamBuilder::Store<CommandJump_t>(
					CommandJump_t obj);  // 707
	}
	CCommandStreamBuilder::GrowForCapacity(
			int nNumBytes);  // 681
	CCommandStreamBuilder::EnsureCapacity(
			int nNumBytes);  // 530
	CCommandStreamBuilder::WriteCmd<CommandStartRenderDocCapture_t>(
						const CommandStartRenderDocCapture_t& obj);  // 930
} /* size: 213, variables: 1, inline expansions: 12 (579 bytes) */

// <000FAF3C> rendersystem/rendercontextbase.cpp:934
// variables: 2
// function calls: 16
void CRenderContextBase::EndRenderDocCapture(PlatWindow_t hWnd)
{
	CommandEndRenderDocCapture_t cmd; // 936
	CommandBase_t::CommandBase_t(
			int nOpCode,
			bool bSkipOnLostDevice,
			int nCmdSizeInBytes);  // 117
	CommandHelper_t<CommandEndRenderDocCapture_t, 10, false>::CommandHelper_t(); // 209
	CommandEndRenderDocCapture_t::CommandEndRenderDocCapture_t(); // 936
	CCommandStreamBuilder::AvailableCommandBufferSpace(); // 677
	CUtlMemoryPool<CCommandBufferChunk>::Alloc(); // 81
	operator new(size_t size); // 133
	Alloc(void); // 328
	AllocateChunk(void); // 690
	CCommandStreamBuilder::EnsureStream(); // 695
	{
		CommandJump_t cmd; // 705
		CommandBase_t::CommandBase_t(
				int nOpCode,
				bool bSkipOnLostDevice,
				int nCmdSizeInBytes);  // 117
		CommandHelper_t<CommandJump_t, 1, false>::CommandHelper_t(); // 143
		CommandJump_t::CommandJump_t(); // 705
		CCommandStreamBuilder::Store<CommandJump_t>(
					CommandJump_t obj);  // 707
	}
	CCommandStreamBuilder::GrowForCapacity(
			int nNumBytes);  // 681
	CCommandStreamBuilder::EnsureCapacity(
			int nNumBytes);  // 530
	CCommandStreamBuilder::WriteCmd<CommandEndRenderDocCapture_t>(
						const CommandEndRenderDocCapture_t& obj);  // 938
} /* size: 213, variables: 1, inline expansions: 12 (579 bytes) */

// <000FAEA1> rendersystem/rendercontextbase.cpp:942
// variables: 2
void CRenderContextBase::SemaphoreWaitAtBegin(RenderSemaphoreHandle_t hSemaphoreObject)
{
	const char   __FUNCTION__; // 40506
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 944
	}
} /* size: 36, variables: 1 */

// <000F969D> rendersystem/rendercontextbase.cpp:942
// variables: 2
void CRenderContextBase::SemaphoreWaitAtBegin(RenderSemaphoreHandle_t hSemaphoreObject)
{
	const char   __FUNCTION__; // 10550
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 944
	}
} /* size: 0, variables: 1 */

// <000F9065> rendersystem/rendercontextbase.cpp:948
// variables: 4
// function calls: 25
void CRenderContextBase::GetBarrierHelper()
{
	IBarrierHelper::IBarrierHelper(); // 950
	CBarrierHelperEmpty::CBarrierHelperEmpty(); // 1084
	_Head_base<1, std::default_delete<CRenderContextBase::GetBarrierHelper()::CBarrierHelperEmpty>, true>::_Head_base()::CBarrierHelperEmpty>, true>* this); // 561
	_Tuple_impl<1, std::default_delete<CRenderContextBase::GetBarrierHelper()::CBarrierHelperEmpty> >::_Tuple_impl()::CBarrierHelperEmpty> >* this); // 303
	_Head_base<0, CRenderContextBase::GetBarrierHelper()::CBarrierHelperEmpty::_Head_base()::CBarrierHelperEmpty*, false>* this); // 303
	_Tuple_impl<0, CRenderContextBase::GetBarrierHelper()::CBarrierHelperEmpty::_Tuple_impl()::CBarrierHelperEmpty*, std::default_delete<CRenderContextBase this); // 966
	tuple<CRenderContextBase::GetBarrierHelper()::CBarrierHelperEmpty::tuple()::CBarrierHelperEmpty*, std::default_delete<CRenderContextBase::GetBarr this); // 169
	_M_ptr(const __uniq_ptr_impl<CRenderContextBase::GetBarrierHelper()::CBarrierHelperEmpty, std::default_delete<CRenderContextBase this); // 169
	__uniq_ptr_impl(const __uniq_ptr_impl<CRenderContextBase::GetBarrierHelper()::CBarrierHelperEmpty, std::default_delete<CRenderContextBase this,
			pointer __p); // 234
	__uniq_ptr_data(const __uniq_ptr_data<CRenderContextBase::GetBarrierHelper()::CBarrierHelperEmpty, std::default_delete<CRenderContextBase this,
			pointer); // 311
	unique_ptr<>(const unique_ptr<CRenderContextBase::GetBarrierHelper()::CBarrierHelperEmpty, std::default_delete<CRenderContextBase::Get this,
			pointer __p); // 1084
	make_unique<CRenderContextBase::GetBarrierHelper()::CBarrierHelperEmpty>(void); // 962
	get_deleter(const unique_ptr<CRenderContextBase::GetBarrierHelper()::CBarrierHelperEmpty, std::default_delete<CRenderContextBase::Get this); // 374
	release(const unique_ptr<CRenderContextBase::GetBarrierHelper()::CBarrierHelperEmpty, std::default_delete<CRenderContextBase::Get this); // 374
	default_delete<IBarrierHelper>::default_delete<CRenderContextBase::GetBarrierHelper(
											const default_delete<CRenderContextBase::GetBarrierHelper()::CBarrierHelperEmpty> &);  // 104
	_Head_base<1, std::default_delete<IBarrierHelper>, true>::_Head_base<std::default_delete<CRenderContextBase::GetBarrierHelper(
													default_delete<CRenderContextBase::GetBarrierHelper()::CBarrierHelperEmpty>& __h);  // 571
	_Tuple_impl<1, std::default_delete<IBarrierHelper> >::_Tuple_impl<std::default_delete<CRenderContextBase::GetBarrierHelper(
													default_delete<CRenderContextBase::GetBarrierHelper()::CBarrierHelperEmpty>& __head);  // 315
	_Head_base<0, IBarrierHelper::_Head_base<IBarrierHelper*&>(
					IBarrierHelper *& __h);  // 315
	_Tuple_impl<0, IBarrierHelper::_Tuple_impl<IBarrierHelper*&, std::default_delete<CRenderContextBase::GetBarrierHelper(
															IBarrierHelper *& __head);  // 985
	tuple<IBarrierHelper::tuple<IBarrierHelper*&, std::default_delete<CRenderContextBase::GetBarrierHelper()::CBarrierHelperEmpty> >(const tuple<IBarrierHelper*, std::default_delete<IBarrierHelper> >* this); // 174
	__uniq_ptr_impl<IBarrierHelper, std::default_delete<IBarrierHelper> >::__uniq_ptr_impl<std::default_delete<CRenderContextBase::GetBarrierHelper(
														pointer __p,
														default_delete<CRenderContextBase::GetBarrierHelper()::CBarrierHelperEmpty>& __d);  // 234
	__uniq_ptr_data<IBarrierHelper, std::default_delete<IBarrierHelper>, true, true>::__uniq_ptr_data<std::default_delete<CRenderContextBase::GetBarrierHelper(
														pointer,
														default_delete<CRenderContextBase::GetBarrierHelper()::CBarrierHelperEmpty> &);  // 374
	unique_ptr<IBarrierHelper, std::default_delete<IBarrierHelper> >::unique_ptr<CRenderContextBase::GetBarrierHelper(
																unique_ptr<CRenderContextBase::GetBarrierHelper()::CBarrierHelperEmpty, std::default_delete<CRenderContextBase::GetBarrie __u);  // 962
	{
		CBarrierHelperEmpty *& __ptr; // 396
		_M_ptr(const __uniq_ptr_impl<CRenderContextBase::GetBarrierHelper()::CBarrierHelperEmpty, std::default_delete<CRenderContextBase this); // 396
	}
	~unique_ptr(const unique_ptr<CRenderContextBase::GetBarrierHelper()::CBarrierHelperEmpty, std::default_delete<CRenderContextBase::Get this); // 962
} /* size: 48, inline expansions: 24 (48 bytes) */

// <0010ABD9> rendersystem/rendercontextbase.cpp:967
// variables: 4
void CRenderContextBase::GetSubContext(const ISceneLayer* layer)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_977; // 977
	CFmtStr debugName; // 988
	IRenderContext* subContext; // 989
	CRenderAttributes& attributes; // 1008
} /* size: 77, variables: 4 */

// <00109C98> rendersystem/rendercontextbase.cpp:967
// variables: 8
// function calls: 57
void CRenderContextBase::GetSubContext(const ISceneLayer* layer)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_977; // 977
	CFmtStr debugName; // 988
	IRenderContext* subContext; // 989
	CRenderAttributes& attributes; // 1008
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
			int nLineNumber);  // 977
	{
		IRenderContext *& subContext; // 980
		CUtlVector<IRenderContext*, CUtlMemory<IRenderContext*, int> >& __for_range; // 11600
		iterator __for_begin; // 11610
		iterator __for_end; // 11620
		CUtlMemory<IRenderContext::Base(); // 112
		CUtlVectorBase<IRenderContext::Base(); // 102
		CUtlVectorBase<IRenderContext::begin(); // 980
		CUtlVectorBase<IRenderContext::Count(); // 104
		CUtlVectorBase<IRenderContext::end(); // 980
	}
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 1014
	CRenderContextBase::GetDebugString(); // 988
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 81
	CFmtStrN<256>::String(); // 989
	IRenderContext::IsSecondaryContext(); // 601
	CRenderContextBase::BindRenderTargets(
				const RenderTargetDesc_t& renderTargetDesc);  // 994
	ISceneLayer::GetScissorRect(); // 997
	IRenderContext::SetScissorRect(
			const Rect_t& rect);  // 997
	ISceneLayer::GetOverrideRasterizerState(); // 1000
	ISceneLayer::GetOverrideDepthStencilState(); // 1004
	ISceneLayer::GetOverrideStencilRef(); // 1005
	CRenderContextBase::SetOverrideDepthStencilState(
					RsDepthStencilStateHandle_t dsState,
					uint32 nStencilRef);  // 1005
	{
	}
	CRenderContextBase::GetAttributesForModify(); // 1008
	{
	}
	CRenderContextBase::GetAttributesForModify(); // 1009
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
			const CRenderAttributes* pParent);  // 1009
	CUtlMemory<IRenderContext::NumAllocated(); // 1196
	CUtlMemory<IRenderContext::Base(); // 112
	CUtlVectorBase<IRenderContext::Base(); // 368
	CUtlVectorBase<IRenderContext::ResetDbgInfo(); // 824
	CUtlMemory<IRenderContext::IsGrowable(); // 823
	CUtlMemory<IRenderContext::IsExternallyAllocated(); // 859
	CUtlMemory<IRenderContext::IsExternallyAllocated(); // 861
	CUtlMemory<IRenderContext::Grow(
		int num);  // 806
	CUtlVectorBase<IRenderContext::GrowMemory(
			int num);  // 1198
	CUtlMemory<IRenderContext::operator[](
			int i);  // 602
	CUtlVectorBase<IRenderContext::Element(
		int i);  // 1201
	CopyConstruct<IRenderContext*>(IRenderContext** pMemory,
					IRenderContext* const& src);  // 1201
	CUtlVectorBase<IRenderContext::AddToTail(
			IRenderContext* const& src);  // 1011
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 1014
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 976
} /* size: 0, variables: 4, inline expansions: 52 (2139 bytes) */

// <000FAE02> rendersystem/rendercontextbase.cpp:967
// variables: 9
void CRenderContextBase::GetSubContext(const ISceneLayer* layer)
{
	CThreadFastMutex mtx; // 976
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_977; // 977
	CFmtStr debugName; // 988
	IRenderContext* subContext; // 989
	CRenderAttributes& attributes; // 1008
	{
		IRenderContext *& subContext; // 980
		CUtlVector<IRenderContext*, CUtlMemory<IRenderContext*, int> >& __for_range; // 11467
		iterator __for_begin; // 46263
		iterator __for_end; // 46263
	}
} /* size: 0, variables: 5 */

// <0010842F> rendersystem/rendercontextbase.cpp:967
// variables: 8
// function calls: 57
void CRenderContextBase::GetSubContext(const ISceneLayer* layer)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_977; // 977
	CFmtStr debugName; // 988
	IRenderContext* subContext; // 989
	CRenderAttributes& attributes; // 1008
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
			int nLineNumber);  // 977
	{
		IRenderContext *& subContext; // 980
		CUtlVector<IRenderContext*, CUtlMemory<IRenderContext*, int> >& __for_range; // 41081
		iterator __for_begin; // 41091
		iterator __for_end; // 41101
		CUtlMemory<IRenderContext::Base(); // 112
		CUtlVectorBase<IRenderContext::Base(); // 102
		CUtlVectorBase<IRenderContext::begin(); // 980
		CUtlVectorBase<IRenderContext::Count(); // 104
		CUtlVectorBase<IRenderContext::end(); // 980
	}
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 1014
	CRenderContextBase::GetDebugString(); // 988
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 81
	CFmtStrN<256>::String(); // 989
	IRenderContext::IsSecondaryContext(); // 601
	CRenderContextBase::BindRenderTargets(
				const RenderTargetDesc_t& renderTargetDesc);  // 994
	ISceneLayer::GetScissorRect(); // 997
	IRenderContext::SetScissorRect(
			const Rect_t& rect);  // 997
	ISceneLayer::GetOverrideRasterizerState(); // 1000
	ISceneLayer::GetOverrideDepthStencilState(); // 1004
	ISceneLayer::GetOverrideStencilRef(); // 1005
	CRenderContextBase::SetOverrideDepthStencilState(
					RsDepthStencilStateHandle_t dsState,
					uint32 nStencilRef);  // 1005
	{
	}
	CRenderContextBase::GetAttributesForModify(); // 1008
	{
	}
	CRenderContextBase::GetAttributesForModify(); // 1009
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
			const CRenderAttributes* pParent);  // 1009
	CUtlMemory<IRenderContext::NumAllocated(); // 1196
	CUtlMemory<IRenderContext::Base(); // 112
	CUtlVectorBase<IRenderContext::Base(); // 368
	CUtlVectorBase<IRenderContext::ResetDbgInfo(); // 824
	CUtlMemory<IRenderContext::IsGrowable(); // 823
	CUtlMemory<IRenderContext::IsExternallyAllocated(); // 859
	CUtlMemory<IRenderContext::IsExternallyAllocated(); // 861
	CUtlMemory<IRenderContext::Grow(
		int num);  // 806
	CUtlVectorBase<IRenderContext::GrowMemory(
			int num);  // 1198
	CUtlMemory<IRenderContext::operator[](
			int i);  // 602
	CUtlVectorBase<IRenderContext::Element(
		int i);  // 1201
	CopyConstruct<IRenderContext*>(IRenderContext** pMemory,
					IRenderContext* const& src);  // 1201
	CUtlVectorBase<IRenderContext::AddToTail(
			IRenderContext* const& src);  // 1011
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 1014
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 976
} /* size: 0, variables: 4, inline expansions: 52 (0 bytes) */

// <000F95FE> rendersystem/rendercontextbase.cpp:967
// variables: 9
void CRenderContextBase::GetSubContext(const ISceneLayer* layer)
{
	CThreadFastMutex mtx; // 976
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_977; // 977
	CFmtStr debugName; // 988
	IRenderContext* subContext; // 989
	CRenderAttributes& attributes; // 1008
	{
		IRenderContext *& subContext; // 980
		CUtlVector<IRenderContext*, CUtlMemory<IRenderContext*, int> >& __for_range; // 40948
		iterator __for_begin; // 10426
		iterator __for_end; // 10426
	}
} /* size: 0, variables: 5 */

// <000FAB8B> rendersystem/rendercontextbase.cpp:1016
// variables: 5
// function calls: 8
void CRenderContextBase::SubmitSubContexts()
{
	{
		IRenderContext *& pSubContext; // 1019
		CUtlVector<IRenderContext*, CUtlMemory<IRenderContext*, int> >& __for_range; // 11467
		iterator __for_begin; // 46263
		iterator __for_end; // 46263
		{
			CDisplayList* pDisplayList; // 1021
			DisplayListToSubmit_t::DisplayListToSubmit_t(
						CDisplayList* pList,
						bool bPersist);  // 533
			IRenderDevice::SubmitDisplayList(
						CDisplayList* pCommandList);  // 1024
		}
		CUtlMemory<IRenderContext::Base(); // 112
		CUtlVectorBase<IRenderContext::Base(); // 102
		CUtlVectorBase<IRenderContext::begin(); // 1019
		CUtlVectorBase<IRenderContext::Count(); // 104
		CUtlVectorBase<IRenderContext::end(); // 1019
	}
	CUtlVectorBase<IRenderContext::RemoveAll(); // 1028
} /* size: 184, inline expansions: 1 (11 bytes) */

// <000F9387> rendersystem/rendercontextbase.cpp:1016
// variables: 5
// function calls: 8
void CRenderContextBase::SubmitSubContexts()
{
	{
		IRenderContext *& pSubContext; // 1019
		CUtlVector<IRenderContext*, CUtlMemory<IRenderContext*, int> >& __for_range; // 40948
		iterator __for_begin; // 10426
		iterator __for_end; // 10426
		{
			CDisplayList* pDisplayList; // 1021
			DisplayListToSubmit_t::DisplayListToSubmit_t(
						CDisplayList* pList,
						bool bPersist);  // 533
			IRenderDevice::SubmitDisplayList(
						CDisplayList* pCommandList);  // 1024
		}
		CUtlMemory<IRenderContext::Base(); // 112
		CUtlVectorBase<IRenderContext::Base(); // 102
		CUtlVectorBase<IRenderContext::begin(); // 1019
		CUtlVectorBase<IRenderContext::Count(); // 104
		CUtlVectorBase<IRenderContext::end(); // 1019
	}
	CUtlVectorBase<IRenderContext::RemoveAll(); // 1028
} /* size: 0, inline expansions: 1 (0 bytes) */

