
//
// utils/materialsystem2utils.cpp
//
//	referenced by: libmaterialsystem2.so
//
//	functions: 173
//	classes: 9
//

// <004964B4> utils/materialsystem2utils.cpp:18
void IQueuedRenderable::IQueuedRenderable()
{
} /* size: 0 */

// <00496498> utils/materialsystem2utils.cpp:18
inline void IQueuedRenderable::IQueuedRenderable()
{
} /* size: 0 */

// <00426002> utils/materialsystem2utils.cpp:18
// member functions: 14
// member variable: 1
// vtable entries: 4
// class size: 8
class IQueuedRenderable {
	void IQueuedRenderable(IQueuedRenderable* , const IQueuedRenderable& );
	void IQueuedRenderable(IQueuedRenderable* );
	int ()(void) * * _vptr.IQueuedRenderable; /* 0 8 */
	/* utils/materialsystem2utils.cpp:21 */
	virtual void ~IQueuedRenderable(IQueuedRenderable* );
	/* utils/materialsystem2utils.cpp:22 */
	virtual bool ShouldDestroy(IQueuedRenderable* );
	/* utils/materialsystem2utils.cpp:23 */
	virtual void Render(IQueuedRenderable* , IRenderContext* );
	/* utils/materialsystem2utils.cpp:24 */
	virtual void Age(IQueuedRenderable* , float);
	/* utils/materialsystem2utils.cpp:25 */
	virtual IQueuedRenderable* GetCopy(IQueuedRenderable* );
	void IQueuedRenderable(class IQueuedRenderable *, const class IQueuedRenderable  &); /* linkage=_ZN17IQueuedRenderableC4ERKS_ */
	void IQueuedRenderable(class IQueuedRenderable *); /* linkage=_ZN17IQueuedRenderableC4Ev */
	virtual void ~IQueuedRenderable(class IQueuedRenderable *); /* linkage=_ZN17IQueuedRenderableD4Ev */
	virtual bool ShouldDestroy(class IQueuedRenderable *); /* linkage=_ZN17IQueuedRenderable13ShouldDestroyEv */
	virtual void Render(class IQueuedRenderable *, class IRenderContext *); /* linkage=_ZN17IQueuedRenderable6RenderEP14IRenderContext */
	virtual void Age(class IQueuedRenderable *, float); /* linkage=_ZN17IQueuedRenderable3AgeEf */
	virtual class IQueuedRenderable * GetCopy(class IQueuedRenderable *); /* linkage=_ZN17IQueuedRenderable7GetCopyEv */
};

// <004964FB> utils/materialsystem2utils.cpp:21
void IQueuedRenderable::~IQueuedRenderable()
{
} /* size: 0 */

// <004964CB> utils/materialsystem2utils.cpp:21
inline void IQueuedRenderable::~IQueuedRenderable()
{
} /* size: 0 */

// <004204FE> utils/materialsystem2utils.cpp:28
// member functions: 18
// member variables: 4
// vtable entries: 4
// class size: 32
class CBaseQueuedRenderable : public IQueuedRenderable {
	/* utils/materialsystem2utils.cpp:71 */
	enum MaterialAttributesType_t {
		k_eNoAttrs = 0,
		k_eUseRenderContextAttrs = 1,
		k_eSetCurrentMaterialAttrs = 2,
		k_eExplicitAttrs = 3,
	};
public:
	/* class IQueuedRenderable <ancestor>; */ /* 0 8 */
	void CBaseQueuedRenderable(CBaseQueuedRenderable* , const CBaseQueuedRenderable& );
	/* utils/materialsystem2utils.cpp:31 */
	void CBaseQueuedRenderable(CBaseQueuedRenderable* , float64);
	/* utils/materialsystem2utils.cpp:38 */
	virtual void ~CBaseQueuedRenderable(CBaseQueuedRenderable* );
	/* utils/materialsystem2utils.cpp:40 */
	virtual bool ShouldDestroy(CBaseQueuedRenderable* );
	/* utils/materialsystem2utils.cpp:49 */
	virtual void Render(CBaseQueuedRenderable* , IRenderContext* );
	/* utils/materialsystem2utils.cpp:51 */
	virtual void Age(CBaseQueuedRenderable* , float);
	/* utils/materialsystem2utils.cpp:68 */
	virtual IQueuedRenderable* GetCopy(CBaseQueuedRenderable* );
protected:
	/* utils/materialsystem2utils.cpp:79 */
	MaterialAttributesType_t CaptureAttributes(const CRenderAttributes* , CRenderAttributes* , bool);
	/* utils/materialsystem2utils.cpp:111 */
	CRenderAttributes* UseAttributes(CRenderAttributes* , MaterialAttributesType_t);
private:
	bool m_bDestroy; /* 8 1 */
	float64 m_flStartAbsTime; /* 16 8 */
	float64 m_flTimeToLive; /* 24 8 */
	void CBaseQueuedRenderable(class CBaseQueuedRenderable *, const class CBaseQueuedRenderable  &); /* linkage=_ZN21CBaseQueuedRenderableC4ERKS_ */
	void CBaseQueuedRenderable(class CBaseQueuedRenderable *, float64); /* linkage=_ZN21CBaseQueuedRenderableC4Ed */
	virtual void ~CBaseQueuedRenderable(class CBaseQueuedRenderable *); /* linkage=_ZN21CBaseQueuedRenderableD4Ev */
	/* <4a1261> utils/materialsystem2utils.cpp:40 */
	virtual bool ShouldDestroy(class CBaseQueuedRenderable *); /* linkage=_ZN21CBaseQueuedRenderable13ShouldDestroyEv */
	virtual void Render(class CBaseQueuedRenderable *, class IRenderContext *); /* linkage=_ZN21CBaseQueuedRenderable6RenderEP14IRenderContext */
	/* <4a128b> utils/materialsystem2utils.cpp:51 */
	virtual void Age(class CBaseQueuedRenderable *, float); /* linkage=_ZN21CBaseQueuedRenderable3AgeEf */
	virtual class IQueuedRenderable * GetCopy(class CBaseQueuedRenderable *); /* linkage=_ZN21CBaseQueuedRenderable7GetCopyEv */
	enum MaterialAttributesType_t CaptureAttributes(const class CRenderAttributes  *, class CRenderAttributes *, bool); /* linkage=_ZN21CBaseQueuedRenderable17CaptureAttributesEPK17CRenderAttributesPS0_b */
	class CRenderAttributes * UseAttributes(class CRenderAttributes *, enum MaterialAttributesType_t); /* linkage=_ZN21CBaseQueuedRenderable13UseAttributesEP17CRenderAttributesNS_24MaterialAttributesType_tE */
};

// <0049647C> utils/materialsystem2utils.cpp:31
void CBaseQueuedRenderable::CBaseQueuedRenderable(float64 flTimeToLive)
{
} /* size: 0 */

// <00496457> utils/materialsystem2utils.cpp:31
inline void CBaseQueuedRenderable::CBaseQueuedRenderable(float64 flTimeToLive)
{
} /* size: 0 */

// <00496440> utils/materialsystem2utils.cpp:38
void CBaseQueuedRenderable::~CBaseQueuedRenderable()
{
} /* size: 0 */

// <00496410> utils/materialsystem2utils.cpp:38
inline void CBaseQueuedRenderable::~CBaseQueuedRenderable()
{
} /* size: 0 */

// <004A1261> utils/materialsystem2utils.cpp:40
void CBaseQueuedRenderable::ShouldDestroy()
{
} /* size: 34 */

// <004963F7> utils/materialsystem2utils.cpp:40
inline void CBaseQueuedRenderable::ShouldDestroy()
{
} /* size: 0 */

// <004A128B> utils/materialsystem2utils.cpp:51
// variable: 1
void CBaseQueuedRenderable::Age(float flAbsTime)
{
	{
		float64 flEndTime; // 60
	}
} /* size: 48 */

// <004963C4> utils/materialsystem2utils.cpp:51
// variable: 1
inline void CBaseQueuedRenderable::Age(float flAbsTime)
{
	{
		float64 flEndTime; // 60
	}
} /* size: 0 */

// <0049638C> utils/materialsystem2utils.cpp:68
// variables: 2
void CBaseQueuedRenderable::GetCopy()
{
	const char   __FUNCTION__; // 57828
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 68
	}
} /* size: 0, variables: 1 */

// <0049635C> utils/materialsystem2utils.cpp:79
inline void CaptureAttributes(const CRenderAttributes* pAttributesIn, CRenderAttributes* pAttributesStore, bool bCopy)
{
} /* size: 0 */

// <00496338> utils/materialsystem2utils.cpp:111
inline void UseAttributes(CRenderAttributes* pAttributesStore, MaterialAttributesType_t eAttrType)
{
} /* size: 0 */

// <0042A9E7> utils/materialsystem2utils.cpp:133
// member functions: 10
// member variable: 1
// vtable entries: 2
// class size: 32
class CQueuedResetMaterialCacheRenderable : public CBaseQueuedRenderable {
public:
	/* class CBaseQueuedRenderable <ancestor>; */ /* 0 32 */
	void CQueuedResetMaterialCacheRenderable(CQueuedResetMaterialCacheRenderable* , const CQueuedResetMaterialCacheRenderable& );
	/* utils/materialsystem2utils.cpp:136 */
	void CQueuedResetMaterialCacheRenderable(CQueuedResetMaterialCacheRenderable* , float64);
	/* utils/materialsystem2utils.cpp:140 */
	virtual void ~CQueuedResetMaterialCacheRenderable(CQueuedResetMaterialCacheRenderable* );
	/* utils/materialsystem2utils.cpp:142 */
	virtual void Render(CQueuedResetMaterialCacheRenderable* , IRenderContext* );
	/* utils/materialsystem2utils.cpp:147 */
	virtual IQueuedRenderable* GetCopy(CQueuedResetMaterialCacheRenderable* );
	void CQueuedResetMaterialCacheRenderable(class CQueuedResetMaterialCacheRenderable *, const class CQueuedResetMaterialCacheRenderable  &); /* linkage=_ZN35CQueuedResetMaterialCacheRenderableC4ERKS_ */
	void CQueuedResetMaterialCacheRenderable(class CQueuedResetMaterialCacheRenderable *, float64); /* linkage=_ZN35CQueuedResetMaterialCacheRenderableC4Ed */
	virtual void ~CQueuedResetMaterialCacheRenderable(class CQueuedResetMaterialCacheRenderable *); /* linkage=_ZN35CQueuedResetMaterialCacheRenderableD4Ev */
	virtual void Render(class CQueuedResetMaterialCacheRenderable *, class IRenderContext *); /* linkage=_ZN35CQueuedResetMaterialCacheRenderable6RenderEP14IRenderContext */
	virtual class IQueuedRenderable * GetCopy(class CQueuedResetMaterialCacheRenderable *); /* linkage=_ZN35CQueuedResetMaterialCacheRenderable7GetCopyEv */
};

// <0049631C> utils/materialsystem2utils.cpp:136
void CQueuedResetMaterialCacheRenderable::CQueuedResetMaterialCacheRenderable(float64 flTimeToLive)
{
} /* size: 0 */

// <004962F7> utils/materialsystem2utils.cpp:136
inline void CQueuedResetMaterialCacheRenderable::CQueuedResetMaterialCacheRenderable(float64 flTimeToLive)
{
} /* size: 0 */

// <00496269> utils/materialsystem2utils.cpp:140
// function calls: 2
void CQueuedResetMaterialCacheRenderable::~CQueuedResetMaterialCacheRenderable()
{
	IQueuedRenderable::~IQueuedRenderable(); // 38
	CBaseQueuedRenderable::~CBaseQueuedRenderable(); // 140
} /* size: 5, inline expansions: 2 (0 bytes) */

// <00496185> utils/materialsystem2utils.cpp:140
// function calls: 3
void CQueuedResetMaterialCacheRenderable::~CQueuedResetMaterialCacheRenderable()
{
	IQueuedRenderable::~IQueuedRenderable(); // 38
	CBaseQueuedRenderable::~CBaseQueuedRenderable(); // 140
	CQueuedResetMaterialCacheRenderable::~CQueuedResetMaterialCacheRenderable(); // 140
} /* size: 14, inline expansions: 3 (0 bytes) */

// <0049616C> utils/materialsystem2utils.cpp:140
inline void CQueuedResetMaterialCacheRenderable::~CQueuedResetMaterialCacheRenderable()
{
} /* size: 0 */

// <00496034> utils/materialsystem2utils.cpp:142
// function calls: 5
void CQueuedResetMaterialCacheRenderable::Render(IRenderContext* pRenderContext)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 693
	IRenderContext::ResetMaterialStateHint(); // 825
	CMaterialSystem2Utils::ResetMaterialCache(
				IRenderContext* pCtx);  // 144
} /* size: 58, inline expansions: 5 (44 bytes) */

// <00495F34> utils/materialsystem2utils.cpp:147
// variable: 1
// function calls: 3
void CQueuedResetMaterialCacheRenderable::GetCopy()
{
	CQueuedResetMaterialCacheRenderable* pInfo; // 149
	IQueuedRenderable::IQueuedRenderable(); // 32
	CBaseQueuedRenderable::CBaseQueuedRenderable(
				float64 flTimeToLive);  // 136
	CQueuedResetMaterialCacheRenderable::CQueuedResetMaterialCacheRenderable(
						float64 flTimeToLive);  // 149
} /* size: 50, variables: 1, inline expansions: 3 (50 bytes) */

// <0042A87D> utils/materialsystem2utils.cpp:154
// member functions: 12
// member variables: 6
// vtable entries: 2
// class size: 1,248
class CQueuedSetMaterialOrTextureRenderable : public CBaseQueuedRenderable {
public:
	/* class CBaseQueuedRenderable <ancestor>; */ /* 0 32 */
	void CQueuedSetMaterialOrTextureRenderable(CQueuedSetMaterialOrTextureRenderable* , const CQueuedSetMaterialOrTextureRenderable& );
	/* utils/materialsystem2utils.cpp:157 */
	void CQueuedSetMaterialOrTextureRenderable(CQueuedSetMaterialOrTextureRenderable* , float64);
	/* utils/materialsystem2utils.cpp:165 */
	virtual void ~CQueuedSetMaterialOrTextureRenderable(CQueuedSetMaterialOrTextureRenderable* );
	/* utils/materialsystem2utils.cpp:167 */
	void Init(CQueuedSetMaterialOrTextureRenderable* , const IMaterialMode* , const CRenderAttributes* , HRenderTexture, bool);
	/* utils/materialsystem2utils.cpp:178 */
	virtual void Render(CQueuedSetMaterialOrTextureRenderable* , IRenderContext* );
	/* utils/materialsystem2utils.cpp:194 */
	virtual IQueuedRenderable* GetCopy(CQueuedSetMaterialOrTextureRenderable* );
	const class IMaterialMode * m_pMode; /* 32 8 */
	CRenderAttributes m_attributes; /* 48 1184 */
	HRenderTexture m_hTexture; /* 1232 8 */
	MaterialAttributesType_t m_eAttrType; /* 1240 4 */
	bool m_bForce; /* 1244 1 */
	void CQueuedSetMaterialOrTextureRenderable(class CQueuedSetMaterialOrTextureRenderable *, const class CQueuedSetMaterialOrTextureRenderable  &); /* linkage=_ZN37CQueuedSetMaterialOrTextureRenderableC4ERKS_ */
	void CQueuedSetMaterialOrTextureRenderable(class CQueuedSetMaterialOrTextureRenderable *, float64); /* linkage=_ZN37CQueuedSetMaterialOrTextureRenderableC4Ed */
	virtual void ~CQueuedSetMaterialOrTextureRenderable(class CQueuedSetMaterialOrTextureRenderable *); /* linkage=_ZN37CQueuedSetMaterialOrTextureRenderableD4Ev */
	void Init(class CQueuedSetMaterialOrTextureRenderable *, const class IMaterialMode  *, const class CRenderAttributes  *, HRenderTexture, bool); /* linkage=_ZN37CQueuedSetMaterialOrTextureRenderable4InitEPK13IMaterialModePK17CRenderAttributes11CWeakHandleI31InfoForResourceTypeCTextureBaseEb */
	/* <4a2c9f> utils/materialsystem2utils.cpp:178 */
	virtual void Render(class CQueuedSetMaterialOrTextureRenderable *, class IRenderContext *); /* linkage=_ZN37CQueuedSetMaterialOrTextureRenderable6RenderEP14IRenderContext */
	virtual class IQueuedRenderable * GetCopy(class CQueuedSetMaterialOrTextureRenderable *); /* linkage=_ZN37CQueuedSetMaterialOrTextureRenderable7GetCopyEv */
};

// <00495F18> utils/materialsystem2utils.cpp:157
void CQueuedSetMaterialOrTextureRenderable::CQueuedSetMaterialOrTextureRenderable(float64 flTimeToLive)
{
} /* size: 0 */

// <00495EF3> utils/materialsystem2utils.cpp:157
inline void CQueuedSetMaterialOrTextureRenderable::CQueuedSetMaterialOrTextureRenderable(float64 flTimeToLive)
{
} /* size: 0 */

// <00495EAA> utils/materialsystem2utils.cpp:165
void CQueuedSetMaterialOrTextureRenderable::~CQueuedSetMaterialOrTextureRenderable()
{
} /* size: 24 */

// <00495DBC> utils/materialsystem2utils.cpp:165
// function calls: 3
void CQueuedSetMaterialOrTextureRenderable::~CQueuedSetMaterialOrTextureRenderable()
{
	IQueuedRenderable::~IQueuedRenderable(); // 38
	CBaseQueuedRenderable::~CBaseQueuedRenderable(); // 165
	CQueuedSetMaterialOrTextureRenderable::~CQueuedSetMaterialOrTextureRenderable(); // 165
} /* size: 54, inline expansions: 3 (20 bytes) */

// <00495DA3> utils/materialsystem2utils.cpp:165
inline void CQueuedSetMaterialOrTextureRenderable::~CQueuedSetMaterialOrTextureRenderable()
{
} /* size: 0 */

// <00495D5A> utils/materialsystem2utils.cpp:167
inline void CQueuedSetMaterialOrTextureRenderable::Init(const IMaterialMode* pMode, const CRenderAttributes* pAttributes, HRenderTexture hTexture, bool bForce)
{
} /* size: 0 */

// <004A2C9F> utils/materialsystem2utils.cpp:178
// function calls: 10
void CQueuedSetMaterialOrTextureRenderable::Render(IRenderContext* pRenderContext)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::HasHandle(); // 180
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 182
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 837
	CMaterialSystem2Utils::SetDefaultMaterial(
				IRenderContext* pCtx,
				bool bForce);  // 190
	CQueuedSetMaterialOrTextureRenderable::Render(
		IRenderContext* pRenderContext);  // 178
	UseAttributes(CRenderAttributes* pAttributesStore,
			MaterialAttributesType_t eAttrType);  // 186
} /* size: 413, inline expansions: 10 (327 bytes) */

// <00495D35> utils/materialsystem2utils.cpp:178
inline void CQueuedSetMaterialOrTextureRenderable::Render(IRenderContext* pRenderContext)
{
} /* size: 0 */

// <00494E52> utils/materialsystem2utils.cpp:194
// variable: 1
// function calls: 75
void CQueuedSetMaterialOrTextureRenderable::GetCopy()
{
	CQueuedSetMaterialOrTextureRenderable* pInfo; // 196
	IQueuedRenderable::IQueuedRenderable(); // 32
	CBaseQueuedRenderable::CBaseQueuedRenderable(
				float64 flTimeToLive);  // 157
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
	CRenderAttributes::CRenderAttributes(); // 157
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 157
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 161
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 161
	CQueuedSetMaterialOrTextureRenderable::CQueuedSetMaterialOrTextureRenderable(
						float64 flTimeToLive);  // 196
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 199
} /* size: 507, variables: 1, inline expansions: 75 (1792 bytes) */

// <0042A673> utils/materialsystem2utils.cpp:212
// member functions: 18
// member variables: 4
// vtable entries: 2
// class size: 1,360
class CQueuedTextRenderable : public CBaseQueuedRenderable {
public:
	/* class CBaseQueuedRenderable <ancestor>; */ /* 0 32 */
	void CQueuedTextRenderable(CQueuedTextRenderable* , const CQueuedTextRenderable& );
	/* utils/materialsystem2utils.cpp:215 */
	void CQueuedTextRenderable(CQueuedTextRenderable* , float64);
	/* utils/materialsystem2utils.cpp:220 */
	virtual void ~CQueuedTextRenderable(CQueuedTextRenderable* );
	/* utils/materialsystem2utils.cpp:239 */
	void Init(CQueuedTextRenderable* , const CTextLayoutInfo& , const CRenderAttributes* );
	/* utils/materialsystem2utils.cpp:246 */
	virtual void Render(CQueuedTextRenderable* , IRenderContext* );
	/* utils/materialsystem2utils.cpp:251 */
	virtual IQueuedRenderable* GetCopy(CQueuedTextRenderable* );
	CTextLayoutInfo m_Info; /* 32 128 */
	CRenderAttributes m_attributes; /* 160 1184 */
	MaterialAttributesType_t m_eAttrType; /* 1344 4 */
	/* utils/materialsystem2utils.cpp:223 */
	void Init<wchar_t>(CQueuedTextRenderable* , const wchar_t* , const Vector2D& , Color, FontHandle_t, const CRenderAttributes* , LayoutPositionType_e);
	/* utils/materialsystem2utils.cpp:223 */
	void Init<short unsigned int>(CQueuedTextRenderable* , const short unsigned int* , const Vector2D& , Color, FontHandle_t, const CRenderAttributes* , LayoutPositionType_e);
	/* utils/materialsystem2utils.cpp:223 */
	void Init<char>(CQueuedTextRenderable* , const char* , const Vector2D& , Color, FontHandle_t, const CRenderAttributes* , LayoutPositionType_e);
	enum MaterialAttributesType_t :32;
	enum MaterialAttributesType_t :32;
	enum MaterialAttributesType_t :32;
	void CQueuedTextRenderable(class CQueuedTextRenderable *, const class CQueuedTextRenderable  &); /* linkage=_ZN21CQueuedTextRenderableC4ERKS_ */
	void CQueuedTextRenderable(class CQueuedTextRenderable *, float64); /* linkage=_ZN21CQueuedTextRenderableC4Ed */
	virtual void ~CQueuedTextRenderable(class CQueuedTextRenderable *); /* linkage=_ZN21CQueuedTextRenderableD4Ev */
	void Init(class CQueuedTextRenderable *, const class CTextLayoutInfo  &, const class CRenderAttributes  *); /* linkage=_ZN21CQueuedTextRenderable4InitERK15CTextLayoutInfoPK17CRenderAttributes */
	virtual void Render(class CQueuedTextRenderable *, class IRenderContext *); /* linkage=_ZN21CQueuedTextRenderable6RenderEP14IRenderContext */
	virtual class IQueuedRenderable * GetCopy(class CQueuedTextRenderable *); /* linkage=_ZN21CQueuedTextRenderable7GetCopyEv */
	void Init<wchar_t>(class CQueuedTextRenderable *, const wchar_t  *, const class Vector2D  &, class Color, FontHandle_t, const class CRenderAttributes  *, enum LayoutPositionType_e); /* linkage=_ZN21CQueuedTextRenderable4InitIwEEvPKT_RK8Vector2D5ColorjPK17CRenderAttributes20LayoutPositionType_e */
	void Init<short unsigned int>(class CQueuedTextRenderable *, const short unsigned int  *, const class Vector2D  &, class Color, FontHandle_t, const class CRenderAttributes  *, enum LayoutPositionType_e); /* linkage=_ZN21CQueuedTextRenderable4InitItEEvPKT_RK8Vector2D5ColorjPK17CRenderAttributes20LayoutPositionType_e */
	void Init<char>(class CQueuedTextRenderable *, const char  *, const class Vector2D  &, class Color, FontHandle_t, const class CRenderAttributes  *, enum LayoutPositionType_e); /* linkage=_ZN21CQueuedTextRenderable4InitIcEEvPKT_RK8Vector2D5ColorjPK17CRenderAttributes20LayoutPositionType_e */
};

// <00494E36> utils/materialsystem2utils.cpp:215
void CQueuedTextRenderable::CQueuedTextRenderable(float64 flTimeToLive)
{
} /* size: 0 */

// <00494E11> utils/materialsystem2utils.cpp:215
inline void CQueuedTextRenderable::CQueuedTextRenderable(float64 flTimeToLive)
{
} /* size: 0 */

// <00494D66> utils/materialsystem2utils.cpp:220
// function calls: 2
void CQueuedTextRenderable::~CQueuedTextRenderable()
{
	CStrAutoEncode::~CStrAutoEncode(); // 225
	CTextLayoutInfo::~CTextLayoutInfo(); // 220
} /* size: 59, inline expansions: 2 (17 bytes) */

// <00494C0A> utils/materialsystem2utils.cpp:220
// function calls: 5
void CQueuedTextRenderable::~CQueuedTextRenderable()
{
	CStrAutoEncode::~CStrAutoEncode(); // 225
	CTextLayoutInfo::~CTextLayoutInfo(); // 220
	IQueuedRenderable::~IQueuedRenderable(); // 38
	CBaseQueuedRenderable::~CBaseQueuedRenderable(); // 220
	CQueuedTextRenderable::~CQueuedTextRenderable(); // 220
} /* size: 72, inline expansions: 5 (55 bytes) */

// <00494BF1> utils/materialsystem2utils.cpp:220
inline void CQueuedTextRenderable::~CQueuedTextRenderable()
{
} /* size: 0 */

// <004419AF> utils/materialsystem2utils.cpp:223
inline void CQueuedTextRenderable::Init<char>(const char* pText, const Vector2D& textPos, Color drawColor, FontHandle_t fontID, const CRenderAttributes* pAttributes, LayoutPositionType_e positionType)
{
} /* size: 0 */

// <00441946> utils/materialsystem2utils.cpp:223
inline void Init<short unsigned CQueuedTextRenderable::int>(const short unsigned int* pText, const Vector2D& textPos, Color drawColor, FontHandle_t fontID, const CRenderAttributes* pAttributes, LayoutPositionType_e positionType)
{
} /* size: 0 */

// <004418DD> utils/materialsystem2utils.cpp:223
inline void CQueuedTextRenderable::Init<wchar_t>(const wchar_t* pText, const Vector2D& textPos, Color drawColor, FontHandle_t fontID, const CRenderAttributes* pAttributes, LayoutPositionType_e positionType)
{
} /* size: 0 */

// <00494BC0> utils/materialsystem2utils.cpp:239
inline void CQueuedTextRenderable::Init(const CTextLayoutInfo& info, const CRenderAttributes* pAttributes)
{
} /* size: 0 */

// <00494AB7> utils/materialsystem2utils.cpp:246
// function calls: 2
void CQueuedTextRenderable::Render(IRenderContext* pRenderContext)
{
	UseAttributes(CRenderAttributes* pAttributesStore,
			MaterialAttributesType_t eAttrType);  // 248
	CMaterialSystem2Utils::RenderText(
			IRenderContext* pRenderContext,
			CTextLayoutInfo* pTextLayoutInfo,
			const CRenderAttributes* pAttributes);  // 248
} /* size: 154, inline expansions: 2 (60 bytes) */

// <004939A0> utils/materialsystem2utils.cpp:251
// variable: 1
// function calls: 82
void CQueuedTextRenderable::GetCopy()
{
	CQueuedTextRenderable* pInfo; // 253
	CStrAutoEncode::Set(
		const char* pch);  // 479
	CStrAutoEncode::CStrAutoEncode(
			const char* pch);  // 204
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 205
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 211
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 212
	matrix3x4_t::matrix3x4_t(); // 216
	CTextLayoutInfo::CTextLayoutInfo(); // 215
	IQueuedRenderable::IQueuedRenderable(); // 32
	CBaseQueuedRenderable::CBaseQueuedRenderable(
				float64 flTimeToLive);  // 215
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
	CRenderAttributes::CRenderAttributes(); // 215
	CQueuedTextRenderable::CQueuedTextRenderable(
				float64 flTimeToLive);  // 253
	Vector2D::operator=(
			const Vector2D& vOther);  // 251
	Color::GetRawColor(); // 147
	Color::SetRawColor(
			int32 Color);  // 147
	Color::operator=(
			const Color& rhs);  // 257
	CTextLayoutInfo::operator=(
			const CTextLayoutInfo& info);  // 254
} /* size: 758, variables: 1, inline expansions: 82 (2379 bytes) */

// <0042A4E0> utils/materialsystem2utils.cpp:265
// member functions: 12
// member variables: 7
// vtable entries: 2
// class size: 1,264
class CLineLayoutInfo : public CBaseQueuedRenderable {
public:
	/* class CBaseQueuedRenderable <ancestor>; */ /* 0 32 */
	void CLineLayoutInfo(CLineLayoutInfo* , const CLineLayoutInfo& );
	/* utils/materialsystem2utils.cpp:268 */
	void CLineLayoutInfo(CLineLayoutInfo* , float64);
	/* utils/materialsystem2utils.cpp:279 */
	virtual void ~CLineLayoutInfo(CLineLayoutInfo* );
	/* utils/materialsystem2utils.cpp:281 */
	void Init(CLineLayoutInfo* , float, float, float, float, const Color& , const CRenderAttributes* , LayoutPositionType_e);
	/* utils/materialsystem2utils.cpp:296 */
	virtual void Render(CLineLayoutInfo* , IRenderContext* );
	/* utils/materialsystem2utils.cpp:303 */
	virtual IQueuedRenderable* GetCopy(CLineLayoutInfo* );
	Vector2D m_start; /* 32 8 */
	Vector2D m_end; /* 40 8 */
	Color m_color; /* 48 4 */
	CRenderAttributes m_attributes; /* 64 1184 */
	MaterialAttributesType_t m_eAttrType; /* 1248 4 */
	LayoutPositionType_e m_positionType; /* 1252 4 */
	void CLineLayoutInfo(class CLineLayoutInfo *, const class CLineLayoutInfo  &); /* linkage=_ZN15CLineLayoutInfoC4ERKS_ */
	void CLineLayoutInfo(class CLineLayoutInfo *, float64); /* linkage=_ZN15CLineLayoutInfoC4Ed */
	virtual void ~CLineLayoutInfo(class CLineLayoutInfo *); /* linkage=_ZN15CLineLayoutInfoD4Ev */
	void Init(class CLineLayoutInfo *, float, float, float, float, const class Color  &, const class CRenderAttributes  *, enum LayoutPositionType_e); /* linkage=_ZN15CLineLayoutInfo4InitEffffRK5ColorPK17CRenderAttributes20LayoutPositionType_e */
	virtual void Render(class CLineLayoutInfo *, class IRenderContext *); /* linkage=_ZN15CLineLayoutInfo6RenderEP14IRenderContext */
	virtual class IQueuedRenderable * GetCopy(class CLineLayoutInfo *); /* linkage=_ZN15CLineLayoutInfo7GetCopyEv */
};

// <00493984> utils/materialsystem2utils.cpp:268
void CLineLayoutInfo::CLineLayoutInfo(float64 flTimeToLive)
{
} /* size: 0 */

// <0049395E> utils/materialsystem2utils.cpp:268
inline void CLineLayoutInfo::CLineLayoutInfo(float64 flTimeToLive)
{
} /* size: 0 */

// <00493915> utils/materialsystem2utils.cpp:279
void CLineLayoutInfo::~CLineLayoutInfo()
{
} /* size: 24 */

// <00493824> utils/materialsystem2utils.cpp:279
// function calls: 3
void CLineLayoutInfo::~CLineLayoutInfo()
{
	IQueuedRenderable::~IQueuedRenderable(); // 38
	CBaseQueuedRenderable::~CBaseQueuedRenderable(); // 279
	CLineLayoutInfo::~CLineLayoutInfo(); // 279
} /* size: 54, inline expansions: 3 (20 bytes) */

// <0049380B> utils/materialsystem2utils.cpp:279
inline void CLineLayoutInfo::~CLineLayoutInfo()
{
} /* size: 0 */

// <0049379B> utils/materialsystem2utils.cpp:281
inline void CLineLayoutInfo::Init(float x0, float y0, float x1, float y1, const Color& drawColor, const CRenderAttributes* pAttributes, LayoutPositionType_e positionType)
{
} /* size: 0 */

// <00493704> utils/materialsystem2utils.cpp:296
// function call: 1
void CLineLayoutInfo::Render(IRenderContext* pRenderContext)
{
	UseAttributes(CRenderAttributes* pAttributesStore,
			MaterialAttributesType_t eAttrType);  // 300
} /* size: 123, inline expansions: 1 (32 bytes) */

// <0049273D> utils/materialsystem2utils.cpp:303
// variable: 1
// function calls: 78
void CLineLayoutInfo::GetCopy()
{
	CLineLayoutInfo* pInfo; // 305
	IQueuedRenderable::IQueuedRenderable(); // 32
	CBaseQueuedRenderable::CBaseQueuedRenderable(
				float64 flTimeToLive);  // 268
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
	CRenderAttributes::CRenderAttributes(); // 268
	Vector2D::Vector2D(); // 268
	Vector2D::Vector2D(); // 268
	Color::Color(); // 268
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 274
	Color::operator=(
			const Color& rhs);  // 274
	CLineLayoutInfo::CLineLayoutInfo(
			float64 flTimeToLive);  // 305
	Color::SetRawColor(
			int32 Color);  // 147
	Color::GetRawColor(); // 147
	Color::operator=(
			const Color& rhs);  // 308
	Vector2D::operator=(
			const Vector2D& vOther);  // 306
} /* size: 471, variables: 1, inline expansions: 78 (1742 bytes) */

// <0042A36C> utils/materialsystem2utils.cpp:323
// member functions: 12
// member variables: 6
// vtable entries: 2
// class size: 1,280
class CLineBatchLayoutInfo : public CBaseQueuedRenderable {
public:
	/* class CBaseQueuedRenderable <ancestor>; */ /* 0 32 */
	void CLineBatchLayoutInfo(CLineBatchLayoutInfo* , const CLineBatchLayoutInfo& );
	/* utils/materialsystem2utils.cpp:326 */
	void CLineBatchLayoutInfo(CLineBatchLayoutInfo* , float64);
	/* utils/materialsystem2utils.cpp:333 */
	virtual void ~CLineBatchLayoutInfo(CLineBatchLayoutInfo* );
	/* utils/materialsystem2utils.cpp:335 */
	void Init(CLineBatchLayoutInfo* , const CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >* , const Color& , const CRenderAttributes* , LayoutPositionType_e);
	/* utils/materialsystem2utils.cpp:346 */
	virtual void Render(CLineBatchLayoutInfo* , IRenderContext* );
	/* utils/materialsystem2utils.cpp:352 */
	virtual IQueuedRenderable* GetCopy(CLineBatchLayoutInfo* );
	CUtlVector<Vector2D, CUtlMemory<Vector2D, int> > m_linelist; /* 32 32 */
	Color m_color; /* 64 4 */
	CRenderAttributes m_attributes; /* 80 1184 */
	MaterialAttributesType_t m_eAttrType; /* 1264 4 */
	LayoutPositionType_e m_positionType; /* 1268 4 */
	void CLineBatchLayoutInfo(class CLineBatchLayoutInfo *, const class CLineBatchLayoutInfo  &); /* linkage=_ZN20CLineBatchLayoutInfoC4ERKS_ */
	void CLineBatchLayoutInfo(class CLineBatchLayoutInfo *, float64); /* linkage=_ZN20CLineBatchLayoutInfoC4Ed */
	virtual void ~CLineBatchLayoutInfo(class CLineBatchLayoutInfo *); /* linkage=_ZN20CLineBatchLayoutInfoD4Ev */
	void Init(class CLineBatchLayoutInfo *, const class CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >  *, const class Color  &, const class CRenderAttributes  *, enum LayoutPositionType_e); /* linkage=_ZN20CLineBatchLayoutInfo4InitEPK10CUtlVectorI8Vector2D10CUtlMemoryIS1_iEERK5ColorPK17CRenderAttributes20LayoutPositionType_e */
	virtual void Render(class CLineBatchLayoutInfo *, class IRenderContext *); /* linkage=_ZN20CLineBatchLayoutInfo6RenderEP14IRenderContext */
	virtual class IQueuedRenderable * GetCopy(class CLineBatchLayoutInfo *); /* linkage=_ZN20CLineBatchLayoutInfo7GetCopyEv */
};

// <004926ED> utils/materialsystem2utils.cpp:326
void CLineBatchLayoutInfo::CLineBatchLayoutInfo(float64 flTimeToLive)
{
} /* size: 0 */

// <004926C7> utils/materialsystem2utils.cpp:326
inline void CLineBatchLayoutInfo::CLineBatchLayoutInfo(float64 flTimeToLive)
{
} /* size: 0 */

// <00492557> utils/materialsystem2utils.cpp:333
// function calls: 7
void CLineBatchLayoutInfo::~CLineBatchLayoutInfo()
{
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::RemoveAll(); // 1798
	CUtlMemory<Vector2D, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Vector2D, int>::Purge(); // 903
	CUtlMemory<Vector2D, int>::Purge(); // 1799
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Purge(); // 560
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >::~CUtlVector(); // 333
} /* size: 86, inline expansions: 7 (179 bytes) */

// <00492284> utils/materialsystem2utils.cpp:333
// function calls: 13
void CLineBatchLayoutInfo::~CLineBatchLayoutInfo()
{
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::RemoveAll(); // 1798
	CUtlMemory<Vector2D, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Vector2D, int>::Purge(); // 903
	CUtlMemory<Vector2D, int>::Purge(); // 1799
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Purge(); // 560
	ValidateAlignment<Vector2D>(void); // 508
	CUtlMemory<Vector2D, int>::Purge(); // 510
	CUtlMemory<Vector2D, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >::~CUtlVector(); // 333
	IQueuedRenderable::~IQueuedRenderable(); // 38
	CBaseQueuedRenderable::~CBaseQueuedRenderable(); // 333
	CLineBatchLayoutInfo::~CLineBatchLayoutInfo(); // 333
} /* size: 84, inline expansions: 13 (184 bytes) */

// <0049226B> utils/materialsystem2utils.cpp:333
inline void CLineBatchLayoutInfo::~CLineBatchLayoutInfo()
{
} /* size: 0 */

// <0049221E> utils/materialsystem2utils.cpp:335
inline void CLineBatchLayoutInfo::Init(const CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >* pLineList, const Color& drawColor, const CRenderAttributes* pAttributes, LayoutPositionType_e positionType)
{
} /* size: 0 */

// <0049217E> utils/materialsystem2utils.cpp:346
// function call: 1
void CLineBatchLayoutInfo::Render(IRenderContext* pRenderContext)
{
	UseAttributes(CRenderAttributes* pAttributesStore,
			MaterialAttributesType_t eAttrType);  // 349
} /* size: 78, inline expansions: 1 (34 bytes) */

// <00490DA2> utils/materialsystem2utils.cpp:352
// variables: 2
// function calls: 97
void CLineBatchLayoutInfo::GetCopy()
{
	CLineBatchLayoutInfo* pInfo; // 354
	IQueuedRenderable::IQueuedRenderable(); // 32
	CBaseQueuedRenderable::CBaseQueuedRenderable(
				float64 flTimeToLive);  // 326
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
	CRenderAttributes::CRenderAttributes(); // 326
	CUtlMemory<Vector2D, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector2D, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >::CUtlVector(); // 326
	Color::Color(); // 326
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 328
	Color::SetRawColor(
			int32 Color);  // 147
	Color::operator=(
			const Color& rhs);  // 328
	CLineBatchLayoutInfo::CLineBatchLayoutInfo(
				float64 flTimeToLive);  // 354
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Count(); // 355
	CUtlMemory<Vector2D, int>::NumAllocated(); // 782
	CUtlMemory<Vector2D, int>::Base(); // 112
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Base(); // 368
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::GrowVector(
			int num);  // 1484
	{
		int i; // 1500
		CUtlMemory<Vector2D, int>::operator[](
				int i);  // 602
		CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Element(
			int i);  // 1502
		Vector2D::Vector2D(
			const Vector2D& vOther);  // 1520
		CopyConstruct<Vector2D>(Vector2D* pMemory,
					const Vector2D& src);  // 1502
	}
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::InsertMultipleBefore(
				int elem,
				int num,
				const Vector2D* pToInsert);  // 1476
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::InsertMultipleBefore(
				int elem,
				int num,
				const Vector2D* pToInsert);  // 1303
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::AddMultipleToTail(
				int num,
				const Vector2D* pToCopy);  // 355
	CUtlMemory<Vector2D, int>::Base(); // 112
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Base(); // 355
	Color::GetRawColor(); // 147
	Color::SetRawColor(
			int32 Color);  // 147
	Color::operator=(
			const Color& rhs);  // 356
} /* size: 700, variables: 1, inline expansions: 93 (2483 bytes) */

// <0042A1E2> utils/materialsystem2utils.cpp:370
// member functions: 12
// member variables: 7
// vtable entries: 2
// class size: 1,312
class CMeshLayoutInfo : public CBaseQueuedRenderable {
public:
	/* class CBaseQueuedRenderable <ancestor>; */ /* 0 32 */
	void CMeshLayoutInfo(CMeshLayoutInfo* , const CMeshLayoutInfo& );
	/* utils/materialsystem2utils.cpp:373 */
	void CMeshLayoutInfo(CMeshLayoutInfo* , float64);
	/* utils/materialsystem2utils.cpp:382 */
	virtual void ~CMeshLayoutInfo(CMeshLayoutInfo* );
	/* utils/materialsystem2utils.cpp:387 */
	void Init(CMeshLayoutInfo* , const MeshBuilderBuffers_t* , const IMaterialMode* , CRenderAttributes* , HRenderTexture, LayoutPositionType_e);
	/* utils/materialsystem2utils.cpp:402 */
	virtual void Render(CMeshLayoutInfo* , IRenderContext* );
	/* utils/materialsystem2utils.cpp:412 */
	virtual IQueuedRenderable* GetCopy(CMeshLayoutInfo* );
	MeshBuilderBuffers_t m_mesh; /* 32 64 */
	const class IMaterialMode * m_pMode; /* 96 8 */
	CRenderAttributes m_attributes; /* 112 1184 */
	HRenderTexture m_hTexture; /* 1296 8 */
	LayoutPositionType_e m_PositionType; /* 1304 4 */
	MaterialAttributesType_t m_eAttrType; /* 1308 4 */
	void CMeshLayoutInfo(class CMeshLayoutInfo *, const class CMeshLayoutInfo  &); /* linkage=_ZN15CMeshLayoutInfoC4ERKS_ */
	void CMeshLayoutInfo(class CMeshLayoutInfo *, float64); /* linkage=_ZN15CMeshLayoutInfoC4Ed */
	virtual void ~CMeshLayoutInfo(class CMeshLayoutInfo *); /* linkage=_ZN15CMeshLayoutInfoD4Ev */
	void Init(class CMeshLayoutInfo *, const class MeshBuilderBuffers_t  *, const class IMaterialMode  *, class CRenderAttributes *, HRenderTexture, enum LayoutPositionType_e); /* linkage=_ZN15CMeshLayoutInfo4InitEPK20MeshBuilderBuffers_tPK13IMaterialModeP17CRenderAttributes11CWeakHandleI31InfoForResourceTypeCTextureBaseE20LayoutPositionType_e */
	virtual void Render(class CMeshLayoutInfo *, class IRenderContext *); /* linkage=_ZN15CMeshLayoutInfo6RenderEP14IRenderContext */
	virtual class IQueuedRenderable * GetCopy(class CMeshLayoutInfo *); /* linkage=_ZN15CMeshLayoutInfo7GetCopyEv */
};

// <00490D53> utils/materialsystem2utils.cpp:373
void CMeshLayoutInfo::CMeshLayoutInfo(float64 flTimeToLive)
{
} /* size: 0 */

// <00490D2D> utils/materialsystem2utils.cpp:373
inline void CMeshLayoutInfo::CMeshLayoutInfo(float64 flTimeToLive)
{
} /* size: 0 */

// <00490CA0> utils/materialsystem2utils.cpp:382
// function call: 1
void CMeshLayoutInfo::~CMeshLayoutInfo()
{
	MeshBuilderBuffers_t::Purge(); // 384
} /* size: 88, inline expansions: 1 (48 bytes) */

// <00490B6C> utils/materialsystem2utils.cpp:382
// function calls: 4
void CMeshLayoutInfo::~CMeshLayoutInfo()
{
	MeshBuilderBuffers_t::Purge(); // 384
	IQueuedRenderable::~IQueuedRenderable(); // 38
	CBaseQueuedRenderable::~CBaseQueuedRenderable(); // 385
	CMeshLayoutInfo::~CMeshLayoutInfo(); // 385
} /* size: 101, inline expansions: 4 (115 bytes) */

// <00490B53> utils/materialsystem2utils.cpp:382
inline void CMeshLayoutInfo::~CMeshLayoutInfo()
{
} /* size: 0 */

// <00490AF9> utils/materialsystem2utils.cpp:387
inline void CMeshLayoutInfo::Init(const MeshBuilderBuffers_t* pMesh, const IMaterialMode* pMode, CRenderAttributes* pAttributes, HRenderTexture hTexture, LayoutPositionType_e positionType)
{
} /* size: 0 */

// <004909CF> utils/materialsystem2utils.cpp:402
// function calls: 3
void CMeshLayoutInfo::Render(IRenderContext* pRenderContext)
{
	UseAttributes(CRenderAttributes* pAttributesStore,
			MaterialAttributesType_t eAttrType);  // 407
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 404
} /* size: 185, inline expansions: 3 (51 bytes) */

// <0048F7FB> utils/materialsystem2utils.cpp:412
// variable: 1
// function calls: 89
void CMeshLayoutInfo::GetCopy()
{
	CMeshLayoutInfo* pInfo; // 414
	IQueuedRenderable::IQueuedRenderable(); // 32
	CBaseQueuedRenderable::CBaseQueuedRenderable(
				float64 flTimeToLive);  // 373
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
	CRenderAttributes::CRenderAttributes(); // 373
	Vector::Vector(); // 11
	Vector::Vector(); // 11
	MeshBuilderBuffers_t::MeshBuilderBuffers_t(); // 373
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 373
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 375
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 378
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 378
	CMeshLayoutInfo::CMeshLayoutInfo(
			float64 flTimeToLive);  // 414
	Vector::operator=(
			const Vector& vOther);  // 37
	Vector::operator=(
			const Vector& vOther);  // 38
	MeshBuilderBuffers_t::ShallowCopy(
			const MeshBuilderBuffers_t& other);  // 43
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 47
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 52
	MeshBuilderBuffers_t::DeepCopy(
		const MeshBuilderBuffers_t& other);  // 41
	MeshBuilderBuffers_t::DeepCopy(
		const MeshBuilderBuffers_t& other);  // 415
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 419
} /* size: 717, variables: 1, inline expansions: 89 (2248 bytes) */

// <00429FCB> utils/materialsystem2utils.cpp:432
// member functions: 14
// member variables: 10
// vtable entries: 2
// class size: 1,456
class CPrimitivesLayoutInfo : public CBaseQueuedRenderable {
public:
	/* class CBaseQueuedRenderable <ancestor>; */ /* 0 32 */
	void CPrimitivesLayoutInfo(CPrimitivesLayoutInfo* , const CPrimitivesLayoutInfo& );
	/* utils/materialsystem2utils.cpp:435 */
	void CPrimitivesLayoutInfo(CPrimitivesLayoutInfo* , float64);
	/* utils/materialsystem2utils.cpp:443 */
	virtual void ~CPrimitivesLayoutInfo(CPrimitivesLayoutInfo* );
	/* utils/materialsystem2utils.cpp:445 */
	void Init(CPrimitivesLayoutInfo* , MaterialPrimitiveType2_t, int, const IMaterial2* , const CRenderAttributes* , HRenderTexture, LayoutPositionType_e);
	/* utils/materialsystem2utils.cpp:463 */
	void Init(CPrimitivesLayoutInfo* , MaterialPrimitiveType2_t, const Vector* , const Color* , const Vector2D* , int, const IMaterial2* , const CRenderAttributes* , HRenderTexture, LayoutPositionType_e);
	/* utils/materialsystem2utils.cpp:480 */
	virtual void Render(CPrimitivesLayoutInfo* , IRenderContext* );
	/* utils/materialsystem2utils.cpp:494 */
	virtual IQueuedRenderable* GetCopy(CPrimitivesLayoutInfo* );
	CUtlVectorFixedGrowable<Vector, 4> m_points __attribute__((__aligned__(8))); /* 32 80 */
	CUtlVectorFixedGrowable<Color, 4> m_colors __attribute__((__aligned__(8))); /* 112 48 */
	CUtlVectorFixedGrowable<Vector2D, 4> m_UVs __attribute__((__aligned__(8))); /* 160 64 */
	const class IMaterial2 * m_pMaterial; /* 224 8 */
	CRenderAttributes m_attributes; /* 240 1184 */
	HRenderTexture m_hTexture; /* 1424 8 */
	MaterialPrimitiveType2_t m_primType; /* 1432 4 */
	LayoutPositionType_e m_positionType; /* 1436 4 */
	MaterialAttributesType_t m_eAttrType; /* 1440 4 */
	void CPrimitivesLayoutInfo(class CPrimitivesLayoutInfo *, const class CPrimitivesLayoutInfo  &); /* linkage=_ZN21CPrimitivesLayoutInfoC4ERKS_ */
	void CPrimitivesLayoutInfo(class CPrimitivesLayoutInfo *, float64); /* linkage=_ZN21CPrimitivesLayoutInfoC4Ed */
	virtual void ~CPrimitivesLayoutInfo(class CPrimitivesLayoutInfo *); /* linkage=_ZN21CPrimitivesLayoutInfoD4Ev */
	void Init(class CPrimitivesLayoutInfo *, enum MaterialPrimitiveType2_t, int, const class IMaterial2  *, const class CRenderAttributes  *, HRenderTexture, enum LayoutPositionType_e); /* linkage=_ZN21CPrimitivesLayoutInfo4InitE24MaterialPrimitiveType2_tiPK10IMaterial2PK17CRenderAttributes11CWeakHandleI31InfoForResourceTypeCTextureBaseE20LayoutPositionType_e */
	void Init(class CPrimitivesLayoutInfo *, enum MaterialPrimitiveType2_t, const class Vector  *, const class Color  *, const class Vector2D  *, int, const class IMaterial2  *, const class CRenderAttributes  *, HRenderTexture, enum LayoutPositionType_e); /* linkage=_ZN21CPrimitivesLayoutInfo4InitE24MaterialPrimitiveType2_tPK6VectorPK5ColorPK8Vector2DiPK10IMaterial2PK17CRenderAttributes11CWeakHandleI31InfoForResourceTypeCTextureBaseE20LayoutPositionType_e */
	virtual void Render(class CPrimitivesLayoutInfo *, class IRenderContext *); /* linkage=_ZN21CPrimitivesLayoutInfo6RenderEP14IRenderContext */
	virtual class IQueuedRenderable * GetCopy(class CPrimitivesLayoutInfo *); /* linkage=_ZN21CPrimitivesLayoutInfo7GetCopyEv */
} __attribute__((__aligned__(16)));

// <0048E21B> utils/materialsystem2utils.cpp:435
// function calls: 102
void CPrimitivesLayoutInfo::CPrimitivesLayoutInfo(float64 flTimeToLive)
{
	IQueuedRenderable::IQueuedRenderable(); // 32
	CBaseQueuedRenderable::CBaseQueuedRenderable(
				float64 flTimeToLive);  // 435
	{
	}
	AlignedByteArrayExplicit_t<4, Vector, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<4, Vector>::AlignedByteArray_t(); // 228
	CUtlMemory<Vector, int>::CUtlMemory(
			Vector* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<Vector, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<Vector, int>::CUtlMemoryFixedGrowable_Base(
					Vector* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<4, Vector, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<Vector, 4, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 4, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 4, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<Vector, 4>::CUtlVectorFixedGrowable(
				int growSize);  // 435
	CUtlMemory<Color, int>::CUtlMemory(
			Color* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<Color, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<Color, int>::CUtlMemoryFixedGrowable_Base(
					Color* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<4, Color, 1>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<4, Color>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<4, Color, 1>::Base(); // 231
	CUtlMemoryFixedGrowable<Color, 4, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<Color, CUtlMemoryFixedGrowable<Color, 4, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Color, CUtlMemoryFixedGrowable<Color, 4, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<Color, 4>::CUtlVectorFixedGrowable(
				int growSize);  // 435
	{
	}
	AlignedByteArrayExplicit_t<4, Vector2D, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<4, Vector2D>::AlignedByteArray_t(); // 228
	CUtlMemory<Vector2D, int>::CUtlMemory(
			Vector2D* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<Vector2D, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<Vector2D, int>::CUtlMemoryFixedGrowable_Base(
					Vector2D* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<4, Vector2D, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<Vector2D, 4, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 4, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 4, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<Vector2D, 4>::CUtlVectorFixedGrowable(
				int growSize);  // 435
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
	CRenderAttributes::CRenderAttributes(); // 435
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 435
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 440
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 440
} /* size: 682, inline expansions: 102 (2162 bytes) */

// <0048E1F5> utils/materialsystem2utils.cpp:435
inline void CPrimitivesLayoutInfo::CPrimitivesLayoutInfo(float64 flTimeToLive)
{
} /* size: 0 */

// <0048D78F> utils/materialsystem2utils.cpp:443
// function calls: 55
void CPrimitivesLayoutInfo::~CPrimitivesLayoutInfo()
{
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 4, int> >::RemoveAll(); // 1798
	CUtlMemory<Vector2D, int>::IsExternallyAllocated(); // 577
	CUtlMemory<Vector2D, int>::ConvertToExternalMemory(
				Vector2D* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<Vector2D, int>::Purge_FixedGrowable(
				Vector2D* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<Vector2D, int>::Purge_FixedGrowable(
				Vector2D* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<4, Vector2D, 4>::Base(); // 237
	CUtlMemoryFixedGrowable<Vector2D, 4, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 4, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 4, int> >::Purge(); // 560
	ValidateAlignment<Vector2D>(void); // 508
	CUtlMemory<Vector2D, int>::Purge(); // 903
	CUtlMemory<Vector2D, int>::Purge(); // 510
	CUtlMemory<Vector2D, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<Vector2D, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<Vector2D, 4, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 4, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<Vector2D, 4>::~CUtlVectorFixedGrowable(); // 443
	CUtlVectorBase<Color, CUtlMemoryFixedGrowable<Color, 4, int> >::RemoveAll(); // 1798
	CUtlMemory<Color, int>::IsExternallyAllocated(); // 577
	CUtlMemory<Color, int>::ConvertToExternalMemory(
				Color* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<Color, int>::Purge_FixedGrowable(
				Color* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<Color, int>::Purge_FixedGrowable(
				Color* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<4, Color, 1>::Base(); // 237
	CUtlMemoryFixedGrowable<Color, 4, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<Color, int>::Base(); // 112
	CUtlVectorBase<Color, CUtlMemoryFixedGrowable<Color, 4, int> >::Base(); // 368
	CUtlVectorBase<Color, CUtlMemoryFixedGrowable<Color, 4, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<Color, CUtlMemoryFixedGrowable<Color, 4, int> >::Purge(); // 560
	CUtlMemory<Color, int>::Purge(); // 903
	CUtlMemory<Color, int>::Purge(); // 510
	ValidateAlignment<Color>(void); // 508
	CUtlMemory<Color, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<Color, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<Color, 4, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<Color, CUtlMemoryFixedGrowable<Color, 4, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<Color, 4>::~CUtlVectorFixedGrowable(); // 443
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 4, int> >::RemoveAll(); // 1798
	CUtlMemory<Vector, int>::IsExternallyAllocated(); // 577
	CUtlMemory<Vector, int>::ConvertToExternalMemory(
				Vector* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<Vector, int>::Purge_FixedGrowable(
				Vector* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<Vector, int>::Purge_FixedGrowable(
				Vector* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<4, Vector, 4>::Base(); // 237
	CUtlMemoryFixedGrowable<Vector, 4, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<Vector, int>::Base(); // 112
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 4, int> >::Base(); // 368
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 4, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 4, int> >::Purge(); // 560
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 510
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<Vector, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<Vector, 4, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 4, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<Vector, 4>::~CUtlVectorFixedGrowable(); // 443
} /* size: 397, inline expansions: 55 (2116 bytes) */

// <0048D728> utils/materialsystem2utils.cpp:443
void CPrimitivesLayoutInfo::~CPrimitivesLayoutInfo()
{
} /* size: 36 */

// <0048D70F> utils/materialsystem2utils.cpp:443
inline void CPrimitivesLayoutInfo::~CPrimitivesLayoutInfo()
{
} /* size: 0 */

// <0048D6A8> utils/materialsystem2utils.cpp:445
inline void CPrimitivesLayoutInfo::Init(MaterialPrimitiveType2_t primType, int nNumPoints, const IMaterial2* pMaterial, const CRenderAttributes* pAttributes, HRenderTexture hTexture, LayoutPositionType_e positionType)
{
} /* size: 0 */

// <0048D61A> utils/materialsystem2utils.cpp:463
inline void CPrimitivesLayoutInfo::Init(MaterialPrimitiveType2_t primType, const Vector* pPoints, const Color* pColors, const Vector2D* pUVs, int nNumPoints, const IMaterial2* pMaterial, const CRenderAttributes* pAttributes, HRenderTexture hTexture, LayoutPositionType_e positionType)
{
} /* size: 0 */

// <0048D3B3> utils/materialsystem2utils.cpp:480
// function calls: 10
void CPrimitivesLayoutInfo::Render(IRenderContext* pRenderContext)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 482
	UseAttributes(CRenderAttributes* pAttributesStore,
			MaterialAttributesType_t eAttrType);  // 489
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 4, int> >::Count(); // 482
	CUtlMemory<Vector2D, int>::Base(); // 112
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 4, int> >::Base(); // 486
	CUtlMemory<Color, int>::Base(); // 112
	CUtlVectorBase<Color, CUtlMemoryFixedGrowable<Color, 4, int> >::Base(); // 485
	CUtlMemory<Vector, int>::Base(); // 112
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 4, int> >::Base(); // 484
} /* size: 240, inline expansions: 10 (88 bytes) */

// <0048CC27> utils/materialsystem2utils.cpp:494
// variable: 1
// function calls: 34
void CPrimitivesLayoutInfo::GetCopy()
{
	CPrimitivesLayoutInfo* pInfo; // 496
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 4, int> >::Count(); // 498
	CUtlMemory<Vector, int>::Base(); // 112
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 4, int> >::Base(); // 498
	CUtlMemory<Vector, int>::Base(); // 112
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 4, int> >::Base(); // 102
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 4, int> >::begin(); // 1344
	Vector::operator=(
			const Vector& vOther);  // 209
	UtlTraitsCopyRange<Vector>(const Vector* pFrom,
					const Vector* pFromEnd,
					Vector* pTo);  // 200
	UtlTraitsCopyRange<Vector>(const Vector* pFrom,
					const Vector* pFromEnd,
					Vector* pTo);  // 1344
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 4, int> >::CopyArray(
			const Vector* pArray,
			int size);  // 498
	CUtlVectorBase<Color, CUtlMemoryFixedGrowable<Color, 4, int> >::Count(); // 499
	CUtlMemory<Color, int>::Base(); // 112
	CUtlVectorBase<Color, CUtlMemoryFixedGrowable<Color, 4, int> >::Base(); // 499
	CUtlMemory<Color, int>::Base(); // 112
	CUtlVectorBase<Color, CUtlMemoryFixedGrowable<Color, 4, int> >::Base(); // 102
	CUtlVectorBase<Color, CUtlMemoryFixedGrowable<Color, 4, int> >::begin(); // 1344
	Color::GetRawColor(); // 147
	Color::SetRawColor(
			int32 Color);  // 147
	Color::operator=(
			const Color& rhs);  // 209
	UtlTraitsCopyRange<Color>(const Color* pFrom,
					const Color* pFromEnd,
					Color* pTo);  // 200
	UtlTraitsCopyRange<Color>(const Color* pFrom,
					const Color* pFromEnd,
					Color* pTo);  // 1344
	CUtlVectorBase<Color, CUtlMemoryFixedGrowable<Color, 4, int> >::CopyArray(
			const Color* pArray,
			int size);  // 499
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 4, int> >::Count(); // 500
	CUtlMemory<Vector2D, int>::Base(); // 112
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 4, int> >::Base(); // 500
	CUtlMemory<Vector2D, int>::Base(); // 112
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 4, int> >::Base(); // 102
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 4, int> >::begin(); // 1344
	Vector2D::operator=(
			const Vector2D& vOther);  // 209
	UtlTraitsCopyRange<Vector2D>(const Vector2D* pFrom,
					const Vector2D* pFromEnd,
					Vector2D* pTo);  // 200
	UtlTraitsCopyRange<Vector2D>(const Vector2D* pFrom,
					const Vector2D* pFromEnd,
					Vector2D* pTo);  // 1344
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 4, int> >::CopyArray(
			const Vector2D* pArray,
			int size);  // 500
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 503
} /* size: 429, variables: 1, inline expansions: 34 (824 bytes) */

// <0048CC05> utils/materialsystem2utils.cpp:527
void* __CreateCMaterialSystem2UtilsIMaterialSystem2Utils_interface(void)
{
} /* size: 12 */

// <004A2273> utils/materialsystem2utils.cpp:540
// variables: 2
// function call: 1
bool BindIdentityInstanceIDBufferAndSetRenderState<VertexUVPosColorNormalAndTangent_t>(const IMaterial2* pMat, const CRenderAttributes* pAttributes, IRenderContext* pRenderContext, RsStencilStateOverride_t* pOverrideStencilState)
{
	IMaterialMode* pMode; // 545
	RenderInputLayout_t hInputLayout; // 552
	CUtlStringToken::CUtlStringToken(); // 545
} /* size: 167, variables: 2, inline expansions: 1 (7 bytes) */

// <004A167C> utils/materialsystem2utils.cpp:540
// variables: 3
// function calls: 20
bool BindIdentityInstanceIDBufferAndSetRenderState<VertexColorUVPos_t>(const IMaterial2* pMat, const CRenderAttributes* pAttributes, IRenderContext* pRenderContext, RsStencilStateOverride_t* pOverrideStencilState)
{
	IMaterialMode* pMode; // 545
	RenderInputLayout_t hInputLayout; // 552
	CUtlStringToken::CUtlStringToken(); // 545
	CThreadSyncValue<bool>::Load(); // 34
	CTSInputLayoutCreator::IsInitialized(); // 446
	CThreadSyncValue<bool>::Load(); // 60
	{
	}
	CTSInputLayoutCreator::GetLayout(); // 459
	{
		RenderInputLayoutField_t colorUVTestLayout; // 448
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
				int nLineNumber);  // 39
		CThreadSyncValue<bool>::Load(); // 34
		CTSInputLayoutCreator::IsInitialized(); // 40
		CThreadSyncValue<bool>::Store(
			bool value);  // 43
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 46
		CTSInputLayoutCreator::CreateLayout(
				const char* pLayoutName,
				int nFieldCount,
				const RenderInputLayoutField_t* pFieldDescs);  // 455
	}
	GetLayout(void); // 565
} /* size: 0, variables: 2, inline expansions: 6 (471 bytes) */

// <0044210B> utils/materialsystem2utils.cpp:540
// variables: 2
bool BindIdentityInstanceIDBufferAndSetRenderState<VertexColorUVPos_t>(const IMaterial2* pMat, const CRenderAttributes* pAttributes, IRenderContext* pRenderContext, RsStencilStateOverride_t* pOverrideStencilState)
{
	IMaterialMode* pMode; // 545
	RenderInputLayout_t hInputLayout; // 552
} /* size: 0, variables: 2 */

// <00441DA9> utils/materialsystem2utils.cpp:540
// variables: 2
bool BindIdentityInstanceIDBufferAndSetRenderState<VertexUVPosColorNormalAndTangent_t>(const IMaterial2* pMat, const CRenderAttributes* pAttributes, IRenderContext* pRenderContext, RsStencilStateOverride_t* pOverrideStencilState)
{
	IMaterialMode* pMode; // 545
	RenderInputLayout_t hInputLayout; // 552
} /* size: 0, variables: 2 */

// <0048CBBE> utils/materialsystem2utils.cpp:570
bool LessFunc(const CUtlStringToken& lhs, const CUtlStringToken& rhs)
{
} /* size: 12 */

// <0048C157> utils/materialsystem2utils.cpp:578
// function calls: 46
void CMaterialSystem2Utils::CMaterialSystem2Utils()
{
	IAppSystem::IAppSystem(); // 51
	IMaterialSystem2Utils::IMaterialSystem2Utils(); // 120
	CBaseAppSystem<IMaterialSystem2Utils>::CBaseAppSystem(); // 171
	CTier0AppSystem<IMaterialSystem2Utils, 0>::CTier0AppSystem(); // 225
	CTier1AppSystem<IMaterialSystem2Utils, 0>::CTier1AppSystem(); // 48
	CUtlMemory<ResourceManifestDesc_t::ValidateGrowSize(); // 475
	CUtlMemory<ResourceManifestDesc_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ResourceManifestDesc_t::ResetDbgInfo(); // 530
	CUtlVectorBase<ResourceManifestDesc_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ResourceManifestDesc_t::CUtlVector(); // 48
	CTier2AppSystem<IMaterialSystem2Utils, 0>::CTier2AppSystem(); // 579
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int>, short unsigned int>::ValidateGrowSize(); // 475
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int>, short unsigned int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 484
	InvalidIndex(void); // 486
	InvalidIndex(void); // 488
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int>, short unsigned int>::InvalidIterator(); // 489
	ResetDbgInfo(const CUtlRBTree<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int, CUtlMap<CUtlStringToken, int>::CKeyLess, CUtl this); // 491
	CUtlRBTree(const CUtlRBTree<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int, CUtlMap<CUtlStringToken, int>::CKeyLess, CUtl this,
			int growSize,
			int initSize,
			const LessFunc_t& lessfunc);  // 63
	CKeyLess::CKeyLess(
		LessFunc_t lessFunc);  // 63
	CUtlMap<CUtlStringToken, int, short unsigned int, bool (::CUtlMap(
		int growSize,
		int initSize,
		LessFunc_t lessfunc);  // 579
	CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(); // 579
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(); // 579
	CUtlMemory<CUtlVector<IQueuedRenderable::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<IQueuedRenderable::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlVector<IQueuedRenderable::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlVector<IQueuedRenderable::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlVector<IQueuedRenderable::CUtlVector(); // 579
	CUtlMemory<CUtlVector<IQueuedRenderable::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<IQueuedRenderable::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlVector<IQueuedRenderable::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlVector<IQueuedRenderable::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlVector<IQueuedRenderable::CUtlVector(); // 579
	CKeyLess::CKeyLess(
		LessFunc_t lessFunc);  // 63
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int>, short unsigned int>::ValidateGrowSize(); // 475
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int>, short unsigned int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 484
	InvalidIndex(void); // 486
	InvalidIndex(void); // 488
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int>, short unsigned int>::InvalidIterator(); // 489
	ResetDbgInfo(const CUtlRBTree<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int, CUtlMap<CUtlStringToken, int>::CKeyLess, CUtl this); // 491
	CUtlRBTree(const CUtlRBTree<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int, CUtlMap<CUtlStringToken, int>::CKeyLess, CUtl this,
			int growSize,
			int initSize,
			const LessFunc_t& lessfunc);  // 63
	CUtlMap<CUtlStringToken, int, short unsigned int, bool (::CUtlMap(
		int growSize,
		int initSize,
		LessFunc_t lessfunc);  // 579
	CKeyLess::CKeyLess(
		LessFunc_t lessFunc);  // 201
	SetLessFunc(const CUtlRBTree<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int, CUtlMap<CUtlStringToken, int>::CKeyLess, CUtl this,
			const LessFunc_t& func);  // 201
	CUtlMap<CUtlStringToken, int, short unsigned int, bool (::SetLessFunc(
			LessFunc_t func);  // 586
} /* size: 227, inline expansions: 46 (429 bytes) */

// <0048C13E> utils/materialsystem2utils.cpp:578
void CMaterialSystem2Utils::CMaterialSystem2Utils()
{
} /* size: 0 */

// <0048B775> utils/materialsystem2utils.cpp:589
// function calls: 50
void CMaterialSystem2Utils::~CMaterialSystem2Utils()
{
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int>, short unsigned int>::IsExternallyAllocated(); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 1287
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int>, short unsigned int>::InvalidIterator(); // 1288
	Purge(const CUtlRBTree<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int, CUtlMap<CUtlStringToken, int>::CKeyLess, CUtl this); // 509
	ValidateAlignment<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int> >(void); // 508
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 510
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int>, short unsigned int>::~CUtlMemory(); // 510
	~CUtlRBTree(const CUtlRBTree<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int, CUtlMap<CUtlStringToken, int>::CKeyLess, CUtl this); // 47
	CUtlMap<CUtlStringToken, int, short unsigned int, bool (::~CUtlMap()(const CUtlStringToken&, const CUtlStringToken&)>* this); // 591
	CUtlMemory<CUtlVector<IQueuedRenderable::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<IQueuedRenderable::Purge(); // 903
	CUtlMemory<CUtlVector<IQueuedRenderable::Purge(); // 1799
	CUtlVectorBase<CUtlVector<IQueuedRenderable::Purge(); // 560
	ValidateAlignment<CUtlVector<IQueuedRenderable*> >(void); // 508
	CUtlMemory<CUtlVector<IQueuedRenderable::Purge(); // 510
	CUtlMemory<CUtlVector<IQueuedRenderable::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlVector<IQueuedRenderable::~CUtlVectorBase(); // 410
	CUtlVector<CUtlVector<IQueuedRenderable::~CUtlVector(); // 591
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int>, short unsigned int>::IsExternallyAllocated(); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 1287
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int>, short unsigned int>::InvalidIterator(); // 1288
	Purge(const CUtlRBTree<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int, CUtlMap<CUtlStringToken, int>::CKeyLess, CUtl this); // 509
	ValidateAlignment<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int> >(void); // 508
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 510
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int>, short unsigned int>::~CUtlMemory(); // 510
	~CUtlRBTree(const CUtlRBTree<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int, CUtlMap<CUtlStringToken, int>::CKeyLess, CUtl this); // 47
	CUtlMap<CUtlStringToken, int, short unsigned int, bool (::~CUtlMap()(const CUtlStringToken&, const CUtlStringToken&)>* this); // 591
	CUtlMemory<CUtlVector<IQueuedRenderable::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<IQueuedRenderable::Purge(); // 903
	CUtlMemory<CUtlVector<IQueuedRenderable::Purge(); // 1799
	CUtlVectorBase<CUtlVector<IQueuedRenderable::Purge(); // 560
	ValidateAlignment<CUtlVector<IQueuedRenderable*> >(void); // 508
	CUtlMemory<CUtlVector<IQueuedRenderable::Purge(); // 510
	CUtlMemory<CUtlVector<IQueuedRenderable::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlVector<IQueuedRenderable::~CUtlVectorBase(); // 410
	CUtlVector<CUtlVector<IQueuedRenderable::~CUtlVector(); // 591
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 591
	CStrongHandle<InfoForResourceTypeIMaterial2>::~CStrongHandle(); // 591
	CUtlMemory<ResourceManifestDesc_t::IsExternallyAllocated(); // 905
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 903
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 1799
	CUtlVectorBase<ResourceManifestDesc_t::RemoveAll(); // 1798
	CUtlVectorBase<ResourceManifestDesc_t::Purge(); // 560
	CUtlVectorBase<ResourceManifestDesc_t::~CUtlVectorBase(); // 410
	CUtlVector<ResourceManifestDesc_t::~CUtlVector(); // 42
	CTier2AppSystem<IMaterialSystem2Utils, 0>::~CTier2AppSystem(); // 591
} /* size: 278, inline expansions: 50 (864 bytes) */

// <0048B70F> utils/materialsystem2utils.cpp:589
void CMaterialSystem2Utils::~CMaterialSystem2Utils()
{
} /* size: 36 */

// <0048B6C8> utils/materialsystem2utils.cpp:604
void CMaterialSystem2Utils::GetDependencies()
{
} /* size: 12 */

// <0048B481> utils/materialsystem2utils.cpp:613
// variables: 2
// function calls: 5
ResourceManifestDesc_t* InitManifestDesc<MaterialUtilsInit::CTemplateArg>(CTemplateArg& def)
{
	ResourceManifestDesc_t s_Manifest; // 613
	ManifestEntryGroupList_t s_pManifestEntries; // 613
	ResourceManifestEntry_t::ResourceManifestEntry_t(
				const char* pResourceName,
				bool bResourceNameIsManifestName,
				CStrongHandleVoid* pHandle);  // 619
	ResourceManifestEntry_t::ResourceManifestEntry_t(
				const char* pResourceName,
				bool bResourceNameIsManifestName,
				CStrongHandleVoid* pHandle);  // 619
	ResourceManifestEntry_t::ResourceManifestEntry_t(
				const char* pResourceName,
				bool bResourceNameIsManifestName,
				CStrongHandleVoid* pHandle);  // 619
	ResourceManifestEntry_t::ResourceManifestEntry_t(
				const char* pResourceName,
				bool bResourceNameIsManifestName,
				CStrongHandleVoid* pHandle);  // 619
	ResourceManifestEntry_t::ResourceManifestEntry_t(
				const char* pResourceName,
				bool bResourceNameIsManifestName,
				CStrongHandleVoid* pHandle);  // 619
} /* size: 367, variables: 2, inline expansions: 5 (247 bytes) */

// <0048B061> utils/materialsystem2utils.cpp:622
// function calls: 16
void CMaterialSystem2Utils::Connect(CreateInterfaceFn factory)
{
	CUtlMemory<ResourceManifestDesc_t::NumAllocated(); // 1196
	CUtlMemory<ResourceManifestDesc_t::Base(); // 112
	CUtlVectorBase<ResourceManifestDesc_t::Base(); // 368
	CUtlVectorBase<ResourceManifestDesc_t::ResetDbgInfo(); // 824
	CUtlMemory<ResourceManifestDesc_t::IsGrowable(); // 823
	CUtlMemory<ResourceManifestDesc_t::IsExternallyAllocated(); // 859
	CUtlMemory<ResourceManifestDesc_t::IsExternallyAllocated(); // 861
	CUtlMemory<ResourceManifestDesc_t::Grow(
		int num);  // 806
	CUtlVectorBase<ResourceManifestDesc_t::GrowMemory(
			int num);  // 1198
	CUtlMemory<ResourceManifestDesc_t::operator[](
			int i);  // 602
	CUtlVectorBase<ResourceManifestDesc_t::Element(
		int i);  // 1201
	CopyConstruct<ResourceManifestDesc_t*>(ResourceManifestDesc_t** pMemory,
						ResourceManifestDesc_t* const& src);  // 1201
	CUtlVectorBase<ResourceManifestDesc_t::AddToTail(
			ResourceManifestDesc_t* const& src);  // 102
	CTier2AppSystem<IMaterialSystem2Utils, 0>::EnableManualManifest(
				ResourceManifestDesc_t* pManifest);  // 626
	CTier0AppSystem<IMaterialSystem2Utils, 0>::Connect(
		CreateInterfaceFn factory);  // 54
	CTier2AppSystem<IMaterialSystem2Utils, 0>::Connect(
		CreateInterfaceFn factory);  // 628
} /* size: 416, inline expansions: 16 (1235 bytes) */

// <0048AADF> utils/materialsystem2utils.cpp:635
// variables: 6
// function calls: 19
void CMaterialSystem2Utils::Init()
{
	InitReturnVal_t nRetVal; // 637
	int index; // 643
	CUtlStringToken defaultID; // 644
	const char   __FUNCTION__; // 57747
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 652
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 657
	}
	CTier0AppSystem<IMaterialSystem2Utils, 0>::Init(); // 71
	CTier2AppSystem<IMaterialSystem2Utils, 0>::Init(); // 637
	CUtlMemory<CUtlVector<IQueuedRenderable::NumAllocated(); // 1143
	CUtlMemory<CUtlVector<IQueuedRenderable::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlVector<IQueuedRenderable::Element(
		int i);  // 1148
	CUtlMemory<IQueuedRenderable::ValidateGrowSize(); // 475
	CUtlMemory<IQueuedRenderable::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<IQueuedRenderable::ResetDbgInfo(); // 530
	CUtlVectorBase<IQueuedRenderable::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<IQueuedRenderable::CUtlVector(); // 1479
	Construct<CUtlVector<IQueuedRenderable*> >(CUtlVector<IQueuedRenderable*, CUtlMemory<IQueuedRenderable*, int> >* pMemory); // 1148
	CUtlMemory<CUtlVector<IQueuedRenderable::Base(); // 112
	CUtlVectorBase<CUtlVector<IQueuedRenderable::Base(); // 368
	CUtlVectorBase<CUtlVector<IQueuedRenderable::ResetDbgInfo(); // 824
	CUtlVectorBase<CUtlVector<IQueuedRenderable::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CUtlVector<IQueuedRenderable::AddToTail(); // 643
	Node_t::Node_t(
		const KeyType_t& k,
		const ElemType_t& e);  // 207
	CUtlMap<CUtlStringToken, int, short unsigned int, bool (::Insert(
		const KeyType_t& key,
		const ElemType_t& insert,
		ERBTreeInsertBehavior eInsertBehavior);  // 645
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 644
} /* size: 0, variables: 4, inline expansions: 19 (375 bytes) */

// <0048A3A3> utils/materialsystem2utils.cpp:663
// variables: 2
// function calls: 29
void CMaterialSystem2Utils::Shutdown()
{
	{
		int index; // 667
		{
			int i; // 669
			CUtlMemory<CUtlVector<IQueuedRenderable::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlVector<IQueuedRenderable::operator[](
					int i);  // 669
			CUtlVectorBase<IQueuedRenderable::Count(); // 669
			CUtlMemory<CUtlVector<IQueuedRenderable::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlVector<IQueuedRenderable::operator[](
					int i);  // 671
			CUtlMemory<IQueuedRenderable::operator[](
					int i);  // 588
			CUtlVectorBase<IQueuedRenderable::operator[](
					int i);  // 671
		}
		CUtlVectorBase<CUtlVector<IQueuedRenderable::Count(); // 667
		CUtlMemory<CUtlVector<IQueuedRenderable::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlVector<IQueuedRenderable::operator[](
				int i);  // 673
		CUtlVectorBase<IQueuedRenderable::RemoveAll(); // 673
	}
	CTier0AppSystem<IMaterialSystem2Utils, 0>::Shutdown(); // 85
	CTier2AppSystem<IMaterialSystem2Utils, 0>::Shutdown(); // 665
	CUtlMap<CUtlStringToken, int, short unsigned int, bool (::RemoveAll()(const CUtlStringToken&, const CUtlStringToken&)>* this); // 676
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
			int nLineNumber);  // 50
	CThreadSyncValue<bool>::Load(); // 34
	CTSInputLayoutCreator::IsInitialized(); // 51
	CThreadSyncValue<bool>::Store(
		bool value);  // 54
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 56
	CTSInputLayoutCreator::DestroyLayout(); // 465
	DestroyLayout(void); // 678
} /* size: 352, inline expansions: 18 (654 bytes) */

// <004A12E5> utils/materialsystem2utils.cpp:690
void CMaterialSystem2Utils::GetDefaultDebugFont(bool bOutline)
{
} /* size: 15 */

// <0048A1B1> utils/materialsystem2utils.cpp:711
// variables: 4
void CMaterialSystem2Utils::SetMaterialModeState(IRenderContext* pCtx, const IMaterialMode* pMode, const CRenderAttributes* pAttributes, RenderInputLayout_t hInputLayout, const RsStencilStateOverride_t* pOverrideStencilState, const RsDepthBiasStateOverride_t* pOverrideDepthBiasState, const RsFillModeOverride_t* pOverrideFillMode, int nRequiredMipSize, uint32 nRenderStateSetNotAllowed)
{
	MaterialRenderablePass_t pass; // 721
	int nPasses; // 722
	const char   __FUNCTION__; // 58164
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 729
	}
} /* size: 0, variables: 3 */

// <0048A187> utils/materialsystem2utils.cpp:766
inline void BindTexturedMaterialTexture(IRenderContext* pCtx, HRenderTexture hTexture)
{
} /* size: 0 */

// <004A237E> utils/materialsystem2utils.cpp:772
// variable: 1
// function calls: 3
void CMaterialSystem2Utils::UpdateKnownMaterials()
{
	const IMaterial2* pMaterial; // 779
	CStrongHandle<InfoForResourceTypeIMaterial2>::GetData(); // 779
	CUtlStringToken::CUtlStringToken(); // 785
	CMaterialSystem2Utils::UpdateKnownMaterials(); // 772
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <0048A161> utils/materialsystem2utils.cpp:772
// variable: 1
void CMaterialSystem2Utils::UpdateKnownMaterials()
{
	const IMaterial2* pMaterial; // 779
} /* size: 0, variables: 1 */

// <0048A0F3> utils/materialsystem2utils.cpp:788
// function call: 1
void CMaterialSystem2Utils::OnMaterialUnload(const IMaterial2* pMaterial)
{
	CStrongHandle<InfoForResourceTypeIMaterial2>::GetData(); // 790
} /* size: 44, inline expansions: 1 (12 bytes) */

// <00489F35> utils/materialsystem2utils.cpp:796
// function calls: 5
void CMaterialSystem2Utils::SetCurrentMaterialMode(IRenderContext* pCtx, const IMaterialMode* pMode, const CRenderAttributes* pAttributes, uint64 nKey, HRenderTexture hTexture)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 817
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 693
	IRenderContext::ResetMaterialStateHint(); // 813
} /* size: 209, inline expansions: 5 (46 bytes) */

// <004A1316> utils/materialsystem2utils.cpp:823
// function calls: 4
void CMaterialSystem2Utils::ResetMaterialCache(IRenderContext* pCtx)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 693
	IRenderContext::ResetMaterialStateHint(); // 825
} /* size: 27, inline expansions: 4 (22 bytes) */

// <00489F0F> utils/materialsystem2utils.cpp:823
void CMaterialSystem2Utils::ResetMaterialCache(IRenderContext* pCtx)
{
} /* size: 0 */

// <004A2B5F> utils/materialsystem2utils.cpp:828
// function calls: 4
void CMaterialSystem2Utils::SetDefaultMaterial(IRenderContext* pCtx, bool bForce)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 837
} /* size: 97, inline expansions: 4 (45 bytes) */

// <00489EDC> utils/materialsystem2utils.cpp:828
void CMaterialSystem2Utils::SetDefaultMaterial(IRenderContext* pCtx, bool bForce)
{
} /* size: 0 */

// <004888C2> utils/materialsystem2utils.cpp:840
// variables: 2
// function calls: 106
void CMaterialSystem2Utils::SetTexturedMaterial(IRenderContext* pCtx, HRenderTexture hTexture, bool bForce)
{
	CRenderAttributes attrs; // 876
	bool bSucc; // 878
	CWeakHandle<InfoForResourceTypeCTextureBase>::HasHandle(); // 842
	CStrongHandle<InfoForResourceTypeIMaterial2>::GetData(); // 779
	CUtlStringToken::CUtlStringToken(); // 785
	CMaterialSystem2Utils::UpdateKnownMaterials(); // 772
	CMaterialSystem2Utils::UpdateKnownMaterials(); // 847
	IRenderContext::GetMaterialStateHintMode(); // 854
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 873
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
	CRenderAttributes::CRenderAttributes(); // 876
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 877
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
			int32 nSingleMipLevelToBind);  // 877
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 878
	IRenderContext::GetMaterialStateHintKey(); // 855
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 678
	IRenderContext::GetMaterialStateHintTexture(); // 860
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator!=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 860
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 862
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 768
	BindTexturedMaterialTexture(IRenderContext* pCtx,
					HRenderTexture hTexture);  // 862
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 863
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 687
	IRenderContext::SetMaterialStateHint(
				const IMaterialMode* pMode,
				HRenderTexture hTexture,
				uint64 nKey);  // 863
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 867
} /* size: 843, variables: 2, inline expansions: 106 (1838 bytes) */

// <0048841C> utils/materialsystem2utils.cpp:883
// function calls: 19
void CMaterialSystem2Utils::SetMaterialMode(IRenderContext* pCtx, const IMaterialMode* pMode, const CRenderAttributes* pAttributes, uint64 nKey, bool bForce)
{
	CStrongHandle<InfoForResourceTypeIMaterial2>::GetData(); // 779
	CUtlStringToken::CUtlStringToken(); // 785
	CMaterialSystem2Utils::UpdateKnownMaterials(); // 772
	CMaterialSystem2Utils::UpdateKnownMaterials(); // 891
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 914
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 917
	IRenderContext::GetMaterialStateHintMode(); // 902
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 678
	IRenderContext::GetMaterialStateHintTexture(); // 903
	IRenderContext::GetMaterialStateHintKey(); // 904
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 907
} /* size: 308, inline expansions: 19 (315 bytes) */

// <00488102> utils/materialsystem2utils.cpp:920
// variables: 2
// function calls: 12
void CMaterialSystem2Utils::QueueResetMaterialCache(CUtlStringToken viewportName, float flTimeToLive)
{
	CQueuedResetMaterialCacheRenderable* pRenderable; // 922
	ViewportLayoutList_t& infoList; // 923
	IQueuedRenderable::IQueuedRenderable(); // 32
	CBaseQueuedRenderable::CBaseQueuedRenderable(
				float64 flTimeToLive);  // 136
	CQueuedResetMaterialCacheRenderable::CQueuedResetMaterialCacheRenderable(
						float64 flTimeToLive);  // 922
	CUtlMemory<IQueuedRenderable::NumAllocated(); // 1247
	CUtlMemory<IQueuedRenderable::operator[](
			int i);  // 602
	CUtlVectorBase<IQueuedRenderable::Element(
		int i);  // 1252
	Construct<IQueuedRenderable*, IQueuedRenderable*>(IQueuedRenderable** pMemory); // 1252
	CUtlMemory<IQueuedRenderable::Base(); // 112
	CUtlVectorBase<IQueuedRenderable::Base(); // 368
	CUtlVectorBase<IQueuedRenderable::ResetDbgInfo(); // 824
	CUtlVectorBase<IQueuedRenderable::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<IQueuedRenderable::AddToTail(
			IQueuedRenderable *& src);  // 924
} /* size: 194, variables: 2, inline expansions: 12 (232 bytes) */

// <00486F89> utils/materialsystem2utils.cpp:927
// variables: 2
// function calls: 86
void CMaterialSystem2Utils::QueueSetDefaultMaterial(CUtlStringToken viewportName, bool bForce, float flTimeToLive)
{
	CQueuedSetMaterialOrTextureRenderable* pRenderable; // 929
	ViewportLayoutList_t& infoList; // 931
	IQueuedRenderable::IQueuedRenderable(); // 32
	CBaseQueuedRenderable::CBaseQueuedRenderable(
				float64 flTimeToLive);  // 157
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
	CRenderAttributes::CRenderAttributes(); // 157
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 157
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 161
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 161
	CQueuedSetMaterialOrTextureRenderable::CQueuedSetMaterialOrTextureRenderable(
						float64 flTimeToLive);  // 929
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 930
	CQueuedSetMaterialOrTextureRenderable::Init(
		const IMaterialMode* pMode,
		const CRenderAttributes* pAttributes,
		HRenderTexture hTexture,
		bool bForce);  // 930
	CUtlMemory<IQueuedRenderable::NumAllocated(); // 1247
	CUtlMemory<IQueuedRenderable::operator[](
			int i);  // 602
	CUtlVectorBase<IQueuedRenderable::Element(
		int i);  // 1252
	Construct<IQueuedRenderable*, IQueuedRenderable*>(IQueuedRenderable** pMemory); // 1252
	CUtlMemory<IQueuedRenderable::Base(); // 112
	CUtlVectorBase<IQueuedRenderable::Base(); // 368
	CUtlVectorBase<IQueuedRenderable::ResetDbgInfo(); // 824
	CUtlVectorBase<IQueuedRenderable::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<IQueuedRenderable::AddToTail(
			IQueuedRenderable *& src);  // 932
} /* size: 602, variables: 2, inline expansions: 86 (2015 bytes) */

// <00485DC8> utils/materialsystem2utils.cpp:935
// variables: 2
// function calls: 87
void CMaterialSystem2Utils::QueueSetTexturedMaterial(CUtlStringToken viewportName, HRenderTexture hTexture, bool bForce, float flTimeToLive)
{
	CQueuedSetMaterialOrTextureRenderable* pRenderable; // 937
	ViewportLayoutList_t& infoList; // 939
	IQueuedRenderable::IQueuedRenderable(); // 32
	CBaseQueuedRenderable::CBaseQueuedRenderable(
				float64 flTimeToLive);  // 157
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
	CRenderAttributes::CRenderAttributes(); // 157
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 157
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 161
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 161
	CQueuedSetMaterialOrTextureRenderable::CQueuedSetMaterialOrTextureRenderable(
						float64 flTimeToLive);  // 937
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 174
	CQueuedSetMaterialOrTextureRenderable::Init(
		const IMaterialMode* pMode,
		const CRenderAttributes* pAttributes,
		HRenderTexture hTexture,
		bool bForce);  // 938
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 938
	CUtlMemory<IQueuedRenderable::NumAllocated(); // 1247
	CUtlMemory<IQueuedRenderable::operator[](
			int i);  // 602
	CUtlVectorBase<IQueuedRenderable::Element(
		int i);  // 1252
	Construct<IQueuedRenderable*, IQueuedRenderable*>(IQueuedRenderable** pMemory); // 1252
	CUtlMemory<IQueuedRenderable::Base(); // 112
	CUtlVectorBase<IQueuedRenderable::Base(); // 368
	CUtlVectorBase<IQueuedRenderable::ResetDbgInfo(); // 824
	CUtlVectorBase<IQueuedRenderable::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<IQueuedRenderable::AddToTail(
			IQueuedRenderable *& src);  // 940
} /* size: 610, variables: 2, inline expansions: 87 (2003 bytes) */

// <00484B2C> utils/materialsystem2utils.cpp:943
// variables: 2
// function calls: 90
void CMaterialSystem2Utils::QueueSetMaterialMode(CUtlStringToken viewportName, const IMaterialMode* pMode, const CRenderAttributes* pAttributes, uint64 nKey, bool bForce, float flTimeToLive)
{
	CQueuedSetMaterialOrTextureRenderable* pRenderable; // 945
	ViewportLayoutList_t& infoList; // 947
	IQueuedRenderable::IQueuedRenderable(); // 32
	CBaseQueuedRenderable::CBaseQueuedRenderable(
				float64 flTimeToLive);  // 157
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
	CRenderAttributes::CRenderAttributes(); // 157
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 157
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 161
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 161
	CQueuedSetMaterialOrTextureRenderable::CQueuedSetMaterialOrTextureRenderable(
						float64 flTimeToLive);  // 945
	CaptureAttributes(const CRenderAttributes* pAttributesIn,
				CRenderAttributes* pAttributesStore,
				bool bCopy);  // 79
	CaptureAttributes(const CRenderAttributes* pAttributesIn,
				CRenderAttributes* pAttributesStore,
				bool bCopy);  // 173
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 174
	CQueuedSetMaterialOrTextureRenderable::Init(
		const IMaterialMode* pMode,
		const CRenderAttributes* pAttributes,
		HRenderTexture hTexture,
		bool bForce);  // 946
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 946
	CUtlMemory<IQueuedRenderable::NumAllocated(); // 1247
	CUtlMemory<IQueuedRenderable::operator[](
			int i);  // 602
	CUtlVectorBase<IQueuedRenderable::Element(
		int i);  // 1252
	Construct<IQueuedRenderable*, IQueuedRenderable*>(IQueuedRenderable** pMemory); // 1252
	CUtlMemory<IQueuedRenderable::Base(); // 112
	CUtlVectorBase<IQueuedRenderable::Base(); // 368
	CUtlVectorBase<IQueuedRenderable::ResetDbgInfo(); // 824
	CUtlVectorBase<IQueuedRenderable::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<IQueuedRenderable::AddToTail(
			IQueuedRenderable *& src);  // 948
} /* size: 788, variables: 2, inline expansions: 90 (2541 bytes) */

// <00484AE4> utils/materialsystem2utils.cpp:953
void AddLine(CSysMemDynamicVertexData<VertexColorUVPos_t>& lineVB, const Vector& vec0, const Vector& vec1, const VertexColor_t& clr)
{
} /* size: 0 */

// <00481EAA> utils/materialsystem2utils.cpp:970
// variables: 15
// function calls: 175
void CMaterialSystem2Utils::RenderWireframeSphere(IRenderContext* pCtx, const Vector& vCenter, float flRadius, int nTheta, int nPhi, Color c, bool bZBuffer)
{
	Vector* pVerts; // 975
	int nOutVert; // 977
	VertexColor_t color; // 994
	int nVertices; // 995
	CSysMemDynamicVertexData<VertexColorUVPos_t> lineVB; // 996
	CRenderAttributes attributes; // 1012
	{
		int nPass; // 978
		{
			int j; // 980
			{
				float u; // 982
				float v; // 983
				float theta; // 984
				float phi; // 985
				Vector::Init(
					vec_t ix,
					vec_t iy,
					vec_t iz);  // 987
			}
		}
	}
	{
		int nPass; // 997
		{
			int j; // 999
			{
				int idx; // 1001
				{
				}
				{
				}
				{
				}
				CSysMemDynamicVertexData<VertexColorUVPos_t>::AdvanceVertex(); // 861
				CSysMemDynamicVertexData<VertexColorUVPos_t>::AdvanceVertex(); // 958
				VertexColor_t::AsUint32(); // 203
				VertexColor_t::operator=(
						const VertexColor_t& src);  // 961
				CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 960
				Vector::operator=(
						const Vector& vOther);  // 960
				CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 961
				CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 962
				Vector2D::Init(
					vec_t ix,
					vec_t iy);  // 962
				{
				}
				{
				}
				{
				}
				CSysMemDynamicVertexData<VertexColorUVPos_t>::AdvanceVertex(); // 861
				CSysMemDynamicVertexData<VertexColorUVPos_t>::AdvanceVertex(); // 963
				CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 955
				Vector::operator=(
						const Vector& vOther);  // 955
				VertexColor_t::AsUint32(); // 203
				VertexColor_t::operator=(
						const VertexColor_t& src);  // 956
				CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 956
				CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 957
				Vector2D::Init(
					vec_t ix,
					vec_t iy);  // 957
				AddLine(CSysMemDynamicVertexData<VertexColorUVPos_t>& lineVB,
					const Vector& vec0,
					const Vector& vec1,
					const VertexColor_t& clr);  // 1002
				VertexColor_t::AsUint32(); // 203
				VertexColor_t::operator=(
						const VertexColor_t& src);  // 956
				CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 955
				Vector::operator=(
						const Vector& vOther);  // 955
				CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 956
				CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 957
				Vector2D::Init(
					vec_t ix,
					vec_t iy);  // 957
				{
				}
				{
				}
				{
				}
				CSysMemDynamicVertexData<VertexColorUVPos_t>::AdvanceVertex(); // 861
				CSysMemDynamicVertexData<VertexColorUVPos_t>::AdvanceVertex(); // 958
				VertexColor_t::AsUint32(); // 203
				VertexColor_t::operator=(
						const VertexColor_t& src);  // 961
				CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 960
				Vector::operator=(
						const Vector& vOther);  // 960
				CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 961
				CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 962
				Vector2D::Init(
					vec_t ix,
					vec_t iy);  // 962
				{
				}
				{
				}
				{
				}
				CSysMemDynamicVertexData<VertexColorUVPos_t>::AdvanceVertex(); // 861
				CSysMemDynamicVertexData<VertexColorUVPos_t>::AdvanceVertex(); // 963
				AddLine(CSysMemDynamicVertexData<VertexColorUVPos_t>& lineVB,
					const Vector& vec0,
					const Vector& vec1,
					const VertexColor_t& clr);  // 1003
				VertexColor_t::AsUint32(); // 203
				VertexColor_t::operator=(
						const VertexColor_t& src);  // 956
				CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 955
				Vector::operator=(
						const Vector& vOther);  // 955
				CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 956
				CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 957
				Vector2D::Init(
					vec_t ix,
					vec_t iy);  // 957
				{
				}
				{
				}
				{
				}
				CSysMemDynamicVertexData<VertexColorUVPos_t>::AdvanceVertex(); // 861
				CSysMemDynamicVertexData<VertexColorUVPos_t>::AdvanceVertex(); // 958
				VertexColor_t::AsUint32(); // 203
				VertexColor_t::operator=(
						const VertexColor_t& src);  // 961
				CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 960
				Vector::operator=(
						const Vector& vOther);  // 960
				CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 961
				CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 962
				Vector2D::Init(
					vec_t ix,
					vec_t iy);  // 962
				{
				}
				{
				}
				{
				}
				CSysMemDynamicVertexData<VertexColorUVPos_t>::AdvanceVertex(); // 861
				CSysMemDynamicVertexData<VertexColorUVPos_t>::AdvanceVertex(); // 963
				AddLine(CSysMemDynamicVertexData<VertexColorUVPos_t>& lineVB,
					const Vector& vec0,
					const Vector& vec1,
					const VertexColor_t& clr);  // 1005
				VertexColor_t::AsUint32(); // 203
				VertexColor_t::operator=(
						const VertexColor_t& src);  // 956
				CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 955
				Vector::operator=(
						const Vector& vOther);  // 955
				CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 956
				CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 957
				Vector2D::Init(
					vec_t ix,
					vec_t iy);  // 957
				{
				}
				{
				}
				{
				}
				CSysMemDynamicVertexData<VertexColorUVPos_t>::AdvanceVertex(); // 861
				CSysMemDynamicVertexData<VertexColorUVPos_t>::AdvanceVertex(); // 958
				VertexColor_t::AsUint32(); // 203
				VertexColor_t::operator=(
						const VertexColor_t& src);  // 961
				CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 960
				Vector::operator=(
						const Vector& vOther);  // 960
				CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 961
				CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 962
				Vector2D::Init(
					vec_t ix,
					vec_t iy);  // 962
				{
				}
				{
				}
				{
				}
				CSysMemDynamicVertexData<VertexColorUVPos_t>::AdvanceVertex(); // 861
				CSysMemDynamicVertexData<VertexColorUVPos_t>::AdvanceVertex(); // 963
				AddLine(CSysMemDynamicVertexData<VertexColorUVPos_t>& lineVB,
					const Vector& vec0,
					const Vector& vec1,
					const VertexColor_t& clr);  // 1006
			}
		}
	}
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 994
	CDynamicVertexData<VertexColorUVPos_t>::Lock(
		int nVertexCount);  // 680
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 180
	CVertexDataBase<VertexColorUVPos_t>::ClearVertexFields(); // 171
	Vector::Vector(); // 103
	VertexPos_t::VertexPos_t(); // 257
	Vector2D::Vector2D(); // 257
	VertexUVPos_t::VertexUVPos_t(); // 372
	VertexColor_t::VertexColor_t(); // 372
	VertexColorUVPos_t::VertexColorUVPos_t(); // 165
	CVertexDataBase<VertexColorUVPos_t>::CVertexDataBase(); // 673
	CDynamicVertexData<VertexColorUVPos_t>::CDynamicVertexData(
				IRenderContext* pRenderContext,
				int nVertexCount,
				const char* pDebugName,
				const char* pBudgetGroup);  // 814
	CSysMemDynamicVertexData<VertexColorUVPos_t>::SetCurrentVertex(); // 816
	CSysMemDynamicVertexData<VertexColorUVPos_t>::CSysMemDynamicVertexData(
				IRenderContext* pRenderContext,
				int nVertexCount,
				const char* pDebugName,
				const char* pBudgetGroup);  // 996
	CDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 760
	CDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 840
	CSysMemDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 851
	CDynamicVertexData<VertexColorUVPos_t>::Bind(
		int nSlot,
		int nOffset,
		int nStride);  // 846
	CSysMemDynamicVertexData<VertexColorUVPos_t>::Bind(
		int nSlot,
		int nOffset,
		int nStride);  // 852
	CSysMemDynamicVertexData<VertexColorUVPos_t>::UnlockAndBind(
			int nSlot,
			int nOffset,
			int nStride);  // 1009
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
	CRenderAttributes::CRenderAttributes(); // 1012
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		IntVector4D nValue);  // 515
	CRenderAttributes::SetComboValue(
			CUtlStringToken nTokenID,
			uint8 nValue);  // 1013
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator const ResourceHandleInfo_t<InfoForResourceTypeIMaterial2>::RuntimeClass_t*(); // 1015
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 693
	IRenderContext::ResetMaterialStateHint(); // 1020
	CDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 710
	{
	}
	{
	}
	CVertexDataBase<VertexColorUVPos_t>::~CVertexDataBase(); // 194
	CVertexDataBase<VertexColorUVPos_t>::~CVertexDataBase(); // 711
	CDynamicVertexData<VertexColorUVPos_t>::~CDynamicVertexData(); // 808
	CSysMemDynamicVertexData<VertexColorUVPos_t>::~CSysMemDynamicVertexData(); // 1021
} /* size: 0, variables: 6, inline expansions: 98 (3294 bytes) */

// <00480876> utils/materialsystem2utils.cpp:1027
// variables: 20
// function calls: 75
void CMaterialSystem2Utils::RenderSphereInternal(IRenderContext* pCtx, const Vector& vCenter, float flRadius, int nTheta, int nPhi, Color c, const IMaterial2* pMaterial, const CRenderAttributes* pAttributes, bool bInsideOut)
{
	int nVerts; // 1036
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t> triVB; // 1037
	float flOONPhi; // 1039
	float flOONTheta; // 1040
	int nIndices; // 1077
	CDynamicIndexData<short unsigned int> ib; // 1078
	VertexColor_t color; // 1080
	int idx; // 1081
	{
		int i; // 1044
		{
			int j; // 1046
			{
				float u; // 1048
				float v; // 1049
				float theta; // 1050
				float phi; // 1051
				Vector vecPos; // 1053
				Vector vecNormal; // 1058
				Vector4D vecTangent; // 1061
				{
				}
				{
				}
				{
				}
				CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 861
				CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 1071
				Vector::Vector(); // 1053
				Vector4D::Vector4D(
					vec_t X,
					vec_t Y,
					vec_t Z,
					vec_t W);  // 1061
				Vector::operator+=(
						const Vector& v);  // 1063
				CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1065
				Vector::operator=(
						const Vector& vOther);  // 111
				VertexPos_t::Position(
					const Vector& vecPos);  // 1065
				VertexUVPos_t::SetUV0(
					float flU,
					float flV);  // 1066
				CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1066
				CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1067
				Color::r(); // 106
				Color::g(); // 107
				Color::b(); // 108
				Color::a(); // 109
				VertexColor_t::VertexColor_t(
						const Color& src);  // 1067
				VertexColor_t::operator=(
						const VertexColor_t& src);  // 378
				VertexColorUVPos_t::Color(
					const VertexColor_t& vertexColor);  // 1067
				CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1068
				Vector::operator=(
						const Vector& vOther);  // 579
				VertexUVPosColorNormalAndTangent_t::Normal(
					const Vector& vecNormal);  // 1068
				CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1069
				Vector4D::operator=(
						const Vector4D& vOther);  // 610
				VertexUVPosColorNormalAndTangent_t::TangentBasis(
						const Vector4D& val);  // 1069
			}
		}
	}
	{
		int i; // 1084
		{
			int j; // 1088
			{
			}
			CIndexDataBase<short unsigned int>::Index(
				short unsigned int nIndex);  // 1092
			{
			}
			CIndexDataBase<short unsigned int>::Index(
				short unsigned int nIndex);  // 1093
		}
		{
			int j; // 1098
			{
			}
			CIndexDataBase<short unsigned int>::Index(
				short unsigned int nIndex);  // 1102
			{
			}
			CIndexDataBase<short unsigned int>::Index(
				short unsigned int nIndex);  // 1103
		}
		{
		}
		CIndexDataBase<short unsigned int>::Index(
			short unsigned int nIndex);  // 1110
		{
		}
		CIndexDataBase<short unsigned int>::Index(
			short unsigned int nIndex);  // 1111
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 180
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::ClearVertexFields(); // 171
	Vector::Vector(); // 103
	VertexPos_t::VertexPos_t(); // 257
	Vector2D::Vector2D(); // 257
	VertexUVPos_t::VertexUVPos_t(); // 372
	VertexColor_t::VertexColor_t(); // 372
	VertexColorUVPos_t::VertexColorUVPos_t(); // 572
	Vector::Vector(); // 572
	Vector4D::Vector4D(); // 572
	VertexUVPosColorNormalAndTangent_t::VertexUVPosColorNormalAndTangent_t(); // 165
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::CVertexDataBase(); // 673
	CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::Lock(
		int nVertexCount);  // 680
	CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::CDynamicVertexData(
				IRenderContext* pRenderContext,
				int nVertexCount,
				const char* pDebugName,
				const char* pBudgetGroup);  // 814
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::SetCurrentVertex(); // 816
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::CSysMemDynamicVertexData(
				IRenderContext* pRenderContext,
				int nVertexCount,
				const char* pDebugName,
				const char* pBudgetGroup);  // 1037
	CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::Unlock(); // 760
	CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::Unlock(); // 840
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::Unlock(); // 851
	CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::Bind(
		int nSlot,
		int nOffset,
		int nStride);  // 846
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::Bind(
		int nSlot,
		int nOffset,
		int nStride);  // 852
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::UnlockAndBind(
			int nSlot,
			int nOffset,
			int nStride);  // 1074
	CDynamicIndexData<short unsigned int>::Lock(
		int nIndexCount);  // 580
	CIndexDataBase<short unsigned int>::ClearIndexFields(); // 89
	CIndexDataBase<short unsigned int>::CIndexDataBase(); // 573
	CDynamicIndexData<short unsigned int>::CDynamicIndexData(
				IRenderContext* pRenderContext,
				int nIndexCount,
				const char* pDebugName,
				const char* pBudgetGroup);  // 1078
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 1080
	{
	}
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 194
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 711
	CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::Unlock(); // 760
	CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::Unlock(); // 710
	CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::~CDynamicVertexData(); // 808
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::~CSysMemDynamicVertexData(); // 1126
	CDynamicIndexData<short unsigned int>::Unlock(); // 658
	CDynamicIndexData<short unsigned int>::Unlock(); // 540
	CDynamicIndexData<short unsigned int>::Bind(
		int nOffset);  // 541
	CDynamicIndexData<short unsigned int>::UnlockAndBind(
			int nBindOffset);  // 1116
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 693
	IRenderContext::ResetMaterialStateHint(); // 1125
	CDynamicIndexData<short unsigned int>::Unlock(); // 607
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 608
	CDynamicIndexData<short unsigned int>::~CDynamicIndexData(); // 1126
} /* size: 0, variables: 8, inline expansions: 45 (2353 bytes) */

// <00480745> utils/materialsystem2utils.cpp:1130
void CMaterialSystem2Utils::RenderSphere(IRenderContext* pCtx, const Vector& vCenter, float flRadius, int nTheta, int nPhi, Color c, const IMaterial2* pMaterial, const CRenderAttributes* pAttributes, bool bInsideOut)
{
} /* size: 21 */

// <0047F859> utils/materialsystem2utils.cpp:1137
// variables: 3
// function calls: 71
void CMaterialSystem2Utils::RenderSphere(IRenderContext* pCtx, const Vector& vCenter, float flRadius, int nTheta, int nPhi, Color c, bool bZBuffer, bool bInsideOut)
{
	Color cActual; // 1139
	const IMaterial2* pMaterial; // 1140
	CRenderAttributes attributes; // 1141
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator const ResourceHandleInfo_t<InfoForResourceTypeIMaterial2>::RuntimeClass_t*(); // 1140
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 1139
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
	CRenderAttributes::CRenderAttributes(); // 1141
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		IntVector4D nValue);  // 515
	CRenderAttributes::SetComboValue(
			CUtlStringToken nTokenID,
			uint8 nValue);  // 1142
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 1142
} /* size: 599, variables: 3, inline expansions: 71 (1445 bytes) */

// <0047F4C4> utils/materialsystem2utils.cpp:1170
// variables: 3
// function calls: 10
void GenerateBoxVertices(const Vector& vOrigin, const QAngle& angles, const Vector& vMins, const Vector& vMaxs, Vector* pVerts)
{
	matrix3x4_t fRotateMatrix; // 1173
	Vector vecPos; // 1176
	{
		int i; // 1177
		Vector::operator[](
				int i);  // 1179
		Vector::operator[](
				int i);  // 1180
		Vector::operator[](
				int i);  // 1181
		VectorRotate(const Vector& in1,
				const matrix3x4_t& in2,
				Vector& out);  // 1183
		Vector::operator+=(
				const Vector& v);  // 1184
		Vector::operator[](
				int i);  // 1179
		Vector::operator[](
				int i);  // 1180
		Vector::operator[](
				int i);  // 1181
	}
	matrix3x4_t::matrix3x4_t(); // 1173
	Vector::Vector(); // 1176
} /* size: 331, variables: 2, inline expansions: 2 (0 bytes) */

// <0047D91D> utils/materialsystem2utils.cpp:1191
// variables: 7
// function calls: 120
void CMaterialSystem2Utils::RenderWireframeBox(IRenderContext* pCtx, const Vector& vOrigin, const QAngle& angles, const Vector& vMins, const Vector& vMaxs, Color c, bool bZBuffer)
{
	Vector p; // 1193
	int nVerts; // 1196
	CSysMemDynamicVertexData<VertexColorUVPos_t> vb; // 1197
	CRenderAttributes attributes; // 1213
	{
		int i; // 1200
		{
			int* pFaceIndex; // 1202
			{
				int j; // 1204
				Color::r(); // 106
				Color::g(); // 107
				Color::b(); // 108
				Color::a(); // 109
				VertexColor_t::VertexColor_t(
						const Color& src);  // 1206
				CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 955
				Vector::operator=(
						const Vector& vOther);  // 955
				CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 956
				VertexColor_t::operator=(
						const VertexColor_t& src);  // 956
				CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 957
				Vector2D::Init(
					vec_t ix,
					vec_t iy);  // 957
				{
				}
				{
				}
				{
				}
				CSysMemDynamicVertexData<VertexColorUVPos_t>::AdvanceVertex(); // 861
				CSysMemDynamicVertexData<VertexColorUVPos_t>::AdvanceVertex(); // 958
				VertexColor_t::AsUint32(); // 203
				VertexColor_t::operator=(
						const VertexColor_t& src);  // 961
				CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 960
				Vector::operator=(
						const Vector& vOther);  // 960
				CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 961
				CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 962
				Vector2D::Init(
					vec_t ix,
					vec_t iy);  // 962
				{
				}
				{
				}
				{
				}
				CSysMemDynamicVertexData<VertexColorUVPos_t>::AdvanceVertex(); // 861
				CSysMemDynamicVertexData<VertexColorUVPos_t>::AdvanceVertex(); // 963
				AddLine(CSysMemDynamicVertexData<VertexColorUVPos_t>& lineVB,
					const Vector& vec0,
					const Vector& vec1,
					const VertexColor_t& clr);  // 1206
			}
		}
	}
	Vector::Vector(); // 103
	VertexPos_t::VertexPos_t(); // 257
	Vector2D::Vector2D(); // 257
	VertexUVPos_t::VertexUVPos_t(); // 372
	VertexColor_t::VertexColor_t(); // 372
	VertexColorUVPos_t::VertexColorUVPos_t(); // 165
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 180
	CVertexDataBase<VertexColorUVPos_t>::ClearVertexFields(); // 171
	CVertexDataBase<VertexColorUVPos_t>::CVertexDataBase(); // 673
	CDynamicVertexData<VertexColorUVPos_t>::Lock(
		int nVertexCount);  // 680
	CDynamicVertexData<VertexColorUVPos_t>::CDynamicVertexData(
				IRenderContext* pRenderContext,
				int nVertexCount,
				const char* pDebugName,
				const char* pBudgetGroup);  // 814
	CSysMemDynamicVertexData<VertexColorUVPos_t>::SetCurrentVertex(); // 816
	CSysMemDynamicVertexData<VertexColorUVPos_t>::CSysMemDynamicVertexData(
				IRenderContext* pRenderContext,
				int nVertexCount,
				const char* pDebugName,
				const char* pBudgetGroup);  // 1197
	CDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 760
	CDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 840
	CSysMemDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 851
	CDynamicVertexData<VertexColorUVPos_t>::Bind(
		int nSlot,
		int nOffset,
		int nStride);  // 846
	CSysMemDynamicVertexData<VertexColorUVPos_t>::Bind(
		int nSlot,
		int nOffset,
		int nStride);  // 852
	CSysMemDynamicVertexData<VertexColorUVPos_t>::UnlockAndBind(
			int nSlot,
			int nOffset,
			int nStride);  // 1210
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
	CRenderAttributes::CRenderAttributes(); // 1213
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		IntVector4D nValue);  // 515
	CRenderAttributes::SetComboValue(
			CUtlStringToken nTokenID,
			uint8 nValue);  // 1214
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator const ResourceHandleInfo_t<InfoForResourceTypeIMaterial2>::RuntimeClass_t*(); // 1216
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 693
	IRenderContext::ResetMaterialStateHint(); // 1221
	CDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 710
	{
	}
	{
	}
	CVertexDataBase<VertexColorUVPos_t>::~CVertexDataBase(); // 194
	CVertexDataBase<VertexColorUVPos_t>::~CVertexDataBase(); // 711
	CDynamicVertexData<VertexColorUVPos_t>::~CDynamicVertexData(); // 808
	CSysMemDynamicVertexData<VertexColorUVPos_t>::~CSysMemDynamicVertexData(); // 1222
} /* size: 0, variables: 4, inline expansions: 97 (3218 bytes) */

// <0047D345> utils/materialsystem2utils.cpp:1227
// variables: 3
// function calls: 21
void AddAxes(CSysMemDynamicVertexData<VertexColorUVPos_t>& vb, const Vector& origin, Vector* pts, int idx, Color c)
{
	Vector start; // 1229
	Vector temp; // 1229
	int endidx; // 1231
	Vector::Vector(); // 1229
	Vector::Vector(); // 1229
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1230
	Color::r(); // 106
	Color::g(); // 107
	Color::b(); // 108
	Color::a(); // 109
	VertexColor_t::VertexColor_t(
			const Color& src);  // 1233
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1232
	Color::r(); // 106
	Color::g(); // 107
	Color::b(); // 108
	Color::a(); // 109
	VertexColor_t::VertexColor_t(
			const Color& src);  // 1237
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1236
	Color::r(); // 106
	Color::g(); // 107
	Color::b(); // 108
	Color::a(); // 109
	VertexColor_t::VertexColor_t(
			const Color& src);  // 1241
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1240
} /* size: 371, variables: 3, inline expansions: 21 (147 bytes) */

// <0047CBE3> utils/materialsystem2utils.cpp:1244
// variables: 2
// function calls: 27
void AddExtrusionFace(CSysMemDynamicVertexData<VertexColorUVPos_t>& vb, const Vector& start, const Vector& end, Vector* pts, int idx1, int idx2, Color c)
{
	Vector temp; // 1247
	Vector temp2; // 1247
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1248
	Vector::Vector(); // 1247
	Vector::Vector(); // 1247
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1249
	Color::r(); // 106
	Color::g(); // 107
	Color::b(); // 108
	Color::a(); // 109
	VertexColor_t::VertexColor_t(
			const Color& src);  // 1250
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1252
	Color::r(); // 106
	Color::g(); // 107
	Color::b(); // 108
	Color::a(); // 109
	VertexColor_t::VertexColor_t(
			const Color& src);  // 1253
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1255
	Color::r(); // 106
	Color::g(); // 107
	Color::b(); // 108
	Color::a(); // 109
	VertexColor_t::VertexColor_t(
			const Color& src);  // 1256
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1258
	Color::r(); // 106
	Color::g(); // 107
	Color::b(); // 108
	Color::a(); // 109
	VertexColor_t::VertexColor_t(
			const Color& src);  // 1259
} /* size: 379, variables: 2, inline expansions: 27 (192 bytes) */

// <0047B135> utils/materialsystem2utils.cpp:1265
// variables: 18
// function calls: 112
void CMaterialSystem2Utils::RenderWireframeSweptBox(IRenderContext* pCtx, const Vector& vStart, const Vector& vEnd, const QAngle& angles, const Vector& vMins, const Vector& vMaxs, Color c, bool bZBuffer)
{
	Color cActual; // 1267
	matrix3x4_t fRotateMatrix; // 1270
	Vector vDelta; // 1273
	Vector temp; // 1277
	Vector pts; // 1278
	float dot; // 1279
	int minidx; // 1280
	int maxidx; // 1299
	int nVerts; // 1301
	CSysMemDynamicVertexData<VertexColorUVPos_t> vb; // 1302
	CRenderAttributes attributes; // 1326
	{
		int i; // 1281
		Vector::operator[](
				int i);  // 1283
		Vector::operator[](
				int i);  // 1284
		Vector::operator[](
				int i);  // 1285
		VectorRotate(const Vector& in1,
				const matrix3x4_t& in2,
				Vector& out);  // 1288
		DotProduct(const Vector& a,
				const Vector& b);  // 1291
		Vector::operator[](
				int i);  // 1283
		Vector::operator[](
				int i);  // 1284
		Vector::operator[](
				int i);  // 1285
	}
	{
		int j; // 1309
		{
			int dirflag1; // 1311
			int dirflag2; // 1312
			int idx1; // 1314
			int idx2; // 1314
			int idx3; // 1314
		}
	}
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 1267
	matrix3x4_t::matrix3x4_t(); // 1270
	Vector::Vector(); // 1273
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1274
	Vector::Vector(); // 1277
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 180
	CVertexDataBase<VertexColorUVPos_t>::ClearVertexFields(); // 171
	Vector::Vector(); // 103
	VertexPos_t::VertexPos_t(); // 257
	Vector2D::Vector2D(); // 257
	VertexUVPos_t::VertexUVPos_t(); // 372
	VertexColor_t::VertexColor_t(); // 372
	VertexColorUVPos_t::VertexColorUVPos_t(); // 165
	CVertexDataBase<VertexColorUVPos_t>::CVertexDataBase(); // 673
	CDynamicVertexData<VertexColorUVPos_t>::Lock(
		int nVertexCount);  // 680
	CDynamicVertexData<VertexColorUVPos_t>::CDynamicVertexData(
				IRenderContext* pRenderContext,
				int nVertexCount,
				const char* pDebugName,
				const char* pBudgetGroup);  // 814
	CSysMemDynamicVertexData<VertexColorUVPos_t>::SetCurrentVertex(); // 816
	CSysMemDynamicVertexData<VertexColorUVPos_t>::CSysMemDynamicVertexData(
				IRenderContext* pRenderContext,
				int nVertexCount,
				const char* pDebugName,
				const char* pBudgetGroup);  // 1302
	CDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 760
	CDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 840
	CSysMemDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 851
	CDynamicVertexData<VertexColorUVPos_t>::Bind(
		int nSlot,
		int nOffset,
		int nStride);  // 846
	CSysMemDynamicVertexData<VertexColorUVPos_t>::Bind(
		int nSlot,
		int nOffset,
		int nStride);  // 852
	CSysMemDynamicVertexData<VertexColorUVPos_t>::UnlockAndBind(
			int nSlot,
			int nOffset,
			int nStride);  // 1323
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
	CRenderAttributes::CRenderAttributes(); // 1326
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		IntVector4D nValue);  // 515
	CRenderAttributes::SetComboValue(
			CUtlStringToken nTokenID,
			uint8 nValue);  // 1327
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator const ResourceHandleInfo_t<InfoForResourceTypeIMaterial2>::RuntimeClass_t*(); // 1329
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 693
	IRenderContext::ResetMaterialStateHint(); // 1334
	CDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 760
	CDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 710
	{
	}
	{
	}
	CVertexDataBase<VertexColorUVPos_t>::~CVertexDataBase(); // 194
	CVertexDataBase<VertexColorUVPos_t>::~CVertexDataBase(); // 711
	CDynamicVertexData<VertexColorUVPos_t>::~CDynamicVertexData(); // 808
	CSysMemDynamicVertexData<VertexColorUVPos_t>::~CSysMemDynamicVertexData(); // 1335
} /* size: 0, variables: 11, inline expansions: 104 (3713 bytes) */

// <00479850> utils/materialsystem2utils.cpp:1340
// variables: 10
// function calls: 99
void CMaterialSystem2Utils::RenderBoxInternal(IRenderContext* pCtx, const Vector& vOrigin, const QAngle& angles, const Vector& vMins, const Vector& vMaxs, Color c, const IMaterial2* pMaterial, const CRenderAttributes* pAttributes, bool bInsideOut)
{
	Vector p; // 1342
	int nVerts; // 1346
	CDynamicVertexData<VertexUVPosColorNormalAndTangent_t> triVB; // 1348
	Vector vecNormal; // 1350
	{
		int i; // 1351
		{
			int* ppFaceIndices; // 1356
			{
				int j; // 1357
				{
					int i0; // 1359
					int i1; // 1360
					int i2; // 1361
					{
					}
					Vector::operator=(
							const Vector& vOther);  // 572
					Vector::operator=(
							const Vector& vOther);  // 103
					VertexPos_t::operator=(
							const VertexPos_t  &);  // 257
					Vector2D::operator=(
							const Vector2D& vOther);  // 257
					VertexUVPos_t::operator=(
							const VertexUVPos_t  &);  // 372
					VertexColor_t::operator=(
							const VertexColor_t& src);  // 372
					VertexColorUVPos_t::operator=(
							const VertexColorUVPos_t  &);  // 572
					Vector4D::operator=(
							const Vector4D& vOther);  // 572
					VertexUVPosColorNormalAndTangent_t::operator=(
							const VertexUVPosColorNormalAndTangent_t  &);  // 355
					{
					}
					CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 270
					CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 1367
					Vector::operator=(
							const Vector& vOther);  // 111
					VertexPos_t::Position(
						const Vector& vecPos);  // 1363
					Vector::operator=(
							const Vector& vOther);  // 579
					VertexUVPosColorNormalAndTangent_t::Normal(
						const Vector& vecNormal);  // 1366
					VertexColor_t::operator=(
							const VertexColor_t& src);  // 378
					VertexColorUVPos_t::Color(
						const VertexColor_t& vertexColor);  // 1365
					VertexUVPos_t::SetUV0(
						float flU,
						float flV);  // 1364
					Color::r(); // 106
					Color::g(); // 107
					Color::b(); // 108
					Color::a(); // 109
					VertexColor_t::VertexColor_t(
							const Color& src);  // 1365
					Vector::operator=(
							const Vector& vOther);  // 111
					VertexPos_t::Position(
						const Vector& vecPos);  // 1369
					VertexUVPos_t::SetUV0(
						float flU,
						float flV);  // 1370
					{
					}
					Vector::operator=(
							const Vector& vOther);  // 103
					VertexPos_t::operator=(
							const VertexPos_t  &);  // 257
					Vector2D::operator=(
							const Vector2D& vOther);  // 257
					VertexUVPos_t::operator=(
							const VertexUVPos_t  &);  // 372
					VertexColor_t::operator=(
							const VertexColor_t& src);  // 372
					VertexColorUVPos_t::operator=(
							const VertexColorUVPos_t  &);  // 572
					Vector::operator=(
							const Vector& vOther);  // 572
					Vector4D::operator=(
							const Vector4D& vOther);  // 572
					VertexUVPosColorNormalAndTangent_t::operator=(
							const VertexUVPosColorNormalAndTangent_t  &);  // 355
					{
					}
					CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 270
					CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 1373
					Color::r(); // 106
					Color::g(); // 107
					Color::b(); // 108
					Color::a(); // 109
					VertexColor_t::VertexColor_t(
							const Color& src);  // 1371
					VertexColor_t::operator=(
							const VertexColor_t& src);  // 378
					VertexColorUVPos_t::Color(
						const VertexColor_t& vertexColor);  // 1371
					Vector::operator=(
							const Vector& vOther);  // 579
					VertexUVPosColorNormalAndTangent_t::Normal(
						const Vector& vecNormal);  // 1372
					Vector::operator=(
							const Vector& vOther);  // 111
					VertexPos_t::Position(
						const Vector& vecPos);  // 1375
					VertexUVPos_t::SetUV0(
						float flU,
						float flV);  // 1376
					{
					}
					Vector::operator=(
							const Vector& vOther);  // 572
					Vector::operator=(
							const Vector& vOther);  // 103
					VertexPos_t::operator=(
							const VertexPos_t  &);  // 257
					Vector2D::operator=(
							const Vector2D& vOther);  // 257
					VertexUVPos_t::operator=(
							const VertexUVPos_t  &);  // 372
					VertexColor_t::operator=(
							const VertexColor_t& src);  // 372
					VertexColorUVPos_t::operator=(
							const VertexColorUVPos_t  &);  // 572
					Vector4D::operator=(
							const Vector4D& vOther);  // 572
					VertexUVPosColorNormalAndTangent_t::operator=(
							const VertexUVPosColorNormalAndTangent_t  &);  // 355
					{
					}
					CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 270
					CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 1379
					Color::r(); // 106
					Color::g(); // 107
					Color::b(); // 108
					Color::a(); // 109
					VertexColor_t::VertexColor_t(
							const Color& src);  // 1377
					VertexColor_t::operator=(
							const VertexColor_t& src);  // 378
					VertexColorUVPos_t::Color(
						const VertexColor_t& vertexColor);  // 1377
					Vector::operator=(
							const Vector& vOther);  // 579
					VertexUVPosColorNormalAndTangent_t::Normal(
						const Vector& vecNormal);  // 1378
				}
			}
			Vector::Init(
				vec_t ix,
				vec_t iy,
				vec_t iz);  // 1353
			Vector::operator[](
					int i);  // 1354
		}
	}
	Vector::Vector(); // 103
	VertexPos_t::VertexPos_t(); // 257
	Vector2D::Vector2D(); // 257
	VertexUVPos_t::VertexUVPos_t(); // 372
	VertexColor_t::VertexColor_t(); // 372
	VertexColorUVPos_t::VertexColorUVPos_t(); // 572
	Vector::Vector(); // 572
	Vector4D::Vector4D(); // 572
	VertexUVPosColorNormalAndTangent_t::VertexUVPosColorNormalAndTangent_t(); // 165
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 180
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::ClearVertexFields(); // 171
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::CVertexDataBase(); // 673
	CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::Lock(
		int nVertexCount);  // 680
	CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::CDynamicVertexData(
				IRenderContext* pRenderContext,
				int nVertexCount,
				const char* pDebugName,
				const char* pBudgetGroup);  // 1348
	Vector::Vector(); // 1350
	CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::Unlock(); // 760
	CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::Unlock(); // 639
	CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::Bind(
		int nSlot,
		int nOffset,
		int nStride);  // 640
	CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::UnlockAndBind(
			int nSlot,
			int nOffset,
			int nStride);  // 1383
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 693
	IRenderContext::ResetMaterialStateHint(); // 1391
	{
	}
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 194
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 711
	CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::Unlock(); // 710
	CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::~CDynamicVertexData(); // 1392
} /* size: 0, variables: 4, inline expansions: 28 (1057 bytes) */

// <00479725> utils/materialsystem2utils.cpp:1397
void CMaterialSystem2Utils::RenderBox(IRenderContext* pCtx, const Vector& vOrigin, const QAngle& angles, const Vector& vMins, const Vector& vMaxs, Color c, const IMaterial2* pMaterial, const CRenderAttributes* pAttributes, bool bInsideOut)
{
} /* size: 21 */

// <00478844> utils/materialsystem2utils.cpp:1405
// variables: 3
// function calls: 71
void CMaterialSystem2Utils::RenderBox(IRenderContext* pCtx, const Vector& vOrigin, const QAngle& angles, const Vector& vMins, const Vector& vMaxs, Color c, bool bZBuffer, bool bInsideOut)
{
	Color cActual; // 1407
	const IMaterial2* pMaterial; // 1408
	CRenderAttributes attributes; // 1409
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator const ResourceHandleInfo_t<InfoForResourceTypeIMaterial2>::RuntimeClass_t*(); // 1408
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 1407
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
	CRenderAttributes::CRenderAttributes(); // 1409
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		IntVector4D nValue);  // 515
	CRenderAttributes::SetComboValue(
			CUtlStringToken nTokenID,
			uint8 nValue);  // 1410
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 1410
} /* size: 592, variables: 3, inline expansions: 71 (1465 bytes) */

// <00477126> utils/materialsystem2utils.cpp:1417
// variables: 3
// function calls: 104
void CMaterialSystem2Utils::RenderAxes(IRenderContext* pCtx, const Vector& vOrigin, float flScale, bool bZBuffer)
{
	int nVerts; // 1419
	CSysMemDynamicVertexData<VertexColorUVPos_t> lineVB; // 1420
	CRenderAttributes attributes; // 1429
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 180
	CVertexDataBase<VertexColorUVPos_t>::ClearVertexFields(); // 171
	Vector::Vector(); // 103
	VertexPos_t::VertexPos_t(); // 257
	Vector2D::Vector2D(); // 257
	VertexUVPos_t::VertexUVPos_t(); // 372
	VertexColor_t::VertexColor_t(); // 372
	VertexColorUVPos_t::VertexColorUVPos_t(); // 165
	CVertexDataBase<VertexColorUVPos_t>::CVertexDataBase(); // 673
	CDynamicVertexData<VertexColorUVPos_t>::Lock(
		int nVertexCount);  // 680
	CDynamicVertexData<VertexColorUVPos_t>::CDynamicVertexData(
				IRenderContext* pRenderContext,
				int nVertexCount,
				const char* pDebugName,
				const char* pBudgetGroup);  // 814
	CSysMemDynamicVertexData<VertexColorUVPos_t>::SetCurrentVertex(); // 816
	CSysMemDynamicVertexData<VertexColorUVPos_t>::CSysMemDynamicVertexData(
				IRenderContext* pRenderContext,
				int nVertexCount,
				const char* pDebugName,
				const char* pBudgetGroup);  // 1420
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 1422
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1422
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 1423
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1423
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 1424
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1424
	CDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 760
	CDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 840
	CSysMemDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 851
	CDynamicVertexData<VertexColorUVPos_t>::Bind(
		int nSlot,
		int nOffset,
		int nStride);  // 846
	CSysMemDynamicVertexData<VertexColorUVPos_t>::Bind(
		int nSlot,
		int nOffset,
		int nStride);  // 852
	CSysMemDynamicVertexData<VertexColorUVPos_t>::UnlockAndBind(
			int nSlot,
			int nOffset,
			int nStride);  // 1426
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
	CRenderAttributes::CRenderAttributes(); // 1429
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		IntVector4D nValue);  // 515
	CRenderAttributes::SetComboValue(
			CUtlStringToken nTokenID,
			uint8 nValue);  // 1430
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator const ResourceHandleInfo_t<InfoForResourceTypeIMaterial2>::RuntimeClass_t*(); // 1432
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 693
	IRenderContext::ResetMaterialStateHint(); // 1437
	CDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 760
	CDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 710
	{
	}
	{
	}
	CVertexDataBase<VertexColorUVPos_t>::~CVertexDataBase(); // 194
	CVertexDataBase<VertexColorUVPos_t>::~CVertexDataBase(); // 711
	CDynamicVertexData<VertexColorUVPos_t>::~CDynamicVertexData(); // 808
	CSysMemDynamicVertexData<VertexColorUVPos_t>::~CSysMemDynamicVertexData(); // 1438
} /* size: 0, variables: 3, inline expansions: 104 (3634 bytes) */

// <004757A4> utils/materialsystem2utils.cpp:1443
// variables: 8
// function calls: 113
void CMaterialSystem2Utils::RenderAxes(IRenderContext* pCtx, const matrix3x4_t& transform, float flScale, bool bZBuffer)
{
	Vector xAxis; // 1445
	Vector yAxis; // 1446
	Vector zAxis; // 1447
	Vector vOrigin; // 1448
	Vector temp; // 1449
	int nVerts; // 1451
	CSysMemDynamicVertexData<VertexColorUVPos_t> lineVB; // 1452
	CRenderAttributes attributes; // 1466
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 180
	CVertexDataBase<VertexColorUVPos_t>::ClearVertexFields(); // 171
	Vector::Vector(); // 103
	VertexPos_t::VertexPos_t(); // 257
	Vector2D::Vector2D(); // 257
	VertexUVPos_t::VertexUVPos_t(); // 372
	VertexColor_t::VertexColor_t(); // 372
	VertexColorUVPos_t::VertexColorUVPos_t(); // 165
	CVertexDataBase<VertexColorUVPos_t>::CVertexDataBase(); // 673
	CDynamicVertexData<VertexColorUVPos_t>::Lock(
		int nVertexCount);  // 680
	CDynamicVertexData<VertexColorUVPos_t>::CDynamicVertexData(
				IRenderContext* pRenderContext,
				int nVertexCount,
				const char* pDebugName,
				const char* pBudgetGroup);  // 814
	CSysMemDynamicVertexData<VertexColorUVPos_t>::SetCurrentVertex(); // 816
	CSysMemDynamicVertexData<VertexColorUVPos_t>::CSysMemDynamicVertexData(
				IRenderContext* pRenderContext,
				int nVertexCount,
				const char* pDebugName,
				const char* pBudgetGroup);  // 1452
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 1445
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 1446
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 1447
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 1448
	Vector::Vector(); // 1449
	VectorMA(const Vector& start,
		float scale,
		const Vector& direction,
		Vector& dest);  // 1454
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 1455
	VectorMA(const Vector& start,
		float scale,
		const Vector& direction,
		Vector& dest);  // 1457
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 1458
	VectorMA(const Vector& start,
		float scale,
		const Vector& direction,
		Vector& dest);  // 1460
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 1461
	CDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 760
	CDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 840
	CSysMemDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 851
	CDynamicVertexData<VertexColorUVPos_t>::Bind(
		int nSlot,
		int nOffset,
		int nStride);  // 846
	CSysMemDynamicVertexData<VertexColorUVPos_t>::Bind(
		int nSlot,
		int nOffset,
		int nStride);  // 852
	CSysMemDynamicVertexData<VertexColorUVPos_t>::UnlockAndBind(
			int nSlot,
			int nOffset,
			int nStride);  // 1463
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
	CRenderAttributes::CRenderAttributes(); // 1466
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		IntVector4D nValue);  // 515
	CRenderAttributes::SetComboValue(
			CUtlStringToken nTokenID,
			uint8 nValue);  // 1467
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator const ResourceHandleInfo_t<InfoForResourceTypeIMaterial2>::RuntimeClass_t*(); // 1469
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 693
	IRenderContext::ResetMaterialStateHint(); // 1474
	CDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 760
	CDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 710
	{
	}
	{
	}
	CVertexDataBase<VertexColorUVPos_t>::~CVertexDataBase(); // 194
	CVertexDataBase<VertexColorUVPos_t>::~CVertexDataBase(); // 711
	CDynamicVertexData<VertexColorUVPos_t>::~CDynamicVertexData(); // 808
	CSysMemDynamicVertexData<VertexColorUVPos_t>::~CSysMemDynamicVertexData(); // 1475
} /* size: 0, variables: 8, inline expansions: 113 (4051 bytes) */

// <004741C1> utils/materialsystem2utils.cpp:1480
// variables: 3
// function calls: 103
void CMaterialSystem2Utils::RenderLine(IRenderContext* pCtx, const Vector& v1, const Vector& v2, Color c, bool bZBuffer)
{
	int nVerts; // 1482
	CSysMemDynamicVertexData<VertexColorUVPos_t> lineVB; // 1483
	CRenderAttributes attributes; // 1490
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 180
	CVertexDataBase<VertexColorUVPos_t>::ClearVertexFields(); // 171
	Vector::Vector(); // 103
	VertexPos_t::VertexPos_t(); // 257
	Vector2D::Vector2D(); // 257
	VertexUVPos_t::VertexUVPos_t(); // 372
	VertexColor_t::VertexColor_t(); // 372
	VertexColorUVPos_t::VertexColorUVPos_t(); // 165
	CVertexDataBase<VertexColorUVPos_t>::CVertexDataBase(); // 673
	CDynamicVertexData<VertexColorUVPos_t>::Lock(
		int nVertexCount);  // 680
	CDynamicVertexData<VertexColorUVPos_t>::CDynamicVertexData(
				IRenderContext* pRenderContext,
				int nVertexCount,
				const char* pDebugName,
				const char* pBudgetGroup);  // 814
	CSysMemDynamicVertexData<VertexColorUVPos_t>::SetCurrentVertex(); // 816
	CSysMemDynamicVertexData<VertexColorUVPos_t>::CSysMemDynamicVertexData(
				IRenderContext* pRenderContext,
				int nVertexCount,
				const char* pDebugName,
				const char* pBudgetGroup);  // 1483
	Color::r(); // 106
	Color::g(); // 107
	Color::b(); // 108
	Color::a(); // 109
	VertexColor_t::VertexColor_t(
			const Color& src);  // 1485
	CDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 760
	CDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 840
	CSysMemDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 851
	CDynamicVertexData<VertexColorUVPos_t>::Bind(
		int nSlot,
		int nOffset,
		int nStride);  // 846
	CSysMemDynamicVertexData<VertexColorUVPos_t>::Bind(
		int nSlot,
		int nOffset,
		int nStride);  // 852
	CSysMemDynamicVertexData<VertexColorUVPos_t>::UnlockAndBind(
			int nSlot,
			int nOffset,
			int nStride);  // 1487
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
	CRenderAttributes::CRenderAttributes(); // 1490
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		IntVector4D nValue);  // 515
	CRenderAttributes::SetComboValue(
			CUtlStringToken nTokenID,
			uint8 nValue);  // 1491
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator const ResourceHandleInfo_t<InfoForResourceTypeIMaterial2>::RuntimeClass_t*(); // 1493
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 693
	IRenderContext::ResetMaterialStateHint(); // 1498
	CDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 760
	CDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 710
	{
	}
	{
	}
	CVertexDataBase<VertexColorUVPos_t>::~CVertexDataBase(); // 194
	CVertexDataBase<VertexColorUVPos_t>::~CVertexDataBase(); // 711
	CDynamicVertexData<VertexColorUVPos_t>::~CDynamicVertexData(); // 808
	CSysMemDynamicVertexData<VertexColorUVPos_t>::~CSysMemDynamicVertexData(); // 1499
} /* size: 0, variables: 3, inline expansions: 103 (3642 bytes) */

// <004725A0> utils/materialsystem2utils.cpp:1504
// variables: 7
// function calls: 116
void CMaterialSystem2Utils::RenderTriangleInternal(IRenderContext* pCtx, const Vector& p1, const Vector& p2, const Vector& p3, Color c, const IMaterial2* pMaterial, const CRenderAttributes* pAttributes)
{
	Vector vecNormal; // 1506
	Vector vecDelta1; // 1507
	Vector vecDelta2; // 1507
	Vector tanU; // 1513
	Vector tanV; // 1515
	int nVerts; // 1518
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t> triVB; // 1519
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 180
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::ClearVertexFields(); // 171
	Vector::Vector(); // 103
	VertexPos_t::VertexPos_t(); // 257
	Vector2D::Vector2D(); // 257
	VertexUVPos_t::VertexUVPos_t(); // 372
	VertexColor_t::VertexColor_t(); // 372
	VertexColorUVPos_t::VertexColorUVPos_t(); // 572
	Vector::Vector(); // 572
	Vector4D::Vector4D(); // 572
	VertexUVPosColorNormalAndTangent_t::VertexUVPosColorNormalAndTangent_t(); // 165
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::CVertexDataBase(); // 673
	CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::Lock(
		int nVertexCount);  // 680
	CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::CDynamicVertexData(
				IRenderContext* pRenderContext,
				int nVertexCount,
				const char* pDebugName,
				const char* pBudgetGroup);  // 814
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::SetCurrentVertex(); // 816
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::CSysMemDynamicVertexData(
				IRenderContext* pRenderContext,
				int nVertexCount,
				const char* pDebugName,
				const char* pBudgetGroup);  // 1519
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1508
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1509
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1510
	Vector::Vector(); // 1506
	Vector::Vector(); // 1507
	Vector::Vector(); // 1507
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 1513
	Vector::NormalizeInPlace(); // 1514
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 1515
	Vector::NormalizeInPlace(); // 1516
	Vector::operator=(
			const Vector& vOther);  // 111
	VertexPos_t::Position(
		const Vector& vecPos);  // 1522
	Vector::operator=(
			const Vector& vOther);  // 579
	VertexUVPosColorNormalAndTangent_t::Normal(
		const Vector& vecNormal);  // 1525
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1523
	VertexUVPos_t::SetUV0(
		float flU,
		float flV);  // 1523
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1524
	Color::r(); // 106
	Color::g(); // 107
	Color::b(); // 108
	Color::a(); // 109
	VertexColor_t::VertexColor_t(
			const Color& src);  // 1524
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 378
	VertexColorUVPos_t::Color(
		const VertexColor_t& vertexColor);  // 1524
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1525
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1526
	Vector::operator=(
			const Vector& vOther);  // 603
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 604
	DotProduct(const Vector& a,
			const Vector& b);  // 604
	VertexUVPosColorNormalAndTangent_t::TangentBasis(
			Vector vecTangentU,
			Vector vecTangentV);  // 1526
	{
	}
	{
	}
	{
	}
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 861
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 1527
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1529
	Vector::operator=(
			const Vector& vOther);  // 111
	VertexPos_t::Position(
		const Vector& vecPos);  // 1529
	VertexUVPos_t::SetUV0(
		float flU,
		float flV);  // 1530
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1530
	Vector::operator=(
			const Vector& vOther);  // 579
	VertexUVPosColorNormalAndTangent_t::Normal(
		const Vector& vecNormal);  // 1532
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1531
	Color::r(); // 106
	Color::g(); // 107
	Color::b(); // 108
	Color::a(); // 109
	VertexColor_t::VertexColor_t(
			const Color& src);  // 1531
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 378
	VertexColorUVPos_t::Color(
		const VertexColor_t& vertexColor);  // 1531
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1532
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1533
	Vector::operator=(
			const Vector& vOther);  // 603
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 604
	DotProduct(const Vector& a,
			const Vector& b);  // 604
	VertexUVPosColorNormalAndTangent_t::TangentBasis(
			Vector vecTangentU,
			Vector vecTangentV);  // 1533
	{
	}
	{
	}
	{
	}
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 861
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 1534
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1536
	Vector::operator=(
			const Vector& vOther);  // 111
	VertexPos_t::Position(
		const Vector& vecPos);  // 1536
	Vector::operator=(
			const Vector& vOther);  // 579
	VertexUVPosColorNormalAndTangent_t::Normal(
		const Vector& vecNormal);  // 1539
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1537
	VertexUVPos_t::SetUV0(
		float flU,
		float flV);  // 1537
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1538
	Color::r(); // 106
	Color::g(); // 107
	Color::b(); // 108
	Color::a(); // 109
	VertexColor_t::VertexColor_t(
			const Color& src);  // 1538
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 378
	VertexColorUVPos_t::Color(
		const VertexColor_t& vertexColor);  // 1538
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1539
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1540
	Vector::operator=(
			const Vector& vOther);  // 603
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 604
	DotProduct(const Vector& a,
			const Vector& b);  // 604
	VertexUVPosColorNormalAndTangent_t::TangentBasis(
			Vector vecTangentU,
			Vector vecTangentV);  // 1540
	CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::Unlock(); // 760
	CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::Unlock(); // 840
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::Unlock(); // 851
	CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::Bind(
		int nSlot,
		int nOffset,
		int nStride);  // 846
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::Bind(
		int nSlot,
		int nOffset,
		int nStride);  // 852
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::UnlockAndBind(
			int nSlot,
			int nOffset,
			int nStride);  // 1543
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 693
	IRenderContext::ResetMaterialStateHint(); // 1551
	CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::Unlock(); // 760
	CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::Unlock(); // 710
	{
	}
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 194
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 711
	CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::~CDynamicVertexData(); // 808
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::~CSysMemDynamicVertexData(); // 1552
} /* size: 0, variables: 7, inline expansions: 116 (4438 bytes) */

// <004716EF> utils/materialsystem2utils.cpp:1557
// variables: 3
// function calls: 71
void CMaterialSystem2Utils::RenderTriangle(IRenderContext* pCtx, const Vector& p1, const Vector& p2, const Vector& p3, Color c, bool bZBuffer)
{
	Color cActual; // 1559
	const IMaterial2* pMaterial; // 1560
	CRenderAttributes attributes; // 1561
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator const ResourceHandleInfo_t<InfoForResourceTypeIMaterial2>::RuntimeClass_t*(); // 1560
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 1559
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
	CRenderAttributes::CRenderAttributes(); // 1561
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		IntVector4D nValue);  // 515
	CRenderAttributes::SetComboValue(
			CUtlStringToken nTokenID,
			uint8 nValue);  // 1562
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 1562
} /* size: 576, variables: 3, inline expansions: 71 (1491 bytes) */

// <004715F5> utils/materialsystem2utils.cpp:1569
void CMaterialSystem2Utils::RenderTriangle(IRenderContext* pCtx, const Vector& p1, const Vector& p2, const Vector& p3, Color c, const IMaterial2* pMaterial, const CRenderAttributes* pAttributes)
{
} /* size: 9 */

// <0046EAEF> utils/materialsystem2utils.cpp:1578
// variables: 11
// function calls: 183
void CMaterialSystem2Utils::RenderQuad(IRenderContext* pCtx, const IMaterial2* pMaterial, const CRenderAttributes* pAttributes, float x, float y, float w, float h, float z, float s0, float t0, float s1, float t1, const Color& clr)
{
	int nVerts; // 1581
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t> triVB; // 1582
	Vector p1; // 1584
	Vector p2; // 1585
	Vector p3; // 1586
	Vector point4; // 1587
	Vector tanU; // 1589
	Vector tanV; // 1591
	Vector vecNormal; // 1595
	Vector vecDelta1; // 1596
	Vector vecDelta2; // 1596
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 180
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::ClearVertexFields(); // 171
	Vector::Vector(); // 103
	VertexPos_t::VertexPos_t(); // 257
	Vector2D::Vector2D(); // 257
	VertexUVPos_t::VertexUVPos_t(); // 372
	VertexColor_t::VertexColor_t(); // 372
	VertexColorUVPos_t::VertexColorUVPos_t(); // 572
	Vector::Vector(); // 572
	Vector4D::Vector4D(); // 572
	VertexUVPosColorNormalAndTangent_t::VertexUVPosColorNormalAndTangent_t(); // 165
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::CVertexDataBase(); // 673
	CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::Lock(
		int nVertexCount);  // 680
	CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::CDynamicVertexData(
				IRenderContext* pRenderContext,
				int nVertexCount,
				const char* pDebugName,
				const char* pBudgetGroup);  // 814
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::SetCurrentVertex(); // 816
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::CSysMemDynamicVertexData(
				IRenderContext* pRenderContext,
				int nVertexCount,
				const char* pDebugName,
				const char* pBudgetGroup);  // 1582
	Vector::NormalizeInPlace(); // 1590
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1584
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1599
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1585
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 1589
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1586
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1587
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 1591
	Vector::NormalizeInPlace(); // 1592
	Vector::Vector(); // 1595
	Vector::Vector(); // 1596
	Vector::Vector(); // 1596
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1602
	Vector::operator=(
			const Vector& vOther);  // 111
	VertexPos_t::Position(
		const Vector& vecPos);  // 1602
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1603
	VertexUVPos_t::SetUV0(
		float flU,
		float flV);  // 1603
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1604
	Color::r(); // 106
	Color::g(); // 107
	Color::b(); // 108
	Color::a(); // 109
	VertexColor_t::VertexColor_t(
			const Color& src);  // 1604
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 378
	VertexColorUVPos_t::Color(
		const VertexColor_t& vertexColor);  // 1604
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1605
	Vector::operator=(
			const Vector& vOther);  // 579
	VertexUVPosColorNormalAndTangent_t::Normal(
		const Vector& vecNormal);  // 1605
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1606
	Vector::operator=(
			const Vector& vOther);  // 603
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 604
	DotProduct(const Vector& a,
			const Vector& b);  // 604
	VertexUVPosColorNormalAndTangent_t::TangentBasis(
			Vector vecTangentU,
			Vector vecTangentV);  // 1606
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1609
	Vector::operator=(
			const Vector& vOther);  // 111
	VertexPos_t::Position(
		const Vector& vecPos);  // 1609
	VertexUVPos_t::SetUV0(
		float flU,
		float flV);  // 1610
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1610
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1611
	Color::r(); // 106
	Color::g(); // 107
	Color::b(); // 108
	Color::a(); // 109
	VertexColor_t::VertexColor_t(
			const Color& src);  // 1611
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 378
	VertexColorUVPos_t::Color(
		const VertexColor_t& vertexColor);  // 1611
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1612
	Vector::operator=(
			const Vector& vOther);  // 579
	VertexUVPosColorNormalAndTangent_t::Normal(
		const Vector& vecNormal);  // 1612
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1613
	Vector::operator=(
			const Vector& vOther);  // 603
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 604
	DotProduct(const Vector& a,
			const Vector& b);  // 604
	VertexUVPosColorNormalAndTangent_t::TangentBasis(
			Vector vecTangentU,
			Vector vecTangentV);  // 1613
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1616
	Vector::operator=(
			const Vector& vOther);  // 111
	VertexPos_t::Position(
		const Vector& vecPos);  // 1616
	VertexUVPos_t::SetUV0(
		float flU,
		float flV);  // 1617
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1617
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1618
	Color::r(); // 106
	Color::g(); // 107
	Color::b(); // 108
	Color::a(); // 109
	VertexColor_t::VertexColor_t(
			const Color& src);  // 1618
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 378
	VertexColorUVPos_t::Color(
		const VertexColor_t& vertexColor);  // 1618
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1619
	Vector::operator=(
			const Vector& vOther);  // 579
	VertexUVPosColorNormalAndTangent_t::Normal(
		const Vector& vecNormal);  // 1619
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1620
	Vector::operator=(
			const Vector& vOther);  // 603
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 604
	DotProduct(const Vector& a,
			const Vector& b);  // 604
	VertexUVPosColorNormalAndTangent_t::TangentBasis(
			Vector vecTangentU,
			Vector vecTangentV);  // 1620
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1625
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1627
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1630
	Vector::operator=(
			const Vector& vOther);  // 111
	VertexPos_t::Position(
		const Vector& vecPos);  // 1630
	VertexUVPos_t::SetUV0(
		float flU,
		float flV);  // 1631
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1631
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1632
	Color::r(); // 106
	Color::g(); // 107
	Color::b(); // 108
	Color::a(); // 109
	VertexColor_t::VertexColor_t(
			const Color& src);  // 1632
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 378
	VertexColorUVPos_t::Color(
		const VertexColor_t& vertexColor);  // 1632
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1633
	Vector::operator=(
			const Vector& vOther);  // 579
	VertexUVPosColorNormalAndTangent_t::Normal(
		const Vector& vecNormal);  // 1633
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1634
	Vector::operator=(
			const Vector& vOther);  // 603
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 604
	DotProduct(const Vector& a,
			const Vector& b);  // 604
	VertexUVPosColorNormalAndTangent_t::TangentBasis(
			Vector vecTangentU,
			Vector vecTangentV);  // 1634
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1637
	Vector::operator=(
			const Vector& vOther);  // 111
	VertexPos_t::Position(
		const Vector& vecPos);  // 1637
	VertexUVPos_t::SetUV0(
		float flU,
		float flV);  // 1638
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1638
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1639
	Color::r(); // 106
	Color::g(); // 107
	Color::b(); // 108
	Color::a(); // 109
	VertexColor_t::VertexColor_t(
			const Color& src);  // 1639
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 378
	VertexColorUVPos_t::Color(
		const VertexColor_t& vertexColor);  // 1639
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1640
	Vector::operator=(
			const Vector& vOther);  // 579
	VertexUVPosColorNormalAndTangent_t::Normal(
		const Vector& vecNormal);  // 1640
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1641
	Vector::operator=(
			const Vector& vOther);  // 603
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 604
	DotProduct(const Vector& a,
			const Vector& b);  // 604
	VertexUVPosColorNormalAndTangent_t::TangentBasis(
			Vector vecTangentU,
			Vector vecTangentV);  // 1641
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1644
	Vector::operator=(
			const Vector& vOther);  // 111
	VertexPos_t::Position(
		const Vector& vecPos);  // 1644
	VertexUVPos_t::SetUV0(
		float flU,
		float flV);  // 1645
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1645
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1646
	Color::r(); // 106
	Color::g(); // 107
	Color::b(); // 108
	Color::a(); // 109
	VertexColor_t::VertexColor_t(
			const Color& src);  // 1646
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 378
	VertexColorUVPos_t::Color(
		const VertexColor_t& vertexColor);  // 1646
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1647
	Vector::operator=(
			const Vector& vOther);  // 579
	VertexUVPosColorNormalAndTangent_t::Normal(
		const Vector& vecNormal);  // 1647
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1648
	Vector::operator=(
			const Vector& vOther);  // 603
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 604
	DotProduct(const Vector& a,
			const Vector& b);  // 604
	VertexUVPosColorNormalAndTangent_t::TangentBasis(
			Vector vecTangentU,
			Vector vecTangentV);  // 1648
	CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::Unlock(); // 760
	CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::Unlock(); // 840
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::Unlock(); // 851
	CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::Bind(
		int nSlot,
		int nOffset,
		int nStride);  // 846
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::Bind(
		int nSlot,
		int nOffset,
		int nStride);  // 852
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::UnlockAndBind(
			int nSlot,
			int nOffset,
			int nStride);  // 1651
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 693
	IRenderContext::ResetMaterialStateHint(); // 1659
	CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::Unlock(); // 760
	CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::Unlock(); // 710
	{
	}
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 194
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 711
	CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::~CDynamicVertexData(); // 808
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::~CSysMemDynamicVertexData(); // 1660
} /* size: 0, variables: 11, inline expansions: 183 (4833 bytes) */

// <0046A4C1> utils/materialsystem2utils.cpp:1665
// variables: 40
// function calls: 262
void CMaterialSystem2Utils::DrawScreenSpaceRectangle(IRenderContext* pCtx, const IMaterial2* pMaterial, const CRenderAttributes* pAttributes, int nDestX, int nDestY, int nWidth, int nHeight, float flSrcTextureX0, float flSrcTextureY0, float flSrcTextureX1, float flSrcTextureY1, int nSrcTextureWidth, int nSrcTextureHeight, int nXDice, int nYDice, float fDepth, VertexColor_t* pColor)
{
	int xSegments; // 1676
	int ySegments; // 1677
	int nVerts; // 1678
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t> triVB; // 1679
	RenderViewport_t viewport; // 1681
	float flOffset; // 1686
	float flLeftX; // 1688
	float flRightX; // 1689
	float flTopY; // 1691
	float flBottomY; // 1692
	float flSubrectWidth; // 1694
	float flSubrectHeight; // 1695
	float flTexelsPerPixelX; // 1697
	float flTexelsPerPixelY; // 1698
	float flLeftU; // 1700
	float flRightU; // 1701
	float flTopV; // 1702
	float flBottomV; // 1703
	float flOOTexWidth; // 1705
	float flOOTexHeight; // 1706
	Rect_t rectScissor; // 1713
	VertexColor_t c; // 1716
	Vector vecNormal; // 1731
	Vector s; // 1733
	Vector t; // 1734
	{
		Vector newPos; // 1739
		float flWidth; // 1742
		float flHeight; // 1743
		float flUWidth; // 1746
		float flVHeight; // 1747
		{
			int x; // 1749
			{
				int y; // 1751
				{
					Vector topLeft; // 1754
					Vector topRight; // 1755
					Vector bottomLeft; // 1756
					Vector bottomRight; // 1757
					Vector2D topLeftUV; // 1759
					Vector2D topRightUV; // 1760
					Vector2D bottomLeftUV; // 1761
					Vector2D bottomRightUV; // 1762
					{
					}
					{
					}
					{
					}
					CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 861
					CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 1770
					CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1772
					Vector::operator=(
							const Vector& vOther);  // 111
					VertexPos_t::Position(
						const Vector& vecPos);  // 1772
					CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1773
					Vector2D::operator=(
							const Vector2D& vOther);  // 263
					VertexUVPos_t::SetUV0(
						const Vector2D& vecUV);  // 1773
					CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1774
					VertexColor_t::operator=(
							const VertexColor_t& src);  // 378
					VertexColorUVPos_t::Color(
						const VertexColor_t& vertexColor);  // 1774
					CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1775
					Vector::operator=(
							const Vector& vOther);  // 579
					VertexUVPosColorNormalAndTangent_t::Normal(
						const Vector& vecNormal);  // 1775
					CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1776
					Vector::operator=(
							const Vector& vOther);  // 603
					Vector::Vector(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 1508
					CrossProduct(const Vector& a,
							const Vector& b);  // 604
					DotProduct(const Vector& a,
							const Vector& b);  // 604
					VertexUVPosColorNormalAndTangent_t::TangentBasis(
							Vector vecTangentU,
							Vector vecTangentV);  // 1776
					{
					}
					{
					}
					{
					}
					CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 861
					CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 1777
					CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1779
					Vector::operator=(
							const Vector& vOther);  // 111
					VertexPos_t::Position(
						const Vector& vecPos);  // 1779
					CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1780
					Vector2D::operator=(
							const Vector2D& vOther);  // 263
					VertexUVPos_t::SetUV0(
						const Vector2D& vecUV);  // 1780
					CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1781
					VertexColor_t::operator=(
							const VertexColor_t& src);  // 378
					VertexColorUVPos_t::Color(
						const VertexColor_t& vertexColor);  // 1781
					CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1782
					Vector::operator=(
							const Vector& vOther);  // 579
					VertexUVPosColorNormalAndTangent_t::Normal(
						const Vector& vecNormal);  // 1782
					CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1783
					Vector::operator=(
							const Vector& vOther);  // 603
					Vector::Vector(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 1508
					CrossProduct(const Vector& a,
							const Vector& b);  // 604
					DotProduct(const Vector& a,
							const Vector& b);  // 604
					VertexUVPosColorNormalAndTangent_t::TangentBasis(
							Vector vecTangentU,
							Vector vecTangentV);  // 1783
					{
					}
					{
					}
					{
					}
					CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 861
					CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 1784
					CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1789
					Vector::operator=(
							const Vector& vOther);  // 111
					VertexPos_t::Position(
						const Vector& vecPos);  // 1789
					CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1790
					Vector2D::operator=(
							const Vector2D& vOther);  // 263
					VertexUVPos_t::SetUV0(
						const Vector2D& vecUV);  // 1790
					CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1791
					VertexColor_t::operator=(
							const VertexColor_t& src);  // 378
					VertexColorUVPos_t::Color(
						const VertexColor_t& vertexColor);  // 1791
					CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1792
					Vector::operator=(
							const Vector& vOther);  // 579
					VertexUVPosColorNormalAndTangent_t::Normal(
						const Vector& vecNormal);  // 1792
					CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1793
					Vector::operator=(
							const Vector& vOther);  // 603
					Vector::Vector(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 1508
					CrossProduct(const Vector& a,
							const Vector& b);  // 604
					DotProduct(const Vector& a,
							const Vector& b);  // 604
					VertexUVPosColorNormalAndTangent_t::TangentBasis(
							Vector vecTangentU,
							Vector vecTangentV);  // 1793
					{
					}
					{
					}
					{
					}
					CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 861
					CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 1794
					CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1796
					Vector::operator=(
							const Vector& vOther);  // 111
					VertexPos_t::Position(
						const Vector& vecPos);  // 1796
					Vector2D::operator=(
							const Vector2D& vOther);  // 263
					VertexUVPos_t::SetUV0(
						const Vector2D& vecUV);  // 1797
					CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1797
					CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1798
					VertexColor_t::operator=(
							const VertexColor_t& src);  // 378
					VertexColorUVPos_t::Color(
						const VertexColor_t& vertexColor);  // 1798
					CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1799
					Vector::operator=(
							const Vector& vOther);  // 579
					VertexUVPosColorNormalAndTangent_t::Normal(
						const Vector& vecNormal);  // 1799
					CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1800
					Vector::operator=(
							const Vector& vOther);  // 603
					Vector::Vector(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 1508
					CrossProduct(const Vector& a,
							const Vector& b);  // 604
					DotProduct(const Vector& a,
							const Vector& b);  // 604
					VertexUVPosColorNormalAndTangent_t::TangentBasis(
							Vector vecTangentU,
							Vector vecTangentV);  // 1800
					{
					}
					{
					}
					{
					}
					CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 861
					CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 1801
					CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1803
					Vector::operator=(
							const Vector& vOther);  // 111
					VertexPos_t::Position(
						const Vector& vecPos);  // 1803
					CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1804
					Vector2D::operator=(
							const Vector2D& vOther);  // 263
					VertexUVPos_t::SetUV0(
						const Vector2D& vecUV);  // 1804
					CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1805
					VertexColor_t::operator=(
							const VertexColor_t& src);  // 378
					VertexColorUVPos_t::Color(
						const VertexColor_t& vertexColor);  // 1805
					CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1806
					Vector::operator=(
							const Vector& vOther);  // 579
					VertexUVPosColorNormalAndTangent_t::Normal(
						const Vector& vecNormal);  // 1806
					CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1807
					Vector::operator=(
							const Vector& vOther);  // 603
					Vector::Vector(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 1508
					CrossProduct(const Vector& a,
							const Vector& b);  // 604
					DotProduct(const Vector& a,
							const Vector& b);  // 604
					VertexUVPosColorNormalAndTangent_t::TangentBasis(
							Vector vecTangentU,
							Vector vecTangentV);  // 1807
					{
					}
					{
					}
					{
					}
					CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 861
					CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 1808
					VertexColor_t::AsUint32(); // 203
					VertexColor_t::operator=(
							const VertexColor_t& src);  // 378
					VertexColorUVPos_t::Color(
						const VertexColor_t& vertexColor);  // 1767
					CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1765
					Vector::operator=(
							const Vector& vOther);  // 111
					VertexPos_t::Position(
						const Vector& vecPos);  // 1765
					Vector::Vector(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 1754
					Vector::Vector(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 1755
					CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1766
					Vector::Vector(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 1756
					Vector::Vector(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 1757
					Vector2D::operator=(
							const Vector2D& vOther);  // 263
					VertexUVPos_t::SetUV0(
						const Vector2D& vecUV);  // 1766
					CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1767
					Vector2D::Vector2D(
						vec_t X,
						vec_t Y);  // 1759
					Vector2D::Vector2D(
						vec_t X,
						vec_t Y);  // 1760
					CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1768
					Vector2D::Vector2D(
						vec_t X,
						vec_t Y);  // 1761
					Vector2D::Vector2D(
						vec_t X,
						vec_t Y);  // 1762
					Vector::operator=(
							const Vector& vOther);  // 579
					VertexUVPosColorNormalAndTangent_t::Normal(
						const Vector& vecNormal);  // 1768
					CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1769
					Vector::operator=(
							const Vector& vOther);  // 603
					Vector::Vector(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 1508
					CrossProduct(const Vector& a,
							const Vector& b);  // 604
					DotProduct(const Vector& a,
							const Vector& b);  // 604
					VertexUVPosColorNormalAndTangent_t::TangentBasis(
							Vector vecTangentU,
							Vector vecTangentV);  // 1769
				}
			}
		}
		Vector::Vector(); // 1739
	}
	Max<int>(const int& val1,
		const int& val2);  // 1676
	Max<int>(const int& val1,
		const int& val2);  // 1677
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 180
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::ClearVertexFields(); // 171
	Vector::Vector(); // 103
	VertexPos_t::VertexPos_t(); // 257
	Vector2D::Vector2D(); // 257
	VertexUVPos_t::VertexUVPos_t(); // 372
	VertexColor_t::VertexColor_t(); // 372
	VertexColorUVPos_t::VertexColorUVPos_t(); // 572
	Vector::Vector(); // 572
	Vector4D::Vector4D(); // 572
	VertexUVPosColorNormalAndTangent_t::VertexUVPosColorNormalAndTangent_t(); // 165
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::CVertexDataBase(); // 673
	CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::Lock(
		int nVertexCount);  // 680
	CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::CDynamicVertexData(
				IRenderContext* pRenderContext,
				int nVertexCount,
				const char* pDebugName,
				const char* pBudgetGroup);  // 814
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::SetCurrentVertex(); // 816
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::CSysMemDynamicVertexData(
				IRenderContext* pRenderContext,
				int nVertexCount,
				const char* pDebugName,
				const char* pBudgetGroup);  // 1679
	RenderViewport_t::RenderViewport_t(); // 1681
	IRenderContext::SetScissorRect(
			const Rect_t& rect);  // 1714
	Rect_t::Rect_t(
		int nX,
		int nY,
		int nWidth,
		int nHeight);  // 1713
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 1716
	VertexColor_t::Init(
		uint8 ir,
		uint8 ig,
		uint8 ib,
		uint8 ia);  // 1719
	IMaterial2::GetBoolAttributeOrDefault(
					CUtlStringToken name,
					bool bDefault);  // 1722
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1731
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1733
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1734
	Vector::operator=(
			const Vector& vOther);  // 111
	VertexPos_t::Position(
		const Vector& vecPos);  // 1815
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1815
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1815
	Vector::operator=(
			const Vector& vOther);  // 579
	VertexUVPosColorNormalAndTangent_t::Normal(
		const Vector& vecNormal);  // 1818
	VertexUVPos_t::SetUV0(
		float flU,
		float flV);  // 1816
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1816
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1817
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 378
	VertexColorUVPos_t::Color(
		const VertexColor_t& vertexColor);  // 1817
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1818
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1819
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1822
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1822
	Vector::operator=(
			const Vector& vOther);  // 111
	VertexPos_t::Position(
		const Vector& vecPos);  // 1822
	Vector::operator=(
			const Vector& vOther);  // 579
	VertexUVPosColorNormalAndTangent_t::Normal(
		const Vector& vecNormal);  // 1825
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1823
	VertexUVPos_t::SetUV0(
		float flU,
		float flV);  // 1823
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1824
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 378
	VertexColorUVPos_t::Color(
		const VertexColor_t& vertexColor);  // 1824
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1825
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1826
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1829
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1829
	Vector::operator=(
			const Vector& vOther);  // 111
	VertexPos_t::Position(
		const Vector& vecPos);  // 1829
	Vector::operator=(
			const Vector& vOther);  // 579
	VertexUVPosColorNormalAndTangent_t::Normal(
		const Vector& vecNormal);  // 1832
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1830
	VertexUVPos_t::SetUV0(
		float flU,
		float flV);  // 1830
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1831
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 378
	VertexColorUVPos_t::Color(
		const VertexColor_t& vertexColor);  // 1831
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1832
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1833
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1838
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1838
	Vector::operator=(
			const Vector& vOther);  // 111
	VertexPos_t::Position(
		const Vector& vecPos);  // 1838
	VertexUVPos_t::SetUV0(
		float flU,
		float flV);  // 1839
	Vector::operator=(
			const Vector& vOther);  // 579
	VertexUVPosColorNormalAndTangent_t::Normal(
		const Vector& vecNormal);  // 1841
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1839
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1840
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 378
	VertexColorUVPos_t::Color(
		const VertexColor_t& vertexColor);  // 1840
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1841
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1842
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1845
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1845
	Vector::operator=(
			const Vector& vOther);  // 111
	VertexPos_t::Position(
		const Vector& vecPos);  // 1845
	VertexUVPos_t::SetUV0(
		float flU,
		float flV);  // 1846
	Vector::operator=(
			const Vector& vOther);  // 579
	VertexUVPosColorNormalAndTangent_t::Normal(
		const Vector& vecNormal);  // 1848
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1846
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1847
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 378
	VertexColorUVPos_t::Color(
		const VertexColor_t& vertexColor);  // 1847
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1848
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1849
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1852
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1852
	Vector::operator=(
			const Vector& vOther);  // 111
	VertexPos_t::Position(
		const Vector& vecPos);  // 1852
	Vector::operator=(
			const Vector& vOther);  // 579
	VertexUVPosColorNormalAndTangent_t::Normal(
		const Vector& vecNormal);  // 1855
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1853
	VertexUVPos_t::SetUV0(
		float flU,
		float flV);  // 1853
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1854
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 378
	VertexColorUVPos_t::Color(
		const VertexColor_t& vertexColor);  // 1854
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1855
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1856
	CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::Unlock(); // 760
	CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::Unlock(); // 840
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::Unlock(); // 851
	CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::Bind(
		int nSlot,
		int nOffset,
		int nStride);  // 846
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::Bind(
		int nSlot,
		int nOffset,
		int nStride);  // 852
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::UnlockAndBind(
			int nSlot,
			int nOffset,
			int nStride);  // 1860
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 693
	IRenderContext::ResetMaterialStateHint(); // 1868
	CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::Unlock(); // 760
	CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::Unlock(); // 710
	{
	}
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 194
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 711
	CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::~CDynamicVertexData(); // 808
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::~CSysMemDynamicVertexData(); // 1869
	FLerp(float f1,
		float f2,
		float i1,
		float i2,
		float x);  // 1724
	FLerp(float f1,
		float f2,
		float i1,
		float i2,
		float x);  // 1725
	FLerp(float f1,
		float f2,
		float i1,
		float i2,
		float x);  // 1726
	FLerp(float f1,
		float f2,
		float i1,
		float i2,
		float x);  // 1727
	CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::Unlock(); // 760
	CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::Unlock(); // 710
	{
	}
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 194
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 711
	CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::~CDynamicVertexData(); // 808
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::~CSysMemDynamicVertexData(); // 1869
} /* size: 0, variables: 25, inline expansions: 132 (3784 bytes) */

// <00468C72> utils/materialsystem2utils.cpp:1874
// variables: 14
// function calls: 88
void CMaterialSystem2Utils::DrawNDCSpaceUntexturedPolygon(IRenderContext* pCtx, const IMaterial2* pMaterial, const CRenderAttributes* pAttributes, int nVertexCount, Vector2D* pScreenSpaceCoordinates)
{
	RenderViewport_t viewport; // 1879
	float flSubpixelOfs; // 1889
	float flXOfs; // 1890
	float flYOfs; // 1891
	Rect_t rectScissor; // 1894
	matrix3x4_t renderToViewport; // 1897
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t> triVB; // 1902
	Vector newPos; // 1904
	int nIndices; // 1919
	CDynamicIndexData<short unsigned int> ib; // 1920
	int numPolygons; // 1922
	{
		int i; // 1905
		{
			Vector position; // 1907
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1907
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1508
			CrossProduct(const Vector& a,
					const Vector& b);  // 604
			Vector::operator=(
					const Vector& vOther);  // 603
			DotProduct(const Vector& a,
					const Vector& b);  // 604
			VertexUVPosColorNormalAndTangent_t::TangentBasis(
					Vector vecTangentU,
					Vector vecTangentV);  // 1913
			{
			}
			{
			}
			{
			}
			CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 861
			CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 1914
			CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1909
			VectorTransform(const Vector& in1,
					const matrix3x4_t& in2,
					Vector& out);  // 1908
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1909
			Vector::operator=(
					const Vector& vOther);  // 111
			VertexPos_t::Position(
				const Vector& vecPos);  // 1909
			CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1910
			VertexUVPos_t::SetUV0(
				float flU,
				float flV);  // 1910
			CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1911
			Color::SetColor(
				int _r,
				int _g,
				int _b,
				int _a);  // 50
			Color::Color(
				int _r,
				int _g,
				int _b,
				int _a);  // 1911
			Color::r(); // 106
			Color::g(); // 107
			Color::b(); // 108
			Color::a(); // 109
			VertexColor_t::VertexColor_t(
					const Color& src);  // 1911
			VertexColor_t::operator=(
					const VertexColor_t& src);  // 378
			VertexColorUVPos_t::Color(
				const VertexColor_t& vertexColor);  // 1911
			CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1912
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1912
			Vector::operator=(
					const Vector& vOther);  // 579
			VertexUVPosColorNormalAndTangent_t::Normal(
				const Vector& vecNormal);  // 1912
			CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::operator->(); // 1913
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1913
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1913
		}
	}
	{
		int i; // 1923
		{
		}
		CIndexDataBase<short unsigned int>::Index(
			short unsigned int nIndex);  // 1925
		{
		}
		CIndexDataBase<short unsigned int>::Index(
			short unsigned int nIndex);  // 1926
		{
		}
		CIndexDataBase<short unsigned int>::Index(
			short unsigned int nIndex);  // 1927
	}
	RenderViewport_t::RenderViewport_t(); // 1879
	IRenderContext::SetScissorRect(
			const Rect_t& rect);  // 1895
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 180
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::ClearVertexFields(); // 171
	Vector::Vector(); // 103
	VertexPos_t::VertexPos_t(); // 257
	Vector2D::Vector2D(); // 257
	VertexUVPos_t::VertexUVPos_t(); // 372
	VertexColor_t::VertexColor_t(); // 372
	VertexColorUVPos_t::VertexColorUVPos_t(); // 572
	Vector::Vector(); // 572
	Vector4D::Vector4D(); // 572
	VertexUVPosColorNormalAndTangent_t::VertexUVPosColorNormalAndTangent_t(); // 165
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::CVertexDataBase(); // 673
	CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::Lock(
		int nVertexCount);  // 680
	CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::CDynamicVertexData(
				IRenderContext* pRenderContext,
				int nVertexCount,
				const char* pDebugName,
				const char* pBudgetGroup);  // 814
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::SetCurrentVertex(); // 816
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::CSysMemDynamicVertexData(
				IRenderContext* pRenderContext,
				int nVertexCount,
				const char* pDebugName,
				const char* pBudgetGroup);  // 1902
	Rect_t::Rect_t(
		int nX,
		int nY,
		int nWidth,
		int nHeight);  // 1894
	matrix3x4_t::matrix3x4_t(); // 1897
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1899
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 647
	MatrixSetColumn(const Vector& in,
			MatrixAxisType_t nColumn,
			matrix3x4_t& out);  // 1211
	PositionMatrix(const Vector& position,
			matrix3x4_t& mat);  // 1899
	Vector::Vector(); // 1904
	CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::Unlock(); // 760
	CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::Unlock(); // 840
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::Unlock(); // 851
	CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::Bind(
		int nSlot,
		int nOffset,
		int nStride);  // 846
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::Bind(
		int nSlot,
		int nOffset,
		int nStride);  // 852
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::UnlockAndBind(
			int nSlot,
			int nOffset,
			int nStride);  // 1916
	CDynamicIndexData<short unsigned int>::Lock(
		int nIndexCount);  // 580
	CIndexDataBase<short unsigned int>::ClearIndexFields(); // 89
	CIndexDataBase<short unsigned int>::CIndexDataBase(); // 573
	CDynamicIndexData<short unsigned int>::CDynamicIndexData(
				IRenderContext* pRenderContext,
				int nIndexCount,
				const char* pDebugName,
				const char* pBudgetGroup);  // 1920
	CDynamicIndexData<short unsigned int>::Unlock(); // 658
	CDynamicIndexData<short unsigned int>::Unlock(); // 540
	CDynamicIndexData<short unsigned int>::Bind(
		int nOffset);  // 541
	CDynamicIndexData<short unsigned int>::UnlockAndBind(
			int nBindOffset);  // 1930
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 693
	IRenderContext::ResetMaterialStateHint(); // 1938
	CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::Unlock(); // 760
	CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::Unlock(); // 710
	{
	}
	{
	}
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 194
	CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 711
	CDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::~CDynamicVertexData(); // 808
	CSysMemDynamicVertexData<VertexUVPosColorNormalAndTangent_t>::~CSysMemDynamicVertexData(); // 1939
	CDynamicIndexData<short unsigned int>::Unlock(); // 607
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 608
	CDynamicIndexData<short unsigned int>::~CDynamicIndexData(); // 1939
} /* size: 0, variables: 11, inline expansions: 53 (2453 bytes) */

// <00468350> utils/materialsystem2utils.cpp:1944
// variables: 4
// function calls: 35
void CMaterialSystem2Utils::RenderText(IRenderContext* pRenderContext, const char* pText, const Vector2D& textPos, Color drawColor, FontHandle_t fontID, const CRenderAttributes* pAttributes, LayoutPositionType_e positionType)
{
	Vector2D pos; // 1952
	CUtlVectorFixedGrowableCompat<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, 2> renderGeometryLists; // 1961
	{
		RenderViewport_t viewport; // 1955
		RenderViewport_t::RenderViewport_t(); // 1955
	}
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 1952
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::CUtlMemory(
			CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 535
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this); // 538
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this,
			CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >* pMemory,
			int allocationCount,
			int initialCount,
			bool bGrowable);  // 420
	CUtlVector(const CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRende this,
			CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >* pMemory,
			int allocationCount,
			int initialCount,
			bool bGrowable);  // 495
	AlignedByteArrayExplicit_t<2, CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<2, CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> > >::AlignedByteArray_t(); // 495
	AlignedByteArrayExplicit_t<2, CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, 8>::Base(); // 497
	CUtlVectorFixedGrowableCompat<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, 2>::CUtlVectorFixedGrowableCompat(
					int growSize);  // 1961
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 1964
	{
		int i; // 1721
		CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this,
			int i);  // 1723
		CUtlVectorBase<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::RemoveAll(); // 1798
		CUtlMemory<CCharRenderGeometry, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CCharRenderGeometry, int>::Purge(); // 903
		CUtlMemory<CCharRenderGeometry, int>::Purge(); // 1799
		CUtlVectorBase<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::Purge(); // 560
		ValidateAlignment<CCharRenderGeometry>(void); // 508
		CUtlMemory<CCharRenderGeometry, int>::Purge(); // 510
		CUtlMemory<CCharRenderGeometry, int>::~CUtlMemory(); // 562
		CUtlVectorBase<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::~CUtlVectorBase(); // 410
		CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::~CUtlVector(); // 1526
		Destruct<CUtlVector<CCharRenderGeometry> >(CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this); // 1798
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this); // 560
	ValidateAlignment<CUtlVector<CCharRenderGeometry> >(void); // 508
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRende this); // 489
	CUtlVectorFixedGrowableCompat<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, 2>::~CUtlVectorFixedGrowableCompat(); // 1965
} /* size: 511, variables: 2, inline expansions: 21 (838 bytes) */

// <00467A62> utils/materialsystem2utils.cpp:1970
// variables: 4
// function calls: 35
void CMaterialSystem2Utils::RenderText(IRenderContext* pRenderContext, const uchar16* pText, const Vector2D& textPos, Color drawColor, FontHandle_t fontID, const CRenderAttributes* pAttributes, LayoutPositionType_e positionType)
{
	Vector2D pos; // 1978
	CUtlVectorFixedGrowableCompat<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, 2> renderGeometryLists; // 1987
	{
		RenderViewport_t viewport; // 1981
		RenderViewport_t::RenderViewport_t(); // 1981
	}
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 1978
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::CUtlMemory(
			CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 535
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this); // 538
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this,
			CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >* pMemory,
			int allocationCount,
			int initialCount,
			bool bGrowable);  // 420
	CUtlVector(const CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRende this,
			CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >* pMemory,
			int allocationCount,
			int initialCount,
			bool bGrowable);  // 495
	AlignedByteArrayExplicit_t<2, CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<2, CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> > >::AlignedByteArray_t(); // 495
	AlignedByteArrayExplicit_t<2, CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, 8>::Base(); // 497
	CUtlVectorFixedGrowableCompat<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, 2>::CUtlVectorFixedGrowableCompat(
					int growSize);  // 1987
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 1990
	{
		int i; // 1721
		CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this,
			int i);  // 1723
		CUtlVectorBase<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::RemoveAll(); // 1798
		CUtlMemory<CCharRenderGeometry, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CCharRenderGeometry, int>::Purge(); // 903
		CUtlMemory<CCharRenderGeometry, int>::Purge(); // 1799
		CUtlVectorBase<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::Purge(); // 560
		ValidateAlignment<CCharRenderGeometry>(void); // 508
		CUtlMemory<CCharRenderGeometry, int>::Purge(); // 510
		CUtlMemory<CCharRenderGeometry, int>::~CUtlMemory(); // 562
		CUtlVectorBase<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::~CUtlVectorBase(); // 410
		CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::~CUtlVector(); // 1526
		Destruct<CUtlVector<CCharRenderGeometry> >(CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this); // 1798
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this); // 560
	ValidateAlignment<CUtlVector<CCharRenderGeometry> >(void); // 508
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRende this); // 489
	CUtlVectorFixedGrowableCompat<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, 2>::~CUtlVectorFixedGrowableCompat(); // 1991
} /* size: 511, variables: 2, inline expansions: 21 (838 bytes) */

// <00467174> utils/materialsystem2utils.cpp:1996
// variables: 4
// function calls: 35
void CMaterialSystem2Utils::RenderText(IRenderContext* pRenderContext, const uchar32* pText, const Vector2D& textPos, Color drawColor, FontHandle_t fontID, const CRenderAttributes* pAttributes, LayoutPositionType_e positionType)
{
	Vector2D pos; // 2004
	CUtlVectorFixedGrowableCompat<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, 2> renderGeometryLists; // 2013
	{
		RenderViewport_t viewport; // 2007
		RenderViewport_t::RenderViewport_t(); // 2007
	}
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 2004
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::CUtlMemory(
			CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 535
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this); // 538
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this,
			CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >* pMemory,
			int allocationCount,
			int initialCount,
			bool bGrowable);  // 420
	CUtlVector(const CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRende this,
			CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >* pMemory,
			int allocationCount,
			int initialCount,
			bool bGrowable);  // 495
	AlignedByteArrayExplicit_t<2, CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<2, CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> > >::AlignedByteArray_t(); // 495
	AlignedByteArrayExplicit_t<2, CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, 8>::Base(); // 497
	CUtlVectorFixedGrowableCompat<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, 2>::CUtlVectorFixedGrowableCompat(
					int growSize);  // 2013
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 2016
	{
		int i; // 1721
		CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this,
			int i);  // 1723
		CUtlVectorBase<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::RemoveAll(); // 1798
		CUtlMemory<CCharRenderGeometry, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CCharRenderGeometry, int>::Purge(); // 903
		CUtlMemory<CCharRenderGeometry, int>::Purge(); // 1799
		CUtlVectorBase<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::Purge(); // 560
		ValidateAlignment<CCharRenderGeometry>(void); // 508
		CUtlMemory<CCharRenderGeometry, int>::Purge(); // 510
		CUtlMemory<CCharRenderGeometry, int>::~CUtlMemory(); // 562
		CUtlVectorBase<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::~CUtlVectorBase(); // 410
		CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::~CUtlVector(); // 1526
		Destruct<CUtlVector<CCharRenderGeometry> >(CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this); // 1798
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this); // 560
	ValidateAlignment<CUtlVector<CCharRenderGeometry> >(void); // 508
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRende this); // 489
	CUtlVectorFixedGrowableCompat<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, 2>::~CUtlVectorFixedGrowableCompat(); // 2017
} /* size: 511, variables: 2, inline expansions: 21 (838 bytes) */

// <004A1599> utils/materialsystem2utils.cpp:2022
void CMaterialSystem2Utils::RenderText(IRenderContext* pRenderContext, CTextLayoutInfo* pTextLayoutInfo, const CRenderAttributes* pAttributes)
{
} /* size: 76 */

// <004661A5> utils/materialsystem2utils.cpp:2032
// variables: 9
// function calls: 56
void CMaterialSystem2Utils::Render2DLine(IRenderContext* pRenderContext, float x0, float y0, float x1, float y1, const Color& drawColor, const CRenderAttributes* pAttributes, LayoutPositionType_e positionType)
{
	RenderViewport_t viewport; // 2057
	int nPasses; // 2058
	matrix3x4_t renderToViewport; // 2066
	float flSubpixelOfs; // 2072
	float flXOfs; // 2073
	float flYOfs; // 2074
	CSysMemDynamicVertexData<VertexColorUVPos_t> vb; // 2076
	Vector newPos; // 2079
	{
		RenderViewport_t viewport; // 2047
		RenderViewport_t::RenderViewport_t(); // 2047
	}
	RenderViewport_t::RenderViewport_t(); // 2057
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 2058
	matrix3x4_t::matrix3x4_t(); // 2066
	CDynamicVertexData<VertexColorUVPos_t>::Lock(
		int nVertexCount);  // 680
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 180
	CVertexDataBase<VertexColorUVPos_t>::ClearVertexFields(); // 171
	Vector::Vector(); // 103
	VertexPos_t::VertexPos_t(); // 257
	Vector2D::Vector2D(); // 257
	VertexUVPos_t::VertexUVPos_t(); // 372
	VertexColor_t::VertexColor_t(); // 372
	VertexColorUVPos_t::VertexColorUVPos_t(); // 165
	CVertexDataBase<VertexColorUVPos_t>::CVertexDataBase(); // 673
	CDynamicVertexData<VertexColorUVPos_t>::CDynamicVertexData(
				IRenderContext* pRenderContext,
				int nVertexCount,
				const char* pDebugName,
				const char* pBudgetGroup);  // 814
	CSysMemDynamicVertexData<VertexColorUVPos_t>::SetCurrentVertex(); // 816
	CSysMemDynamicVertexData<VertexColorUVPos_t>::CSysMemDynamicVertexData(
				IRenderContext* pRenderContext,
				int nVertexCount,
				const char* pDebugName,
				const char* pBudgetGroup);  // 2076
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2068
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 647
	MatrixSetColumn(const Vector& in,
			MatrixAxisType_t nColumn,
			matrix3x4_t& out);  // 1211
	PositionMatrix(const Vector& position,
			matrix3x4_t& mat);  // 2068
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 2080
	Vector::Vector(); // 2079
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2080
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2081
	CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 2081
	Vector::operator=(
			const Vector& vOther);  // 2081
	CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 2082
	VertexColor_t::operator=(
			const Color& src);  // 2082
	CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 2083
	Vector2D::Init(
		vec_t ix,
		vec_t iy);  // 2083
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2086
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 2086
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2087
	CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 2087
	Vector::operator=(
			const Vector& vOther);  // 2087
	CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 2088
	VertexColor_t::operator=(
			const Color& src);  // 2088
	CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 2089
	Vector2D::Init(
		vec_t ix,
		vec_t iy);  // 2089
	CDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 760
	CDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 840
	CSysMemDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 851
	CDynamicVertexData<VertexColorUVPos_t>::Bind(
		int nSlot,
		int nOffset,
		int nStride);  // 846
	CSysMemDynamicVertexData<VertexColorUVPos_t>::Bind(
		int nSlot,
		int nOffset,
		int nStride);  // 852
	CSysMemDynamicVertexData<VertexColorUVPos_t>::UnlockAndBind(
			int nSlot,
			int nOffset,
			int nStride);  // 2092
	CDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 760
	CDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 710
	{
	}
	{
	}
	CVertexDataBase<VertexColorUVPos_t>::~CVertexDataBase(); // 194
	CVertexDataBase<VertexColorUVPos_t>::~CVertexDataBase(); // 711
	CDynamicVertexData<VertexColorUVPos_t>::~CDynamicVertexData(); // 808
	CSysMemDynamicVertexData<VertexColorUVPos_t>::~CSysMemDynamicVertexData(); // 2096
} /* size: 0, variables: 8, inline expansions: 55 (2370 bytes) */

// <0046521C> utils/materialsystem2utils.cpp:2102
// variables: 17
// function calls: 52
void CMaterialSystem2Utils::RenderLineBatch(IRenderContext* pRenderContext, const CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >* pLineList, const Color& drawColor, const CRenderAttributes* pAttributes, LayoutPositionType_e positionType)
{
	RenderViewport_t viewport; // 2112
	int nPasses; // 2113
	const char   __FUNCTION__; // 58034
	matrix3x4_t renderToViewport; // 2122
	float flSubpixelOfs; // 2128
	float flXOfs; // 2129
	float flYOfs; // 2130
	int nMaxVertCountPerPass; // 2132
	int nMaxIndexCountPerPass; // 2132
	int nBatchSize; // 2135
	const CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >& lineList; // 2143
	int nBatchStart; // 2145
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2118
	}
	{
		CSysMemDynamicVertexData<VertexColorUVPos_t> vb; // 2148
		{
			int i; // 2150
			{
				Vector pos; // 2152
				Vector newPos; // 2161
				{
				}
				{
				}
				{
				}
				CSysMemDynamicVertexData<VertexColorUVPos_t>::AdvanceVertex(); // 861
				CSysMemDynamicVertexData<VertexColorUVPos_t>::AdvanceVertex(); // 2166
				CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 2163
				CUtlMemory<Vector2D, int>::operator[](
						int i);  // 595
				CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::operator[](
						int i);  // 2152
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 2152
				Vector::Vector(); // 2161
				VectorTransform(const Vector& in1,
						const matrix3x4_t& in2,
						Vector& out);  // 2162
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 2163
				Vector::operator=(
						const Vector& vOther);  // 2163
				CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 2164
				VertexColor_t::operator=(
						const Color& src);  // 2164
				CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 2165
				Vector2D::Init(
					vec_t ix,
					vec_t iy);  // 2165
			}
		}
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 180
		CVertexDataBase<VertexColorUVPos_t>::ClearVertexFields(); // 171
		Vector::Vector(); // 103
		VertexPos_t::VertexPos_t(); // 257
		Vector2D::Vector2D(); // 257
		VertexUVPos_t::VertexUVPos_t(); // 372
		VertexColor_t::VertexColor_t(); // 372
		VertexColorUVPos_t::VertexColorUVPos_t(); // 165
		CVertexDataBase<VertexColorUVPos_t>::CVertexDataBase(); // 673
		CDynamicVertexData<VertexColorUVPos_t>::Lock(
			int nVertexCount);  // 680
		CDynamicVertexData<VertexColorUVPos_t>::CDynamicVertexData(
					IRenderContext* pRenderContext,
					int nVertexCount,
					const char* pDebugName,
					const char* pBudgetGroup);  // 814
		CSysMemDynamicVertexData<VertexColorUVPos_t>::SetCurrentVertex(); // 816
		CSysMemDynamicVertexData<VertexColorUVPos_t>::CSysMemDynamicVertexData(
					IRenderContext* pRenderContext,
					int nVertexCount,
					const char* pDebugName,
					const char* pBudgetGroup);  // 2148
		CDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 760
		CDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 840
		CSysMemDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 851
		CDynamicVertexData<VertexColorUVPos_t>::Bind(
			int nSlot,
			int nOffset,
			int nStride);  // 846
		CSysMemDynamicVertexData<VertexColorUVPos_t>::Bind(
			int nSlot,
			int nOffset,
			int nStride);  // 852
		CSysMemDynamicVertexData<VertexColorUVPos_t>::UnlockAndBind(
				int nSlot,
				int nOffset,
				int nStride);  // 2169
		CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Count(); // 2176
		{
		}
		{
		}
		CVertexDataBase<VertexColorUVPos_t>::~CVertexDataBase(); // 194
		CVertexDataBase<VertexColorUVPos_t>::~CVertexDataBase(); // 711
		CDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 710
		CDynamicVertexData<VertexColorUVPos_t>::~CDynamicVertexData(); // 808
		CSysMemDynamicVertexData<VertexColorUVPos_t>::~CSysMemDynamicVertexData(); // 2178
	}
	RenderViewport_t::RenderViewport_t(); // 2112
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 2113
	matrix3x4_t::matrix3x4_t(); // 2122
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2124
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 647
	MatrixSetColumn(const Vector& in,
			MatrixAxisType_t nColumn,
			matrix3x4_t& out);  // 1211
	PositionMatrix(const Vector& position,
			matrix3x4_t& mat);  // 2124
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Count(); // 2135
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Count(); // 2146
} /* size: 0, variables: 12, inline expansions: 12 (131 bytes) */

// <00464C5F> utils/materialsystem2utils.cpp:2184
// variables: 3
// function calls: 18
void CMaterialSystem2Utils::RenderRect(IRenderContext* pRenderContext, const Vector2D& rectPos, const Vector2D& rectSize, Color drawColor, const IMaterial2* pMaterial, const CRenderAttributes* pAttributes, HRenderTexture hTexture, LayoutPositionType_e positionType)
{
	Vector pRectPoints; // 2193
	Color rectColors; // 2199
	Vector2D uvs; // 2205
	Color::SetRawColor(
			int32 Color);  // 147
	Color::operator=(
			const Color& rhs);  // 2200
	Vector::operator=(
			const Vector& vOther);  // 2194
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2194
	Vector::operator=(
			const Vector& vOther);  // 2195
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2195
	Vector::operator=(
			const Vector& vOther);  // 2196
	Vector::operator=(
			const Vector& vOther);  // 2197
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2211
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2196
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2197
	Vector2D::operator=(
			const Vector2D& vOther);  // 2206
	Color::Color(); // 2199
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 2206
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 2207
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 2208
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 2209
} /* size: 299, variables: 3, inline expansions: 18 (161 bytes) */

// <00464669> utils/materialsystem2utils.cpp:2226
// variables: 3
// function calls: 18
void CMaterialSystem2Utils::RenderRect(IRenderContext* pRenderContext, const Vector2D& rectPos, const Vector2D& rectSize, const Vector2D& texMin, const Vector2D& texMax, Color drawColor, const IMaterial2* pMaterial, const CRenderAttributes* pAttributes, HRenderTexture hTexture, LayoutPositionType_e positionType)
{
	Vector pRectPoints; // 2237
	Color rectColors; // 2243
	Vector2D uvs; // 2249
	Color::SetRawColor(
			int32 Color);  // 147
	Color::operator=(
			const Color& rhs);  // 2244
	Vector::operator=(
			const Vector& vOther);  // 2238
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2238
	Vector::operator=(
			const Vector& vOther);  // 2241
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2239
	Vector::operator=(
			const Vector& vOther);  // 2239
	Vector::operator=(
			const Vector& vOther);  // 2240
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2240
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2241
	Vector2D::operator=(
			const Vector2D& vOther);  // 2250
	Color::Color(); // 2243
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 2250
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 2251
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 2252
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 2253
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2255
} /* size: 355, variables: 3, inline expansions: 18 (181 bytes) */

// <004644A2> utils/materialsystem2utils.cpp:2271
// function calls: 2
void CMaterialSystem2Utils::RenderRect(IRenderContext* pRenderContext, const Vector* pRectPoints, const Color* pRectColors, const Vector2D* pUVs, const IMaterial2* pMaterial, const CRenderAttributes* pAttributes, HRenderTexture hTexture, LayoutPositionType_e positionType)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2280
} /* size: 171, inline expansions: 2 (46 bytes) */

// <00462D26> utils/materialsystem2utils.cpp:2296
// variables: 16
// function calls: 80
void CMaterialSystem2Utils::RenderOutlinedRect(IRenderContext* pRenderContext, const Vector2D& rectPos, const Vector2D& rectSize, float flThickness, Color drawColor, const IMaterial2* pMaterial, const CRenderAttributes* pAttributes, HRenderTexture hTexture, LayoutPositionType_e positionType)
{
	RenderViewport_t viewport; // 2306
	int nPasses; // 2307
	matrix3x4_t renderToViewport; // 2313
	float flSubpixelOfs; // 2318
	float flXOfs; // 2319
	float flYOfs; // 2320
	Vector2D points; // 2322
	float flThickFractionU; // 2336
	float flThickFractionV; // 2337
	Vector2D uvs; // 2338
	CSysMemDynamicVertexData<VertexColorUVPos_t> vb; // 2351
	int nTri; // 2373
	CDynamicIndexData<short unsigned int> ib; // 2374
	{
		int i; // 2352
		{
			Vector pos; // 2354
			Vector newPos; // 2362
			{
			}
			{
			}
			{
			}
			CSysMemDynamicVertexData<VertexColorUVPos_t>::AdvanceVertex(); // 861
			CSysMemDynamicVertexData<VertexColorUVPos_t>::AdvanceVertex(); // 2368
			CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 2365
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 2354
			Vector::Vector(); // 2362
			VectorTransform(const Vector& in1,
					const matrix3x4_t& in2,
					Vector& out);  // 2363
			Vector::Init(
				vec_t ix,
				vec_t iy,
				vec_t iz);  // 2365
			VertexColor_t::operator=(
					const Color& src);  // 2366
			CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 2366
			CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 2367
			Vector2D::operator=(
					const Vector2D& vOther);  // 2367
		}
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2307
	RenderViewport_t::RenderViewport_t(); // 2306
	matrix3x4_t::matrix3x4_t(); // 2313
	CDynamicVertexData<VertexColorUVPos_t>::Lock(
		int nVertexCount);  // 680
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 180
	CVertexDataBase<VertexColorUVPos_t>::ClearVertexFields(); // 171
	Vector::Vector(); // 103
	VertexPos_t::VertexPos_t(); // 257
	Vector2D::Vector2D(); // 257
	VertexUVPos_t::VertexUVPos_t(); // 372
	VertexColor_t::VertexColor_t(); // 372
	VertexColorUVPos_t::VertexColorUVPos_t(); // 165
	CVertexDataBase<VertexColorUVPos_t>::CVertexDataBase(); // 673
	CDynamicVertexData<VertexColorUVPos_t>::CDynamicVertexData(
				IRenderContext* pRenderContext,
				int nVertexCount,
				const char* pDebugName,
				const char* pBudgetGroup);  // 814
	CSysMemDynamicVertexData<VertexColorUVPos_t>::SetCurrentVertex(); // 816
	CSysMemDynamicVertexData<VertexColorUVPos_t>::CSysMemDynamicVertexData(
				IRenderContext* pRenderContext,
				int nVertexCount,
				const char* pDebugName,
				const char* pBudgetGroup);  // 2351
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2315
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 647
	MatrixSetColumn(const Vector& in,
			MatrixAxisType_t nColumn,
			matrix3x4_t& out);  // 1211
	PositionMatrix(const Vector& position,
			matrix3x4_t& mat);  // 2315
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 2349
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 2349
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 2335
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 2335
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 2349
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 2335
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 2335
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 2335
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 2335
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 2335
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 2335
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 2349
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 2349
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 2349
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 2349
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 2349
	CDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 760
	CDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 840
	CSysMemDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 851
	CDynamicVertexData<VertexColorUVPos_t>::Bind(
		int nSlot,
		int nOffset,
		int nStride);  // 846
	CSysMemDynamicVertexData<VertexColorUVPos_t>::Bind(
		int nSlot,
		int nOffset,
		int nStride);  // 852
	CSysMemDynamicVertexData<VertexColorUVPos_t>::UnlockAndBind(
			int nSlot,
			int nOffset,
			int nStride);  // 2371
	CDynamicIndexData<short unsigned int>::Lock(
		int nIndexCount);  // 580
	CIndexDataBase<short unsigned int>::ClearIndexFields(); // 89
	CIndexDataBase<short unsigned int>::CIndexDataBase(); // 573
	CDynamicIndexData<short unsigned int>::CDynamicIndexData(
				IRenderContext* pRenderContext,
				int nIndexCount,
				const char* pDebugName,
				const char* pBudgetGroup);  // 2374
	CIndexDataBase<short unsigned int>::Index(
		short unsigned int nIndex);  // 206
	CIndexDataBase<short unsigned int>::Index3(
		short unsigned int nIndex0,
		short unsigned int nIndex1,
		short unsigned int nIndex2);  // 2375
	CIndexDataBase<short unsigned int>::Index(
		short unsigned int nIndex);  // 207
	CIndexDataBase<short unsigned int>::Index3(
		short unsigned int nIndex0,
		short unsigned int nIndex1,
		short unsigned int nIndex2);  // 2380
	CIndexDataBase<short unsigned int>::Index(
		short unsigned int nIndex);  // 208
	CIndexDataBase<short unsigned int>::Index3(
		short unsigned int nIndex0,
		short unsigned int nIndex1,
		short unsigned int nIndex2);  // 2381
	CIndexDataBase<short unsigned int>::Index(
		short unsigned int nIndex);  // 208
	CIndexDataBase<short unsigned int>::Index3(
		short unsigned int nIndex0,
		short unsigned int nIndex1,
		short unsigned int nIndex2);  // 2382
	CDynamicIndexData<short unsigned int>::Unlock(); // 658
	CDynamicIndexData<short unsigned int>::Unlock(); // 540
	CDynamicIndexData<short unsigned int>::Bind(
		int nOffset);  // 541
	CDynamicIndexData<short unsigned int>::UnlockAndBind(
			int nBindOffset);  // 2383
	CDynamicIndexData<short unsigned int>::Unlock(); // 607
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 608
	CDynamicIndexData<short unsigned int>::~CDynamicIndexData(); // 2386
	CDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 760
	CDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 710
	{
	}
	{
	}
	CVertexDataBase<VertexColorUVPos_t>::~CVertexDataBase(); // 194
	CVertexDataBase<VertexColorUVPos_t>::~CVertexDataBase(); // 711
	CDynamicVertexData<VertexColorUVPos_t>::~CDynamicVertexData(); // 808
	CSysMemDynamicVertexData<VertexColorUVPos_t>::~CSysMemDynamicVertexData(); // 2386
} /* size: 0, variables: 13, inline expansions: 69 (2588 bytes) */

// <0046282C> utils/materialsystem2utils.cpp:2394
// variables: 2
// function calls: 13
void DrawMeshVertexBuffer(IRenderContext* pCtx, const MeshBuilderBuffers_t* pMesh, int nOffsetFromVertexBufferStart, int nNumVertsToRender)
{
	CRawDynamicVertexData vb; // 2399
	RenderPrimitiveType_t renderPrimType; // 2409
	CRawDynamicVertexData::Lock(
		int nVertexCount);  // 1037
	CRawDynamicVertexData::CRawDynamicVertexData(
				IRenderContext* pRenderContext,
				int nElementCount,
				int nElementSizeInBytes,
				const char* pDebugName,
				const char* pBudgetGroupName);  // 2399
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 989
	CRawDynamicVertexData::CopyAndAdvance(
			const void* pData,
			int nNumVerts);  // 2406
	CRawDynamicVertexData::Unlock(); // 1080
	CRawDynamicVertexData::Unlock(); // 1000
	CRawDynamicVertexData::Bind(
		int nSlot,
		int nOffset);  // 1001
	CRawDynamicVertexData::UnlockAndBind(
			int nSlot,
			int nOffset);  // 2407
	{
	}
	MaterialPrimTypeToRenderPrimType(MaterialPrimitiveType2_t type); // 2409
	CRawDynamicVertexData::Unlock(); // 1080
	CRawDynamicVertexData::Unlock(); // 1042
	CRawDynamicVertexData::~CRawDynamicVertexData(); // 2411
} /* size: 0, variables: 2, inline expansions: 13 (558 bytes) */

// <00461662> utils/materialsystem2utils.cpp:2413
// variables: 9
// function calls: 58
void CMaterialSystem2Utils::RenderMeshWithMode(IRenderContext* pRenderContext, const MeshBuilderBuffers_t* pMesh, const IMaterialMode* pMode, const CRenderAttributes* pAttributes, HRenderTexture hTexture, LayoutPositionType_e positionType)
{
	const char   __FUNCTION__; // 58115
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2422
	}
	{
		CRenderAttributes defaultAttrs; // 2469
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 693
		IRenderContext::ResetMaterialStateHint(); // 2481
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2472
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
				int32 nSingleMipLevelToBind);  // 2472
		CStrongHandle<InfoForResourceTypeIMaterial2>::GetData(); // 2449
		CUtlStringToken::CUtlStringToken(); // 2451
	}
	{
		int nMaxVertsPerLock; // 2486
		int nCurVertexCount; // 2494
		int nOffset; // 2495
	}
	{
		CRawDynamicVertexData vb; // 2510
		CDynamicIndexData<short unsigned int> ib; // 2520
		RenderPrimitiveType_t renderPrimType; // 2541
		CRawDynamicVertexData::Lock(
			int nVertexCount);  // 1037
		CRawDynamicVertexData::CRawDynamicVertexData(
					IRenderContext* pRenderContext,
					int nElementCount,
					int nElementSizeInBytes,
					const char* pDebugName,
					const char* pBudgetGroupName);  // 2510
		CRawDynamicVertexData::Unlock(); // 1080
		CRawDynamicVertexData::Unlock(); // 1042
		CRawDynamicVertexData::~CRawDynamicVertexData(); // 2543
		CDynamicIndexData<short unsigned int>::Unlock(); // 658
		CDynamicIndexData<short unsigned int>::Unlock(); // 607
		CDynamicIndexData<short unsigned int>::~CDynamicIndexData(); // 2543
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 989
		CRawDynamicVertexData::CopyAndAdvance(
				const void* pData,
				int nNumVerts);  // 2517
		CRawDynamicVertexData::Unlock(); // 1080
		CRawDynamicVertexData::Unlock(); // 1000
		CRawDynamicVertexData::Bind(
			int nSlot,
			int nOffset);  // 1001
		CRawDynamicVertexData::UnlockAndBind(
				int nSlot,
				int nOffset);  // 2518
		CIndexDataBase<short unsigned int>::ClearIndexFields(); // 89
		CIndexDataBase<short unsigned int>::CIndexDataBase(); // 573
		CDynamicIndexData<short unsigned int>::Lock(
			int nIndexCount);  // 580
		CDynamicIndexData<short unsigned int>::CDynamicIndexData(
					IRenderContext* pRenderContext,
					int nIndexCount,
					const char* pDebugName,
					const char* pBudgetGroup);  // 2520
		CDynamicIndexData<short unsigned int>::Unlock(); // 658
		CDynamicIndexData<short unsigned int>::Unlock(); // 2535
		{
		}
		MaterialPrimTypeToRenderPrimType(MaterialPrimitiveType2_t type); // 2541
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 2529
		{
		}
		CIndexDataBase<short unsigned int>::AdvanceIndexCount(
					int nNumIndices);  // 2530
		CDynamicIndexData<short unsigned int>::Unlock(); // 658
		CDynamicIndexData<short unsigned int>::Unlock(); // 540
		CDynamicIndexData<short unsigned int>::Bind(
			int nOffset);  // 541
		CDynamicIndexData<short unsigned int>::UnlockAndBind(
				int nBindOffset);  // 2531
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2440
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 126
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 837
	CMaterialSystem2Utils::SetDefaultMaterial(
				IRenderContext* pCtx,
				bool bForce);  // 134
	IMaterialSystem2Utils::SetMaterialModeOrTexture(
				IRenderContext* pCtx,
				const IMaterialMode* pMode,
				const CRenderAttributes* pAttributes,
				uint64 nKey,
				HRenderTexture hTexture,
				bool bForce);  // 122
	IMaterialSystem2Utils::SetMaterialModeOrTexture(
				IRenderContext* pCtx,
				const IMaterialMode* pMode,
				const CRenderAttributes* pAttributes,
				uint64 nKey,
				HRenderTexture hTexture,
				bool bForce);  // 2440
} /* size: 0, variables: 1, inline expansions: 11 (362 bytes) */

// <00461486> utils/materialsystem2utils.cpp:2549
// function calls: 2
void CMaterialSystem2Utils::RenderQuads(IRenderContext* pRenderContext, const Vector* pPoints, const Color* pColors, const Vector2D* pUVs, int nNumPoints, const IMaterial2* pMaterial, const CRenderAttributes* pAttributes, HRenderTexture hTexture, LayoutPositionType_e positionType)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2559
} /* size: 187, inline expansions: 2 (46 bytes) */

// <004612AA> utils/materialsystem2utils.cpp:2571
// function calls: 2
void CMaterialSystem2Utils::RenderConvexGeometry(IRenderContext* pRenderContext, const Vector* pPoints, const Color* pColors, const Vector2D* pUVs, int nNumPoints, const IMaterial2* pMaterial, const CRenderAttributes* pAttributes, HRenderTexture hTexture, LayoutPositionType_e positionType)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2581
} /* size: 187, inline expansions: 2 (46 bytes) */

// <0045F858> utils/materialsystem2utils.cpp:2596
// variables: 28
// function calls: 80
void CMaterialSystem2Utils::RenderPrimitives(IRenderContext* pRenderContext, MaterialPrimitiveType2_t primType, const Vector* pPoints, const Color* pColors, const Vector2D* pUVs, int nNumPoints, const IMaterial2* pMaterial, const CRenderAttributes* pAttributes, HRenderTexture hTexture, LayoutPositionType_e positionType)
{
	RenderViewport_t viewport; // 2607
	int nPasses; // 2608
	matrix3x4_t renderToViewport; // 2614
	float flSubpixelOfs; // 2619
	float flXOfs; // 2620
	float flYOfs; // 2621
	int nMaxVertCountPerPass; // 2623
	int nMaxIndexCountPerPass; // 2623
	RenderPrimitiveType_t renderPrimType; // 2626
	int nCheckIndices; // 2627
	const char   __FUNCTION__; // 58061
	int nBatchStart; // 2659
	{
		int __executeCount; // 2648
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2648
		}
	}
	{
		int nBatchPoints; // 2663
		int nBatchElts; // 2669
		int nBatchIndices; // 2670
		CSysMemDynamicVertexData<VertexColorUVPos_t> vb; // 2690
		CDynamicIndexData<short unsigned int> ib; // 2720
		uint16 nBase; // 2727
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2688
		}
		{
			int i; // 2697
			{
				int nPointIndex; // 2699
				Vector pos; // 2701
				Vector newPos; // 2709
				{
				}
				{
				}
				{
				}
				CSysMemDynamicVertexData<VertexColorUVPos_t>::AdvanceVertex(); // 861
				CSysMemDynamicVertexData<VertexColorUVPos_t>::AdvanceVertex(); // 2715
				CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 2712
				Vector::Vector(); // 2709
				VectorTransform(const Vector& in1,
						const matrix3x4_t& in2,
						Vector& out);  // 2710
				Vector::Init(
					vec_t ix,
					vec_t iy,
					vec_t iz);  // 2712
				CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 2713
				VertexColor_t::operator=(
						const Color& src);  // 2713
				CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 2714
				Vector2D::operator=(
						const Vector2D& vOther);  // 2714
			}
		}
		{
			int i; // 2731
			{
			}
			CIndexDataBase<short unsigned int>::Index(
				short unsigned int nIndex);  // 206
			{
			}
			CIndexDataBase<short unsigned int>::Index(
				short unsigned int nIndex);  // 207
			{
			}
			CIndexDataBase<short unsigned int>::Index(
				short unsigned int nIndex);  // 208
			CIndexDataBase<short unsigned int>::Index3(
				short unsigned int nIndex0,
				short unsigned int nIndex1,
				short unsigned int nIndex2);  // 2733
			{
			}
			CIndexDataBase<short unsigned int>::Index(
				short unsigned int nIndex);  // 206
			{
			}
			CIndexDataBase<short unsigned int>::Index(
				short unsigned int nIndex);  // 207
			{
			}
			CIndexDataBase<short unsigned int>::Index(
				short unsigned int nIndex);  // 208
			CIndexDataBase<short unsigned int>::Index3(
				short unsigned int nIndex0,
				short unsigned int nIndex1,
				short unsigned int nIndex2);  // 2734
		}
		{
			int i; // 2740
			{
			}
			CIndexDataBase<short unsigned int>::Index(
				short unsigned int nIndex);  // 206
			{
			}
			CIndexDataBase<short unsigned int>::Index(
				short unsigned int nIndex);  // 207
			{
			}
			CIndexDataBase<short unsigned int>::Index(
				short unsigned int nIndex);  // 208
			CIndexDataBase<short unsigned int>::Index3(
				short unsigned int nIndex0,
				short unsigned int nIndex1,
				short unsigned int nIndex2);  // 2742
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2752
		}
		Vector::Vector(); // 103
		VertexPos_t::VertexPos_t(); // 257
		Vector2D::Vector2D(); // 257
		VertexUVPos_t::VertexUVPos_t(); // 372
		VertexColor_t::VertexColor_t(); // 372
		VertexColorUVPos_t::VertexColorUVPos_t(); // 165
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 180
		CVertexDataBase<VertexColorUVPos_t>::ClearVertexFields(); // 171
		CVertexDataBase<VertexColorUVPos_t>::CVertexDataBase(); // 673
		CDynamicVertexData<VertexColorUVPos_t>::Lock(
			int nVertexCount);  // 680
		CDynamicVertexData<VertexColorUVPos_t>::CDynamicVertexData(
					IRenderContext* pRenderContext,
					int nVertexCount,
					const char* pDebugName,
					const char* pBudgetGroup);  // 814
		CSysMemDynamicVertexData<VertexColorUVPos_t>::SetCurrentVertex(); // 816
		CSysMemDynamicVertexData<VertexColorUVPos_t>::CSysMemDynamicVertexData(
					IRenderContext* pRenderContext,
					int nVertexCount,
					const char* pDebugName,
					const char* pBudgetGroup);  // 2690
		CDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 760
		CDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 840
		CSysMemDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 851
		CDynamicVertexData<VertexColorUVPos_t>::Bind(
			int nSlot,
			int nOffset,
			int nStride);  // 846
		CSysMemDynamicVertexData<VertexColorUVPos_t>::Bind(
			int nSlot,
			int nOffset,
			int nStride);  // 852
		CSysMemDynamicVertexData<VertexColorUVPos_t>::UnlockAndBind(
				int nSlot,
				int nOffset,
				int nStride);  // 2718
		CDynamicIndexData<short unsigned int>::Lock(
			int nIndexCount);  // 580
		CIndexDataBase<short unsigned int>::ClearIndexFields(); // 89
		CIndexDataBase<short unsigned int>::CIndexDataBase(); // 573
		CDynamicIndexData<short unsigned int>::CDynamicIndexData(
					IRenderContext* pRenderContext,
					int nIndexCount,
					const char* pDebugName,
					const char* pBudgetGroup);  // 2720
		CDynamicIndexData<short unsigned int>::Unlock(); // 658
		CDynamicIndexData<short unsigned int>::Unlock(); // 540
		CDynamicIndexData<short unsigned int>::Bind(
			int nOffset);  // 541
		CDynamicIndexData<short unsigned int>::UnlockAndBind(
				int nBindOffset);  // 2747
		CDynamicIndexData<short unsigned int>::Unlock(); // 607
		CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 608
		CDynamicIndexData<short unsigned int>::~CDynamicIndexData(); // 2720
		CDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 760
		CDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 710
		{
		}
		{
		}
		CVertexDataBase<VertexColorUVPos_t>::~CVertexDataBase(); // 194
		CVertexDataBase<VertexColorUVPos_t>::~CVertexDataBase(); // 711
		CDynamicVertexData<VertexColorUVPos_t>::~CDynamicVertexData(); // 808
		CSysMemDynamicVertexData<VertexColorUVPos_t>::~CSysMemDynamicVertexData(); // 2690
		CDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 760
		CDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 710
		{
		}
		{
		}
		CVertexDataBase<VertexColorUVPos_t>::~CVertexDataBase(); // 194
		CVertexDataBase<VertexColorUVPos_t>::~CVertexDataBase(); // 711
		CDynamicVertexData<VertexColorUVPos_t>::~CDynamicVertexData(); // 808
		CSysMemDynamicVertexData<VertexColorUVPos_t>::~CSysMemDynamicVertexData(); // 2694
		CDynamicIndexData<short unsigned int>::Unlock(); // 658
		CDynamicIndexData<short unsigned int>::Unlock(); // 607
		CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 608
		CDynamicIndexData<short unsigned int>::~CDynamicIndexData(); // 2724
		CDynamicIndexData<short unsigned int>::Unlock(); // 607
		CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 608
		CDynamicIndexData<short unsigned int>::~CDynamicIndexData(); // 605
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2608
	RenderViewport_t::RenderViewport_t(); // 2607
	matrix3x4_t::matrix3x4_t(); // 2614
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2616
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 647
	MatrixSetColumn(const Vector& in,
			MatrixAxisType_t nColumn,
			matrix3x4_t& out);  // 1211
	PositionMatrix(const Vector& position,
			matrix3x4_t& mat);  // 2616
} /* size: 0, variables: 12, inline expansions: 8 (106 bytes) */

// <0045E2FD> utils/materialsystem2utils.cpp:2766
// variables: 2
// function calls: 94
void CMaterialSystem2Utils::QueueRenderText(CUtlStringToken viewportName, const char* pText, const Vector2D& textPos, Color drawColor, FontHandle_t fontID, const CRenderAttributes* pAttributes, LayoutPositionType_e positionType, float flTimeToLive)
{
	CQueuedTextRenderable* pRenderable; // 2775
	ViewportLayoutList_t& infoList; // 2778
	IQueuedRenderable::IQueuedRenderable(); // 32
	CBaseQueuedRenderable::CBaseQueuedRenderable(
				float64 flTimeToLive);  // 215
	CStrAutoEncode::Set(
		const char* pch);  // 479
	CStrAutoEncode::CStrAutoEncode(
			const char* pch);  // 204
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 205
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 211
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 212
	matrix3x4_t::matrix3x4_t(); // 216
	CTextLayoutInfo::CTextLayoutInfo(); // 215
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
	CRenderAttributes::CRenderAttributes(); // 215
	CQueuedTextRenderable::CQueuedTextRenderable(
				float64 flTimeToLive);  // 2775
	CTextLayoutInfo::SetText(
		const char* pText);  // 230
	Vector2D::operator=(
			const Vector2D& vOther);  // 231
	CaptureAttributes(const CRenderAttributes* pAttributesIn,
				CRenderAttributes* pAttributesStore,
				bool bCopy);  // 79
	CaptureAttributes(const CRenderAttributes* pAttributesIn,
				CRenderAttributes* pAttributesStore,
				bool bCopy);  // 235
	Color::SetRawColor(
			int32 Color);  // 147
	Color::operator=(
			const Color& rhs);  // 232
	CQueuedTextRenderable::Init<char>(
			const char* pText,
			const Vector2D& textPos,
			Color drawColor,
			FontHandle_t fontID,
			const CRenderAttributes* pAttributes,
			LayoutPositionType_e positionType);  // 2776
	CUtlMemory<IQueuedRenderable::NumAllocated(); // 1247
	CUtlMemory<IQueuedRenderable::operator[](
			int i);  // 602
	CUtlVectorBase<IQueuedRenderable::Element(
		int i);  // 1252
	Construct<IQueuedRenderable*, IQueuedRenderable*>(IQueuedRenderable** pMemory); // 1252
	CUtlMemory<IQueuedRenderable::Base(); // 112
	CUtlVectorBase<IQueuedRenderable::Base(); // 368
	CUtlVectorBase<IQueuedRenderable::ResetDbgInfo(); // 824
	CUtlVectorBase<IQueuedRenderable::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<IQueuedRenderable::AddToTail(
			IQueuedRenderable *& src);  // 2779
	CMaterialSystem2Utils::CacheFontTextures(
				const CTextLayoutInfo* pTextLayoutInfo);  // 2782
} /* size: 980, variables: 2, inline expansions: 94 (2850 bytes) */

// <0045CDFD> utils/materialsystem2utils.cpp:2788
// variables: 2
// function calls: 93
void CMaterialSystem2Utils::QueueRenderText(CUtlStringToken viewportName, const uchar16* pText, const Vector2D& textPos, Color drawColor, FontHandle_t fontID, const CRenderAttributes* pAttributes, LayoutPositionType_e positionType, float flTimeToLive)
{
	CQueuedTextRenderable* pRenderable; // 2797
	ViewportLayoutList_t& infoList; // 2800
	IQueuedRenderable::IQueuedRenderable(); // 32
	CBaseQueuedRenderable::CBaseQueuedRenderable(
				float64 flTimeToLive);  // 215
	CStrAutoEncode::Set(
		const char* pch);  // 479
	CStrAutoEncode::CStrAutoEncode(
			const char* pch);  // 204
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 205
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 211
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 212
	matrix3x4_t::matrix3x4_t(); // 216
	CTextLayoutInfo::CTextLayoutInfo(); // 215
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
	CRenderAttributes::CRenderAttributes(); // 215
	CQueuedTextRenderable::CQueuedTextRenderable(
				float64 flTimeToLive);  // 2797
	CTextLayoutInfo::SetText(
		const uchar16* pText);  // 230
	Vector2D::operator=(
			const Vector2D& vOther);  // 231
	CaptureAttributes(const CRenderAttributes* pAttributesIn,
				CRenderAttributes* pAttributesStore,
				bool bCopy);  // 79
	CaptureAttributes(const CRenderAttributes* pAttributesIn,
				CRenderAttributes* pAttributesStore,
				bool bCopy);  // 235
	Color::SetRawColor(
			int32 Color);  // 147
	Color::operator=(
			const Color& rhs);  // 232
	CQueuedTextRenderable::Init<short unsigned int>(
				const short unsigned int* pText,
				const Vector2D& textPos,
				Color drawColor,
				FontHandle_t fontID,
				const CRenderAttributes* pAttributes,
				LayoutPositionType_e positionType);  // 2798
	CUtlMemory<IQueuedRenderable::NumAllocated(); // 1247
	CUtlMemory<IQueuedRenderable::operator[](
			int i);  // 602
	CUtlVectorBase<IQueuedRenderable::Element(
		int i);  // 1252
	Construct<IQueuedRenderable*, IQueuedRenderable*>(IQueuedRenderable** pMemory); // 1252
	CUtlMemory<IQueuedRenderable::Base(); // 112
	CUtlVectorBase<IQueuedRenderable::Base(); // 368
	CUtlVectorBase<IQueuedRenderable::ResetDbgInfo(); // 824
	CUtlVectorBase<IQueuedRenderable::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<IQueuedRenderable::AddToTail(
			IQueuedRenderable *& src);  // 2801
} /* size: 924, variables: 2, inline expansions: 93 (2808 bytes) */

// <0045B8FD> utils/materialsystem2utils.cpp:2810
// variables: 2
// function calls: 93
void CMaterialSystem2Utils::QueueRenderText(CUtlStringToken viewportName, const uchar32* pText, const Vector2D& textPos, Color drawColor, FontHandle_t fontID, const CRenderAttributes* pAttributes, LayoutPositionType_e positionType, float flTimeToLive)
{
	CQueuedTextRenderable* pRenderable; // 2819
	ViewportLayoutList_t& infoList; // 2822
	IQueuedRenderable::IQueuedRenderable(); // 32
	CBaseQueuedRenderable::CBaseQueuedRenderable(
				float64 flTimeToLive);  // 215
	CStrAutoEncode::Set(
		const char* pch);  // 479
	CStrAutoEncode::CStrAutoEncode(
			const char* pch);  // 204
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 205
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 211
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 212
	matrix3x4_t::matrix3x4_t(); // 216
	CTextLayoutInfo::CTextLayoutInfo(); // 215
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
	CRenderAttributes::CRenderAttributes(); // 215
	CQueuedTextRenderable::CQueuedTextRenderable(
				float64 flTimeToLive);  // 2819
	CTextLayoutInfo::SetText(
		const uchar32* pText);  // 230
	Vector2D::operator=(
			const Vector2D& vOther);  // 231
	CaptureAttributes(const CRenderAttributes* pAttributesIn,
				CRenderAttributes* pAttributesStore,
				bool bCopy);  // 79
	CaptureAttributes(const CRenderAttributes* pAttributesIn,
				CRenderAttributes* pAttributesStore,
				bool bCopy);  // 235
	Color::SetRawColor(
			int32 Color);  // 147
	Color::operator=(
			const Color& rhs);  // 232
	CQueuedTextRenderable::Init<wchar_t>(
			const wchar_t* pText,
			const Vector2D& textPos,
			Color drawColor,
			FontHandle_t fontID,
			const CRenderAttributes* pAttributes,
			LayoutPositionType_e positionType);  // 2820
	CUtlMemory<IQueuedRenderable::NumAllocated(); // 1247
	CUtlMemory<IQueuedRenderable::operator[](
			int i);  // 602
	CUtlVectorBase<IQueuedRenderable::Element(
		int i);  // 1252
	Construct<IQueuedRenderable*, IQueuedRenderable*>(IQueuedRenderable** pMemory); // 1252
	CUtlMemory<IQueuedRenderable::Base(); // 112
	CUtlVectorBase<IQueuedRenderable::Base(); // 368
	CUtlVectorBase<IQueuedRenderable::ResetDbgInfo(); // 824
	CUtlVectorBase<IQueuedRenderable::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<IQueuedRenderable::AddToTail(
			IQueuedRenderable *& src);  // 2823
} /* size: 924, variables: 2, inline expansions: 93 (2808 bytes) */

// <0045A445> utils/materialsystem2utils.cpp:2833
// variables: 2
// function calls: 94
void CMaterialSystem2Utils::QueueRenderText(CUtlStringToken viewportName, const CTextLayoutInfo& info, const CRenderAttributes* pAttributes, float flTimeToLive)
{
	CQueuedTextRenderable* pRenderable; // 2838
	ViewportLayoutList_t& infoList; // 2841
	IQueuedRenderable::IQueuedRenderable(); // 32
	CBaseQueuedRenderable::CBaseQueuedRenderable(
				float64 flTimeToLive);  // 215
	CStrAutoEncode::Set(
		const char* pch);  // 479
	CStrAutoEncode::CStrAutoEncode(
			const char* pch);  // 204
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 205
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 211
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 212
	matrix3x4_t::matrix3x4_t(); // 216
	CTextLayoutInfo::CTextLayoutInfo(); // 215
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
	CRenderAttributes::CRenderAttributes(); // 215
	CQueuedTextRenderable::CQueuedTextRenderable(
				float64 flTimeToLive);  // 2838
	Vector2D::operator=(
			const Vector2D& vOther);  // 251
	Color::GetRawColor(); // 147
	Color::SetRawColor(
			int32 Color);  // 147
	Color::operator=(
			const Color& rhs);  // 257
	CTextLayoutInfo::operator=(
			const CTextLayoutInfo& info);  // 242
	CaptureAttributes(const CRenderAttributes* pAttributesIn,
				CRenderAttributes* pAttributesStore,
				bool bCopy);  // 79
	CaptureAttributes(const CRenderAttributes* pAttributesIn,
				CRenderAttributes* pAttributesStore,
				bool bCopy);  // 243
	CQueuedTextRenderable::Init(
		const CTextLayoutInfo& info,
		const CRenderAttributes* pAttributes);  // 2839
	CUtlMemory<IQueuedRenderable::NumAllocated(); // 1247
	CUtlMemory<IQueuedRenderable::operator[](
			int i);  // 602
	CUtlVectorBase<IQueuedRenderable::Element(
		int i);  // 1252
	Construct<IQueuedRenderable*, IQueuedRenderable*>(IQueuedRenderable** pMemory); // 1252
	CUtlMemory<IQueuedRenderable::Base(); // 112
	CUtlVectorBase<IQueuedRenderable::Base(); // 368
	CUtlVectorBase<IQueuedRenderable::ResetDbgInfo(); // 824
	CUtlVectorBase<IQueuedRenderable::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<IQueuedRenderable::AddToTail(
			IQueuedRenderable *& src);  // 2842
} /* size: 956, variables: 2, inline expansions: 94 (2907 bytes) */

// <00458F08> utils/materialsystem2utils.cpp:2853
// variables: 2
// function calls: 95
void CMaterialSystem2Utils::QueueRenderText(Vector2D* pOutEndPosition, CUtlStringToken viewportName, CTextLayoutInfo& info, const CRenderAttributes* pAttributes, float flTimeToLive)
{
	CQueuedTextRenderable* pRenderable; // 2859
	ViewportLayoutList_t& infoList; // 2862
	IQueuedRenderable::IQueuedRenderable(); // 32
	CBaseQueuedRenderable::CBaseQueuedRenderable(
				float64 flTimeToLive);  // 215
	CStrAutoEncode::Set(
		const char* pch);  // 479
	CStrAutoEncode::CStrAutoEncode(
			const char* pch);  // 204
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 205
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 211
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 212
	matrix3x4_t::matrix3x4_t(); // 216
	CTextLayoutInfo::CTextLayoutInfo(); // 215
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
	CRenderAttributes::CRenderAttributes(); // 215
	CQueuedTextRenderable::CQueuedTextRenderable(
				float64 flTimeToLive);  // 2859
	Vector2D::operator=(
			const Vector2D& vOther);  // 251
	Color::GetRawColor(); // 147
	Color::SetRawColor(
			int32 Color);  // 147
	Color::operator=(
			const Color& rhs);  // 257
	CTextLayoutInfo::operator=(
			const CTextLayoutInfo& info);  // 242
	CaptureAttributes(const CRenderAttributes* pAttributesIn,
				CRenderAttributes* pAttributesStore,
				bool bCopy);  // 79
	CaptureAttributes(const CRenderAttributes* pAttributesIn,
				CRenderAttributes* pAttributesStore,
				bool bCopy);  // 243
	CQueuedTextRenderable::Init(
		const CTextLayoutInfo& info,
		const CRenderAttributes* pAttributes);  // 2860
	CUtlMemory<IQueuedRenderable::NumAllocated(); // 1247
	CUtlMemory<IQueuedRenderable::operator[](
			int i);  // 602
	CUtlVectorBase<IQueuedRenderable::Element(
		int i);  // 1252
	Construct<IQueuedRenderable*, IQueuedRenderable*>(IQueuedRenderable** pMemory); // 1252
	CUtlMemory<IQueuedRenderable::Base(); // 112
	CUtlVectorBase<IQueuedRenderable::Base(); // 368
	CUtlVectorBase<IQueuedRenderable::ResetDbgInfo(); // 824
	CUtlVectorBase<IQueuedRenderable::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<IQueuedRenderable::AddToTail(
			IQueuedRenderable *& src);  // 2863
	Vector2D::operator=(
			const Vector2D& vOther);  // 2865
} /* size: 1041, variables: 2, inline expansions: 95 (2979 bytes) */

// <00457AE0> utils/materialsystem2utils.cpp:2872
// variables: 2
// function calls: 92
void CMaterialSystem2Utils::QueueRender2DLine(CUtlStringToken viewportName, float x0, float y0, float x1, float y1, const Color& drawColor, const CRenderAttributes* pAttributes, LayoutPositionType_e positionType, float flTimeToLive)
{
	CLineLayoutInfo* pRenderable; // 2886
	ViewportLayoutList_t& infoList; // 2889
	IQueuedRenderable::IQueuedRenderable(); // 32
	CBaseQueuedRenderable::CBaseQueuedRenderable(
				float64 flTimeToLive);  // 268
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
	CRenderAttributes::CRenderAttributes(); // 268
	Vector2D::Vector2D(); // 268
	Vector2D::Vector2D(); // 268
	Color::Color(); // 268
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 274
	Color::operator=(
			const Color& rhs);  // 274
	CLineLayoutInfo::CLineLayoutInfo(
			float64 flTimeToLive);  // 2886
	Color::SetRawColor(
			int32 Color);  // 147
	Color::GetRawColor(); // 147
	Color::operator=(
			const Color& rhs);  // 291
	CaptureAttributes(const CRenderAttributes* pAttributesIn,
				CRenderAttributes* pAttributesStore,
				bool bCopy);  // 79
	CaptureAttributes(const CRenderAttributes* pAttributesIn,
				CRenderAttributes* pAttributesStore,
				bool bCopy);  // 292
	Vector2D::operator=(
			const Vector2D& vOther);  // 289
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 289
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 290
	CLineLayoutInfo::Init(
		float x0,
		float y0,
		float x1,
		float y1,
		const Color& drawColor,
		const CRenderAttributes* pAttributes,
		LayoutPositionType_e positionType);  // 2887
	CUtlMemory<IQueuedRenderable::NumAllocated(); // 1247
	CUtlMemory<IQueuedRenderable::operator[](
			int i);  // 602
	CUtlVectorBase<IQueuedRenderable::Element(
		int i);  // 1252
	Construct<IQueuedRenderable*, IQueuedRenderable*>(IQueuedRenderable** pMemory); // 1252
	CUtlMemory<IQueuedRenderable::Base(); // 112
	CUtlVectorBase<IQueuedRenderable::Base(); // 368
	CUtlVectorBase<IQueuedRenderable::ResetDbgInfo(); // 824
	CUtlVectorBase<IQueuedRenderable::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<IQueuedRenderable::AddToTail(
			IQueuedRenderable *& src);  // 2890
} /* size: 732, variables: 2, inline expansions: 92 (2212 bytes) */

// <00456398> utils/materialsystem2utils.cpp:2893
// variables: 3
// function calls: 109
void CMaterialSystem2Utils::QueueRender2DLines(CUtlStringToken viewportName, const CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >* pLineList, const Color& drawColor, const CRenderAttributes* pAttributes, LayoutPositionType_e positionType, float flTimeToLive)
{
	CLineBatchLayoutInfo* pRenderable; // 2904
	ViewportLayoutList_t& infoList; // 2907
	IQueuedRenderable::IQueuedRenderable(); // 32
	CBaseQueuedRenderable::CBaseQueuedRenderable(
				float64 flTimeToLive);  // 326
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
	CRenderAttributes::CRenderAttributes(); // 326
	CUtlMemory<Vector2D, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector2D, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >::CUtlVector(); // 326
	Color::Color(); // 326
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 328
	Color::SetRawColor(
			int32 Color);  // 147
	Color::operator=(
			const Color& rhs);  // 328
	CLineBatchLayoutInfo::CLineBatchLayoutInfo(
				float64 flTimeToLive);  // 2904
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Count(); // 340
	CUtlMemory<Vector2D, int>::NumAllocated(); // 782
	CUtlMemory<Vector2D, int>::Base(); // 112
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Base(); // 368
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::GrowVector(
			int num);  // 1484
	{
		int i; // 1500
		CUtlMemory<Vector2D, int>::operator[](
				int i);  // 602
		CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Element(
			int i);  // 1502
		Vector2D::Vector2D(
			const Vector2D& vOther);  // 1520
		CopyConstruct<Vector2D>(Vector2D* pMemory,
					const Vector2D& src);  // 1502
	}
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::InsertMultipleBefore(
				int elem,
				int num,
				const Vector2D* pToInsert);  // 1476
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::InsertMultipleBefore(
				int elem,
				int num,
				const Vector2D* pToInsert);  // 1303
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::AddMultipleToTail(
				int num,
				const Vector2D* pToCopy);  // 340
	CUtlMemory<Vector2D, int>::Base(); // 113
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Base(); // 340
	Color::GetRawColor(); // 147
	Color::SetRawColor(
			int32 Color);  // 147
	Color::operator=(
			const Color& rhs);  // 341
	CaptureAttributes(const CRenderAttributes* pAttributesIn,
				CRenderAttributes* pAttributesStore,
				bool bCopy);  // 79
	CaptureAttributes(const CRenderAttributes* pAttributesIn,
				CRenderAttributes* pAttributesStore,
				bool bCopy);  // 342
	CLineBatchLayoutInfo::Init(
		const CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >* pLineList,
		const Color& drawColor,
		const CRenderAttributes* pAttributes,
		LayoutPositionType_e positionType);  // 2905
	CUtlMemory<IQueuedRenderable::NumAllocated(); // 1247
	CUtlMemory<IQueuedRenderable::operator[](
			int i);  // 602
	CUtlVectorBase<IQueuedRenderable::Element(
		int i);  // 1252
	Construct<IQueuedRenderable*, IQueuedRenderable*>(IQueuedRenderable** pMemory); // 1252
	CUtlMemory<IQueuedRenderable::Base(); // 112
	CUtlVectorBase<IQueuedRenderable::Base(); // 368
	CUtlVectorBase<IQueuedRenderable::ResetDbgInfo(); // 824
	CUtlVectorBase<IQueuedRenderable::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<IQueuedRenderable::AddToTail(
			IQueuedRenderable *& src);  // 2908
} /* size: 924, variables: 2, inline expansions: 105 (3047 bytes) */

// <00455245> utils/materialsystem2utils.cpp:2915
// variables: 2
// function calls: 66
void CMaterialSystem2Utils::QueueRenderRect(CUtlStringToken viewportName, const Vector2D& rectPos, const Vector2D& rectSize, const Color& drawColor, const IMaterial2* pMaterial, const CRenderAttributes* pAttributes, HRenderTexture hTexture, LayoutPositionType_e positionType, float flTimeToLive)
{
	CPrimitivesLayoutInfo* pPrimInfo; // 2925
	ViewportLayoutList_t& infoList; // 2943
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2926
	CaptureAttributes(const CRenderAttributes* pAttributesIn,
				CRenderAttributes* pAttributesStore,
				bool bCopy);  // 79
	CaptureAttributes(const CRenderAttributes* pAttributesIn,
				CRenderAttributes* pAttributesStore,
				bool bCopy);  // 454
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 455
	CPrimitivesLayoutInfo::Init(
		MaterialPrimitiveType2_t primType,
		int nNumPoints,
		const IMaterial2* pMaterial,
		const CRenderAttributes* pAttributes,
		HRenderTexture hTexture,
		LayoutPositionType_e positionType);  // 2926
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2928
	CUtlMemory<Vector, int>::operator[](
			int i);  // 588
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 4, int> >::operator[](
			int i);  // 2928
	Vector::operator=(
			const Vector& vOther);  // 2928
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2929
	CUtlMemory<Vector, int>::operator[](
			int i);  // 588
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 4, int> >::operator[](
			int i);  // 2929
	Vector::operator=(
			const Vector& vOther);  // 2929
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2930
	CUtlMemory<Vector, int>::operator[](
			int i);  // 588
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 4, int> >::operator[](
			int i);  // 2930
	Vector::operator=(
			const Vector& vOther);  // 2930
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2931
	CUtlMemory<Vector, int>::operator[](
			int i);  // 588
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 4, int> >::operator[](
			int i);  // 2931
	Vector::operator=(
			const Vector& vOther);  // 2931
	CUtlMemory<Color, int>::operator[](
			int i);  // 588
	CUtlVectorBase<Color, CUtlMemoryFixedGrowable<Color, 4, int> >::operator[](
			int i);  // 2933
	Color::GetRawColor(); // 147
	Color::SetRawColor(
			int32 Color);  // 147
	Color::operator=(
			const Color& rhs);  // 2933
	CUtlMemory<Color, int>::operator[](
			int i);  // 588
	CUtlVectorBase<Color, CUtlMemoryFixedGrowable<Color, 4, int> >::operator[](
			int i);  // 2934
	Color::SetRawColor(
			int32 Color);  // 147
	Color::operator=(
			const Color& rhs);  // 2934
	CUtlMemory<Color, int>::operator[](
			int i);  // 588
	CUtlVectorBase<Color, CUtlMemoryFixedGrowable<Color, 4, int> >::operator[](
			int i);  // 2935
	Color::GetRawColor(); // 147
	Color::SetRawColor(
			int32 Color);  // 147
	Color::operator=(
			const Color& rhs);  // 2935
	CUtlMemory<Color, int>::operator[](
			int i);  // 588
	CUtlVectorBase<Color, CUtlMemoryFixedGrowable<Color, 4, int> >::operator[](
			int i);  // 2936
	Color::SetRawColor(
			int32 Color);  // 147
	Color::operator=(
			const Color& rhs);  // 2936
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 2938
	CUtlMemory<Vector2D, int>::operator[](
			int i);  // 588
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 4, int> >::operator[](
			int i);  // 2938
	Vector2D::operator=(
			const Vector2D& vOther);  // 2938
	Vector2D::operator=(
			const Vector2D& vOther);  // 2940
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 2939
	CUtlMemory<Vector2D, int>::operator[](
			int i);  // 588
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 4, int> >::operator[](
			int i);  // 2939
	Vector2D::operator=(
			const Vector2D& vOther);  // 2939
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 2940
	CUtlMemory<Vector2D, int>::operator[](
			int i);  // 588
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 4, int> >::operator[](
			int i);  // 2940
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 2941
	CUtlMemory<Vector2D, int>::operator[](
			int i);  // 588
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 4, int> >::operator[](
			int i);  // 2941
	Vector2D::operator=(
			const Vector2D& vOther);  // 2941
	CUtlMemory<IQueuedRenderable::NumAllocated(); // 1247
	CUtlMemory<IQueuedRenderable::operator[](
			int i);  // 602
	CUtlVectorBase<IQueuedRenderable::Element(
		int i);  // 1252
	Construct<IQueuedRenderable*, IQueuedRenderable*>(IQueuedRenderable** pMemory); // 1252
	CUtlMemory<IQueuedRenderable::Base(); // 112
	CUtlVectorBase<IQueuedRenderable::Base(); // 368
	CUtlVectorBase<IQueuedRenderable::ResetDbgInfo(); // 824
	CUtlVectorBase<IQueuedRenderable::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<IQueuedRenderable::AddToTail(
			IQueuedRenderable *& src);  // 2944
} /* size: 618, variables: 2, inline expansions: 66 (769 bytes) */

// <0045410B> utils/materialsystem2utils.cpp:2950
// variables: 2
// function calls: 66
void CMaterialSystem2Utils::QueueRenderRect(CUtlStringToken viewportName, const Vector2D& rectPos, const Vector2D& rectSize, const Vector2D& texMin, const Vector2D& texMax, const Color& drawColor, const IMaterial2* pMaterial, const CRenderAttributes* pAttributes, HRenderTexture hTexture, LayoutPositionType_e positionType, float flTimeToLive)
{
	CPrimitivesLayoutInfo* pPrimInfo; // 2962
	ViewportLayoutList_t& infoList; // 2980
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2963
	CaptureAttributes(const CRenderAttributes* pAttributesIn,
				CRenderAttributes* pAttributesStore,
				bool bCopy);  // 79
	CaptureAttributes(const CRenderAttributes* pAttributesIn,
				CRenderAttributes* pAttributesStore,
				bool bCopy);  // 454
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 455
	CPrimitivesLayoutInfo::Init(
		MaterialPrimitiveType2_t primType,
		int nNumPoints,
		const IMaterial2* pMaterial,
		const CRenderAttributes* pAttributes,
		HRenderTexture hTexture,
		LayoutPositionType_e positionType);  // 2963
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2965
	CUtlMemory<Vector, int>::operator[](
			int i);  // 588
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 4, int> >::operator[](
			int i);  // 2965
	Vector::operator=(
			const Vector& vOther);  // 2965
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2966
	CUtlMemory<Vector, int>::operator[](
			int i);  // 588
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 4, int> >::operator[](
			int i);  // 2966
	Vector::operator=(
			const Vector& vOther);  // 2966
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2967
	CUtlMemory<Vector, int>::operator[](
			int i);  // 588
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 4, int> >::operator[](
			int i);  // 2967
	Vector::operator=(
			const Vector& vOther);  // 2967
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2968
	CUtlMemory<Vector, int>::operator[](
			int i);  // 588
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 4, int> >::operator[](
			int i);  // 2968
	Vector::operator=(
			const Vector& vOther);  // 2968
	CUtlMemory<Color, int>::operator[](
			int i);  // 588
	CUtlVectorBase<Color, CUtlMemoryFixedGrowable<Color, 4, int> >::operator[](
			int i);  // 2970
	Color::GetRawColor(); // 147
	Color::SetRawColor(
			int32 Color);  // 147
	Color::operator=(
			const Color& rhs);  // 2970
	CUtlMemory<Color, int>::operator[](
			int i);  // 588
	CUtlVectorBase<Color, CUtlMemoryFixedGrowable<Color, 4, int> >::operator[](
			int i);  // 2971
	Color::SetRawColor(
			int32 Color);  // 147
	Color::operator=(
			const Color& rhs);  // 2971
	CUtlMemory<Color, int>::operator[](
			int i);  // 588
	CUtlVectorBase<Color, CUtlMemoryFixedGrowable<Color, 4, int> >::operator[](
			int i);  // 2972
	Color::GetRawColor(); // 147
	Color::SetRawColor(
			int32 Color);  // 147
	Color::operator=(
			const Color& rhs);  // 2972
	CUtlMemory<Color, int>::operator[](
			int i);  // 588
	CUtlVectorBase<Color, CUtlMemoryFixedGrowable<Color, 4, int> >::operator[](
			int i);  // 2973
	Color::SetRawColor(
			int32 Color);  // 147
	Color::operator=(
			const Color& rhs);  // 2973
	CUtlMemory<Vector2D, int>::operator[](
			int i);  // 588
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 4, int> >::operator[](
			int i);  // 2975
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 2975
	Vector2D::operator=(
			const Vector2D& vOther);  // 2975
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 2976
	CUtlMemory<Vector2D, int>::operator[](
			int i);  // 588
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 4, int> >::operator[](
			int i);  // 2976
	Vector2D::operator=(
			const Vector2D& vOther);  // 2976
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 2977
	CUtlMemory<Vector2D, int>::operator[](
			int i);  // 588
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 4, int> >::operator[](
			int i);  // 2977
	Vector2D::operator=(
			const Vector2D& vOther);  // 2977
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 2978
	CUtlMemory<Vector2D, int>::operator[](
			int i);  // 588
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 4, int> >::operator[](
			int i);  // 2978
	Vector2D::operator=(
			const Vector2D& vOther);  // 2978
	CUtlMemory<IQueuedRenderable::NumAllocated(); // 1247
	CUtlMemory<IQueuedRenderable::operator[](
			int i);  // 602
	CUtlVectorBase<IQueuedRenderable::Element(
		int i);  // 1252
	Construct<IQueuedRenderable*, IQueuedRenderable*>(IQueuedRenderable** pMemory); // 1252
	CUtlMemory<IQueuedRenderable::Base(); // 112
	CUtlVectorBase<IQueuedRenderable::Base(); // 368
	CUtlVectorBase<IQueuedRenderable::ResetDbgInfo(); // 824
	CUtlVectorBase<IQueuedRenderable::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<IQueuedRenderable::AddToTail(
			IQueuedRenderable *& src);  // 2981
} /* size: 626, variables: 2, inline expansions: 66 (758 bytes) */

// <004537F4> utils/materialsystem2utils.cpp:2987
// variables: 2
// function calls: 31
void CMaterialSystem2Utils::QueueRenderRect(CUtlStringToken viewportName, const Vector* pRectPoints, const Color* pRectColors, const Vector2D* pUVs, const IMaterial2* pMaterial, const CRenderAttributes* pAttributes, HRenderTexture hTexture, LayoutPositionType_e positionType, float flTimeToLive)
{
	CPrimitivesLayoutInfo* pPrimInfo; // 2997
	ViewportLayoutList_t& infoList; // 3000
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2998
	CaptureAttributes(const CRenderAttributes* pAttributesIn,
				CRenderAttributes* pAttributesStore,
				bool bCopy);  // 79
	CaptureAttributes(const CRenderAttributes* pAttributesIn,
				CRenderAttributes* pAttributesStore,
				bool bCopy);  // 454
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 455
	CPrimitivesLayoutInfo::Init(
		MaterialPrimitiveType2_t primType,
		int nNumPoints,
		const IMaterial2* pMaterial,
		const CRenderAttributes* pAttributes,
		HRenderTexture hTexture,
		LayoutPositionType_e positionType);  // 473
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 473
	CUtlMemory<Vector, int>::Base(); // 112
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 4, int> >::Base(); // 475
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 475
	CUtlMemory<Color, int>::Base(); // 112
	CUtlVectorBase<Color, CUtlMemoryFixedGrowable<Color, 4, int> >::Base(); // 476
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 476
	CUtlMemory<Vector2D, int>::Base(); // 112
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 4, int> >::Base(); // 477
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 477
	CPrimitivesLayoutInfo::Init(
		MaterialPrimitiveType2_t primType,
		const Vector* pPoints,
		const Color* pColors,
		const Vector2D* pUVs,
		int nNumPoints,
		const IMaterial2* pMaterial,
		const CRenderAttributes* pAttributes,
		HRenderTexture hTexture,
		LayoutPositionType_e positionType);  // 2998
	CUtlMemory<IQueuedRenderable::NumAllocated(); // 1247
	CUtlMemory<IQueuedRenderable::operator[](
			int i);  // 602
	CUtlVectorBase<IQueuedRenderable::Element(
		int i);  // 1252
	Construct<IQueuedRenderable*, IQueuedRenderable*>(IQueuedRenderable** pMemory); // 1252
	CUtlMemory<IQueuedRenderable::Base(); // 112
	CUtlVectorBase<IQueuedRenderable::Base(); // 368
	CUtlVectorBase<IQueuedRenderable::ResetDbgInfo(); // 824
	CUtlVectorBase<IQueuedRenderable::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<IQueuedRenderable::AddToTail(
			IQueuedRenderable *& src);  // 3001
} /* size: 474, variables: 2, inline expansions: 31 (969 bytes) */

// <004523B7> utils/materialsystem2utils.cpp:3007
// variables: 2
// function calls: 97
void CMaterialSystem2Utils::QueueAndOwnRenderMeshWithMode(CUtlStringToken viewportName, const MeshBuilderBuffers_t* pMesh, const IMaterialMode* pMode, CRenderAttributes* pAttributes, HRenderTexture hTexture, LayoutPositionType_e positionType, float flTimeToLive)
{
	CMeshLayoutInfo* pMeshInfo; // 3015
	ViewportLayoutList_t& infoList; // 3018
	IQueuedRenderable::IQueuedRenderable(); // 32
	CBaseQueuedRenderable::CBaseQueuedRenderable(
				float64 flTimeToLive);  // 373
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
	CRenderAttributes::CRenderAttributes(); // 373
	Vector::Vector(); // 11
	Vector::Vector(); // 11
	MeshBuilderBuffers_t::MeshBuilderBuffers_t(); // 373
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 373
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 375
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 378
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 378
	CMeshLayoutInfo::CMeshLayoutInfo(
			float64 flTimeToLive);  // 3015
	Vector::operator=(
			const Vector& vOther);  // 37
	Vector::operator=(
			const Vector& vOther);  // 38
	MeshBuilderBuffers_t::ShallowCopy(
			const MeshBuilderBuffers_t& other);  // 394
	CaptureAttributes(const CRenderAttributes* pAttributesIn,
				CRenderAttributes* pAttributesStore,
				bool bCopy);  // 79
	CaptureAttributes(const CRenderAttributes* pAttributesIn,
				CRenderAttributes* pAttributesStore,
				bool bCopy);  // 397
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 398
	CMeshLayoutInfo::Init(
		const MeshBuilderBuffers_t* pMesh,
		const IMaterialMode* pMode,
		CRenderAttributes* pAttributes,
		HRenderTexture hTexture,
		LayoutPositionType_e positionType);  // 3016
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 3016
	CUtlMemory<IQueuedRenderable::NumAllocated(); // 1247
	CUtlMemory<IQueuedRenderable::operator[](
			int i);  // 602
	CUtlVectorBase<IQueuedRenderable::Element(
		int i);  // 1252
	Construct<IQueuedRenderable*, IQueuedRenderable*>(IQueuedRenderable** pMemory); // 1252
	CUtlMemory<IQueuedRenderable::Base(); // 112
	CUtlVectorBase<IQueuedRenderable::Base(); // 368
	CUtlVectorBase<IQueuedRenderable::ResetDbgInfo(); // 824
	CUtlVectorBase<IQueuedRenderable::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<IQueuedRenderable::AddToTail(
			IQueuedRenderable *& src);  // 3019
} /* size: 852, variables: 2, inline expansions: 97 (2700 bytes) */

// <0045123E> utils/materialsystem2utils.cpp:3022
// variables: 3
// function calls: 79
void CMaterialSystem2Utils::QueueRenderMeshWithMode(CUtlStringToken viewportName, const MeshBuilderBuffers_t* pMesh, const IMaterialMode* pMode, const CRenderAttributes* pAttributes, HRenderTexture hTexture, LayoutPositionType_e positionType, float flTimeToLive)
{
	MeshBuilderBuffers_t meshCopy; // 3030
	CRenderAttributes* pUseAttributes; // 3034
	CRenderAttributes attributesCopy; // 3035
	Vector::operator=(
			const Vector& vOther);  // 37
	Vector::operator=(
			const Vector& vOther);  // 38
	MeshBuilderBuffers_t::ShallowCopy(
			const MeshBuilderBuffers_t& other);  // 43
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 47
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 52
	MeshBuilderBuffers_t::DeepCopy(
		const MeshBuilderBuffers_t& other);  // 41
	MeshBuilderBuffers_t::DeepCopy(
		const MeshBuilderBuffers_t& other);  // 3031
	Vector::Vector(); // 11
	Vector::Vector(); // 11
	MeshBuilderBuffers_t::MeshBuilderBuffers_t(); // 3030
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
	CRenderAttributes::CRenderAttributes(); // 3035
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 3042
} /* size: 865, variables: 3, inline expansions: 79 (1917 bytes) */

// <004508E8> utils/materialsystem2utils.cpp:3048
// variables: 2
// function calls: 31
void CMaterialSystem2Utils::QueueRenderQuads(CUtlStringToken viewportName, const Vector* pPoints, const Color* pColors, const Vector2D* pUVs, int nNumPoints, const IMaterial2* pMaterial, const CRenderAttributes* pAttributes, HRenderTexture hTexture, LayoutPositionType_e positionType, float flTimeToLive)
{
	CPrimitivesLayoutInfo* pPrimInfo; // 3059
	ViewportLayoutList_t& infoList; // 3062
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 3060
	CaptureAttributes(const CRenderAttributes* pAttributesIn,
				CRenderAttributes* pAttributesStore,
				bool bCopy);  // 79
	CaptureAttributes(const CRenderAttributes* pAttributesIn,
				CRenderAttributes* pAttributesStore,
				bool bCopy);  // 454
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 455
	CPrimitivesLayoutInfo::Init(
		MaterialPrimitiveType2_t primType,
		int nNumPoints,
		const IMaterial2* pMaterial,
		const CRenderAttributes* pAttributes,
		HRenderTexture hTexture,
		LayoutPositionType_e positionType);  // 473
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 473
	CUtlMemory<Vector, int>::Base(); // 112
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 4, int> >::Base(); // 475
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 475
	CUtlMemory<Color, int>::Base(); // 112
	CUtlVectorBase<Color, CUtlMemoryFixedGrowable<Color, 4, int> >::Base(); // 476
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 476
	CUtlMemory<Vector2D, int>::Base(); // 112
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 4, int> >::Base(); // 477
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 477
	CPrimitivesLayoutInfo::Init(
		MaterialPrimitiveType2_t primType,
		const Vector* pPoints,
		const Color* pColors,
		const Vector2D* pUVs,
		int nNumPoints,
		const IMaterial2* pMaterial,
		const CRenderAttributes* pAttributes,
		HRenderTexture hTexture,
		LayoutPositionType_e positionType);  // 3060
	CUtlMemory<IQueuedRenderable::NumAllocated(); // 1247
	CUtlMemory<IQueuedRenderable::operator[](
			int i);  // 602
	CUtlVectorBase<IQueuedRenderable::Element(
		int i);  // 1252
	Construct<IQueuedRenderable*, IQueuedRenderable*>(IQueuedRenderable** pMemory); // 1252
	CUtlMemory<IQueuedRenderable::Base(); // 112
	CUtlVectorBase<IQueuedRenderable::Base(); // 368
	CUtlVectorBase<IQueuedRenderable::ResetDbgInfo(); // 824
	CUtlVectorBase<IQueuedRenderable::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<IQueuedRenderable::AddToTail(
			IQueuedRenderable *& src);  // 3063
} /* size: 418, variables: 2, inline expansions: 31 (774 bytes) */

// <0044FF92> utils/materialsystem2utils.cpp:3069
// variables: 2
// function calls: 31
void CMaterialSystem2Utils::QueueRenderConvexGeometry(CUtlStringToken viewportName, const Vector* pPoints, const Color* pColors, const Vector2D* pUVs, int nNumPoints, const IMaterial2* pMaterial, const CRenderAttributes* pAttributes, HRenderTexture hTexture, LayoutPositionType_e positionType, float flTimeToLive)
{
	CPrimitivesLayoutInfo* pPrimInfo; // 3080
	ViewportLayoutList_t& infoList; // 3083
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 3081
	CaptureAttributes(const CRenderAttributes* pAttributesIn,
				CRenderAttributes* pAttributesStore,
				bool bCopy);  // 79
	CaptureAttributes(const CRenderAttributes* pAttributesIn,
				CRenderAttributes* pAttributesStore,
				bool bCopy);  // 454
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 455
	CPrimitivesLayoutInfo::Init(
		MaterialPrimitiveType2_t primType,
		int nNumPoints,
		const IMaterial2* pMaterial,
		const CRenderAttributes* pAttributes,
		HRenderTexture hTexture,
		LayoutPositionType_e positionType);  // 473
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 473
	CUtlMemory<Vector, int>::Base(); // 112
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 4, int> >::Base(); // 475
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 475
	CUtlMemory<Color, int>::Base(); // 112
	CUtlVectorBase<Color, CUtlMemoryFixedGrowable<Color, 4, int> >::Base(); // 476
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 476
	CUtlMemory<Vector2D, int>::Base(); // 112
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 4, int> >::Base(); // 477
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 477
	CPrimitivesLayoutInfo::Init(
		MaterialPrimitiveType2_t primType,
		const Vector* pPoints,
		const Color* pColors,
		const Vector2D* pUVs,
		int nNumPoints,
		const IMaterial2* pMaterial,
		const CRenderAttributes* pAttributes,
		HRenderTexture hTexture,
		LayoutPositionType_e positionType);  // 3081
	CUtlMemory<IQueuedRenderable::NumAllocated(); // 1247
	CUtlMemory<IQueuedRenderable::operator[](
			int i);  // 602
	CUtlVectorBase<IQueuedRenderable::Element(
		int i);  // 1252
	Construct<IQueuedRenderable*, IQueuedRenderable*>(IQueuedRenderable** pMemory); // 1252
	CUtlMemory<IQueuedRenderable::Base(); // 112
	CUtlVectorBase<IQueuedRenderable::Base(); // 368
	CUtlVectorBase<IQueuedRenderable::ResetDbgInfo(); // 824
	CUtlVectorBase<IQueuedRenderable::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<IQueuedRenderable::AddToTail(
			IQueuedRenderable *& src);  // 3084
} /* size: 418, variables: 2, inline expansions: 31 (774 bytes) */

// <0044F626> utils/materialsystem2utils.cpp:3090
// variables: 2
// function calls: 31
void CMaterialSystem2Utils::QueueRenderPrimitives(CUtlStringToken viewportName, MaterialPrimitiveType2_t primType, const Vector* pPoints, const Color* pColors, const Vector2D* pUVs, int nNumPoints, const IMaterial2* pMaterial, const CRenderAttributes* pAttributes, HRenderTexture hTexture, LayoutPositionType_e positionType, float flTimeToLive)
{
	CPrimitivesLayoutInfo* pPrimInfo; // 3102
	ViewportLayoutList_t& infoList; // 3105
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 3103
	CaptureAttributes(const CRenderAttributes* pAttributesIn,
				CRenderAttributes* pAttributesStore,
				bool bCopy);  // 79
	CaptureAttributes(const CRenderAttributes* pAttributesIn,
				CRenderAttributes* pAttributesStore,
				bool bCopy);  // 454
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 455
	CPrimitivesLayoutInfo::Init(
		MaterialPrimitiveType2_t primType,
		int nNumPoints,
		const IMaterial2* pMaterial,
		const CRenderAttributes* pAttributes,
		HRenderTexture hTexture,
		LayoutPositionType_e positionType);  // 473
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 473
	CUtlMemory<Vector, int>::Base(); // 112
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 4, int> >::Base(); // 475
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 475
	CUtlMemory<Color, int>::Base(); // 112
	CUtlVectorBase<Color, CUtlMemoryFixedGrowable<Color, 4, int> >::Base(); // 476
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 476
	CUtlMemory<Vector2D, int>::Base(); // 112
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 4, int> >::Base(); // 477
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 477
	CPrimitivesLayoutInfo::Init(
		MaterialPrimitiveType2_t primType,
		const Vector* pPoints,
		const Color* pColors,
		const Vector2D* pUVs,
		int nNumPoints,
		const IMaterial2* pMaterial,
		const CRenderAttributes* pAttributes,
		HRenderTexture hTexture,
		LayoutPositionType_e positionType);  // 3103
	CUtlMemory<IQueuedRenderable::NumAllocated(); // 1247
	CUtlMemory<IQueuedRenderable::operator[](
			int i);  // 602
	CUtlVectorBase<IQueuedRenderable::Element(
		int i);  // 1252
	Construct<IQueuedRenderable*, IQueuedRenderable*>(IQueuedRenderable** pMemory); // 1252
	CUtlMemory<IQueuedRenderable::Base(); // 112
	CUtlVectorBase<IQueuedRenderable::Base(); // 368
	CUtlVectorBase<IQueuedRenderable::ResetDbgInfo(); // 824
	CUtlVectorBase<IQueuedRenderable::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<IQueuedRenderable::AddToTail(
			IQueuedRenderable *& src);  // 3106
} /* size: 418, variables: 2, inline expansions: 31 (772 bytes) */

// <0044E267> utils/materialsystem2utils.cpp:3113
// variables: 7
// function calls: 69
void CMaterialSystem2Utils::RenderFontTextureInternal(IRenderContext* pRenderContext, FontTextureHandle_t textureId, int xPos, int yPos)
{
	VertexColor_t textColor; // 3118
	vec_t x; // 3120
	vec_t y; // 3121
	int wide; // 3122
	int tall; // 3123
	CSysMemDynamicVertexData<VertexColorUVPos_t> vb; // 3126
	CDynamicIndexData<short unsigned int> ib; // 3151
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 3118
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 180
	CVertexDataBase<VertexColorUVPos_t>::ClearVertexFields(); // 171
	Vector::Vector(); // 103
	VertexPos_t::VertexPos_t(); // 257
	Vector2D::Vector2D(); // 257
	VertexUVPos_t::VertexUVPos_t(); // 372
	VertexColor_t::VertexColor_t(); // 372
	VertexColorUVPos_t::VertexColorUVPos_t(); // 165
	CVertexDataBase<VertexColorUVPos_t>::CVertexDataBase(); // 673
	CDynamicVertexData<VertexColorUVPos_t>::Lock(
		int nVertexCount);  // 680
	CDynamicVertexData<VertexColorUVPos_t>::CDynamicVertexData(
				IRenderContext* pRenderContext,
				int nVertexCount,
				const char* pDebugName,
				const char* pBudgetGroup);  // 814
	CSysMemDynamicVertexData<VertexColorUVPos_t>::SetCurrentVertex(); // 816
	CSysMemDynamicVertexData<VertexColorUVPos_t>::CSysMemDynamicVertexData(
				IRenderContext* pRenderContext,
				int nVertexCount,
				const char* pDebugName,
				const char* pBudgetGroup);  // 3126
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 3128
	CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 3129
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 3129
	CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 3130
	Vector2D::Init(
		vec_t ix,
		vec_t iy);  // 3130
	{
	}
	{
	}
	{
	}
	CSysMemDynamicVertexData<VertexColorUVPos_t>::AdvanceVertex(); // 861
	CSysMemDynamicVertexData<VertexColorUVPos_t>::AdvanceVertex(); // 3131
	CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 3133
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 3133
	CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 3134
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 3134
	CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 3135
	Vector2D::Init(
		vec_t ix,
		vec_t iy);  // 3135
	{
	}
	{
	}
	{
	}
	CSysMemDynamicVertexData<VertexColorUVPos_t>::AdvanceVertex(); // 861
	CSysMemDynamicVertexData<VertexColorUVPos_t>::AdvanceVertex(); // 3136
	CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 3138
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 3138
	Vector2D::Init(
		vec_t ix,
		vec_t iy);  // 3140
	CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 3139
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 3139
	CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 3140
	CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 3143
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 3143
	Vector2D::Init(
		vec_t ix,
		vec_t iy);  // 3145
	CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 3144
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 3144
	CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 3145
	{
	}
	{
	}
	{
	}
	CSysMemDynamicVertexData<VertexColorUVPos_t>::AdvanceVertex(); // 861
	CSysMemDynamicVertexData<VertexColorUVPos_t>::AdvanceVertex(); // 3146
	CDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 760
	CDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 840
	CSysMemDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 851
	CDynamicVertexData<VertexColorUVPos_t>::Bind(
		int nSlot,
		int nOffset,
		int nStride);  // 846
	CSysMemDynamicVertexData<VertexColorUVPos_t>::Bind(
		int nSlot,
		int nOffset,
		int nStride);  // 852
	CSysMemDynamicVertexData<VertexColorUVPos_t>::UnlockAndBind(
			int nSlot,
			int nOffset,
			int nStride);  // 3148
	CDynamicIndexData<short unsigned int>::Lock(
		int nIndexCount);  // 580
	CIndexDataBase<short unsigned int>::ClearIndexFields(); // 89
	CIndexDataBase<short unsigned int>::CIndexDataBase(); // 573
	CDynamicIndexData<short unsigned int>::CDynamicIndexData(
				IRenderContext* pRenderContext,
				int nIndexCount,
				const char* pDebugName,
				const char* pBudgetGroup);  // 3151
	CIndexDataBase<short unsigned int>::Index2(
		uint16 nIndex1,
		uint16 nIndex2);  // 3153
	CIndexDataBase<short unsigned int>::Index2(
		uint16 nIndex1,
		uint16 nIndex2);  // 3155
	CDynamicIndexData<short unsigned int>::Unlock(); // 658
	CDynamicIndexData<short unsigned int>::Unlock(); // 540
	CDynamicIndexData<short unsigned int>::Bind(
		int nOffset);  // 541
	CDynamicIndexData<short unsigned int>::UnlockAndBind(
			int nBindOffset);  // 3157
	CDynamicIndexData<short unsigned int>::Unlock(); // 607
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 608
	CDynamicIndexData<short unsigned int>::~CDynamicIndexData(); // 3160
	CDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 760
	CDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 710
	{
	}
	{
	}
	CVertexDataBase<VertexColorUVPos_t>::~CVertexDataBase(); // 194
	CVertexDataBase<VertexColorUVPos_t>::~CVertexDataBase(); // 711
	CDynamicVertexData<VertexColorUVPos_t>::~CDynamicVertexData(); // 808
	CSysMemDynamicVertexData<VertexColorUVPos_t>::~CSysMemDynamicVertexData(); // 3160
} /* size: 0, variables: 7, inline expansions: 69 (3073 bytes) */

// <0044DF73> utils/materialsystem2utils.cpp:3165
// variables: 4
// function calls: 6
void CMaterialSystem2Utils::RenderFontTexture(IRenderContext* pRenderContext, FontTextureHandle_t textureId, int xPos, int yPos, const CRenderAttributes* pAttributes)
{
	HRenderTexture fontTextureHandle; // 3171
	int nPasses; // 3175
	const char   __FUNCTION__; // 58088
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3180
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 3172
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 3172
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 3175
} /* size: 0, variables: 3, inline expansions: 6 (36 bytes) */

// <004A1629> utils/materialsystem2utils.cpp:3189
void CMaterialSystem2Utils::CacheFontTextures(const CTextLayoutInfo* pTextLayoutInfo)
{
} /* size: 19 */

// <0044DA39> utils/materialsystem2utils.cpp:3199
// variables: 2
// function calls: 14
void CMaterialSystem2Utils::GetRawSize(const char* pText, FontHandle_t fontID)
{
	RenderViewport_t viewport; // 3208
	CTextLayoutInfo textLayoutInfo; // 3214
	CMaterialSystem2Utils::GetDefaultDebugFont(
				bool bOutline);  // 3203
	RenderViewport_t::RenderViewport_t(); // 3208
	CStrAutoEncode::Set(
		const char* pch);  // 479
	CStrAutoEncode::CStrAutoEncode(
			const char* pch);  // 204
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 205
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 211
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 212
	matrix3x4_t::matrix3x4_t(); // 216
	CTextLayoutInfo::CTextLayoutInfo(); // 3214
	CTextLayoutInfo::SetText(
		const char* pText);  // 3215
	CStrAutoEncode::~CStrAutoEncode(); // 225
	CTextLayoutInfo::~CTextLayoutInfo(); // 3219
} /* size: 356, variables: 2, inline expansions: 14 (241 bytes) */

// <0044C318> utils/materialsystem2utils.cpp:3227
// variables: 23
// function calls: 80
void CMaterialSystem2Utils::RenderText(IRenderContext* pRenderContext, const CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRende renderGeometryLists, const Vector2D& vOffset, const CRenderAttributes* pAttributes)
{
	HRenderTexture firstFontTexture; // 3239
	bool bFirstBind; // 3253
	RenderViewport_t viewport; // 3255
	int nPasses; // 3256
	const char   __FUNCTION__; // 57909
	matrix3x4_t renderToViewport; // 3264
	int nMaxVertCountPerPass; // 3268
	int nMaxIndexCountPerPass; // 3268
	int nMaxLetterCountPerPass; // 3270
	{
		int listIndex; // 3240
		{
			const CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >& renderGeometry; // 3242
			CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector< this,
					int i);  // 3242
			CUtlVectorBase<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::Count(); // 3243
			CUtlMemory<CCharRenderGeometry, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::operator[](
					int i);  // 3243
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 3245
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3261
	}
	{
		int listIndex; // 3272
		{
			const CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >& renderGeometry; // 3274
			int nRemaining; // 3297
			int nStartOffset; // 3298
			{
				HRenderTexture fontTextureHandle; // 3286
				CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 3289
				CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 768
				BindTexturedMaterialTexture(IRenderContext* pCtx,
								HRenderTexture hTexture);  // 3289
				CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 3292
				CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
				CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 687
				IRenderContext::SetMaterialStateHint(
							const IMaterialMode* pMode,
							HRenderTexture hTexture,
							uint64 nKey);  // 3292
			}
			{
				int nNumLettersToDrawThisPass; // 3301
				CSysMemDynamicVertexData<VertexColorUVPos_t> vb; // 3303
				{
					int i; // 3304
					{
						int rgo; // 3306
						{
							int j; // 3307
							{
								Vector newPos; // 3310
								Vector::Vector(); // 3310
								CUtlMemory<CCharRenderGeometry, int>::operator[](
										int i);  // 595
								CUtlVectorBase<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::operator[](
										int i);  // 3311
								VectorTransform(const Vector& in1,
										const matrix3x4_t& in2,
										Vector& out);  // 3311
								Vector::Vector(
									vec_t X,
									vec_t Y,
									vec_t Z);  // 3311
								CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 3313
								Vector::Init(
									vec_t ix,
									vec_t iy,
									vec_t iz);  // 3313
								CUtlMemory<CCharRenderGeometry, int>::operator[](
										int i);  // 595
								CUtlVectorBase<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::operator[](
										int i);  // 3314
								CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 3314
								VertexColor_t::operator=(
										const Color& src);  // 3314
								CSysMemDynamicVertexData<VertexColorUVPos_t>::operator->(); // 3315
								CUtlMemory<CCharRenderGeometry, int>::operator[](
										int i);  // 595
								CUtlVectorBase<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::operator[](
										int i);  // 3315
								Vector2D::Init(
									vec_t ix,
									vec_t iy);  // 3315
								{
								}
								{
								}
								{
								}
								CSysMemDynamicVertexData<VertexColorUVPos_t>::AdvanceVertex(); // 861
								CSysMemDynamicVertexData<VertexColorUVPos_t>::AdvanceVertex(); // 3316
							}
						}
					}
				}
				Min<int>(const int& val1,
					const int& val2);  // 3301
				CDynamicVertexData<VertexColorUVPos_t>::Lock(
					int nVertexCount);  // 680
				memset(void* __dest,
					int __ch,
					size_t __len);  // 67
				V_memset(void* dest,
					int fill,
					size_t count);  // 180
				CVertexDataBase<VertexColorUVPos_t>::ClearVertexFields(); // 171
				Vector::Vector(); // 103
				VertexPos_t::VertexPos_t(); // 257
				Vector2D::Vector2D(); // 257
				VertexUVPos_t::VertexUVPos_t(); // 372
				VertexColor_t::VertexColor_t(); // 372
				VertexColorUVPos_t::VertexColorUVPos_t(); // 165
				CVertexDataBase<VertexColorUVPos_t>::CVertexDataBase(); // 673
				CDynamicVertexData<VertexColorUVPos_t>::CDynamicVertexData(
							IRenderContext* pRenderContext,
							int nVertexCount,
							const char* pDebugName,
							const char* pBudgetGroup);  // 814
				CSysMemDynamicVertexData<VertexColorUVPos_t>::SetCurrentVertex(); // 816
				CSysMemDynamicVertexData<VertexColorUVPos_t>::CSysMemDynamicVertexData(
							IRenderContext* pRenderContext,
							int nVertexCount,
							const char* pDebugName,
							const char* pBudgetGroup);  // 3303
				CDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 760
				CDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 840
				CSysMemDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 851
				CDynamicVertexData<VertexColorUVPos_t>::Bind(
					int nSlot,
					int nOffset,
					int nStride);  // 846
				CSysMemDynamicVertexData<VertexColorUVPos_t>::Bind(
					int nSlot,
					int nOffset,
					int nStride);  // 852
				CSysMemDynamicVertexData<VertexColorUVPos_t>::UnlockAndBind(
						int nSlot,
						int nOffset,
						int nStride);  // 3319
				CDynamicVertexData<VertexColorUVPos_t>::Unlock(); // 710
				{
				}
				{
				}
				CVertexDataBase<VertexColorUVPos_t>::~CVertexDataBase(); // 194
				CVertexDataBase<VertexColorUVPos_t>::~CVertexDataBase(); // 711
				CDynamicVertexData<VertexColorUVPos_t>::~CDynamicVertexData(); // 808
				CSysMemDynamicVertexData<VertexColorUVPos_t>::~CSysMemDynamicVertexData(); // 3327
			}
			CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector< this,
					int i);  // 3274
			CUtlVectorBase<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::Count(); // 3276
			CUtlMemory<CCharRenderGeometry, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::operator[](
					int i);  // 3280
			CUtlVectorBase<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::Count(); // 3297
		}
		Count(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector< this); // 3272
	}
	Count(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector< this); // 3229
	RenderViewport_t::RenderViewport_t(); // 3255
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 3256
	matrix3x4_t::matrix3x4_t(); // 3264
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 3266
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 647
	MatrixSetColumn(const Vector& in,
			MatrixAxisType_t nColumn,
			matrix3x4_t& out);  // 1211
	PositionMatrix(const Vector& position,
			matrix3x4_t& mat);  // 3266
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 693
	IRenderContext::ResetMaterialStateHint(); // 3335
} /* size: 0, variables: 9, inline expansions: 13 (90 bytes) */

// <0044B324> utils/materialsystem2utils.cpp:3340
// variables: 7
// function calls: 71
void CMaterialSystem2Utils::AddToView(float flAbsTime)
{
	{
		int i; // 3343
		{
			int j; // 3345
			CUtlMemory<CUtlVector<IQueuedRenderable::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlVector<IQueuedRenderable::operator[](
					int i);  // 3345
			CUtlVectorBase<IQueuedRenderable::Count(); // 3345
			{
				float64 flEndTime; // 60
			}
			CBaseQueuedRenderable::Age(
				float flAbsTime);  // 3347
			CUtlMemory<CUtlVector<IQueuedRenderable::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlVector<IQueuedRenderable::operator[](
					int i);  // 3347
			CUtlMemory<IQueuedRenderable::operator[](
					int i);  // 588
			CUtlVectorBase<IQueuedRenderable::operator[](
					int i);  // 3347
		}
		CUtlVectorBase<CUtlVector<IQueuedRenderable::Count(); // 3343
	}
	{
		int i; // 3352
		CUtlVectorBase<CUtlVector<IQueuedRenderable::Count(); // 3352
		CUtlMemory<CUtlVector<IQueuedRenderable::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlVector<IQueuedRenderable::operator[](
				int i);  // 3354
		{
			int i; // 1807
			CUtlMemory<IQueuedRenderable::operator[](
					int i);  // 602
			CUtlVectorBase<IQueuedRenderable::Element(
				int i);  // 1809
		}
		CUtlVectorBase<IQueuedRenderable::RemoveAll(); // 1798
		CUtlMemory<IQueuedRenderable::IsExternallyAllocated(); // 905
		CUtlMemory<IQueuedRenderable::Purge(); // 903
		CUtlMemory<IQueuedRenderable::Purge(); // 1799
		CUtlVectorBase<IQueuedRenderable::ResetDbgInfo(); // 1800
		CUtlVectorBase<IQueuedRenderable::Purge(); // 1811
		CUtlVectorBase<IQueuedRenderable::PurgeAndDeleteElements(); // 3354
	}
	{
		int i; // 3361
		{
			int j; // 3364
			CUtlMemory<CUtlVector<IQueuedRenderable::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlVector<IQueuedRenderable::operator[](
					int i);  // 3364
			CUtlVectorBase<IQueuedRenderable::Count(); // 3364
			CUtlMemory<IQueuedRenderable::operator[](
					int i);  // 602
			CUtlVectorBase<IQueuedRenderable::Element(
				int i);  // 1252
			Construct<IQueuedRenderable*, IQueuedRenderable*>(IQueuedRenderable** pMemory); // 1252
			CUtlMemory<IQueuedRenderable::NumAllocated(); // 1247
			CUtlMemory<IQueuedRenderable::Base(); // 112
			CUtlVectorBase<IQueuedRenderable::Base(); // 368
			CUtlVectorBase<IQueuedRenderable::ResetDbgInfo(); // 824
			CUtlVectorBase<IQueuedRenderable::GrowMemory(
					int num);  // 1249
			CUtlVectorBase<IQueuedRenderable::AddToTail(
					IQueuedRenderable *& src);  // 3366
			CUtlMemory<CUtlVector<IQueuedRenderable::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlVector<IQueuedRenderable::operator[](
					int i);  // 3366
			CUtlMemory<IQueuedRenderable::operator[](
					int i);  // 588
			CUtlVectorBase<IQueuedRenderable::operator[](
					int i);  // 3366
		}
		CUtlVectorBase<CUtlVector<IQueuedRenderable::Count(); // 3361
		CUtlMemory<CUtlVector<IQueuedRenderable::Base(); // 112
		CUtlVectorBase<CUtlVector<IQueuedRenderable::Base(); // 368
		CUtlVectorBase<CUtlVector<IQueuedRenderable::ResetDbgInfo(); // 824
		CUtlVectorBase<CUtlVector<IQueuedRenderable::GrowMemory(
				int num);  // 1145
		CUtlMemory<CUtlVector<IQueuedRenderable::NumAllocated(); // 1143
		CUtlMemory<CUtlVector<IQueuedRenderable::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlVector<IQueuedRenderable::Element(
			int i);  // 1148
		CUtlMemory<IQueuedRenderable::ValidateGrowSize(); // 475
		CUtlMemory<IQueuedRenderable::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<IQueuedRenderable::ResetDbgInfo(); // 530
		CUtlVectorBase<IQueuedRenderable::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<IQueuedRenderable::CUtlVector(); // 1479
		Construct<CUtlVector<IQueuedRenderable*> >(CUtlVector<IQueuedRenderable*, CUtlMemory<IQueuedRenderable*, int> >* pMemory); // 1148
		CUtlVectorBase<CUtlVector<IQueuedRenderable::AddToTail(); // 3363
	}
	CUtlMap<CUtlStringToken, int, short unsigned int, bool (::RemoveAll()(const CUtlStringToken&, const CUtlStringToken&)>* this); // 3357
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int>, short unsigned int>::IsExternallyAllocated(); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 1287
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int>, short unsigned int>::InvalidIterator(); // 1288
	Purge(const CUtlRBTree<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int, CUtlMap<CUtlStringToken, int>::CKeyLess, CUtl this); // 521
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int>, short unsigned int>::Count(); // 522
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int>, short unsigned int>::IsGrowable(); // 881
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int>, short unsigned int>::IsExternallyAllocated(); // 888
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int>, short unsigned int>::EnsureCapacity(
			int num);  // 522
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int>, short unsigned int>::Count(); // 523
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int>, short unsigned int>::Base(); // 523
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 523
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int>, short unsigned int>::Base(); // 418
	ResetDbgInfo(const CUtlRBTree<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int, CUtlMap<CUtlStringToken, int>::CKeyLess, CUtl this); // 529
	CopyFrom(const CUtlRBTree<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int, CUtlMap<CUtlStringToken, int>::CKeyLess, CUtl this,
		const CUtlRBTree<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int, CUtlMap<CUtlStringToken, int>::CKeyLess, CUtl other);  // 86
	CUtlMap<CUtlStringToken, int, short unsigned int, bool (::CopyFrom(
		const CUtlMap<CUtlStringToken, int, short unsigned int, bool (*)(const CUtlStringToken&, const CUtlStringToken&)>& other);  // 3360
} /* size: 1175, inline expansions: 19 (1200 bytes) */

// <0044A87F> utils/materialsystem2utils.cpp:3374
// variables: 4
// function calls: 38
void CMaterialSystem2Utils::PrepareForRender(IRenderContext* pRenderContext, const IMaterial2* pMaterial, const CRenderAttributes* pAttributes, HRenderTexture hTexture, RenderViewport_t* pViewport, MaterialRenderablePass_t* pPasses, int nMaxPasses, const IMaterialMode ** pModeUsed)
{
	RenderViewport_t localViewport; // 3383
	const IMaterialMode* pMode; // 3389
	int nPasses; // 3401
	{
		CRenderAttributes localAttributes; // 3457
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 3420
		CStrongHandle<InfoForResourceTypeIMaterial2>::GetData(); // 3432
		CUtlStringToken::CUtlStringToken(); // 3437
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 693
		IRenderContext::ResetMaterialStateHint(); // 3469
		CStrongHandle<InfoForResourceTypeIMaterial2>::GetData(); // 3458
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 3460
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
				int32 nSingleMipLevelToBind);  // 3460
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
		CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 3422
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 3422
	}
	RenderViewport_t::RenderViewport_t(); // 3383
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 3411
	CUtlStringToken::CUtlStringToken(); // 3411
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 148
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 126
	IMaterialSystem2Utils::SetMaterialModeOrTexture(
				IRenderContext* pCtx,
				const IMaterialMode* pMode,
				const CRenderAttributes* pAttributes,
				uint64 nKey,
				HRenderTexture hTexture,
				bool bForce);  // 122
	IMaterialSystem2Utils::SetMaterialModeOrTexture(
				IRenderContext* pCtx,
				const IMaterialMode* pMode,
				const CRenderAttributes* pAttributes,
				uint64 nKey,
				HRenderTexture hTexture,
				bool bForce);  // 148
	IMaterialSystem2Utils::SetMaterialOrTexture(
				IRenderContext* pCtx,
				const IMaterial2* pMaterial,
				const CRenderAttributes* pAttributes,
				uint64 nKey,
				HRenderTexture hTexture,
				const CUtlStringToken& shaderMode,
				bool bForce);  // 3411
} /* size: 818, variables: 3, inline expansions: 11 (431 bytes) */

// <0044A65C> utils/materialsystem2utils.cpp:3478
// variables: 2
// function calls: 8
void CMaterialSystem2Utils::HasQueuedRender(CUtlStringToken viewportName)
{
	uint16 index; // 3480
	ViewportLayoutList_t& viewLayoutList; // 3485
	FindAltKeyType<CUtlStringToken>(const CUtlRBTree<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int, CUtlMap<CUtlStringToken, int>::CKeyLess this,
					const CUtlStringToken& search);  // 243
	CUtlMap<CUtlStringToken, int, short unsigned int, bool (::Find(
		const KeyType_t& key);  // 3480
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int>, short unsigned int>::operator[](
			short unsigned int i);  // 539
	Element(const CUtlRBTree<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int, CUtlMap<CUtlStringToken, int>::CKeyLess, CUtl this,
		short unsigned int i);  // 92
	CUtlMap<CUtlStringToken, int, short unsigned int, bool (::operator[](
			IndexType_t i);  // 3485
	CUtlMemory<CUtlVector<IQueuedRenderable::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlVector<IQueuedRenderable::operator[](
			int i);  // 3485
	CUtlVectorBase<IQueuedRenderable::Count(); // 3486
} /* size: 91, variables: 2, inline expansions: 8 (59 bytes) */

// <0044A359> utils/materialsystem2utils.cpp:3489
// variables: 3
// function calls: 10
void CMaterialSystem2Utils::RenderFrame(IRenderContext* pRenderContext, CUtlStringToken viewportName)
{
	uint16 index; // 3491
	{
		ViewportLayoutList_t& viewLayoutList; // 3495
		{
			int i; // 3496
			CUtlVectorBase<IQueuedRenderable::Count(); // 3496
			CUtlMemory<IQueuedRenderable::operator[](
					int i);  // 588
			CUtlVectorBase<IQueuedRenderable::operator[](
					int i);  // 3498
		}
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int>, short unsigned int>::operator[](
				short unsigned int i);  // 539
		Element(const CUtlRBTree<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int, CUtlMap<CUtlStringToken, int>::CKeyLess, CUtl this,
			short unsigned int i);  // 92
		CUtlMap<CUtlStringToken, int, short unsigned int, bool (::operator[](
				IndexType_t i);  // 3495
		CUtlMemory<CUtlVector<IQueuedRenderable::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlVector<IQueuedRenderable::operator[](
				int i);  // 3495
	}
	FindAltKeyType<CUtlStringToken>(const CUtlRBTree<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int, CUtlMap<CUtlStringToken, int>::CKeyLess this,
					const CUtlStringToken& search);  // 243
	CUtlMap<CUtlStringToken, int, short unsigned int, bool (::Find(
		const KeyType_t& key);  // 3491
} /* size: 136, variables: 1, inline expansions: 2 (31 bytes) */

// <0044A2C8> utils/materialsystem2utils.cpp:3506
// variable: 1
// function call: 1
void CMaterialSystem2Utils::Flush()
{
	{
		int i; // 3508
		CUtlVectorBase<CUtlVector<IQueuedRenderable::Count(); // 3508
	}
} /* size: 65 */

// <00449D20> utils/materialsystem2utils.cpp:3516
// variables: 4
// function calls: 23
void CMaterialSystem2Utils::GetLayoutList(CUtlStringToken viewportName)
{
	uint16 index; // 3518
	const char   __FUNCTION__; // 57985
	{
		int newListIndex; // 3521
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3523
		}
		CUtlMemory<CUtlVector<IQueuedRenderable::NumAllocated(); // 1143
		CUtlMemory<CUtlVector<IQueuedRenderable::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlVector<IQueuedRenderable::Element(
			int i);  // 1148
		CUtlMemory<IQueuedRenderable::ValidateGrowSize(); // 475
		CUtlMemory<IQueuedRenderable::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<IQueuedRenderable::ResetDbgInfo(); // 530
		CUtlVectorBase<IQueuedRenderable::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<IQueuedRenderable::CUtlVector(); // 1479
		Construct<CUtlVector<IQueuedRenderable*> >(CUtlVector<IQueuedRenderable*, CUtlMemory<IQueuedRenderable*, int> >* pMemory); // 1148
		CUtlMemory<CUtlVector<IQueuedRenderable::Base(); // 112
		CUtlVectorBase<CUtlVector<IQueuedRenderable::Base(); // 368
		CUtlVectorBase<CUtlVector<IQueuedRenderable::ResetDbgInfo(); // 824
		CUtlVectorBase<CUtlVector<IQueuedRenderable::GrowMemory(
				int num);  // 1145
		CUtlVectorBase<CUtlVector<IQueuedRenderable::AddToTail(); // 3521
		Node_t::Node_t(
			const KeyType_t& k,
			const ElemType_t& e);  // 207
		CUtlMap<CUtlStringToken, int, short unsigned int, bool (::Insert(
			const KeyType_t& key,
			const ElemType_t& insert,
			ERBTreeInsertBehavior eInsertBehavior);  // 3522
	}
	FindAltKeyType<CUtlStringToken>(const CUtlRBTree<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int, CUtlMap<CUtlStringToken, int>::CKeyLess this,
					const CUtlStringToken& search);  // 243
	CUtlMap<CUtlStringToken, int, short unsigned int, bool (::Find(
		const KeyType_t& key);  // 3518
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int>, short unsigned int>::operator[](
			short unsigned int i);  // 539
	Element(const CUtlRBTree<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int, CUtlMap<CUtlStringToken, int>::CKeyLess, CUtl this,
		short unsigned int i);  // 92
	CUtlMap<CUtlStringToken, int, short unsigned int, bool (::operator[](
			IndexType_t i);  // 3525
	CUtlMemory<CUtlVector<IQueuedRenderable::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlVector<IQueuedRenderable::operator[](
			int i);  // 3525
} /* size: 0, variables: 2, inline expansions: 7 (97 bytes) */

// <0044982E> utils/materialsystem2utils.cpp:3532
// variable: 1
// function calls: 22
void CMaterialSystem2Utils::DestroyLayoutObjects(int index)
{
	{
		int i; // 3534
		CUtlMemory<CUtlVector<IQueuedRenderable::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlVector<IQueuedRenderable::operator[](
				int i);  // 3534
		CUtlVectorBase<IQueuedRenderable::Count(); // 3534
		CBaseQueuedRenderable::ShouldDestroy(); // 3536
		CUtlMemory<CUtlVector<IQueuedRenderable::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlVector<IQueuedRenderable::operator[](
				int i);  // 3536
		CUtlMemory<IQueuedRenderable::operator[](
				int i);  // 588
		CUtlVectorBase<IQueuedRenderable::operator[](
				int i);  // 3536
		CUtlMemory<CUtlVector<IQueuedRenderable::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlVector<IQueuedRenderable::operator[](
				int i);  // 3538
		CUtlMemory<IQueuedRenderable::operator[](
				int i);  // 588
		CUtlVectorBase<IQueuedRenderable::operator[](
				int i);  // 3538
		CUtlMemory<CUtlVector<IQueuedRenderable::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlVector<IQueuedRenderable::operator[](
				int i);  // 3539
		CUtlMemory<IQueuedRenderable::operator[](
				int i);  // 602
		CUtlVectorBase<IQueuedRenderable::Element(
			int i);  // 1114
		CUtlMemory<IQueuedRenderable::operator[](
				int i);  // 602
		CUtlVectorBase<IQueuedRenderable::Element(
			int i);  // 1114
		memmove(void* __dest,
			const void* __src,
			size_t __len);  // 115
		V_memmove(void* dest,
				const void* src,
				size_t count);  // 1114
		CUtlVectorBase<IQueuedRenderable::ShiftElementsLeft(
					int elem,
					int num);  // 1608
		CUtlVectorBase<IQueuedRenderable::Remove(
			int elem);  // 3539
	}
} /* size: 263 */

// <0044857F> utils/materialsystem2utils.cpp:3554
// variables: 9
// function calls: 74
void CMaterialSystem2Utils::AllocateCompressionTexturesGPU(ImageFormat nFormat, int32 nWidth, int32 nHeight, int32 nNumMipLevels, const char* pDebugName, HRenderTextureStrong* pCompressedOutputTex, CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCT intermediateOutputTextures)
{
	const char   __FUNCTION__; // 58389
	CTextureCreationDesc textureDesc; // 3570
	{
		int __executeCount; // 3559
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3563
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3568
	}
	{
		int32 nMip; // 3587
		{
			CTextureCreationDesc intermediateTextureDesc; // 3589
			CUtlString strBaseName; // 3602
			HRenderTexture hIntermediateTex; // 3604
			CUtlString::Get(); // 161
			V_strlen(const char* str); // 393
			CUtlString::Length(); // 161
			CUtlString::operator=(
					const CUtlString& src);  // 3603
			CUtlString::~CUtlString(); // 3603
			CUtlString::Get(); // 99
			CUtlString::String(); // 3604
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 83
			CFmtStrN<256>::operator char const*(); // 3604
			CBufferString::~CBufferString(); // 587
			CBufferStringN<256>::~CBufferStringN(); // 41
			CFmtStrN<256>::~CFmtStrN(); // 3604
			CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandleCopyable<InfoForReso this,
					int i);  // 3605
			CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 673
			CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 239
			CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 3605
			Max<int>(const int& val1,
				const int& val2);  // 3608
			Max<int>(const int& val1,
				const int& val2);  // 3609
			CUtlString::~CUtlString(); // 3610
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
			CTextureCreationDesc::~CTextureCreationDesc(); // 3610
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
			CTextureCreationDesc::CTextureCreationDesc(); // 3589
			Max<int>(const int& val1,
				const int& val2);  // 3592
			CUtlString::CUtlString(
					const char* pString);  // 3602
			Vector4D::Init(
				vec_t ix,
				vec_t iy,
				vec_t iz,
				vec_t iw);  // 3596
			Max<int>(const int& val1,
				const int& val2);  // 3593
		}
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
	CTextureCreationDesc::CTextureCreationDesc(); // 3570
	Vector4D::operator=(
			const Vector4D& vOther);  // 3576
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 3576
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 673
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 3581
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
	CTextureCreationDesc::~CTextureCreationDesc(); // 3614
} /* size: 0, variables: 2, inline expansions: 26 (423 bytes) */

// <00445B7C> utils/materialsystem2utils.cpp:3619
// variables: 17
// function calls: 160
void CMaterialSystem2Utils::CompressTextureGPU(EGPUTextureCompressOptions_t eOptions, IRenderContext* pRenderContext, HRenderTexture hSrcTexture, HRenderTexture hDestTexture, const CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandleCopyable<InfoForResource intermediateOutputTextures, int32 nNumMipLevels)
{
	const CTextureDesc* pDestDesc; // 3628
	const char   __FUNCTION__; // 58115
	const CTextureDesc* pSrcDesc; // 3630
	int nWidth; // 3662
	int nHeight; // 3663
	int nMipLevel; // 3664
	{
		int __executeCount; // 3624
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3629
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3631
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3636
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3642
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3646
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3647
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3652
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3659
	}
	{
		CRenderAttributes& attributes; // 3669
		{
			int32 nMipToCopy; // 3701
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 3703
			CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandleCopyable<InfoF this,
					int i);  // 3703
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
						ResourceHandle_t hUntypedResource);  // 227
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
			CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 3703
		}
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 3681
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
				int32 nSingleMipLevelToBind);  // 3681
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 3682
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
				int32 nSingleMipLevelToBind);  // 3682
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 3683
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
				int32 nSingleMipLevelToBind);  // 3683
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
			const CUtlStringToken& nTok,
			IntVector4D nValue);  // 515
		CRenderAttributes::SetComboValue(
				CUtlStringToken nTokenID,
				uint8 nValue);  // 3691
		CStrongHandle<InfoForResourceTypeIMaterial2>::operator->(); // 3693
		CUtlStringToken::CUtlStringToken(); // 3693
		CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandleCopyable<InfoF this,
				int i);  // 3687
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
		CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 3687
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
				int32 nSingleMipLevelToBind);  // 3687
		CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandleCopyable<InfoF this,
				int i);  // 3688
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
		CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 3688
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
				int32 nSingleMipLevelToBind);  // 3688
		CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandleCopyable<InfoF this,
				int i);  // 3689
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
		CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 3689
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
				int32 nSingleMipLevelToBind);  // 3689
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 3712
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
				int32 nSingleMipLevelToBind);  // 3712
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
			const CUtlStringToken& nTok,
			IntVector4D nValue);  // 515
		CRenderAttributes::SetComboValue(
				CUtlStringToken nTokenID,
				uint8 nValue);  // 3718
		CStrongHandle<InfoForResourceTypeIMaterial2>::operator->(); // 3720
		CUtlStringToken::CUtlStringToken(); // 3720
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 3728
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
					ResourceHandle_t hUntypedResource);  // 227
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
		CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 3728
		CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandleCopyable<InfoF this,
				int i);  // 3728
		CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandleCopyable<InfoF this,
				int i);  // 3716
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
		CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 3716
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
				int32 nSingleMipLevelToBind);  // 3716
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 3671
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
				int32 nSingleMipLevelToBind);  // 3671
		CUtlStringToken::CUtlStringToken(
				const char& str);  // 3671
		CUtlStringToken::CUtlStringToken(
				const char& str);  // 3672
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
			const CUtlStringToken& nTok,
			IntVector4D nValue);  // 456
		CRenderAttributes::SetIntValue(
				CUtlStringToken nTokenID,
				int nValue);  // 3672
		operator&(EGPUTextureCompressOptions_t a,
				EGPUTextureCompressOptions_t b);  // 3673
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
			const CUtlStringToken& nTok,
			IntVector4D nValue);  // 515
		CRenderAttributes::SetComboValue(
				CUtlStringToken nTokenID,
				uint8 nValue);  // 3673
		operator&(EGPUTextureCompressOptions_t a,
				EGPUTextureCompressOptions_t b);  // 3674
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
			const CUtlStringToken& nTok,
			IntVector4D nValue);  // 515
		CRenderAttributes::SetComboValue(
				CUtlStringToken nTokenID,
				uint8 nValue);  // 3674
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 3628
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 3630
	Count(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandleCopyable<InfoF this); // 3642
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 3636
} /* size: 0, variables: 6, inline expansions: 6 (56 bytes) */

