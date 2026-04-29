
//
// fontmanager/texturedictionary.cpp
//
//	referenced by: libmaterialsystem2.so
//
//	functions: 83
//	classes: 2
//

// <005883BD> fontmanager/texturedictionary.cpp:22
uint32 Texture_Checksum(const char* string)
{
} /* size: 0 */

// <0056F07B> fontmanager/texturedictionary.cpp:30
// member functions: 54
// member variables: 17
// class size: 96
class CMatSystemTexture {
	/* fontmanager/texturedictionary.cpp:33 */
	void CMatSystemTexture(CMatSystemTexture* , HRenderTexture);
	/* fontmanager/texturedictionary.cpp:34 */
	void CMatSystemTexture(CMatSystemTexture* , const CMatSystemTexture& );
	/* fontmanager/texturedictionary.cpp:35 */
	void ~CMatSystemTexture(CMatSystemTexture* );
	/* fontmanager/texturedictionary.cpp:37 */
	uint32 GetChecksum(const CMatSystemTexture* );
	/* fontmanager/texturedictionary.cpp:39 */
	void SetMaterial(CMatSystemTexture* , const char* , uint32);
	/* fontmanager/texturedictionary.cpp:40 */
	void SetTextureHandle(CMatSystemTexture* , HRenderTexture, uint32);
	/* fontmanager/texturedictionary.cpp:41 */
	void SetMaterialHandle(CMatSystemTexture* , HMaterial, uint32, CRenderAttributes* );
	/* fontmanager/texturedictionary.cpp:42 */
	void SetFromUnknownHandle(CMatSystemTexture* , ResourceHandle_t, uint32);
	/* fontmanager/texturedictionary.cpp:45 */
	void StreamingFinished(CMatSystemTexture* );
	/* fontmanager/texturedictionary.cpp:46 */
	bool TestForStreamingFinish(CMatSystemTexture* , bool);
	/* fontmanager/texturedictionary.cpp:48 */
	HRenderTexture GetTextureHandle(CMatSystemTexture* );
	/* fontmanager/texturedictionary.cpp:49 */
	HRenderTexture GetTextureHandle(const CMatSystemTexture* );
	/* fontmanager/texturedictionary.cpp:50 */
	HMaterial GetMaterial2Handle(const CMatSystemTexture* );
	/* fontmanager/texturedictionary.cpp:51 */
	CRenderAttributes* GetRenderAttributes(const CMatSystemTexture* );
	/* fontmanager/texturedictionary.cpp:52 */
	const char* GetRequestedButNotFoundMaterialName(const CMatSystemTexture* );
	/* fontmanager/texturedictionary.cpp:53 */
	bool IsTextureHandleValid(const CMatSystemTexture* );
	/* fontmanager/texturedictionary.cpp:54 */
	bool IsTextureHandleLoaded(const CMatSystemTexture* );
	/* fontmanager/texturedictionary.cpp:56 */
	int Width(const CMatSystemTexture* );
	/* fontmanager/texturedictionary.cpp:57 */
	int Height(const CMatSystemTexture* );
	/* fontmanager/texturedictionary.cpp:59 */
	void SetTextureRGBA(CMatSystemTexture* , IRenderDevice* , const char* , const char* , int, int, ImageFormat);
	/* fontmanager/texturedictionary.cpp:60 */
	void SetSubTextureRGBA(CMatSystemTexture* , IRenderDevice* , int, int, const unsigned char* , int, int);
	/* fontmanager/texturedictionary.cpp:63 */
	bool GetTexCoordOffsetAndScale(CMatSystemTexture* , Vector2D& , Vector2D& );
	/* fontmanager/texturedictionary.cpp:64 */
	void SetTexCoordOffsetAndScale(CMatSystemTexture* , const Vector2D& , const Vector2D& );
	float m_s0; /* 0 4 */
	float m_t0; /* 4 4 */
	float m_s1; /* 8 4 */
	float m_t1; /* 12 4 */
	/* fontmanager/texturedictionary.cpp:68 */
	void SetMissingMaterialName(CMatSystemTexture* , const char* );
	/* fontmanager/texturedictionary.cpp:70 */
	bool IsStreamingIn(CMatSystemTexture* );
private:
	/* fontmanager/texturedictionary.cpp:73 */
	void CleanUpMaterial(CMatSystemTexture* );
	/* fontmanager/texturedictionary.cpp:74 */
	void StoreTextureSizingData(CMatSystemTexture* );
	uint32 m_fileChecksum; /* 16 4 */
	HRenderTextureStrong m_hTexture; /* 24 8 */
	HMaterialStrong m_hMaterial; /* 32 8 */
	char * m_pMissingMaterialName; /* 40 8 */
	CRenderAttributes * m_pRenderAttrs; /* 48 8 */
	int m_iWide; /* 56 4 */
	int m_iTall; /* 60 4 */
	int m_iInputWide; /* 64 4 */
	int m_iInputTall; /* 68 4 */
	Vector2D m_vOffset; /* 72 8 */
	Vector2D m_vScale; /* 80 8 */
	bool m_bOffsetOrScaleModified; /* 88 1 */
	bool m_bStreamingIn; /* 89 1 */
	void CMatSystemTexture(class CMatSystemTexture *, HRenderTexture); /* linkage=_ZN17CMatSystemTextureC4E11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	void CMatSystemTexture(class CMatSystemTexture *, const class CMatSystemTexture  &); /* linkage=_ZN17CMatSystemTextureC4ERKS_ */
	void ~CMatSystemTexture(class CMatSystemTexture *); /* linkage=_ZN17CMatSystemTextureD4Ev */
	/* <58d00f> fontmanager/texturedictionary.cpp:267 */
	uint32 GetChecksum(const class CMatSystemTexture  *); /* linkage=_ZNK17CMatSystemTexture11GetChecksumEv */
	void SetMaterial(class CMatSystemTexture *, const char  *, uint32); /* linkage=_ZN17CMatSystemTexture11SetMaterialEPKcj */
	void SetTextureHandle(class CMatSystemTexture *, HRenderTexture, uint32); /* linkage=_ZN17CMatSystemTexture16SetTextureHandleE11CWeakHandleI31InfoForResourceTypeCTextureBaseEj */
	void SetMaterialHandle(class CMatSystemTexture *, HMaterial, uint32, class CRenderAttributes *); /* linkage=_ZN17CMatSystemTexture17SetMaterialHandleE11CWeakHandleI29InfoForResourceTypeIMaterial2EjP17CRenderAttributes */
	void SetFromUnknownHandle(class CMatSystemTexture *, ResourceHandle_t, uint32); /* linkage=_ZN17CMatSystemTexture20SetFromUnknownHandleEPK21ResourceBindingBase_tj */
	/* <58d8ce> fontmanager/texturedictionary.cpp:403 */
	void StreamingFinished(class CMatSystemTexture *); /* linkage=_ZN17CMatSystemTexture17StreamingFinishedEv */
	bool TestForStreamingFinish(class CMatSystemTexture *, bool); /* linkage=_ZN17CMatSystemTexture22TestForStreamingFinishEb */
	HRenderTexture GetTextureHandle(class CMatSystemTexture *); /* linkage=_ZN17CMatSystemTexture16GetTextureHandleEv */
	HRenderTexture GetTextureHandle(const class CMatSystemTexture  *); /* linkage=_ZNK17CMatSystemTexture16GetTextureHandleEv */
	HMaterial GetMaterial2Handle(const class CMatSystemTexture  *); /* linkage=_ZNK17CMatSystemTexture18GetMaterial2HandleEv */
	class CRenderAttributes * GetRenderAttributes(const class CMatSystemTexture  *); /* linkage=_ZNK17CMatSystemTexture19GetRenderAttributesEv */
	const char  * GetRequestedButNotFoundMaterialName(const class CMatSystemTexture  *); /* linkage=_ZNK17CMatSystemTexture35GetRequestedButNotFoundMaterialNameEv */
	bool IsTextureHandleValid(const class CMatSystemTexture  *); /* linkage=_ZNK17CMatSystemTexture20IsTextureHandleValidEv */
	bool IsTextureHandleLoaded(const class CMatSystemTexture  *); /* linkage=_ZNK17CMatSystemTexture21IsTextureHandleLoadedEv */
	int Width(const class CMatSystemTexture  *); /* linkage=_ZNK17CMatSystemTexture5WidthEv */
	int Height(const class CMatSystemTexture  *); /* linkage=_ZNK17CMatSystemTexture6HeightEv */
	void SetTextureRGBA(class CMatSystemTexture *, class IRenderDevice *, const char  *, const char  *, int, int, enum ImageFormat); /* linkage=_ZN17CMatSystemTexture14SetTextureRGBAEP13IRenderDevicePKcS3_ii11ImageFormat */
	void SetSubTextureRGBA(class CMatSystemTexture *, class IRenderDevice *, int, int, const unsigned char  *, int, int); /* linkage=_ZN17CMatSystemTexture17SetSubTextureRGBAEP13IRenderDeviceiiPKhii */
	/* <58ceb4> fontmanager/texturedictionary.cpp:253 */
	bool GetTexCoordOffsetAndScale(class CMatSystemTexture *, class Vector2D &, class Vector2D &); /* linkage=_ZN17CMatSystemTexture25GetTexCoordOffsetAndScaleER8Vector2DS1_ */
	/* <58cf6a> fontmanager/texturedictionary.cpp:260 */
	void SetTexCoordOffsetAndScale(class CMatSystemTexture *, const class Vector2D  &, const class Vector2D  &); /* linkage=_ZN17CMatSystemTexture25SetTexCoordOffsetAndScaleERK8Vector2DS2_ */
	/* <58d038> fontmanager/texturedictionary.cpp:492 */
	void SetMissingMaterialName(class CMatSystemTexture *, const char  *); /* linkage=_ZN17CMatSystemTexture22SetMissingMaterialNameEPKc */
	bool IsStreamingIn(class CMatSystemTexture *); /* linkage=_ZN17CMatSystemTexture13IsStreamingInEv */
	/* <58d090> fontmanager/texturedictionary.cpp:148 */
	void CleanUpMaterial(class CMatSystemTexture *); /* linkage=_ZN17CMatSystemTexture15CleanUpMaterialEv */
	void StoreTextureSizingData(class CMatSystemTexture *); /* linkage=_ZN17CMatSystemTexture22StoreTextureSizingDataEv */
};

// <005883A4> fontmanager/texturedictionary.cpp:48
inline void CMatSystemTexture::GetTextureHandle()
{
} /* size: 0 */

// <0058838B> fontmanager/texturedictionary.cpp:56
inline void CMatSystemTexture::Width()
{
} /* size: 0 */

// <00588372> fontmanager/texturedictionary.cpp:57
inline void CMatSystemTexture::Height()
{
} /* size: 0 */

// <00588359> fontmanager/texturedictionary.cpp:70
inline void CMatSystemTexture::IsStreamingIn()
{
} /* size: 0 */

// <00587EF4> fontmanager/texturedictionary.cpp:98
// function calls: 20
void CMatSystemTexture::CMatSystemTexture(HRenderTexture hExternallyLoadedTexture)
{
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(); // 98
	CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(); // 98
	Vector2D::Vector2D(); // 98
	Vector2D::Vector2D(); // 98
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 100
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 100
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 101
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator=(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 101
	Vector2D::Init(
		vec_t ix,
		vec_t iy);  // 109
	Vector2D::Init(
		vec_t ix,
		vec_t iy);  // 110
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 113
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator!=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 113
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 115
} /* size: 148, inline expansions: 20 (35 bytes) */

// <00587ECD> fontmanager/texturedictionary.cpp:98
void CMatSystemTexture::CMatSystemTexture(HRenderTexture hExternallyLoadedTexture)
{
} /* size: 0 */

// <00587C18> fontmanager/texturedictionary.cpp:121
// function calls: 12
void CMatSystemTexture::CMatSystemTexture(const CMatSystemTexture& copyFrom)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 127
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 476
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 127
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeIMaterial2>::GetHandle(); // 128
	CWeakHandle<InfoForResourceTypeIMaterial2>::GetBinding(); // 476
	CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 128
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 135
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 136
} /* size: 158, inline expansions: 12 (52 bytes) */

// <00587BF1> fontmanager/texturedictionary.cpp:121
void CMatSystemTexture::CMatSystemTexture(const CMatSystemTexture& copyFrom)
{
} /* size: 0 */

// <00587915> fontmanager/texturedictionary.cpp:143
// function calls: 13
void CMatSystemTexture::~CMatSystemTexture()
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 150
	CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 150
	CStrongHandle<InfoForResourceTypeIMaterial2>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator=(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 151
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 151
	CMatSystemTexture::CleanUpMaterial(); // 145
	CStrongHandle<InfoForResourceTypeIMaterial2>::~CStrongHandle(); // 146
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 146
} /* size: 0, inline expansions: 13 (0 bytes) */

// <005878FA> fontmanager/texturedictionary.cpp:143
void CMatSystemTexture::~CMatSystemTexture()
{
} /* size: 0 */

// <0058D090> fontmanager/texturedictionary.cpp:148
// function calls: 10
void CMatSystemTexture::CleanUpMaterial()
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 150
	CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 150
	CStrongHandle<InfoForResourceTypeIMaterial2>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator=(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 151
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 151
} /* size: 0, inline expansions: 10 (0 bytes) */

// <005878DF> fontmanager/texturedictionary.cpp:148
void CMatSystemTexture::CleanUpMaterial()
{
} /* size: 0 */

// <005878A9> fontmanager/texturedictionary.cpp:166
inline void CMatSystemTexture::GetMaterial2Handle()
{
} /* size: 0 */

// <0058788E> fontmanager/texturedictionary.cpp:171
inline void CMatSystemTexture::GetRenderAttributes()
{
} /* size: 0 */

// <00587873> fontmanager/texturedictionary.cpp:176
inline void CMatSystemTexture::IsTextureHandleValid()
{
} /* size: 0 */

// <00587858> fontmanager/texturedictionary.cpp:186
inline void CMatSystemTexture::GetRequestedButNotFoundMaterialName()
{
} /* size: 0 */

// <0058708B> fontmanager/texturedictionary.cpp:196
// variables: 6
// function calls: 28
void CMatSystemTexture::SetTextureRGBA(IRenderDevice* pRenderDevice, const char* pPrefix, const char* rgba, int width, int height, ImageFormat format)
{
	const char   __FUNCTION__; // 29578
	{
		intp s_UniqueID; // 203
		CTextureCreationDesc spec; // 204
		char pResourceName; // 213
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 205
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 207
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
		CTextureCreationDesc::CTextureCreationDesc(); // 204
		CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 673
		CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 215
		CUtlMemory<TextureCreationExtraData_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<TextureCreationExtraData_t, int>::Purge(); // 903
		CUtlMemory<TextureCreationExtraData_t, int>::Purge(); // 1799
		CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::RemoveAll(); // 1798
		CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::Purge(); // 560
		ValidateAlignment<TextureCreationExtraData_t>(void); // 508
		CUtlMemory<TextureCreationExtraData_t, int>::Purge(); // 510
		CUtlMemory<TextureCreationExtraData_t, int>::~CUtlMemory(); // 562
		CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::~CUtlVector(); // 234
		CTextureCreationDesc::~CTextureCreationDesc(); // 217
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 201
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator==(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 201
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <00586BEA> fontmanager/texturedictionary.cpp:231
// variables: 4
// function calls: 16
void CMatSystemTexture::SetSubTextureRGBA(IRenderDevice* pRenderDevice, int drawX, int drawY, const unsigned char* rgba, int subTextureWide, int subTextureTall)
{
	const char   __FUNCTION__; // 29649
	CRenderContextPtr pRenderContext; // 242
	Rect3D_t myRect; // 243
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 236
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 236
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator!=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 236
	CRenderContextPtr::CRenderContextPtr<>(
				IRenderDevice* pDevice,
				const char* pDebugStringFmt);  // 242
	CRenderContextPtr::operator->(); // 250
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 250
	CRenderContextPtr::Release(); // 845
	CRenderContextPtr::~CRenderContextPtr(); // 251
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 237
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator==(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 237
} /* size: 0, variables: 3, inline expansions: 16 (139 bytes) */

// <0058CEB4> fontmanager/texturedictionary.cpp:253
// function calls: 2
void CMatSystemTexture::GetTexCoordOffsetAndScale(Vector2D& vOffset, Vector2D& vScale)
{
	Vector2D::operator=(
			const Vector2D& vOther);  // 255
	Vector2D::operator=(
			const Vector2D& vOther);  // 256
} /* size: 0, inline expansions: 2 (0 bytes) */

// <00586BB7> fontmanager/texturedictionary.cpp:253
void CMatSystemTexture::GetTexCoordOffsetAndScale(Vector2D& vOffset, Vector2D& vScale)
{
} /* size: 0 */

// <0058CF6A> fontmanager/texturedictionary.cpp:260
// function calls: 2
void CMatSystemTexture::SetTexCoordOffsetAndScale(const Vector2D& vOffset, const Vector2D& vScale)
{
	Vector2D::operator=(
			const Vector2D& vOther);  // 262
	Vector2D::operator=(
			const Vector2D& vOther);  // 263
} /* size: 0, inline expansions: 2 (0 bytes) */

// <00586B81> fontmanager/texturedictionary.cpp:260
void CMatSystemTexture::SetTexCoordOffsetAndScale(const Vector2D& vOffset, const Vector2D& vScale)
{
} /* size: 0 */

// <0058D00F> fontmanager/texturedictionary.cpp:267
void CMatSystemTexture::GetChecksum()
{
} /* size: 0 */

// <005866FA> fontmanager/texturedictionary.cpp:275
// function calls: 19
void CMatSystemTexture::SetTextureHandle(HRenderTexture hTexture, uint32 filenameChecksum)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 150
	CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 150
	CStrongHandle<InfoForResourceTypeIMaterial2>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator=(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 151
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 151
	CMatSystemTexture::CleanUpMaterial(); // 278
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 673
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 280
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 282
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator==(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 282
	CStrongHandle<InfoForResourceTypeCTextureBase>::IsLoaded(); // 290
	CMatSystemTexture::SetMissingMaterialName(
				const char* szName);  // 295
} /* size: 227, inline expansions: 19 (220 bytes) */

// <00586092> fontmanager/texturedictionary.cpp:301
// function calls: 28
void CMatSystemTexture::SetMaterialHandle(HMaterial hMaterial, uint32 filenameChecksum, CRenderAttributes* pMaterialSpecificRenderAttrs)
{
	CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 150
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 150
	CStrongHandle<InfoForResourceTypeIMaterial2>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator=(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 151
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 151
	CMatSystemTexture::CleanUpMaterial(); // 304
	CWeakHandle<InfoForResourceTypeIMaterial2>::GetBinding(); // 673
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator=(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 306
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 309
	CWeakHandle<InfoForResourceTypeIMaterial2>::operator==(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& hResource);  // 309
	CMatSystemTexture::SetMissingMaterialName(
				const char* szName);  // 317
	CStrongHandle<InfoForResourceTypeIMaterial2>::IsLoaded(); // 320
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeIMaterial2>(const CWeakHandle<InfoForResourceTypeIMaterial2>& hResource); // 326
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 673
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 326
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 328
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator!=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 328
	CStrongHandle<InfoForResourceTypeCTextureBase>::IsLoaded(); // 330
} /* size: 0, inline expansions: 28 (285 bytes) */

// <00585F12> fontmanager/texturedictionary.cpp:340
// variables: 3
// function calls: 5
void CMatSystemTexture::StoreTextureSizingData()
{
	{
		const CTextureDesc* pTexDesc; // 345
		float flPixelCenterX; // 350
		float flPixelCenterY; // 351
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
					ResourceHandle_t hUntypedResource);  // 227
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
		CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 345
	}
	CStrongHandle<InfoForResourceTypeCTextureBase>::HasData(); // 342
} /* size: 238, inline expansions: 1 (23 bytes) */

// <0058560E> fontmanager/texturedictionary.cpp:374
// variables: 4
// function calls: 32
void CMatSystemTexture::SetFromUnknownHandle(ResourceHandle_t hResource, uint32 filenameChecksum)
{
	const char   __FUNCTION__; // 29720
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 376
	}
	{
		CBufferString resourceName; // 388
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 388
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 776
		CBufferString::String(); // 390
		CBufferString::~CBufferString(); // 391
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 396
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 234
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
	FromUntypedHandle(ResourceHandle_t hResource); // 392
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 234
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
	CWeakHandle<InfoForResourceTypeIMaterial2>::InitUntyped(
			ResourceHandle_t hUntypedResource);  // 306
	CWeakHandle<InfoForResourceTypeIMaterial2>::InitUntyped(
			ResourceHandle_t hUntypedResource);  // 235
	FromUntypedHandle(ResourceHandle_t hResource); // 383
} /* size: 0, variables: 1, inline expansions: 8 (913 bytes) */

// <0058D8CE> fontmanager/texturedictionary.cpp:403
void CMatSystemTexture::StreamingFinished()
{
} /* size: 0 */

// <0058D568> fontmanager/texturedictionary.cpp:403
// variable: 1
// function calls: 12
void CMatSystemTexture::StreamingFinished()
{
	CStrongHandle<InfoForResourceTypeIMaterial2>::HasData(); // 408
	{
		HRenderTextureStrong hTexture; // 410
		CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
		CStrongHandle<InfoForResourceTypeIMaterial2>::GetHandle(); // 410
		CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 476
		CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 410
		CStrongHandle<InfoForResourceTypeCTextureBase>::operator!=(
				const CStrongHandle<InfoForResourceTypeCTextureBase>& hResource);  // 411
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 604
		CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
			const CStrongHandle<InfoForResourceTypeCTextureBase>& src);  // 666
		CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CStrongHandle<InfoForResourceTypeCTextureBase>& src);  // 413
		CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 415
	}
} /* size: 216, inline expansions: 1 (21 bytes) */

// <005855E3> fontmanager/texturedictionary.cpp:403
// variable: 1
void CMatSystemTexture::StreamingFinished()
{
	{
		HRenderTextureStrong hTexture; // 410
	}
} /* size: 0 */

// <00584C85> fontmanager/texturedictionary.cpp:421
// variables: 5
// function calls: 37
void CMatSystemTexture::TestForStreamingFinish(bool bOnlyRequireFirstTexture)
{
	{
		CUtlVectorFixedGrowableCompat<IMaterial2::TextureAttributeValue_t, 8> texAttrs; // 430
		bool bDidFirst; // 431
		bool bFirstIsLoaded; // 432
		bool bAnyUnloaded; // 433
		{
			int i; // 435
			CUtlVectorBase<IMaterial2::TextureAttributeValue_t, CUtlMemory<IMaterial2::TextureAttributeValue_t, int> >::Count(); // 435
			CUtlMemory<IMaterial2::TextureAttributeValue_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<IMaterial2::TextureAttributeValue_t, CUtlMemory<IMaterial2::TextureAttributeValue_t, int> >::operator[](
					int i);  // 440
			CStrongHandle<InfoForResourceTypeCTextureBase>::operator!=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 440
			CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 442
			CStrongHandle<InfoForResourceTypeCTextureBase>::IsLoaded(); // 445
			CUtlMemory<IMaterial2::TextureAttributeValue_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<IMaterial2::TextureAttributeValue_t, CUtlMemory<IMaterial2::TextureAttributeValue_t, int> >::operator[](
					int i);  // 449
			CWeakHandle<InfoForResourceTypeCTextureBase>::IsLoaded(); // 449
		}
		CUtlMemory<IMaterial2::TextureAttributeValue_t, int>::CUtlMemory(
				TextureAttributeValue_t* pMemory,
				int numElements,
				bool bGrowable,
				uint32 nGrowable_GrowSize);  // 535
		CUtlVectorBase<IMaterial2::TextureAttributeValue_t, CUtlMemory<IMaterial2::TextureAttributeValue_t, int> >::ResetDbgInfo(); // 538
		CUtlVectorBase<IMaterial2::TextureAttributeValue_t, CUtlMemory<IMaterial2::TextureAttributeValue_t, int> >::CUtlVectorBase(
				TextureAttributeValue_t* pMemory,
				int allocationCount,
				int initialCount,
				bool bGrowable);  // 420
		CUtlVector<IMaterial2::TextureAttributeValue_t, CUtlMemory<IMaterial2::TextureAttributeValue_t, int> >::CUtlVector(
				TextureAttributeValue_t* pMemory,
				int allocationCount,
				int initialCount,
				bool bGrowable);  // 495
		AlignedByteArrayExplicit_t<8, IMaterial2::TextureAttributeValue_t, 8>::AlignedByteArrayExplicit_t(); // 1597
		AlignedByteArray_t<8, IMaterial2::TextureAttributeValue_t>::AlignedByteArray_t(); // 495
		AlignedByteArrayExplicit_t<8, IMaterial2::TextureAttributeValue_t, 8>::Base(); // 497
		CUtlVectorFixedGrowableCompat<IMaterial2::TextureAttributeValue_t, 8>::CUtlVectorFixedGrowableCompat(
						int growSize);  // 430
		CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
		CStrongHandle<InfoForResourceTypeIMaterial2>::GetHandle(); // 434
		CInterlockedIntT<int, 4>::operator int(); // 282
		ResourceHandleToData<InfoForResourceTypeIMaterial2>(const CWeakHandle<InfoForResourceTypeIMaterial2>& hResource); // 434
		CUtlVectorBase<IMaterial2::TextureAttributeValue_t, CUtlMemory<IMaterial2::TextureAttributeValue_t, int> >::RemoveAll(); // 1798
		CUtlMemory<IMaterial2::TextureAttributeValue_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<IMaterial2::TextureAttributeValue_t, int>::Purge(); // 903
		CUtlMemory<IMaterial2::TextureAttributeValue_t, int>::Purge(); // 1799
		CUtlVectorBase<IMaterial2::TextureAttributeValue_t, CUtlMemory<IMaterial2::TextureAttributeValue_t, int> >::Purge(); // 560
		ValidateAlignment<IMaterial2::TextureAttributeValue_t>(void); // 508
		CUtlMemory<IMaterial2::TextureAttributeValue_t, int>::Purge(); // 510
		CUtlMemory<IMaterial2::TextureAttributeValue_t, int>::~CUtlMemory(); // 562
		CUtlVectorBase<IMaterial2::TextureAttributeValue_t, CUtlMemory<IMaterial2::TextureAttributeValue_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<IMaterial2::TextureAttributeValue_t, CUtlMemory<IMaterial2::TextureAttributeValue_t, int> >::~CUtlVector(); // 489
		CUtlVectorFixedGrowableCompat<IMaterial2::TextureAttributeValue_t, 8>::~CUtlVectorFixedGrowableCompat(); // 461
	}
	CStrongHandle<InfoForResourceTypeIMaterial2>::HasData(); // 426
	CStrongHandle<InfoForResourceTypeIMaterial2>::IsLoaded(); // 428
	CStrongHandle<InfoForResourceTypeCTextureBase>::HasHandle(); // 463
	CStrongHandle<InfoForResourceTypeCTextureBase>::IsLoaded(); // 465
} /* size: 0, inline expansions: 4 (63 bytes) */

// <00584A6F> fontmanager/texturedictionary.cpp:476
// variable: 1
// function calls: 5
void CMatSystemTexture::SetMaterial(const char* pFileName, uint32 filenameChecksum)
{
	ResourceHandle_t hResource; // 478
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 478
	CMatSystemTexture::SetMissingMaterialName(
				const char* szName);  // 482
	CMatSystemTexture::SetMissingMaterialName(
				const char* szName);  // 487
} /* size: 270, variables: 1, inline expansions: 5 (88 bytes) */

// <0058D038> fontmanager/texturedictionary.cpp:492
void CMatSystemTexture::SetMissingMaterialName(const char* szName)
{
} /* size: 0 */

// <00571F65> fontmanager/texturedictionary.cpp:508
// member functions: 54
// member variables: 12
// vtable entries: 20
// class size: 200
class CTextureDictionary : public ITextureDictionary {
	/* fontmanager/texturedictionary.cpp:557 */
	struct DeferredResourceLoads_t {
		int id; /* 0 4 */
		uint32 checksum; /* 4 4 */
		char * szFileName; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* fontmanager/texturedictionary.cpp:573 */
	struct PendingManifest_t {
		CUtlVector<int, CUtlMemory<int, int> > pendingIds; /* 0 32 */
		HResourceManifest hManifest; /* 32 8 */
		void PendingManifest_t(PendingManifest_t* );
		void ~PendingManifest_t(PendingManifest_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class ITextureDictionary <ancestor>; */ /* 0 8 */
	void CTextureDictionary(CTextureDictionary* , const CTextureDictionary& );
	/* fontmanager/texturedictionary.cpp:590 */
	void CTextureDictionary(CTextureDictionary* );
	/* fontmanager/texturedictionary.cpp:602 */
	void ~CTextureDictionary(CTextureDictionary* );
	/* fontmanager/texturedictionary.cpp:611 */
	virtual int CreateTexture(CTextureDictionary* , HRenderTexture);
	/* fontmanager/texturedictionary.cpp:619 */
	virtual void DestroyTexture(CTextureDictionary* , int);
	/* fontmanager/texturedictionary.cpp:630 */
	virtual void DestroyAllTextures(CTextureDictionary* );
	/* fontmanager/texturedictionary.cpp:967 */
	virtual bool IsValidId(const CTextureDictionary* , int);
	/* fontmanager/texturedictionary.cpp:978 */
	virtual void BindTextureToFile(CTextureDictionary* , int, const char* );
	/* fontmanager/texturedictionary.cpp:1075 */
	virtual void BindTextureToMaterial(CTextureDictionary* , int, HMaterial, CRenderAttributes* );
	/* fontmanager/texturedictionary.cpp:1087 */
	virtual void BindTextureToTextureHandle(CTextureDictionary* , int, HRenderTexture);
	/* fontmanager/texturedictionary.cpp:1102 */
	virtual HMaterial GetMaterialHandle(CTextureDictionary* , int);
	/* fontmanager/texturedictionary.cpp:1110 */
	virtual CRenderAttributes* GetMaterialSpecificRenderAttributes(CTextureDictionary* , int);
	/* fontmanager/texturedictionary.cpp:1121 */
	virtual HRenderTexture GetTextureHandle(CTextureDictionary* , int);
	/* fontmanager/texturedictionary.cpp:1196 */
	virtual bool GetTextureSize(CTextureDictionary* , int, int& , int& , bool);
	/* fontmanager/texturedictionary.cpp:1256 */
	virtual void GetTextureTexCoords(CTextureDictionary* , int, float& , float& , float& , float& );
	/* fontmanager/texturedictionary.cpp:663 */
	virtual void SetTextureRGBA(CTextureDictionary* , const char* , int, const char* , int, int, ImageFormat);
	/* fontmanager/texturedictionary.cpp:679 */
	virtual void SetSubTextureRGBA(CTextureDictionary* , int, int, int, const unsigned char* , int, int);
	/* fontmanager/texturedictionary.cpp:691 */
	virtual bool GetTexCoordOffsetAndScale(CTextureDictionary* , int, Vector2D& , Vector2D& );
	/* fontmanager/texturedictionary.cpp:704 */
	virtual void SetTexCoordOffsetAndScale(CTextureDictionary* , int, const Vector2D& , const Vector2D& );
	/* fontmanager/texturedictionary.cpp:742 */
	virtual void ProcessDeferredResourceLoading(CTextureDictionary* );
	/* fontmanager/texturedictionary.cpp:956 */
	virtual void SetBatchingOptions(CTextureDictionary* , uint, uint, uint, uint);
	/* fontmanager/texturedictionary.cpp:1288 */
	virtual int FindTextureIdForTextureFile(CTextureDictionary* , const char* );
	/* fontmanager/texturedictionary.cpp:890 */
	virtual void EnsureTextureIsLoaded(CTextureDictionary* , int);
	/* fontmanager/texturedictionary.cpp:1276 */
	CMatSystemTexture* GetTexture(CTextureDictionary* , int);
private:
	/* fontmanager/texturedictionary.cpp:715 */
	void ManifestLoadCompletionCallback(HResourceManifest, void* );
	/* fontmanager/texturedictionary.cpp:895 */
	void LoadDeferredIdNOW(CTextureDictionary* , int);
	CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int> > m_hTextures; /* 8 40 */
	CThreadFastMutex m_DeferredLoadMutex; /* 48 24 */
	CUtlVector<CTextureDictionary::DeferredResourceLoads_t, CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, int> > m_DeferredResourceLoads; /* 72 32 */
	uint m_nMinimumDeferralFrames; /* 104 4 */
	uint m_nMaximumDeferralFrames; /* 108 4 */
	uint m_nMinimumDeferralMS; /* 112 4 */
	uint m_nMaximumDeferralMS; /* 116 4 */
	uint m_nDeferralFrameCount; /* 120 4 */
	double m_fDeferralStartTime; /* 128 8 */
	CUtlVector<CTextureDictionary::PendingManifest_t, CUtlMemory<CTextureDictionary::PendingManifest_t, int> > m_PendingManifestLoads; /* 136 32 */
	CUtlVector<HResourceManifest__*, CUtlMemory<HResourceManifest__*, int> > m_manifestDeletionQueue; /* 168 32 */
	void CTextureDictionary(class CTextureDictionary *, const class CTextureDictionary  &); /* linkage=_ZN18CTextureDictionaryC4ERKS_ */
	void CTextureDictionary(class CTextureDictionary *); /* linkage=_ZN18CTextureDictionaryC4Ev */
	void ~CTextureDictionary(class CTextureDictionary *); /* linkage=_ZN18CTextureDictionaryD4Ev */
	virtual int CreateTexture(class CTextureDictionary *, HRenderTexture); /* linkage=_ZN18CTextureDictionary13CreateTextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	/* <59090e> fontmanager/texturedictionary.cpp:619 */
	virtual void DestroyTexture(class CTextureDictionary *, int); /* linkage=_ZN18CTextureDictionary14DestroyTextureEi */
	virtual void DestroyAllTextures(class CTextureDictionary *); /* linkage=_ZN18CTextureDictionary18DestroyAllTexturesEv */
	/* <58b61b> fontmanager/texturedictionary.cpp:967 */
	virtual bool IsValidId(const class CTextureDictionary  *, int); /* linkage=_ZNK18CTextureDictionary9IsValidIdEi */
	/* <59084a> fontmanager/texturedictionary.cpp:978 */
	virtual void BindTextureToFile(class CTextureDictionary *, int, const char  *); /* linkage=_ZN18CTextureDictionary17BindTextureToFileEiPKc */
	/* <58e4e9> fontmanager/texturedictionary.cpp:1075 */
	virtual void BindTextureToMaterial(class CTextureDictionary *, int, HMaterial, class CRenderAttributes *); /* linkage=_ZN18CTextureDictionary21BindTextureToMaterialEi11CWeakHandleI29InfoForResourceTypeIMaterial2EP17CRenderAttributes */
	/* <58d38d> fontmanager/texturedictionary.cpp:1087 */
	virtual void BindTextureToTextureHandle(class CTextureDictionary *, int, HRenderTexture); /* linkage=_ZN18CTextureDictionary26BindTextureToTextureHandleEi11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual HMaterial GetMaterialHandle(class CTextureDictionary *, int); /* linkage=_ZN18CTextureDictionary17GetMaterialHandleEi */
	virtual class CRenderAttributes * GetMaterialSpecificRenderAttributes(class CTextureDictionary *, int); /* linkage=_ZN18CTextureDictionary35GetMaterialSpecificRenderAttributesEi */
	virtual HRenderTexture GetTextureHandle(class CTextureDictionary *, int); /* linkage=_ZN18CTextureDictionary16GetTextureHandleEi */
	virtual bool GetTextureSize(class CTextureDictionary *, int, int &, int &, bool); /* linkage=_ZN18CTextureDictionary14GetTextureSizeEiRiS0_b */
	/* <58c412> fontmanager/texturedictionary.cpp:1256 */
	virtual void GetTextureTexCoords(class CTextureDictionary *, int, float &, float &, float &, float &); /* linkage=_ZN18CTextureDictionary19GetTextureTexCoordsEiRfS0_S0_S0_ */
	/* <58d913> fontmanager/texturedictionary.cpp:663 */
	virtual void SetTextureRGBA(class CTextureDictionary *, const char  *, int, const char  *, int, int, enum ImageFormat); /* linkage=_ZN18CTextureDictionary14SetTextureRGBAEPKciS1_ii11ImageFormat */
	/* <58cce6> fontmanager/texturedictionary.cpp:679 */
	virtual void SetSubTextureRGBA(class CTextureDictionary *, int, int, int, const unsigned char  *, int, int); /* linkage=_ZN18CTextureDictionary17SetSubTextureRGBAEiiiPKhii */
	/* <58bc71> fontmanager/texturedictionary.cpp:691 */
	virtual bool GetTexCoordOffsetAndScale(class CTextureDictionary *, int, class Vector2D &, class Vector2D &); /* linkage=_ZN18CTextureDictionary25GetTexCoordOffsetAndScaleEiR8Vector2DS1_ */
	/* <58c096> fontmanager/texturedictionary.cpp:704 */
	virtual void SetTexCoordOffsetAndScale(class CTextureDictionary *, int, const class Vector2D  &, const class Vector2D  &); /* linkage=_ZN18CTextureDictionary25SetTexCoordOffsetAndScaleEiRK8Vector2DS2_ */
	virtual void ProcessDeferredResourceLoading(class CTextureDictionary *); /* linkage=_ZN18CTextureDictionary30ProcessDeferredResourceLoadingEv */
	virtual void SetBatchingOptions(class CTextureDictionary *, uint, uint, uint, uint); /* linkage=_ZN18CTextureDictionary18SetBatchingOptionsEjjjj */
	virtual int FindTextureIdForTextureFile(class CTextureDictionary *, const char  *); /* linkage=_ZN18CTextureDictionary27FindTextureIdForTextureFileEPKc */
	virtual void EnsureTextureIsLoaded(class CTextureDictionary *, int); /* linkage=_ZN18CTextureDictionary21EnsureTextureIsLoadedEi */
	class CMatSystemTexture * GetTexture(class CTextureDictionary *, int); /* linkage=_ZN18CTextureDictionary10GetTextureEi */
	void ManifestLoadCompletionCallback(HResourceManifest, void *); /* linkage=_ZN18CTextureDictionary30ManifestLoadCompletionCallbackEP19HResourceManifest__Pv */
	/* <58e442> fontmanager/texturedictionary.cpp:895 */
	void LoadDeferredIdNOW(class CTextureDictionary *, int); /* linkage=_ZN18CTextureDictionary17LoadDeferredIdNOWEi */
};

// <0057B3B3> fontmanager/texturedictionary.cpp:573
void PendingManifest_t::~PendingManifest_t()
{
} /* size: 0 */

// <0057B396> fontmanager/texturedictionary.cpp:573
inline void PendingManifest_t::~PendingManifest_t()
{
} /* size: 0 */

// <0057B0CE> fontmanager/texturedictionary.cpp:573
void PendingManifest_t::PendingManifest_t()
{
} /* size: 0 */

// <0057B0B1> fontmanager/texturedictionary.cpp:573
inline void PendingManifest_t::PendingManifest_t()
{
} /* size: 0 */

// <0058424E> fontmanager/texturedictionary.cpp:590
// function calls: 33
void CTextureDictionary::CTextureDictionary()
{
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::operator[](
			short unsigned int i);  // 482
	Element(const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CMa this,
		short unsigned int i);  // 774
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 1479
	Construct<CMatSystemTexture>(CMatSystemTexture* pMemory); // 774
	InsertBefore(const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CMa this,
			short unsigned int before);  // 805
	AddToTail(const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CMa this); // 599
	ConstructList(const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CMa this); // 454
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::ValidateGrowSize(); // 475
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 448
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::InvalidIterator(); // 448
	ResetDbgInfo(const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CMa this); // 455
	CUtlLinkedList(const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CMa this,
			int growSize,
			int initSize);  // 596
	ITextureDictionary::ITextureDictionary(); // 596
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 596
	CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CTextureDictionary::DeferredResourceLoads_t, CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, this); // 530
	CUtlVectorBase(const CUtlVectorBase<CTextureDictionary::DeferredResourceLoads_t, CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CTextureDictionary::DeferredResourceLoads_t, CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, int this); // 596
	CUtlMemory<CTextureDictionary::PendingManifest_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CTextureDictionary::PendingManifest_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CTextureDictionary::PendingManifest_t, CUtlMemory<CTextureDictionary::PendingManifest_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CTextureDictionary::PendingManifest_t, CUtlMemory<CTextureDictionary::PendingManifest_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CTextureDictionary::PendingManifest_t, CUtlMemory<CTextureDictionary::PendingManifest_t, int> >::CUtlVector(); // 596
	CUtlMemory<HResourceManifest__::ValidateGrowSize(); // 475
	CUtlMemory<HResourceManifest__::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<HResourceManifest__::ResetDbgInfo(); // 530
	CUtlVectorBase<HResourceManifest__::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<HResourceManifest__::CUtlVector(); // 596
} /* size: 330, inline expansions: 33 (579 bytes) */

// <00584235> fontmanager/texturedictionary.cpp:590
void CTextureDictionary::CTextureDictionary()
{
} /* size: 0 */

// <00583B4E> fontmanager/texturedictionary.cpp:602
// function calls: 35
void CTextureDictionary::~CTextureDictionary()
{
	CUtlVectorBase<HResourceManifest__::RemoveAll(); // 1798
	CUtlMemory<HResourceManifest__::IsExternallyAllocated(); // 905
	CUtlMemory<HResourceManifest__::Purge(); // 903
	CUtlMemory<HResourceManifest__::Purge(); // 1799
	CUtlVectorBase<HResourceManifest__::Purge(); // 560
	ValidateAlignment<HResourceManifest__*>(void); // 508
	CUtlMemory<HResourceManifest__::Purge(); // 510
	CUtlMemory<HResourceManifest__::~CUtlMemory(); // 562
	CUtlVectorBase<HResourceManifest__::~CUtlVectorBase(); // 410
	CUtlVector<HResourceManifest__::~CUtlVector(); // 605
	CUtlMemory<CTextureDictionary::PendingManifest_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CTextureDictionary::PendingManifest_t, int>::Purge(); // 903
	CUtlMemory<CTextureDictionary::PendingManifest_t, int>::Purge(); // 1799
	CUtlVectorBase<CTextureDictionary::PendingManifest_t, CUtlMemory<CTextureDictionary::PendingManifest_t, int> >::Purge(); // 560
	ValidateAlignment<CTextureDictionary::PendingManifest_t>(void); // 508
	CUtlMemory<CTextureDictionary::PendingManifest_t, int>::Purge(); // 510
	CUtlMemory<CTextureDictionary::PendingManifest_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CTextureDictionary::PendingManifest_t, CUtlMemory<CTextureDictionary::PendingManifest_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CTextureDictionary::PendingManifest_t, CUtlMemory<CTextureDictionary::PendingManifest_t, int> >::~CUtlVector(); // 605
	RemoveAll(const CUtlVectorBase<CTextureDictionary::DeferredResourceLoads_t, CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, this); // 1798
	CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, int>::Purge(); // 903
	CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CTextureDictionary::DeferredResourceLoads_t, CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, this); // 560
	ValidateAlignment<CTextureDictionary::DeferredResourceLoads_t>(void); // 508
	CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, int>::Purge(); // 510
	CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CTextureDictionary::DeferredResourceLoads_t, CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, this); // 410
	~CUtlVector(const CUtlVector<CTextureDictionary::DeferredResourceLoads_t, CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, int this); // 605
	ValidateAlignment<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int> >(void); // 508
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::IsExternallyAllocated(); // 905
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::Purge(); // 903
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::Purge(); // 510
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::~CUtlMemory(); // 462
	~CUtlLinkedList(const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CMa this); // 605
} /* size: 190, inline expansions: 35 (574 bytes) */

// <00583B35> fontmanager/texturedictionary.cpp:602
void CTextureDictionary::~CTextureDictionary()
{
} /* size: 0 */

// <005831E2> fontmanager/texturedictionary.cpp:611
// function calls: 42
void CTextureDictionary::CreateTexture(HRenderTexture hExternallyLoadedTexture)
{
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(); // 98
	CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(); // 98
	Vector2D::Vector2D(); // 98
	Vector2D::Vector2D(); // 98
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 100
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 100
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 101
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator=(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 101
	Vector2D::Init(
		vec_t ix,
		vec_t iy);  // 109
	Vector2D::Init(
		vec_t ix,
		vec_t iy);  // 110
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 113
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator!=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 113
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 115
	CMatSystemTexture::CMatSystemTexture(
				HRenderTexture hExternallyLoadedTexture);  // 613
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 613
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::operator[](
			short unsigned int i);  // 482
	Element(const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CMa this,
		short unsigned int i);  // 825
	CopyConstruct<CMatSystemTexture>(CMatSystemTexture* pMemory,
					const CMatSystemTexture& src);  // 825
	InsertBefore(const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CMa this,
			short unsigned int before,
			const CMatSystemTexture& src);  // 856
	AddToTail(const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CMa this,
			const CMatSystemTexture& src);  // 613
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 150
	CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 150
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 151
	CStrongHandle<InfoForResourceTypeIMaterial2>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator=(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 151
	CMatSystemTexture::CleanUpMaterial(); // 145
	CStrongHandle<InfoForResourceTypeIMaterial2>::~CStrongHandle(); // 146
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 146
	CMatSystemTexture::~CMatSystemTexture(); // 613
} /* size: 351, inline expansions: 42 (628 bytes) */

// <0059090E> fontmanager/texturedictionary.cpp:619
// function calls: 25
void CTextureDictionary::DestroyTexture(int id)
{
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::operator[](
			short unsigned int i);  // 594
	IsValidIndex(const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem this,
			short unsigned int i);  // 583
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::IsIdxValid(
			short unsigned int i);  // 588
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::IsIdxAfter(
			short unsigned int i,
			const Iterator_t& it);  // 591
	IsValidIndex(const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem this,
			short unsigned int i);  // 749
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::operator[](
			short unsigned int i);  // 367
	InternalElement(const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CMa this,
			short unsigned int i);  // 752
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 150
	CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 150
	CStrongHandle<InfoForResourceTypeIMaterial2>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator=(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 151
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 151
	CMatSystemTexture::CleanUpMaterial(); // 145
	CStrongHandle<InfoForResourceTypeIMaterial2>::~CStrongHandle(); // 146
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 146
	CMatSystemTexture::~CMatSystemTexture(); // 1526
	Destruct<CMatSystemTexture>(CMatSystemTexture* pMemory); // 753
	{
	}
	Free(const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CMa this,
		short unsigned int elem);  // 907
	Remove(const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CMa this,
		short unsigned int elem);  // 623
	CTextureDictionary::DestroyTexture(
			int id);  // 619
} /* size: 0, inline expansions: 25 (1332 bytes) */

// <005831BD> fontmanager/texturedictionary.cpp:619
void CTextureDictionary::DestroyTexture(int id)
{
} /* size: 0 */

// <00582A98> fontmanager/texturedictionary.cpp:630
// variables: 3
// function calls: 26
void CTextureDictionary::DestroyAllTextures()
{
	{
		int i; // 634
		Count(const CUtlVectorBase<CTextureDictionary::PendingManifest_t, CUtlMemory<CTextureDictionary::PendingManifest_t, int> this); // 634
		CUtlMemory<CTextureDictionary::PendingManifest_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CTextureDictionary::PendingManifest_t, CUtlMemory<CTextureDictionary::PendingManifest_t, int> >::operator[](
				int i);  // 636
	}
	{
		int i; // 640
		Count(const CUtlVectorBase<CTextureDictionary::DeferredResourceLoads_t, CUtlMemory<CTextureDictionary::DeferredResourceLo this); // 640
		CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CTextureDictionary::DeferredResourceLoads_t, CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, this,
				int i);  // 642
	}
	{
		int i; // 646
		CUtlVectorBase<HResourceManifest__::Count(); // 646
		CUtlMemory<HResourceManifest__::operator[](
				int i);  // 588
		CUtlVectorBase<HResourceManifest__::operator[](
				int i);  // 648
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
		unsigned int nSpinSleepTime);  // 632
	RemoveAll(const CUtlVectorBase<CTextureDictionary::DeferredResourceLoads_t, CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, this); // 644
	CUtlVectorBase<HResourceManifest__::RemoveAll(); // 650
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::operator[](
			short unsigned int i);  // 482
	Element(const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CMa this,
		short unsigned int i);  // 774
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 1479
	Construct<CMatSystemTexture>(CMatSystemTexture* pMemory); // 774
	InsertBefore(const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CMa this,
			short unsigned int before);  // 805
	AddToTail(const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CMa this); // 654
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 656
} /* size: 487, inline expansions: 17 (365 bytes) */

// <0058D913> fontmanager/texturedictionary.cpp:663
// variable: 1
// function calls: 3
void CTextureDictionary::SetTextureRGBA(const char* pPrefix, int id, const char* rgba, int wide, int tall, ImageFormat format)
{
	CMatSystemTexture& texture; // 671
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::operator[](
			short unsigned int i);  // 494
	operator[](const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CMa this,
			short unsigned int i);  // 671
	CTextureDictionary::SetTextureRGBA(
			const char* pPrefix,
			int id,
			const char* rgba,
			int wide,
			int tall,
			ImageFormat format);  // 663
} /* size: 174, variables: 1, inline expansions: 3 (62 bytes) */

// <00582A25> fontmanager/texturedictionary.cpp:663
// variable: 1
void CTextureDictionary::SetTextureRGBA(const char* pPrefix, int id, const char* rgba, int wide, int tall, ImageFormat format)
{
	CMatSystemTexture& texture; // 671
} /* size: 0, variables: 1 */

// <0058CCE6> fontmanager/texturedictionary.cpp:679
// variable: 1
// function calls: 3
void CTextureDictionary::SetSubTextureRGBA(int id, int drawX, int drawY, const unsigned char* rgba, int subTextureWide, int subTextureTall)
{
	CMatSystemTexture& texture; // 687
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::operator[](
			short unsigned int i);  // 494
	operator[](const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CMa this,
			short unsigned int i);  // 687
	CTextureDictionary::SetSubTextureRGBA(
				int id,
				int drawX,
				int drawY,
				const unsigned char* rgba,
				int subTextureWide,
				int subTextureTall);  // 679
} /* size: 172, variables: 1, inline expansions: 3 (64 bytes) */

// <005829B2> fontmanager/texturedictionary.cpp:679
// variable: 1
void CTextureDictionary::SetSubTextureRGBA(int id, int drawX, int drawY, const unsigned char* rgba, int subTextureWide, int subTextureTall)
{
	CMatSystemTexture& texture; // 687
} /* size: 0, variables: 1 */

// <0058BC71> fontmanager/texturedictionary.cpp:691
// variable: 1
// function calls: 14
void CTextureDictionary::GetTexCoordOffsetAndScale(int id, Vector2D& vOffset, Vector2D& vScale)
{
	CMatSystemTexture& texture; // 700
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::IsIdxValid(
			short unsigned int i);  // 588
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::IsIdxAfter(
			short unsigned int i,
			const Iterator_t& it);  // 591
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::operator[](
			short unsigned int i);  // 594
	IsValidIndex(const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem this,
			short unsigned int i);  // 583
	IsValidIndex(const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem this,
			short unsigned int i);  // 972
	CTextureDictionary::IsValidId(
			int id);  // 693
	Vector2D::Init(
		vec_t ix,
		vec_t iy);  // 695
	Vector2D::Init(
		vec_t ix,
		vec_t iy);  // 696
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::operator[](
			short unsigned int i);  // 494
	operator[](const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CMa this,
			short unsigned int i);  // 700
	Vector2D::operator=(
			const Vector2D& vOther);  // 255
	Vector2D::operator=(
			const Vector2D& vOther);  // 256
	CMatSystemTexture::GetTexCoordOffsetAndScale(
					Vector2D& vOffset,
					Vector2D& vScale);  // 701
	CTextureDictionary::GetTexCoordOffsetAndScale(
					int id,
					Vector2D& vOffset,
					Vector2D& vScale);  // 691
} /* size: 206, variables: 1, inline expansions: 14 (350 bytes) */

// <00582966> fontmanager/texturedictionary.cpp:691
// variable: 1
void CTextureDictionary::GetTexCoordOffsetAndScale(int id, Vector2D& vOffset, Vector2D& vScale)
{
	CMatSystemTexture& texture; // 700
} /* size: 0, variables: 1 */

// <0058C096> fontmanager/texturedictionary.cpp:704
// variable: 1
// function calls: 12
void CTextureDictionary::SetTexCoordOffsetAndScale(int id, const Vector2D& vOffset, const Vector2D& vScale)
{
	CMatSystemTexture& texture; // 711
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::IsIdxValid(
			short unsigned int i);  // 588
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::IsIdxAfter(
			short unsigned int i,
			const Iterator_t& it);  // 591
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::operator[](
			short unsigned int i);  // 594
	IsValidIndex(const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem this,
			short unsigned int i);  // 583
	IsValidIndex(const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem this,
			short unsigned int i);  // 972
	CTextureDictionary::IsValidId(
			int id);  // 706
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::operator[](
			short unsigned int i);  // 494
	operator[](const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CMa this,
			short unsigned int i);  // 711
	Vector2D::operator=(
			const Vector2D& vOther);  // 262
	Vector2D::operator=(
			const Vector2D& vOther);  // 263
	CMatSystemTexture::SetTexCoordOffsetAndScale(
					const Vector2D& vOffset,
					const Vector2D& vScale);  // 712
	CTextureDictionary::SetTexCoordOffsetAndScale(
					int id,
					const Vector2D& vOffset,
					const Vector2D& vScale);  // 704
} /* size: 253, variables: 1, inline expansions: 12 (485 bytes) */

// <0058291A> fontmanager/texturedictionary.cpp:704
// variable: 1
void CTextureDictionary::SetTexCoordOffsetAndScale(int id, const Vector2D& vOffset, const Vector2D& vScale)
{
	CMatSystemTexture& texture; // 711
} /* size: 0, variables: 1 */

// <00581DE8> fontmanager/texturedictionary.cpp:715
// variables: 5
// function calls: 49
void ManifestLoadCompletionCallback(HResourceManifest hManifest, void* pContext)
{
	CTextureDictionary* pThis; // 717
	{
		int i; // 721
		{
			PendingManifest_t& pendingManifestEntry; // 725
			{
				int j; // 727
				CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 727
				CUtlMemory<int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
						int i);  // 729
				CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::operator[](
						short unsigned int i);  // 494
				operator[](const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CMa this,
						short unsigned int i);  // 729
				CMatSystemTexture::StreamingFinished(); // 729
			}
			CUtlMemory<CTextureDictionary::PendingManifest_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CTextureDictionary::PendingManifest_t, CUtlMemory<CTextureDictionary::PendingManifest_t, int> >::Element(
				int i);  // 1575
			CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
			CUtlMemory<int, int>::IsExternallyAllocated(); // 905
			CUtlMemory<int, int>::Purge(); // 903
			CUtlMemory<int, int>::Purge(); // 1799
			CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
			ValidateAlignment<int>(void); // 508
			CUtlMemory<int, int>::Purge(); // 510
			CUtlMemory<int, int>::~CUtlMemory(); // 562
			CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
			CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 573
			PendingManifest_t::~PendingManifest_t(); // 1526
			Destruct<CTextureDictionary::PendingManifest_t>(PendingManifest_t* pMemory); // 1575
			{
				const bool  bNotLast; // 1578
				CUtlMemory<CTextureDictionary::PendingManifest_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CTextureDictionary::PendingManifest_t, CUtlMemory<CTextureDictionary::PendingManifest_t, int> >::Element(
					int i);  // 1584
				CUtlMemory<CTextureDictionary::PendingManifest_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CTextureDictionary::PendingManifest_t, CUtlMemory<CTextureDictionary::PendingManifest_t, int> >::Element(
					int i);  // 1584
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 1584
			}
			CUtlVectorBase<CTextureDictionary::PendingManifest_t, CUtlMemory<CTextureDictionary::PendingManifest_t, int> >::FastRemove(
					int elem);  // 732
		}
		Count(const CUtlVectorBase<CTextureDictionary::PendingManifest_t, CUtlMemory<CTextureDictionary::PendingManifest_t, int> this); // 721
		CUtlMemory<CTextureDictionary::PendingManifest_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CTextureDictionary::PendingManifest_t, CUtlMemory<CTextureDictionary::PendingManifest_t, int> >::operator[](
				int i);  // 723
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
		unsigned int nSpinSleepTime);  // 719
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 737
	CUtlMemory<HResourceManifest__::NumAllocated(); // 1196
	CUtlMemory<HResourceManifest__::Base(); // 112
	CUtlVectorBase<HResourceManifest__::Base(); // 368
	CUtlVectorBase<HResourceManifest__::ResetDbgInfo(); // 824
	CUtlMemory<HResourceManifest__::IsGrowable(); // 823
	CUtlMemory<HResourceManifest__::IsExternallyAllocated(); // 859
	CUtlMemory<HResourceManifest__::IsExternallyAllocated(); // 861
	CUtlMemory<HResourceManifest__::Grow(
		int num);  // 806
	CUtlVectorBase<HResourceManifest__::GrowMemory(
			int num);  // 1198
	CUtlMemory<HResourceManifest__::operator[](
			int i);  // 602
	CUtlVectorBase<HResourceManifest__::Element(
		int i);  // 1201
	CopyConstruct<HResourceManifest__*>(HResourceManifest__** pMemory,
						HResourceManifest__* const& src);  // 1201
	CUtlVectorBase<HResourceManifest__::AddToTail(
			HResourceManifest__* const& src);  // 739
} /* size: 736, variables: 1, inline expansions: 19 (1002 bytes) */

// <00580715> fontmanager/texturedictionary.cpp:742
// variables: 14
// function calls: 83
void CTextureDictionary::ProcessDeferredResourceLoading()
{
	const char   __FUNCTION__; // 29945
	{
		bool bLoad; // 748
		{
			const char ** ppResourceNames; // 785
			{
				int i; // 787
				CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CTextureDictionary::DeferredResourceLoads_t, CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, this,
						int i);  // 789
			}
			{
				HResourceManifest hManifest; // 794
				PendingManifest_t& pendingManifestEntry; // 797
				{
					int i; // 800
					Count(const CUtlVectorBase<CTextureDictionary::DeferredResourceLoads_t, CUtlMemory<CTextureDictionary::DeferredResourceLo this); // 800
					CUtlMemory<int, int>::Base(); // 112
					CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 368
					CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
					CUtlMemory<int, int>::IsGrowable(); // 823
					CUtlMemory<int, int>::IsExternallyAllocated(); // 859
					CUtlMemory<int, int>::IsExternallyAllocated(); // 861
					CUtlMemory<int, int>::Grow(
						int num);  // 806
					CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
							int num);  // 1198
					CUtlMemory<int, int>::operator[](
							int i);  // 602
					CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
						int i);  // 1201
					CopyConstruct<int>(int* pMemory,
								const int& src);  // 1201
					CUtlMemory<int, int>::NumAllocated(); // 1196
					CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
							const int& src);  // 803
					CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, int>::operator[](
							int i);  // 588
					operator[](const CUtlVectorBase<CTextureDictionary::DeferredResourceLoads_t, CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, this,
							int i);  // 805
					Count(const CUtlVectorBase<CTextureDictionary::DeferredResourceLoads_t, CUtlMemory<CTextureDictionary::DeferredResourceLo this); // 807
					CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, int>::operator[](
							int i);  // 588
					operator[](const CUtlVectorBase<CTextureDictionary::DeferredResourceLoads_t, CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, this,
							int i);  // 802
					CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::operator[](
							short unsigned int i);  // 494
					operator[](const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CMa this,
							short unsigned int i);  // 802
					CBufferString::~CBufferString(); // 587
					CBufferStringN<200>::~CBufferStringN(); // 318
					CResourceName::~CResourceName(); // 802
					CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, int>::operator[](
							int i);  // 588
					operator[](const CUtlVectorBase<CTextureDictionary::DeferredResourceLoads_t, CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, this,
							int i);  // 803
				}
				ResourceManifestCreationInfo_t::ResourceManifestCreationInfo_t(
								int nCount,
								const char ** ppResourceFiles,
								ResourceManifestLoadBehavior_t nLoadBehavior,
								const char* pDebugName,
								ResourceManifestLoadPriority_t nPriority);  // 777
				IResourceSystem::CreateResourceManifest(
							int nCount,
							const char ** ppResourceFiles,
							ResourceManifestLoadBehavior_t nLoadBehavior,
							const char* pDebugName,
							ResourceManifestLoadPriority_t nPriority);  // 794
				CUtlMemory<CTextureDictionary::PendingManifest_t, int>::NumAllocated(); // 1143
				CUtlMemory<CTextureDictionary::PendingManifest_t, int>::Base(); // 112
				CUtlVectorBase<CTextureDictionary::PendingManifest_t, CUtlMemory<CTextureDictionary::PendingManifest_t, int> >::Base(); // 368
				CUtlVectorBase<CTextureDictionary::PendingManifest_t, CUtlMemory<CTextureDictionary::PendingManifest_t, int> >::ResetDbgInfo(); // 824
				CUtlMemory<CTextureDictionary::PendingManifest_t, int>::IsGrowable(); // 823
				CUtlMemory<CTextureDictionary::PendingManifest_t, int>::IsExternallyAllocated(); // 859
				CUtlMemory<CTextureDictionary::PendingManifest_t, int>::IsExternallyAllocated(); // 861
				CUtlMemory<CTextureDictionary::PendingManifest_t, int>::Grow(
					int num);  // 806
				CUtlVectorBase<CTextureDictionary::PendingManifest_t, CUtlMemory<CTextureDictionary::PendingManifest_t, int> >::GrowMemory(
						int num);  // 1145
				CUtlMemory<CTextureDictionary::PendingManifest_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CTextureDictionary::PendingManifest_t, CUtlMemory<CTextureDictionary::PendingManifest_t, int> >::Element(
					int i);  // 1148
				CUtlMemory<int, int>::ValidateGrowSize(); // 475
				CUtlMemory<int, int>::CUtlMemory(
						int nGrowSize,
						int nInitAllocationCount);  // 527
				CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
				CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
						int growSize,
						int initCapacity);  // 418
				CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 573
				PendingManifest_t::PendingManifest_t(); // 1479
				Construct<CTextureDictionary::PendingManifest_t>(PendingManifest_t* pMemory); // 1148
				CUtlVectorBase<CTextureDictionary::PendingManifest_t, CUtlMemory<CTextureDictionary::PendingManifest_t, int> >::AddToTail(); // 797
				CUtlMemory<CTextureDictionary::PendingManifest_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CTextureDictionary::PendingManifest_t, CUtlMemory<CTextureDictionary::PendingManifest_t, int> >::operator[](
						int i);  // 797
			}
			Count(const CUtlVectorBase<CTextureDictionary::DeferredResourceLoads_t, CUtlMemory<CTextureDictionary::DeferredResourceLo this); // 785
			Count(const CUtlVectorBase<CTextureDictionary::DeferredResourceLoads_t, CUtlMemory<CTextureDictionary::DeferredResourceLo this); // 792
		}
		{
			int i; // 834
			{
				uint32 filenameChecksum; // 836
				ResourceHandle_t hResource; // 838
				{
					int j; // 843
					Count(const CUtlVectorBase<CTextureDictionary::DeferredResourceLoads_t, CUtlMemory<CTextureDictionary::DeferredResourceLo this); // 843
					CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, int>::operator[](
							int i);  // 588
					operator[](const CUtlVectorBase<CTextureDictionary::DeferredResourceLoads_t, CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, this,
							int i);  // 845
					CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::operator[](
							short unsigned int i);  // 494
					operator[](const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CMa this,
							short unsigned int i);  // 847
					CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, int>::operator[](
							int i);  // 588
					operator[](const CUtlVectorBase<CTextureDictionary::DeferredResourceLoads_t, CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, this,
							int i);  // 848
				}
				{
					int j; // 857
					CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, int>::operator[](
							int i);  // 588
					operator[](const CUtlVectorBase<CTextureDictionary::DeferredResourceLoads_t, CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, this,
							int i);  // 859
					CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::operator[](
							short unsigned int i);  // 494
					operator[](const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CMa this,
							short unsigned int i);  // 861
					CMatSystemTexture::SetMissingMaterialName(
								const char* szName);  // 861
					CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, int>::operator[](
							int i);  // 588
					operator[](const CUtlVectorBase<CTextureDictionary::DeferredResourceLoads_t, CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, this,
							int i);  // 862
				}
				CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CTextureDictionary::DeferredResourceLoads_t, CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, this,
						int i);  // 836
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 318
				CResourceName::~CResourceName(); // 838
			}
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
			unsigned int nSpinSleepTime);  // 781
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 874
	}
	{
		int i; // 878
		CUtlVectorBase<HResourceManifest__::Count(); // 878
		CUtlMemory<HResourceManifest__::operator[](
				int i);  // 588
		CUtlVectorBase<HResourceManifest__::operator[](
				int i);  // 880
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 886
	}
	Count(const CUtlVectorBase<CTextureDictionary::DeferredResourceLoads_t, CUtlMemory<CTextureDictionary::DeferredResourceLo this); // 746
	CUtlVectorBase<HResourceManifest__::RemoveAll(); // 882
} /* size: 0, variables: 1, inline expansions: 2 (11 bytes) */

// <00580602> fontmanager/texturedictionary.cpp:890
// function calls: 2
void CTextureDictionary::EnsureTextureIsLoaded(int id)
{
	Count(const CUtlVectorBase<CTextureDictionary::DeferredResourceLoads_t, CUtlMemory<CTextureDictionary::DeferredResourceLo this); // 899
	{
	}
	CTextureDictionary::LoadDeferredIdNOW(
				int nId);  // 892
} /* size: 0, inline expansions: 2 (66 bytes) */

// <0058E442> fontmanager/texturedictionary.cpp:895
// function call: 1
void CTextureDictionary::LoadDeferredIdNOW(int nId)
{
	Count(const CUtlVectorBase<CTextureDictionary::DeferredResourceLoads_t, CUtlMemory<CTextureDictionary::DeferredResourceLo this); // 899
	{
	}
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0058DBC7> fontmanager/texturedictionary.cpp:895
// variables: 5
// function calls: 28
void CTextureDictionary::LoadDeferredIdNOW(int nId)
{
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
		unsigned int nSpinSleepTime);  // 901
	{
		int i; // 903
		Count(const CUtlVectorBase<CTextureDictionary::DeferredResourceLoads_t, CUtlMemory<CTextureDictionary::DeferredResourceLo this); // 903
		CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CTextureDictionary::DeferredResourceLoads_t, CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, this,
				int i);  // 905
		{
			uint32 filenameChecksum; // 909
			ResourceHandle_t hResource; // 910
			CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CTextureDictionary::DeferredResourceLoads_t, CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, this,
					int i);  // 909
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 910
			{
				int j; // 915
				Count(const CUtlVectorBase<CTextureDictionary::DeferredResourceLoads_t, CUtlMemory<CTextureDictionary::DeferredResourceLo this); // 915
				CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CTextureDictionary::DeferredResourceLoads_t, CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, this,
						int i);  // 917
				CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::operator[](
						short unsigned int i);  // 494
				operator[](const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CMa this,
						short unsigned int i);  // 919
				CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CTextureDictionary::DeferredResourceLoads_t, CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, this,
						int i);  // 921
			}
			{
				int j; // 929
				CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CTextureDictionary::DeferredResourceLoads_t, CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, this,
						int i);  // 931
				CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::operator[](
						short unsigned int i);  // 494
				operator[](const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CMa this,
						short unsigned int i);  // 933
				CMatSystemTexture::SetMissingMaterialName(
							const char* szName);  // 933
				CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CTextureDictionary::DeferredResourceLoads_t, CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, this,
						int i);  // 935
			}
		}
	}
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 946
} /* size: 676, inline expansions: 6 (196 bytes) */

// <00580543> fontmanager/texturedictionary.cpp:895
// variables: 7
void CTextureDictionary::LoadDeferredIdNOW(int nId)
{
	const char   __FUNCTION__; // 29649
	{
		int i; // 903
		{
			uint32 filenameChecksum; // 909
			ResourceHandle_t hResource; // 910
			{
				int j; // 915
			}
			{
				int j; // 929
			}
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 951
	}
} /* size: 0, variables: 1 */

// <005804D3> fontmanager/texturedictionary.cpp:956
void CTextureDictionary::SetBatchingOptions(uint nMinimumDeferralFrames, uint nMaximumDeferralFrames, uint nMinimumDeferralMS, uint nMaximumDeferralMS)
{
} /* size: 38 */

// <0058B61B> fontmanager/texturedictionary.cpp:967
// function calls: 5
void CTextureDictionary::IsValidId(int id)
{
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::IsIdxValid(
			short unsigned int i);  // 588
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::IsIdxAfter(
			short unsigned int i,
			const Iterator_t& it);  // 591
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::operator[](
			short unsigned int i);  // 594
	IsValidIndex(const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem this,
			short unsigned int i);  // 583
	IsValidIndex(const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem this,
			short unsigned int i);  // 972
} /* size: 75, inline expansions: 5 (110 bytes) */

// <005804AE> fontmanager/texturedictionary.cpp:967
void CTextureDictionary::IsValidId(int id)
{
} /* size: 0 */

// <0059084A> fontmanager/texturedictionary.cpp:978
// variables: 3
void CTextureDictionary::BindTextureToFile(int id, const char* pFileName)
{
	uint32 fileNameChecksum; // 986
	CMatSystemTexture& texture; // 988
	ResourceHandle_t hResource; // 990
} /* size: 116, variables: 3 */

// <0058E6CC> fontmanager/texturedictionary.cpp:978
// variables: 39
// function calls: 127
void CTextureDictionary::BindTextureToFile(int id, const char* pFileName)
{
	uint32 fileNameChecksum; // 986
	CMatSystemTexture& texture; // 988
	ResourceHandle_t hResource; // 990
	V_strlen(const char* str); // 24
	{
		const xxh_u64  bitflip1; // 4743
		const xxh_u64  bitflip2; // 4744
		const xxh_u64  input_lo; // 4745
		const xxh_u64  input_hi; // 4746
		const xxh_u64  acc; // 4747
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 4745
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 4746
		XXH_mult64to128(xxh_u64 lhs,
				xxh_u64 rhs);  // 4627
		XXH3_mul128_fold64(xxh_u64 lhs,
					xxh_u64 rhs);  // 4749
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4644
		XXH3_avalanche(xxh_u64 h64); // 4750
	}
	XXH3_len_9to16_64b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 4758
	{
		const xxh_u32  input1; // 4728
		const xxh_u32  input2; // 4729
		const xxh_u64  bitflip; // 4730
		const xxh_u64  input64; // 4731
		const xxh_u64  keyed; // 4732
		XXH_read32(const void* ptr); // 2905
		XXH_readLE32(const void* ptr); // 4728
		XXH_read32(const void* ptr); // 2905
		XXH_readLE32(const void* ptr); // 4729
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4662
		XXH3_rrmxmx(xxh_u64 h64,
				xxh_u64 len);  // 4733
	}
	XXH3_len_4to8_64b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 4759
	{
		const xxh_u8  c1; // 4710
		const xxh_u8  c2; // 4711
		const xxh_u8  c3; // 4712
		const xxh_u32  combined; // 4713
		const xxh_u64  bitflip; // 4715
		const xxh_u64  keyed; // 4716
		XXH64_avalanche(xxh_u64 hash); // 4717
	}
	XXH3_len_1to3_64b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 4760
	XXH3_len_0to16_64b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 6441
	{
		xxh_u64 acc; // 4832
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4644
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4646
		XXH3_avalanche(xxh_u64 h64); // 4856
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4844
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4845
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4847
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4848
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4850
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4851
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4853
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4854
	}
	XXH3_len_17to128_64b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				size_t secretSize,
				XXH64_hash_t seed);  // 6443
	XXH3_64bits_internal(const void* input,
				size_t len,
				XXH64_hash_t seed64,
				const void* secret,
				size_t secretLen,
				XXH3_hashLong64_f f_hashLong);  // 6455
	XXH_INLINE_XXH3_64bits(const void* input,
				size_t length);  // 24
	Texture_Checksum(const char* string); // 986
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::operator[](
			short unsigned int i);  // 494
	operator[](const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CMa this,
			short unsigned int i);  // 988
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 990
	{
		int iDeferredLoadIndex; // 1006
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
			unsigned int nSpinSleepTime);  // 1004
		CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CTextureDictionary::DeferredResourceLoads_t, CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, this,
				int i);  // 1017
		{
			DeferredResourceLoads_t& entry; // 1020
			CMatSystemTexture::GetChecksum(); // 1023
			CStrongHandle<InfoForResourceTypeCTextureBase>::HasHandle(); // 178
			CMatSystemTexture::IsTextureHandleValid(); // 1023
		}
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 1062
		Count(const CUtlVectorBase<CTextureDictionary::DeferredResourceLoads_t, CUtlMemory<CTextureDictionary::DeferredResourceLo this); // 1007
		CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CTextureDictionary::DeferredResourceLoads_t, CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, this,
				int i);  // 1009
		CThreadFastMutex::GetDepth(); // 1039
		CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
		CWeakHandle<InfoForResourceTypeIMaterial2>::InitUntypedUnchecked(
					ResourceHandle_t hUntypedResource);  // 227
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 736
		CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 738
		IResourceSystem::BlockingLoadResourceByName<1952542070>(
							const CResourceName& resourceName,
							const char* pDebugName);  // 1044
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 1044
		{
			DeferredResourceLoads_t& entry; // 1049
			CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, int>::NumAllocated(); // 1143
			CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, int>::Base(); // 112
			Base(const CUtlVectorBase<CTextureDictionary::DeferredResourceLoads_t, CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, this); // 368
			ResetDbgInfo(const CUtlVectorBase<CTextureDictionary::DeferredResourceLoads_t, CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, this); // 824
			CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, int>::IsGrowable(); // 823
			CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, int>::IsExternallyAllocated(); // 859
			CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, int>::IsExternallyAllocated(); // 861
			CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, int>::Grow(
				int num);  // 806
			GrowMemory(const CUtlVectorBase<CTextureDictionary::DeferredResourceLoads_t, CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, this,
					int num);  // 1145
			AddToTail(const CUtlVectorBase<CTextureDictionary::DeferredResourceLoads_t, CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, this); // 1049
			CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CTextureDictionary::DeferredResourceLoads_t, CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, this,
					int i);  // 1049
			Count(const CUtlVectorBase<CTextureDictionary::DeferredResourceLoads_t, CUtlMemory<CTextureDictionary::DeferredResourceLo this); // 1054
		}
	}
	CMatSystemTexture::GetChecksum(); // 1064
} /* size: 1945, variables: 3, inline expansions: 15 (3359 bytes) */

// <00580423> fontmanager/texturedictionary.cpp:978
// variables: 6
void CTextureDictionary::BindTextureToFile(int id, const char* pFileName)
{
	uint32 fileNameChecksum; // 986
	CMatSystemTexture& texture; // 988
	ResourceHandle_t hResource; // 990
	{
		int iDeferredLoadIndex; // 1006
		{
			DeferredResourceLoads_t& entry; // 1020
		}
		{
			DeferredResourceLoads_t& entry; // 1049
		}
	}
} /* size: 0, variables: 3 */

// <0058E4E9> fontmanager/texturedictionary.cpp:1075
// variable: 1
// function calls: 5
void CTextureDictionary::BindTextureToMaterial(int id, HMaterial hMaterial, CRenderAttributes* pMaterialSpecificRenderAttrs)
{
	CMatSystemTexture& texture; // 1083
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::operator[](
			short unsigned int i);  // 494
	operator[](const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CMa this,
			short unsigned int i);  // 1083
	CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
		const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 1084
	CTextureDictionary::BindTextureToMaterial(
				int id,
				HMaterial hMaterial,
				CRenderAttributes* pMaterialSpecificRenderAttrs);  // 1075
} /* size: 193, variables: 1, inline expansions: 5 (74 bytes) */

// <005803D7> fontmanager/texturedictionary.cpp:1075
// variable: 1
void CTextureDictionary::BindTextureToMaterial(int id, HMaterial hMaterial, CRenderAttributes* pMaterialSpecificRenderAttrs)
{
	CMatSystemTexture& texture; // 1083
} /* size: 0, variables: 1 */

// <0058D38D> fontmanager/texturedictionary.cpp:1087
// variable: 1
// function calls: 5
void CTextureDictionary::BindTextureToTextureHandle(int id, HRenderTexture hTexture)
{
	CMatSystemTexture& texture; // 1095
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::operator[](
			short unsigned int i);  // 494
	operator[](const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CMa this,
			short unsigned int i);  // 1095
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1096
	CTextureDictionary::BindTextureToTextureHandle(
					int id,
					HRenderTexture hTexture);  // 1087
} /* size: 185, variables: 1, inline expansions: 5 (76 bytes) */

// <00580398> fontmanager/texturedictionary.cpp:1087
// variable: 1
void CTextureDictionary::BindTextureToTextureHandle(int id, HRenderTexture hTexture)
{
	CMatSystemTexture& texture; // 1095
} /* size: 0, variables: 1 */

// <00580044> fontmanager/texturedictionary.cpp:1102
// function calls: 16
void CTextureDictionary::GetMaterialHandle(int id)
{
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::IsIdxValid(
			short unsigned int i);  // 588
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::IsIdxAfter(
			short unsigned int i,
			const Iterator_t& it);  // 591
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::operator[](
			short unsigned int i);  // 594
	IsValidIndex(const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem this,
			short unsigned int i);  // 583
	IsValidIndex(const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem this,
			short unsigned int i);  // 972
	CTextureDictionary::IsValidId(
			int id);  // 1104
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::operator[](
			short unsigned int i);  // 494
	operator[](const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CMa this,
			short unsigned int i);  // 1107
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeIMaterial2>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator CWeakHandle<InfoForResourceTypeIMaterial2>(); // 168
	CMatSystemTexture::GetMaterial2Handle(); // 1107
	CWeakHandle<InfoForResourceTypeIMaterial2>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 1105
} /* size: 187, inline expansions: 16 (272 bytes) */

// <0057FDDA> fontmanager/texturedictionary.cpp:1110
// function calls: 9
void CTextureDictionary::GetMaterialSpecificRenderAttributes(int id)
{
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::IsIdxValid(
			short unsigned int i);  // 588
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::IsIdxAfter(
			short unsigned int i,
			const Iterator_t& it);  // 591
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::operator[](
			short unsigned int i);  // 594
	IsValidIndex(const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem this,
			short unsigned int i);  // 583
	IsValidIndex(const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem this,
			short unsigned int i);  // 972
	CTextureDictionary::IsValidId(
			int id);  // 1112
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::operator[](
			short unsigned int i);  // 494
	operator[](const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CMa this,
			short unsigned int i);  // 1115
	CMatSystemTexture::GetRenderAttributes(); // 1115
} /* size: 154, inline expansions: 9 (200 bytes) */

// <0057FA86> fontmanager/texturedictionary.cpp:1121
// function calls: 16
void CTextureDictionary::GetTextureHandle(int id)
{
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::IsIdxValid(
			short unsigned int i);  // 588
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::IsIdxAfter(
			short unsigned int i,
			const Iterator_t& it);  // 591
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::operator[](
			short unsigned int i);  // 594
	IsValidIndex(const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem this,
			short unsigned int i);  // 583
	IsValidIndex(const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem this,
			short unsigned int i);  // 972
	CTextureDictionary::IsValidId(
			int id);  // 1123
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::operator[](
			short unsigned int i);  // 494
	operator[](const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CMa this,
			short unsigned int i);  // 1126
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 48
	CMatSystemTexture::GetTextureHandle(); // 1126
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 1124
} /* size: 187, inline expansions: 16 (272 bytes) */

// <0057FA59> fontmanager/texturedictionary.cpp:1129
const char* GetTextureDictionaryResourceName(const CMatSystemTexture& texEntry, CBufferString* pOutBuffer)
{
} /* size: 0 */

// <0058BBAC> fontmanager/texturedictionary.cpp:1154
// function calls: 2
void BlockUntilLoaded(HRenderTexture hRenderTexture)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::IsLoaded(); // 1156
	CWeakHandle<InfoForResourceTypeCTextureBase>::IsLoaded(); // 1166
} /* size: 116, inline expansions: 2 (33 bytes) */

// <0058B78B> fontmanager/texturedictionary.cpp:1154
// variable: 1
// function calls: 16
void BlockUntilLoaded(HRenderTexture hRenderTexture)
{
	{
		CPathBufferString resourceName; // 1160
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 1160
		CUtlSymbolLarge::String(); // 148
		CBufferString::Append(
			const char* pString,
			int nChars,
			bool bExact);  // 148
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CBufferString* pOutBuffer,
				bool bAppend);  // 172
		ResourceGetName(ResourceHandle_t hResource,
				CBufferString* pOutBuffer,
				bool bAppend);  // 480
		CWeakHandle<InfoForResourceTypeCTextureBase>::GetResourceName(
				CBufferString* pOutName,
				bool bAppend);  // 1161
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1162
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 1162
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1163
	}
} /* size: 318 */

// <0057FA2D> fontmanager/texturedictionary.cpp:1154
// variable: 1
void BlockUntilLoaded(HRenderTexture hRenderTexture)
{
	{
		CPathBufferString resourceName; // 1160
	}
} /* size: 0 */

// <0057FA01> fontmanager/texturedictionary.cpp:1174
// variable: 1
void BlockUntilLoaded(HMaterial hMat)
{
	{
		CPathBufferString resourceName; // 1180
	}
} /* size: 0 */

// <0057E4D9> fontmanager/texturedictionary.cpp:1196
// variables: 7
// function calls: 58
void CTextureDictionary::GetTextureSize(int id, int& iWide, int& iTall, bool bBlockingLoadIfNecessary)
{
	{
		CMatSystemTexture& texEntry; // 1200
		{
			bool bFoundTextures; // 1209
			CPathBufferString resourceName; // 1236
			{
				HMaterial hMaterial; // 1212
				HRenderTexture hTexture; // 1215
				CWeakHandle<InfoForResourceTypeIMaterial2>::IsLoaded(); // 1176
				CWeakHandle<InfoForResourceTypeIMaterial2>::IsLoaded(); // 1186
				{
					CPathBufferString resourceName; // 1180
					CBufferString::InitMinConstruct(
							bool bGrowable);  // 712
					CBufferString::CBufferString(); // 591
					CBufferStringN<200>::CBufferStringN(); // 1180
					CUtlSymbolLarge::String(); // 148
					CBufferString::Append(
						const char* pString,
						int nChars,
						bool bExact);  // 148
					ResourceGetName(ResourceNameHandle_t hResourceName,
							CBufferString* pOutBuffer,
							bool bAppend);  // 172
					ResourceGetName(ResourceHandle_t hResource,
							CBufferString* pOutBuffer,
							bool bAppend);  // 480
					CWeakHandle<InfoForResourceTypeIMaterial2>::GetResourceName(
							CBufferString* pOutName,
							bool bAppend);  // 1181
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 781
					CBufferString::operator char const*(); // 1182
					CBufferString::~CBufferString(); // 587
					CBufferStringN<200>::~CBufferStringN(); // 318
					CResourceName::~CResourceName(); // 1182
					CBufferString::~CBufferString(); // 587
					CBufferStringN<200>::~CBufferStringN(); // 1183
				}
				BlockUntilLoaded(HMaterial hMat); // 1213
				CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
				CStrongHandle<InfoForResourceTypeIMaterial2>::operator CWeakHandle<InfoForResourceTypeIMaterial2>(); // 168
				CMatSystemTexture::GetMaterial2Handle(); // 1212
				CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
					const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
				CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
						const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 1213
				CInterlockedIntT<int, 4>::operator int(); // 282
				ResourceHandleToData<InfoForResourceTypeIMaterial2>(const CWeakHandle<InfoForResourceTypeIMaterial2>& hResource); // 1215
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
				StaticInvalidHandle(void); // 1216
				CWeakHandle<InfoForResourceTypeCTextureBase>::operator!=(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 1216
			}
			{
				HRenderTexture hRenderTexture; // 1226
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
				CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 48
				CMatSystemTexture::GetTextureHandle(); // 1226
				CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1227
			}
			Count(const CUtlVectorBase<CTextureDictionary::DeferredResourceLoads_t, CUtlMemory<CTextureDictionary::DeferredResourceLo this); // 1204
			CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
			CStrongHandle<InfoForResourceTypeIMaterial2>::operator CWeakHandle<InfoForResourceTypeIMaterial2>(); // 168
			CMatSystemTexture::GetMaterial2Handle(); // 1210
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
			CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 48
			CMatSystemTexture::GetTextureHandle(); // 1223
			CBufferString::InitMinConstruct(
					bool bGrowable);  // 712
			CBufferString::CBufferString(); // 591
			CBufferStringN<200>::CBufferStringN(); // 1236
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 1243
			CMatSystemTexture::GetRequestedButNotFoundMaterialName(); // 1232
			_DebuggerBreakInlineExpressionWrapper(void); // 1238
		}
		CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::operator[](
				short unsigned int i);  // 494
		operator[](const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CMa this,
				short unsigned int i);  // 1200
		CMatSystemTexture::IsStreamingIn(); // 1201
		CMatSystemTexture::Width(); // 1245
		CMatSystemTexture::Height(); // 1246
	}
} /* size: 0 */

// <0058C412> fontmanager/texturedictionary.cpp:1256
// function calls: 15
void CTextureDictionary::GetTextureTexCoords(int id, float& s0, float& t0, float& s1, float& t1)
{
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::IsIdxValid(
			short unsigned int i);  // 588
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::IsIdxAfter(
			short unsigned int i,
			const Iterator_t& it);  // 591
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::operator[](
			short unsigned int i);  // 594
	IsValidIndex(const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem this,
			short unsigned int i);  // 583
	IsValidIndex(const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem this,
			short unsigned int i);  // 972
	CTextureDictionary::IsValidId(
			int id);  // 1258
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::operator[](
			short unsigned int i);  // 494
	operator[](const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CMa this,
			short unsigned int i);  // 1265
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::operator[](
			short unsigned int i);  // 494
	operator[](const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CMa this,
			short unsigned int i);  // 1266
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::operator[](
			short unsigned int i);  // 494
	operator[](const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CMa this,
			short unsigned int i);  // 1267
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::operator[](
			short unsigned int i);  // 494
	operator[](const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CMa this,
			short unsigned int i);  // 1268
	CTextureDictionary::GetTextureTexCoords(
				int id,
				float& s0,
				float& t0,
				float& s1,
				float& t1);  // 1256
} /* size: 246, inline expansions: 15 (261 bytes) */

// <0057E484> fontmanager/texturedictionary.cpp:1256
void CTextureDictionary::GetTextureTexCoords(int id, float& s0, float& t0, float& s1, float& t1)
{
} /* size: 0 */

// <0057E243> fontmanager/texturedictionary.cpp:1276
// function calls: 8
void CTextureDictionary::GetTexture(int id)
{
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::IsIdxValid(
			short unsigned int i);  // 588
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::IsIdxAfter(
			short unsigned int i,
			const Iterator_t& it);  // 591
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::operator[](
			short unsigned int i);  // 594
	IsValidIndex(const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem this,
			short unsigned int i);  // 583
	IsValidIndex(const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem this,
			short unsigned int i);  // 972
	CTextureDictionary::IsValidId(
			int id);  // 1278
	CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::operator[](
			short unsigned int i);  // 494
	operator[](const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CMa this,
			short unsigned int i);  // 1281
} /* size: 0, inline expansions: 8 (0 bytes) */

// <0057DACA> fontmanager/texturedictionary.cpp:1288
// variables: 6
// function calls: 29
void CTextureDictionary::FindTextureIdForTextureFile(const char* pFileName)
{
	{
		uint16 i; // 1290
		{
			CMatSystemTexture* tex; // 1292
			HMaterial hMat; // 1296
			const char* szMaterialName; // 1300
			CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::operator[](
					short unsigned int i);  // 494
			operator[](const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CMa this,
					short unsigned int i);  // 1292
			CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
			CStrongHandle<InfoForResourceTypeIMaterial2>::operator CWeakHandle<InfoForResourceTypeIMaterial2>(); // 168
			CMatSystemTexture::GetMaterial2Handle(); // 1296
			CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 1297
			CInterlockedIntT<int, 4>::operator int(); // 282
			ResourceHandleToData<InfoForResourceTypeIMaterial2>(const CWeakHandle<InfoForResourceTypeIMaterial2>& hResource); // 1300
		}
		Head(const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem this); // 1290
		CUtlMemory<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, short unsigned int>::operator[](
				short unsigned int i);  // 368
		InternalElement(const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem this,
				short unsigned int i);  // 550
		Next(const CUtlLinkedList<CMatSystemTexture, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem this,
			short unsigned int i);  // 1290
	}
	{
		int i; // 1314
		{
			int nId; // 1318
			CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CTextureDictionary::DeferredResourceLoads_t, CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, this,
					int i);  // 1318
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 874
			CThreadFastMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 1319
		}
		Count(const CUtlVectorBase<CTextureDictionary::DeferredResourceLoads_t, CUtlMemory<CTextureDictionary::DeferredResourceLo this); // 1314
		CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CTextureDictionary::DeferredResourceLoads_t, CUtlMemory<CTextureDictionary::DeferredResourceLoads_t, this,
				int i);  // 1316
	}
	Count(const CUtlVectorBase<CTextureDictionary::DeferredResourceLoads_t, CUtlMemory<CTextureDictionary::DeferredResourceLo this); // 1310
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
		unsigned int nSpinSleepTime);  // 1312
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 1323
} /* size: 0, inline expansions: 7 (144 bytes) */

