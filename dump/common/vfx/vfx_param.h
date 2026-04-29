
//
// common/vfx/vfx_param.h
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	functions: 31
//	class: 1
//

// <06A51B98> ../common/vfx/vfx_param.h:14
// member functions: 48
// member variables: 6
// class size: 40
class CVfxParam {
	/* ../common/vfx/vfx_param.h:18 */
	void CVfxParam(CVfxParam* );
	/* ../common/vfx/vfx_param.h:31 */
	void ~CVfxParam(CVfxParam* );
	/* ../common/vfx/vfx_param.h:36 */
	void CVfxParam(CVfxParam* , const CVfxParam& );
	/* ../common/vfx/vfx_param.h:43 */
	CVfxParam& operator=(CVfxParam* , const CVfxParam& );
	/* ../common/vfx/vfx_param.h:55 */
	int GetInt(const CVfxParam* );
	/* ../common/vfx/vfx_param.h:56 */
	float GetFloat(const CVfxParam* , int);
	/* ../common/vfx/vfx_param.h:57 */
	const float* GetVec(const CVfxParam* );
	/* ../common/vfx/vfx_param.h:58 */
	bool IsDynamic(const CVfxParam* );
	/* ../common/vfx/vfx_param.h:60 */
	int GetDynamicIntValue(const CVfxParam* , CVfxExpressionEvalContext& );
	/* ../common/vfx/vfx_param.h:71 */
	int GetDynamicIntValue(const CVfxParam* , const CRenderAttributes* , const CRenderAttributes* , const CUtlAttributeList<const CVfxParam*, 16, const CVfxParam*, 16>* );
	/* ../common/vfx/vfx_param.h:81 */
	float GetDynamicFloatValue(const CVfxParam* , CVfxExpressionEvalContext& );
	/* ../common/vfx/vfx_param.h:92 */
	float GetDynamicFloatValue(const CVfxParam* , const CRenderAttributes* , const CRenderAttributes* , const CUtlAttributeList<const CVfxParam*, 16, const CVfxParam*, 16>* );
	/* ../common/vfx/vfx_param.h:102 */
	Vector4D GetDynamicVector4DValue(const CVfxParam* , CVfxExpressionEvalContext& );
	/* ../common/vfx/vfx_param.h:116 */
	Vector4D GetDynamicVector4DValue(const CVfxParam* , const CRenderAttributes* , const CRenderAttributes* , const CUtlAttributeList<const CVfxParam*, 16, const CVfxParam*, 16>* );
	/* ../common/vfx/vfx_param.h:126 */
	void SetVec(CVfxParam* , const float* );
	/* ../common/vfx/vfx_param.h:127 */
	void SetBufferData(CVfxParam* , const void* , uint32);
	/* ../common/vfx/vfx_param.h:135 */
	HRenderTexture GetTextureHandle(const CVfxParam* );
	/* ../common/vfx/vfx_param.h:140 */
	HRenderTexture GetDynamicTextureHandle(const CVfxParam* , CVfxExpressionEvalContext& );
	/* ../common/vfx/vfx_param.h:152 */
	HRenderTexture GetDynamicTextureHandleAndConstness(const CVfxParam* , CVfxExpressionEvalContext& , bool* );
	/* ../common/vfx/vfx_param.h:164 */
	HRenderTexture GetDynamicTextureHandle(const CVfxParam* , const CRenderAttributes* , const CRenderAttributes* , const CUtlAttributeList<const CVfxParam*, 16, const CVfxParam*, 16>* );
	/* ../common/vfx/vfx_param.h:174 */
	void SetTextureHandle(CVfxParam* , HRenderTexture);
	/* ../common/vfx/vfx_param.h:180 */
	bool IsTextureParam(const CVfxParam* );
private:
	/* ../common/vfx/vfx_param.h:183 */
	void FreeBufferData(CVfxParam* );
	/* ../common/vfx/vfx_param.h:193 */
	void CopyFrom(CVfxParam* , const CVfxParam& );
protected:
	float m_flVec4[4]; /* 0 16 */
	HRenderTextureStrong m_textureHandle; /* 16 8 */
	CUtlStringToken m_stringToken; /* 24 4 */
	uint32 m_nBufferSize:16; /* 28: 0 4 */
	uint32 m_bIsTextureParam:1; /* 28:16 4 */
	void * m_pBuffer; /* 32 8 */
	void CVfxParam(class CVfxParam *); /* linkage=_ZN9CVfxParamC4Ev */
	void ~CVfxParam(class CVfxParam *); /* linkage=_ZN9CVfxParamD4Ev */
	void CVfxParam(class CVfxParam *, const class CVfxParam  &); /* linkage=_ZN9CVfxParamC4ERKS_ */
	class CVfxParam & operator=(class CVfxParam *, const class CVfxParam  &); /* linkage=_ZN9CVfxParamaSERKS_ */
	int GetInt(const class CVfxParam  *); /* linkage=_ZNK9CVfxParam6GetIntEv */
	float GetFloat(const class CVfxParam  *, int); /* linkage=_ZNK9CVfxParam8GetFloatEi */
	const float  * GetVec(const class CVfxParam  *); /* linkage=_ZNK9CVfxParam6GetVecEv */
	bool IsDynamic(const class CVfxParam  *); /* linkage=_ZNK9CVfxParam9IsDynamicEv */
	int GetDynamicIntValue(const class CVfxParam  *, class CVfxExpressionEvalContext &); /* linkage=_ZNK9CVfxParam18GetDynamicIntValueER25CVfxExpressionEvalContext */
	int GetDynamicIntValue(const class CVfxParam  *, const class CRenderAttributes  *, const class CRenderAttributes  *, const class CUtlAttributeList<const CVfxParam*, 16, const CVfxParam*, 16>  *); /* linkage=_ZNK9CVfxParam18GetDynamicIntValueEPK17CRenderAttributesS2_PK17CUtlAttributeListIPKS_Li16ES5_Li16EE */
	float GetDynamicFloatValue(const class CVfxParam  *, class CVfxExpressionEvalContext &); /* linkage=_ZNK9CVfxParam20GetDynamicFloatValueER25CVfxExpressionEvalContext */
	float GetDynamicFloatValue(const class CVfxParam  *, const class CRenderAttributes  *, const class CRenderAttributes  *, const class CUtlAttributeList<const CVfxParam*, 16, const CVfxParam*, 16>  *); /* linkage=_ZNK9CVfxParam20GetDynamicFloatValueEPK17CRenderAttributesS2_PK17CUtlAttributeListIPKS_Li16ES5_Li16EE */
	class Vector4D GetDynamicVector4DValue(const class CVfxParam  *, class CVfxExpressionEvalContext &); /* linkage=_ZNK9CVfxParam23GetDynamicVector4DValueER25CVfxExpressionEvalContext */
	class Vector4D GetDynamicVector4DValue(const class CVfxParam  *, const class CRenderAttributes  *, const class CRenderAttributes  *, const class CUtlAttributeList<const CVfxParam*, 16, const CVfxParam*, 16>  *); /* linkage=_ZNK9CVfxParam23GetDynamicVector4DValueEPK17CRenderAttributesS2_PK17CUtlAttributeListIPKS_Li16ES5_Li16EE */
	void SetVec(class CVfxParam *, const float  *); /* linkage=_ZN9CVfxParam6SetVecEPKf */
	void SetBufferData(class CVfxParam *, const void  *, uint32); /* linkage=_ZN9CVfxParam13SetBufferDataEPKvj */
	HRenderTexture GetTextureHandle(const class CVfxParam  *); /* linkage=_ZNK9CVfxParam16GetTextureHandleEv */
	HRenderTexture GetDynamicTextureHandle(const class CVfxParam  *, class CVfxExpressionEvalContext &); /* linkage=_ZNK9CVfxParam23GetDynamicTextureHandleER25CVfxExpressionEvalContext */
	HRenderTexture GetDynamicTextureHandleAndConstness(const class CVfxParam  *, class CVfxExpressionEvalContext &, bool *); /* linkage=_ZNK9CVfxParam35GetDynamicTextureHandleAndConstnessER25CVfxExpressionEvalContextPb */
	HRenderTexture GetDynamicTextureHandle(const class CVfxParam  *, const class CRenderAttributes  *, const class CRenderAttributes  *, const class CUtlAttributeList<const CVfxParam*, 16, const CVfxParam*, 16>  *); /* linkage=_ZNK9CVfxParam23GetDynamicTextureHandleEPK17CRenderAttributesS2_PK17CUtlAttributeListIPKS_Li16ES5_Li16EE */
	void SetTextureHandle(class CVfxParam *, HRenderTexture); /* linkage=_ZN9CVfxParam16SetTextureHandleE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	bool IsTextureParam(const class CVfxParam  *); /* linkage=_ZNK9CVfxParam14IsTextureParamEv */
	void FreeBufferData(class CVfxParam *); /* linkage=_ZN9CVfxParam14FreeBufferDataEv */
	void CopyFrom(class CVfxParam *, const class CVfxParam  &); /* linkage=_ZN9CVfxParam8CopyFromERKS_ */
};

// <0019D5FA> ../common/vfx/vfx_param.h:18
void CVfxParam::CVfxParam()
{
} /* size: 0 */

// <0019D5E1> ../common/vfx/vfx_param.h:18
inline void CVfxParam::CVfxParam()
{
} /* size: 0 */

// <0019D5CA> ../common/vfx/vfx_param.h:31
void CVfxParam::~CVfxParam()
{
} /* size: 0 */

// <0019D5B1> ../common/vfx/vfx_param.h:31
inline void CVfxParam::~CVfxParam()
{
} /* size: 0 */

// <0019D595> ../common/vfx/vfx_param.h:36
void CVfxParam::CVfxParam(const CVfxParam& other)
{
} /* size: 0 */

// <0019D570> ../common/vfx/vfx_param.h:36
inline void CVfxParam::CVfxParam(const CVfxParam& other)
{
} /* size: 0 */

// <0019D54B> ../common/vfx/vfx_param.h:43
inline void CVfxParam::operator=(const CVfxParam& other)
{
} /* size: 0 */

// <0030C264> ../common/vfx/vfx_param.h:55
inline void CVfxParam::GetInt()
{
} /* size: 0 */

// <06A74ED2> ../common/vfx/vfx_param.h:56
inline void CVfxParam::GetFloat(int nIndex)
{
} /* size: 0 */

// <0030C226> ../common/vfx/vfx_param.h:57
inline void CVfxParam::GetVec()
{
} /* size: 0 */

// <06A74EB9> ../common/vfx/vfx_param.h:58
inline void CVfxParam::IsDynamic()
{
} /* size: 0 */

// <0030C1B3> ../common/vfx/vfx_param.h:60
// variables: 3
inline void CVfxParam::GetDynamicIntValue(CVfxExpressionEvalContext& ctx)
{
	const char   __FUNCTION__; // 8525
	Vector4D vVal; // 63
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 62
	}
} /* size: 0, variables: 2 */

// <0030C159> ../common/vfx/vfx_param.h:81
// variables: 3
inline void CVfxParam::GetDynamicFloatValue(CVfxExpressionEvalContext& ctx)
{
	const char   __FUNCTION__; // 8574
	Vector4D vVal; // 84
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 83
	}
} /* size: 0, variables: 2 */

// <06A74E5F> ../common/vfx/vfx_param.h:102
// variables: 3
inline void CVfxParam::GetDynamicVector4DValue(CVfxExpressionEvalContext& ctx)
{
	const char   __FUNCTION__; // 18945
	Vector4D vVal; // 105
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 104
	}
} /* size: 0, variables: 2 */

// <01711AE1> ../common/vfx/vfx_param.h:102
// variables: 3
inline void CVfxParam::GetDynamicVector4DValue(CVfxExpressionEvalContext& ctx)
{
	const char   __FUNCTION__; // 64822
	Vector4D vVal; // 105
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 104
	}
} /* size: 0, variables: 2 */

// <005DC37E> ../common/vfx/vfx_param.h:102
// variables: 3
inline void CVfxParam::GetDynamicVector4DValue(CVfxExpressionEvalContext& ctx)
{
	const char   __FUNCTION__; // 65328
	Vector4D vVal; // 105
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 104
	}
} /* size: 0, variables: 2 */

// <00930790> ../common/vfx/vfx_param.h:102
// variables: 3
inline void CVfxParam::GetDynamicVector4DValue(CVfxExpressionEvalContext& ctx)
{
	const char   __FUNCTION__; // 43799
	Vector4D vVal; // 105
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 104
	}
} /* size: 0, variables: 2 */

// <0030C0FF> ../common/vfx/vfx_param.h:102
// variables: 3
inline void CVfxParam::GetDynamicVector4DValue(CVfxExpressionEvalContext& ctx)
{
	const char   __FUNCTION__; // 8645
	Vector4D vVal; // 105
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 104
	}
} /* size: 0, variables: 2 */

// <06A74E16> ../common/vfx/vfx_param.h:116
// variable: 1
inline void CVfxParam::GetDynamicVector4DValue(const CRenderAttributes* pAttrs, const CRenderAttributes* pBackupAttrs, const CUtlAttributeList<const CVfxParam*, 16, const CVfxParam*, 16>* pMaterialVars)
{
	CVfxExpressionEvalContext ctx; // 119
} /* size: 0, variables: 1 */

// <0019D4B6> ../common/vfx/vfx_param.h:126
inline void CVfxParam::SetVec(const float* pVec)
{
} /* size: 0 */

// <06A74DFD> ../common/vfx/vfx_param.h:135
inline void CVfxParam::GetTextureHandle()
{
} /* size: 0 */

// <06A74DA3> ../common/vfx/vfx_param.h:140
// variables: 3
inline void CVfxParam::GetDynamicTextureHandle(CVfxExpressionEvalContext& ctx)
{
	const char   __FUNCTION__; // 18945
	HRenderTexture hTex; // 143
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 142
	}
} /* size: 0, variables: 2 */

// <01711A25> ../common/vfx/vfx_param.h:140
// variables: 3
inline void CVfxParam::GetDynamicTextureHandle(CVfxExpressionEvalContext& ctx)
{
	const char   __FUNCTION__; // 64822
	HRenderTexture hTex; // 143
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 142
	}
} /* size: 0, variables: 2 */

// <005DC2C2> ../common/vfx/vfx_param.h:140
// variables: 3
inline void CVfxParam::GetDynamicTextureHandle(CVfxExpressionEvalContext& ctx)
{
	const char   __FUNCTION__; // 65328
	HRenderTexture hTex; // 143
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 142
	}
} /* size: 0, variables: 2 */

// <009306D4> ../common/vfx/vfx_param.h:140
// variables: 3
inline void CVfxParam::GetDynamicTextureHandle(CVfxExpressionEvalContext& ctx)
{
	const char   __FUNCTION__; // 43799
	HRenderTexture hTex; // 143
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 142
	}
} /* size: 0, variables: 2 */

// <0030C08C> ../common/vfx/vfx_param.h:140
// variables: 3
inline void CVfxParam::GetDynamicTextureHandle(CVfxExpressionEvalContext& ctx)
{
	const char   __FUNCTION__; // 8645
	HRenderTexture hTex; // 143
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 142
	}
} /* size: 0, variables: 2 */

// <06A74D5A> ../common/vfx/vfx_param.h:164
// variable: 1
inline void CVfxParam::GetDynamicTextureHandle(const CRenderAttributes* pAttrs, const CRenderAttributes* pBackupAttrs, const CUtlAttributeList<const CVfxParam*, 16, const CVfxParam*, 16>* pMaterialVars)
{
	CVfxExpressionEvalContext ctx; // 167
} /* size: 0, variables: 1 */

// <0019D478> ../common/vfx/vfx_param.h:174
inline void CVfxParam::SetTextureHandle(HRenderTexture hTex)
{
} /* size: 0 */

// <06A74D41> ../common/vfx/vfx_param.h:180
inline void CVfxParam::IsTextureParam()
{
} /* size: 0 */

// <0019D446> ../common/vfx/vfx_param.h:183
inline void CVfxParam::FreeBufferData()
{
} /* size: 0 */

// <0019D421> ../common/vfx/vfx_param.h:193
inline void CVfxParam::CopyFrom(const CVfxParam& other)
{
} /* size: 0 */

