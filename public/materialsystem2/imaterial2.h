
//
// public/materialsystem2/imaterial2.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	functions: 21
//	classes: 2
//	structs: 7
//

// <0117FF22> ../public/materialsystem2/imaterial2.h:43
// member function: 1
// member variables: 5
// struct size: 80
struct ConstantBufferVariable_t {
	char m_pVariableName[64]; /* 0 64 */
	int m_nConstantBufferOffset; /* 64 4 */
	int m_nNumColumns; /* 68 4 */
	int m_nNumRows; /* 72 4 */
	int m_nArraySize; /* 76 4 */
	/* ../public/materialsystem2/imaterial2.h:51 */
	void ConstantBufferVariable_t(ConstantBufferVariable_t* );
};

// <0002A6B8> ../../public/materialsystem2/imaterial2.h:43
// member function: 1
// member variables: 5
// struct size: 80
struct ConstantBufferVariable_t {
	char m_pVariableName[64]; /* 0 64 */
	int m_nConstantBufferOffset; /* 64 4 */
	int m_nNumColumns; /* 68 4 */
	int m_nNumRows; /* 72 4 */
	int m_nArraySize; /* 76 4 */
	/* ../../public/materialsystem2/imaterial2.h:51 */
	void ConstantBufferVariable_t(ConstantBufferVariable_t* );
};

// <069719D0> ../public/materialsystem2/imaterial2.h:51
void ConstantBufferVariable_t::ConstantBufferVariable_t()
{
} /* size: 0 */

// <069719B7> ../public/materialsystem2/imaterial2.h:51
inline void ConstantBufferVariable_t::ConstantBufferVariable_t()
{
} /* size: 0 */

// <068EE598> ../public/materialsystem2/imaterial2.h:54
void ConstantBufferDescription_t::ConstantBufferDescription_t(const ConstantBufferDescription_t &)
{
} /* size: 0 */

// <068EE576> ../public/materialsystem2/imaterial2.h:54
inline void ConstantBufferDescription_t::ConstantBufferDescription_t(const ConstantBufferDescription_t &)
{
} /* size: 0 */

// <068EAA51> ../public/materialsystem2/imaterial2.h:54
void ConstantBufferDescription_t::~ConstantBufferDescription_t()
{
} /* size: 0 */

// <068EAA34> ../public/materialsystem2/imaterial2.h:54
inline void ConstantBufferDescription_t::~ConstantBufferDescription_t()
{
} /* size: 0 */

// <011816B9> ../public/materialsystem2/imaterial2.h:54
// member functions: 2
// member variables: 6
// struct size: 112
struct ConstantBufferDescription_t {
	char m_pName[64]; /* 0 64 */
	CUtlVector<ConstantBufferVariable_t, CUtlMemory<ConstantBufferVariable_t, int> > m_variableArray; /* 64 32 */
	uint32 m_nSizeInBytes; /* 96 4 */
	uint32 m_nHash; /* 100 4 */
	MaterialSystemConstantBufferType_t m_type; /* 104 4 */
	bool m_bIsPushConstantBuffer; /* 108 1 */
	/* ../public/materialsystem2/imaterial2.h:63 */
	void ConstantBufferDescription_t(ConstantBufferDescription_t* );
	void ~ConstantBufferDescription_t(ConstantBufferDescription_t* );
};

// <015331D8> ../public/materialsystem2/imaterial2.h:54
// member functions: 3
// member variables: 6
// struct size: 112
struct ConstantBufferDescription_t {
	char m_pName[64]; /* 0 64 */
	CUtlVector<ConstantBufferVariable_t, CUtlMemory<ConstantBufferVariable_t, int> > m_variableArray; /* 64 32 */
	uint32 m_nSizeInBytes; /* 96 4 */
	uint32 m_nHash; /* 100 4 */
	MaterialSystemConstantBufferType_t m_type; /* 104 4 */
	bool m_bIsPushConstantBuffer; /* 108 1 */
	/* ../public/materialsystem2/imaterial2.h:63 */
	void ConstantBufferDescription_t(ConstantBufferDescription_t* );
	void ~ConstantBufferDescription_t(ConstantBufferDescription_t* );
	void ConstantBufferDescription_t(ConstantBufferDescription_t* , const ConstantBufferDescription_t& );
};

// <0002BDE1> ../../public/materialsystem2/imaterial2.h:54
// member function: 1
// member variables: 6
// struct size: 112
struct ConstantBufferDescription_t {
	char m_pName[64]; /* 0 64 */
	CUtlVector<ConstantBufferVariable_t, CUtlMemory<ConstantBufferVariable_t, int> > m_variableArray; /* 64 32 */
	uint32 m_nSizeInBytes; /* 96 4 */
	uint32 m_nHash; /* 100 4 */
	MaterialSystemConstantBufferType_t m_type; /* 104 4 */
	bool m_bIsPushConstantBuffer; /* 108 1 */
	/* ../../public/materialsystem2/imaterial2.h:63 */
	void ConstantBufferDescription_t(ConstantBufferDescription_t* );
};

// <0004D36A> ../public/materialsystem2/imaterial2.h:54
// member function: 1
// member variables: 6
// struct size: 112
struct ConstantBufferDescription_t {
	char m_pName[64]; /* 0 64 */
	CUtlVector<ConstantBufferVariable_t, CUtlMemory<ConstantBufferVariable_t, int> > m_variableArray; /* 64 32 */
	uint32 m_nSizeInBytes; /* 96 4 */
	uint32 m_nHash; /* 100 4 */
	MaterialSystemConstantBufferType_t m_type; /* 104 4 */
	bool m_bIsPushConstantBuffer; /* 108 1 */
	/* ../public/materialsystem2/imaterial2.h:63 */
	void ConstantBufferDescription_t(ConstantBufferDescription_t* );
};

// <0697196C> ../public/materialsystem2/imaterial2.h:63
void ConstantBufferDescription_t::ConstantBufferDescription_t()
{
} /* size: 0 */

// <06971953> ../public/materialsystem2/imaterial2.h:63
inline void ConstantBufferDescription_t::ConstantBufferDescription_t()
{
} /* size: 0 */

// <018DA35A> ../public/materialsystem2/imaterial2.h:80
// member variables: 4
// struct size: 48
struct MaterialRenderablePass_t {
	const class IMaterialMode * pMode; /* 0 8 */
	uint32 dynamicComboArrayIdx[8]; /* 8 32 */
	uint32 nAllStateSetBits; /* 40 4 */
	uint nFrameCount; /* 44 4 */
};

// <0017C98B> ../public/materialsystem2/imaterial2.h:95
void IMaterialMode::IMaterialMode()
{
} /* size: 0 */

// <0017C96F> ../public/materialsystem2/imaterial2.h:95
inline void IMaterialMode::IMaterialMode()
{
} /* size: 0 */

// <0015820C> ../public/materialsystem2/imaterial2.h:95
inline void IMaterialMode::operator=(const IMaterialMode &)
{
} /* size: 0 */

// <001013B4> ../public/materialsystem2/imaterial2.h:95
// member functions: 18
// member variable: 1
// vtable entries: 3
// class size: 8
class IMaterialMode {
	IMaterialMode& operator=(IMaterialMode* , IMaterialMode& );
	IMaterialMode& operator=(IMaterialMode* , const IMaterialMode& );
	void IMaterialMode(IMaterialMode* , IMaterialMode& );
	void IMaterialMode(IMaterialMode* , const IMaterialMode& );
	void IMaterialMode(IMaterialMode* );
	void ~IMaterialMode(IMaterialMode* );
	int ()(void) * * _vptr.IMaterialMode; /* 0 8 */
	/* ../public/materialsystem2/imaterial2.h:102 */
	virtual int ComputeRenderablePassesForContext(const IMaterialMode* , const CRenderAttributes* , const CRenderAttributes* , MaterialRenderablePass_t* );
	/* ../public/materialsystem2/imaterial2.h:108 */
	virtual int ComputeRenderablePassesForContext(const IMaterialMode* , const CRenderAttributes* , IRenderContext* , MaterialRenderablePass_t* );
	/* ../public/materialsystem2/imaterial2.h:110 */
	virtual bool GetRayTraceShader(const IMaterialMode* , RenderShaderHandle_t& , CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& , uint32* , const CRenderAttributes* , IRenderContext* );
	class IMaterialMode & operator=(class IMaterialMode *, class IMaterialMode &); /* linkage=_ZN13IMaterialModeaSEOS_ */
	class IMaterialMode & operator=(class IMaterialMode *, const class IMaterialMode  &); /* linkage=_ZN13IMaterialModeaSERKS_ */
	void IMaterialMode(class IMaterialMode *, class IMaterialMode &); /* linkage=_ZN13IMaterialModeC4EOS_ */
	void IMaterialMode(class IMaterialMode *, const class IMaterialMode  &); /* linkage=_ZN13IMaterialModeC4ERKS_ */
	void IMaterialMode(class IMaterialMode *); /* linkage=_ZN13IMaterialModeC4Ev */
	void ~IMaterialMode(class IMaterialMode *); /* linkage=_ZN13IMaterialModeD4Ev */
	virtual int ComputeRenderablePassesForContext(const class IMaterialMode  *, const class CRenderAttributes  *, const class CRenderAttributes  *, class MaterialRenderablePass_t *); /* linkage=_ZNK13IMaterialMode33ComputeRenderablePassesForContextEPK17CRenderAttributesS2_P24MaterialRenderablePass_t */
	virtual int ComputeRenderablePassesForContext(const class IMaterialMode  *, const class CRenderAttributes  *, class IRenderContext *, class MaterialRenderablePass_t *); /* linkage=_ZNK13IMaterialMode33ComputeRenderablePassesForContextEPK17CRenderAttributesP14IRenderContextP24MaterialRenderablePass_t */
	virtual bool GetRayTraceShader(const class IMaterialMode  *, RenderShaderHandle_t &, class CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > &, uint32 *, const class CRenderAttributes  *, class IRenderContext *); /* linkage=_ZNK13IMaterialMode17GetRayTraceShaderERP22RenderShaderHandle_t__R10CUtlVectorIh10CUtlMemoryIhiEEPjPK17CRenderAttributesP14IRenderContext */
};

// <00199AFB> ../public/materialsystem2/imaterial2.h:128
void IMaterial2::IMaterial2()
{
} /* size: 0 */

// <00199ADF> ../public/materialsystem2/imaterial2.h:128
inline void IMaterial2::IMaterial2()
{
} /* size: 0 */

// <000F7902> ../public/materialsystem2/imaterial2.h:128
// member functions: 114
// member variable: 1
// vtable entries: 43
// class size: 8
class IMaterial2 {
	/* ../public/materialsystem2/imaterial2.h:166 */
	struct TextureAttributeValue_t {
		CUtlStringToken m_name; /* 0 4 */
		int m_nSpecificMipLevelToBind; /* 4 4 */
		HRenderTexture m_hTexture; /* 8 8 */
		/* ../public/materialsystem2/imaterial2.h:172 */
		void TextureAttributeValue_t(TextureAttributeValue_t* , CUtlStringToken, int, HRenderTexture);
		void TextureAttributeValue_t(TextureAttributeValue_t* , TextureAttributeValue_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	void IMaterial2(IMaterial2* , IMaterial2& );
	void IMaterial2(IMaterial2* , const IMaterial2& );
	void IMaterial2(IMaterial2* );
	void ~IMaterial2(IMaterial2* );
	int ()(void) * * _vptr.IMaterial2; /* 0 8 */
	/* ../public/materialsystem2/imaterial2.h:132 */
	virtual const char* GetName(const IMaterial2* );
	/* ../public/materialsystem2/imaterial2.h:133 */
	virtual const char* GetNameWithMod(const IMaterial2* );
	/* ../public/materialsystem2/imaterial2.h:138 */
	virtual const IMaterial2* GetCopySource(const IMaterial2* );
	/* ../public/materialsystem2/imaterial2.h:143 */
	virtual uint64 GetSimilarityKey(const IMaterial2* );
	/* ../public/materialsystem2/imaterial2.h:146 */
	virtual bool IsLoaded(const IMaterial2* );
	/* ../public/materialsystem2/imaterial2.h:151 */
	virtual IMaterialMode* GetMode(const IMaterial2* , const CUtlStringToken& );
	/* ../public/materialsystem2/imaterial2.h:154 */
	virtual const CRenderAttributes& GetAttributes(const IMaterial2* );
	/* ../public/materialsystem2/imaterial2.h:155 */
	virtual bool GetBoolAttribute(const IMaterial2* , bool* , CUtlStringToken);
	/* ../public/materialsystem2/imaterial2.h:156 */
	virtual bool GetIntAttribute(const IMaterial2* , int* , CUtlStringToken);
	/* ../public/materialsystem2/imaterial2.h:157 */
	virtual bool GetFloatAttribute(const IMaterial2* , float32* , CUtlStringToken);
	/* ../public/materialsystem2/imaterial2.h:158 */
	virtual bool GetStringAttribute(const IMaterial2* , CUtlString* , CUtlStringToken);
	/* ../public/materialsystem2/imaterial2.h:159 */
	virtual bool GetVector2DAttribute(const IMaterial2* , Vector2D* , CUtlStringToken);
	/* ../public/materialsystem2/imaterial2.h:160 */
	virtual bool GetVectorAttribute(const IMaterial2* , Vector* , CUtlStringToken);
	/* ../public/materialsystem2/imaterial2.h:161 */
	virtual bool GetVector4DAttribute(const IMaterial2* , Vector4D* , CUtlStringToken);
	/* ../public/materialsystem2/imaterial2.h:162 */
	virtual bool GetTextureAttribute(const IMaterial2* , HRenderTexture* , CUtlStringToken);
	/* ../public/materialsystem2/imaterial2.h:163 */
	virtual HRenderTexture GetFirstTextureAttribute(const IMaterial2* );
	/* ../public/materialsystem2/imaterial2.h:164 */
	virtual HRenderTexture GetFirstTextureParam(const IMaterial2* );
	/* ../public/materialsystem2/imaterial2.h:180 */
	virtual void GetAllTextureAttributes(const IMaterial2* , CUtlVector<IMaterial2::TextureAttributeValue_t, CUtlMemory<IMaterial2::TextureAttributeValue_t, int> >& );
	/* ../public/materialsystem2/imaterial2.h:182 */
	bool GetBoolAttributeOrDefault(const IMaterial2* , CUtlStringToken, bool);
	/* ../public/materialsystem2/imaterial2.h:187 */
	int GetIntAttributeOrDefault(const IMaterial2* , CUtlStringToken, int);
	/* ../public/materialsystem2/imaterial2.h:192 */
	float32 GetFloatAttributeOrDefault(const IMaterial2* , CUtlStringToken, float32);
	/* ../public/materialsystem2/imaterial2.h:197 */
	HRenderTexture GetTextureAttributeOrDefault(const IMaterial2* , CUtlStringToken, HRenderTexture);
	/* ../public/materialsystem2/imaterial2.h:204 */
	virtual const CVsInputSignatureVector* GetVertexShaderInputSignature(const IMaterial2* );
	/* ../public/materialsystem2/imaterial2.h:208 */
	virtual bool IsBatchableInMode(const IMaterial2* , const CUtlStringToken& , EBatchableInModeFlags_t);
	/* ../public/materialsystem2/imaterial2.h:212 */
	virtual void GetRepresentativeTextureSize(const IMaterial2* , int* , int* , int, int, bool);
	/* ../public/materialsystem2/imaterial2.h:213 */
	int GetRepresentativeTextureWidth(const IMaterial2* , int, bool);
	/* ../public/materialsystem2/imaterial2.h:219 */
	int GetRepresentativeTextureHeight(const IMaterial2* , int, bool);
	/* ../public/materialsystem2/imaterial2.h:228 */
	virtual void GetWorldMappingSize(const IMaterial2* , int* , int* , int, int, bool);
	/* ../public/materialsystem2/imaterial2.h:229 */
	int GetWorldMappingWidth(const IMaterial2* , int, bool);
	/* ../public/materialsystem2/imaterial2.h:235 */
	int GetWorldMappingHeight(const IMaterial2* , int, bool);
	/* ../public/materialsystem2/imaterial2.h:297 */
	int ComputePassData(const IMaterial2* , const CUtlStringToken& , IRenderContext* , MaterialRenderablePass_t* , const CRenderAttributes* );
	/* ../public/materialsystem2/imaterial2.h:254 */
	virtual uint32 GetShaderStateOverriddenByMaterial(const IMaterial2* );
	/* ../public/materialsystem2/imaterial2.h:264 */
	virtual void SetName(IMaterial2* , const char* );
	/* ../public/materialsystem2/imaterial2.h:265 */
	virtual void ClearParams(IMaterial2* );
	/* ../public/materialsystem2/imaterial2.h:266 */
	virtual int FindOrAddParam(IMaterial2* , const char* );
	/* ../public/materialsystem2/imaterial2.h:268 */
	virtual void LoadShadersAndSetupModes(IMaterial2* , HMaterial, bool);
	/* ../public/materialsystem2/imaterial2.h:269 */
	virtual CRenderAttributes* GetRenderAttributes(IMaterial2* );
	/* ../public/materialsystem2/imaterial2.h:270 */
	virtual void RecreateAllStaticConstantAndCommandBuffers(IMaterial2* );
	/* ../public/materialsystem2/imaterial2.h:275 */
	virtual void GenerateMaterialSource(const IMaterial2* , CUtlBuffer* );
	/* ../public/materialsystem2/imaterial2.h:277 */
	virtual bool HasParam(IMaterial2* , const char* );
	/* ../public/materialsystem2/imaterial2.h:279 */
	virtual void Set(IMaterial2* , const char* , Vector4D);
	/* ../public/materialsystem2/imaterial2.h:280 */
	virtual void Set(IMaterial2* , const char* , HRenderTexture);
	/* ../public/materialsystem2/imaterial2.h:281 */
	virtual void Set(IMaterial2* , const char* , const char* );
	/* ../public/materialsystem2/imaterial2.h:282 */
	virtual void Set(IMaterial2* , const char* , float* );
	/* ../public/materialsystem2/imaterial2.h:284 */
	virtual Vector4D GetVector4(const IMaterial2* , const char* );
	/* ../public/materialsystem2/imaterial2.h:285 */
	virtual HRenderTexture GetTexture(const IMaterial2* , const char* );
	/* ../public/materialsystem2/imaterial2.h:286 */
	virtual int GetInt(const IMaterial2* , const char* , int);
	/* ../public/materialsystem2/imaterial2.h:287 */
	virtual float GetFloat(const IMaterial2* , const char* , float);
	/* ../public/materialsystem2/imaterial2.h:288 */
	virtual const char* GetString(const IMaterial2* , const char* , const char* );
	/* ../public/materialsystem2/imaterial2.h:290 */
	virtual void SetEdited(IMaterial2* , bool);
	/* ../public/materialsystem2/imaterial2.h:291 */
	virtual bool IsEdited(const IMaterial2* );
	/* ../public/materialsystem2/imaterial2.h:293 */
	virtual void ReloadStaticCombos(IMaterial2* , HMaterial);
	int GetIntAttributeOrDefault(const class IMaterial2  *, class CUtlStringToken, int); /* linkage=_ZNK10IMaterial224GetIntAttributeOrDefaultE15CUtlStringTokeni */
	bool GetBoolAttributeOrDefault(const class IMaterial2  *, class CUtlStringToken, bool); /* linkage=_ZNK10IMaterial225GetBoolAttributeOrDefaultE15CUtlStringTokenb */
	void IMaterial2(class IMaterial2 *, class IMaterial2 &); /* linkage=_ZN10IMaterial2C4EOS_ */
	void IMaterial2(class IMaterial2 *, const class IMaterial2  &); /* linkage=_ZN10IMaterial2C4ERKS_ */
	void IMaterial2(class IMaterial2 *); /* linkage=_ZN10IMaterial2C4Ev */
	void ~IMaterial2(class IMaterial2 *); /* linkage=_ZN10IMaterial2D4Ev */
	virtual const char  * GetName(const class IMaterial2  *); /* linkage=_ZNK10IMaterial27GetNameEv */
	virtual const char  * GetNameWithMod(const class IMaterial2  *); /* linkage=_ZNK10IMaterial214GetNameWithModEv */
	virtual const class IMaterial2  * GetCopySource(const class IMaterial2  *); /* linkage=_ZNK10IMaterial213GetCopySourceEv */
	virtual uint64 GetSimilarityKey(const class IMaterial2  *); /* linkage=_ZNK10IMaterial216GetSimilarityKeyEv */
	virtual bool IsLoaded(const class IMaterial2  *); /* linkage=_ZNK10IMaterial28IsLoadedEv */
	virtual class IMaterialMode * GetMode(const class IMaterial2  *, const class CUtlStringToken  &); /* linkage=_ZNK10IMaterial27GetModeERK15CUtlStringToken */
	virtual const class CRenderAttributes  & GetAttributes(const class IMaterial2  *); /* linkage=_ZNK10IMaterial213GetAttributesEv */
	virtual bool GetBoolAttribute(const class IMaterial2  *, bool *, class CUtlStringToken); /* linkage=_ZNK10IMaterial216GetBoolAttributeEPb15CUtlStringToken */
	virtual bool GetIntAttribute(const class IMaterial2  *, int *, class CUtlStringToken); /* linkage=_ZNK10IMaterial215GetIntAttributeEPi15CUtlStringToken */
	virtual bool GetFloatAttribute(const class IMaterial2  *, float32 *, class CUtlStringToken); /* linkage=_ZNK10IMaterial217GetFloatAttributeEPf15CUtlStringToken */
	virtual bool GetStringAttribute(const class IMaterial2  *, class CUtlString *, class CUtlStringToken); /* linkage=_ZNK10IMaterial218GetStringAttributeEP10CUtlString15CUtlStringToken */
	virtual bool GetVector2DAttribute(const class IMaterial2  *, class Vector2D *, class CUtlStringToken); /* linkage=_ZNK10IMaterial220GetVector2DAttributeEP8Vector2D15CUtlStringToken */
	virtual bool GetVectorAttribute(const class IMaterial2  *, class Vector *, class CUtlStringToken); /* linkage=_ZNK10IMaterial218GetVectorAttributeEP6Vector15CUtlStringToken */
	virtual bool GetVector4DAttribute(const class IMaterial2  *, class Vector4D *, class CUtlStringToken); /* linkage=_ZNK10IMaterial220GetVector4DAttributeEP8Vector4D15CUtlStringToken */
	virtual bool GetTextureAttribute(const class IMaterial2  *, HRenderTexture *, class CUtlStringToken); /* linkage=_ZNK10IMaterial219GetTextureAttributeEP11CWeakHandleI31InfoForResourceTypeCTextureBaseE15CUtlStringToken */
	virtual HRenderTexture GetFirstTextureAttribute(const class IMaterial2  *); /* linkage=_ZNK10IMaterial224GetFirstTextureAttributeEv */
	virtual HRenderTexture GetFirstTextureParam(const class IMaterial2  *); /* linkage=_ZNK10IMaterial220GetFirstTextureParamEv */
	virtual void GetAllTextureAttributes(const class IMaterial2  *, class CUtlVector<IMaterial2::TextureAttributeValue_t, CUtlMemory<IMaterial2::TextureAttributeValue_t, int> > &); /* linkage=_ZNK10IMaterial223GetAllTextureAttributesER10CUtlVectorINS_23TextureAttributeValue_tE10CUtlMemoryIS1_iEE */
	float32 GetFloatAttributeOrDefault(const class IMaterial2  *, class CUtlStringToken, float32); /* linkage=_ZNK10IMaterial226GetFloatAttributeOrDefaultE15CUtlStringTokenf */
	HRenderTexture GetTextureAttributeOrDefault(const class IMaterial2  *, class CUtlStringToken, HRenderTexture); /* linkage=_ZNK10IMaterial228GetTextureAttributeOrDefaultE15CUtlStringToken11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual const CVsInputSignatureVector  * GetVertexShaderInputSignature(const class IMaterial2  *); /* linkage=_ZNK10IMaterial229GetVertexShaderInputSignatureEv */
	virtual bool IsBatchableInMode(const class IMaterial2  *, const class CUtlStringToken  &, enum EBatchableInModeFlags_t); /* linkage=_ZNK10IMaterial217IsBatchableInModeERK15CUtlStringToken23EBatchableInModeFlags_t */
	virtual void GetRepresentativeTextureSize(const class IMaterial2  *, int *, int *, int, int, bool); /* linkage=_ZNK10IMaterial228GetRepresentativeTextureSizeEPiS0_iib */
	int GetRepresentativeTextureWidth(const class IMaterial2  *, int, bool); /* linkage=_ZNK10IMaterial229GetRepresentativeTextureWidthEib */
	int GetRepresentativeTextureHeight(const class IMaterial2  *, int, bool); /* linkage=_ZNK10IMaterial230GetRepresentativeTextureHeightEib */
	virtual void GetWorldMappingSize(const class IMaterial2  *, int *, int *, int, int, bool); /* linkage=_ZNK10IMaterial219GetWorldMappingSizeEPiS0_iib */
	int GetWorldMappingWidth(const class IMaterial2  *, int, bool); /* linkage=_ZNK10IMaterial220GetWorldMappingWidthEib */
	int GetWorldMappingHeight(const class IMaterial2  *, int, bool); /* linkage=_ZNK10IMaterial221GetWorldMappingHeightEib */
	int ComputePassData(const class IMaterial2  *, const class CUtlStringToken  &, class IRenderContext *, class MaterialRenderablePass_t *, const class CRenderAttributes  *); /* linkage=_ZNK10IMaterial215ComputePassDataERK15CUtlStringTokenP14IRenderContextP24MaterialRenderablePass_tPK17CRenderAttributes */
	virtual uint32 GetShaderStateOverriddenByMaterial(const class IMaterial2  *); /* linkage=_ZNK10IMaterial234GetShaderStateOverriddenByMaterialEv */
	virtual void SetName(class IMaterial2 *, const char  *); /* linkage=_ZN10IMaterial27SetNameEPKc */
	virtual void ClearParams(class IMaterial2 *); /* linkage=_ZN10IMaterial211ClearParamsEv */
	virtual int FindOrAddParam(class IMaterial2 *, const char  *); /* linkage=_ZN10IMaterial214FindOrAddParamEPKc */
	virtual void LoadShadersAndSetupModes(class IMaterial2 *, HMaterial, bool); /* linkage=_ZN10IMaterial224LoadShadersAndSetupModesE11CWeakHandleI29InfoForResourceTypeIMaterial2Eb */
	virtual class CRenderAttributes * GetRenderAttributes(class IMaterial2 *); /* linkage=_ZN10IMaterial219GetRenderAttributesEv */
	virtual void RecreateAllStaticConstantAndCommandBuffers(class IMaterial2 *); /* linkage=_ZN10IMaterial242RecreateAllStaticConstantAndCommandBuffersEv */
	virtual void GenerateMaterialSource(const class IMaterial2  *, class CUtlBuffer *); /* linkage=_ZNK10IMaterial222GenerateMaterialSourceEP10CUtlBuffer */
	virtual bool HasParam(class IMaterial2 *, const char  *); /* linkage=_ZN10IMaterial28HasParamEPKc */
	virtual void Set(class IMaterial2 *, const char  *, class Vector4D); /* linkage=_ZN10IMaterial23SetEPKc8Vector4D */
	virtual void Set(class IMaterial2 *, const char  *, HRenderTexture); /* linkage=_ZN10IMaterial23SetEPKc11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual void Set(class IMaterial2 *, const char  *, const char  *); /* linkage=_ZN10IMaterial23SetEPKcS1_ */
	virtual void Set(class IMaterial2 *, const char  *, float *); /* linkage=_ZN10IMaterial23SetEPKcPf */
	virtual class Vector4D GetVector4(const class IMaterial2  *, const char  *); /* linkage=_ZNK10IMaterial210GetVector4EPKc */
	virtual HRenderTexture GetTexture(const class IMaterial2  *, const char  *); /* linkage=_ZNK10IMaterial210GetTextureEPKc */
	virtual int GetInt(const class IMaterial2  *, const char  *, int); /* linkage=_ZNK10IMaterial26GetIntEPKci */
	virtual float GetFloat(const class IMaterial2  *, const char  *, float); /* linkage=_ZNK10IMaterial28GetFloatEPKcf */
	virtual const char  * GetString(const class IMaterial2  *, const char  *, const char  *); /* linkage=_ZNK10IMaterial29GetStringEPKcS1_ */
	virtual void SetEdited(class IMaterial2 *, bool); /* linkage=_ZN10IMaterial29SetEditedEb */
	virtual bool IsEdited(const class IMaterial2  *); /* linkage=_ZNK10IMaterial28IsEditedEv */
	virtual void ReloadStaticCombos(class IMaterial2 *, HMaterial); /* linkage=_ZN10IMaterial218ReloadStaticCombosE11CWeakHandleI29InfoForResourceTypeIMaterial2E */
};

// <00160530> ../public/materialsystem2/imaterial2.h:166
void TextureAttributeValue_t::TextureAttributeValue_t(TextureAttributeValue_t &)
{
} /* size: 0 */

// <0016050F> ../public/materialsystem2/imaterial2.h:166
inline void TextureAttributeValue_t::TextureAttributeValue_t(TextureAttributeValue_t &)
{
} /* size: 0 */

// <001A14E2> ../public/materialsystem2/imaterial2.h:172
void TextureAttributeValue_t::TextureAttributeValue_t(CUtlStringToken name, int nMipLevel, HRenderTexture hTexture)
{
} /* size: 0 */

// <001A14A5> ../public/materialsystem2/imaterial2.h:172
inline void TextureAttributeValue_t::TextureAttributeValue_t(CUtlStringToken name, int nMipLevel, HRenderTexture hTexture)
{
} /* size: 0 */

// <060E0F24> ../public/materialsystem2/imaterial2.h:182
// variable: 1
inline void IMaterial2::GetBoolAttributeOrDefault(CUtlStringToken name, bool bDefault)
{
	bool bVal; // 184
} /* size: 0, variables: 1 */

// <04D24C52> ../public/materialsystem2/imaterial2.h:187
// variable: 1
inline void IMaterial2::GetIntAttributeOrDefault(CUtlStringToken name, int nDefault)
{
	int nVal; // 189
} /* size: 0, variables: 1 */

// <01351063> ../public/materialsystem2/imaterial2.h:192
// variable: 1
inline void IMaterial2::GetFloatAttributeOrDefault(CUtlStringToken name, float32 flDefault)
{
	float32 flVal; // 194
} /* size: 0, variables: 1 */

// <01351026> ../public/materialsystem2/imaterial2.h:197
// variable: 1
inline void IMaterial2::GetTextureAttributeOrDefault(CUtlStringToken name, HRenderTexture hDefault)
{
	HRenderTexture hVal; // 199
} /* size: 0, variables: 1 */

