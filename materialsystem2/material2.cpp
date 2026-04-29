
//
// materialsystem2/material2.cpp
//
//	referenced by: libmaterialsystem2.so
//
//	functions: 125
//	struct: 1
//

// <001A4736> materialsystem2/material2.cpp:37
// function calls: 6
void mat_assert_on_shader_use(const CCommandContext& ctx, const CCommand& args)
{
	CCommand::ArgC(); // 54
	CCommand::Arg(
		int nIndex);  // 64
	CUtlString::operator=(
			const char* src);  // 64
	CUtlString::operator=(
			const char* src);  // 43
	CCommand::ArgC(); // 46
	mat_assert_on_shader_use(const CCommandContext& ctx,
				const CCommand& args);  // 37
} /* size: 136, inline expansions: 6 (60 bytes) */

// <00199D3E> materialsystem2/material2.cpp:37
void mat_assert_on_shader_use(const CCommandContext& ctx, const CCommand& args)
{
} /* size: 0 */

// <00199D1F> materialsystem2/material2.cpp:68
inline MaterialShaderProgram_t ProgramTypeToMaterialShaderProgramType(VfxProgram_t programType)
{
} /* size: 0 */

// <00199BF4> materialsystem2/material2.cpp:96
// variables: 15
bool IsConstantBufferForStaticComboStatic(const CVfxProgramData* pProgramData, const CVfxStaticComboData* pStaticComboData, const CVfxPerLayerProgramData* pPerLayerProgramData, const CMaterialLayer* pLayer, EBatchableModes_t nMode, bool bSpewWarnings)
{
	bool bCanBeStatic; // 99
	const char   __FUNCTION__; // 63488
	{
		CVfxExpressionEvalContext ctx; // 126
		{
			int i; // 113
			{
				int nVarIdx; // 116
				const CVfxVariableDescription& var; // 117
			}
		}
		{
			int i; // 131
			{
				int nVarIdx; // 134
				const CVfxVariableDescription& var; // 135
				{
					Vector4D dummyResult; // 139
				}
			}
		}
	}
	{
		int i; // 158
		{
			int nVarIdx; // 161
			const CVfxVariableDescription& var; // 162
			{
				int nParamIdx; // 165
			}
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 183
	}
} /* size: 0, variables: 2 */

// <00179EEF> materialsystem2/material2.cpp:194
void MaterialStaticComboLoadRequest_t::~MaterialStaticComboLoadRequest_t()
{
} /* size: 0 */

// <00179ED3> materialsystem2/material2.cpp:194
inline void MaterialStaticComboLoadRequest_t::~MaterialStaticComboLoadRequest_t()
{
} /* size: 0 */

// <0016927E> materialsystem2/material2.cpp:194
inline void MaterialStaticComboLoadRequest_t::operator=(const MaterialStaticComboLoadRequest_t &)
{
} /* size: 0 */

// <00154610> materialsystem2/material2.cpp:194
void MaterialStaticComboLoadRequest_t::MaterialStaticComboLoadRequest_t(MaterialStaticComboLoadRequest_t &)
{
} /* size: 0 */

// <001545EF> materialsystem2/material2.cpp:194
inline void MaterialStaticComboLoadRequest_t::MaterialStaticComboLoadRequest_t(MaterialStaticComboLoadRequest_t &)
{
} /* size: 0 */

// <001545A0> materialsystem2/material2.cpp:194
inline void MaterialStaticComboLoadRequest_t::operator=(MaterialStaticComboLoadRequest_t &)
{
} /* size: 0 */

// <00135CE8> materialsystem2/material2.cpp:194
// member functions: 8
// member variables: 4
// struct size: 72
struct MaterialStaticComboLoadRequest_t : public VfxStaticComboLoadRequest_t {
public:
	/* struct VfxStaticComboLoadRequest_t <ancestor>; */ /* 0 48 */
	/* materialsystem2/material2.cpp:198 */
	void MaterialStaticComboLoadRequest_t(MaterialStaticComboLoadRequest_t* );
	CMaterialLayer * pLayer; /* 48 8 */
	CVfxPerLayerProgramData * pPerLayerProgramData; /* 56 8 */
	/* materialsystem2/material2.cpp:196 */
	typedef void (*CallbackFunc_t)(const MaterialStaticComboLoadRequest_t& );
	CallbackFunc_t callbackFunc; /* 64 8 */
	/* materialsystem2/material2.cpp:204 */
	bool HasSameCombo(const MaterialStaticComboLoadRequest_t* , const MaterialStaticComboLoadRequest_t& );
	/* materialsystem2/material2.cpp:211 */
	bool operator<(const MaterialStaticComboLoadRequest_t* , const MaterialStaticComboLoadRequest_t& );
	MaterialStaticComboLoadRequest_t& operator=(MaterialStaticComboLoadRequest_t* , MaterialStaticComboLoadRequest_t& );
	void MaterialStaticComboLoadRequest_t(MaterialStaticComboLoadRequest_t* , MaterialStaticComboLoadRequest_t& );
	MaterialStaticComboLoadRequest_t& operator=(MaterialStaticComboLoadRequest_t* , const MaterialStaticComboLoadRequest_t& );
	void ~MaterialStaticComboLoadRequest_t(MaterialStaticComboLoadRequest_t* );
};

// <00199B75> materialsystem2/material2.cpp:198
void MaterialStaticComboLoadRequest_t::MaterialStaticComboLoadRequest_t()
{
} /* size: 0 */

// <00199B5C> materialsystem2/material2.cpp:198
inline void MaterialStaticComboLoadRequest_t::MaterialStaticComboLoadRequest_t()
{
} /* size: 0 */

// <00199B37> materialsystem2/material2.cpp:204
inline void MaterialStaticComboLoadRequest_t::HasSameCombo(const MaterialStaticComboLoadRequest_t& rhs)
{
} /* size: 0 */

// <00199B12> materialsystem2/material2.cpp:211
inline void MaterialStaticComboLoadRequest_t::operator<(const MaterialStaticComboLoadRequest_t& rhs)
{
} /* size: 0 */

// <00184568> materialsystem2/material2.cpp:237
void StaticComboVcsLoad_t::StaticComboVcsLoad_t()
{
} /* size: 0 */

// <0018454C> materialsystem2/material2.cpp:237
inline void StaticComboVcsLoad_t::StaticComboVcsLoad_t()
{
} /* size: 0 */

// <00184501> materialsystem2/material2.cpp:237
void StaticComboVcsLoad_t::~StaticComboVcsLoad_t()
{
} /* size: 0 */

// <001844E5> materialsystem2/material2.cpp:237
inline void StaticComboVcsLoad_t::~StaticComboVcsLoad_t()
{
} /* size: 0 */

// <00198236> materialsystem2/material2.cpp:257
// variables: 4
// function calls: 115
void CMaterial2::CMaterial2()
{
	IMaterial2::IMaterial2(); // 269
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
	CRenderAttributes::CRenderAttributes(); // 269
	CUtlSymbol::CUtlSymbol(); // 269
	CUtlSymbol::CUtlSymbol(); // 269
	CUtlMemory<CMaterialParam, int>::ValidateGrowSize(); // 475
	CUtlMemory<CMaterialParam, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CMaterialParam, CUtlMemory<CMaterialParam, int> >::CUtlVector(); // 269
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeIMaterial2>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 266
	CUtlLeanVectorBase<CMaterial2::StaticComboVcsLoad_t::CUtlLeanVectorBase(); // 411
	CUtlLeanVectorImpl<CUtlLeanVectorBase<CMaterial2::StaticComboVcsLoad_t::CUtlLeanVectorImpl(); // 832
	CUtlLeanVector<CMaterial2::StaticComboVcsLoad_t::CUtlLeanVector(); // 269
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 269
	CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::CUtlLeanVectorFixedGrowableBase(); // 411
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::CUtlLeanVectorImpl(); // 799
	CUtlLeanVectorFixedGrowable<CMaterialMode, 6, short int>::CUtlLeanVectorFixedGrowable(); // 269
	CInterlockedIntT<long long unsigned int, 8>::CInterlockedIntT(); // 269
	CInterlockedIntT<unsigned int, 4>::CInterlockedIntT(); // 269
	CInterlockedIntT<unsigned int, 4>::CInterlockedIntT(); // 269
	CStrongHandle<ResourceBindingVoid_t>::CStrongHandle(); // 266
	CStrongHandleVoid::CStrongHandleVoid(); // 269
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 269
} /* size: 850, inline expansions: 100 (2924 bytes) */

// <0019821D> materialsystem2/material2.cpp:257
void CMaterial2::CMaterial2()
{
} /* size: 0 */

// <00197B00> materialsystem2/material2.cpp:274
// variable: 1
// function calls: 36
void CMaterial2::~CMaterial2()
{
	CStrongHandle<ResourceBindingVoid_t>::~CStrongHandle(); // 262
	CStrongHandleVoid::~CStrongHandleVoid(); // 280
	AlignedByteArrayExplicit_t<6, CMaterialMode, 8>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 183
	CMaterialMode::~CMaterialMode(); // 1526
	Destruct<CMaterialMode>(CMaterialMode* pMemory); // 76
	UtlTraitsDestructRange<CMaterialMode>(CMaterialMode* pStart,
						CMaterialMode* pEnd);  // 184
	CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::RemoveAll(); // 191
	CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 194
	CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Purge(); // 55
	CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::~CUtlLeanVectorFixedGrowableBase(); // 399
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::~CUtlLeanVectorImpl(); // 796
	CUtlLeanVectorFixedGrowable<CMaterialMode, 6, short int>::~CUtlLeanVectorFixedGrowable(); // 280
	CUtlLeanVectorBase<CMaterial2::StaticComboVcsLoad_t::RemoveAll(); // 371
	CUtlLeanVectorBase<CMaterial2::StaticComboVcsLoad_t::Base(); // 279
	CUtlLeanVectorBase<CMaterial2::StaticComboVcsLoad_t::Base(); // 374
	CUtlLeanVectorBase<CMaterial2::StaticComboVcsLoad_t::Purge(); // 270
	CUtlLeanVectorBase<CMaterial2::StaticComboVcsLoad_t::~CUtlLeanVectorBase(); // 399
	CUtlLeanVectorImpl<CUtlLeanVectorBase<CMaterial2::StaticComboVcsLoad_t::~CUtlLeanVectorImpl(); // 829
	CUtlLeanVector<CMaterial2::StaticComboVcsLoad_t::~CUtlLeanVector(); // 280
	{
		int i; // 1721
		CUtlMemory<CMaterialParam, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Element(
			int i);  // 1723
		CVfxParam::FreeBufferData(); // 33
		CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 34
		CVfxParam::~CVfxParam(); // 16
		CMaterialParam::~CMaterialParam(); // 1526
		Destruct<CMaterialParam>(CMaterialParam* pMemory); // 1723
	}
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::RemoveAll(); // 1798
	CUtlMemory<CMaterialParam, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CMaterialParam, int>::Purge(); // 903
	CUtlMemory<CMaterialParam, int>::Purge(); // 1799
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Purge(); // 560
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CMaterialParam, CUtlMemory<CMaterialParam, int> >::~CUtlVector(); // 280
} /* size: 544, inline expansions: 29 (2219 bytes) */

// <00197A39> materialsystem2/material2.cpp:274
// function calls: 2
void CMaterial2::~CMaterial2()
{
	CUtlMemoryPool<CMaterial2>::Free(
		CMaterial2* pMem);  // 276
	operator delete(void* p); // 280
} /* size: 41, inline expansions: 2 (30 bytes) */

// <00197A20> materialsystem2/material2.cpp:274
void CMaterial2::~CMaterial2()
{
} /* size: 0 */

// <001A46B9> materialsystem2/material2.cpp:283
// function call: 1
void CMaterial2::GetName()
{
	CUtlSymbol::IsValid(); // 285
} /* size: 32, inline expansions: 1 (0 bytes) */

// <00197A07> materialsystem2/material2.cpp:283
void CMaterial2::GetName()
{
} /* size: 0 */

// <00196FD6> materialsystem2/material2.cpp:291
// variables: 3
// function calls: 40
void CMaterial2::GetNameWithMod()
{
	{
		CPathBufferString materialNameGame; // 300
		CPathBufferString fullPath; // 304
		{
			CPathBufferString relativePath; // 307
			CBufferString::InitMinConstruct(
					bool bGrowable);  // 712
			CBufferString::CBufferString(); // 591
			CBufferStringN<200>::CBufferStringN(); // 307
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 308
			CBufferString::Length(); // 310
			CBufferString::Length(); // 983
			CBufferString::RemoveTail(
					int nChars);  // 313
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 316
			CUtlSymbol::operator=(
					const CUtlSymbol& src);  // 316
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 319
		}
		CUtlSymbol::operator=(
				const CUtlSymbol& src);  // 298
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 300
		CMaterial2::GetName(); // 301
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 901
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 301
		CBufferString::Append(
			const char* pString,
			int nChars,
			bool bExact);  // 302
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 304
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 305
		CFileSystemPassThru::RelativePathToFullPath(
					const char* pFileName,
					const char* pPathID,
					CBufferString* pLocalPath,
					PathTypeFilter_t pathFilter);  // 163
		CFileSystemPassThru::RelativePathToFullPath(
					const char* pFileName,
					const char* pPathID,
					CBufferString* pLocalPath,
					PathTypeFilter_t pathFilter);  // 305
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 322
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 322
	}
	CUtlSymbol::IsValid(); // 324
	CUtlSymbol::IsValid(); // 285
	CMaterial2::GetName(); // 327
} /* size: 1037, inline expansions: 3 (40 bytes) */

// <00196F75> materialsystem2/material2.cpp:330
// function call: 1
void CMaterial2::GetCopySource()
{
	CWeakHandle<InfoForResourceTypeIMaterial2>::GetData(); // 332
} /* size: 17, inline expansions: 1 (12 bytes) */

// <001A4985> materialsystem2/material2.cpp:335
// variables: 2
// function calls: 8
void CMaterial2::GetSimilarityKey()
{
	CWeakHandle<InfoForResourceTypeIMaterial2>::HasHandle(); // 344
	CWeakHandle<InfoForResourceTypeIMaterial2>::GetData(); // 346
	{
		int i; // 355
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::Count(); // 355
		{
			const CMaterialLayer& layer; // 357
			AlignedByteArrayExplicit_t<6, CMaterialMode, 8>::Base(); // 74
			CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 452
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::Element(
				int i);  // 442
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::operator[](
					int i);  // 357
		}
	}
	CMaterial2::GetSimilarityKey(); // 335
} /* size: 261, inline expansions: 3 (223 bytes) */

// <00196F40> materialsystem2/material2.cpp:335
// variables: 2
void CMaterial2::GetSimilarityKey()
{
	{
		int i; // 355
		{
			const CMaterialLayer& layer; // 357
		}
	}
} /* size: 0 */

// <00196243> materialsystem2/material2.cpp:368
// variables: 16
// function calls: 50
void CMaterial2::GetRepresentativeTextureSize(int* pWidth, int* pHeight, int nDefWidth, int nDefHeight, bool bClamp)
{
	HRenderTexture hTxtr; // 371
	{
		const CTextureDesc* pDesc; // 374
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 374
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 371
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 199
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 648
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 93
	TextureAttr_t::TextureAttr_t(
			HRenderTexture hT,
			int32 nMip);  // 648
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 461
	{
		int nIndex; // 465
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
			const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 22460
			CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 22470
			CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 22480
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
				const TextureAttrForStorage_t ** pValueOut);  // 465
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1008
		TextureAttr_t::operator=(
				const TextureAttrForStorage_t& other);  // 470
	}
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::GetValue(
		TextureAttr_t* pOutputValue,
		const CUtlStringToken& attrName);  // 649
	CRenderAttributes::GetTextureValue(
			HRenderTexture* pOutputValue,
			CUtlStringToken nTokenID);  // 495
	CMaterial2::GetTextureAttribute(
				HRenderTexture* pVal,
				CUtlStringToken name);  // 200
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 200
	IMaterial2::GetTextureAttributeOrDefault(
					CUtlStringToken name,
					HRenderTexture hDefault);  // 371
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 372
	Max<int>(const int& val1,
		const int& val2);  // 385
} /* size: 515, variables: 1, inline expansions: 21 (1097 bytes) */

// <001AAA6C> materialsystem2/material2.cpp:394
// variables: 28
// function calls: 59
void CMaterial2::GetWorldMappingSize(int* pWidth, int* pHeight, int nDefWidth, int nDefHeight, bool bClamp)
{
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
			const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 27183
			CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 27193
			CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 27203
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
			int nDefaultValue);  // 396
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
			const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 27183
			CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 27193
			CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 27203
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
			int nDefaultValue);  // 397
	Max<int>(const int& val1,
		const int& val2);  // 401
	Max<int>(const int& val1,
		const int& val2);  // 402
	CMaterial2::GetWorldMappingSize(
				int* pWidth,
				int* pHeight,
				int nDefWidth,
				int nDefHeight,
				bool bClamp);  // 394
} /* size: 630, inline expansions: 11 (1431 bytes) */

// <001961E9> materialsystem2/material2.cpp:394
void CMaterial2::GetWorldMappingSize(int* pWidth, int* pHeight, int nDefWidth, int nDefHeight, bool bClamp)
{
} /* size: 0 */

// <001961B9> materialsystem2/material2.cpp:407
void CMaterial2::GetShaderStateOverriddenByMaterial()
{
} /* size: 11 */

// <00195FE2> materialsystem2/material2.cpp:413
// variables: 2
// function calls: 6
void CMaterial2::GetMode(int nMode)
{
	const char   __FUNCTION__; // 62755
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 420
	}
	CMaterialSystem2::GetFrameCount(); // 415
	CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::IsValidIndex(
			int i);  // 424
	AlignedByteArrayExplicit_t<6, CMaterialMode, 8>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 452
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::Element(
		int i);  // 442
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::operator[](
			int i);  // 426
} /* size: 155, variables: 1, inline expansions: 6 (137 bytes) */

// <001ABAE3> materialsystem2/material2.cpp:436
// variables: 30
// function calls: 69
void CMaterial2::GetMode(const CUtlStringToken& shaderMode)
{
	IMaterialMode* mode; // 438
	CUtlStringToken* fallbackMode; // 443
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
		CUtlAttributeListChunk<int, 16, int>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 272
		{
			const OverflowChunk_t& p; // 279
			const CUtlIntrusiveList<CUtlAttributeList<int>::OverflowChunk_t>& __for_range; // 50966
			CUtlIntrusiveListIterator<const CUtlAttributeList<int>::OverflowChunk_t> __for_begin; // 50976
			CUtlIntrusiveListIterator<const CUtlAttributeList<int>::OverflowChunk_t> __for_end; // 50986
			CUtlIntrusiveList<CUtlAttributeList<int>::OverflowChunk_t>::Head(); // 1160
			CUtlIntrusiveListIterator<const CUtlAttributeList<int>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							const OverflowChunk_t* pNode);  // 1160
			CUtlIntrusiveList<CUtlAttributeList<int>::OverflowChunk_t>::begin(); // 279
			CUtlIntrusiveListIterator<const CUtlAttributeList<int>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							const OverflowChunk_t* pNode);  // 1165
			CUtlIntrusiveList<CUtlAttributeList<int>::OverflowChunk_t>::end(); // 279
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
			CUtlAttributeListChunk<int, 16, int>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 281
			CUtlIntrusiveListIterator<const CUtlAttributeList<int>::OverflowChunk_t>::operator++(); // 279
			CUtlAttributeListChunk<int, 16, int>::GetValuePtrFromIndex(
						int nIdx);  // 284
		}
		CUtlAttributeList<int, 16, int, 16>::FindIndexOfMatch(
				i32x4 n4Key,
				const int ** pValueOut);  // 270
		CUtlAttributeListChunk<int, 16, int>::GetValuePtrFromIndex(
					int nIdx);  // 275
		CUtlAttributeList<int, 16, int, 16>::FindIndexOfMatch(
				i32x4 n4Key,
				const int ** pValueOut);  // 381
	}
	CUtlAttributeList<int, 16, int, 16>::GetValueOrDefault(
				uint32 k,
				int nDefault);  // 393
	CUtlAttributeList<int, 16, int, 16>::GetValueOrDefault(
				CUtlStringToken nTok,
				int nDefault);  // 160
	CMaterialSystem2::GetModeIndexForModeToken(
				const CUtlStringToken& shaderMode);  // 438
	CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CUtlStringToken>, int>::Base(); // 650
	CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CUtlStringToken>, int>::Count(); // 651
	IdealIndex(uint32_if32BitStorage h,
			uint32 m);  // 653
	CUtlHashtableEntry<CUtlStringToken, CUtlStringToken>::IdealIndex(
			uint32 slotmask);  // 656
	CUtlHashtableEntry<CUtlStringToken, CUtlStringToken>::IdealIndex(
			uint32 slotmask);  // 667
	CUtlStringToken::operator==(
			const CUtlStringToken& other);  // 154
	DefaultEqualFunctor<CUtlStringToken>::operator(
			Arg_t a,
			Arg_t b);  // 670
	DoLookup<const CUtlStringToken&>(const CUtlHashtable<CUtlStringToken, CUtlStringToken, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtl this,
					const CUtlStringToken& x,
					unsigned int h,
					handle_t* pPreviousInChain);  // 218
	Find(const CUtlHashtable<CUtlStringToken, CUtlStringToken, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtl this,
		KeyArg_t k);  // 227
	CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CUtlStringToken>, int>::operator[](
			int i);  // 295
	Element(const CUtlHashtable<CUtlStringToken, CUtlStringToken, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlString this,
		handle_t idx);  // 227
	FindGetPtr(const CUtlHashtable<CUtlStringToken, CUtlStringToken, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlString this,
			KeyArg_t k);  // 443
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
		CUtlAttributeListChunk<int, 16, int>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 272
		{
			const OverflowChunk_t& p; // 279
			const CUtlIntrusiveList<CUtlAttributeList<int>::OverflowChunk_t>& __for_range; // 50966
			CUtlIntrusiveListIterator<const CUtlAttributeList<int>::OverflowChunk_t> __for_begin; // 50976
			CUtlIntrusiveListIterator<const CUtlAttributeList<int>::OverflowChunk_t> __for_end; // 50986
			CUtlIntrusiveList<CUtlAttributeList<int>::OverflowChunk_t>::Head(); // 1160
			CUtlIntrusiveListIterator<const CUtlAttributeList<int>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							const OverflowChunk_t* pNode);  // 1160
			CUtlIntrusiveList<CUtlAttributeList<int>::OverflowChunk_t>::begin(); // 279
			CUtlIntrusiveListIterator<const CUtlAttributeList<int>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							const OverflowChunk_t* pNode);  // 1165
			CUtlIntrusiveList<CUtlAttributeList<int>::OverflowChunk_t>::end(); // 279
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
			CUtlAttributeListChunk<int, 16, int>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 281
			CUtlIntrusiveListIterator<const CUtlAttributeList<int>::OverflowChunk_t>::operator++(); // 279
			CUtlAttributeListChunk<int, 16, int>::GetValuePtrFromIndex(
						int nIdx);  // 284
		}
		CUtlAttributeList<int, 16, int, 16>::FindIndexOfMatch(
				i32x4 n4Key,
				const int ** pValueOut);  // 270
		CUtlAttributeListChunk<int, 16, int>::GetValuePtrFromIndex(
					int nIdx);  // 275
		CUtlAttributeList<int, 16, int, 16>::FindIndexOfMatch(
				i32x4 n4Key,
				const int ** pValueOut);  // 381
	}
	CUtlAttributeList<int, 16, int, 16>::GetValueOrDefault(
				uint32 k,
				int nDefault);  // 393
	CUtlAttributeList<int, 16, int, 16>::GetValueOrDefault(
				CUtlStringToken nTok,
				int nDefault);  // 160
	CMaterialSystem2::GetModeIndexForModeToken(
				const CUtlStringToken& shaderMode);  // 448
	CMaterial2::GetMode(
		const CUtlStringToken& shaderMode);  // 436
} /* size: 750, variables: 2, inline expansions: 21 (2345 bytes) */

// <00195FA2> materialsystem2/material2.cpp:436
// variables: 2
void CMaterial2::GetMode(const CUtlStringToken& shaderMode)
{
	IMaterialMode* mode; // 438
	CUtlStringToken* fallbackMode; // 443
} /* size: 0, variables: 2 */

// <00195F72> materialsystem2/material2.cpp:452
void CMaterial2::GetAttributes()
{
} /* size: 9 */

// <0019580C> materialsystem2/material2.cpp:458
// variables: 14
// function calls: 27
void CMaterial2::GetBoolAttribute(bool* pVal, CUtlStringToken name)
{
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 461
	{
		int nIndex; // 465
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
			const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 27183
			CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 27193
			CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 27203
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
				const IntVector4D ** pValueOut);  // 465
	}
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::GetValue(
		IntVector4D* pOutputValue,
		const CUtlStringToken& attrName);  // 582
	CRenderAttributes::GetBoolValue(
			bool* pOutputValue,
			CUtlStringToken nTokenID);  // 460
} /* size: 214, inline expansions: 3 (409 bytes) */

// <001950B3> materialsystem2/material2.cpp:463
// variables: 14
// function calls: 27
void CMaterial2::GetIntAttribute(int* pVal, CUtlStringToken name)
{
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 461
	{
		int nIndex; // 465
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
			const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 27183
			CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 27193
			CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 27203
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
				const IntVector4D ** pValueOut);  // 465
	}
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::GetValue(
		IntVector4D* pOutputValue,
		const CUtlStringToken& attrName);  // 476
	CRenderAttributes::GetIntValue(
			int* pOutputValue,
			CUtlStringToken nTokenID);  // 465
} /* size: 214, inline expansions: 3 (392 bytes) */

// <001948F1> materialsystem2/material2.cpp:468
// variables: 14
// function calls: 29
void CMaterial2::GetFloatAttribute(float32* pVal, CUtlStringToken name)
{
	Vector4D::Vector4D(); // 166
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 461
	{
		int nIndex; // 465
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
			const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 39454
			CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 39464
			CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 39474
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
				const Vector4D ** pValueOut);  // 465
		Vector4D::operator=(
				const Vector4D& vOther);  // 470
	}
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::GetValue(
		Vector4D* pOutputValue,
		const CUtlStringToken& attrName);  // 167
	CRenderAttributes::GetFloatValue(
			float* pOutputValue,
			CUtlStringToken nTokenID);  // 470
} /* size: 214, inline expansions: 4 (402 bytes) */

// <001940DB> materialsystem2/material2.cpp:473
// variables: 14
// function calls: 31
void CMaterial2::GetStringAttribute(CUtlString* pVal, CUtlStringToken name)
{
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 461
	{
		int nIndex; // 465
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
		CUtlAttributeListChunk<CUtlString, 2, CUtlString>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 272
		CUtlAttributeListChunk<CUtlString, 2, CUtlString>::GetValuePtrFromIndex(
					int nIdx);  // 275
		{
			const OverflowChunk_t& p; // 279
			const CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>& __for_range; // 31237
			CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t> __for_begin; // 31247
			CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t> __for_end; // 31257
			CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::Head(); // 1160
			CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							const OverflowChunk_t* pNode);  // 1160
			CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::begin(); // 279
			CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							const OverflowChunk_t* pNode);  // 1165
			CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::end(); // 279
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
			CUtlAttributeListChunk<CUtlString, 2, CUtlString>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 281
			CUtlAttributeListChunk<CUtlString, 2, CUtlString>::GetValuePtrFromIndex(
						int nIdx);  // 284
			CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::operator++(); // 279
		}
		CUtlAttributeList<CUtlString, 2, CUtlString, 2>::FindIndexOfMatch(
				i32x4 n4Key,
				const CUtlString ** pValueOut);  // 270
		CUtlAttributeList<CUtlString, 2, CUtlString, 2>::FindIndexOfMatch(
				i32x4 n4Key,
				const CUtlString ** pValueOut);  // 465
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 470
	}
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::GetValue(
		CUtlString* pOutputValue,
		const CUtlStringToken& attrName);  // 412
	CRenderAttributes::GetStringValue(
			CUtlString* pOutputValue,
			CUtlStringToken nTokenID);  // 475
} /* size: 254, inline expansions: 3 (446 bytes) */

// <001938D8> materialsystem2/material2.cpp:478
// variables: 14
// function calls: 30
void CMaterial2::GetVector2DAttribute(Vector2D* pVal, CUtlStringToken name)
{
	Vector4D::Vector4D(); // 207
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 461
	{
		int nIndex; // 465
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
			const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 39454
			CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 39464
			CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 39474
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
				const Vector4D ** pValueOut);  // 465
		Vector4D::operator=(
				const Vector4D& vOther);  // 470
	}
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::GetValue(
		Vector4D* pOutputValue,
		const CUtlStringToken& attrName);  // 208
	Vector2D::operator=(
			const Vector2D& vOther);  // 212
	CRenderAttributes::GetVector2DValue(
			Vector2D* pOutputValue,
			CUtlStringToken nTokenID);  // 480
} /* size: 214, inline expansions: 5 (402 bytes) */

// <001930D5> materialsystem2/material2.cpp:483
// variables: 14
// function calls: 30
void CMaterial2::GetVectorAttribute(Vector* pVal, CUtlStringToken name)
{
	Vector4D::Vector4D(); // 248
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 461
	{
		int nIndex; // 465
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
			const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 39454
			CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 39464
			CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 39474
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
				const Vector4D ** pValueOut);  // 465
		Vector4D::operator=(
				const Vector4D& vOther);  // 470
	}
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::GetValue(
		Vector4D* pOutputValue,
		const CUtlStringToken& attrName);  // 249
	Vector::operator=(
			const Vector& vOther);  // 253
	CRenderAttributes::GetVectorValue(
			Vector* pOutputValue,
			CUtlStringToken nTokenID);  // 485
} /* size: 222, inline expansions: 5 (422 bytes) */

// <00192947> materialsystem2/material2.cpp:488
// variables: 14
// function calls: 28
void CMaterial2::GetVector4DAttribute(Vector4D* pVal, CUtlStringToken name)
{
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 461
	{
		int nIndex; // 465
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
			const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 39454
			CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 39464
			CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 39474
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
				const Vector4D ** pValueOut);  // 465
		Vector4D::operator=(
				const Vector4D& vOther);  // 470
	}
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::GetValue(
		Vector4D* pOutputValue,
		const CUtlStringToken& attrName);  // 288
	CRenderAttributes::GetVector4DValue(
			Vector4D* pOutputValue,
			CUtlStringToken nTokenID);  // 490
} /* size: 246, inline expansions: 3 (484 bytes) */

// <001A4F43> materialsystem2/material2.cpp:493
// variables: 14
// function calls: 38
void CMaterial2::GetTextureAttribute(HRenderTexture* pVal, CUtlStringToken name)
{
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 461
	{
		int nIndex; // 465
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
			const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 22460
			CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 22470
			CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 22480
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
				const TextureAttrForStorage_t ** pValueOut);  // 465
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1008
		TextureAttr_t::operator=(
				const TextureAttrForStorage_t& other);  // 470
	}
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::GetValue(
		TextureAttr_t* pOutputValue,
		const CUtlStringToken& attrName);  // 649
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 648
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 93
	TextureAttr_t::TextureAttr_t(
			HRenderTexture hT,
			int32 nMip);  // 648
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 653
	CRenderAttributes::GetTextureValue(
			HRenderTexture* pOutputValue,
			CUtlStringToken nTokenID);  // 495
} /* size: 249, inline expansions: 11 (477 bytes) */

// <00192914> materialsystem2/material2.cpp:493
void CMaterial2::GetTextureAttribute(HRenderTexture* pVal, CUtlStringToken name)
{
} /* size: 0 */

// <00192356> materialsystem2/material2.cpp:498
// variables: 8
// function calls: 28
void CMaterial2::GetFirstTextureAttribute()
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 631
	{
		int i; // 95
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>::ResourceHandleTyped_t(); // 993
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			ResourceHandleTyped_t hResource);  // 266
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				ResourceHandleTyped_t hResource);  // 993
		TextureAttr_t::TextureAttr_t(
				const TextureAttrForStorage_t& other);  // 99
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 638
		operator()(const class* __closure,
				uint32 nAttributeKey,
				const TextureAttr_t& txtr); // 99
	}
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::VisitAllAttributes<CRenderAttributes::GetFirstTexture(
																 f);  // 432
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 63625
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 63635
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 63645
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
						const OverflowChunk_t* pNode);  // 1160
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 433
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
						const OverflowChunk_t* pNode);  // 1165
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 433
		{
			int i; // 95
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>::ResourceHandleTyped_t(); // 993
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				ResourceHandleTyped_t hResource);  // 266
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					ResourceHandleTyped_t hResource);  // 993
			TextureAttr_t::TextureAttr_t(
					const TextureAttrForStorage_t& other);  // 99
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 638
			operator()(const class* __closure,
					uint32 nAttributeKey,
					const TextureAttr_t& txtr); // 99
		}
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::VisitAllAttributes<CRenderAttributes::GetFirstTexture(
																 f);  // 435
		operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 433
	}
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::VisitAllAttributes<CRenderAttributes::GetFirstTexture(
																 f);  // 633
	CRenderAttributes::GetFirstTexture(); // 500
} /* size: 351, inline expansions: 7 (844 bytes) */

// <0019145A> materialsystem2/material2.cpp:503
// variables: 8
// function calls: 68
void CMaterial2::GetAllTextureAttributes(CUtlVector<IMaterial2::TextureAttributeValue_t, CUtlMemory<IMaterial2::TextureAttributeValue_t, int> >& attrs)
{
	{
		int i; // 95
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>::ResourceHandleTyped_t(); // 993
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			ResourceHandleTyped_t hResource);  // 266
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				ResourceHandleTyped_t hResource);  // 993
		TextureAttr_t::TextureAttr_t(
				const TextureAttrForStorage_t& other);  // 99
		CUtlMemory<IMaterial2::TextureAttributeValue_t, int>::NumAllocated(); // 1247
		CUtlMemory<IMaterial2::TextureAttributeValue_t, int>::Base(); // 112
		CUtlVectorBase<IMaterial2::TextureAttributeValue_t, CUtlMemory<IMaterial2::TextureAttributeValue_t, int> >::Base(); // 368
		CUtlVectorBase<IMaterial2::TextureAttributeValue_t, CUtlMemory<IMaterial2::TextureAttributeValue_t, int> >::ResetDbgInfo(); // 824
		CUtlMemory<IMaterial2::TextureAttributeValue_t, int>::IsGrowable(); // 823
		CUtlMemory<IMaterial2::TextureAttributeValue_t, int>::IsExternallyAllocated(); // 859
		CUtlMemory<IMaterial2::TextureAttributeValue_t, int>::IsExternallyAllocated(); // 861
		CUtlMemory<IMaterial2::TextureAttributeValue_t, int>::Grow(
			int num);  // 806
		CUtlVectorBase<IMaterial2::TextureAttributeValue_t, CUtlMemory<IMaterial2::TextureAttributeValue_t, int> >::GrowMemory(
				int num);  // 1249
		CUtlMemory<IMaterial2::TextureAttributeValue_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<IMaterial2::TextureAttributeValue_t, CUtlMemory<IMaterial2::TextureAttributeValue_t, int> >::Element(
			int i);  // 1252
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 166
		TextureAttributeValue_t::TextureAttributeValue_t(
					TextureAttributeValue_t &);  // 1514
		Construct<IMaterial2::TextureAttributeValue_t, IMaterial2::TextureAttributeValue_t>(TextureAttributeValue_t* pMemory); // 1252
		CUtlVectorBase<IMaterial2::TextureAttributeValue_t, CUtlMemory<IMaterial2::TextureAttributeValue_t, int> >::AddToTail(
				TextureAttributeValue_t& src);  // 507
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 507
		CUtlStringToken::CUtlStringToken(); // 114
		StringTokenFromHashCode(uint32 nHashCode); // 507
		CUtlStringToken::CUtlStringToken(); // 173
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 173
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 176
		TextureAttributeValue_t::TextureAttributeValue_t(
					CUtlStringToken name,
					int nMipLevel,
					HRenderTexture hTexture);  // 507
		operator()(const class* __closure,
				uint32 nAttributeKey,
				const TextureAttr_t& txtr); // 99
	}
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::VisitAllAttributes<CMaterial2::GetAllTextureAttributes(
																 f);  // 432
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 17567
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 17577
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 17587
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
						const OverflowChunk_t* pNode);  // 1160
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 433
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
						const OverflowChunk_t* pNode);  // 1165
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 433
		{
			int i; // 95
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>::ResourceHandleTyped_t(); // 993
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				ResourceHandleTyped_t hResource);  // 266
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					ResourceHandleTyped_t hResource);  // 993
			TextureAttr_t::TextureAttr_t(
					const TextureAttrForStorage_t& other);  // 99
			CUtlMemory<IMaterial2::TextureAttributeValue_t, int>::NumAllocated(); // 1247
			CUtlMemory<IMaterial2::TextureAttributeValue_t, int>::Base(); // 112
			CUtlVectorBase<IMaterial2::TextureAttributeValue_t, CUtlMemory<IMaterial2::TextureAttributeValue_t, int> >::Base(); // 368
			CUtlVectorBase<IMaterial2::TextureAttributeValue_t, CUtlMemory<IMaterial2::TextureAttributeValue_t, int> >::ResetDbgInfo(); // 824
			CUtlMemory<IMaterial2::TextureAttributeValue_t, int>::IsGrowable(); // 823
			CUtlMemory<IMaterial2::TextureAttributeValue_t, int>::IsExternallyAllocated(); // 859
			CUtlMemory<IMaterial2::TextureAttributeValue_t, int>::IsExternallyAllocated(); // 861
			CUtlMemory<IMaterial2::TextureAttributeValue_t, int>::Grow(
				int num);  // 806
			CUtlVectorBase<IMaterial2::TextureAttributeValue_t, CUtlMemory<IMaterial2::TextureAttributeValue_t, int> >::GrowMemory(
					int num);  // 1249
			CUtlMemory<IMaterial2::TextureAttributeValue_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<IMaterial2::TextureAttributeValue_t, CUtlMemory<IMaterial2::TextureAttributeValue_t, int> >::Element(
				int i);  // 1252
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 166
			TextureAttributeValue_t::TextureAttributeValue_t(
						TextureAttributeValue_t &);  // 1514
			Construct<IMaterial2::TextureAttributeValue_t, IMaterial2::TextureAttributeValue_t>(TextureAttributeValue_t* pMemory); // 1252
			CUtlVectorBase<IMaterial2::TextureAttributeValue_t, CUtlMemory<IMaterial2::TextureAttributeValue_t, int> >::AddToTail(
					TextureAttributeValue_t& src);  // 507
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 507
			CUtlStringToken::CUtlStringToken(); // 114
			StringTokenFromHashCode(uint32 nHashCode); // 507
			CUtlStringToken::CUtlStringToken(); // 173
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 173
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 176
			TextureAttributeValue_t::TextureAttributeValue_t(
						CUtlStringToken name,
						int nMipLevel,
						HRenderTexture hTexture);  // 507
			operator()(const class* __closure,
					uint32 nAttributeKey,
					const TextureAttr_t& txtr); // 99
		}
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::VisitAllAttributes<CMaterial2::GetAllTextureAttributes(
																 f);  // 435
		operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 433
	}
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::VisitAllAttributes<CMaterial2::GetAllTextureAttributes(
																 f);  // 703
	CRenderAttributes::VisitTextureValues<CMaterial2::GetAllTextureAttributes(
																 f);  // 505
} /* size: 865, inline expansions: 3 (1936 bytes) */

// <00190BF0> materialsystem2/material2.cpp:512
// variables: 10
// function calls: 25
void CMaterial2::GetVertexShaderInputSignature()
{
	const CMaterialLayer* pLayer; // 522
	VfxProgram_t programType; // 548
	const CVfxStaticComboData* pComboData; // 549
	int nSigIdx; // 562
	const char   __FUNCTION__; // 63314
	{
		const CMaterialMode& mode; // 523
		const CUtlLeanVectorFixedGrowable<CMaterialMode, 6, short int>& __for_range; // 53305
		const_iterator __for_begin; // 51098
		const_iterator __for_end; // 51098
		AlignedByteArrayExplicit_t<6, CMaterialMode, 8>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 416
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::begin(); // 523
		CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 418
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::Count(); // 418
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::end(); // 523
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 563
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 555
	CUtlMemory<int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 562
	Count(const CUtlVectorBase<CUtlVector<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >, CUtlMemory this); // 563
	CUtlMemory<CUtlVector<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CUtlVector<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >, CUtlMemory<CUtlV this,
			int i);  // 569
	CUtlSymbol::IsValid(); // 285
	CMaterial2::GetName(); // 558
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 558
	CUtlSymbol::IsValid(); // 285
	CMaterial2::GetName(); // 544
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 544
	Count(const CUtlVectorBase<CUtlVector<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >, CUtlMemory this); // 564
	CUtlSymbol::IsValid(); // 285
	CMaterial2::GetName(); // 566
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 566
} /* size: 0, variables: 5, inline expansions: 19 (115 bytes) */

// <001A588D> materialsystem2/material2.cpp:573
// variables: 16
// function calls: 42
void CMaterial2::IsBatchableInMode(const CUtlStringToken& shaderMode, EBatchableInModeFlags_t nFlags)
{
	bool bBatchable; // 580
	int nMode; // 581
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
		CUtlAttributeListChunk<int, 16, int>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 272
		{
			const OverflowChunk_t& p; // 279
			const CUtlIntrusiveList<CUtlAttributeList<int>::OverflowChunk_t>& __for_range; // 50966
			CUtlIntrusiveListIterator<const CUtlAttributeList<int>::OverflowChunk_t> __for_begin; // 50976
			CUtlIntrusiveListIterator<const CUtlAttributeList<int>::OverflowChunk_t> __for_end; // 50986
			CUtlIntrusiveList<CUtlAttributeList<int>::OverflowChunk_t>::Head(); // 1160
			CUtlIntrusiveListIterator<const CUtlAttributeList<int>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							const OverflowChunk_t* pNode);  // 1160
			CUtlIntrusiveList<CUtlAttributeList<int>::OverflowChunk_t>::begin(); // 279
			CUtlIntrusiveListIterator<const CUtlAttributeList<int>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							const OverflowChunk_t* pNode);  // 1165
			CUtlIntrusiveList<CUtlAttributeList<int>::OverflowChunk_t>::end(); // 279
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
			CUtlAttributeListChunk<int, 16, int>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 281
			CUtlIntrusiveListIterator<const CUtlAttributeList<int>::OverflowChunk_t>::operator++(); // 279
			CUtlAttributeListChunk<int, 16, int>::GetValuePtrFromIndex(
						int nIdx);  // 284
		}
		CUtlAttributeList<int, 16, int, 16>::FindIndexOfMatch(
				i32x4 n4Key,
				const int ** pValueOut);  // 270
		CUtlAttributeListChunk<int, 16, int>::GetValuePtrFromIndex(
					int nIdx);  // 275
		CUtlAttributeList<int, 16, int, 16>::FindIndexOfMatch(
				i32x4 n4Key,
				const int ** pValueOut);  // 381
	}
	CUtlAttributeList<int, 16, int, 16>::GetValueOrDefault(
				uint32 k,
				int nDefault);  // 393
	CUtlAttributeList<int, 16, int, 16>::GetValueOrDefault(
				CUtlStringToken nTok,
				int nDefault);  // 160
	CMaterialSystem2::GetModeIndexForModeToken(
				const CUtlStringToken& shaderMode);  // 581
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::Count(); // 582
	AlignedByteArrayExplicit_t<6, CMaterialMode, 8>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 452
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::Element(
		int i);  // 442
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::operator[](
			int i);  // 589
	AlignedByteArrayExplicit_t<6, CMaterialMode, 8>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 452
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::Element(
		int i);  // 442
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::operator[](
			int i);  // 585
	AlignedByteArrayExplicit_t<6, CMaterialMode, 8>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 452
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::Element(
		int i);  // 442
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::operator[](
			int i);  // 587
	CMaterial2::IsBatchableInMode(
				const CUtlStringToken& shaderMode,
				EBatchableInModeFlags_t nFlags);  // 573
} /* size: 442, variables: 2, inline expansions: 18 (1302 bytes) */

// <00190BA3> materialsystem2/material2.cpp:573
// variables: 2
void CMaterial2::IsBatchableInMode(const CUtlStringToken& shaderMode, EBatchableInModeFlags_t nFlags)
{
	bool bBatchable; // 580
	int nMode; // 581
} /* size: 0, variables: 2 */

// <0018CF64> materialsystem2/material2.cpp:598
// variables: 27
// function calls: 273
void CMaterial2::CreateMaterialFromResourceData(const MaterialResourceData_t* pMatData)
{
	CToolsStallMonitorScope stall_monitor_scope_check_object; // 600
	const char   __FUNCTION__; // 63341
	CUtlVector<CMaterialParam, CUtlMemory<CMaterialParam, int> >& params; // 621
	int nShaderIndex; // 630
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 602
	}
	{
		int32 i; // 635
		{
			int nNewParamIndex; // 637
			float flVec4; // 640
			CUtlMemory<CMaterialParam, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Element(
				int i);  // 1148
			CUtlSymbolLarge::CUtlSymbolLarge(); // 19
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 19
			CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 476
			CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
				ResourceHandleTyped_t hResource);  // 476
			CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 19
			CUtlStringToken::CUtlStringToken(); // 19
			CVfxParam::CVfxParam(); // 19
			CUtlSymbolLarge::CUtlSymbolLarge(); // 19
			CUtlSymbolLarge::CUtlSymbolLarge(
					UtlSymLargeId_t id);  // 21
			CUtlSymbolLarge::operator=(
					const CUtlSymbolLarge& src);  // 21
			CUtlSymbolLarge::CUtlSymbolLarge(
					UtlSymLargeId_t id);  // 22
			CUtlSymbolLarge::operator=(
					const CUtlSymbolLarge& src);  // 22
			CMaterialParam::CMaterialParam(); // 1479
			Construct<CMaterialParam>(CMaterialParam* pMemory); // 1148
			CUtlMemory<CMaterialParam, int>::NumAllocated(); // 1143
			CUtlMemory<CMaterialParam, int>::Base(); // 112
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Base(); // 368
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::GrowMemory(
					int num);  // 1145
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::AddToTail(); // 637
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 638
			CUtlMemory<CMaterialParam, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator[](
					int i);  // 638
			CUtlMemory<MaterialParamInt_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<MaterialParamInt_t, CUtlMemory<MaterialParamInt_t, int> >::operator[](
					int i);  // 638
			CUtlMemory<MaterialParamInt_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<MaterialParamInt_t, CUtlMemory<MaterialParamInt_t, int> >::operator[](
					int i);  // 641
			CUtlMemory<CMaterialParam, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator[](
					int i);  // 642
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 126
			CVfxParam::SetVec(
				const float* pVec);  // 642
		}
		CUtlVectorBase<MaterialParamInt_t, CUtlMemory<MaterialParamInt_t, int> >::Count(); // 635
	}
	{
		int32 i; // 646
		{
			int nIndex; // 648
			float flVec4; // 651
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 649
			CUtlMemory<CMaterialParam, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Element(
				int i);  // 1148
			CUtlSymbolLarge::CUtlSymbolLarge(); // 19
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 19
			CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 476
			CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
				ResourceHandleTyped_t hResource);  // 476
			CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 19
			CUtlStringToken::CUtlStringToken(); // 19
			CVfxParam::CVfxParam(); // 19
			CUtlSymbolLarge::CUtlSymbolLarge(); // 19
			CUtlSymbolLarge::CUtlSymbolLarge(
					UtlSymLargeId_t id);  // 21
			CUtlSymbolLarge::operator=(
					const CUtlSymbolLarge& src);  // 21
			CUtlSymbolLarge::CUtlSymbolLarge(
					UtlSymLargeId_t id);  // 22
			CUtlSymbolLarge::operator=(
					const CUtlSymbolLarge& src);  // 22
			CMaterialParam::CMaterialParam(); // 1479
			Construct<CMaterialParam>(CMaterialParam* pMemory); // 1148
			CUtlMemory<CMaterialParam, int>::NumAllocated(); // 1143
			CUtlMemory<CMaterialParam, int>::Base(); // 112
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Base(); // 368
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::GrowMemory(
					int num);  // 1145
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::AddToTail(); // 648
			CUtlMemory<CMaterialParam, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator[](
					int i);  // 649
			CUtlMemory<MaterialParamFloat_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<MaterialParamFloat_t, CUtlMemory<MaterialParamFloat_t, int> >::operator[](
					int i);  // 649
			CUtlMemory<MaterialParamFloat_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<MaterialParamFloat_t, CUtlMemory<MaterialParamFloat_t, int> >::operator[](
					int i);  // 652
			CUtlMemory<CMaterialParam, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator[](
					int i);  // 653
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 126
			CVfxParam::SetVec(
				const float* pVec);  // 653
		}
		CUtlVectorBase<MaterialParamFloat_t, CUtlMemory<MaterialParamFloat_t, int> >::Count(); // 646
	}
	{
		int32 i; // 657
		{
			int nIndex; // 659
			float flVec4; // 662
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 660
			CUtlMemory<CMaterialParam, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Element(
				int i);  // 1148
			CUtlSymbolLarge::CUtlSymbolLarge(); // 19
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 19
			CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 476
			CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
				ResourceHandleTyped_t hResource);  // 476
			CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 19
			CUtlStringToken::CUtlStringToken(); // 19
			CVfxParam::CVfxParam(); // 19
			CUtlSymbolLarge::CUtlSymbolLarge(); // 19
			CUtlSymbolLarge::CUtlSymbolLarge(
					UtlSymLargeId_t id);  // 21
			CUtlSymbolLarge::operator=(
					const CUtlSymbolLarge& src);  // 21
			CUtlSymbolLarge::CUtlSymbolLarge(
					UtlSymLargeId_t id);  // 22
			CUtlSymbolLarge::operator=(
					const CUtlSymbolLarge& src);  // 22
			CMaterialParam::CMaterialParam(); // 1479
			Construct<CMaterialParam>(CMaterialParam* pMemory); // 1148
			CUtlMemory<CMaterialParam, int>::NumAllocated(); // 1143
			CUtlMemory<CMaterialParam, int>::Base(); // 112
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Base(); // 368
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::GrowMemory(
					int num);  // 1145
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::AddToTail(); // 659
			CUtlMemory<CMaterialParam, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator[](
					int i);  // 660
			CUtlMemory<MaterialParamVector_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<MaterialParamVector_t, CUtlMemory<MaterialParamVector_t, int> >::operator[](
					int i);  // 660
			CUtlMemory<MaterialParamVector_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<MaterialParamVector_t, CUtlMemory<MaterialParamVector_t, int> >::operator[](
					int i);  // 663
			CUtlMemory<CMaterialParam, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator[](
					int i);  // 667
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 126
			CVfxParam::SetVec(
				const float* pVec);  // 667
		}
		CUtlVectorBase<MaterialParamVector_t, CUtlMemory<MaterialParamVector_t, int> >::Count(); // 657
	}
	{
		int32 i; // 671
		{
			int nIndex; // 673
			const char* pszParamRemapArray; // 678
			{
				const char  *& param; // 685
				const char  *& __for_range; // 19352
				const char** __for_begin; // 19358
				const char** __for_end; // 19358
				CUtlMemory<MaterialParamTexture_t, int>::operator[](
						int i);  // 595
				CUtlVectorBase<MaterialParamTexture_t, CUtlMemory<MaterialParamTexture_t, int> >::operator[](
						int i);  // 687
				CUtlMemory<CMaterialParam, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator[](
						int i);  // 689
			}
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 675
			CUtlMemory<CMaterialParam, int>::NumAllocated(); // 1143
			CUtlMemory<CMaterialParam, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Element(
				int i);  // 1148
			CUtlSymbolLarge::CUtlSymbolLarge(); // 19
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 19
			CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 476
			CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
				ResourceHandleTyped_t hResource);  // 476
			CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 19
			CUtlStringToken::CUtlStringToken(); // 19
			CVfxParam::CVfxParam(); // 19
			CUtlSymbolLarge::CUtlSymbolLarge(); // 19
			CUtlSymbolLarge::CUtlSymbolLarge(
					UtlSymLargeId_t id);  // 21
			CUtlSymbolLarge::operator=(
					const CUtlSymbolLarge& src);  // 21
			CUtlSymbolLarge::CUtlSymbolLarge(
					UtlSymLargeId_t id);  // 22
			CUtlSymbolLarge::operator=(
					const CUtlSymbolLarge& src);  // 22
			CMaterialParam::CMaterialParam(); // 1479
			Construct<CMaterialParam>(CMaterialParam* pMemory); // 1148
			CUtlMemory<CMaterialParam, int>::Base(); // 112
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Base(); // 368
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::GrowMemory(
					int num);  // 1145
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::AddToTail(); // 673
			CUtlMemory<CMaterialParam, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator[](
					int i);  // 675
			CUtlMemory<MaterialParamTexture_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<MaterialParamTexture_t, CUtlMemory<MaterialParamTexture_t, int> >::operator[](
					int i);  // 675
			CUtlMemory<CMaterialParam, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator[](
					int i);  // 695
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
			CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 695
			CUtlMemory<MaterialParamTexture_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<MaterialParamTexture_t, CUtlMemory<MaterialParamTexture_t, int> >::operator[](
					int i);  // 695
			CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 176
			CVfxParam::SetTextureHandle(
					HRenderTexture hTex);  // 695
		}
		CUtlVectorBase<MaterialParamTexture_t, CUtlMemory<MaterialParamTexture_t, int> >::Count(); // 671
	}
	{
		int32 i; // 699
		CUtlVectorBase<MaterialParamInt_t, CUtlMemory<MaterialParamInt_t, int> >::Count(); // 699
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
			const CUtlStringToken& nTok,
			IntVector4D nValue);  // 456
		CRenderAttributes::SetIntValue(
				CUtlStringToken nTokenID,
				int nValue);  // 702
		CUtlMemory<MaterialParamInt_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<MaterialParamInt_t, CUtlMemory<MaterialParamInt_t, int> >::operator[](
				int i);  // 702
		CUtlStringToken::CUtlStringToken(); // 121
		{
		}
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 119
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 702
		CUtlString::Get(); // 702
	}
	{
		int32 i; // 706
		CUtlVectorBase<MaterialParamFloat_t, CUtlMemory<MaterialParamFloat_t, int> >::Count(); // 706
		Vector4D::Vector4D(
			vec_t X,
			vec_t Y,
			vec_t Z,
			vec_t W);  // 148
		Vector4D::Vector4D(
			const Vector4D& vOther);  // 571
		CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetValue(
			const CUtlStringToken& nTok,
			Vector4D nValue);  // 148
		CRenderAttributes::SetFloatValue(
				CUtlStringToken nTokenID,
				float flValue);  // 709
		CUtlMemory<MaterialParamFloat_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<MaterialParamFloat_t, CUtlMemory<MaterialParamFloat_t, int> >::operator[](
				int i);  // 709
		CUtlString::Get(); // 709
		CUtlStringToken::CUtlStringToken(); // 121
		{
		}
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 119
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 709
	}
	{
		int32 i; // 713
		CUtlVectorBase<MaterialParamVector_t, CUtlMemory<MaterialParamVector_t, int> >::Count(); // 713
		Vector4D::Vector4D(
			const Vector4D& vOther);  // 277
		Vector4D::Vector4D(
			const Vector4D& vOther);  // 571
		CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetValue(
			const CUtlStringToken& nTok,
			Vector4D nValue);  // 277
		CRenderAttributes::SetVector4DValue(
				CUtlStringToken nTokenID,
				Vector4D vValue);  // 716
		CUtlMemory<MaterialParamVector_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<MaterialParamVector_t, CUtlMemory<MaterialParamVector_t, int> >::operator[](
				int i);  // 716
		Vector4D::Vector4D(
			const Vector4D& vOther);  // 716
		CUtlString::Get(); // 716
		CUtlStringToken::CUtlStringToken(); // 121
		{
		}
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 119
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 716
	}
	{
		int32 i; // 720
		CUtlVectorBase<MaterialParamTexture_t, CUtlMemory<MaterialParamTexture_t, int> >::Count(); // 720
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
		CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::SetValue(
			const CUtlStringToken& nTok,
			TextureAttr_t nValue);  // 619
		CRenderAttributes::SetTextureValue(
				CUtlStringToken nTokenID,
				HRenderTexture txtr,
				int32 nSingleMipLevelToBind);  // 723
		CUtlMemory<MaterialParamTexture_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<MaterialParamTexture_t, CUtlMemory<MaterialParamTexture_t, int> >::operator[](
				int i);  // 723
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
		CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 723
		CUtlString::Get(); // 723
		CUtlStringToken::CUtlStringToken(); // 121
		{
		}
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 119
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 723
	}
	{
		int32 i; // 727
		CUtlVectorBase<MaterialParamString_t, CUtlMemory<MaterialParamString_t, int> >::Count(); // 727
		CUtlString::CUtlString(
				const char* pString);  // 406
		CUtlString::Get(); // 354
		CUtlString::CUtlString(
				const CUtlString& string);  // 571
		CUtlString::~CUtlString(); // 571
		CUtlAttributeList<CUtlString, 2, CUtlString, 2>::SetValue(
			const CUtlStringToken& nTok,
			CUtlString nValue);  // 406
		CUtlString::~CUtlString(); // 406
		CRenderAttributes::SetStringValue(
				CUtlStringToken nTokenID,
				const char* str);  // 730
		CUtlMemory<MaterialParamString_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<MaterialParamString_t, CUtlMemory<MaterialParamString_t, int> >::operator[](
				int i);  // 730
		CUtlString::Get(); // 730
		CUtlString::Get(); // 730
		CUtlStringToken::CUtlStringToken(); // 121
		{
		}
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 119
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 730
	}
	CToolsStallMonitorScope::CToolsStallMonitorScope(
				const char* pScopeName,
				bool bDisableDetection,
				uint32 nStallThresholdMS);  // 600
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 607
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 607
	{
		int i; // 1721
		CUtlMemory<CMaterialParam, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Element(
			int i);  // 1723
		CVfxParam::FreeBufferData(); // 33
		CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 34
		CVfxParam::~CVfxParam(); // 16
		CMaterialParam::~CMaterialParam(); // 1526
		Destruct<CMaterialParam>(CMaterialParam* pMemory); // 1723
	}
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::RemoveAll(); // 622
	CUtlVectorBase<MaterialParamInt_t, CUtlMemory<MaterialParamInt_t, int> >::Count(); // 624
	CUtlVectorBase<MaterialParamFloat_t, CUtlMemory<MaterialParamFloat_t, int> >::Count(); // 625
	CUtlVectorBase<MaterialParamVector_t, CUtlMemory<MaterialParamVector_t, int> >::Count(); // 626
	CUtlVectorBase<MaterialParamTexture_t, CUtlMemory<MaterialParamTexture_t, int> >::Count(); // 627
	CUtlMemory<CMaterialParam, int>::IsGrowable(); // 881
	CUtlMemory<CMaterialParam, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CMaterialParam, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::EnsureCapacity(
			int num);  // 623
	CUtlMemory<CMaterialParam, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Element(
		int i);  // 1148
	CUtlSymbolLarge::CUtlSymbolLarge(); // 19
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 19
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 476
	CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
		ResourceHandleTyped_t hResource);  // 476
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 19
	CUtlStringToken::CUtlStringToken(); // 19
	CVfxParam::CVfxParam(); // 19
	CUtlSymbolLarge::CUtlSymbolLarge(); // 19
	CUtlSymbolLarge::CUtlSymbolLarge(
			UtlSymLargeId_t id);  // 21
	CUtlSymbolLarge::operator=(
			const CUtlSymbolLarge& src);  // 21
	CUtlSymbolLarge::CUtlSymbolLarge(
			UtlSymLargeId_t id);  // 22
	CUtlSymbolLarge::operator=(
			const CUtlSymbolLarge& src);  // 22
	CMaterialParam::CMaterialParam(); // 1479
	Construct<CMaterialParam>(CMaterialParam* pMemory); // 1148
	CUtlMemory<CMaterialParam, int>::Base(); // 112
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Base(); // 368
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::AddToTail(); // 630
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 632
	CUtlMemory<CMaterialParam, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator[](
			int i);  // 631
	CUtlMemory<CMaterialParam, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator[](
			int i);  // 632
	CToolsStallMonitorScope::~CToolsStallMonitorScope(); // 732
} /* size: 0, variables: 4, inline expansions: 44 (1238 bytes) */

// <0018B6BE> materialsystem2/material2.cpp:737
// variables: 12
// function calls: 105
void CMaterial2::CreateMaterialFromKV3(const char* pMaterialName, const KeyValues3* pData, const CMaterial2* pBaseMaterial)
{
	CToolsStallMonitorScope stall_monitor_scope_check_object; // 739
	const char   __FUNCTION__; // 63108
	CUtlVector<CMaterialParam, CUtlMemory<CMaterialParam, int> >& params; // 749
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 741
	}
	{
		int i; // 758
		{
			float flVec4; // 760
			const KeyValues3* pElem; // 761
			int nIdx; // 763
			{
				int j; // 767
				CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Count(); // 767
				CUtlMemory<CMaterialParam, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator[](
						int i);  // 769
				CUtlSymbolLarge::String(); // 25
				CMaterialParam::GetName(); // 769
			}
			{
				ResourceHandle_t hTex; // 796
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
				CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntyped(
						ResourceHandle_t hUntypedResource);  // 306
				CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntyped(
						ResourceHandle_t hUntypedResource);  // 235
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 234
				FromUntypedHandle(ResourceHandle_t hResource); // 797
				CUtlMemory<CMaterialParam, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator[](
						int i);  // 797
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 318
				CResourceName::~CResourceName(); // 796
				CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 176
				CVfxParam::SetTextureHandle(
						HRenderTexture hTex);  // 797
			}
			KeyValues3::GetAllFlags(); // 892
			KeyValues3::HasFlag(
				KeyValues3Flag_t nFlag);  // 793
			CUtlMemory<CMaterialParam, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator[](
					int i);  // 802
			KeyValues3::GetValueAsNumeric<float>(); // 199
			KeyValues3::GetValueFloat(); // 788
			CUtlMemory<CMaterialParam, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator[](
					int i);  // 789
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 126
			CVfxParam::SetVec(
				const float* pVec);  // 789
			CUtlMemory<CMaterialParam, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator[](
					int i);  // 809
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 126
			CVfxParam::SetVec(
				const float* pVec);  // 809
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 782
			CUtlMemory<CMaterialParam, int>::NumAllocated(); // 1143
			CUtlMemory<CMaterialParam, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Element(
				int i);  // 1148
			CUtlSymbolLarge::CUtlSymbolLarge(); // 19
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 19
			CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 476
			CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
				ResourceHandleTyped_t hResource);  // 476
			CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 19
			CUtlStringToken::CUtlStringToken(); // 19
			CVfxParam::CVfxParam(); // 19
			CUtlSymbolLarge::CUtlSymbolLarge(); // 19
			CUtlSymbolLarge::CUtlSymbolLarge(
					UtlSymLargeId_t id);  // 21
			CUtlSymbolLarge::operator=(
					const CUtlSymbolLarge& src);  // 21
			CUtlSymbolLarge::CUtlSymbolLarge(
					UtlSymLargeId_t id);  // 22
			CUtlSymbolLarge::operator=(
					const CUtlSymbolLarge& src);  // 22
			CMaterialParam::CMaterialParam(); // 1479
			Construct<CMaterialParam>(CMaterialParam* pMemory); // 1148
			CUtlMemory<CMaterialParam, int>::Base(); // 112
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Base(); // 368
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::GrowMemory(
					int num);  // 1145
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::AddToTail(); // 779
			CUtlMemory<CMaterialParam, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator[](
					int i);  // 780
		}
	}
	CToolsStallMonitorScope::CToolsStallMonitorScope(
				const char* pScopeName,
				bool bDisableDetection,
				uint32 nStallThresholdMS);  // 739
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 743
	{
		int i; // 1721
		CUtlMemory<CMaterialParam, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Element(
			int i);  // 1723
		CVfxParam::FreeBufferData(); // 33
		CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 34
		CVfxParam::~CVfxParam(); // 16
		CMaterialParam::~CMaterialParam(); // 1526
		Destruct<CMaterialParam>(CMaterialParam* pMemory); // 1723
	}
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::RemoveAll(); // 750
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Count(); // 1369
	CUtlMemory<CMaterialParam, int>::NumAllocated(); // 782
	CUtlMemory<CMaterialParam, int>::Base(); // 112
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Base(); // 368
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::GrowVector(
			int num);  // 1373
	{
		int i; // 1376
		CUtlMemory<CMaterialParam, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator[](
				int i);  // 1378
		CUtlMemory<CMaterialParam, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Element(
			int i);  // 1378
		CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(); // 37
		CUtlStringToken::CUtlStringToken(); // 37
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 604
		CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
			const CStrongHandle<InfoForResourceTypeCTextureBase>& src);  // 666
		CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CStrongHandle<InfoForResourceTypeCTextureBase>& src);  // 199
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 79
		V_memcpy(void* dest,
			const void* src,
			uint count);  // 206
		CVfxParam::CopyFrom(
			const CVfxParam& other);  // 40
		CVfxParam::CVfxParam(
				const CVfxParam& other);  // 16
		CUtlSymbolLarge::CUtlSymbolLarge(
				const CUtlSymbolLarge& sym);  // 16
		CUtlSymbolLarge::CUtlSymbolLarge(
				const CUtlSymbolLarge& sym);  // 16
		CMaterialParam::CMaterialParam(
				const CMaterialParam  &);  // 1520
		CopyConstruct<CMaterialParam>(CMaterialParam* pMemory,
						const CMaterialParam& src);  // 1378
	}
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::AddVectorToTail<CUtlMemory<CMaterialParam, int> >(
								const CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >& src);  // 755
	CToolsStallMonitorScope::~CToolsStallMonitorScope(); // 820
} /* size: 0, variables: 3, inline expansions: 12 (666 bytes) */

// <0018AB86> materialsystem2/material2.cpp:823
// variables: 12
// function calls: 42
void CMaterial2::GetKV3MaterialDescription(KeyValues3** ppKeyValuesOut)
{
	KeyValues3* pKV3Data; // 831
	const char* pShaderName; // 834
	{
		int32 nParam; // 837
		{
			const CKV3MemberName  paramName; // 839
			{
				HRenderTexture hTexture; // 846
				CResourceNameGetter resourceName; // 847
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
				CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 137
				CVfxParam::GetTextureHandle(); // 846
				CUtlSymbolLarge::String(); // 160
				ResourceGetName(ResourceNameHandle_t hResourceName,
						CResourceName* pTarget);  // 184
				ResourceGetName(ResourceNameHandle_t hResourceName,
						CResourceName* pTarget);  // 180
				ResourceGetName(ResourceHandle_t hResource,
						CResourceName* pTarget);  // 488
				CWeakHandle<InfoForResourceTypeCTextureBase>::GetResourceName(
						CResourceName* pOutName);  // 206
				CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCTextureBase>(
											const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 847
				CResourceName::Get(); // 848
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 848
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 318
				CResourceName::~CResourceName(); // 191
				CResourceNameGetter::~CResourceNameGetter(); // 849
			}
			{
				const float* pVecValue; // 852
				Vector4D value; // 853
				Vector4D::Vector4D(
					vec_t X,
					vec_t Y,
					vec_t Z,
					vec_t W);  // 853
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 864
				KeyValues3::SetMemberVector4D(
							CKV3MemberName memberName,
							const Vector4D& value);  // 854
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 854
			}
			CUtlSymbolLarge::String(); // 25
			CMaterialParam::GetName(); // 839
			CUtlStringToken::CUtlStringToken(); // 121
			{
			}
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 119
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 151
			KV3MakeLowerHash(const char* pStr); // 23
			CKV3MemberName::CKV3MemberName(
					const char* pString);  // 839
			CUtlMemory<CMaterialParam, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator[](
					int i);  // 840
			CVfxParam::IsDynamic(); // 840
			CUtlMemory<CMaterialParam, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator[](
					int i);  // 839
			CVfxParam::IsTextureParam(); // 844
		}
		CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Count(); // 837
	}
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Count(); // 135
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::IsEmpty(); // 825
	CUtlMemory<CMaterialParam, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator[](
			int i);  // 834
	CUtlSymbolLarge::String(); // 28
	CMaterialParam::GetString(); // 834
	{
		const uint32  m; // 101
		uint32 h; // 102
		uint32 k; // 103
		const int  r; // 104
	}
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 835
} /* size: 0, variables: 2, inline expansions: 8 (78 bytes) */

// <00189111> materialsystem2/material2.cpp:864
// variables: 15
// function calls: 101
void CMaterial2::AddShaderAttributesToMaterialAttributes(const CUtlVector<CVfxShaderAttribute, CUtlMemory<CVfxShaderAttribute, int> >& attributes, const CMaterialLayer* pLayer, const CVfxPerLayerProgramData* pPerLayerProgramData, const CVfxProgramData& programData)
{
	CVfxExpressionEvalContext ctx; // 867
	int nMode; // 871
	const char   __FUNCTION__; // 63564
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 878
	}
	{
		int i; // 880
		{
			bool bSuccess; // 884
			Vector4D vResult; // 888
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 885
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 891
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 913
			}
			CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::Count(); // 884
			CUtlMemory<CVfxVariableDescription, int>::Base(); // 113
			CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::Base(); // 884
			CVfxShaderAttribute::GetExpressionBuffer(); // 884
			ThreadInterlockedIncrement(volatile int32* p); // 576
			CInterlockedIntT<int, 4>::operator++(); // 582
			CInterlockedIntT<int, 4>::operator++(
					int);  // 251
			RecordVfxEval(void); // 887
			Vector4D::Vector4D(
				vec_t X,
				vec_t Y,
				vec_t Z,
				vec_t W);  // 888
			CUtlMemory<CVfxShaderAttribute, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CVfxShaderAttribute, CUtlMemory<CVfxShaderAttribute, int> >::operator[](
					int i);  // 889
			CVfxShaderAttribute::GetExpressionBufferSize(); // 889
			CVfxShaderAttribute::GetExpressionBuffer(); // 889
			CUtlMemory<CVfxShaderAttribute, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CVfxShaderAttribute, CUtlMemory<CVfxShaderAttribute, int> >::operator[](
					int i);  // 892
			CVfxShaderAttribute::GetType(); // 892
			Vector4D::Vector4D(
				const Vector4D& vOther);  // 909
			Vector4D::Vector4D(
				const Vector4D& vOther);  // 277
			Vector4D::Vector4D(
				const Vector4D& vOther);  // 571
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetValue(
				const CUtlStringToken& nTok,
				Vector4D nValue);  // 277
			CRenderAttributes::SetVector4DValue(
					CUtlStringToken nTokenID,
					Vector4D vValue);  // 909
			Vector4D::Vector4D(
				vec_t X,
				vec_t Y,
				vec_t Z,
				vec_t W);  // 148
			Vector4D::Vector4D(
				const Vector4D& vOther);  // 571
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetValue(
				const CUtlStringToken& nTok,
				Vector4D nValue);  // 148
			CRenderAttributes::SetFloatValue(
					CUtlStringToken nTokenID,
					float flValue);  // 903
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
				const CUtlStringToken& nTok,
				IntVector4D nValue);  // 456
			CRenderAttributes::SetIntValue(
					CUtlStringToken nTokenID,
					int nValue);  // 895
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
				const CUtlStringToken& nTok,
				IntVector4D nValue);  // 456
			CRenderAttributes::SetIntValue(
					CUtlStringToken nTokenID,
					int nValue);  // 899
		}
		{
			Vector2D tmp; // 931
			Vector2D::Vector2D(
				vec_t X,
				vec_t Y);  // 733
			CVfxShaderAttribute::GetFloat2Value(); // 931
			Vector4D::Vector4D(
				vec_t X,
				vec_t Y,
				vec_t Z,
				vec_t W);  // 932
			Vector4D::Vector4D(
				const Vector4D& vOther);  // 571
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetValue(
				const CUtlStringToken& nTok,
				Vector4D nValue);  // 277
			Vector4D::Vector4D(
				const Vector4D& vOther);  // 277
			CRenderAttributes::SetVector4DValue(
					CUtlStringToken nTokenID,
					Vector4D vValue);  // 932
		}
		{
			Vector tmp; // 937
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 734
			CVfxShaderAttribute::GetFloat3Value(); // 937
			Vector4D::Vector4D(
				const Vector4D& vOther);  // 571
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetValue(
				const CUtlStringToken& nTok,
				Vector4D nValue);  // 277
			Vector4D::Vector4D(
				const Vector4D& vOther);  // 277
			CRenderAttributes::SetVector4DValue(
					CUtlStringToken nTokenID,
					Vector4D vValue);  // 938
			Vector4D::Vector4D(
				vec_t X,
				vec_t Y,
				vec_t Z,
				vec_t W);  // 938
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 946
		}
		{
			int nParamIdx; // 952
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 957
			}
			AlignedByteArrayExplicit_t<6, short int, 2>::Base(); // 74
			CUtlLeanVectorFixedGrowableBase<short int, 6, short int>::Base(); // 452
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<short int, 6, short int>, short int, short int>::Element(
				int i);  // 442
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<short int, 6, short int>, short int, short int>::operator[](
					int i);  // 952
			CVfxShaderAttribute::GetType(); // 957
			CUtlMemory<CMaterialParam, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator[](
					int i);  // 958
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
			CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 137
			CVfxParam::GetTextureHandle(); // 958
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
					int32 nSingleMipLevelToBind);  // 958
			CUtlMemory<CVfxShaderAttribute, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CVfxShaderAttribute, CUtlMemory<CVfxShaderAttribute, int> >::operator[](
					int i);  // 958
		}
		CUtlVectorBase<CVfxShaderAttribute, CUtlMemory<CVfxShaderAttribute, int> >::Count(); // 880
		CVfxShaderAttribute::GetType(); // 920
		CVfxShaderAttribute::GetIntValue(); // 924
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
			const CUtlStringToken& nTok,
			IntVector4D nValue);  // 456
		CRenderAttributes::SetIntValue(
				CUtlStringToken nTokenID,
				int nValue);  // 924
		Vector4D::Vector4D(
			vec_t X,
			vec_t Y,
			vec_t Z,
			vec_t W);  // 735
		CVfxShaderAttribute::GetFloat4Value(); // 942
		Vector4D::Vector4D(
			const Vector4D& vOther);  // 277
		Vector4D::Vector4D(
			const Vector4D& vOther);  // 571
		CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetValue(
			const CUtlStringToken& nTok,
			Vector4D nValue);  // 277
		CRenderAttributes::SetVector4DValue(
				CUtlStringToken nTokenID,
				Vector4D vValue);  // 942
		CVfxShaderAttribute::GetFloatValue(); // 927
		Vector4D::Vector4D(
			vec_t X,
			vec_t Y,
			vec_t Z,
			vec_t W);  // 148
		Vector4D::Vector4D(
			const Vector4D& vOther);  // 571
		CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetValue(
			const CUtlStringToken& nTok,
			Vector4D nValue);  // 148
		CRenderAttributes::SetFloatValue(
				CUtlStringToken nTokenID,
				float flValue);  // 927
		CUtlMemory<CVfxShaderAttribute, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CVfxShaderAttribute, CUtlMemory<CVfxShaderAttribute, int> >::operator[](
				int i);  // 882
		CVfxShaderAttribute::HasExpression(); // 882
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 124
	CVfxExpressionEvalContext::CVfxExpressionEvalContext(); // 867
	CUtlMemory<CMaterialParam, int>::Base(); // 112
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Base(); // 592
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Count(); // 593
	CMaterialLayer::InitEvalContext(
			CVfxExpressionEvalContext& ctx);  // 868
	AlignedByteArrayExplicit_t<6, short int, 2>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<short int, 6, short int>::Base(); // 600
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<short int, 6, short int>, short int, short int>::Count(); // 601
	CMaterialLayer::InitEvalContextPerProgramData(
					CVfxExpressionEvalContext& ctx,
					const CVfxPerLayerProgramData* pPerLayerProgramData);  // 869
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::Count(); // 872
	AlignedByteArrayExplicit_t<6, CMaterialMode, 8>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 447
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::Element(
		int i);  // 438
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::operator[](
			int i);  // 874
} /* size: 0, variables: 3, inline expansions: 16 (351 bytes) */

// <00185C6B> materialsystem2/material2.cpp:963
// variables: 36
// function calls: 224
void CMaterial2::LoadShadersAndSetupModes(HMaterial hMyHandle, ShaderLoadMode_t loadMode)
{
	CToolsStallMonitorScope stall_monitor_scope_check_object; // 965
	const char   __FUNCTION__; // 63189
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 979
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 987
	}
	{
		int i; // 1004
		CUtlVectorBase<CMaterialSystem2::ModeInfo_t, CUtlMemory<CMaterialSystem2::ModeInfo_t, int> >::Count(); // 144
		CMaterialSystem2::GetNumModes(); // 1004
		AlignedByteArrayExplicit_t<6, CMaterialMode, 8>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 447
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::Element(
			int i);  // 438
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::operator[](
				int i);  // 1006
	}
	{
		CMaterialParam* pParam; // 1017
		const char* pShaderName; // 1018
		const bool  bIsRawMaterial; // 1028
		{
			int i; // 1034
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Count(); // 1034
			CUtlMemory<CMaterialParam, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator[](
					int i);  // 1036
			CMaterialParam::IsDefaultValue(); // 1036
			CVfxParam::FreeBufferData(); // 33
			CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 34
			CVfxParam::~CVfxParam(); // 16
			CMaterialParam::~CMaterialParam(); // 1526
			Destruct<CMaterialParam>(CMaterialParam* pMemory); // 1575
			{
				const bool  bNotLast; // 1578
				CUtlMemory<CMaterialParam, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Element(
					int i);  // 1584
				CUtlMemory<CMaterialParam, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Element(
					int i);  // 1584
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 1584
			}
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::FastRemove(
					int elem);  // 1038
		}
		{
			int nMode; // 1046
			{
				CMaterialMode* pMaterialMode; // 1048
				CMaterialLayer* pLayer; // 1051
				const char* pModeString; // 1080
				bool bIsErrorShader; // 1081
				bool bIsModeSupported; // 1082
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1052
				}
				{
					int nOuterModeIter; // 1084
					{
						CVfxMode* pOuterVFXMode; // 1086
						CUtlMemory<CVfxMode, int>::operator[](
								int i);  // 588
						CUtlVectorBase<CVfxMode, CUtlMemory<CVfxMode, int> >::operator[](
								int i);  // 1086
						V_strlen(const char* str); // 1092
					}
					CUtlVectorBase<CVfxMode, CUtlMemory<CVfxMode, int> >::Count(); // 1084
				}
				{
					int nProgram; // 1112
					{
						const CVfxProgramData& program; // 1117
						{
							const CVfxVariableDescription& variable; // 1118
							const CUtlVector<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >& __for_range; // 54762
							const_iterator __for_begin; // 51352
							const_iterator __for_end; // 51352
							ResourceManifestCreationInfo_t::ResourceManifestCreationInfo_t(
											int nCount,
											const char ** ppResourceFiles,
											ResourceManifestType_t nType,
											ResourceManifestLoadBehavior_t nLoadBehavior,
											const char* pDebugName,
											ResourceManifestLoadPriority_t nPriority);  // 810
							CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
							CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
										ResourceHandle_t hUntypedResource);  // 227
							FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
							StaticInvalidHandle(void); // 798
							CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
							FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
							StaticInvalidHandle(void); // 703
							CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
							FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 705
							IResourceSystem::FindOrRegisterResourceByName<2019914870>(
												const CResourceName& resourceName,
												bool bWarnIfNotLoaded);  // 804
							CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
								const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
							CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
									const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 804
							CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
							CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
										ResourceHandle_t hUntypedResource);  // 227
							FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
							StaticInvalidHandle(void); // 703
							CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
							CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
										ResourceHandle_t hUntypedResource);  // 227
							FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 705
							IResourceSystem::FindOrRegisterResourceByName<2019914870>(
												const CResourceName& resourceName,
												bool bWarnIfNotLoaded);  // 812
							CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
								const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
							CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
									const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 812
							ResourceIsError(ResourceHandle_t hResource); // 805
							BlockingSingleThreadedLoadResource<2019914870>(const CResourceName& resourceName,
													const char* pDebugName);  // 1121
							CUtlMemory<CVfxVariableDescription, int>::Base(); // 113
							CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::Base(); // 103
							CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::begin(); // 1118
							CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::Count(); // 105
							CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::end(); // 1118
							{
								int i; // 537
								CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Count(); // 537
								CUtlMemory<CMaterialParam, int>::operator[](
										int i);  // 595
								CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator[](
										int i);  // 539
								CUtlSymbolLarge::String(); // 25
								CMaterialParam::GetName(); // 539
							}
							CMaterial2::FindParamIndex(
									const char* name);  // 480
							CUtlMemory<CMaterialParam, int>::NumAllocated(); // 1143
							CUtlMemory<CMaterialParam, int>::operator[](
									int i);  // 602
							CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Element(
								int i);  // 1148
							CUtlSymbolLarge::CUtlSymbolLarge(); // 19
							CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
							FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
							StaticInvalidHandle(void); // 19
							CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 476
							CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
								ResourceHandleTyped_t hResource);  // 476
							CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(
									const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 19
							CUtlStringToken::CUtlStringToken(); // 19
							CVfxParam::CVfxParam(); // 19
							CUtlSymbolLarge::CUtlSymbolLarge(); // 19
							CUtlSymbolLarge::CUtlSymbolLarge(
									UtlSymLargeId_t id);  // 21
							CUtlSymbolLarge::operator=(
									const CUtlSymbolLarge& src);  // 21
							CUtlSymbolLarge::CUtlSymbolLarge(
									UtlSymLargeId_t id);  // 22
							CUtlSymbolLarge::operator=(
									const CUtlSymbolLarge& src);  // 22
							CMaterialParam::CMaterialParam(); // 1479
							Construct<CMaterialParam>(CMaterialParam* pMemory); // 1148
							CUtlMemory<CMaterialParam, int>::Base(); // 112
							CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Base(); // 368
							CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::ResetDbgInfo(); // 824
							CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::GrowMemory(
									int num);  // 1145
							CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::AddToTail(); // 483
							CUtlMemory<CMaterialParam, int>::operator[](
									int i);  // 588
							CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator[](
									int i);  // 484
							CMaterial2::FindOrAddParam(
									const char* name);  // 478
							CMaterial2::FindOrAddParam(
									const char* name);  // 511
							CUtlMemory<CMaterialParam, int>::operator[](
									int i);  // 588
							CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator[](
									int i);  // 512
							CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
									const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 176
							CVfxParam::SetTextureHandle(
									HRenderTexture hTex);  // 512
							CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
								const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
							CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
									const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 512
							CUtlMemory<CMaterialParam, int>::operator[](
									int i);  // 588
							CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator[](
									int i);  // 513
							CMaterialParam::SetIsDefaultValue(
										bool bIsDefaultValue);  // 513
							CMaterial2::Set(
								const char* name,
								HRenderTexture value);  // 1121
							CBufferString::~CBufferString(); // 587
							CBufferStringN<200>::~CBufferStringN(); // 318
							CResourceName::~CResourceName(); // 1121
							{
								int i; // 537
								CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Count(); // 537
								CUtlMemory<CMaterialParam, int>::operator[](
										int i);  // 595
								CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator[](
										int i);  // 539
								CUtlSymbolLarge::String(); // 25
								CMaterialParam::GetName(); // 539
							}
							CMaterial2::FindParamIndex(
									const char* name);  // 480
							CUtlMemory<CMaterialParam, int>::NumAllocated(); // 1143
							CUtlMemory<CMaterialParam, int>::operator[](
									int i);  // 602
							CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Element(
								int i);  // 1148
							CUtlSymbolLarge::CUtlSymbolLarge(); // 19
							CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
							FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
							StaticInvalidHandle(void); // 19
							CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 476
							CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
								ResourceHandleTyped_t hResource);  // 476
							CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(
									const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 19
							CUtlStringToken::CUtlStringToken(); // 19
							CVfxParam::CVfxParam(); // 19
							CUtlSymbolLarge::CUtlSymbolLarge(); // 19
							CUtlSymbolLarge::CUtlSymbolLarge(
									UtlSymLargeId_t id);  // 21
							CUtlSymbolLarge::operator=(
									const CUtlSymbolLarge& src);  // 21
							CUtlSymbolLarge::CUtlSymbolLarge(
									UtlSymLargeId_t id);  // 22
							CUtlSymbolLarge::operator=(
									const CUtlSymbolLarge& src);  // 22
							CMaterialParam::CMaterialParam(); // 1479
							Construct<CMaterialParam>(CMaterialParam* pMemory); // 1148
							CUtlMemory<CMaterialParam, int>::Base(); // 112
							CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Base(); // 368
							CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::ResetDbgInfo(); // 824
							CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::GrowMemory(
									int num);  // 1145
							CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::AddToTail(); // 483
							CUtlMemory<CMaterialParam, int>::operator[](
									int i);  // 588
							CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator[](
									int i);  // 484
							CMaterial2::FindOrAddParam(
									const char* name);  // 478
							CMaterial2::FindOrAddParam(
									const char* name);  // 497
							CUtlMemory<CMaterialParam, int>::operator[](
									int i);  // 588
							CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator[](
									int i);  // 498
							memcpy(void* __dest,
								const void* __src,
								size_t __len);  // 126
							CVfxParam::SetVec(
								const float* pVec);  // 498
							CUtlMemory<CMaterialParam, int>::operator[](
									int i);  // 588
							CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator[](
									int i);  // 499
							CMaterialParam::SetIsDefaultValue(
										bool bIsDefaultValue);  // 499
							CMaterial2::Set(
								const char* name,
								float* value);  // 1123
						}
						CVfx::HasShaderProgram(
								VfxProgram_t programType);  // 1115
					}
				}
				AlignedByteArrayExplicit_t<6, CMaterialMode, 8>::Base(); // 74
				CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 64
				CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 447
				CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::Element(
					int i);  // 438
				CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::operator[](
						int i);  // 1048
				CUtlSymbol::IsValid(); // 285
				CMaterial2::GetName(); // 1062
				CUtlVectorBase<CMaterialSystem2::ModeInfo_t, CUtlMemory<CMaterialSystem2::ModeInfo_t, int> >::Count(); // 145
				CUtlMemory<CMaterialSystem2::ModeInfo_t, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CMaterialSystem2::ModeInfo_t, CUtlMemory<CMaterialSystem2::ModeInfo_t, int> >::operator[](
						int i);  // 145
				CUtlString::Get(); // 145
				CMaterialSystem2::GetModeString(
						int nMode);  // 1080
				CBufferString::IsEmpty(); // 1280
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 776
				CBufferString::String(); // 1280
				CVfx::GetFilename(); // 1081
				CUtlSymbol::IsValid(); // 285
				CMaterial2::GetName(); // 1073
			}
			CUtlVectorBase<CMaterialSystem2::ModeInfo_t, CUtlMemory<CMaterialSystem2::ModeInfo_t, int> >::Count(); // 144
			CMaterialSystem2::GetNumModes(); // 1046
		}
		{
			CMaterialParam& param; // 1491
			CUtlVector<CMaterialParam, CUtlMemory<CMaterialParam, int> >& __for_range; // 17848
			iterator __for_begin; // 17858
			iterator __for_end; // 17868
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Count(); // 104
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::end(); // 1491
			CUtlMemory<CMaterialParam, int>::Base(); // 112
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Base(); // 102
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::begin(); // 1491
			CUtlSymbolLarge::String(); // 25
			CMaterialParam::GetName(); // 1493
		}
		CMaterial2::FindParamByName(
				const char* pString);  // 1017
		CUtlSymbolLarge::String(); // 28
		CMaterialParam::GetString(); // 1025
		{
			CMaterialParam& param; // 1491
			CUtlVector<CMaterialParam, CUtlMemory<CMaterialParam, int> >& __for_range; // 17848
			iterator __for_begin; // 17858
			iterator __for_end; // 17868
			CUtlMemory<CMaterialParam, int>::Base(); // 112
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Base(); // 102
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::begin(); // 1491
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Count(); // 104
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::end(); // 1491
			CUtlSymbolLarge::String(); // 25
			CMaterialParam::GetName(); // 1493
		}
		CMaterial2::FindParamByName(
				const char* pString);  // 1028
		CUtlSymbol::IsValid(); // 285
		CMaterial2::GetName(); // 1021
	}
	CToolsStallMonitorScope::CToolsStallMonitorScope(
				const char* pScopeName,
				bool bDisableDetection,
				uint32 nStallThresholdMS);  // 965
	CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
		const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 331
	CWeakHandle<InfoForResourceTypeIMaterial2>::operator=(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 967
	CMaterialSystem2::IsHeadlessModeEnabled(); // 977
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Count(); // 993
	AlignedByteArrayExplicit_t<6, CMaterialMode, 8>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 183
	CMaterialMode::~CMaterialMode(); // 1526
	Destruct<CMaterialMode>(CMaterialMode* pMemory); // 76
	UtlTraitsDestructRange<CMaterialMode>(CMaterialMode* pStart,
						CMaterialMode* pEnd);  // 184
	CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::RemoveAll(); // 191
	CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 194
	CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Purge(); // 1002
	CUtlVectorBase<CMaterialSystem2::ModeInfo_t, CUtlMemory<CMaterialSystem2::ModeInfo_t, int> >::Count(); // 144
	CMaterialSystem2::GetNumModes(); // 1003
	AlignedByteArrayExplicit_t<6, CMaterialMode, 8>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 518
	CMaterialMode::~CMaterialMode(); // 1526
	Destruct<CMaterialMode>(CMaterialMode* pMemory); // 76
	UtlTraitsDestructRange<CMaterialMode>(CMaterialMode* pStart,
						CMaterialMode* pEnd);  // 527
	IMaterialMode::IMaterialMode(); // 1734
	{
		int b; // 1736
	}
	CMaterialMode::CMaterialMode(); // 1479
	Construct<CMaterialMode>(CMaterialMode* pMemory); // 63
	UtlTraitsConstructRange<CMaterialMode>(CMaterialMode* pStart,
						CMaterialMode* pEnd);  // 523
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::SetCount(
		int nCount);  // 1003
	CUtlSymbol::IsValid(); // 285
	CMaterial2::GetName(); // 995
	CToolsStallMonitorScope::~CToolsStallMonitorScope(); // 1132
	CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
		const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 1131
	CToolsStallMonitorScope::~CToolsStallMonitorScope(); // 1132
	CUtlSymbol::IsValid(); // 285
	CMaterial2::GetName(); // 990
} /* size: 0, variables: 2, inline expansions: 36 (1901 bytes) */

// <001854D2> materialsystem2/material2.cpp:1137
// variables: 4
// function calls: 27
void CMaterial2::ComputeAndLoadStaticCombos(HMaterial hMyHandle, ShaderLoadMode_t loadMode)
{
	CUtlLeanVector<MaterialStaticComboLoadRequest_t, short int> staticComboLoadRequests; // 1139
	{
		int nMode; // 1142
		{
			CMaterialMode* pMaterialMode; // 1144
			CMaterialLayer* pLayer; // 1145
			AlignedByteArrayExplicit_t<6, CMaterialMode, 8>::Base(); // 74
			CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 64
			CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 447
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::Element(
				int i);  // 438
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::operator[](
					int i);  // 1144
			CUtlSymbol::IsValid(); // 285
			CMaterial2::GetName(); // 1154
			CUtlSymbol::IsValid(); // 285
			CMaterial2::GetName(); // 1160
		}
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::Count(); // 1142
	}
	CUtlLeanVectorBase<MaterialStaticComboLoadRequest_t, short int>::CUtlLeanVectorBase(); // 411
	CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorBase<MaterialStaticComboLoadRequest_t, short int>, MaterialStaticComboLoadRequest_ this); // 832
	CUtlLeanVector<MaterialStaticComboLoadRequest_t, short int>::CUtlLeanVector(); // 1139
	CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
		const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 1176
	CUtlLeanVectorBase<MaterialStaticComboLoadRequest_t, short int>::Base(); // 279
	CUtlLeanVectorBase<MaterialStaticComboLoadRequest_t, short int>::Base(); // 363
	CUtlString::~CUtlString(); // 993
	VfxStaticComboLoadRequest_t::~VfxStaticComboLoadRequest_t(); // 194
	MaterialStaticComboLoadRequest_t::~MaterialStaticComboLoadRequest_t(); // 1526
	Destruct<MaterialStaticComboLoadRequest_t>(MaterialStaticComboLoadRequest_t* pMemory); // 76
	UtlTraitsDestructRange<MaterialStaticComboLoadRequest_t>(MaterialStaticComboLoadRequest_t* pStart,
								MaterialStaticComboLoadRequest_t* pEnd);  // 364
	CUtlLeanVectorBase<MaterialStaticComboLoadRequest_t, short int>::RemoveAll(); // 371
	CUtlLeanVectorBase<MaterialStaticComboLoadRequest_t, short int>::Purge(); // 270
	CUtlLeanVectorBase<MaterialStaticComboLoadRequest_t, short int>::~CUtlLeanVectorBase(); // 399
	~CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorBase<MaterialStaticComboLoadRequest_t, short int>, MaterialStaticComboLoadRequest_ this); // 829
	CUtlLeanVector<MaterialStaticComboLoadRequest_t, short int>::~CUtlLeanVector(); // 1177
} /* size: 866, variables: 1, inline expansions: 17 (944 bytes) */

// <001853DF> materialsystem2/material2.cpp:1182
void AsyncStaticComboResult_t::AsyncStaticComboResult_t(shared_ptr<CVfxStaticComboData::DecompressedComboData_t> pComboData)
{
} /* size: 0 */

// <001853B9> materialsystem2/material2.cpp:1182
inline void AsyncStaticComboResult_t::AsyncStaticComboResult_t(shared_ptr<CVfxStaticComboData::DecompressedComboData_t> pComboData)
{
} /* size: 0 */

// <001850F7> materialsystem2/material2.cpp:1184
// variables: 8
// function calls: 10
void AsyncStaticComboResult_t::~AsyncStaticComboResult_t()
{
	{
		const int  __wordbits; // 330
		const int  __shiftbits; // 331
		const long long int  __unique_ref; // 332
		long long int* __both_counts; // 333
		__is_single_threaded(void); // 100
		__exchange_and_add_single(_Atomic_word* __mem,
						int __val);  // 101
		__exchange_and_add(volatile _Atomic_word* __mem,
					int __val);  // 103
		__exchange_and_add_dispatch(_Atomic_word* __mem,
						int __val);  // 349
	}
	{
		const int  __wordbits; // 330
		const int  __shiftbits; // 331
		const long long int  __unique_ref; // 332
		long long int* __both_counts; // 333
		_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_destroy()2>* this); // 346
	}
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 316
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 1069
	__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count()2>* this); // 1531
	__shared_ptr<CVfxStaticComboData::DecompressedComboData_t, (__gnu_cxx::_Lock_policy)2>::~__shared_ptr()2>* this); // 175
	shared_ptr<CVfxStaticComboData::DecompressedComboData_t>::~shared_ptr(); // 1185
} /* size: 205, inline expansions: 5 (806 bytes) */

// <00184DB7> materialsystem2/material2.cpp:1184
// variables: 8
// function calls: 12
void AsyncStaticComboResult_t::~AsyncStaticComboResult_t()
{
	{
		const int  __wordbits; // 330
		const int  __shiftbits; // 331
		const long long int  __unique_ref; // 332
		long long int* __both_counts; // 333
		__is_single_threaded(void); // 100
		__exchange_and_add_single(_Atomic_word* __mem,
						int __val);  // 101
		__exchange_and_add(volatile _Atomic_word* __mem,
					int __val);  // 103
		__exchange_and_add_dispatch(_Atomic_word* __mem,
						int __val);  // 349
	}
	{
		const int  __wordbits; // 330
		const int  __shiftbits; // 331
		const long long int  __unique_ref; // 332
		long long int* __both_counts; // 333
		_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_destroy()2>* this); // 346
	}
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 316
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 1069
	__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count()2>* this); // 1531
	__shared_ptr<CVfxStaticComboData::DecompressedComboData_t, (__gnu_cxx::_Lock_policy)2>::~__shared_ptr()2>* this); // 175
	shared_ptr<CVfxStaticComboData::DecompressedComboData_t>::~shared_ptr(); // 1185
	IAsyncProcessedDataResult::~IAsyncProcessedDataResult(); // 1185
	AsyncStaticComboResult_t::~AsyncStaticComboResult_t(); // 1185
} /* size: 247, inline expansions: 7 (1021 bytes) */

// <00184D9E> materialsystem2/material2.cpp:1184
inline void AsyncStaticComboResult_t::~AsyncStaticComboResult_t()
{
} /* size: 0 */

// <0018457F> materialsystem2/material2.cpp:1190
// variables: 9
// function calls: 37
void CMaterial2::AsyncProcessStaticComboFileData(IAsyncResourceDataRequest* pRequest, VfxProgram_t programType)
{
	CUtlBuffer buf; // 1192
	IAsyncProcessedDataResult::IAsyncProcessedDataResult(); // 1182
	__is_single_threaded(void); // 110
	__atomic_add_single(_Atomic_word* __mem,
				int __val);  // 111
	__atomic_add(volatile _Atomic_word* __mem,
			int __val);  // 113
	__atomic_add_dispatch(_Atomic_word* __mem,
				int __val);  // 151
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_add_ref_copy()2>* this); // 1076
	__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count(
			const __shared_count<(__gnu_cxx::_Lock_policy)2>& __r); // 1529
	__shared_ptr<CVfxStaticComboData::DecompressedComboData_t, (__gnu_cxx::_Lock_policy)2>::__shared_ptr(
			const __shared_ptr<CVfxStaticComboData::DecompressedComboData_t, (__gnu_cxx::_Lock_policy)2> &); // 203
	shared_ptr<CVfxStaticComboData::DecompressedComboData_t>::shared_ptr(
			const shared_ptr<CVfxStaticComboData::DecompressedComboData_t>  &);  // 1182
	AsyncStaticComboResult_t::AsyncStaticComboResult_t(
				shared_ptr<CVfxStaticComboData::DecompressedComboData_t> pComboData);  // 1194
	{
		const int  __wordbits; // 330
		const int  __shiftbits; // 331
		const long long int  __unique_ref; // 332
		long long int* __both_counts; // 333
		__is_single_threaded(void); // 100
		__exchange_and_add_single(_Atomic_word* __mem,
						int __val);  // 101
		__exchange_and_add(volatile _Atomic_word* __mem,
					int __val);  // 103
		__exchange_and_add_dispatch(_Atomic_word* __mem,
						int __val);  // 349
	}
	{
		const int  __wordbits; // 330
		const int  __shiftbits; // 331
		const long long int  __unique_ref; // 332
		long long int* __both_counts; // 333
		_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_destroy()2>* this); // 346
	}
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 316
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 1069
	__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count()2>* this); // 1531
	__shared_ptr<CVfxStaticComboData::DecompressedComboData_t, (__gnu_cxx::_Lock_policy)2>::~__shared_ptr()2>* this); // 175
	shared_ptr<CVfxStaticComboData::DecompressedComboData_t>::~shared_ptr(); // 1194
	_Head_base<1, std::default_delete<IAsyncProcessedDataResult>, true>::_Head_base(); // 561
	_Tuple_impl<1, std::default_delete<IAsyncProcessedDataResult> >::_Tuple_impl(); // 303
	_Head_base<0, IAsyncProcessedDataResult::_Head_base(); // 303
	_Tuple_impl<0, IAsyncProcessedDataResult::_Tuple_impl(); // 966
	tuple<IAsyncProcessedDataResult::tuple(); // 169
	__uniq_ptr_impl<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::_M_ptr(); // 169
	__uniq_ptr_impl<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::__uniq_ptr_impl(
			pointer __p);  // 234
	__uniq_ptr_data<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult>, true, true>::__uniq_ptr_data(
			pointer);  // 311
	unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::unique_ptr<>(
			pointer __p);  // 1195
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 1196
} /* size: 490, variables: 1, inline expansions: 30 (1355 bytes) */

// <0018277C> materialsystem2/material2.cpp:1199
// variables: 31
// function calls: 105
void CMaterial2::IssueAsyncLoadRequests(CUtlLeanVector<MaterialStaticComboLoadRequest_t, short int>& staticComboLoadRequests, HMaterial hMyHandle, ShaderLoadMode_t loadMode)
{
	bool bSubmittedAsyncLoads; // 1207
	const char   __FUNCTION__; // 63135
	{
		int i; // 1208
		{
			const MaterialStaticComboLoadRequest_t& lr; // 1210
			StaticComboVcsLoad_t* pVcsLoad; // 1219
			{
				IAsyncResourceDataRequest* pAsyncRequest; // 1257
				const VfxProgram_t  programType; // 1258
				{
					MaterialStaticComboLoadRequest_t& request; // 1245
					CUtlLeanVector<MaterialStaticComboLoadRequest_t, short int>& __for_range; // 59568
					iterator __for_begin; // 57520
					iterator __for_end; // 57520
					CUtlLeanVectorBase<MaterialStaticComboLoadRequest_t, short int>::Base(); // 279
					CUtlLeanVectorBase<MaterialStaticComboLoadRequest_t, short int>::Base(); // 415
					begin(const CUtlLeanVectorImpl<CUtlLeanVectorBase<MaterialStaticComboLoadRequest_t, short int>, MaterialStaticComboLoadRequest_ this); // 1245
					Count(const CUtlLeanVectorImpl<CUtlLeanVectorBase<MaterialStaticComboLoadRequest_t, short int>, MaterialStaticComboLoadRe this); // 417
					end(const CUtlLeanVectorImpl<CUtlLeanVectorBase<MaterialStaticComboLoadRequest_t, short int>, MaterialStaticComboLoadRequest_ this); // 1245
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1250
				}
				CUtlString::Get(); // 441
				CUtlString::operator char const*(); // 1257
				CWeakHandle<InfoForResourceTypeIMaterial2>::operator ResourceHandle_t(); // 1257
				{
					_M_not_empty_function<CMaterial2::IssueAsyncLoadRequests(CUtlLeanVector<MaterialStaticComboLoadRequest_t>&, HMaterial, ShaderLoadMode_t)::<lambda(IAsyncResourceDataRequest*)> >(const &); // 449
					_M_create<CMaterial2::IssueAsyncLoadRequests(CUtlLeanVector<MaterialStaticComboLoadRequest_t>&, HMaterial, ShaderLoadMode_t)::<lambda(IAsyncResourceDataRequest*)> >(union _Any_data& __dest,
																class& __f,
																true_type); // 217
					_M_init_functor<CMaterial2::IssueAsyncLoadRequests(CUtlLeanVector<MaterialStaticComboLoadRequest_t>&, HMaterial, ShaderLoadMode_t)::<lambda(IAsyncResourceDataRequest*)> >(union _Any_data& __functor,
																class& __f); // 451
				}
				_Function_base::_Function_base(); // 439
				function<CMaterial2::IssueAsyncLoadRequests(CUtlLeanVector<MaterialStaticComboLoadRequest_t>&, HMaterial, ShaderLoadMode_t)::<lambda(IAsyncResourceDataRequest*)> >(const function<std::unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >(IAsyncResource this,
																class& __f); // 1260
				_Function_base::~_Function_base(); // 336
				~function(const function<std::unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >(IAsyncResource this); // 1260
				{
					_M_not_empty_function<CMaterial2::IssueAsyncLoadRequests(CUtlLeanVector<MaterialStaticComboLoadRequest_t>&, HMaterial, ShaderLoadMode_t)::<lambda(IAsyncResourceDataRequest*, std::unique_ptr<IAsyncProcessedDataResult>)> >(const &); // 449
					_M_create<CMaterial2::IssueAsyncLoadRequests(CUtlLeanVector<MaterialStaticComboLoadRequest_t>&, HMaterial, ShaderLoadMode_t)::<lambda(IAsyncResourceDataRequest*, std::unique_ptr<IAsyncProcessedDataResult>)> >(union _Any_data& __dest,
																class& __f,
																true_type); // 217
					_M_init_functor<CMaterial2::IssueAsyncLoadRequests(CUtlLeanVector<MaterialStaticComboLoadRequest_t>&, HMaterial, ShaderLoadMode_t)::<lambda(IAsyncResourceDataRequest*, std::unique_ptr<IAsyncProcessedDataResult>)> >(union _Any_data& __functor,
																class& __f); // 451
				}
				_Function_base::_Function_base(); // 439
				function<void(IAsyncResourceDataRequest::function<CMaterial2::IssueAsyncLoadRequests(
																class& __f);  // 1263
				_Function_base::~_Function_base(); // 336
				function<void(IAsyncResourceDataRequest::~function(); // 1263
				CWeakHandle<InfoForResourceTypeIMaterial2>::operator ResourceHandle_t(); // 1253
				CMaterialTypeManager::MarkLoadingWorkPending(
							ResourceHandle_t hMaterial,
							bool bPending);  // 1253
			}
			{
				int nHeaderOffset; // 1302
				int nOffset; // 1303
				CUtlStreamBuffer buf; // 1305
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 776
				CBufferString::String(); // 1305
				{
					int* _pCrash; // 313
				}
				LeafCodeInfo_t::LeafCodeInfo_t(
						const char* szFile,
						int nLine,
						const char* szFunction);  // 313
				CUtlLeanVectorBase<CMaterial2::StaticComboVcsLoad_t::EnsureCapacity(
						int nCapacity,
						bool bConservative);  // 629
				CUtlLeanVectorBase<CMaterial2::StaticComboVcsLoad_t::Base(); // 279
				CUtlLeanVectorBase<CMaterial2::StaticComboVcsLoad_t::Base(); // 630
				CUtlLeanVectorImpl<CUtlLeanVectorBase<CMaterial2::StaticComboVcsLoad_t::AddToTailGetPtr(); // 638
				CUtlLeanVectorImpl<CUtlLeanVectorBase<CMaterial2::StaticComboVcsLoad_t::AddToTail(
						StaticComboVcsLoad_t* const& src);  // 1317
				IAsyncProcessedDataResult::IAsyncProcessedDataResult(); // 1182
				__is_single_threaded(void); // 110
				__atomic_add_single(_Atomic_word* __mem,
							int __val);  // 111
				__atomic_add(volatile _Atomic_word* __mem,
						int __val);  // 113
				__atomic_add_dispatch(_Atomic_word* __mem,
							int __val);  // 151
				_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_add_ref_copy()2>* this); // 1076
				__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count(
						const __shared_count<(__gnu_cxx::_Lock_policy)2>& __r); // 1529
				__shared_ptr<CVfxStaticComboData::DecompressedComboData_t, (__gnu_cxx::_Lock_policy)2>::__shared_ptr(
						const __shared_ptr<CVfxStaticComboData::DecompressedComboData_t, (__gnu_cxx::_Lock_policy)2> &); // 203
				shared_ptr<CVfxStaticComboData::DecompressedComboData_t>::shared_ptr(
						const shared_ptr<CVfxStaticComboData::DecompressedComboData_t>  &);  // 1182
				AsyncStaticComboResult_t::AsyncStaticComboResult_t(
							shared_ptr<CVfxStaticComboData::DecompressedComboData_t> pComboData);  // 1308
				default_delete<IAsyncProcessedDataResult>::operator(
						IAsyncProcessedDataResult* __ptr);  // 204
				__uniq_ptr_impl<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::reset(
					pointer __p);  // 511
				unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::reset(
					pointer __p);  // 1308
				{
					const int  __wordbits; // 330
					const int  __shiftbits; // 331
					const long long int  __unique_ref; // 332
					long long int* __both_counts; // 333
					__is_single_threaded(void); // 100
					__exchange_and_add_single(_Atomic_word* __mem,
									int __val);  // 101
					__exchange_and_add(volatile _Atomic_word* __mem,
								int __val);  // 103
					__exchange_and_add_dispatch(_Atomic_word* __mem,
									int __val);  // 349
				}
				{
					const int  __wordbits; // 330
					const int  __shiftbits; // 331
					const long long int  __unique_ref; // 332
					long long int* __both_counts; // 333
					_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_destroy()2>* this); // 346
				}
				_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 316
				_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 1069
				__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count()2>* this); // 1531
				__shared_ptr<CVfxStaticComboData::DecompressedComboData_t, (__gnu_cxx::_Lock_policy)2>::~__shared_ptr()2>* this); // 175
				shared_ptr<CVfxStaticComboData::DecompressedComboData_t>::~shared_ptr(); // 1308
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1322
			}
			LeafCodeInfo_t::LeafCodeInfo_t(
					const char* szFile,
					int nLine,
					const char* szFunction);  // 313
			CUtlLeanVectorBase<CMaterial2::StaticComboVcsLoad_t::EnsureCapacity(
					int nCapacity,
					bool bConservative);  // 629
			CUtlLeanVectorBase<CMaterial2::StaticComboVcsLoad_t::Base(); // 279
			CUtlLeanVectorBase<CMaterial2::StaticComboVcsLoad_t::Base(); // 630
			CUtlLeanVectorImpl<CUtlLeanVectorBase<CMaterial2::StaticComboVcsLoad_t::AddToTailGetPtr(); // 638
			CUtlLeanVectorImpl<CUtlLeanVectorBase<CMaterial2::StaticComboVcsLoad_t::AddToTail(
					StaticComboVcsLoad_t* const& src);  // 1233
			CUtlLeanVectorBase<MaterialStaticComboLoadRequest_t, short int>::Base(); // 279
			CUtlLeanVectorBase<MaterialStaticComboLoadRequest_t, short int>::Base(); // 447
			Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<MaterialStaticComboLoadRequest_t, short int>, MaterialStaticComboLoadRequest_ this,
				int i);  // 438
			operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<MaterialStaticComboLoadRequest_t, short int>, MaterialStaticComboLoadRequest_ this,
					int i);  // 1210
			CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 237
			CUtlLeanVectorBase<MaterialStaticComboLoadRequest_t, short int>::CUtlLeanVectorBase(); // 411
			CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorBase<MaterialStaticComboLoadRequest_t, short int>, MaterialStaticComboLoadRequest_ this); // 832
			CUtlLeanVector<MaterialStaticComboLoadRequest_t, short int>::CUtlLeanVector(); // 237
			_Head_base<1, std::default_delete<IAsyncProcessedDataResult>, true>::_Head_base(); // 561
			_Tuple_impl<1, std::default_delete<IAsyncProcessedDataResult> >::_Tuple_impl(); // 303
			_Head_base<0, IAsyncProcessedDataResult::_Head_base(); // 303
			_Tuple_impl<0, IAsyncProcessedDataResult::_Tuple_impl(); // 966
			tuple<IAsyncProcessedDataResult::tuple(); // 167
			__uniq_ptr_impl<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::__uniq_ptr_impl(); // 232
			__uniq_ptr_data<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult>, true, true>::__uniq_ptr_data(); // 298
			unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::unique_ptr<>(); // 237
			StaticComboVcsLoad_t::StaticComboVcsLoad_t(); // 1219
			CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
				const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 331
			CWeakHandle<InfoForResourceTypeIMaterial2>::operator=(
					const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 1220
			Count(const CUtlLeanVectorImpl<CUtlLeanVectorBase<MaterialStaticComboLoadRequest_t, short int>, MaterialStaticComboLoadRe this); // 1223
			CUtlLeanVectorBase<MaterialStaticComboLoadRequest_t, short int>::Base(); // 279
			CUtlLeanVectorBase<MaterialStaticComboLoadRequest_t, short int>::Base(); // 447
			Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<MaterialStaticComboLoadRequest_t, short int>, MaterialStaticComboLoadRequest_ this,
				int i);  // 438
			operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<MaterialStaticComboLoadRequest_t, short int>, MaterialStaticComboLoadRequest_ this,
					int i);  // 1224
			MaterialStaticComboLoadRequest_t::HasSameCombo(
					const MaterialStaticComboLoadRequest_t& rhs);  // 1224
		}
		Count(const CUtlLeanVectorImpl<CUtlLeanVectorBase<MaterialStaticComboLoadRequest_t, short int>, MaterialStaticComboLoadRe this); // 1208
	}
	CUtlLeanVectorBase<CMaterial2::StaticComboVcsLoad_t::RemoveAll(); // 1201
	CUtlLeanVectorBase<MaterialStaticComboLoadRequest_t, short int>::Base(); // 279
	CUtlLeanVectorBase<MaterialStaticComboLoadRequest_t, short int>::Base(); // 417
	Count(const CUtlLeanVectorImpl<CUtlLeanVectorBase<MaterialStaticComboLoadRequest_t, short int>, MaterialStaticComboLoadRe this); // 417
	end(const CUtlLeanVectorImpl<CUtlLeanVectorBase<MaterialStaticComboLoadRequest_t, short int>, MaterialStaticComboLoadRequest_ this); // 1204
	__countl_zero<long unsigned int>(long unsigned int __x); // 388
	__bit_width<long unsigned int>(long unsigned int __x); // 1555
	__lg<long int>(long int __n); // 1907
	{
		MaterialStaticComboLoadRequest_t* __i; // 1798
	}
	__unguarded_insertion_sort<MaterialStaticComboLoadRequest_t*, __gnu_cxx::__ops::_Iter_less_iter>(MaterialStaticComboLoadRequest_t* __first,
													MaterialStaticComboLoadRequest_t* __last,
													_Iter_less_iter __comp);  // 1819
	__final_insertion_sort<MaterialStaticComboLoadRequest_t*, __gnu_cxx::__ops::_Iter_less_iter>(MaterialStaticComboLoadRequest_t* __first,
													MaterialStaticComboLoadRequest_t* __last,
													_Iter_less_iter __comp);  // 1813
	__final_insertion_sort<MaterialStaticComboLoadRequest_t*, __gnu_cxx::__ops::_Iter_less_iter>(MaterialStaticComboLoadRequest_t* __first,
													MaterialStaticComboLoadRequest_t* __last,
													_Iter_less_iter __comp);  // 1909
	__sort<MaterialStaticComboLoadRequest_t*, __gnu_cxx::__ops::_Iter_less_iter>(MaterialStaticComboLoadRequest_t* __first,
											MaterialStaticComboLoadRequest_t* __last,
											_Iter_less_iter __comp);  // 4841
	sort<MaterialStaticComboLoadRequest_t*>(MaterialStaticComboLoadRequest_t* __first,
						MaterialStaticComboLoadRequest_t* __last);  // 1204
} /* size: 0, variables: 2, inline expansions: 13 (508 bytes) */

// <0018156D> materialsystem2/material2.cpp:1334
// variables: 17
// function calls: 67
void CMaterial2::OnStaticComboFileDataLoaded(StaticComboVcsLoad_t* pVcsLoad)
{
	const char   __FUNCTION__; // 63265
	const CScopeGuardLambdaImpl<CMaterial2::OnStaticComboFileDataLoaded(StaticComboVcsLoad_t*)::<lambda()> >& generated_id_1339; // 1339
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1336
	}
	{
		MaterialStaticComboLoadRequest_t& lr; // 1355
		CUtlLeanVector<MaterialStaticComboLoadRequest_t, short int>& __for_range; // 59568
		iterator __for_begin; // 57520
		iterator __for_end; // 57520
		{
			CVfxProgramData& programData; // 1359
			CVfxStaticComboData& staticComboData; // 1360
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1357
			}
			{
				CNullShaderCreateCallbacks nullCallbacks; // 1376
				CShaderCreateCallbacks realCallbacks; // 1377
				IRuntimeShaderCreateCallbacks* pShaderCreateCallbacks; // 1378
				AsyncStaticComboResult_t* pComboResult; // 1382
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1372
				}
				__uniq_ptr_impl<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::_M_ptr(); // 472
				unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::get(); // 489
				unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::operator bool(); // 854
				operator==<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >(const unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >& __x,
															nullptr_t);  // 1364
				CUtlMemory<long long unsigned int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::operator[](
						int i);  // 1368
				CUtlString::Get(); // 441
				CUtlString::operator char const*(); // 1371
				CMaterialSystem2::IsHeadlessModeEnabled(); // 1378
				IRuntimeShaderCreateCallbacks::~IRuntimeShaderCreateCallbacks(); // 8
				CShaderCreateCallbacks::~CShaderCreateCallbacks(); // 1384
				IRuntimeShaderCreateCallbacks::~IRuntimeShaderCreateCallbacks(); // 40
				CNullShaderCreateCallbacks::~CNullShaderCreateCallbacks(); // 1384
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1388
			}
			CUtlBlockMemory<CVfxStaticComboData, int>::MajorIndex(
					int i);  // 243
			CUtlBlockMemory<CVfxStaticComboData, int>::IsIdxValid(
					int i);  // 191
			CUtlBlockMemory<CVfxStaticComboData, int>::MajorIndex(
					int i);  // 192
			CUtlBlockMemory<CVfxStaticComboData, int>::MinorIndex(
					int i);  // 193
			{
			}
			CUtlBlockMemory<CVfxStaticComboData, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CVfxStaticComboData, CUtlBlockMemory<CVfxStaticComboData, int> >::operator[](
					int i);  // 1360
		}
		CUtlLeanVectorBase<MaterialStaticComboLoadRequest_t, short int>::Base(); // 279
		CUtlLeanVectorBase<MaterialStaticComboLoadRequest_t, short int>::Base(); // 415
		begin(const CUtlLeanVectorImpl<CUtlLeanVectorBase<MaterialStaticComboLoadRequest_t, short int>, MaterialStaticComboLoadRequest_ this); // 1355
		Count(const CUtlLeanVectorImpl<CUtlLeanVectorBase<MaterialStaticComboLoadRequest_t, short int>, MaterialStaticComboLoadRe this); // 417
		end(const CUtlLeanVectorImpl<CUtlLeanVectorBase<MaterialStaticComboLoadRequest_t, short int>, MaterialStaticComboLoadRequest_ this); // 1355
	}
	CScopeGuardLambdaImpl<CMaterial2::OnStaticComboFileDataLoaded(StaticComboVcsLoad_t::CScopeGuardLambdaImpl(
				class& lambda);  // 39
	MakeScopeGuardLambda<CMaterial2::OnStaticComboFileDataLoaded(StaticComboVcsLoad_t*)::<lambda()> >(class& lambda); // 1339
	{
		IAsyncProcessedDataResult *& __ptr; // 396
		__uniq_ptr_impl<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::_M_ptr(); // 396
		unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::get_deleter(); // 398
		default_delete<IAsyncProcessedDataResult>::operator(
				IAsyncProcessedDataResult* __ptr);  // 398
	}
	unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::~unique_ptr(); // 237
	CUtlLeanVectorBase<MaterialStaticComboLoadRequest_t, short int>::Base(); // 279
	CUtlLeanVectorBase<MaterialStaticComboLoadRequest_t, short int>::Base(); // 363
	CUtlString::~CUtlString(); // 993
	VfxStaticComboLoadRequest_t::~VfxStaticComboLoadRequest_t(); // 194
	MaterialStaticComboLoadRequest_t::~MaterialStaticComboLoadRequest_t(); // 1526
	Destruct<MaterialStaticComboLoadRequest_t>(MaterialStaticComboLoadRequest_t* pMemory); // 76
	UtlTraitsDestructRange<MaterialStaticComboLoadRequest_t>(MaterialStaticComboLoadRequest_t* pStart,
								MaterialStaticComboLoadRequest_t* pEnd);  // 364
	CUtlLeanVectorBase<MaterialStaticComboLoadRequest_t, short int>::RemoveAll(); // 371
	CUtlLeanVectorBase<MaterialStaticComboLoadRequest_t, short int>::Purge(); // 270
	CUtlLeanVectorBase<MaterialStaticComboLoadRequest_t, short int>::~CUtlLeanVectorBase(); // 399
	~CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorBase<MaterialStaticComboLoadRequest_t, short int>, MaterialStaticComboLoadRequest_ this); // 829
	CUtlLeanVector<MaterialStaticComboLoadRequest_t, short int>::~CUtlLeanVector(); // 237
	StaticComboVcsLoad_t::~StaticComboVcsLoad_t(); // 1339
	operator()(const class* __closure); // 31
	CScopeGuardLambdaImpl<CMaterial2::OnStaticComboFileDataLoaded(StaticComboVcsLoad_t::~CScopeGuardLambdaImpl()::<lambda()> >* this); // 1396
	CUtlLeanVectorBase<MaterialStaticComboLoadRequest_t, short int>::Base(); // 279
	CUtlLeanVectorBase<MaterialStaticComboLoadRequest_t, short int>::Base(); // 363
	CUtlString::~CUtlString(); // 993
	VfxStaticComboLoadRequest_t::~VfxStaticComboLoadRequest_t(); // 194
	MaterialStaticComboLoadRequest_t::~MaterialStaticComboLoadRequest_t(); // 1526
	Destruct<MaterialStaticComboLoadRequest_t>(MaterialStaticComboLoadRequest_t* pMemory); // 76
	UtlTraitsDestructRange<MaterialStaticComboLoadRequest_t>(MaterialStaticComboLoadRequest_t* pStart,
								MaterialStaticComboLoadRequest_t* pEnd);  // 364
	CUtlLeanVectorBase<MaterialStaticComboLoadRequest_t, short int>::RemoveAll(); // 371
	CUtlLeanVectorBase<MaterialStaticComboLoadRequest_t, short int>::Base(); // 279
	CUtlLeanVectorBase<MaterialStaticComboLoadRequest_t, short int>::Base(); // 374
	CUtlLeanVectorBase<MaterialStaticComboLoadRequest_t, short int>::Purge(); // 270
	CUtlLeanVectorBase<MaterialStaticComboLoadRequest_t, short int>::~CUtlLeanVectorBase(); // 399
	~CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorBase<MaterialStaticComboLoadRequest_t, short int>, MaterialStaticComboLoadRequest_ this); // 829
	CUtlLeanVector<MaterialStaticComboLoadRequest_t, short int>::~CUtlLeanVector(); // 237
	{
		IAsyncProcessedDataResult *& __ptr; // 396
		__uniq_ptr_impl<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::_M_ptr(); // 396
		unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::get_deleter(); // 398
		default_delete<IAsyncProcessedDataResult>::operator(
				IAsyncProcessedDataResult* __ptr);  // 398
	}
	unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::~unique_ptr(); // 237
	StaticComboVcsLoad_t::~StaticComboVcsLoad_t(); // 1339
	operator()(const class* __closure); // 31
	CScopeGuardLambdaImpl<CMaterial2::OnStaticComboFileDataLoaded(StaticComboVcsLoad_t::~CScopeGuardLambdaImpl()::<lambda()> >* this); // 1396
} /* size: 0, variables: 2, inline expansions: 36 (2396 bytes) */

// <001812B8> materialsystem2/material2.cpp:1399
// variables: 7
// function calls: 9
void CMaterial2::FinalizeLoad()
{
	const char   __FUNCTION__; // 62885
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1401
	}
	{
		StaticComboVcsLoad_t* pVcsLoad; // 1403
		CUtlLeanVector<CMaterial2::StaticComboVcsLoad_t*, short int>& __for_range; // 49580
		iterator __for_begin; // 47253
		iterator __for_end; // 47253
		CUtlLeanVectorBase<CMaterial2::StaticComboVcsLoad_t::Base(); // 279
		CUtlLeanVectorBase<CMaterial2::StaticComboVcsLoad_t::Base(); // 415
		CUtlLeanVectorImpl<CUtlLeanVectorBase<CMaterial2::StaticComboVcsLoad_t::begin(); // 1403
		CUtlLeanVectorImpl<CUtlLeanVectorBase<CMaterial2::StaticComboVcsLoad_t::Count(); // 417
		CUtlLeanVectorImpl<CUtlLeanVectorBase<CMaterial2::StaticComboVcsLoad_t::end(); // 1403
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1410
	}
	CUtlLeanVectorBase<CMaterial2::StaticComboVcsLoad_t::RemoveAll(); // 371
	CUtlLeanVectorBase<CMaterial2::StaticComboVcsLoad_t::Base(); // 279
	CUtlLeanVectorBase<CMaterial2::StaticComboVcsLoad_t::Base(); // 374
	CUtlLeanVectorBase<CMaterial2::StaticComboVcsLoad_t::Purge(); // 1407
} /* size: 0, variables: 1, inline expansions: 4 (74 bytes) */

// <001ACC20> materialsystem2/material2.cpp:1414
// function calls: 2
void CMaterial2::CancelLoadingWorkPending(ResourceHandle_t hMyHandle)
{
	CMaterialTypeManager::MarkLoadingWorkPending(
				ResourceHandle_t hMaterial,
				bool bPending);  // 1420
	CMaterial2::CancelLoadingWorkPending(
				ResourceHandle_t hMyHandle);  // 1414
} /* size: 49, inline expansions: 2 (57 bytes) */

// <00181292> materialsystem2/material2.cpp:1414
void CMaterial2::CancelLoadingWorkPending(ResourceHandle_t hMyHandle)
{
} /* size: 0 */

// <00181068> materialsystem2/material2.cpp:1424
// function calls: 10
void CMaterial2::UnloadMaterial()
{
	AlignedByteArrayExplicit_t<6, CMaterialMode, 8>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 183
	CMaterialMode::~CMaterialMode(); // 1526
	Destruct<CMaterialMode>(CMaterialMode* pMemory); // 76
	UtlTraitsDestructRange<CMaterialMode>(CMaterialMode* pStart,
						CMaterialMode* pEnd);  // 184
	CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::RemoveAll(); // 191
	CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 194
	CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Purge(); // 1428
} /* size: 386, inline expansions: 10 (798 bytes) */

// <00180DD4> materialsystem2/material2.cpp:1438
// variables: 5
// function calls: 10
void CMaterial2::GetInt(const char* pParamName, int nDefault)
{
	{
		const CMaterialParam* pParam; // 1440
		{
			CMaterialParam& param; // 1491
			CUtlVector<CMaterialParam, CUtlMemory<CMaterialParam, int> >& __for_range; // 17848
			iterator __for_begin; // 17858
			iterator __for_end; // 17868
			CUtlMemory<CMaterialParam, int>::Base(); // 112
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Base(); // 102
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::begin(); // 1491
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Count(); // 104
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::end(); // 1491
			CUtlSymbolLarge::String(); // 25
			CMaterialParam::GetName(); // 1493
		}
		CMaterial2::FindParamByName(
				const char* pString);  // 1486
		CMaterial2::FindParamByName(
				const char* pString);  // 1440
		CVfxParam::GetInt(); // 1442
	}
} /* size: 138 */

// <00180B33> materialsystem2/material2.cpp:1449
// variables: 5
// function calls: 10
void CMaterial2::GetFloat(const char* pParamName, float flDefault)
{
	{
		const CMaterialParam* pParam; // 1451
		{
			CMaterialParam& param; // 1491
			CUtlVector<CMaterialParam, CUtlMemory<CMaterialParam, int> >& __for_range; // 17848
			iterator __for_begin; // 17858
			iterator __for_end; // 17868
			CUtlMemory<CMaterialParam, int>::Base(); // 112
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Base(); // 102
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::begin(); // 1491
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Count(); // 104
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::end(); // 1491
			CUtlSymbolLarge::String(); // 25
			CMaterialParam::GetName(); // 1493
		}
		CMaterial2::FindParamByName(
				const char* pString);  // 1486
		CMaterial2::FindParamByName(
				const char* pString);  // 1451
		CVfxParam::GetFloat(
			int nIndex);  // 1453
	}
} /* size: 140 */

// <0018086F> materialsystem2/material2.cpp:1461
// variables: 5
// function calls: 11
void CMaterial2::GetString(const char* pParamName, const char* pDefault)
{
	{
		const CMaterialParam* pParam; // 1463
		{
			CMaterialParam& param; // 1491
			CUtlVector<CMaterialParam, CUtlMemory<CMaterialParam, int> >& __for_range; // 17848
			iterator __for_begin; // 17858
			iterator __for_end; // 17868
			CUtlMemory<CMaterialParam, int>::Base(); // 112
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Base(); // 102
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::begin(); // 1491
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Count(); // 104
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::end(); // 1491
			CUtlSymbolLarge::String(); // 25
			CMaterialParam::GetName(); // 1493
		}
		CMaterial2::FindParamByName(
				const char* pString);  // 1486
		CMaterial2::FindParamByName(
				const char* pString);  // 1463
		CUtlSymbolLarge::String(); // 28
		CMaterialParam::GetString(); // 1465
	}
} /* size: 154 */

// <00180617> materialsystem2/material2.cpp:1471
// variables: 4
// function calls: 11
void CMaterial2::GetFirstTextureParam()
{
	{
		const CMaterialParam& param; // 1473
		const CUtlVector<CMaterialParam, CUtlMemory<CMaterialParam, int> >& __for_range; // 46574
		const_iterator __for_begin; // 43457
		const_iterator __for_end; // 43457
		CUtlMemory<CMaterialParam, int>::Base(); // 113
		CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Base(); // 103
		CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::begin(); // 1473
		CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Count(); // 105
		CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::end(); // 1473
		CVfxParam::IsTextureParam(); // 1475
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
					ResourceHandle_t hUntypedResource);  // 227
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
		CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 137
		CVfxParam::GetTextureHandle(); // 1477
	}
} /* size: 73 */

// <001ACCF2> materialsystem2/material2.cpp:1484
// variables: 4
// function calls: 8
void CMaterial2::FindParamByName(const char* pString)
{
	{
		CMaterialParam& param; // 1491
		CUtlVector<CMaterialParam, CUtlMemory<CMaterialParam, int> >& __for_range; // 17848
		iterator __for_begin; // 17858
		iterator __for_end; // 17868
		CUtlMemory<CMaterialParam, int>::Base(); // 112
		CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Base(); // 102
		CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::begin(); // 1491
		CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Count(); // 104
		CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::end(); // 1491
		CUtlSymbolLarge::String(); // 25
		CMaterialParam::GetName(); // 1493
	}
	CMaterial2::FindParamByName(
			const char* pString);  // 1486
} /* size: 0, inline expansions: 1 (0 bytes) */

// <001805F1> materialsystem2/material2.cpp:1484
void CMaterial2::FindParamByName(const char* pString)
{
} /* size: 0 */

// <001ACECB> materialsystem2/material2.cpp:1489
// variables: 4
// function calls: 7
void CMaterial2::FindParamByName(const char* pString)
{
	{
		CMaterialParam& param; // 1491
		CUtlVector<CMaterialParam, CUtlMemory<CMaterialParam, int> >& __for_range; // 17848
		iterator __for_begin; // 17858
		iterator __for_end; // 17868
		CUtlMemory<CMaterialParam, int>::Base(); // 112
		CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Base(); // 102
		CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::begin(); // 1491
		CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Count(); // 104
		CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::end(); // 1491
		CUtlSymbolLarge::String(); // 25
		CMaterialParam::GetName(); // 1493
	}
} /* size: 111 */

// <00180584> materialsystem2/material2.cpp:1489
// variables: 4
void CMaterial2::FindParamByName(const char* pString)
{
	{
		CMaterialParam& param; // 1491
		CUtlVector<CMaterialParam, CUtlMemory<CMaterialParam, int> >& __for_range; // 17900
		iterator __for_begin; // 43412
		iterator __for_end; // 43412
	}
} /* size: 0 */

// <00180396> materialsystem2/material2.cpp:1504
// variables: 4
// function calls: 9
void CMaterial2::RecreateAllStaticConstantAndCommandBuffers()
{
	{
		CMaterialMode& mode; // 1506
		CUtlLeanVectorFixedGrowable<CMaterialMode, 6, short int>& __for_range; // 53299
		iterator __for_begin; // 51051
		iterator __for_end; // 51051
		AlignedByteArrayExplicit_t<6, CMaterialMode, 8>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 415
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::begin(); // 1506
		CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 417
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::Count(); // 417
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::end(); // 1506
		CMaterialLayer::RecreateStaticConstantAndCommandBuffers(); // 1508
	}
} /* size: 116 */

// <0018013E> materialsystem2/material2.cpp:1513
// variables: 6
// function calls: 9
void CMaterial2::RecreateCommandBuffers()
{
	{
		CMaterialMode& mode; // 1515
		CUtlLeanVectorFixedGrowable<CMaterialMode, 6, short int>& __for_range; // 53299
		iterator __for_begin; // 51051
		iterator __for_end; // 51051
		{
			int nProgramTypeIdx; // 1517
			{
				VfxProgram_t programType; // 1519
				CVfx::HasShaderProgram(
						VfxProgram_t programType);  // 1521
			}
		}
		AlignedByteArrayExplicit_t<6, CMaterialMode, 8>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 415
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::begin(); // 1515
		CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 417
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::Count(); // 417
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::end(); // 1515
	}
} /* size: 0 */

// <0017F301> materialsystem2/material2.cpp:1533
// variables: 7
// function calls: 61
void CMaterial2::CopyFrom(HMaterial hCopySource, const CMaterial2& srcMat, const CResourceName& newResourceName, bool bRecreateStaticBuffers)
{
	{
		int m; // 1560
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::Count(); // 1560
		{
			int b; // 1573
		}
		CMaterialMode::CopyFrom(
			const CMaterialMode& srcMode,
			CMaterial2* pParent,
			bool bRecreateStaticBuffers);  // 1562
		AlignedByteArrayExplicit_t<6, CMaterialMode, 8>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 447
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::Element(
			int i);  // 438
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::operator[](
				int i);  // 1562
		AlignedByteArrayExplicit_t<6, CMaterialMode, 8>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 452
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::Element(
			int i);  // 442
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::operator[](
				int i);  // 1562
	}
	CWeakHandle<InfoForResourceTypeIMaterial2>::HasHandle(); // 1541
	CResourceName::Get(); // 1550
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 1550
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Count(); // 573
	CUtlMemory<CMaterialParam, int>::Base(); // 112
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Base(); // 102
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::begin(); // 574
	CUtlMemory<CMaterialParam, int>::Base(); // 113
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Base(); // 105
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Count(); // 105
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::end(); // 574
	CVfxParam::FreeBufferData(); // 49
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 604
	CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
		const CStrongHandle<InfoForResourceTypeCTextureBase>& src);  // 666
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CStrongHandle<InfoForResourceTypeCTextureBase>& src);  // 199
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 79
	V_memcpy(void* dest,
		const void* src,
		uint count);  // 206
	CVfxParam::CopyFrom(
		const CVfxParam& other);  // 50
	CVfxParam::operator=(
			const CVfxParam& other);  // 43
	CVfxParam::operator=(
			const CVfxParam& other);  // 16
	CUtlSymbolLarge::operator=(
			const CUtlSymbolLarge& src);  // 16
	CUtlSymbolLarge::operator=(
			const CUtlSymbolLarge& src);  // 16
	CMaterialParam::operator=(
			const CMaterialParam  &);  // 209
	UtlTraitsCopyRange<CMaterialParam>(const CMaterialParam* pFrom,
						const CMaterialParam* pFromEnd,
						CMaterialParam* pTo);  // 200
	UtlTraitsCopyRange<CMaterialParam>(const CMaterialParam* pFrom,
						const CMaterialParam* pFromEnd,
						CMaterialParam* pTo);  // 574
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator=(
			const CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >& other);  // 565
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator=(
			const CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >& other);  // 452
	CUtlVector<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator=(
			const CUtlVector<CMaterialParam, CUtlMemory<CMaterialParam, int> >& src);  // 1555
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::Count(); // 1559
	{
		ElemType_t* pNew; // 168
		ElemType_t* pBase; // 169
		AlignedByteArrayExplicit_t<6, CMaterialMode, 8>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 169
	}
	{
		ElemType_t* pNew; // 147
		ElemType_t* pBase; // 148
		AlignedByteArrayExplicit_t<6, CMaterialMode, 8>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 148
	}
	CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::EnsureCapacity(
			int nCapacity,
			bool bConservative);  // 516
	AlignedByteArrayExplicit_t<6, CMaterialMode, 8>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 518
	IMaterialMode::IMaterialMode(); // 1734
	{
		int b; // 1736
	}
	CMaterialMode::CMaterialMode(); // 1479
	Construct<CMaterialMode>(CMaterialMode* pMemory); // 63
	UtlTraitsConstructRange<CMaterialMode>(CMaterialMode* pStart,
						CMaterialMode* pEnd);  // 523
	CMaterialMode::~CMaterialMode(); // 1526
	Destruct<CMaterialMode>(CMaterialMode* pMemory); // 76
	UtlTraitsDestructRange<CMaterialMode>(CMaterialMode* pStart,
						CMaterialMode* pEnd);  // 527
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::SetCount(
		int nCount);  // 1559
	CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
		const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 331
	CWeakHandle<InfoForResourceTypeIMaterial2>::operator=(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 1547
} /* size: 1551, inline expansions: 44 (4430 bytes) */

// <001AD926> materialsystem2/material2.cpp:1569
// variable: 1
void CMaterialMode::CopyFrom(const CMaterialMode& srcMode, CMaterial2* pParent, bool bRecreateStaticBuffers)
{
	{
		int b; // 1573
	}
} /* size: 0 */

// <0017E68D> materialsystem2/material2.cpp:1582
// variables: 6
// function calls: 48
void CMaterialLayer::CopyFrom(const CMaterialLayer& srcLayer, CMaterial2* pParent, bool bRecreateStaticBuffers)
{
	{
		int nProgramType; // 1603
		{
			CVfxPerLayerProgramData* pPerLayerProgramData; // 1605
			ThreadInterlockedIncrement(volatile int32* p); // 576
			CInterlockedIntT<int, 4>::operator++(); // 582
			CInterlockedIntT<int, 4>::operator++(
					int);  // 862
			CVfxStaticComboData::AddRef(); // 1608
		}
	}
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 1585
	CStrongHandle<InfoForResourceTypeCVfx>::operator=(
			const CStrongHandle<InfoForResourceTypeCVfx>& src);  // 1587
	{
		ElemType_t* pNew; // 168
		ElemType_t* pBase; // 169
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 169
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 85
		V_memcpy(void* dest,
			const void* src,
			ptrdiff_t count);  // 91
		UtlTraitsMoveRawMemoryRange<unsigned char>(unsigned char* pFrom,
								unsigned char* pFromEnd,
								unsigned char* pTo);  // 170
	}
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::EnsureCapacity(
			int nCapacity,
			bool bConservative);  // 516
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::SetCount(
		int nCount);  // 750
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 751
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<unsigned char>(const unsigned char* pFrom,
						const unsigned char* pFromEnd,
						unsigned char* pTo);  // 173
	UtlTraitsCopyRange<unsigned char>(const unsigned char* pFrom,
						const unsigned char* pFromEnd,
						unsigned char* pTo);  // 752
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::CopyArray(
			const ElemType_t* pArray,
			IndexType_t nSize);  // 806
	Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int> this); // 806
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 806
	CUtlLeanVectorFixedGrowable<unsigned char, 12, short int>::operator=(
			const CUtlLeanVectorFixedGrowable<unsigned char, 12, short int>& other);  // 1111
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<short int, 6, short int>, short int, short int>::Count(); // 806
	AlignedByteArrayExplicit_t<6, short int, 2>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<short int, 6, short int>::Base(); // 806
	{
		ElemType_t* pNew; // 168
		ElemType_t* pBase; // 169
		AlignedByteArrayExplicit_t<6, short int, 2>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<short int, 6, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<short int, 6, short int>::Base(); // 169
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 85
		V_memcpy(void* dest,
			const void* src,
			ptrdiff_t count);  // 91
		UtlTraitsMoveRawMemoryRange<short int>(short int* pFrom,
							short int* pFromEnd,
							short int* pTo);  // 170
	}
	CUtlLeanVectorFixedGrowableBase<short int, 6, short int>::EnsureCapacity(
			int nCapacity,
			bool bConservative);  // 516
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<short int, 6, short int>, short int, short int>::SetCount(
		int nCount);  // 750
	AlignedByteArrayExplicit_t<6, short int, 2>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<short int, 6, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<short int, 6, short int>::Base(); // 751
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<unsigned char>(const unsigned char* pFrom,
						const unsigned char* pFromEnd,
						unsigned char* pTo);  // 173
	UtlTraitsCopyRange<short int>(const short int* pFrom,
					const short int* pFromEnd,
					short int* pTo);  // 752
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<short int, 6, short int>, short int, short int>::CopyArray(
			const ElemType_t* pArray,
			IndexType_t nSize);  // 806
	CUtlLeanVectorFixedGrowable<short int, 6, short int>::operator=(
			const CUtlLeanVectorFixedGrowable<short int, 6, short int>& other);  // 1111
	CVfxPerLayerProgramData::operator=(
			const CVfxPerLayerProgramData  &);  // 1135
	CVfxLayerData::operator=(
			const CVfxLayerData  &);  // 1589
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 1592
	CMaterialLayer::RecreateStaticConstantAndCommandBuffers(); // 1599
} /* size: 1386, inline expansions: 33 (6283 bytes) */

// <0017E080> materialsystem2/material2.cpp:1614
// variables: 4
// function calls: 24
void CMaterialLayer::CMaterialLayer()
{
	{
		int i; // 1623
		{
			int b; // 1628
		}
	}
	CUtlSymbol::CUtlSymbol(); // 1621
	CWeakHandle<InfoForResourceTypeCVfx>::GetBinding(); // 476
	CStrongHandle<InfoForResourceTypeCVfx>::Init(
		ResourceHandleTyped_t hResource);  // 476
	CStrongHandle<InfoForResourceTypeCVfx>::CStrongHandle(
			const CWeakHandle<InfoForResourceTypeCVfx>& src);  // 1615
	CWeakHandle<InfoForResourceTypeCVfx>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 1615
	CUtlLeanVectorFixedGrowableBase<short int, 6, short int>::CUtlLeanVectorFixedGrowableBase(); // 411
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<short int, 6, short int>, short int, short int>::CUtlLeanVectorImpl(); // 799
	CUtlLeanVectorFixedGrowable<short int, 6, short int>::CUtlLeanVectorFixedGrowable(); // 1128
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::CUtlLeanVectorFixedGrowableBase(); // 411
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::CUtlLeanVectorImpl(); // 799
	CUtlLeanVectorFixedGrowable<unsigned char, 12, short int>::CUtlLeanVectorFixedGrowable(); // 1128
	CVfxPerLayerProgramData::CVfxPerLayerProgramData(); // 1146
	CVfxLayerData::CVfxLayerData(); // 1621
	CUtlLeanVectorBase<unsigned char, int>::CUtlLeanVectorBase(); // 411
	CUtlLeanVectorImpl<CUtlLeanVectorBase<unsigned char, int>, unsigned char, int>::CUtlLeanVectorImpl(); // 832
	CUtlLeanVector<unsigned char, int>::CUtlLeanVector(); // 1621
	CUtlLeanVectorFixedGrowableBase<int, 3, short int>::CUtlLeanVectorFixedGrowableBase(); // 411
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<int, 3, short int>, int, short int>::CUtlLeanVectorImpl(); // 799
	CUtlLeanVectorFixedGrowable<int, 3, short int>::CUtlLeanVectorFixedGrowable(); // 1621
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, int>::CUtlLeanVectorFixedGrowableBase(); // 411
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, int>, unsigned char, int>::CUtlLeanVectorImpl(); // 799
	CUtlLeanVectorFixedGrowable<unsigned char, 12, int>::CUtlLeanVectorFixedGrowable(); // 1621
	{
		int i; // 1623
		{
			int b; // 1628
		}
	}
} /* size: 356, inline expansions: 24 (264 bytes) */

// <0017E049> materialsystem2/material2.cpp:1614
// variables: 2
void CMaterialLayer::CMaterialLayer()
{
	{
		int i; // 1623
		{
			int b; // 1628
		}
	}
} /* size: 0 */

// <0017D574> materialsystem2/material2.cpp:1639
// variables: 8
// function calls: 51
void CMaterialLayer::~CMaterialLayer()
{
	{
		int nProgramType; // 1641
	}
	{
		int nProgramType; // 1659
		{
			VfxProgram_t programType; // 1661
			CVfxPerLayerProgramData* pPerLayerProgramData; // 1662
		}
	}
	{
		int nProgramType; // 1641
	}
	CUtlLeanVectorBase<unsigned char, int>::RemoveAll(); // 371
	CUtlLeanVectorBase<unsigned char, int>::Base(); // 279
	CUtlLeanVectorBase<unsigned char, int>::Base(); // 374
	CUtlLeanVectorBase<unsigned char, int>::Purge(); // 1656
	{
		int nProgramType; // 1659
		{
			VfxProgram_t programType; // 1661
			CVfxPerLayerProgramData* pPerLayerProgramData; // 1662
			CInterlockedIntT<int, 4>::operator int(); // 861
			CVfxStaticComboData::GetRefCount(); // 1663
			ThreadInterlockedDecrement(volatile int32* p); // 586
			CInterlockedIntT<int, 4>::operator--(); // 592
			CInterlockedIntT<int, 4>::operator--(
					int);  // 863
			CInterlockedIntT<int, 4>::operator int(); // 863
			CVfxStaticComboData::Release(); // 1665
		}
	}
	CStrongHandle<InfoForResourceTypeCVfx>::Init(
		ResourceHandleTyped_t hResource);  // 659
	CStrongHandle<InfoForResourceTypeCVfx>::operator=(
			ResourceHandleTyped_t hResource);  // 1675
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, int>::RemoveAll(); // 191
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, int>::Base(); // 194
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, int>::Purge(); // 55
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, int>::~CUtlLeanVectorFixedGrowableBase(); // 399
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, int>, unsigned char, int>::~CUtlLeanVectorImpl(); // 796
	CUtlLeanVectorFixedGrowable<unsigned char, 12, int>::~CUtlLeanVectorFixedGrowable(); // 1639
	CUtlLeanVectorFixedGrowableBase<int, 3, short int>::RemoveAll(); // 191
	CUtlLeanVectorFixedGrowableBase<int, 3, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<int, 3, short int>::Base(); // 194
	CUtlLeanVectorFixedGrowableBase<int, 3, short int>::Purge(); // 55
	CUtlLeanVectorFixedGrowableBase<int, 3, short int>::~CUtlLeanVectorFixedGrowableBase(); // 399
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<int, 3, short int>, int, short int>::~CUtlLeanVectorImpl(); // 796
	CUtlLeanVectorFixedGrowable<int, 3, short int>::~CUtlLeanVectorFixedGrowable(); // 1639
	CUtlLeanVectorBase<unsigned char, int>::RemoveAll(); // 371
	CUtlLeanVectorBase<unsigned char, int>::Base(); // 279
	CUtlLeanVectorBase<unsigned char, int>::Base(); // 374
	CUtlLeanVectorBase<unsigned char, int>::Purge(); // 270
	CUtlLeanVectorBase<unsigned char, int>::~CUtlLeanVectorBase(); // 399
	CUtlLeanVectorImpl<CUtlLeanVectorBase<unsigned char, int>, unsigned char, int>::~CUtlLeanVectorImpl(); // 829
	CUtlLeanVector<unsigned char, int>::~CUtlLeanVector(); // 1676
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::RemoveAll(); // 191
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 194
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Purge(); // 55
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::~CUtlLeanVectorFixedGrowableBase(); // 399
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::~CUtlLeanVectorImpl(); // 796
	CUtlLeanVectorFixedGrowable<unsigned char, 12, short int>::~CUtlLeanVectorFixedGrowable(); // 1129
	CUtlLeanVectorFixedGrowableBase<short int, 6, short int>::RemoveAll(); // 191
	CUtlLeanVectorFixedGrowableBase<short int, 6, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<short int, 6, short int>::Base(); // 194
	CUtlLeanVectorFixedGrowableBase<short int, 6, short int>::Purge(); // 55
	CUtlLeanVectorFixedGrowableBase<short int, 6, short int>::~CUtlLeanVectorFixedGrowableBase(); // 399
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<short int, 6, short int>, short int, short int>::~CUtlLeanVectorImpl(); // 796
	CUtlLeanVectorFixedGrowable<short int, 6, short int>::~CUtlLeanVectorFixedGrowable(); // 1129
	CVfxPerLayerProgramData::~CVfxPerLayerProgramData(); // 1147
	CVfxLayerData::~CVfxLayerData(); // 1676
	CStrongHandle<InfoForResourceTypeCVfx>::~CStrongHandle(); // 1676
} /* size: 0, inline expansions: 44 (869 bytes) */

// <0017D518> materialsystem2/material2.cpp:1639
// variables: 4
void CMaterialLayer::~CMaterialLayer()
{
	{
		int nProgramType; // 1641
	}
	{
		int nProgramType; // 1659
		{
			VfxProgram_t programType; // 1661
			CVfxPerLayerProgramData* pPerLayerProgramData; // 1662
		}
	}
} /* size: 0 */

// <0017D3A6> materialsystem2/material2.cpp:1679
// variable: 1
// function calls: 5
void CMaterialLayer::FindParamIndexByName(const char* pString)
{
	{
		int i; // 1687
		CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Count(); // 1687
		CUtlMemory<CMaterialParam, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator[](
				int i);  // 1689
		CUtlSymbolLarge::String(); // 25
		CMaterialParam::GetName(); // 1689
	}
} /* size: 140 */

// <0017C9A2> materialsystem2/material2.cpp:1700
// variables: 3
// function calls: 32
void CMaterialLayer::FindOrLoadVfx(const char* pVfxName)
{
	CPathBufferString shaderPath; // 1719
	{
		VfxPlatformType_t nPlatformType; // 1704
		VfxCompileTarget_t compileTarget; // 1705
	}
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 601
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 596
	CBufferStringN<200>::CBufferStringN(
			const char* pString,
			int nChars,
			bool bExact,
			bool bGrowable);  // 1719
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 1721
	CBufferStringN<200>::operator=(
			CBufferString& rhs);  // 1721
	CBufferString::~CBufferString(); // 1721
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 1723
	CUtlSymbolTableMT::AddString(
			const char* pString);  // 1723
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 1723
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 1725
	CWeakHandle<InfoForResourceTypeCVfx>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 720
	IResourceSystem::FindExistingResourceByName(
					const CResourceName& resourceName);  // 720
	IResourceSystem::FindExistingResourceByName<125779801368691>(
							const CResourceName& resourceName);  // 1725
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 570
	CStrongHandle<InfoForResourceTypeCVfx>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CStrongHandle<InfoForResourceTypeCVfx>::operator=(
			const CWeakHandle<InfoForResourceTypeCVfx>& src);  // 1725
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 1725
	CStrongHandle<InfoForResourceTypeCVfx>::GetData(); // 1726
	ResourceIsError(ResourceHandle_t hResource); // 1729
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1730
} /* size: 915, variables: 1, inline expansions: 32 (1025 bytes) */

// <0017C8CA> materialsystem2/material2.cpp:1733
// variables: 2
// function call: 1
void CMaterialMode::CMaterialMode()
{
	{
		int b; // 1736
	}
	IMaterialMode::IMaterialMode(); // 1734
	{
		int b; // 1736
	}
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0017C8A4> materialsystem2/material2.cpp:1733
// variable: 1
void CMaterialMode::CMaterialMode()
{
	{
		int b; // 1736
	}
} /* size: 0 */

// <0017C85B> materialsystem2/material2.cpp:1740
void CMaterialMode::~CMaterialMode()
{
} /* size: 24 */

// <0017C7D0> materialsystem2/material2.cpp:1740
// function call: 1
void CMaterialMode::~CMaterialMode()
{
	CMaterialMode::~CMaterialMode(); // 1742
} /* size: 54, inline expansions: 1 (20 bytes) */

// <0017C5CC> materialsystem2/material2.cpp:1744
// variables: 3
// function calls: 3
Vector4D GetDefaultValueFromVariableDescription(const CVfxVariableDescription& var)
{
	Vector4D v; // 1746
	const char   __FUNCTION__; // 63537
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1766
	}
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 1746
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 1767
} /* size: 0, variables: 2, inline expansions: 3 (15 bytes) */

// <0017B82E> materialsystem2/material2.cpp:1776
// variables: 11
// function calls: 57
void CMaterialLayer::UpdateVariableToParamLookupTable(CVfxPerLayerProgramData* pPerLayerProgramData, const CVfxProgramData& programData)
{
	int nNumCurrentVariableIndices; // 1779
	int nNumToAdd; // 1780
	const char   __FUNCTION__; // 63390
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1781
	}
	{
		int i; // 1787
		{
			const CVfxVariableDescription& var; // 1789
			{
				int nParamIndex; // 1795
				{
					Vector4D defaultValue; // 1809
					CUtlMemory<CMaterialParam, int>::NumAllocated(); // 1143
					CUtlMemory<CMaterialParam, int>::operator[](
							int i);  // 602
					CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Element(
						int i);  // 1148
					CUtlSymbolLarge::CUtlSymbolLarge(); // 19
					CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
					FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
					StaticInvalidHandle(void); // 19
					CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 476
					CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
						ResourceHandleTyped_t hResource);  // 476
					CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(
							const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 19
					CUtlStringToken::CUtlStringToken(); // 19
					CVfxParam::CVfxParam(); // 19
					CUtlSymbolLarge::CUtlSymbolLarge(); // 19
					CUtlSymbolLarge::CUtlSymbolLarge(
							UtlSymLargeId_t id);  // 21
					CUtlSymbolLarge::operator=(
							const CUtlSymbolLarge& src);  // 21
					CUtlSymbolLarge::CUtlSymbolLarge(
							UtlSymLargeId_t id);  // 22
					CUtlSymbolLarge::operator=(
							const CUtlSymbolLarge& src);  // 22
					CMaterialParam::CMaterialParam(); // 1479
					Construct<CMaterialParam>(CMaterialParam* pMemory); // 1148
					CUtlMemory<CMaterialParam, int>::Base(); // 112
					CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Base(); // 368
					CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::GrowMemory(
							int num);  // 1145
					CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::AddToTail(); // 1807
					CUtlMemory<CMaterialParam, int>::operator[](
							int i);  // 602
					CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Element(
						int i);  // 1808
					CUtlMemory<CMaterialParam, int>::operator[](
							int i);  // 602
					CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Element(
						int i);  // 1810
					memcpy(void* __dest,
						const void* __src,
						size_t __len);  // 126
					CVfxParam::SetVec(
						const float* pVec);  // 1810
					CUtlMemory<CMaterialParam, int>::operator[](
							int i);  // 602
					CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Element(
						int i);  // 1811
					CMaterialParam::SetIsDefaultValue(
								bool bIsDefaultValue);  // 1811
				}
				AlignedByteArrayExplicit_t<6, short int, 2>::Base(); // 74
				CUtlLeanVectorFixedGrowableBase<short int, 6, short int>::Base(); // 64
				CUtlLeanVectorFixedGrowableBase<short int, 6, short int>::Base(); // 447
				CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<short int, 6, short int>, short int, short int>::Element(
					int i);  // 438
				CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<short int, 6, short int>, short int, short int>::operator[](
						int i);  // 1820
			}
			AlignedByteArrayExplicit_t<6, short int, 2>::Base(); // 74
			CUtlLeanVectorFixedGrowableBase<short int, 6, short int>::Base(); // 64
			CUtlLeanVectorFixedGrowableBase<short int, 6, short int>::Base(); // 447
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<short int, 6, short int>, short int, short int>::Element(
				int i);  // 438
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<short int, 6, short int>, short int, short int>::operator[](
					int i);  // 1790
			VfxVariableIsArtistEditable(int nVarType); // 1792
			CUtlMemory<CVfxVariableDescription, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::operator[](
					int i);  // 1789
		}
		CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::Count(); // 1787
	}
	{
		int i; // 1825
		{
			const CVfxVariableDescription& var; // 1827
			CUtlMemory<CVfxVariableDescription, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::operator[](
					int i);  // 1827
			VfxVariableIsUsingExpression(int nVarType); // 578
			CVfxVariableDescription::IsUsingExpression(); // 1828
		}
		CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::Count(); // 1825
	}
	CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::Count(); // 1780
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<short int, 6, short int>, short int, short int>::Count(); // 1779
	{
		int* _pCrash; // 675
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 675
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<short int, 6, short int>, short int, short int>::SetCount(
		int nCount);  // 679
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<short int, 6, short int>, short int, short int>::AddMultipleToTail(
				int nSize);  // 1784
} /* size: 0, variables: 3, inline expansions: 5 (223 bytes) */

// <0017AB52> materialsystem2/material2.cpp:1841
// variables: 13
// function calls: 57
void CMaterialLayer::ComputeStaticComboValuesForPerLayerProgramData(VfxProgram_t programType, int nMode)
{
	const CVfxProgramData* pProgramData; // 1843
	CVfxPerLayerProgramData* pPerLayerProgramData; // 1844
	{
		int nVFXComboIter; // 1848
		{
			const CVfxCombo* pCombo; // 1850
			{
				const char* pModeString; // 1858
				{
					int nVFXModeIter; // 1859
					{
						CVfxMode* pMode; // 1861
						{
							int nModeSettingIter; // 1865
							{
								CVfxModeSettings* pModeSettings; // 1867
								CUtlMemory<CVfxModeSettings, int>::operator[](
										int i);  // 588
								CUtlVectorBase<CVfxModeSettings, CUtlMemory<CVfxModeSettings, int> >::operator[](
										int i);  // 1867
								AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
								CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
								CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 447
								CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::Element(
									int i);  // 438
								CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::operator[](
										int i);  // 1871
							}
							CUtlVectorBase<CVfxModeSettings, CUtlMemory<CVfxModeSettings, int> >::Count(); // 1865
						}
						CUtlMemory<CVfxMode, int>::operator[](
								int i);  // 588
						CUtlVectorBase<CVfxMode, CUtlMemory<CVfxMode, int> >::operator[](
								int i);  // 1861
					}
					CUtlVectorBase<CVfxMode, CUtlMemory<CVfxMode, int> >::Count(); // 1859
				}
				AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
				CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
				CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 447
				CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::Element(
					int i);  // 438
				CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::operator[](
						int i);  // 1855
				CUtlVectorBase<CMaterialSystem2::ModeInfo_t, CUtlMemory<CMaterialSystem2::ModeInfo_t, int> >::Count(); // 145
				CUtlMemory<CMaterialSystem2::ModeInfo_t, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CMaterialSystem2::ModeInfo_t, CUtlMemory<CMaterialSystem2::ModeInfo_t, int> >::operator[](
						int i);  // 145
				CUtlString::Get(); // 145
				CMaterialSystem2::GetModeString(
						int nMode);  // 1858
			}
			{
				VfxStaticComboSourceType_t staticComboSourceType; // 1882
				AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
				CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
				CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 447
				CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::Element(
					int i);  // 438
				CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::operator[](
						int i);  // 1886
				CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
				CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 447
				CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::Element(
					int i);  // 438
				CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::operator[](
						int i);  // 1886
				AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
				CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
				CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 447
				CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::Element(
					int i);  // 438
				CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::operator[](
						int i);  // 1891
			}
			CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
			CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 447
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::Element(
				int i);  // 438
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::operator[](
					int i);  // 1896
			Clamp<unsigned char>(const unsigned char& val,
						const unsigned char& minVal,
						const unsigned char& maxVal);  // 1896
			CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
			CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 447
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::Element(
				int i);  // 438
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::operator[](
					int i);  // 1896
			CUtlMemory<CVfxCombo, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CVfxCombo, CUtlMemory<CVfxCombo, int> >::operator[](
					int i);  // 1850
		}
		CUtlVectorBase<CVfxCombo, CUtlMemory<CVfxCombo, int> >::Count(); // 1848
	}
	CUtlVectorBase<CVfxCombo, CUtlMemory<CVfxCombo, int> >::Count(); // 1846
	{
		int* _pCrash; // 109
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 109
	{
		ElemType_t* pNew; // 168
		ElemType_t* pBase; // 169
		AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 169
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 85
		V_memcpy(void* dest,
			const void* src,
			ptrdiff_t count);  // 91
		UtlTraitsMoveRawMemoryRange<unsigned char>(unsigned char* pFrom,
								unsigned char* pFromEnd,
								unsigned char* pTo);  // 170
	}
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::EnsureCapacity(
			int nCapacity,
			bool bConservative);  // 516
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::SetCount(
		int nCount);  // 1846
} /* size: 1614, variables: 2, inline expansions: 4 (1067 bytes) */

// <00179F06> materialsystem2/material2.cpp:1900
// variables: 5
// function calls: 54
void CMaterialLayer::ComputeFeatureComboValues()
{
	CVfxPerLayerProgramData* pFeatureProgramData; // 1903
	{
		int i; // 1906
		CUtlVectorBase<CVfxCombo, CUtlMemory<CVfxCombo, int> >::Count(); // 1906
		CUtlMemory<CVfxCombo, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CVfxCombo, CUtlMemory<CVfxCombo, int> >::operator[](
				int i);  // 1259
		CVfx::Feature(
			int iFeatureIndex);  // 1909
		AlignedByteArrayExplicit_t<6, short int, 2>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<short int, 6, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<short int, 6, short int>::Base(); // 447
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<short int, 6, short int>, short int, short int>::Element(
			int i);  // 438
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<short int, 6, short int>, short int, short int>::operator[](
				int i);  // 1909
		AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 447
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::Element(
			int i);  // 438
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::operator[](
				int i);  // 1912
		CUtlLeanVectorFixedGrowableBase<short int, 6, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<short int, 6, short int>::Base(); // 447
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<short int, 6, short int>, short int, short int>::Element(
			int i);  // 438
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<short int, 6, short int>, short int, short int>::operator[](
				int i);  // 1913
		CUtlLeanVectorFixedGrowableBase<short int, 6, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<short int, 6, short int>::Base(); // 447
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<short int, 6, short int>, short int, short int>::Element(
			int i);  // 438
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<short int, 6, short int>, short int, short int>::operator[](
				int i);  // 1915
		CUtlMemory<CMaterialParam, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator[](
				int i);  // 1915
		CVfxParam::GetInt(); // 1915
		AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 447
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::Element(
			int i);  // 438
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::operator[](
				int i);  // 1915
		CUtlMemory<CVfxCombo, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CVfxCombo, CUtlMemory<CVfxCombo, int> >::operator[](
				int i);  // 1259
		CVfx::Feature(
			int iFeatureIndex);  // 1916
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 447
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::Element(
			int i);  // 438
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::operator[](
				int i);  // 1916
		Clamp<unsigned char>(const unsigned char& val,
					const unsigned char& minVal,
					const unsigned char& maxVal);  // 1916
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 447
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::Element(
			int i);  // 438
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::operator[](
				int i);  // 1916
	}
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<short int, 6, short int>, short int, short int>::SetCount(
		int nCount);  // 1904
	CUtlVectorBase<CVfxCombo, CUtlMemory<CVfxCombo, int> >::Count(); // 1904
	CUtlVectorBase<CVfxCombo, CUtlMemory<CVfxCombo, int> >::Count(); // 1905
	{
		int* _pCrash; // 109
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 109
	{
		ElemType_t* pNew; // 168
		ElemType_t* pBase; // 169
		AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 169
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 85
		V_memcpy(void* dest,
			const void* src,
			ptrdiff_t count);  // 91
		UtlTraitsMoveRawMemoryRange<unsigned char>(unsigned char* pFrom,
								unsigned char* pFromEnd,
								unsigned char* pTo);  // 170
	}
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::EnsureCapacity(
			int nCapacity,
			bool bConservative);  // 516
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::SetCount(
		int nCount);  // 1905
} /* size: 1058, variables: 1, inline expansions: 6 (903 bytes) */

// <00178D68> materialsystem2/material2.cpp:1921
// variables: 20
// function calls: 63
void CMaterialLayer::ComputeWorkItemsToSetupStaticCombosForMode(int nMode, CUtlLeanVector<MaterialStaticComboLoadRequest_t, short int>* pLoadRequestsOut)
{
	const char   __FUNCTION__; // 63635
	CVfxPerLayerProgramData* pFeatureProgramData; // 1926
	uint64 nFeatureComboId; // 1950
	bool bIsErrorShader; // 1957
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1923
	}
	{
		VfxComboValueVector_t* pValueArraysFeatureStaticDynamic; // 1940
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 1941
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 582
		CInterlockedIntT<int, 4>::operator++(
				int);  // 262
		RecordVfxRule(void); // 1943
		CVfx::FeatureRuleArray(); // 1944
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1951
	}
	{
		CNullShaderCreateCallbacks nullCallbacks; // 1960
		CShaderCreateCallbacks realCallbacks; // 1961
		IRuntimeShaderCreateCallbacks* pShaderCreateCallbacks; // 1962
		int32 nStaticComboDataIdx; // 1966
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1967
		}
		CMaterialSystem2::IsHeadlessModeEnabled(); // 1962
		CUtlBlockMemory<CVfxStaticComboData, int>::MajorIndex(
				int i);  // 243
		CUtlBlockMemory<CVfxStaticComboData, int>::IsIdxValid(
				int i);  // 191
		CUtlBlockMemory<CVfxStaticComboData, int>::MajorIndex(
				int i);  // 192
		CUtlBlockMemory<CVfxStaticComboData, int>::MinorIndex(
				int i);  // 193
		{
		}
		CUtlBlockMemory<CVfxStaticComboData, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CVfxStaticComboData, CUtlBlockMemory<CVfxStaticComboData, int> >::operator[](
				int i);  // 1970
		IRuntimeShaderCreateCallbacks::~IRuntimeShaderCreateCallbacks(); // 8
		CShaderCreateCallbacks::~CShaderCreateCallbacks(); // 1972
		IRuntimeShaderCreateCallbacks::~IRuntimeShaderCreateCallbacks(); // 40
		CNullShaderCreateCallbacks::~CNullShaderCreateCallbacks(); // 1972
	}
	{
		int nProgramType; // 1974
		{
			VfxProgram_t programType; // 1976
			CVfxProgramData& programData; // 1983
			CVfxPerLayerProgramData* pPerLayerProgramData; // 1984
			VfxComboValueVector_t& comboValueArray; // 2011
			uint64 nStaticComboId; // 2012
			MaterialStaticComboLoadRequest_t loadRequest; // 2015
			{
				VfxComboValueVector_t* pValueArraysFeatureStaticDynamic; // 2002
				memset(void* __dest,
					int __ch,
					size_t __len);  // 67
				V_memset(void* dest,
					int fill,
					size_t count);  // 2003
				ThreadInterlockedIncrement(volatile int32* p); // 576
				CInterlockedIntT<int, 4>::operator++(); // 582
				CInterlockedIntT<int, 4>::operator++(
						int);  // 262
				RecordVfxRule(void); // 2006
			}
			CUtlString::~CUtlString(); // 993
			VfxStaticComboLoadRequest_t::~VfxStaticComboLoadRequest_t(); // 194
			MaterialStaticComboLoadRequest_t::~MaterialStaticComboLoadRequest_t(); // 2029
			CVfx::HasShaderProgram(
					VfxProgram_t programType);  // 1978
			CInterlockedIntT<int, 4>::operator int(); // 861
			CVfxStaticComboData::GetRefCount(); // 1988
			CUtlString::CUtlString(); // 993
			VfxStaticComboLoadRequest_t::VfxStaticComboLoadRequest_t(); // 198
			MaterialStaticComboLoadRequest_t::MaterialStaticComboLoadRequest_t(); // 2015
			CUtlBlockMemory<CVfxStaticComboData, int>::MajorIndex(
					int i);  // 243
			CUtlBlockMemory<CVfxStaticComboData, int>::IsIdxValid(
					int i);  // 191
			CUtlBlockMemory<CVfxStaticComboData, int>::MajorIndex(
					int i);  // 192
			CUtlBlockMemory<CVfxStaticComboData, int>::MinorIndex(
					int i);  // 193
			{
			}
			CUtlBlockMemory<CVfxStaticComboData, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CVfxStaticComboData, CUtlBlockMemory<CVfxStaticComboData, int> >::operator[](
					int i);  // 2023
			ThreadInterlockedDecrement(volatile int32* p); // 586
			CInterlockedIntT<int, 4>::operator--(); // 592
			CInterlockedIntT<int, 4>::operator--(
					int);  // 863
			CInterlockedIntT<int, 4>::operator int(); // 863
			CVfxStaticComboData::Release(); // 1990
			CUtlString::~CUtlString(); // 993
			VfxStaticComboLoadRequest_t::~VfxStaticComboLoadRequest_t(); // 194
			MaterialStaticComboLoadRequest_t::~MaterialStaticComboLoadRequest_t(); // 2029
			Color::SetColor(
				int _r,
				int _g,
				int _b,
				int _a);  // 50
			Color::Color(
				int _r,
				int _g,
				int _b,
				int _a);  // 2020
		}
	}
	CInterlockedIntT<int, 4>::operator int(); // 861
	CVfxStaticComboData::GetRefCount(); // 1930
	CUtlSymbol::operator UtlSymId_t(); // 1954
	CBufferString::IsEmpty(); // 1280
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 1280
	CVfx::GetFilename(); // 1957
	CMaterialSystem2::ShouldLoadExtendedMaterialInfo(); // 1958
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 863
	CInterlockedIntT<int, 4>::operator int(); // 863
	CVfxStaticComboData::Release(); // 1932
} /* size: 0, variables: 4, inline expansions: 14 (279 bytes) */

// <001783B9> materialsystem2/material2.cpp:2035
// variables: 15
// function calls: 40
void HookupMaterialLayerPostStaticComboLoad(const MaterialStaticComboLoadRequest_t& lr)
{
	CVfxPerLayerProgramData* pPerLayerProgramData; // 2037
	CVfxProgramData& programData; // 2038
	CMaterialLayer* pLayer; // 2039
	const CVfxStaticComboData& staticComboData; // 2045
	bool bStatic; // 2046
	{
		int b; // 2047
		{
			CVfxExpressionEvalContext ctx; // 126
			memset(void* __dest,
				int __ch,
				size_t __len);  // 124
			CVfxExpressionEvalContext::CVfxExpressionEvalContext(); // 126
			CUtlMemory<CMaterialParam, int>::Base(); // 112
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Base(); // 592
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Count(); // 593
			CMaterialLayer::InitEvalContext(
					CVfxExpressionEvalContext& ctx);  // 127
			AlignedByteArrayExplicit_t<6, short int, 2>::Base(); // 74
			CUtlLeanVectorFixedGrowableBase<short int, 6, short int>::Base(); // 600
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<short int, 6, short int>, short int, short int>::Count(); // 601
			CMaterialLayer::InitEvalContextPerProgramData(
							CVfxExpressionEvalContext& ctx,
							const CVfxPerLayerProgramData* pPerLayerProgramData);  // 128
			{
				int i; // 131
				Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>, VfxVariableIndexData_t, i this); // 132
				{
					int nVarIdx; // 134
					const CVfxVariableDescription& var; // 135
					AlignedByteArrayExplicit_t<2, VfxVariableIndexData_t, 2>::Base(); // 74
					CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>::Base(); // 452
					Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>, VfxVariableIndexData_t, i this,
						int i);  // 442
					operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>, VfxVariableIndexData_t, i this,
							int i);  // 134
					CUtlMemory<CVfxVariableDescription, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::operator[](
							int i);  // 135
					VfxVariableIsUsingExpression(int nVarType); // 136
					{
						Vector4D dummyResult; // 139
						ThreadInterlockedIncrement(volatile int32* p); // 576
						CInterlockedIntT<int, 4>::operator++(); // 582
						CInterlockedIntT<int, 4>::operator++(
								int);  // 251
						RecordVfxEval(void); // 138
						Vector4D::Vector4D(); // 139
					}
				}
			}
		}
		{
			int i; // 158
			Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>, VfxVariableIndexData_t, i this); // 159
			{
				int nVarIdx; // 161
				const CVfxVariableDescription& var; // 162
				CUtlMemory<CVfxVariableDescription, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::operator[](
						int i);  // 162
				AlignedByteArrayExplicit_t<2, VfxVariableIndexData_t, 2>::Base(); // 74
				CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>::Base(); // 452
				Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>, VfxVariableIndexData_t, i this,
					int i);  // 442
				operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>, VfxVariableIndexData_t, i this,
						int i);  // 161
				VfxVariableIsArtistEditable(int nVarType); // 163
				{
					int nParamIdx; // 165
					AlignedByteArrayExplicit_t<6, short int, 2>::Base(); // 74
					CUtlLeanVectorFixedGrowableBase<short int, 6, short int>::Base(); // 452
					CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<short int, 6, short int>, short int, short int>::Element(
						int i);  // 442
					CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<short int, 6, short int>, short int, short int>::operator[](
							int i);  // 165
					CUtlMemory<CMaterialParam, int>::operator[](
							int i);  // 602
					CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Element(
						int i);  // 166
					CVfxParam::IsDynamic(); // 166
				}
			}
		}
		IsConstantBufferForStaticComboStatic(const CVfxProgramData* pProgramData,
							const CVfxStaticComboData* pStaticComboData,
							const CVfxPerLayerProgramData* pPerLayerProgramData,
							const CMaterialLayer* pLayer,
							EBatchableModes_t nMode,
							bool bSpewWarnings);  // 2049
	}
	CMaterial2::IsEdited(); // 2054
} /* size: 1115, variables: 5, inline expansions: 1 (7 bytes) */

// <00177FC5> materialsystem2/material2.cpp:2068
// variables: 6
// function calls: 12
void CMaterialLayer::AllocCommandBufferData(int nBytes, const void* pInitData)
{
	const char   __FUNCTION__; // 63135
	int nAlignedBytes; // 2072
	int nDataIdx; // 2073
	uint8* pData; // 2077
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2070
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2074
	}
	AlignValue<int>(int val,
			uintp alignment);  // 2072
	CUtlLeanVectorImpl<CUtlLeanVectorBase<unsigned char, int>, unsigned char, int>::Count(); // 2073
	CUtlLeanVectorBase<unsigned char, int>::EnsureCapacity(
			int nCapacity,
			bool bConservative);  // 516
	CUtlLeanVectorImpl<CUtlLeanVectorBase<unsigned char, int>, unsigned char, int>::SetCount(
		int nCount);  // 2075
	CUtlLeanVectorBase<unsigned char, int>::Base(); // 279
	CUtlLeanVectorBase<unsigned char, int>::Base(); // 447
	CUtlLeanVectorImpl<CUtlLeanVectorBase<unsigned char, int>, unsigned char, int>::Element(
		int i);  // 438
	CUtlLeanVectorImpl<CUtlLeanVectorBase<unsigned char, int>, unsigned char, int>::operator[](
			int i);  // 2077
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 2080
	memset(void* __dest,
		int __ch,
		size_t __len);  // 51
	V_memset(void* dest,
		int fill,
		int count);  // 2086
} /* size: 0, variables: 4, inline expansions: 12 (553 bytes) */

// <00177BBB> materialsystem2/material2.cpp:2092
// variables: 6
// function calls: 13
void CMaterialLayer::ReclaimCommandBufferData(int nStart, int nBytes)
{
	const char   __FUNCTION__; // 63189
	int nRegionEnd; // 2098
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2095
	}
	{
		int nProgramType; // 2099
		{
			int i; // 2101
			{
				int nIndex; // 2103
				CUtlLeanVectorFixedGrowableBase<int, 3, short int>::Base(); // 64
				CUtlLeanVectorFixedGrowableBase<int, 3, short int>::Base(); // 447
				CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<int, 3, short int>, int, short int>::Element(
					int i);  // 438
				CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<int, 3, short int>, int, short int>::operator[](
						int i);  // 2103
			}
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<int, 3, short int>, int, short int>::Count(); // 2101
		}
	}
	AlignValue<int>(int val,
			uintp alignment);  // 2095
	CUtlLeanVectorBase<unsigned char, int>::Base(); // 279
	CUtlLeanVectorBase<unsigned char, int>::Base(); // 707
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 109
	V_memmove(void* dest,
			const void* src,
			ptrdiff_t count);  // 134
	UtlTraitsMoveRange<unsigned char>(unsigned char* pFrom,
						unsigned char* pFromEnd,
						unsigned char* pTo);  // 127
	UtlTraitsMoveRange<unsigned char>(unsigned char* pFrom,
						unsigned char* pFromEnd,
						unsigned char* pTo);  // 709
	CUtlLeanVectorImpl<CUtlLeanVectorBase<unsigned char, int>, unsigned char, int>::RemoveMultiple(
			int nIdx,
			int nRemove);  // 2111
} /* size: 0, variables: 2, inline expansions: 8 (166 bytes) */

// <001AD8E0> materialsystem2/material2.cpp:2116
void CMaterialLayer::RecreateStaticConstantAndCommandBuffers()
{
} /* size: 0 */

// <001AD7B7> materialsystem2/material2.cpp:2116
// variables: 5
// function call: 1
void CMaterialLayer::RecreateStaticConstantAndCommandBuffers()
{
	{
		int nProgramType; // 2123
		{
			VfxProgram_t programType; // 2125
			bool bStaticConstantBuffer; // 2133
			CVfx::HasShaderProgram(
					VfxProgram_t programType);  // 2127
			{
				CVfxPerLayerProgramData* pPerLayerProgramData; // 2136
				const CVfxStaticComboData& staticComboData; // 2137
			}
		}
	}
} /* size: 159 */

// <00177B36> materialsystem2/material2.cpp:2116
// variables: 7
void CMaterialLayer::RecreateStaticConstantAndCommandBuffers()
{
	{
		int nProgramType; // 2123
		{
			VfxProgram_t programType; // 2125
			bool bStaticConstantBuffer; // 2133
			{
				CVfxPerLayerProgramData* pPerLayerProgramData; // 2136
				const CVfxStaticComboData& staticComboData; // 2137
			}
			{
				CVfxPerLayerProgramData* pPerLayerProgramData; // 2143
				const CVfxStaticComboData& staticComboData; // 2144
			}
		}
	}
} /* size: 0 */

// <00177987> materialsystem2/material2.cpp:2153
// variables: 8
// function calls: 3
void CMaterialLayer::CreateNonStaticConstantBuffers()
{
	{
		int nProgramType; // 2155
		{
			VfxProgram_t programType; // 2157
			bool bStaticConstantBuffer; // 2164
			{
				CVfxPerLayerProgramData* pPerLayerProgramData; // 2167
				const CVfxStaticComboData& staticComboData; // 2168
			}
			{
				CVfxPerLayerProgramData* pPerLayerProgramData; // 2174
				const CVfxStaticComboData& staticComboData; // 2175
			}
			{
				int b; // 2654
			}
			CMaterial2::IsEdited(); // 2651
			CMaterialLayer::HasStaticConstantBuffer(
						VfxProgram_t programType);  // 2164
			CVfx::HasShaderProgram(
					VfxProgram_t programType);  // 2159
		}
	}
} /* size: 188 */

// <00176A3B> materialsystem2/material2.cpp:2182
// variables: 21
// function calls: 60
void CMaterialMode::ComputeRenderablePassesForContext(const CRenderAttributes* pAttributes, const CRenderAttributes* pAttributes2, MaterialRenderablePass_t* pRenderablePass)
{
	const int  MAX_DYNAMIC_COMBOS; // 2199
	VfxComboValue_t pDynamicComboBuffer; // 2223
	const char   __FUNCTION__; // 63417
	{
		CUtlStringToken strTokenErrorVfx; // 2192
		CVfx::GetFilenameToken(); // 2193
		CUtlStringToken::operator==(
				const CUtlStringToken& other);  // 2193
	}
	{
		int nProgramType; // 2234
		{
			VfxProgram_t programType; // 2236
			const CVfxProgramData* pProgramData; // 2263
			const CVfxPerLayerProgramData* pPerLayerProgramData; // 2264
			int nNumDynamicCombos; // 2266
			VfxComboValue_t* pComboValueArray; // 2269
			const VfxComboValue_t* pValueArraysFeatureStaticDynamicRead; // 2290
			VfxComboValue_t* pValueArraysFeatureStaticDynamicWrite; // 2292
			uint64 nDynamicComboId; // 2315
			const CVfxStaticComboData& staticComboData; // 2321
			uint32 nDynamicComboIdx; // 2322
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2249
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2258
				CUtlString::Get(); // 99
				CUtlString::String(); // 2258
				CBufferString::IsEmpty(); // 1280
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 776
				CBufferString::String(); // 1280
				CVfx::GetFilename(); // 2258
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2267
			}
			{
				int nDynamicComboIter; // 2274
				{
					const CVfxCombo* pCombo; // 2276
					CUtlMemory<CVfxCombo, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CVfxCombo, CUtlMemory<CVfxCombo, int> >::operator[](
							int i);  // 2276
					Clamp<unsigned char>(const unsigned char& val,
								const unsigned char& minVal,
								const unsigned char& maxVal);  // 2282
				}
			}
			{
				int i; // 2316
				CUtlMemory<CVfxCombo, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CVfxCombo, CUtlMemory<CVfxCombo, int> >::operator[](
						int i);  // 2318
			}
			CVfx::HasShaderProgram(
					VfxProgram_t programType);  // 2238
			ConVar::GetInt(); // 351
			ConVar::GetBool(); // 2245
			CBufferString::IsEmpty(); // 1280
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 776
			CBufferString::String(); // 1280
			CVfx::GetFilename(); // 2247
			CUtlString::Get(); // 99
			CUtlString::String(); // 2256
			CBufferString::IsEmpty(); // 1280
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 776
			CBufferString::String(); // 1280
			CVfx::GetFilename(); // 2256
			CUtlVectorBase<CVfxCombo, CUtlMemory<CVfxCombo, int> >::Count(); // 2266
			Min<int>(const int& val1,
				const int& val2);  // 2268
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 2291
			AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
			CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 2295
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 2293
			CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 2296
			CUtlVectorBase<CVfxRule, CUtlMemory<CVfxRule, int> >::Count(); // 2303
			ThreadInterlockedExchangeAdd64(volatile int64* p,
							int64 value);  // 672
			CInterlockedIntT<long long unsigned int, 8>::operator+=(
					long long unsigned int add);  // 363
			CMaterial2::AddCost(
				int nCost);  // 2303
			CUtlVectorBase<CVfxRule, CUtlMemory<CVfxRule, int> >::Count(); // 2306
			ThreadInterlockedIncrement(volatile int32* p); // 576
			CInterlockedIntT<int, 4>::operator++(); // 582
			CInterlockedIntT<int, 4>::operator++(
					int);  // 262
			RecordVfxRule(void); // 2308
		}
	}
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 2190
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 234
	RecordMaterialCompute(void); // 2200
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 582
	CInterlockedIntT<unsigned int, 4>::operator++(
			int);  // 377
	CMaterial2::AddCompute(); // 2220
	CMaterialSystem2::GetFrameCount(); // 2227
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 2229
} /* size: 0, variables: 3, inline expansions: 13 (278 bytes) */

// <00176979> materialsystem2/material2.cpp:2336
// function call: 1
void CMaterialMode::ComputeRenderablePassesForContext(const CRenderAttributes* pAttributes, IRenderContext* pRenderContext, MaterialRenderablePass_t* pRenderablePassArray)
{
	IRenderContext::GetAttributes(); // 2338
} /* size: 27, inline expansions: 1 (11 bytes) */

// <0017683E> materialsystem2/material2.cpp:2343
// variables: 2
void CMaterialMode::GetRayTraceShader(RenderShaderHandle_t& hOutShader, CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& outData, uint32* pStaticDataHash, const CRenderAttributes* pAttributes, IRenderContext* pRenderContext)
{
	MaterialRenderablePass_t renderablePass; // 2350
	{
		uint32 nDynamicComboIdx; // 2354
	}
} /* size: 153, variables: 1 */

// <0017679D> materialsystem2/material2.cpp:2367
// function calls: 2
void CMaterialLayer::GetMaterialName()
{
	CUtlSymbol::IsValid(); // 285
	CMaterial2::GetName(); // 2369
} /* size: 82, inline expansions: 2 (29 bytes) */

// <00175F5B> materialsystem2/material2.cpp:2373
// variables: 11
// function calls: 23
void CMaterialLayer::SetRenderStateForRenderablePassWithCommandBuffers(const CRenderAttributes* pAttributes, const CRenderAttributes* pAttributes2, IRenderContext* pRenderContext, RenderInputLayout_t hInputLayout, const MaterialRenderablePass_t& renderablePass, const RsStencilStateOverride_t* pOverrideStencilState, const RsDepthBiasStateOverride_t* pOverrideDepthBiasState, const RsFillModeOverride_t* pOverrideFillMode, int nRequiredMipSize, uint32 nRenderStateSetNotAllowed)
{
	const char   __FUNCTION__; // 63794
	const uint8* pCmdBuffers; // 2396
	int nCmdBufferCount; // 2397
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2384
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2387
	}
	{
		int nProgramType; // 2400
		{
			VfxProgram_t programType; // 2402
			uint32 nDynamicComboIdx; // 2408
			int nIdx; // 2416
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2412
			}
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, int>, unsigned char, int>::Count(); // 137
			{
			}
			CUtlLeanVectorFixedGrowableBase<unsigned char, 12, int>::Base(); // 144
			{
			}
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<int, 3, short int>, int, short int>::Count(); // 124
			CMaterialLayer::HasCommandBufferData(
						int nProgramType);  // 129
			CUtlLeanVectorFixedGrowableBase<unsigned char, 12, int>::Base(); // 155
			CMaterialLayer::GetCommandBufferIndex(
						int nProgramType,
						uint32 nDynamicComboIdx);  // 127
			CMaterialLayer::GetCommandBufferIndex(
						int nProgramType,
						uint32 nDynamicComboIdx);  // 2416
			CUtlLeanVectorFixedGrowableBase<int, 3, short int>::Base(); // 452
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<int, 3, short int>, int, short int>::Element(
				int i);  // 442
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<int, 3, short int>, int, short int>::operator[](
					int i);  // 162
			CUtlLeanVectorBase<unsigned char, int>::Base(); // 452
			CUtlLeanVectorImpl<CUtlLeanVectorBase<unsigned char, int>, unsigned char, int>::Element(
				int i);  // 442
			CUtlLeanVectorImpl<CUtlLeanVectorBase<unsigned char, int>, unsigned char, int>::operator[](
					int i);  // 162
			CMaterialLayer::GetCommandBufferData(
						int nProgramType,
						int nBufIdx);  // 2419
			CVfx::HasShaderProgram(
					VfxProgram_t programType);  // 2403
		}
	}
	{
		uint32 nShaderDefaultBits; // 2430
	}
	CMaterialSystem2::GetFrameCount(); // 2385
	CMaterialSystem2::GetFrameCount(); // 2388
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 2388
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 582
	CInterlockedIntT<unsigned int, 4>::operator++(
			int);  // 391
	CMaterial2::AddSet(); // 2393
} /* size: 0, variables: 3, inline expansions: 8 (105 bytes) */

// <00175C82> materialsystem2/material2.cpp:2438
// variables: 8
// function calls: 8
void CMaterialLayer::GetShaderForRenderablePass(RenderShaderType_t renderProgramType, const MaterialRenderablePass_t& renderablePass)
{
	VfxProgram_t programType; // 2441
	const CVfxPerLayerProgramData* pPerLayerProgramData; // 2447
	const CVfxStaticComboData* pStaticComboData; // 2448
	uint32 nDynamicComboIdx; // 2450
	const char   __FUNCTION__; // 63238
	int nShaderIndex; // 2458
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2453
	}
	{
		int i; // 28
	}
	RenderShaderTypeToVfxProgramType(RenderShaderType_t renderProgramType); // 2441
	CVfx::HasShaderProgram(
			VfxProgram_t programType);  // 2442
	ProgramTypeToMaterialShaderProgramType(VfxProgram_t programType); // 2450
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 2451
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 2458
	CUtlMemory<RenderShaderHandle_t__::operator[](
			int i);  // 595
	CUtlVectorBase<RenderShaderHandle_t__::operator[](
			int i);  // 2459
} /* size: 0, variables: 6, inline expansions: 8 (39 bytes) */

// <001755F7> materialsystem2/material2.cpp:2462
// variables: 9
// function calls: 22
void CMaterialLayer::GetConstantBufferInfoForRenderablePass(RenderShaderType_t renderProgramType, const MaterialRenderablePass_t& renderablePass, MaterialPassConstantBufferInfo_t* pBufferInfo, int nBufferInfoMax)
{
	VfxProgram_t programType; // 2467
	uint32 nDynamicComboIdx; // 2473
	const char   __FUNCTION__; // 63537
	int nIdx; // 2481
	const uint8* pCmdBuffers; // 2492
	int nConstantBuffers; // 2494
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2477
	}
	{
		int i; // 2487
		CUtlStringToken::CUtlStringToken(); // 53
		MaterialPassConstantBufferInfo_t::Clear(); // 2489
	}
	{
		int i; // 28
	}
	RenderShaderTypeToVfxProgramType(RenderShaderType_t renderProgramType); // 2467
	CVfx::HasShaderProgram(
			VfxProgram_t programType);  // 2468
	ProgramTypeToMaterialShaderProgramType(VfxProgram_t programType); // 2473
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<int, 3, short int>, int, short int>::Count(); // 124
	CMaterialLayer::HasCommandBufferData(
				int nProgramType);  // 129
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, int>, unsigned char, int>::Count(); // 137
	{
	}
	AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, int>::Base(); // 144
	{
	}
	AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, int>::Base(); // 155
	CMaterialLayer::GetCommandBufferIndex(
				int nProgramType,
				uint32 nDynamicComboIdx);  // 127
	CMaterialLayer::GetCommandBufferIndex(
				int nProgramType,
				uint32 nDynamicComboIdx);  // 2481
	AlignedByteArrayExplicit_t<3, int, 4>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<int, 3, short int>::Base(); // 452
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<int, 3, short int>, int, short int>::Element(
		int i);  // 442
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<int, 3, short int>, int, short int>::operator[](
			int i);  // 162
	CUtlLeanVectorBase<unsigned char, int>::Base(); // 452
	CUtlLeanVectorImpl<CUtlLeanVectorBase<unsigned char, int>, unsigned char, int>::Element(
		int i);  // 442
	CUtlLeanVectorImpl<CUtlLeanVectorBase<unsigned char, int>, unsigned char, int>::operator[](
			int i);  // 162
	CMaterialLayer::GetCommandBufferData(
				int nProgramType,
				int nBufIdx);  // 2493
} /* size: 0, variables: 6, inline expansions: 20 (781 bytes) */

// <0017529D> materialsystem2/material2.cpp:2500
// variables: 7
// function calls: 9
void CMaterialLayer::GetConstantBufferDataForRenderablePass(RenderShaderType_t renderShaderType, const MaterialRenderablePass_t& renderablePass, CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& bufferOut, const CRenderAttributes* pAttributes)
{
	VfxProgram_t programType; // 2511
	const CVfxPerLayerProgramData* pPerLayerProgramData; // 2527
	const CVfxStaticComboData* pStaticComboData; // 2528
	const char   __FUNCTION__; // 63537
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2533
	}
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 2505
	{
		int i; // 28
	}
	RenderShaderTypeToVfxProgramType(RenderShaderType_t renderProgramType); // 2511
	CVfx::HasShaderProgram(
			VfxProgram_t programType);  // 2512
	{
		int i; // 1554
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 1554
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 602
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Element(
			int i);  // 1556
	}
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::FillWithValue(
			const unsigned char& src);  // 2538
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 2540
} /* size: 0, variables: 4, inline expansions: 6 (108 bytes) */

// <00174C06> materialsystem2/material2.cpp:2546
// variables: 9
// function calls: 22
void CMaterialLayer::GetRenderStatesForRenderablePass(RenderShaderType_t renderProgramType, const MaterialRenderablePass_t& renderablePass, RsRasterizerStateHandle_t* pRsOut, RsDepthStencilStateHandle_t* pDsOut, RsBlendStateHandle_t* pBsOut)
{
	VfxProgram_t programType; // 2552
	const CVfxPerLayerProgramData* pPerLayerProgramData; // 2558
	const CVfxStaticComboData* pStaticComboData; // 2559
	uint32 nDynamicComboIdx; // 2561
	const char   __FUNCTION__; // 63390
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2564
	}
	{
		int nIdx; // 2571
		const uint8* pCmdBuffers; // 2577
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<int, 3, short int>, int, short int>::Count(); // 124
		CMaterialLayer::HasCommandBufferData(
					int nProgramType);  // 129
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, int>, unsigned char, int>::Count(); // 137
		{
		}
		AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, int>::Base(); // 144
		{
		}
		AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, int>::Base(); // 155
		CMaterialLayer::GetCommandBufferIndex(
					int nProgramType,
					uint32 nDynamicComboIdx);  // 127
		CMaterialLayer::GetCommandBufferIndex(
					int nProgramType,
					uint32 nDynamicComboIdx);  // 2571
		AlignedByteArrayExplicit_t<3, int, 4>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<int, 3, short int>::Base(); // 452
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<int, 3, short int>, int, short int>::Element(
			int i);  // 442
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<int, 3, short int>, int, short int>::operator[](
				int i);  // 162
		CUtlLeanVectorBase<unsigned char, int>::Base(); // 452
		CUtlLeanVectorImpl<CUtlLeanVectorBase<unsigned char, int>, unsigned char, int>::Element(
			int i);  // 442
		CUtlLeanVectorImpl<CUtlLeanVectorBase<unsigned char, int>, unsigned char, int>::operator[](
				int i);  // 162
		CMaterialLayer::GetCommandBufferData(
					int nProgramType,
					int nBufIdx);  // 2578
	}
	{
		int i; // 28
	}
	RenderShaderTypeToVfxProgramType(RenderShaderType_t renderProgramType); // 2552
	CVfx::HasShaderProgram(
			VfxProgram_t programType);  // 2553
	ProgramTypeToMaterialShaderProgramType(VfxProgram_t programType); // 2561
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 2562
	VfxProgramHasRenderState(VfxProgram_t programType); // 2569
} /* size: 0, variables: 5, inline expansions: 5 (40 bytes) */

// <001749AA> materialsystem2/material2.cpp:2585
// variables: 8
// function calls: 2
void CMaterialLayer::FillConstantBufferData(const CRenderAttributes* pAttributes, const CRenderAttributes* pAttributes2, float32* pConstantBufferDataOut, DynamicRenderState_t* pDynamicRenderState, const VfxVariableIndexData_t* pVarIndexAndRegisterOffsetArray, int nVarIndexAndRegisterOffsetCount, int nFirstVarRenderStateElement, int nFirstVarConstantElement, VfxProgram_t programType, int nRequiredMipSize, IRenderContext* pRenderContext)
{
	const CVfxProgramData* pProgramData; // 2597
	const CVfxPerLayerProgramData* pPerLayerProgramData; // 2598
	int32 nStartVariable; // 2602
	int32 nEndVariable; // 2603
	{
		int i; // 2619
		{
			int nVariableIndex; // 2621
			int nRegisterOffset; // 2622
			const CVfxVariableDescription* pVar; // 2623
			CUtlMemory<CVfxVariableDescription, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::operator[](
					int i);  // 2623
		}
	}
} /* size: 236, variables: 4 */

// <001746A6> materialsystem2/material2.cpp:2632
// function calls: 14
void CMaterialLayer::DestroyCommandBuffers(VfxProgram_t programType, bool bRemoveData)
{
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<int, 3, short int>, int, short int>::Count(); // 2636
	AlignedByteArrayExplicit_t<3, int, 4>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<int, 3, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<int, 3, short int>::Base(); // 447
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<int, 3, short int>, int, short int>::Element(
		int i);  // 438
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<int, 3, short int>, int, short int>::operator[](
			int i);  // 2638
	CUtlLeanVectorFixedGrowableBase<int, 3, short int>::RemoveAll(); // 191
	CUtlLeanVectorFixedGrowableBase<int, 3, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<int, 3, short int>::Base(); // 194
	CUtlLeanVectorFixedGrowableBase<int, 3, short int>::Purge(); // 2642
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, int>::RemoveAll(); // 191
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, int>::Base(); // 194
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, int>::Purge(); // 2644
} /* size: 0, inline expansions: 14 (344 bytes) */

// <001AD072> materialsystem2/material2.cpp:2649
// variable: 1
// function call: 1
void CMaterialLayer::HasStaticConstantBuffer(VfxProgram_t programType)
{
	CMaterial2::IsEdited(); // 2651
	{
		int b; // 2654
	}
} /* size: 148, inline expansions: 1 (7 bytes) */

// <0017466F> materialsystem2/material2.cpp:2649
// variable: 1
void CMaterialLayer::HasStaticConstantBuffer(VfxProgram_t programType)
{
	{
		int b; // 2654
	}
} /* size: 0 */

// <0017462E> materialsystem2/material2.cpp:2663
// variable: 1
int32 FindOrAddCommandBuffer(CUtlVectorFixedGrowable<CMaterialLayer::CommandBufferInfo_t, 32>& cmdBuffers, CommandBufferInfo_t cmdBufInfo)
{
	{
		int i; // 2670
	}
} /* size: 0 */

// <00172BEA> materialsystem2/material2.cpp:2683
// variables: 21
// function calls: 107
void CMaterialLayer::RecreateCommandBuffers(VfxProgram_t programType)
{
	const CVfxPerLayerProgramData* pPerLayerProgramData; // 2687
	const CVfxStaticComboData& staticComboData; // 2688
	uint64 nDynamicComboCount; // 2689
	const char   __FUNCTION__; // 63135
	CUtlVector<int, CUtlMemory<int, int> > cmdBufIndices; // 2693
	int nMaxIdx; // 2695
	CUtlVectorFixedGrowable<CMaterialLayer::CommandBufferInfo_t, 32> tmpCmdBuffers; // 2697
	int nStartDataBytes; // 2723
	bool bConservative; // 2758
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2690
	}
	{
		int i; // 2699
		{
			CommandBufferInfo_t cmdBufInfo; // 2708
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 888
			CVfxStaticComboData::AreDynamicComboIDsCompact(); // 912
			CUtlVectorBase<CVfxVariableIndexRefArray, CUtlMemory<CVfxVariableIndexRefArray, int> >::Count(); // 892
			CVfxStaticComboData::IsDynamicComboVariableDataCompact(); // 913
			CUtlMemory<CVfxVariableIndexArray, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CVfxVariableIndexArray, CUtlMemory<CVfxVariableIndexArray, int> >::operator[](
					int i);  // 903
			IsEmpty(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>, VfxVariableIndexData_t, i this); // 903
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 904
			CVfxStaticComboData::IsLooseDynamicComboSkipped(
							int nCombo);  // 918
			CVfxStaticComboData::IsDynamicComboSkipped(
						int nCombo);  // 2701
			{
				int i; // 2670
				Count(const CUtlVectorBase<CMaterialLayer::CommandBufferInfo_t, CUtlMemoryFixedGrowable<CMaterialLayer::CommandBufferInfo this); // 2670
				CUtlMemory<CMaterialLayer::CommandBufferInfo_t, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CMaterialLayer::CommandBufferInfo_t, CUtlMemoryFixedGrowable<CMaterialLayer::CommandBufferInfo_t, 32 this,
						int i);  // 2672
			}
			CUtlMemory<CMaterialLayer::CommandBufferInfo_t, int>::NumAllocated(); // 1196
			CUtlMemory<CMaterialLayer::CommandBufferInfo_t, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CMaterialLayer::CommandBufferInfo_t, CUtlMemoryFixedGrowable<CMaterialLayer::CommandBufferInfo_t, 32 this,
				int i);  // 1201
			CopyConstruct<CMaterialLayer::CommandBufferInfo_t>(CommandBufferInfo_t* pMemory,
										const CommandBufferInfo_t& src);  // 1201
			CUtlMemory<CMaterialLayer::CommandBufferInfo_t, int>::IsGrowable(); // 823
			CUtlMemory<CMaterialLayer::CommandBufferInfo_t, int>::IsExternallyAllocated(); // 859
			CUtlMemory<CMaterialLayer::CommandBufferInfo_t, int>::IsExternallyAllocated(); // 861
			CUtlMemory<CMaterialLayer::CommandBufferInfo_t, int>::Grow(
				int num);  // 806
			ResetDbgInfo(const CUtlVectorBase<CMaterialLayer::CommandBufferInfo_t, CUtlMemoryFixedGrowable<CMaterialLayer::CommandBufferInfo_t, 32 this); // 824
			GrowMemory(const CUtlVectorBase<CMaterialLayer::CommandBufferInfo_t, CUtlMemoryFixedGrowable<CMaterialLayer::CommandBufferInfo_t, 32 this,
					int num);  // 1198
			AddToTail(const CUtlVectorBase<CMaterialLayer::CommandBufferInfo_t, CUtlMemoryFixedGrowable<CMaterialLayer::CommandBufferInfo_t, 32 this,
					const CommandBufferInfo_t& src);  // 2679
			FindOrAddCommandBuffer(CUtlVectorFixedGrowable<CMaterialLayer::CommandBufferInfo_t, 32>& cmdBuffers,
						CommandBufferInfo_t cmdBufInfo);  // 2717
			Max<int>(const int& val1,
				const int& val2);  // 2718
		}
	}
	{
		int i; // 2724
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<int, 3, short int>, int, short int>::Count(); // 2724
		AlignedByteArrayExplicit_t<3, int, 4>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<int, 3, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<int, 3, short int>::Base(); // 447
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<int, 3, short int>, int, short int>::Element(
			int i);  // 438
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<int, 3, short int>, int, short int>::operator[](
				int i);  // 2726
		CUtlMemory<CMaterialLayer::CommandBufferInfo_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CMaterialLayer::CommandBufferInfo_t, CUtlMemoryFixedGrowable<CMaterialLayer::CommandBufferInfo_t, 32 this,
				int i);  // 2727
		CUtlMemory<CMaterialLayer::CommandBufferInfo_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CMaterialLayer::CommandBufferInfo_t, CUtlMemoryFixedGrowable<CMaterialLayer::CommandBufferInfo_t, 32 this,
				int i);  // 2726
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2733
	}
	{
		uint16* pOut; // 2739
		{
			int i; // 2740
		}
		AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, int>::Base(); // 2739
	}
	{
		uint8* pOut; // 2747
		{
			int i; // 2748
		}
		AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, int>::Base(); // 2747
	}
	CUtlVectorBase<CVfxVariableIndexRefArray, CUtlMemory<CVfxVariableIndexRefArray, int> >::Count(); // 892
	CVfxStaticComboData::IsDynamicComboVariableDataCompact(); // 896
	CUtlVectorBase<CVfxVariableIndexArray, CUtlMemory<CVfxVariableIndexArray, int> >::Count(); // 898
	CVfxStaticComboData::GetDynamicComboCount(); // 2689
	CUtlMemory<int, int>::Grow(
		int num);  // 806
	CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<int, CUtlMemory<int, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<int, CUtlMemory<int, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<int, CUtlMemory<int, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<int, CUtlMemory<int, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<int, CUtlMemory<int, int> >::SetCount(
		int count);  // 2694
	ResetDbgInfo(const CUtlVectorBase<CMaterialLayer::CommandBufferInfo_t, CUtlMemoryFixedGrowable<CMaterialLayer::CommandBufferInfo_t, 32 this); // 530
	CUtlMemory<CMaterialLayer::CommandBufferInfo_t, int>::CUtlMemory(
			CommandBufferInfo_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CMaterialLayer::CommandBufferInfo_t, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CMaterialLayer::CommandBufferInfo_t, int>::CUtlMemoryFixedGrowable_Base(
					CommandBufferInfo_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<32, CMaterialLayer::CommandBufferInfo_t, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<32, CMaterialLayer::CommandBufferInfo_t>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<32, CMaterialLayer::CommandBufferInfo_t, 8>::Base(); // 231
	CUtlMemoryFixedGrowable<CMaterialLayer::CommandBufferInfo_t, 32, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase(const CUtlVectorBase<CMaterialLayer::CommandBufferInfo_t, CUtlMemoryFixedGrowable<CMaterialLayer::CommandBufferInfo_t, 32 this,
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CMaterialLayer::CommandBufferInfo_t, 32>::CUtlVectorFixedGrowable(
				int growSize);  // 2697
	Count(const CUtlVectorBase<CMaterialLayer::CommandBufferInfo_t, CUtlMemoryFixedGrowable<CMaterialLayer::CommandBufferInfo this); // 2722
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<int, 3, short int>, int, short int>::SetCount(
		int nCount);  // 2722
	CUtlLeanVectorImpl<CUtlLeanVectorBase<unsigned char, int>, unsigned char, int>::Count(); // 2723
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 2693
	CUtlLeanVectorImpl<CUtlLeanVectorBase<unsigned char, int>, unsigned char, int>::Count(); // 2729
	{
		ElemType_t* pNew; // 168
		ElemType_t* pBase; // 169
		AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, int>::Base(); // 169
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 85
		V_memcpy(void* dest,
			const void* src,
			ptrdiff_t count);  // 91
		UtlTraitsMoveRawMemoryRange<unsigned char>(unsigned char* pFrom,
								unsigned char* pFromEnd,
								unsigned char* pTo);  // 170
	}
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, int>::EnsureCapacity(
			int nCapacity,
			bool bConservative);  // 516
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, int>, unsigned char, int>::SetCount(
		int nCount);  // 2735
	CUtlLeanVectorImpl<CUtlLeanVectorBase<unsigned char, int>, unsigned char, int>::Count(); // 2759
	CUtlLeanVectorBase<unsigned char, int>::EnsureCapacity(
			int nCapacity,
			bool bConservative);  // 2759
	RemoveAll(const CUtlVectorBase<CMaterialLayer::CommandBufferInfo_t, CUtlMemoryFixedGrowable<CMaterialLayer::CommandBufferInfo_t, 32 this); // 1798
	AlignedByteArrayExplicit_t<32, CMaterialLayer::CommandBufferInfo_t, 8>::Base(); // 237
	CUtlMemory<CMaterialLayer::CommandBufferInfo_t, int>::IsExternallyAllocated(); // 577
	CUtlMemory<CMaterialLayer::CommandBufferInfo_t, int>::ConvertToExternalMemory(
				CommandBufferInfo_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CMaterialLayer::CommandBufferInfo_t, int>::Purge_FixedGrowable(
				CommandBufferInfo_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CMaterialLayer::CommandBufferInfo_t, int>::Purge_FixedGrowable(
				CommandBufferInfo_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<CMaterialLayer::CommandBufferInfo_t, 32, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<CMaterialLayer::CommandBufferInfo_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CMaterialLayer::CommandBufferInfo_t, CUtlMemoryFixedGrowable<CMaterialLayer::CommandBufferInfo_t, 32 this); // 368
	ResetDbgInfo(const CUtlVectorBase<CMaterialLayer::CommandBufferInfo_t, CUtlMemoryFixedGrowable<CMaterialLayer::CommandBufferInfo_t, 32 this); // 1800
	Purge(const CUtlVectorBase<CMaterialLayer::CommandBufferInfo_t, CUtlMemoryFixedGrowable<CMaterialLayer::CommandBufferInfo_t, 32 this); // 560
	ValidateAlignment<CMaterialLayer::CommandBufferInfo_t>(void); // 508
	CUtlMemory<CMaterialLayer::CommandBufferInfo_t, int>::Purge(); // 903
	CUtlMemory<CMaterialLayer::CommandBufferInfo_t, int>::Purge(); // 510
	CUtlMemory<CMaterialLayer::CommandBufferInfo_t, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CMaterialLayer::CommandBufferInfo_t, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CMaterialLayer::CommandBufferInfo_t, 32, int>::~CUtlMemoryFixedGrowable(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CMaterialLayer::CommandBufferInfo_t, CUtlMemoryFixedGrowable<CMaterialLayer::CommandBufferInfo_t, 32 this); // 478
	CUtlVectorFixedGrowable<CMaterialLayer::CommandBufferInfo_t, 32>::~CUtlVectorFixedGrowable(); // 2760
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 2760
} /* size: 0, variables: 9, inline expansions: 58 (2693 bytes) */

// <001727C0> materialsystem2/material2.cpp:2763
// variables: 6
// function calls: 12
void CMaterialLayer::GetRayTraceShader(RenderShaderHandle_t& hOutShader, CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& outData, uint32* pStaticDataHash, uint32 nDynamicComboIdx, const CRenderAttributes* pRenderAttributes, IRenderContext* pRenderContext)
{
	const CVfxPerLayerProgramData* pPerLayerProgramData; // 2776
	const CVfxStaticComboData* pStaticComboData; // 2777
	const char   __FUNCTION__; // 63010
	int nShaderIndex; // 2786
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2781
	}
	CVfx::HasShaderProgram(
			VfxProgram_t programType);  // 2771
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 2779
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 2786
	CUtlMemory<RenderShaderHandle_t__::operator[](
			int i);  // 595
	CUtlVectorBase<RenderShaderHandle_t__::operator[](
			int i);  // 2787
	{
		int i; // 1554
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 1554
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 602
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Element(
			int i);  // 1556
	}
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::FillWithValue(
			const unsigned char& src);  // 2789
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 2792
} /* size: 0, variables: 4, inline expansions: 9 (78 bytes) */

// <0016DB9C> materialsystem2/material2.cpp:2803
// variables: 65
// function calls: 256
void CMaterialLayer::CreateCommandBuffer(VfxProgram_t programType, uint32 nDynamicComboIdx)
{
	CTmpCmdBuffer& cmdBuf; // 2805
	CTmpCmdBuffer& preambleCmdBuf; // 2806
	const CScopeGuardLambdaImpl<CMaterialLayer::CreateCommandBuffer(VfxProgram_t, uint32)::<lambda()> >& generated_id_2807; // 2807
	CommandBufferInfo_t cmdBufInfo; // 2815
	const CVfxProgramData* pProgramData; // 2826
	const CVfxPerLayerProgramData* pPerLayerProgramData; // 2827
	const CVfxStaticComboData* pStaticComboData; // 2828
	int nShaderIndex; // 2831
	RenderShaderHandle_t shaderHandle; // 2832
	const char   __FUNCTION__; // 63059
	uint32 defaultRenderState; // 2848
	DynamicRenderState_t dynRs; // 2886
	const VfxVariableIndexData_t* pVarIndexAndRegisterOffsetArray; // 2893
	int nFirstVarRenderStateElement; // 2894
	int nFirstVarConstantElement; // 2895
	int nVarIndexAndRegisterOffsetCount; // 2896
	bool bNeedsRenderStateFlush; // 2911
	MatOpStop_t op; // 3159
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2844
	}
	{
		MatOpSetProgramType_t op; // 2855
		PutInCmdBuf<MatOpSetProgramType_t>(CUtlBuffer* pBuf,
							const MatOpSetProgramType_t& obj);  // 2857
		V_memset(void* dest,
			int fill,
			size_t count);  // 175
		MatOpBase_t::MatOpBase_t(
				uint32 nOpCode,
				size_t nOpSize);  // 198
		MatOpHelper_t<1, MatOpSetProgramType_t>::MatOpHelper_t(); // 211
		MatOpSetProgramType_t::MatOpSetProgramType_t(); // 2855
	}
	{
		MatOpBindVertexShader_t op; // 2866
		V_memset(void* dest,
			int fill,
			size_t count);  // 175
		MatOpBase_t::MatOpBase_t(
				uint32 nOpCode,
				size_t nOpSize);  // 198
		MatOpHelper_t<3, MatOpBindVertexShader_t>::MatOpHelper_t(); // 221
		MatOpBindVertexShader_t::MatOpBindVertexShader_t(); // 2866
		PutInCmdBuf<MatOpBindVertexShader_t>(CUtlBuffer* pBuf,
							const MatOpBindVertexShader_t& obj);  // 2868
	}
	{
		MatOpBindShader_t op; // 2873
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2882
		}
		V_memset(void* dest,
			int fill,
			size_t count);  // 175
		MatOpBase_t::MatOpBase_t(
				uint32 nOpCode,
				size_t nOpSize);  // 198
		MatOpHelper_t<2, MatOpBindShader_t>::MatOpHelper_t(); // 216
		MatOpBindShader_t::MatOpBindShader_t(); // 2873
		PutInCmdBuf<MatOpBindShader_t>(CUtlBuffer* pBuf,
						const MatOpBindShader_t& obj);  // 2875
	}
	{
		int i; // 2902
		{
			const int  nVariableIndex; // 2904
			const int  nRegisterOffset; // 2905
			const int  nDescriptorSet; // 2906
			const CVfxVariableDescription* pVar; // 2907
			CUtlMemory<CVfxVariableDescription, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::operator[](
					int i);  // 2907
		}
	}
	{
		RsRasterizerStateHandle_t hRs; // 2916
		RsDepthStencilStateHandle_t hDs; // 2917
		RsBlendStateHandle_t hBs; // 2918
		bool bIsDefaultRasterizerState; // 2938
		bool bIsDefaultDepthStencilState; // 2939
		bool bIsDefaultBlendState; // 2940
		{
			MatOpSetRasterizerStateDesc_t op; // 2967
			V_memset(void* dest,
				int fill,
				size_t count);  // 175
			MatOpBase_t::MatOpBase_t(
					uint32 nOpCode,
					size_t nOpSize);  // 198
			MatOpHelper_t<14, MatOpSetRasterizerStateDesc_t>::MatOpHelper_t(); // 299
			RsRasterizerStateDesc_t::RsRasterizerStateDesc_t(); // 299
			MatOpSetRasterizerStateDesc_t::MatOpSetRasterizerStateDesc_t(); // 2967
			PutInCmdBuf<MatOpSetRasterizerStateDesc_t>(CUtlBuffer* pBuf,
									const MatOpSetRasterizerStateDesc_t& obj);  // 2969
		}
		{
			MatOpSetDepthStencilStateDesc_t op; // 2975
			V_memset(void* dest,
				int fill,
				size_t count);  // 175
			MatOpBase_t::MatOpBase_t(
					uint32 nOpCode,
					size_t nOpSize);  // 198
			MatOpHelper_t<15, MatOpSetDepthStencilStateDesc_t>::MatOpHelper_t(); // 310
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 251
			RsStencilStateDesc_t::RsStencilStateDesc_t(); // 433
			RsStencilStateDesc_t::RsStencilStateDesc_t(
						bool bStencilEnable,
						uint8 nStencilReadMask,
						uint8 nStencilWriteMask,
						RsStencilOp_t frontStencilFailOp,
						RsStencilOp_t frontStencilDepthFailOp,
						RsStencilOp_t frontStencilPassOp,
						RsComparison_t frontStencilFunc,
						RsStencilOp_t backStencilFailOp,
						RsStencilOp_t backStencilDepthFailOp,
						RsStencilOp_t backStencilPassOp,
						RsComparison_t backStencilFunc);  // 356
			RsDepthStencilStateDesc_t::RsDepthStencilStateDesc_t(
							bool bDepthTestEnable,
							bool bDepthWriteEnable,
							RsComparison_t depthFunc,
							bool bStencilEnable,
							uint8 nStencilReadMask,
							uint8 nStencilWriteMask,
							RsStencilOp_t frontStencilFailOp,
							RsStencilOp_t frontStencilDepthFailOp,
							RsStencilOp_t frontStencilPassOp,
							RsComparison_t frontStencilFunc,
							RsStencilOp_t backStencilFailOp,
							RsStencilOp_t backStencilDepthFailOp,
							RsStencilOp_t backStencilPassOp,
							RsComparison_t backStencilFunc);  // 429
			DefaultDepthStencilStateDesc(void); // 424
			DefaultDepthStencilStateDesc(void); // 435
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 435
			RsDepthStencilStateDesc_t::RsDepthStencilStateDesc_t(); // 310
			MatOpSetDepthStencilStateDesc_t::MatOpSetDepthStencilStateDesc_t(); // 2975
			PutInCmdBuf<MatOpSetDepthStencilStateDesc_t>(CUtlBuffer* pBuf,
									const MatOpSetDepthStencilStateDesc_t& obj);  // 2977
		}
		{
			MatOpSetBlendStateDesc_t op; // 2983
			V_memset(void* dest,
				int fill,
				size_t count);  // 175
			MatOpBase_t::MatOpBase_t(
					uint32 nOpCode,
					size_t nOpSize);  // 198
			MatOpHelper_t<16, MatOpSetBlendStateDesc_t>::MatOpHelper_t(); // 315
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
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 656
			RsBlendStateDesc_t::RsBlendStateDesc_t(); // 315
			MatOpSetBlendStateDesc_t::MatOpSetBlendStateDesc_t(); // 2983
			PutInCmdBuf<MatOpSetBlendStateDesc_t>(CUtlBuffer* pBuf,
								const MatOpSetBlendStateDesc_t& obj);  // 2985
		}
		{
			MatOpBindRasterizerState_t op; // 2993
			V_memset(void* dest,
				int fill,
				size_t count);  // 175
			MatOpBase_t::MatOpBase_t(
					uint32 nOpCode,
					size_t nOpSize);  // 198
			MatOpHelper_t<11, MatOpBindRasterizerState_t>::MatOpHelper_t(); // 284
			MatOpBindRasterizerState_t::MatOpBindRasterizerState_t(); // 2993
			PutInCmdBuf<MatOpBindRasterizerState_t>(CUtlBuffer* pBuf,
								const MatOpBindRasterizerState_t& obj);  // 2995
		}
		{
			MatOpBindDepthStencilState_t op; // 3001
			V_memset(void* dest,
				int fill,
				size_t count);  // 175
			MatOpBase_t::MatOpBase_t(
					uint32 nOpCode,
					size_t nOpSize);  // 198
			MatOpHelper_t<12, MatOpBindDepthStencilState_t>::MatOpHelper_t(); // 289
			MatOpBindDepthStencilState_t::MatOpBindDepthStencilState_t(); // 3001
			PutInCmdBuf<MatOpBindDepthStencilState_t>(CUtlBuffer* pBuf,
									const MatOpBindDepthStencilState_t& obj);  // 3003
		}
		{
			MatOpBindBlendState_t op; // 3009
			V_memset(void* dest,
				int fill,
				size_t count);  // 175
			MatOpBase_t::MatOpBase_t(
					uint32 nOpCode,
					size_t nOpSize);  // 198
			MatOpHelper_t<13, MatOpBindBlendState_t>::MatOpHelper_t(); // 294
			MatOpBindBlendState_t::MatOpBindBlendState_t(); // 3009
			PutInCmdBuf<MatOpBindBlendState_t>(CUtlBuffer* pBuf,
								const MatOpBindBlendState_t& obj);  // 3011
		}
		CUtlMemory<RsRasterizerStateHandle_t__::operator[](
				int i);  // 595
		CUtlVectorBase<RsRasterizerStateHandle_t__::operator[](
				int i);  // 2916
		CUtlMemory<RsDepthStencilStateHandle_t__::operator[](
				int i);  // 595
		CUtlVectorBase<RsDepthStencilStateHandle_t__::operator[](
				int i);  // 2917
		CUtlMemory<RsBlendStateHandle_t__::operator[](
				int i);  // 595
		CUtlVectorBase<RsBlendStateHandle_t__::operator[](
				int i);  // 2918
		CMaterialSystem2::GetDefaultRasterizerState(); // 2938
		CMaterialSystem2::GetDefaultDepthStencilState(); // 2939
		CMaterialSystem2::GetDefaultBlendState(); // 2940
		CVfx::HasShaderProgram(
				VfxProgram_t programType);  // 2943
	}
	{
		MatOpSetUsedSamplers_t opOut; // 3019
		{
			int i; // 3025
			{
				bool bIsCommonSampler; // 3035
				{
					int j; // 3036
					{
						MatOpSetCommonSamplerDesc0_t op; // 3042
						V_memset(void* dest,
							int fill,
							size_t count);  // 175
						MatOpBase_t::MatOpBase_t(
								uint32 nOpCode,
								size_t nOpSize);  // 198
						MatOpHelper_t<19, MatOpSetCommonSamplerDesc0_t>::MatOpHelper_t(); // 332
						MatOpSetCommonSamplerDesc0_t::MatOpSetCommonSamplerDesc0_t(); // 3042
						PutInCmdBuf<MatOpSetCommonSamplerDesc0_t>(CUtlBuffer* pBuf,
												const MatOpSetCommonSamplerDesc0_t& obj);  // 3045
					}
					CSamplerStateDescBase::operator==(
							const CSamplerStateDescBase& state);  // 3039
				}
				{
					MatOpSetSamplerDesc_t op; // 3052
					memset(void* __dest,
						int __ch,
						size_t __len);  // 67
					V_memset(void* dest,
						int fill,
						size_t count);  // 175
					MatOpBase_t::MatOpBase_t(
							uint32 nOpCode,
							size_t nOpSize);  // 198
					MatOpHelper_t<18, MatOpSetSamplerDesc_t>::MatOpHelper_t(); // 326
					CSamplerStateDescBase::CSamplerStateDescBase(); // 326
					MatOpSetSamplerDesc_t::MatOpSetSamplerDesc_t(); // 3052
					PutInCmdBuf<MatOpSetSamplerDesc_t>(CUtlBuffer* pBuf,
										const MatOpSetSamplerDesc_t& obj);  // 3055
				}
			}
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
			DefaultSamplerStateDesc(void); // 3029
			DynamicRenderState_t::IsSamplerTouched(
					int i);  // 3027
			CSamplerStateDescBase::operator==(
					const CSamplerStateDescBase& state);  // 3029
		}
		V_memset(void* dest,
			int fill,
			size_t count);  // 175
		MatOpBase_t::MatOpBase_t(
				uint32 nOpCode,
				size_t nOpSize);  // 198
		MatOpHelper_t<17, MatOpSetUsedSamplers_t>::MatOpHelper_t(); // 320
		MatOpSetUsedSamplers_t::MatOpSetUsedSamplers_t(); // 3019
		PutInCmdBuf<MatOpSetUsedSamplers_t>(CUtlBuffer* pBuf,
							const MatOpSetUsedSamplers_t& obj);  // 3022
	}
	{
		const ConstantBufferBindInfo_t& bindInfo; // 3088
		{
			const bool  bHasMaterialCBForThisDynamicCombo; // 3091
			bool bCBIsInDescriptorSet; // 3092
			{
				MatOpFillDynamicMaterialCB_t op; // 3098
				memset(void* __dest,
					int __ch,
					size_t __len);  // 67
				V_memset(void* dest,
					int fill,
					size_t count);  // 175
				MatOpBase_t::MatOpBase_t(
						uint32 nOpCode,
						size_t nOpSize);  // 198
				MatOpHelper_t<35, MatOpFillDynamicMaterialCB_t>::MatOpHelper_t(); // 410
				MatOpFillDynamicMaterialCB_t::MatOpFillDynamicMaterialCB_t(); // 3098
				PutInCmdBuf<MatOpFillDynamicMaterialCB_t>(CUtlBuffer* pBuf,
										const MatOpFillDynamicMaterialCB_t& obj);  // 3115
			}
			{
				MatOpFillDynamicGlobalsBDA_t op; // 3119
				PutInCmdBuf<MatOpFillDynamicGlobalsBDA_t>(CUtlBuffer* pBuf,
										const MatOpFillDynamicGlobalsBDA_t& obj);  // 3121
				V_memset(void* dest,
					int fill,
					size_t count);  // 175
				MatOpBase_t::MatOpBase_t(
						uint32 nOpCode,
						size_t nOpSize);  // 198
				MatOpHelper_t<41, MatOpFillDynamicGlobalsBDA_t>::MatOpHelper_t(); // 448
				MatOpFillDynamicGlobalsBDA_t::MatOpFillDynamicGlobalsBDA_t(); // 3119
			}
			{
				MatOpLoadCBLiteral_t op; // 3128
				memset(void* __dest,
					int __ch,
					size_t __len);  // 67
				V_memset(void* dest,
					int fill,
					size_t count);  // 175
				MatOpBase_t::MatOpBase_t(
						uint32 nOpCode,
						size_t nOpSize);  // 198
				MatOpHelper_t<39, MatOpLoadCBLiteral_t>::MatOpHelper_t(); // 436
				MatOpLoadCBLiteral_t::MatOpLoadCBLiteral_t(); // 3128
				PutInCmdBuf<MatOpLoadCBLiteral_t>(CUtlBuffer* pBuf,
									const MatOpLoadCBLiteral_t& obj);  // 3132
			}
			{
				MatOpSetGlobalsBDA_t op; // 3138
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3137
				}
				V_memset(void* dest,
					int fill,
					size_t count);  // 175
				MatOpBase_t::MatOpBase_t(
						uint32 nOpCode,
						size_t nOpSize);  // 198
				MatOpHelper_t<40, MatOpSetGlobalsBDA_t>::MatOpHelper_t(); // 443
				MatOpSetGlobalsBDA_t::MatOpSetGlobalsBDA_t(); // 3138
				PutInCmdBuf<MatOpSetGlobalsBDA_t>(CUtlBuffer* pBuf,
									const MatOpSetGlobalsBDA_t& obj);  // 3140
			}
		}
		{
			MatOpFlush_t op; // 3147
			V_memset(void* dest,
				int fill,
				size_t count);  // 175
			MatOpBase_t::MatOpBase_t(
					uint32 nOpCode,
					size_t nOpSize);  // 198
			MatOpHelper_t<33, MatOpFlush_t>::MatOpHelper_t(); // 406
			MatOpFlush_t::MatOpFlush_t(); // 3147
			PutInCmdBuf<MatOpFlush_t>(CUtlBuffer* pBuf,
							const MatOpFlush_t& obj);  // 3148
		}
		CUtlMemory<ConstantBufferBindInfo_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<ConstantBufferBindInfo_t, CUtlMemory<ConstantBufferBindInfo_t, int> >::operator[](
				int i);  // 3088
		VfxIsConstantBufferBindInfoValid(const ConstantBufferBindInfo_t& info); // 3089
	}
	{
		MatOpFlushRenderState_t op; // 3155
		V_memset(void* dest,
			int fill,
			size_t count);  // 175
		MatOpBase_t::MatOpBase_t(
				uint32 nOpCode,
				size_t nOpSize);  // 198
		MatOpHelper_t<34, MatOpFlushRenderState_t>::MatOpHelper_t(); // 402
		MatOpFlushRenderState_t::MatOpFlushRenderState_t(); // 3155
		PutInCmdBuf<MatOpFlushRenderState_t>(CUtlBuffer* pBuf,
							const MatOpFlushRenderState_t& obj);  // 3156
	}
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 376
	CTmpCmdBuffer::CTmpCmdBuffer(); // 341
	simpleTSPoolStruct_t::simpleTSPoolStruct_t(); // 382
	CTSPool<CTmpCmdBuffer>::GetObject(); // 2805
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 376
	CTmpCmdBuffer::CTmpCmdBuffer(); // 341
	simpleTSPoolStruct_t::simpleTSPoolStruct_t(); // 382
	CTSPool<CTmpCmdBuffer>::GetObject(); // 2806
	CScopeGuardLambdaImpl<CMaterialLayer::CreateCommandBuffer(VfxProgram_t, uint32)::<lambda()> >::CScopeGuardLambdaImpl(
				class& lambda); // 39
	MakeScopeGuardLambda<CMaterialLayer::CreateCommandBuffer(VfxProgram_t, uint32)::<lambda()> >(class& lambda); // 2807
	CVfx::HasShaderProgram(
			VfxProgram_t programType);  // 2820
	CUtlBuffer::Clear(); // 2807
	CUtlBuffer::Clear(); // 2807
	ThreadPause(void); // 173
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 168
	CTSListBase::Push(
		TSLNodeBase_t* pNode);  // 371
	CTSPool<CTmpCmdBuffer>::PutObject(
			CTmpCmdBuffer* pInfo);  // 2807
	ThreadPause(void); // 173
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 168
	CTSListBase::Push(
		TSLNodeBase_t* pNode);  // 371
	CTSPool<CTmpCmdBuffer>::PutObject(
			CTmpCmdBuffer* pInfo);  // 2807
	operator()(const class* __closure); // 31
	CScopeGuardLambdaImpl<CMaterialLayer::CreateCommandBuffer(VfxProgram_t, uint32)::<lambda()> >::~CScopeGuardLambdaImpl()::<lambda()> >* this); // 3175
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 2831
	CUtlMemory<RenderShaderHandle_t__::operator[](
			int i);  // 595
	CUtlVectorBase<RenderShaderHandle_t__::operator[](
			int i);  // 2832
	VfxProgramHasRenderState(VfxProgram_t programType); // 2834
	CUtlBuffer::IsText(); // 1238
	GetFmtStr<unsigned int>(int nRadix,
				bool bPrint);  // 1244
	CUtlBuffer::PutType<unsigned int>(
				unsigned int src);  // 1236
	CByteswap::IsSwappingBytes(); // 1208
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1210
	CUtlBuffer::PutTypeBin<unsigned int>(
				unsigned int src);  // 1204
	{
	}
	{
		int i; // 200
		{
			int i; // 214
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 218
		LowLevelByteSwap<unsigned int>(unsigned int* output,
						unsigned int* input);  // 202
	}
	CByteswap::SwapBufferToTargetEndian<unsigned int>(
						unsigned int* outputBuffer,
						unsigned int* inputBuffer,
						int count);  // 170
	CByteswap::SwapBufferToTargetEndian<unsigned int>(
						unsigned int* outputBuffer,
						unsigned int* inputBuffer,
						int count);  // 1214
	CUtlBuffer::PutTypeBin<unsigned int>(
				unsigned int src);  // 1240
	CUtlBuffer::PutType<unsigned int>(
				unsigned int src);  // 1345
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 2851
	CUtlVectorBase<CVfxVariableIndexRefArray, CUtlMemory<CVfxVariableIndexRefArray, int> >::Count(); // 892
	CVfxStaticComboData::IsDynamicComboVariableDataCompact(); // 926
	{
		const CVfxVariableIndexRefArray& varArray; // 928
		CUtlMemory<CVfxVariableIndexRefArray, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CVfxVariableIndexRefArray, CUtlMemory<CVfxVariableIndexRefArray, int> >::operator[](
				int i);  // 928
		CVfxVariableIndexRefArray::Count(); // 929
		AlignedByteArrayExplicit_t<2, VfxVariableIndexData_t, 2>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>::Base(); // 452
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>, VfxVariableIndexData_t, i this,
			int i);  // 442
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>, VfxVariableIndexData_t, i this,
				int i);  // 667
		CVfxVariableIndexRefArray::Start(
			const VfxVariableIndexDataArray_t& dataArray);  // 931
	}
	{
		const CVfxVariableIndexArray& varArray; // 943
		CUtlMemory<CVfxVariableIndexArray, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CVfxVariableIndexArray, CUtlMemory<CVfxVariableIndexArray, int> >::operator[](
				int i);  // 943
		AlignedByteArrayExplicit_t<2, VfxVariableIndexData_t, 2>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>::Base(); // 944
		Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>, VfxVariableIndexData_t, i this); // 947
	}
	CVfxStaticComboData::GetDynamicComboVariablesToSet(
					int nCombo,
					const VfxVariableIndexData_t ** pIndexAndRegisterOffsetArray,
					int* pFirstRenderStateElement,
					int* pFirstConstantElement);  // 921
	CVfxStaticComboData::GetDynamicComboVariablesToSet(
					int nCombo,
					const VfxVariableIndexData_t ** pIndexAndRegisterOffsetArray,
					int* pFirstRenderStateElement,
					int* pFirstConstantElement);  // 2896
	DynamicRenderState_t::IsSamplerTouched(
			int i);  // 3017
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 175
	MatOpBase_t::MatOpBase_t(
			uint32 nOpCode,
			size_t nOpSize);  // 198
	MatOpHelper_t<0, MatOpStop_t>::MatOpHelper_t(); // 207
	MatOpStop_t::MatOpStop_t(); // 3159
	PutInCmdBuf<MatOpStop_t>(CUtlBuffer* pBuf,
				const MatOpStop_t& obj);  // 3160
	CUtlBuffer::TellMaxPut(); // 3163
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 3163
	CUtlBuffer::IsText(); // 1238
	CByteswap::IsSwappingBytes(); // 1208
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1210
	CUtlBuffer::PutTypeBin<unsigned int>(
				unsigned int src);  // 1204
	{
	}
	{
		int i; // 200
		{
			int i; // 214
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 218
		LowLevelByteSwap<unsigned int>(unsigned int* output,
						unsigned int* input);  // 202
	}
	CByteswap::SwapBufferToTargetEndian<unsigned int>(
						unsigned int* outputBuffer,
						unsigned int* inputBuffer,
						int count);  // 170
	CByteswap::SwapBufferToTargetEndian<unsigned int>(
						unsigned int* outputBuffer,
						unsigned int* inputBuffer,
						int count);  // 1214
	CUtlBuffer::PutTypeBin<unsigned int>(
				unsigned int src);  // 1240
	GetFmtStr<unsigned int>(int nRadix,
				bool bPrint);  // 1244
	CUtlBuffer::PutType<unsigned int>(
				unsigned int src);  // 1236
	CUtlBuffer::PutType<unsigned int>(
				unsigned int src);  // 1345
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 3167
	HashBlock(const void* pKey,
			unsigned int size);  // 3169
	CUtlBuffer::TellMaxPut(); // 3169
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 3169
	CUtlBuffer::TellMaxPut(); // 3170
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 3172
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 3172
} /* size: 0, variables: 18, inline expansions: 83 (4936 bytes) */

// <0016D915> materialsystem2/material2.cpp:3178
// variables: 7
// function calls: 3
void CMaterialLayer::RecreateConstantBuffer(VfxProgram_t programType, uint32 nSizeInBytes, bool bConstantBufferIsStatic)
{
	float32* pConstantBufferData; // 3211
	CVfxPerLayerProgramData* pPerLayerProgramData; // 3216
	CVfxStaticComboData* pStaticComboData; // 3217
	bool bGlobalsInBufferDeviceAddress; // 3218
	const char   __FUNCTION__; // 63135
	{
		BufferDesc_t desc; // 3234
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3232
		}
	}
	CMaterialSystem2::IsHeadlessModeEnabled(); // 3180
	memset(void* __dest,
		int __ch,
		size_t __len);  // 55
	V_memset(void* dest,
		int fill,
		uint count);  // 3212
} /* size: 0, variables: 5, inline expansions: 3 (41 bytes) */

// <0016D4B1> materialsystem2/material2.cpp:3248
// variables: 18
// function calls: 9
void CMaterialLayer::FillStaticConstantBufferData(VfxProgram_t programType, float32* pConstantBufferData, const CRenderAttributes* pAttributes, IRenderContext* pRenderContext, uint32* pStaticDataHash)
{
	const int  nRequiredMipSize; // 3250
	const CVfxProgramData* pProgramData; // 3252
	const CVfxPerLayerProgramData* pPerLayerProgramData; // 3253
	const CVfxStaticComboData* pStaticComboData; // 3254
	DynamicRenderState_t dynamicRenderState; // 3256
	int32 nNumVariableDescriptions; // 3259
	HRenderTexture* pTextureBoundToVars; // 3260
	const VfxVariableIndexData_t* pVarIndexAndRegisterOffsetArray; // 3282
	int nFirstVarRenderStateElement; // 3283
	int nFirstVarConstantElement; // 3284
	int nVarIndexAndRegisterOffsetCount; // 3285
	const StateToSet_t  stateToSet; // 3290
	const int32  nStartVariable; // 3291
	const int32  nEndVariable; // 3292
	{
		int i; // 3297
		{
			int nVariableIndex; // 3299
			int nRegisterOffset; // 3300
			const CVfxVariableDescription* pVar; // 3301
			CUtlMemory<CVfxVariableDescription, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::operator[](
					int i);  // 3301
		}
	}
	CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::Count(); // 3259
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 3261
	AlignedByteArrayExplicit_t<2, VfxVariableIndexData_t, 2>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>::Base(); // 3282
	Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>, VfxVariableIndexData_t, i this); // 3285
	HashBlock(const void* pKey,
			unsigned int size);  // 3319
} /* size: 679, variables: 14, inline expansions: 7 (107 bytes) */

// <0016C9FD> materialsystem2/material2.cpp:3400
// variables: 8
// function calls: 39
void CMaterial2::GenerateMaterialSource(CUtlBuffer* outBuffer)
{
	KeyValues kv; // 3402
	KeyValues* layer; // 3404
	const char* pShaderName; // 3406
	{
		int32 nParam; // 3409
		{
			HRenderTexture hTexture; // 3417
			CResourceNameGetter resourceName; // 3418
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
			CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 137
			CVfxParam::GetTextureHandle(); // 3417
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 184
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 180
			ResourceGetName(ResourceHandle_t hResource,
					CResourceName* pTarget);  // 488
			CWeakHandle<InfoForResourceTypeCTextureBase>::GetResourceName(
					CResourceName* pOutName);  // 206
			CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCTextureBase>(
										const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 3418
			CResourceName::Get(); // 3419
			CUtlMemory<CMaterialParam, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator[](
					int i);  // 3419
			CUtlSymbolLarge::String(); // 25
			CMaterialParam::GetName(); // 3419
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 3420
		}
		{
			const float* pVecValue; // 3423
			Vector4D value; // 3424
			Vector4D::Vector4D(
				vec_t X,
				vec_t Y,
				vec_t Z,
				vec_t W);  // 3424
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 3432
			CUtlSymbolLarge::String(); // 25
			CMaterialParam::GetName(); // 3432
			CUtlMemory<CMaterialParam, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator[](
					int i);  // 3432
			CUtlString::~CUtlString(); // 446
			CUtlStringFormat::~CUtlStringFormat(); // 3432
			CUtlSymbolLarge::String(); // 25
			CMaterialParam::GetName(); // 3428
		}
		CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Count(); // 3409
		CUtlMemory<CMaterialParam, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator[](
				int i);  // 3411
		CVfxParam::IsDynamic(); // 3411
		CVfxParam::IsTextureParam(); // 3415
	}
	CUtlMemory<CMaterialParam, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator[](
			int i);  // 3406
	CUtlSymbolLarge::String(); // 28
	CMaterialParam::GetString(); // 3406
} /* size: 695, variables: 3, inline expansions: 4 (44 bytes) */

// <0016C6CB> materialsystem2/material2.cpp:3440
// function calls: 11
void CMaterial2::ReloadStaticCombos(HMaterial hSelf)
{
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 3449
	CWeakHandle<InfoForResourceTypeIMaterial2>::operator!=(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& hResource);  // 3449
	CMaterialTypeManager::MarkLoadingWorkPending(
				ResourceHandle_t hMaterial,
				bool bPending);  // 1420
	CMaterial2::CancelLoadingWorkPending(
				ResourceHandle_t hMyHandle);  // 1414
	CMaterial2::CancelLoadingWorkPending(
				ResourceHandle_t hMyHandle);  // 3451
	CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
		const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 3457
	CUtlSymbol::IsValid(); // 285
	CMaterial2::GetName(); // 3444
} /* size: 303, inline expansions: 11 (168 bytes) */

