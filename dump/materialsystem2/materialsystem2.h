
//
// materialsystem2/materialsystem2.h
//
//	referenced by: libmaterialsystem2.so
//
//	functions: 23
//	class: 1
//

// <00074605> materialsystem2/materialsystem2.h:40
// member functions: 110
// member variables: 19
// vtable entries: 32
// class size: 880
class CMaterialSystem2 : public CTier2AppSystem<IMaterialSystem2, 0> {
	/* materialsystem2/materialsystem2.h:183 */
	struct ModeInfo_t {
		CUtlString m_modeString; /* 0 8 */
		CUtlStringToken m_modeToken; /* 8 4 */
		CUtlString m_modeCategory; /* 16 8 */
		void ModeInfo_t(ModeInfo_t* , const ModeInfo_t& );
		void ~ModeInfo_t(ModeInfo_t* );
		void ModeInfo_t(ModeInfo_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class CTier2AppSystem<IMaterialSystem2, 0> <ancestor>; */ /* 0 48 */
	void CMaterialSystem2(CMaterialSystem2* , const CMaterialSystem2& );
	/* materialsystem2/materialsystem2.cpp:75 */
	void CMaterialSystem2(CMaterialSystem2* );
	/* materialsystem2/materialsystem2.cpp:93 */
	virtual void ~CMaterialSystem2(CMaterialSystem2* );
	/* materialsystem2/materialsystem2.cpp:69 */
	virtual const AppSystemInfo_t* GetDependencies(CMaterialSystem2* );
	/* materialsystem2/materialsystem2.cpp:98 */
	virtual InitReturnVal_t Init(CMaterialSystem2* );
	/* materialsystem2/materialsystem2.cpp:243 */
	virtual void Shutdown(CMaterialSystem2* );
	/* materialsystem2/materialsystem2.cpp:299 */
	virtual bool Connect(CMaterialSystem2* , CreateInterfaceFn);
	/* materialsystem2/materialsystem2.cpp:316 */
	virtual void Disconnect(CMaterialSystem2* );
	/* materialsystem2/materialsystem2.cpp:323 */
	virtual const char* GetModeString(CMaterialSystem2* , const CUtlStringToken& );
	/* materialsystem2/materialsystem2.cpp:366 */
	virtual void EnableExtendedMaterialInfo(CMaterialSystem2* );
	/* materialsystem2/materialsystem2.cpp:372 */
	virtual void EnableHeadlessMode(CMaterialSystem2* );
	/* materialsystem2/materialsystem2.cpp:378 */
	virtual HMaterial FindOrCreateMaterialFromResource(CMaterialSystem2* , const char* );
	/* materialsystem2/materialsystem2.cpp:388 */
	virtual void SetRenderStateForRenderablePass(const CMaterialSystem2* , const CRenderAttributes* , const CRenderAttributes* , IRenderContext* , RenderInputLayout_t, const MaterialRenderablePass_t& , const RsStencilStateOverride_t* , const RsDepthBiasStateOverride_t* , const RsFillModeOverride_t* , int, uint32);
	/* materialsystem2/materialsystem2.cpp:408 */
	virtual void SetRenderStateForRenderablePass(const CMaterialSystem2* , const CRenderAttributes* , IRenderContext* , RenderInputLayout_t, const MaterialRenderablePass_t& , const RsStencilStateOverride_t* , const RsDepthBiasStateOverride_t* , const RsFillModeOverride_t* , int, uint32);
	/* materialsystem2/materialsystem2.cpp:427 */
	virtual bool SetRenderStateForMode(const CMaterialSystem2* , const IMaterialMode* , const CRenderAttributes* , IRenderContext* );
	/* materialsystem2/materialsystem2.cpp:432 */
	virtual bool SetRenderStateForMode(const CMaterialSystem2* , const IMaterialMode* , const CRenderAttributes* , IRenderContext* , RenderInputLayout_t, const RsStencilStateOverride_t* , const RsDepthBiasStateOverride_t* , const RsFillModeOverride_t* , int, uint32);
	/* materialsystem2/materialsystem2.cpp:468 */
	virtual RenderShaderHandle_t GetShaderForRenderablePass(const CMaterialSystem2* , RenderShaderType_t, const MaterialRenderablePass_t& );
	/* materialsystem2/materialsystem2.cpp:480 */
	virtual int GetConstantBufferInfoForRenderablePass(const CMaterialSystem2* , RenderShaderType_t, const MaterialRenderablePass_t& , MaterialPassConstantBufferInfo_t* , int);
	/* materialsystem2/materialsystem2.cpp:494 */
	virtual bool GetConstantBufferDataForRenderablePass(const CMaterialSystem2* , RenderShaderType_t, const MaterialRenderablePass_t& , CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& , const CRenderAttributes* );
	/* materialsystem2/materialsystem2.cpp:509 */
	virtual void GetRenderStatesForRenderablePass(const CMaterialSystem2* , RenderShaderType_t, const MaterialRenderablePass_t& , RsRasterizerStateHandle_t* , RsDepthStencilStateHandle_t* , RsBlendStateHandle_t* );
	/* materialsystem2/materialsystem2.cpp:592 */
	virtual void FrameUpdate(CMaterialSystem2* );
	/* materialsystem2/materialsystem2.cpp:337 */
	virtual void GetModes(const CMaterialSystem2* , CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >& , const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* );
	/* materialsystem2/materialsystem2.cpp:690 */
	virtual bool GetKV3MaterialDescription(const CMaterialSystem2* , HMaterial, KeyValues3** );
	/* materialsystem2/materialsystem2.cpp:743 */
	virtual bool SetMaterialParam_MaterialEditor(CMaterialSystem2* , HMaterial, const char* , const char* );
	/* materialsystem2/materialsystem2.cpp:782 */
	virtual void AddFrameUpdateFunc(CMaterialSystem2* , FrameUpdateFunc_t);
	/* materialsystem2/materialsystem2.cpp:789 */
	virtual void RemoveFrameUpdateFunc(CMaterialSystem2* , FrameUpdateFunc_t);
	/* materialsystem2/materialsystem2.cpp:618 */
	virtual HMaterial CreateProceduralMaterialCopy(CMaterialSystem2* , HMaterial, ProceduralResourceType_t, bool);
	/* materialsystem2/materialsystem2.cpp:648 */
	virtual HMaterial CreateProceduralMaterial(CMaterialSystem2* , const char* , const KeyValues3& , ProceduralResourceType_t, bool);
	/* materialsystem2/materialsystem2.cpp:666 */
	virtual HMaterial CreateProceduralMaterial(CMaterialSystem2* , const char* , HMaterial, const KeyValues3& , ProceduralResourceType_t, bool);
	/* materialsystem2/materialsystem2.cpp:702 */
	virtual int GetShaderQuality(CMaterialSystem2* );
	/* materialsystem2/materialsystem2.cpp:708 */
	virtual void GetGlobalStats(CMaterialSystem2* , MaterialSystem2GlobalStats_t* , bool);
	/* materialsystem2/materialsystem2.cpp:537 */
	void FreeAllUnreferencedData(CMaterialSystem2* );
	/* materialsystem2/materialsystem2.h:140 */
	uint GetFrameCount(const CMaterialSystem2* );
	/* materialsystem2/materialsystem2.h:142 */
	CUtlSymbolTableMT& GetShaderNameDictionary(CMaterialSystem2* );
	/* materialsystem2/materialsystem2.h:144 */
	int GetNumModes(const CMaterialSystem2* );
	/* materialsystem2/materialsystem2.h:145 */
	const char* GetModeString(const CMaterialSystem2* , int);
	/* materialsystem2/materialsystem2.cpp:287 */
	CMaterial2* GetErrorMaterial(CMaterialSystem2* );
	/* materialsystem2/materialsystem2.h:148 */
	bool IsShaderDebuggingEnabled(const CMaterialSystem2* );
	/* materialsystem2/materialsystem2.h:149 */
	bool ShaderStats(const CMaterialSystem2* );
	/* materialsystem2/materialsystem2.h:151 */
	RsRasterizerStateHandle_t GetDefaultRasterizerState(const CMaterialSystem2* );
	/* materialsystem2/materialsystem2.h:152 */
	RsDepthStencilStateHandle_t GetDefaultDepthStencilState(const CMaterialSystem2* );
	/* materialsystem2/materialsystem2.h:153 */
	RsBlendStateHandle_t GetDefaultBlendState(const CMaterialSystem2* );
	/* materialsystem2/materialsystem2.h:154 */
	ConstantBufferHandle_t GetEmptyConstantBuffer(const CMaterialSystem2* );
	/* materialsystem2/materialsystem2.h:155 */
	bool ShouldLoadExtendedMaterialInfo(const CMaterialSystem2* );
	/* materialsystem2/materialsystem2.h:156 */
	bool IsHeadlessModeEnabled(const CMaterialSystem2* );
	/* materialsystem2/materialsystem2.h:157 */
	bool IsInStrictMode(const CMaterialSystem2* );
	/* materialsystem2/materialsystem2.cpp:226 */
	VfxPlatformType_t GetVfxPlatformType(CMaterialSystem2* );
	/* materialsystem2/materialsystem2.h:160 */
	int GetModeIndexForModeToken(CMaterialSystem2* , const CUtlStringToken& );
	/* materialsystem2/materialsystem2.cpp:733 */
	virtual Vector4D GetShaderIDColor(const CMaterialSystem2* , const CUtlStringToken& );
	/* materialsystem2/materialsystem2.cpp:798 */
	IResourceSystemUtils* GetResourceSystemUtils(CMaterialSystem2* );
	CMaterialTypeManager * m_pMaterialTypeManager; /* 48 8 */
	CShaderTypeManager * m_pShaderTypeManager; /* 56 8 */
	CUtlHashtable<CUtlStringToken, CUtlStringToken, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CUtlStringToken>, int> > m_modeFallback; /* 64 32 */
private:
	uint m_nFrameCount; /* 96 4 */
	CUtlSymbolTableMT m_shaderNameDictionary; /* 104 488 */
	CUtlVector<CMaterialSystem2::ModeInfo_t, CUtlMemory<CMaterialSystem2::ModeInfo_t, int> > m_modeInfo; /* 592 32 */
	CUtlAttributeList<int, 16, int, 16> m_modeAttributeList; /* 624 144 */
	RsRasterizerStateHandle_t m_hDefaultRasterizerState; /* 768 8 */
	RsDepthStencilStateHandle_t m_hDefaultDepthStencilState; /* 776 8 */
	RsBlendStateHandle_t m_hDefaultBlendState; /* 784 8 */
	ConstantBufferHandle_t m_hEmptyConstantBuffer; /* 792 8 */
	CUtlVector<void (*)(), CUtlMemory<void (*)(), int> > m_FrameUpdateFuncs; /* 800 32* /
	CUtlVector<CMaterial2*, CUtlMemory<CMaterial2*, int> > m_materialConstantAndCommandBufferRecreationQueue; /* 832 32 */
	bool m_bShaderDebugging:1; /* 864: 0 1 */
	bool m_bLoadExtendedMaterialInfo:1; /* 864: 1 1 */
	bool m_bHeadLessModeEnabled:1; /* 864: 2 1 */
	bool m_bShaderStats:1; /* 864: 3 1 */
	bool m_bStrictMode:1; /* 864: 4 1 */
	/* materialsystem2/materialsystem2.cpp:2333 */
	virtual HMaterial CreateRawMaterial(CMaterialSystem2* , const char* , const char* , bool);
	/* materialsystem2/materialsystem2.cpp:2432 */
	virtual void ReloadShaders(CMaterialSystem2* , const char* );
	/* materialsystem2/materialsystem2.cpp:2371 */
	virtual void OnShaderReload(CMaterialSystem2* , const char* );
	bool :8;
	bool :8;
	bool :8;
	bool :8;
	bool :8;
	bool :8;
	bool :8;
	bool :8;
	bool :8;
	bool :8;
	bool :8;
	bool :8;
	bool :8;
	bool :8;
	bool :8;
	void CMaterialSystem2(class CMaterialSystem2 *, const class CMaterialSystem2  &); /* linkage=_ZN16CMaterialSystem2C4ERKS_ */
	void CMaterialSystem2(class CMaterialSystem2 *); /* linkage=_ZN16CMaterialSystem2C4Ev */
	virtual void ~CMaterialSystem2(class CMaterialSystem2 *); /* linkage=_ZN16CMaterialSystem2D4Ev */
	virtual const class AppSystemInfo_t  * GetDependencies(class CMaterialSystem2 *); /* linkage=_ZN16CMaterialSystem215GetDependenciesEv */
	virtual enum InitReturnVal_t Init(class CMaterialSystem2 *); /* linkage=_ZN16CMaterialSystem24InitEv */
	virtual void Shutdown(class CMaterialSystem2 *); /* linkage=_ZN16CMaterialSystem28ShutdownEv */
	virtual bool Connect(class CMaterialSystem2 *, CreateInterfaceFn); /* linkage=_ZN16CMaterialSystem27ConnectEPFPvPKcPiE */
	virtual void Disconnect(class CMaterialSystem2 *); /* linkage=_ZN16CMaterialSystem210DisconnectEv */
	virtual const char  * GetModeString(class CMaterialSystem2 *, const class CUtlStringToken  &); /* linkage=_ZN16CMaterialSystem213GetModeStringERK15CUtlStringToken */
	/* <c2ba2> materialsystem2/materialsystem2.cpp:366 */
	virtual void EnableExtendedMaterialInfo(class CMaterialSystem2 *); /* linkage=_ZN16CMaterialSystem226EnableExtendedMaterialInfoEv */
	/* <c2bcd> materialsystem2/materialsystem2.cpp:372 */
	virtual void EnableHeadlessMode(class CMaterialSystem2 *); /* linkage=_ZN16CMaterialSystem218EnableHeadlessModeEv */
	virtual HMaterial FindOrCreateMaterialFromResource(class CMaterialSystem2 *, const char  *); /* linkage=_ZN16CMaterialSystem232FindOrCreateMaterialFromResourceEPKc */
	virtual void SetRenderStateForRenderablePass(const class CMaterialSystem2  *, const class CRenderAttributes  *, const class CRenderAttributes  *, class IRenderContext *, RenderInputLayout_t, const class MaterialRenderablePass_t  &, const class RsStencilStateOverride_t  *, const class RsDepthBiasStateOverride_t  *, const class RsFillModeOverride_t  *, int, uint32); /* linkage=_ZNK16CMaterialSystem231SetRenderStateForRenderablePassEPK17CRenderAttributesS2_P14IRenderContextP21RenderInputLayout_t__RK24MaterialRenderablePass_tPK24RsStencilStateOverride_tPK26RsDepthBiasStateOverride_tPK20RsFillModeOverride_tij */
	virtual void SetRenderStateForRenderablePass(const class CMaterialSystem2  *, const class CRenderAttributes  *, class IRenderContext *, RenderInputLayout_t, const class MaterialRenderablePass_t  &, const class RsStencilStateOverride_t  *, const class RsDepthBiasStateOverride_t  *, const class RsFillModeOverride_t  *, int, uint32); /* linkage=_ZNK16CMaterialSystem231SetRenderStateForRenderablePassEPK17CRenderAttributesP14IRenderContextP21RenderInputLayout_t__RK24MaterialRenderablePass_tPK24RsStencilStateOverride_tPK26RsDepthBiasStateOverride_tPK20RsFillModeOverride_tij */
	virtual bool SetRenderStateForMode(const class CMaterialSystem2  *, const class IMaterialMode  *, const class CRenderAttributes  *, class IRenderContext *); /* linkage=_ZNK16CMaterialSystem221SetRenderStateForModeEPK13IMaterialModePK17CRenderAttributesP14IRenderContext */
	/* <c2e62> materialsystem2/materialsystem2.cpp:432 */
	virtual bool SetRenderStateForMode(const class CMaterialSystem2  *, const class IMaterialMode  *, const class CRenderAttributes  *, class IRenderContext *, RenderInputLayout_t, const class RsStencilStateOverride_t  *, const class RsDepthBiasStateOverride_t  *, const class RsFillModeOverride_t  *, int, uint32); /* linkage=_ZNK16CMaterialSystem221SetRenderStateForModeEPK13IMaterialModePK17CRenderAttributesP14IRenderContextP21RenderInputLayout_t__PK24RsStencilStateOverride_tPK26RsDepthBiasStateOverride_tPK20RsFillModeOverride_tij */
	virtual RenderShaderHandle_t GetShaderForRenderablePass(const class CMaterialSystem2  *, enum RenderShaderType_t, const class MaterialRenderablePass_t  &); /* linkage=_ZNK16CMaterialSystem226GetShaderForRenderablePassE18RenderShaderType_tRK24MaterialRenderablePass_t */
	virtual int GetConstantBufferInfoForRenderablePass(const class CMaterialSystem2  *, enum RenderShaderType_t, const class MaterialRenderablePass_t  &, class MaterialPassConstantBufferInfo_t *, int); /* linkage=_ZNK16CMaterialSystem238GetConstantBufferInfoForRenderablePassE18RenderShaderType_tRK24MaterialRenderablePass_tP32MaterialPassConstantBufferInfo_ti */
	virtual bool GetConstantBufferDataForRenderablePass(const class CMaterialSystem2  *, enum RenderShaderType_t, const class MaterialRenderablePass_t  &, class CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > &, const class CRenderAttributes  *); /* linkage=_ZNK16CMaterialSystem238GetConstantBufferDataForRenderablePassE18RenderShaderType_tRK24MaterialRenderablePass_tR10CUtlVectorIh10CUtlMemoryIhiEEPK17CRenderAttributes */
	virtual void GetRenderStatesForRenderablePass(const class CMaterialSystem2  *, enum RenderShaderType_t, const class MaterialRenderablePass_t  &, RsRasterizerStateHandle_t *, RsDepthStencilStateHandle_t *, RsBlendStateHandle_t *); /* linkage=_ZNK16CMaterialSystem232GetRenderStatesForRenderablePassE18RenderShaderType_tRK24MaterialRenderablePass_tPP27RsRasterizerStateHandle_t__PP29RsDepthStencilStateHandle_t__PP22RsBlendStateHandle_t__ */
	virtual void FrameUpdate(class CMaterialSystem2 *); /* linkage=_ZN16CMaterialSystem211FrameUpdateEv */
	virtual void GetModes(const class CMaterialSystem2  *, class CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> > &, const class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >  *); /* linkage=_ZNK16CMaterialSystem28GetModesER10CUtlVectorI15CUtlStringToken10CUtlMemoryIS1_iEEPKS0_I10CUtlStringS2_IS6_iEE */
	virtual bool GetKV3MaterialDescription(const class CMaterialSystem2  *, HMaterial, class KeyValues3 * *); /* linkage=_ZNK16CMaterialSystem225GetKV3MaterialDescriptionE11CWeakHandleI29InfoForResourceTypeIMaterial2EPP10KeyValues3 */
	virtual bool SetMaterialParam_MaterialEditor(class CMaterialSystem2 *, HMaterial, const char  *, const char  *); /* linkage=_ZN16CMaterialSystem231SetMaterialParam_MaterialEditorE11CWeakHandleI29InfoForResourceTypeIMaterial2EPKcS4_ */
	virtual void AddFrameUpdateFunc(class CMaterialSystem2 *, FrameUpdateFunc_t); /* linkage=_ZN16CMaterialSystem218AddFrameUpdateFuncEPFvvE */
	virtual void RemoveFrameUpdateFunc(class CMaterialSystem2 *, FrameUpdateFunc_t); /* linkage=_ZN16CMaterialSystem221RemoveFrameUpdateFuncEPFvvE */
	virtual HMaterial CreateProceduralMaterialCopy(class CMaterialSystem2 *, HMaterial, enum ProceduralResourceType_t, bool); /* linkage=_ZN16CMaterialSystem228CreateProceduralMaterialCopyE11CWeakHandleI29InfoForResourceTypeIMaterial2E24ProceduralResourceType_tb */
	virtual HMaterial CreateProceduralMaterial(class CMaterialSystem2 *, const char  *, const class KeyValues3  &, enum ProceduralResourceType_t, bool); /* linkage=_ZN16CMaterialSystem224CreateProceduralMaterialEPKcRK10KeyValues324ProceduralResourceType_tb */
	virtual HMaterial CreateProceduralMaterial(class CMaterialSystem2 *, const char  *, HMaterial, const class KeyValues3  &, enum ProceduralResourceType_t, bool); /* linkage=_ZN16CMaterialSystem224CreateProceduralMaterialEPKc11CWeakHandleI29InfoForResourceTypeIMaterial2ERK10KeyValues324ProceduralResourceType_tb */
	virtual int GetShaderQuality(class CMaterialSystem2 *); /* linkage=_ZN16CMaterialSystem216GetShaderQualityEv */
	/* <c31a8> materialsystem2/materialsystem2.cpp:708 */
	virtual void GetGlobalStats(class CMaterialSystem2 *, class MaterialSystem2GlobalStats_t *, bool); /* linkage=_ZN16CMaterialSystem214GetGlobalStatsEP28MaterialSystem2GlobalStats_tb */
	void FreeAllUnreferencedData(class CMaterialSystem2 *); /* linkage=_ZN16CMaterialSystem223FreeAllUnreferencedDataEv */
	uint GetFrameCount(const class CMaterialSystem2  *); /* linkage=_ZNK16CMaterialSystem213GetFrameCountEv */
	class CUtlSymbolTableMT & GetShaderNameDictionary(class CMaterialSystem2 *); /* linkage=_ZN16CMaterialSystem223GetShaderNameDictionaryEv */
	int GetNumModes(const class CMaterialSystem2  *); /* linkage=_ZNK16CMaterialSystem211GetNumModesEv */
	const char  * GetModeString(const class CMaterialSystem2  *, int); /* linkage=_ZNK16CMaterialSystem213GetModeStringEi */
	class CMaterial2 * GetErrorMaterial(class CMaterialSystem2 *); /* linkage=_ZN16CMaterialSystem216GetErrorMaterialEv */
	bool IsShaderDebuggingEnabled(const class CMaterialSystem2  *); /* linkage=_ZNK16CMaterialSystem224IsShaderDebuggingEnabledEv */
	bool ShaderStats(const class CMaterialSystem2  *); /* linkage=_ZNK16CMaterialSystem211ShaderStatsEv */
	RsRasterizerStateHandle_t GetDefaultRasterizerState(const class CMaterialSystem2  *); /* linkage=_ZNK16CMaterialSystem225GetDefaultRasterizerStateEv */
	RsDepthStencilStateHandle_t GetDefaultDepthStencilState(const class CMaterialSystem2  *); /* linkage=_ZNK16CMaterialSystem227GetDefaultDepthStencilStateEv */
	RsBlendStateHandle_t GetDefaultBlendState(const class CMaterialSystem2  *); /* linkage=_ZNK16CMaterialSystem220GetDefaultBlendStateEv */
	ConstantBufferHandle_t GetEmptyConstantBuffer(const class CMaterialSystem2  *); /* linkage=_ZNK16CMaterialSystem222GetEmptyConstantBufferEv */
	bool ShouldLoadExtendedMaterialInfo(const class CMaterialSystem2  *); /* linkage=_ZNK16CMaterialSystem230ShouldLoadExtendedMaterialInfoEv */
	bool IsHeadlessModeEnabled(const class CMaterialSystem2  *); /* linkage=_ZNK16CMaterialSystem221IsHeadlessModeEnabledEv */
	bool IsInStrictMode(const class CMaterialSystem2  *); /* linkage=_ZNK16CMaterialSystem214IsInStrictModeEv */
	enum VfxPlatformType_t GetVfxPlatformType(class CMaterialSystem2 *); /* linkage=_ZN16CMaterialSystem218GetVfxPlatformTypeEv */
	int GetModeIndexForModeToken(class CMaterialSystem2 *, const class CUtlStringToken  &); /* linkage=_ZN16CMaterialSystem224GetModeIndexForModeTokenERK15CUtlStringToken */
	virtual class Vector4D GetShaderIDColor(const class CMaterialSystem2  *, const class CUtlStringToken  &); /* linkage=_ZNK16CMaterialSystem216GetShaderIDColorERK15CUtlStringToken */
	class IResourceSystemUtils * GetResourceSystemUtils(class CMaterialSystem2 *); /* linkage=_ZN16CMaterialSystem222GetResourceSystemUtilsEv */
	virtual HMaterial CreateRawMaterial(class CMaterialSystem2 *, const char  *, const char  *, bool); /* linkage=_ZN16CMaterialSystem217CreateRawMaterialEPKcS1_b */
	virtual void ReloadShaders(class CMaterialSystem2 *, const char  *); /* linkage=_ZN16CMaterialSystem213ReloadShadersEPKc */
	virtual void OnShaderReload(class CMaterialSystem2 *, const char  *); /* linkage=_ZN16CMaterialSystem214OnShaderReloadEPKc */
};

// <0019ACDA> materialsystem2/materialsystem2.h:140
inline void CMaterialSystem2::GetFrameCount()
{
} /* size: 0 */

// <0019ACC1> materialsystem2/materialsystem2.h:142
inline void CMaterialSystem2::GetShaderNameDictionary()
{
} /* size: 0 */

// <0019ACA2> materialsystem2/materialsystem2.h:144
inline void CMaterialSystem2::GetNumModes()
{
} /* size: 0 */

// <0019AC7D> materialsystem2/materialsystem2.h:145
inline void CMaterialSystem2::GetModeString(int nMode)
{
} /* size: 0 */

// <0030BEE4> materialsystem2/materialsystem2.h:149
inline void CMaterialSystem2::ShaderStats()
{
} /* size: 0 */

// <0019AC64> materialsystem2/materialsystem2.h:151
inline void CMaterialSystem2::GetDefaultRasterizerState()
{
} /* size: 0 */

// <0019AC4B> materialsystem2/materialsystem2.h:152
inline void CMaterialSystem2::GetDefaultDepthStencilState()
{
} /* size: 0 */

// <0019AC32> materialsystem2/materialsystem2.h:153
inline void CMaterialSystem2::GetDefaultBlendState()
{
} /* size: 0 */

// <0019AC19> materialsystem2/materialsystem2.h:155
inline void CMaterialSystem2::ShouldLoadExtendedMaterialInfo()
{
} /* size: 0 */

// <0019AC00> materialsystem2/materialsystem2.h:156
inline void CMaterialSystem2::IsHeadlessModeEnabled()
{
} /* size: 0 */

// <0030BECB> materialsystem2/materialsystem2.h:157
inline void CMaterialSystem2::IsInStrictMode()
{
} /* size: 0 */

// <0019ABD0> materialsystem2/materialsystem2.h:160
inline void CMaterialSystem2::GetModeIndexForModeToken(const CUtlStringToken& shaderMode)
{
} /* size: 0 */

// <000BE934> materialsystem2/materialsystem2.h:183
void ModeInfo_t::ModeInfo_t()
{
} /* size: 0 */

// <000BE918> materialsystem2/materialsystem2.h:183
inline void ModeInfo_t::ModeInfo_t()
{
} /* size: 0 */

// <000BE901> materialsystem2/materialsystem2.h:183
void ModeInfo_t::~ModeInfo_t()
{
} /* size: 0 */

// <000BE8E5> materialsystem2/materialsystem2.h:183
inline void ModeInfo_t::~ModeInfo_t()
{
} /* size: 0 */

// <00090B00> materialsystem2/materialsystem2.h:183
void ModeInfo_t::ModeInfo_t(const ModeInfo_t &)
{
} /* size: 0 */

// <00090ADF> materialsystem2/materialsystem2.h:183
inline void ModeInfo_t::ModeInfo_t(const ModeInfo_t &)
{
} /* size: 0 */

// <0019ABC1> materialsystem2/materialsystem2.h:232
inline void RecordMaterialCompute(void)
{
} /* size: 0 */

// <000C07BF> materialsystem2/materialsystem2.h:237
inline void RecordMaterialSet(uint32 nNotSetFlags)
{
} /* size: 0 */

// <0019ABB2> materialsystem2/materialsystem2.h:249
inline void RecordVfxEval(void)
{
} /* size: 0 */

// <0027DB12> materialsystem2/materialsystem2.h:254
inline void RecordConstantBufferUpdate(int nBytes)
{
} /* size: 0 */

// <0019ABA2> materialsystem2/materialsystem2.h:260
inline void RecordVfxRule(void)
{
} /* size: 0 */

