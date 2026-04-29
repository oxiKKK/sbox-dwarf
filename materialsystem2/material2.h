
//
// materialsystem2/material2.h
//
//	referenced by: libmaterialsystem2.so
//
//	functions: 49
//	classes: 4
//	structs: 2
//

// <001581EB> materialsystem2/material2.h:50
inline void CMaterialLayer::operator=(const CMaterialLayer &)
{
} /* size: 0 */

// <0007ADAD> materialsystem2/material2.h:50
// member functions: 67
// member variables: 20
// class size: 1,136
class CMaterialLayer {
	/* materialsystem2/material2.h:96 */
	struct CommandBufferInfo_t {
		uint32 m_nHashIdx; /* 0 4 */
		uint32 m_nBufSize; /* 4 4 */
		uint8 * m_pBuf; /* 8 8 */
	};
	/* materialsystem2/material2.h:54 */
	void CMaterialLayer(CMaterialLayer* );
	/* materialsystem2/material2.h:55 */
	void ~CMaterialLayer(CMaterialLayer* );
	/* materialsystem2/material2.h:61 */
	bool FindOrLoadVfx(CMaterialLayer* , const char* );
	/* materialsystem2/material2.h:62 */
	bool ComputeWorkItemsToSetupStaticCombosForMode(CMaterialLayer* , int, CUtlLeanVector<MaterialStaticComboLoadRequest_t, short int>* );
	/* materialsystem2/material2.h:63 */
	int FindParamIndexByName(CMaterialLayer* , const char* );
	/* materialsystem2/material2.h:64 */
	bool UpdateVariableToParamLookupTable(CMaterialLayer* , CVfxPerLayerProgramData* , const CVfxProgramData& );
	/* materialsystem2/material2.h:65 */
	void SetRenderStateForRenderablePassWithCommandBuffers(const CMaterialLayer* , const CRenderAttributes* , const CRenderAttributes* , IRenderContext* , RenderInputLayout_t, const MaterialRenderablePass_t& , const RsStencilStateOverride_t* , const RsDepthBiasStateOverride_t* , const RsFillModeOverride_t* , int, uint32);
	/* materialsystem2/material2.h:75 */
	RenderShaderHandle_t GetShaderForRenderablePass(const CMaterialLayer* , RenderShaderType_t, const MaterialRenderablePass_t& );
	/* materialsystem2/material2.h:77 */
	int GetConstantBufferInfoForRenderablePass(const CMaterialLayer* , RenderShaderType_t, const MaterialRenderablePass_t& , MaterialPassConstantBufferInfo_t* , int);
	/* materialsystem2/material2.h:81 */
	bool GetConstantBufferDataForRenderablePass(const CMaterialLayer* , RenderShaderType_t, const MaterialRenderablePass_t& , CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& , const CRenderAttributes* );
	/* materialsystem2/material2.h:85 */
	void GetRenderStatesForRenderablePass(const CMaterialLayer* , RenderShaderType_t, const MaterialRenderablePass_t& , RsRasterizerStateHandle_t* , RsDepthStencilStateHandle_t* , RsBlendStateHandle_t* );
	/* materialsystem2/material2.h:91 */
	const char* GetMaterialName(const CMaterialLayer* );
	/* materialsystem2/material2.h:92 */
	void RecreateStaticConstantAndCommandBuffers(CMaterialLayer* );
	/* materialsystem2/material2.h:93 */
	void CreateNonStaticConstantBuffers(CMaterialLayer* );
	/* materialsystem2/material2.h:94 */
	void CopyFrom(CMaterialLayer* , const CMaterialLayer& , CMaterial2* , bool);
	/* materialsystem2/material2.h:110 */
	void FillConstantBufferData(const CMaterialLayer* , const CRenderAttributes* , const CRenderAttributes* , float32* , DynamicRenderState_t* , const VfxVariableIndexData_t* , int, int, int, VfxProgram_t, int, IRenderContext* );
	/* materialsystem2/material2.h:122 */
	bool HasCommandBufferData(const CMaterialLayer* , int);
	/* materialsystem2/material2.h:127 */
	int GetCommandBufferIndex(const CMaterialLayer* , int, uint32);
	/* materialsystem2/material2.h:160 */
	const uint8* GetCommandBufferData(const CMaterialLayer* , int, int);
	/* materialsystem2/material2.h:165 */
	void InitEvalContext(const CMaterialLayer* , CVfxExpressionEvalContext& );
	/* materialsystem2/material2.h:166 */
	void InitEvalContextPerProgramData(const CMaterialLayer* , CVfxExpressionEvalContext& , const CVfxPerLayerProgramData* );
	/* materialsystem2/material2.h:168 */
	void RecreateCommandBuffers(CMaterialLayer* , VfxProgram_t);
	/* materialsystem2/material2.h:170 */
	bool GetRayTraceShader(const CMaterialLayer* , RenderShaderHandle_t& , CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& , uint32* , uint32, const CRenderAttributes* , IRenderContext* );
private:
	/* materialsystem2/material2.h:179 */
	bool RecreateConstantBuffer(CMaterialLayer* , VfxProgram_t, uint32, bool);
	/* materialsystem2/material2.h:180 */
	void FillStaticConstantBufferData(const CMaterialLayer* , VfxProgram_t, float32* , const CRenderAttributes* , IRenderContext* , uint32* );
	/* materialsystem2/material2.h:181 */
	void ComputeStaticComboValuesForPerLayerProgramData(CMaterialLayer* , VfxProgram_t, int);
	/* materialsystem2/material2.h:182 */
	void ComputeFeatureComboValues(CMaterialLayer* );
	/* materialsystem2/material2.h:183 */
	CommandBufferInfo_t CreateCommandBuffer(CMaterialLayer* , VfxProgram_t, uint32);
	/* materialsystem2/material2.h:184 */
	void DestroyCommandBuffers(CMaterialLayer* , VfxProgram_t, bool);
	/* materialsystem2/material2.h:185 */
	bool HasStaticConstantBuffer(const CMaterialLayer* , VfxProgram_t);
	/* materialsystem2/material2.h:186 */
	void HookupMaterialLayerPostStaticComboLoad(const MaterialStaticComboLoadRequest_t& );
	/* materialsystem2/material2.h:188 */
	int AllocCommandBufferData(CMaterialLayer* , int, const void* );
	/* materialsystem2/material2.h:189 */
	void ReclaimCommandBufferData(CMaterialLayer* , int, int);
	CUtlSymbol m_shaderNameSymbol; /* 0 2 */
	HShaderStrong m_hVfx; /* 8 8 */
	CVfx * m_pVfx; /* 16 8 */
	bool m_bDeleteShader; /* 24 1 */
	CUtlVector<CMaterialParam, CUtlMemory<CMaterialParam, int> > * m_pParams; /* 32 8 */
	CVfxLayerData m_layerData __attribute__((__aligned__(8))); /* 40 368 */
	uint64 m_nSimilarityKey; /* 408 8 */
	bool m_bUsesFallbackShader; /* 416 1 */
	ConstantBufferHandle_t m_hConstantBuffer[9]; /* 424 72 */
	RenderBufferHandle_t m_hBDABuffer[9]; /* 496 72 */
	uint64_t m_nGlobalsBufferDeviceAddress[9]; /* 568 72 */
	bool m_bStaticConstantBuffer[9][2]; /* 640 18 */
	uint16 m_nDescriptorSetsAndCmdBuffersCreatedBits; /* 658 2 */
	CUtlLeanVector<unsigned char, int> m_commandBufferData; /* 664 16 */
	CUtlLeanVectorFixedGrowable<int, 3, short int> m_commandBufferDataIdx[9] __attribute__((__aligned__(8))); /* 680 144 */
	int m_commandBufferTotalDataBytes[9]; /* 824 36 */
	uint32 m_commandBufferAccumStateSet[9]; /* 860 36 */
	CUtlLeanVectorFixedGrowable<unsigned char, 12, int> m_commandBufferIdx[9] __attribute__((__aligned__(8))); /* 896 216 */
	bool m_bCommandBufferIndexIs16Bit[9]; /* 1112 9 */
	CMaterial2 * m_pMaterial; /* 1128 8 */
	void CMaterialLayer(class CMaterialLayer *); /* linkage=_ZN14CMaterialLayerC4Ev */
	void ~CMaterialLayer(class CMaterialLayer *); /* linkage=_ZN14CMaterialLayerD4Ev */
	bool FindOrLoadVfx(class CMaterialLayer *, const char  *); /* linkage=_ZN14CMaterialLayer13FindOrLoadVfxEPKc */
	bool ComputeWorkItemsToSetupStaticCombosForMode(class CMaterialLayer *, int, class CUtlLeanVector<MaterialStaticComboLoadRequest_t, short int> *); /* linkage=_ZN14CMaterialLayer42ComputeWorkItemsToSetupStaticCombosForModeEiP14CUtlLeanVectorI32MaterialStaticComboLoadRequest_tsE */
	int FindParamIndexByName(class CMaterialLayer *, const char  *); /* linkage=_ZN14CMaterialLayer20FindParamIndexByNameEPKc */
	bool UpdateVariableToParamLookupTable(class CMaterialLayer *, class CVfxPerLayerProgramData *, const class CVfxProgramData  &); /* linkage=_ZN14CMaterialLayer32UpdateVariableToParamLookupTableEP23CVfxPerLayerProgramDataRK15CVfxProgramData */
	void SetRenderStateForRenderablePassWithCommandBuffers(const class CMaterialLayer  *, const class CRenderAttributes  *, const class CRenderAttributes  *, class IRenderContext *, RenderInputLayout_t, const class MaterialRenderablePass_t  &, const class RsStencilStateOverride_t  *, const class RsDepthBiasStateOverride_t  *, const class RsFillModeOverride_t  *, int, uint32); /* linkage=_ZNK14CMaterialLayer49SetRenderStateForRenderablePassWithCommandBuffersEPK17CRenderAttributesS2_P14IRenderContextP21RenderInputLayout_t__RK24MaterialRenderablePass_tPK24RsStencilStateOverride_tPK26RsDepthBiasStateOverride_tPK20RsFillModeOverride_tij */
	RenderShaderHandle_t GetShaderForRenderablePass(const class CMaterialLayer  *, enum RenderShaderType_t, const class MaterialRenderablePass_t  &); /* linkage=_ZNK14CMaterialLayer26GetShaderForRenderablePassE18RenderShaderType_tRK24MaterialRenderablePass_t */
	int GetConstantBufferInfoForRenderablePass(const class CMaterialLayer  *, enum RenderShaderType_t, const class MaterialRenderablePass_t  &, class MaterialPassConstantBufferInfo_t *, int); /* linkage=_ZNK14CMaterialLayer38GetConstantBufferInfoForRenderablePassE18RenderShaderType_tRK24MaterialRenderablePass_tP32MaterialPassConstantBufferInfo_ti */
	bool GetConstantBufferDataForRenderablePass(const class CMaterialLayer  *, enum RenderShaderType_t, const class MaterialRenderablePass_t  &, class CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > &, const class CRenderAttributes  *); /* linkage=_ZNK14CMaterialLayer38GetConstantBufferDataForRenderablePassE18RenderShaderType_tRK24MaterialRenderablePass_tR10CUtlVectorIh10CUtlMemoryIhiEEPK17CRenderAttributes */
	void GetRenderStatesForRenderablePass(const class CMaterialLayer  *, enum RenderShaderType_t, const class MaterialRenderablePass_t  &, RsRasterizerStateHandle_t *, RsDepthStencilStateHandle_t *, RsBlendStateHandle_t *); /* linkage=_ZNK14CMaterialLayer32GetRenderStatesForRenderablePassE18RenderShaderType_tRK24MaterialRenderablePass_tPP27RsRasterizerStateHandle_t__PP29RsDepthStencilStateHandle_t__PP22RsBlendStateHandle_t__ */
	const char  * GetMaterialName(const class CMaterialLayer  *); /* linkage=_ZNK14CMaterialLayer15GetMaterialNameEv */
	/* <1ad8e0> materialsystem2/material2.cpp:2116 */
	void RecreateStaticConstantAndCommandBuffers(class CMaterialLayer *); /* linkage=_ZN14CMaterialLayer39RecreateStaticConstantAndCommandBuffersEv */
	void CreateNonStaticConstantBuffers(class CMaterialLayer *); /* linkage=_ZN14CMaterialLayer30CreateNonStaticConstantBuffersEv */
	void CopyFrom(class CMaterialLayer *, const class CMaterialLayer  &, class CMaterial2 *, bool); /* linkage=_ZN14CMaterialLayer8CopyFromERKS_P10CMaterial2b */
	void FillConstantBufferData(const class CMaterialLayer  *, const class CRenderAttributes  *, const class CRenderAttributes  *, float32 *, class DynamicRenderState_t *, const class VfxVariableIndexData_t  *, int, int, int, enum VfxProgram_t, int, class IRenderContext *); /* linkage=_ZNK14CMaterialLayer22FillConstantBufferDataEPK17CRenderAttributesS2_PfP20DynamicRenderState_tPK22VfxVariableIndexData_tiii12VfxProgram_tiP14IRenderContext */
	bool HasCommandBufferData(const class CMaterialLayer  *, int); /* linkage=_ZNK14CMaterialLayer20HasCommandBufferDataEi */
	int GetCommandBufferIndex(const class CMaterialLayer  *, int, uint32); /* linkage=_ZNK14CMaterialLayer21GetCommandBufferIndexEij */
	const uint8  * GetCommandBufferData(const class CMaterialLayer  *, int, int); /* linkage=_ZNK14CMaterialLayer20GetCommandBufferDataEii */
	void InitEvalContext(const class CMaterialLayer  *, class CVfxExpressionEvalContext &); /* linkage=_ZNK14CMaterialLayer15InitEvalContextER25CVfxExpressionEvalContext */
	void InitEvalContextPerProgramData(const class CMaterialLayer  *, class CVfxExpressionEvalContext &, const class CVfxPerLayerProgramData  *); /* linkage=_ZNK14CMaterialLayer29InitEvalContextPerProgramDataER25CVfxExpressionEvalContextPK23CVfxPerLayerProgramData */
	void RecreateCommandBuffers(class CMaterialLayer *, enum VfxProgram_t); /* linkage=_ZN14CMaterialLayer22RecreateCommandBuffersE12VfxProgram_t */
	bool GetRayTraceShader(const class CMaterialLayer  *, RenderShaderHandle_t &, class CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > &, uint32 *, uint32, const class CRenderAttributes  *, class IRenderContext *); /* linkage=_ZNK14CMaterialLayer17GetRayTraceShaderERP22RenderShaderHandle_t__R10CUtlVectorIh10CUtlMemoryIhiEEPjjPK17CRenderAttributesP14IRenderContext */
	bool RecreateConstantBuffer(class CMaterialLayer *, enum VfxProgram_t, uint32, bool); /* linkage=_ZN14CMaterialLayer22RecreateConstantBufferE12VfxProgram_tjb */
	void FillStaticConstantBufferData(const class CMaterialLayer  *, enum VfxProgram_t, float32 *, const class CRenderAttributes  *, class IRenderContext *, uint32 *); /* linkage=_ZNK14CMaterialLayer28FillStaticConstantBufferDataE12VfxProgram_tPfPK17CRenderAttributesP14IRenderContextPj */
	void ComputeStaticComboValuesForPerLayerProgramData(class CMaterialLayer *, enum VfxProgram_t, int); /* linkage=_ZN14CMaterialLayer46ComputeStaticComboValuesForPerLayerProgramDataE12VfxProgram_ti */
	void ComputeFeatureComboValues(class CMaterialLayer *); /* linkage=_ZN14CMaterialLayer25ComputeFeatureComboValuesEv */
	class CommandBufferInfo_t CreateCommandBuffer(class CMaterialLayer *, enum VfxProgram_t, uint32); /* linkage=_ZN14CMaterialLayer19CreateCommandBufferE12VfxProgram_tj */
	void DestroyCommandBuffers(class CMaterialLayer *, enum VfxProgram_t, bool); /* linkage=_ZN14CMaterialLayer21DestroyCommandBuffersE12VfxProgram_tb */
	/* <1ad072> materialsystem2/material2.cpp:2649 */
	bool HasStaticConstantBuffer(const class CMaterialLayer  *, enum VfxProgram_t); /* linkage=_ZNK14CMaterialLayer23HasStaticConstantBufferE12VfxProgram_t */
	void HookupMaterialLayerPostStaticComboLoad(const class MaterialStaticComboLoadRequest_t  &); /* linkage=_ZN14CMaterialLayer38HookupMaterialLayerPostStaticComboLoadERK32MaterialStaticComboLoadRequest_t */
	int AllocCommandBufferData(class CMaterialLayer *, int, const void  *); /* linkage=_ZN14CMaterialLayer22AllocCommandBufferDataEiPKv */
	void ReclaimCommandBufferData(class CMaterialLayer *, int, int); /* linkage=_ZN14CMaterialLayer24ReclaimCommandBufferDataEii */
	class CMaterialLayer & operator=(class CMaterialLayer *, const class CMaterialLayer  &); /* linkage=_ZN14CMaterialLayeraSERKS_ */
} __attribute__((__aligned__(8)));

// <0012FE13> materialsystem2/material2.h:50
// member functions: 68
// member variables: 20
// class size: 1,136
class CMaterialLayer {
	/* materialsystem2/material2.h:96 */
	struct CommandBufferInfo_t {
		uint32 m_nHashIdx; /* 0 4 */
		uint32 m_nBufSize; /* 4 4 */
		uint8 * m_pBuf; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* materialsystem2/material2.h:103 */
	enum StateToSet_t {
		SET_RENDER_STATE = 1,
		SET_CONSTANTS = 2,
		SET_BOTH = 3,
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* materialsystem2/material2.h:54 */
	void CMaterialLayer(CMaterialLayer* );
	/* materialsystem2/material2.h:55 */
	void ~CMaterialLayer(CMaterialLayer* );
	/* materialsystem2/material2.h:61 */
	bool FindOrLoadVfx(CMaterialLayer* , const char* );
	/* materialsystem2/material2.h:62 */
	bool ComputeWorkItemsToSetupStaticCombosForMode(CMaterialLayer* , int, CUtlLeanVector<MaterialStaticComboLoadRequest_t, short int>* );
	/* materialsystem2/material2.h:63 */
	int FindParamIndexByName(CMaterialLayer* , const char* );
	/* materialsystem2/material2.h:64 */
	bool UpdateVariableToParamLookupTable(CMaterialLayer* , CVfxPerLayerProgramData* , const CVfxProgramData& );
	/* materialsystem2/material2.h:65 */
	void SetRenderStateForRenderablePassWithCommandBuffers(const CMaterialLayer* , const CRenderAttributes* , const CRenderAttributes* , IRenderContext* , RenderInputLayout_t, const MaterialRenderablePass_t& , const RsStencilStateOverride_t* , const RsDepthBiasStateOverride_t* , const RsFillModeOverride_t* , int, uint32);
	/* materialsystem2/material2.h:75 */
	RenderShaderHandle_t GetShaderForRenderablePass(const CMaterialLayer* , RenderShaderType_t, const MaterialRenderablePass_t& );
	/* materialsystem2/material2.h:77 */
	int GetConstantBufferInfoForRenderablePass(const CMaterialLayer* , RenderShaderType_t, const MaterialRenderablePass_t& , MaterialPassConstantBufferInfo_t* , int);
	/* materialsystem2/material2.h:81 */
	bool GetConstantBufferDataForRenderablePass(const CMaterialLayer* , RenderShaderType_t, const MaterialRenderablePass_t& , CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& , const CRenderAttributes* );
	/* materialsystem2/material2.h:85 */
	void GetRenderStatesForRenderablePass(const CMaterialLayer* , RenderShaderType_t, const MaterialRenderablePass_t& , RsRasterizerStateHandle_t* , RsDepthStencilStateHandle_t* , RsBlendStateHandle_t* );
	/* materialsystem2/material2.h:91 */
	const char* GetMaterialName(const CMaterialLayer* );
	/* materialsystem2/material2.h:92 */
	void RecreateStaticConstantAndCommandBuffers(CMaterialLayer* );
	/* materialsystem2/material2.h:93 */
	void CreateNonStaticConstantBuffers(CMaterialLayer* );
	/* materialsystem2/material2.h:94 */
	void CopyFrom(CMaterialLayer* , const CMaterialLayer& , CMaterial2* , bool);
	/* materialsystem2/material2.h:110 */
	void FillConstantBufferData(const CMaterialLayer* , const CRenderAttributes* , const CRenderAttributes* , float32* , DynamicRenderState_t* , const VfxVariableIndexData_t* , int, int, int, VfxProgram_t, int, IRenderContext* );
	/* materialsystem2/material2.h:122 */
	bool HasCommandBufferData(const CMaterialLayer* , int);
	/* materialsystem2/material2.h:127 */
	int GetCommandBufferIndex(const CMaterialLayer* , int, uint32);
	/* materialsystem2/material2.h:160 */
	const uint8* GetCommandBufferData(const CMaterialLayer* , int, int);
	/* materialsystem2/material2.h:165 */
	void InitEvalContext(const CMaterialLayer* , CVfxExpressionEvalContext& );
	/* materialsystem2/material2.h:166 */
	void InitEvalContextPerProgramData(const CMaterialLayer* , CVfxExpressionEvalContext& , const CVfxPerLayerProgramData* );
	/* materialsystem2/material2.h:168 */
	void RecreateCommandBuffers(CMaterialLayer* , VfxProgram_t);
	/* materialsystem2/material2.h:170 */
	bool GetRayTraceShader(const CMaterialLayer* , RenderShaderHandle_t& , CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& , uint32* , uint32, const CRenderAttributes* , IRenderContext* );
private:
	/* materialsystem2/material2.h:179 */
	bool RecreateConstantBuffer(CMaterialLayer* , VfxProgram_t, uint32, bool);
	/* materialsystem2/material2.h:180 */
	void FillStaticConstantBufferData(const CMaterialLayer* , VfxProgram_t, float32* , const CRenderAttributes* , IRenderContext* , uint32* );
	/* materialsystem2/material2.h:181 */
	void ComputeStaticComboValuesForPerLayerProgramData(CMaterialLayer* , VfxProgram_t, int);
	/* materialsystem2/material2.h:182 */
	void ComputeFeatureComboValues(CMaterialLayer* );
	/* materialsystem2/material2.h:183 */
	CommandBufferInfo_t CreateCommandBuffer(CMaterialLayer* , VfxProgram_t, uint32);
	/* materialsystem2/material2.h:184 */
	void DestroyCommandBuffers(CMaterialLayer* , VfxProgram_t, bool);
	/* materialsystem2/material2.h:185 */
	bool HasStaticConstantBuffer(const CMaterialLayer* , VfxProgram_t);
	/* materialsystem2/material2.h:186 */
	void HookupMaterialLayerPostStaticComboLoad(const MaterialStaticComboLoadRequest_t& );
	/* materialsystem2/material2.h:188 */
	int AllocCommandBufferData(CMaterialLayer* , int, const void* );
	/* materialsystem2/material2.h:189 */
	void ReclaimCommandBufferData(CMaterialLayer* , int, int);
	CUtlSymbol m_shaderNameSymbol; /* 0 2 */
	HShaderStrong m_hVfx; /* 8 8 */
	CVfx * m_pVfx; /* 16 8 */
	bool m_bDeleteShader; /* 24 1 */
	CUtlVector<CMaterialParam, CUtlMemory<CMaterialParam, int> > * m_pParams; /* 32 8 */
	CVfxLayerData m_layerData __attribute__((__aligned__(8))); /* 40 368 */
	uint64 m_nSimilarityKey; /* 408 8 */
	bool m_bUsesFallbackShader; /* 416 1 */
	ConstantBufferHandle_t m_hConstantBuffer[9]; /* 424 72 */
	RenderBufferHandle_t m_hBDABuffer[9]; /* 496 72 */
	uint64_t m_nGlobalsBufferDeviceAddress[9]; /* 568 72 */
	bool m_bStaticConstantBuffer[9][2]; /* 640 18 */
	uint16 m_nDescriptorSetsAndCmdBuffersCreatedBits; /* 658 2 */
	CUtlLeanVector<unsigned char, int> m_commandBufferData; /* 664 16 */
	CUtlLeanVectorFixedGrowable<int, 3, short int> m_commandBufferDataIdx[9] __attribute__((__aligned__(8))); /* 680 144 */
	int m_commandBufferTotalDataBytes[9]; /* 824 36 */
	uint32 m_commandBufferAccumStateSet[9]; /* 860 36 */
	CUtlLeanVectorFixedGrowable<unsigned char, 12, int> m_commandBufferIdx[9] __attribute__((__aligned__(8))); /* 896 216 */
	bool m_bCommandBufferIndexIs16Bit[9]; /* 1112 9 */
	CMaterial2 * m_pMaterial; /* 1128 8 */
	CMaterialLayer& operator=(CMaterialLayer* , const CMaterialLayer& );
	void CMaterialLayer(class CMaterialLayer *); /* linkage=_ZN14CMaterialLayerC4Ev */
	void ~CMaterialLayer(class CMaterialLayer *); /* linkage=_ZN14CMaterialLayerD4Ev */
	bool FindOrLoadVfx(class CMaterialLayer *, const char  *); /* linkage=_ZN14CMaterialLayer13FindOrLoadVfxEPKc */
	bool ComputeWorkItemsToSetupStaticCombosForMode(class CMaterialLayer *, int, class CUtlLeanVector<MaterialStaticComboLoadRequest_t, short int> *); /* linkage=_ZN14CMaterialLayer42ComputeWorkItemsToSetupStaticCombosForModeEiP14CUtlLeanVectorI32MaterialStaticComboLoadRequest_tsE */
	int FindParamIndexByName(class CMaterialLayer *, const char  *); /* linkage=_ZN14CMaterialLayer20FindParamIndexByNameEPKc */
	bool UpdateVariableToParamLookupTable(class CMaterialLayer *, class CVfxPerLayerProgramData *, const class CVfxProgramData  &); /* linkage=_ZN14CMaterialLayer32UpdateVariableToParamLookupTableEP23CVfxPerLayerProgramDataRK15CVfxProgramData */
	void SetRenderStateForRenderablePassWithCommandBuffers(const class CMaterialLayer  *, const class CRenderAttributes  *, const class CRenderAttributes  *, class IRenderContext *, RenderInputLayout_t, const class MaterialRenderablePass_t  &, const class RsStencilStateOverride_t  *, const class RsDepthBiasStateOverride_t  *, const class RsFillModeOverride_t  *, int, uint32); /* linkage=_ZNK14CMaterialLayer49SetRenderStateForRenderablePassWithCommandBuffersEPK17CRenderAttributesS2_P14IRenderContextP21RenderInputLayout_t__RK24MaterialRenderablePass_tPK24RsStencilStateOverride_tPK26RsDepthBiasStateOverride_tPK20RsFillModeOverride_tij */
	RenderShaderHandle_t GetShaderForRenderablePass(const class CMaterialLayer  *, enum RenderShaderType_t, const class MaterialRenderablePass_t  &); /* linkage=_ZNK14CMaterialLayer26GetShaderForRenderablePassE18RenderShaderType_tRK24MaterialRenderablePass_t */
	int GetConstantBufferInfoForRenderablePass(const class CMaterialLayer  *, enum RenderShaderType_t, const class MaterialRenderablePass_t  &, class MaterialPassConstantBufferInfo_t *, int); /* linkage=_ZNK14CMaterialLayer38GetConstantBufferInfoForRenderablePassE18RenderShaderType_tRK24MaterialRenderablePass_tP32MaterialPassConstantBufferInfo_ti */
	bool GetConstantBufferDataForRenderablePass(const class CMaterialLayer  *, enum RenderShaderType_t, const class MaterialRenderablePass_t  &, class CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > &, const class CRenderAttributes  *); /* linkage=_ZNK14CMaterialLayer38GetConstantBufferDataForRenderablePassE18RenderShaderType_tRK24MaterialRenderablePass_tR10CUtlVectorIh10CUtlMemoryIhiEEPK17CRenderAttributes */
	void GetRenderStatesForRenderablePass(const class CMaterialLayer  *, enum RenderShaderType_t, const class MaterialRenderablePass_t  &, RsRasterizerStateHandle_t *, RsDepthStencilStateHandle_t *, RsBlendStateHandle_t *); /* linkage=_ZNK14CMaterialLayer32GetRenderStatesForRenderablePassE18RenderShaderType_tRK24MaterialRenderablePass_tPP27RsRasterizerStateHandle_t__PP29RsDepthStencilStateHandle_t__PP22RsBlendStateHandle_t__ */
	const char  * GetMaterialName(const class CMaterialLayer  *); /* linkage=_ZNK14CMaterialLayer15GetMaterialNameEv */
	/* <1ad8e0> materialsystem2/material2.cpp:2116 */
	void RecreateStaticConstantAndCommandBuffers(class CMaterialLayer *); /* linkage=_ZN14CMaterialLayer39RecreateStaticConstantAndCommandBuffersEv */
	void CreateNonStaticConstantBuffers(class CMaterialLayer *); /* linkage=_ZN14CMaterialLayer30CreateNonStaticConstantBuffersEv */
	void CopyFrom(class CMaterialLayer *, const class CMaterialLayer  &, class CMaterial2 *, bool); /* linkage=_ZN14CMaterialLayer8CopyFromERKS_P10CMaterial2b */
	void FillConstantBufferData(const class CMaterialLayer  *, const class CRenderAttributes  *, const class CRenderAttributes  *, float32 *, class DynamicRenderState_t *, const class VfxVariableIndexData_t  *, int, int, int, enum VfxProgram_t, int, class IRenderContext *); /* linkage=_ZNK14CMaterialLayer22FillConstantBufferDataEPK17CRenderAttributesS2_PfP20DynamicRenderState_tPK22VfxVariableIndexData_tiii12VfxProgram_tiP14IRenderContext */
	bool HasCommandBufferData(const class CMaterialLayer  *, int); /* linkage=_ZNK14CMaterialLayer20HasCommandBufferDataEi */
	int GetCommandBufferIndex(const class CMaterialLayer  *, int, uint32); /* linkage=_ZNK14CMaterialLayer21GetCommandBufferIndexEij */
	const uint8  * GetCommandBufferData(const class CMaterialLayer  *, int, int); /* linkage=_ZNK14CMaterialLayer20GetCommandBufferDataEii */
	void InitEvalContext(const class CMaterialLayer  *, class CVfxExpressionEvalContext &); /* linkage=_ZNK14CMaterialLayer15InitEvalContextER25CVfxExpressionEvalContext */
	void InitEvalContextPerProgramData(const class CMaterialLayer  *, class CVfxExpressionEvalContext &, const class CVfxPerLayerProgramData  *); /* linkage=_ZNK14CMaterialLayer29InitEvalContextPerProgramDataER25CVfxExpressionEvalContextPK23CVfxPerLayerProgramData */
	void RecreateCommandBuffers(class CMaterialLayer *, enum VfxProgram_t); /* linkage=_ZN14CMaterialLayer22RecreateCommandBuffersE12VfxProgram_t */
	bool GetRayTraceShader(const class CMaterialLayer  *, RenderShaderHandle_t &, class CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > &, uint32 *, uint32, const class CRenderAttributes  *, class IRenderContext *); /* linkage=_ZNK14CMaterialLayer17GetRayTraceShaderERP22RenderShaderHandle_t__R10CUtlVectorIh10CUtlMemoryIhiEEPjjPK17CRenderAttributesP14IRenderContext */
	bool RecreateConstantBuffer(class CMaterialLayer *, enum VfxProgram_t, uint32, bool); /* linkage=_ZN14CMaterialLayer22RecreateConstantBufferE12VfxProgram_tjb */
	void FillStaticConstantBufferData(const class CMaterialLayer  *, enum VfxProgram_t, float32 *, const class CRenderAttributes  *, class IRenderContext *, uint32 *); /* linkage=_ZNK14CMaterialLayer28FillStaticConstantBufferDataE12VfxProgram_tPfPK17CRenderAttributesP14IRenderContextPj */
	void ComputeStaticComboValuesForPerLayerProgramData(class CMaterialLayer *, enum VfxProgram_t, int); /* linkage=_ZN14CMaterialLayer46ComputeStaticComboValuesForPerLayerProgramDataE12VfxProgram_ti */
	void ComputeFeatureComboValues(class CMaterialLayer *); /* linkage=_ZN14CMaterialLayer25ComputeFeatureComboValuesEv */
	class CommandBufferInfo_t CreateCommandBuffer(class CMaterialLayer *, enum VfxProgram_t, uint32); /* linkage=_ZN14CMaterialLayer19CreateCommandBufferE12VfxProgram_tj */
	void DestroyCommandBuffers(class CMaterialLayer *, enum VfxProgram_t, bool); /* linkage=_ZN14CMaterialLayer21DestroyCommandBuffersE12VfxProgram_tb */
	/* <1ad072> materialsystem2/material2.cpp:2649 */
	bool HasStaticConstantBuffer(const class CMaterialLayer  *, enum VfxProgram_t); /* linkage=_ZNK14CMaterialLayer23HasStaticConstantBufferE12VfxProgram_t */
	void HookupMaterialLayerPostStaticComboLoad(const class MaterialStaticComboLoadRequest_t  &); /* linkage=_ZN14CMaterialLayer38HookupMaterialLayerPostStaticComboLoadERK32MaterialStaticComboLoadRequest_t */
	int AllocCommandBufferData(class CMaterialLayer *, int, const void  *); /* linkage=_ZN14CMaterialLayer22AllocCommandBufferDataEiPKv */
	void ReclaimCommandBufferData(class CMaterialLayer *, int, int); /* linkage=_ZN14CMaterialLayer24ReclaimCommandBufferDataEii */
	class CMaterialLayer & operator=(class CMaterialLayer *, const class CMaterialLayer  &); /* linkage=_ZN14CMaterialLayeraSERKS_ */
} __attribute__((__aligned__(8)));

// <0019D308> materialsystem2/material2.h:122
inline void CMaterialLayer::HasCommandBufferData(int nProgramType)
{
} /* size: 0 */

// <0019D27F> materialsystem2/material2.h:127
// variables: 4
inline void CMaterialLayer::GetCommandBufferIndex(int nProgramType, uint32 nDynamicComboIdx)
{
	int nIdx; // 134
	const char   __FUNCTION__; // 63108
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 139
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 150
	}
} /* size: 0, variables: 2 */

// <0019D24E> materialsystem2/material2.h:160
inline void CMaterialLayer::GetCommandBufferData(int nProgramType, int nBufIdx)
{
} /* size: 0 */

// <001581C4> materialsystem2/material2.h:236
inline void CMaterialMode::operator=(const CMaterialMode &)
{
} /* size: 0 */

// <00138444> materialsystem2/material2.h:236
// member functions: 16
// member variables: 4
// vtable entries: 3
// class size: 1,152
class CMaterialMode : public IMaterialMode {
public:
	/* class IMaterialMode <ancestor>; */ /* 0 8 */
	CMaterialMode& operator=(CMaterialMode* , const CMaterialMode& );
	void CMaterialMode(CMaterialMode* , const CMaterialMode& );
	/* materialsystem2/material2.cpp:1733 */
	void CMaterialMode(CMaterialMode* );
	/* materialsystem2/material2.cpp:1740 */
	virtual void ~CMaterialMode(CMaterialMode* );
	/* materialsystem2/material2.cpp:2182 */
	virtual int ComputeRenderablePassesForContext(const CMaterialMode* , const CRenderAttributes* , const CRenderAttributes* , MaterialRenderablePass_t* );
	/* materialsystem2/material2.cpp:2336 */
	virtual int ComputeRenderablePassesForContext(const CMaterialMode* , const CRenderAttributes* , IRenderContext* , MaterialRenderablePass_t* );
	/* materialsystem2/material2.cpp:2343 */
	virtual bool GetRayTraceShader(const CMaterialMode* , RenderShaderHandle_t& , CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& , uint32* , const CRenderAttributes* , IRenderContext* );
	/* materialsystem2/material2.cpp:1569 */
	void CopyFrom(CMaterialMode* , const CMaterialMode& , CMaterial2* , bool);
	CMaterialLayer m_layer __attribute__((__aligned__(8))); /* 8 1136 */
	int m_nMode; /* 1144 4 */
	bool m_bIsBatchable[2]; /* 1148 2 */
	class CMaterialMode & operator=(class CMaterialMode *, const class CMaterialMode  &); /* linkage=_ZN13CMaterialModeaSERKS_ */
	void CMaterialMode(class CMaterialMode *, const class CMaterialMode  &); /* linkage=_ZN13CMaterialModeC4ERKS_ */
	void CMaterialMode(class CMaterialMode *); /* linkage=_ZN13CMaterialModeC4Ev */
	virtual void ~CMaterialMode(class CMaterialMode *); /* linkage=_ZN13CMaterialModeD4Ev */
	virtual int ComputeRenderablePassesForContext(const class CMaterialMode  *, const class CRenderAttributes  *, const class CRenderAttributes  *, class MaterialRenderablePass_t *); /* linkage=_ZNK13CMaterialMode33ComputeRenderablePassesForContextEPK17CRenderAttributesS2_P24MaterialRenderablePass_t */
	virtual int ComputeRenderablePassesForContext(const class CMaterialMode  *, const class CRenderAttributes  *, class IRenderContext *, class MaterialRenderablePass_t *); /* linkage=_ZNK13CMaterialMode33ComputeRenderablePassesForContextEPK17CRenderAttributesP14IRenderContextP24MaterialRenderablePass_t */
	virtual bool GetRayTraceShader(const class CMaterialMode  *, RenderShaderHandle_t &, class CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > &, uint32 *, const class CRenderAttributes  *, class IRenderContext *); /* linkage=_ZNK13CMaterialMode17GetRayTraceShaderERP22RenderShaderHandle_t__R10CUtlVectorIh10CUtlMemoryIhiEEPjPK17CRenderAttributesP14IRenderContext */
	/* <1ad926> materialsystem2/material2.cpp:1569 */
	void CopyFrom(class CMaterialMode *, const class CMaterialMode  &, class CMaterial2 *, bool); /* linkage=_ZN13CMaterialMode8CopyFromERKS_P10CMaterial2b */
} __attribute__((__aligned__(8)));

// <00134A76> materialsystem2/material2.h:274
// member functions: 163
// member variables: 25
// static member variables: 4
// vtable entries: 43
// class size: 8,240
class CMaterial2 : public IMaterial2 {
	/* materialsystem2/material2.cpp:237 */
	struct StaticComboVcsLoad_t {
		HMaterial m_hMyHandle; /* 0 8 */
		uint16 m_nReloadSerialNumber; /* 8 2 */
		CUtlLeanVector<MaterialStaticComboLoadRequest_t, short int> m_requests; /* 16 16 */
		AsyncRequestStatus_t m_resultStatus; /* 32 4 */
		unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> > m_pResult; /* 40 8 */
		void ~StaticComboVcsLoad_t(StaticComboVcsLoad_t* );
		void StaticComboVcsLoad_t(StaticComboVcsLoad_t* );
	};
	/* materialsystem2/material2.cpp:1180 */
	struct AsyncStaticComboResult_t : public IAsyncProcessedDataResult {
	public:
		/* class IAsyncProcessedDataResult <ancestor>; */ /* 0 8 */
		void AsyncStaticComboResult_t(AsyncStaticComboResult_t* , const AsyncStaticComboResult_t& );
		/* materialsystem2/material2.cpp:1182 */
		void AsyncStaticComboResult_t(AsyncStaticComboResult_t* , shared_ptr<CVfxStaticComboData::DecompressedComboData_t>);
		/* materialsystem2/material2.cpp:1184 */
		virtual void ~AsyncStaticComboResult_t(AsyncStaticComboResult_t* );
		shared_ptr<CVfxStaticComboData::DecompressedComboData_t> m_pComboData; /* 8 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class IMaterial2 <ancestor>; */ /* 0 8 */
	void CMaterial2(CMaterial2* , const CMaterial2& );
	/* materialsystem2/material2.h:276 */
	void* operator new(size_t);
	/* materialsystem2/material2.h:276 */
	void* operator new(size_t, int, const char* , int);
	/* materialsystem2/material2.h:276 */
	void operator delete(void* );
	/* materialsystem2/material2.h:276 */
	void operator delete(void* , int, const char* , int);
	/* materialsystem2/material2.h:276 */
	void PurgeFixedAllocator(bool);
private:
	static CUtlMemoryPoolMT s_Allocator; /* 0 0 */
	/* materialsystem2/material2.cpp:257 */
	void CMaterial2(CMaterial2* );
	/* materialsystem2/material2.cpp:274 */
	virtual void ~CMaterial2(CMaterial2* );
	/* materialsystem2/material2.cpp:283 */
	virtual const char* GetName(const CMaterial2* );
	/* materialsystem2/material2.cpp:291 */
	virtual const char* GetNameWithMod(const CMaterial2* );
	/* materialsystem2/material2.cpp:330 */
	virtual const IMaterial2* GetCopySource(const CMaterial2* );
	/* materialsystem2/material2.cpp:335 */
	virtual uint64 GetSimilarityKey(const CMaterial2* );
	/* materialsystem2/material2.h:290 */
	virtual bool IsLoaded(const CMaterial2* );
	/* materialsystem2/material2.cpp:436 */
	virtual IMaterialMode* GetMode(const CMaterial2* , const CUtlStringToken& );
	/* materialsystem2/material2.cpp:452 */
	virtual const CRenderAttributes& GetAttributes(const CMaterial2* );
	/* materialsystem2/material2.cpp:458 */
	virtual bool GetBoolAttribute(const CMaterial2* , bool* , CUtlStringToken);
	/* materialsystem2/material2.cpp:463 */
	virtual bool GetIntAttribute(const CMaterial2* , int* , CUtlStringToken);
	/* materialsystem2/material2.cpp:468 */
	virtual bool GetFloatAttribute(const CMaterial2* , float32* , CUtlStringToken);
	/* materialsystem2/material2.cpp:473 */
	virtual bool GetStringAttribute(const CMaterial2* , CUtlString* , CUtlStringToken);
	/* materialsystem2/material2.cpp:478 */
	virtual bool GetVector2DAttribute(const CMaterial2* , Vector2D* , CUtlStringToken);
	/* materialsystem2/material2.cpp:483 */
	virtual bool GetVectorAttribute(const CMaterial2* , Vector* , CUtlStringToken);
	/* materialsystem2/material2.cpp:488 */
	virtual bool GetVector4DAttribute(const CMaterial2* , Vector4D* , CUtlStringToken);
	/* materialsystem2/material2.cpp:493 */
	virtual bool GetTextureAttribute(const CMaterial2* , HRenderTexture* , CUtlStringToken);
	/* materialsystem2/material2.cpp:498 */
	virtual HRenderTexture GetFirstTextureAttribute(const CMaterial2* );
	/* materialsystem2/material2.cpp:503 */
	virtual void GetAllTextureAttributes(const CMaterial2* , CUtlVector<IMaterial2::TextureAttributeValue_t, CUtlMemory<IMaterial2::TextureAttributeValue_t, int> >& );
	/* materialsystem2/material2.cpp:512 */
	virtual const CVsInputSignatureVector* GetVertexShaderInputSignature(const CMaterial2* );
	/* materialsystem2/material2.cpp:573 */
	virtual bool IsBatchableInMode(const CMaterial2* , const CUtlStringToken& , EBatchableInModeFlags_t);
	/* materialsystem2/material2.cpp:368 */
	virtual void GetRepresentativeTextureSize(const CMaterial2* , int* , int* , int, int, bool);
	/* materialsystem2/material2.cpp:394 */
	virtual void GetWorldMappingSize(const CMaterial2* , int* , int* , int, int, bool);
	/* materialsystem2/material2.cpp:407 */
	virtual uint32 GetShaderStateOverriddenByMaterial(const CMaterial2* );
	/* materialsystem2/material2.cpp:1438 */
	virtual int GetInt(const CMaterial2* , const char* , int);
	/* materialsystem2/material2.cpp:1461 */
	virtual const char* GetString(const CMaterial2* , const char* , const char* );
	/* materialsystem2/material2.cpp:1449 */
	virtual float GetFloat(const CMaterial2* , const char* , float);
	/* materialsystem2/material2.cpp:1471 */
	virtual HRenderTexture GetFirstTextureParam(const CMaterial2* );
	/* materialsystem2/material2.cpp:413 */
	IMaterialMode* GetMode(const CMaterial2* , int);
	/* materialsystem2/material2.cpp:1137 */
	void ComputeAndLoadStaticCombos(CMaterial2* , HMaterial, ShaderLoadMode_t);
	/* materialsystem2/material2.h:323 */
	void SetToFallbackMaterial(CMaterial2* );
	/* materialsystem2/material2.h:324 */
	bool IsFallbackMaterial(const CMaterial2* );
	/* materialsystem2/material2.cpp:598 */
	void CreateMaterialFromResourceData(CMaterial2* , const MaterialResourceData_t* );
	/* materialsystem2/material2.cpp:737 */
	void CreateMaterialFromKV3(CMaterial2* , const char* , const KeyValues3* , const CMaterial2* );
	/* materialsystem2/material2.cpp:963 */
	void LoadShadersAndSetupModes(CMaterial2* , HMaterial, ShaderLoadMode_t);
	/* materialsystem2/material2.cpp:1424 */
	void UnloadMaterial(CMaterial2* );
	/* materialsystem2/material2.cpp:1399 */
	void FinalizeLoad(CMaterial2* );
	/* materialsystem2/material2.cpp:1414 */
	void CancelLoadingWorkPending(CMaterial2* , ResourceHandle_t);
	/* materialsystem2/material2.cpp:1484 */
	const CMaterialParam* FindParamByName(const CMaterial2* , const char* );
	/* materialsystem2/material2.cpp:1489 */
	CMaterialParam* FindParamByName(CMaterial2* , const char* );
	/* materialsystem2/material2.cpp:1504 */
	virtual void RecreateAllStaticConstantAndCommandBuffers(CMaterial2* );
	/* materialsystem2/material2.cpp:1513 */
	void RecreateCommandBuffers(CMaterial2* );
	/* materialsystem2/material2.cpp:864 */
	void AddShaderAttributesToMaterialAttributes(CMaterial2* , const CUtlVector<CVfxShaderAttribute, CUtlMemory<CVfxShaderAttribute, int> >& , const CMaterialLayer* , const CVfxPerLayerProgramData* , const CVfxProgramData& );
	/* materialsystem2/material2.cpp:1533 */
	void CopyFrom(CMaterial2* , HMaterial, const CMaterial2& , const CResourceName& , bool);
	/* materialsystem2/material2.h:344 */
	bool HasOutstandingIORequests(const CMaterial2* );
	/* materialsystem2/material2.h:346 */
	uint64 GetTotalCost(const CMaterial2* );
	/* materialsystem2/material2.h:354 */
	void SetTotalCost(CMaterial2* , uint64);
	/* materialsystem2/material2.h:360 */
	void AddCost(const CMaterial2* , int);
	/* materialsystem2/material2.h:366 */
	uint32 GetNumComputes(const CMaterial2* );
	/* materialsystem2/material2.h:374 */
	void AddCompute(const CMaterial2* );
	/* materialsystem2/material2.h:380 */
	uint32 GetNumSets(const CMaterial2* );
	/* materialsystem2/material2.h:388 */
	void AddSet(const CMaterial2* );
	/* materialsystem2/material2.cpp:823 */
	bool GetKV3MaterialDescription(const CMaterial2* , KeyValues3** );
	uint16 m_nReloadSerialNumber; /* 8 2 */
	uint8 m_nOutstandingIORequestCount; /* 10 1 */
	bool m_bIsLoaded:1; /* 11: 0 1 */
	bool m_bIsModesLoaded:1; /* 11: 1 1 */
	bool m_bIsFallbackMaterial:1; /* 11: 2 1 */
	bool m_bIsFinalized:1; /* 11: 3 1 */
	bool m_bCreatedNameWithMod:1; /* 11: 4 1 */
	CUtlSymbol m_name; /* 12 2 */
	CUtlSymbol m_nameWithMod; /* 14 2 */
	CUtlVector<CMaterialParam, CUtlMemory<CMaterialParam, int> > m_params; /* 16 32 */
	HMaterial m_hCopySource; /* 48 8 */
	CUtlLeanVector<CMaterial2::StaticComboVcsLoad_t*, short int> m_staticComboLoadRequests; /* 56 16 */
	/* materialsystem2/material2.cpp:1190 */
	unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> > AsyncProcessStaticComboFileData(CMaterial2* , IAsyncResourceDataRequest* , VfxProgram_t);
	/* materialsystem2/material2.cpp:1334 */
	void OnStaticComboFileDataLoaded(CMaterial2* , StaticComboVcsLoad_t* );
	/* materialsystem2/material2.cpp:1199 */
	void IssueAsyncLoadRequests(CMaterial2* , CUtlLeanVector<MaterialStaticComboLoadRequest_t, short int>& , HMaterial, ShaderLoadMode_t);
	CRenderAttributes m_attributes; /* 80 1184 */
	CUtlLeanVectorFixedGrowable<CMaterialMode, 6, short int> m_modeArray __attribute__((__aligned__(8))); /* 1264 6920 */
	uint m_nLastFrameUsed; /* 8184 4 */
	uint32 m_nShaderStateOverrides; /* 8188 4 */
	const uint32 m_nUniqueId; /* 8192 4 */
	int32 m_shaderVersion; /* 8196 4 */
	CInterlockedUInt64 m_nTotalCost __attribute__((__aligned__(8))); /* 8200 8 */
	CInterlockedUInt m_nComputes __attribute__((__aligned__(4))); /* 8208 4 */
	CInterlockedUInt m_nSets __attribute__((__aligned__(4))); /* 8212 4 */
	static const class CUtlStringToken s_legacyEmptyMode; /* 0 0 */
	static const class CUtlStringToken s_defaultMode; /* 0 0 */
	static CInterlockedInt s_nMaterialUniqueId; /* 0 0 */
	/* materialsystem2/material2.h:467 */
	virtual void LoadShadersAndSetupModes(CMaterial2* , HMaterial, bool);
	/* materialsystem2/material2.h:472 */
	virtual void ClearParams(CMaterial2* );
	/* materialsystem2/material2.h:478 */
	virtual int FindOrAddParam(CMaterial2* , const char* );
	/* materialsystem2/material2.h:488 */
	virtual void Set(CMaterial2* , const char* , const char* );
	/* materialsystem2/material2.h:495 */
	virtual void Set(CMaterial2* , const char* , float* );
	/* materialsystem2/material2.h:502 */
	virtual void Set(CMaterial2* , const char* , Vector4D);
	/* materialsystem2/material2.h:509 */
	virtual void Set(CMaterial2* , const char* , HRenderTexture);
	/* materialsystem2/material2.h:516 */
	virtual void SetName(CMaterial2* , const char* );
	/* materialsystem2/material2.h:521 */
	virtual bool HasParam(CMaterial2* , const char* );
	/* materialsystem2/material2.h:528 */
	virtual Vector4D GetVector4(const CMaterial2* , const char* );
	/* materialsystem2/material2.h:535 */
	int FindParamIndex(const CMaterial2* , const char* );
	/* materialsystem2/material2.h:547 */
	virtual CRenderAttributes* GetRenderAttributes(CMaterial2* );
	/* materialsystem2/material2.h:552 */
	virtual HRenderTexture GetTexture(const CMaterial2* , const char* );
	bool m_bHasBeenEdited; /* 8216 1 */
	/* materialsystem2/material2.h:566 */
	virtual void SetEdited(CMaterial2* , bool);
	/* materialsystem2/material2.h:573 */
	virtual bool IsEdited(const CMaterial2* );
	/* materialsystem2/material2.cpp:3440 */
	virtual void ReloadStaticCombos(CMaterial2* , HMaterial);
	/* materialsystem2/material2.cpp:3400 */
	virtual void GenerateMaterialSource(const CMaterial2* , CUtlBuffer* );
	CStrongHandleVoid m_hShaderExtRef; /* 8224 8 */
	HMaterial handle; /* 8232 8 */
	void UnloadMaterial(class CMaterial2 *); /* linkage=_ZN10CMaterial214UnloadMaterialEv */
	/* <1acecb> materialsystem2/material2.cpp:1489 */
	class CMaterialParam * FindParamByName(class CMaterial2 *, const char  *); /* linkage=_ZN10CMaterial215FindParamByNameEPKc */
	bool GetKV3MaterialDescription(const class CMaterial2  *, class KeyValues3 * *); /* linkage=_ZNK10CMaterial225GetKV3MaterialDescriptionEPP10KeyValues3 */
	void LoadShadersAndSetupModes(class CMaterial2 *, HMaterial, enum ShaderLoadMode_t); /* linkage=_ZN10CMaterial224LoadShadersAndSetupModesE11CWeakHandleI29InfoForResourceTypeIMaterial2E16ShaderLoadMode_t */
	void CreateMaterialFromKV3(class CMaterial2 *, const char  *, const class KeyValues3  *, const class CMaterial2  *); /* linkage=_ZN10CMaterial221CreateMaterialFromKV3EPKcPK10KeyValues3PKS_ */
	void CopyFrom(class CMaterial2 *, HMaterial, const class CMaterial2  &, const class CResourceName  &, bool); /* linkage=_ZN10CMaterial28CopyFromE11CWeakHandleI29InfoForResourceTypeIMaterial2ERKS_RK13CResourceNameb */
	void CMaterial2(class CMaterial2 *); /* linkage=_ZN10CMaterial2C4Ev */
	int FindParamIndex(const class CMaterial2  *, const char  *); /* linkage=_ZNK10CMaterial214FindParamIndexEPKc */
	/* <c30fc> materialsystem2/material2.h:516 */
	virtual void SetName(class CMaterial2 *, const char  *); /* linkage=_ZN10CMaterial27SetNameEPKc */
	/* <c5296> materialsystem2/material2.h:488 */
	virtual void Set(class CMaterial2 *, const char  *, const char  *); /* linkage=_ZN10CMaterial23SetEPKcS1_ */
	/* <1ad9d6> materialsystem2/material2.h:478 */
	virtual int FindOrAddParam(class CMaterial2 *, const char  *); /* linkage=_ZN10CMaterial214FindOrAddParamEPKc */
	/* <c4552> materialsystem2/material2.h:472 */
	virtual void ClearParams(class CMaterial2 *); /* linkage=_ZN10CMaterial211ClearParamsEv */
	uint32 GetNumSets(const class CMaterial2  *); /* linkage=_ZNK10CMaterial210GetNumSetsEv */
	uint32 GetNumComputes(const class CMaterial2  *); /* linkage=_ZNK10CMaterial214GetNumComputesEv */
	void SetTotalCost(class CMaterial2 *, uint64); /* linkage=_ZN10CMaterial212SetTotalCostEy */
	uint64 GetTotalCost(const class CMaterial2  *); /* linkage=_ZNK10CMaterial212GetTotalCostEv */
	bool HasOutstandingIORequests(const class CMaterial2  *); /* linkage=_ZNK10CMaterial224HasOutstandingIORequestsEv */
	bool IsFallbackMaterial(const class CMaterial2  *); /* linkage=_ZNK10CMaterial218IsFallbackMaterialEv */
	/* <c2b77> materialsystem2/material2.h:290 */
	virtual bool IsLoaded(const class CMaterial2  *); /* linkage=_ZNK10CMaterial28IsLoadedEv */
	void * operator new(size_t); /* linkage=_ZN10CMaterial2nwEm */
	void CMaterial2(class CMaterial2 *, const class CMaterial2  &); /* linkage=_ZN10CMaterial2C4ERKS_ */
	void * operator new(size_t, int, const char  *, int); /* linkage=_ZN10CMaterial2nwEmiPKci */
	void operator delete(void *); /* linkage=_ZN10CMaterial2dlEPv */
	void operator delete(void *, int, const char  *, int); /* linkage=_ZN10CMaterial2dlEPviPKci */
	void PurgeFixedAllocator(bool); /* linkage=_ZN10CMaterial219PurgeFixedAllocatorEb */
	virtual void ~CMaterial2(class CMaterial2 *); /* linkage=_ZN10CMaterial2D4Ev */
	/* <1a46b9> materialsystem2/material2.cpp:283 */
	virtual const char  * GetName(const class CMaterial2  *); /* linkage=_ZNK10CMaterial27GetNameEv */
	virtual const char  * GetNameWithMod(const class CMaterial2  *); /* linkage=_ZNK10CMaterial214GetNameWithModEv */
	virtual const class IMaterial2  * GetCopySource(const class CMaterial2  *); /* linkage=_ZNK10CMaterial213GetCopySourceEv */
	/* <1a4985> materialsystem2/material2.cpp:335 */
	virtual uint64 GetSimilarityKey(const class CMaterial2  *); /* linkage=_ZNK10CMaterial216GetSimilarityKeyEv */
	/* <1abae3> materialsystem2/material2.cpp:436 */
	virtual class IMaterialMode * GetMode(const class CMaterial2  *, const class CUtlStringToken  &); /* linkage=_ZNK10CMaterial27GetModeERK15CUtlStringToken */
	virtual const class CRenderAttributes  & GetAttributes(const class CMaterial2  *); /* linkage=_ZNK10CMaterial213GetAttributesEv */
	virtual bool GetBoolAttribute(const class CMaterial2  *, bool *, class CUtlStringToken); /* linkage=_ZNK10CMaterial216GetBoolAttributeEPb15CUtlStringToken */
	virtual bool GetIntAttribute(const class CMaterial2  *, int *, class CUtlStringToken); /* linkage=_ZNK10CMaterial215GetIntAttributeEPi15CUtlStringToken */
	virtual bool GetFloatAttribute(const class CMaterial2  *, float32 *, class CUtlStringToken); /* linkage=_ZNK10CMaterial217GetFloatAttributeEPf15CUtlStringToken */
	virtual bool GetStringAttribute(const class CMaterial2  *, class CUtlString *, class CUtlStringToken); /* linkage=_ZNK10CMaterial218GetStringAttributeEP10CUtlString15CUtlStringToken */
	virtual bool GetVector2DAttribute(const class CMaterial2  *, class Vector2D *, class CUtlStringToken); /* linkage=_ZNK10CMaterial220GetVector2DAttributeEP8Vector2D15CUtlStringToken */
	virtual bool GetVectorAttribute(const class CMaterial2  *, class Vector *, class CUtlStringToken); /* linkage=_ZNK10CMaterial218GetVectorAttributeEP6Vector15CUtlStringToken */
	virtual bool GetVector4DAttribute(const class CMaterial2  *, class Vector4D *, class CUtlStringToken); /* linkage=_ZNK10CMaterial220GetVector4DAttributeEP8Vector4D15CUtlStringToken */
	/* <1a4f43> materialsystem2/material2.cpp:493 */
	virtual bool GetTextureAttribute(const class CMaterial2  *, HRenderTexture *, class CUtlStringToken); /* linkage=_ZNK10CMaterial219GetTextureAttributeEP11CWeakHandleI31InfoForResourceTypeCTextureBaseE15CUtlStringToken */
	virtual HRenderTexture GetFirstTextureAttribute(const class CMaterial2  *); /* linkage=_ZNK10CMaterial224GetFirstTextureAttributeEv */
	virtual void GetAllTextureAttributes(const class CMaterial2  *, class CUtlVector<IMaterial2::TextureAttributeValue_t, CUtlMemory<IMaterial2::TextureAttributeValue_t, int> > &); /* linkage=_ZNK10CMaterial223GetAllTextureAttributesER10CUtlVectorIN10IMaterial223TextureAttributeValue_tE10CUtlMemoryIS2_iEE */
	virtual const CVsInputSignatureVector  * GetVertexShaderInputSignature(const class CMaterial2  *); /* linkage=_ZNK10CMaterial229GetVertexShaderInputSignatureEv */
	/* <1a588d> materialsystem2/material2.cpp:573 */
	virtual bool IsBatchableInMode(const class CMaterial2  *, const class CUtlStringToken  &, enum EBatchableInModeFlags_t); /* linkage=_ZNK10CMaterial217IsBatchableInModeERK15CUtlStringToken23EBatchableInModeFlags_t */
	virtual void GetRepresentativeTextureSize(const class CMaterial2  *, int *, int *, int, int, bool); /* linkage=_ZNK10CMaterial228GetRepresentativeTextureSizeEPiS0_iib */
	/* <1aaa6c> materialsystem2/material2.cpp:394 */
	virtual void GetWorldMappingSize(const class CMaterial2  *, int *, int *, int, int, bool); /* linkage=_ZNK10CMaterial219GetWorldMappingSizeEPiS0_iib */
	virtual uint32 GetShaderStateOverriddenByMaterial(const class CMaterial2  *); /* linkage=_ZNK10CMaterial234GetShaderStateOverriddenByMaterialEv */
	virtual int GetInt(const class CMaterial2  *, const char  *, int); /* linkage=_ZNK10CMaterial26GetIntEPKci */
	virtual const char  * GetString(const class CMaterial2  *, const char  *, const char  *); /* linkage=_ZNK10CMaterial29GetStringEPKcS1_ */
	virtual float GetFloat(const class CMaterial2  *, const char  *, float); /* linkage=_ZNK10CMaterial28GetFloatEPKcf */
	virtual HRenderTexture GetFirstTextureParam(const class CMaterial2  *); /* linkage=_ZNK10CMaterial220GetFirstTextureParamEv */
	class IMaterialMode * GetMode(const class CMaterial2  *, int); /* linkage=_ZNK10CMaterial27GetModeEi */
	void ComputeAndLoadStaticCombos(class CMaterial2 *, HMaterial, enum ShaderLoadMode_t); /* linkage=_ZN10CMaterial226ComputeAndLoadStaticCombosE11CWeakHandleI29InfoForResourceTypeIMaterial2E16ShaderLoadMode_t */
	void SetToFallbackMaterial(class CMaterial2 *); /* linkage=_ZN10CMaterial221SetToFallbackMaterialEv */
	void CreateMaterialFromResourceData(class CMaterial2 *, const class MaterialResourceData_t  *); /* linkage=_ZN10CMaterial230CreateMaterialFromResourceDataEPK22MaterialResourceData_t */
	void FinalizeLoad(class CMaterial2 *); /* linkage=_ZN10CMaterial212FinalizeLoadEv */
	/* <1acc20> materialsystem2/material2.cpp:1414 */
	void CancelLoadingWorkPending(class CMaterial2 *, ResourceHandle_t); /* linkage=_ZN10CMaterial224CancelLoadingWorkPendingEPK21ResourceBindingBase_t */
	/* <1accf2> materialsystem2/material2.cpp:1484 */
	const class CMaterialParam  * FindParamByName(const class CMaterial2  *, const char  *); /* linkage=_ZNK10CMaterial215FindParamByNameEPKc */
	virtual void RecreateAllStaticConstantAndCommandBuffers(class CMaterial2 *); /* linkage=_ZN10CMaterial242RecreateAllStaticConstantAndCommandBuffersEv */
	void RecreateCommandBuffers(class CMaterial2 *); /* linkage=_ZN10CMaterial222RecreateCommandBuffersEv */
	void AddShaderAttributesToMaterialAttributes(class CMaterial2 *, const class CUtlVector<CVfxShaderAttribute, CUtlMemory<CVfxShaderAttribute, int> >  &, const class CMaterialLayer  *, const class CVfxPerLayerProgramData  *, const class CVfxProgramData  &); /* linkage=_ZN10CMaterial239AddShaderAttributesToMaterialAttributesERK10CUtlVectorI19CVfxShaderAttribute10CUtlMemoryIS1_iEEPK14CMaterialLayerPK23CVfxPerLayerProgramDataRK15CVfxProgramData */
	void AddCost(const class CMaterial2  *, int); /* linkage=_ZNK10CMaterial27AddCostEi */
	void AddCompute(const class CMaterial2  *); /* linkage=_ZNK10CMaterial210AddComputeEv */
	void AddSet(const class CMaterial2  *); /* linkage=_ZNK10CMaterial26AddSetEv */
	class unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> > AsyncProcessStaticComboFileData(class CMaterial2 *, class IAsyncResourceDataRequest *, enum VfxProgram_t); /* linkage=_ZN10CMaterial231AsyncProcessStaticComboFileDataEP25IAsyncResourceDataRequest12VfxProgram_t */
	void OnStaticComboFileDataLoaded(class CMaterial2 *, class StaticComboVcsLoad_t *); /* linkage=_ZN10CMaterial227OnStaticComboFileDataLoadedEPNS_20StaticComboVcsLoad_tE */
	void IssueAsyncLoadRequests(class CMaterial2 *, class CUtlLeanVector<MaterialStaticComboLoadRequest_t, short int> &, HMaterial, enum ShaderLoadMode_t); /* linkage=_ZN10CMaterial222IssueAsyncLoadRequestsER14CUtlLeanVectorI32MaterialStaticComboLoadRequest_tsE11CWeakHandleI29InfoForResourceTypeIMaterial2E16ShaderLoadMode_t */
	virtual void LoadShadersAndSetupModes(class CMaterial2 *, HMaterial, bool); /* linkage=_ZN10CMaterial224LoadShadersAndSetupModesE11CWeakHandleI29InfoForResourceTypeIMaterial2Eb */
	/* <1ae911> materialsystem2/material2.h:495 */
	virtual void Set(class CMaterial2 *, const char  *, float *); /* linkage=_ZN10CMaterial23SetEPKcPf */
	virtual void Set(class CMaterial2 *, const char  *, class Vector4D); /* linkage=_ZN10CMaterial23SetEPKc8Vector4D */
	/* <1ae079> materialsystem2/material2.h:509 */
	virtual void Set(class CMaterial2 *, const char  *, HRenderTexture); /* linkage=_ZN10CMaterial23SetEPKc11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual bool HasParam(class CMaterial2 *, const char  *); /* linkage=_ZN10CMaterial28HasParamEPKc */
	virtual class Vector4D GetVector4(const class CMaterial2  *, const char  *); /* linkage=_ZNK10CMaterial210GetVector4EPKc */
	virtual class CRenderAttributes * GetRenderAttributes(class CMaterial2 *); /* linkage=_ZN10CMaterial219GetRenderAttributesEv */
	virtual HRenderTexture GetTexture(const class CMaterial2  *, const char  *); /* linkage=_ZNK10CMaterial210GetTextureEPKc */
	virtual void SetEdited(class CMaterial2 *, bool); /* linkage=_ZN10CMaterial29SetEditedEb */
	/* <1a464b> materialsystem2/material2.h:573 */
	virtual bool IsEdited(const class CMaterial2  *); /* linkage=_ZNK10CMaterial28IsEditedEv */
	virtual void ReloadStaticCombos(class CMaterial2 *, HMaterial); /* linkage=_ZN10CMaterial218ReloadStaticCombosE11CWeakHandleI29InfoForResourceTypeIMaterial2E */
	virtual void GenerateMaterialSource(const class CMaterial2  *, class CUtlBuffer *); /* linkage=_ZNK10CMaterial222GenerateMaterialSourceEP10CUtlBuffer */
} __attribute__((__aligned__(16)));

// <003441E9> materialsystem2/material2.h:280
void CMaterial2::CMaterial2()
{
} /* size: 0 */

// <00344104> materialsystem2/material2.h:281
void CMaterial2::~CMaterial2()
{
} /* size: 0 */

// <0019D208> materialsystem2/material2.h:290
void CMaterial2::IsLoaded()
{
} /* size: 12 */

// <000C0664> materialsystem2/material2.h:290
inline void CMaterial2::IsLoaded()
{
} /* size: 0 */

// <0034A97C> materialsystem2/material2.h:323
inline void CMaterial2::SetToFallbackMaterial()
{
} /* size: 0 */

// <000C064B> materialsystem2/material2.h:324
inline void CMaterial2::IsFallbackMaterial()
{
} /* size: 0 */

// <0034A963> materialsystem2/material2.h:344
inline void CMaterial2::HasOutstandingIORequests()
{
} /* size: 0 */

// <000C0619> materialsystem2/material2.h:346
inline void CMaterial2::GetTotalCost()
{
} /* size: 0 */

// <000C05F3> materialsystem2/material2.h:354
inline void CMaterial2::SetTotalCost(uint64 nCost)
{
} /* size: 0 */

// <0019D1E2> materialsystem2/material2.h:360
inline void CMaterial2::AddCost(int nCost)
{
} /* size: 0 */

// <000C05DA> materialsystem2/material2.h:366
inline void CMaterial2::GetNumComputes()
{
} /* size: 0 */

// <0019D1C9> materialsystem2/material2.h:374
inline void CMaterial2::AddCompute()
{
} /* size: 0 */

// <000C05C1> materialsystem2/material2.h:380
inline void CMaterial2::GetNumSets()
{
} /* size: 0 */

// <0019D1B0> materialsystem2/material2.h:388
inline void CMaterial2::AddSet()
{
} /* size: 0 */

// <0019D0E6> materialsystem2/material2.h:467
// function calls: 2
void CMaterial2::LoadShadersAndSetupModes(HMaterial hMyHandle, bool loadShaderNow)
{
	CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
		const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 469
} /* size: 66, inline expansions: 2 (40 bytes) */

// <0019CA0A> materialsystem2/material2.h:472
// variable: 1
// function calls: 37
void CMaterial2::ClearParams()
{
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
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Purge(); // 474
	CUtlMemory<CMaterialParam, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Element(
		int i);  // 1148
	CUtlMemory<CMaterialParam, int>::NumAllocated(); // 1143
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
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::AddToTail(); // 475
} /* size: 326, inline expansions: 30 (749 bytes) */

// <000C05A8> materialsystem2/material2.h:472
inline void CMaterial2::ClearParams()
{
} /* size: 0 */

// <001AD9D6> materialsystem2/material2.h:478
// variables: 2
// function calls: 33
void CMaterial2::FindOrAddParam(const char* name)
{
	int i; // 480
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
} /* size: 251, variables: 1, inline expansions: 28 (554 bytes) */

// <0019C9D9> materialsystem2/material2.h:478
// variable: 1
inline void CMaterial2::FindOrAddParam(const char* name)
{
	int i; // 480
} /* size: 0, variables: 1 */

// <000C4C2A> materialsystem2/material2.h:478
// variables: 2
// function calls: 32
void CMaterial2::FindOrAddParam(const char* name)
{
	int i; // 480
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
} /* size: 251, variables: 1, inline expansions: 27 (431 bytes) */

// <0019C1E9> materialsystem2/material2.h:488
// variables: 2
// function calls: 39
void CMaterial2::Set(const char* name, const char* value)
{
	int i; // 490
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
			const char* name);  // 490
	CUtlMemory<CMaterialParam, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator[](
			int i);  // 491
	CUtlMemory<CMaterialParam, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator[](
			int i);  // 492
	CMaterialParam::SetIsDefaultValue(
				bool bIsDefaultValue);  // 492
} /* size: 337, variables: 1, inline expansions: 34 (874 bytes) */

// <000C5296> materialsystem2/material2.h:488
// variables: 2
// function calls: 38
void CMaterial2::Set(const char* name, const char* value)
{
	int i; // 490
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
			const char* name);  // 490
	CUtlMemory<CMaterialParam, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator[](
			int i);  // 491
	CUtlMemory<CMaterialParam, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator[](
			int i);  // 492
	CMaterialParam::SetIsDefaultValue(
				bool bIsDefaultValue);  // 492
} /* size: 337, variables: 1, inline expansions: 33 (732 bytes) */

// <000C0539> materialsystem2/material2.h:488
// variable: 1
inline void CMaterial2::Set(const char* name, const char* value)
{
	int i; // 490
} /* size: 0, variables: 1 */

// <001AE911> materialsystem2/material2.h:495
// variables: 2
// function calls: 41
void CMaterial2::Set(const char* name, float* value)
{
	int i; // 497
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
} /* size: 341, variables: 1, inline expansions: 36 (873 bytes) */

// <0019C1AB> materialsystem2/material2.h:495
// variable: 1
inline void CMaterial2::Set(const char* name, float* value)
{
	int i; // 497
} /* size: 0, variables: 1 */

// <0019B95F> materialsystem2/material2.h:502
// variables: 2
// function calls: 41
void CMaterial2::Set(const char* name, Vector4D value)
{
	int i; // 504
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
			const char* name);  // 504
	CUtlMemory<CMaterialParam, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator[](
			int i);  // 505
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 126
	CVfxParam::SetVec(
		const float* pVec);  // 505
	CUtlMemory<CMaterialParam, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator[](
			int i);  // 506
	CMaterialParam::SetIsDefaultValue(
				bool bIsDefaultValue);  // 506
} /* size: 341, variables: 1, inline expansions: 36 (873 bytes) */

// <001AE079> materialsystem2/material2.h:509
// variables: 2
// function calls: 43
void CMaterial2::Set(const char* name, HRenderTexture value)
{
	int i; // 511
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
} /* size: 353, variables: 1, inline expansions: 38 (899 bytes) */

// <0019B921> materialsystem2/material2.h:509
// variable: 1
inline void CMaterial2::Set(const char* name, HRenderTexture value)
{
	int i; // 511
} /* size: 0, variables: 1 */

// <0019B869> materialsystem2/material2.h:516
// function call: 1
void CMaterial2::SetName(const char* string)
{
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 518
} /* size: 72, inline expansions: 1 (8 bytes) */

// <000C0513> materialsystem2/material2.h:516
inline void CMaterial2::SetName(const char* string)
{
} /* size: 0 */

// <0019B6C1> materialsystem2/material2.h:521
// variables: 2
// function calls: 6
void CMaterial2::HasParam(const char* name)
{
	int i; // 523
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
			const char* name);  // 523
} /* size: 126, variables: 1, inline expansions: 1 (60 bytes) */

// <0019B386> materialsystem2/material2.h:528
// variables: 2
// function calls: 11
void CMaterial2::GetVector4(const char* name)
{
	int i; // 530
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
			const char* name);  // 530
	CUtlMemory<CMaterialParam, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator[](
			int i);  // 532
	CVfxParam::GetVec(); // 532
	{
		{
		}
	}
	Vector4D::Vector4D(
		const float* pFloat);  // 532
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 531
} /* size: 188, variables: 1, inline expansions: 6 (153 bytes) */

// <0019B353> materialsystem2/material2.h:535
// variable: 1
inline void CMaterial2::FindParamIndex(const char* name)
{
	{
		int i; // 537
	}
} /* size: 0 */

// <0019B323> materialsystem2/material2.h:547
void CMaterial2::GetRenderAttributes()
{
} /* size: 9 */

// <0019AF29> materialsystem2/material2.h:552
// variables: 5
// function calls: 18
void CMaterial2::GetTexture(const char* name)
{
	const CMaterialParam* parameter; // 554
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
			const char* pString);  // 554
	CVfxParam::IsTextureParam(); // 556
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 555
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 137
	CVfxParam::GetTextureHandle(); // 558
} /* size: 134, variables: 1, inline expansions: 11 (165 bytes) */

// <0019AECD> materialsystem2/material2.h:566
void CMaterial2::SetEdited(bool b)
{
} /* size: 33 */

// <001A464B> materialsystem2/material2.h:573
void CMaterial2::IsEdited()
{
} /* size: 12 */

// <0019AEB4> materialsystem2/material2.h:573
inline void CMaterial2::IsEdited()
{
} /* size: 0 */

// <0030C027> materialsystem2/material2.h:590
inline void CMaterialLayer::InitEvalContext(CVfxExpressionEvalContext& ctx)
{
} /* size: 0 */

// <0030BFF1> materialsystem2/material2.h:598
inline void CMaterialLayer::InitEvalContextPerProgramData(CVfxExpressionEvalContext& ctx, const CVfxPerLayerProgramData* pPerLayerProgramData)
{
} /* size: 0 */

// <002E45DF> materialsystem2/material2.h:612
// member functions: 2
// member variables: 2
// struct size: 8
struct SpamKey_t {
	/* materialsystem2/material2.h:614 */
	void SpamKey_t(SpamKey_t* , const char* , const char* );
	CUtlStringToken m_Texture; /* 0 4 */
	CUtlStringToken m_Material; /* 4 4 */
	/* materialsystem2/material2.h:621 */
	bool operator==(const SpamKey_t* , const SpamKey_t& );
};

// <0030BFD0> materialsystem2/material2.h:614
void SpamKey_t::SpamKey_t(const char* pTexture, const char* pMat)
{
} /* size: 0 */

// <0030BF9D> materialsystem2/material2.h:614
inline void SpamKey_t::SpamKey_t(const char* pTexture, const char* pMat)
{
} /* size: 0 */

// <0030BF77> materialsystem2/material2.h:621
inline void SpamKey_t::operator==(const SpamKey_t& other)
{
} /* size: 0 */

// <002E467B> materialsystem2/material2.h:634
// member function: 1
// struct size: 1
struct DefaultHashFunctor<SpamKey_t> {
	/* materialsystem2/material2.h:636 */
	unsigned int operator()(const DefaultHashFunctor<SpamKey_t>* , const SpamKey_t& );
};

// <0030BF53> materialsystem2/material2.h:636
inline void DefaultHashFunctor<SpamKey_t>::operator(const SpamKey_t& s)
{
} /* size: 0 */

