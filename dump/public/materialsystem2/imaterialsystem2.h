
//
// public/materialsystem2/imaterialsystem2.h
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//
//	functions: 3
//	class: 1
//	structs: 2
//

// <02D76892> ../public/materialsystem2/imaterialsystem2.h:24
// member variables: 7
// struct size: 28
struct MaterialSystem2GlobalStats_t {
	uint32 m_nNumMaterialCompute; /* 0 4 */
	uint32 m_nNumMaterialSet; /* 4 4 */
	uint32 m_nNumTextureOnlyMaterialSet; /* 8 4 */
	uint32 m_nNumVfxEval; /* 12 4 */
	uint32 m_nNumVfxRule; /* 16 4 */
	uint32 m_nNumConstantBufferUpdates; /* 20 4 */
	uint32 m_nNumConstantBufferBytes; /* 24 4 */
};

// <0004D4DA> ../public/materialsystem2/imaterialsystem2.h:44
// member function: 1
// member variables: 3
// struct size: 12
struct MaterialPassConstantBufferInfo_t {
	bool m_bIsBound; /* 0 1 */
	CUtlStringToken m_bindingName; /* 4 4 */
	int m_nView; /* 8 4 */
	/* ../public/materialsystem2/imaterialsystem2.h:50 */
	void Clear(MaterialPassConstantBufferInfo_t* );
};

// <0019AD24> ../public/materialsystem2/imaterialsystem2.h:50
inline void MaterialPassConstantBufferInfo_t::Clear()
{
} /* size: 0 */

// <00093555> ../public/materialsystem2/imaterialsystem2.h:61
void IMaterialSystem2::IMaterialSystem2()
{
} /* size: 0 */

// <00093539> ../public/materialsystem2/imaterialsystem2.h:61
inline void IMaterialSystem2::IMaterialSystem2()
{
} /* size: 0 */

// <00016826> ../public/materialsystem2/imaterialsystem2.h:61
// member functions: 62
// member variable: 1
// vtable entries: 27
// class size: 8
class IMaterialSystem2 : public IAppSystem {
public:
	/* class IAppSystem <ancestor>; */ /* 0 8 */
	void IMaterialSystem2(IMaterialSystem2* , IMaterialSystem2& );
	void IMaterialSystem2(IMaterialSystem2* , const IMaterialSystem2& );
	void IMaterialSystem2(IMaterialSystem2* );
	void ~IMaterialSystem2(IMaterialSystem2* );
	/* ../public/materialsystem2/imaterialsystem2.h:65 */
	virtual const char* GetModeString(IMaterialSystem2* , const CUtlStringToken& );
	/* ../public/materialsystem2/imaterialsystem2.h:69 */
	virtual void EnableExtendedMaterialInfo(IMaterialSystem2* );
	/* ../public/materialsystem2/imaterialsystem2.h:70 */
	virtual void EnableHeadlessMode(IMaterialSystem2* );
	/* ../public/materialsystem2/imaterialsystem2.h:73 */
	virtual HMaterial FindOrCreateMaterialFromResource(IMaterialSystem2* , const char* );
	/* ../public/materialsystem2/imaterialsystem2.h:79 */
	virtual void SetRenderStateForRenderablePass(const IMaterialSystem2* , const CRenderAttributes* , const CRenderAttributes* , IRenderContext* , RenderInputLayout_t, const MaterialRenderablePass_t& , const RsStencilStateOverride_t* , const RsDepthBiasStateOverride_t* , const RsFillModeOverride_t* , int, uint32);
	/* ../public/materialsystem2/imaterialsystem2.h:92 */
	virtual void SetRenderStateForRenderablePass(const IMaterialSystem2* , const CRenderAttributes* , IRenderContext* , RenderInputLayout_t, const MaterialRenderablePass_t& , const RsStencilStateOverride_t* , const RsDepthBiasStateOverride_t* , const RsFillModeOverride_t* , int, uint32);
	/* ../public/materialsystem2/imaterialsystem2.h:103 */
	virtual RenderShaderHandle_t GetShaderForRenderablePass(const IMaterialSystem2* , RenderShaderType_t, const MaterialRenderablePass_t& );
	/* ../public/materialsystem2/imaterialsystem2.h:108 */
	virtual int GetConstantBufferInfoForRenderablePass(const IMaterialSystem2* , RenderShaderType_t, const MaterialRenderablePass_t& , MaterialPassConstantBufferInfo_t* , int);
	/* ../public/materialsystem2/imaterialsystem2.h:114 */
	virtual void GetRenderStatesForRenderablePass(const IMaterialSystem2* , RenderShaderType_t, const MaterialRenderablePass_t& , RsRasterizerStateHandle_t* , RsDepthStencilStateHandle_t* , RsBlendStateHandle_t* );
	/* ../public/materialsystem2/imaterialsystem2.h:121 */
	virtual void FrameUpdate(IMaterialSystem2* );
	/* ../public/materialsystem2/imaterialsystem2.h:123 */
	virtual bool SetMaterialParam_MaterialEditor(IMaterialSystem2* , HMaterial, const char* , const char* );
	/* ../public/materialsystem2/imaterialsystem2.h:126 */
	virtual void AddFrameUpdateFunc(IMaterialSystem2* , FrameUpdateFunc_t);
	/* ../public/materialsystem2/imaterialsystem2.h:127 */
	virtual void RemoveFrameUpdateFunc(IMaterialSystem2* , FrameUpdateFunc_t);
	/* ../public/materialsystem2/imaterialsystem2.h:129 */
	virtual HMaterial CreateProceduralMaterialCopy(IMaterialSystem2* , HMaterial, ProceduralResourceType_t, bool);
	/* ../public/materialsystem2/imaterialsystem2.h:130 */
	virtual HMaterial CreateProceduralMaterial(IMaterialSystem2* , const char* , const KeyValues3& , ProceduralResourceType_t, bool);
	/* ../public/materialsystem2/imaterialsystem2.h:131 */
	virtual HMaterial CreateProceduralMaterial(IMaterialSystem2* , const char* , HMaterial, const KeyValues3& , ProceduralResourceType_t, bool);
	/* ../public/materialsystem2/imaterialsystem2.h:134 */
	virtual int GetShaderQuality(IMaterialSystem2* );
	/* ../public/materialsystem2/imaterialsystem2.h:136 */
	virtual void GetGlobalStats(IMaterialSystem2* , MaterialSystem2GlobalStats_t* , bool);
	/* ../public/materialsystem2/imaterialsystem2.h:139 */
	virtual bool GetConstantBufferDataForRenderablePass(const IMaterialSystem2* , RenderShaderType_t, const MaterialRenderablePass_t& , CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& , const CRenderAttributes* );
	/* ../public/materialsystem2/imaterialsystem2.h:145 */
	virtual void GetModes(const IMaterialSystem2* , CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >& , const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* );
	/* ../public/materialsystem2/imaterialsystem2.h:148 */
	virtual bool GetKV3MaterialDescription(const IMaterialSystem2* , HMaterial, KeyValues3** );
	/* ../public/materialsystem2/imaterialsystem2.h:150 */
	virtual bool SetRenderStateForMode(const IMaterialSystem2* , const IMaterialMode* , const CRenderAttributes* , IRenderContext* );
	/* ../public/materialsystem2/imaterialsystem2.h:155 */
	virtual bool SetRenderStateForMode(const IMaterialSystem2* , const IMaterialMode* , const CRenderAttributes* , IRenderContext* , RenderInputLayout_t, const RsStencilStateOverride_t* , const RsDepthBiasStateOverride_t* , const RsFillModeOverride_t* , int, uint32);
	/* ../public/materialsystem2/imaterialsystem2.h:169 */
	virtual HMaterial CreateRawMaterial(IMaterialSystem2* , const char* , const char* , bool);
	/* ../public/materialsystem2/imaterialsystem2.h:170 */
	virtual void ReloadShaders(IMaterialSystem2* , const char* );
	/* ../public/materialsystem2/imaterialsystem2.h:171 */
	virtual void OnShaderReload(IMaterialSystem2* , const char* );
	/* ../public/materialsystem2/imaterialsystem2.h:172 */
	virtual Vector4D GetShaderIDColor(const IMaterialSystem2* , const CUtlStringToken& );
	void IMaterialSystem2(class IMaterialSystem2 *, class IMaterialSystem2 &); /* linkage=_ZN16IMaterialSystem2C4EOS_ */
	void IMaterialSystem2(class IMaterialSystem2 *, const class IMaterialSystem2  &); /* linkage=_ZN16IMaterialSystem2C4ERKS_ */
	void IMaterialSystem2(class IMaterialSystem2 *); /* linkage=_ZN16IMaterialSystem2C4Ev */
	void ~IMaterialSystem2(class IMaterialSystem2 *); /* linkage=_ZN16IMaterialSystem2D4Ev */
	virtual const char  * GetModeString(class IMaterialSystem2 *, const class CUtlStringToken  &); /* linkage=_ZN16IMaterialSystem213GetModeStringERK15CUtlStringToken */
	virtual void EnableExtendedMaterialInfo(class IMaterialSystem2 *); /* linkage=_ZN16IMaterialSystem226EnableExtendedMaterialInfoEv */
	virtual void EnableHeadlessMode(class IMaterialSystem2 *); /* linkage=_ZN16IMaterialSystem218EnableHeadlessModeEv */
	virtual HMaterial FindOrCreateMaterialFromResource(class IMaterialSystem2 *, const char  *); /* linkage=_ZN16IMaterialSystem232FindOrCreateMaterialFromResourceEPKc */
	virtual void SetRenderStateForRenderablePass(const class IMaterialSystem2  *, const class CRenderAttributes  *, const class CRenderAttributes  *, class IRenderContext *, RenderInputLayout_t, const class MaterialRenderablePass_t  &, const class RsStencilStateOverride_t  *, const class RsDepthBiasStateOverride_t  *, const class RsFillModeOverride_t  *, int, uint32); /* linkage=_ZNK16IMaterialSystem231SetRenderStateForRenderablePassEPK17CRenderAttributesS2_P14IRenderContextP21RenderInputLayout_t__RK24MaterialRenderablePass_tPK24RsStencilStateOverride_tPK26RsDepthBiasStateOverride_tPK20RsFillModeOverride_tij */
	virtual void SetRenderStateForRenderablePass(const class IMaterialSystem2  *, const class CRenderAttributes  *, class IRenderContext *, RenderInputLayout_t, const class MaterialRenderablePass_t  &, const class RsStencilStateOverride_t  *, const class RsDepthBiasStateOverride_t  *, const class RsFillModeOverride_t  *, int, uint32); /* linkage=_ZNK16IMaterialSystem231SetRenderStateForRenderablePassEPK17CRenderAttributesP14IRenderContextP21RenderInputLayout_t__RK24MaterialRenderablePass_tPK24RsStencilStateOverride_tPK26RsDepthBiasStateOverride_tPK20RsFillModeOverride_tij */
	virtual RenderShaderHandle_t GetShaderForRenderablePass(const class IMaterialSystem2  *, enum RenderShaderType_t, const class MaterialRenderablePass_t  &); /* linkage=_ZNK16IMaterialSystem226GetShaderForRenderablePassE18RenderShaderType_tRK24MaterialRenderablePass_t */
	virtual int GetConstantBufferInfoForRenderablePass(const class IMaterialSystem2  *, enum RenderShaderType_t, const class MaterialRenderablePass_t  &, class MaterialPassConstantBufferInfo_t *, int); /* linkage=_ZNK16IMaterialSystem238GetConstantBufferInfoForRenderablePassE18RenderShaderType_tRK24MaterialRenderablePass_tP32MaterialPassConstantBufferInfo_ti */
	virtual void GetRenderStatesForRenderablePass(const class IMaterialSystem2  *, enum RenderShaderType_t, const class MaterialRenderablePass_t  &, RsRasterizerStateHandle_t *, RsDepthStencilStateHandle_t *, RsBlendStateHandle_t *); /* linkage=_ZNK16IMaterialSystem232GetRenderStatesForRenderablePassE18RenderShaderType_tRK24MaterialRenderablePass_tPP27RsRasterizerStateHandle_t__PP29RsDepthStencilStateHandle_t__PP22RsBlendStateHandle_t__ */
	virtual void FrameUpdate(class IMaterialSystem2 *); /* linkage=_ZN16IMaterialSystem211FrameUpdateEv */
	virtual bool SetMaterialParam_MaterialEditor(class IMaterialSystem2 *, HMaterial, const char  *, const char  *); /* linkage=_ZN16IMaterialSystem231SetMaterialParam_MaterialEditorE11CWeakHandleI29InfoForResourceTypeIMaterial2EPKcS4_ */
	virtual void AddFrameUpdateFunc(class IMaterialSystem2 *, FrameUpdateFunc_t); /* linkage=_ZN16IMaterialSystem218AddFrameUpdateFuncEPFvvE */
	virtual void RemoveFrameUpdateFunc(class IMaterialSystem2 *, FrameUpdateFunc_t); /* linkage=_ZN16IMaterialSystem221RemoveFrameUpdateFuncEPFvvE */
	virtual HMaterial CreateProceduralMaterialCopy(class IMaterialSystem2 *, HMaterial, enum ProceduralResourceType_t, bool); /* linkage=_ZN16IMaterialSystem228CreateProceduralMaterialCopyE11CWeakHandleI29InfoForResourceTypeIMaterial2E24ProceduralResourceType_tb */
	virtual HMaterial CreateProceduralMaterial(class IMaterialSystem2 *, const char  *, const class KeyValues3  &, enum ProceduralResourceType_t, bool); /* linkage=_ZN16IMaterialSystem224CreateProceduralMaterialEPKcRK10KeyValues324ProceduralResourceType_tb */
	virtual HMaterial CreateProceduralMaterial(class IMaterialSystem2 *, const char  *, HMaterial, const class KeyValues3  &, enum ProceduralResourceType_t, bool); /* linkage=_ZN16IMaterialSystem224CreateProceduralMaterialEPKc11CWeakHandleI29InfoForResourceTypeIMaterial2ERK10KeyValues324ProceduralResourceType_tb */
	virtual int GetShaderQuality(class IMaterialSystem2 *); /* linkage=_ZN16IMaterialSystem216GetShaderQualityEv */
	virtual void GetGlobalStats(class IMaterialSystem2 *, class MaterialSystem2GlobalStats_t *, bool); /* linkage=_ZN16IMaterialSystem214GetGlobalStatsEP28MaterialSystem2GlobalStats_tb */
	virtual bool GetConstantBufferDataForRenderablePass(const class IMaterialSystem2  *, enum RenderShaderType_t, const class MaterialRenderablePass_t  &, class CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > &, const class CRenderAttributes  *); /* linkage=_ZNK16IMaterialSystem238GetConstantBufferDataForRenderablePassE18RenderShaderType_tRK24MaterialRenderablePass_tR10CUtlVectorIh10CUtlMemoryIhiEEPK17CRenderAttributes */
	virtual void GetModes(const class IMaterialSystem2  *, class CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> > &, const class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >  *); /* linkage=_ZNK16IMaterialSystem28GetModesER10CUtlVectorI15CUtlStringToken10CUtlMemoryIS1_iEEPKS0_I10CUtlStringS2_IS6_iEE */
	virtual bool GetKV3MaterialDescription(const class IMaterialSystem2  *, HMaterial, class KeyValues3 * *); /* linkage=_ZNK16IMaterialSystem225GetKV3MaterialDescriptionE11CWeakHandleI29InfoForResourceTypeIMaterial2EPP10KeyValues3 */
	virtual bool SetRenderStateForMode(const class IMaterialSystem2  *, const class IMaterialMode  *, const class CRenderAttributes  *, class IRenderContext *); /* linkage=_ZNK16IMaterialSystem221SetRenderStateForModeEPK13IMaterialModePK17CRenderAttributesP14IRenderContext */
	virtual bool SetRenderStateForMode(const class IMaterialSystem2  *, const class IMaterialMode  *, const class CRenderAttributes  *, class IRenderContext *, RenderInputLayout_t, const class RsStencilStateOverride_t  *, const class RsDepthBiasStateOverride_t  *, const class RsFillModeOverride_t  *, int, uint32); /* linkage=_ZNK16IMaterialSystem221SetRenderStateForModeEPK13IMaterialModePK17CRenderAttributesP14IRenderContextP21RenderInputLayout_t__PK24RsStencilStateOverride_tPK26RsDepthBiasStateOverride_tPK20RsFillModeOverride_tij */
	virtual HMaterial CreateRawMaterial(class IMaterialSystem2 *, const char  *, const char  *, bool); /* linkage=_ZN16IMaterialSystem217CreateRawMaterialEPKcS1_b */
	virtual void ReloadShaders(class IMaterialSystem2 *, const char  *); /* linkage=_ZN16IMaterialSystem213ReloadShadersEPKc */
	virtual void OnShaderReload(class IMaterialSystem2 *, const char  *); /* linkage=_ZN16IMaterialSystem214OnShaderReloadEPKc */
	virtual class Vector4D GetShaderIDColor(const class IMaterialSystem2  *, const class CUtlStringToken  &); /* linkage=_ZNK16IMaterialSystem216GetShaderIDColorERK15CUtlStringToken */
};

