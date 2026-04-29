
//
// materialsystem2/material_command_buffer.h
//
//	referenced by: libmaterialsystem2.so
//
//	functions: 471
//	class: 1
//	structs: 203
//

// <0008AB4E> materialsystem2/material_command_buffer.h:15
void InitMaterialCommandBufferData(void)
{
} /* size: 0 */

// <00150E53> materialsystem2/material_command_buffer.h:17
void ExecuteMaterialCommandBuffers(const uint8* *, int, const CRenderAttributes *, const CRenderAttributes *, IRenderContext *, RenderInputLayout_t, const RsStencilStateOverride_t *, const RsDepthBiasStateOverride_t *, const RsFillModeOverride_t *, int, uint32, const CMaterialLayer *, int *, int, MaterialPassConstantBufferInfo_t *)
{
} /* size: 0 */

// <00150E2B> materialsystem2/material_command_buffer.h:34
void GetRenderStateInMaterialCommandBuffer(const uint8 *, RsRasterizerStateHandle_t *, RsDepthStencilStateHandle_t *, RsBlendStateHandle_t *)
{
} /* size: 0 */

// <00168356> materialsystem2/material_command_buffer.h:153
void CTmpCmdBuffer::~CTmpCmdBuffer()
{
} /* size: 0 */

// <0016833A> materialsystem2/material_command_buffer.h:153
inline void CTmpCmdBuffer::~CTmpCmdBuffer()
{
} /* size: 0 */

// <00146C23> materialsystem2/material_command_buffer.h:153
// member functions: 4
// member variables: 3
// class size: 1,104
class CTmpCmdBuffer : public CUtlBuffer {
public:
	/* class CUtlBuffer <ancestor>; */ /* 0 80 */
	/* materialsystem2/material_command_buffer.h:156 */
	void CTmpCmdBuffer(CTmpCmdBuffer* );
	int m_nCmdCount; /* 76 4 */
private:
	uint8 m_BufferFixedMemory[1024]; /* 80 1024 */
	void ~CTmpCmdBuffer(CTmpCmdBuffer* );
	void CTmpCmdBuffer(class CTmpCmdBuffer *); /* linkage=_ZN13CTmpCmdBufferC4Ev */
	void ~CTmpCmdBuffer(class CTmpCmdBuffer *); /* linkage=_ZN13CTmpCmdBufferD4Ev */
};

// <0019A0D2> materialsystem2/material_command_buffer.h:156
void CTmpCmdBuffer::CTmpCmdBuffer()
{
} /* size: 0 */

// <0019A0B9> materialsystem2/material_command_buffer.h:156
inline void CTmpCmdBuffer::CTmpCmdBuffer()
{
} /* size: 0 */

// <00146CCB> materialsystem2/material_command_buffer.h:170
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpBase_t {
	/* materialsystem2/material_command_buffer.h:172 */
	void MatOpBase_t(MatOpBase_t* , uint32, size_t);
	uint8 m_nOpCode; /* 0 1 */
};

// <0030BE90> materialsystem2/material_command_buffer.h:172
void MatOpBase_t::MatOpBase_t(uint32 nOpCode, size_t nOpSize)
{
} /* size: 0 */

// <0030BE5F> materialsystem2/material_command_buffer.h:172
inline void MatOpBase_t::MatOpBase_t(uint32 nOpCode, size_t nOpSize)
{
} /* size: 0 */

// <002F0F5F> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpLoadTexFromDynParam_t>(CUtlBuffer* pBuf, const MatOpLoadTexFromDynParam_t& obj)
{
} /* size: 0 */

// <002F0EF7> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpLoadTexFromParam_t>(CUtlBuffer* pBuf, const MatOpLoadTexFromParam_t& obj)
{
} /* size: 0 */

// <002F0B2D> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpLoadTexFromAttr_t>(CUtlBuffer* pBuf, const MatOpLoadTexFromAttr_t& obj)
{
} /* size: 0 */

// <002F0AC5> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpLoadBufferFromAttr_t>(CUtlBuffer* pBuf, const MatOpLoadBufferFromAttr_t& obj)
{
} /* size: 0 */

// <002F0A5D> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpLoadTexFromVfxExpr_t>(CUtlBuffer* pBuf, const MatOpLoadTexFromVfxExpr_t& obj)
{
} /* size: 0 */

// <002F09D1> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpBindTexture_t>(CUtlBuffer* pBuf, const MatOpBindTexture_t& obj)
{
} /* size: 0 */

// <002F0969> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpBindTextureBuffer_t>(CUtlBuffer* pBuf, const MatOpBindTextureBuffer_t& obj)
{
} /* size: 0 */

// <002F0901> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpBindUAVTex_t>(CUtlBuffer* pBuf, const MatOpBindUAVTex_t& obj)
{
} /* size: 0 */

// <002F0899> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpBindUAVBuffer_t>(CUtlBuffer* pBuf, const MatOpBindUAVBuffer_t& obj)
{
} /* size: 0 */

// <002F0831> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpLoadVec4FromVfxExpr_t>(CUtlBuffer* pBuf, const MatOpLoadVec4FromVfxExpr_t& obj)
{
} /* size: 0 */

// <002F07C9> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpClampFloat_t>(CUtlBuffer* pBuf, const MatOpClampFloat_t& obj)
{
} /* size: 0 */

// <002F0761> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpClampShort_t>(CUtlBuffer* pBuf, const MatOpClampShort_t& obj)
{
} /* size: 0 */

// <002F06F9> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpClampInt_t>(CUtlBuffer* pBuf, const MatOpClampInt_t& obj)
{
} /* size: 0 */

// <002F0691> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpClampVec4_t>(CUtlBuffer* pBuf, const MatOpClampVec4_t& obj)
{
} /* size: 0 */

// <002F0629> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpLoadIntLiteral_t>(CUtlBuffer* pBuf, const MatOpLoadIntLiteral_t& obj)
{
} /* size: 0 */

// <002F05C1> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpStoreRsStencilRef_t>(CUtlBuffer* pBuf, const MatOpStoreRsStencilRef_t& obj)
{
} /* size: 0 */

// <002F0559> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpLoadVec4Literal_t>(CUtlBuffer* pBuf, const MatOpLoadVec4Literal_t& obj)
{
} /* size: 0 */

// <002F04F1> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpStoreRsSampleMask_t>(CUtlBuffer* pBuf, const MatOpStoreRsSampleMask_t& obj)
{
} /* size: 0 */

// <002F0489> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpStoreRsAlphaTestEnable_t>(CUtlBuffer* pBuf, const MatOpStoreRsAlphaTestEnable_t& obj)
{
} /* size: 0 */

// <002F0421> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpLoadFloatLiteral_t>(CUtlBuffer* pBuf, const MatOpLoadFloatLiteral_t& obj)
{
} /* size: 0 */

// <002F03B9> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpStoreRsAlphaTestRef_t>(CUtlBuffer* pBuf, const MatOpStoreRsAlphaTestRef_t& obj)
{
} /* size: 0 */

// <002F0351> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpStoreRsAlphaTestFunc_t>(CUtlBuffer* pBuf, const MatOpStoreRsAlphaTestFunc_t& obj)
{
} /* size: 0 */

// <002F02E9> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpStoreRsFillMode_t>(CUtlBuffer* pBuf, const MatOpStoreRsFillMode_t& obj)
{
} /* size: 0 */

// <002F0281> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpStoreRsCullMode_t>(CUtlBuffer* pBuf, const MatOpStoreRsCullMode_t& obj)
{
} /* size: 0 */

// <002F0219> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpStoreRsDepthBias_t>(CUtlBuffer* pBuf, const MatOpStoreRsDepthBias_t& obj)
{
} /* size: 0 */

// <002F01B1> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpStoreRsSSDepthBias_t>(CUtlBuffer* pBuf, const MatOpStoreRsSSDepthBias_t& obj)
{
} /* size: 0 */

// <002F0149> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpStoreRsDepthBiasClamp_t>(CUtlBuffer* pBuf, const MatOpStoreRsDepthBiasClamp_t& obj)
{
} /* size: 0 */

// <002F00E1> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpStoreRsDepthClipEnable_t>(CUtlBuffer* pBuf, const MatOpStoreRsDepthClipEnable_t& obj)
{
} /* size: 0 */

// <002F0079> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpStoreRsMultiSampleEnable_t>(CUtlBuffer* pBuf, const MatOpStoreRsMultiSampleEnable_t& obj)
{
} /* size: 0 */

// <002F0011> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpStoreRsSrgbWriteEnable_t>(CUtlBuffer* pBuf, const MatOpStoreRsSrgbWriteEnable_t& obj)
{
} /* size: 0 */

// <002EFFA9> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpStoreRsDepthEnable_t>(CUtlBuffer* pBuf, const MatOpStoreRsDepthEnable_t& obj)
{
} /* size: 0 */

// <002EFF41> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpStoreRsDepthWriteEnable_t>(CUtlBuffer* pBuf, const MatOpStoreRsDepthWriteEnable_t& obj)
{
} /* size: 0 */

// <002EFED9> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpStoreRsDepthFunc_t>(CUtlBuffer* pBuf, const MatOpStoreRsDepthFunc_t& obj)
{
} /* size: 0 */

// <002EFE71> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpStoreRsStencilEnable_t>(CUtlBuffer* pBuf, const MatOpStoreRsStencilEnable_t& obj)
{
} /* size: 0 */

// <002EFE09> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpStoreRsStencilReadMask_t>(CUtlBuffer* pBuf, const MatOpStoreRsStencilReadMask_t& obj)
{
} /* size: 0 */

// <002EFDA1> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpStoreRsStencilWriteMask_t>(CUtlBuffer* pBuf, const MatOpStoreRsStencilWriteMask_t& obj)
{
} /* size: 0 */

// <002EFD39> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpStoreRsStencilFailOp_t>(CUtlBuffer* pBuf, const MatOpStoreRsStencilFailOp_t& obj)
{
} /* size: 0 */

// <002EFCD1> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpStoreRsStencilDepthFailOp_t>(CUtlBuffer* pBuf, const MatOpStoreRsStencilDepthFailOp_t& obj)
{
} /* size: 0 */

// <002EFC69> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpStoreRsStencilPassOp_t>(CUtlBuffer* pBuf, const MatOpStoreRsStencilPassOp_t& obj)
{
} /* size: 0 */

// <002EFC01> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpStoreRsStencilFunc_t>(CUtlBuffer* pBuf, const MatOpStoreRsStencilFunc_t& obj)
{
} /* size: 0 */

// <002EFB99> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpStoreRsBackStencilFailOp_t>(CUtlBuffer* pBuf, const MatOpStoreRsBackStencilFailOp_t& obj)
{
} /* size: 0 */

// <002EFB31> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpStoreRsBackStencilDepthFailOp_t>(CUtlBuffer* pBuf, const MatOpStoreRsBackStencilDepthFailOp_t& obj)
{
} /* size: 0 */

// <002EFAC9> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpStoreRsBackStencilPassOp_t>(CUtlBuffer* pBuf, const MatOpStoreRsBackStencilPassOp_t& obj)
{
} /* size: 0 */

// <002EFA61> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpStoreRsBackStencilFunc_t>(CUtlBuffer* pBuf, const MatOpStoreRsBackStencilFunc_t& obj)
{
} /* size: 0 */

// <002EF9F9> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpStoreRsAlphaToCoverageEnable_t>(CUtlBuffer* pBuf, const MatOpStoreRsAlphaToCoverageEnable_t& obj)
{
} /* size: 0 */

// <002EF991> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpStoreRsBlendEnable_t>(CUtlBuffer* pBuf, const MatOpStoreRsBlendEnable_t& obj)
{
} /* size: 0 */

// <002EF929> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpStoreRsSrcBlend_t>(CUtlBuffer* pBuf, const MatOpStoreRsSrcBlend_t& obj)
{
} /* size: 0 */

// <002EF8C1> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpStoreRsDestBlend_t>(CUtlBuffer* pBuf, const MatOpStoreRsDestBlend_t& obj)
{
} /* size: 0 */

// <002EF859> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpStoreRsBlendOp_t>(CUtlBuffer* pBuf, const MatOpStoreRsBlendOp_t& obj)
{
} /* size: 0 */

// <002EF7F1> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpStoreRsSrcBlendAlpha_t>(CUtlBuffer* pBuf, const MatOpStoreRsSrcBlendAlpha_t& obj)
{
} /* size: 0 */

// <002EF789> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpStoreRsDestBlendAlpha_t>(CUtlBuffer* pBuf, const MatOpStoreRsDestBlendAlpha_t& obj)
{
} /* size: 0 */

// <002EF721> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpStoreRsBlendOpAlpha_t>(CUtlBuffer* pBuf, const MatOpStoreRsBlendOpAlpha_t& obj)
{
} /* size: 0 */

// <002EF6B9> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpStoreRsColorWriteEnable_t>(CUtlBuffer* pBuf, const MatOpStoreRsColorWriteEnable_t& obj)
{
} /* size: 0 */

// <002EF651> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpStoreRsBlendFactor_t>(CUtlBuffer* pBuf, const MatOpStoreRsBlendFactor_t& obj)
{
} /* size: 0 */

// <002EF5E9> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpStoreRsIndependentBlendEnable_t>(CUtlBuffer* pBuf, const MatOpStoreRsIndependentBlendEnable_t& obj)
{
} /* size: 0 */

// <002EF581> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpLoadSamplerFromAttr_t>(CUtlBuffer* pBuf, const MatOpLoadSamplerFromAttr_t& obj)
{
} /* size: 0 */

// <002EF519> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpStoreSsFilter_t>(CUtlBuffer* pBuf, const MatOpStoreSsFilter_t& obj)
{
} /* size: 0 */

// <002EF4B1> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpStoreSsAddressU_t>(CUtlBuffer* pBuf, const MatOpStoreSsAddressU_t& obj)
{
} /* size: 0 */

// <002EF449> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpStoreSsAddressV_t>(CUtlBuffer* pBuf, const MatOpStoreSsAddressV_t& obj)
{
} /* size: 0 */

// <002EF3E1> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpStoreSsAddressW_t>(CUtlBuffer* pBuf, const MatOpStoreSsAddressW_t& obj)
{
} /* size: 0 */

// <002EF311> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpStoreSsMipLodBias_t>(CUtlBuffer* pBuf, const MatOpStoreSsMipLodBias_t& obj)
{
} /* size: 0 */

// <002EF2A9> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpStoreSsMaxLod_t>(CUtlBuffer* pBuf, const MatOpStoreSsMaxLod_t& obj)
{
} /* size: 0 */

// <002EF241> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpStoreSsMaxAniso_t>(CUtlBuffer* pBuf, const MatOpStoreSsMaxAniso_t& obj)
{
} /* size: 0 */

// <002EF1D9> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpStoreSsFetch4_t>(CUtlBuffer* pBuf, const MatOpStoreSsFetch4_t& obj)
{
} /* size: 0 */

// <002EF171> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpStoreSsMinLod_t>(CUtlBuffer* pBuf, const MatOpStoreSsMinLod_t& obj)
{
} /* size: 0 */

// <002EF0A1> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpLoadCBFromAttr_t>(CUtlBuffer* pBuf, const MatOpLoadCBFromAttr_t& obj)
{
} /* size: 0 */

// <002EF039> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpSetPushConstants_t>(CUtlBuffer* pBuf, const MatOpSetPushConstants_t& obj)
{
} /* size: 0 */

// <001681E3> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpSetProgramType_t>(CUtlBuffer* pBuf, const MatOpSetProgramType_t& obj)
{
} /* size: 0 */

// <0016817B> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpBindVertexShader_t>(CUtlBuffer* pBuf, const MatOpBindVertexShader_t& obj)
{
} /* size: 0 */

// <00168113> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpBindShader_t>(CUtlBuffer* pBuf, const MatOpBindShader_t& obj)
{
} /* size: 0 */

// <0016803F> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpSetRasterizerStateDesc_t>(CUtlBuffer* pBuf, const MatOpSetRasterizerStateDesc_t& obj)
{
} /* size: 0 */

// <00167FD7> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpSetDepthStencilStateDesc_t>(CUtlBuffer* pBuf, const MatOpSetDepthStencilStateDesc_t& obj)
{
} /* size: 0 */

// <00167F6F> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpSetBlendStateDesc_t>(CUtlBuffer* pBuf, const MatOpSetBlendStateDesc_t& obj)
{
} /* size: 0 */

// <00167F07> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpBindRasterizerState_t>(CUtlBuffer* pBuf, const MatOpBindRasterizerState_t& obj)
{
} /* size: 0 */

// <00167E9F> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpBindDepthStencilState_t>(CUtlBuffer* pBuf, const MatOpBindDepthStencilState_t& obj)
{
} /* size: 0 */

// <00167E37> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpBindBlendState_t>(CUtlBuffer* pBuf, const MatOpBindBlendState_t& obj)
{
} /* size: 0 */

// <00167DCF> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpSetUsedSamplers_t>(CUtlBuffer* pBuf, const MatOpSetUsedSamplers_t& obj)
{
} /* size: 0 */

// <00167D67> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpSetCommonSamplerDesc0_t>(CUtlBuffer* pBuf, const MatOpSetCommonSamplerDesc0_t& obj)
{
} /* size: 0 */

// <00167CFF> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpSetSamplerDesc_t>(CUtlBuffer* pBuf, const MatOpSetSamplerDesc_t& obj)
{
} /* size: 0 */

// <00167C73> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpFillDynamicMaterialCB_t>(CUtlBuffer* pBuf, const MatOpFillDynamicMaterialCB_t& obj)
{
} /* size: 0 */

// <00167C0B> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpFillDynamicGlobalsBDA_t>(CUtlBuffer* pBuf, const MatOpFillDynamicGlobalsBDA_t& obj)
{
} /* size: 0 */

// <00167BA3> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpLoadCBLiteral_t>(CUtlBuffer* pBuf, const MatOpLoadCBLiteral_t& obj)
{
} /* size: 0 */

// <00167B3B> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpSetGlobalsBDA_t>(CUtlBuffer* pBuf, const MatOpSetGlobalsBDA_t& obj)
{
} /* size: 0 */

// <00167AD3> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpFlush_t>(CUtlBuffer* pBuf, const MatOpFlush_t& obj)
{
} /* size: 0 */

// <00167A6B> materialsystem2/material_command_buffer.h:183
void PutInCmdBuf<MatOpFlushRenderState_t>(CUtlBuffer* pBuf, const MatOpFlushRenderState_t& obj)
{
} /* size: 0 */

// <00146D1A> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<0, MatOpStop_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<0, MatOpStop_t>* );
};

// <00146D9D> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<1, MatOpSetProgramType_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<1, MatOpSetProgramType_t>* );
};

// <00146E2F> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<2, MatOpBindShader_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<2, MatOpBindShader_t>* );
};

// <00146EC1> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<3, MatOpBindVertexShader_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<3, MatOpBindVertexShader_t>* );
};

// <00146F53> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<11, MatOpBindRasterizerState_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<11, MatOpBindRasterizerState_t>* );
};

// <00146FE7> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<12, MatOpBindDepthStencilState_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<12, MatOpBindDepthStencilState_t>* );
};

// <0014707B> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<13, MatOpBindBlendState_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<13, MatOpBindBlendState_t>* );
};

// <0014710F> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<14, MatOpSetRasterizerStateDesc_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<14, MatOpSetRasterizerStateDesc_t>* );
};

// <001471A3> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<15, MatOpSetDepthStencilStateDesc_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<15, MatOpSetDepthStencilStateDesc_t>* );
};

// <00147237> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<16, MatOpSetBlendStateDesc_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<16, MatOpSetBlendStateDesc_t>* );
};

// <001472CB> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<17, MatOpSetUsedSamplers_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<17, MatOpSetUsedSamplers_t>* );
};

// <0014736F> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<18, MatOpSetSamplerDesc_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<18, MatOpSetSamplerDesc_t>* );
};

// <00147413> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<19, MatOpSetCommonSamplerDesc0_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<19, MatOpSetCommonSamplerDesc0_t>* );
};

// <001474A7> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<34, MatOpFlushRenderState_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<34, MatOpFlushRenderState_t>* );
};

// <0014752B> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<33, MatOpFlush_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<33, MatOpFlush_t>* );
};

// <001475AF> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<35, MatOpFillDynamicMaterialCB_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<35, MatOpFillDynamicMaterialCB_t>* );
};

// <00147673> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<39, MatOpLoadCBLiteral_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<39, MatOpLoadCBLiteral_t>* );
};

// <00147727> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<40, MatOpSetGlobalsBDA_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<40, MatOpSetGlobalsBDA_t>* );
};

// <001477BB> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<41, MatOpFillDynamicGlobalsBDA_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<41, MatOpFillDynamicGlobalsBDA_t>* );
};

// <0023B431> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<4, MatOpSetPushConstants_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<4, MatOpSetPushConstants_t>* );
};

// <0023B4B6> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<5, MatOpBindDescriptorSet_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<5, MatOpBindDescriptorSet_t>* );
};

// <0023B580> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<6, MatOpBindTexture_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<6, MatOpBindTexture_t>* );
};

// <0023B63E> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<7, MatOpRegisterTextureUseInDescriptorSet_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<7, MatOpRegisterTextureUseInDescriptorSet_t>* );
};

// <0023B714> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<8, MatOpBindTextureBuffer_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<8, MatOpBindTextureBuffer_t>* );
};

// <0023B79C> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<9, MatOpBindUAVTex_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<9, MatOpBindUAVTex_t>* );
};

// <0023B83A> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<10, MatOpBindUAVBuffer_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<10, MatOpBindUAVBuffer_t>* );
};

// <0023BD39> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<20, MatOpSetCommonSamplerDesc1_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<20, MatOpSetCommonSamplerDesc1_t>* );
};

// <0023BDC8> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<21, MatOpSetCommonSamplerDesc2_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<21, MatOpSetCommonSamplerDesc2_t>* );
};

// <0023BE57> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<22, MatOpSetCommonSamplerDesc3_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<22, MatOpSetCommonSamplerDesc3_t>* );
};

// <0023BEE6> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<23, MatOpSetCommonSamplerDesc4_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<23, MatOpSetCommonSamplerDesc4_t>* );
};

// <0023BF75> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<24, MatOpSetCommonSamplerDesc5_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<24, MatOpSetCommonSamplerDesc5_t>* );
};

// <0023C004> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<25, MatOpSetCommonSamplerDesc6_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<25, MatOpSetCommonSamplerDesc6_t>* );
};

// <0023C093> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<26, MatOpSetCommonSamplerDesc7_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<26, MatOpSetCommonSamplerDesc7_t>* );
};

// <0023C122> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<27, MatOpSetCommonSamplerDesc8_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<27, MatOpSetCommonSamplerDesc8_t>* );
};

// <0023C1B1> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<28, MatOpSetCommonSamplerDesc9_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<28, MatOpSetCommonSamplerDesc9_t>* );
};

// <0023C240> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<29, MatOpSetCommonSamplerDesc10_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<29, MatOpSetCommonSamplerDesc10_t>* );
};

// <0023C2CF> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<30, MatOpSetCommonSamplerDesc11_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<30, MatOpSetCommonSamplerDesc11_t>* );
};

// <0023C35E> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<31, MatOpSetCommonSamplerDesc12_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<31, MatOpSetCommonSamplerDesc12_t>* );
};

// <0023C495> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<36, MatOpLoadFloatLiteral_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<36, MatOpLoadFloatLiteral_t>* );
};

// <0023C50D> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<37, MatOpLoadIntLiteral_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<37, MatOpLoadIntLiteral_t>* );
};

// <0023C585> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<38, MatOpLoadVec4Literal_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<38, MatOpLoadVec4Literal_t>* );
};

// <0023C785> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<42, MatOpLoadSamplerFromAttr_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<42, MatOpLoadSamplerFromAttr_t>* );
};

// <0023C80D> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<43, MatOpLoadTexFromAttr_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<43, MatOpLoadTexFromAttr_t>* );
};

// <0023C895> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<44, MatOpLoadCBFromAttr_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<44, MatOpLoadCBFromAttr_t>* );
};

// <0023C92D> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<45, MatOpLoadBufferFromAttr_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<45, MatOpLoadBufferFromAttr_t>* );
};

// <0023C9A5> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<46, MatOpLoadTexFromParam_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<46, MatOpLoadTexFromParam_t>* );
};

// <0023CA1D> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<47, MatOpLoadTexFromDynParam_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<47, MatOpLoadTexFromDynParam_t>* );
};

// <0023CA95> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<48, MatOpLoadTexFromVfxExpr_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<48, MatOpLoadTexFromVfxExpr_t>* );
};

// <0023CB2D> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<49, MatOpLoadVec4FromVfxExpr_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<49, MatOpLoadVec4FromVfxExpr_t>* );
};

// <0023CBD5> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<50, MatOpClampFloat_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<50, MatOpClampFloat_t>* );
};

// <0023CC5D> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<51, MatOpClampInt_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<51, MatOpClampInt_t>* );
};

// <0023CCE5> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<52, MatOpClampShort_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<52, MatOpClampShort_t>* );
};

// <0023CD6D> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<53, MatOpClampVec4_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<53, MatOpClampVec4_t>* );
};

// <0023CDF5> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<62, MatOpStoreRsSrgbWriteEnable_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<62, MatOpStoreRsSrgbWriteEnable_t>* );
};

// <0023CE6D> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<86, MatOpStoreRsColorWriteEnable_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<86, MatOpStoreRsColorWriteEnable_t>* );
};

// <0023CEE5> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<92, MatOpStoreSsFilter_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<92, MatOpStoreSsFilter_t>* );
};

// <0023CF5D> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<93, MatOpStoreSsAddressU_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<93, MatOpStoreSsAddressU_t>* );
};

// <0023CFD5> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<94, MatOpStoreSsAddressV_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<94, MatOpStoreSsAddressV_t>* );
};

// <0023D04D> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<95, MatOpStoreSsAddressW_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<95, MatOpStoreSsAddressW_t>* );
};

// <0023D0C5> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<96, MatOpStoreSsBorderColor_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<96, MatOpStoreSsBorderColor_t>* );
};

// <0023D13D> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<97, MatOpStoreSsMipLodBias_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<97, MatOpStoreSsMipLodBias_t>* );
};

// <0023D1B5> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<98, MatOpStoreSsMaxLod_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<98, MatOpStoreSsMaxLod_t>* );
};

// <0023D22D> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<99, MatOpStoreSsMaxAniso_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<99, MatOpStoreSsMaxAniso_t>* );
};

// <0023D2A5> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<101, MatOpStoreSsMinLod_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<101, MatOpStoreSsMinLod_t>* );
};

// <0023D31D> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<102, MatOpStoreSsCompFunc_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<102, MatOpStoreSsCompFunc_t>* );
};

// <002E70E0> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<55, MatOpStoreRsCullMode_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<55, MatOpStoreRsCullMode_t>* );
};

// <002E7164> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<56, MatOpStoreRsDepthBias_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<56, MatOpStoreRsDepthBias_t>* );
};

// <002E71E8> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<57, MatOpStoreRsSSDepthBias_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<57, MatOpStoreRsSSDepthBias_t>* );
};

// <002E726C> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<58, MatOpStoreRsDepthBiasClamp_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<58, MatOpStoreRsDepthBiasClamp_t>* );
};

// <002E72F0> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<59, MatOpStoreRsDepthClipEnable_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<59, MatOpStoreRsDepthClipEnable_t>* );
};

// <002E7374> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<60, MatOpStoreRsMultiSampleEnable_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<60, MatOpStoreRsMultiSampleEnable_t>* );
};

// <002E73F8> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<61, MatOpStoreRsSampleMask_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<61, MatOpStoreRsSampleMask_t>* );
};

// <002E7510> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<63, MatOpStoreRsDepthEnable_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<63, MatOpStoreRsDepthEnable_t>* );
};

// <002E7594> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<64, MatOpStoreRsDepthWriteEnable_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<64, MatOpStoreRsDepthWriteEnable_t>* );
};

// <002E7618> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<65, MatOpStoreRsDepthFunc_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<65, MatOpStoreRsDepthFunc_t>* );
};

// <002E769C> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<66, MatOpStoreRsStencilEnable_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<66, MatOpStoreRsStencilEnable_t>* );
};

// <002E7720> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<67, MatOpStoreRsStencilReadMask_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<67, MatOpStoreRsStencilReadMask_t>* );
};

// <002E77A4> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<68, MatOpStoreRsStencilWriteMask_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<68, MatOpStoreRsStencilWriteMask_t>* );
};

// <002E7828> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<69, MatOpStoreRsStencilFailOp_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<69, MatOpStoreRsStencilFailOp_t>* );
};

// <002E78AC> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<70, MatOpStoreRsStencilDepthFailOp_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<70, MatOpStoreRsStencilDepthFailOp_t>* );
};

// <002E7930> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<71, MatOpStoreRsStencilPassOp_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<71, MatOpStoreRsStencilPassOp_t>* );
};

// <002E79B4> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<72, MatOpStoreRsStencilFunc_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<72, MatOpStoreRsStencilFunc_t>* );
};

// <002E7A38> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<73, MatOpStoreRsBackStencilFailOp_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<73, MatOpStoreRsBackStencilFailOp_t>* );
};

// <002E7ABC> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<74, MatOpStoreRsBackStencilDepthFailOp_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<74, MatOpStoreRsBackStencilDepthFailOp_t>* );
};

// <002E7B40> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<75, MatOpStoreRsBackStencilPassOp_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<75, MatOpStoreRsBackStencilPassOp_t>* );
};

// <002E7BC4> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<76, MatOpStoreRsBackStencilFunc_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<76, MatOpStoreRsBackStencilFunc_t>* );
};

// <002E7C48> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<77, MatOpStoreRsStencilRef_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<77, MatOpStoreRsStencilRef_t>* );
};

// <002E7CCC> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<78, MatOpStoreRsAlphaToCoverageEnable_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<78, MatOpStoreRsAlphaToCoverageEnable_t>* );
};

// <002E7D50> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<79, MatOpStoreRsBlendEnable_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<79, MatOpStoreRsBlendEnable_t>* );
};

// <002E7E58> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<81, MatOpStoreRsDestBlend_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<81, MatOpStoreRsDestBlend_t>* );
};

// <002E7EDC> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<82, MatOpStoreRsBlendOp_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<82, MatOpStoreRsBlendOp_t>* );
};

// <002E7F60> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<83, MatOpStoreRsSrcBlendAlpha_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<83, MatOpStoreRsSrcBlendAlpha_t>* );
};

// <002E7FE4> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<84, MatOpStoreRsDestBlendAlpha_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<84, MatOpStoreRsDestBlendAlpha_t>* );
};

// <002E8068> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<85, MatOpStoreRsBlendOpAlpha_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<85, MatOpStoreRsBlendOpAlpha_t>* );
};

// <002E8180> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<87, MatOpStoreRsBlendFactor_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<87, MatOpStoreRsBlendFactor_t>* );
};

// <002E8204> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<88, MatOpStoreRsIndependentBlendEnable_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<88, MatOpStoreRsIndependentBlendEnable_t>* );
};

// <002E8288> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<89, MatOpStoreRsAlphaTestEnable_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<89, MatOpStoreRsAlphaTestEnable_t>* );
};

// <002E830C> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<90, MatOpStoreRsAlphaTestRef_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<90, MatOpStoreRsAlphaTestRef_t>* );
};

// <002E88B4> materialsystem2/material_command_buffer.h:196
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpHelper_t<100, MatOpStoreSsFetch4_t> : public MatOpBase_t {
public:
	/* struct MatOpBase_t <ancestor>; */ /* 0 1 */
	/* materialsystem2/material_command_buffer.h:198 */
	void MatOpHelper_t(MatOpHelper_t<100, MatOpStoreSsFetch4_t>* );
};

// <002F0FB0> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<47, MatOpLoadTexFromDynParam_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F0F97> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<47, MatOpLoadTexFromDynParam_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F0F48> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<46, MatOpLoadTexFromParam_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F0F2F> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<46, MatOpLoadTexFromParam_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F0B7E> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<43, MatOpLoadTexFromAttr_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F0B65> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<43, MatOpLoadTexFromAttr_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F0B16> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<45, MatOpLoadBufferFromAttr_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F0AFD> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<45, MatOpLoadBufferFromAttr_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F0AAE> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<48, MatOpLoadTexFromVfxExpr_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F0A95> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<48, MatOpLoadTexFromVfxExpr_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F0A22> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<6, MatOpBindTexture_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F0A09> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<6, MatOpBindTexture_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F09BA> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<8, MatOpBindTextureBuffer_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F09A1> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<8, MatOpBindTextureBuffer_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F0952> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<9, MatOpBindUAVTex_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F0939> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<9, MatOpBindUAVTex_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F08EA> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<10, MatOpBindUAVBuffer_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F08D1> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<10, MatOpBindUAVBuffer_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F0882> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<49, MatOpLoadVec4FromVfxExpr_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F0869> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<49, MatOpLoadVec4FromVfxExpr_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F081A> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<50, MatOpClampFloat_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F0801> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<50, MatOpClampFloat_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F07B2> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<52, MatOpClampShort_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F0799> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<52, MatOpClampShort_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F074A> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<51, MatOpClampInt_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F0731> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<51, MatOpClampInt_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F06E2> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<53, MatOpClampVec4_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F06C9> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<53, MatOpClampVec4_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F067A> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<37, MatOpLoadIntLiteral_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F0612> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<77, MatOpStoreRsStencilRef_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F05F9> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<77, MatOpStoreRsStencilRef_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F05AA> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<38, MatOpLoadVec4Literal_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F0591> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<38, MatOpLoadVec4Literal_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F0542> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<61, MatOpStoreRsSampleMask_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F0529> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<61, MatOpStoreRsSampleMask_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F04DA> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<89, MatOpStoreRsAlphaTestEnable_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F04C1> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<89, MatOpStoreRsAlphaTestEnable_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F0472> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<36, MatOpLoadFloatLiteral_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F0459> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<36, MatOpLoadFloatLiteral_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F040A> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<90, MatOpStoreRsAlphaTestRef_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F03F1> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<90, MatOpStoreRsAlphaTestRef_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F03A2> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<91, MatOpStoreRsAlphaTestFunc_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F0389> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<91, MatOpStoreRsAlphaTestFunc_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F02B9> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<55, MatOpStoreRsCullMode_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F026A> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<56, MatOpStoreRsDepthBias_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F0251> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<56, MatOpStoreRsDepthBias_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F0202> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<57, MatOpStoreRsSSDepthBias_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F01E9> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<57, MatOpStoreRsSSDepthBias_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F019A> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<58, MatOpStoreRsDepthBiasClamp_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F0181> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<58, MatOpStoreRsDepthBiasClamp_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F0132> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<59, MatOpStoreRsDepthClipEnable_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F0119> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<59, MatOpStoreRsDepthClipEnable_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F00CA> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<60, MatOpStoreRsMultiSampleEnable_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F00B1> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<60, MatOpStoreRsMultiSampleEnable_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F0062> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<62, MatOpStoreRsSrgbWriteEnable_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002F0049> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<62, MatOpStoreRsSrgbWriteEnable_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EFFFA> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<63, MatOpStoreRsDepthEnable_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EFFE1> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<63, MatOpStoreRsDepthEnable_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EFF92> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<64, MatOpStoreRsDepthWriteEnable_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EFF79> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<64, MatOpStoreRsDepthWriteEnable_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EFF2A> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<65, MatOpStoreRsDepthFunc_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EFF11> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<65, MatOpStoreRsDepthFunc_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EFEC2> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<66, MatOpStoreRsStencilEnable_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EFEA9> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<66, MatOpStoreRsStencilEnable_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EFE5A> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<67, MatOpStoreRsStencilReadMask_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EFE41> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<67, MatOpStoreRsStencilReadMask_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EFDD9> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<68, MatOpStoreRsStencilWriteMask_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EFD22> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<70, MatOpStoreRsStencilDepthFailOp_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EFD09> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<70, MatOpStoreRsStencilDepthFailOp_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EFCBA> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<71, MatOpStoreRsStencilPassOp_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EFCA1> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<71, MatOpStoreRsStencilPassOp_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EFC52> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<72, MatOpStoreRsStencilFunc_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EFC39> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<72, MatOpStoreRsStencilFunc_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EFBEA> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<73, MatOpStoreRsBackStencilFailOp_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EFBD1> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<73, MatOpStoreRsBackStencilFailOp_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EFB82> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<74, MatOpStoreRsBackStencilDepthFailOp_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EFB69> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<74, MatOpStoreRsBackStencilDepthFailOp_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EFB1A> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<75, MatOpStoreRsBackStencilPassOp_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EFB01> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<75, MatOpStoreRsBackStencilPassOp_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EFAB2> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<76, MatOpStoreRsBackStencilFunc_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EFA99> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<76, MatOpStoreRsBackStencilFunc_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EFA4A> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<78, MatOpStoreRsAlphaToCoverageEnable_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EFA31> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<78, MatOpStoreRsAlphaToCoverageEnable_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EF9E2> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<79, MatOpStoreRsBlendEnable_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EF912> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<81, MatOpStoreRsDestBlend_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EF8F9> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<81, MatOpStoreRsDestBlend_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EF8AA> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<82, MatOpStoreRsBlendOp_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EF891> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<82, MatOpStoreRsBlendOp_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EF842> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<83, MatOpStoreRsSrcBlendAlpha_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EF829> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<83, MatOpStoreRsSrcBlendAlpha_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EF7DA> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<84, MatOpStoreRsDestBlendAlpha_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EF7C1> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<84, MatOpStoreRsDestBlendAlpha_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EF772> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<85, MatOpStoreRsBlendOpAlpha_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EF759> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<85, MatOpStoreRsBlendOpAlpha_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EF70A> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<86, MatOpStoreRsColorWriteEnable_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EF6F1> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<86, MatOpStoreRsColorWriteEnable_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EF6A2> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<87, MatOpStoreRsBlendFactor_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EF689> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<87, MatOpStoreRsBlendFactor_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EF63A> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<88, MatOpStoreRsIndependentBlendEnable_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EF621> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<88, MatOpStoreRsIndependentBlendEnable_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EF5D2> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<42, MatOpLoadSamplerFromAttr_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EF5B9> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<42, MatOpLoadSamplerFromAttr_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EF56A> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<92, MatOpStoreSsFilter_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EF551> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<92, MatOpStoreSsFilter_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EF502> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<93, MatOpStoreSsAddressU_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EF4E9> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<93, MatOpStoreSsAddressU_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EF49A> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<94, MatOpStoreSsAddressV_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EF481> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<94, MatOpStoreSsAddressV_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EF432> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<95, MatOpStoreSsAddressW_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EF419> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<95, MatOpStoreSsAddressW_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EF3CA> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<96, MatOpStoreSsBorderColor_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EF3B1> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<96, MatOpStoreSsBorderColor_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EF362> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<97, MatOpStoreSsMipLodBias_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EF349> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<97, MatOpStoreSsMipLodBias_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EF2FA> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<98, MatOpStoreSsMaxLod_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EF2E1> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<98, MatOpStoreSsMaxLod_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EF292> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<99, MatOpStoreSsMaxAniso_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EF22A> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<100, MatOpStoreSsFetch4_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EF211> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<100, MatOpStoreSsFetch4_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EF1A9> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<101, MatOpStoreSsMinLod_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EF15A> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<102, MatOpStoreSsCompFunc_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EF141> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<102, MatOpStoreSsCompFunc_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EF0F2> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<44, MatOpLoadCBFromAttr_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EF0D9> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<44, MatOpLoadCBFromAttr_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EF08A> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<4, MatOpSetPushConstants_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EF071> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<4, MatOpSetPushConstants_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EF022> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<5, MatOpBindDescriptorSet_t>::MatOpHelper_t()
{
} /* size: 0 */

// <002EF009> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<5, MatOpBindDescriptorSet_t>::MatOpHelper_t()
{
} /* size: 0 */

// <0026B524> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<19, MatOpSetCommonSamplerDesc0_t>::MatOpHelper_t()
{
} /* size: 0 */

// <0026B50B> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<19, MatOpSetCommonSamplerDesc0_t>::MatOpHelper_t()
{
} /* size: 0 */

// <0026B4F4> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<20, MatOpSetCommonSamplerDesc1_t>::MatOpHelper_t()
{
} /* size: 0 */

// <0026B4DB> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<20, MatOpSetCommonSamplerDesc1_t>::MatOpHelper_t()
{
} /* size: 0 */

// <0026B4AB> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<21, MatOpSetCommonSamplerDesc2_t>::MatOpHelper_t()
{
} /* size: 0 */

// <0026B47B> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<22, MatOpSetCommonSamplerDesc3_t>::MatOpHelper_t()
{
} /* size: 0 */

// <0026B44B> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<23, MatOpSetCommonSamplerDesc4_t>::MatOpHelper_t()
{
} /* size: 0 */

// <0026B434> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<24, MatOpSetCommonSamplerDesc5_t>::MatOpHelper_t()
{
} /* size: 0 */

// <0026B41B> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<24, MatOpSetCommonSamplerDesc5_t>::MatOpHelper_t()
{
} /* size: 0 */

// <0026B404> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<25, MatOpSetCommonSamplerDesc6_t>::MatOpHelper_t()
{
} /* size: 0 */

// <0026B3EB> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<25, MatOpSetCommonSamplerDesc6_t>::MatOpHelper_t()
{
} /* size: 0 */

// <0026B3D4> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<26, MatOpSetCommonSamplerDesc7_t>::MatOpHelper_t()
{
} /* size: 0 */

// <0026B3BB> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<26, MatOpSetCommonSamplerDesc7_t>::MatOpHelper_t()
{
} /* size: 0 */

// <0026B3A4> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<27, MatOpSetCommonSamplerDesc8_t>::MatOpHelper_t()
{
} /* size: 0 */

// <0026B374> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<28, MatOpSetCommonSamplerDesc9_t>::MatOpHelper_t()
{
} /* size: 0 */

// <0026B35B> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<28, MatOpSetCommonSamplerDesc9_t>::MatOpHelper_t()
{
} /* size: 0 */

// <0026B344> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<29, MatOpSetCommonSamplerDesc10_t>::MatOpHelper_t()
{
} /* size: 0 */

// <0026B32B> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<29, MatOpSetCommonSamplerDesc10_t>::MatOpHelper_t()
{
} /* size: 0 */

// <0026B314> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<30, MatOpSetCommonSamplerDesc11_t>::MatOpHelper_t()
{
} /* size: 0 */

// <0026B2FB> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<30, MatOpSetCommonSamplerDesc11_t>::MatOpHelper_t()
{
} /* size: 0 */

// <0026B2E4> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<31, MatOpSetCommonSamplerDesc12_t>::MatOpHelper_t()
{
} /* size: 0 */

// <0026B2CB> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<31, MatOpSetCommonSamplerDesc12_t>::MatOpHelper_t()
{
} /* size: 0 */

// <00168234> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<1, MatOpSetProgramType_t>::MatOpHelper_t()
{
} /* size: 0 */

// <0016821B> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<1, MatOpSetProgramType_t>::MatOpHelper_t()
{
} /* size: 0 */

// <001681B3> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<3, MatOpBindVertexShader_t>::MatOpHelper_t()
{
} /* size: 0 */

// <00168164> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<2, MatOpBindShader_t>::MatOpHelper_t()
{
} /* size: 0 */

// <0016814B> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<2, MatOpBindShader_t>::MatOpHelper_t()
{
} /* size: 0 */

// <00168090> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<14, MatOpSetRasterizerStateDesc_t>::MatOpHelper_t()
{
} /* size: 0 */

// <00168077> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<14, MatOpSetRasterizerStateDesc_t>::MatOpHelper_t()
{
} /* size: 0 */

// <00168028> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<15, MatOpSetDepthStencilStateDesc_t>::MatOpHelper_t()
{
} /* size: 0 */

// <0016800F> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<15, MatOpSetDepthStencilStateDesc_t>::MatOpHelper_t()
{
} /* size: 0 */

// <00167FC0> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<16, MatOpSetBlendStateDesc_t>::MatOpHelper_t()
{
} /* size: 0 */

// <00167FA7> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<16, MatOpSetBlendStateDesc_t>::MatOpHelper_t()
{
} /* size: 0 */

// <00167F58> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<11, MatOpBindRasterizerState_t>::MatOpHelper_t()
{
} /* size: 0 */

// <00167F3F> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<11, MatOpBindRasterizerState_t>::MatOpHelper_t()
{
} /* size: 0 */

// <00167EF0> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<12, MatOpBindDepthStencilState_t>::MatOpHelper_t()
{
} /* size: 0 */

// <00167ED7> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<12, MatOpBindDepthStencilState_t>::MatOpHelper_t()
{
} /* size: 0 */

// <00167E88> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<13, MatOpBindBlendState_t>::MatOpHelper_t()
{
} /* size: 0 */

// <00167E6F> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<13, MatOpBindBlendState_t>::MatOpHelper_t()
{
} /* size: 0 */

// <00167E20> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<17, MatOpSetUsedSamplers_t>::MatOpHelper_t()
{
} /* size: 0 */

// <00167E07> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<17, MatOpSetUsedSamplers_t>::MatOpHelper_t()
{
} /* size: 0 */

// <00167D50> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<18, MatOpSetSamplerDesc_t>::MatOpHelper_t()
{
} /* size: 0 */

// <00167CC4> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<35, MatOpFillDynamicMaterialCB_t>::MatOpHelper_t()
{
} /* size: 0 */

// <00167CAB> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<35, MatOpFillDynamicMaterialCB_t>::MatOpHelper_t()
{
} /* size: 0 */

// <00167C5C> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<41, MatOpFillDynamicGlobalsBDA_t>::MatOpHelper_t()
{
} /* size: 0 */

// <00167C43> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<41, MatOpFillDynamicGlobalsBDA_t>::MatOpHelper_t()
{
} /* size: 0 */

// <00167BF4> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<39, MatOpLoadCBLiteral_t>::MatOpHelper_t()
{
} /* size: 0 */

// <00167BDB> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<39, MatOpLoadCBLiteral_t>::MatOpHelper_t()
{
} /* size: 0 */

// <00167B8C> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<40, MatOpSetGlobalsBDA_t>::MatOpHelper_t()
{
} /* size: 0 */

// <00167B73> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<40, MatOpSetGlobalsBDA_t>::MatOpHelper_t()
{
} /* size: 0 */

// <00167B24> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<33, MatOpFlush_t>::MatOpHelper_t()
{
} /* size: 0 */

// <00167B0B> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<33, MatOpFlush_t>::MatOpHelper_t()
{
} /* size: 0 */

// <00167ABC> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<34, MatOpFlushRenderState_t>::MatOpHelper_t()
{
} /* size: 0 */

// <00167AA3> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<34, MatOpFlushRenderState_t>::MatOpHelper_t()
{
} /* size: 0 */

// <00167A54> materialsystem2/material_command_buffer.h:198
void MatOpHelper_t<0, MatOpStop_t>::MatOpHelper_t()
{
} /* size: 0 */

// <00167A3B> materialsystem2/material_command_buffer.h:198
inline void MatOpHelper_t<0, MatOpStop_t>::MatOpHelper_t()
{
} /* size: 0 */

// <0017230A> materialsystem2/material_command_buffer.h:207
void MatOpStop_t::MatOpStop_t()
{
} /* size: 0 */

// <001722EE> materialsystem2/material_command_buffer.h:207
inline void MatOpStop_t::MatOpStop_t()
{
} /* size: 0 */

// <00146D6A> materialsystem2/material_command_buffer.h:207
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpStop_t : public MatOpHelper_t<0, MatOpStop_t> {
public:
	/* struct MatOpHelper_t<0, MatOpStop_t> <ancestor>; */ /* 0 1 */
	void MatOpStop_t(MatOpStop_t* );
};

// <00172775> materialsystem2/material_command_buffer.h:211
void MatOpSetProgramType_t::MatOpSetProgramType_t()
{
} /* size: 0 */

// <00172759> materialsystem2/material_command_buffer.h:211
inline void MatOpSetProgramType_t::MatOpSetProgramType_t()
{
} /* size: 0 */

// <00146DED> materialsystem2/material_command_buffer.h:211
// member function: 1
// member variables: 2
// struct size: 2
struct MatOpSetProgramType_t : public MatOpHelper_t<1, MatOpSetProgramType_t> {
public:
	/* struct MatOpHelper_t<1, MatOpSetProgramType_t> <ancestor>; */ /* 0 1 */
	uint8 m_nProgramType; /* 1 1 */
	void MatOpSetProgramType_t(MatOpSetProgramType_t* );
};

// <001726F9> materialsystem2/material_command_buffer.h:216
void MatOpBindShader_t::MatOpBindShader_t()
{
} /* size: 0 */

// <001726DD> materialsystem2/material_command_buffer.h:216
inline void MatOpBindShader_t::MatOpBindShader_t()
{
} /* size: 0 */

// <00146E7F> materialsystem2/material_command_buffer.h:216
// member function: 1
// member variables: 2
// struct size: 9
struct MatOpBindShader_t : public MatOpHelper_t<2, MatOpBindShader_t> {
public:
	/* struct MatOpHelper_t<2, MatOpBindShader_t> <ancestor>; */ /* 0 1 */
	RenderShaderHandle_t m_hShader; /* 1 8 */
	void MatOpBindShader_t(MatOpBindShader_t* );
} __attribute__((__packed__));

// <00172737> materialsystem2/material_command_buffer.h:221
void MatOpBindVertexShader_t::MatOpBindVertexShader_t()
{
} /* size: 0 */

// <0017271B> materialsystem2/material_command_buffer.h:221
inline void MatOpBindVertexShader_t::MatOpBindVertexShader_t()
{
} /* size: 0 */

// <00146F11> materialsystem2/material_command_buffer.h:221
// member function: 1
// member variables: 2
// struct size: 9
struct MatOpBindVertexShader_t : public MatOpHelper_t<3, MatOpBindVertexShader_t> {
public:
	/* struct MatOpHelper_t<3, MatOpBindVertexShader_t> <ancestor>; */ /* 0 1 */
	RenderShaderHandle_t m_hShader; /* 1 8 */
	void MatOpBindVertexShader_t(MatOpBindVertexShader_t* );
} __attribute__((__packed__));

// <002FAD9C> materialsystem2/material_command_buffer.h:226
void MatOpSetPushConstants_t::MatOpSetPushConstants_t()
{
} /* size: 0 */

// <002FAD7F> materialsystem2/material_command_buffer.h:226
inline void MatOpSetPushConstants_t::MatOpSetPushConstants_t()
{
} /* size: 0 */

// <0023B47C> materialsystem2/material_command_buffer.h:226
// member variables: 3
// struct size: 7
struct MatOpSetPushConstants_t : public MatOpHelper_t<4, MatOpSetPushConstants_t> {
public:
	/* struct MatOpHelper_t<4, MatOpSetPushConstants_t> <ancestor>; */ /* 0 1 */
	uint32 m_nAttrNameHash; /* 1 4 */
	uint16 m_nExpectedPushConstantSize; /* 5 2 */
} __attribute__((__packed__));

// <0023B501> materialsystem2/material_command_buffer.h:232
// member variables: 5
// struct size: 10
struct MatOpBindDescriptorSet_t : public MatOpHelper_t<5, MatOpBindDescriptorSet_t> {
	/* materialsystem2/material_command_buffer.h:238 */
	union {
		RenderDescriptorSetHandle_t m_hDescriptorSet; /* 0 8 */
		uint32 m_nAttrHashValue; /* 0 4 */
	};
public:
	/* struct MatOpHelper_t<5, MatOpBindDescriptorSet_t> <ancestor>; */ /* 0 1 */
	uint8 m_nDescriptorSetSlot:6; /* 1: 0 1 */
	uint8 m_bUpdateDescriptorSetContents:1; /* 1: 6 1 */
	uint8 m_bDescriptorSetHandleValid:1; /* 1: 7 1 */
	union {
		RenderDescriptorSetHandle_t m_hDescriptorSet; /* 2 8 */
		uint32 m_nAttrHashValue; /* 2 4 */
	}; /* 2 8 */
} __attribute__((__packed__));

// <002E6364> materialsystem2/material_command_buffer.h:232
// member function: 1
// member variables: 5
// struct size: 10
struct MatOpBindDescriptorSet_t : public MatOpHelper_t<5, MatOpBindDescriptorSet_t> {
	/* materialsystem2/material_command_buffer.h:238 */
	union {
		RenderDescriptorSetHandle_t m_hDescriptorSet; /* 0 8 */
		uint32 m_nAttrHashValue; /* 0 4 */
	};
public:
	/* struct MatOpHelper_t<5, MatOpBindDescriptorSet_t> <ancestor>; */ /* 0 1 */
	uint8 m_nDescriptorSetSlot:6; /* 1: 0 1 */
	uint8 m_bUpdateDescriptorSetContents:1; /* 1: 6 1 */
	uint8 m_bDescriptorSetHandleValid:1; /* 1: 7 1 */
	union {
		RenderDescriptorSetHandle_t m_hDescriptorSet; /* 2 8 */
		uint32 m_nAttrHashValue; /* 2 4 */
	}; /* 2 8 */
	void MatOpBindDescriptorSet_t(MatOpBindDescriptorSet_t* );
} __attribute__((__packed__));

// <002FC815> materialsystem2/material_command_buffer.h:244
void MatOpBindTexture_t::MatOpBindTexture_t()
{
} /* size: 0 */

// <002FC7F8> materialsystem2/material_command_buffer.h:244
inline void MatOpBindTexture_t::MatOpBindTexture_t()
{
} /* size: 0 */

// <0023B5CB> materialsystem2/material_command_buffer.h:244
// member variables: 6
// struct size: 8
struct MatOpBindTexture_t : public MatOpHelper_t<6, MatOpBindTexture_t> {
public:
	/* struct MatOpHelper_t<6, MatOpBindTexture_t> <ancestor>; */ /* 0 1 */
	uint8 m_nColorSpace:1; /* 1: 0 1 */
	uint8 m_nBindSlot:7; /* 1: 1 1 */
	uint16 m_nDim:3; /* 2: 0 2 */
	uint16 m_nVarIdx:13; /* 2: 3 2 */
	uint32 m_nTextureResScale; /* 4 4 */
};

// <0023B689> materialsystem2/material_command_buffer.h:254
// member variables: 7
// struct size: 8
struct MatOpRegisterTextureUseInDescriptorSet_t : public MatOpHelper_t<7, MatOpRegisterTextureUseInDescriptorSet_t> {
public:
	/* struct MatOpHelper_t<7, MatOpRegisterTextureUseInDescriptorSet_t> <ancestor>; */ /* 0 1 */
	uint32 m_nTextureResScale; /* 1 4 */
	uint8 m_nColorSpace:1; /* 5: 0 1 */
	uint8 m_nBindSlot:7; /* 5: 1 1 */
	uint16 m_nDim:3; /* 6: 0 2 */
	uint16 m_nVarIdx:12; /* 6: 3 2 */
	uint16 m_bBindToDescriptorSet:1; /* 6:15 2 */
} __attribute__((__packed__));

// <002FC7D6> materialsystem2/material_command_buffer.h:265
void MatOpBindTextureBuffer_t::MatOpBindTextureBuffer_t()
{
} /* size: 0 */

// <002FC7B9> materialsystem2/material_command_buffer.h:265
inline void MatOpBindTextureBuffer_t::MatOpBindTextureBuffer_t()
{
} /* size: 0 */

// <0023B75F> materialsystem2/material_command_buffer.h:265
// member variables: 3
// struct size: 4
struct MatOpBindTextureBuffer_t : public MatOpHelper_t<8, MatOpBindTextureBuffer_t> {
public:
	/* struct MatOpHelper_t<8, MatOpBindTextureBuffer_t> <ancestor>; */ /* 0 1 */
	uint8 m_nBindSlot; /* 1 1 */
	uint16 m_nVarIdx; /* 2 2 */
};

// <002FC52F> materialsystem2/material_command_buffer.h:271
void MatOpBindUAVTex_t::MatOpBindUAVTex_t()
{
} /* size: 0 */

// <002FC512> materialsystem2/material_command_buffer.h:271
inline void MatOpBindUAVTex_t::MatOpBindUAVTex_t()
{
} /* size: 0 */

// <0023B7E7> materialsystem2/material_command_buffer.h:271
// member variables: 4
// struct size: 4
struct MatOpBindUAVTex_t : public MatOpHelper_t<9, MatOpBindUAVTex_t> {
public:
	/* struct MatOpHelper_t<9, MatOpBindUAVTex_t> <ancestor>; */ /* 0 1 */
	uint8 m_nBindSlot; /* 1 1 */
	uint16 m_nDim:3; /* 2: 0 2 */
	uint16 m_nVarIdx:13; /* 2: 3 2 */
};

// <002FC4F0> materialsystem2/material_command_buffer.h:278
void MatOpBindUAVBuffer_t::MatOpBindUAVBuffer_t()
{
} /* size: 0 */

// <002FC4D3> materialsystem2/material_command_buffer.h:278
inline void MatOpBindUAVBuffer_t::MatOpBindUAVBuffer_t()
{
} /* size: 0 */

// <0023B885> materialsystem2/material_command_buffer.h:278
// member variables: 3
// struct size: 4
struct MatOpBindUAVBuffer_t : public MatOpHelper_t<10, MatOpBindUAVBuffer_t> {
public:
	/* struct MatOpHelper_t<10, MatOpBindUAVBuffer_t> <ancestor>; */ /* 0 1 */
	uint8 m_nBindSlot; /* 1 1 */
	uint16 m_nVarIdx:13; /* 2: 0 2 */
};

// <001725FE> materialsystem2/material_command_buffer.h:284
void MatOpBindRasterizerState_t::MatOpBindRasterizerState_t()
{
} /* size: 0 */

// <001725E1> materialsystem2/material_command_buffer.h:284
inline void MatOpBindRasterizerState_t::MatOpBindRasterizerState_t()
{
} /* size: 0 */

// <00146FA3> materialsystem2/material_command_buffer.h:284
// member function: 1
// member variables: 2
// struct size: 9
struct MatOpBindRasterizerState_t : public MatOpHelper_t<11, MatOpBindRasterizerState_t> {
public:
	/* struct MatOpHelper_t<11, MatOpBindRasterizerState_t> <ancestor>; */ /* 0 1 */
	RsRasterizerStateHandle_t m_hRs; /* 1 8 */
	void MatOpBindRasterizerState_t(MatOpBindRasterizerState_t* );
} __attribute__((__packed__));

// <001725BF> materialsystem2/material_command_buffer.h:289
void MatOpBindDepthStencilState_t::MatOpBindDepthStencilState_t()
{
} /* size: 0 */

// <001725A2> materialsystem2/material_command_buffer.h:289
inline void MatOpBindDepthStencilState_t::MatOpBindDepthStencilState_t()
{
} /* size: 0 */

// <00147037> materialsystem2/material_command_buffer.h:289
// member function: 1
// member variables: 2
// struct size: 9
struct MatOpBindDepthStencilState_t : public MatOpHelper_t<12, MatOpBindDepthStencilState_t> {
public:
	/* struct MatOpHelper_t<12, MatOpBindDepthStencilState_t> <ancestor>; */ /* 0 1 */
	RsDepthStencilStateHandle_t m_hDs; /* 1 8 */
	void MatOpBindDepthStencilState_t(MatOpBindDepthStencilState_t* );
} __attribute__((__packed__));

// <00172580> materialsystem2/material_command_buffer.h:294
void MatOpBindBlendState_t::MatOpBindBlendState_t()
{
} /* size: 0 */

// <00172563> materialsystem2/material_command_buffer.h:294
inline void MatOpBindBlendState_t::MatOpBindBlendState_t()
{
} /* size: 0 */

// <001470CB> materialsystem2/material_command_buffer.h:294
// member function: 1
// member variables: 2
// struct size: 9
struct MatOpBindBlendState_t : public MatOpHelper_t<13, MatOpBindBlendState_t> {
public:
	/* struct MatOpHelper_t<13, MatOpBindBlendState_t> <ancestor>; */ /* 0 1 */
	RsBlendStateHandle_t m_hBs; /* 1 8 */
	void MatOpBindBlendState_t(MatOpBindBlendState_t* );
} __attribute__((__packed__));

// <001726BB> materialsystem2/material_command_buffer.h:299
void MatOpSetRasterizerStateDesc_t::MatOpSetRasterizerStateDesc_t()
{
} /* size: 0 */

// <0017269E> materialsystem2/material_command_buffer.h:299
inline void MatOpSetRasterizerStateDesc_t::MatOpSetRasterizerStateDesc_t()
{
} /* size: 0 */

// <0014715F> materialsystem2/material_command_buffer.h:299
// member function: 1
// member variables: 2
// struct size: 17
struct MatOpSetRasterizerStateDesc_t : public MatOpHelper_t<14, MatOpSetRasterizerStateDesc_t> {
public:
	/* struct MatOpHelper_t<14, MatOpSetRasterizerStateDesc_t> <ancestor>; */ /* 0 1 */
	RsRasterizerStateDesc_t m_rsDesc; /* 1 16 */
	void MatOpSetRasterizerStateDesc_t(MatOpSetRasterizerStateDesc_t* );
} __attribute__((__packed__));

// <0017267C> materialsystem2/material_command_buffer.h:310
void MatOpSetDepthStencilStateDesc_t::MatOpSetDepthStencilStateDesc_t()
{
} /* size: 0 */

// <0017265F> materialsystem2/material_command_buffer.h:310
inline void MatOpSetDepthStencilStateDesc_t::MatOpSetDepthStencilStateDesc_t()
{
} /* size: 0 */

// <001471F3> materialsystem2/material_command_buffer.h:310
// member function: 1
// member variables: 2
// struct size: 9
struct MatOpSetDepthStencilStateDesc_t : public MatOpHelper_t<15, MatOpSetDepthStencilStateDesc_t> {
public:
	/* struct MatOpHelper_t<15, MatOpSetDepthStencilStateDesc_t> <ancestor>; */ /* 0 1 */
	RsDepthStencilStateDesc_t m_dsDesc; /* 1 8 */
	void MatOpSetDepthStencilStateDesc_t(MatOpSetDepthStencilStateDesc_t* );
} __attribute__((__packed__));

// <0017263D> materialsystem2/material_command_buffer.h:315
void MatOpSetBlendStateDesc_t::MatOpSetBlendStateDesc_t()
{
} /* size: 0 */

// <00172620> materialsystem2/material_command_buffer.h:315
inline void MatOpSetBlendStateDesc_t::MatOpSetBlendStateDesc_t()
{
} /* size: 0 */

// <00147287> materialsystem2/material_command_buffer.h:315
// member function: 1
// member variables: 2
// struct size: 33
struct MatOpSetBlendStateDesc_t : public MatOpHelper_t<16, MatOpSetBlendStateDesc_t> {
public:
	/* struct MatOpHelper_t<16, MatOpSetBlendStateDesc_t> <ancestor>; */ /* 0 1 */
	RsBlendStateDesc_t m_bsDesc; /* 1 32 */
	void MatOpSetBlendStateDesc_t(MatOpSetBlendStateDesc_t* );
} __attribute__((__packed__));

// <00172541> materialsystem2/material_command_buffer.h:320
void MatOpSetUsedSamplers_t::MatOpSetUsedSamplers_t()
{
} /* size: 0 */

// <00172524> materialsystem2/material_command_buffer.h:320
inline void MatOpSetUsedSamplers_t::MatOpSetUsedSamplers_t()
{
} /* size: 0 */

// <0014731B> materialsystem2/material_command_buffer.h:320
// member function: 1
// member variables: 3
// struct size: 6
struct MatOpSetUsedSamplers_t : public MatOpHelper_t<17, MatOpSetUsedSamplers_t> {
public:
	/* struct MatOpHelper_t<17, MatOpSetUsedSamplers_t> <ancestor>; */ /* 0 1 */
	uint8 m_nMaxSamplerUsed; /* 1 1 */
	uint32 m_nUsedSamplersBitField; /* 2 4 */
	void MatOpSetUsedSamplers_t(MatOpSetUsedSamplers_t* );
} __attribute__((__packed__));

// <001724C3> materialsystem2/material_command_buffer.h:326
void MatOpSetSamplerDesc_t::MatOpSetSamplerDesc_t()
{
} /* size: 0 */

// <001724A6> materialsystem2/material_command_buffer.h:326
inline void MatOpSetSamplerDesc_t::MatOpSetSamplerDesc_t()
{
} /* size: 0 */

// <001473BF> materialsystem2/material_command_buffer.h:326
// member function: 1
// member variables: 3
// struct size: 22
struct MatOpSetSamplerDesc_t : public MatOpHelper_t<18, MatOpSetSamplerDesc_t> {
public:
	/* struct MatOpHelper_t<18, MatOpSetSamplerDesc_t> <ancestor>; */ /* 0 1 */
	uint8 m_nIdx; /* 1 1 */
	CSamplerStateDescBase m_samplerDesc; /* 2 20 */
	void MatOpSetSamplerDesc_t(MatOpSetSamplerDesc_t* );
} __attribute__((__packed__));

// <0027D0E1> materialsystem2/material_command_buffer.h:332
void MatOpSetCommonSamplerDesc0_t::MatOpSetCommonSamplerDesc0_t()
{
} /* size: 0 */

// <0027D0C4> materialsystem2/material_command_buffer.h:332
inline void MatOpSetCommonSamplerDesc0_t::MatOpSetCommonSamplerDesc0_t()
{
} /* size: 0 */

// <00147463> materialsystem2/material_command_buffer.h:332
// member function: 1
// member variables: 2
// struct size: 2
struct MatOpSetCommonSamplerDesc0_t : public MatOpHelper_t<19, MatOpSetCommonSamplerDesc0_t> {
public:
	/* struct MatOpHelper_t<19, MatOpSetCommonSamplerDesc0_t> <ancestor>; */ /* 0 1 */
	uint8 m_nIdx; /* 1 1 */
	void MatOpSetCommonSamplerDesc0_t(MatOpSetCommonSamplerDesc0_t* );
};

// <0027D0AD> materialsystem2/material_command_buffer.h:337
void MatOpSetCommonSamplerDesc1_t::MatOpSetCommonSamplerDesc1_t()
{
} /* size: 0 */

// <0027D090> materialsystem2/material_command_buffer.h:337
inline void MatOpSetCommonSamplerDesc1_t::MatOpSetCommonSamplerDesc1_t()
{
} /* size: 0 */

// <0023BD89> materialsystem2/material_command_buffer.h:337
// member function: 1
// member variables: 2
// struct size: 2
struct MatOpSetCommonSamplerDesc1_t : public MatOpHelper_t<20, MatOpSetCommonSamplerDesc1_t> {
public:
	/* struct MatOpHelper_t<20, MatOpSetCommonSamplerDesc1_t> <ancestor>; */ /* 0 1 */
	uint8 m_nIdx; /* 1 1 */
	void MatOpSetCommonSamplerDesc1_t(MatOpSetCommonSamplerDesc1_t* );
};

// <0027D06E> materialsystem2/material_command_buffer.h:342
void MatOpSetCommonSamplerDesc2_t::MatOpSetCommonSamplerDesc2_t()
{
} /* size: 0 */

// <0027D051> materialsystem2/material_command_buffer.h:342
inline void MatOpSetCommonSamplerDesc2_t::MatOpSetCommonSamplerDesc2_t()
{
} /* size: 0 */

// <0023BE18> materialsystem2/material_command_buffer.h:342
// member function: 1
// member variables: 2
// struct size: 2
struct MatOpSetCommonSamplerDesc2_t : public MatOpHelper_t<21, MatOpSetCommonSamplerDesc2_t> {
public:
	/* struct MatOpHelper_t<21, MatOpSetCommonSamplerDesc2_t> <ancestor>; */ /* 0 1 */
	uint8 m_nIdx; /* 1 1 */
	void MatOpSetCommonSamplerDesc2_t(MatOpSetCommonSamplerDesc2_t* );
};

// <0027D02F> materialsystem2/material_command_buffer.h:347
void MatOpSetCommonSamplerDesc3_t::MatOpSetCommonSamplerDesc3_t()
{
} /* size: 0 */

// <0027D012> materialsystem2/material_command_buffer.h:347
inline void MatOpSetCommonSamplerDesc3_t::MatOpSetCommonSamplerDesc3_t()
{
} /* size: 0 */

// <0023BEA7> materialsystem2/material_command_buffer.h:347
// member function: 1
// member variables: 2
// struct size: 2
struct MatOpSetCommonSamplerDesc3_t : public MatOpHelper_t<22, MatOpSetCommonSamplerDesc3_t> {
public:
	/* struct MatOpHelper_t<22, MatOpSetCommonSamplerDesc3_t> <ancestor>; */ /* 0 1 */
	uint8 m_nIdx; /* 1 1 */
	void MatOpSetCommonSamplerDesc3_t(MatOpSetCommonSamplerDesc3_t* );
};

// <0027CFF0> materialsystem2/material_command_buffer.h:352
void MatOpSetCommonSamplerDesc4_t::MatOpSetCommonSamplerDesc4_t()
{
} /* size: 0 */

// <0027CFD3> materialsystem2/material_command_buffer.h:352
inline void MatOpSetCommonSamplerDesc4_t::MatOpSetCommonSamplerDesc4_t()
{
} /* size: 0 */

// <0023BF36> materialsystem2/material_command_buffer.h:352
// member function: 1
// member variables: 2
// struct size: 2
struct MatOpSetCommonSamplerDesc4_t : public MatOpHelper_t<23, MatOpSetCommonSamplerDesc4_t> {
public:
	/* struct MatOpHelper_t<23, MatOpSetCommonSamplerDesc4_t> <ancestor>; */ /* 0 1 */
	uint8 m_nIdx; /* 1 1 */
	void MatOpSetCommonSamplerDesc4_t(MatOpSetCommonSamplerDesc4_t* );
};

// <0027CFB1> materialsystem2/material_command_buffer.h:357
void MatOpSetCommonSamplerDesc5_t::MatOpSetCommonSamplerDesc5_t()
{
} /* size: 0 */

// <0027CF94> materialsystem2/material_command_buffer.h:357
inline void MatOpSetCommonSamplerDesc5_t::MatOpSetCommonSamplerDesc5_t()
{
} /* size: 0 */

// <0023BFC5> materialsystem2/material_command_buffer.h:357
// member function: 1
// member variables: 2
// struct size: 2
struct MatOpSetCommonSamplerDesc5_t : public MatOpHelper_t<24, MatOpSetCommonSamplerDesc5_t> {
public:
	/* struct MatOpHelper_t<24, MatOpSetCommonSamplerDesc5_t> <ancestor>; */ /* 0 1 */
	uint8 m_nIdx; /* 1 1 */
	void MatOpSetCommonSamplerDesc5_t(MatOpSetCommonSamplerDesc5_t* );
};

// <0027CF72> materialsystem2/material_command_buffer.h:362
void MatOpSetCommonSamplerDesc6_t::MatOpSetCommonSamplerDesc6_t()
{
} /* size: 0 */

// <0027CF55> materialsystem2/material_command_buffer.h:362
inline void MatOpSetCommonSamplerDesc6_t::MatOpSetCommonSamplerDesc6_t()
{
} /* size: 0 */

// <0023C054> materialsystem2/material_command_buffer.h:362
// member function: 1
// member variables: 2
// struct size: 2
struct MatOpSetCommonSamplerDesc6_t : public MatOpHelper_t<25, MatOpSetCommonSamplerDesc6_t> {
public:
	/* struct MatOpHelper_t<25, MatOpSetCommonSamplerDesc6_t> <ancestor>; */ /* 0 1 */
	uint8 m_nIdx; /* 1 1 */
	void MatOpSetCommonSamplerDesc6_t(MatOpSetCommonSamplerDesc6_t* );
};

// <0027CF33> materialsystem2/material_command_buffer.h:367
void MatOpSetCommonSamplerDesc7_t::MatOpSetCommonSamplerDesc7_t()
{
} /* size: 0 */

// <0027CF16> materialsystem2/material_command_buffer.h:367
inline void MatOpSetCommonSamplerDesc7_t::MatOpSetCommonSamplerDesc7_t()
{
} /* size: 0 */

// <0023C0E3> materialsystem2/material_command_buffer.h:367
// member function: 1
// member variables: 2
// struct size: 2
struct MatOpSetCommonSamplerDesc7_t : public MatOpHelper_t<26, MatOpSetCommonSamplerDesc7_t> {
public:
	/* struct MatOpHelper_t<26, MatOpSetCommonSamplerDesc7_t> <ancestor>; */ /* 0 1 */
	uint8 m_nIdx; /* 1 1 */
	void MatOpSetCommonSamplerDesc7_t(MatOpSetCommonSamplerDesc7_t* );
};

// <0027CEF4> materialsystem2/material_command_buffer.h:372
void MatOpSetCommonSamplerDesc8_t::MatOpSetCommonSamplerDesc8_t()
{
} /* size: 0 */

// <0027CED7> materialsystem2/material_command_buffer.h:372
inline void MatOpSetCommonSamplerDesc8_t::MatOpSetCommonSamplerDesc8_t()
{
} /* size: 0 */

// <0023C172> materialsystem2/material_command_buffer.h:372
// member function: 1
// member variables: 2
// struct size: 2
struct MatOpSetCommonSamplerDesc8_t : public MatOpHelper_t<27, MatOpSetCommonSamplerDesc8_t> {
public:
	/* struct MatOpHelper_t<27, MatOpSetCommonSamplerDesc8_t> <ancestor>; */ /* 0 1 */
	uint8 m_nIdx; /* 1 1 */
	void MatOpSetCommonSamplerDesc8_t(MatOpSetCommonSamplerDesc8_t* );
};

// <0027CEB5> materialsystem2/material_command_buffer.h:377
void MatOpSetCommonSamplerDesc9_t::MatOpSetCommonSamplerDesc9_t()
{
} /* size: 0 */

// <0027CE98> materialsystem2/material_command_buffer.h:377
inline void MatOpSetCommonSamplerDesc9_t::MatOpSetCommonSamplerDesc9_t()
{
} /* size: 0 */

// <0023C201> materialsystem2/material_command_buffer.h:377
// member function: 1
// member variables: 2
// struct size: 2
struct MatOpSetCommonSamplerDesc9_t : public MatOpHelper_t<28, MatOpSetCommonSamplerDesc9_t> {
public:
	/* struct MatOpHelper_t<28, MatOpSetCommonSamplerDesc9_t> <ancestor>; */ /* 0 1 */
	uint8 m_nIdx; /* 1 1 */
	void MatOpSetCommonSamplerDesc9_t(MatOpSetCommonSamplerDesc9_t* );
};

// <0027CE76> materialsystem2/material_command_buffer.h:382
void MatOpSetCommonSamplerDesc10_t::MatOpSetCommonSamplerDesc10_t()
{
} /* size: 0 */

// <0027CE59> materialsystem2/material_command_buffer.h:382
inline void MatOpSetCommonSamplerDesc10_t::MatOpSetCommonSamplerDesc10_t()
{
} /* size: 0 */

// <0023C290> materialsystem2/material_command_buffer.h:382
// member function: 1
// member variables: 2
// struct size: 2
struct MatOpSetCommonSamplerDesc10_t : public MatOpHelper_t<29, MatOpSetCommonSamplerDesc10_t> {
public:
	/* struct MatOpHelper_t<29, MatOpSetCommonSamplerDesc10_t> <ancestor>; */ /* 0 1 */
	uint8 m_nIdx; /* 1 1 */
	void MatOpSetCommonSamplerDesc10_t(MatOpSetCommonSamplerDesc10_t* );
};

// <0027CE37> materialsystem2/material_command_buffer.h:387
void MatOpSetCommonSamplerDesc11_t::MatOpSetCommonSamplerDesc11_t()
{
} /* size: 0 */

// <0027CE1A> materialsystem2/material_command_buffer.h:387
inline void MatOpSetCommonSamplerDesc11_t::MatOpSetCommonSamplerDesc11_t()
{
} /* size: 0 */

// <0023C31F> materialsystem2/material_command_buffer.h:387
// member function: 1
// member variables: 2
// struct size: 2
struct MatOpSetCommonSamplerDesc11_t : public MatOpHelper_t<30, MatOpSetCommonSamplerDesc11_t> {
public:
	/* struct MatOpHelper_t<30, MatOpSetCommonSamplerDesc11_t> <ancestor>; */ /* 0 1 */
	uint8 m_nIdx; /* 1 1 */
	void MatOpSetCommonSamplerDesc11_t(MatOpSetCommonSamplerDesc11_t* );
};

// <0027CDF8> materialsystem2/material_command_buffer.h:392
void MatOpSetCommonSamplerDesc12_t::MatOpSetCommonSamplerDesc12_t()
{
} /* size: 0 */

// <0027CDDB> materialsystem2/material_command_buffer.h:392
inline void MatOpSetCommonSamplerDesc12_t::MatOpSetCommonSamplerDesc12_t()
{
} /* size: 0 */

// <0023C3AE> materialsystem2/material_command_buffer.h:392
// member function: 1
// member variables: 2
// struct size: 2
struct MatOpSetCommonSamplerDesc12_t : public MatOpHelper_t<31, MatOpSetCommonSamplerDesc12_t> {
public:
	/* struct MatOpHelper_t<31, MatOpSetCommonSamplerDesc12_t> <ancestor>; */ /* 0 1 */
	uint8 m_nIdx; /* 1 1 */
	void MatOpSetCommonSamplerDesc12_t(MatOpSetCommonSamplerDesc12_t* );
};

// <00172349> materialsystem2/material_command_buffer.h:402
void MatOpFlushRenderState_t::MatOpFlushRenderState_t()
{
} /* size: 0 */

// <0017232C> materialsystem2/material_command_buffer.h:402
inline void MatOpFlushRenderState_t::MatOpFlushRenderState_t()
{
} /* size: 0 */

// <001474F7> materialsystem2/material_command_buffer.h:402
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpFlushRenderState_t : public MatOpHelper_t<34, MatOpFlushRenderState_t> {
public:
	/* struct MatOpHelper_t<34, MatOpFlushRenderState_t> <ancestor>; */ /* 0 1 */
	void MatOpFlushRenderState_t(MatOpFlushRenderState_t* );
};

// <00172388> materialsystem2/material_command_buffer.h:406
void MatOpFlush_t::MatOpFlush_t()
{
} /* size: 0 */

// <0017236B> materialsystem2/material_command_buffer.h:406
inline void MatOpFlush_t::MatOpFlush_t()
{
} /* size: 0 */

// <0014757B> materialsystem2/material_command_buffer.h:406
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpFlush_t : public MatOpHelper_t<33, MatOpFlush_t> {
public:
	/* struct MatOpHelper_t<33, MatOpFlush_t> <ancestor>; */ /* 0 1 */
	void MatOpFlush_t(MatOpFlush_t* );
};

// <001475FF> materialsystem2/material_command_buffer.h:410
// member function: 1
// member variables: 5
// struct size: 8
struct MatOpFillDynamicMaterialCB_t : public MatOpHelper_t<35, MatOpFillDynamicMaterialCB_t> {
public:
	/* struct MatOpHelper_t<35, MatOpFillDynamicMaterialCB_t> <ancestor>; */ /* 0 1 */
	uint32 m_nDynamicComboIdx; /* 1 4 */
	uint8 m_nUseDescriptor; /* 5 1 */
	uint8 m_nBufferSlot; /* 6 1 */
	uint8 m_nStartRegister; /* 7 1 */
	void MatOpFillDynamicMaterialCB_t(MatOpFillDynamicMaterialCB_t* );
} __attribute__((__packed__));

// <002FBF8F> materialsystem2/material_command_buffer.h:421
void MatOpLoadFloatLiteral_t::MatOpLoadFloatLiteral_t()
{
} /* size: 0 */

// <002FBF72> materialsystem2/material_command_buffer.h:421
inline void MatOpLoadFloatLiteral_t::MatOpLoadFloatLiteral_t()
{
} /* size: 0 */

// <0023C4E0> materialsystem2/material_command_buffer.h:421
// member variables: 2
// struct size: 5
struct MatOpLoadFloatLiteral_t : public MatOpHelper_t<36, MatOpLoadFloatLiteral_t> {
public:
	/* struct MatOpHelper_t<36, MatOpLoadFloatLiteral_t> <ancestor>; */ /* 0 1 */
	float m_flValue; /* 1 4 */
} __attribute__((__packed__));

// <002FC0CA> materialsystem2/material_command_buffer.h:426
void MatOpLoadIntLiteral_t::MatOpLoadIntLiteral_t()
{
} /* size: 0 */

// <002FC0AD> materialsystem2/material_command_buffer.h:426
inline void MatOpLoadIntLiteral_t::MatOpLoadIntLiteral_t()
{
} /* size: 0 */

// <0023C558> materialsystem2/material_command_buffer.h:426
// member variables: 2
// struct size: 5
struct MatOpLoadIntLiteral_t : public MatOpHelper_t<37, MatOpLoadIntLiteral_t> {
public:
	/* struct MatOpHelper_t<37, MatOpLoadIntLiteral_t> <ancestor>; */ /* 0 1 */
	int32 m_nValue; /* 1 4 */
} __attribute__((__packed__));

// <002FC04C> materialsystem2/material_command_buffer.h:431
void MatOpLoadVec4Literal_t::MatOpLoadVec4Literal_t()
{
} /* size: 0 */

// <002FC02F> materialsystem2/material_command_buffer.h:431
inline void MatOpLoadVec4Literal_t::MatOpLoadVec4Literal_t()
{
} /* size: 0 */

// <0023C5D0> materialsystem2/material_command_buffer.h:431
// member variables: 2
// struct size: 17
struct MatOpLoadVec4Literal_t : public MatOpHelper_t<38, MatOpLoadVec4Literal_t> {
public:
	/* struct MatOpHelper_t<38, MatOpLoadVec4Literal_t> <ancestor>; */ /* 0 1 */
	float m_flValue[4]; /* 1 16 */
} __attribute__((__packed__));

// <00172406> materialsystem2/material_command_buffer.h:436
void MatOpLoadCBLiteral_t::MatOpLoadCBLiteral_t()
{
} /* size: 0 */

// <001723E9> materialsystem2/material_command_buffer.h:436
inline void MatOpLoadCBLiteral_t::MatOpLoadCBLiteral_t()
{
} /* size: 0 */

// <001476C3> materialsystem2/material_command_buffer.h:436
// member function: 1
// member variables: 4
// struct size: 11
struct MatOpLoadCBLiteral_t : public MatOpHelper_t<39, MatOpLoadCBLiteral_t> {
public:
	/* struct MatOpHelper_t<39, MatOpLoadCBLiteral_t> <ancestor>; */ /* 0 1 */
	ConstantBufferHandle_t m_hCB; /* 1 8 */
	uint8 m_nBufferSlot; /* 9 1 */
	uint8 m_nStartRegister; /* 10 1 */
	void MatOpLoadCBLiteral_t(MatOpLoadCBLiteral_t* );
} __attribute__((__packed__));

// <001723C7> materialsystem2/material_command_buffer.h:443
void MatOpSetGlobalsBDA_t::MatOpSetGlobalsBDA_t()
{
} /* size: 0 */

// <001723AA> materialsystem2/material_command_buffer.h:443
inline void MatOpSetGlobalsBDA_t::MatOpSetGlobalsBDA_t()
{
} /* size: 0 */

// <00147777> materialsystem2/material_command_buffer.h:443
// member function: 1
// member variables: 2
// struct size: 9
struct MatOpSetGlobalsBDA_t : public MatOpHelper_t<40, MatOpSetGlobalsBDA_t> {
public:
	/* struct MatOpHelper_t<40, MatOpSetGlobalsBDA_t> <ancestor>; */ /* 0 1 */
	uint64 m_nBufferDeviceAddress; /* 1 8 */
	void MatOpSetGlobalsBDA_t(MatOpSetGlobalsBDA_t* );
} __attribute__((__packed__));

// <00172445> materialsystem2/material_command_buffer.h:448
void MatOpFillDynamicGlobalsBDA_t::MatOpFillDynamicGlobalsBDA_t()
{
} /* size: 0 */

// <00172428> materialsystem2/material_command_buffer.h:448
inline void MatOpFillDynamicGlobalsBDA_t::MatOpFillDynamicGlobalsBDA_t()
{
} /* size: 0 */

// <0014780B> materialsystem2/material_command_buffer.h:448
// member function: 1
// member variables: 2
// struct size: 5
struct MatOpFillDynamicGlobalsBDA_t : public MatOpHelper_t<41, MatOpFillDynamicGlobalsBDA_t> {
public:
	/* struct MatOpHelper_t<41, MatOpFillDynamicGlobalsBDA_t> <ancestor>; */ /* 0 1 */
	uint32 m_nDynamicComboIdx; /* 1 4 */
	void MatOpFillDynamicGlobalsBDA_t(MatOpFillDynamicGlobalsBDA_t* );
} __attribute__((__packed__));

// <002FB27A> materialsystem2/material_command_buffer.h:453
void MatOpLoadSamplerFromAttr_t::MatOpLoadSamplerFromAttr_t()
{
} /* size: 0 */

// <002FB25D> materialsystem2/material_command_buffer.h:453
inline void MatOpLoadSamplerFromAttr_t::MatOpLoadSamplerFromAttr_t()
{
} /* size: 0 */

// <0023C7D0> materialsystem2/material_command_buffer.h:453
// member variables: 3
// struct size: 9
struct MatOpLoadSamplerFromAttr_t : public MatOpHelper_t<42, MatOpLoadSamplerFromAttr_t> {
public:
	/* struct MatOpHelper_t<42, MatOpLoadSamplerFromAttr_t> <ancestor>; */ /* 0 1 */
	CUtlStringToken m_attrNameHash; /* 1 4 */
	int m_SamplerSlot; /* 5 4 */
} __attribute__((__packed__));

// <002FC90B> materialsystem2/material_command_buffer.h:459
void MatOpLoadTexFromAttr_t::MatOpLoadTexFromAttr_t()
{
} /* size: 0 */

// <002FC8EE> materialsystem2/material_command_buffer.h:459
inline void MatOpLoadTexFromAttr_t::MatOpLoadTexFromAttr_t()
{
} /* size: 0 */

// <0023C858> materialsystem2/material_command_buffer.h:459
// member variables: 3
// struct size: 7
struct MatOpLoadTexFromAttr_t : public MatOpHelper_t<43, MatOpLoadTexFromAttr_t> {
public:
	/* struct MatOpHelper_t<43, MatOpLoadTexFromAttr_t> <ancestor>; */ /* 0 1 */
	uint16 m_nShaderVarIdx; /* 1 2 */
	CUtlStringToken m_attrNameHash; /* 3 4 */
} __attribute__((__packed__));

// <002FADDB> materialsystem2/material_command_buffer.h:465
void MatOpLoadCBFromAttr_t::MatOpLoadCBFromAttr_t()
{
} /* size: 0 */

// <002FADBE> materialsystem2/material_command_buffer.h:465
inline void MatOpLoadCBFromAttr_t::MatOpLoadCBFromAttr_t()
{
} /* size: 0 */

// <0023C8E0> materialsystem2/material_command_buffer.h:465
// member variables: 4
// struct size: 7
struct MatOpLoadCBFromAttr_t : public MatOpHelper_t<44, MatOpLoadCBFromAttr_t> {
public:
	/* struct MatOpHelper_t<44, MatOpLoadCBFromAttr_t> <ancestor>; */ /* 0 1 */
	CUtlStringToken m_attrNameHash; /* 1 4 */
	uint8 m_nBufferSlot; /* 5 1 */
	uint8 m_nStartRegister; /* 6 1 */
} __attribute__((__packed__));

// <002FC8CC> materialsystem2/material_command_buffer.h:472
void MatOpLoadBufferFromAttr_t::MatOpLoadBufferFromAttr_t()
{
} /* size: 0 */

// <002FC8AF> materialsystem2/material_command_buffer.h:472
inline void MatOpLoadBufferFromAttr_t::MatOpLoadBufferFromAttr_t()
{
} /* size: 0 */

// <0023C978> materialsystem2/material_command_buffer.h:472
// member variables: 2
// struct size: 5
struct MatOpLoadBufferFromAttr_t : public MatOpHelper_t<45, MatOpLoadBufferFromAttr_t> {
public:
	/* struct MatOpHelper_t<45, MatOpLoadBufferFromAttr_t> <ancestor>; */ /* 0 1 */
	CUtlStringToken m_attrNameHash; /* 1 4 */
} __attribute__((__packed__));

// <002FC94A> materialsystem2/material_command_buffer.h:477
void MatOpLoadTexFromParam_t::MatOpLoadTexFromParam_t()
{
} /* size: 0 */

// <002FC92D> materialsystem2/material_command_buffer.h:477
inline void MatOpLoadTexFromParam_t::MatOpLoadTexFromParam_t()
{
} /* size: 0 */

// <0023C9F0> materialsystem2/material_command_buffer.h:477
// member variables: 2
// struct size: 3
struct MatOpLoadTexFromParam_t : public MatOpHelper_t<46, MatOpLoadTexFromParam_t> {
public:
	/* struct MatOpHelper_t<46, MatOpLoadTexFromParam_t> <ancestor>; */ /* 0 1 */
	uint16 m_nParamIdx; /* 1 2 */
} __attribute__((__packed__));

// <002FC989> materialsystem2/material_command_buffer.h:482
void MatOpLoadTexFromDynParam_t::MatOpLoadTexFromDynParam_t()
{
} /* size: 0 */

// <002FC96C> materialsystem2/material_command_buffer.h:482
inline void MatOpLoadTexFromDynParam_t::MatOpLoadTexFromDynParam_t()
{
} /* size: 0 */

// <0023CA68> materialsystem2/material_command_buffer.h:482
// member variables: 2
// struct size: 3
struct MatOpLoadTexFromDynParam_t : public MatOpHelper_t<47, MatOpLoadTexFromDynParam_t> {
public:
	/* struct MatOpHelper_t<47, MatOpLoadTexFromDynParam_t> <ancestor>; */ /* 0 1 */
	uint16 m_nParamIdx; /* 1 2 */
} __attribute__((__packed__));

// <002FC88D> materialsystem2/material_command_buffer.h:487
void MatOpLoadTexFromVfxExpr_t::MatOpLoadTexFromVfxExpr_t()
{
} /* size: 0 */

// <002FC870> materialsystem2/material_command_buffer.h:487
inline void MatOpLoadTexFromVfxExpr_t::MatOpLoadTexFromVfxExpr_t()
{
} /* size: 0 */

// <0023CAE0> materialsystem2/material_command_buffer.h:487
// member variables: 4
// struct size: 12
struct MatOpLoadTexFromVfxExpr_t : public MatOpHelper_t<48, MatOpLoadTexFromVfxExpr_t> {
public:
	/* struct MatOpHelper_t<48, MatOpLoadTexFromVfxExpr_t> <ancestor>; */ /* 0 1 */
	uint8 m_nBufSize; /* 1 1 */
	uint16 m_nShaderVarIdx; /* 2 2 */
	const byte * m_pExpr; /* 4 8 */
} __attribute__((__packed__));

// <002FC317> materialsystem2/material_command_buffer.h:494
void MatOpLoadVec4FromVfxExpr_t::MatOpLoadVec4FromVfxExpr_t()
{
} /* size: 0 */

// <002FC2FA> materialsystem2/material_command_buffer.h:494
inline void MatOpLoadVec4FromVfxExpr_t::MatOpLoadVec4FromVfxExpr_t()
{
} /* size: 0 */

// <0023CB78> materialsystem2/material_command_buffer.h:494
// member variables: 5
// struct size: 16
struct MatOpLoadVec4FromVfxExpr_t : public MatOpHelper_t<49, MatOpLoadVec4FromVfxExpr_t> {
public:
	/* struct MatOpHelper_t<49, MatOpLoadVec4FromVfxExpr_t> <ancestor>; */ /* 0 1 */
	uint8 m_nBufSize; /* 1 1 */
	uint16 m_nShaderVarIdx; /* 2 2 */
	uint32 m_nStateAffected; /* 4 4 */
	const byte * m_pExpr; /* 8 8 */
};

// <002FC2D8> materialsystem2/material_command_buffer.h:502
void MatOpClampFloat_t::MatOpClampFloat_t()
{
} /* size: 0 */

// <002FC2BB> materialsystem2/material_command_buffer.h:502
inline void MatOpClampFloat_t::MatOpClampFloat_t()
{
} /* size: 0 */

// <0023CC20> materialsystem2/material_command_buffer.h:502
// member variables: 3
// struct size: 9
struct MatOpClampFloat_t : public MatOpHelper_t<50, MatOpClampFloat_t> {
public:
	/* struct MatOpHelper_t<50, MatOpClampFloat_t> <ancestor>; */ /* 0 1 */
	float32 m_flMin; /* 1 4 */
	float32 m_flMax; /* 5 4 */
} __attribute__((__packed__));

// <002FC25A> materialsystem2/material_command_buffer.h:508
void MatOpClampInt_t::MatOpClampInt_t()
{
} /* size: 0 */

// <002FC23D> materialsystem2/material_command_buffer.h:508
inline void MatOpClampInt_t::MatOpClampInt_t()
{
} /* size: 0 */

// <0023CCA8> materialsystem2/material_command_buffer.h:508
// member variables: 3
// struct size: 9
struct MatOpClampInt_t : public MatOpHelper_t<51, MatOpClampInt_t> {
public:
	/* struct MatOpHelper_t<51, MatOpClampInt_t> <ancestor>; */ /* 0 1 */
	int32 m_nMin; /* 1 4 */
	int32 m_nMax; /* 5 4 */
} __attribute__((__packed__));

// <002FC299> materialsystem2/material_command_buffer.h:514
void MatOpClampShort_t::MatOpClampShort_t()
{
} /* size: 0 */

// <002FC27C> materialsystem2/material_command_buffer.h:514
inline void MatOpClampShort_t::MatOpClampShort_t()
{
} /* size: 0 */

// <0023CD30> materialsystem2/material_command_buffer.h:514
// member variables: 3
// struct size: 5
struct MatOpClampShort_t : public MatOpHelper_t<52, MatOpClampShort_t> {
public:
	/* struct MatOpHelper_t<52, MatOpClampShort_t> <ancestor>; */ /* 0 1 */
	int16 m_nMin; /* 1 2 */
	int16 m_nMax; /* 3 2 */
} __attribute__((__packed__));

// <002FC21B> materialsystem2/material_command_buffer.h:520
void MatOpClampVec4_t::MatOpClampVec4_t()
{
} /* size: 0 */

// <002FC1FE> materialsystem2/material_command_buffer.h:520
inline void MatOpClampVec4_t::MatOpClampVec4_t()
{
} /* size: 0 */

// <0023CDB8> materialsystem2/material_command_buffer.h:520
// member variables: 3
// struct size: 33
struct MatOpClampVec4_t : public MatOpHelper_t<53, MatOpClampVec4_t> {
public:
	/* struct MatOpHelper_t<53, MatOpClampVec4_t> <ancestor>; */ /* 0 1 */
	float32 m_flMin[4]; /* 1 16 */
	float32 m_flMax[4]; /* 17 16 */
} __attribute__((__packed__));

// <002FBED2> materialsystem2/material_command_buffer.h:526
void MatOpStoreRsFillMode_t::MatOpStoreRsFillMode_t()
{
} /* size: 0 */

// <002FBEB5> materialsystem2/material_command_buffer.h:526
inline void MatOpStoreRsFillMode_t::MatOpStoreRsFillMode_t()
{
} /* size: 0 */

// <002E70AC> materialsystem2/material_command_buffer.h:526
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpStoreRsFillMode_t : public MatOpHelper_t<54, MatOpStoreRsFillMode_t> {
public:
	/* struct MatOpHelper_t<54, MatOpStoreRsFillMode_t> <ancestor>; */ /* 0 1 */
	void MatOpStoreRsFillMode_t(MatOpStoreRsFillMode_t* );
};

// <002FBE93> materialsystem2/material_command_buffer.h:527
void MatOpStoreRsCullMode_t::MatOpStoreRsCullMode_t()
{
} /* size: 0 */

// <002FBE76> materialsystem2/material_command_buffer.h:527
inline void MatOpStoreRsCullMode_t::MatOpStoreRsCullMode_t()
{
} /* size: 0 */

// <002E7130> materialsystem2/material_command_buffer.h:527
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpStoreRsCullMode_t : public MatOpHelper_t<55, MatOpStoreRsCullMode_t> {
public:
	/* struct MatOpHelper_t<55, MatOpStoreRsCullMode_t> <ancestor>; */ /* 0 1 */
	void MatOpStoreRsCullMode_t(MatOpStoreRsCullMode_t* );
};

// <002FBE54> materialsystem2/material_command_buffer.h:528
void MatOpStoreRsDepthBias_t::MatOpStoreRsDepthBias_t()
{
} /* size: 0 */

// <002FBE37> materialsystem2/material_command_buffer.h:528
inline void MatOpStoreRsDepthBias_t::MatOpStoreRsDepthBias_t()
{
} /* size: 0 */

// <002E71B4> materialsystem2/material_command_buffer.h:528
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpStoreRsDepthBias_t : public MatOpHelper_t<56, MatOpStoreRsDepthBias_t> {
public:
	/* struct MatOpHelper_t<56, MatOpStoreRsDepthBias_t> <ancestor>; */ /* 0 1 */
	void MatOpStoreRsDepthBias_t(MatOpStoreRsDepthBias_t* );
};

// <002FBE15> materialsystem2/material_command_buffer.h:529
void MatOpStoreRsSSDepthBias_t::MatOpStoreRsSSDepthBias_t()
{
} /* size: 0 */

// <002FBDF8> materialsystem2/material_command_buffer.h:529
inline void MatOpStoreRsSSDepthBias_t::MatOpStoreRsSSDepthBias_t()
{
} /* size: 0 */

// <002E7238> materialsystem2/material_command_buffer.h:529
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpStoreRsSSDepthBias_t : public MatOpHelper_t<57, MatOpStoreRsSSDepthBias_t> {
public:
	/* struct MatOpHelper_t<57, MatOpStoreRsSSDepthBias_t> <ancestor>; */ /* 0 1 */
	void MatOpStoreRsSSDepthBias_t(MatOpStoreRsSSDepthBias_t* );
};

// <002FBDD6> materialsystem2/material_command_buffer.h:530
void MatOpStoreRsDepthBiasClamp_t::MatOpStoreRsDepthBiasClamp_t()
{
} /* size: 0 */

// <002FBDB9> materialsystem2/material_command_buffer.h:530
inline void MatOpStoreRsDepthBiasClamp_t::MatOpStoreRsDepthBiasClamp_t()
{
} /* size: 0 */

// <002E72BC> materialsystem2/material_command_buffer.h:530
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpStoreRsDepthBiasClamp_t : public MatOpHelper_t<58, MatOpStoreRsDepthBiasClamp_t> {
public:
	/* struct MatOpHelper_t<58, MatOpStoreRsDepthBiasClamp_t> <ancestor>; */ /* 0 1 */
	void MatOpStoreRsDepthBiasClamp_t(MatOpStoreRsDepthBiasClamp_t* );
};

// <002FBD97> materialsystem2/material_command_buffer.h:531
void MatOpStoreRsDepthClipEnable_t::MatOpStoreRsDepthClipEnable_t()
{
} /* size: 0 */

// <002FBD7A> materialsystem2/material_command_buffer.h:531
inline void MatOpStoreRsDepthClipEnable_t::MatOpStoreRsDepthClipEnable_t()
{
} /* size: 0 */

// <002E7340> materialsystem2/material_command_buffer.h:531
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpStoreRsDepthClipEnable_t : public MatOpHelper_t<59, MatOpStoreRsDepthClipEnable_t> {
public:
	/* struct MatOpHelper_t<59, MatOpStoreRsDepthClipEnable_t> <ancestor>; */ /* 0 1 */
	void MatOpStoreRsDepthClipEnable_t(MatOpStoreRsDepthClipEnable_t* );
};

// <002FBD58> materialsystem2/material_command_buffer.h:532
void MatOpStoreRsMultiSampleEnable_t::MatOpStoreRsMultiSampleEnable_t()
{
} /* size: 0 */

// <002FBD3B> materialsystem2/material_command_buffer.h:532
inline void MatOpStoreRsMultiSampleEnable_t::MatOpStoreRsMultiSampleEnable_t()
{
} /* size: 0 */

// <002E73C4> materialsystem2/material_command_buffer.h:532
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpStoreRsMultiSampleEnable_t : public MatOpHelper_t<60, MatOpStoreRsMultiSampleEnable_t> {
public:
	/* struct MatOpHelper_t<60, MatOpStoreRsMultiSampleEnable_t> <ancestor>; */ /* 0 1 */
	void MatOpStoreRsMultiSampleEnable_t(MatOpStoreRsMultiSampleEnable_t* );
};

// <002FC00D> materialsystem2/material_command_buffer.h:533
void MatOpStoreRsSampleMask_t::MatOpStoreRsSampleMask_t()
{
} /* size: 0 */

// <002FBFF0> materialsystem2/material_command_buffer.h:533
inline void MatOpStoreRsSampleMask_t::MatOpStoreRsSampleMask_t()
{
} /* size: 0 */

// <002E7448> materialsystem2/material_command_buffer.h:533
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpStoreRsSampleMask_t : public MatOpHelper_t<61, MatOpStoreRsSampleMask_t> {
public:
	/* struct MatOpHelper_t<61, MatOpStoreRsSampleMask_t> <ancestor>; */ /* 0 1 */
	void MatOpStoreRsSampleMask_t(MatOpStoreRsSampleMask_t* );
};

// <002FBD19> materialsystem2/material_command_buffer.h:534
void MatOpStoreRsSrgbWriteEnable_t::MatOpStoreRsSrgbWriteEnable_t()
{
} /* size: 0 */

// <002FBCFC> materialsystem2/material_command_buffer.h:534
inline void MatOpStoreRsSrgbWriteEnable_t::MatOpStoreRsSrgbWriteEnable_t()
{
} /* size: 0 */

// <0023CE40> materialsystem2/material_command_buffer.h:534
// member variables: 2
// struct size: 2
struct MatOpStoreRsSrgbWriteEnable_t : public MatOpHelper_t<62, MatOpStoreRsSrgbWriteEnable_t> {
public:
	/* struct MatOpHelper_t<62, MatOpStoreRsSrgbWriteEnable_t> <ancestor>; */ /* 0 1 */
	uint8 m_nIdx; /* 1 1 */
};

// <002FBCBD> materialsystem2/material_command_buffer.h:535
inline void MatOpStoreRsDepthEnable_t::MatOpStoreRsDepthEnable_t()
{
} /* size: 0 */

// <002E7560> materialsystem2/material_command_buffer.h:535
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpStoreRsDepthEnable_t : public MatOpHelper_t<63, MatOpStoreRsDepthEnable_t> {
public:
	/* struct MatOpHelper_t<63, MatOpStoreRsDepthEnable_t> <ancestor>; */ /* 0 1 */
	void MatOpStoreRsDepthEnable_t(MatOpStoreRsDepthEnable_t* );
};

// <002FBC9B> materialsystem2/material_command_buffer.h:536
void MatOpStoreRsDepthWriteEnable_t::MatOpStoreRsDepthWriteEnable_t()
{
} /* size: 0 */

// <002FBC7E> materialsystem2/material_command_buffer.h:536
inline void MatOpStoreRsDepthWriteEnable_t::MatOpStoreRsDepthWriteEnable_t()
{
} /* size: 0 */

// <002E75E4> materialsystem2/material_command_buffer.h:536
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpStoreRsDepthWriteEnable_t : public MatOpHelper_t<64, MatOpStoreRsDepthWriteEnable_t> {
public:
	/* struct MatOpHelper_t<64, MatOpStoreRsDepthWriteEnable_t> <ancestor>; */ /* 0 1 */
	void MatOpStoreRsDepthWriteEnable_t(MatOpStoreRsDepthWriteEnable_t* );
};

// <002FBC5C> materialsystem2/material_command_buffer.h:537
void MatOpStoreRsDepthFunc_t::MatOpStoreRsDepthFunc_t()
{
} /* size: 0 */

// <002FBC3F> materialsystem2/material_command_buffer.h:537
inline void MatOpStoreRsDepthFunc_t::MatOpStoreRsDepthFunc_t()
{
} /* size: 0 */

// <002E7668> materialsystem2/material_command_buffer.h:537
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpStoreRsDepthFunc_t : public MatOpHelper_t<65, MatOpStoreRsDepthFunc_t> {
public:
	/* struct MatOpHelper_t<65, MatOpStoreRsDepthFunc_t> <ancestor>; */ /* 0 1 */
	void MatOpStoreRsDepthFunc_t(MatOpStoreRsDepthFunc_t* );
};

// <002FBC1D> materialsystem2/material_command_buffer.h:538
void MatOpStoreRsStencilEnable_t::MatOpStoreRsStencilEnable_t()
{
} /* size: 0 */

// <002FBC00> materialsystem2/material_command_buffer.h:538
inline void MatOpStoreRsStencilEnable_t::MatOpStoreRsStencilEnable_t()
{
} /* size: 0 */

// <002E76EC> materialsystem2/material_command_buffer.h:538
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpStoreRsStencilEnable_t : public MatOpHelper_t<66, MatOpStoreRsStencilEnable_t> {
public:
	/* struct MatOpHelper_t<66, MatOpStoreRsStencilEnable_t> <ancestor>; */ /* 0 1 */
	void MatOpStoreRsStencilEnable_t(MatOpStoreRsStencilEnable_t* );
};

// <002FBBDE> materialsystem2/material_command_buffer.h:539
void MatOpStoreRsStencilReadMask_t::MatOpStoreRsStencilReadMask_t()
{
} /* size: 0 */

// <002FBBC1> materialsystem2/material_command_buffer.h:539
inline void MatOpStoreRsStencilReadMask_t::MatOpStoreRsStencilReadMask_t()
{
} /* size: 0 */

// <002E7770> materialsystem2/material_command_buffer.h:539
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpStoreRsStencilReadMask_t : public MatOpHelper_t<67, MatOpStoreRsStencilReadMask_t> {
public:
	/* struct MatOpHelper_t<67, MatOpStoreRsStencilReadMask_t> <ancestor>; */ /* 0 1 */
	void MatOpStoreRsStencilReadMask_t(MatOpStoreRsStencilReadMask_t* );
};

// <002FBB9F> materialsystem2/material_command_buffer.h:540
void MatOpStoreRsStencilWriteMask_t::MatOpStoreRsStencilWriteMask_t()
{
} /* size: 0 */

// <002FBB82> materialsystem2/material_command_buffer.h:540
inline void MatOpStoreRsStencilWriteMask_t::MatOpStoreRsStencilWriteMask_t()
{
} /* size: 0 */

// <002E77F4> materialsystem2/material_command_buffer.h:540
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpStoreRsStencilWriteMask_t : public MatOpHelper_t<68, MatOpStoreRsStencilWriteMask_t> {
public:
	/* struct MatOpHelper_t<68, MatOpStoreRsStencilWriteMask_t> <ancestor>; */ /* 0 1 */
	void MatOpStoreRsStencilWriteMask_t(MatOpStoreRsStencilWriteMask_t* );
};

// <002FBB60> materialsystem2/material_command_buffer.h:541
void MatOpStoreRsStencilFailOp_t::MatOpStoreRsStencilFailOp_t()
{
} /* size: 0 */

// <002FBB43> materialsystem2/material_command_buffer.h:541
inline void MatOpStoreRsStencilFailOp_t::MatOpStoreRsStencilFailOp_t()
{
} /* size: 0 */

// <002E7878> materialsystem2/material_command_buffer.h:541
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpStoreRsStencilFailOp_t : public MatOpHelper_t<69, MatOpStoreRsStencilFailOp_t> {
public:
	/* struct MatOpHelper_t<69, MatOpStoreRsStencilFailOp_t> <ancestor>; */ /* 0 1 */
	void MatOpStoreRsStencilFailOp_t(MatOpStoreRsStencilFailOp_t* );
};

// <002FBB21> materialsystem2/material_command_buffer.h:542
void MatOpStoreRsStencilDepthFailOp_t::MatOpStoreRsStencilDepthFailOp_t()
{
} /* size: 0 */

// <002FBB04> materialsystem2/material_command_buffer.h:542
inline void MatOpStoreRsStencilDepthFailOp_t::MatOpStoreRsStencilDepthFailOp_t()
{
} /* size: 0 */

// <002E78FC> materialsystem2/material_command_buffer.h:542
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpStoreRsStencilDepthFailOp_t : public MatOpHelper_t<70, MatOpStoreRsStencilDepthFailOp_t> {
public:
	/* struct MatOpHelper_t<70, MatOpStoreRsStencilDepthFailOp_t> <ancestor>; */ /* 0 1 */
	void MatOpStoreRsStencilDepthFailOp_t(MatOpStoreRsStencilDepthFailOp_t* );
};

// <002FBAE2> materialsystem2/material_command_buffer.h:543
void MatOpStoreRsStencilPassOp_t::MatOpStoreRsStencilPassOp_t()
{
} /* size: 0 */

// <002FBAC5> materialsystem2/material_command_buffer.h:543
inline void MatOpStoreRsStencilPassOp_t::MatOpStoreRsStencilPassOp_t()
{
} /* size: 0 */

// <002E7980> materialsystem2/material_command_buffer.h:543
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpStoreRsStencilPassOp_t : public MatOpHelper_t<71, MatOpStoreRsStencilPassOp_t> {
public:
	/* struct MatOpHelper_t<71, MatOpStoreRsStencilPassOp_t> <ancestor>; */ /* 0 1 */
	void MatOpStoreRsStencilPassOp_t(MatOpStoreRsStencilPassOp_t* );
};

// <002FBAA3> materialsystem2/material_command_buffer.h:544
void MatOpStoreRsStencilFunc_t::MatOpStoreRsStencilFunc_t()
{
} /* size: 0 */

// <002FBA86> materialsystem2/material_command_buffer.h:544
inline void MatOpStoreRsStencilFunc_t::MatOpStoreRsStencilFunc_t()
{
} /* size: 0 */

// <002E7A04> materialsystem2/material_command_buffer.h:544
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpStoreRsStencilFunc_t : public MatOpHelper_t<72, MatOpStoreRsStencilFunc_t> {
public:
	/* struct MatOpHelper_t<72, MatOpStoreRsStencilFunc_t> <ancestor>; */ /* 0 1 */
	void MatOpStoreRsStencilFunc_t(MatOpStoreRsStencilFunc_t* );
};

// <002FBA64> materialsystem2/material_command_buffer.h:545
void MatOpStoreRsBackStencilFailOp_t::MatOpStoreRsBackStencilFailOp_t()
{
} /* size: 0 */

// <002FBA47> materialsystem2/material_command_buffer.h:545
inline void MatOpStoreRsBackStencilFailOp_t::MatOpStoreRsBackStencilFailOp_t()
{
} /* size: 0 */

// <002E7A88> materialsystem2/material_command_buffer.h:545
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpStoreRsBackStencilFailOp_t : public MatOpHelper_t<73, MatOpStoreRsBackStencilFailOp_t> {
public:
	/* struct MatOpHelper_t<73, MatOpStoreRsBackStencilFailOp_t> <ancestor>; */ /* 0 1 */
	void MatOpStoreRsBackStencilFailOp_t(MatOpStoreRsBackStencilFailOp_t* );
};

// <002FBA25> materialsystem2/material_command_buffer.h:546
void MatOpStoreRsBackStencilDepthFailOp_t::MatOpStoreRsBackStencilDepthFailOp_t()
{
} /* size: 0 */

// <002FBA08> materialsystem2/material_command_buffer.h:546
inline void MatOpStoreRsBackStencilDepthFailOp_t::MatOpStoreRsBackStencilDepthFailOp_t()
{
} /* size: 0 */

// <002E7B0C> materialsystem2/material_command_buffer.h:546
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpStoreRsBackStencilDepthFailOp_t : public MatOpHelper_t<74, MatOpStoreRsBackStencilDepthFailOp_t> {
public:
	/* struct MatOpHelper_t<74, MatOpStoreRsBackStencilDepthFailOp_t> <ancestor>; */ /* 0 1 */
	void MatOpStoreRsBackStencilDepthFailOp_t(MatOpStoreRsBackStencilDepthFailOp_t* );
};

// <002FB9E6> materialsystem2/material_command_buffer.h:547
void MatOpStoreRsBackStencilPassOp_t::MatOpStoreRsBackStencilPassOp_t()
{
} /* size: 0 */

// <002FB9C9> materialsystem2/material_command_buffer.h:547
inline void MatOpStoreRsBackStencilPassOp_t::MatOpStoreRsBackStencilPassOp_t()
{
} /* size: 0 */

// <002E7B90> materialsystem2/material_command_buffer.h:547
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpStoreRsBackStencilPassOp_t : public MatOpHelper_t<75, MatOpStoreRsBackStencilPassOp_t> {
public:
	/* struct MatOpHelper_t<75, MatOpStoreRsBackStencilPassOp_t> <ancestor>; */ /* 0 1 */
	void MatOpStoreRsBackStencilPassOp_t(MatOpStoreRsBackStencilPassOp_t* );
};

// <002FB9A7> materialsystem2/material_command_buffer.h:548
void MatOpStoreRsBackStencilFunc_t::MatOpStoreRsBackStencilFunc_t()
{
} /* size: 0 */

// <002FB98A> materialsystem2/material_command_buffer.h:548
inline void MatOpStoreRsBackStencilFunc_t::MatOpStoreRsBackStencilFunc_t()
{
} /* size: 0 */

// <002E7C14> materialsystem2/material_command_buffer.h:548
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpStoreRsBackStencilFunc_t : public MatOpHelper_t<76, MatOpStoreRsBackStencilFunc_t> {
public:
	/* struct MatOpHelper_t<76, MatOpStoreRsBackStencilFunc_t> <ancestor>; */ /* 0 1 */
	void MatOpStoreRsBackStencilFunc_t(MatOpStoreRsBackStencilFunc_t* );
};

// <002FC08B> materialsystem2/material_command_buffer.h:549
void MatOpStoreRsStencilRef_t::MatOpStoreRsStencilRef_t()
{
} /* size: 0 */

// <002FC06E> materialsystem2/material_command_buffer.h:549
inline void MatOpStoreRsStencilRef_t::MatOpStoreRsStencilRef_t()
{
} /* size: 0 */

// <002E7C98> materialsystem2/material_command_buffer.h:549
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpStoreRsStencilRef_t : public MatOpHelper_t<77, MatOpStoreRsStencilRef_t> {
public:
	/* struct MatOpHelper_t<77, MatOpStoreRsStencilRef_t> <ancestor>; */ /* 0 1 */
	void MatOpStoreRsStencilRef_t(MatOpStoreRsStencilRef_t* );
};

// <002FB968> materialsystem2/material_command_buffer.h:550
void MatOpStoreRsAlphaToCoverageEnable_t::MatOpStoreRsAlphaToCoverageEnable_t()
{
} /* size: 0 */

// <002FB94B> materialsystem2/material_command_buffer.h:550
inline void MatOpStoreRsAlphaToCoverageEnable_t::MatOpStoreRsAlphaToCoverageEnable_t()
{
} /* size: 0 */

// <002E7D1C> materialsystem2/material_command_buffer.h:550
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpStoreRsAlphaToCoverageEnable_t : public MatOpHelper_t<78, MatOpStoreRsAlphaToCoverageEnable_t> {
public:
	/* struct MatOpHelper_t<78, MatOpStoreRsAlphaToCoverageEnable_t> <ancestor>; */ /* 0 1 */
	void MatOpStoreRsAlphaToCoverageEnable_t(MatOpStoreRsAlphaToCoverageEnable_t* );
};

// <002FB929> materialsystem2/material_command_buffer.h:551
void MatOpStoreRsBlendEnable_t::MatOpStoreRsBlendEnable_t()
{
} /* size: 0 */

// <002FB90C> materialsystem2/material_command_buffer.h:551
inline void MatOpStoreRsBlendEnable_t::MatOpStoreRsBlendEnable_t()
{
} /* size: 0 */

// <002E7DA0> materialsystem2/material_command_buffer.h:551
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpStoreRsBlendEnable_t : public MatOpHelper_t<79, MatOpStoreRsBlendEnable_t> {
public:
	/* struct MatOpHelper_t<79, MatOpStoreRsBlendEnable_t> <ancestor>; */ /* 0 1 */
	void MatOpStoreRsBlendEnable_t(MatOpStoreRsBlendEnable_t* );
};

// <002FB8EA> materialsystem2/material_command_buffer.h:552
void MatOpStoreRsSrcBlend_t::MatOpStoreRsSrcBlend_t()
{
} /* size: 0 */

// <002FB8CD> materialsystem2/material_command_buffer.h:552
inline void MatOpStoreRsSrcBlend_t::MatOpStoreRsSrcBlend_t()
{
} /* size: 0 */

// <002E7E24> materialsystem2/material_command_buffer.h:552
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpStoreRsSrcBlend_t : public MatOpHelper_t<80, MatOpStoreRsSrcBlend_t> {
public:
	/* struct MatOpHelper_t<80, MatOpStoreRsSrcBlend_t> <ancestor>; */ /* 0 1 */
	void MatOpStoreRsSrcBlend_t(MatOpStoreRsSrcBlend_t* );
};

// <002FB8AB> materialsystem2/material_command_buffer.h:553
void MatOpStoreRsDestBlend_t::MatOpStoreRsDestBlend_t()
{
} /* size: 0 */

// <002FB88E> materialsystem2/material_command_buffer.h:553
inline void MatOpStoreRsDestBlend_t::MatOpStoreRsDestBlend_t()
{
} /* size: 0 */

// <002E7EA8> materialsystem2/material_command_buffer.h:553
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpStoreRsDestBlend_t : public MatOpHelper_t<81, MatOpStoreRsDestBlend_t> {
public:
	/* struct MatOpHelper_t<81, MatOpStoreRsDestBlend_t> <ancestor>; */ /* 0 1 */
	void MatOpStoreRsDestBlend_t(MatOpStoreRsDestBlend_t* );
};

// <002FB86C> materialsystem2/material_command_buffer.h:554
void MatOpStoreRsBlendOp_t::MatOpStoreRsBlendOp_t()
{
} /* size: 0 */

// <002FB84F> materialsystem2/material_command_buffer.h:554
inline void MatOpStoreRsBlendOp_t::MatOpStoreRsBlendOp_t()
{
} /* size: 0 */

// <002E7F2C> materialsystem2/material_command_buffer.h:554
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpStoreRsBlendOp_t : public MatOpHelper_t<82, MatOpStoreRsBlendOp_t> {
public:
	/* struct MatOpHelper_t<82, MatOpStoreRsBlendOp_t> <ancestor>; */ /* 0 1 */
	void MatOpStoreRsBlendOp_t(MatOpStoreRsBlendOp_t* );
};

// <002FB82D> materialsystem2/material_command_buffer.h:555
void MatOpStoreRsSrcBlendAlpha_t::MatOpStoreRsSrcBlendAlpha_t()
{
} /* size: 0 */

// <002FB810> materialsystem2/material_command_buffer.h:555
inline void MatOpStoreRsSrcBlendAlpha_t::MatOpStoreRsSrcBlendAlpha_t()
{
} /* size: 0 */

// <002E7FB0> materialsystem2/material_command_buffer.h:555
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpStoreRsSrcBlendAlpha_t : public MatOpHelper_t<83, MatOpStoreRsSrcBlendAlpha_t> {
public:
	/* struct MatOpHelper_t<83, MatOpStoreRsSrcBlendAlpha_t> <ancestor>; */ /* 0 1 */
	void MatOpStoreRsSrcBlendAlpha_t(MatOpStoreRsSrcBlendAlpha_t* );
};

// <002FB7EE> materialsystem2/material_command_buffer.h:556
void MatOpStoreRsDestBlendAlpha_t::MatOpStoreRsDestBlendAlpha_t()
{
} /* size: 0 */

// <002FB7D1> materialsystem2/material_command_buffer.h:556
inline void MatOpStoreRsDestBlendAlpha_t::MatOpStoreRsDestBlendAlpha_t()
{
} /* size: 0 */

// <002E8034> materialsystem2/material_command_buffer.h:556
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpStoreRsDestBlendAlpha_t : public MatOpHelper_t<84, MatOpStoreRsDestBlendAlpha_t> {
public:
	/* struct MatOpHelper_t<84, MatOpStoreRsDestBlendAlpha_t> <ancestor>; */ /* 0 1 */
	void MatOpStoreRsDestBlendAlpha_t(MatOpStoreRsDestBlendAlpha_t* );
};

// <002FB7AF> materialsystem2/material_command_buffer.h:557
void MatOpStoreRsBlendOpAlpha_t::MatOpStoreRsBlendOpAlpha_t()
{
} /* size: 0 */

// <002FB792> materialsystem2/material_command_buffer.h:557
inline void MatOpStoreRsBlendOpAlpha_t::MatOpStoreRsBlendOpAlpha_t()
{
} /* size: 0 */

// <002E80B8> materialsystem2/material_command_buffer.h:557
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpStoreRsBlendOpAlpha_t : public MatOpHelper_t<85, MatOpStoreRsBlendOpAlpha_t> {
public:
	/* struct MatOpHelper_t<85, MatOpStoreRsBlendOpAlpha_t> <ancestor>; */ /* 0 1 */
	void MatOpStoreRsBlendOpAlpha_t(MatOpStoreRsBlendOpAlpha_t* );
};

// <002FB770> materialsystem2/material_command_buffer.h:558
void MatOpStoreRsColorWriteEnable_t::MatOpStoreRsColorWriteEnable_t()
{
} /* size: 0 */

// <002FB753> materialsystem2/material_command_buffer.h:558
inline void MatOpStoreRsColorWriteEnable_t::MatOpStoreRsColorWriteEnable_t()
{
} /* size: 0 */

// <0023CEB8> materialsystem2/material_command_buffer.h:558
// member variables: 2
// struct size: 2
struct MatOpStoreRsColorWriteEnable_t : public MatOpHelper_t<86, MatOpStoreRsColorWriteEnable_t> {
public:
	/* struct MatOpHelper_t<86, MatOpStoreRsColorWriteEnable_t> <ancestor>; */ /* 0 1 */
	uint8 m_nIdx; /* 1 1 */
};

// <002FB731> materialsystem2/material_command_buffer.h:559
void MatOpStoreRsBlendFactor_t::MatOpStoreRsBlendFactor_t()
{
} /* size: 0 */

// <002FB714> materialsystem2/material_command_buffer.h:559
inline void MatOpStoreRsBlendFactor_t::MatOpStoreRsBlendFactor_t()
{
} /* size: 0 */

// <002E81D0> materialsystem2/material_command_buffer.h:559
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpStoreRsBlendFactor_t : public MatOpHelper_t<87, MatOpStoreRsBlendFactor_t> {
public:
	/* struct MatOpHelper_t<87, MatOpStoreRsBlendFactor_t> <ancestor>; */ /* 0 1 */
	void MatOpStoreRsBlendFactor_t(MatOpStoreRsBlendFactor_t* );
};

// <002FB6F2> materialsystem2/material_command_buffer.h:560
void MatOpStoreRsIndependentBlendEnable_t::MatOpStoreRsIndependentBlendEnable_t()
{
} /* size: 0 */

// <002FB6D5> materialsystem2/material_command_buffer.h:560
inline void MatOpStoreRsIndependentBlendEnable_t::MatOpStoreRsIndependentBlendEnable_t()
{
} /* size: 0 */

// <002E8254> materialsystem2/material_command_buffer.h:560
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpStoreRsIndependentBlendEnable_t : public MatOpHelper_t<88, MatOpStoreRsIndependentBlendEnable_t> {
public:
	/* struct MatOpHelper_t<88, MatOpStoreRsIndependentBlendEnable_t> <ancestor>; */ /* 0 1 */
	void MatOpStoreRsIndependentBlendEnable_t(MatOpStoreRsIndependentBlendEnable_t* );
};

// <002FBFCE> materialsystem2/material_command_buffer.h:561
void MatOpStoreRsAlphaTestEnable_t::MatOpStoreRsAlphaTestEnable_t()
{
} /* size: 0 */

// <002FBFB1> materialsystem2/material_command_buffer.h:561
inline void MatOpStoreRsAlphaTestEnable_t::MatOpStoreRsAlphaTestEnable_t()
{
} /* size: 0 */

// <002E82D8> materialsystem2/material_command_buffer.h:561
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpStoreRsAlphaTestEnable_t : public MatOpHelper_t<89, MatOpStoreRsAlphaTestEnable_t> {
public:
	/* struct MatOpHelper_t<89, MatOpStoreRsAlphaTestEnable_t> <ancestor>; */ /* 0 1 */
	void MatOpStoreRsAlphaTestEnable_t(MatOpStoreRsAlphaTestEnable_t* );
};

// <002FBF50> materialsystem2/material_command_buffer.h:562
void MatOpStoreRsAlphaTestRef_t::MatOpStoreRsAlphaTestRef_t()
{
} /* size: 0 */

// <002FBF33> materialsystem2/material_command_buffer.h:562
inline void MatOpStoreRsAlphaTestRef_t::MatOpStoreRsAlphaTestRef_t()
{
} /* size: 0 */

// <002E835C> materialsystem2/material_command_buffer.h:562
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpStoreRsAlphaTestRef_t : public MatOpHelper_t<90, MatOpStoreRsAlphaTestRef_t> {
public:
	/* struct MatOpHelper_t<90, MatOpStoreRsAlphaTestRef_t> <ancestor>; */ /* 0 1 */
	void MatOpStoreRsAlphaTestRef_t(MatOpStoreRsAlphaTestRef_t* );
};

// <002FBF11> materialsystem2/material_command_buffer.h:563
void MatOpStoreRsAlphaTestFunc_t::MatOpStoreRsAlphaTestFunc_t()
{
} /* size: 0 */

// <002FBEF4> materialsystem2/material_command_buffer.h:563
inline void MatOpStoreRsAlphaTestFunc_t::MatOpStoreRsAlphaTestFunc_t()
{
} /* size: 0 */

// <002E83E0> materialsystem2/material_command_buffer.h:563
// member function: 1
// member variable: 1
// struct size: 1
struct MatOpStoreRsAlphaTestFunc_t : public MatOpHelper_t<91, MatOpStoreRsAlphaTestFunc_t> {
public:
	/* struct MatOpHelper_t<91, MatOpStoreRsAlphaTestFunc_t> <ancestor>; */ /* 0 1 */
	void MatOpStoreRsAlphaTestFunc_t(MatOpStoreRsAlphaTestFunc_t* );
};

// <002FB23B> materialsystem2/material_command_buffer.h:565
void MatOpStoreSsFilter_t::MatOpStoreSsFilter_t()
{
} /* size: 0 */

// <002FB21E> materialsystem2/material_command_buffer.h:565
inline void MatOpStoreSsFilter_t::MatOpStoreSsFilter_t()
{
} /* size: 0 */

// <0023CF30> materialsystem2/material_command_buffer.h:565
// member variables: 2
// struct size: 2
struct MatOpStoreSsFilter_t : public MatOpHelper_t<92, MatOpStoreSsFilter_t> {
public:
	/* struct MatOpHelper_t<92, MatOpStoreSsFilter_t> <ancestor>; */ /* 0 1 */
	uint8 m_nIdx; /* 1 1 */
};

// <002FB1FC> materialsystem2/material_command_buffer.h:566
void MatOpStoreSsAddressU_t::MatOpStoreSsAddressU_t()
{
} /* size: 0 */

// <002FB1DF> materialsystem2/material_command_buffer.h:566
inline void MatOpStoreSsAddressU_t::MatOpStoreSsAddressU_t()
{
} /* size: 0 */

// <0023CFA8> materialsystem2/material_command_buffer.h:566
// member variables: 2
// struct size: 2
struct MatOpStoreSsAddressU_t : public MatOpHelper_t<93, MatOpStoreSsAddressU_t> {
public:
	/* struct MatOpHelper_t<93, MatOpStoreSsAddressU_t> <ancestor>; */ /* 0 1 */
	uint8 m_nIdx; /* 1 1 */
};

// <002FB1BD> materialsystem2/material_command_buffer.h:567
void MatOpStoreSsAddressV_t::MatOpStoreSsAddressV_t()
{
} /* size: 0 */

// <002FB1A0> materialsystem2/material_command_buffer.h:567
inline void MatOpStoreSsAddressV_t::MatOpStoreSsAddressV_t()
{
} /* size: 0 */

// <0023D020> materialsystem2/material_command_buffer.h:567
// member variables: 2
// struct size: 2
struct MatOpStoreSsAddressV_t : public MatOpHelper_t<94, MatOpStoreSsAddressV_t> {
public:
	/* struct MatOpHelper_t<94, MatOpStoreSsAddressV_t> <ancestor>; */ /* 0 1 */
	uint8 m_nIdx; /* 1 1 */
};

// <002FB17E> materialsystem2/material_command_buffer.h:568
void MatOpStoreSsAddressW_t::MatOpStoreSsAddressW_t()
{
} /* size: 0 */

// <002FB161> materialsystem2/material_command_buffer.h:568
inline void MatOpStoreSsAddressW_t::MatOpStoreSsAddressW_t()
{
} /* size: 0 */

// <0023D098> materialsystem2/material_command_buffer.h:568
// member variables: 2
// struct size: 2
struct MatOpStoreSsAddressW_t : public MatOpHelper_t<95, MatOpStoreSsAddressW_t> {
public:
	/* struct MatOpHelper_t<95, MatOpStoreSsAddressW_t> <ancestor>; */ /* 0 1 */
	uint8 m_nIdx; /* 1 1 */
};

// <0023D110> materialsystem2/material_command_buffer.h:569
// member variables: 2
// struct size: 2
struct MatOpStoreSsBorderColor_t : public MatOpHelper_t<96, MatOpStoreSsBorderColor_t> {
public:
	/* struct MatOpHelper_t<96, MatOpStoreSsBorderColor_t> <ancestor>; */ /* 0 1 */
	uint8 m_nIdx; /* 1 1 */
};

// <002FB100> materialsystem2/material_command_buffer.h:570
void MatOpStoreSsMipLodBias_t::MatOpStoreSsMipLodBias_t()
{
} /* size: 0 */

// <002FB0E3> materialsystem2/material_command_buffer.h:570
inline void MatOpStoreSsMipLodBias_t::MatOpStoreSsMipLodBias_t()
{
} /* size: 0 */

// <0023D188> materialsystem2/material_command_buffer.h:570
// member variables: 2
// struct size: 2
struct MatOpStoreSsMipLodBias_t : public MatOpHelper_t<97, MatOpStoreSsMipLodBias_t> {
public:
	/* struct MatOpHelper_t<97, MatOpStoreSsMipLodBias_t> <ancestor>; */ /* 0 1 */
	uint8 m_nIdx; /* 1 1 */
};

// <002FB0C1> materialsystem2/material_command_buffer.h:571
void MatOpStoreSsMaxLod_t::MatOpStoreSsMaxLod_t()
{
} /* size: 0 */

// <002FB0A4> materialsystem2/material_command_buffer.h:571
inline void MatOpStoreSsMaxLod_t::MatOpStoreSsMaxLod_t()
{
} /* size: 0 */

// <0023D200> materialsystem2/material_command_buffer.h:571
// member variables: 2
// struct size: 2
struct MatOpStoreSsMaxLod_t : public MatOpHelper_t<98, MatOpStoreSsMaxLod_t> {
public:
	/* struct MatOpHelper_t<98, MatOpStoreSsMaxLod_t> <ancestor>; */ /* 0 1 */
	uint8 m_nIdx; /* 1 1 */
};

// <002FB082> materialsystem2/material_command_buffer.h:572
void MatOpStoreSsMaxAniso_t::MatOpStoreSsMaxAniso_t()
{
} /* size: 0 */

// <002FB065> materialsystem2/material_command_buffer.h:572
inline void MatOpStoreSsMaxAniso_t::MatOpStoreSsMaxAniso_t()
{
} /* size: 0 */

// <0023D278> materialsystem2/material_command_buffer.h:572
// member variables: 2
// struct size: 2
struct MatOpStoreSsMaxAniso_t : public MatOpHelper_t<99, MatOpStoreSsMaxAniso_t> {
public:
	/* struct MatOpHelper_t<99, MatOpStoreSsMaxAniso_t> <ancestor>; */ /* 0 1 */
	uint8 m_nIdx; /* 1 1 */
};

// <002FB043> materialsystem2/material_command_buffer.h:573
void MatOpStoreSsFetch4_t::MatOpStoreSsFetch4_t()
{
} /* size: 0 */

// <002FB026> materialsystem2/material_command_buffer.h:573
inline void MatOpStoreSsFetch4_t::MatOpStoreSsFetch4_t()
{
} /* size: 0 */

// <002E8904> materialsystem2/material_command_buffer.h:573
// member function: 1
// member variables: 2
// struct size: 2
struct MatOpStoreSsFetch4_t : public MatOpHelper_t<100, MatOpStoreSsFetch4_t> {
public:
	/* struct MatOpHelper_t<100, MatOpStoreSsFetch4_t> <ancestor>; */ /* 0 1 */
	uint8 m_nIdx; /* 1 1 */
	void MatOpStoreSsFetch4_t(MatOpStoreSsFetch4_t* );
};

// <002FB004> materialsystem2/material_command_buffer.h:574
void MatOpStoreSsMinLod_t::MatOpStoreSsMinLod_t()
{
} /* size: 0 */

// <002FAFE7> materialsystem2/material_command_buffer.h:574
inline void MatOpStoreSsMinLod_t::MatOpStoreSsMinLod_t()
{
} /* size: 0 */

// <0023D2F0> materialsystem2/material_command_buffer.h:574
// member variables: 2
// struct size: 2
struct MatOpStoreSsMinLod_t : public MatOpHelper_t<101, MatOpStoreSsMinLod_t> {
public:
	/* struct MatOpHelper_t<101, MatOpStoreSsMinLod_t> <ancestor>; */ /* 0 1 */
	uint8 m_nIdx; /* 1 1 */
};

// <0023D368> materialsystem2/material_command_buffer.h:575
// member variables: 2
// struct size: 2
struct MatOpStoreSsCompFunc_t : public MatOpHelper_t<102, MatOpStoreSsCompFunc_t> {
public:
	/* struct MatOpHelper_t<102, MatOpStoreSsCompFunc_t> <ancestor>; */ /* 0 1 */
	uint8 m_nIdx; /* 1 1 */
};

