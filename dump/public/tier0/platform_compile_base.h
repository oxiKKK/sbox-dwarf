
//
// public/tier0/platform_compile_base.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libfilesystem_stdio.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libtier0.so
//				   libvfx_vulkan.so
//
//	functions: 2,986
//	structs: 599
//

// <0463636A> ../public/tier0/platform_compile_base.h:1299
void Plat_DebugString(const char *)
{
} /* size: 0 */

// <00004195> ../public/tier0/platform_compile_base.h:1301
void Plat_DebugPrint(const char *, ...)
{
} /* size: 0 */

// <044476CB> ../public/tier0/platform_compile_base.h:1315
void Plat_NonFatalErrorFunc(const char *, ...)
{
} /* size: 0 */

// <01D92370> ../public/tier0/platform_compile_base.h:1318
void Plat_FatalErrorFunc(const char *, ...)
{
} /* size: 0 */

// <0001130B> ../public/tier0/platform_compile_base.h:1421
// struct size: 1
struct empty_t {
};

// <00001FD4> ../public/tier0/platform_compile_base.h:1462
// member variables: 4
// struct size: 16
struct V_uuid_t {
	uint32 Data1; /* 0 4 */
	uint16 Data2; /* 4 2 */
	uint16 Data3; /* 6 2 */
	uint8 Data4[8]; /* 8 8 */
};

// <00DA97EE> ../public/tier0/platform_compile_base.h:1500
// struct size: 1
struct _V_remove_const<float> {
	/* ../public/tier0/platform_compile_base.h:1500 */
	typedef float Type_t;
};

// <0184D49E> ../public/tier0/platform_compile_base.h:1500
// struct size: 1
struct _V_remove_const<Vector4D> {
	/* ../public/tier0/platform_compile_base.h:1500 */
	typedef struct Vector4D Type_t;
};

// <06A5903C> ../public/tier0/platform_compile_base.h:1500
// struct size: 1
struct _V_remove_const<short unsigned int> {
	/* ../public/tier0/platform_compile_base.h:1500 */
	typedef short unsigned int Type_t;
};

// <06A5918D> ../public/tier0/platform_compile_base.h:1500
// struct size: 1
struct _V_remove_const<CVfxParam> {
	/* ../public/tier0/platform_compile_base.h:1500 */
	typedef struct CVfxParam Type_t;
};

// <0005F6C1> ../public/tier0/platform_compile_base.h:1500
// struct size: 1
struct _V_remove_const<unsigned int> {
	/* ../public/tier0/platform_compile_base.h:1500 */
	typedef unsigned int Type_t;
};

// <001FD274> ../public/tier0/platform_compile_base.h:1500
// struct size: 1
struct _V_remove_const<KeyValues*> {
	/* ../public/tier0/platform_compile_base.h:1500 */
	typedef class KeyValues * Type_t;
};

// <00241092> ../public/tier0/platform_compile_base.h:1500
// struct size: 1
struct _V_remove_const<MatOpSetProgramType_t> {
	/* ../public/tier0/platform_compile_base.h:1500 */
	typedef struct MatOpSetProgramType_t Type_t;
};

// <00241C7C> ../public/tier0/platform_compile_base.h:1500
// struct size: 1
struct _V_remove_const<MatOpBindShader_t> {
	/* ../public/tier0/platform_compile_base.h:1500 */
	typedef struct MatOpBindShader_t Type_t;
};

// <00242866> ../public/tier0/platform_compile_base.h:1500
// struct size: 1
struct _V_remove_const<MatOpBindVertexShader_t> {
	/* ../public/tier0/platform_compile_base.h:1500 */
	typedef struct MatOpBindVertexShader_t Type_t;
};

// <00243450> ../public/tier0/platform_compile_base.h:1500
// struct size: 1
struct _V_remove_const<MatOpSetPushConstants_t> {
	/* ../public/tier0/platform_compile_base.h:1500 */
	typedef struct MatOpSetPushConstants_t Type_t;
};

// <0024403A> ../public/tier0/platform_compile_base.h:1500
// struct size: 1
struct _V_remove_const<MatOpBindDescriptorSet_t> {
	/* ../public/tier0/platform_compile_base.h:1500 */
	typedef struct MatOpBindDescriptorSet_t Type_t;
};

// <00244C24> ../public/tier0/platform_compile_base.h:1500
// struct size: 1
struct _V_remove_const<MatOpBindTexture_t> {
	/* ../public/tier0/platform_compile_base.h:1500 */
	typedef struct MatOpBindTexture_t Type_t;
};

// <0024580E> ../public/tier0/platform_compile_base.h:1500
// struct size: 1
struct _V_remove_const<MatOpRegisterTextureUseInDescriptorSet_t> {
	/* ../public/tier0/platform_compile_base.h:1500 */
	typedef struct MatOpRegisterTextureUseInDescriptorSet_t Type_t;
};

// <00246FE2> ../public/tier0/platform_compile_base.h:1500
// struct size: 1
struct _V_remove_const<MatOpBindUAVTex_t> {
	/* ../public/tier0/platform_compile_base.h:1500 */
	typedef struct MatOpBindUAVTex_t Type_t;
};

// <00247BCC> ../public/tier0/platform_compile_base.h:1500
// struct size: 1
struct _V_remove_const<MatOpBindUAVBuffer_t> {
	/* ../public/tier0/platform_compile_base.h:1500 */
	typedef struct MatOpBindUAVBuffer_t Type_t;
};

// <002487B6> ../public/tier0/platform_compile_base.h:1500
// struct size: 1
struct _V_remove_const<MatOpBindRasterizerState_t> {
	/* ../public/tier0/platform_compile_base.h:1500 */
	typedef struct MatOpBindRasterizerState_t Type_t;
};

// <002493A0> ../public/tier0/platform_compile_base.h:1500
// struct size: 1
struct _V_remove_const<MatOpBindDepthStencilState_t> {
	/* ../public/tier0/platform_compile_base.h:1500 */
	typedef struct MatOpBindDepthStencilState_t Type_t;
};

// <00249F8A> ../public/tier0/platform_compile_base.h:1500
// struct size: 1
struct _V_remove_const<MatOpBindBlendState_t> {
	/* ../public/tier0/platform_compile_base.h:1500 */
	typedef struct MatOpBindBlendState_t Type_t;
};

// <0024AB74> ../public/tier0/platform_compile_base.h:1500
// struct size: 1
struct _V_remove_const<MatOpSetRasterizerStateDesc_t> {
	/* ../public/tier0/platform_compile_base.h:1500 */
	typedef struct MatOpSetRasterizerStateDesc_t Type_t;
};

// <0024B75E> ../public/tier0/platform_compile_base.h:1500
// struct size: 1
struct _V_remove_const<MatOpSetDepthStencilStateDesc_t> {
	/* ../public/tier0/platform_compile_base.h:1500 */
	typedef struct MatOpSetDepthStencilStateDesc_t Type_t;
};

// <0024C348> ../public/tier0/platform_compile_base.h:1500
// struct size: 1
struct _V_remove_const<MatOpSetBlendStateDesc_t> {
	/* ../public/tier0/platform_compile_base.h:1500 */
	typedef struct MatOpSetBlendStateDesc_t Type_t;
};

// <0024CF32> ../public/tier0/platform_compile_base.h:1500
// struct size: 1
struct _V_remove_const<MatOpSetUsedSamplers_t> {
	/* ../public/tier0/platform_compile_base.h:1500 */
	typedef struct MatOpSetUsedSamplers_t Type_t;
};

// <0024DB1C> ../public/tier0/platform_compile_base.h:1500
// struct size: 1
struct _V_remove_const<MatOpSetSamplerDesc_t> {
	/* ../public/tier0/platform_compile_base.h:1500 */
	typedef struct MatOpSetSamplerDesc_t Type_t;
};

// <0024E770> ../public/tier0/platform_compile_base.h:1500
// struct size: 1
struct _V_remove_const<CSamplerStateDescBase> {
	/* ../public/tier0/platform_compile_base.h:1500 */
	typedef struct CSamplerStateDescBase Type_t;
};

// <0024F354> ../public/tier0/platform_compile_base.h:1500
// struct size: 1
struct _V_remove_const<MatOpSetCommonSamplerDesc0_t> {
	/* ../public/tier0/platform_compile_base.h:1500 */
	typedef struct MatOpSetCommonSamplerDesc0_t Type_t;
};

// <0024FF43> ../public/tier0/platform_compile_base.h:1500
// struct size: 1
struct _V_remove_const<MatOpFillDynamicMaterialCB_t> {
	/* ../public/tier0/platform_compile_base.h:1500 */
	typedef struct MatOpFillDynamicMaterialCB_t Type_t;
};

// <00250B2D> ../public/tier0/platform_compile_base.h:1500
// struct size: 1
struct _V_remove_const<MatOpLoadFloatLiteral_t> {
	/* ../public/tier0/platform_compile_base.h:1500 */
	typedef struct MatOpLoadFloatLiteral_t Type_t;
};

// <00251717> ../public/tier0/platform_compile_base.h:1500
// struct size: 1
struct _V_remove_const<MatOpLoadIntLiteral_t> {
	/* ../public/tier0/platform_compile_base.h:1500 */
	typedef struct MatOpLoadIntLiteral_t Type_t;
};

// <00252301> ../public/tier0/platform_compile_base.h:1500
// struct size: 1
struct _V_remove_const<MatOpLoadVec4Literal_t> {
	/* ../public/tier0/platform_compile_base.h:1500 */
	typedef struct MatOpLoadVec4Literal_t Type_t;
};

// <00252EEB> ../public/tier0/platform_compile_base.h:1500
// struct size: 1
struct _V_remove_const<MatOpLoadCBLiteral_t> {
	/* ../public/tier0/platform_compile_base.h:1500 */
	typedef struct MatOpLoadCBLiteral_t Type_t;
};

// <00253AD5> ../public/tier0/platform_compile_base.h:1500
// struct size: 1
struct _V_remove_const<MatOpSetGlobalsBDA_t> {
	/* ../public/tier0/platform_compile_base.h:1500 */
	typedef struct MatOpSetGlobalsBDA_t Type_t;
};

// <002546BF> ../public/tier0/platform_compile_base.h:1500
// struct size: 1
struct _V_remove_const<MatOpFillDynamicGlobalsBDA_t> {
	/* ../public/tier0/platform_compile_base.h:1500 */
	typedef struct MatOpFillDynamicGlobalsBDA_t Type_t;
};

// <002552A9> ../public/tier0/platform_compile_base.h:1500
// struct size: 1
struct _V_remove_const<MatOpLoadSamplerFromAttr_t> {
	/* ../public/tier0/platform_compile_base.h:1500 */
	typedef struct MatOpLoadSamplerFromAttr_t Type_t;
};

// <00255E93> ../public/tier0/platform_compile_base.h:1500
// struct size: 1
struct _V_remove_const<MatOpLoadTexFromAttr_t> {
	/* ../public/tier0/platform_compile_base.h:1500 */
	typedef struct MatOpLoadTexFromAttr_t Type_t;
};

// <00256A7D> ../public/tier0/platform_compile_base.h:1500
// struct size: 1
struct _V_remove_const<MatOpLoadCBFromAttr_t> {
	/* ../public/tier0/platform_compile_base.h:1500 */
	typedef struct MatOpLoadCBFromAttr_t Type_t;
};

// <00258251> ../public/tier0/platform_compile_base.h:1500
// struct size: 1
struct _V_remove_const<MatOpLoadTexFromParam_t> {
	/* ../public/tier0/platform_compile_base.h:1500 */
	typedef struct MatOpLoadTexFromParam_t Type_t;
};

// <00258E3B> ../public/tier0/platform_compile_base.h:1500
// struct size: 1
struct _V_remove_const<MatOpLoadTexFromDynParam_t> {
	/* ../public/tier0/platform_compile_base.h:1500 */
	typedef struct MatOpLoadTexFromDynParam_t Type_t;
};

// <00259A25> ../public/tier0/platform_compile_base.h:1500
// struct size: 1
struct _V_remove_const<MatOpLoadTexFromVfxExpr_t> {
	/* ../public/tier0/platform_compile_base.h:1500 */
	typedef struct MatOpLoadTexFromVfxExpr_t Type_t;
};

// <0025A60F> ../public/tier0/platform_compile_base.h:1500
// struct size: 1
struct _V_remove_const<MatOpLoadVec4FromVfxExpr_t> {
	/* ../public/tier0/platform_compile_base.h:1500 */
	typedef struct MatOpLoadVec4FromVfxExpr_t Type_t;
};

// <0025C9CD> ../public/tier0/platform_compile_base.h:1500
// struct size: 1
struct _V_remove_const<MatOpClampShort_t> {
	/* ../public/tier0/platform_compile_base.h:1500 */
	typedef struct MatOpClampShort_t Type_t;
};

// <0025D5B7> ../public/tier0/platform_compile_base.h:1500
// struct size: 1
struct _V_remove_const<MatOpClampVec4_t> {
	/* ../public/tier0/platform_compile_base.h:1500 */
	typedef struct MatOpClampVec4_t Type_t;
};

// <0025E1A1> ../public/tier0/platform_compile_base.h:1500
// struct size: 1
struct _V_remove_const<MatOpStoreRsSrgbWriteEnable_t> {
	/* ../public/tier0/platform_compile_base.h:1500 */
	typedef struct MatOpStoreRsSrgbWriteEnable_t Type_t;
};

// <0025ED8B> ../public/tier0/platform_compile_base.h:1500
// struct size: 1
struct _V_remove_const<MatOpStoreRsColorWriteEnable_t> {
	/* ../public/tier0/platform_compile_base.h:1500 */
	typedef struct MatOpStoreRsColorWriteEnable_t Type_t;
};

// <0025F975> ../public/tier0/platform_compile_base.h:1500
// struct size: 1
struct _V_remove_const<MatOpStoreSsFilter_t> {
	/* ../public/tier0/platform_compile_base.h:1500 */
	typedef struct MatOpStoreSsFilter_t Type_t;
};

// <0026055F> ../public/tier0/platform_compile_base.h:1500
// struct size: 1
struct _V_remove_const<MatOpStoreSsAddressU_t> {
	/* ../public/tier0/platform_compile_base.h:1500 */
	typedef struct MatOpStoreSsAddressU_t Type_t;
};

// <00261149> ../public/tier0/platform_compile_base.h:1500
// struct size: 1
struct _V_remove_const<MatOpStoreSsAddressV_t> {
	/* ../public/tier0/platform_compile_base.h:1500 */
	typedef struct MatOpStoreSsAddressV_t Type_t;
};

// <00261D33> ../public/tier0/platform_compile_base.h:1500
// struct size: 1
struct _V_remove_const<MatOpStoreSsAddressW_t> {
	/* ../public/tier0/platform_compile_base.h:1500 */
	typedef struct MatOpStoreSsAddressW_t Type_t;
};

// <0026291D> ../public/tier0/platform_compile_base.h:1500
// struct size: 1
struct _V_remove_const<MatOpStoreSsBorderColor_t> {
	/* ../public/tier0/platform_compile_base.h:1500 */
	typedef struct MatOpStoreSsBorderColor_t Type_t;
};

// <00263507> ../public/tier0/platform_compile_base.h:1500
// struct size: 1
struct _V_remove_const<MatOpStoreSsMipLodBias_t> {
	/* ../public/tier0/platform_compile_base.h:1500 */
	typedef struct MatOpStoreSsMipLodBias_t Type_t;
};

// <002640F1> ../public/tier0/platform_compile_base.h:1500
// struct size: 1
struct _V_remove_const<MatOpStoreSsMaxLod_t> {
	/* ../public/tier0/platform_compile_base.h:1500 */
	typedef struct MatOpStoreSsMaxLod_t Type_t;
};

// <00264CDB> ../public/tier0/platform_compile_base.h:1500
// struct size: 1
struct _V_remove_const<MatOpStoreSsMaxAniso_t> {
	/* ../public/tier0/platform_compile_base.h:1500 */
	typedef struct MatOpStoreSsMaxAniso_t Type_t;
};

// <002658C5> ../public/tier0/platform_compile_base.h:1500
// struct size: 1
struct _V_remove_const<MatOpStoreSsMinLod_t> {
	/* ../public/tier0/platform_compile_base.h:1500 */
	typedef struct MatOpStoreSsMinLod_t Type_t;
};

// <0184BD53> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<const Vector> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef struct Vector Type_t;
};

// <0184C9A1> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<const Vector4D> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef struct Vector4D Type_t;
};

// <0184D5EF> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<const Vector2D> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef struct Vector2D Type_t;
};

// <06A5653A> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<short unsigned int const> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef short unsigned int Type_t;
};

// <06A56FC4> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<float const> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef float Type_t;
};

// <06A5711F> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<const CVfxParam> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef struct CVfxParam Type_t;
};

// <00240605> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<const MatOpSetProgramType_t> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef struct MatOpSetProgramType_t Type_t;
};

// <002411EF> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<const MatOpBindShader_t> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef struct MatOpBindShader_t Type_t;
};

// <00241DD9> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<const MatOpBindVertexShader_t> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef struct MatOpBindVertexShader_t Type_t;
};

// <002429C3> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<const MatOpSetPushConstants_t> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef struct MatOpSetPushConstants_t Type_t;
};

// <002435AD> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<const MatOpBindDescriptorSet_t> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef struct MatOpBindDescriptorSet_t Type_t;
};

// <00244197> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<const MatOpBindTexture_t> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef struct MatOpBindTexture_t Type_t;
};

// <00244D81> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<const MatOpRegisterTextureUseInDescriptorSet_t> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef struct MatOpRegisterTextureUseInDescriptorSet_t Type_t;
};

// <00246555> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<const MatOpBindUAVTex_t> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef struct MatOpBindUAVTex_t Type_t;
};

// <0024713F> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<const MatOpBindUAVBuffer_t> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef struct MatOpBindUAVBuffer_t Type_t;
};

// <00247D29> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<const MatOpBindRasterizerState_t> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef struct MatOpBindRasterizerState_t Type_t;
};

// <002494FD> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<const MatOpBindBlendState_t> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef struct MatOpBindBlendState_t Type_t;
};

// <0024A0E7> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<const MatOpSetRasterizerStateDesc_t> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef struct MatOpSetRasterizerStateDesc_t Type_t;
};

// <0024ACD1> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<const MatOpSetDepthStencilStateDesc_t> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef struct MatOpSetDepthStencilStateDesc_t Type_t;
};

// <0024B8BB> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<const MatOpSetBlendStateDesc_t> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef struct MatOpSetBlendStateDesc_t Type_t;
};

// <0024C4A5> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<const MatOpSetUsedSamplers_t> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef struct MatOpSetUsedSamplers_t Type_t;
};

// <0024D08F> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<const MatOpSetSamplerDesc_t> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef struct MatOpSetSamplerDesc_t Type_t;
};

// <0024DC79> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<const CSamplerStateDescBase> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef struct CSamplerStateDescBase Type_t;
};

// <0024E8C7> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<const MatOpSetCommonSamplerDesc0_t> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef struct MatOpSetCommonSamplerDesc0_t Type_t;
};

// <0024F4B6> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<const MatOpFillDynamicMaterialCB_t> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef struct MatOpFillDynamicMaterialCB_t Type_t;
};

// <002500A0> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<const MatOpLoadFloatLiteral_t> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef struct MatOpLoadFloatLiteral_t Type_t;
};

// <00250C8A> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<const MatOpLoadIntLiteral_t> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef struct MatOpLoadIntLiteral_t Type_t;
};

// <00251874> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<const MatOpLoadVec4Literal_t> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef struct MatOpLoadVec4Literal_t Type_t;
};

// <0025245E> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<const MatOpLoadCBLiteral_t> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef struct MatOpLoadCBLiteral_t Type_t;
};

// <00253048> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<const MatOpSetGlobalsBDA_t> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef struct MatOpSetGlobalsBDA_t Type_t;
};

// <00253C32> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<const MatOpFillDynamicGlobalsBDA_t> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef struct MatOpFillDynamicGlobalsBDA_t Type_t;
};

// <0025481C> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<const MatOpLoadSamplerFromAttr_t> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef struct MatOpLoadSamplerFromAttr_t Type_t;
};

// <00255406> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<const MatOpLoadTexFromAttr_t> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef struct MatOpLoadTexFromAttr_t Type_t;
};

// <00255FF0> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<const MatOpLoadCBFromAttr_t> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef struct MatOpLoadCBFromAttr_t Type_t;
};

// <00256BDA> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<const MatOpLoadBufferFromAttr_t> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef struct MatOpLoadBufferFromAttr_t Type_t;
};

// <002577C4> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<const MatOpLoadTexFromParam_t> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef struct MatOpLoadTexFromParam_t Type_t;
};

// <002583AE> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<const MatOpLoadTexFromDynParam_t> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef struct MatOpLoadTexFromDynParam_t Type_t;
};

// <00258F98> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<const MatOpLoadTexFromVfxExpr_t> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef struct MatOpLoadTexFromVfxExpr_t Type_t;
};

// <00259B82> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<const MatOpLoadVec4FromVfxExpr_t> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef struct MatOpLoadVec4FromVfxExpr_t Type_t;
};

// <0025A76C> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<const MatOpClampFloat_t> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef struct MatOpClampFloat_t Type_t;
};

// <0025B356> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<const MatOpClampInt_t> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef struct MatOpClampInt_t Type_t;
};

// <0025BF40> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<const MatOpClampShort_t> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef struct MatOpClampShort_t Type_t;
};

// <0025CB2A> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<const MatOpClampVec4_t> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef struct MatOpClampVec4_t Type_t;
};

// <0025D714> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<const MatOpStoreRsSrgbWriteEnable_t> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef struct MatOpStoreRsSrgbWriteEnable_t Type_t;
};

// <0025E2FE> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<const MatOpStoreRsColorWriteEnable_t> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef struct MatOpStoreRsColorWriteEnable_t Type_t;
};

// <0025EEE8> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<const MatOpStoreSsFilter_t> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef struct MatOpStoreSsFilter_t Type_t;
};

// <0025FAD2> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<const MatOpStoreSsAddressU_t> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef struct MatOpStoreSsAddressU_t Type_t;
};

// <002606BC> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<const MatOpStoreSsAddressV_t> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef struct MatOpStoreSsAddressV_t Type_t;
};

// <002612A6> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<const MatOpStoreSsAddressW_t> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef struct MatOpStoreSsAddressW_t Type_t;
};

// <00261E90> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<const MatOpStoreSsBorderColor_t> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef struct MatOpStoreSsBorderColor_t Type_t;
};

// <00262A7A> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<const MatOpStoreSsMipLodBias_t> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef struct MatOpStoreSsMipLodBias_t Type_t;
};

// <00263664> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<const MatOpStoreSsMaxLod_t> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef struct MatOpStoreSsMaxLod_t Type_t;
};

// <0026424E> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<const MatOpStoreSsMaxAniso_t> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef struct MatOpStoreSsMaxAniso_t Type_t;
};

// <00264E38> ../public/tier0/platform_compile_base.h:1501
// struct size: 1
struct _V_remove_const<const MatOpStoreSsMinLod_t> {
	/* ../public/tier0/platform_compile_base.h:1501 */
	typedef struct MatOpStoreSsMinLod_t Type_t;
};

// <068EB34D> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<ConstantBufferBindInfo_t*>(ConstantBufferBindInfo_t *& x, ConstantBufferBindInfo_t *& y)
{
	ConstantBufferBindInfo_t* t; // 1512
} /* size: 0, variables: 1 */

// <068EB1E2> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<RsRasterizerStateHandle_t__**>(RsRasterizerStateHandle_t__* *& x, RsRasterizerStateHandle_t__* *& y)
{
	RsRasterizerStateHandle_t__** t; // 1512
} /* size: 0, variables: 1 */

// <068EB167> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<RsDepthStencilStateHandle_t__**>(RsDepthStencilStateHandle_t__* *& x, RsDepthStencilStateHandle_t__* *& y)
{
	RsDepthStencilStateHandle_t__** t; // 1512
} /* size: 0, variables: 1 */

// <068EB0EC> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<RsBlendStateHandle_t__**>(RsBlendStateHandle_t__* *& x, RsBlendStateHandle_t__* *& y)
{
	RsBlendStateHandle_t__** t; // 1512
} /* size: 0, variables: 1 */

// <068EB071> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<unsigned char*>(unsigned char *& x, unsigned char *& y)
{
	unsigned char* t; // 1512
} /* size: 0, variables: 1 */

// <068DEF89> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<CUtlString, empty_t>*>(CUtlHashtableEntry<CUtlString, empty_t> *& x, CUtlHashtableEntry<CUtlString, empty_t> *& y)
{
	CUtlHashtableEntry<CUtlString, empty_t>* t; // 1512
} /* size: 0, variables: 1 */

// <06076A06> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>*>(CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int> *& x, CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int> *& y)
{
	CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>* t; // 1512
} /* size: 0, variables: 1 */

// <060766CA> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>*>(CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> *& x, CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> *& y)
{
	CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>* t; // 1512
} /* size: 0, variables: 1 */

// <060727EA> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>*>(CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> *& x, CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> *& y)
{
	CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>* t; // 1512
} /* size: 0, variables: 1 */

// <060723E0> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>*>(CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int> *& x, CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int> *& y)
{
	CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>* t; // 1512
} /* size: 0, variables: 1 */

// <06072025> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t>*>(CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t> *& x, CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t> *& y)
{
	CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t>* t; // 1512
} /* size: 0, variables: 1 */

// <060698C2> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty_t>*>(CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty_t> *& x, CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty_t> *& y)
{
	CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty_t>* t; // 1512
} /* size: 0, variables: 1 */

// <06069744> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<int, empty_t>*>(CUtlHashtableEntry<int, empty_t> *& x, CUtlHashtableEntry<int, empty_t> *& y)
{
	CUtlHashtableEntry<int, empty_t>* t; // 1512
} /* size: 0, variables: 1 */

// <05F5E401> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t>*>(CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t> *& x, CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t> *& y)
{
	CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t>* t; // 1512
} /* size: 0, variables: 1 */

// <05F5D9C6> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<unsigned int, int>*>(CUtlHashtableEntry<unsigned int, int> *& x, CUtlHashtableEntry<unsigned int, int> *& y)
{
	CUtlHashtableEntry<unsigned int, int>* t; // 1512
} /* size: 0, variables: 1 */

// <05ED30B9> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>*>(CUtlHashtableEntry<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, Hull x, CUtlHashtableEntry<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, Hull y)
{
	CUtlHashtableEntry<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>* t; // 1512
} /* size: 0, variables: 1 */

// <05E4D4D7> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>*>(CUtlHashtableEntry<qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vert x, CUtlHashtableEntry<qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vert y)
{
	CUtlHashtableEntry<qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>* t; // 1512
} /* size: 0, variables: 1 */

// <05E4D37E> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, empty_t>*>(CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Comp x, CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Comp y)
{
	CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, empty_t>* t; // 1512
} /* size: 0, variables: 1 */

// <05E4D322> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, Vector>*>(CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Comp x, CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Comp y)
{
	CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, Vector>* t; // 1512
} /* size: 0, variables: 1 */

// <05DC78AD> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<const qhFace*, int>*>(CUtlHashtableEntry<const qhFace*, int> *& x, CUtlHashtableEntry<const qhFace*, int> *& y)
{
	CUtlHashtableEntry<const qhFace*, int>* t; // 1512
} /* size: 0, variables: 1 */

// <05DB6B13> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<const qhVertex*, int>*>(CUtlHashtableEntry<const qhVertex*, int> *& x, CUtlHashtableEntry<const qhVertex*, int> *& y)
{
	CUtlHashtableEntry<const qhVertex*, int>* t; // 1512
} /* size: 0, variables: 1 */

// <05CD9913> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<UndirectedEdge_t, int>*>(CUtlHashtableEntry<UndirectedEdge_t, int> *& x, CUtlHashtableEntry<UndirectedEdge_t, int> *& y)
{
	CUtlHashtableEntry<UndirectedEdge_t, int>* t; // 1512
} /* size: 0, variables: 1 */

// <05CD856C> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<UndirectedEdge_t, EdgeFaceIdEntry_t>*>(CUtlHashtableEntry<UndirectedEdge_t, EdgeFaceIdEntry_t> *& x, CUtlHashtableEntry<UndirectedEdge_t, EdgeFaceIdEntry_t> *& y)
{
	CUtlHashtableEntry<UndirectedEdge_t, EdgeFaceIdEntry_t>* t; // 1512
} /* size: 0, variables: 1 */

// <05545346> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<CUtlStringToken, int>*>(CUtlHashtableEntry<CUtlStringToken, int> *& x, CUtlHashtableEntry<CUtlStringToken, int> *& y)
{
	CUtlHashtableEntry<CUtlStringToken, int>* t; // 1512
} /* size: 0, variables: 1 */

// <04E3332A> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<short unsigned int, unsigned int>*>(CUtlHashtableEntry<short unsigned int, unsigned int> *& x, CUtlHashtableEntry<short unsigned int, unsigned int> *& y)
{
	CUtlHashtableEntry<short unsigned int, unsigned int>* t; // 1512
} /* size: 0, variables: 1 */

// <04DB91DC> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CMoveSpeed*>(CMoveSpeed *& x, CMoveSpeed *& y)
{
	CMoveSpeed* t; // 1512
} /* size: 0, variables: 1 */

// <04D978B3> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CLookAtChainItem*>(CLookAtChainItem *& x, CLookAtChainItem *& y)
{
	CLookAtChainItem* t; // 1512
} /* size: 0, variables: 1 */

// <04CB6E8C> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<RenderSkeletonBone_t*>(RenderSkeletonBone_t *& x, RenderSkeletonBone_t *& y)
{
	RenderSkeletonBone_t* t; // 1512
} /* size: 0, variables: 1 */

// <04CB6CEC> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<int*>(int *& x, int *& y)
{
	int* t; // 1512
} /* size: 0, variables: 1 */

// <04CAC8FF> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<long long unsigned int, empty_t>*>(CUtlHashtableEntry<long long unsigned int, empty_t> *& x, CUtlHashtableEntry<long long unsigned int, empty_t> *& y)
{
	CUtlHashtableEntry<long long unsigned int, empty_t>* t; // 1512
} /* size: 0, variables: 1 */

// <04BA1EBE> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlString*>(CUtlString *& x, CUtlString *& y)
{
	CUtlString* t; // 1512
} /* size: 0, variables: 1 */

// <04BA1E43> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<short int*>(short int *& x, short int *& y)
{
	short int* t; // 1512
} /* size: 0, variables: 1 */

// <04BA1DC8> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<unsigned int*>(unsigned int *& x, unsigned int *& y)
{
	unsigned int* t; // 1512
} /* size: 0, variables: 1 */

// <04BA1CD2> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CModelSkeleton::BoneFlags_t*>(BoneFlags_t *& x, BoneFlags_t *& y)
{
	BoneFlags_t* t; // 1512
} /* size: 0, variables: 1 */

// <04BA1C57> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<Vector*>(Vector *& x, Vector *& y)
{
	Vector* t; // 1512
} /* size: 0, variables: 1 */

// <04BA1BDC> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<Quaternion*>(Quaternion *& x, Quaternion *& y)
{
	Quaternion* t; // 1512
} /* size: 0, variables: 1 */

// <03D9007B> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<const IMaterial2*, empty_t>*>(CUtlHashtableEntry<const IMaterial2*, empty_t> *& x, CUtlHashtableEntry<const IMaterial2*, empty_t> *& y)
{
	CUtlHashtableEntry<const IMaterial2*, empty_t>* t; // 1512
} /* size: 0, variables: 1 */

// <033A8DCA> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t>*>(CUtlHashtableEntry<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t> *& x, CUtlHashtableEntry<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t> *& y)
{
	CUtlHashtableEntry<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t>* t; // 1512
} /* size: 0, variables: 1 */

// <02B7409D> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<CSceneLightProbeVolumeObject*, int>*>(CUtlHashtableEntry<CSceneLightProbeVolumeObject*, int> *& x, CUtlHashtableEntry<CSceneLightProbeVolumeObject*, int> *& y)
{
	CUtlHashtableEntry<CSceneLightProbeVolumeObject*, int>* t; // 1512
} /* size: 0, variables: 1 */

// <02B74041> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<int, int>*>(CUtlHashtableEntry<int, int> *& x, CUtlHashtableEntry<int, int> *& y)
{
	CUtlHashtableEntry<int, int>* t; // 1512
} /* size: 0, variables: 1 */

// <0269CB62> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<unsigned int, CVSoundTypeManager::SfxDictEntry>*>(CUtlHashtableEntry<unsigned int, CVSoundTypeManager::SfxDictEntry> *& x, CUtlHashtableEntry<unsigned int, CVSoundTypeManager::SfxDictEntry> *& y)
{
	CUtlHashtableEntry<unsigned int, CVSoundTypeManager::SfxDictEntry>* t; // 1512
} /* size: 0, variables: 1 */

// <023E50ED> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<const ResourceBindingBase_t*, empty_t>*>(CUtlHashtableEntry<const ResourceBindingBase_t*, empty_t> *& x, CUtlHashtableEntry<const ResourceBindingBase_t*, empty_t> *& y)
{
	CUtlHashtableEntry<const ResourceBindingBase_t*, empty_t>* t; // 1512
} /* size: 0, variables: 1 */

// <023493F2> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<ResourceId_t, const ResourceBindingBase_t*>*>(CUtlHashtableEntry<ResourceId_t, const ResourceBindingBase_t*> *& x, CUtlHashtableEntry<ResourceId_t, const ResourceBindingBase_t*> *& y)
{
	CUtlHashtableEntry<ResourceId_t, const ResourceBindingBase_t*>* t; // 1512
} /* size: 0, variables: 1 */

// <0229C956> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<CLoadingResource*, empty_t>*>(CUtlHashtableEntry<CLoadingResource*, empty_t> *& x, CUtlHashtableEntry<CLoadingResource*, empty_t> *& y)
{
	CUtlHashtableEntry<CLoadingResource*, empty_t>* t; // 1512
} /* size: 0, variables: 1 */

// <021CA15D> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<ResourceId_t, CUtlVector<IGenericDataResourceListener*>*>*>(CUtlHashtableEntry<ResourceId_t, CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> x, CUtlHashtableEntry<ResourceId_t, CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> y)
{
	CUtlHashtableEntry<ResourceId_t, CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> >*>* t; // 1512
} /* size: 0, variables: 1 */

// <00FFB05E> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> >*>(CUtlHashtableEntry<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> > *& x, CUtlHashtableEntry<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> > *& y)
{
	CUtlHashtableEntry<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> >* t; // 1512
} /* size: 0, variables: 1 */

// <00E69684> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<unsigned int, empty_t>*>(CUtlHashtableEntry<unsigned int, empty_t> *& x, CUtlHashtableEntry<unsigned int, empty_t> *& y)
{
	CUtlHashtableEntry<unsigned int, empty_t>* t; // 1512
} /* size: 0, variables: 1 */

// <00B0C9FB> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<unsigned int>(unsigned int& x, unsigned int& y)
{
	unsigned int t; // 1512
} /* size: 0, variables: 1 */

// <00B0C9B8> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<b3ContactId, empty_t>*>(CUtlHashtableEntry<b3ContactId, empty_t> *& x, CUtlHashtableEntry<b3ContactId, empty_t> *& y)
{
	CUtlHashtableEntry<b3ContactId, empty_t>* t; // 1512
} /* size: 0, variables: 1 */

// <00B0C97B> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<int>(int& x, int& y)
{
	int t; // 1512
} /* size: 0, variables: 1 */

// <025AFFE4> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<unsigned int, CAnimationDecodeCacheEntry_t>*>(CUtlHashtableEntry<unsigned int, CAnimationDecodeCacheEntry_t> *& x, CUtlHashtableEntry<unsigned int, CAnimationDecodeCacheEntry_t> *& y)
{
	CUtlHashtableEntry<unsigned int, CAnimationDecodeCacheEntry_t>* t; // 1512
} /* size: 0, variables: 1 */

// <01C41237> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<Reflection::CClassInfo::BaseClassInfo_t*>(BaseClassInfo_t *& x, BaseClassInfo_t *& y)
{
	BaseClassInfo_t* t; // 1512
} /* size: 0, variables: 1 */

// <015714B5> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> >*>(CUtlHashtableEntry<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> > *& x, CUtlHashtableEntry<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> > *& y)
{
	CUtlHashtableEntry<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> >* t; // 1512
} /* size: 0, variables: 1 */

// <0157141C> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<AnimNodeID, CSmartPtr<const CAnimNodeBase> >*>(CUtlHashtableEntry<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> > *& x, CUtlHashtableEntry<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> > *& y)
{
	CUtlHashtableEntry<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> >* t; // 1512
} /* size: 0, variables: 1 */

// <015713C0> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<AnimNodeID, int>*>(CUtlHashtableEntry<AnimNodeID, int> *& x, CUtlHashtableEntry<AnimNodeID, int> *& y)
{
	CUtlHashtableEntry<AnimNodeID, int>* t; // 1512
} /* size: 0, variables: 1 */

// <0156C43C> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CUpdateNodeManager> >*>(CUtlHashtableEntry<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> > *& x, CUtlHashtableEntry<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> > *& y)
{
	CUtlHashtableEntry<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> >* t; // 1512
} /* size: 0, variables: 1 */

// <0156C3BA> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<const CAnimUpdateNodeBase*, CRootMotion>*>(CUtlHashtableEntry<const CAnimUpdateNodeBase*, CRootMotion> *& x, CUtlHashtableEntry<const CAnimUpdateNodeBase*, CRootMotion> *& y)
{
	CUtlHashtableEntry<const CAnimUpdateNodeBase*, CRootMotion>* t; // 1512
} /* size: 0, variables: 1 */

// <0156C35E> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<const CAnimUpdateNodeBase*, CStrideStatus>*>(CUtlHashtableEntry<const CAnimUpdateNodeBase*, CStrideStatus> *& x, CUtlHashtableEntry<const CAnimUpdateNodeBase*, CStrideStatus> *& y)
{
	CUtlHashtableEntry<const CAnimUpdateNodeBase*, CStrideStatus>* t; // 1512
} /* size: 0, variables: 1 */

// <01460846> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CAnimMotorInstance, CAnimMotorBase, const CAnimMotorUpdaterBase*, const CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>&>::CFactoryMaker, CRefCountAccessor> >*>(CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CAnimMotorInstance, CAnimMotorBase, const x, CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CAnimMotorInstance, CAnimMotorBase, const y)
{
	CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CAnimMotorInstance, CAnimMotorBase, const CAnimMotorUpdaterBase*, const CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>&>::CFactoryMaker, CRefCountAccessor> >* t; // 1512
} /* size: 0, variables: 1 */

// <013E9411> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<HSequence, CSmartPtr<CSequenceDistanceHelper> >*>(CUtlHashtableEntry<HSequence, CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor> > *& x, CUtlHashtableEntry<HSequence, CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor> > *& y)
{
	CUtlHashtableEntry<HSequence, CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor> >* t; // 1512
} /* size: 0, variables: 1 */

// <013E8D29> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CMotionMetricInstance, CMotionMetricBase, const CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>&, CPackedHandle<const CMotionMetricEvaluator> >::CFactoryMaker, CRefCountAccessor> >*>(CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CMotionMetricInstance, CMotionMetricBase, x, CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CMotionMetricInstance, CMotionMetricBase, y)
{
	CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CMotionMetricInstance, CMotionMetricBase, const CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>&, CPackedHandle<const CMotionMetricEvaluator> >::CFactoryMaker, CRefCountAccessor> >* t; // 1512
} /* size: 0, variables: 1 */

// <01306723> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<Reflection::ClassID, CUtlVector<IAnimTagListener*> >*>(CUtlHashtableEntry<Reflection::ClassID, CUtlVector<IAnimTagListener*, CUtlMemory<IAnimTagListener*, int> > > *& x, CUtlHashtableEntry<Reflection::ClassID, CUtlVector<IAnimTagListener*, CUtlMemory<IAnimTagListener*, int> > > *& y)
{
	CUtlHashtableEntry<Reflection::ClassID, CUtlVector<IAnimTagListener*, CUtlMemory<IAnimTagListener*, int> > >* t; // 1512
} /* size: 0, variables: 1 */

// <0125DDCD> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<CUtlString, CSmartPtr<CSubGraph> >*>(CUtlHashtableEntry<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> > *& x, CUtlHashtableEntry<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> > *& y)
{
	CUtlHashtableEntry<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> >* t; // 1512
} /* size: 0, variables: 1 */

// <01054B38> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >*>(CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > *& x, CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > *& y)
{
	CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >* t; // 1512
} /* size: 0, variables: 1 */

// <00F41D83> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<CUtlString, int>*>(CUtlHashtableEntry<CUtlString, int> *& x, CUtlHashtableEntry<CUtlString, int> *& y)
{
	CUtlHashtableEntry<CUtlString, int>* t; // 1512
} /* size: 0, variables: 1 */

// <00F41206> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<AnimParamID, int>*>(CUtlHashtableEntry<AnimParamID, int> *& x, CUtlHashtableEntry<AnimParamID, int> *& y)
{
	CUtlHashtableEntry<AnimParamID, int>* t; // 1512
} /* size: 0, variables: 1 */

// <00F41081> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<short int>(short int& x, short int& y)
{
	short int t; // 1512
} /* size: 0, variables: 1 */

// <00F4103E> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CTransform*>(CTransform *& x, CTransform *& y)
{
	CTransform* t; // 1512
} /* size: 0, variables: 1 */

// <00F40EF7> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker> >*>(CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor> > *& x, CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor> > *& y)
{
	CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor> >* t; // 1512
} /* size: 0, variables: 1 */

// <00E00A70> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<int, CSmartPtr<const CActivityValues> >*>(CUtlHashtableEntry<int, CSmartPtr<const CActivityValues, CRefCountAccessor> > *& x, CUtlHashtableEntry<int, CSmartPtr<const CActivityValues, CRefCountAccessor> > *& y)
{
	CUtlHashtableEntry<int, CSmartPtr<const CActivityValues, CRefCountAccessor> >* t; // 1512
} /* size: 0, variables: 1 */

// <00E008D5> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<int, CSmartPtr<CAnimNodeInstanceBase> >*>(CUtlHashtableEntry<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> > *& x, CUtlHashtableEntry<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> > *& y)
{
	CUtlHashtableEntry<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> >* t; // 1512
} /* size: 0, variables: 1 */

// <00E007A3> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<AnimParamID, const CAnimParameterBase*>*>(CUtlHashtableEntry<AnimParamID, const CAnimParameterBase*> *& x, CUtlHashtableEntry<AnimParamID, const CAnimParameterBase*> *& y)
{
	CUtlHashtableEntry<AnimParamID, const CAnimParameterBase*>* t; // 1512
} /* size: 0, variables: 1 */

// <00E00747> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<AnimTagID, const CAnimTagBase*>*>(CUtlHashtableEntry<AnimTagID, const CAnimTagBase*> *& x, CUtlHashtableEntry<AnimTagID, const CAnimTagBase*> *& y)
{
	CUtlHashtableEntry<AnimTagID, const CAnimTagBase*>* t; // 1512
} /* size: 0, variables: 1 */

// <00C29058> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<char const*, empty_t>*>(CUtlHashtableEntry<char const*, empty_t> *& x, CUtlHashtableEntry<char const*, empty_t> *& y)
{
	CUtlHashtableEntry<char const*, empty_t>* t; // 1512
} /* size: 0, variables: 1 */

// <004B717F> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<AnimOutputID, CNodeConnection>*>(CUtlHashtableEntry<AnimOutputID, CNodeConnection> *& x, CUtlHashtableEntry<AnimOutputID, CNodeConnection> *& y)
{
	CUtlHashtableEntry<AnimOutputID, CNodeConnection>* t; // 1512
} /* size: 0, variables: 1 */

// <0040CC58> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase> >*>(CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> > *& x, CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> > *& y)
{
	CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >* t; // 1512
} /* size: 0, variables: 1 */

// <0040CB80> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<AnimNodeID, CAnimNodeBase*>*>(CUtlHashtableEntry<AnimNodeID, CAnimNodeBase*> *& x, CUtlHashtableEntry<AnimNodeID, CAnimNodeBase*> *& y)
{
	CUtlHashtableEntry<AnimNodeID, CAnimNodeBase*>* t; // 1512
} /* size: 0, variables: 1 */

// <00C24952> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<CDescriptorSetVulkan*, empty_t>*>(CUtlHashtableEntry<CDescriptorSetVulkan*, empty_t> *& x, CUtlHashtableEntry<CDescriptorSetVulkan*, empty_t> *& y)
{
	CUtlHashtableEntry<CDescriptorSetVulkan*, empty_t>* t; // 1512
} /* size: 0, variables: 1 */

// <00BB6634> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::IndirectIndex, empty_t>*>(CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::IndirectIndex x, CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::IndirectIndex y)
{
	CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::IndirectIndex, empty_t>* t; // 1512
} /* size: 0, variables: 1 */

// <00BB659B> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::IndirectIndex, empty_t>*>(CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::IndirectInd x, CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::IndirectInd y)
{
	CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::IndirectIndex, empty_t>* t; // 1512
} /* size: 0, variables: 1 */

// <00AB5E8C> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<short unsigned int, empty_t>*>(CUtlHashtableEntry<short unsigned int, empty_t> *& x, CUtlHashtableEntry<short unsigned int, empty_t> *& y)
{
	CUtlHashtableEntry<short unsigned int, empty_t>* t; // 1512
} /* size: 0, variables: 1 */

// <009AA7C6> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<CUtlStringToken, RenderDescriptorSetHandle_t__*>*>(CUtlHashtableEntry<CUtlStringToken, RenderDescriptorSetHandle_t__*> *& x, CUtlHashtableEntry<CUtlStringToken, RenderDescriptorSetHandle_t__*> *& y)
{
	CUtlHashtableEntry<CUtlStringToken, RenderDescriptorSetHandle_t__*>* t; // 1512
} /* size: 0, variables: 1 */

// <009A8A49> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan*>*>(CUtlHashtableEntry<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan*> *& x, CUtlHashtableEntry<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan*> *& y)
{
	CUtlHashtableEntry<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan*>* t; // 1512
} /* size: 0, variables: 1 */

// <006F1104> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t*>*>(CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t*> *& x, CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t*> *& y)
{
	CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t*>* t; // 1512
} /* size: 0, variables: 1 */

// <006F106B> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<VkRenderPass_T*, empty_t>*>(CUtlHashtableEntry<VkRenderPass_T*, empty_t> *& x, CUtlHashtableEntry<VkRenderPass_T*, empty_t> *& y)
{
	CUtlHashtableEntry<VkRenderPass_T*, empty_t>* t; // 1512
} /* size: 0, variables: 1 */

// <006F0C61> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>*>(CUtlHashtableEntry<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t> *& x, CUtlHashtableEntry<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t> *& y)
{
	CUtlHashtableEntry<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>* t; // 1512
} /* size: 0, variables: 1 */

// <006F0684> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlVector<VkDescriptorSetLayoutBinding>*>(CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> > *& x, CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> > *& y)
{
	CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >* t; // 1512
} /* size: 0, variables: 1 */

// <006F0609> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<VkPushConstantRange*>(VkPushConstantRange *& x, VkPushConstantRange *& y)
{
	VkPushConstantRange* t; // 1512
} /* size: 0, variables: 1 */

// <006F058E> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<PipelineLayoutImmutableSampler_t*>(PipelineLayoutImmutableSampler_t *& x, PipelineLayoutImmutableSampler_t *& y)
{
	PipelineLayoutImmutableSampler_t* t; // 1512
} /* size: 0, variables: 1 */

// <006F0513> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlVector<unsigned int>*>(CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > *& x, CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > *& y)
{
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >* t; // 1512
} /* size: 0, variables: 1 */

// <006396EB> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase*>*>(CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase*> *& x, CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase*> *& y)
{
	CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase*>* t; // 1512
} /* size: 0, variables: 1 */

// <004FD7C0> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<CVulkanImage*, CImageLayoutTracker::ImageTransition_t>*>(CUtlHashtableEntry<CVulkanImage*, CImageLayoutTracker::ImageTransition_t> *& x, CUtlHashtableEntry<CVulkanImage*, CImageLayoutTracker::ImageTransition_t> *& y)
{
	CUtlHashtableEntry<CVulkanImage*, CImageLayoutTracker::ImageTransition_t>* t; // 1512
} /* size: 0, variables: 1 */

// <004D4AC8> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T*>*>(CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T*> *& x, CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T*> *& y)
{
	CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T*>* t; // 1512
} /* size: 0, variables: 1 */

// <004D4A2F> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T*>*>(CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T*> *& x, CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T*> *& y)
{
	CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T*>* t; // 1512
} /* size: 0, variables: 1 */

// <0044703F> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<RenderResourceHandle_t__*, RenderDescriptorBinding_t>*>(CUtlHashtableEntry<RenderResourceHandle_t__*, RenderDescriptorBinding_t> *& x, CUtlHashtableEntry<RenderResourceHandle_t__*, RenderDescriptorBinding_t> *& y)
{
	CUtlHashtableEntry<RenderResourceHandle_t__*, RenderDescriptorBinding_t>* t; // 1512
} /* size: 0, variables: 1 */

// <00393E12> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<TextureStreamingPriorityInfo_t*>(TextureStreamingPriorityInfo_t *& x, TextureStreamingPriorityInfo_t *& y)
{
	TextureStreamingPriorityInfo_t* t; // 1512
} /* size: 0, variables: 1 */

// <005721E9> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<char const*, int>*>(CUtlHashtableEntry<char const*, int> *& x, CUtlHashtableEntry<char const*, int> *& y)
{
	CUtlHashtableEntry<char const*, int>* t; // 1512
} /* size: 0, variables: 1 */

// <005439F5> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<unsigned char>(unsigned char& x, unsigned char& y)
{
	unsigned char t; // 1512
} /* size: 0, variables: 1 */

// <00258542> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<CKeyValuesSystem::SharedStringData_t*, CInterlockedIntT<int> >*>(CUtlHashtableEntry<CKeyValuesSystem::SharedStringData_t*, CInterlockedIntT<int, 4> > *& x, CUtlHashtableEntry<CKeyValuesSystem::SharedStringData_t*, CInterlockedIntT<int, 4> > *& y)
{
	CUtlHashtableEntry<CKeyValuesSystem::SharedStringData_t*, CInterlockedIntT<int, 4> >* t; // 1512
} /* size: 0, variables: 1 */

// <002584A9> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<unsigned int, CKeyValuesSystem::SharedStringData_t*>*>(CUtlHashtableEntry<unsigned int, CKeyValuesSystem::SharedStringData_t*> *& x, CUtlHashtableEntry<unsigned int, CKeyValuesSystem::SharedStringData_t*> *& y)
{
	CUtlHashtableEntry<unsigned int, CKeyValuesSystem::SharedStringData_t*>* t; // 1512
} /* size: 0, variables: 1 */

// <00043D58> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<char>(char& x, char& y)
{
	char t; // 1512
} /* size: 0, variables: 1 */

// <001611A8> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<long long unsigned int, char const*>*>(CUtlHashtableEntry<long long unsigned int, char const*> *& x, CUtlHashtableEntry<long long unsigned int, char const*> *& y)
{
	CUtlHashtableEntry<long long unsigned int, char const*>* t; // 1512
} /* size: 0, variables: 1 */

// <00160DB7> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<unsigned int, const CResourceDiskStruct*>*>(CUtlHashtableEntry<unsigned int, const CResourceDiskStruct*> *& x, CUtlHashtableEntry<unsigned int, const CResourceDiskStruct*> *& y)
{
	CUtlHashtableEntry<unsigned int, const CResourceDiskStruct*>* t; // 1512
} /* size: 0, variables: 1 */

// <00160AC5> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<unsigned int, const CResourceDiskEnum*>*>(CUtlHashtableEntry<unsigned int, const CResourceDiskEnum*> *& x, CUtlHashtableEntry<unsigned int, const CResourceDiskEnum*> *& y)
{
	CUtlHashtableEntry<unsigned int, const CResourceDiskEnum*>* t; // 1512
} /* size: 0, variables: 1 */

// <0015EF6F> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<const CResourceDiskStructField*, empty_t>*>(CUtlHashtableEntry<const CResourceDiskStructField*, empty_t> *& x, CUtlHashtableEntry<const CResourceDiskStructField*, empty_t> *& y)
{
	CUtlHashtableEntry<const CResourceDiskStructField*, empty_t>* t; // 1512
} /* size: 0, variables: 1 */

// <0015EF13> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*>*>(CUtlHashtableEntry<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*> *& x, CUtlHashtableEntry<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*> *& y)
{
	CUtlHashtableEntry<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*>* t; // 1512
} /* size: 0, variables: 1 */

// <00341BF4> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<int, float>*>(CUtlHashtableEntry<int, float> *& x, CUtlHashtableEntry<int, float> *& y)
{
	CUtlHashtableEntry<int, float>* t; // 1512
} /* size: 0, variables: 1 */

// <002ECC31> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashtableEntry<SpamKey_t, empty_t>*>(CUtlHashtableEntry<SpamKey_t, empty_t> *& x, CUtlHashtableEntry<SpamKey_t, empty_t> *& y)
{
	CUtlHashtableEntry<SpamKey_t, empty_t>* t; // 1512
} /* size: 0, variables: 1 */

// <00045D78> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CLocalize::LocalizationFileInfo_t*>(LocalizationFileInfo_t *& x, LocalizationFileInfo_t *& y)
{
	LocalizationFileInfo_t* t; // 1512
} /* size: 0, variables: 1 */

// <000452B2> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>::Node_t*>(Node_t *& x, Node_t *& y)
{
	Node_t* t; // 1512
} /* size: 0, variables: 1 */

// <0004525C> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CLocalize::LocalizedString_t*>(LocalizedString_t *& x, LocalizedString_t *& y)
{
	LocalizedString_t* t; // 1512
} /* size: 0, variables: 1 */

// <000446C8> ../public/tier0/platform_compile_base.h:1510
// variable: 1
void V_swap_through_temp<CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>::HashBucket_t*>(HashBucket_t *& x, HashBucket_t *& y)
{
	HashBucket_t* t; // 1512
} /* size: 0, variables: 1 */

// <06F1EB7A> ../../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CFeAgglomerator::CCluster*, 8>(void)
{
} /* size: 0 */

// <06F1EA8E> ../../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CFeAgglomerator::CLink, 8>(void)
{
} /* size: 0 */

// <06D4AFC5> ../../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<filterstate_t, 16>(void)
{
} /* size: 0 */

// <06AACE1F> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<CVfxHashValue, int, int>::Node_t, int>, 4>(void)
{
} /* size: 0 */

// <06AACCA4> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CVfxByteCodeManager::ByteCodeInfo_t, 8>(void)
{
} /* size: 0 */

// <06AACC0E> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t*, int>::Node_t, int>, 8>(void)
{
} /* size: 0 */

// <06AACA46> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlLinkedListElem_t<CVfxByteCodeManager::DynamicComboInfo_t, int>, 8>(void)
{
} /* size: 0 */

// <06A5D25B> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CVfxStackMachineBuilder::Constant_t, 8>(void)
{
} /* size: 0 */

// <06A5D196> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<CUtlString, bool>::Node_t, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <069DD3F0> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<unsigned int, int, int>::Node_t, int>, 4>(void)
{
} /* size: 0 */

// <068EC4A1> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<VfxVariableIndexData_t, 2>(void)
{
} /* size: 0 */

// <068E7779> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CVfxVariableIndexArray, 8>(void)
{
} /* size: 0 */

// <068E773B> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CVfxVariableIndexRefArray, 4>(void)
{
} /* size: 0 */

// <068E76FD> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<ConstantBufferBindInfo_t, 1>(void)
{
} /* size: 0 */

// <068E76BF> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<RsRasterizerStateHandle_t__*, 8>(void)
{
} /* size: 0 */

// <068E7681> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<RsDepthStencilStateHandle_t__*, 8>(void)
{
} /* size: 0 */

// <068E7643> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<RsBlendStateHandle_t__*, 8>(void)
{
} /* size: 0 */

// <068E75C7> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<RenderShaderHandle_t__*, 8>(void)
{
} /* size: 0 */

// <068E7532> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CVfxModeSettings, 4>(void)
{
} /* size: 0 */

// <068E7010> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<unsigned int, CVfxStaticComboData::ComputeVariablesUsedInStaticCombo(const CVfxProgramData*)::BindInfo_t, int>::Node_t, int>, 4>(void)
{
} /* size: 0 */

// <068E5E98> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CVfxCombo, 8>(void)
{
} /* size: 0 */

// <068E5E5A> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlVector<VsInputSignatureElement_t>, 8>(void)
{
} /* size: 0 */

// <068E5D76> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CVfxStaticComboVcsEntry, 4>(void)
{
} /* size: 0 */

// <068E5677> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<SerializeStaticCombosWorkUnit_t, 8>(void)
{
} /* size: 0 */

// <068E515E> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CVfxMode, 8>(void)
{
} /* size: 0 */

// <068E4F21> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<long long unsigned int, bool, unsigned int>::Node_t, unsigned int>, 8>(void)
{
} /* size: 0 */

// <068E4BD4> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int, int>::Node_t, int>, 4>(void)
{
} /* size: 0 */

// <068E4923> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<CUtlString, empty_t>, 4>(void)
{
} /* size: 0 */

// <068DF202> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CVfxStaticComboData, 8>(void)
{
} /* size: 0 */

// <06652CD7> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<VectorAligned, 16>(void)
{
} /* size: 0 */

// <064C6865> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<matrix3x4_t, 4>(void)
{
} /* size: 0 */

// <064C3059> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<const CPhysAggregateData*, 8>(void)
{
} /* size: 0 */

// <064C2F77> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<const CPhysSurfaceProperties*, 8>(void)
{
} /* size: 0 */

// <064C2ED5> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CPhysBodyDesc::SphereAndAttr_t, 4>(void)
{
} /* size: 0 */

// <064C2E3D> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CPhysBodyDesc::CapsuleAndAttr_t, 4>(void)
{
} /* size: 0 */

// <064C2DA5> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CPhysBodyDesc::HullAndAttr_t, 8>(void)
{
} /* size: 0 */

// <064C2D0D> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CPhysBodyDesc::MeshAndAttr_t, 8>(void)
{
} /* size: 0 */

// <064C24BA> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CJointIndexData, 8>(void)
{
} /* size: 0 */

// <064C2223> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<const VPhysXBodyPart_t*, 8>(void)
{
} /* size: 0 */

// <0628A717> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<RayTracingResult_t, 16>(void)
{
} /* size: 0 */

// <06286EC4> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<TriangleBounds_t, 4>(void)
{
} /* size: 0 */

// <06190576> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<RayTracingSingleResult_t, 8>(void)
{
} /* size: 0 */

// <061903BF> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<BentNormalComputationJob_t, 8>(void)
{
} /* size: 0 */

// <0614B874> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<edge_queue_entry_t, 4>(void)
{
} /* size: 0 */

// <0614B233> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CQEMEdge, 4>(void)
{
} /* size: 0 */

// <0614B1CD> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CQuadricError, 4>(void)
{
} /* size: 0 */

// <0614B15D> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CVertVisit, 8>(void)
{
} /* size: 0 */

// <0614AA49> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<vertex_triangle_t, 4>(void)
{
} /* size: 0 */

// <06077299> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CModelStreamAccessor, 8>(void)
{
} /* size: 0 */

// <0607721A> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CModelMesh::VertexStreamIndex_t, 4>(void)
{
} /* size: 0 */

// <06076A86> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>, 4>(void)
{
} /* size: 0 */

// <0607670D> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>, 4>(void)
{
} /* size: 0 */

// <0607282D> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>, 4>(void)
{
} /* size: 0 */

// <06072423> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>, 4>(void)
{
} /* size: 0 */

// <06072068> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t>, 4>(void)
{
} /* size: 0 */

// <06071CB5> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty_t>, 4>(void)
{
} /* size: 0 */

// <06071C77> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, empty_t>, 4>(void)
{
} /* size: 0 */

// <06070AD8> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<int, empty_t>, 4>(void)
{
} /* size: 0 */

// <0606FE2A> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<TransferVertex_t, 4>(void)
{
} /* size: 0 */

// <0606B1B9> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<ModelMeshIntFloat_t, 4>(void)
{
} /* size: 0 */

// <05FD227B> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CModelStream*, 8>(void)
{
} /* size: 0 */

// <05F63A83> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, 8>(void)
{
} /* size: 0 */

// <05F63746> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 8>(void)
{
} /* size: 0 */

// <05F606D3> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t>, 4>(void)
{
} /* size: 0 */

// <05EDE4E5> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentEntry_t, 8>(void)
{
} /* size: 0 */

// <05EDE442> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentReference_t, 8>(void)
{
} /* size: 0 */

// <05EDE3C7> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>::ComponentEntry_t, 8>(void)
{
} /* size: 0 */

// <05EDE324> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>::ComponentReference_t, 8>(void)
{
} /* size: 0 */

// <05EDE2A9> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>::ComponentEntry_t, 8>(void)
{
} /* size: 0 */

// <05EDE19E> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>::ComponentReference_t, 8>(void)
{
} /* size: 0 */

// <05EDE0CC> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<HullIfrSourceTriangle_t, 4>(void)
{
} /* size: 0 */

// <05EDE0A7> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>, 4>(void)
{
} /* size: 0 */

// <05EDE015> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>::ComponentHandleWithListPointer_t, 8>(void)
{
} /* size: 0 */

// <05ED94B0> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, 8>(void)
{
} /* size: 0 */

// <05E54FA2> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentEntry_t, 8>(void)
{
} /* size: 0 */

// <05E54EFF> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentReference_t, 8>(void)
{
} /* size: 0 */

// <05E54E84> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::ComponentEntry_t, 8>(void)
{
} /* size: 0 */

// <05E54DE1> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::ComponentReference_t, 8>(void)
{
} /* size: 0 */

// <05E54D66> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::ComponentEntry_t, 8>(void)
{
} /* size: 0 */

// <05E54CC3> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::ComponentReference_t, 8>(void)
{
} /* size: 0 */

// <05E54BF4> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, 8>(void)
{
} /* size: 0 */

// <05E54B9D> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>, 4>(void)
{
} /* size: 0 */

// <05E527E7> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<HullIVRHole_t::Tri_t*, 8>(void)
{
} /* size: 0 */

// <05E511DE> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CHullIVR::StraightenAllFaces()::Face_t, 8>(void)
{
} /* size: 0 */

// <05E50FFD> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CHullIVR::VertexSet_t*, 8>(void)
{
} /* size: 0 */

// <05E50ED1> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::ComponentHandleWithListPointer_t, 8>(void)
{
} /* size: 0 */

// <05E50E3D> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, Vector>, 4>(void)
{
} /* size: 0 */

// <05E50DBF> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, empty_t>, 4>(void)
{
} /* size: 0 */

// <05DC7FF4> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<qhVector3, 4>(void)
{
} /* size: 0 */

// <05DC7F84> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<qhPlane, 4>(void)
{
} /* size: 0 */

// <05DC7EBD> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CDualHullAgglomerator::CClusterInfo, 8>(void)
{
} /* size: 0 */

// <05DC7E7F> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<const qhFace*, int>, 4>(void)
{
} /* size: 0 */

// <05DC7C62> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, 8>(void)
{
} /* size: 0 */

// <05DC7BBF> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_t, 8>(void)
{
} /* size: 0 */

// <05DC7B44> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentEntry_t, 8>(void)
{
} /* size: 0 */

// <05DC7AA1> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentReference_t, 8>(void)
{
} /* size: 0 */

// <05DC7A26> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentEntry_t, 8>(void)
{
} /* size: 0 */

// <05DC7983> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentReference_t, 8>(void)
{
} /* size: 0 */

// <05DC73DF> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointer_t, 8>(void)
{
} /* size: 0 */

// <05DC724E> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<const qhVertex*, int>, 4>(void)
{
} /* size: 0 */

// <05DC71DE> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointer_t, 8>*, 8>(void)
{
} /* size: 0 */

// <05DBD603> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CQuickHullSimplifier::Face_t, 8>(void)
{
} /* size: 0 */

// <05DBD49A> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CQuickHullSimplifier::Cluster_t, 4>(void)
{
} /* size: 0 */

// <05DB5797> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentHandleWithListPointer_t, 8>(void)
{
} /* size: 0 */

// <05CD9ABA> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<VertexMatrixPosition_t, 4>(void)
{
} /* size: 0 */

// <05CD9993> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<UndirectedEdge_t, int>, 4>(void)
{
} /* size: 0 */

// <05CD8F89> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlVector<BoundaryLoopVertex_t>, 8>(void)
{
} /* size: 0 */

// <05CD8DCA> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<PossibleCorner_t, 4>(void)
{
} /* size: 0 */

// <05CD898D> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlVector<unsigned int>, 8>(void)
{
} /* size: 0 */

// <05CD85AF> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<UndirectedEdge_t, EdgeFaceIdEntry_t>, 4>(void)
{
} /* size: 0 */

// <05CD8476> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<BoundaryLoopVertex_t, 4>(void)
{
} /* size: 0 */

// <05CD8410> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<VertexLockFlags_t, 4>(void)
{
} /* size: 0 */

// <05C95580> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<TriangleVertexBarycentric_t, 4>(void)
{
} /* size: 0 */

// <05C95404> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<ClippedLineSegment_t, 4>(void)
{
} /* size: 0 */

// <05C76DA9> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<qhConvex*, 8>(void)
{
} /* size: 0 */

// <05C76CA2> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> >, 8>(void)
{
} /* size: 0 */

// <05C76BCB> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, 8>(void)
{
} /* size: 0 */

// <05C76AF9> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlVector<Vector>, 8>(void)
{
} /* size: 0 */

// <05C767A4> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, 8>(void)
{
} /* size: 0 */

// <05BADB04> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CVertexKDNode, 4>(void)
{
} /* size: 0 */

// <05BAD71F> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CDisjointSetForest::Node_t, 4>(void)
{
} /* size: 0 */

// <05BACD2E> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<float const*, 8>(void)
{
} /* size: 0 */

// <05BAC99F> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CMeshEdgeSplitter::HalfEdgeWithLength_t, 4>(void)
{
} /* size: 0 */

// <05BAC0F8> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<MaterialParamInt_t, 8>(void)
{
} /* size: 0 */

// <05BABFD6> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<MaterialParamFloat_t, 8>(void)
{
} /* size: 0 */

// <05BABEE7> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<MaterialParamVector_t, 8>(void)
{
} /* size: 0 */

// <05BABDF8> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<MaterialParamTexture_t, 8>(void)
{
} /* size: 0 */

// <05BABD09> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<MaterialParamString_t, 8>(void)
{
} /* size: 0 */

// <05B299ED> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CGeoViewVertex, 4>(void)
{
} /* size: 0 */

// <057591B6> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<KeyValues3, 8>(void)
{
} /* size: 0 */

// <0572D34D> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CKV3FormatManager::Conversion_t*, 8>(void)
{
} /* size: 0 */

// <0572D113> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<const CKV3FormatManager::Conversion_t*, 8>(void)
{
} /* size: 0 */

// <05716216> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<const KeyValues3*, 8>(void)
{
} /* size: 0 */

// <056BD33B> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CKV3MemberName, 8>(void)
{
} /* size: 0 */

// <056BCF63> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CLoadKV3FromKV1Text::CTranslationPath*, 8>(void)
{
} /* size: 0 */

// <0568C51B> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<std::pair<void const*, unsigned int>, 8>(void)
{
} /* size: 0 */

// <05666A03> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<std::pair<unsigned char*, unsigned int>, 8>(void)
{
} /* size: 0 */

// <055BDD51> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlTokenReference, 8>(void)
{
} /* size: 0 */

// <055BDC58> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<TokenWarning_t, 8>(void)
{
} /* size: 0 */

// <055BDB69> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CLoadKV3FromDynData::LoadedObject_t, 8>(void)
{
} /* size: 0 */

// <055BDA9E> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CLoadKV3FromDynData::UnresolvedElementReference_t, 8>(void)
{
} /* size: 0 */

// <05548DC2> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CKeyValues3Cluster*, 8>(void)
{
} /* size: 0 */

// <05548C31> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CKeyValues3ArrayCluster*, 8>(void)
{
} /* size: 0 */

// <05548AA0> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CKeyValues3TableCluster*, 8>(void)
{
} /* size: 0 */

// <05547EC6> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<CUtlStringToken, int>, 4>(void)
{
} /* size: 0 */

// <053EA394> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<QuaternionAligned, 16>(void)
{
} /* size: 0 */

// <053E993F> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CBoneConstraintPoseSpaceMorph::Input_t, 8>(void)
{
} /* size: 0 */

// <053E94F3> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CBoneConstraintPoseSpaceBone::Input_t, 8>(void)
{
} /* size: 0 */

// <05388219> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CWristBone, 8>(void)
{
} /* size: 0 */

// <05388176> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CFingerChain, 8>(void)
{
} /* size: 0 */

// <0534A808> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CFootStride, 8>(void)
{
} /* size: 0 */

// <052DD848> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<MorphBundleType_t, 4>(void)
{
} /* size: 0 */

// <052DD78C> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CMorphData, 8>(void)
{
} /* size: 0 */

// <052DD6D0> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CFlexDesc, 8>(void)
{
} /* size: 0 */

// <052DD614> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CFlexController, 8>(void)
{
} /* size: 0 */

// <052DD558> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CFlexRule, 8>(void)
{
} /* size: 0 */

// <05281E09> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CConstraintSlave, 8>(void)
{
} /* size: 0 */

// <05281D7F> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CConstraintTarget, 16>(void)
{
} /* size: 0 */

// <0520D734> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CHitBoxSet, 8>(void)
{
} /* size: 0 */

// <05083690> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<VPhysXBodyPart_t, 8>(void)
{
} /* size: 0 */

// <050835ED> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<VPhysXConstraint2_t, 4>(void)
{
} /* size: 0 */

// <050834A7> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<VPhysXCollisionAttributes_t, 8>(void)
{
} /* size: 0 */

// <05080689> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<RnSoftbodyParticle_t, 4>(void)
{
} /* size: 0 */

// <050805E6> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<RnSoftbodySpring_t, 4>(void)
{
} /* size: 0 */

// <05080543> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<RnSoftbodyCapsule_t, 4>(void)
{
} /* size: 0 */

// <0500ED00> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CFootTrajectory, 4>(void)
{
} /* size: 0 */

// <0500BDFE> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<RnSphereDesc_t, 8>(void)
{
} /* size: 0 */

// <0500BCF3> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<RnCapsuleDesc_t, 8>(void)
{
} /* size: 0 */

// <0500BC1C> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<RnHullDesc_t, 8>(void)
{
} /* size: 0 */

// <04FA78E0> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CFingerBone, 8>(void)
{
} /* size: 0 */

// <04FA765A> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CFlexOp, 4>(void)
{
} /* size: 0 */

// <04FA74C6> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CMorphRectData, 8>(void)
{
} /* size: 0 */

// <04FA727E> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CMorphBundleData, 8>(void)
{
} /* size: 0 */

// <04E80C29> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<FlexControllerMapping_t, 8>(void)
{
} /* size: 0 */

// <04E80BC3> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<FlexDescMapping_t, 8>(void)
{
} /* size: 0 */

// <04E80AD2> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<const CFlexRule*, 8>(void)
{
} /* size: 0 */

// <04E8007F> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlVector<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlMemory<CUtlHashDict<const CMorphData*, false, false>::Entry_t, int> >, 8>(void)
{
} /* size: 0 */

// <04E7FC88> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashDict<const CMorphData*, false, false>::Entry_t, 8>(void)
{
} /* size: 0 */

// <04D6CB15> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CActivityModifierWeight, 4>(void)
{
} /* size: 0 */

// <04CB439A> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSceneObjectData, 8>(void)
{
} /* size: 0 */

// <04CB42C5> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CBaseConstraint*, 8>(void)
{
} /* size: 0 */

// <04CB4287> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<RenderSkeletonBone_t, 8>(void)
{
} /* size: 0 */

// <04CB25D5> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<VertexBufferLayout_t, 4>(void)
{
} /* size: 0 */

// <04CB2226> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<BLASTriangleDesc_t, 8>(void)
{
} /* size: 0 */

// <04CB215C> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<BLASTriangleData_t, 8>(void)
{
} /* size: 0 */

// <04CB2006> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CMaterialDrawDescriptor, 8>(void)
{
} /* size: 0 */

// <04CB1F6E> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CDrawCullingData, 4>(void)
{
} /* size: 0 */

// <04CB1E7D> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CHitBox, 16>(void)
{
} /* size: 0 */

// <04CB1484> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<long long unsigned int, empty_t>, 4>(void)
{
} /* size: 0 */

// <04CB04F8> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, 8>(void)
{
} /* size: 0 */

// <04CB024D> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, 8>(void)
{
} /* size: 0 */

// <04C39885> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<AttachmentHandle_t, 1>(void)
{
} /* size: 0 */

// <04BA2E0C> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, 4>(void)
{
} /* size: 0 */

// <04AA7FEC> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<short unsigned int, unsigned int>, 4>(void)
{
} /* size: 0 */

// <04AA6FC6> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CModelMaterialGroup, 8>(void)
{
} /* size: 0 */

// <04AA6E8A> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CBoneFlexDriver, 8>(void)
{
} /* size: 0 */

// <04AA6D4D> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CModel::BodyPart_t, 8>(void)
{
} /* size: 0 */

// <04AA6C8F> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<ResourceId_t, int>, 4>(void)
{
} /* size: 0 */

// <04AA6A9D> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<const CBoneConstraintBase*, 8>(void)
{
} /* size: 0 */

// <04AA6A2D> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<StateDrivenMorph_t, 8>(void)
{
} /* size: 0 */

// <04AA693B> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<CUtlString, int>, 4>(void)
{
} /* size: 0 */

// <04AA68CB> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtable<int, float>, 8>(void)
{
} /* size: 0 */

// <04AA59D7> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int> >, 8>(void)
{
} /* size: 0 */

// <04AA435E> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CLookAtChainItem, 8>(void)
{
} /* size: 0 */

// <04AA41C6> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CActivityToSequenceMapping::HashValueType, 4>(void)
{
} /* size: 0 */

// <04AA40FE> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CBoneFlexDriverControl, 8>(void)
{
} /* size: 0 */

// <04AA4027> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<StateDrivenMorph_t::Activator_t, 4>(void)
{
} /* size: 0 */

// <04AA3FD0> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<int, float>, 4>(void)
{
} /* size: 0 */

// <0494E6FA> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSchemaInheritanceIterator::ClassToTraverse_t, 8>(void)
{
} /* size: 0 */

// <046C4030> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSparseMatrix::RowDescriptor_t, 4>(void)
{
} /* size: 0 */

// <04637527> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CAppSystemDict::ModuleInfo_t, 8>(void)
{
} /* size: 0 */

// <046374B7> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CAppSystemDict::AppSystem_t, 8>(void)
{
} /* size: 0 */

// <04637443> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<void* (*)(char const*, int*), 8>(void)
{
} /* size: 0 */

// <0463737C> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CAppSystemDict::AppSystemRequest_t, 8>(void)
{
} /* size: 0 */

// <046371C4> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CAppSystemDict::InterfaceInfo_t, 8>(void)
{
} /* size: 0 */

// <04498F02> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<HeightmapSampleLocation_t, 4>(void)
{
} /* size: 0 */

// <04498DB9> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<FourVectors, 16>(void)
{
} /* size: 0 */

// <04438021> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<void (*)(IConVar*, char const*, float), 8>(void)
{
} /* size: 0 */

// <04437FB0> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<ConCommand::CallbackInfo_t, 8>(void)
{
} /* size: 0 */

// <0438079D> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<AnimationDecodeDebugDumpElement_t, 8>(void)
{
} /* size: 0 */

// <04140632> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CInterpolationTimeContext, 4>(void)
{
} /* size: 0 */

// <041405DB> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<IWrappedInterpolatedVar::CWrappedIVHashElement_t, 8>(void)
{
} /* size: 0 */

// <0413FDDC> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t, CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t, int> >, 8>(void)
{
} /* size: 0 */

// <03E7785B> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<std::unique_ptr<CAnimationResource>, 8>(void)
{
} /* size: 0 */

// <03E77793> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CStrongHandle<InfoForResourceTypeCAnimData>, 8>(void)
{
} /* size: 0 */

// <03E7764D> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CAnimBone, 8>(void)
{
} /* size: 0 */

// <03E774A1> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CBufferString, 8>(void)
{
} /* size: 0 */

// <03E773FE> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CAnimDataChannelDesc, 8>(void)
{
} /* size: 0 */

// <03E77328> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CAnimRetargetElementData, 8>(void)
{
} /* size: 0 */

// <03E77252> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CAnimRetargetChainData, 8>(void)
{
} /* size: 0 */

// <03D90998> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CAggregateSceneObject::MeshFragment_t, 16>(void)
{
} /* size: 0 */

// <03D9079A> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<PerFragmentData_t, 4>(void)
{
} /* size: 0 */

// <03D906DB> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CAggregateSceneObject*, 8>(void)
{
} /* size: 0 */

// <03AE272E> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<RenderImageLayout_t, 4>(void)
{
} /* size: 0 */

// <039D1920> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlLinkedListElem_t<CVolumetricFog::FogVolume_t, short unsigned int>, 4>(void)
{
} /* size: 0 */

// <039282FF> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<VertexUVPosColorNormalAndTangent_t, 4>(void)
{
} /* size: 0 */

// <0389634D> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CViewIdInternal, 8>(void)
{
} /* size: 0 */

// <03895B8D> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int>, 8>(void)
{
} /* size: 0 */

// <03879464> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<SceneViewTimestampQuery_t*, 8>(void)
{
} /* size: 0 */

// <0387940D> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CTimestampManager::TimestampSceneViewData_t, 8>(void)
{
} /* size: 0 */

// <036A5733> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<TLASInstance_t, 8>(void)
{
} /* size: 0 */

// <0352B3B7> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, 8>(void)
{
} /* size: 0 */

// <0352B2D6> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<ChildSceneObjectReference_t, 8>(void)
{
} /* size: 0 */

// <034648FC> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<RenderPassAttachmentDesc_t, 8>(void)
{
} /* size: 0 */

// <034648D7> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<RenderPassSubPass_t, 8>(void)
{
} /* size: 0 */

// <03460ACC> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<ISceneLayer*, 8>(void)
{
} /* size: 0 */

// <034609FA> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<ISceneLayer::InputTexture_t, 8>(void)
{
} /* size: 0 */

// <03460925> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<ISceneLayer::InputSceneViewRenderTarget_t, 8>(void)
{
} /* size: 0 */

// <0345FF7A> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CRenderBatchList*, 8>(void)
{
} /* size: 0 */

// <0345FC46> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlLinkedListElem_t<ISceneLayer*, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <0345EFB3> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<RenderSubPassAttachment_t, 8>(void)
{
} /* size: 0 */

// <03220C6F> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSceneView, 16>(void)
{
} /* size: 0 */

// <0321F404> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<ISceneView::WorldList_t, 8>(void)
{
} /* size: 0 */

// <0321E7E3> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlLinkedListElem_t<CSceneLayer*, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <0321E692> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<ISceneView*, 8>(void)
{
} /* size: 0 */

// <0321E4E1> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CScratchRenderTargetSystem::RenderTargetInfo_t, 8>(void)
{
} /* size: 0 */

// <0321E1EF> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CPVSBits, 4>(void)
{
} /* size: 0 */

// <0321CF7D> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<ImageFormat, 4>(void)
{
} /* size: 0 */

// <0311C25B> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<DebugLineSegment3D_t, 4>(void)
{
} /* size: 0 */

// <0311C21D> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<DebugLineSegment2D_t, 4>(void)
{
} /* size: 0 */

// <0311C1DF> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<DebugTriangle3D_t, 4>(void)
{
} /* size: 0 */

// <0311C188> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<DebugTriangle2D_t, 4>(void)
{
} /* size: 0 */

// <0311C131> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<DebugTextureDisplay_t, 8>(void)
{
} /* size: 0 */

// <0311C0B5> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<Debug2DText_t, 8>(void)
{
} /* size: 0 */

// <0311C077> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<Debug3DText_t, 8>(void)
{
} /* size: 0 */

// <0311C039> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<DebugSceneObject_t, 8>(void)
{
} /* size: 0 */

// <0311BFFB> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<DebugCircle3D_t, 4>(void)
{
} /* size: 0 */

// <0311BFBD> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<DebugCross3D_t, 4>(void)
{
} /* size: 0 */

// <0311BF0F> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<DebugTickMarkedLine3D_t, 4>(void)
{
} /* size: 0 */

// <0311BED1> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<DebugTextBase_t, 8>(void)
{
} /* size: 0 */

// <0311BB73> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<const DebugSphere_t*, 8>(void)
{
} /* size: 0 */

// <0305B543> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSceneLightObjectInternal*, 8>(void)
{
} /* size: 0 */

// <0305B40C> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<ISceneLightListener*, 8>(void)
{
} /* size: 0 */

// <0305B2D5> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CEnvMapSceneObject*, 8>(void)
{
} /* size: 0 */

// <0305B19E> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<ISceneEnvironmentMapListener*, 8>(void)
{
} /* size: 0 */

// <0305B067> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSceneLightProbeVolumeObject*, 8>(void)
{
} /* size: 0 */

// <0305AF30> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<ISceneLightProbeVolumeListener*, 8>(void)
{
} /* size: 0 */

// <02E22DBE> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CacheOptimizedKDNode_t, 4>(void)
{
} /* size: 0 */

// <02E22AD7> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<TraceVertex_t*, 8>(void)
{
} /* size: 0 */

// <02E22A67> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<InstancedRayTracingEnvironmentBVHNode_t, 16>(void)
{
} /* size: 0 */

// <02E229AB> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<InstancedRayTracingEnvironmentReference_t*, 8>(void)
{
} /* size: 0 */

// <02E22917> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<RayTracingEnvironment*, 8>(void)
{
} /* size: 0 */

// <02E21B76> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<ConstantBufferHandle_t__*, 8>(void)
{
} /* size: 0 */

// <02E21542> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSceneWorldObjectListChunk*, 8>(void)
{
} /* size: 0 */

// <02E2113C> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<DisplayListToSubmit_t, 8>(void)
{
} /* size: 0 */

// <02E210CC> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSceneSystem::ScratchRenderTarget_t, 8>(void)
{
} /* size: 0 */

// <02E20B3F> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<const IMaterial2*, empty_t>, 4>(void)
{
} /* size: 0 */

// <02E20A17> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CLightBinnerStandard*, 8>(void)
{
} /* size: 0 */

// <02E20701> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlDelegate<void(ISceneView*, const CRenderAttributes*)>, 8>(void)
{
} /* size: 0 */

// <02E20263> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<std::function<void(CSceneObject*)>*, 8>(void)
{
} /* size: 0 */

// <02E201E8> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CRenderBatchList, 8>(void)
{
} /* size: 0 */

// <02E201C3> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSceneLayer, 16>(void)
{
} /* size: 0 */

// <02E1FA20> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t>, 4>(void)
{
} /* size: 0 */

// <02E1F9C9> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSceneSystem::VertexCacheUpdateRequest_t, 8>(void)
{
} /* size: 0 */

// <02E1F8B6> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<RenderDescriptorBinding_t, 8>(void)
{
} /* size: 0 */

// <02E1F68C> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<SceneObjectCullingBox_t, 16>(void)
{
} /* size: 0 */

// <02E1F5E1> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<SceneVolumetricFogVolume_t, 4>(void)
{
} /* size: 0 */

// <02E1E6E8> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CMeshDrawPrimitive_t, 8>(void)
{
} /* size: 0 */

// <02E1E00B> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSceneSystem::RenderAttributesSetup_t, 8>(void)
{
} /* size: 0 */

// <02E1DEA2> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSceneLayer*, 8>(void)
{
} /* size: 0 */

// <02E1D658> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlLinkedListElem_t<SkippedLayerInRenderPass_t, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <02E1D545> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<AtlasChart_t, 8>(void)
{
} /* size: 0 */

// <02E1D14D> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSceneWorld*, 8>(void)
{
} /* size: 0 */

// <02E1CAA8> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<void*, 8>(void)
{
} /* size: 0 */

// <02E1C375> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<RenderDescriptorDesc_t, 8>(void)
{
} /* size: 0 */

// <02E1B4D5> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlVector<NameToLightCookieSequence_t, CUtlMemory<NameToLightCookieSequence_t, int> >, 8>(void)
{
} /* size: 0 */

// <02E1ADD6> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, 8>(void)
{
} /* size: 0 */

// <02E184A5> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlVector<CUtlHashDict<ISceneObjectDesc*>::Entry_t, CUtlMemory<CUtlHashDict<ISceneObjectDesc*>::Entry_t, int> >, 8>(void)
{
} /* size: 0 */

// <02E18198> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, true>::Entry_t, int> >, 8>(void)
{
} /* size: 0 */

// <02E15B75> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlVectorFixedGrowableCompat<CSceneDrawList*, 32>, 8>(void)
{
} /* size: 0 */

// <02E1596A> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<PendingVisitList_t, 8>(void)
{
} /* size: 0 */

// <02E145D3> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CacheOptimizedTriangle_t, 4>(void)
{
} /* size: 0 */

// <02E143ED> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<NameToLightCookieSequence_t, 4>(void)
{
} /* size: 0 */

// <02E13DDC> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashDict<ISceneObjectDesc*>::Entry_t, 8>(void)
{
} /* size: 0 */

// <02E13D31> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashDict<unsigned char, true, true>::Entry_t, 8>(void)
{
} /* size: 0 */

// <02C2671F> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<const CSceneLightObjectInternal*, 8>(void)
{
} /* size: 0 */

// <02C266AF> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<const CDecalSceneObject*, 8>(void)
{
} /* size: 0 */

// <02C26658> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<GPULight, 4>(void)
{
} /* size: 0 */

// <02C2661A> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<EnvironmentMapConstants, 16>(void)
{
} /* size: 0 */

// <02C265C3> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<GPUDecal, 8>(void)
{
} /* size: 0 */

// <02B7648E> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CLightBinner2::EnvironmentMapData_t, 8>(void)
{
} /* size: 0 */

// <02B7633D> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<int, int>, 4>(void)
{
} /* size: 0 */

// <02B762FF> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<CSceneLightProbeVolumeObject*, int>, 4>(void)
{
} /* size: 0 */

// <02B7628F> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, 8>(void)
{
} /* size: 0 */

// <02B76251> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<const CEnvMapSceneObject*, int>, 4>(void)
{
} /* size: 0 */

// <02B748EB> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<Vector4D, 4>(void)
{
} /* size: 0 */

// <02B74633> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CFrustum, 16>(void)
{
} /* size: 0 */

// <02875453> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<IRenderingPipeline*, 8>(void)
{
} /* size: 0 */

// <027926E1> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CWeakHandle<InfoForResourceTypeIMaterial2>, 8>(void)
{
} /* size: 0 */

// <0269D73C> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<unsigned int, CVSoundTypeManager::SfxDictEntry>, 4>(void)
{
} /* size: 0 */

// <02667773> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSfxTable*, 8>(void)
{
} /* size: 0 */

// <02667703> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CVSndAsyncLoadRequest*, 8>(void)
{
} /* size: 0 */

// <02610F74> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<audio_device_description_t, 4>(void)
{
} /* size: 0 */

// <024FCC98> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<audio_buffer_input_t, 8>(void)
{
} /* size: 0 */

// <024DB154> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, 8>(void)
{
} /* size: 0 */

// <024DB0D9> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<memhandle_t__*, 8>(void)
{
} /* size: 0 */

// <0240A0FA> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CAudioMixBuffer, 16>(void)
{
} /* size: 0 */

// <023E6B32> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<char const*, int>, 4>(void)
{
} /* size: 0 */

// <023E6A52> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CResourceManifestFromDiskInternal*, 8>(void)
{
} /* size: 0 */

// <023E66F6> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CResourceManifest::LoadingResourceReference_t, 8>(void)
{
} /* size: 0 */

// <023E65F3> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CManifestResourceGatherer::ResourceFenceGroup_t*, 8>(void)
{
} /* size: 0 */

// <023E63E3> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<const ResourceBindingBase_t*, empty_t>, 4>(void)
{
} /* size: 0 */

// <0234CDE3> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<ResourceTypeRegistration_t, 8>(void)
{
} /* size: 0 */

// <0234CD4B> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<unsigned int*, 8>(void)
{
} /* size: 0 */

// <0234CD0D> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlLinkedListElem_t<CResourceManifest*, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <0234C863> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CResourceSystem::ForcedSynchronizationCallbackInfo_t, 8>(void)
{
} /* size: 0 */

// <0234C7CF> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<IToolsResourceListener*, 8>(void)
{
} /* size: 0 */

// <0234C597> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<ResourceBindingBase_t, 8>(void)
{
} /* size: 0 */

// <0234B784> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<const ResourceBindingBase_t*, 8>(void)
{
} /* size: 0 */

// <0234B64F> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CResourceSystem::FinalizeOrAdvanceLoadingManifests(int, CResourceManifest**)::QueuedReloadDeallocate_t, 8>(void)
{
} /* size: 0 */

// <0234B2F3> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<ResourceStatusChange_t, 8>(void)
{
} /* size: 0 */

// <0234B1AD> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CResourceManifest*, 8>(void)
{
} /* size: 0 */

// <0234ACE8> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<const ResourceTypeRegistration_t*, 8>(void)
{
} /* size: 0 */

// <0234AB11> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<NullTypeManager_t, 8>(void)
{
} /* size: 0 */

// <0234AA60> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long unsigned int>, CThreadSpinRWLock>::HashFixedDataInternal_t<ResourceBindingBase_t>, 8>(void)
{
} /* size: 0 */

// <0234A780> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CResourceReferenceTracking_Options, true>, 8>(void)
{
} /* size: 0 */

// <023482DA> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlLinkedListElem_t<ExtRefList_t*, unsigned int>, 8>(void)
{
} /* size: 0 */

// <022D97E4> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlLinkedListElem_t<CStreamingResourceData*, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <0229EE43> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<ResourceId_t, const ResourceBindingBase_t*>, 4>(void)
{
} /* size: 0 */

// <0229C89A> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <0229C875> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<CLoadingResource*, empty_t>, 4>(void)
{
} /* size: 0 */

// <021CC671> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<ResourceId_t, CUtlVector<IGenericDataResourceListener*>*>, 4>(void)
{
} /* size: 0 */

// <0218D4E9> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CodeResourceManifest_t*, 8>(void)
{
} /* size: 0 */

// <0218D292> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CodeResourceManifestFenceGroup_t*, 8>(void)
{
} /* size: 0 */

// <0215C800> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CAsyncResourceDataRequest*, 8>(void)
{
} /* size: 0 */

// <0202B053> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<TextureCreationExtraData_t, 8>(void)
{
} /* size: 0 */

// <01FD3181> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CVideoRecorder::VideoFrameData*, 8>(void)
{
} /* size: 0 */

// <01FD3129> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CVideoRecorder::AudioSampleData*, 8>(void)
{
} /* size: 0 */

// <01D95BCB> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<ISceneWorld*, 8>(void)
{
} /* size: 0 */

// <01D94E10> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<ViewHistory, 16>(void)
{
} /* size: 0 */

// <01B56751> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<SboxVertex_t, 4>(void)
{
} /* size: 0 */

// <019314A3> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<RayTraceGeneralShader_t, 8>(void)
{
} /* size: 0 */

// <019313CF> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<RayTraceHitShaderGroup_t, 8>(void)
{
} /* size: 0 */

// <018532DB> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<PermModelExtPart_t, 16>(void)
{
} /* size: 0 */

// <018531EC> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CStrongHandle<InfoForResourceTypeCRenderMesh>, 8>(void)
{
} /* size: 0 */

// <018530B1> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, 8>(void)
{
} /* size: 0 */

// <01852F39> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CStrongHandle<InfoForResourceTypeCSequenceGroupData>, 8>(void)
{
} /* size: 0 */

// <01852E7D> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<MaterialGroup_t, 8>(void)
{
} /* size: 0 */

// <01852BB4> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<ModelBoneFlexDriver_t, 8>(void)
{
} /* size: 0 */

// <018514AF> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CRenderBufferBinding, 8>(void)
{
} /* size: 0 */

// <0185124F> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<ModelBoneFlexDriverControl_t, 8>(void)
{
} /* size: 0 */

// <01262316> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<ConstantBufferVariable_t, 4>(void)
{
} /* size: 0 */

// <0126140D> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, 8>(void)
{
} /* size: 0 */

// <01260A75> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<VPhysXJoint_t, 16>(void)
{
} /* size: 0 */

// <012608BE> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSteamItemInstance*, 8>(void)
{
} /* size: 0 */

// <0126021E> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CPhysBodyDesc, 8>(void)
{
} /* size: 0 */

// <0125FD9C> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CVfxVariableDescription, 8>(void)
{
} /* size: 0 */

// <0125FCE0> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CVfxTextureChannelProcessor, 4>(void)
{
} /* size: 0 */

// <0125FC24> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<ConstantBufferDescription_t, 8>(void)
{
} /* size: 0 */

// <0125FB35> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<VsInputSignatureElement_t, 4>(void)
{
} /* size: 0 */

// <0125F9F0> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CAnimationGroupBuilder::Animation_t, 8>(void)
{
} /* size: 0 */

// <0125F522> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<MeshTraceOutput, 8>(void)
{
} /* size: 0 */

// <0125F48A> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<PhysicsTrace::Result, 4>(void)
{
} /* size: 0 */

// <0125F375> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<TextureResidencyInfo_t, 8>(void)
{
} /* size: 0 */

// <0125F2A0> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<SceneSystemTimestampFrameData_t, 8>(void)
{
} /* size: 0 */

// <0125EF49> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<Vector2D, 4>(void)
{
} /* size: 0 */

// <0125D77B> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlVector<CTransform>, 8>(void)
{
} /* size: 0 */

// <010F1248> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSceneObject*, 8>(void)
{
} /* size: 0 */

// <010EFAD5> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CBuilderMaterialGroup, 8>(void)
{
} /* size: 0 */

// <010EFA67> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<SceneObject_t, 8>(void)
{
} /* size: 0 */

// <010EF991> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<InfoOverlayData_t, 8>(void)
{
} /* size: 0 */

// <010EF80D> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<AggregateSceneObject_t, 8>(void)
{
} /* size: 0 */

// <010EF71C> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<ExtraVertexStreamOverride_t, 8>(void)
{
} /* size: 0 */

// <010EF5BC> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<WorldNodeOnDiskBufferData_t, 8>(void)
{
} /* size: 0 */

// <010EF42A> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<ExtraSceneObjectStreamDesc_t, 8>(void)
{
} /* size: 0 */

// <010EF3BA> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSmartPtr<CRenderMesh>, 8>(void)
{
} /* size: 0 */

// <010EF240> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<short int, 2>(void)
{
} /* size: 0 */

// <010EF192> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<Quaternion, 4>(void)
{
} /* size: 0 */

// <010EF098> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<const CFlexController*, 8>(void)
{
} /* size: 0 */

// <010EF041> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlVector<short int>, 8>(void)
{
} /* size: 0 */

// <010EEF9E> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<BuilderModelBoneFlexDriver_t, 8>(void)
{
} /* size: 0 */

// <010EEDF1> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CAnimationGroupResource*, 8>(void)
{
} /* size: 0 */

// <010EED81> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<MaterialOverrideDesc_t, 8>(void)
{
} /* size: 0 */

// <010EEC1A> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlVector<int>, 8>(void)
{
} /* size: 0 */

// <010ED795> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CStrongHandle<InfoForResourceTypeIMaterial2>, 8>(void)
{
} /* size: 0 */

// <010ED513> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<AggregateMeshInfo_t, 4>(void)
{
} /* size: 0 */

// <010ED470> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<BuilderModelBoneFlexDriverControl_t, 8>(void)
{
} /* size: 0 */

// <00FFF3DC> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<VertexBufferHandle_t__*, 8>(void)
{
} /* size: 0 */

// <00FFF319> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CWeakHandle<InfoForResourceTypeCTextureBase>, 8>(void)
{
} /* size: 0 */

// <00FFF261> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CWorldSceneObjectRef*, 8>(void)
{
} /* size: 0 */

// <00FFF1BF> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<signed char, 1>(void)
{
} /* size: 0 */

// <00FFE215> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<WorldNodeSortElement_t, 8>(void)
{
} /* size: 0 */

// <00FFE166> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<long long unsigned int, WorldTraversal_t*>::Node_t, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <00FFDDE8> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CWeakHandle<InfoForResourceTypeCEntityLump>, 8>(void)
{
} /* size: 0 */

// <00FFDD9B> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> >, 4>(void)
{
} /* size: 0 */

// <00FFCE2F> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<char, 1>(void)
{
} /* size: 0 */

// <00FFC08C> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlVector<CWorldSceneObjectRef*>, 8>(void)
{
} /* size: 0 */

// <00F25AB9> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSingleWorldRep*, 8>(void)
{
} /* size: 0 */

// <00F25A49> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<SingleWorldEntityLump_t, 8>(void)
{
} /* size: 0 */

// <00F2598D> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CWorldRendererMgr::WindEntry_t, 8>(void)
{
} /* size: 0 */

// <00F24C9A> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<NodeData_t, 8>(void)
{
} /* size: 0 */

// <00F24BC4> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CStrongHandle<InfoForResourceTypeCTextureBase>, 8>(void)
{
} /* size: 0 */

// <00E6E8CD> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, 8>(void)
{
} /* size: 0 */

// <00E6E802> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<const CEntityKeyValues*, 8>(void)
{
} /* size: 0 */

// <00E6DD1D> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<EntityIOConnectionData_t, 8>(void)
{
} /* size: 0 */

// <00E69609> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<unsigned int, empty_t>, 4>(void)
{
} /* size: 0 */

// <00D6E723> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlStringToken, 4>(void)
{
} /* size: 0 */

// <00D6E6CC> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CPhysSurfaceProperties*, 8>(void)
{
} /* size: 0 */

// <00D6E5B9> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CPhysConstraintData, 8>(void)
{
} /* size: 0 */

// <00D6E594> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<const VPhysXJoint_t*, 8>(void)
{
} /* size: 0 */

// <00D6E56F> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<RnCollisionAttr_t, 4>(void)
{
} /* size: 0 */

// <00D0F161> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<IPhysicsBody*, 8>(void)
{
} /* size: 0 */

// <00D0F10A> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<IPhysicsJoint*, 8>(void)
{
} /* size: 0 */

// <00B9AB11> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CPhysicsShape*, 8>(void)
{
} /* size: 0 */

// <00B9AA7D> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<b3ContactData, 8>(void)
{
} /* size: 0 */

// <00B9A9B3> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<b3SurfaceMaterial, 8>(void)
{
} /* size: 0 */

// <00B0E6C1> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<b3Vec3, 4>(void)
{
} /* size: 0 */

// <00B0E5F7> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<IndexPair, 4>(void)
{
} /* size: 0 */

// <00B0E514> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CPhysAggregateInstance*, 8>(void)
{
} /* size: 0 */

// <00B0E2A3> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CPhysicsDebugShape*, 8>(void)
{
} /* size: 0 */

// <00B0E20E> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<b3ContactId, empty_t>, 4>(void)
{
} /* size: 0 */

// <00B0E1B7> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<b3JointId, 4>(void)
{
} /* size: 0 */

// <00B0E0ED> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<b3ShapeId, 4>(void)
{
} /* size: 0 */

// <009EA6D0> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<RnVertex_t, 4>(void)
{
} /* size: 0 */

// <009E9EB5> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<bool, 1>(void)
{
} /* size: 0 */

// <009E9D1F> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CKeyValues3Iterator::StackEntry_t, 8>(void)
{
} /* size: 0 */

// <009E9C72> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CStrongHandleVoid, 8>(void)
{
} /* size: 0 */

// <009E9699> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<RnPlane_t, 4>(void)
{
} /* size: 0 */

// <009E9642> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<RnHalfEdge_t, 1>(void)
{
} /* size: 0 */

// <009E885E> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<DebugMeshInfo_t, 8>(void)
{
} /* size: 0 */

// <009E87A6> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CPhysicsSystem::CreateDebugSceneObject(const DebugSceneObjectParams_t&, SceneObjectBuffers_t*)::Part_t, 8>(void)
{
} /* size: 0 */

// <009E39D9> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<PhysicsDebugVertex_t, 4>(void)
{
} /* size: 0 */

// <009E38DC> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::Node_t, 8>(void)
{
} /* size: 0 */

// <009E37E3> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::Node_t, 4>(void)
{
} /* size: 0 */

// <009E28CA> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t, 4>(void)
{
} /* size: 0 */

// <009E2873> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, 4>(void)
{
} /* size: 0 */

// <008DF57E> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<unsigned int, ButtonCode_t>::Node_t, short unsigned int>, 4>(void)
{
} /* size: 0 */

// <008A7CF5> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CInputSystem::UserCursor_t, 8>(void)
{
} /* size: 0 */

// <005941C4> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<SceneScratchRenderTargetInfo_t, 8>(void)
{
} /* size: 0 */

// <004AF75F> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<ConVar*, int>, 8>(void)
{
} /* size: 0 */

// <003C6EDF> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<long long unsigned int, 8>(void)
{
} /* size: 0 */

// <003C6A0B> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CPVS*, 8>(void)
{
} /* size: 0 */

// <0029E01D> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CLoopTypeBase::ServiceDependency_t, 8>(void)
{
} /* size: 0 */

// <0029DFB5> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<char const*, 8>(void)
{
} /* size: 0 */

// <0022D846> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<IPrerequisite*, 8>(void)
{
} /* size: 0 */

// <0022D7EF> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlLinkedListElem_t<IPrerequisite*, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <0022D14E> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<IEngineService*, 8>(void)
{
} /* size: 0 */

// <0022CB3A> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<ResourceManifestDesc_t*, 8>(void)
{
} /* size: 0 */

// <0022CA8F> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CLoopTypeBase*, 8>(void)
{
} /* size: 0 */

// <0022C990> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<const CSchemaClassInfo*, CUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (*)(const CSchemaClassInfo* const&, const CSchemaClassInfo* const&)>::Node_t, unsigned int>, 8>(void)
{
} /* size: 0 */

// <0022C6DE> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<ISwitchLoopModeStatusNotify*, 8>(void)
{
} /* size: 0 */

// <0022BC4F> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CEventDispatcher_Base::EventListenerInfo_t, 8>(void)
{
} /* size: 0 */

// <0012FE59> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<float, 4>(void)
{
} /* size: 0 */

// <0012E24B> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<int, 4>(void)
{
} /* size: 0 */

// <0012E20D> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<Vector, 4>(void)
{
} /* size: 0 */

// <0012E1B6> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlString, 8>(void)
{
} /* size: 0 */

// <0012DC4D> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<HResourceManifest__*, 8>(void)
{
} /* size: 0 */

// <0012DBDD> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CTransform, 16>(void)
{
} /* size: 0 */

// <0012DB9F> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CAnimSkeleton::BoneInfo, 8>(void)
{
} /* size: 0 */

// <0012DAC7> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CAnimFoot, 8>(void)
{
} /* size: 0 */

// <0012D9BD> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<unsigned int, 4>(void)
{
} /* size: 0 */

// <0012D942> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlVector<CCharRenderGeometry>, 8>(void)
{
} /* size: 0 */

// <0012D896> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<short unsigned int, 2>(void)
{
} /* size: 0 */

// <0012D84C> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<bone_merge_list_t, 16>(void)
{
} /* size: 0 */

// <0012D7E8> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSceneAnimatableObject::FlexWeight_t, 4>(void)
{
} /* size: 0 */

// <0012D7AA> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<AnimationEventOccurrence_t, 8>(void)
{
} /* size: 0 */

// <0012D5F9> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<AppSystemInfo_t, 8>(void)
{
} /* size: 0 */

// <0012D57A> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlLinkedListElem_t<CUtlString, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <0012CCA9> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CCharRenderGeometry, 4>(void)
{
} /* size: 0 */

// <00060D5F> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CDebugVisualizerMgr::DebugVisElement_t, 8>(void)
{
} /* size: 0 */

// <000047D7> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<COrderedInitShutdownRefWrapper<EarlyInit_Common>, 1>(void)
{
} /* size: 0 */

// <0336A890> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<IIKRuleData*, 8>(void)
{
} /* size: 0 */

// <0336A82A> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<IKJointConstraintPair_t, 8>(void)
{
} /* size: 0 */

// <03343BAE> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<IIKJointConstraintData*, 8>(void)
{
} /* size: 0 */

// <0328586E> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CIKChainInterpolationState, 16>(void)
{
} /* size: 0 */

// <03285147> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CIKChainRuleInterpolationState, 4>(void)
{
} /* size: 0 */

// <031F7968> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<bool (*)(char const*, KeyValues3*), 8>(void)
{
} /* size: 0 */

// <027290FE> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CInternalOperation, 4>(void)
{
} /* size: 0 */

// <02728F96> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CAnimationResult, 16>(void)
{
} /* size: 0 */

// <02728D04> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<DecodeOperation_t, 4>(void)
{
} /* size: 0 */

// <02698142> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CRetargetingChain, 8>(void)
{
} /* size: 0 */

// <025B1A3C> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<unsigned int, CAnimationDecodeCacheEntry_t>, 4>(void)
{
} /* size: 0 */

// <025B19FE> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlLinkedListElem_t<unsigned int, unsigned int>, 4>(void)
{
} /* size: 0 */

// <01ADFEC4> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Node_t, 8>(void)
{
} /* size: 0 */

// <01ADA9FF> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::HashBucket_t, 4>(void)
{
} /* size: 0 */

// <019ED866> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSmartPtr<Reflection::CTypeFactory<CAnimStateConditionBase>::CFactoryMaker, CRefCountAccessor>, 8>(void)
{
} /* size: 0 */

// <01572CEA> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSmartPtr<const CAnimNodeBase>, 8>(void)
{
} /* size: 0 */

// <01572C84> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CPackedHandle<CAnimUpdateNodeBase>, 4>(void)
{
} /* size: 0 */

// <015729DF> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CUpdateNodeManager> >, 4>(void)
{
} /* size: 0 */

// <015729A1> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> >, 4>(void)
{
} /* size: 0 */

// <0157297C> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<AnimNodeID, CSmartPtr<const CAnimNodeBase> >, 4>(void)
{
} /* size: 0 */

// <01572927> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<AnimNodeID, int>, 4>(void)
{
} /* size: 0 */

// <01571364> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CAnimGraphUpdateContext::NodeUpdateDesc_t, 8>(void)
{
} /* size: 0 */

// <0157126B> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<animevent_t, 8>(void)
{
} /* size: 0 */

// <01571214> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CAnimGraphUpdateContext::AnimTagWithStatus, 4>(void)
{
} /* size: 0 */

// <015711D6> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<const CAnimUpdateNodeBase*, CRootMotion>, 4>(void)
{
} /* size: 0 */

// <01571198> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<const CAnimUpdateNodeBase*, CStrideStatus>, 4>(void)
{
} /* size: 0 */

// <0156F724> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CAnimPose*, 8>(void)
{
} /* size: 0 */

// <0156F62A> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<OpResult, 8>(void)
{
} /* size: 0 */

// <01463194> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSmartPtr<Reflection::CTypeFactory<CAnimMotorBase>::CFactoryMaker, CRefCountAccessor>, 8>(void)
{
} /* size: 0 */

// <013ED278> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<HSequence, CSmartPtr<CSequenceDistanceHelper> >, 4>(void)
{
} /* size: 0 */

// <013ED208> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CMotionMetricInitContext::PoseCache_t*, 8>(void)
{
} /* size: 0 */

// <0130825C> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<Reflection::ClassID, CUtlVector<IAnimTagListener*> >, 4>(void)
{
} /* size: 0 */

// <0130716C> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSmartPtr<Reflection::CTypeFactory<CAnimTagBase>::CFactoryMaker, CRefCountAccessor>, 8>(void)
{
} /* size: 0 */

// <013058BB> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<IAnimTagListener*, 8>(void)
{
} /* size: 0 */

// <01262878> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<CUtlString, CSmartPtr<CSubGraph> >, 4>(void)
{
} /* size: 0 */

// <0114E4D3> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CMotionMetricEvaluator*, 8>(void)
{
} /* size: 0 */

// <0114E463> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<ClipSampleInfo, 4>(void)
{
} /* size: 0 */

// <0114E008> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSmartPtr<CMotionMetricInstance>, 8>(void)
{
} /* size: 0 */

// <0114B897> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSmartPtr<Reflection::CTypeFactory<CMotionMetricBase>::CFactoryMaker, CRefCountAccessor>, 8>(void)
{
} /* size: 0 */

// <0114B708> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CMotionMetricInstance, CMotionMetricBase, const CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>&, CPackedHandle<const CMotionMetricEvaluator> >::CFactoryMaker, CRefCountAccessor> >, 4>(void)
{
} /* size: 0 */

// <01058188> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<const CAttachment*, 8>(void)
{
} /* size: 0 */

// <01057FA4> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CMoveSpeed, 8>(void)
{
} /* size: 0 */

// <01057E49> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CBlendAnimNode::CreateUpdateNode(CAnimGraphInitContext&) const::OrderValuePair, 4>(void)
{
} /* size: 0 */

// <0105744D> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CFootDefinition, 8>(void)
{
} /* size: 0 */

// <00F45C53> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSmartPtr<CAnimParameterInstance>, 8>(void)
{
} /* size: 0 */

// <00F45BCF> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<AnimParamID, int>, 4>(void)
{
} /* size: 0 */

// <00F43643> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CAnimMotorInstance, CAnimMotorBase, const CAnimMotorUpdaterBase*, const CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>&>::CFactoryMaker, CRefCountAccessor> >, 4>(void)
{
} /* size: 0 */

// <00F424FB> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSmartPtr<Reflection::CTypeFactory<CAnimNodeBase>::CFactoryMaker, CRefCountAccessor>, 8>(void)
{
} /* size: 0 */

// <00F4218D> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSmartPtr<Reflection::CTypeFactory<CAnimParameterBase>::CFactoryMaker, CRefCountAccessor>, 8>(void)
{
} /* size: 0 */

// <00F411C8> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<std::unique_ptr<CEnduringClassMemoryPool<CAnimPose>::Block, std::default_delete<CEnduringClassMemoryPool<CAnimPose>::Block> >, 8>(void)
{
} /* size: 0 */

// <00E07C69> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, 4>(void)
{
} /* size: 0 */

// <00E077F3> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<Reflection::CClassInfo::BaseClassInfo_t, 8>(void)
{
} /* size: 0 */

// <00E0760B> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<IAnimationGraphVisualizerInfo*, 8>(void)
{
} /* size: 0 */

// <00E06B67> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<AnimNodeID, 4>(void)
{
} /* size: 0 */

// <00E06A5D> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<IAnimNode*, 8>(void)
{
} /* size: 0 */

// <00E06944> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<int, CSmartPtr<CAnimNodeInstanceBase> >, 4>(void)
{
} /* size: 0 */

// <00E06906> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<int, CSmartPtr<const CActivityValues> >, 4>(void)
{
} /* size: 0 */

// <00E06896> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<IAnimGraphSequenceFinishedListener*, 8>(void)
{
} /* size: 0 */

// <00E035CE> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<AnimParamID, const CAnimParameterBase*>, 4>(void)
{
} /* size: 0 */

// <00E03590> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<AnimTagID, const CAnimTagBase*>, 4>(void)
{
} /* size: 0 */

// <00E032A4> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<AnimNodeLocation_t, 8>(void)
{
} /* size: 0 */

// <00C40675> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CActivityRemap, 8>(void)
{
} /* size: 0 */

// <00C3E20B> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<HSequence, 4>(void)
{
} /* size: 0 */

// <00C3C9E8> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlBinaryBlock*, 8>(void)
{
} /* size: 0 */

// <00C3C946> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlVector<float>, 8>(void)
{
} /* size: 0 */

// <00C3C83E> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlVector<Quaternion>, 8>(void)
{
} /* size: 0 */

// <00C3C6DF> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlVector<Color>, 8>(void)
{
} /* size: 0 */

// <00C3C647> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<Color, 1>(void)
{
} /* size: 0 */

// <00C3C5AF> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlVector<Vector2D>, 8>(void)
{
} /* size: 0 */

// <00C3C4A7> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlVector<Vector4D>, 8>(void)
{
} /* size: 0 */

// <00C38C5F> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<BoneTableEntry, 8>(void)
{
} /* size: 0 */

// <00C38AA3> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int>, 4>(void)
{
} /* size: 0 */

// <00C387C1> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CAnimationDecodeOp, 4>(void)
{
} /* size: 0 */

// <00C38751> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<IAnimationHelperSequenceFinishedCallback*, 8>(void)
{
} /* size: 0 */

// <00C38623> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<AnimEventDetectDesc_t, 8>(void)
{
} /* size: 0 */

// <00C385A8> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CAnimationHelper::FrameAdvance(matrix3x4a_t&, float, AnimationEventOccurrences_t*)::notify_t, 4>(void)
{
} /* size: 0 */

// <00C37EBF> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CAnimContainer_Imp::AnimationGroupImp_t, 8>(void)
{
} /* size: 0 */

// <00C37DF4> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<ISequence*, 8>(void)
{
} /* size: 0 */

// <00C36970> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<char const*, empty_t>, 4>(void)
{
} /* size: 0 */

// <00C35A82> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<const CAnimationGroupResource*, 8>(void)
{
} /* size: 0 */

// <00C35A2B> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CAnimDecodeSwizzle, 8>(void)
{
} /* size: 0 */

// <00C35993> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<ResourceId_t, 8>(void)
{
} /* size: 0 */

// <00C35867> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<AnimInstanceMap_t, 4>(void)
{
} /* size: 0 */

// <00C35810> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSeqGroupInstance, 8>(void)
{
} /* size: 0 */

// <00C357AA> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<PoseParamDesc_t, 4>(void)
{
} /* size: 0 */

// <00C35431> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CAnimDataChannel, 8>(void)
{
} /* size: 0 */

// <00C35026> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UserDataElementMap_t, 4>(void)
{
} /* size: 0 */

// <00C34FCF> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<ChannelWeightlist_t, 8>(void)
{
} /* size: 0 */

// <00C34E52> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<AnimBounds_t, 4>(void)
{
} /* size: 0 */

// <00C340AD> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CCompressorSegment*, 8>(void)
{
} /* size: 0 */

// <00C334BB> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CAnimationBucket, 8>(void)
{
} /* size: 0 */

// <00C33011> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<activitylist_t, 4>(void)
{
} /* size: 0 */

// <00C32F62> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<char const*, CActivityRemapCache, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, 8>(void)
{
} /* size: 0 */

// <00C2FC84> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CAnimationDecodeCacheEntry_t, 16>(void)
{
} /* size: 0 */

// <00C29420> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, int> >, 8>(void)
{
} /* size: 0 */

// <00C28F06> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<ChannelWeightlist_t::IndexWeightPair_t, 4>(void)
{
} /* size: 0 */

// <00C28EC8> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<std::pair<LocalFlexController_t, float>, 4>(void)
{
} /* size: 0 */

// <00C28C59> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>::Entry_t, int> >, 8>(void)
{
} /* size: 0 */

// <00C28A5E> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, int> >, 8>(void)
{
} /* size: 0 */

// <00C288AC> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, int> >, 8>(void)
{
} /* size: 0 */

// <00C24237> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CIKChainJointData_t, 8>(void)
{
} /* size: 0 */

// <00C23A00> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashDict<short int, true, false>::Entry_t, 8>(void)
{
} /* size: 0 */

// <00C2396E> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashDict<short int, true, true>::Entry_t, 8>(void)
{
} /* size: 0 */

// <00C238DC> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, 8>(void)
{
} /* size: 0 */

// <00C2384A> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, 8>(void)
{
} /* size: 0 */

// <0097DD30> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CAnimDesc, 8>(void)
{
} /* size: 0 */

// <0097DC8D> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CAnimDecoder, 8>(void)
{
} /* size: 0 */

// <0097D4F1> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<fieldtype_t, 1>(void)
{
} /* size: 0 */

// <0097D459> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlVector<char const*, CUtlMemory<char const*, int> >, 8>(void)
{
} /* size: 0 */

// <0097D369> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CCompressor<float>*, 8>(void)
{
} /* size: 0 */

// <0097D239> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CCompressor<Quaternion>*, 8>(void)
{
} /* size: 0 */

// <0097D1A1> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CCompressor<int>*, 8>(void)
{
} /* size: 0 */

// <0097D109> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CCompressor<bool>*, 8>(void)
{
} /* size: 0 */

// <0097D071> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CCompressor<Color>*, 8>(void)
{
} /* size: 0 */

// <0097CFD9> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CCompressor<Vector2D>*, 8>(void)
{
} /* size: 0 */

// <0097CF41> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CCompressor<Vector4D>*, 8>(void)
{
} /* size: 0 */

// <0097A10F> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSeqS1SeqDesc, 8>(void)
{
} /* size: 0 */

// <00979FC9> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSeqCmdSeqDesc, 8>(void)
{
} /* size: 0 */

// <00843BE1> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSmartPtr<CAnimStateTransition>, 8>(void)
{
} /* size: 0 */

// <00842C04> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSmartPtr<CAnimStateConditionBase>, 8>(void)
{
} /* size: 0 */

// <006AEAE4> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSmartPtr<CMotionClip>, 8>(void)
{
} /* size: 0 */

// <0067675D> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSmartPtr<CAnimMotorBase>, 8>(void)
{
} /* size: 0 */

// <0059D4C6> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSmartPtr<CMotionClipGroup>, 8>(void)
{
} /* size: 0 */

// <0059A904> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSolveIKChainAnimNodeChainData, 8>(void)
{
} /* size: 0 */

// <0059A626> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSmartPtr<CAnimState>, 8>(void)
{
} /* size: 0 */

// <004BAEB4> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CBlend2DItem, 8>(void)
{
} /* size: 0 */

// <004BAB98> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CBlendNodeChild, 8>(void)
{
} /* size: 0 */

// <004BA818> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CChoiceNodeChild, 8>(void)
{
} /* size: 0 */

// <004BA33F> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CFootLockItem, 8>(void)
{
} /* size: 0 */

// <004B9CEE> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CFootStepTriggerItem, 8>(void)
{
} /* size: 0 */

// <004B99A4> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<AnimOutputID, CNodeConnection>, 4>(void)
{
} /* size: 0 */

// <004B98F4> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CConnectionProxyItem, 8>(void)
{
} /* size: 0 */

// <00414931> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSmartPtr<CActivityValues>, 8>(void)
{
} /* size: 0 */

// <004110B0> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSmartPtr<CAnimParameterBase>, 8>(void)
{
} /* size: 0 */

// <00410EB9> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSmartPtr<CAnimGraphSettingsGroup>, 8>(void)
{
} /* size: 0 */

// <0041039B> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CAnimNodeBase*, 8>(void)
{
} /* size: 0 */

// <0040FEF0> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase> >, 4>(void)
{
} /* size: 0 */

// <0040FECB> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<AnimNodeID, CAnimNodeBase*>, 4>(void)
{
} /* size: 0 */

// <0040F1D7> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSmartPtr<CClipProperties>, 8>(void)
{
} /* size: 0 */

// <00399ABC> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSmartPtr<CAnimReplayFrame>, 8>(void)
{
} /* size: 0 */

// <0032A5B8> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<IAnimGraphLogListener*, 8>(void)
{
} /* size: 0 */

// <0032A548> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSmartPtr<CAnimTagSpan>, 8>(void)
{
} /* size: 0 */

// <002A3D94> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSeqCmdLayer, 4>(void)
{
} /* size: 0 */

// <002A3D24> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CAnimAnimEvent, 8>(void)
{
} /* size: 0 */

// <002A3CB4> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CAnimActivity, 8>(void)
{
} /* size: 0 */

// <002A3C44> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSeqPoseSetting, 8>(void)
{
} /* size: 0 */

// <002A3A4E> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSeqIKLock, 4>(void)
{
} /* size: 0 */

// <002A3051> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CAnimFrameBlockAnim, 8>(void)
{
} /* size: 0 */

// <002A2E91> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CAnimMovement, 4>(void)
{
} /* size: 0 */

// <001421D4> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CIKChainContext, 8>(void)
{
} /* size: 0 */

// <00142127> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CTraceRequest*, 8>(void)
{
} /* size: 0 */

// <000EB402> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<int, JointTreeNode*>::Node_t, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <000EA476> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<JointTreeNode*, 8>(void)
{
} /* size: 0 */

// <00089D68> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<IIKRuleContext*, 8>(void)
{
} /* size: 0 */

// <00F44D64> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSheet::SheetInfo_t, 8>(void)
{
} /* size: 0 */

// <00C2AE34> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan*>*, int, CDefLess<CWeakHandle<InfoForResourceTypeCTextureBase> > >::Node_t, int>, 8>(void)
{
} /* size: 0 */

// <00C2ACD2> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CTextureManagerVulkan::TextureUpdate_t, 4>(void)
{
} /* size: 0 */

// <00C2A40F> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<CDescriptorSetVulkan*, empty_t>, 4>(void)
{
} /* size: 0 */

// <00BBA93C> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::IndirectIndex, empty_t>, 2>(void)
{
} /* size: 0 */

// <00BBA8FE> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <00BBA83F> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::IndirectIndex, empty_t>, 2>(void)
{
} /* size: 0 */

// <00BBA801> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <00B6E38C> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<VkSemaphore_T*, 8>(void)
{
} /* size: 0 */

// <00B66F2C> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<QueryObjectInternalVulkan_t*, 8>(void)
{
} /* size: 0 */

// <00B66F07> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlLinkedListElem_t<AsyncReadbackVulkan_t, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <00B66E6C> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlLinkedListElem_t<VulkanCommandBuffer_t*, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <00B66D9F> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<VkCommandBuffer_T*, 8>(void)
{
} /* size: 0 */

// <00B66D61> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlLinkedListElem_t<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <00B66CC6> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlLinkedListElem_t<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <00B6561C> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<VkDeviceFaultAddressInfoEXT, 8>(void)
{
} /* size: 0 */

// <00B65539> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<VkDeviceFaultVendorInfoEXT, 8>(void)
{
} /* size: 0 */

// <00B04B0D> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlLinkedListElem_t<VulkanQueryPool_t*, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <00B04A1C> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<VulkanQuery_t*, 8>(void)
{
} /* size: 0 */

// <00B049C5> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CRenderPipelineStatsVulkan::OutstandingFrame_t, 8>(void)
{
} /* size: 0 */

// <00B04987> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CRenderPipelineFrameStats, 8>(void)
{
} /* size: 0 */

// <00B04930> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlVector<RenderPipelineSample_t>*, 8>(void)
{
} /* size: 0 */

// <00B048C0> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t>*, 8>(void)
{
} /* size: 0 */

// <00B03469> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlLinkedListElem_t<VulkanQuery_t*, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <00B029C4> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<RenderPipelineSample_t, 1>(void)
{
} /* size: 0 */

// <00B02986> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CRenderPipelineStatsVulkan::SampleQueries_t, 8>(void)
{
} /* size: 0 */

// <00ABBC3C> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<VkFramebuffer_T*, 8>(void)
{
} /* size: 0 */

// <00ABBBBD> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<VulkanRenderPassImageLayout_t, 8>(void)
{
} /* size: 0 */

// <00ABBB25> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CRenderPassVulkan::VulkanSubpassInfo_t, 8>(void)
{
} /* size: 0 */

// <00ABBA36> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<VkSubpassDescription, 8>(void)
{
} /* size: 0 */

// <00ABB8D6> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<VkSubpassDependency, 4>(void)
{
} /* size: 0 */

// <00ABB87F> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<VkImageView_T*, 8>(void)
{
} /* size: 0 */

// <00ABB6C9> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<CRenderPassDesc, CRenderPassVulkan*>::Node_t, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <00ABB580> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<short unsigned int, empty_t>, 2>(void)
{
} /* size: 0 */

// <009BCD66> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CRenderDeviceVulkan::FencedVertexBufferRelease_t, 8>(void)
{
} /* size: 0 */

// <009BCD28> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CRenderDeviceVulkan::FencedIndexBufferRelease_t, 8>(void)
{
} /* size: 0 */

// <009BCCAF> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CRenderDeviceVulkan::QueryPool_t, 8>(void)
{
} /* size: 0 */

// <009BCAC4> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlLinkedListElem_t<RenderDescriptorSetHandle_t__*, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <009BCA42> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<CUtlStringToken, RenderDescriptorSetHandle_t__*>, 4>(void)
{
} /* size: 0 */

// <009BCA04> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlLinkedListElem_t<CShaderVulkanBase*, int>, 8>(void)
{
} /* size: 0 */

// <009BC969> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlLinkedListElem_t<VulkanSemaphore_t*, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <009BC876> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, VulkanDeviceSpecificTexture_t, unsigned int, CDefLess<CWeakHandle<InfoForResourceTypeCTextureBase> > >::Node_t, unsigned int>, 8>(void)
{
} /* size: 0 */

// <009BC67F> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<RenderResourceHandle_t__*, VulkanDeviceSpecificBuffer_t, unsigned int, CDefLess<RenderResourceHandle_t__*> >::Node_t, unsigned int>, 8>(void)
{
} /* size: 0 */

// <009BC488> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<RenderDescriptorSetHandle_t__*, VulkanDeviceSpecificDescriptorSet_t, unsigned int, CDefLess<RenderDescriptorSetHandle_t__*> >::Node_t, unsigned int>, 8>(void)
{
} /* size: 0 */

// <009BC291> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<RenderRayTracePipelineHandle_t__*, VulkanDeviceSpecificRayTracePipeline_t, unsigned int, CDefLess<RenderRayTracePipelineHandle_t__*> >::Node_t, unsigned int>, 8>(void)
{
} /* size: 0 */

// <009B7821> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<VkDescriptorPoolSize, 4>(void)
{
} /* size: 0 */

// <009B6A7F> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CShaderVulkanBase::DescriptorSetBindings_t, 8>(void)
{
} /* size: 0 */

// <009B6905> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >::Node_t, short unsigned int>, 4>(void)
{
} /* size: 0 */

// <009B664F> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, 4>(void)
{
} /* size: 0 */

// <009B6488> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<HiddenUAVCounter_t, 1>(void)
{
} /* size: 0 */

// <009B52A2> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<RenderDescriptorSetHandle_t__*, 8>(void)
{
} /* size: 0 */

// <009B47E3> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerStateDesc>, CThreadSpinRWLock>::HashFixedDataInternal_t<CSamplerStateBinding>, 8>(void)
{
} /* size: 0 */

// <009B4719> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan*>, 4>(void)
{
} /* size: 0 */

// <009AE981> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlTSHashBase<ConcatLayoutResult_t, 1024, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRWLock>::HashFixedDataInternal_t<ConcatLayoutResult_t>, 8>(void)
{
} /* size: 0 */

// <009AAB40> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CRenderDeviceVulkan::VulkanTextureReleaseResources_t, 8>(void)
{
} /* size: 0 */

// <009AAAC3> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlLinkedListElem_t<CShaderVulkanBase, long long int>, 8>(void)
{
} /* size: 0 */

// <009AAA87> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlLinkedListElem_t<CVertexShaderVulkan, long long int>, 8>(void)
{
} /* size: 0 */

// <009AA8F3> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int>, 8>(void)
{
} /* size: 0 */

// <009AA8CE> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int>, 8>(void)
{
} /* size: 0 */

// <009AA8A9> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlLinkedListElem_t<BlendStateVulkan_t, long long int>, 8>(void)
{
} /* size: 0 */

// <009AA846> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlLinkedListElem_t<CDescriptorSetVulkan*, long long int>, 8>(void)
{
} /* size: 0 */

// <008C06E1> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<VulkanPhysicalDeviceInfo_t, 8>(void)
{
} /* size: 0 */

// <008C064A> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<VkValidationFeatureDisableEXT, 4>(void)
{
} /* size: 0 */

// <008C05F3> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<VkValidationFeatureEnableEXT, 4>(void)
{
} /* size: 0 */

// <008C0522> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<VkPhysicalDeviceType, 4>(void)
{
} /* size: 0 */

// <00836AF1> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<DynamicVertexBufferHandle_t__*, 8>(void)
{
} /* size: 0 */

// <00836A9A> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<DynamicIndexBufferHandle_t__*, 8>(void)
{
} /* size: 0 */

// <00836861> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlLinkedListElem_t<QueryObjectInternalVulkan_t*, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <008351D9> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int>, 8>(void)
{
} /* size: 0 */

// <007A95C6> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<VkAccelerationStructureGeometryKHR, 8>(void)
{
} /* size: 0 */

// <007A94FC> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<VkAccelerationStructureBuildRangeInfoKHR, 4>(void)
{
} /* size: 0 */

// <007A9432> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<const VkAccelerationStructureBuildRangeInfoKHR*, 8>(void)
{
} /* size: 0 */

// <007A934F> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<RenderBLASHandle_t__*, 8>(void)
{
} /* size: 0 */

// <007A91E3> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<VkRayTracingShaderGroupCreateInfoKHR, 8>(void)
{
} /* size: 0 */

// <007A918C> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<VkPipelineShaderStageCreateInfo, 8>(void)
{
} /* size: 0 */

// <007A8FCC> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<VkDescriptorSetLayout_T*, 8>(void)
{
} /* size: 0 */

// <006FDBA6> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t*>, 4>(void)
{
} /* size: 0 */

// <006FDB81> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlLinkedListElem_t<PipelineObjectVulkan_t*, int>, 8>(void)
{
} /* size: 0 */

// <006FDAFF> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<VkRenderPass_T*, empty_t>, 4>(void)
{
} /* size: 0 */

// <006FDADA> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>, 4>(void)
{
} /* size: 0 */

// <006FD02C> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlLinkedListElem_t<PipelineCreateInfo_t, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <006FA5AA> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<VkVertexInputBindingDescription, 4>(void)
{
} /* size: 0 */

// <006FA512> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<VkPipelineColorBlendAttachmentState, 4>(void)
{
} /* size: 0 */

// <006FA340> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<VkDynamicState, 4>(void)
{
} /* size: 0 */

// <006F8E82> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<VkPipeline_T*, 8>(void)
{
} /* size: 0 */

// <006F8D47> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<const CDescriptorSetVulkan*, 8>(void)
{
} /* size: 0 */

// <006F896B> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<VkPipelineCache_T*, 8>(void)
{
} /* size: 0 */

// <006F0CA4> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlLinkedListElem_t<VkSampler_T*, long long int>, 8>(void)
{
} /* size: 0 */

// <00654E2D> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<long unsigned int, CSamplerStateDesc*, short unsigned int, CDefLess<long unsigned int> >::Node_t, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <00654C36> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t*, short unsigned int, CDefLess<long unsigned int> >::Node_t, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <00654A63> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t*, short unsigned int, CDefLess<long unsigned int> >::Node_t, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <00654890> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t*, short unsigned int, CDefLess<long unsigned int> >::Node_t, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <006546BD> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t*, unsigned int, CDefLess<long unsigned int> >::Node_t, unsigned int>, 8>(void)
{
} /* size: 0 */

// <006544C6> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeGraphicsPipeline_t*, unsigned int, CDefLess<long unsigned int> >::Node_t, unsigned int>, 8>(void)
{
} /* size: 0 */

// <006542CF> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeComputePipeline_t*, unsigned int, CDefLess<long unsigned int> >::Node_t, unsigned int>, 8>(void)
{
} /* size: 0 */

// <006540D8> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<const CShaderVulkanBase*, CUtlLinkedList<CFossilizeStateCreator::FossilizeShaderModule_t*>*, short unsigned int, CDefLess<const CShaderVulkanBase*> >::Node_t, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <0064DA09> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlLinkedListElem_t<const CFossilizeStateCreator::FossilizeGraphicsPipeline_t*, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <0064D96E> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlLinkedListElem_t<const CFossilizeStateCreator::FossilizeComputePipeline_t*, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <0064D8D3> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase*>, 4>(void)
{
} /* size: 0 */

// <0064B67E> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlLinkedListElem_t<CFossilizeStateCreator::FossilizeShaderModule_t*, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <0064A1FC> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<long unsigned int, 8>(void)
{
} /* size: 0 */

// <0064A10E> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<Fossilize::ResourceTag, 4>(void)
{
} /* size: 0 */

// <005D8258> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CIndexBufferVulkan*, 8>(void)
{
} /* size: 0 */

// <005D8052> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<VulkanDynamicDescriptorSet_t*, 8>(void)
{
} /* size: 0 */

// <005D7C5D> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int>, 8>(void)
{
} /* size: 0 */

// <00585594> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlLinkedListElem_t<CMemoryManagerVulkan::FencedResourceList_t, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <005853AE> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CMemoryManagerVulkan::VmaQueuedResourceMove_t, 8>(void)
{
} /* size: 0 */

// <00585388> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlLinkedListElem_t<CMemoryManagerVulkan::VmaQueuedDeletion_t, unsigned int>, 8>(void)
{
} /* size: 0 */

// <005852BA> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CRefCounted<CRefCountServiceBase<true, CRefMT> >*, 8>(void)
{
} /* size: 0 */

// <00584AF1> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlLinkedListElem_t<VulkanMemoryPool_t*, long long int>, 8>(void)
{
} /* size: 0 */

// <005439AF> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<VkVertexInputAttributeDescription, 4>(void)
{
} /* size: 0 */

// <00543958> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlTSHashBase<InputLayoutVulkan_t*, 16, long long int, CUtlTSHashGenericHashMethod<long long int>, CThreadSpinRWLock>::HashFixedDataInternal_t<InputLayoutVulkan_t*>, 8>(void)
{
} /* size: 0 */

// <004FD9A8> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<VkImageMemoryBarrier, 8>(void)
{
} /* size: 0 */

// <004D6464> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T*>, 4>(void)
{
} /* size: 0 */

// <004D643F> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T*>, 4>(void)
{
} /* size: 0 */

// <004D4E3F> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<VulkanFramebufferState_t, 8>(void)
{
} /* size: 0 */

// <004A6504> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlVector<VkDescriptorSetLayoutBinding>, 8>(void)
{
} /* size: 0 */

// <004A643D> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<PipelineLayoutImmutableSampler_t, 4>(void)
{
} /* size: 0 */

// <004A5B0C> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<VkDescriptorBufferInfo, 8>(void)
{
} /* size: 0 */

// <004A598A> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<VkWriteDescriptorSetAccelerationStructureKHR, 8>(void)
{
} /* size: 0 */

// <004A4BE4> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<VkDescriptorSetLayoutBinding, 8>(void)
{
} /* size: 0 */

// <00447F67> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CBufferedDescriptorSetVulkan::Set, 8>(void)
{
} /* size: 0 */

// <00447E85> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<RenderResourceHandle_t__*, RenderDescriptorBinding_t>, 4>(void)
{
} /* size: 0 */

// <0042614E> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CBarrierHelperVulkan::BufferState_t, 8>(void)
{
} /* size: 0 */

// <00426079> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CBarrierHelperVulkan::UAVState_t, 8>(void)
{
} /* size: 0 */

// <00425EAE> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<RenderBufferBarrier_t, 8>(void)
{
} /* size: 0 */

// <00425E1A> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<RenderUAVBarrier_t, 8>(void)
{
} /* size: 0 */

// <0040943E> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CAsyncCompileHelperVulkan::ShaderWaitEntry_t, 8>(void)
{
} /* size: 0 */

// <002FB10F> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CTextureManagerBase::CacheRequest_t, 8>(void)
{
} /* size: 0 */

// <002FB061> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<ResourceLoadCompletedMessage_t, 8>(void)
{
} /* size: 0 */

// <002FAFF1> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<ResourceLoadFailedMessage_t, 8>(void)
{
} /* size: 0 */

// <002FAF9A> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CTextureInfoId, 4>(void)
{
} /* size: 0 */

// <002FADCF> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<std::pair<ResourceId_t, long unsigned int>, 8>(void)
{
} /* size: 0 */

// <002FAD5F> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CTextureManagerBase::ExternalTextureInfo_t, 8>(void)
{
} /* size: 0 */

// <002FA7D2> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CTextureManagerBase::ToCacheHandle_t, 8>(void)
{
} /* size: 0 */

// <002A1B3E> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod<CTextureSequenceHashKey_t>, CThreadSpinRWLock>::HashFixedDataInternal_t<CTextureSequenceRecord_t>, 8>(void)
{
} /* size: 0 */

// <001E3EDA> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CRenderDeviceMgrBase::AdapterInfo_t, 8>(void)
{
} /* size: 0 */

// <001E3E19> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<void (*)(), 8>(void)
{
} /* size: 0 */

// <001E3DA9> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<IRenderDeviceEventListener*, 8>(void)
{
} /* size: 0 */

// <001726BF> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CRenderDeviceBase::FencedWaitingList_t<void, void>, 8>(void)
{
} /* size: 0 */

// <0016F1C5> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CRenderDeviceBase::MultiViewCBPool_t, 8>(void)
{
} /* size: 0 */

// <0016EFD4> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<IMaxSwapChainDimensionsChangedListener*, 8>(void)
{
} /* size: 0 */

// <0016EF1A> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CRenderDeviceBase::PerFrameMemoryStack_t*, 8>(void)
{
} /* size: 0 */

// <0016E7CD> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlTSHashBase<void*, 1024, RsRasterizerStateDesc_t, CUtlTSHashUseKeyHashMethod<RsRasterizerStateDesc_t>, CThreadSpinRWLock>::HashFixedDataInternal_t<void*>, 8>(void)
{
} /* size: 0 */

// <0016E7A8> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlTSHashBase<void*, 1024, RsDepthStencilStateDesc_t, CUtlTSHashUseKeyHashMethod<RsDepthStencilStateDesc_t>, CThreadSpinRWLock>::HashFixedDataInternal_t<void*>, 8>(void)
{
} /* size: 0 */

// <0016E783> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlTSHashBase<void*, 1024, RsBlendStateDesc_t, CUtlTSHashUseKeyHashMethod<RsBlendStateDesc_t>, CThreadSpinRWLock>::HashFixedDataInternal_t<void*>, 8>(void)
{
} /* size: 0 */

// <0016E41C> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlLinkedListElem_t<CSwapChainBase*, long long int>, 8>(void)
{
} /* size: 0 */

// <000F77EB> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CCommandBufferChunk, 1>(void)
{
} /* size: 0 */

// <000F77C6> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CMediumCommandBufferChunk, 1>(void)
{
} /* size: 0 */

// <000F77A1> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CLargeCommandBufferChunk, 1>(void)
{
} /* size: 0 */

// <000F6BD8> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<IRenderContext*, 8>(void)
{
} /* size: 0 */

// <000839DC> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<RBNode_t*, int>, 8>(void)
{
} /* size: 0 */

// <0007847C> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int>, 8>(void)
{
} /* size: 0 */

// <0029187F> ../../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<CUtlString, CBufferString>, 4>(void)
{
} /* size: 0 */

// <00291828> ../../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CVfxFunctionAttribute, 8>(void)
{
} /* size: 0 */

// <0028E3F9> ../../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CStreamRewriter::RewriteCmd_t, 8>(void)
{
} /* size: 0 */

// <0022D964> ../../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<LineInfo_t, 8>(void)
{
} /* size: 0 */

// <0017448D> ../../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounterMapping_t, 8>(void)
{
} /* size: 0 */

// <00174418> ../../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounterMappingDXC_t, 8>(void)
{
} /* size: 0 */

// <0012C1D6> ../../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CVfxSpirVReflect::BindingNumberChange_t, 4>(void)
{
} /* size: 0 */

// <000B9ACA> ../../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CVfxParsedShaderParam*, 8>(void)
{
} /* size: 0 */

// <000B9A14> ../../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <000B9540> ../../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<VfxUniformInfo_t, 8>(void)
{
} /* size: 0 */

// <000B9451> ../../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<VfxUniformBlockInfo_t, 8>(void)
{
} /* size: 0 */

// <000B92C0> ../../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<VfxParsedInputSignatureElement_t*, 8>(void)
{
} /* size: 0 */

// <000B9250> ../../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<VfxShaderMacro_t, 8>(void)
{
} /* size: 0 */

// <000B91A1> ../../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam*>::Node_t, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <000B8F5A> ../../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CVfxStructDecl*, 8>(void)
{
} /* size: 0 */

// <00052E82> ../../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<VfxCompileTarget_t, 4>(void)
{
} /* size: 0 */

// <005A4010> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlStringTokenSystem::TokenPairing_t, 8>(void)
{
} /* size: 0 */

// <005A3F43> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlTSHashBase<CUtlStringTokenSystem::CTokenStringAndSource, 512, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRWLock>::HashFixedDataInternal_t<CUtlStringTokenSystem::CTokenStringAndSource>, 8>(void)
{
} /* size: 0 */

// <005648AB> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlVector<CUtlHashDict<void*>::Entry_t, CUtlMemory<CUtlHashDict<void*>::Entry_t, int> >, 8>(void)
{
} /* size: 0 */

// <005644F3> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashDict<void*>::Entry_t, 8>(void)
{
} /* size: 0 */

// <00531D21> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtl3DAllocator2::Node3D_t, 4>(void)
{
} /* size: 0 */

// <004CD42D> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CThreadLocalScope::CScopeCreatedOrDestroyedHandler, 8>(void)
{
} /* size: 0 */

// <004CD375> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CThreadLocalScope, 8>(void)
{
} /* size: 0 */

// <004B3D9B> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<char const*, int, short unsigned int, bool (*)(char const* const&, char const* const&)>::Node_t, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <004A2208> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<char const*, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <004A153C> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CCountedStringPool::hash_item_t, 8>(void)
{
} /* size: 0 */

// <0048A84D> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CThreadFastMutex, 8>(void)
{
} /* size: 0 */

// <003FF2F9> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<MatrixMath::MatrixElementToCopy_t, 4>(void)
{
} /* size: 0 */

// <003D7F83> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlLinkedListElem_t<CProcess*, long long int>, 8>(void)
{
} /* size: 0 */

// <00381DFE> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CBufferStringN<200>, 8>(void)
{
} /* size: 0 */

// <002A7ED0> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<TSPointerListNode_t, 16>(void)
{
} /* size: 0 */

// <002A584A> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<void*, int>, 8>(void)
{
} /* size: 0 */

// <002A3C85> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlMemoryBlockAllocator::MemPage_t, 8>(void)
{
} /* size: 0 */

// <0025C607> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<KeyValues, 1>(void)
{
} /* size: 0 */

// <0025BA2C> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<unsigned int, CKeyValuesSystem::SharedStringData_t*>, 4>(void)
{
} /* size: 0 */

// <0025B9EE> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<CKeyValuesSystem::SharedStringData_t*, CInterlockedIntT<int> >, 4>(void)
{
} /* size: 0 */

// <0025B85C> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<HKeySymbol, bool>::Node_t, short unsigned int>, 4>(void)
{
} /* size: 0 */

// <002376F9> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<KVJSONParserStackEntry_t, 8>(void)
{
} /* size: 0 */

// <001CAB7C> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CExecMultiWorkerJob, 8>(void)
{
} /* size: 0 */

// <001C9C0F> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<ThreadMultiWaitExtra_t, 4>(void)
{
} /* size: 0 */

// <001C9988> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CAsyncScheduledFunctionManager::scheduled_call_t, 8>(void)
{
} /* size: 0 */

// <001C98A5> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<ThreadPoolTest::CCountJob, 8>(void)
{
} /* size: 0 */

// <00196B9C> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CFilterString::MatchString_t, 8>(void)
{
} /* size: 0 */

// <00153451> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CFiberJobPool, 8>(void)
{
} /* size: 0 */

// <0015342B> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CFiber, 8>(void)
{
} /* size: 0 */

// <00127753> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlTSHashBase<CEventId, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRWLock>::HashFixedDataInternal_t<CEventId>, 16>(void)
{
} /* size: 0 */

// <001276FE> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int>, 8>(void)
{
} /* size: 0 */

// <00118796> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHandleTable<void, 16>::EntryType_t, 8>(void)
{
} /* size: 0 */

// <000CA22E> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CCvar::QueuedConVarSet_t, 8>(void)
{
} /* size: 0 */

// <000C9E97> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int>, 8>(void)
{
} /* size: 0 */

// <0000D6BC> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<COrderedInitShutdownRefWrapper<OrderedInit_Platform>, 1>(void)
{
} /* size: 0 */

// <001612EE> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<unsigned int, const CResourceDiskStruct*>, 4>(void)
{
} /* size: 0 */

// <001612C9> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<unsigned int, const CResourceDiskEnum*>, 4>(void)
{
} /* size: 0 */

// <001612A4> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<long long unsigned int, char const*>, 4>(void)
{
} /* size: 0 */

// <0016127F> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*>, 4>(void)
{
} /* size: 0 */

// <00161241> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<const CResourceDiskStructField*, empty_t>, 4>(void)
{
} /* size: 0 */

// <00130DA5> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSchemaSystem::DumpMetaStats(char const*)::MetaCountRef_t, 4>(void)
{
} /* size: 0 */

// <000C30B5> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<_PlatModule_t*, 8>(void)
{
} /* size: 0 */

// <000C3045> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSchemaSystem::DetectedSchemaMismatch_t, 8>(void)
{
} /* size: 0 */

// <000C2B0E> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<CSchemaType*, CSchemaType_Ptr*, short unsigned int, bool (*)(CSchemaType* const&, CSchemaType* const&)>::Node_t, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <000C28AE> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<int, CSchemaType_Atomic*, short unsigned int, bool (*)(int const&, int const&)>::Node_t, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <000C264E> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T*, short unsigned int, bool (*)(const AtomicTypeInfo_T_t&, const AtomicTypeInfo_T_t&)>::Node_t, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <000C23EE> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT*, short unsigned int, bool (*)(const AtomicTypeInfo_T_t&, const AtomicTypeInfo_T_t&)>::Node_t, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <000C218E> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT*, short unsigned int, bool (*)(const AtomicTypeInfo_TT_t&, const AtomicTypeInfo_TT_t&)>::Node_t, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <000C1F2E> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I*, short unsigned int, bool (*)(const AtomicTypeInfo_I_t&, const AtomicTypeInfo_I_t&)>::Node_t, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <000C1CCE> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<unsigned int, CSchemaType_DeclaredClass*, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>::Node_t, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <000C1A6E> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<unsigned int, CSchemaType_DeclaredEnum*, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>::Node_t, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <000C180E> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<int, const SchemaAtomicTypeInfo_t*, short unsigned int, bool (*)(int const&, int const&)>::Node_t, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <000C15AE> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray*, short unsigned int, bool (*)(const TypeAndCountInfo_t&, const TypeAndCountInfo_t&)>::Node_t, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <000C134E> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<int, CSchemaType_Bitfield*, short unsigned int, bool (*)(int const&, int const&)>::Node_t, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <000B9B23> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSchemaClassInfo*, 8>(void)
{
} /* size: 0 */

// <000B9960> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSchemaEnumInfo*, 8>(void)
{
} /* size: 0 */

// <000B8FE4> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlTSHashBase<CSchemaClassInfoSynth*, 256, const CSchemaClassInfo*, CUtlTSHashGenericHashMethod<const CSchemaClassInfo*>, CThreadSpinRWLock>::HashFixedDataInternal_t<CSchemaClassInfoSynth*>, 8>(void)
{
} /* size: 0 */

// <000B8FBF> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlTSHashBase<CSchemaEnumInfoSynth*, 256, const CSchemaEnumInfo*, CUtlTSHashGenericHashMethod<const CSchemaEnumInfo*>, CThreadSpinRWLock>::HashFixedDataInternal_t<CSchemaEnumInfoSynth*>, 8>(void)
{
} /* size: 0 */

// <000B81BB> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlTSHashBase<CSchemaClassInfo*, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRWLock>::HashFixedDataInternal_t<CSchemaClassInfo*>, 8>(void)
{
} /* size: 0 */

// <000B8196> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlTSHashBase<CSchemaEnumInfo*, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRWLock>::HashFixedDataInternal_t<CSchemaEnumInfo*>, 8>(void)
{
} /* size: 0 */

// <000B194C> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSchemaType*, 8>(void)
{
} /* size: 0 */

// <000B18DC> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSchemaType_Ptr*, 8>(void)
{
} /* size: 0 */

// <000B0896> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSchemaType_Atomic*, 8>(void)
{
} /* size: 0 */

// <000AF71C> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSchemaType_Atomic_T*, 8>(void)
{
} /* size: 0 */

// <000AE63A> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSchemaType_Atomic_CollectionOfT*, 8>(void)
{
} /* size: 0 */

// <000AC636> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<AtomicTypeInfo_I_t, 4>(void)
{
} /* size: 0 */

// <000AC59E> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSchemaType_Atomic_I*, 8>(void)
{
} /* size: 0 */

// <000AB558> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSchemaType_DeclaredClass*, 8>(void)
{
} /* size: 0 */

// <000AA49A> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSchemaType_DeclaredEnum*, 8>(void)
{
} /* size: 0 */

// <000A946C> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CSchemaType_FixedArray*, 8>(void)
{
} /* size: 0 */

// <00400375> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CMeshInstance*, 8>(void)
{
} /* size: 0 */

// <003FFC40> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<const CRenderMesh*, CMeshRayTrace*>::Node_t, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <00217F40> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<SkeletonMeshVertex_t, 4>(void)
{
} /* size: 0 */

// <00166B48> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<RuntimeBuffersInfo_t::BufferInfo_t, 8>(void)
{
} /* size: 0 */

// <00165753> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CModelTypeManager::AsyncProcessDataResults::MeshData*, 8>(void)
{
} /* size: 0 */

// <00164B88> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CStrongHandleCopyable<InfoForResourceTypeCModel>, 8>(void)
{
} /* size: 0 */

// <00164B4A> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>, 8>(void)
{
} /* size: 0 */

// <00077E79> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CMeshInstance_Imp, 8>(void)
{
} /* size: 0 */

// <00CA2056> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, 4>(void)
{
} /* size: 0 */

// <005B129A> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CPlatformFont::abc_cache_t, short unsigned int>, 4>(void)
{
} /* size: 0 */

// <005B10C2> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CPlatformFont::kerned_abc_cache_t, short unsigned int>, 4>(void)
{
} /* size: 0 */

// <00579337> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <005792C7> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CTextureDictionary::DeferredResourceLoads_t, 8>(void)
{
} /* size: 0 */

// <0053218D> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<unsigned int, CFontTextureCache::Page_t>::Node_t, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <0052B4F4> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CFontTextureCache::Page_t, 8>(void)
{
} /* size: 0 */

// <0052B4CF> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, 4>(void)
{
} /* size: 0 */

// <004F5278> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int>::Node_t, int>, 8>(void)
{
} /* size: 0 */

// <004F51C9> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<short unsigned int, CFontManager::CFontDataFile, int>::Node_t, int>, 8>(void)
{
} /* size: 0 */

// <004F5159> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CFontManager::CustomFontInfo_t, 4>(void)
{
} /* size: 0 */

// <004F50E9> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<FontAliasList_t*, 8>(void)
{
} /* size: 0 */

// <004304DD> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlVector<IQueuedRenderable*>, 8>(void)
{
} /* size: 0 */

// <00430447> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int>, 4>(void)
{
} /* size: 0 */

// <0042CFB2> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<IQueuedRenderable*, 8>(void)
{
} /* size: 0 */

// <002ED7E9> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashtableEntry<SpamKey_t, empty_t>, 4>(void)
{
} /* size: 0 */

// <00267D6D> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<texture_use_info_t, 8>(void)
{
} /* size: 0 */

// <00153F64> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CMaterialLayer::CommandBufferInfo_t, 8>(void)
{
} /* size: 0 */

// <0008D96A> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CMaterialSystem2::ModeInfo_t, 8>(void)
{
} /* size: 0 */

// <0008D85D> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CMaterial2*, 8>(void)
{
} /* size: 0 */

// <0008C8C5> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CWeakHandle<InfoForResourceTypeCVfx>, 8>(void)
{
} /* size: 0 */

// <0008C2DE> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CMaterialMode, 8>(void)
{
} /* size: 0 */

// <00044D19> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>::Node_t, 8>(void)
{
} /* size: 0 */

// <00044C5E> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CLocalize::LocalizedString_t, 4>(void)
{
} /* size: 0 */

// <00044BF8> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CLocalize::LocalizationFileInfo_t, 8>(void)
{
} /* size: 0 */

// <00044AF4> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>::Node_t, 8>(void)
{
} /* size: 0 */

// <00044A20> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CLocalize::ChangeCallback_t, 8>(void)
{
} /* size: 0 */

// <00044957> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<LocalizationFileInfoRaw_t, 8>(void)
{
} /* size: 0 */

// <00044548> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>::HashBucket_t, 4>(void)
{
} /* size: 0 */

// <00044465> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>::HashBucket_t, 4>(void)
{
} /* size: 0 */

// <0020EB59> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t>&, const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >&)::FileSort_t, int>, 8>(void)
{
} /* size: 0 */

// <0020D995> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<FileHandleTracker_t, 8>(void)
{
} /* size: 0 */

// <0015BE89> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CZipFile::CZipEntry, int>, 8>(void)
{
} /* size: 0 */

// <00159A5C> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlLinkedListElem_t<CZip*, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <0014267F> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<int, long long unsigned int>::Node_t, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <000BFBFE> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CBaseFileSystem::SearchPathStateEntry_t, 8>(void)
{
} /* size: 0 */

// <000BF821> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<void (*)(char const*, char const*), 8>(void)
{
} /* size: 0 */

// <000BF7B1> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CBaseFileSystem::CSearchPath, 8>(void)
{
} /* size: 0 */

// <000BF741> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CBaseFileSystem::CPathIDInfo*, 8>(void)
{
} /* size: 0 */

// <000BF566> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CBaseFileSystem::COpenedFile, 8>(void)
{
} /* size: 0 */

// <000BF4B7> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<CUtlString, CBaseFileSystem::SymLink_t>::Node_t, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <000BF464> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int>, 8>(void)
{
} /* size: 0 */

// <000BE3A4> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CUtlSymbol, 2>(void)
{
} /* size: 0 */

// <000B9129> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlRBTreeNode_t<CUtlMap<char const*, FixupSearchCacheEntry, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, 8>(void)
{
} /* size: 0 */

// <000B6625> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int>, 8>(void)
{
} /* size: 0 */

// <00045C8C> ../public/tier0/platform_compile_base.h:1566
inline void ValidateAlignmentExplicit<CAsyncFileSystem2::CIOServiceThread*, 8>(void)
{
} /* size: 0 */

// <06F1F1E7> ../../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CFeAgglomerator::CCluster*>(void)
{
} /* size: 0 */

// <06F1F086> ../../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CFeAgglomerator::CLink>(void)
{
} /* size: 0 */

// <06D4B0E9> ../../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<filterstate_t>(void)
{
} /* size: 0 */

// <06AAEEFD> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<CVfxHashValue, int, int>::Node_t, int> >(void)
{
} /* size: 0 */

// <06AAE81F> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CVfxByteCodeManager::ByteCodeInfo_t>(void)
{
} /* size: 0 */

// <06AAE77E> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t*, int>::Node_t, int> >(void)
{
} /* size: 0 */

// <06AADDC9> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlLinkedListElem_t<CVfxByteCodeManager::DynamicComboInfo_t, int> >(void)
{
} /* size: 0 */

// <06A5DF87> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CVfxStackMachineBuilder::Constant_t>(void)
{
} /* size: 0 */

// <06A5DEF4> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<CUtlString, bool>::Node_t, short unsigned int> >(void)
{
} /* size: 0 */

// <069E3B26> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<unsigned int, int, int>::Node_t, int> >(void)
{
} /* size: 0 */

// <068EC83E> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CVfxVariableIndexArray>(void)
{
} /* size: 0 */

// <068EC7CF> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CVfxVariableIndexRefArray>(void)
{
} /* size: 0 */

// <068EC760> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<ConstantBufferBindInfo_t>(void)
{
} /* size: 0 */

// <068EC6F1> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<RsRasterizerStateHandle_t__*>(void)
{
} /* size: 0 */

// <068EC682> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<RsDepthStencilStateHandle_t__*>(void)
{
} /* size: 0 */

// <068EC613> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<RsBlendStateHandle_t__*>(void)
{
} /* size: 0 */

// <068EC535> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<RenderShaderHandle_t__*>(void)
{
} /* size: 0 */

// <068EC3E9> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CVfxModeSettings>(void)
{
} /* size: 0 */

// <068EBB17> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<unsigned int, CVfxStaticComboData::ComputeVariablesUsedInStaticCombo(const CVfxProgramData*)::BindInfo_t, int>::Node_t, int> >(void)
{
} /* size: 0 */

// <068EAD1F> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CVfxCombo>(void)
{
} /* size: 0 */

// <068EACB0> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlVector<VsInputSignatureElement_t> >(void)
{
} /* size: 0 */

// <068EAB80> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CVfxStaticComboVcsEntry>(void)
{
} /* size: 0 */

// <068E9E97> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<SerializeStaticCombosWorkUnit_t>(void)
{
} /* size: 0 */

// <068E973C> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CVfxMode>(void)
{
} /* size: 0 */

// <068E8ED7> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<long long unsigned int, bool, unsigned int>::Node_t, unsigned int> >(void)
{
} /* size: 0 */

// <068E86E9> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int, int>::Node_t, int> >(void)
{
} /* size: 0 */

// <068E84CD> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<CUtlString, empty_t> >(void)
{
} /* size: 0 */

// <068E1968> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CVfxStaticComboData>(void)
{
} /* size: 0 */

// <066550C4> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<VectorAligned>(void)
{
} /* size: 0 */

// <064C8FEB> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<matrix3x4_t>(void)
{
} /* size: 0 */

// <064C66D9> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<const CPhysAggregateData*>(void)
{
} /* size: 0 */

// <064C65CA> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<const CPhysSurfaceProperties*>(void)
{
} /* size: 0 */

// <064C644B> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CPhysBodyDesc::SphereAndAttr_t>(void)
{
} /* size: 0 */

// <064C6384> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CPhysBodyDesc::CapsuleAndAttr_t>(void)
{
} /* size: 0 */

// <064C62BD> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CPhysBodyDesc::HullAndAttr_t>(void)
{
} /* size: 0 */

// <064C61F6> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CPhysBodyDesc::MeshAndAttr_t>(void)
{
} /* size: 0 */

// <064C367A> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CJointIndexData>(void)
{
} /* size: 0 */

// <064C30BC> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<const VPhysXBodyPart_t*>(void)
{
} /* size: 0 */

// <062E94BD> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<TriangleBounds_t>(void)
{
} /* size: 0 */

// <062E8FC8> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<RayTracingResult_t>(void)
{
} /* size: 0 */

// <06190BC5> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<RayTracingSingleResult_t>(void)
{
} /* size: 0 */

// <06190A32> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<BentNormalComputationJob_t>(void)
{
} /* size: 0 */

// <0614C787> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<edge_queue_entry_t>(void)
{
} /* size: 0 */

// <0614BD56> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CQEMEdge>(void)
{
} /* size: 0 */

// <0614BC8F> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CQuadricError>(void)
{
} /* size: 0 */

// <0614BBC8> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CVertVisit>(void)
{
} /* size: 0 */

// <0614ABA6> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<vertex_triangle_t>(void)
{
} /* size: 0 */

// <06080414> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CModelStreamAccessor>(void)
{
} /* size: 0 */

// <0608034D> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CModelMesh::VertexStreamIndex_t>(void)
{
} /* size: 0 */

// <0607FA26> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int> >(void)
{
} /* size: 0 */

// <0607F667> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> >(void)
{
} /* size: 0 */

// <0607B152> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> >(void)
{
} /* size: 0 */

// <0607A90A> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int> >(void)
{
} /* size: 0 */

// <0607A306> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t> >(void)
{
} /* size: 0 */

// <06079CD9> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty_t> >(void)
{
} /* size: 0 */

// <06079BB7> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, empty_t> >(void)
{
} /* size: 0 */

// <06078E94> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<int, empty_t> >(void)
{
} /* size: 0 */

// <06078650> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<TransferVertex_t>(void)
{
} /* size: 0 */

// <06070FDC> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<ModelMeshIntFloat_t>(void)
{
} /* size: 0 */

// <05FD2866> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CModelStream*>(void)
{
} /* size: 0 */

// <05F69B1E> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>(void)
{
} /* size: 0 */

// <05F697FC> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>(void)
{
} /* size: 0 */

// <05F639E0> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t> >(void)
{
} /* size: 0 */

// <05EE3E1D> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentEntry_t>(void)
{
} /* size: 0 */

// <05EE3DAA> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentReference_t>(void)
{
} /* size: 0 */

// <05EE3D37> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>::ComponentEntry_t>(void)
{
} /* size: 0 */

// <05EE3CC4> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>::ComponentReference_t>(void)
{
} /* size: 0 */

// <05EE3C51> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>::ComponentEntry_t>(void)
{
} /* size: 0 */

// <05EE3BDE> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>::ComponentReference_t>(void)
{
} /* size: 0 */

// <05EE3A8F> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<HullIfrSourceTriangle_t>(void)
{
} /* size: 0 */

// <05EE3A5B> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t> >(void)
{
} /* size: 0 */

// <05EE3922> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>::ComponentHandleWithListPointer_t>(void)
{
} /* size: 0 */

// <05EE2008> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>(void)
{
} /* size: 0 */

// <05E5C943> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentEntry_t>(void)
{
} /* size: 0 */

// <05E5C8D0> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentReference_t>(void)
{
} /* size: 0 */

// <05E5C85D> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::ComponentEntry_t>(void)
{
} /* size: 0 */

// <05E5C7EA> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::ComponentReference_t>(void)
{
} /* size: 0 */

// <05E5C777> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::ComponentEntry_t>(void)
{
} /* size: 0 */

// <05E5C704> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::ComponentReference_t>(void)
{
} /* size: 0 */

// <05E5C63D> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>(void)
{
} /* size: 0 */

// <05E5C5CA> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t> >(void)
{
} /* size: 0 */

// <05E59A99> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<HullIVRHole_t::Tri_t*>(void)
{
} /* size: 0 */

// <05E56729> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CHullIVR::StraightenAllFaces()::Face_t>(void)
{
} /* size: 0 */

// <05E56495> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CHullIVR::VertexSet_t*>(void)
{
} /* size: 0 */

// <05E56378> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::ComponentHandleWithListPointer_t>(void)
{
} /* size: 0 */

// <05E5627C> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, Vector> >(void)
{
} /* size: 0 */

// <05E5606F> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, empty_t> >(void)
{
} /* size: 0 */

// <05DD8AEC> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<qhVector3>(void)
{
} /* size: 0 */

// <05DD89B4> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<qhPlane>(void)
{
} /* size: 0 */

// <05DD868D> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<const qhFace*, int> >(void)
{
} /* size: 0 */

// <05DD8488> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t>(void)
{
} /* size: 0 */

// <05DD8415> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_t>(void)
{
} /* size: 0 */

// <05DD83A2> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentEntry_t>(void)
{
} /* size: 0 */

// <05DD832F> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentReference_t>(void)
{
} /* size: 0 */

// <05DD82BC> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentEntry_t>(void)
{
} /* size: 0 */

// <05DD8249> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentReference_t>(void)
{
} /* size: 0 */

// <05DD7D2B> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointer_t>(void)
{
} /* size: 0 */

// <05DD7146> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<const qhVertex*, int> >(void)
{
} /* size: 0 */

// <05DD6F79> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointer_t, 8>*>(void)
{
} /* size: 0 */

// <05DC8998> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CQuickHullSimplifier::Face_t>(void)
{
} /* size: 0 */

// <05DC886F> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CQuickHullSimplifier::Cluster_t>(void)
{
} /* size: 0 */

// <05DB5B58> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentHandleWithListPointer_t>(void)
{
} /* size: 0 */

// <05CDC25C> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<VertexMatrixPosition_t>(void)
{
} /* size: 0 */

// <05CDC0EC> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<UndirectedEdge_t, int> >(void)
{
} /* size: 0 */

// <05CDB255> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlVector<BoundaryLoopVertex_t> >(void)
{
} /* size: 0 */

// <05CDACA2> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<PossibleCorner_t>(void)
{
} /* size: 0 */

// <05CDA7F7> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlVector<unsigned int> >(void)
{
} /* size: 0 */

// <05CDA3C7> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<UndirectedEdge_t, EdgeFaceIdEntry_t> >(void)
{
} /* size: 0 */

// <05CDA180> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<BoundaryLoopVertex_t>(void)
{
} /* size: 0 */

// <05CDA0B9> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<VertexLockFlags_t>(void)
{
} /* size: 0 */

// <05C969CB> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<TriangleVertexBarycentric_t>(void)
{
} /* size: 0 */

// <05C95DB3> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<ClippedLineSegment_t>(void)
{
} /* size: 0 */

// <05C774FE> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<qhConvex*>(void)
{
} /* size: 0 */

// <05C77184> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> > >(void)
{
} /* size: 0 */

// <05C770BD> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>(void)
{
} /* size: 0 */

// <05C76FC3> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlVector<Vector> >(void)
{
} /* size: 0 */

// <05C76821> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>(void)
{
} /* size: 0 */

// <05BB129F> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CVertexKDNode>(void)
{
} /* size: 0 */

// <05BAF7A7> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<float const*>(void)
{
} /* size: 0 */

// <05BAF67F> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigned int> >(void)
{
} /* size: 0 */

// <05BAEFE0> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CMeshEdgeSplitter::HalfEdgeWithLength_t>(void)
{
} /* size: 0 */

// <05BAE346> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<MaterialParamInt_t>(void)
{
} /* size: 0 */

// <05BAE27F> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<MaterialParamFloat_t>(void)
{
} /* size: 0 */

// <05BAE1B8> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<MaterialParamVector_t>(void)
{
} /* size: 0 */

// <05BAE0F1> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<MaterialParamTexture_t>(void)
{
} /* size: 0 */

// <05B29EB6> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CGeoViewVertex>(void)
{
} /* size: 0 */

// <05A9DFC3> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CPackNode>(void)
{
} /* size: 0 */

// <057594D2> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<KeyValues3>(void)
{
} /* size: 0 */

// <0572D724> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CKV3FormatManager::Conversion_t*>(void)
{
} /* size: 0 */

// <0572D408> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<const CKV3FormatManager::Conversion_t*>(void)
{
} /* size: 0 */

// <057163C0> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<const KeyValues3*>(void)
{
} /* size: 0 */

// <056BD918> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CKV3MemberName>(void)
{
} /* size: 0 */

// <056BD6A4> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CLoadKV3FromKV1Text::CTranslationPath*>(void)
{
} /* size: 0 */

// <0568CB83> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<std::pair<void const*, unsigned int> >(void)
{
} /* size: 0 */

// <056671AB> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<std::pair<unsigned char*, unsigned int> >(void)
{
} /* size: 0 */

// <055BE08D> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlTokenReference>(void)
{
} /* size: 0 */

// <055BDFF5> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<TokenWarning_t>(void)
{
} /* size: 0 */

// <055BDF15> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CLoadKV3FromDynData::LoadedObject_t>(void)
{
} /* size: 0 */

// <055BDE4E> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CLoadKV3FromDynData::UnresolvedElementReference_t>(void)
{
} /* size: 0 */

// <0554AC0F> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CKeyValues3Cluster*>(void)
{
} /* size: 0 */

// <0554AAE6> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CKeyValues3ArrayCluster*>(void)
{
} /* size: 0 */

// <0554A9BD> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CKeyValues3TableCluster*>(void)
{
} /* size: 0 */

// <05549EDC> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<CUtlStringToken, int> >(void)
{
} /* size: 0 */

// <053EAAB5> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CBoneConstraintPoseSpaceMorph::Input_t>(void)
{
} /* size: 0 */

// <053EA44A> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CBoneConstraintPoseSpaceBone::Input_t>(void)
{
} /* size: 0 */

// <053EA379> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<QuaternionAligned>(void)
{
} /* size: 0 */

// <05388C60> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CWristBone>(void)
{
} /* size: 0 */

// <05388B99> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CFingerChain>(void)
{
} /* size: 0 */

// <0534BAF0> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CFootStride>(void)
{
} /* size: 0 */

// <052DEC76> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<MorphBundleType_t>(void)
{
} /* size: 0 */

// <052DEBAF> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CMorphData>(void)
{
} /* size: 0 */

// <052DEAE8> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CFlexDesc>(void)
{
} /* size: 0 */

// <052DEA21> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CFlexController>(void)
{
} /* size: 0 */

// <052DE95A> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CFlexRule>(void)
{
} /* size: 0 */

// <05284306> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CConstraintSlave>(void)
{
} /* size: 0 */

// <05284293> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CConstraintTarget>(void)
{
} /* size: 0 */

// <0520F0F2> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CHitBoxSet>(void)
{
} /* size: 0 */

// <0508B881> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<VPhysXBodyPart_t>(void)
{
} /* size: 0 */

// <0508B80E> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<VPhysXConstraint2_t>(void)
{
} /* size: 0 */

// <0508B728> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<VPhysXCollisionAttributes_t>(void)
{
} /* size: 0 */

// <0508677D> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<RnSoftbodyParticle_t>(void)
{
} /* size: 0 */

// <050866B6> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<RnSoftbodySpring_t>(void)
{
} /* size: 0 */

// <050865EF> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<RnSoftbodyCapsule_t>(void)
{
} /* size: 0 */

// <0501211D> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CFootTrajectory>(void)
{
} /* size: 0 */

// <0500C1E5> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<RnSphereDesc_t>(void)
{
} /* size: 0 */

// <0500C172> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<RnCapsuleDesc_t>(void)
{
} /* size: 0 */

// <0500C0FF> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<RnHullDesc_t>(void)
{
} /* size: 0 */

// <0500C08C> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<RnMeshDesc_t>(void)
{
} /* size: 0 */

// <04FAA4AA> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CFingerSource>(void)
{
} /* size: 0 */

// <04FAA3E3> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CFingerBone>(void)
{
} /* size: 0 */

// <04FAA007> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CFlexOp>(void)
{
} /* size: 0 */

// <04FA9DFA> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CMorphRectData>(void)
{
} /* size: 0 */

// <04FA9C2C> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CMorphBundleData>(void)
{
} /* size: 0 */

// <04E81EEB> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<FlexControllerMapping_t>(void)
{
} /* size: 0 */

// <04E81E3D> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<FlexDescMapping_t>(void)
{
} /* size: 0 */

// <04E81C36> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<const CFlexRule*>(void)
{
} /* size: 0 */

// <04E8049F> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlVector<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlMemory<CUtlHashDict<const CMorphData*, false, false>::Entry_t, int> > >(void)
{
} /* size: 0 */

// <04E7FD1A> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashDict<const CMorphData*, false, false>::Entry_t>(void)
{
} /* size: 0 */

// <04D6D0D8> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CActivityModifierWeight>(void)
{
} /* size: 0 */

// <04CB80B5> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSceneObjectData>(void)
{
} /* size: 0 */

// <04CB7A5E> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CBaseConstraint*>(void)
{
} /* size: 0 */

// <04CB7A04> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<RenderSkeletonBone_t>(void)
{
} /* size: 0 */

// <04CB7593> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<TraceDataForDraw_t>(void)
{
} /* size: 0 */

// <04CB74F2> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<VertexBufferLayout_t>(void)
{
} /* size: 0 */

// <04CB6BEC> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CRenderBufferBinding>(void)
{
} /* size: 0 */

// <04CB6A9D> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<BLASTriangleDesc_t>(void)
{
} /* size: 0 */

// <04CB694A> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<BLASTriangleData_t>(void)
{
} /* size: 0 */

// <04CB6750> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CMaterialDrawDescriptor>(void)
{
} /* size: 0 */

// <04CB6689> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CDrawCullingData>(void)
{
} /* size: 0 */

// <04CB4C06> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<long long unsigned int, empty_t> >(void)
{
} /* size: 0 */

// <04CB418F> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int> >(void)
{
} /* size: 0 */

// <04CB349F> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int> >(void)
{
} /* size: 0 */

// <04C39BFD> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<AttachmentHandle_t>(void)
{
} /* size: 0 */

// <04BA751D> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int> >(void)
{
} /* size: 0 */

// <04AACFAC> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<short unsigned int, unsigned int> >(void)
{
} /* size: 0 */

// <04AAB29F> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CModelMaterialGroup>(void)
{
} /* size: 0 */

// <04AAAD8B> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CBoneFlexDriver>(void)
{
} /* size: 0 */

// <04AAA824> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CModel::BodyPart_t>(void)
{
} /* size: 0 */

// <04AAA7B1> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<ResourceId_t, int> >(void)
{
} /* size: 0 */

// <04AAA66D> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<AttachmentPairing_t>(void)
{
} /* size: 0 */

// <04AAA2B4> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<const CBoneConstraintBase*>(void)
{
} /* size: 0 */

// <04AAA1ED> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<StateDrivenMorph_t>(void)
{
} /* size: 0 */

// <04AAA17A> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<CUtlString, int> >(void)
{
} /* size: 0 */

// <04AAA027> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtable<int, float> >(void)
{
} /* size: 0 */

// <04AA7753> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int> > >(void)
{
} /* size: 0 */

// <04AA473B> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CLookAtChainItem>(void)
{
} /* size: 0 */

// <04AA4625> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CActivityToSequenceMapping::HashValueType>(void)
{
} /* size: 0 */

// <04AA457E> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CBoneFlexDriverControl>(void)
{
} /* size: 0 */

// <04AA450B> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<StateDrivenMorph_t::Activator_t>(void)
{
} /* size: 0 */

// <04AA4498> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<int, float> >(void)
{
} /* size: 0 */

// <0494E79D> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSchemaInheritanceIterator::ClassToTraverse_t>(void)
{
} /* size: 0 */

// <046C4D53> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSparseMatrix::RowDescriptor_t>(void)
{
} /* size: 0 */

// <046C4C8C> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSparseMatrix::NonZeroValueDescriptor_t>(void)
{
} /* size: 0 */

// <04637D38> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CAppSystemDict::ModuleInfo_t>(void)
{
} /* size: 0 */

// <04637C71> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CAppSystemDict::AppSystem_t>(void)
{
} /* size: 0 */

// <04637BD0> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<void* (*)(char const*, int*)>(void)
{
} /* size: 0 */

// <04637A70> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CAppSystemDict::AppSystemRequest_t>(void)
{
} /* size: 0 */

// <046376DA> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CAppSystemDict::InterfaceInfo_t>(void)
{
} /* size: 0 */

// <044AA86C> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<HeightmapSampleLocation_t>(void)
{
} /* size: 0 */

// <044AA4AE> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<FourVectors>(void)
{
} /* size: 0 */

// <044384B4> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<void (*)(IConVar*, char const*, float)>(void)
{
} /* size: 0 */

// <044383C7> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<ConCommand::CallbackInfo_t>(void)
{
} /* size: 0 */

// <04381ECA> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<AnimationDecodeDebugDumpElement_t>(void)
{
} /* size: 0 */

// <041415E4> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CInterpolationTimeContext>(void)
{
} /* size: 0 */

// <041414B8> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<IWrappedInterpolatedVar::CWrappedIVHashElement_t>(void)
{
} /* size: 0 */

// <0414077B> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t, CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t, int> > >(void)
{
} /* size: 0 */

// <03E7A982> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<std::unique_ptr<CAnimationResource> >(void)
{
} /* size: 0 */

// <03E7A43D> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimData> >(void)
{
} /* size: 0 */

// <03E7A357> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CAnimBone>(void)
{
} /* size: 0 */

// <03E7A271> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CBufferString>(void)
{
} /* size: 0 */

// <03E7A1FE> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CAnimDataChannelDesc>(void)
{
} /* size: 0 */

// <03E7A18B> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CAnimRetargetElementData>(void)
{
} /* size: 0 */

// <03E7A118> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CAnimRetargetChainData>(void)
{
} /* size: 0 */

// <03D925AD> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CAggregateSceneObject::MeshFragment_t>(void)
{
} /* size: 0 */

// <03D923C7> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<PerFragmentData_t>(void)
{
} /* size: 0 */

// <03D921F3> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CAggregateSceneObject*>(void)
{
} /* size: 0 */

// <03B89E88> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CMDLAttachmentData>(void)
{
} /* size: 0 */

// <039D32F9> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlLinkedListElem_t<CVolumetricFog::FogVolume_t, short unsigned int> >(void)
{
} /* size: 0 */

// <03897F6C> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CViewIdInternal>(void)
{
} /* size: 0 */

// <03895C4E> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int> >(void)
{
} /* size: 0 */

// <03879F8F> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<SceneViewTimestampQuery_t*>(void)
{
} /* size: 0 */

// <03879F07> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CTimestampManager::TimestampSceneViewData_t>(void)
{
} /* size: 0 */

// <036A62E0> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<TLASInstance_t>(void)
{
} /* size: 0 */

// <035304EF> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> > >(void)
{
} /* size: 0 */

// <03530467> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >(void)
{
} /* size: 0 */

// <035303BB> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<ChildSceneObjectReference_t>(void)
{
} /* size: 0 */

// <0346523A> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<ISceneLayer*>(void)
{
} /* size: 0 */

// <034651BB> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<ConstantBufferHandle_t__*>(void)
{
} /* size: 0 */

// <034650F0> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<ISceneLayer::InputTexture_t>(void)
{
} /* size: 0 */

// <03465058> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<ISceneLayer::InputSceneViewRenderTarget_t>(void)
{
} /* size: 0 */

// <0346234B> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CRenderBatchList*>(void)
{
} /* size: 0 */

// <0346201B> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlLinkedListElem_t<ISceneLayer*, short unsigned int> >(void)
{
} /* size: 0 */

// <03221DA9> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<ISceneView::WorldList_t>(void)
{
} /* size: 0 */

// <03220B6B> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlLinkedListElem_t<CSceneLayer*, short unsigned int> >(void)
{
} /* size: 0 */

// <03220A17> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CFrustum>(void)
{
} /* size: 0 */

// <0322092C> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<ISceneView*>(void)
{
} /* size: 0 */

// <0322074D> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CScratchRenderTargetSystem::RenderTargetInfo_t>(void)
{
} /* size: 0 */

// <032204D5> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CPVSBits>(void)
{
} /* size: 0 */

// <0321D044> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<ImageFormat>(void)
{
} /* size: 0 */

// <0311F511> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<DebugLineSegment3D_t>(void)
{
} /* size: 0 */

// <0311F489> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<DebugLineSegment2D_t>(void)
{
} /* size: 0 */

// <0311F401> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<DebugTriangle3D_t>(void)
{
} /* size: 0 */

// <0311F360> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<DebugTriangle2D_t>(void)
{
} /* size: 0 */

// <0311F2D8> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<DebugTextureDisplay_t>(void)
{
} /* size: 0 */

// <0311F1C8> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<Debug2DText_t>(void)
{
} /* size: 0 */

// <0311F0B8> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<DebugSceneObject_t>(void)
{
} /* size: 0 */

// <0311F00A> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<DebugCircle3D_t>(void)
{
} /* size: 0 */

// <0311EF82> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<DebugCross3D_t>(void)
{
} /* size: 0 */

// <0311EEE1> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<DebugSphere_t>(void)
{
} /* size: 0 */

// <0311EE59> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<DebugTickMarkedLine3D_t>(void)
{
} /* size: 0 */

// <0311EDD1> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<DebugTextBase_t>(void)
{
} /* size: 0 */

// <0311D7C7> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<const DebugSphere_t*>(void)
{
} /* size: 0 */

// <0305C784> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSceneLightObjectInternal*>(void)
{
} /* size: 0 */

// <0305C674> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<ISceneLightListener*>(void)
{
} /* size: 0 */

// <0305C564> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CEnvMapSceneObject*>(void)
{
} /* size: 0 */

// <0305C454> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<ISceneEnvironmentMapListener*>(void)
{
} /* size: 0 */

// <0305C344> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSceneLightProbeVolumeObject*>(void)
{
} /* size: 0 */

// <0305C234> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<ISceneLightProbeVolumeListener*>(void)
{
} /* size: 0 */

// <02E92E97> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CacheOptimizedKDNode_t>(void)
{
} /* size: 0 */

// <02E92C78> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<LightDesc_t>(void)
{
} /* size: 0 */

// <02E92A72> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<TraceVertex_t*>(void)
{
} /* size: 0 */

// <02E929AB> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<InstancedRayTracingEnvironmentBVHNode_t>(void)
{
} /* size: 0 */

// <02E928E4> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<InstancedRayTracingEnvironmentReference_t*>(void)
{
} /* size: 0 */

// <02E927F9> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<RayTracingEnvironment*>(void)
{
} /* size: 0 */

// <02E8E79B> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSceneWorldObjectListChunk*>(void)
{
} /* size: 0 */

// <02E8E0B1> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<DisplayListToSubmit_t>(void)
{
} /* size: 0 */

// <02E8E010> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSceneSystem::ScratchRenderTarget_t>(void)
{
} /* size: 0 */

// <02E8D6F9> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSceneView*>(void)
{
} /* size: 0 */

// <02E8D48C> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<const IMaterial2*, empty_t> >(void)
{
} /* size: 0 */

// <02E8D36C> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<ISceneSystemListener*>(void)
{
} /* size: 0 */

// <02E8D1C0> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CLightBinnerStandard*>(void)
{
} /* size: 0 */

// <02E8CF47> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlDelegate<void(ISceneView*, const CRenderAttributes*)> >(void)
{
} /* size: 0 */

// <02E8C4B3> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<std::function<void(CSceneObject*)>*>(void)
{
} /* size: 0 */

// <02E8C434> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CRenderBatchList>(void)
{
} /* size: 0 */

// <02E8C39F> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSceneLayer>(void)
{
} /* size: 0 */

// <02E8C1A2> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t> >(void)
{
} /* size: 0 */

// <02E8C0DD> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSceneSystem::VertexCacheUpdateRequest_t>(void)
{
} /* size: 0 */

// <02E8BFFF> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<RenderDescriptorBinding_t>(void)
{
} /* size: 0 */

// <02E8BACE> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<SceneObjectCullingBox_t>(void)
{
} /* size: 0 */

// <02E8BA07> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<SceneVolumetricFogVolume_t>(void)
{
} /* size: 0 */

// <02E89073> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSceneDrawList*>(void)
{
} /* size: 0 */

// <02E88BD6> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CMeshDrawPrimitive_t>(void)
{
} /* size: 0 */

// <02E25BF7> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSceneLayer*>(void)
{
} /* size: 0 */

// <02E2479B> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlLinkedListElem_t<SkippedLayerInRenderPass_t, short unsigned int> >(void)
{
} /* size: 0 */

// <02E24586> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<AtlasChart_t>(void)
{
} /* size: 0 */

// <02E23475> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<void*>(void)
{
} /* size: 0 */

// <02E23181> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<RenderDescriptorDesc_t>(void)
{
} /* size: 0 */

// <02E20976> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlVector<NameToLightCookieSequence_t, CUtlMemory<NameToLightCookieSequence_t, int> > >(void)
{
} /* size: 0 */

// <02E20122> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int> >(void)
{
} /* size: 0 */

// <02E1D2BD> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSceneWorld*>(void)
{
} /* size: 0 */

// <02E1B9B2> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlVector<CUtlHashDict<ISceneObjectDesc*>::Entry_t, CUtlMemory<CUtlHashDict<ISceneObjectDesc*>::Entry_t, int> > >(void)
{
} /* size: 0 */

// <02E1B1D0> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, true>::Entry_t, int> > >(void)
{
} /* size: 0 */

// <02E17B19> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlVectorFixedGrowableCompat<CSceneDrawList*, 32> >(void)
{
} /* size: 0 */

// <02E17787> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<PendingVisitList_t>(void)
{
} /* size: 0 */

// <02E16468> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<NameToLightCookieSequence_t>(void)
{
} /* size: 0 */

// <02E144BF> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashDict<ISceneObjectDesc*>::Entry_t>(void)
{
} /* size: 0 */

// <02E14325> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashDict<unsigned char, true, true>::Entry_t>(void)
{
} /* size: 0 */

// <02C27CEE> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<const CSceneLightObjectInternal*>(void)
{
} /* size: 0 */

// <02C27C4D> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<const CDecalSceneObject*>(void)
{
} /* size: 0 */

// <02C27BC5> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<GPULight>(void)
{
} /* size: 0 */

// <02C27B24> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<EnvironmentMapConstants>(void)
{
} /* size: 0 */

// <02C27A83> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<GPUDecal>(void)
{
} /* size: 0 */

// <02C279E2> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<GPUDecalExtraData>(void)
{
} /* size: 0 */

// <02B77CF2> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CLightBinner2::LightProbeVolumeData_t>(void)
{
} /* size: 0 */

// <02B77C51> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<int, int> >(void)
{
} /* size: 0 */

// <02B77C04> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<CSceneLightProbeVolumeObject*, int> >(void)
{
} /* size: 0 */

// <02B77B3F> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CStrongHandleCopyable<InfoForResourceTypeCTextureBase> >(void)
{
} /* size: 0 */

// <02B77ACC> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<const CEnvMapSceneObject*, int> >(void)
{
} /* size: 0 */

// <02B76E24> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<Vector4D>(void)
{
} /* size: 0 */

// <02875CA7> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<IRenderingPipeline*>(void)
{
} /* size: 0 */

// <02794064> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CWeakHandle<InfoForResourceTypeIMaterial2> >(void)
{
} /* size: 0 */

// <0269DB5F> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSfxTable>(void)
{
} /* size: 0 */

// <0269DB2B> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<unsigned int, CVSoundTypeManager::SfxDictEntry> >(void)
{
} /* size: 0 */

// <02667BA2> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSfxTable*>(void)
{
} /* size: 0 */

// <02667B01> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CVSndAsyncLoadRequest*>(void)
{
} /* size: 0 */

// <02612020> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<audio_device_description_t>(void)
{
} /* size: 0 */

// <024FCE51> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<audio_buffer_input_t>(void)
{
} /* size: 0 */

// <024DB989> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t>(void)
{
} /* size: 0 */

// <024DB8D3> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<memhandle_t__*>(void)
{
} /* size: 0 */

// <02449344> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CPitchShiftFFT*>(void)
{
} /* size: 0 */

// <0240A617> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CAudioMixBuffer>(void)
{
} /* size: 0 */

// <02409FFD> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CAudioOutputStream*>(void)
{
} /* size: 0 */

// <023E7D05> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CResourceManifestFromDiskInternal*>(void)
{
} /* size: 0 */

// <023E7878> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CResourceManifest::LoadingResourceReference_t>(void)
{
} /* size: 0 */

// <023E7658> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CManifestResourceGatherer::ResourceFenceGroup_t*>(void)
{
} /* size: 0 */

// <023E72DC> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<const ResourceBindingBase_t*, empty_t> >(void)
{
} /* size: 0 */

// <0235121B> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<char*>(void)
{
} /* size: 0 */

// <02350EB7> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<ResourceTypeRegistration_t>(void)
{
} /* size: 0 */

// <02350DF0> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<unsigned int*>(void)
{
} /* size: 0 */

// <02350D3B> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlLinkedListElem_t<CResourceManifest*, short unsigned int> >(void)
{
} /* size: 0 */

// <0235079B> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CResourceSystem::ForcedSynchronizationCallbackInfo_t>(void)
{
} /* size: 0 */

// <023506AF> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<IToolsResourceListener*>(void)
{
} /* size: 0 */

// <02350323> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<long long int>(void)
{
} /* size: 0 */

// <0234E614> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<const ResourceBindingBase_t*>(void)
{
} /* size: 0 */

// <0234E110> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CResourceSystem::FinalizeOrAdvanceLoadingManifests(int, CResourceManifest**)::QueuedReloadDeallocate_t>(void)
{
} /* size: 0 */

// <0234DE2E> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CLoadingResource*>(void)
{
} /* size: 0 */

// <0234DBD1> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<ResourceStatusChange_t>(void)
{
} /* size: 0 */

// <0234DA02> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CResourceManifest*>(void)
{
} /* size: 0 */

// <0234D1F0> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<const ResourceTypeRegistration_t*>(void)
{
} /* size: 0 */

// <0234CF3D> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<NullTypeManager_t>(void)
{
} /* size: 0 */

// <0234CB5F> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long unsigned int>, CThreadSpinRWLock>::HashFixedDataInternal_t<ResourceBindingBase_t> >(void)
{
} /* size: 0 */

// <0234C457> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CResourceReferenceTracking_Options, true> >(void)
{
} /* size: 0 */

// <023494A6> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlLinkedListElem_t<ExtRefList_t*, unsigned int> >(void)
{
} /* size: 0 */

// <022D9809> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlLinkedListElem_t<CStreamingResourceData*, short unsigned int> >(void)
{
} /* size: 0 */

// <022A1B3A> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<ResourceId_t, const ResourceBindingBase_t*> >(void)
{
} /* size: 0 */

// <0229CB40> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlLinkedListElem_t<CLoadingResource*, short unsigned int> >(void)
{
} /* size: 0 */

// <0229CA08> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<CLoadingResource*, empty_t> >(void)
{
} /* size: 0 */

// <021CD347> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<ResourceId_t, CUtlVector<IGenericDataResourceListener*>*> >(void)
{
} /* size: 0 */

// <0218D9F1> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CodeResourceManifest_t*>(void)
{
} /* size: 0 */

// <0218D66B> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<ResourceManifestEntry_t*>(void)
{
} /* size: 0 */

// <0215CA1D> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CAsyncResourceDataRequest*>(void)
{
} /* size: 0 */

// <0202BB6D> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<TextureCreationExtraData_t>(void)
{
} /* size: 0 */

// <01FD350A> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CVideoRecorder::VideoFrameData*>(void)
{
} /* size: 0 */

// <01FD34BD> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CVideoRecorder::AudioSampleData*>(void)
{
} /* size: 0 */

// <01FA8A62> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<PacketEntry>(void)
{
} /* size: 0 */

// <01D974C0> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<ISceneWorld*>(void)
{
} /* size: 0 */

// <01D95C7A> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<ViewHistory>(void)
{
} /* size: 0 */

// <01B570FD> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<SboxVertex_t>(void)
{
} /* size: 0 */

// <01932511> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<RayTraceGeneralShader_t>(void)
{
} /* size: 0 */

// <01932387> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<RayTraceHitShaderGroup_t>(void)
{
} /* size: 0 */

// <01855606> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<PermModelExtPart_t>(void)
{
} /* size: 0 */

// <0185553F> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CStrongHandle<InfoForResourceTypeCRenderMesh> >(void)
{
} /* size: 0 */

// <018553B1> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CStrongHandle<InfoForResourceTypeCPhysAggregateData> >(void)
{
} /* size: 0 */

// <01855223> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CStrongHandle<InfoForResourceTypeCSequenceGroupData> >(void)
{
} /* size: 0 */

// <018513B1> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<ModelBoneFlexDriverControl_t>(void)
{
} /* size: 0 */

// <0177C9FC> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<RenderDisplayMode_t>(void)
{
} /* size: 0 */

// <0175D1E4> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<PhysicsTrace_t>(void)
{
} /* size: 0 */

// <0126A24C> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<ConstantBufferVariable_t>(void)
{
} /* size: 0 */

// <0126559B> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<VPhysXJoint_t>(void)
{
} /* size: 0 */

// <01265334> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSteamItemInstance*>(void)
{
} /* size: 0 */

// <0126526D> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<SteamItemDetails_t>(void)
{
} /* size: 0 */

// <012648E5> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CPhysBodyDesc>(void)
{
} /* size: 0 */

// <012644CC> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CVfxShaderAttribute>(void)
{
} /* size: 0 */

// <012643B0> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CVfxRule>(void)
{
} /* size: 0 */

// <0126428A> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CVfxVariableDescription>(void)
{
} /* size: 0 */

// <012641C3> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CVfxTextureChannelProcessor>(void)
{
} /* size: 0 */

// <012640FC> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<ConstantBufferDescription_t>(void)
{
} /* size: 0 */

// <01264035> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<VsInputSignatureElement_t>(void)
{
} /* size: 0 */

// <01263D1C> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CAnimationGroupBuilder::Animation_t>(void)
{
} /* size: 0 */

// <0126369E> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<IPhysicsShape*>(void)
{
} /* size: 0 */

// <01263084> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<MeshTraceOutput>(void)
{
} /* size: 0 */

// <01262BD5> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<SceneSystemTimestampFrameData_t>(void)
{
} /* size: 0 */

// <0126274B> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<Vector2D>(void)
{
} /* size: 0 */

// <0125E823> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlVector<CTransform> >(void)
{
} /* size: 0 */

// <010F29C4> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<SceneObject_t>(void)
{
} /* size: 0 */

// <010F2951> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<InfoOverlayData_t>(void)
{
} /* size: 0 */

// <010F27F8> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<AggregateSceneObject_t>(void)
{
} /* size: 0 */

// <010F21A2> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<WorldNodeOnDiskBufferData_t>(void)
{
} /* size: 0 */

// <010F204F> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<ExtraSceneObjectStreamDesc_t>(void)
{
} /* size: 0 */

// <010F1E8D> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSmartPtr<CRenderMesh> >(void)
{
} /* size: 0 */

// <010F1E1A> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CModelBuilder::CompileTimeMesh_t>(void)
{
} /* size: 0 */

// <010F1D81> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<short int>(void)
{
} /* size: 0 */

// <010F1D0E> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CModelSkeleton::BoneFlags_t>(void)
{
} /* size: 0 */

// <010F1C9B> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<Quaternion>(void)
{
} /* size: 0 */

// <010F1BB5> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<const CFlexController*>(void)
{
} /* size: 0 */

// <010F1B42> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlVector<short int> >(void)
{
} /* size: 0 */

// <010F1612> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(void)
{
} /* size: 0 */

// <010F159F> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CAnimationGroupResource*>(void)
{
} /* size: 0 */

// <010F14D8> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<MaterialOverrideDesc_t>(void)
{
} /* size: 0 */

// <010F122D> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSceneObject*>(void)
{
} /* size: 0 */

// <010F109A> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlVector<int> >(void)
{
} /* size: 0 */

// <010EDD89> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CStrongHandle<InfoForResourceTypeIMaterial2> >(void)
{
} /* size: 0 */

// <010ED6FC> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<AggregateMeshInfo_t>(void)
{
} /* size: 0 */

// <010ED689> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<BuilderModelBoneFlexDriverControl_t>(void)
{
} /* size: 0 */

// <010025EB> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<VertexBufferHandle_t__*>(void)
{
} /* size: 0 */

// <010024C0> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CWeakHandle<InfoForResourceTypeCTextureBase> >(void)
{
} /* size: 0 */

// <0100230E> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CWorldSceneObjectRef*>(void)
{
} /* size: 0 */

// <010021B4> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<signed char>(void)
{
} /* size: 0 */

// <01001300> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<long long unsigned int, WorldTraversal_t*>::Node_t, short unsigned int> >(void)
{
} /* size: 0 */

// <010009E3> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CWeakHandle<InfoForResourceTypeCEntityLump> >(void)
{
} /* size: 0 */

// <01000970> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> > >(void)
{
} /* size: 0 */

// <0100075D> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CWorldNode*>(void)
{
} /* size: 0 */

// <00FFF76C> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<char>(void)
{
} /* size: 0 */

// <00FFDFA1> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlVector<CWorldSceneObjectRef*> >(void)
{
} /* size: 0 */

// <00F26EB4> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSingleWorldRep*>(void)
{
} /* size: 0 */

// <00F26DED> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<SingleWorldEntityLump_t>(void)
{
} /* size: 0 */

// <00F26D26> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CWorldRendererMgr::WindEntry_t>(void)
{
} /* size: 0 */

// <00F255F6> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<NodeData_t>(void)
{
} /* size: 0 */

// <00E6FAF9> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<const CEntityKeyValues*>(void)
{
} /* size: 0 */

// <00E6F905> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<EntityKeyValueData_t>(void)
{
} /* size: 0 */

// <00E6DDE6> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<EntityIOConnectionData_t>(void)
{
} /* size: 0 */

// <00E69704> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<unsigned int, empty_t> >(void)
{
} /* size: 0 */

// <00D6EAFB> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlStringToken>(void)
{
} /* size: 0 */

// <00D6E800> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CPhysConstraintData>(void)
{
} /* size: 0 */

// <00D6E7E5> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<const VPhysXJoint_t*>(void)
{
} /* size: 0 */

// <00D0F75D> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<IPhysicsBody*>(void)
{
} /* size: 0 */

// <00D0F6D5> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<IPhysicsJoint*>(void)
{
} /* size: 0 */

// <00B9B2AF> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CPhysicsShape*>(void)
{
} /* size: 0 */

// <00B9B193> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<b3ContactData>(void)
{
} /* size: 0 */

// <00B9B059> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<b3SurfaceMaterial>(void)
{
} /* size: 0 */

// <00B106F5> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<b3Vec3>(void)
{
} /* size: 0 */

// <00B105A2> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<IndexPair>(void)
{
} /* size: 0 */

// <00B1044F> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CPhysAggregateInstance*>(void)
{
} /* size: 0 */

// <00B10160> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CPhysicsDebugShape*>(void)
{
} /* size: 0 */

// <00B10099> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CPhysicsBody*>(void)
{
} /* size: 0 */

// <00B1004C> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<b3ContactId, empty_t> >(void)
{
} /* size: 0 */

// <00B0FF2C> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<b3JointId>(void)
{
} /* size: 0 */

// <00B0FDD9> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<b3ShapeId>(void)
{
} /* size: 0 */

// <009EE775> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<RnVertex_t>(void)
{
} /* size: 0 */

// <009EDB63> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<bool>(void)
{
} /* size: 0 */

// <009ED9A7> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CPhysicsWorld*>(void)
{
} /* size: 0 */

// <009ED88F> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CKeyValues3Iterator::StackEntry_t>(void)
{
} /* size: 0 */

// <009ED7F7> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CStrongHandleVoid>(void)
{
} /* size: 0 */

// <009ED48C> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<const qhFace*>(void)
{
} /* size: 0 */

// <009ED363> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<const qhHalfEdge*>(void)
{
} /* size: 0 */

// <009ED1F7> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<RnPlane_t>(void)
{
} /* size: 0 */

// <009ED130> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<RnHalfEdge_t>(void)
{
} /* size: 0 */

// <009ED069> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<RnFace_t>(void)
{
} /* size: 0 */

// <009ECBF4> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<RnNode_t>(void)
{
} /* size: 0 */

// <009ECBC0> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<RnTriangle_t>(void)
{
} /* size: 0 */

// <009EB203> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<DebugMeshInfo_t>(void)
{
} /* size: 0 */

// <009EB11E> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CPhysicsSystem::CreateDebugSceneObject(const DebugSceneObjectParams_t&, SceneObjectBuffers_t*)::Part_t>(void)
{
} /* size: 0 */

// <009EAF76> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<PhysicsDebugVertex_t>(void)
{
} /* size: 0 */

// <009EAEA1> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::Node_t>(void)
{
} /* size: 0 */

// <009EAD76> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::Node_t>(void)
{
} /* size: 0 */

// <009E3959> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t>(void)
{
} /* size: 0 */

// <009E3860> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t>(void)
{
} /* size: 0 */

// <008E01F8> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<unsigned int, ButtonCode_t>::Node_t, short unsigned int> >(void)
{
} /* size: 0 */

// <008A8DA6> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CInputSystem::InputWindow_t>(void)
{
} /* size: 0 */

// <008A8CF8> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CInputSystem::UserCursor_t>(void)
{
} /* size: 0 */

// <008A8A12> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CInputSystem::CursorSurface_t>(void)
{
} /* size: 0 */

// <004B263A> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<ButtonCode_t>(void)
{
} /* size: 0 */

// <004B17D2> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<ConVar*, int> >(void)
{
} /* size: 0 */

// <003C783F> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<long long unsigned int>(void)
{
} /* size: 0 */

// <003C73F4> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CVisCluster>(void)
{
} /* size: 0 */

// <003C7313> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<AABB_t>(void)
{
} /* size: 0 */

// <003C70E4> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CPVS*>(void)
{
} /* size: 0 */

// <0029E233> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CLoopTypeBase::ServiceDependency_t>(void)
{
} /* size: 0 */

// <0029E11A> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<char const*>(void)
{
} /* size: 0 */

// <0022FD5C> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<IPrerequisite*>(void)
{
} /* size: 0 */

// <0022FB60> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlLinkedListElem_t<IPrerequisite*, short unsigned int> >(void)
{
} /* size: 0 */

// <0022F070> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<IEngineService*>(void)
{
} /* size: 0 */

// <0022E7B5> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CLoopTypeBase*>(void)
{
} /* size: 0 */

// <0022E6CA> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<const CSchemaClassInfo*, CUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (*)(const CSchemaClassInfo* const&, const CSchemaClassInfo* const&)>::Node_t, unsigned int> >(void)
{
} /* size: 0 */

// <0022DD46> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<ISwitchLoopModeStatusNotify*>(void)
{
} /* size: 0 */

// <0022BD0C> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CEventDispatcher_Base::EventListenerInfo_t>(void)
{
} /* size: 0 */

// <00133170> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<unsigned char>(void)
{
} /* size: 0 */

// <00130C35> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<int>(void)
{
} /* size: 0 */

// <00130C01> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<Vector>(void)
{
} /* size: 0 */

// <00130B60> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlString>(void)
{
} /* size: 0 */

// <0013026D> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<HResourceManifest__*>(void)
{
} /* size: 0 */

// <00130160> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CTransform>(void)
{
} /* size: 0 */

// <0013012C> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CAnimSkeleton::BoneInfo>(void)
{
} /* size: 0 */

// <001300BA> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CAnimFoot>(void)
{
} /* size: 0 */

// <00130061> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<float>(void)
{
} /* size: 0 */

// <0012FFD4> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<unsigned int>(void)
{
} /* size: 0 */

// <0012FE99> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<short unsigned int>(void)
{
} /* size: 0 */

// <0012FE7E> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<matrix3x4a_t>(void)
{
} /* size: 0 */

// <0012FDF3> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<bone_merge_list_t>(void)
{
} /* size: 0 */

// <0012FD80> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSceneAnimatableObject::FlexWeight_t>(void)
{
} /* size: 0 */

// <0012F6FB> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<AppSystemInfo_t>(void)
{
} /* size: 0 */

// <0012F4AC> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlLinkedListElem_t<CUtlString, short unsigned int> >(void)
{
} /* size: 0 */

// <0012D058> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CCharRenderGeometry>(void)
{
} /* size: 0 */

// <0336B6EE> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<IIKRuleData*>(void)
{
} /* size: 0 */

// <0336B627> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<IKJointConstraintPair_t>(void)
{
} /* size: 0 */

// <03285F62> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CIKChainInterpolationState>(void)
{
} /* size: 0 */

// <032852A1> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CIKChainRuleInterpolationState>(void)
{
} /* size: 0 */

// <027ED11A> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CAnimationChannelResult>(void)
{
} /* size: 0 */

// <027ED017> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<IKLocked_t>(void)
{
} /* size: 0 */

// <0272A4A4> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CInternalOperation>(void)
{
} /* size: 0 */

// <0272A3A1> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CAnimationResult>(void)
{
} /* size: 0 */

// <0272A1CF> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<DecodeOperation_t>(void)
{
} /* size: 0 */

// <02699A7A> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CRetargetingChain>(void)
{
} /* size: 0 */

// <025B3D54> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<unsigned int, CAnimationDecodeCacheEntry_t> >(void)
{
} /* size: 0 */

// <025B3C89> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlLinkedListElem_t<unsigned int, unsigned int> >(void)
{
} /* size: 0 */

// <01AE0D2E> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Node_t>(void)
{
} /* size: 0 */

// <01ADFF28> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::HashBucket_t>(void)
{
} /* size: 0 */

// <019EDC82> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSmartPtr<Reflection::CTypeFactory<CAnimStateConditionBase>::CFactoryMaker, CRefCountAccessor> >(void)
{
} /* size: 0 */

// <01577BB1> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSmartPtr<const CAnimNodeBase> >(void)
{
} /* size: 0 */

// <01577A55> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlVector<AnimNodeLocation_t> >(void)
{
} /* size: 0 */

// <01577196> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CUpdateNodeManager> > >(void)
{
} /* size: 0 */

// <01577097> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> > >(void)
{
} /* size: 0 */

// <01576FCB> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<AnimNodeID, CSmartPtr<const CAnimNodeBase> > >(void)
{
} /* size: 0 */

// <01576EA8> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<AnimNodeID, int> >(void)
{
} /* size: 0 */

// <01575F2B> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CAnimGraphUpdateContext::NodeUpdateDesc_t>(void)
{
} /* size: 0 */

// <01575E4B> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<AnimGraphOperation_t>(void)
{
} /* size: 0 */

// <01575D91> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<animevent_t>(void)
{
} /* size: 0 */

// <01575CF0> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CAnimGraphUpdateContext::AnimTagWithStatus>(void)
{
} /* size: 0 */

// <01575CA3> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<const CAnimUpdateNodeBase*, CRootMotion> >(void)
{
} /* size: 0 */

// <01575C32> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<const CAnimUpdateNodeBase*, CStrideStatus> >(void)
{
} /* size: 0 */

// <01574B52> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CAnimPose*>(void)
{
} /* size: 0 */

// <01573D32> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<OpResult>(void)
{
} /* size: 0 */

// <01463B3F> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSmartPtr<Reflection::CTypeFactory<CAnimMotorBase>::CFactoryMaker, CRefCountAccessor> >(void)
{
} /* size: 0 */

// <013EEF7F> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<HSequence, CSmartPtr<CSequenceDistanceHelper> > >(void)
{
} /* size: 0 */

// <013EEE2C> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CMotionMetricInitContext::PoseCache_t*>(void)
{
} /* size: 0 */

// <01309296> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<Reflection::ClassID, CUtlVector<IAnimTagListener*> > >(void)
{
} /* size: 0 */

// <01308784> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSmartPtr<Reflection::CTypeFactory<CAnimTagBase>::CFactoryMaker, CRefCountAccessor> >(void)
{
} /* size: 0 */

// <013067A5> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<IAnimTagListener*>(void)
{
} /* size: 0 */

// <01264D2E> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<CUtlString, CSmartPtr<CSubGraph> > >(void)
{
} /* size: 0 */

// <01152586> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CLookAtChain>(void)
{
} /* size: 0 */

// <0114F881> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<AnimOutputID>(void)
{
} /* size: 0 */

// <0114E227> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSmartPtr<Reflection::CTypeFactory<CMotionMetricBase>::CFactoryMaker, CRefCountAccessor> >(void)
{
} /* size: 0 */

// <0114DE9C> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CMotionMetricInstance, CMotionMetricBase, const CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>&, CPackedHandle<const CMotionMetricEvaluator> >::CFactoryMaker, CRefCountAccessor> > >(void)
{
} /* size: 0 */

// <0105B0F2> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CMoveSpeed>(void)
{
} /* size: 0 */

// <0105AF39> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CBlendAnimNode::CreateUpdateNode(CAnimGraphInitContext&) const::OrderValuePair>(void)
{
} /* size: 0 */

// <01059895> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CFootDefinition>(void)
{
} /* size: 0 */

// <00F4E6C4> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSmartPtr<CAnimMotorInstance> >(void)
{
} /* size: 0 */

// <00F4A7DB> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<AnimParamID, int> >(void)
{
} /* size: 0 */

// <00F4A5B1> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CAnimParamHandle>(void)
{
} /* size: 0 */

// <00F4929B> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CAnimMotorInstance, CAnimMotorBase, const CAnimMotorUpdaterBase*, const CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>&>::CFactoryMaker, CRefCountAccessor> > >(void)
{
} /* size: 0 */

// <00F478C2> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSmartPtr<Reflection::CTypeFactory<CAnimNodeBase>::CFactoryMaker, CRefCountAccessor> >(void)
{
} /* size: 0 */

// <00F45F52> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSmartPtr<Reflection::CTypeFactory<CAnimParameterBase>::CFactoryMaker, CRefCountAccessor> >(void)
{
} /* size: 0 */

// <00F42013> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<std::unique_ptr<CEnduringClassMemoryPool<CAnimPose>::Block, std::default_delete<CEnduringClassMemoryPool<CAnimPose>::Block> > >(void)
{
} /* size: 0 */

// <00E0CD98> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(void)
{
} /* size: 0 */

// <00E0C169> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<IAnimationGraphVisualizerInfo*>(void)
{
} /* size: 0 */

// <00E0AA94> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<AnimNodeID>(void)
{
} /* size: 0 */

// <00E0A773> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<IAnimNode*>(void)
{
} /* size: 0 */

// <00E0A5F7> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<int, CSmartPtr<CAnimNodeInstanceBase> > >(void)
{
} /* size: 0 */

// <00E0A4F8> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<int, CSmartPtr<const CActivityValues> > >(void)
{
} /* size: 0 */

// <00E0A3A5> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<IAnimGraphSequenceFinishedListener*>(void)
{
} /* size: 0 */

// <00E0A34B> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker> > >(void)
{
} /* size: 0 */

// <00E08AD8> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<AnimParamID, const CAnimParameterBase*> >(void)
{
} /* size: 0 */

// <00E08A25> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<AnimTagID, const CAnimTagBase*> >(void)
{
} /* size: 0 */

// <00E08450> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<AnimNodeLocation_t>(void)
{
} /* size: 0 */

// <00C5542B> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CActivityRemap>(void)
{
} /* size: 0 */

// <00C53AAD> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<HSequence>(void)
{
} /* size: 0 */

// <00C5210C> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlBinaryBlock*>(void)
{
} /* size: 0 */

// <00C51FED> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlVector<float> >(void)
{
} /* size: 0 */

// <00C51B6C> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlVector<Quaternion> >(void)
{
} /* size: 0 */

// <00C51A1A> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlVector<bool> >(void)
{
} /* size: 0 */

// <00C5188D> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlVector<Color> >(void)
{
} /* size: 0 */

// <00C517C7> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<Color>(void)
{
} /* size: 0 */

// <00C51700> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlVector<Vector2D> >(void)
{
} /* size: 0 */

// <00C51573> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlVector<Vector4D> >(void)
{
} /* size: 0 */

// <00C4F728> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<BoneTableEntry>(void)
{
} /* size: 0 */

// <00C4F581> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int> >(void)
{
} /* size: 0 */

// <00C4F00F> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<BoneTableChannel>(void)
{
} /* size: 0 */

// <00C4EEF0> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CAnimationDecodeOp>(void)
{
} /* size: 0 */

// <00C4EE4F> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<IAnimationHelperSequenceFinishedCallback*>(void)
{
} /* size: 0 */

// <00C4EA6B> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<AnimEventDetectDesc_t>(void)
{
} /* size: 0 */

// <00C4E9C4> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CAnimationHelper::FrameAdvance(matrix3x4a_t&, float, AnimationEventOccurrences_t*)::notify_t>(void)
{
} /* size: 0 */

// <00C4C158> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<AnimEvent_t>(void)
{
} /* size: 0 */

// <00C4BE3D> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CAnimContainer_Imp::AnimationGroupImp_t>(void)
{
} /* size: 0 */

// <00C4BD76> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<ISequence*>(void)
{
} /* size: 0 */

// <00C4A56D> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<char const*, empty_t> >(void)
{
} /* size: 0 */

// <00C49224> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CAnimDecodeSwizzle>(void)
{
} /* size: 0 */

// <00C483AA> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CAnimRetarget>(void)
{
} /* size: 0 */

// <00C482E3> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<AnimInstanceMap_t>(void)
{
} /* size: 0 */

// <00C48235> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSeqGroupInstance>(void)
{
} /* size: 0 */

// <00C46C0C> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<SeqInstanceMap_t>(void)
{
} /* size: 0 */

// <00C46B45> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CIKChainData_t>(void)
{
} /* size: 0 */

// <00C465A1> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CAnimDataChannel>(void)
{
} /* size: 0 */

// <00C453AB> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UserDataElementMap_t>(void)
{
} /* size: 0 */

// <00C45323> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<ChannelWeightlist_t>(void)
{
} /* size: 0 */

// <00C449B5> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<ElementRequestPattern_t>(void)
{
} /* size: 0 */

// <00C448EE> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<AnimBounds_t>(void)
{
} /* size: 0 */

// <00C40FA0> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CAnimationBucket>(void)
{
} /* size: 0 */

// <00C405E7> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<activitylist_t>(void)
{
} /* size: 0 */

// <00C404EE> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<char const*, CActivityRemapCache, int, bool (*)(char const* const&, char const* const&)>::Node_t, int> >(void)
{
} /* size: 0 */

// <00C38202> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CAnimationDecodeCacheEntry_t>(void)
{
} /* size: 0 */

// <00C34D15> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<EventList_t>(void)
{
} /* size: 0 */

// <00C2FB3F> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, int> > >(void)
{
} /* size: 0 */

// <00C2F1B3> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<RequestElementWeights_t>(void)
{
} /* size: 0 */

// <00C2EEE6> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<ChannelWeightlist_t::IndexWeightPair_t>(void)
{
} /* size: 0 */

// <00C2EE38> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<std::pair<LocalFlexController_t, float> >(void)
{
} /* size: 0 */

// <00C2ED8A> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<ChannelElementWeights_t>(void)
{
} /* size: 0 */

// <00C2E273> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>::Entry_t, int> > >(void)
{
} /* size: 0 */

// <00C2DFBF> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, int> > >(void)
{
} /* size: 0 */

// <00C2DD5F> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, int> > >(void)
{
} /* size: 0 */

// <00C2430B> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashDict<short int, true, false>::Entry_t>(void)
{
} /* size: 0 */

// <00C2425C> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashDict<short int, true, true>::Entry_t>(void)
{
} /* size: 0 */

// <00C24160> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t>(void)
{
} /* size: 0 */

// <00C240B1> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashDict<UserDataElement_t, true, false>::Entry_t>(void)
{
} /* size: 0 */

// <0098E919> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CAnimDesc>(void)
{
} /* size: 0 */

// <0098E852> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CAnimDecoder>(void)
{
} /* size: 0 */

// <0098E78B> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CAnimFrameSegment>(void)
{
} /* size: 0 */

// <0098E274> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlVector<char const*, CUtlMemory<char const*, int> > >(void)
{
} /* size: 0 */

// <0098E1AD> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CCompressor<float>*>(void)
{
} /* size: 0 */

// <0098E0E6> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CCompressor<Vector>*>(void)
{
} /* size: 0 */

// <0098DE91> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CCompressor<bool>*>(void)
{
} /* size: 0 */

// <0098DDCA> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CCompressor<Color>*>(void)
{
} /* size: 0 */

// <0098DD03> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CCompressor<Vector2D>*>(void)
{
} /* size: 0 */

// <0098DC3C> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CCompressor<Vector4D>*>(void)
{
} /* size: 0 */

// <00981FA3> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSeqCmdSeqDesc>(void)
{
} /* size: 0 */

// <00981EDC> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSeqBoneMaskList>(void)
{
} /* size: 0 */

// <00844F47> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSmartPtr<CAnimStateTransition> >(void)
{
} /* size: 0 */

// <0084437B> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSmartPtr<CAnimStateConditionBase> >(void)
{
} /* size: 0 */

// <006AF0AD> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSmartPtr<CMotionClip> >(void)
{
} /* size: 0 */

// <00676BE5> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSmartPtr<CAnimMotorBase> >(void)
{
} /* size: 0 */

// <005A4075> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CJiggleBoneItem>(void)
{
} /* size: 0 */

// <005A1C98> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CNodeConnection>(void)
{
} /* size: 0 */

// <0059F3B4> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSolveIKChainAnimNodeChainData>(void)
{
} /* size: 0 */

// <0059EBDA> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSmartPtr<CAnimState> >(void)
{
} /* size: 0 */

// <004BF8EB> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CBlend2DItem>(void)
{
} /* size: 0 */

// <004BF1BD> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CBlendNodeChild>(void)
{
} /* size: 0 */

// <004BE9FA> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CChoiceNodeChild>(void)
{
} /* size: 0 */

// <004BDE8B> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CFootLockItem>(void)
{
} /* size: 0 */

// <004BCD6F> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CFootStepTriggerItem>(void)
{
} /* size: 0 */

// <004BC172> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<AnimOutputID, CNodeConnection> >(void)
{
} /* size: 0 */

// <004BBAE9> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CConnectionProxyItem>(void)
{
} /* size: 0 */

// <00419425> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSmartPtr<CParameterValue> >(void)
{
} /* size: 0 */

// <00418C01> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSmartPtr<CActivityValues> >(void)
{
} /* size: 0 */

// <0041841F> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSmartPtr<CAnimParameterBase> >(void)
{
} /* size: 0 */

// <00417C77> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSmartPtr<CAnimGraphSettingsGroup> >(void)
{
} /* size: 0 */

// <004176EC> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CAnimNodeBase*>(void)
{
} /* size: 0 */

// <00415F8B> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase> > >(void)
{
} /* size: 0 */

// <00415F70> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<AnimNodeID, CAnimNodeBase*> >(void)
{
} /* size: 0 */

// <00415ABB> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CAnimState*>(void)
{
} /* size: 0 */

// <00415315> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSmartPtr<CClipProperties> >(void)
{
} /* size: 0 */

// <0039A141> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSmartPtr<CAnimReplayFrame> >(void)
{
} /* size: 0 */

// <0032D3F2> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<IAnimGraphLogListener*>(void)
{
} /* size: 0 */

// <0032D082> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<AnimTagID>(void)
{
} /* size: 0 */

// <002A6C80> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<std::pair<CBufferString, float> >(void)
{
} /* size: 0 */

// <002A6A66> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSeqCmdLayer>(void)
{
} /* size: 0 */

// <002A699F> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CAnimAnimEvent>(void)
{
} /* size: 0 */

// <002A68D8> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CAnimActivity>(void)
{
} /* size: 0 */

// <002A6811> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSeqPoseSetting>(void)
{
} /* size: 0 */

// <002A64A4> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSeqAutoLayer>(void)
{
} /* size: 0 */

// <002A6316> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CFootMotion>(void)
{
} /* size: 0 */

// <002A5922> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CAnimFrameBlockAnim>(void)
{
} /* size: 0 */

// <002A585B> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CAnimBoneDifference>(void)
{
} /* size: 0 */

// <002A5794> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CAnimMorphDifference>(void)
{
} /* size: 0 */

// <002A56CD> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CAnimUserDifference>(void)
{
} /* size: 0 */

// <002A55E0> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CAnimMovement>(void)
{
} /* size: 0 */

// <00142F96> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CIKChainContext>(void)
{
} /* size: 0 */

// <00142A4F> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CTraceRequest*>(void)
{
} /* size: 0 */

// <00141AD8> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<IIKRuleContext*>(void)
{
} /* size: 0 */

// <000EDDD9> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<int, JointTreeNode*>::Node_t, short unsigned int> >(void)
{
} /* size: 0 */

// <000ED38A> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<JointTreeNode*>(void)
{
} /* size: 0 */

// <00F44FE1> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSheet::SheetInfo_t>(void)
{
} /* size: 0 */

// <00C2DB81> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan*>*, int, CDefLess<CWeakHandle<InfoForResourceTypeCTextureBase> > >::Node_t, int> >(void)
{
} /* size: 0 */

// <00C2D485> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CTextureManagerVulkan::TextureUpdate_t>(void)
{
} /* size: 0 */

// <00C2D3E4> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CVulkanSamplerObject*>(void)
{
} /* size: 0 */

// <00C2CD17> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<CDescriptorSetVulkan*, empty_t> >(void)
{
} /* size: 0 */

// <00C2B4F6> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CDescriptorSetVulkan*>(void)
{
} /* size: 0 */

// <00BBBB24> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::IndirectIndex, empty_t> >(void)
{
} /* size: 0 */

// <00BBB9BD> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>, short unsigned int> >(void)
{
} /* size: 0 */

// <00BBB85C> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::IndirectIndex, empty_t> >(void)
{
} /* size: 0 */

// <00BBB6F5> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlLinkedListElem_t<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>, short unsigned int> >(void)
{
} /* size: 0 */

// <00B719E0> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<VkSemaphore_T*>(void)
{
} /* size: 0 */

// <00B6EAFC> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<QueryObjectInternalVulkan_t*>(void)
{
} /* size: 0 */

// <00B6EA89> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlLinkedListElem_t<AsyncReadbackVulkan_t, short unsigned int> >(void)
{
} /* size: 0 */

// <00B6E8EF> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlLinkedListElem_t<VulkanCommandBuffer_t*, short unsigned int> >(void)
{
} /* size: 0 */

// <00B6E740> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<VkCommandBuffer_T*>(void)
{
} /* size: 0 */

// <00B6E6B4> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlLinkedListElem_t<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int> >(void)
{
} /* size: 0 */

// <00B6E51A> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlLinkedListElem_t<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int> >(void)
{
} /* size: 0 */

// <00B684DE> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<VkDeviceFaultAddressInfoEXT>(void)
{
} /* size: 0 */

// <00B06A97> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlLinkedListElem_t<VulkanQueryPool_t*, short unsigned int> >(void)
{
} /* size: 0 */

// <00B068E8> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<VulkanQuery_t*>(void)
{
} /* size: 0 */

// <00B0683A> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CRenderPipelineStatsVulkan::OutstandingFrame_t>(void)
{
} /* size: 0 */

// <00B06743> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlVector<RenderPipelineSample_t>*>(void)
{
} /* size: 0 */

// <00B0667C> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t>*>(void)
{
} /* size: 0 */

// <00B05BC9> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlLinkedListElem_t<VulkanQuery_t*, short unsigned int> >(void)
{
} /* size: 0 */

// <00B0389E> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<RenderPipelineSample_t>(void)
{
} /* size: 0 */

// <00ABF62F> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<VkFramebuffer_T*>(void)
{
} /* size: 0 */

// <00ABF568> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<VulkanRenderPassImageLayout_t>(void)
{
} /* size: 0 */

// <00ABF4A1> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CRenderPassVulkan::VulkanSubpassInfo_t>(void)
{
} /* size: 0 */

// <00ABF2D3> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<VkSubpassDescription>(void)
{
} /* size: 0 */

// <00ABEEEE> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<VkSubpassDependency>(void)
{
} /* size: 0 */

// <00ABEE27> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<VkImageView_T*>(void)
{
} /* size: 0 */

// <00ABE829> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<CRenderPassDesc, CRenderPassVulkan*>::Node_t, short unsigned int> >(void)
{
} /* size: 0 */

// <00ABD788> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<short unsigned int, empty_t> >(void)
{
} /* size: 0 */

// <009CEE73> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CRenderDeviceVulkan::FencedVulkanTextureRelease_t>(void)
{
} /* size: 0 */

// <009CE5FA> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CRenderDeviceVulkan::FencedVertexBufferRelease_t>(void)
{
} /* size: 0 */

// <009CE58B> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CRenderDeviceVulkan::FencedIndexBufferRelease_t>(void)
{
} /* size: 0 */

// <009CE51C> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CRenderDeviceVulkan::QueryPool_t>(void)
{
} /* size: 0 */

// <009CE0E9> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlLinkedListElem_t<RenderDescriptorSetHandle_t__*, short unsigned int> >(void)
{
} /* size: 0 */

// <009CDFA7> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<CUtlStringToken, RenderDescriptorSetHandle_t__*> >(void)
{
} /* size: 0 */

// <009CDE6A> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlLinkedListElem_t<CShaderVulkanBase*, int> >(void)
{
} /* size: 0 */

// <009CDCD0> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlLinkedListElem_t<VulkanSemaphore_t*, short unsigned int> >(void)
{
} /* size: 0 */

// <009CDB21> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, VulkanDeviceSpecificTexture_t, unsigned int, CDefLess<CWeakHandle<InfoForResourceTypeCTextureBase> > >::Node_t, unsigned int> >(void)
{
} /* size: 0 */

// <009CD41C> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<RenderResourceHandle_t__*, VulkanDeviceSpecificBuffer_t, unsigned int, CDefLess<RenderResourceHandle_t__*> >::Node_t, unsigned int> >(void)
{
} /* size: 0 */

// <009CCD17> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<RenderDescriptorSetHandle_t__*, VulkanDeviceSpecificDescriptorSet_t, unsigned int, CDefLess<RenderDescriptorSetHandle_t__*> >::Node_t, unsigned int> >(void)
{
} /* size: 0 */

// <009CC612> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<RenderRayTracePipelineHandle_t__*, VulkanDeviceSpecificRayTracePipeline_t, unsigned int, CDefLess<RenderRayTracePipelineHandle_t__*> >::Node_t, unsigned int> >(void)
{
} /* size: 0 */

// <009C207F> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >::Node_t, short unsigned int> >(void)
{
} /* size: 0 */

// <009C18C0> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<ShaderStorageBufferBinding_t>(void)
{
} /* size: 0 */

// <009C17F9> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t>(void)
{
} /* size: 0 */

// <009C11AF> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<HiddenUAVCounter_t>(void)
{
} /* size: 0 */

// <009C0584> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<RenderDescriptorSetHandle_t__*>(void)
{
} /* size: 0 */

// <009BD28D> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerStateDesc>, CThreadSpinRWLock>::HashFixedDataInternal_t<CSamplerStateBinding> >(void)
{
} /* size: 0 */

// <009BCF7A> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan*> >(void)
{
} /* size: 0 */

// <009B46E5> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlTSHashBase<ConcatLayoutResult_t, 1024, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRWLock>::HashFixedDataInternal_t<ConcatLayoutResult_t> >(void)
{
} /* size: 0 */

// <009B102B> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CRenderDeviceVulkan::VulkanTextureReleaseResources_t>(void)
{
} /* size: 0 */

// <009B0F71> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >(void)
{
} /* size: 0 */

// <009B0F3E> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >(void)
{
} /* size: 0 */

// <009B02AC> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >(void)
{
} /* size: 0 */

// <009B0291> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >(void)
{
} /* size: 0 */

// <009B0276> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >(void)
{
} /* size: 0 */

// <009B01BA> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlLinkedListElem_t<CDescriptorSetVulkan*, long long int> >(void)
{
} /* size: 0 */

// <008C0BDB> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<VkValidationFeatureDisableEXT>(void)
{
} /* size: 0 */

// <008C0B13> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<VkValidationFeatureEnableEXT>(void)
{
} /* size: 0 */

// <00839A13> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<DynamicVertexBufferHandle_t__*>(void)
{
} /* size: 0 */

// <00839972> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<DynamicIndexBufferHandle_t__*>(void)
{
} /* size: 0 */

// <0083969B> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlLinkedListElem_t<QueryObjectInternalVulkan_t*, short unsigned int> >(void)
{
} /* size: 0 */

// <00835415> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >(void)
{
} /* size: 0 */

// <007AA5BE> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<VkAccelerationStructureGeometryKHR>(void)
{
} /* size: 0 */

// <007AA46B> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<VkAccelerationStructureBuildRangeInfoKHR>(void)
{
} /* size: 0 */

// <007AA318> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<const VkAccelerationStructureBuildRangeInfoKHR*>(void)
{
} /* size: 0 */

// <007AA100> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<VkAccelerationStructureInstanceKHR>(void)
{
} /* size: 0 */

// <007A9CAD> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<VkRayTracingShaderGroupCreateInfoKHR>(void)
{
} /* size: 0 */

// <007A9BE6> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<VkPipelineShaderStageCreateInfo>(void)
{
} /* size: 0 */

// <007A991A> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<VkDescriptorSetLayout_T*>(void)
{
} /* size: 0 */

// <007045AA> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t*> >(void)
{
} /* size: 0 */

// <007043B0> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlLinkedListElem_t<PipelineObjectVulkan_t*, int> >(void)
{
} /* size: 0 */

// <0070426E> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<VkRenderPass_T*, empty_t> >(void)
{
} /* size: 0 */

// <007041BB> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t> >(void)
{
} /* size: 0 */

// <00703AC6> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlLinkedListElem_t<PipelineCreateInfo_t, short unsigned int> >(void)
{
} /* size: 0 */

// <006FF387> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<VkVertexInputBindingDescription>(void)
{
} /* size: 0 */

// <006FF281> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<VkPipelineColorBlendAttachmentState>(void)
{
} /* size: 0 */

// <006FF17D> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<VkDynamicState>(void)
{
} /* size: 0 */

// <006FE641> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<VkPipeline_T*>(void)
{
} /* size: 0 */

// <006FE4F3> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<const CDescriptorSetVulkan*>(void)
{
} /* size: 0 */

// <006FDE3E> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<VkPipelineCache_T*>(void)
{
} /* size: 0 */

// <0065FA49> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<long unsigned int, CSamplerStateDesc*, short unsigned int, CDefLess<long unsigned int> >::Node_t, short unsigned int> >(void)
{
} /* size: 0 */

// <0065F339> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t*, short unsigned int, CDefLess<long unsigned int> >::Node_t, short unsigned int> >(void)
{
} /* size: 0 */

// <0065EC29> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t*, short unsigned int, CDefLess<long unsigned int> >::Node_t, short unsigned int> >(void)
{
} /* size: 0 */

// <0065E519> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t*, short unsigned int, CDefLess<long unsigned int> >::Node_t, short unsigned int> >(void)
{
} /* size: 0 */

// <0065DE09> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t*, unsigned int, CDefLess<long unsigned int> >::Node_t, unsigned int> >(void)
{
} /* size: 0 */

// <0065D705> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeGraphicsPipeline_t*, unsigned int, CDefLess<long unsigned int> >::Node_t, unsigned int> >(void)
{
} /* size: 0 */

// <0065D001> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeComputePipeline_t*, unsigned int, CDefLess<long unsigned int> >::Node_t, unsigned int> >(void)
{
} /* size: 0 */

// <0065C8FD> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<const CShaderVulkanBase*, CUtlLinkedList<CFossilizeStateCreator::FossilizeShaderModule_t*>*, short unsigned int, CDefLess<const CShaderVulkanBase*> >::Node_t, short unsigned int> >(void)
{
} /* size: 0 */

// <006579E9> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlLinkedListElem_t<const CFossilizeStateCreator::FossilizeGraphicsPipeline_t*, short unsigned int> >(void)
{
} /* size: 0 */

// <00657849> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlLinkedListElem_t<const CFossilizeStateCreator::FossilizeComputePipeline_t*, short unsigned int> >(void)
{
} /* size: 0 */

// <006576E8> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase*> >(void)
{
} /* size: 0 */

// <00656A5F> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlLinkedListElem_t<CFossilizeStateCreator::FossilizeShaderModule_t*, short unsigned int> >(void)
{
} /* size: 0 */

// <00655783> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<long unsigned int>(void)
{
} /* size: 0 */

// <0065567C> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<Fossilize::ResourceTag>(void)
{
} /* size: 0 */

// <00655575> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CFossilizeStateCreator::PipelineWorkItem_t>(void)
{
} /* size: 0 */

// <005D8905> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CVertexBufferVulkan*>(void)
{
} /* size: 0 */

// <005D8892> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CIndexBufferVulkan*>(void)
{
} /* size: 0 */

// <005D7C82> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >(void)
{
} /* size: 0 */

// <00589BBB> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<VmaPool_T*>(void)
{
} /* size: 0 */

// <00589925> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CMemoryManagerVulkan::VmaQueuedResourceMove_t>(void)
{
} /* size: 0 */

// <005898B2> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlLinkedListElem_t<CMemoryManagerVulkan::VmaQueuedDeletion_t, unsigned int> >(void)
{
} /* size: 0 */

// <00589661> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CRefCounted<CRefCountServiceBase<true, CRefMT> >*>(void)
{
} /* size: 0 */

// <00586C8A> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlLinkedListElem_t<short unsigned int, short unsigned int> >(void)
{
} /* size: 0 */

// <005851B3> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlLinkedListElem_t<VulkanMemoryPool_t*, long long int> >(void)
{
} /* size: 0 */

// <00543ADD> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<VkVertexInputAttributeDescription>(void)
{
} /* size: 0 */

// <00543A06> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlTSHashBase<InputLayoutVulkan_t*, 16, long long int, CUtlTSHashGenericHashMethod<long long int>, CThreadSpinRWLock>::HashFixedDataInternal_t<InputLayoutVulkan_t*> >(void)
{
} /* size: 0 */

// <004FEB93> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<CVulkanImage*, CImageLayoutTracker::ImageTransition_t> >(void)
{
} /* size: 0 */

// <004D6D29> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T*> >(void)
{
} /* size: 0 */

// <004D6C76> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T*> >(void)
{
} /* size: 0 */

// <004D6571> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<VulkanFramebufferState_t>(void)
{
} /* size: 0 */

// <004A77A9> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlVector<VkDescriptorSetLayoutBinding> >(void)
{
} /* size: 0 */

// <004A76E2> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<VkPushConstantRange>(void)
{
} /* size: 0 */

// <004A6DF8> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<VkWriteDescriptorSet>(void)
{
} /* size: 0 */

// <004A6C43> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<VkDescriptorImageInfo>(void)
{
} /* size: 0 */

// <004A684F> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<VkWriteDescriptorSetAccelerationStructureKHR>(void)
{
} /* size: 0 */

// <004A4F72> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<VkDescriptorSetLayoutBinding>(void)
{
} /* size: 0 */

// <0045B44D> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<VkFormat>(void)
{
} /* size: 0 */

// <00448D79> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CBufferedDescriptorSetVulkan::Set>(void)
{
} /* size: 0 */

// <0044873B> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<RenderResourceHandle_t__*, RenderDescriptorBinding_t> >(void)
{
} /* size: 0 */

// <004267CB> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CBarrierHelperVulkan::BufferState_t>(void)
{
} /* size: 0 */

// <00426733> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CBarrierHelperVulkan::UAVState_t>(void)
{
} /* size: 0 */

// <0042669B> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<RenderImageLayout_t>(void)
{
} /* size: 0 */

// <0039523D> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<TextureStreamingPriorityInfo_t>(void)
{
} /* size: 0 */

// <003008F6> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<ResourceLoadCompletedMessage_t>(void)
{
} /* size: 0 */

// <00300855> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<ResourceLoadFailedMessage_t>(void)
{
} /* size: 0 */

// <003007CD> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CTextureInfoId>(void)
{
} /* size: 0 */

// <003004D7> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<std::pair<ResourceId_t, long unsigned int> >(void)
{
} /* size: 0 */

// <00300410> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CTextureManagerBase::ExternalTextureInfo_t>(void)
{
} /* size: 0 */

// <002FB9F2> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CTextureManagerBase::ToCacheHandle_t>(void)
{
} /* size: 0 */

// <002A1C51> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod<CTextureSequenceHashKey_t>, CThreadSpinRWLock>::HashFixedDataInternal_t<CTextureSequenceRecord_t> >(void)
{
} /* size: 0 */

// <001E4362> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<void (*)()>(void)
{
} /* size: 0 */

// <001E429B> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<IRenderDeviceEventListener*>(void)
{
} /* size: 0 */

// <001753D6> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CRenderDeviceBase::FencedWaitingList_t<void, void> >(void)
{
} /* size: 0 */

// <00172C44> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CRenderResource*>(void)
{
} /* size: 0 */

// <001726E4> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CRenderDeviceBase::MultiViewCBPool_t>(void)
{
} /* size: 0 */

// <00171C18> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<IMaxSwapChainDimensionsChangedListener*>(void)
{
} /* size: 0 */

// <00171A7D> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CRenderDeviceBase::PerFrameMemoryStack_t*>(void)
{
} /* size: 0 */

// <0016F239> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlTSHashBase<void*, 1024, RsRasterizerStateDesc_t, CUtlTSHashUseKeyHashMethod<RsRasterizerStateDesc_t>, CThreadSpinRWLock>::HashFixedDataInternal_t<void*> >(void)
{
} /* size: 0 */

// <0016F21E> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlTSHashBase<void*, 1024, RsDepthStencilStateDesc_t, CUtlTSHashUseKeyHashMethod<RsDepthStencilStateDesc_t>, CThreadSpinRWLock>::HashFixedDataInternal_t<void*> >(void)
{
} /* size: 0 */

// <0016F203> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlTSHashBase<void*, 1024, RsBlendStateDesc_t, CUtlTSHashUseKeyHashMethod<RsBlendStateDesc_t>, CThreadSpinRWLock>::HashFixedDataInternal_t<void*> >(void)
{
} /* size: 0 */

// <0016E57D> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlLinkedListElem_t<CSwapChainBase*, long long int> >(void)
{
} /* size: 0 */

// <000F849C> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CMediumCommandBufferChunk>(void)
{
} /* size: 0 */

// <000F8481> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CLargeCommandBufferChunk>(void)
{
} /* size: 0 */

// <000F7898> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CDependencyDescriptor*>(void)
{
} /* size: 0 */

// <000F7719> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<IRenderContext*>(void)
{
} /* size: 0 */

// <00085BE9> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<RBNode_t*, int> >(void)
{
} /* size: 0 */

// <000784A2> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >(void)
{
} /* size: 0 */

// <002939AD> ../../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<CUtlString, CBufferString> >(void)
{
} /* size: 0 */

// <0022E255> ../../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<LineInfo_t>(void)
{
} /* size: 0 */

// <001749C7> ../../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounterMapping_t>(void)
{
} /* size: 0 */

// <00174907> ../../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounterMappingDXC_t>(void)
{
} /* size: 0 */

// <000BC035> ../../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int> >(void)
{
} /* size: 0 */

// <000BB1FD> ../../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<VfxUniformInfo_t>(void)
{
} /* size: 0 */

// <000BB136> ../../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<VfxUniformBlockInfo_t>(void)
{
} /* size: 0 */

// <000BAFB2> ../../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CVfxStructMember*>(void)
{
} /* size: 0 */

// <000BAD17> ../../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<VfxParsedInputSignatureElement_t*>(void)
{
} /* size: 0 */

// <000BAC50> ../../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<VfxShaderMacro_t>(void)
{
} /* size: 0 */

// <000BAB70> ../../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam*>::Node_t, short unsigned int> >(void)
{
} /* size: 0 */

// <000BA37D> ../../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CVfxParsedConstantBuffer*>(void)
{
} /* size: 0 */

// <000BA292> ../../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CVfxStructDecl*>(void)
{
} /* size: 0 */

// <00052FA7> ../../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<VfxCompileTarget_t>(void)
{
} /* size: 0 */

// <005A428F> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlStringTokenSystem::TokenPairing_t>(void)
{
} /* size: 0 */

// <005A3FDC> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlTSHashBase<CUtlStringTokenSystem::CTokenStringAndSource, 512, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRWLock>::HashFixedDataInternal_t<CUtlStringTokenSystem::CTokenStringAndSource> >(void)
{
} /* size: 0 */

// <00564C6D> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlVector<CUtlHashDict<void*>::Entry_t, CUtlMemory<CUtlHashDict<void*>::Entry_t, int> > >(void)
{
} /* size: 0 */

// <00564585> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashDict<void*>::Entry_t>(void)
{
} /* size: 0 */

// <004B4A44> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<char const*, int, short unsigned int, bool (*)(char const* const&, char const* const&)>::Node_t, short unsigned int> >(void)
{
} /* size: 0 */

// <004A319A> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<char const*, short unsigned int> >(void)
{
} /* size: 0 */

// <004A2514> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CCountedStringPool::hash_item_t>(void)
{
} /* size: 0 */

// <003FF542> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<MatrixMath::MatrixElementToCopy_t>(void)
{
} /* size: 0 */

// <002A7E5D> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<void*, int> >(void)
{
} /* size: 0 */

// <002A58FA> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlMemoryBlockAllocator::MemPage_t>(void)
{
} /* size: 0 */

// <0025DA17> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<KeyValues>(void)
{
} /* size: 0 */

// <0025D133> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<unsigned int, CKeyValuesSystem::SharedStringData_t*> >(void)
{
} /* size: 0 */

// <0025D035> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<CKeyValuesSystem::SharedStringData_t*, CInterlockedIntT<int> > >(void)
{
} /* size: 0 */

// <0025CE12> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CKeyValuesSystem::IndexedString_t>(void)
{
} /* size: 0 */

// <0025CD32> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<HKeySymbol, bool>::Node_t, short unsigned int> >(void)
{
} /* size: 0 */

// <002379C2> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<KVJSONParserStackEntry_t>(void)
{
} /* size: 0 */

// <001CAAB7> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CThreadedJob*>(void)
{
} /* size: 0 */

// <001CA9C3> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CJobThread*>(void)
{
} /* size: 0 */

// <001CA922> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CThreadPool::MainThreadjob>(void)
{
} /* size: 0 */

// <001CA7EA> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<pollfd>(void)
{
} /* size: 0 */

// <001CA1B8> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CAsyncScheduledFunctionManager::scheduled_call_t>(void)
{
} /* size: 0 */

// <00196CB8> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CFilterString::MatchString_t>(void)
{
} /* size: 0 */

// <001737BA> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlLinkedListElem_t<CUtlString, unsigned int> >(void)
{
} /* size: 0 */

// <00128F6F> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CFunctorCallback*>(void)
{
} /* size: 0 */

// <00127926> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlTSHashBase<CEventId, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRWLock>::HashFixedDataInternal_t<CEventId> >(void)
{
} /* size: 0 */

// <001277FC> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >(void)
{
} /* size: 0 */

// <00118984> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHandleTable<void, 16>::EntryType_t>(void)
{
} /* size: 0 */

// <000C9FE8> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >(void)
{
} /* size: 0 */

// <00162CB9> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<unsigned int, const CResourceDiskStruct*> >(void)
{
} /* size: 0 */

// <00162BBB> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<unsigned int, const CResourceDiskEnum*> >(void)
{
} /* size: 0 */

// <001629BF> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*> >(void)
{
} /* size: 0 */

// <0016289D> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<const CResourceDiskStructField*, empty_t> >(void)
{
} /* size: 0 */

// <0013121E> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSchemaSystem::DumpMetaStats(char const*)::MetaCountRef_t>(void)
{
} /* size: 0 */

// <000CCF46> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<_PlatModule_t*>(void)
{
} /* size: 0 */

// <000CCEA5> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSchemaSystem::DetectedSchemaMismatch_t>(void)
{
} /* size: 0 */

// <000CC681> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<CSchemaType*, CSchemaType_Ptr*, short unsigned int, bool (*)(CSchemaType* const&, CSchemaType* const&)>::Node_t, short unsigned int> >(void)
{
} /* size: 0 */

// <000CBF54> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<int, CSchemaType_Atomic*, short unsigned int, bool (*)(int const&, int const&)>::Node_t, short unsigned int> >(void)
{
} /* size: 0 */

// <000CB827> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T*, short unsigned int, bool (*)(const AtomicTypeInfo_T_t&, const AtomicTypeInfo_T_t&)>::Node_t, short unsigned int> >(void)
{
} /* size: 0 */

// <000CB0FA> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT*, short unsigned int, bool (*)(const AtomicTypeInfo_T_t&, const AtomicTypeInfo_T_t&)>::Node_t, short unsigned int> >(void)
{
} /* size: 0 */

// <000CA9CD> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT*, short unsigned int, bool (*)(const AtomicTypeInfo_TT_t&, const AtomicTypeInfo_TT_t&)>::Node_t, short unsigned int> >(void)
{
} /* size: 0 */

// <000CA2A0> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I*, short unsigned int, bool (*)(const AtomicTypeInfo_I_t&, const AtomicTypeInfo_I_t&)>::Node_t, short unsigned int> >(void)
{
} /* size: 0 */

// <000C9B73> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<unsigned int, CSchemaType_DeclaredClass*, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>::Node_t, short unsigned int> >(void)
{
} /* size: 0 */

// <000C9446> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<unsigned int, CSchemaType_DeclaredEnum*, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>::Node_t, short unsigned int> >(void)
{
} /* size: 0 */

// <000C8D19> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<int, const SchemaAtomicTypeInfo_t*, short unsigned int, bool (*)(int const&, int const&)>::Node_t, short unsigned int> >(void)
{
} /* size: 0 */

// <000C85EC> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray*, short unsigned int, bool (*)(const TypeAndCountInfo_t&, const TypeAndCountInfo_t&)>::Node_t, short unsigned int> >(void)
{
} /* size: 0 */

// <000C7EBF> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<int, CSchemaType_Bitfield*, short unsigned int, bool (*)(int const&, int const&)>::Node_t, short unsigned int> >(void)
{
} /* size: 0 */

// <000C3B73> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSchemaClassInfo*>(void)
{
} /* size: 0 */

// <000C39E6> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSchemaEnumInfo*>(void)
{
} /* size: 0 */

// <000C2FB6> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlTSHashBase<CSchemaClassInfoSynth*, 256, const CSchemaClassInfo*, CUtlTSHashGenericHashMethod<const CSchemaClassInfo*>, CThreadSpinRWLock>::HashFixedDataInternal_t<CSchemaClassInfoSynth*> >(void)
{
} /* size: 0 */

// <000C2F73> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlTSHashBase<CSchemaEnumInfoSynth*, 256, const CSchemaEnumInfo*, CUtlTSHashGenericHashMethod<const CSchemaEnumInfo*>, CThreadSpinRWLock>::HashFixedDataInternal_t<CSchemaEnumInfoSynth*> >(void)
{
} /* size: 0 */

// <000C1165> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlTSHashBase<CSchemaClassInfo*, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRWLock>::HashFixedDataInternal_t<CSchemaClassInfo*> >(void)
{
} /* size: 0 */

// <000C114A> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlTSHashBase<CSchemaEnumInfo*, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRWLock>::HashFixedDataInternal_t<CSchemaEnumInfo*> >(void)
{
} /* size: 0 */

// <000BDB79> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSchemaType*>(void)
{
} /* size: 0 */

// <000BDAB2> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSchemaType_Ptr*>(void)
{
} /* size: 0 */

// <000BD37A> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSchemaType_Atomic*>(void)
{
} /* size: 0 */

// <000BCD09> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<AtomicTypeInfo_T_t>(void)
{
} /* size: 0 */

// <000BCC42> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSchemaType_Atomic_T*>(void)
{
} /* size: 0 */

// <000BC5D1> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSchemaType_Atomic_CollectionOfT*>(void)
{
} /* size: 0 */

// <000BB8C4> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<AtomicTypeInfo_I_t>(void)
{
} /* size: 0 */

// <000BB7FD> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSchemaType_Atomic_I*>(void)
{
} /* size: 0 */

// <000BB0C5> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSchemaType_DeclaredClass*>(void)
{
} /* size: 0 */

// <000BA8A2> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<TypeAndCountInfo_t>(void)
{
} /* size: 0 */

// <000BA7DB> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CSchemaType_FixedArray*>(void)
{
} /* size: 0 */

// <00403E6B> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CMeshInstance*>(void)
{
} /* size: 0 */

// <00402E0F> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<const CRenderMesh*, CMeshRayTrace*>::Node_t, short unsigned int> >(void)
{
} /* size: 0 */

// <0034CC46> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CBoneConstraintBase*>(void)
{
} /* size: 0 */

// <0021915C> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<SkeletonMeshVertex_t>(void)
{
} /* size: 0 */

// <00169E61> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<RuntimeBuffersInfo_t::BufferInfo_t>(void)
{
} /* size: 0 */

// <0016835A> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<VertexColor_t>(void)
{
} /* size: 0 */

// <00168056> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CModelTypeManager::AsyncProcessDataResults::MeshData*>(void)
{
} /* size: 0 */

// <001670EC> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CStrongHandleCopyable<InfoForResourceTypeCModel> >(void)
{
} /* size: 0 */

// <00167064> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph> >(void)
{
} /* size: 0 */

// <00166FC3> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CMeshInstance_Imp*>(void)
{
} /* size: 0 */

// <00078AFF> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CMeshInstance_Imp>(void)
{
} /* size: 0 */

// <00078817> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CachedSlotAndExtraData_t>(void)
{
} /* size: 0 */

// <00CA212B> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t>(void)
{
} /* size: 0 */

// <005B2026> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CPlatformFont::abc_cache_t, short unsigned int> >(void)
{
} /* size: 0 */

// <005B1936> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CPlatformFont::kerned_abc_cache_t, short unsigned int> >(void)
{
} /* size: 0 */

// <0057ABD4> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlLinkedListElem_t<CMatSystemTexture, short unsigned int> >(void)
{
} /* size: 0 */

// <0057AB1A> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CTextureDictionary::DeferredResourceLoads_t>(void)
{
} /* size: 0 */

// <0053396C> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<unsigned int, CFontTextureCache::Page_t>::Node_t, short unsigned int> >(void)
{
} /* size: 0 */

// <0052B5A5> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CFontTextureCache::Page_t>(void)
{
} /* size: 0 */

// <0052B58A> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int> >(void)
{
} /* size: 0 */

// <004F6D99> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<SFontDescription>(void)
{
} /* size: 0 */

// <004F6A68> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CFontAmalgam>(void)
{
} /* size: 0 */

// <004F69AE> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int>::Node_t, int> >(void)
{
} /* size: 0 */

// <004F68F4> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<short unsigned int, CFontManager::CFontDataFile, int>::Node_t, int> >(void)
{
} /* size: 0 */

// <004F6853> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CFontManager::CustomFontInfo_t>(void)
{
} /* size: 0 */

// <004F67B2> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<FontAliasList_t*>(void)
{
} /* size: 0 */

// <004F6539> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<FontAlias_t>(void)
{
} /* size: 0 */

// <004327FF> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlVector<IQueuedRenderable*> >(void)
{
} /* size: 0 */

// <00432745> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, int>::Node_t, short unsigned int> >(void)
{
} /* size: 0 */

// <0042E0E3> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<IQueuedRenderable*>(void)
{
} /* size: 0 */

// <002EDC54> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashtableEntry<SpamKey_t, empty_t> >(void)
{
} /* size: 0 */

// <00160919> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CMaterial2>(void)
{
} /* size: 0 */

// <001584AC> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CMaterialParam>(void)
{
} /* size: 0 */

// <0008EC9D> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CMaterial2*>(void)
{
} /* size: 0 */

// <0008DFC1> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CWeakHandle<InfoForResourceTypeCVfx> >(void)
{
} /* size: 0 */

// <00046464> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>::Node_t>(void)
{
} /* size: 0 */

// <000462BE> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CLocalize::LocalizationFileInfo_t>(void)
{
} /* size: 0 */

// <00046236> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CLocalize::FileChangeDir_t*>(void)
{
} /* size: 0 */

// <0004613F> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>::Node_t>(void)
{
} /* size: 0 */

// <00045EB1> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<LocalizationFileInfoRaw_t>(void)
{
} /* size: 0 */

// <00044D3E> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>::HashBucket_t>(void)
{
} /* size: 0 */

// <00044B19> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>::HashBucket_t>(void)
{
} /* size: 0 */

// <00210B45> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t>&, const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >&)::FileSort_t, int> >(void)
{
} /* size: 0 */

// <0020DA6A> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<FileHandleTracker_t>(void)
{
} /* size: 0 */

// <0015E561> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CZipFile::CZipEntry, int> >(void)
{
} /* size: 0 */

// <0015CAD1> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlLinkedListElem_t<CZip*, short unsigned int> >(void)
{
} /* size: 0 */

// <00143909> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<int, long long unsigned int>::Node_t, short unsigned int> >(void)
{
} /* size: 0 */

// <000C5049> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CBaseFileSystem::SearchPathStateEntry_t>(void)
{
} /* size: 0 */

// <000C4A33> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CBaseFileSystem::CSearchPath>(void)
{
} /* size: 0 */

// <000C496C> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CBaseFileSystem::CPathIDInfo*>(void)
{
} /* size: 0 */

// <000C4524> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CBaseFileSystem::COpenedFile>(void)
{
} /* size: 0 */

// <000C4444> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<CUtlString, CBaseFileSystem::SymLink_t>::Node_t, short unsigned int> >(void)
{
} /* size: 0 */

// <000C4329> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int> >(void)
{
} /* size: 0 */

// <000C3333> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CUtlSymbol>(void)
{
} /* size: 0 */

// <000BF9B2> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<FileOpenDuplicateTime_t*>(void)
{
} /* size: 0 */

// <000BDC33> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlRBTreeNode_t<CUtlMap<char const*, FixupSearchCacheEntry, int, bool (*)(char const* const&, char const* const&)>::Node_t, int> >(void)
{
} /* size: 0 */

// <000B985F> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >(void)
{
} /* size: 0 */

// <00046FD2> ../public/tier0/platform_compile_base.h:1577
inline void ValidateAlignment<CAsyncFileSystem2::CIOServiceThread*>(void)
{
} /* size: 0 */

// <06F1ED11> ../../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<8, CFeAgglomerator::CCluster::AlignedByteArray_t()
{
} /* size: 0 */

// <06F1ECF4> ../../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<8, CFeAgglomerator::CCluster::AlignedByteArray_t()
{
} /* size: 0 */

// <06E92839> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<8, CUtlTokenReference>::AlignedByteArray_t()
{
} /* size: 0 */

// <06E9281C> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<8, CUtlTokenReference>::AlignedByteArray_t()
{
} /* size: 0 */

// <068E85DF> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<32, int>::AlignedByteArray_t()
{
} /* size: 0 */

// <068E85C2> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<32, int>::AlignedByteArray_t()
{
} /* size: 0 */

// <0683244A> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<1024, char>::AlignedByteArray_t()
{
} /* size: 0 */

// <0683242D> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<1024, char>::AlignedByteArray_t()
{
} /* size: 0 */

// <062E905D> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<32, RayTracingResult_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <062E9040> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<32, RayTracingResult_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <062E8F98> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<8, RayTracingSingleResult_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <062E8F7B> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<8, RayTracingSingleResult_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <0614C40D> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<32, unsigned int>::AlignedByteArray_t()
{
} /* size: 0 */

// <0614C3F0> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<32, unsigned int>::AlignedByteArray_t()
{
} /* size: 0 */

// <0608CDA6> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<1, int>::AlignedByteArray_t()
{
} /* size: 0 */

// <0608CD89> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<1, int>::AlignedByteArray_t()
{
} /* size: 0 */

// <06081094> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<16, Quaternion>::AlignedByteArray_t()
{
} /* size: 0 */

// <06081077> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<16, Quaternion>::AlignedByteArray_t()
{
} /* size: 0 */

// <06080EDF> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<16, QuaternionAligned>::AlignedByteArray_t()
{
} /* size: 0 */

// <06080EC2> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<16, QuaternionAligned>::AlignedByteArray_t()
{
} /* size: 0 */

// <0607FDBA> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<16, Vector>::AlignedByteArray_t()
{
} /* size: 0 */

// <0607FD9D> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<16, Vector>::AlignedByteArray_t()
{
} /* size: 0 */

// <0607FCDE> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<16, unsigned int>::AlignedByteArray_t()
{
} /* size: 0 */

// <0607FCC1> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<16, unsigned int>::AlignedByteArray_t()
{
} /* size: 0 */

// <0607FB51> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<64, int>::AlignedByteArray_t()
{
} /* size: 0 */

// <0607FB34> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<64, int>::AlignedByteArray_t()
{
} /* size: 0 */

// <0607B23E> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<32, CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <0607B221> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<32, CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <0607852E> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<4, TransferVertex_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <06078511> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<4, TransferVertex_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <060782FB> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<64, bool>::AlignedByteArray_t()
{
} /* size: 0 */

// <060782DE> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<64, bool>::AlignedByteArray_t()
{
} /* size: 0 */

// <05F63E7D> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<16, CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <05F63E60> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<16, CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <05F63B22> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<16, CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <05F63B05> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<16, CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <05F637E5> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<16, CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <05F637C8> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<16, CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <05F62942> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<16, CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <05F62925> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<16, CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <05EE20B6> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t(const AlignedByteArray_t<16, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFace this)
{
} /* size: 0 */

// <05EE2099> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t(const AlignedByteArray_t<16, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFace this)
{
} /* size: 0 */

// <05E5C324> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t(const AlignedByteArray_t<12, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Verte this)
{
} /* size: 0 */

// <05E5C307> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t(const AlignedByteArray_t<12, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Verte this)
{
} /* size: 0 */

// <05E5C151> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<8, Vector>::AlignedByteArray_t()
{
} /* size: 0 */

// <05E5C134> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<8, Vector>::AlignedByteArray_t()
{
} /* size: 0 */

// <05E5BE64> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t(const AlignedByteArray_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex this)
{
} /* size: 0 */

// <05E5BE47> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t(const AlignedByteArray_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex this)
{
} /* size: 0 */

// <05E5766A> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t(const AlignedByteArray_t<16, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Verte this)
{
} /* size: 0 */

// <05E5764D> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t(const AlignedByteArray_t<16, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Verte this)
{
} /* size: 0 */

// <05E56426> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t(const AlignedByteArray_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t this)
{
} /* size: 0 */

// <05E56409> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t(const AlignedByteArray_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t this)
{
} /* size: 0 */

// <05DD6F23> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<8, const qhVertex::AlignedByteArray_t()
{
} /* size: 0 */

// <05DD6F06> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<8, const qhVertex::AlignedByteArray_t()
{
} /* size: 0 */

// <05DD6C8E> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t(const AlignedByteArray_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWit this)
{
} /* size: 0 */

// <05DD6C71> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t(const AlignedByteArray_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWit this)
{
} /* size: 0 */

// <05DC8A46> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<256, CQuickHullSimplifier::Face_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <05DC8A29> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<256, CQuickHullSimplifier::Face_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <05DC891D> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<256, CQuickHullSimplifier::Cluster_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <05DC8900> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<256, CQuickHullSimplifier::Cluster_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <05DB5BE9> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t(const AlignedByteArray_t<32, CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentHandleWith this)
{
} /* size: 0 */

// <05CDC7FC> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<128, float>::AlignedByteArray_t()
{
} /* size: 0 */

// <05CDC7DF> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<128, float>::AlignedByteArray_t()
{
} /* size: 0 */

// <05C97228> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<16, Vector2D>::AlignedByteArray_t()
{
} /* size: 0 */

// <05C9720B> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<16, Vector2D>::AlignedByteArray_t()
{
} /* size: 0 */

// <05C97125> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<45, int>::AlignedByteArray_t()
{
} /* size: 0 */

// <05C97108> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<45, int>::AlignedByteArray_t()
{
} /* size: 0 */

// <05BAF855> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<64, float const::AlignedByteArray_t()
{
} /* size: 0 */

// <05BAF838> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<64, float const::AlignedByteArray_t()
{
} /* size: 0 */

// <0572D49D> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<8, const CKV3FormatManager::Conversion_t::AlignedByteArray_t()
{
} /* size: 0 */

// <0572D480> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<8, const CKV3FormatManager::Conversion_t::AlignedByteArray_t()
{
} /* size: 0 */

// <056BD9C6> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<8, CKV3MemberName>::AlignedByteArray_t()
{
} /* size: 0 */

// <056BD752> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<8, CLoadKV3FromKV1Text::CTranslationPath::AlignedByteArray_t()
{
} /* size: 0 */

// <056BD735> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<8, CLoadKV3FromKV1Text::CTranslationPath::AlignedByteArray_t()
{
} /* size: 0 */

// <05667479> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<256, CUtlStringToken>::AlignedByteArray_t()
{
} /* size: 0 */

// <0566745C> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<256, CUtlStringToken>::AlignedByteArray_t()
{
} /* size: 0 */

// <05667369> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<256, char const::AlignedByteArray_t()
{
} /* size: 0 */

// <0566734C> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<256, char const::AlignedByteArray_t()
{
} /* size: 0 */

// <05667259> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<8, std::pair<unsigned char::AlignedByteArray_t()
{
} /* size: 0 */

// <0566723C> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<8, std::pair<unsigned char::AlignedByteArray_t()
{
} /* size: 0 */

// <055E05BF> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<1024, unsigned char>::AlignedByteArray_t()
{
} /* size: 0 */

// <055E05A2> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<1024, unsigned char>::AlignedByteArray_t()
{
} /* size: 0 */

// <0554ADE6> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<4, KeyValues3::AlignedByteArray_t()
{
} /* size: 0 */

// <0554ADC9> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<4, KeyValues3::AlignedByteArray_t()
{
} /* size: 0 */

// <0554ACBD> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<8, CKeyValues3Cluster::AlignedByteArray_t()
{
} /* size: 0 */

// <0554ACA0> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<8, CKeyValues3Cluster::AlignedByteArray_t()
{
} /* size: 0 */

// <0554AB94> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<4, CKeyValues3ArrayCluster::AlignedByteArray_t()
{
} /* size: 0 */

// <0554AB77> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<4, CKeyValues3ArrayCluster::AlignedByteArray_t()
{
} /* size: 0 */

// <0554AA6B> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<4, CKeyValues3TableCluster::AlignedByteArray_t()
{
} /* size: 0 */

// <0554AA4E> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<4, CKeyValues3TableCluster::AlignedByteArray_t()
{
} /* size: 0 */

// <0554A758> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<4, CKeyValues3Iterator::StackEntry_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <0554A73B> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<4, CKeyValues3Iterator::StackEntry_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <0554A220> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<8, CUtlStringToken>::AlignedByteArray_t()
{
} /* size: 0 */

// <0554A203> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<8, CUtlStringToken>::AlignedByteArray_t()
{
} /* size: 0 */

// <0554A136> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<8, KeyValues3::AlignedByteArray_t()
{
} /* size: 0 */

// <0554A119> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<8, KeyValues3::AlignedByteArray_t()
{
} /* size: 0 */

// <0554A080> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<8, char const::AlignedByteArray_t()
{
} /* size: 0 */

// <0554A063> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<8, char const::AlignedByteArray_t()
{
} /* size: 0 */

// <05549F79> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<8, unsigned char>::AlignedByteArray_t()
{
} /* size: 0 */

// <053F1DC9> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<16, float>::AlignedByteArray_t()
{
} /* size: 0 */

// <053F1DAC> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<16, float>::AlignedByteArray_t()
{
} /* size: 0 */

// <053EB251> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<64, CTransform>::AlignedByteArray_t()
{
} /* size: 0 */

// <053EB234> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<64, CTransform>::AlignedByteArray_t()
{
} /* size: 0 */

// <04E81008> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<32, float>::AlignedByteArray_t()
{
} /* size: 0 */

// <04E80FEB> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<32, float>::AlignedByteArray_t()
{
} /* size: 0 */

// <04CB8146> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<1, CSceneObjectData>::AlignedByteArray_t()
{
} /* size: 0 */

// <04CB6C9C> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<4, CRenderBufferBinding>::AlignedByteArray_t()
{
} /* size: 0 */

// <04CB6C7F> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<4, CRenderBufferBinding>::AlignedByteArray_t()
{
} /* size: 0 */

// <04CAE587> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<4, RenderInputLayoutField_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <04CAE56A> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<4, RenderInputLayoutField_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <04999171> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<128, CTransform>::AlignedByteArray_t()
{
} /* size: 0 */

// <04999154> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<128, CTransform>::AlignedByteArray_t()
{
} /* size: 0 */

// <0496F529> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<8, CSchemaInheritanceIterator::ClassToTraverse_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <0496F50C> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<8, CSchemaInheritanceIterator::ClassToTraverse_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <0475F148> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<2048, unsigned char>::AlignedByteArray_t()
{
} /* size: 0 */

// <0475F12B> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<2048, unsigned char>::AlignedByteArray_t()
{
} /* size: 0 */

// <0475EFC6> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<6144, unsigned char>::AlignedByteArray_t()
{
} /* size: 0 */

// <0475EE50> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<8192, unsigned char>::AlignedByteArray_t()
{
} /* size: 0 */

// <040AE674> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<3, unsigned int>::AlignedByteArray_t()
{
} /* size: 0 */

// <040AE656> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<3, unsigned int>::AlignedByteArray_t()
{
} /* size: 0 */

// <03B89DD9> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<20, CMeshDrawPrimitive_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <03B89DBC> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<20, CMeshDrawPrimitive_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <036A6198> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<32, RenderDescriptorDesc_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <036A617B> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<32, RenderDescriptorDesc_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <03530584> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<1, CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> > >::AlignedByteArray_t()
{
} /* size: 0 */

// <03530567> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<1, CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> > >::AlignedByteArray_t()
{
} /* size: 0 */

// <03530450> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<1, ChildSceneObjectReference_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <03530433> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<1, ChildSceneObjectReference_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <0352F75E> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<2, CWeakHandle<InfoForResourceTypeIMaterial2> >::AlignedByteArray_t()
{
} /* size: 0 */

// <0352F741> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<2, CWeakHandle<InfoForResourceTypeIMaterial2> >::AlignedByteArray_t()
{
} /* size: 0 */

// <0352F64E> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<2, int>::AlignedByteArray_t()
{
} /* size: 0 */

// <0352F631> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<2, int>::AlignedByteArray_t()
{
} /* size: 0 */

// <0352F302> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<64, CSceneObject::AlignedByteArray_t()
{
} /* size: 0 */

// <0352F2E5> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<64, CSceneObject::AlignedByteArray_t()
{
} /* size: 0 */

// <03464FC4> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<1, ISceneLayer::AlignedByteArray_t()
{
} /* size: 0 */

// <03464FA7> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<1, ISceneLayer::AlignedByteArray_t()
{
} /* size: 0 */

// <03464F33> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<4, ConstantBufferHandle_t__::AlignedByteArray_t()
{
} /* size: 0 */

// <03464F16> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<4, ConstantBufferHandle_t__::AlignedByteArray_t()
{
} /* size: 0 */

// <03464EA0> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<4, CUtlStringToken>::AlignedByteArray_t()
{
} /* size: 0 */

// <03464E83> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<4, CUtlStringToken>::AlignedByteArray_t()
{
} /* size: 0 */

// <03464E0D> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<2, ISceneLayer::InputTexture_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <03464DF0> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<2, ISceneLayer::InputTexture_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <03464D7C> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<2, ISceneLayer::InputSceneViewRenderTarget_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <03464D5F> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<2, ISceneLayer::InputSceneViewRenderTarget_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <034624FF> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<2, CFrustum>::AlignedByteArray_t()
{
} /* size: 0 */

// <034624E2> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<2, CFrustum>::AlignedByteArray_t()
{
} /* size: 0 */

// <034623F9> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<8, CRenderBatchList::AlignedByteArray_t()
{
} /* size: 0 */

// <034623DC> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<8, CRenderBatchList::AlignedByteArray_t()
{
} /* size: 0 */

// <034622D0> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<2, ISceneWorld::AlignedByteArray_t()
{
} /* size: 0 */

// <034622B3> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<2, ISceneWorld::AlignedByteArray_t()
{
} /* size: 0 */

// <034621A7> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<4, ISceneView::AlignedByteArray_t()
{
} /* size: 0 */

// <0346218A> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<4, ISceneView::AlignedByteArray_t()
{
} /* size: 0 */

// <03220C58> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<16, ISceneView::WorldList_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <03220C3B> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<16, ISceneView::WorldList_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <032209C1> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<8, ISceneView::AlignedByteArray_t()
{
} /* size: 0 */

// <032209A4> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<8, ISceneView::AlignedByteArray_t()
{
} /* size: 0 */

// <032208B1> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<16, ISceneView::AlignedByteArray_t()
{
} /* size: 0 */

// <03220894> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<16, ISceneView::AlignedByteArray_t()
{
} /* size: 0 */

// <032207FB> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<35, CScratchRenderTargetSystem::RenderTargetInfo_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <032207DE> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<35, CScratchRenderTargetSystem::RenderTargetInfo_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <03220583> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<16, CPVSBits>::AlignedByteArray_t()
{
} /* size: 0 */

// <03220566> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<16, CPVSBits>::AlignedByteArray_t()
{
} /* size: 0 */

// <0311FA16> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<64, CWeakHandle<InfoForResourceTypeCTextureBase> >::AlignedByteArray_t()
{
} /* size: 0 */

// <0311F9F9> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<64, CWeakHandle<InfoForResourceTypeCTextureBase> >::AlignedByteArray_t()
{
} /* size: 0 */

// <0311D858> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<1024, const DebugSphere_t::AlignedByteArray_t()
{
} /* size: 0 */

// <0305CA17> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<1, CUtlStringToken>::AlignedByteArray_t()
{
} /* size: 0 */

// <0305C9FA> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<1, CUtlStringToken>::AlignedByteArray_t()
{
} /* size: 0 */

// <0305C819> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<128, CSceneLightObjectInternal::AlignedByteArray_t()
{
} /* size: 0 */

// <0305C7FC> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<128, CSceneLightObjectInternal::AlignedByteArray_t()
{
} /* size: 0 */

// <0305C709> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<4, ISceneLightListener::AlignedByteArray_t()
{
} /* size: 0 */

// <0305C6EC> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<4, ISceneLightListener::AlignedByteArray_t()
{
} /* size: 0 */

// <0305C5F9> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<128, CEnvMapSceneObject::AlignedByteArray_t()
{
} /* size: 0 */

// <0305C5DC> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<128, CEnvMapSceneObject::AlignedByteArray_t()
{
} /* size: 0 */

// <0305C4E9> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<4, ISceneEnvironmentMapListener::AlignedByteArray_t()
{
} /* size: 0 */

// <0305C4CC> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<4, ISceneEnvironmentMapListener::AlignedByteArray_t()
{
} /* size: 0 */

// <0305C3D9> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<128, CSceneLightProbeVolumeObject::AlignedByteArray_t()
{
} /* size: 0 */

// <0305C3BC> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<128, CSceneLightProbeVolumeObject::AlignedByteArray_t()
{
} /* size: 0 */

// <0305C2C9> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<4, ISceneLightProbeVolumeListener::AlignedByteArray_t()
{
} /* size: 0 */

// <0305C2AC> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<4, ISceneLightProbeVolumeListener::AlignedByteArray_t()
{
} /* size: 0 */

// <02EABE7C> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<1024, CSceneObject::AlignedByteArray_t()
{
} /* size: 0 */

// <02EABE5F> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<1024, CSceneObject::AlignedByteArray_t()
{
} /* size: 0 */

// <02EA82D2> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<32, CSceneDrawList::AlignedByteArray_t()
{
} /* size: 0 */

// <02EA82B5> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<32, CSceneDrawList::AlignedByteArray_t()
{
} /* size: 0 */

// <02E8E146> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<256, DisplayListToSubmit_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <02E8E129> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<256, DisplayListToSubmit_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <02E8D7A7> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<16, CSceneView::AlignedByteArray_t()
{
} /* size: 0 */

// <02E8D78A> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<16, CSceneView::AlignedByteArray_t()
{
} /* size: 0 */

// <02E8D56E> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<64, ISceneWorld::AlignedByteArray_t()
{
} /* size: 0 */

// <02E8D551> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<64, ISceneWorld::AlignedByteArray_t()
{
} /* size: 0 */

// <02E8D2C2> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<32, ISceneWorld::AlignedByteArray_t()
{
} /* size: 0 */

// <02E8D2A5> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<32, ISceneWorld::AlignedByteArray_t()
{
} /* size: 0 */

// <02E8C561> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<16, std::function<void(CSceneObject::AlignedByteArray_t()>*>* this)
{
} /* size: 0 */

// <02E8C544> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<16, std::function<void(CSceneObject::AlignedByteArray_t()>*>* this)
{
} /* size: 0 */

// <02E8C0AD> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<8, RenderDescriptorBinding_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <02E8C090> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<8, RenderDescriptorBinding_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <02E25EA5> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<256, CSceneSystem::RenderAttributesSetup_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <02E25E88> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<256, CSceneSystem::RenderAttributesSetup_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <02E257FE> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<8, int>::AlignedByteArray_t()
{
} /* size: 0 */

// <02E257E1> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<8, int>::AlignedByteArray_t()
{
} /* size: 0 */

// <02E24617> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<16, AtlasChart_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <02E24317> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<64, CSceneWorld::AlignedByteArray_t()
{
} /* size: 0 */

// <02E242FA> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<64, CSceneWorld::AlignedByteArray_t()
{
} /* size: 0 */

// <02E2350A> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<12, void::AlignedByteArray_t()
{
} /* size: 0 */

// <02E234ED> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<12, void::AlignedByteArray_t()
{
} /* size: 0 */

// <02E2322F> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<8, RenderDescriptorDesc_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <02E23212> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<8, RenderDescriptorDesc_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <02E17CBC> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<32, CSceneLayer::AlignedByteArray_t()
{
} /* size: 0 */

// <02E17C9F> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<32, CSceneLayer::AlignedByteArray_t()
{
} /* size: 0 */

// <02E17BC7> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<32, CUtlVectorFixedGrowableCompat<CSceneDrawList::AlignedByteArray_t()
{
} /* size: 0 */

// <02E17BAA> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<32, CUtlVectorFixedGrowableCompat<CSceneDrawList::AlignedByteArray_t()
{
} /* size: 0 */

// <02E17818> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<64, PendingVisitList_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <02B779C7> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<4, ISceneWorld::AlignedByteArray_t()
{
} /* size: 0 */

// <02B779AA> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<4, ISceneWorld::AlignedByteArray_t()
{
} /* size: 0 */

// <026B49A7> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<1088, float>::AlignedByteArray_t()
{
} /* size: 0 */

// <026B498A> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<1088, float>::AlignedByteArray_t()
{
} /* size: 0 */

// <0263A57B> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<2048, float>::AlignedByteArray_t()
{
} /* size: 0 */

// <0263A55E> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<2048, float>::AlignedByteArray_t()
{
} /* size: 0 */

// <0263A341> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<4, audio_buffer_input_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <0263A324> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<4, audio_buffer_input_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <0240A87A> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<1024, short int>::AlignedByteArray_t()
{
} /* size: 0 */

// <0240A85D> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<1024, short int>::AlignedByteArray_t()
{
} /* size: 0 */

// <0240A6C5> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<2, CAudioMixBuffer>::AlignedByteArray_t()
{
} /* size: 0 */

// <0240A6A8> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<2, CAudioMixBuffer>::AlignedByteArray_t()
{
} /* size: 0 */

// <023E7B87> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<16, char const::AlignedByteArray_t()
{
} /* size: 0 */

// <023E77BE> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<64, char const::AlignedByteArray_t()
{
} /* size: 0 */

// <023E77A1> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<64, char const::AlignedByteArray_t()
{
} /* size: 0 */

// <023530EF> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<256, CUtlHashtableEntry<CLoadingResource::AlignedByteArray_t()
{
} /* size: 0 */

// <023530D2> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<256, CUtlHashtableEntry<CLoadingResource::AlignedByteArray_t()
{
} /* size: 0 */

// <023510C7> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<16, NullTypeManager_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <02350849> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<8, CResourceSystem::ForcedSynchronizationCallbackInfo_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <0235082C> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<8, CResourceSystem::ForcedSynchronizationCallbackInfo_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <0234DAB0> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<128, CResourceManifest::AlignedByteArray_t()
{
} /* size: 0 */

// <0234DA93> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<128, CResourceManifest::AlignedByteArray_t()
{
} /* size: 0 */

// <0234D8A1> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<32, const ResourceBindingBase_t::AlignedByteArray_t()
{
} /* size: 0 */

// <0175D293> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<128, PhysicsTrace_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <0127C1FD> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<9, float>::AlignedByteArray_t()
{
} /* size: 0 */

// <0127C1DF> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<9, float>::AlignedByteArray_t()
{
} /* size: 0 */

// <0126360A> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<128, IPhysicsShape::AlignedByteArray_t()
{
} /* size: 0 */

// <012635EC> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<128, IPhysicsShape::AlignedByteArray_t()
{
} /* size: 0 */

// <010F9277> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<4, CSceneObject::AlignedByteArray_t()
{
} /* size: 0 */

// <010F925A> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<4, CSceneObject::AlignedByteArray_t()
{
} /* size: 0 */

// <010F0E6A> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<8, unsigned int>::AlignedByteArray_t()
{
} /* size: 0 */

// <010F0E4D> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<8, unsigned int>::AlignedByteArray_t()
{
} /* size: 0 */

// <01002699> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<1, VertexBufferHandle_t__::AlignedByteArray_t()
{
} /* size: 0 */

// <0100267C> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<1, VertexBufferHandle_t__::AlignedByteArray_t()
{
} /* size: 0 */

// <01002570> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<5, CWeakHandle<InfoForResourceTypeCTextureBase> >::AlignedByteArray_t()
{
} /* size: 0 */

// <01002553> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<5, CWeakHandle<InfoForResourceTypeCTextureBase> >::AlignedByteArray_t()
{
} /* size: 0 */

// <00B9B35E> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<1, CPhysicsShape::AlignedByteArray_t()
{
} /* size: 0 */

// <00B9B340> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<1, CPhysicsShape::AlignedByteArray_t()
{
} /* size: 0 */

// <009ED6A3> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<32, const qhVertex::AlignedByteArray_t()
{
} /* size: 0 */

// <009ED686> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<32, const qhVertex::AlignedByteArray_t()
{
} /* size: 0 */

// <009ED53A> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<32, const qhFace::AlignedByteArray_t()
{
} /* size: 0 */

// <009ED51D> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<32, const qhFace::AlignedByteArray_t()
{
} /* size: 0 */

// <009ED411> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<128, const qhHalfEdge::AlignedByteArray_t()
{
} /* size: 0 */

// <009ED3F4> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<128, const qhHalfEdge::AlignedByteArray_t()
{
} /* size: 0 */

// <009EB298> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<64, DebugMeshInfo_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <009EB27B> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<64, DebugMeshInfo_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <008A8AC0> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<1, CInputSystem::CursorSurface_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <008A8AA3> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<1, CInputSystem::CursorSurface_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <003C704E> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<1024, unsigned int>::AlignedByteArray_t()
{
} /* size: 0 */

// <003C7030> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<1024, unsigned int>::AlignedByteArray_t()
{
} /* size: 0 */

// <0035CA58> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<4, int>::AlignedByteArray_t()
{
} /* size: 0 */

// <0035CA3B> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<4, int>::AlignedByteArray_t()
{
} /* size: 0 */

// <00005954> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<1, COrderedInitShutdownRefWrapper<EarlyInit_Common> >::AlignedByteArray_t()
{
} /* size: 0 */

// <00005937> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<1, COrderedInitShutdownRefWrapper<EarlyInit_Common> >::AlignedByteArray_t()
{
} /* size: 0 */

// <032550E6> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<16, int>::AlignedByteArray_t()
{
} /* size: 0 */

// <032550C9> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<16, int>::AlignedByteArray_t()
{
} /* size: 0 */

// <027EFBB5> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<32, CTransform>::AlignedByteArray_t()
{
} /* size: 0 */

// <027EFB98> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<32, CTransform>::AlignedByteArray_t()
{
} /* size: 0 */

// <027ED1C8> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<12, CAnimationChannelResult>::AlignedByteArray_t()
{
} /* size: 0 */

// <027ED1AB> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<12, CAnimationChannelResult>::AlignedByteArray_t()
{
} /* size: 0 */

// <027ED0C5> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<12, IKLocked_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <0272D551> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<256, int>::AlignedByteArray_t()
{
} /* size: 0 */

// <0272D534> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<256, int>::AlignedByteArray_t()
{
} /* size: 0 */

// <0272A552> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<32, CInternalOperation>::AlignedByteArray_t()
{
} /* size: 0 */

// <0272A535> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<32, CInternalOperation>::AlignedByteArray_t()
{
} /* size: 0 */

// <0272A432> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<32, CAnimationResult>::AlignedByteArray_t()
{
} /* size: 0 */

// <0272A34C> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<32, bool>::AlignedByteArray_t()
{
} /* size: 0 */

// <0272A260> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<32, DecodeOperation_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <025BB186> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<128, matrix3x4a_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <00C3C1FD> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<4096, CUtlString>::AlignedByteArray_t()
{
} /* size: 0 */

// <00C382B0> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<256, CAnimationDecodeCacheEntry_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <00C38293> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<256, CAnimationDecodeCacheEntry_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <00143045> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<16, CIKChainContext>::AlignedByteArray_t()
{
} /* size: 0 */

// <00143027> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<16, CIKChainContext>::AlignedByteArray_t()
{
} /* size: 0 */

// <0008A07A> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<3, IIKRuleContext::AlignedByteArray_t()
{
} /* size: 0 */

// <0008A05C> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<3, IIKRuleContext::AlignedByteArray_t()
{
} /* size: 0 */

// <00ABCF10> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<8, short unsigned int>::AlignedByteArray_t()
{
} /* size: 0 */

// <009CFEEC> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<16, CDependencyDescriptor::AlignedByteArray_t()
{
} /* size: 0 */

// <009C4CFC> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<8, VkDescriptorPoolSize>::AlignedByteArray_t()
{
} /* size: 0 */

// <009C4CDF> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<8, VkDescriptorPoolSize>::AlignedByteArray_t()
{
} /* size: 0 */

// <009C0619> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<4, RenderDescriptorSetHandle_t__::AlignedByteArray_t()
{
} /* size: 0 */

// <008C09B0> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<3, VkPhysicalDeviceType>::AlignedByteArray_t()
{
} /* size: 0 */

// <00839E86> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<4, CBarrierHelperVulkan::BufferState_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <00839E68> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<4, CBarrierHelperVulkan::BufferState_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <00839DBD> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<4, CBarrierHelperVulkan::UAVState_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <00839D30> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<2, RenderImageLayout_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <00839D12> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<2, RenderImageLayout_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <00839C67> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<2, CWeakHandle<InfoForResourceTypeCTextureBase> >::AlignedByteArray_t()
{
} /* size: 0 */

// <00839BBC> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<4, RenderBufferBarrier_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <00839B2F> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<4, RenderUAVBarrier_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <00839B11> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<4, RenderUAVBarrier_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <0070471D> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<29, unsigned int>::AlignedByteArray_t()
{
} /* size: 0 */

// <006FF520> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<16, VkVertexInputAttributeDescription>::AlignedByteArray_t()
{
} /* size: 0 */

// <006FF41A> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<16, VkVertexInputBindingDescription>::AlignedByteArray_t()
{
} /* size: 0 */

// <006FF314> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<8, VkPipelineColorBlendAttachmentState>::AlignedByteArray_t()
{
} /* size: 0 */

// <006FF22B> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<23, VkDynamicState>::AlignedByteArray_t()
{
} /* size: 0 */

// <006FF20E> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<23, VkDynamicState>::AlignedByteArray_t()
{
} /* size: 0 */

// <006FEC95> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<1, VkDynamicState>::AlignedByteArray_t()
{
} /* size: 0 */

// <006FE6F1> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<4, VkPipeline_T::AlignedByteArray_t()
{
} /* size: 0 */

// <006FE6D4> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<4, VkPipeline_T::AlignedByteArray_t()
{
} /* size: 0 */

// <006FE584> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<4, const CDescriptorSetVulkan::AlignedByteArray_t()
{
} /* size: 0 */

// <0065731A> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<4, PipelineLayoutImmutableSampler_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <005D89CA> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<128, PerThreadDataVulkan_t::AlignedByteArray_t()
{
} /* size: 0 */

// <004D6620> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<128, VulkanFramebufferState_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <004D6602> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<128, VulkanFramebufferState_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <004A6EA6> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<128, VkWriteDescriptorSet>::AlignedByteArray_t()
{
} /* size: 0 */

// <004A6E89> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<128, VkWriteDescriptorSet>::AlignedByteArray_t()
{
} /* size: 0 */

// <004A6CF1> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<128, VkDescriptorImageInfo>::AlignedByteArray_t()
{
} /* size: 0 */

// <004A6CD4> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<128, VkDescriptorImageInfo>::AlignedByteArray_t()
{
} /* size: 0 */

// <004A6B3C> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<128, VkDescriptorBufferInfo>::AlignedByteArray_t()
{
} /* size: 0 */

// <004A6B1F> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<128, VkDescriptorBufferInfo>::AlignedByteArray_t()
{
} /* size: 0 */

// <0045B948> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<16, VkFormat>::AlignedByteArray_t()
{
} /* size: 0 */

// <0022D9B6> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<100, CDependencyDescriptor::AlignedByteArray_t()
{
} /* size: 0 */

// <00171311> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<128, unsigned char>::AlignedByteArray_t()
{
} /* size: 0 */

// <005320E4> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<64, CUtl3DAllocator2::Node3D_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <004D2718> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<1, CThreadFastMutex>::AlignedByteArray_t()
{
} /* size: 0 */

// <004D26FB> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<1, CThreadFastMutex>::AlignedByteArray_t()
{
} /* size: 0 */

// <004D22D5> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<1, CThreadLocalScope::CScopeCreatedOrDestroyedHandler>::AlignedByteArray_t()
{
} /* size: 0 */

// <004D22B8> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<1, CThreadLocalScope::CScopeCreatedOrDestroyedHandler>::AlignedByteArray_t()
{
} /* size: 0 */

// <004D2013> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<1, CConstructedMainThreadID>::AlignedByteArray_t()
{
} /* size: 0 */

// <004D1FF6> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<1, CConstructedMainThreadID>::AlignedByteArray_t()
{
} /* size: 0 */

// <004D0CD4> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<1, CThreadLocalScope>::AlignedByteArray_t()
{
} /* size: 0 */

// <003A0DFA> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<1, SignalHandlerMemory_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <00385410> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<1, CBufferStringN<200> >::AlignedByteArray_t()
{
} /* size: 0 */

// <003853F3> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<1, CBufferStringN<200> >::AlignedByteArray_t()
{
} /* size: 0 */

// <003850DF> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<1, CThreadKeyHolder>::AlignedByteArray_t()
{
} /* size: 0 */

// <003850C2> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<1, CThreadKeyHolder>::AlignedByteArray_t()
{
} /* size: 0 */

// <0038471E> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<1, COrderedInitShutdownRefWrapper<OrderedInit_Platform> >::AlignedByteArray_t()
{
} /* size: 0 */

// <00384701> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<1, COrderedInitShutdownRefWrapper<OrderedInit_Platform> >::AlignedByteArray_t()
{
} /* size: 0 */

// <0028391C> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<1, CLoggingSystem>::AlignedByteArray_t()
{
} /* size: 0 */

// <002838FF> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<1, CLoggingSystem>::AlignedByteArray_t()
{
} /* size: 0 */

// <001CA89A> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<64, pollfd>::AlignedByteArray_t()
{
} /* size: 0 */

// <001CA87D> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<64, pollfd>::AlignedByteArray_t()
{
} /* size: 0 */

// <001CA794> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<64, ThreadMultiWaitExtra_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <001CA777> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<64, ThreadMultiWaitExtra_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <00158812> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<1, FiberToolsOrderedConstructionGlobals_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <001583E8> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<1, CFiberJobPool>::AlignedByteArray_t()
{
} /* size: 0 */

// <00158300> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<1, CFiber>::AlignedByteArray_t()
{
} /* size: 0 */

// <001582E3> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<1, CFiber>::AlignedByteArray_t()
{
} /* size: 0 */

// <00026BD5> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<1, CAssertGlobals>::AlignedByteArray_t()
{
} /* size: 0 */

// <000C3A94> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<128, CSchemaEnumInfo::AlignedByteArray_t()
{
} /* size: 0 */

// <000C3A77> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<128, CSchemaEnumInfo::AlignedByteArray_t()
{
} /* size: 0 */

// <004060CD> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<1, RuntimeBuffersInfo_t::BufferInfo_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <0034BA2B> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<4, const CAnimationGroupResource::AlignedByteArray_t()
{
} /* size: 0 */

// <0034BA0E> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<4, const CAnimationGroupResource::AlignedByteArray_t()
{
} /* size: 0 */

// <0016512E> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<4, CModelTypeManager::AsyncProcessDataResults::MeshData::AlignedByteArray_t()
{
} /* size: 0 */

// <00165111> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<4, CModelTypeManager::AsyncProcessDataResults::MeshData::AlignedByteArray_t()
{
} /* size: 0 */

// <0057D416> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<8, IMaterial2::TextureAttributeValue_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <00441B95> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<2, CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> > >::AlignedByteArray_t()
{
} /* size: 0 */

// <00441B78> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<2, CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> > >::AlignedByteArray_t()
{
} /* size: 0 */

// <00432DC6> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<4, Vector>::AlignedByteArray_t()
{
} /* size: 0 */

// <00432DA9> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<4, Vector>::AlignedByteArray_t()
{
} /* size: 0 */

// <00432CB4> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<4, Color>::AlignedByteArray_t()
{
} /* size: 0 */

// <00155BB4> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<32, CMaterialLayer::CommandBufferInfo_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <00155B97> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<32, CMaterialLayer::CommandBufferInfo_t>::AlignedByteArray_t()
{
} /* size: 0 */

// <000C33E1> ../public/tier0/platform_compile_base.h:1597
void AlignedByteArray_t<128, CUtlSymbol>::AlignedByteArray_t()
{
} /* size: 0 */

// <000C33C4> ../public/tier0/platform_compile_base.h:1597
inline void AlignedByteArray_t<128, CUtlSymbol>::AlignedByteArray_t()
{
} /* size: 0 */

// <00003A5B> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 1
struct AlignedByteArray_t<1, COrderedInitShutdownRefWrapper<EarlyInit_Common> > : public AlignedByteArrayExplicit_t<1, COrderedInitShutdownRefWrapper<EarlyInit_Common>, 1> {
public:
	/* struct AlignedByteArrayExplicit_t<1, COrderedInitShutdownRefWrapper<EarlyInit_Common>, 1> <ancestor>; */ /* 0 1 */
	void AlignedByteArray_t(AlignedByteArray_t<1, COrderedInitShutdownRefWrapper<EarlyInit_Common> >* );
} __attribute__((__aligned__(1)));

// <0004846C> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 256
struct AlignedByteArray_t<16, ISceneView::WorldList_t> : public AlignedByteArrayExplicit_t<16, ISceneView::WorldList_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<16, ISceneView::WorldList_t, 8> <ancestor>; */ /* 0 256 */
} __attribute__((__aligned__(8)));

// <00054CD7> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 8
struct AlignedByteArray_t<1, ISceneLayer*> : public AlignedByteArrayExplicit_t<1, ISceneLayer*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<1, ISceneLayer*, 8> <ancestor>; */ /* 0 8 */
} __attribute__((__aligned__(8)));

// <0005610D> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 32
struct AlignedByteArray_t<4, ConstantBufferHandle_t__*> : public AlignedByteArrayExplicit_t<4, ConstantBufferHandle_t__*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<4, ConstantBufferHandle_t__*, 8> <ancestor>; */ /* 0 32 */
} __attribute__((__aligned__(8)));

// <00057524> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 16
struct AlignedByteArray_t<4, CUtlStringToken> : public AlignedByteArrayExplicit_t<4, CUtlStringToken, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<4, CUtlStringToken, 4> <ancestor>; */ /* 0 16 */
} __attribute__((__aligned__(4)));

// <00058C5B> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 32
struct AlignedByteArray_t<2, ISceneLayer::InputTexture_t> : public AlignedByteArrayExplicit_t<2, ISceneLayer::InputTexture_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<2, ISceneLayer::InputTexture_t, 8> <ancestor>; */ /* 0 32 */
} __attribute__((__aligned__(8)));

// <0005A400> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 48
struct AlignedByteArray_t<2, ISceneLayer::InputSceneViewRenderTarget_t> : public AlignedByteArrayExplicit_t<2, ISceneLayer::InputSceneViewRenderTarget_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<2, ISceneLayer::InputSceneViewRenderTarget_t, 8> <ancestor>; */ /* 0 48 */
} __attribute__((__aligned__(8)));

// <000BEA3F> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 64
struct AlignedByteArray_t<4, CRenderBufferBinding> : public AlignedByteArrayExplicit_t<4, CRenderBufferBinding, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<4, CRenderBufferBinding, 8> <ancestor>; */ /* 0 64 */
} __attribute__((__aligned__(8)));

// <000C3AE8> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 112
struct AlignedByteArray_t<1, CSceneObjectData> : public AlignedByteArrayExplicit_t<1, CSceneObjectData, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<1, CSceneObjectData, 8> <ancestor>; */ /* 0 112 */
} __attribute__((__aligned__(8)));

// <000FDF43> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 40
struct AlignedByteArray_t<5, CWeakHandle<InfoForResourceTypeCTextureBase> > : public AlignedByteArrayExplicit_t<5, CWeakHandle<InfoForResourceTypeCTextureBase>, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<5, CWeakHandle<InfoForResourceTypeCTextureBase>, 8> <ancestor>; */ /* 0 40 */
} __attribute__((__aligned__(8)));

// <000FF315> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 20
struct AlignedByteArray_t<5, CUtlStringToken> : public AlignedByteArrayExplicit_t<5, CUtlStringToken, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<5, CUtlStringToken, 4> <ancestor>; */ /* 0 20 */
} __attribute__((__aligned__(4)));

// <00100CCD> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 16
struct AlignedByteArray_t<1, CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> > > : public AlignedByteArrayExplicit_t<1, CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<1, CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, 8> <ancestor>; */ /* 0 16 */
} __attribute__((__aligned__(8)));

// <00103B01> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 16
struct AlignedByteArray_t<1, ChildSceneObjectReference_t> : public AlignedByteArrayExplicit_t<1, ChildSceneObjectReference_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<1, ChildSceneObjectReference_t, 8> <ancestor>; */ /* 0 16 */
} __attribute__((__aligned__(8)));

// <00104D00> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 12
struct AlignedByteArray_t<3, unsigned int> : public AlignedByteArrayExplicit_t<3, unsigned int, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<3, unsigned int, 4> <ancestor>; */ /* 0 12 */
} __attribute__((__aligned__(4)));

// <001071F5> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 2,400
struct AlignedByteArray_t<20, CMeshDrawPrimitive_t> : public AlignedByteArrayExplicit_t<20, CMeshDrawPrimitive_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<20, CMeshDrawPrimitive_t, 8> <ancestor>; */ /* 0 2400 */
} __attribute__((__aligned__(8)));

// <0010D4FD> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 36
struct AlignedByteArray_t<9, unsigned int> : public AlignedByteArrayExplicit_t<9, unsigned int, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<9, unsigned int, 4> <ancestor>; */ /* 0 36 */
} __attribute__((__aligned__(4)));

// <003BF60C> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 4,096
struct AlignedByteArray_t<1024, unsigned int> : public AlignedByteArrayExplicit_t<1024, unsigned int, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<1024, unsigned int, 4> <ancestor>; */ /* 0 4096 */
	void AlignedByteArray_t(AlignedByteArray_t<1024, unsigned int>* );
} __attribute__((__aligned__(4)));

// <0085F203> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 16
struct AlignedByteArray_t<1, CInputSystem::CursorSurface_t> : public AlignedByteArrayExplicit_t<1, CInputSystem::CursorSurface_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<1, CInputSystem::CursorSurface_t, 8> <ancestor>; */ /* 0 16 */
	void AlignedByteArray_t(AlignedByteArray_t<1, CInputSystem::CursorSurface_t>* );
} __attribute__((__aligned__(8)));

// <0091989A> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 64
struct AlignedByteArray_t<4, CKeyValues3Iterator::StackEntry_t> : public AlignedByteArrayExplicit_t<4, CKeyValues3Iterator::StackEntry_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<4, CKeyValues3Iterator::StackEntry_t, 8> <ancestor>; */ /* 0 64 */
} __attribute__((__aligned__(8)));

// <009CCF12> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 1,024
struct AlignedByteArray_t<128, const qhHalfEdge*> : public AlignedByteArrayExplicit_t<128, const qhHalfEdge*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<128, const qhHalfEdge*, 8> <ancestor>; */ /* 0 1024 */
	void AlignedByteArray_t(AlignedByteArray_t<128, const qhHalfEdge*>* );
} __attribute__((__aligned__(8)));

// <009CE782> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 256
struct AlignedByteArray_t<32, const qhVertex*> : public AlignedByteArrayExplicit_t<32, const qhVertex*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<32, const qhVertex*, 8> <ancestor>; */ /* 0 256 */
	void AlignedByteArray_t(AlignedByteArray_t<32, const qhVertex*>* );
} __attribute__((__aligned__(8)));

// <009CFFF2> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 256
struct AlignedByteArray_t<32, const qhFace*> : public AlignedByteArrayExplicit_t<32, const qhFace*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<32, const qhFace*, 8> <ancestor>; */ /* 0 256 */
	void AlignedByteArray_t(AlignedByteArray_t<32, const qhFace*>* );
} __attribute__((__aligned__(8)));

// <009D18F5> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 7,168
struct AlignedByteArray_t<64, DebugMeshInfo_t> : public AlignedByteArrayExplicit_t<64, DebugMeshInfo_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<64, DebugMeshInfo_t, 8> <ancestor>; */ /* 0 7168 */
	void AlignedByteArray_t(AlignedByteArray_t<64, DebugMeshInfo_t>* );
} __attribute__((__aligned__(8)));

// <00B02806> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 8,192
struct AlignedByteArray_t<128, PhysicsTrace_t> : public AlignedByteArrayExplicit_t<128, PhysicsTrace_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<128, PhysicsTrace_t, 8> <ancestor>; */ /* 0 8192 */
} __attribute__((__aligned__(8)));

// <00B0407E> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 1,024
struct AlignedByteArray_t<128, IPhysicsShape*> : public AlignedByteArrayExplicit_t<128, IPhysicsShape*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<128, IPhysicsShape*, 8> <ancestor>; */ /* 0 1024 */
} __attribute__((__aligned__(8)));

// <00B913C1> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 8
struct AlignedByteArray_t<1, CPhysicsShape*> : public AlignedByteArrayExplicit_t<1, CPhysicsShape*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<1, CPhysicsShape*, 8> <ancestor>; */ /* 0 8 */
	void AlignedByteArray_t(AlignedByteArray_t<1, CPhysicsShape*>* );
} __attribute__((__aligned__(8)));

// <00FE5789> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 8
struct AlignedByteArray_t<1, VertexBufferHandle_t__*> : public AlignedByteArrayExplicit_t<1, VertexBufferHandle_t__*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<1, VertexBufferHandle_t__*, 8> <ancestor>; */ /* 0 8 */
	void AlignedByteArray_t(AlignedByteArray_t<1, VertexBufferHandle_t__*>* );
} __attribute__((__aligned__(8)));

// <010E2FA4> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 32
struct AlignedByteArray_t<4, CSceneObject*> : public AlignedByteArrayExplicit_t<4, CSceneObject*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<4, CSceneObject*, 8> <ancestor>; */ /* 0 32 */
	void AlignedByteArray_t(AlignedByteArray_t<4, CSceneObject*>* );
} __attribute__((__aligned__(8)));

// <010E4829> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 32
struct AlignedByteArray_t<8, unsigned int> : public AlignedByteArrayExplicit_t<8, unsigned int, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<8, unsigned int, 4> <ancestor>; */ /* 0 32 */
	void AlignedByteArray_t(AlignedByteArray_t<8, unsigned int>* );
} __attribute__((__aligned__(4)));

// <010E5864> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 128
struct AlignedByteArray_t<32, unsigned int> : public AlignedByteArrayExplicit_t<32, unsigned int, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<32, unsigned int, 4> <ancestor>; */ /* 0 128 */
	void AlignedByteArray_t(AlignedByteArray_t<32, unsigned int>* );
} __attribute__((__aligned__(4)));

// <011E9DF4> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 192
struct AlignedByteArray_t<16, Vector> : public AlignedByteArrayExplicit_t<16, Vector, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<16, Vector, 4> <ancestor>; */ /* 0 192 */
} __attribute__((__aligned__(4)));

// <011EAEBC> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 128
struct AlignedByteArray_t<16, Vector2D> : public AlignedByteArrayExplicit_t<16, Vector2D, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<16, Vector2D, 4> <ancestor>; */ /* 0 128 */
} __attribute__((__aligned__(4)));

// <011EBEDC> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 180
struct AlignedByteArray_t<45, int> : public AlignedByteArrayExplicit_t<45, int, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<45, int, 4> <ancestor>; */ /* 0 180 */
} __attribute__((__aligned__(4)));

// <0120178D> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 64
struct AlignedByteArray_t<4, audio_buffer_input_t> : public AlignedByteArrayExplicit_t<4, audio_buffer_input_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<4, audio_buffer_input_t, 8> <ancestor>; */ /* 0 64 */
} __attribute__((__aligned__(8)));

// <0120FE06> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 36
struct AlignedByteArray_t<9, float> : public AlignedByteArrayExplicit_t<9, float, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<9, float, 4> <ancestor>; */ /* 0 36 */
	void AlignedByteArray_t(AlignedByteArray_t<9, float>* );
} __attribute__((__aligned__(4)));

// <012166A9> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 4
struct AlignedByteArray_t<1, CUtlStringToken> : public AlignedByteArrayExplicit_t<1, CUtlStringToken, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<1, CUtlStringToken, 4> <ancestor>; */ /* 0 4 */
} __attribute__((__aligned__(4)));

// <012251F1> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 8
struct AlignedByteArray_t<2, VfxVariableIndexData_t> : public AlignedByteArrayExplicit_t<2, VfxVariableIndexData_t, 2> {
public:
	/* struct AlignedByteArrayExplicit_t<2, VfxVariableIndexData_t, 2> <ancestor>; */ /* 0 8 */
} __attribute__((__aligned__(2)));

// <021891DA> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 512
struct AlignedByteArray_t<64, char const*> : public AlignedByteArrayExplicit_t<64, char const*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<64, char const*, 8> <ancestor>; */ /* 0 512 */
} __attribute__((__aligned__(8)));

// <0224F18F> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 3,072
struct AlignedByteArray_t<256, CUtlHashtableEntry<CLoadingResource*, empty_t> > : public AlignedByteArrayExplicit_t<256, CUtlHashtableEntry<CLoadingResource*, empty_t>, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<256, CUtlHashtableEntry<CLoadingResource*, empty_t>, 4> <ancestor>; */ /* 0 3072 */
} __attribute__((__aligned__(4)));

// <0224FC15> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 2,048
struct AlignedByteArray_t<256, CLoadingResource*> : public AlignedByteArrayExplicit_t<256, CLoadingResource*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<256, CLoadingResource*, 8> <ancestor>; */ /* 0 2048 */
} __attribute__((__aligned__(8)));

// <02321698> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 128
struct AlignedByteArray_t<8, CResourceSystem::ForcedSynchronizationCallbackInfo_t> : public AlignedByteArrayExplicit_t<8, CResourceSystem::ForcedSynchronizationCallbackInfo_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<8, CResourceSystem::ForcedSynchronizationCallbackInfo_t, 8> <ancestor>; */ /* 0 128 */
	void AlignedByteArray_t(AlignedByteArray_t<8, CResourceSystem::ForcedSynchronizationCallbackInfo_t>* );
} __attribute__((__aligned__(8)));

// <0233491A> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 256
struct AlignedByteArray_t<16, NullTypeManager_t> : public AlignedByteArrayExplicit_t<16, NullTypeManager_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<16, NullTypeManager_t, 8> <ancestor>; */ /* 0 256 */
	void AlignedByteArray_t(AlignedByteArray_t<16, NullTypeManager_t>* );
} __attribute__((__aligned__(8)));

// <0233DF01> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 1,024
struct AlignedByteArray_t<128, CResourceManifest*> : public AlignedByteArrayExplicit_t<128, CResourceManifest*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<128, CResourceManifest*, 8> <ancestor>; */ /* 0 1024 */
	void AlignedByteArray_t(AlignedByteArray_t<128, CResourceManifest*>* );
} __attribute__((__aligned__(8)));

// <0233F01E> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 256
struct AlignedByteArray_t<32, const ResourceBindingBase_t*> : public AlignedByteArrayExplicit_t<32, const ResourceBindingBase_t*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<32, const ResourceBindingBase_t*, 8> <ancestor>; */ /* 0 256 */
	void AlignedByteArray_t(AlignedByteArray_t<32, const ResourceBindingBase_t*>* );
} __attribute__((__aligned__(8)));

// <023E08F8> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 128
struct AlignedByteArray_t<16, char const*> : public AlignedByteArrayExplicit_t<16, char const*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<16, char const*, 8> <ancestor>; */ /* 0 128 */
	void AlignedByteArray_t(AlignedByteArray_t<16, char const*>* );
} __attribute__((__aligned__(8)));

// <02404BB0> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 2,048
struct AlignedByteArray_t<1024, short int> : public AlignedByteArrayExplicit_t<1024, short int, 2> {
public:
	/* struct AlignedByteArrayExplicit_t<1024, short int, 2> <ancestor>; */ /* 0 2048 */
	void AlignedByteArray_t(AlignedByteArray_t<1024, short int>* );
} __attribute__((__aligned__(2)));

// <02406406> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 4,096
struct AlignedByteArray_t<2, CAudioMixBuffer> : public AlignedByteArrayExplicit_t<2, CAudioMixBuffer, 16> {
public:
	/* struct AlignedByteArrayExplicit_t<2, CAudioMixBuffer, 16> <ancestor>; */ /* 0 4096 */
	void AlignedByteArray_t(AlignedByteArray_t<2, CAudioMixBuffer>* );
} __attribute__((__aligned__(16)));

// <02637DDB> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 8,192
struct AlignedByteArray_t<2048, float> : public AlignedByteArrayExplicit_t<2048, float, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<2048, float, 4> <ancestor>; */ /* 0 8192 */
	void AlignedByteArray_t(AlignedByteArray_t<2048, float>* );
} __attribute__((__aligned__(4)));

// <026B2D9B> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 4,352
struct AlignedByteArray_t<1088, float> : public AlignedByteArrayExplicit_t<1088, float, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<1088, float, 4> <ancestor>; */ /* 0 4352 */
	void AlignedByteArray_t(AlignedByteArray_t<1088, float>* );
} __attribute__((__aligned__(4)));

// <02785594> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 16
struct AlignedByteArray_t<2, CWeakHandle<InfoForResourceTypeIMaterial2> > : public AlignedByteArrayExplicit_t<2, CWeakHandle<InfoForResourceTypeIMaterial2>, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<2, CWeakHandle<InfoForResourceTypeIMaterial2>, 8> <ancestor>; */ /* 0 16 */
	void AlignedByteArray_t(AlignedByteArray_t<2, CWeakHandle<InfoForResourceTypeIMaterial2> >* );
} __attribute__((__aligned__(8)));

// <027865BF> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 8
struct AlignedByteArray_t<2, int> : public AlignedByteArrayExplicit_t<2, int, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<2, int, 4> <ancestor>; */ /* 0 8 */
	void AlignedByteArray_t(AlignedByteArray_t<2, int>* );
} __attribute__((__aligned__(4)));

// <02B5E4B6> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 2,272
struct AlignedByteArray_t<2, CFrustum> : public AlignedByteArrayExplicit_t<2, CFrustum, 16> {
public:
	/* struct AlignedByteArrayExplicit_t<2, CFrustum, 16> <ancestor>; */ /* 0 2272 */
} __attribute__((__aligned__(16)));

// <02B5FC46> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 64
struct AlignedByteArray_t<8, CRenderBatchList*> : public AlignedByteArrayExplicit_t<8, CRenderBatchList*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<8, CRenderBatchList*, 8> <ancestor>; */ /* 0 64 */
} __attribute__((__aligned__(8)));

// <02B60C43> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 16
struct AlignedByteArray_t<2, ISceneWorld*> : public AlignedByteArrayExplicit_t<2, ISceneWorld*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<2, ISceneWorld*, 8> <ancestor>; */ /* 0 16 */
} __attribute__((__aligned__(8)));

// <02B627E8> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 32
struct AlignedByteArray_t<4, ISceneView*> : public AlignedByteArrayExplicit_t<4, ISceneView*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<4, ISceneView*, 8> <ancestor>; */ /* 0 32 */
} __attribute__((__aligned__(8)));

// <02B6F586> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 32
struct AlignedByteArray_t<4, ISceneWorld*> : public AlignedByteArrayExplicit_t<4, ISceneWorld*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<4, ISceneWorld*, 8> <ancestor>; */ /* 0 32 */
	void AlignedByteArray_t(AlignedByteArray_t<4, ISceneWorld*>* );
} __attribute__((__aligned__(8)));

// <02DA7B1B> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 128
struct AlignedByteArray_t<16, CSceneView*> : public AlignedByteArrayExplicit_t<16, CSceneView*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<16, CSceneView*, 8> <ancestor>; */ /* 0 128 */
	void AlignedByteArray_t(AlignedByteArray_t<16, CSceneView*>* );
} __attribute__((__aligned__(8)));

// <02DAD84B> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 2,048
struct AlignedByteArray_t<256, DisplayListToSubmit_t> : public AlignedByteArrayExplicit_t<256, DisplayListToSubmit_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<256, DisplayListToSubmit_t, 8> <ancestor>; */ /* 0 2048 */
	void AlignedByteArray_t(AlignedByteArray_t<256, DisplayListToSubmit_t>* );
} __attribute__((__aligned__(8)));

// <02DB28D0> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 512
struct AlignedByteArray_t<64, CSceneObject*> : public AlignedByteArrayExplicit_t<64, CSceneObject*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<64, CSceneObject*, 8> <ancestor>; */ /* 0 512 */
	void AlignedByteArray_t(AlignedByteArray_t<64, CSceneObject*>* );
} __attribute__((__aligned__(8)));

// <02DB40FC> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 512
struct AlignedByteArray_t<64, ISceneWorld*> : public AlignedByteArrayExplicit_t<64, ISceneWorld*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<64, ISceneWorld*, 8> <ancestor>; */ /* 0 512 */
	void AlignedByteArray_t(AlignedByteArray_t<64, ISceneWorld*>* );
} __attribute__((__aligned__(8)));

// <02DB81E1> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 256
struct AlignedByteArray_t<32, ISceneWorld*> : public AlignedByteArrayExplicit_t<32, ISceneWorld*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<32, ISceneWorld*, 8> <ancestor>; */ /* 0 256 */
	void AlignedByteArray_t(AlignedByteArray_t<32, ISceneWorld*>* );
} __attribute__((__aligned__(8)));

// <02DC2C89> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 128
struct AlignedByteArray_t<16, std::function<void(CSceneObject*)>*> : public AlignedByteArrayExplicit_t<16, std::function<void(CSceneObject*)>*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<16, std::function<void(CSceneObject*)>*, 8> <ancestor>; */ /* 0 128 */
	void AlignedByteArray_t(AlignedByteArray_t<16, std::function<void(CSceneObject*)>*>* );
} __attribute__((__aligned__(8)));

// <02DCAE85> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 384
struct AlignedByteArray_t<8, RenderDescriptorBinding_t> : public AlignedByteArrayExplicit_t<8, RenderDescriptorBinding_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<8, RenderDescriptorBinding_t, 8> <ancestor>; */ /* 0 384 */
	void AlignedByteArray_t(AlignedByteArray_t<8, RenderDescriptorBinding_t>* );
} __attribute__((__aligned__(8)));

// <02DD89EA> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 64
struct AlignedByteArray_t<8, ISceneView*> : public AlignedByteArrayExplicit_t<8, ISceneView*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<8, ISceneView*, 8> <ancestor>; */ /* 0 64 */
} __attribute__((__aligned__(8)));

// <02DD9965> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 128
struct AlignedByteArray_t<16, ISceneView*> : public AlignedByteArrayExplicit_t<16, ISceneView*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<16, ISceneView*, 8> <ancestor>; */ /* 0 128 */
} __attribute__((__aligned__(8)));

// <02DEE736> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 8,192
struct AlignedByteArray_t<1024, CSceneObject*> : public AlignedByteArrayExplicit_t<1024, CSceneObject*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<1024, CSceneObject*, 8> <ancestor>; */ /* 0 8192 */
	void AlignedByteArray_t(AlignedByteArray_t<1024, CSceneObject*>* );
} __attribute__((__aligned__(8)));

// <02DF0335> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 256
struct AlignedByteArray_t<32, CSceneDrawList*> : public AlignedByteArrayExplicit_t<32, CSceneDrawList*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<32, CSceneDrawList*, 8> <ancestor>; */ /* 0 256 */
	void AlignedByteArray_t(AlignedByteArray_t<32, CSceneDrawList*>* );
} __attribute__((__aligned__(8)));

// <02DF1EE8> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 9,216
struct AlignedByteArray_t<32, CUtlVectorFixedGrowableCompat<CSceneDrawList*, 32> > : public AlignedByteArrayExplicit_t<32, CUtlVectorFixedGrowableCompat<CSceneDrawList*, 32>, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<32, CUtlVectorFixedGrowableCompat<CSceneDrawList*, 32>, 8> <ancestor>; */ /* 0 9216 */
	void AlignedByteArray_t(AlignedByteArray_t<32, CUtlVectorFixedGrowableCompat<CSceneDrawList*, 32> >* );
} __attribute__((__aligned__(8)));

// <02DF3747> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 256
struct AlignedByteArray_t<32, CSceneLayer*> : public AlignedByteArrayExplicit_t<32, CSceneLayer*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<32, CSceneLayer*, 8> <ancestor>; */ /* 0 256 */
	void AlignedByteArray_t(AlignedByteArray_t<32, CSceneLayer*>* );
} __attribute__((__aligned__(8)));

// <02DF47E7> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 128
struct AlignedByteArray_t<32, int> : public AlignedByteArrayExplicit_t<32, int, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<32, int, 4> <ancestor>; */ /* 0 128 */
	void AlignedByteArray_t(AlignedByteArray_t<32, int>* );
} __attribute__((__aligned__(4)));

// <02DF601B> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 1,536
struct AlignedByteArray_t<64, PendingVisitList_t> : public AlignedByteArrayExplicit_t<64, PendingVisitList_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<64, PendingVisitList_t, 8> <ancestor>; */ /* 0 1536 */
	void AlignedByteArray_t(AlignedByteArray_t<64, PendingVisitList_t>* );
} __attribute__((__aligned__(8)));

// <02DF78C2> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 4,096
struct AlignedByteArray_t<256, CSceneSystem::RenderAttributesSetup_t> : public AlignedByteArrayExplicit_t<256, CSceneSystem::RenderAttributesSetup_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<256, CSceneSystem::RenderAttributesSetup_t, 8> <ancestor>; */ /* 0 4096 */
	void AlignedByteArray_t(AlignedByteArray_t<256, CSceneSystem::RenderAttributesSetup_t>* );
} __attribute__((__aligned__(8)));

// <02DF893D> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 2,048
struct AlignedByteArray_t<256, CSceneLayer*> : public AlignedByteArrayExplicit_t<256, CSceneLayer*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<256, CSceneLayer*, 8> <ancestor>; */ /* 0 2048 */
	void AlignedByteArray_t(AlignedByteArray_t<256, CSceneLayer*>* );
} __attribute__((__aligned__(8)));

// <02DF99BC> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 32
struct AlignedByteArray_t<8, int> : public AlignedByteArrayExplicit_t<8, int, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<8, int, 4> <ancestor>; */ /* 0 32 */
	void AlignedByteArray_t(AlignedByteArray_t<8, int>* );
} __attribute__((__aligned__(4)));

// <02DFC61E> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 640
struct AlignedByteArray_t<16, AtlasChart_t> : public AlignedByteArrayExplicit_t<16, AtlasChart_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<16, AtlasChart_t, 8> <ancestor>; */ /* 0 640 */
	void AlignedByteArray_t(AlignedByteArray_t<16, AtlasChart_t>* );
} __attribute__((__aligned__(8)));

// <02DFE74E> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 512
struct AlignedByteArray_t<64, CSceneWorld*> : public AlignedByteArrayExplicit_t<64, CSceneWorld*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<64, CSceneWorld*, 8> <ancestor>; */ /* 0 512 */
	void AlignedByteArray_t(AlignedByteArray_t<64, CSceneWorld*>* );
} __attribute__((__aligned__(8)));

// <02E0005C> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 96
struct AlignedByteArray_t<12, void*> : public AlignedByteArrayExplicit_t<12, void*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<12, void*, 8> <ancestor>; */ /* 0 96 */
	void AlignedByteArray_t(AlignedByteArray_t<12, void*>* );
} __attribute__((__aligned__(8)));

// <02E02F6D> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 192
struct AlignedByteArray_t<8, RenderDescriptorDesc_t> : public AlignedByteArrayExplicit_t<8, RenderDescriptorDesc_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<8, RenderDescriptorDesc_t, 8> <ancestor>; */ /* 0 192 */
	void AlignedByteArray_t(AlignedByteArray_t<8, RenderDescriptorDesc_t>* );
} __attribute__((__aligned__(8)));

// <0304C327> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 1,024
struct AlignedByteArray_t<128, CSceneLightObjectInternal*> : public AlignedByteArrayExplicit_t<128, CSceneLightObjectInternal*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<128, CSceneLightObjectInternal*, 8> <ancestor>; */ /* 0 1024 */
	void AlignedByteArray_t(AlignedByteArray_t<128, CSceneLightObjectInternal*>* );
} __attribute__((__aligned__(8)));

// <0304DBA5> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 32
struct AlignedByteArray_t<4, ISceneLightListener*> : public AlignedByteArrayExplicit_t<4, ISceneLightListener*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<4, ISceneLightListener*, 8> <ancestor>; */ /* 0 32 */
	void AlignedByteArray_t(AlignedByteArray_t<4, ISceneLightListener*>* );
} __attribute__((__aligned__(8)));

// <0304F451> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 1,024
struct AlignedByteArray_t<128, CEnvMapSceneObject*> : public AlignedByteArrayExplicit_t<128, CEnvMapSceneObject*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<128, CEnvMapSceneObject*, 8> <ancestor>; */ /* 0 1024 */
	void AlignedByteArray_t(AlignedByteArray_t<128, CEnvMapSceneObject*>* );
} __attribute__((__aligned__(8)));

// <03050CCF> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 32
struct AlignedByteArray_t<4, ISceneEnvironmentMapListener*> : public AlignedByteArrayExplicit_t<4, ISceneEnvironmentMapListener*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<4, ISceneEnvironmentMapListener*, 8> <ancestor>; */ /* 0 32 */
	void AlignedByteArray_t(AlignedByteArray_t<4, ISceneEnvironmentMapListener*>* );
} __attribute__((__aligned__(8)));

// <030526D2> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 1,024
struct AlignedByteArray_t<128, CSceneLightProbeVolumeObject*> : public AlignedByteArrayExplicit_t<128, CSceneLightProbeVolumeObject*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<128, CSceneLightProbeVolumeObject*, 8> <ancestor>; */ /* 0 1024 */
	void AlignedByteArray_t(AlignedByteArray_t<128, CSceneLightProbeVolumeObject*>* );
} __attribute__((__aligned__(8)));

// <03053F50> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 32
struct AlignedByteArray_t<4, ISceneLightProbeVolumeListener*> : public AlignedByteArrayExplicit_t<4, ISceneLightProbeVolumeListener*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<4, ISceneLightProbeVolumeListener*, 8> <ancestor>; */ /* 0 32 */
	void AlignedByteArray_t(AlignedByteArray_t<4, ISceneLightProbeVolumeListener*>* );
} __attribute__((__aligned__(8)));

// <0311370E> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 512
struct AlignedByteArray_t<64, CWeakHandle<InfoForResourceTypeCTextureBase> > : public AlignedByteArrayExplicit_t<64, CWeakHandle<InfoForResourceTypeCTextureBase>, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<64, CWeakHandle<InfoForResourceTypeCTextureBase>, 8> <ancestor>; */ /* 0 512 */
	void AlignedByteArray_t(AlignedByteArray_t<64, CWeakHandle<InfoForResourceTypeCTextureBase> >* );
} __attribute__((__aligned__(8)));

// <03115394> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 8,192
struct AlignedByteArray_t<1024, const DebugSphere_t*> : public AlignedByteArrayExplicit_t<1024, const DebugSphere_t*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<1024, const DebugSphere_t*, 8> <ancestor>; */ /* 0 8192 */
	void AlignedByteArray_t(AlignedByteArray_t<1024, const DebugSphere_t*>* );
} __attribute__((__aligned__(8)));

// <03205200> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 5,320
struct AlignedByteArray_t<35, CScratchRenderTargetSystem::RenderTargetInfo_t> : public AlignedByteArrayExplicit_t<35, CScratchRenderTargetSystem::RenderTargetInfo_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<35, CScratchRenderTargetSystem::RenderTargetInfo_t, 8> <ancestor>; */ /* 0 5320 */
	void AlignedByteArray_t(AlignedByteArray_t<35, CScratchRenderTargetSystem::RenderTargetInfo_t>* );
} __attribute__((__aligned__(8)));

// <03218C63> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 8,256
struct AlignedByteArray_t<16, CPVSBits> : public AlignedByteArrayExplicit_t<16, CPVSBits, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<16, CPVSBits, 4> <ancestor>; */ /* 0 8256 */
	void AlignedByteArray_t(AlignedByteArray_t<16, CPVSBits>* );
} __attribute__((__aligned__(4)));

// <0345936C> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 16
struct AlignedByteArray_t<2, CWeakHandle<InfoForResourceTypeCTextureBase> > : public AlignedByteArrayExplicit_t<2, CWeakHandle<InfoForResourceTypeCTextureBase>, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<2, CWeakHandle<InfoForResourceTypeCTextureBase>, 8> <ancestor>; */ /* 0 16 */
} __attribute__((__aligned__(8)));

// <0345A234> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 320
struct AlignedByteArray_t<8, RenderPassAttachmentDesc_t> : public AlignedByteArrayExplicit_t<8, RenderPassAttachmentDesc_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<8, RenderPassAttachmentDesc_t, 8> <ancestor>; */ /* 0 320 */
} __attribute__((__aligned__(8)));

// <0345AE8D> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 2,048
struct AlignedByteArray_t<8, RenderPassSubPass_t> : public AlignedByteArrayExplicit_t<8, RenderPassSubPass_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<8, RenderPassSubPass_t, 8> <ancestor>; */ /* 0 2048 */
} __attribute__((__aligned__(8)));

// <0345BADB> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 48
struct AlignedByteArray_t<4, RenderPassSubPassDependency_t> : public AlignedByteArrayExplicit_t<4, RenderPassSubPassDependency_t, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<4, RenderPassSubPassDependency_t, 4> <ancestor>; */ /* 0 48 */
} __attribute__((__aligned__(4)));

// <036A0DBC> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 768
struct AlignedByteArray_t<32, RenderDescriptorDesc_t> : public AlignedByteArrayExplicit_t<32, RenderDescriptorDesc_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<32, RenderDescriptorDesc_t, 8> <ancestor>; */ /* 0 768 */
	void AlignedByteArray_t(AlignedByteArray_t<32, RenderDescriptorDesc_t>* );
} __attribute__((__aligned__(8)));

// <03ADC2B4> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 64
struct AlignedByteArray_t<8, CWeakHandle<InfoForResourceTypeCTextureBase> > : public AlignedByteArrayExplicit_t<8, CWeakHandle<InfoForResourceTypeCTextureBase>, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<8, CWeakHandle<InfoForResourceTypeCTextureBase>, 8> <ancestor>; */ /* 0 64 */
} __attribute__((__aligned__(8)));

// <03ADCF3B> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 32
struct AlignedByteArray_t<8, RenderImageLayout_t> : public AlignedByteArrayExplicit_t<8, RenderImageLayout_t, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<8, RenderImageLayout_t, 4> <ancestor>; */ /* 0 32 */
} __attribute__((__aligned__(4)));

// <03B83E82> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 2,048
struct AlignedByteArray_t<64, CTransform> : public AlignedByteArrayExplicit_t<64, CTransform, 16> {
public:
	/* struct AlignedByteArrayExplicit_t<64, CTransform, 16> <ancestor>; */ /* 0 2048 */
	void AlignedByteArray_t(AlignedByteArray_t<64, CTransform>* );
} __attribute__((__aligned__(16)));

// <04189535> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 224
struct AlignedByteArray_t<4, RenderInputLayoutField_t> : public AlignedByteArrayExplicit_t<4, RenderInputLayoutField_t, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<4, RenderInputLayoutField_t, 4> <ancestor>; */ /* 0 224 */
} __attribute__((__aligned__(4)));

// <04189FEA> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 280
struct AlignedByteArray_t<1, RuntimeBuffersInfo_t::BufferInfo_t> : public AlignedByteArrayExplicit_t<1, RuntimeBuffersInfo_t::BufferInfo_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<1, RuntimeBuffersInfo_t::BufferInfo_t, 8> <ancestor>; */ /* 0 280 */
} __attribute__((__aligned__(8)));

// <04453680> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 2,048
struct AlignedByteArray_t<2048, unsigned char> : public AlignedByteArrayExplicit_t<2048, unsigned char, 1> {
public:
	/* struct AlignedByteArrayExplicit_t<2048, unsigned char, 1> <ancestor>; */ /* 0 2048 */
	void AlignedByteArray_t(AlignedByteArray_t<2048, unsigned char>* );
} __attribute__((__aligned__(1)));

// <046B7DB2> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 512
struct AlignedByteArray_t<128, float> : public AlignedByteArrayExplicit_t<128, float, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<128, float, 4> <ancestor>; */ /* 0 512 */
	void AlignedByteArray_t(AlignedByteArray_t<128, float>* );
} __attribute__((__aligned__(4)));

// <0475B8C8> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 6,144
struct AlignedByteArray_t<6144, unsigned char> : public AlignedByteArrayExplicit_t<6144, unsigned char, 1> {
public:
	/* struct AlignedByteArrayExplicit_t<6144, unsigned char, 1> <ancestor>; */ /* 0 6144 */
	void AlignedByteArray_t(AlignedByteArray_t<6144, unsigned char>* );
} __attribute__((__aligned__(1)));

// <0475C90E> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 8,192
struct AlignedByteArray_t<8192, unsigned char> : public AlignedByteArrayExplicit_t<8192, unsigned char, 1> {
public:
	/* struct AlignedByteArrayExplicit_t<8192, unsigned char, 1> <ancestor>; */ /* 0 8192 */
	void AlignedByteArray_t(AlignedByteArray_t<8192, unsigned char>* );
} __attribute__((__aligned__(1)));

// <0494AB2E> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 128
struct AlignedByteArray_t<8, CSchemaInheritanceIterator::ClassToTraverse_t> : public AlignedByteArrayExplicit_t<8, CSchemaInheritanceIterator::ClassToTraverse_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<8, CSchemaInheritanceIterator::ClassToTraverse_t, 8> <ancestor>; */ /* 0 128 */
} __attribute__((__aligned__(8)));

// <0496C77A> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 256
struct AlignedByteArray_t<32, const CSchemaClassInfo*> : public AlignedByteArrayExplicit_t<32, const CSchemaClassInfo*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<32, const CSchemaClassInfo*, 8> <ancestor>; */ /* 0 256 */
} __attribute__((__aligned__(8)));

// <0499713E> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 4,096
struct AlignedByteArray_t<128, CTransform> : public AlignedByteArrayExplicit_t<128, CTransform, 16> {
public:
	/* struct AlignedByteArrayExplicit_t<128, CTransform, 16> <ancestor>; */ /* 0 4096 */
	void AlignedByteArray_t(AlignedByteArray_t<128, CTransform>* );
} __attribute__((__aligned__(16)));

// <04A910A1> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 256
struct AlignedByteArray_t<16, HitBoxSetAndMesh_t> : public AlignedByteArrayExplicit_t<16, HitBoxSetAndMesh_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<16, HitBoxSetAndMesh_t, 8> <ancestor>; */ /* 0 256 */
} __attribute__((__aligned__(8)));

// <04A92850> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 512
struct AlignedByteArray_t<32, HitBoxAndMesh_t> : public AlignedByteArrayExplicit_t<32, HitBoxAndMesh_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<32, HitBoxAndMesh_t, 8> <ancestor>; */ /* 0 512 */
} __attribute__((__aligned__(8)));

// <04E7C62D> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 128
struct AlignedByteArray_t<32, float> : public AlignedByteArrayExplicit_t<32, float, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<32, float, 4> <ancestor>; */ /* 0 128 */
	void AlignedByteArray_t(AlignedByteArray_t<32, float>* );
} __attribute__((__aligned__(4)));

// <053E4C13> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 64
struct AlignedByteArray_t<16, float> : public AlignedByteArrayExplicit_t<16, float, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<16, float, 4> <ancestor>; */ /* 0 64 */
	void AlignedByteArray_t(AlignedByteArray_t<16, float>* );
} __attribute__((__aligned__(4)));

// <053E748A> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 256
struct AlignedByteArray_t<16, QuaternionAligned> : public AlignedByteArrayExplicit_t<16, QuaternionAligned, 16> {
public:
	/* struct AlignedByteArrayExplicit_t<16, QuaternionAligned, 16> <ancestor>; */ /* 0 256 */
	void AlignedByteArray_t(AlignedByteArray_t<16, QuaternionAligned>* );
} __attribute__((__aligned__(16)));

// <055333A0> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 32
struct AlignedByteArray_t<4, KeyValues3*> : public AlignedByteArrayExplicit_t<4, KeyValues3*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<4, KeyValues3*, 8> <ancestor>; */ /* 0 32 */
	void AlignedByteArray_t(AlignedByteArray_t<4, KeyValues3*>* );
} __attribute__((__aligned__(8)));

// <055365D0> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 32
struct AlignedByteArray_t<8, CUtlStringToken> : public AlignedByteArrayExplicit_t<8, CUtlStringToken, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<8, CUtlStringToken, 4> <ancestor>; */ /* 0 32 */
	void AlignedByteArray_t(AlignedByteArray_t<8, CUtlStringToken>* );
} __attribute__((__aligned__(4)));

// <05537639> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 64
struct AlignedByteArray_t<8, KeyValues3*> : public AlignedByteArrayExplicit_t<8, KeyValues3*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<8, KeyValues3*, 8> <ancestor>; */ /* 0 64 */
	void AlignedByteArray_t(AlignedByteArray_t<8, KeyValues3*>* );
} __attribute__((__aligned__(8)));

// <05538E54> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 64
struct AlignedByteArray_t<8, char const*> : public AlignedByteArrayExplicit_t<8, char const*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<8, char const*, 8> <ancestor>; */ /* 0 64 */
	void AlignedByteArray_t(AlignedByteArray_t<8, char const*>* );
} __attribute__((__aligned__(8)));

// <05539F65> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 8
struct AlignedByteArray_t<8, unsigned char> : public AlignedByteArrayExplicit_t<8, unsigned char, 1> {
public:
	/* struct AlignedByteArrayExplicit_t<8, unsigned char, 1> <ancestor>; */ /* 0 8 */
	void AlignedByteArray_t(AlignedByteArray_t<8, unsigned char>* );
} __attribute__((__aligned__(1)));

// <0553C246> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 64
struct AlignedByteArray_t<8, CKeyValues3Cluster*> : public AlignedByteArrayExplicit_t<8, CKeyValues3Cluster*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<8, CKeyValues3Cluster*, 8> <ancestor>; */ /* 0 64 */
	void AlignedByteArray_t(AlignedByteArray_t<8, CKeyValues3Cluster*>* );
} __attribute__((__aligned__(8)));

// <0553DAAC> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 32
struct AlignedByteArray_t<4, CKeyValues3ArrayCluster*> : public AlignedByteArrayExplicit_t<4, CKeyValues3ArrayCluster*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<4, CKeyValues3ArrayCluster*, 8> <ancestor>; */ /* 0 32 */
	void AlignedByteArray_t(AlignedByteArray_t<4, CKeyValues3ArrayCluster*>* );
} __attribute__((__aligned__(8)));

// <0553F312> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 32
struct AlignedByteArray_t<4, CKeyValues3TableCluster*> : public AlignedByteArrayExplicit_t<4, CKeyValues3TableCluster*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<4, CKeyValues3TableCluster*, 8> <ancestor>; */ /* 0 32 */
	void AlignedByteArray_t(AlignedByteArray_t<4, CKeyValues3TableCluster*>* );
} __attribute__((__aligned__(8)));

// <055B6F50> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 320
struct AlignedByteArray_t<8, CUtlTokenReference> : public AlignedByteArrayExplicit_t<8, CUtlTokenReference, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<8, CUtlTokenReference, 8> <ancestor>; */ /* 0 320 */
} __attribute__((__aligned__(8)));

// <055DE903> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 1,024
struct AlignedByteArray_t<1024, unsigned char> : public AlignedByteArrayExplicit_t<1024, unsigned char, 1> {
public:
	/* struct AlignedByteArrayExplicit_t<1024, unsigned char, 1> <ancestor>; */ /* 0 1024 */
	void AlignedByteArray_t(AlignedByteArray_t<1024, unsigned char>* );
} __attribute__((__aligned__(1)));

// <0561B6E3> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 1,024
struct AlignedByteArray_t<256, CUtlStringToken> : public AlignedByteArrayExplicit_t<256, CUtlStringToken, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<256, CUtlStringToken, 4> <ancestor>; */ /* 0 1024 */
	void AlignedByteArray_t(AlignedByteArray_t<256, CUtlStringToken>* );
} __attribute__((__aligned__(4)));

// <0561CF56> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 2,048
struct AlignedByteArray_t<256, char const*> : public AlignedByteArrayExplicit_t<256, char const*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<256, char const*, 8> <ancestor>; */ /* 0 2048 */
	void AlignedByteArray_t(AlignedByteArray_t<256, char const*>* );
} __attribute__((__aligned__(8)));

// <05662B2A> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 128
struct AlignedByteArray_t<8, std::pair<unsigned char*, unsigned int> > : public AlignedByteArrayExplicit_t<8, std::pair<unsigned char*, unsigned int>, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<8, std::pair<unsigned char*, unsigned int>, 8> <ancestor>; */ /* 0 128 */
	void AlignedByteArray_t(AlignedByteArray_t<8, std::pair<unsigned char*, unsigned int> >* );
} __attribute__((__aligned__(8)));

// <056B8510> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 128
struct AlignedByteArray_t<8, CKV3MemberName> : public AlignedByteArrayExplicit_t<8, CKV3MemberName, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<8, CKV3MemberName, 8> <ancestor>; */ /* 0 128 */
	void AlignedByteArray_t(AlignedByteArray_t<8, CKV3MemberName>* );
} __attribute__((__aligned__(8)));

// <056BA027> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 64
struct AlignedByteArray_t<8, CLoadKV3FromKV1Text::CTranslationPath*> : public AlignedByteArrayExplicit_t<8, CLoadKV3FromKV1Text::CTranslationPath*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<8, CLoadKV3FromKV1Text::CTranslationPath*, 8> <ancestor>; */ /* 0 64 */
	void AlignedByteArray_t(AlignedByteArray_t<8, CLoadKV3FromKV1Text::CTranslationPath*>* );
} __attribute__((__aligned__(8)));

// <0572B58A> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 64
struct AlignedByteArray_t<8, const CKV3FormatManager::Conversion_t*> : public AlignedByteArrayExplicit_t<8, const CKV3FormatManager::Conversion_t*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<8, const CKV3FormatManager::Conversion_t*, 8> <ancestor>; */ /* 0 64 */
	void AlignedByteArray_t(AlignedByteArray_t<8, const CKV3FormatManager::Conversion_t*>* );
} __attribute__((__aligned__(8)));

// <05B9E075> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 512
struct AlignedByteArray_t<64, float const*> : public AlignedByteArrayExplicit_t<64, float const*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<64, float const*, 8> <ancestor>; */ /* 0 512 */
	void AlignedByteArray_t(AlignedByteArray_t<64, float const*>* );
} __attribute__((__aligned__(8)));

// <05DA024D> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 4,096
struct AlignedByteArray_t<256, CQuickHullSimplifier::Face_t> : public AlignedByteArrayExplicit_t<256, CQuickHullSimplifier::Face_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<256, CQuickHullSimplifier::Face_t, 8> <ancestor>; */ /* 0 4096 */
	void AlignedByteArray_t(AlignedByteArray_t<256, CQuickHullSimplifier::Face_t>* );
} __attribute__((__aligned__(8)));

// <05DA1AC1> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 4,096
struct AlignedByteArray_t<256, CQuickHullSimplifier::Cluster_t> : public AlignedByteArrayExplicit_t<256, CQuickHullSimplifier::Cluster_t, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<256, CQuickHullSimplifier::Cluster_t, 4> <ancestor>; */ /* 0 4096 */
	void AlignedByteArray_t(AlignedByteArray_t<256, CQuickHullSimplifier::Cluster_t>* );
} __attribute__((__aligned__(4)));

// <05DAD04B> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 64
struct AlignedByteArray_t<8, const qhVertex*> : public AlignedByteArrayExplicit_t<8, const qhVertex*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<8, const qhVertex*, 8> <ancestor>; */ /* 0 64 */
	void AlignedByteArray_t(AlignedByteArray_t<8, const qhVertex*>* );
} __attribute__((__aligned__(8)));

// <05DAE174> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 128
struct AlignedByteArray_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointer_t> : public AlignedByteArrayExplicit_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointer_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointer_t, 8> <ancestor>; */ /* 0 128 */
	void AlignedByteArray_t(AlignedByteArray_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListP);
} __attribute__((__aligned__(8)));

// <05DB1685> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 512
struct AlignedByteArray_t<32, CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentHandleWithListPointer_t> : public AlignedByteArrayExplicit_t<32, CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentHandleWithListPointer_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<32, CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentHandleWithListPointer_t, 8> <ancestor>; */ /* 0 512 */
	void AlignedByteArray_t(AlignedByteArray_t<32, CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentHandleWithListPo);
} __attribute__((__aligned__(8)));

// <05E3B799> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 192
struct AlignedByteArray_t<12, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t> : public AlignedByteArrayExplicit_t<12, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<12, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, 8> <ancestor>; */ /* 0 192 */
	void AlignedByteArray_t(AlignedByteArray_t<12, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::);
} __attribute__((__aligned__(8)));

// <05E3C9B0> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 96
struct AlignedByteArray_t<8, Vector> : public AlignedByteArrayExplicit_t<8, Vector, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<8, Vector, 4> <ancestor>; */ /* 0 96 */
	void AlignedByteArray_t(AlignedByteArray_t<8, Vector>* );
} __attribute__((__aligned__(4)));

// <05E3D9EE> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 128
struct AlignedByteArray_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t> : public AlignedByteArrayExplicit_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, 8> <ancestor>; */ /* 0 128 */
	void AlignedByteArray_t(AlignedByteArray_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::C);
} __attribute__((__aligned__(8)));

// <05E41871> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 256
struct AlignedByteArray_t<16, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t> : public AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, 8> <ancestor>; */ /* 0 256 */
	void AlignedByteArray_t(AlignedByteArray_t<16, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::);
} __attribute__((__aligned__(8)));

// <05E45F35> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 128
struct AlignedByteArray_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::ComponentHandleWithListPointer_t> : public AlignedByteArrayExplicit_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::ComponentHandleWithListPointer_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::ComponentHandleWithListPointer_t, 8> <ancestor>; */ /* 0 128 */
	void AlignedByteArray_t(AlignedByteArray_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Com);
} __attribute__((__aligned__(8)));

// <05ECFF9C> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 256
struct AlignedByteArray_t<16, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t> : public AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, 8> <ancestor>; */ /* 0 256 */
	void AlignedByteArray_t(AlignedByteArray_t<16, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t);
} __attribute__((__aligned__(8)));

// <05F53150> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 256
struct AlignedByteArray_t<16, CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t> : public AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 8> <ancestor>; */ /* 0 256 */
	void AlignedByteArray_t(AlignedByteArray_t<16, CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>* );
} __attribute__((__aligned__(8)));

// <05F54A83> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 256
struct AlignedByteArray_t<16, CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t> : public AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, 8> <ancestor>; */ /* 0 256 */
	void AlignedByteArray_t(AlignedByteArray_t<16, CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>* );
} __attribute__((__aligned__(8)));

// <05F573D0> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 256
struct AlignedByteArray_t<16, CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t> : public AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, 8> <ancestor>; */ /* 0 256 */
	void AlignedByteArray_t(AlignedByteArray_t<16, CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>* );
} __attribute__((__aligned__(8)));

// <05F58C94> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 256
struct AlignedByteArray_t<16, CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t> : public AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, 8> <ancestor>; */ /* 0 256 */
	void AlignedByteArray_t(AlignedByteArray_t<16, CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>* );
} __attribute__((__aligned__(8)));

// <0602DB87> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 256
struct AlignedByteArray_t<16, Quaternion> : public AlignedByteArrayExplicit_t<16, Quaternion, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<16, Quaternion, 4> <ancestor>; */ /* 0 256 */
	void AlignedByteArray_t(AlignedByteArray_t<16, Quaternion>* );
} __attribute__((__aligned__(4)));

// <0604CBDB> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 64
struct AlignedByteArray_t<16, unsigned int> : public AlignedByteArrayExplicit_t<16, unsigned int, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<16, unsigned int, 4> <ancestor>; */ /* 0 64 */
	void AlignedByteArray_t(AlignedByteArray_t<16, unsigned int>* );
} __attribute__((__aligned__(4)));

// <0604DC07> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 256
struct AlignedByteArray_t<64, int> : public AlignedByteArrayExplicit_t<64, int, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<64, int, 4> <ancestor>; */ /* 0 256 */
	void AlignedByteArray_t(AlignedByteArray_t<64, int>* );
} __attribute__((__aligned__(4)));

// <06053418> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 512
struct AlignedByteArray_t<32, CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t> : public AlignedByteArrayExplicit_t<32, CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<32, CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 8> <ancestor>; */ /* 0 512 */
	void AlignedByteArray_t(AlignedByteArray_t<32, CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>* );
} __attribute__((__aligned__(8)));

// <06062EA8> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 576
struct AlignedByteArray_t<4, TransferVertex_t> : public AlignedByteArrayExplicit_t<4, TransferVertex_t, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<4, TransferVertex_t, 4> <ancestor>; */ /* 0 576 */
	void AlignedByteArray_t(AlignedByteArray_t<4, TransferVertex_t>* );
} __attribute__((__aligned__(4)));

// <06063EE1> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 4
struct AlignedByteArray_t<1, int> : public AlignedByteArrayExplicit_t<1, int, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<1, int, 4> <ancestor>; */ /* 0 4 */
	void AlignedByteArray_t(AlignedByteArray_t<1, int>* );
} __attribute__((__aligned__(4)));

// <06064847> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 64
struct AlignedByteArray_t<64, bool> : public AlignedByteArrayExplicit_t<64, bool, 1> {
public:
	/* struct AlignedByteArrayExplicit_t<64, bool, 1> <ancestor>; */ /* 0 64 */
	void AlignedByteArray_t(AlignedByteArray_t<64, bool>* );
} __attribute__((__aligned__(1)));

// <06233E4E> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 6,656
struct AlignedByteArray_t<32, RayTracingResult_t> : public AlignedByteArrayExplicit_t<32, RayTracingResult_t, 16> {
public:
	/* struct AlignedByteArrayExplicit_t<32, RayTracingResult_t, 16> <ancestor>; */ /* 0 6656 */
	void AlignedByteArray_t(AlignedByteArray_t<32, RayTracingResult_t>* );
} __attribute__((__aligned__(16)));

// <062356B9> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 448
struct AlignedByteArray_t<8, RayTracingSingleResult_t> : public AlignedByteArrayExplicit_t<8, RayTracingSingleResult_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<8, RayTracingSingleResult_t, 8> <ancestor>; */ /* 0 448 */
	void AlignedByteArray_t(AlignedByteArray_t<8, RayTracingSingleResult_t>* );
} __attribute__((__aligned__(8)));

// <0682EA2D> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 1,024
struct AlignedByteArray_t<1024, char> : public AlignedByteArrayExplicit_t<1024, char, 1> {
public:
	/* struct AlignedByteArrayExplicit_t<1024, char, 1> <ancestor>; */ /* 0 1024 */
	void AlignedByteArray_t(AlignedByteArray_t<1024, char>* );
} __attribute__((__aligned__(1)));

// <068B776C> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 12
struct AlignedByteArray_t<6, short int> : public AlignedByteArrayExplicit_t<6, short int, 2> {
public:
	/* struct AlignedByteArrayExplicit_t<6, short int, 2> <ancestor>; */ /* 0 12 */
} __attribute__((__aligned__(2)));

// <06D65DFA> ../../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 4,096
struct AlignedByteArray_t<256, audio_mix_command_t> : public AlignedByteArrayExplicit_t<256, audio_mix_command_t, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<256, audio_mix_command_t, 4> <ancestor>; */ /* 0 4096 */
} __attribute__((__aligned__(4)));

// <06D675C4> ../../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 512
struct AlignedByteArray_t<64, CAudioProcessor*> : public AlignedByteArrayExplicit_t<64, CAudioProcessor*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<64, CAudioProcessor*, 8> <ancestor>; */ /* 0 512 */
} __attribute__((__aligned__(8)));

// <06D68D6C> ../../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 640
struct AlignedByteArray_t<32, CAudioMeterInstance> : public AlignedByteArrayExplicit_t<32, CAudioMeterInstance, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<32, CAudioMeterInstance, 4> <ancestor>; */ /* 0 640 */
} __attribute__((__aligned__(4)));

// <06F1D218> ../../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 64
struct AlignedByteArray_t<8, CFeAgglomerator::CCluster*> : public AlignedByteArrayExplicit_t<8, CFeAgglomerator::CCluster*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<8, CFeAgglomerator::CCluster*, 8> <ancestor>; */ /* 0 64 */
	void AlignedByteArray_t(AlignedByteArray_t<8, CFeAgglomerator::CCluster*>* );
} __attribute__((__aligned__(8)));

// <000846A7> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 24
struct AlignedByteArray_t<3, IIKRuleContext*> : public AlignedByteArrayExplicit_t<3, IIKRuleContext*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<3, IIKRuleContext*, 8> <ancestor>; */ /* 0 24 */
	void AlignedByteArray_t(AlignedByteArray_t<3, IIKRuleContext*>* );
} __attribute__((__aligned__(8)));

// <00134489> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 1,280
struct AlignedByteArray_t<16, CIKChainContext> : public AlignedByteArrayExplicit_t<16, CIKChainContext, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<16, CIKChainContext, 8> <ancestor>; */ /* 0 1280 */
	void AlignedByteArray_t(AlignedByteArray_t<16, CIKChainContext>* );
} __attribute__((__aligned__(8)));

// <00B27EF4> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 32,768
struct AlignedByteArray_t<4096, CUtlString> : public AlignedByteArrayExplicit_t<4096, CUtlString, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<4096, CUtlString, 8> <ancestor>; */ /* 0 32768 */
	void AlignedByteArray_t(AlignedByteArray_t<4096, CUtlString>* );
} __attribute__((__aligned__(8)));

// <00B9E07F> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 384
struct AlignedByteArray_t<12, CAnimationChannelResult> : public AlignedByteArrayExplicit_t<12, CAnimationChannelResult, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<12, CAnimationChannelResult, 8> <ancestor>; */ /* 0 384 */
} __attribute__((__aligned__(8)));

// <00B9F831> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 960
struct AlignedByteArray_t<12, IKLocked_t> : public AlignedByteArrayExplicit_t<12, IKLocked_t, 16> {
public:
	/* struct AlignedByteArrayExplicit_t<12, IKLocked_t, 16> <ancestor>; */ /* 0 960 */
} __attribute__((__aligned__(16)));

// <00BA08F5> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 2,048
struct AlignedByteArray_t<64, CTransform> : public AlignedByteArrayExplicit_t<64, CTransform, 16> {
public:
	/* struct AlignedByteArrayExplicit_t<64, CTransform, 16> <ancestor>; */ /* 0 2048 */
} __attribute__((__aligned__(16)));

// <00BD90F1> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 36,864
struct AlignedByteArray_t<256, CAnimationDecodeCacheEntry_t> : public AlignedByteArrayExplicit_t<256, CAnimationDecodeCacheEntry_t, 16> {
public:
	/* struct AlignedByteArrayExplicit_t<256, CAnimationDecodeCacheEntry_t, 16> <ancestor>; */ /* 0 36864 */
	void AlignedByteArray_t(AlignedByteArray_t<256, CAnimationDecodeCacheEntry_t>* );
} __attribute__((__aligned__(16)));

// <00BF725D> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 64
struct AlignedByteArray_t<16, int> : public AlignedByteArrayExplicit_t<16, int, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<16, int, 4> <ancestor>; */ /* 0 64 */
	void AlignedByteArray_t(AlignedByteArray_t<16, int>* );
} __attribute__((__aligned__(4)));

// <017070FA> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 1,024
struct AlignedByteArray_t<256, int> : public AlignedByteArrayExplicit_t<256, int, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<256, int, 4> <ancestor>; */ /* 0 1024 */
	void AlignedByteArray_t(AlignedByteArray_t<256, int>* );
} __attribute__((__aligned__(4)));

// <01FC7723> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 224
struct AlignedByteArray_t<4, RenderInputLayoutField_t> : public AlignedByteArrayExplicit_t<4, RenderInputLayoutField_t, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<4, RenderInputLayoutField_t, 4> <ancestor>; */ /* 0 224 */
	void AlignedByteArray_t(AlignedByteArray_t<4, RenderInputLayoutField_t>* );
} __attribute__((__aligned__(4)));

// <0258C359> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 6,144
struct AlignedByteArray_t<128, matrix3x4a_t> : public AlignedByteArrayExplicit_t<128, matrix3x4a_t, 16> {
public:
	/* struct AlignedByteArrayExplicit_t<128, matrix3x4a_t, 16> <ancestor>; */ /* 0 6144 */
	void AlignedByteArray_t(AlignedByteArray_t<128, matrix3x4a_t>* );
} __attribute__((__aligned__(16)));

// <0271FBE5> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 2,048
struct AlignedByteArray_t<32, CInternalOperation> : public AlignedByteArrayExplicit_t<32, CInternalOperation, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<32, CInternalOperation, 4> <ancestor>; */ /* 0 2048 */
	void AlignedByteArray_t(AlignedByteArray_t<32, CInternalOperation>* );
} __attribute__((__aligned__(4)));

// <02721450> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 182,784
struct AlignedByteArray_t<32, CAnimationResult> : public AlignedByteArrayExplicit_t<32, CAnimationResult, 16> {
public:
	/* struct AlignedByteArrayExplicit_t<32, CAnimationResult, 16> <ancestor>; */ /* 0 182784 */
	void AlignedByteArray_t(AlignedByteArray_t<32, CAnimationResult>* );
} __attribute__((__aligned__(16)));

// <02722572> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 32
struct AlignedByteArray_t<32, bool> : public AlignedByteArrayExplicit_t<32, bool, 1> {
public:
	/* struct AlignedByteArrayExplicit_t<32, bool, 1> <ancestor>; */ /* 0 32 */
	void AlignedByteArray_t(AlignedByteArray_t<32, bool>* );
} __attribute__((__aligned__(1)));

// <02723D9E> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 384
struct AlignedByteArray_t<32, DecodeOperation_t> : public AlignedByteArrayExplicit_t<32, DecodeOperation_t, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<32, DecodeOperation_t, 4> <ancestor>; */ /* 0 384 */
	void AlignedByteArray_t(AlignedByteArray_t<32, DecodeOperation_t>* );
} __attribute__((__aligned__(4)));

// <02724FC5> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 1,024
struct AlignedByteArray_t<32, CTransform> : public AlignedByteArrayExplicit_t<32, CTransform, 16> {
public:
	/* struct AlignedByteArrayExplicit_t<32, CTransform, 16> <ancestor>; */ /* 0 1024 */
	void AlignedByteArray_t(AlignedByteArray_t<32, CTransform>* );
} __attribute__((__aligned__(16)));

// <027EA0D1> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 1,536
struct AlignedByteArray_t<32, matrix3x4a_t> : public AlignedByteArrayExplicit_t<32, matrix3x4a_t, 16> {
public:
	/* struct AlignedByteArrayExplicit_t<32, matrix3x4a_t, 16> <ancestor>; */ /* 0 1536 */
	void AlignedByteArray_t(AlignedByteArray_t<32, matrix3x4a_t>* );
} __attribute__((__aligned__(16)));

// <0289EB62> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 64
struct AlignedByteArray_t<4, CKeyValues3Iterator::StackEntry_t> : public AlignedByteArrayExplicit_t<4, CKeyValues3Iterator::StackEntry_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<4, CKeyValues3Iterator::StackEntry_t, 8> <ancestor>; */ /* 0 64 */
	void AlignedByteArray_t(AlignedByteArray_t<4, CKeyValues3Iterator::StackEntry_t>* );
} __attribute__((__aligned__(8)));

// <000DFE82> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 128
struct AlignedByteArray_t<16, CDependencyDescriptor*> : public AlignedByteArrayExplicit_t<16, CDependencyDescriptor*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<16, CDependencyDescriptor*, 8> <ancestor>; */ /* 0 128 */
	void AlignedByteArray_t(AlignedByteArray_t<16, CDependencyDescriptor*>* );
} __attribute__((__aligned__(8)));

// <00169E60> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 128
struct AlignedByteArray_t<128, unsigned char> : public AlignedByteArrayExplicit_t<128, unsigned char, 1> {
public:
	/* struct AlignedByteArrayExplicit_t<128, unsigned char, 1> <ancestor>; */ /* 0 128 */
	void AlignedByteArray_t(AlignedByteArray_t<128, unsigned char>* );
} __attribute__((__aligned__(1)));

// <00226525> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 800
struct AlignedByteArray_t<100, CDependencyDescriptor*> : public AlignedByteArrayExplicit_t<100, CDependencyDescriptor*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<100, CDependencyDescriptor*, 8> <ancestor>; */ /* 0 800 */
	void AlignedByteArray_t(AlignedByteArray_t<100, CDependencyDescriptor*>* );
} __attribute__((__aligned__(8)));

// <0041A037> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 64
struct AlignedByteArray_t<4, CBarrierHelperVulkan::BufferState_t> : public AlignedByteArrayExplicit_t<4, CBarrierHelperVulkan::BufferState_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<4, CBarrierHelperVulkan::BufferState_t, 8> <ancestor>; */ /* 0 64 */
} __attribute__((__aligned__(8)));

// <0041B8C4> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 96
struct AlignedByteArray_t<4, CBarrierHelperVulkan::UAVState_t> : public AlignedByteArrayExplicit_t<4, CBarrierHelperVulkan::UAVState_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<4, CBarrierHelperVulkan::UAVState_t, 8> <ancestor>; */ /* 0 96 */
} __attribute__((__aligned__(8)));

// <0041D13C> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 8
struct AlignedByteArray_t<2, RenderImageLayout_t> : public AlignedByteArrayExplicit_t<2, RenderImageLayout_t, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<2, RenderImageLayout_t, 4> <ancestor>; */ /* 0 8 */
} __attribute__((__aligned__(4)));

// <004201B6> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 96
struct AlignedByteArray_t<4, RenderBufferBarrier_t> : public AlignedByteArrayExplicit_t<4, RenderBufferBarrier_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<4, RenderBufferBarrier_t, 8> <ancestor>; */ /* 0 96 */
} __attribute__((__aligned__(8)));

// <00421A14> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 160
struct AlignedByteArray_t<4, RenderUAVBarrier_t> : public AlignedByteArrayExplicit_t<4, RenderUAVBarrier_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<4, RenderUAVBarrier_t, 8> <ancestor>; */ /* 0 160 */
} __attribute__((__aligned__(8)));

// <0045A0CC> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 64
struct AlignedByteArray_t<16, VkFormat> : public AlignedByteArrayExplicit_t<16, VkFormat, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<16, VkFormat, 4> <ancestor>; */ /* 0 64 */
	void AlignedByteArray_t(AlignedByteArray_t<16, VkFormat>* );
} __attribute__((__aligned__(4)));

// <0049CBF9> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 8,192
struct AlignedByteArray_t<128, VkWriteDescriptorSet> : public AlignedByteArrayExplicit_t<128, VkWriteDescriptorSet, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<128, VkWriteDescriptorSet, 8> <ancestor>; */ /* 0 8192 */
	void AlignedByteArray_t(AlignedByteArray_t<128, VkWriteDescriptorSet>* );
} __attribute__((__aligned__(8)));

// <0049E479> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 3,072
struct AlignedByteArray_t<128, VkDescriptorImageInfo> : public AlignedByteArrayExplicit_t<128, VkDescriptorImageInfo, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<128, VkDescriptorImageInfo, 8> <ancestor>; */ /* 0 3072 */
	void AlignedByteArray_t(AlignedByteArray_t<128, VkDescriptorImageInfo>* );
} __attribute__((__aligned__(8)));

// <0049FCE7> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 3,072
struct AlignedByteArray_t<128, VkDescriptorBufferInfo> : public AlignedByteArrayExplicit_t<128, VkDescriptorBufferInfo, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<128, VkDescriptorBufferInfo, 8> <ancestor>; */ /* 0 3072 */
	void AlignedByteArray_t(AlignedByteArray_t<128, VkDescriptorBufferInfo>* );
} __attribute__((__aligned__(8)));

// <004D29AE> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 47,104
struct AlignedByteArray_t<128, VulkanFramebufferState_t> : public AlignedByteArrayExplicit_t<128, VulkanFramebufferState_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<128, VulkanFramebufferState_t, 8> <ancestor>; */ /* 0 47104 */
	void AlignedByteArray_t(AlignedByteArray_t<128, VulkanFramebufferState_t>* );
} __attribute__((__aligned__(8)));

// <005D597E> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 1,024
struct AlignedByteArray_t<128, PerThreadDataVulkan_t*> : public AlignedByteArrayExplicit_t<128, PerThreadDataVulkan_t*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<128, PerThreadDataVulkan_t*, 8> <ancestor>; */ /* 0 1024 */
	void AlignedByteArray_t(AlignedByteArray_t<128, PerThreadDataVulkan_t*>* );
} __attribute__((__aligned__(8)));

// <0062F445> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 96
struct AlignedByteArray_t<4, PipelineLayoutImmutableSampler_t> : public AlignedByteArrayExplicit_t<4, PipelineLayoutImmutableSampler_t, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<4, PipelineLayoutImmutableSampler_t, 4> <ancestor>; */ /* 0 96 */
	void AlignedByteArray_t(AlignedByteArray_t<4, PipelineLayoutImmutableSampler_t>* );
} __attribute__((__aligned__(4)));

// <006DD86C> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 116
struct AlignedByteArray_t<29, unsigned int> : public AlignedByteArrayExplicit_t<29, unsigned int, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<29, unsigned int, 4> <ancestor>; */ /* 0 116 */
	void AlignedByteArray_t(AlignedByteArray_t<29, unsigned int>* );
} __attribute__((__aligned__(4)));

// <006E0E93> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 256
struct AlignedByteArray_t<16, VkVertexInputAttributeDescription> : public AlignedByteArrayExplicit_t<16, VkVertexInputAttributeDescription, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<16, VkVertexInputAttributeDescription, 4> <ancestor>; */ /* 0 256 */
	void AlignedByteArray_t(AlignedByteArray_t<16, VkVertexInputAttributeDescription>* );
} __attribute__((__aligned__(4)));

// <006E2323> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 192
struct AlignedByteArray_t<16, VkVertexInputBindingDescription> : public AlignedByteArrayExplicit_t<16, VkVertexInputBindingDescription, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<16, VkVertexInputBindingDescription, 4> <ancestor>; */ /* 0 192 */
	void AlignedByteArray_t(AlignedByteArray_t<16, VkVertexInputBindingDescription>* );
} __attribute__((__aligned__(4)));

// <006E37A2> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 256
struct AlignedByteArray_t<8, VkPipelineColorBlendAttachmentState> : public AlignedByteArrayExplicit_t<8, VkPipelineColorBlendAttachmentState, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<8, VkPipelineColorBlendAttachmentState, 4> <ancestor>; */ /* 0 256 */
	void AlignedByteArray_t(AlignedByteArray_t<8, VkPipelineColorBlendAttachmentState>* );
} __attribute__((__aligned__(4)));

// <006E4FF1> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 92
struct AlignedByteArray_t<23, VkDynamicState> : public AlignedByteArrayExplicit_t<23, VkDynamicState, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<23, VkDynamicState, 4> <ancestor>; */ /* 0 92 */
	void AlignedByteArray_t(AlignedByteArray_t<23, VkDynamicState>* );
} __attribute__((__aligned__(4)));

// <006E7641> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 4
struct AlignedByteArray_t<1, VkDynamicState> : public AlignedByteArrayExplicit_t<1, VkDynamicState, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<1, VkDynamicState, 4> <ancestor>; */ /* 0 4 */
	void AlignedByteArray_t(AlignedByteArray_t<1, VkDynamicState>* );
} __attribute__((__aligned__(4)));

// <006E8A78> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 32
struct AlignedByteArray_t<4, VkPipeline_T*> : public AlignedByteArrayExplicit_t<4, VkPipeline_T*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<4, VkPipeline_T*, 8> <ancestor>; */ /* 0 32 */
	void AlignedByteArray_t(AlignedByteArray_t<4, VkPipeline_T*>* );
} __attribute__((__aligned__(8)));

// <006EA2B9> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 32
struct AlignedByteArray_t<4, const CDescriptorSetVulkan*> : public AlignedByteArrayExplicit_t<4, const CDescriptorSetVulkan*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<4, const CDescriptorSetVulkan*, 8> <ancestor>; */ /* 0 32 */
	void AlignedByteArray_t(AlignedByteArray_t<4, const CDescriptorSetVulkan*>* );
} __attribute__((__aligned__(8)));

// <008BD498> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 12
struct AlignedByteArray_t<3, VkPhysicalDeviceType> : public AlignedByteArrayExplicit_t<3, VkPhysicalDeviceType, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<3, VkPhysicalDeviceType, 4> <ancestor>; */ /* 0 12 */
	void AlignedByteArray_t(AlignedByteArray_t<3, VkPhysicalDeviceType>* );
} __attribute__((__aligned__(4)));

// <0099B887> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 64
struct AlignedByteArray_t<8, VkDescriptorPoolSize> : public AlignedByteArrayExplicit_t<8, VkDescriptorPoolSize, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<8, VkDescriptorPoolSize, 4> <ancestor>; */ /* 0 64 */
	void AlignedByteArray_t(AlignedByteArray_t<8, VkDescriptorPoolSize>* );
} __attribute__((__aligned__(4)));

// <0099FF0F> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 32
struct AlignedByteArray_t<4, RenderDescriptorSetHandle_t__*> : public AlignedByteArrayExplicit_t<4, RenderDescriptorSetHandle_t__*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<4, RenderDescriptorSetHandle_t__*, 8> <ancestor>; */ /* 0 32 */
	void AlignedByteArray_t(AlignedByteArray_t<4, RenderDescriptorSetHandle_t__*>* );
} __attribute__((__aligned__(8)));

// <00AB37EA> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 16
struct AlignedByteArray_t<8, short unsigned int> : public AlignedByteArrayExplicit_t<8, short unsigned int, 2> {
public:
	/* struct AlignedByteArrayExplicit_t<8, short unsigned int, 2> <ancestor>; */ /* 0 16 */
	void AlignedByteArray_t(AlignedByteArray_t<8, short unsigned int>* );
} __attribute__((__aligned__(2)));

// <0000C89E> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 1
struct AlignedByteArray_t<1, COrderedInitShutdownRefWrapper<OrderedInit_Platform> > : public AlignedByteArrayExplicit_t<1, COrderedInitShutdownRefWrapper<OrderedInit_Platform>, 1> {
public:
	/* struct AlignedByteArrayExplicit_t<1, COrderedInitShutdownRefWrapper<OrderedInit_Platform>, 1> <ancestor>; */ /* 0 1 */
} __attribute__((__aligned__(1)));

// <00023A67> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 528
struct AlignedByteArray_t<1, CAssertGlobals> : public AlignedByteArrayExplicit_t<1, CAssertGlobals, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<1, CAssertGlobals, 8> <ancestor>; */ /* 0 528 */
	void AlignedByteArray_t(AlignedByteArray_t<1, CAssertGlobals>* );
} __attribute__((__aligned__(8)));

// <0009BA0C> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 56
struct AlignedByteArray_t<1, CCommandLine> : public AlignedByteArrayExplicit_t<1, CCommandLine, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<1, CCommandLine, 8> <ancestor>; */ /* 0 56 */
	void AlignedByteArray_t(AlignedByteArray_t<1, CCommandLine>* );
} __attribute__((__aligned__(8)));

// <0010B406> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 16
struct AlignedByteArray_t<4, int> : public AlignedByteArrayExplicit_t<4, int, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<4, int, 4> <ancestor>; */ /* 0 16 */
} __attribute__((__aligned__(4)));

// <00150044> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 344
struct AlignedByteArray_t<1, FiberToolsOrderedConstructionGlobals_t> : public AlignedByteArrayExplicit_t<1, FiberToolsOrderedConstructionGlobals_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<1, FiberToolsOrderedConstructionGlobals_t, 8> <ancestor>; */ /* 0 344 */
	void AlignedByteArray_t(AlignedByteArray_t<1, FiberToolsOrderedConstructionGlobals_t>* );
} __attribute__((__aligned__(8)));

// <0015080C> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 96
struct AlignedByteArray_t<1, CFiberJobPool> : public AlignedByteArrayExplicit_t<1, CFiberJobPool, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<1, CFiberJobPool, 8> <ancestor>; */ /* 0 96 */
	void AlignedByteArray_t(AlignedByteArray_t<1, CFiberJobPool>* );
} __attribute__((__aligned__(8)));

// <00151139> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 304
struct AlignedByteArray_t<1, CFiber> : public AlignedByteArrayExplicit_t<1, CFiber, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<1, CFiber, 8> <ancestor>; */ /* 0 304 */
	void AlignedByteArray_t(AlignedByteArray_t<1, CFiber>* );
} __attribute__((__aligned__(8)));

// <001BEAE2> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 512
struct AlignedByteArray_t<64, pollfd> : public AlignedByteArrayExplicit_t<64, pollfd, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<64, pollfd, 4> <ancestor>; */ /* 0 512 */
	void AlignedByteArray_t(AlignedByteArray_t<64, pollfd>* );
} __attribute__((__aligned__(4)));

// <001BFF6D> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 256
struct AlignedByteArray_t<64, ThreadMultiWaitExtra_t> : public AlignedByteArrayExplicit_t<64, ThreadMultiWaitExtra_t, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<64, ThreadMultiWaitExtra_t, 4> <ancestor>; */ /* 0 256 */
	void AlignedByteArray_t(AlignedByteArray_t<64, ThreadMultiWaitExtra_t>* );
} __attribute__((__aligned__(4)));

// <001C17C0> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 384
struct AlignedByteArray_t<48, CExecMultiWorkerJob*> : public AlignedByteArrayExplicit_t<48, CExecMultiWorkerJob*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<48, CExecMultiWorkerJob*, 8> <ancestor>; */ /* 0 384 */
	void AlignedByteArray_t(AlignedByteArray_t<48, CExecMultiWorkerJob*>* );
} __attribute__((__aligned__(8)));

// <002803E9> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 54,496
struct AlignedByteArray_t<1, CLoggingSystem> : public AlignedByteArrayExplicit_t<1, CLoggingSystem, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<1, CLoggingSystem, 8> <ancestor>; */ /* 0 54496 */
	void AlignedByteArray_t(AlignedByteArray_t<1, CLoggingSystem>* );
} __attribute__((__aligned__(8)));

// <0037E644> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 208
struct AlignedByteArray_t<1, CBufferStringN<200> > : public AlignedByteArrayExplicit_t<1, CBufferStringN<200>, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<1, CBufferStringN<200>, 8> <ancestor>; */ /* 0 208 */
	void AlignedByteArray_t(AlignedByteArray_t<1, CBufferStringN<200> >* );
} __attribute__((__aligned__(8)));

// <0037F4B1> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 8
struct AlignedByteArray_t<1, CThreadKeyHolder> : public AlignedByteArrayExplicit_t<1, CThreadKeyHolder, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<1, CThreadKeyHolder, 4> <ancestor>; */ /* 0 8 */
	void AlignedByteArray_t(AlignedByteArray_t<1, CThreadKeyHolder>* );
} __attribute__((__aligned__(4)));

// <00396CE3> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 13,528
struct AlignedByteArray_t<1, SignalHandlerMemory_t> : public AlignedByteArrayExplicit_t<1, SignalHandlerMemory_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<1, SignalHandlerMemory_t, 8> <ancestor>; */ /* 0 13528 */
	void AlignedByteArray_t(AlignedByteArray_t<1, SignalHandlerMemory_t>* );
} __attribute__((__aligned__(8)));

// <00487F48> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 24
struct AlignedByteArray_t<1, CThreadFastMutex> : public AlignedByteArrayExplicit_t<1, CThreadFastMutex, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<1, CThreadFastMutex, 8> <ancestor>; */ /* 0 24 */
	void AlignedByteArray_t(AlignedByteArray_t<1, CThreadFastMutex>* );
} __attribute__((__aligned__(8)));

// <004C7E4D> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 16
struct AlignedByteArray_t<1, CThreadLocalScope::CScopeCreatedOrDestroyedHandler> : public AlignedByteArrayExplicit_t<1, CThreadLocalScope::CScopeCreatedOrDestroyedHandler, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<1, CThreadLocalScope::CScopeCreatedOrDestroyedHandler, 8> <ancestor>; */ /* 0 16 */
	void AlignedByteArray_t(AlignedByteArray_t<1, CThreadLocalScope::CScopeCreatedOrDestroyedHandler>* );
} __attribute__((__aligned__(8)));

// <004C9608> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 8
struct AlignedByteArray_t<1, CConstructedMainThreadID> : public AlignedByteArrayExplicit_t<1, CConstructedMainThreadID, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<1, CConstructedMainThreadID, 8> <ancestor>; */ /* 0 8 */
	void AlignedByteArray_t(AlignedByteArray_t<1, CConstructedMainThreadID>* );
} __attribute__((__aligned__(8)));

// <004C9CC0> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 56
struct AlignedByteArray_t<1, CThreadLocalScope> : public AlignedByteArrayExplicit_t<1, CThreadLocalScope, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<1, CThreadLocalScope, 8> <ancestor>; */ /* 0 56 */
	void AlignedByteArray_t(AlignedByteArray_t<1, CThreadLocalScope>* );
} __attribute__((__aligned__(8)));

// <0050E522> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 512
struct AlignedByteArray_t<64, float const*> : public AlignedByteArrayExplicit_t<64, float const*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<64, float const*, 8> <ancestor>; */ /* 0 512 */
} __attribute__((__aligned__(8)));

// <0052EE2A> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 2,816
struct AlignedByteArray_t<64, CUtl3DAllocator2::Node3D_t> : public AlignedByteArrayExplicit_t<64, CUtl3DAllocator2::Node3D_t, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<64, CUtl3DAllocator2::Node3D_t, 4> <ancestor>; */ /* 0 2816 */
	void AlignedByteArray_t(AlignedByteArray_t<64, CUtl3DAllocator2::Node3D_t>* );
} __attribute__((__aligned__(4)));

// <00066F95> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 1,024
struct AlignedByteArray_t<128, CSchemaClassInfo*> : public AlignedByteArrayExplicit_t<128, CSchemaClassInfo*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<128, CSchemaClassInfo*, 8> <ancestor>; */ /* 0 1024 */
	void AlignedByteArray_t(AlignedByteArray_t<128, CSchemaClassInfo*>* );
} __attribute__((__aligned__(8)));

// <000687F1> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 1,024
struct AlignedByteArray_t<128, CSchemaEnumInfo*> : public AlignedByteArrayExplicit_t<128, CSchemaEnumInfo*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<128, CSchemaEnumInfo*, 8> <ancestor>; */ /* 0 1024 */
	void AlignedByteArray_t(AlignedByteArray_t<128, CSchemaEnumInfo*>* );
} __attribute__((__aligned__(8)));

// <000E1246> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 280
struct AlignedByteArray_t<1, RuntimeBuffersInfo_t::BufferInfo_t> : public AlignedByteArrayExplicit_t<1, RuntimeBuffersInfo_t::BufferInfo_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<1, RuntimeBuffersInfo_t::BufferInfo_t, 8> <ancestor>; */ /* 0 280 */
	void AlignedByteArray_t(AlignedByteArray_t<1, RuntimeBuffersInfo_t::BufferInfo_t>* );
} __attribute__((__aligned__(8)));

// <00153203> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 32
struct AlignedByteArray_t<4, CModelTypeManager::AsyncProcessDataResults::MeshData*> : public AlignedByteArrayExplicit_t<4, CModelTypeManager::AsyncProcessDataResults::MeshData*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<4, CModelTypeManager::AsyncProcessDataResults::MeshData*, 8> <ancestor>; */ /* 0 32 */
	void AlignedByteArray_t(AlignedByteArray_t<4, CModelTypeManager::AsyncProcessDataResults::MeshData*>* );
} __attribute__((__aligned__(8)));

// <0033D0E8> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 32
struct AlignedByteArray_t<4, const CAnimationGroupResource*> : public AlignedByteArrayExplicit_t<4, const CAnimationGroupResource*, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<4, const CAnimationGroupResource*, 8> <ancestor>; */ /* 0 32 */
	void AlignedByteArray_t(AlignedByteArray_t<4, const CAnimationGroupResource*>* );
} __attribute__((__aligned__(8)));

// <0007C303> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 12
struct AlignedByteArray_t<3, int> : public AlignedByteArrayExplicit_t<3, int, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<3, int, 4> <ancestor>; */ /* 0 12 */
} __attribute__((__aligned__(4)));

// <0007F4D2> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 6,912
struct AlignedByteArray_t<6, CMaterialMode> : public AlignedByteArrayExplicit_t<6, CMaterialMode, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<6, CMaterialMode, 8> <ancestor>; */ /* 0 6912 */
} __attribute__((__aligned__(8)));

// <0014CA85> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 512
struct AlignedByteArray_t<32, CMaterialLayer::CommandBufferInfo_t> : public AlignedByteArrayExplicit_t<32, CMaterialLayer::CommandBufferInfo_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<32, CMaterialLayer::CommandBufferInfo_t, 8> <ancestor>; */ /* 0 512 */
	void AlignedByteArray_t(AlignedByteArray_t<32, CMaterialLayer::CommandBufferInfo_t>* );
} __attribute__((__aligned__(8)));

// <0023F004> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 256
struct AlignedByteArray_t<16, texture_use_info_t> : public AlignedByteArrayExplicit_t<16, texture_use_info_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<16, texture_use_info_t, 8> <ancestor>; */ /* 0 256 */
} __attribute__((__aligned__(8)));

// <0023FCAE> ../public/tier0/platform_compile_base.h:1597
// member variable: 1
// struct size: 768
struct AlignedByteArray_t<16, RenderDescriptorBinding_t> : public AlignedByteArrayExplicit_t<16, RenderDescriptorBinding_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<16, RenderDescriptorBinding_t, 8> <ancestor>; */ /* 0 768 */
} __attribute__((__aligned__(8)));

// <00421EFC> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 48
struct AlignedByteArray_t<4, Vector> : public AlignedByteArrayExplicit_t<4, Vector, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<4, Vector, 4> <ancestor>; */ /* 0 48 */
	void AlignedByteArray_t(AlignedByteArray_t<4, Vector>* );
} __attribute__((__aligned__(4)));

// <0042370C> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 16
struct AlignedByteArray_t<4, Color> : public AlignedByteArrayExplicit_t<4, Color, 1> {
public:
	/* struct AlignedByteArrayExplicit_t<4, Color, 1> <ancestor>; */ /* 0 16 */
	void AlignedByteArray_t(AlignedByteArray_t<4, Color>* );
} __attribute__((__aligned__(1)));

// <0042481D> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 32
struct AlignedByteArray_t<4, Vector2D> : public AlignedByteArrayExplicit_t<4, Vector2D, 4> {
public:
	/* struct AlignedByteArrayExplicit_t<4, Vector2D, 4> <ancestor>; */ /* 0 32 */
	void AlignedByteArray_t(AlignedByteArray_t<4, Vector2D>* );
} __attribute__((__aligned__(4)));

// <00428014> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 64
struct AlignedByteArray_t<2, CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> > > : public AlignedByteArrayExplicit_t<2, CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<2, CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, 8> <ancestor>; */ /* 0 64 */
	void AlignedByteArray_t(AlignedByteArray_t<2, CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> > >* );
} __attribute__((__aligned__(8)));

// <00570D8B> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 128
struct AlignedByteArray_t<8, IMaterial2::TextureAttributeValue_t> : public AlignedByteArrayExplicit_t<8, IMaterial2::TextureAttributeValue_t, 8> {
public:
	/* struct AlignedByteArrayExplicit_t<8, IMaterial2::TextureAttributeValue_t, 8> <ancestor>; */ /* 0 128 */
	void AlignedByteArray_t(AlignedByteArray_t<8, IMaterial2::TextureAttributeValue_t>* );
} __attribute__((__aligned__(8)));

// <000A880D> ../public/tier0/platform_compile_base.h:1597
// member function: 1
// member variable: 1
// struct size: 256
struct AlignedByteArray_t<128, CUtlSymbol> : public AlignedByteArrayExplicit_t<128, CUtlSymbol, 2> {
public:
	/* struct AlignedByteArrayExplicit_t<128, CUtlSymbol, 2> <ancestor>; */ /* 0 256 */
	void AlignedByteArray_t(AlignedByteArray_t<128, CUtlSymbol>* );
} __attribute__((__aligned__(2)));

// <06A5D299> ../public/tier0/platform_compile_base.h:1611
inline void AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base()
{
} /* size: 0 */

// <0683209D> ../public/tier0/platform_compile_base.h:1611
void AlignedByteArrayExplicit_t<1024, char, 1>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <06832072> ../public/tier0/platform_compile_base.h:1611
inline void AlignedByteArrayExplicit_t<1024, char, 1>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <06832059> ../public/tier0/platform_compile_base.h:1611
inline void AlignedByteArrayExplicit_t<1024, char, 1>::Base()
{
} /* size: 0 */

// <0606F9F8> ../public/tier0/platform_compile_base.h:1611
void AlignedByteArrayExplicit_t<64, bool, 1>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0606F9CD> ../public/tier0/platform_compile_base.h:1611
inline void AlignedByteArrayExplicit_t<64, bool, 1>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0606F9B4> ../public/tier0/platform_compile_base.h:1611
inline void AlignedByteArrayExplicit_t<64, bool, 1>::Base()
{
} /* size: 0 */

// <055E0241> ../public/tier0/platform_compile_base.h:1611
void AlignedByteArrayExplicit_t<1024, unsigned char, 1>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <055E0216> ../public/tier0/platform_compile_base.h:1611
inline void AlignedByteArrayExplicit_t<1024, unsigned char, 1>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <055E01FD> ../public/tier0/platform_compile_base.h:1611
inline void AlignedByteArrayExplicit_t<1024, unsigned char, 1>::Base()
{
} /* size: 0 */

// <05547F6C> ../public/tier0/platform_compile_base.h:1611
void AlignedByteArrayExplicit_t<8, unsigned char, 1>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <05547F41> ../public/tier0/platform_compile_base.h:1611
inline void AlignedByteArrayExplicit_t<8, unsigned char, 1>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <05547F28> ../public/tier0/platform_compile_base.h:1611
inline void AlignedByteArrayExplicit_t<8, unsigned char, 1>::Base()
{
} /* size: 0 */

// <0475EC9A> ../public/tier0/platform_compile_base.h:1611
void AlignedByteArrayExplicit_t<2048, unsigned char, 1>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0475EC6F> ../public/tier0/platform_compile_base.h:1611
inline void AlignedByteArrayExplicit_t<2048, unsigned char, 1>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0475EC56> ../public/tier0/platform_compile_base.h:1611
inline void AlignedByteArrayExplicit_t<2048, unsigned char, 1>::Base()
{
} /* size: 0 */

// <0475EB89> ../public/tier0/platform_compile_base.h:1611
void AlignedByteArrayExplicit_t<6144, unsigned char, 1>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0475EB5E> ../public/tier0/platform_compile_base.h:1611
inline void AlignedByteArrayExplicit_t<6144, unsigned char, 1>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0475EB45> ../public/tier0/platform_compile_base.h:1611
inline void AlignedByteArrayExplicit_t<6144, unsigned char, 1>::Base()
{
} /* size: 0 */

// <0475EAB5> ../public/tier0/platform_compile_base.h:1611
void AlignedByteArrayExplicit_t<8192, unsigned char, 1>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0475EA8A> ../public/tier0/platform_compile_base.h:1611
inline void AlignedByteArrayExplicit_t<8192, unsigned char, 1>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0475EA71> ../public/tier0/platform_compile_base.h:1611
inline void AlignedByteArrayExplicit_t<8192, unsigned char, 1>::Base()
{
} /* size: 0 */

// <0012878D> ../public/tier0/platform_compile_base.h:1611
void AlignedByteArray_FailedAlignmentTest(void)
{
} /* size: 0 */

// <00005774> ../public/tier0/platform_compile_base.h:1611
void AlignedByteArrayExplicit_t<1, COrderedInitShutdownRefWrapper<EarlyInit_Common>, 1>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <00005749> ../public/tier0/platform_compile_base.h:1611
inline void AlignedByteArrayExplicit_t<1, COrderedInitShutdownRefWrapper<EarlyInit_Common>, 1>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <00004888> ../public/tier0/platform_compile_base.h:1611
inline void AlignedByteArrayExplicit_t<1, COrderedInitShutdownRefWrapper<EarlyInit_Common>, 1>::Base()
{
} /* size: 0 */

// <02728EAF> ../public/tier0/platform_compile_base.h:1611
void AlignedByteArrayExplicit_t<32, bool, 1>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <02728E85> ../public/tier0/platform_compile_base.h:1611
inline void AlignedByteArrayExplicit_t<32, bool, 1>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <02728E6C> ../public/tier0/platform_compile_base.h:1611
inline void AlignedByteArrayExplicit_t<32, bool, 1>::Base()
{
} /* size: 0 */

// <0016ECB3> ../public/tier0/platform_compile_base.h:1611
void AlignedByteArrayExplicit_t<128, unsigned char, 1>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0016EC88> ../public/tier0/platform_compile_base.h:1611
inline void AlignedByteArrayExplicit_t<128, unsigned char, 1>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0016EC6F> ../public/tier0/platform_compile_base.h:1611
inline void AlignedByteArrayExplicit_t<128, unsigned char, 1>::Base()
{
} /* size: 0 */

// <003836F3> ../public/tier0/platform_compile_base.h:1611
void AlignedByteArrayExplicit_t<1, COrderedInitShutdownRefWrapper<OrderedInit_Platform>, 1>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <003836C8> ../public/tier0/platform_compile_base.h:1611
inline void AlignedByteArrayExplicit_t<1, COrderedInitShutdownRefWrapper<OrderedInit_Platform>, 1>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <00381FB1> ../public/tier0/platform_compile_base.h:1611
inline void AlignedByteArrayExplicit_t<1, COrderedInitShutdownRefWrapper<OrderedInit_Platform>, 1>::Base()
{
} /* size: 0 */

// <00430935> ../public/tier0/platform_compile_base.h:1611
void AlignedByteArrayExplicit_t<4, Color, 1>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0043090A> ../public/tier0/platform_compile_base.h:1611
inline void AlignedByteArrayExplicit_t<4, Color, 1>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <004308F1> ../public/tier0/platform_compile_base.h:1611
inline void AlignedByteArrayExplicit_t<4, Color, 1>::Base()
{
} /* size: 0 */

// <00003990> ../public/tier0/platform_compile_base.h:1611
// member functions: 3
// member variable: 1
// struct size: 1
struct AlignedByteArrayExplicit_t<1, COrderedInitShutdownRefWrapper<EarlyInit_Common>, 1> {
	/* ../public/tier0/platform_compile_base.h:1611 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<1, COrderedInitShutdownRefWrapper<EarlyInit_Common>, 1>* );
	/* ../public/tier0/platform_compile_base.h:1611 */
	COrderedInitShutdownRefWrapper<EarlyInit_Common>* Base(AlignedByteArrayExplicit_t<1, COrderedInitShutdownRefWrapper<EarlyInit_Common>, 1>* );
	/* ../public/tier0/platform_compile_base.h:1611 */
	const COrderedInitShutdownRefWrapper<EarlyInit_Common>* Base(const AlignedByteArrayExplicit_t<1, COrderedInitShutdownRefWrapper<EarlyInit_Common>, 1>* );
private:
	uint8 m_Data[1]; /* 0 1 */
} __attribute__((__aligned__(1)));

// <012231A4> ../public/tier0/platform_compile_base.h:1611
// member functions: 3
// member variable: 1
// struct size: 12
struct AlignedByteArrayExplicit_t<12, unsigned char, 1> {
	/* ../public/tier0/platform_compile_base.h:1611 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<12, unsigned char, 1>* );
	/* ../public/tier0/platform_compile_base.h:1611 */
	unsigned char* Base(AlignedByteArrayExplicit_t<12, unsigned char, 1>* );
	/* ../public/tier0/platform_compile_base.h:1611 */
	const unsigned char* Base(const AlignedByteArrayExplicit_t<12, unsigned char, 1>* );
private:
	uint8 m_Data[12]; /* 0 12 */
} __attribute__((__aligned__(1)));

// <044535B6> ../public/tier0/platform_compile_base.h:1611
// member functions: 3
// member variable: 1
// struct size: 2,048
struct AlignedByteArrayExplicit_t<2048, unsigned char, 1> {
	/* ../public/tier0/platform_compile_base.h:1611 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<2048, unsigned char, 1>* );
	/* ../public/tier0/platform_compile_base.h:1611 */
	unsigned char* Base(AlignedByteArrayExplicit_t<2048, unsigned char, 1>* );
	/* ../public/tier0/platform_compile_base.h:1611 */
	const unsigned char* Base(const AlignedByteArrayExplicit_t<2048, unsigned char, 1>* );
private:
	uint8 m_Data[2048]; /* 0 2048 */
} __attribute__((__aligned__(1)));

// <0475B801> ../public/tier0/platform_compile_base.h:1611
// member functions: 3
// member variable: 1
// struct size: 6,144
struct AlignedByteArrayExplicit_t<6144, unsigned char, 1> {
	/* ../public/tier0/platform_compile_base.h:1611 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<6144, unsigned char, 1>* );
	/* ../public/tier0/platform_compile_base.h:1611 */
	unsigned char* Base(AlignedByteArrayExplicit_t<6144, unsigned char, 1>* );
	/* ../public/tier0/platform_compile_base.h:1611 */
	const unsigned char* Base(const AlignedByteArrayExplicit_t<6144, unsigned char, 1>* );
private:
	uint8 m_Data[6144]; /* 0 6144 */
} __attribute__((__aligned__(1)));

// <0475C847> ../public/tier0/platform_compile_base.h:1611
// member functions: 3
// member variable: 1
// struct size: 8,192
struct AlignedByteArrayExplicit_t<8192, unsigned char, 1> {
	/* ../public/tier0/platform_compile_base.h:1611 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<8192, unsigned char, 1>* );
	/* ../public/tier0/platform_compile_base.h:1611 */
	unsigned char* Base(AlignedByteArrayExplicit_t<8192, unsigned char, 1>* );
	/* ../public/tier0/platform_compile_base.h:1611 */
	const unsigned char* Base(const AlignedByteArrayExplicit_t<8192, unsigned char, 1>* );
private:
	uint8 m_Data[8192]; /* 0 8192 */
} __attribute__((__aligned__(1)));

// <05539EB1> ../public/tier0/platform_compile_base.h:1611
// member functions: 3
// member variable: 1
// struct size: 8
struct AlignedByteArrayExplicit_t<8, unsigned char, 1> {
	/* ../public/tier0/platform_compile_base.h:1611 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<8, unsigned char, 1>* );
	/* ../public/tier0/platform_compile_base.h:1611 */
	unsigned char* Base(AlignedByteArrayExplicit_t<8, unsigned char, 1>* );
	/* ../public/tier0/platform_compile_base.h:1611 */
	const unsigned char* Base(const AlignedByteArrayExplicit_t<8, unsigned char, 1>* );
private:
	uint8 m_Data[8]; /* 0 8 */
} __attribute__((__aligned__(1)));

// <055DE83A> ../public/tier0/platform_compile_base.h:1611
// member functions: 3
// member variable: 1
// struct size: 1,024
struct AlignedByteArrayExplicit_t<1024, unsigned char, 1> {
	/* ../public/tier0/platform_compile_base.h:1611 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<1024, unsigned char, 1>* );
	/* ../public/tier0/platform_compile_base.h:1611 */
	unsigned char* Base(AlignedByteArrayExplicit_t<1024, unsigned char, 1>* );
	/* ../public/tier0/platform_compile_base.h:1611 */
	const unsigned char* Base(const AlignedByteArrayExplicit_t<1024, unsigned char, 1>* );
private:
	uint8 m_Data[1024]; /* 0 1024 */
} __attribute__((__aligned__(1)));

// <06064792> ../public/tier0/platform_compile_base.h:1611
// member functions: 3
// member variable: 1
// struct size: 64
struct AlignedByteArrayExplicit_t<64, bool, 1> {
	/* ../public/tier0/platform_compile_base.h:1611 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<64, bool, 1>* );
	/* ../public/tier0/platform_compile_base.h:1611 */
	bool* Base(AlignedByteArrayExplicit_t<64, bool, 1>* );
	/* ../public/tier0/platform_compile_base.h:1611 */
	const bool* Base(const AlignedByteArrayExplicit_t<64, bool, 1>* );
private:
	uint8 m_Data[64]; /* 0 64 */
} __attribute__((__aligned__(1)));

// <0682E963> ../public/tier0/platform_compile_base.h:1611
// member functions: 3
// member variable: 1
// struct size: 1,024
struct AlignedByteArrayExplicit_t<1024, char, 1> {
	/* ../public/tier0/platform_compile_base.h:1611 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<1024, char, 1>* );
	/* ../public/tier0/platform_compile_base.h:1611 */
	char* Base(AlignedByteArrayExplicit_t<1024, char, 1>* );
	/* ../public/tier0/platform_compile_base.h:1611 */
	const char* Base(const AlignedByteArrayExplicit_t<1024, char, 1>* );
private:
	uint8 m_Data[1024]; /* 0 1024 */
} __attribute__((__aligned__(1)));

// <027224BD> ../public/tier0/platform_compile_base.h:1611
// member functions: 3
// member variable: 1
// struct size: 32
struct AlignedByteArrayExplicit_t<32, bool, 1> {
	/* ../public/tier0/platform_compile_base.h:1611 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<32, bool, 1>* );
	/* ../public/tier0/platform_compile_base.h:1611 */
	bool* Base(AlignedByteArrayExplicit_t<32, bool, 1>* );
	/* ../public/tier0/platform_compile_base.h:1611 */
	const bool* Base(const AlignedByteArrayExplicit_t<32, bool, 1>* );
private:
	uint8 m_Data[32]; /* 0 32 */
} __attribute__((__aligned__(1)));

// <00169DAB> ../public/tier0/platform_compile_base.h:1611
// member functions: 3
// member variable: 1
// struct size: 128
struct AlignedByteArrayExplicit_t<128, unsigned char, 1> {
	/* ../public/tier0/platform_compile_base.h:1611 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<128, unsigned char, 1>* );
	/* ../public/tier0/platform_compile_base.h:1611 */
	unsigned char* Base(AlignedByteArrayExplicit_t<128, unsigned char, 1>* );
	/* ../public/tier0/platform_compile_base.h:1611 */
	const unsigned char* Base(const AlignedByteArrayExplicit_t<128, unsigned char, 1>* );
private:
	uint8 m_Data[128]; /* 0 128 */
} __attribute__((__aligned__(1)));

// <00003990> ../../public/tier0/platform_compile_base.h:1611
// member functions: 3
// member variable: 1
// struct size: 1
struct AlignedByteArrayExplicit_t<1, COrderedInitShutdownRefWrapper<EarlyInit_Common>, 1> {
	/* ../../public/tier0/platform_compile_base.h:1611 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<1, COrderedInitShutdownRefWrapper<EarlyInit_Common>, 1>* );
	/* ../../public/tier0/platform_compile_base.h:1611 */
	COrderedInitShutdownRefWrapper<EarlyInit_Common>* Base(AlignedByteArrayExplicit_t<1, COrderedInitShutdownRefWrapper<EarlyInit_Common>, 1>* );
	/* ../../public/tier0/platform_compile_base.h:1611 */
	const COrderedInitShutdownRefWrapper<EarlyInit_Common>* Base(const AlignedByteArrayExplicit_t<1, COrderedInitShutdownRefWrapper<EarlyInit_Common>, 1>* );
private:
	uint8 m_Data[1]; /* 0 1 */
} __attribute__((__aligned__(1)));

// <0002C33C> ../../public/tier0/platform_compile_base.h:1611
// member functions: 3
// member variable: 1
// struct size: 12
struct AlignedByteArrayExplicit_t<12, unsigned char, 1> {
	/* ../../public/tier0/platform_compile_base.h:1611 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<12, unsigned char, 1>* );
	/* ../../public/tier0/platform_compile_base.h:1611 */
	unsigned char* Base(AlignedByteArrayExplicit_t<12, unsigned char, 1>* );
	/* ../../public/tier0/platform_compile_base.h:1611 */
	const unsigned char* Base(const AlignedByteArrayExplicit_t<12, unsigned char, 1>* );
private:
	uint8 m_Data[12]; /* 0 12 */
} __attribute__((__aligned__(1)));

// <0000C7D4> ../public/tier0/platform_compile_base.h:1611
// member functions: 3
// member variable: 1
// struct size: 1
struct AlignedByteArrayExplicit_t<1, COrderedInitShutdownRefWrapper<OrderedInit_Platform>, 1> {
	/* ../public/tier0/platform_compile_base.h:1611 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<1, COrderedInitShutdownRefWrapper<OrderedInit_Platform>, 1>* );
	/* ../public/tier0/platform_compile_base.h:1611 */
	COrderedInitShutdownRefWrapper<OrderedInit_Platform>* Base(AlignedByteArrayExplicit_t<1, COrderedInitShutdownRefWrapper<OrderedInit_Platform>, 1>* );
	/* ../public/tier0/platform_compile_base.h:1611 */
	const COrderedInitShutdownRefWrapper<OrderedInit_Platform>* Base(const AlignedByteArrayExplicit_t<1, COrderedInitShutdownRefWrapper<OrderedInit_Platform>, 1>* );
private:
	uint8 m_Data[1]; /* 0 1 */
} __attribute__((__aligned__(1)));

// <00423658> ../public/tier0/platform_compile_base.h:1611
// member functions: 3
// member variable: 1
// struct size: 16
struct AlignedByteArrayExplicit_t<4, Color, 1> {
	/* ../public/tier0/platform_compile_base.h:1611 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<4, Color, 1>* );
	/* ../public/tier0/platform_compile_base.h:1611 */
	Color* Base(AlignedByteArrayExplicit_t<4, Color, 1>* );
	/* ../public/tier0/platform_compile_base.h:1611 */
	const Color* Base(const AlignedByteArrayExplicit_t<4, Color, 1>* );
private:
	uint8 m_Data[16]; /* 0 16 */
} __attribute__((__aligned__(1)));

// <069E664F> ../public/tier0/platform_compile_base.h:1612
inline void AlignedByteArrayExplicit_t<2, VfxVariableIndexData_t, 2>::Base()
{
} /* size: 0 */

// <068E519C> ../public/tier0/platform_compile_base.h:1612
inline void AlignedByteArrayExplicit_t<6, short int, 2>::Base()
{
} /* size: 0 */

// <0240A363> ../public/tier0/platform_compile_base.h:1612
void AlignedByteArrayExplicit_t<1024, short int, 2>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0240A338> ../public/tier0/platform_compile_base.h:1612
inline void AlignedByteArrayExplicit_t<1024, short int, 2>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <00AB9BFD> ../public/tier0/platform_compile_base.h:1612
void AlignedByteArrayExplicit_t<8, short unsigned int, 2>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <00AB9BD2> ../public/tier0/platform_compile_base.h:1612
inline void AlignedByteArrayExplicit_t<8, short unsigned int, 2>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <00AB9BB9> ../public/tier0/platform_compile_base.h:1612
inline void AlignedByteArrayExplicit_t<8, short unsigned int, 2>::Base()
{
} /* size: 0 */

// <000BE3FB> ../public/tier0/platform_compile_base.h:1612
inline void AlignedByteArrayExplicit_t<128, CUtlSymbol, 2>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <000BE3E2> ../public/tier0/platform_compile_base.h:1612
inline void AlignedByteArrayExplicit_t<128, CUtlSymbol, 2>::Base()
{
} /* size: 0 */

// <0122513B> ../public/tier0/platform_compile_base.h:1612
// member functions: 3
// member variable: 1
// struct size: 8
struct AlignedByteArrayExplicit_t<2, VfxVariableIndexData_t, 2> {
	/* ../public/tier0/platform_compile_base.h:1612 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<2, VfxVariableIndexData_t, 2>* );
	/* ../public/tier0/platform_compile_base.h:1612 */
	VfxVariableIndexData_t* Base(AlignedByteArrayExplicit_t<2, VfxVariableIndexData_t, 2>* );
	/* ../public/tier0/platform_compile_base.h:1612 */
	const VfxVariableIndexData_t* Base(const AlignedByteArrayExplicit_t<2, VfxVariableIndexData_t, 2>* );
private:
	uint8 m_Data[8]; /* 0 8 */
} __attribute__((__aligned__(2)));

// <02404AE8> ../public/tier0/platform_compile_base.h:1612
// member functions: 3
// member variable: 1
// struct size: 2,048
struct AlignedByteArrayExplicit_t<1024, short int, 2> {
	/* ../public/tier0/platform_compile_base.h:1612 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<1024, short int, 2>* );
	/* ../public/tier0/platform_compile_base.h:1612 */
	short int* Base(AlignedByteArrayExplicit_t<1024, short int, 2>* );
	/* ../public/tier0/platform_compile_base.h:1612 */
	const short int* Base(const AlignedByteArrayExplicit_t<1024, short int, 2>* );
private:
	uint8 m_Data[2048]; /* 0 2048 */
} __attribute__((__aligned__(2)));

// <068B76B7> ../public/tier0/platform_compile_base.h:1612
// member functions: 3
// member variable: 1
// struct size: 12
struct AlignedByteArrayExplicit_t<6, short int, 2> {
	/* ../public/tier0/platform_compile_base.h:1612 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<6, short int, 2>* );
	/* ../public/tier0/platform_compile_base.h:1612 */
	short int* Base(AlignedByteArrayExplicit_t<6, short int, 2>* );
	/* ../public/tier0/platform_compile_base.h:1612 */
	const short int* Base(const AlignedByteArrayExplicit_t<6, short int, 2>* );
private:
	uint8 m_Data[12]; /* 0 12 */
} __attribute__((__aligned__(2)));

// <00AB3735> ../public/tier0/platform_compile_base.h:1612
// member functions: 3
// member variable: 1
// struct size: 16
struct AlignedByteArrayExplicit_t<8, short unsigned int, 2> {
	/* ../public/tier0/platform_compile_base.h:1612 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<8, short unsigned int, 2>* );
	/* ../public/tier0/platform_compile_base.h:1612 */
	short unsigned int* Base(AlignedByteArrayExplicit_t<8, short unsigned int, 2>* );
	/* ../public/tier0/platform_compile_base.h:1612 */
	const short unsigned int* Base(const AlignedByteArrayExplicit_t<8, short unsigned int, 2>* );
private:
	uint8 m_Data[16]; /* 0 16 */
} __attribute__((__aligned__(2)));

// <0002E386> ../../public/tier0/platform_compile_base.h:1612
// member functions: 3
// member variable: 1
// struct size: 8
struct AlignedByteArrayExplicit_t<2, VfxVariableIndexData_t, 2> {
	/* ../../public/tier0/platform_compile_base.h:1612 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<2, VfxVariableIndexData_t, 2>* );
	/* ../../public/tier0/platform_compile_base.h:1612 */
	VfxVariableIndexData_t* Base(AlignedByteArrayExplicit_t<2, VfxVariableIndexData_t, 2>* );
	/* ../../public/tier0/platform_compile_base.h:1612 */
	const VfxVariableIndexData_t* Base(const AlignedByteArrayExplicit_t<2, VfxVariableIndexData_t, 2>* );
private:
	uint8 m_Data[8]; /* 0 8 */
} __attribute__((__aligned__(2)));

// <000A8746> ../public/tier0/platform_compile_base.h:1612
// member functions: 3
// member variable: 1
// struct size: 256
struct AlignedByteArrayExplicit_t<128, CUtlSymbol, 2> {
	/* ../public/tier0/platform_compile_base.h:1612 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<128, CUtlSymbol, 2>* );
	/* ../public/tier0/platform_compile_base.h:1612 */
	CUtlSymbol* Base(AlignedByteArrayExplicit_t<128, CUtlSymbol, 2>* );
	/* ../public/tier0/platform_compile_base.h:1612 */
	const CUtlSymbol* Base(const AlignedByteArrayExplicit_t<128, CUtlSymbol, 2>* );
private:
	uint8 m_Data[256]; /* 0 256 */
} __attribute__((__aligned__(2)));

// <06E24EB4> ../../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<3, unsigned int, 4>::Base()
{
} /* size: 0 */

// <068E49E2> ../public/tier0/platform_compile_base.h:1613
void AlignedByteArrayExplicit_t<32, int, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <068E49B7> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<32, int, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <068E499E> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<32, int, 4>::Base()
{
} /* size: 0 */

// <067D0F9A> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<9, unsigned int, 4>::Base()
{
} /* size: 0 */

// <0614B6B3> ../public/tier0/platform_compile_base.h:1613
void AlignedByteArrayExplicit_t<32, unsigned int, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0614B688> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<32, unsigned int, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0614B66F> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<32, unsigned int, 4>::Base()
{
} /* size: 0 */

// <0610E1E8> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<256, CQuickHullSimplifier::Cluster_t, 4>::Base()
{
} /* size: 0 */

// <06081E91> ../public/tier0/platform_compile_base.h:1613
void AlignedByteArrayExplicit_t<1, int, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <06081E66> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<1, int, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <06081E4D> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<1, int, 4>::Base()
{
} /* size: 0 */

// <06077FFF> ../public/tier0/platform_compile_base.h:1613
void AlignedByteArrayExplicit_t<16, Quaternion, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <06077FD4> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<16, Quaternion, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <06077FBB> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<16, Quaternion, 4>::Base()
{
} /* size: 0 */

// <06076E01> ../public/tier0/platform_compile_base.h:1613
void AlignedByteArrayExplicit_t<16, Vector, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <06076DD6> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<16, Vector, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <06076DBD> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<16, Vector, 4>::Base()
{
} /* size: 0 */

// <06076CEF> ../public/tier0/platform_compile_base.h:1613
void AlignedByteArrayExplicit_t<16, unsigned int, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <06076CC4> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<16, unsigned int, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <06076CAB> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<16, unsigned int, 4>::Base()
{
} /* size: 0 */

// <06076B2C> ../public/tier0/platform_compile_base.h:1613
void AlignedByteArrayExplicit_t<64, int, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <06076B01> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<64, int, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0606FC0E> ../public/tier0/platform_compile_base.h:1613
void AlignedByteArrayExplicit_t<4, TransferVertex_t, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0606FBE3> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<4, TransferVertex_t, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0606FBCA> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<4, TransferVertex_t, 4>::Base()
{
} /* size: 0 */

// <05E548CF> ../public/tier0/platform_compile_base.h:1613
void AlignedByteArrayExplicit_t<8, Vector, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <05E548A4> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<8, Vector, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <05E5488B> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<8, Vector, 4>::Base()
{
} /* size: 0 */

// <05DBD51C> ../public/tier0/platform_compile_base.h:1613
void AlignedByteArrayExplicit_t<256, CQuickHullSimplifier::Cluster_t, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <05DBD4F1> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<256, CQuickHullSimplifier::Cluster_t, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <05CD9DDC> ../public/tier0/platform_compile_base.h:1613
void AlignedByteArrayExplicit_t<128, float, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <05CD9DB1> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<128, float, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <05CD9D98> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<128, float, 4>::Base()
{
} /* size: 0 */

// <05C958E5> ../public/tier0/platform_compile_base.h:1613
void AlignedByteArrayExplicit_t<16, Vector2D, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <05C958BA> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<16, Vector2D, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <05C957AE> ../public/tier0/platform_compile_base.h:1613
void AlignedByteArrayExplicit_t<45, int, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <05C95783> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<45, int, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <05C9576A> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<45, int, 4>::Base()
{
} /* size: 0 */

// <05666D19> ../public/tier0/platform_compile_base.h:1613
void AlignedByteArrayExplicit_t<256, CUtlStringToken, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <05666CEE> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<256, CUtlStringToken, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <05666CD5> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<256, CUtlStringToken, 4>::Base()
{
} /* size: 0 */

// <0554823B> ../public/tier0/platform_compile_base.h:1613
void AlignedByteArrayExplicit_t<8, CUtlStringToken, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <05548210> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<8, CUtlStringToken, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <055481F7> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<8, CUtlStringToken, 4>::Base()
{
} /* size: 0 */

// <053ECF54> ../public/tier0/platform_compile_base.h:1613
void AlignedByteArrayExplicit_t<16, float, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <053ECF29> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<16, float, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <053ECF10> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<16, float, 4>::Base()
{
} /* size: 0 */

// <04E806E4> ../public/tier0/platform_compile_base.h:1613
void AlignedByteArrayExplicit_t<32, float, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <04E806B9> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<32, float, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <04E805EF> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<32, float, 4>::Base()
{
} /* size: 0 */

// <04CAC75F> ../public/tier0/platform_compile_base.h:1613
void AlignedByteArrayExplicit_t<4, RenderInputLayoutField_t, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <04CAC734> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<4, RenderInputLayoutField_t, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <04CAC71B> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<4, RenderInputLayoutField_t, 4>::Base()
{
} /* size: 0 */

// <040ADEB4> ../public/tier0/platform_compile_base.h:1613
void AlignedByteArrayExplicit_t<3, unsigned int, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <040ADE89> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<3, unsigned int, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <03FF9CC1> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<5, CUtlStringToken, 4>::Base()
{
} /* size: 0 */

// <0352A8E6> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<2, int, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0352A8CD> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<2, int, 4>::Base()
{
} /* size: 0 */

// <03467197> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<4, RenderPassSubPassDependency_t, 4>::Base()
{
} /* size: 0 */

// <034606F7> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<4, CUtlStringToken, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0321E22D> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<16, CPVSBits, 4>::Base()
{
} /* size: 0 */

// <0305B72D> ../public/tier0/platform_compile_base.h:1613
void AlignedByteArrayExplicit_t<1, CUtlStringToken, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0305B702> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<1, CUtlStringToken, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0305B6E9> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<1, CUtlStringToken, 4>::Base()
{
} /* size: 0 */

// <02E1DC5A> ../public/tier0/platform_compile_base.h:1613
void AlignedByteArrayExplicit_t<8, int, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <02E1DC2F> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<8, int, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <026B470A> ../public/tier0/platform_compile_base.h:1613
void AlignedByteArrayExplicit_t<1088, float, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <026B46E0> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<1088, float, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0263A077> ../public/tier0/platform_compile_base.h:1613
void AlignedByteArrayExplicit_t<2048, float, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0263A04C> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<2048, float, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0263A033> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<2048, float, 4>::Base()
{
} /* size: 0 */

// <0234E040> ../public/tier0/platform_compile_base.h:1613
void AlignedByteArrayExplicit_t<256, CUtlHashtableEntry<CLoadingResource::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0234E015> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<256, CUtlHashtableEntry<CLoadingResource::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0234DFFC> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<256, CUtlHashtableEntry<CLoadingResource::Base()
{
} /* size: 0 */

// <0126D300> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<9, float, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0126D2E7> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<9, float, 4>::Base()
{
} /* size: 0 */

// <010EEB45> ../public/tier0/platform_compile_base.h:1613
void AlignedByteArrayExplicit_t<8, unsigned int, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <010EEB1A> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<8, unsigned int, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <010EEB01> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<8, unsigned int, 4>::Base()
{
} /* size: 0 */

// <00FFF2FC> ../public/tier0/platform_compile_base.h:1613
void AlignedByteArrayExplicit_t<5, CUtlStringToken, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <00FFF2D1> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<5, CUtlStringToken, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <003C6948> ../public/tier0/platform_compile_base.h:1613
void AlignedByteArrayExplicit_t<1024, unsigned int, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <003C691D> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<1024, unsigned int, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <003C6904> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<1024, unsigned int, 4>::Base()
{
} /* size: 0 */

// <0035C6B0> ../public/tier0/platform_compile_base.h:1613
void AlignedByteArrayExplicit_t<4, int, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0035C685> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<4, int, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0035C66C> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<4, int, 4>::Base()
{
} /* size: 0 */

// <03254768> ../public/tier0/platform_compile_base.h:1613
void AlignedByteArrayExplicit_t<16, int, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0325473E> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<16, int, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <03254725> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<16, int, 4>::Base()
{
} /* size: 0 */

// <0272BD5C> ../public/tier0/platform_compile_base.h:1613
void AlignedByteArrayExplicit_t<256, int, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0272BD32> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<256, int, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0272917F> ../public/tier0/platform_compile_base.h:1613
void AlignedByteArrayExplicit_t<32, CInternalOperation, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <02729155> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<32, CInternalOperation, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <02728D85> ../public/tier0/platform_compile_base.h:1613
void AlignedByteArrayExplicit_t<32, DecodeOperation_t, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <02728D5B> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<32, DecodeOperation_t, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <02728D42> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<32, DecodeOperation_t, 4>::Base()
{
} /* size: 0 */

// <009B7871> ../public/tier0/platform_compile_base.h:1613
void AlignedByteArrayExplicit_t<8, VkDescriptorPoolSize, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <009B7846> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<8, VkDescriptorPoolSize, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <008C058B> ../public/tier0/platform_compile_base.h:1613
void AlignedByteArrayExplicit_t<3, VkPhysicalDeviceType, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <008C0560> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<3, VkPhysicalDeviceType, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <008C0509> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<3, VkPhysicalDeviceType, 4>::Base()
{
} /* size: 0 */

// <00836F35> ../public/tier0/platform_compile_base.h:1613
void AlignedByteArrayExplicit_t<2, RenderImageLayout_t, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <00836F0A> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<2, RenderImageLayout_t, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <007045DE> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<29, unsigned int, 4>::Base()
{
} /* size: 0 */

// <006FF612> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<16, VkVertexInputAttributeDescription, 4>::Base()
{
} /* size: 0 */

// <006FF5F9> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<16, VkVertexInputBindingDescription, 4>::Base()
{
} /* size: 0 */

// <006FF554> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<8, VkPipelineColorBlendAttachmentState, 4>::Base()
{
} /* size: 0 */

// <006FEB5E> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<1, VkDynamicState, 4>::Base()
{
} /* size: 0 */

// <006FDBF6> ../public/tier0/platform_compile_base.h:1613
void AlignedByteArrayExplicit_t<29, unsigned int, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <006FDBCB> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<29, unsigned int, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <006FA4F5> ../public/tier0/platform_compile_base.h:1613
void AlignedByteArrayExplicit_t<16, VkVertexInputAttributeDescription, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <006FA4CA> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<16, VkVertexInputAttributeDescription, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <006FA4AD> ../public/tier0/platform_compile_base.h:1613
void AlignedByteArrayExplicit_t<16, VkVertexInputBindingDescription, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <006FA482> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<16, VkVertexInputBindingDescription, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <006FA465> ../public/tier0/platform_compile_base.h:1613
void AlignedByteArrayExplicit_t<8, VkPipelineColorBlendAttachmentState, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <006FA43A> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<8, VkPipelineColorBlendAttachmentState, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <006FA3A9> ../public/tier0/platform_compile_base.h:1613
void AlignedByteArrayExplicit_t<23, VkDynamicState, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <006FA2B4> ../public/tier0/platform_compile_base.h:1613
void AlignedByteArrayExplicit_t<1, VkDynamicState, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0064CD4A> ../public/tier0/platform_compile_base.h:1613
void AlignedByteArrayExplicit_t<4, PipelineLayoutImmutableSampler_t, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0064CD1F> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<4, PipelineLayoutImmutableSampler_t, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0045B6C2> ../public/tier0/platform_compile_base.h:1613
void AlignedByteArrayExplicit_t<16, VkFormat, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0045B67D> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<16, VkFormat, 4>::Base()
{
} /* size: 0 */

// <00531F98> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<64, CUtl3DAllocator2::Node3D_t, 4>::Base()
{
} /* size: 0 */

// <00531C39> ../public/tier0/platform_compile_base.h:1613
void AlignedByteArrayExplicit_t<64, CUtl3DAllocator2::Node3D_t, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <00531C0F> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<64, CUtl3DAllocator2::Node3D_t, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <00383E40> ../public/tier0/platform_compile_base.h:1613
void AlignedByteArrayExplicit_t<1, CThreadKeyHolder, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <00383E15> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<1, CThreadKeyHolder, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <001CA640> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<64, pollfd, 4>::Base()
{
} /* size: 0 */

// <001CA627> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<64, ThreadMultiWaitExtra_t, 4>::Base()
{
} /* size: 0 */

// <001C9CCC> ../public/tier0/platform_compile_base.h:1613
void AlignedByteArrayExplicit_t<64, pollfd, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <001C9CA1> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<64, pollfd, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <001C9C5F> ../public/tier0/platform_compile_base.h:1613
void AlignedByteArrayExplicit_t<64, ThreadMultiWaitExtra_t, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <001C9C34> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<64, ThreadMultiWaitExtra_t, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <00430A47> ../public/tier0/platform_compile_base.h:1613
void AlignedByteArrayExplicit_t<4, Vector, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <00430A1C> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<4, Vector, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <00430A03> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<4, Vector, 4>::Base()
{
} /* size: 0 */

// <004307E5> ../public/tier0/platform_compile_base.h:1613
void AlignedByteArrayExplicit_t<4, Vector2D, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <004307BA> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<4, Vector2D, 4>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <00154BD1> ../public/tier0/platform_compile_base.h:1613
inline void AlignedByteArrayExplicit_t<3, int, 4>::Base()
{
} /* size: 0 */

// <00057475> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 16
struct AlignedByteArrayExplicit_t<4, CUtlStringToken, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<4, CUtlStringToken, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	CUtlStringToken* Base(AlignedByteArrayExplicit_t<4, CUtlStringToken, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const CUtlStringToken* Base(const AlignedByteArrayExplicit_t<4, CUtlStringToken, 4>* );
private:
	uint8 m_Data[16]; /* 0 16 */
} __attribute__((__aligned__(4)));

// <0009BE90> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 16
struct AlignedByteArrayExplicit_t<4, int, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<4, int, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	int* Base(AlignedByteArrayExplicit_t<4, int, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const int* Base(const AlignedByteArrayExplicit_t<4, int, 4>* );
private:
	uint8 m_Data[16]; /* 0 16 */
} __attribute__((__aligned__(4)));

// <000FF265> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 20
struct AlignedByteArrayExplicit_t<5, CUtlStringToken, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<5, CUtlStringToken, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	CUtlStringToken* Base(AlignedByteArrayExplicit_t<5, CUtlStringToken, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const CUtlStringToken* Base(const AlignedByteArrayExplicit_t<5, CUtlStringToken, 4>* );
private:
	uint8 m_Data[20]; /* 0 20 */
} __attribute__((__aligned__(4)));

// <00104C3B> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 12
struct AlignedByteArrayExplicit_t<3, unsigned int, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<3, unsigned int, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	unsigned int* Base(AlignedByteArrayExplicit_t<3, unsigned int, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const unsigned int* Base(const AlignedByteArrayExplicit_t<3, unsigned int, 4>* );
private:
	uint8 m_Data[12]; /* 0 12 */
} __attribute__((__aligned__(4)));

// <0010D43D> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 36
struct AlignedByteArrayExplicit_t<9, unsigned int, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<9, unsigned int, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	unsigned int* Base(AlignedByteArrayExplicit_t<9, unsigned int, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const unsigned int* Base(const AlignedByteArrayExplicit_t<9, unsigned int, 4>* );
private:
	uint8 m_Data[36]; /* 0 36 */
} __attribute__((__aligned__(4)));

// <003BF542> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 4,096
struct AlignedByteArrayExplicit_t<1024, unsigned int, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<1024, unsigned int, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	unsigned int* Base(AlignedByteArrayExplicit_t<1024, unsigned int, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const unsigned int* Base(const AlignedByteArrayExplicit_t<1024, unsigned int, 4>* );
private:
	uint8 m_Data[4096]; /* 0 4096 */
} __attribute__((__aligned__(4)));

// <010E4775> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 32
struct AlignedByteArrayExplicit_t<8, unsigned int, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<8, unsigned int, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	unsigned int* Base(AlignedByteArrayExplicit_t<8, unsigned int, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const unsigned int* Base(const AlignedByteArrayExplicit_t<8, unsigned int, 4>* );
private:
	uint8 m_Data[32]; /* 0 32 */
} __attribute__((__aligned__(4)));

// <010E57A0> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 128
struct AlignedByteArrayExplicit_t<32, unsigned int, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<32, unsigned int, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	unsigned int* Base(AlignedByteArrayExplicit_t<32, unsigned int, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const unsigned int* Base(const AlignedByteArrayExplicit_t<32, unsigned int, 4>* );
private:
	uint8 m_Data[128]; /* 0 128 */
} __attribute__((__aligned__(4)));

// <011E9D2F> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 192
struct AlignedByteArrayExplicit_t<16, Vector, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<16, Vector, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	Vector* Base(AlignedByteArrayExplicit_t<16, Vector, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const Vector* Base(const AlignedByteArrayExplicit_t<16, Vector, 4>* );
private:
	uint8 m_Data[192]; /* 0 192 */
} __attribute__((__aligned__(4)));

// <011EADF7> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 128
struct AlignedByteArrayExplicit_t<16, Vector2D, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<16, Vector2D, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	Vector2D* Base(AlignedByteArrayExplicit_t<16, Vector2D, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const Vector2D* Base(const AlignedByteArrayExplicit_t<16, Vector2D, 4>* );
private:
	uint8 m_Data[128]; /* 0 128 */
} __attribute__((__aligned__(4)));

// <011EBE17> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 180
struct AlignedByteArrayExplicit_t<45, int, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<45, int, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	int* Base(AlignedByteArrayExplicit_t<45, int, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const int* Base(const AlignedByteArrayExplicit_t<45, int, 4>* );
private:
	uint8 m_Data[180]; /* 0 180 */
} __attribute__((__aligned__(4)));

// <0120FD51> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 36
struct AlignedByteArrayExplicit_t<9, float, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<9, float, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	float* Base(AlignedByteArrayExplicit_t<9, float, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const float* Base(const AlignedByteArrayExplicit_t<9, float, 4>* );
private:
	uint8 m_Data[36]; /* 0 36 */
} __attribute__((__aligned__(4)));

// <012165F9> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 4
struct AlignedByteArrayExplicit_t<1, CUtlStringToken, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<1, CUtlStringToken, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	CUtlStringToken* Base(AlignedByteArrayExplicit_t<1, CUtlStringToken, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const CUtlStringToken* Base(const AlignedByteArrayExplicit_t<1, CUtlStringToken, 4>* );
private:
	uint8 m_Data[4]; /* 0 4 */
} __attribute__((__aligned__(4)));

// <0224F0C5> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 3,072
struct AlignedByteArrayExplicit_t<256, CUtlHashtableEntry<CLoadingResource*, empty_t>, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<256, CUtlHashtableEntry<CLoadingResource*, empty_t>, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	CUtlHashtableEntry<CLoadingResource*, empty_t>* Base(AlignedByteArrayExplicit_t<256, CUtlHashtableEntry<CLoadingResource*, empty_t>, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const CUtlHashtableEntry<CLoadingResource*, empty_t>* Base(const AlignedByteArrayExplicit_t<256, CUtlHashtableEntry<CLoadingResource*, empty_t>, 4>* );
private:
	uint8 m_Data[3072]; /* 0 3072 */
} __attribute__((__aligned__(4)));

// <02637D12> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 8,192
struct AlignedByteArrayExplicit_t<2048, float, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<2048, float, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	float* Base(AlignedByteArrayExplicit_t<2048, float, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const float* Base(const AlignedByteArrayExplicit_t<2048, float, 4>* );
private:
	uint8 m_Data[8192]; /* 0 8192 */
} __attribute__((__aligned__(4)));

// <0278650B> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 8
struct AlignedByteArrayExplicit_t<2, int, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<2, int, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	int* Base(AlignedByteArrayExplicit_t<2, int, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const int* Base(const AlignedByteArrayExplicit_t<2, int, 4>* );
private:
	uint8 m_Data[8]; /* 0 8 */
} __attribute__((__aligned__(4)));

// <02DF4732> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 128
struct AlignedByteArrayExplicit_t<32, int, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<32, int, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	int* Base(AlignedByteArrayExplicit_t<32, int, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const int* Base(const AlignedByteArrayExplicit_t<32, int, 4>* );
private:
	uint8 m_Data[128]; /* 0 128 */
} __attribute__((__aligned__(4)));

// <02DF9907> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 32
struct AlignedByteArrayExplicit_t<8, int, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<8, int, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	int* Base(AlignedByteArrayExplicit_t<8, int, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const int* Base(const AlignedByteArrayExplicit_t<8, int, 4>* );
private:
	uint8 m_Data[32]; /* 0 32 */
} __attribute__((__aligned__(4)));

// <03218B9B> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 8,256
struct AlignedByteArrayExplicit_t<16, CPVSBits, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<16, CPVSBits, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	CPVSBits* Base(AlignedByteArrayExplicit_t<16, CPVSBits, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const CPVSBits* Base(const AlignedByteArrayExplicit_t<16, CPVSBits, 4>* );
private:
	uint8 m_Data[8256]; /* 0 8256 */
} __attribute__((__aligned__(4)));

// <0345BA27> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 48
struct AlignedByteArrayExplicit_t<4, RenderPassSubPassDependency_t, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<4, RenderPassSubPassDependency_t, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	RenderPassSubPassDependency_t* Base(AlignedByteArrayExplicit_t<4, RenderPassSubPassDependency_t, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const RenderPassSubPassDependency_t* Base(const AlignedByteArrayExplicit_t<4, RenderPassSubPassDependency_t, 4>* );
private:
	uint8 m_Data[48]; /* 0 48 */
} __attribute__((__aligned__(4)));

// <03ADCE7B> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 32
struct AlignedByteArrayExplicit_t<8, RenderImageLayout_t, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<8, RenderImageLayout_t, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	RenderImageLayout_t* Base(AlignedByteArrayExplicit_t<8, RenderImageLayout_t, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const RenderImageLayout_t* Base(const AlignedByteArrayExplicit_t<8, RenderImageLayout_t, 4>* );
private:
	uint8 m_Data[32]; /* 0 32 */
} __attribute__((__aligned__(4)));

// <04189476> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 224
struct AlignedByteArrayExplicit_t<4, RenderInputLayoutField_t, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<4, RenderInputLayoutField_t, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	RenderInputLayoutField_t* Base(AlignedByteArrayExplicit_t<4, RenderInputLayoutField_t, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const RenderInputLayoutField_t* Base(const AlignedByteArrayExplicit_t<4, RenderInputLayoutField_t, 4>* );
private:
	uint8 m_Data[224]; /* 0 224 */
} __attribute__((__aligned__(4)));

// <046B7CE9> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 512
struct AlignedByteArrayExplicit_t<128, float, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<128, float, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	float* Base(AlignedByteArrayExplicit_t<128, float, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const float* Base(const AlignedByteArrayExplicit_t<128, float, 4>* );
private:
	uint8 m_Data[512]; /* 0 512 */
} __attribute__((__aligned__(4)));

// <04E7C567> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 128
struct AlignedByteArrayExplicit_t<32, float, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<32, float, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	float* Base(AlignedByteArrayExplicit_t<32, float, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const float* Base(const AlignedByteArrayExplicit_t<32, float, 4>* );
private:
	uint8 m_Data[128]; /* 0 128 */
} __attribute__((__aligned__(4)));

// <053E4B5D> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 64
struct AlignedByteArrayExplicit_t<16, float, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<16, float, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	float* Base(AlignedByteArrayExplicit_t<16, float, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const float* Base(const AlignedByteArrayExplicit_t<16, float, 4>* );
private:
	uint8 m_Data[64]; /* 0 64 */
} __attribute__((__aligned__(4)));

// <0553651C> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 32
struct AlignedByteArrayExplicit_t<8, CUtlStringToken, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<8, CUtlStringToken, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	CUtlStringToken* Base(AlignedByteArrayExplicit_t<8, CUtlStringToken, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const CUtlStringToken* Base(const AlignedByteArrayExplicit_t<8, CUtlStringToken, 4>* );
private:
	uint8 m_Data[32]; /* 0 32 */
} __attribute__((__aligned__(4)));

// <0561B61B> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 1,024
struct AlignedByteArrayExplicit_t<256, CUtlStringToken, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<256, CUtlStringToken, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	CUtlStringToken* Base(AlignedByteArrayExplicit_t<256, CUtlStringToken, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const CUtlStringToken* Base(const AlignedByteArrayExplicit_t<256, CUtlStringToken, 4>* );
private:
	uint8 m_Data[1024]; /* 0 1024 */
} __attribute__((__aligned__(4)));

// <058DD917> ../../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 16
struct AlignedByteArrayExplicit_t<4, CUtlStringToken, 4> {
	/* ../../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<4, CUtlStringToken, 4>* );
	/* ../../public/tier0/platform_compile_base.h:1613 */
	CUtlStringToken* Base(AlignedByteArrayExplicit_t<4, CUtlStringToken, 4>* );
	/* ../../public/tier0/platform_compile_base.h:1613 */
	const CUtlStringToken* Base(const AlignedByteArrayExplicit_t<4, CUtlStringToken, 4>* );
private:
	uint8 m_Data[16]; /* 0 16 */
} __attribute__((__aligned__(4)));

// <058E32AB> ../../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 20
struct AlignedByteArrayExplicit_t<5, CUtlStringToken, 4> {
	/* ../../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<5, CUtlStringToken, 4>* );
	/* ../../public/tier0/platform_compile_base.h:1613 */
	CUtlStringToken* Base(AlignedByteArrayExplicit_t<5, CUtlStringToken, 4>* );
	/* ../../public/tier0/platform_compile_base.h:1613 */
	const CUtlStringToken* Base(const AlignedByteArrayExplicit_t<5, CUtlStringToken, 4>* );
private:
	uint8 m_Data[20]; /* 0 20 */
} __attribute__((__aligned__(4)));

// <058E8C77> ../../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 12
struct AlignedByteArrayExplicit_t<3, unsigned int, 4> {
	/* ../../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<3, unsigned int, 4>* );
	/* ../../public/tier0/platform_compile_base.h:1613 */
	unsigned int* Base(AlignedByteArrayExplicit_t<3, unsigned int, 4>* );
	/* ../../public/tier0/platform_compile_base.h:1613 */
	const unsigned int* Base(const AlignedByteArrayExplicit_t<3, unsigned int, 4>* );
private:
	uint8 m_Data[12]; /* 0 12 */
} __attribute__((__aligned__(4)));

// <05DA1A09> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 4,096
struct AlignedByteArrayExplicit_t<256, CQuickHullSimplifier::Cluster_t, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<256, CQuickHullSimplifier::Cluster_t, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	Cluster_t* Base(AlignedByteArrayExplicit_t<256, CQuickHullSimplifier::Cluster_t, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const Cluster_t* Base(const AlignedByteArrayExplicit_t<256, CQuickHullSimplifier::Cluster_t, 4>* );
private:
	uint8 m_Data[4096]; /* 0 4096 */
} __attribute__((__aligned__(4)));

// <05E3C8EB> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 96
struct AlignedByteArrayExplicit_t<8, Vector, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<8, Vector, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	Vector* Base(AlignedByteArrayExplicit_t<8, Vector, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const Vector* Base(const AlignedByteArrayExplicit_t<8, Vector, 4>* );
private:
	uint8 m_Data[96]; /* 0 96 */
} __attribute__((__aligned__(4)));

// <0602DAD1> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 256
struct AlignedByteArrayExplicit_t<16, Quaternion, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<16, Quaternion, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	Quaternion* Base(AlignedByteArrayExplicit_t<16, Quaternion, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const Quaternion* Base(const AlignedByteArrayExplicit_t<16, Quaternion, 4>* );
private:
	uint8 m_Data[256]; /* 0 256 */
} __attribute__((__aligned__(4)));

// <0604CB26> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 64
struct AlignedByteArrayExplicit_t<16, unsigned int, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<16, unsigned int, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	unsigned int* Base(AlignedByteArrayExplicit_t<16, unsigned int, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const unsigned int* Base(const AlignedByteArrayExplicit_t<16, unsigned int, 4>* );
private:
	uint8 m_Data[64]; /* 0 64 */
} __attribute__((__aligned__(4)));

// <0604DB51> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 256
struct AlignedByteArrayExplicit_t<64, int, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<64, int, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	int* Base(AlignedByteArrayExplicit_t<64, int, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const int* Base(const AlignedByteArrayExplicit_t<64, int, 4>* );
private:
	uint8 m_Data[256]; /* 0 256 */
} __attribute__((__aligned__(4)));

// <06062DE0> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 576
struct AlignedByteArrayExplicit_t<4, TransferVertex_t, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<4, TransferVertex_t, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	TransferVertex_t* Base(AlignedByteArrayExplicit_t<4, TransferVertex_t, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const TransferVertex_t* Base(const AlignedByteArrayExplicit_t<4, TransferVertex_t, 4>* );
private:
	uint8 m_Data[576]; /* 0 576 */
} __attribute__((__aligned__(4)));

// <06063E2C> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 4
struct AlignedByteArrayExplicit_t<1, int, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<1, int, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	int* Base(AlignedByteArrayExplicit_t<1, int, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const int* Base(const AlignedByteArrayExplicit_t<1, int, 4>* );
private:
	uint8 m_Data[4]; /* 0 4 */
} __attribute__((__aligned__(4)));

// <06D65D37> ../../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 4,096
struct AlignedByteArrayExplicit_t<256, audio_mix_command_t, 4> {
	/* ../../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<256, audio_mix_command_t, 4>* );
	/* ../../public/tier0/platform_compile_base.h:1613 */
	audio_mix_command_t* Base(AlignedByteArrayExplicit_t<256, audio_mix_command_t, 4>* );
	/* ../../public/tier0/platform_compile_base.h:1613 */
	const audio_mix_command_t* Base(const AlignedByteArrayExplicit_t<256, audio_mix_command_t, 4>* );
private:
	uint8 m_Data[4096]; /* 0 4096 */
} __attribute__((__aligned__(4)));

// <06D68CAB> ../../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 640
struct AlignedByteArrayExplicit_t<32, CAudioMeterInstance, 4> {
	/* ../../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<32, CAudioMeterInstance, 4>* );
	/* ../../public/tier0/platform_compile_base.h:1613 */
	CAudioMeterInstance* Base(AlignedByteArrayExplicit_t<32, CAudioMeterInstance, 4>* );
	/* ../../public/tier0/platform_compile_base.h:1613 */
	const CAudioMeterInstance* Base(const AlignedByteArrayExplicit_t<32, CAudioMeterInstance, 4>* );
private:
	uint8 m_Data[640]; /* 0 640 */
} __attribute__((__aligned__(4)));

// <00BF71A8> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 64
struct AlignedByteArrayExplicit_t<16, int, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<16, int, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	int* Base(AlignedByteArrayExplicit_t<16, int, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const int* Base(const AlignedByteArrayExplicit_t<16, int, 4>* );
private:
	uint8 m_Data[64]; /* 0 64 */
} __attribute__((__aligned__(4)));

// <01707030> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 1,024
struct AlignedByteArrayExplicit_t<256, int, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<256, int, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	int* Base(AlignedByteArrayExplicit_t<256, int, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const int* Base(const AlignedByteArrayExplicit_t<256, int, 4>* );
private:
	uint8 m_Data[1024]; /* 0 1024 */
} __attribute__((__aligned__(4)));

// <0271FB30> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 2,048
struct AlignedByteArrayExplicit_t<32, CInternalOperation, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<32, CInternalOperation, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	CInternalOperation* Base(AlignedByteArrayExplicit_t<32, CInternalOperation, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const CInternalOperation* Base(const AlignedByteArrayExplicit_t<32, CInternalOperation, 4>* );
private:
	uint8 m_Data[2048]; /* 0 2048 */
} __attribute__((__aligned__(4)));

// <02723CE9> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 384
struct AlignedByteArrayExplicit_t<32, DecodeOperation_t, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<32, DecodeOperation_t, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	DecodeOperation_t* Base(AlignedByteArrayExplicit_t<32, DecodeOperation_t, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const DecodeOperation_t* Base(const AlignedByteArrayExplicit_t<32, DecodeOperation_t, 4>* );
private:
	uint8 m_Data[384]; /* 0 384 */
} __attribute__((__aligned__(4)));

// <0041D088> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 8
struct AlignedByteArrayExplicit_t<2, RenderImageLayout_t, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<2, RenderImageLayout_t, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	RenderImageLayout_t* Base(AlignedByteArrayExplicit_t<2, RenderImageLayout_t, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const RenderImageLayout_t* Base(const AlignedByteArrayExplicit_t<2, RenderImageLayout_t, 4>* );
private:
	uint8 m_Data[8]; /* 0 8 */
} __attribute__((__aligned__(4)));

// <0045A017> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 64
struct AlignedByteArrayExplicit_t<16, VkFormat, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<16, VkFormat, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	VkFormat* Base(AlignedByteArrayExplicit_t<16, VkFormat, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const VkFormat* Base(const AlignedByteArrayExplicit_t<16, VkFormat, 4>* );
private:
	uint8 m_Data[64]; /* 0 64 */
} __attribute__((__aligned__(4)));

// <0062F37F> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 96
struct AlignedByteArrayExplicit_t<4, PipelineLayoutImmutableSampler_t, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<4, PipelineLayoutImmutableSampler_t, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	PipelineLayoutImmutableSampler_t* Base(AlignedByteArrayExplicit_t<4, PipelineLayoutImmutableSampler_t, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const PipelineLayoutImmutableSampler_t* Base(const AlignedByteArrayExplicit_t<4, PipelineLayoutImmutableSampler_t, 4>* );
private:
	uint8 m_Data[96]; /* 0 96 */
} __attribute__((__aligned__(4)));

// <006DD7A7> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 116
struct AlignedByteArrayExplicit_t<29, unsigned int, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<29, unsigned int, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	unsigned int* Base(AlignedByteArrayExplicit_t<29, unsigned int, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const unsigned int* Base(const AlignedByteArrayExplicit_t<29, unsigned int, 4>* );
private:
	uint8 m_Data[116]; /* 0 116 */
} __attribute__((__aligned__(4)));

// <006E0DD1> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 256
struct AlignedByteArrayExplicit_t<16, VkVertexInputAttributeDescription, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<16, VkVertexInputAttributeDescription, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	VkVertexInputAttributeDescription* Base(AlignedByteArrayExplicit_t<16, VkVertexInputAttributeDescription, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const VkVertexInputAttributeDescription* Base(const AlignedByteArrayExplicit_t<16, VkVertexInputAttributeDescription, 4>* );
private:
	uint8 m_Data[256]; /* 0 256 */
} __attribute__((__aligned__(4)));

// <006E2252> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 192
struct AlignedByteArrayExplicit_t<16, VkVertexInputBindingDescription, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<16, VkVertexInputBindingDescription, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	VkVertexInputBindingDescription* Base(AlignedByteArrayExplicit_t<16, VkVertexInputBindingDescription, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const VkVertexInputBindingDescription* Base(const AlignedByteArrayExplicit_t<16, VkVertexInputBindingDescription, 4>* );
private:
	uint8 m_Data[192]; /* 0 192 */
} __attribute__((__aligned__(4)));

// <006E36E0> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 256
struct AlignedByteArrayExplicit_t<8, VkPipelineColorBlendAttachmentState, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<8, VkPipelineColorBlendAttachmentState, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	VkPipelineColorBlendAttachmentState* Base(AlignedByteArrayExplicit_t<8, VkPipelineColorBlendAttachmentState, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const VkPipelineColorBlendAttachmentState* Base(const AlignedByteArrayExplicit_t<8, VkPipelineColorBlendAttachmentState, 4>* );
private:
	uint8 m_Data[256]; /* 0 256 */
} __attribute__((__aligned__(4)));

// <006E4F2C> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 92
struct AlignedByteArrayExplicit_t<23, VkDynamicState, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<23, VkDynamicState, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	VkDynamicState* Base(AlignedByteArrayExplicit_t<23, VkDynamicState, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const VkDynamicState* Base(const AlignedByteArrayExplicit_t<23, VkDynamicState, 4>* );
private:
	uint8 m_Data[92]; /* 0 92 */
} __attribute__((__aligned__(4)));

// <006E758C> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 4
struct AlignedByteArrayExplicit_t<1, VkDynamicState, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<1, VkDynamicState, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	VkDynamicState* Base(AlignedByteArrayExplicit_t<1, VkDynamicState, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const VkDynamicState* Base(const AlignedByteArrayExplicit_t<1, VkDynamicState, 4>* );
private:
	uint8 m_Data[4]; /* 0 4 */
} __attribute__((__aligned__(4)));

// <008BD3D6> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 12
struct AlignedByteArrayExplicit_t<3, VkPhysicalDeviceType, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<3, VkPhysicalDeviceType, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	VkPhysicalDeviceType* Base(AlignedByteArrayExplicit_t<3, VkPhysicalDeviceType, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const VkPhysicalDeviceType* Base(const AlignedByteArrayExplicit_t<3, VkPhysicalDeviceType, 4>* );
private:
	uint8 m_Data[12]; /* 0 12 */
} __attribute__((__aligned__(4)));

// <0099B7C6> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 64
struct AlignedByteArrayExplicit_t<8, VkDescriptorPoolSize, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<8, VkDescriptorPoolSize, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	VkDescriptorPoolSize* Base(AlignedByteArrayExplicit_t<8, VkDescriptorPoolSize, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const VkDescriptorPoolSize* Base(const AlignedByteArrayExplicit_t<8, VkDescriptorPoolSize, 4>* );
private:
	uint8 m_Data[64]; /* 0 64 */
} __attribute__((__aligned__(4)));

// <001BEA0E> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 512
struct AlignedByteArrayExplicit_t<64, pollfd, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<64, pollfd, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	pollfd* Base(AlignedByteArrayExplicit_t<64, pollfd, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const pollfd* Base(const AlignedByteArrayExplicit_t<64, pollfd, 4>* );
private:
	uint8 m_Data[512]; /* 0 512 */
} __attribute__((__aligned__(4)));

// <001BFEA1> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 256
struct AlignedByteArrayExplicit_t<64, ThreadMultiWaitExtra_t, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<64, ThreadMultiWaitExtra_t, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	ThreadMultiWaitExtra_t* Base(AlignedByteArrayExplicit_t<64, ThreadMultiWaitExtra_t, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const ThreadMultiWaitExtra_t* Base(const AlignedByteArrayExplicit_t<64, ThreadMultiWaitExtra_t, 4>* );
private:
	uint8 m_Data[256]; /* 0 256 */
} __attribute__((__aligned__(4)));

// <0037F3F7> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 8
struct AlignedByteArrayExplicit_t<1, CThreadKeyHolder, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<1, CThreadKeyHolder, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	CThreadKeyHolder* Base(AlignedByteArrayExplicit_t<1, CThreadKeyHolder, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const CThreadKeyHolder* Base(const AlignedByteArrayExplicit_t<1, CThreadKeyHolder, 4>* );
private:
	uint8 m_Data[8]; /* 0 8 */
} __attribute__((__aligned__(4)));

// <0052ED63> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 2,816
struct AlignedByteArrayExplicit_t<64, CUtl3DAllocator2::Node3D_t, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<64, CUtl3DAllocator2::Node3D_t, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	Node3D_t* Base(AlignedByteArrayExplicit_t<64, CUtl3DAllocator2::Node3D_t, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const Node3D_t* Base(const AlignedByteArrayExplicit_t<64, CUtl3DAllocator2::Node3D_t, 4>* );
private:
	uint8 m_Data[2816]; /* 0 2816 */
} __attribute__((__aligned__(4)));

// <0007C253> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 12
struct AlignedByteArrayExplicit_t<3, int, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<3, int, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	int* Base(AlignedByteArrayExplicit_t<3, int, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const int* Base(const AlignedByteArrayExplicit_t<3, int, 4>* );
private:
	uint8 m_Data[12]; /* 0 12 */
} __attribute__((__aligned__(4)));

// <00421E48> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 48
struct AlignedByteArrayExplicit_t<4, Vector, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<4, Vector, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	Vector* Base(AlignedByteArrayExplicit_t<4, Vector, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const Vector* Base(const AlignedByteArrayExplicit_t<4, Vector, 4>* );
private:
	uint8 m_Data[48]; /* 0 48 */
} __attribute__((__aligned__(4)));

// <00424769> ../public/tier0/platform_compile_base.h:1613
// member functions: 3
// member variable: 1
// struct size: 32
struct AlignedByteArrayExplicit_t<4, Vector2D, 4> {
	/* ../public/tier0/platform_compile_base.h:1613 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<4, Vector2D, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	Vector2D* Base(AlignedByteArrayExplicit_t<4, Vector2D, 4>* );
	/* ../public/tier0/platform_compile_base.h:1613 */
	const Vector2D* Base(const AlignedByteArrayExplicit_t<4, Vector2D, 4>* );
private:
	uint8 m_Data[32]; /* 0 32 */
} __attribute__((__aligned__(4)));

// <06F1E98B> ../../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<8, CFeAgglomerator::CCluster::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <06F1E960> ../../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<8, CFeAgglomerator::CCluster::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <06F1E947> ../../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<8, CFeAgglomerator::CCluster::Base()
{
} /* size: 0 */

// <06E925F6> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<8, CUtlTokenReference, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <06E925CB> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<8, CUtlTokenReference, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <06E925B2> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<8, CUtlTokenReference, 8>::Base()
{
} /* size: 0 */

// <062EB363> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<8, RayTracingSingleResult_t, 8>::Base()
{
} /* size: 0 */

// <062869EF> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<8, RayTracingSingleResult_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <062869C4> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<8, RayTracingSingleResult_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0610E257> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<256, CQuickHullSimplifier::Face_t, 8>::Base()
{
} /* size: 0 */

// <060728EC> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t(const AlignedByteArrayExplicit_t<32, CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, this)
{
	{
	}
} /* size: 0 */

// <060728C1> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t(const AlignedByteArrayExplicit_t<32, CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, this)
{
	{
	}
} /* size: 0 */

// <060728A8> ../public/tier0/platform_compile_base.h:1614
inline void Base(const AlignedByteArrayExplicit_t<32, CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, this)
{
} /* size: 0 */

// <05F63DAC> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, 8>::Base()
{
} /* size: 0 */

// <05F63A51> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, 8>::Base()
{
} /* size: 0 */

// <05F6288A> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, 8>::Base()
{
} /* size: 0 */

// <05F60C7A> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <05F60C4F> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <05F607B0> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <05F60785> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <05F60629> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t(const AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, this)
{
	{
	}
} /* size: 0 */

// <05F605FE> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t(const AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, this)
{
	{
	}
} /* size: 0 */

// <05F600E2> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <05F600B7> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <05ED9519> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t(const AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, Hul this)
{
	{
	}
} /* size: 0 */

// <05ED94EE> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t(const AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, Hul this)
{
	{
	}
} /* size: 0 */

// <05ED94D5> ../public/tier0/platform_compile_base.h:1614
inline void Base(const AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, Hul this)
{
} /* size: 0 */

// <05E54A51> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t(const AlignedByteArrayExplicit_t<12, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t this)
{
	{
	}
} /* size: 0 */

// <05E54A26> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t(const AlignedByteArrayExplicit_t<12, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t this)
{
	{
	}
} /* size: 0 */

// <05E54A0D> ../public/tier0/platform_compile_base.h:1614
inline void Base(const AlignedByteArrayExplicit_t<12, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t this)
{
} /* size: 0 */

// <05E546AF> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t(const AlignedByteArrayExplicit_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t> this)
{
	{
	}
} /* size: 0 */

// <05E54684> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t(const AlignedByteArrayExplicit_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t> this)
{
	{
	}
} /* size: 0 */

// <05E5466B> ../public/tier0/platform_compile_base.h:1614
inline void Base(const AlignedByteArrayExplicit_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t> this)
{
} /* size: 0 */

// <05E51D9C> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t(const AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t this)
{
	{
	}
} /* size: 0 */

// <05E51D71> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t(const AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t this)
{
	{
	}
} /* size: 0 */

// <05E51D58> ../public/tier0/platform_compile_base.h:1614
inline void Base(const AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t this)
{
} /* size: 0 */

// <05DC7134> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<8, const qhVertex::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <05DC7109> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<8, const qhVertex::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <05DC70F0> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<8, const qhVertex::Base()
{
} /* size: 0 */

// <05DC6FB2> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t(const AlignedByteArrayExplicit_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentH this)
{
	{
	}
} /* size: 0 */

// <05DC6F87> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t(const AlignedByteArrayExplicit_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentH this)
{
	{
	}
} /* size: 0 */

// <05DC6F6E> ../public/tier0/platform_compile_base.h:1614
inline void Base(const AlignedByteArrayExplicit_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentH this)
{
} /* size: 0 */

// <05DBD685> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<256, CQuickHullSimplifier::Face_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <05DBD65A> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<256, CQuickHullSimplifier::Face_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <05DB5819> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t(const AlignedByteArrayExplicit_t<32, CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentHa this)
{
	{
	}
} /* size: 0 */

// <05DB57EE> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t(const AlignedByteArrayExplicit_t<32, CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentHa this)
{
	{
	}
} /* size: 0 */

// <05DB57D5> ../public/tier0/platform_compile_base.h:1614
inline void Base(const AlignedByteArrayExplicit_t<32, CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentHa this)
{
} /* size: 0 */

// <05BACDB0> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<64, float const::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <05BACD85> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<64, float const::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <05BACD6C> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<64, float const::Base()
{
} /* size: 0 */

// <0579C87B> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<4, CKeyValues3Iterator::StackEntry_t, 8>::Base()
{
} /* size: 0 */

// <0572D17C> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<8, const CKV3FormatManager::Conversion_t::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0572D151> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<8, const CKV3FormatManager::Conversion_t::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0572D138> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<8, const CKV3FormatManager::Conversion_t::Base()
{
} /* size: 0 */

// <056BD3A4> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<8, CKV3MemberName, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <056BD379> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<8, CKV3MemberName, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <056BD360> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<8, CKV3MemberName, 8>::Base()
{
} /* size: 0 */

// <056BCFE5> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<8, CLoadKV3FromKV1Text::CTranslationPath::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <056BCFBA> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<8, CLoadKV3FromKV1Text::CTranslationPath::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <056BCFA1> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<8, CLoadKV3FromKV1Text::CTranslationPath::Base()
{
} /* size: 0 */

// <05666BBB> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<256, char const::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <05666B90> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<256, char const::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <05666B77> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<256, char const::Base()
{
} /* size: 0 */

// <05666A85> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<8, std::pair<unsigned char::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <05666A5A> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<8, std::pair<unsigned char::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <05666A41> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<8, std::pair<unsigned char::Base()
{
} /* size: 0 */

// <05548F62> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<4, KeyValues3::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <05548F37> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<4, KeyValues3::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <05548F1E> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<4, KeyValues3::Base()
{
} /* size: 0 */

// <05548E2B> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<8, CKeyValues3Cluster::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <05548E00> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<8, CKeyValues3Cluster::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <05548DE7> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<8, CKeyValues3Cluster::Base()
{
} /* size: 0 */

// <05548CB3> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<4, CKeyValues3ArrayCluster::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <05548C88> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<4, CKeyValues3ArrayCluster::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <05548C6F> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<4, CKeyValues3ArrayCluster::Base()
{
} /* size: 0 */

// <05548B22> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<4, CKeyValues3TableCluster::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <05548AF7> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<4, CKeyValues3TableCluster::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <05548ADE> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<4, CKeyValues3TableCluster::Base()
{
} /* size: 0 */

// <055487A8> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<4, CKeyValues3Iterator::StackEntry_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0554877D> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<4, CKeyValues3Iterator::StackEntry_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <05548178> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<8, KeyValues3::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0554814D> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<8, KeyValues3::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <05548134> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<8, KeyValues3::Base()
{
} /* size: 0 */

// <055480A3> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<8, char const::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <05548078> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<8, char const::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0554805F> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<8, char const::Base()
{
} /* size: 0 */

// <04D201D1> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<4, CRenderBufferBinding, 8>::Base()
{
} /* size: 0 */

// <04CB4403> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<1, CSceneObjectData, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <04CB43D8> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<1, CSceneObjectData, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <04CB43BF> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<1, CSceneObjectData, 8>::Base()
{
} /* size: 0 */

// <04CB22B4> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<4, CRenderBufferBinding, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0496F187> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<8, CSchemaInheritanceIterator::ClassToTraverse_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0496F15D> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<8, CSchemaInheritanceIterator::ClassToTraverse_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0496F144> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<8, CSchemaInheritanceIterator::ClassToTraverse_t, 8>::Base()
{
} /* size: 0 */

// <03FF9CDA> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<5, CWeakHandle<InfoForResourceTypeCTextureBase>, 8>::Base()
{
} /* size: 0 */

// <03B88E8E> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<20, CMeshDrawPrimitive_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <03B88E63> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<20, CMeshDrawPrimitive_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <03B88E4A> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<20, CMeshDrawPrimitive_t, 8>::Base()
{
} /* size: 0 */

// <03AE331F> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<8, CWeakHandle<InfoForResourceTypeCTextureBase>, 8>::Base()
{
} /* size: 0 */

// <036A5649> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<32, RenderDescriptorDesc_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <036A561E> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<32, RenderDescriptorDesc_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <036A5605> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<32, RenderDescriptorDesc_t, 8>::Base()
{
} /* size: 0 */

// <0353022D> ../public/tier0/platform_compile_base.h:1614
inline void Base(const AlignedByteArrayExplicit_t<1, CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, this)
{
} /* size: 0 */

// <0352F23B> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<64, CSceneObject::Base()
{
} /* size: 0 */

// <0352F1A4> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<1, ChildSceneObjectReference_t, 8>::Base()
{
} /* size: 0 */

// <0352B45E> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t(const AlignedByteArrayExplicit_t<1, CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, this)
{
	{
	}
} /* size: 0 */

// <0352B433> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t(const AlignedByteArrayExplicit_t<1, CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, this)
{
	{
	}
} /* size: 0 */

// <0352B326> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<1, ChildSceneObjectReference_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0352B2FB> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<1, ChildSceneObjectReference_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0352AA70> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<2, CWeakHandle<InfoForResourceTypeIMaterial2>, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0352AA45> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<2, CWeakHandle<InfoForResourceTypeIMaterial2>, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0352AA2C> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<2, CWeakHandle<InfoForResourceTypeIMaterial2>, 8>::Base()
{
} /* size: 0 */

// <0352A78B> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<64, CSceneObject::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0352A760> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<64, CSceneObject::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <034671FB> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<8, RenderPassAttachmentDesc_t, 8>::Base()
{
} /* size: 0 */

// <034609A0> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<2, ISceneLayer::InputTexture_t, 8>::Base()
{
} /* size: 0 */

// <034608CB> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<2, ISceneLayer::InputSceneViewRenderTarget_t, 8>::Base()
{
} /* size: 0 */

// <034607B2> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<1, ISceneLayer::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <03460787> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<1, ISceneLayer::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0346076A> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<4, ConstantBufferHandle_t__::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0346073F> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<4, ConstantBufferHandle_t__::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <03460666> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<2, ISceneLayer::InputTexture_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0346063B> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<2, ISceneLayer::InputTexture_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <034605AA> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<2, ISceneLayer::InputSceneViewRenderTarget_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0346057F> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<2, ISceneLayer::InputSceneViewRenderTarget_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <03460316> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<4, RenderSubPassAttachment_t, 8>::Base()
{
} /* size: 0 */

// <034602FD> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<2, RenderSubPassAttachment_t, 8>::Base()
{
} /* size: 0 */

// <034602E4> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<2, CWeakHandle<InfoForResourceTypeCTextureBase>, 8>::Base()
{
} /* size: 0 */

// <0345FFD1> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<8, CRenderBatchList::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0345FFB8> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<8, CRenderBatchList::Base()
{
} /* size: 0 */

// <0345FE93> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<2, ISceneWorld::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0345FE68> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<2, ISceneWorld::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0345FE4F> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<2, ISceneWorld::Base()
{
} /* size: 0 */

// <0345FD2A> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<4, ISceneView::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0345FCFF> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<4, ISceneView::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0345FCE6> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<4, ISceneView::Base()
{
} /* size: 0 */

// <0345FB32> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<4, ConstantBufferHandle_t__::Base()
{
} /* size: 0 */

// <0321F3D2> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<16, ISceneView::WorldList_t, 8>::Base()
{
} /* size: 0 */

// <0321E833> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<16, ISceneView::WorldList_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0321E808> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<16, ISceneView::WorldList_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0321E6FB> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<8, ISceneView::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0321E6D0> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<8, ISceneView::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0321E6B7> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<8, ISceneView::Base()
{
} /* size: 0 */

// <0321E638> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<16, ISceneView::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0321E60D> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<16, ISceneView::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0321E5F4> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<16, ISceneView::Base()
{
} /* size: 0 */

// <0321E563> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<35, CScratchRenderTargetSystem::RenderTargetInfo_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0321E538> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<35, CScratchRenderTargetSystem::RenderTargetInfo_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0321E51F> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<35, CScratchRenderTargetSystem::RenderTargetInfo_t, 8>::Base()
{
} /* size: 0 */

// <0311C4BB> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<64, CWeakHandle<InfoForResourceTypeCTextureBase>, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0311C490> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<64, CWeakHandle<InfoForResourceTypeCTextureBase>, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0311C477> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<64, CWeakHandle<InfoForResourceTypeCTextureBase>, 8>::Base()
{
} /* size: 0 */

// <0311BBDC> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<1024, const DebugSphere_t::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0311BBB1> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<1024, const DebugSphere_t::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0311BB98> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<1024, const DebugSphere_t::Base()
{
} /* size: 0 */

// <0305B5AC> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<128, CSceneLightObjectInternal::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0305B581> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<128, CSceneLightObjectInternal::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0305B568> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<128, CSceneLightObjectInternal::Base()
{
} /* size: 0 */

// <0305B475> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<4, ISceneLightListener::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0305B44A> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<4, ISceneLightListener::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0305B431> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<4, ISceneLightListener::Base()
{
} /* size: 0 */

// <0305B33E> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<128, CEnvMapSceneObject::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0305B313> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<128, CEnvMapSceneObject::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0305B207> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<4, ISceneEnvironmentMapListener::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0305B1DC> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<4, ISceneEnvironmentMapListener::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0305B1C3> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<4, ISceneEnvironmentMapListener::Base()
{
} /* size: 0 */

// <0305B0D0> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<128, CSceneLightProbeVolumeObject::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0305B0A5> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<128, CSceneLightProbeVolumeObject::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0305B08C> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<128, CSceneLightProbeVolumeObject::Base()
{
} /* size: 0 */

// <0305AF99> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<4, ISceneLightProbeVolumeListener::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0305AF6E> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<4, ISceneLightProbeVolumeListener::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0305AF55> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<4, ISceneLightProbeVolumeListener::Base()
{
} /* size: 0 */

// <02E9882B> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<1024, CSceneObject::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <02E98800> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<1024, CSceneObject::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <02E987E7> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<1024, CSceneObject::Base()
{
} /* size: 0 */

// <02E96861> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<32, CSceneDrawList::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <02E96848> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<32, CSceneDrawList::Base()
{
} /* size: 0 */

// <02E24456> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<256, DisplayListToSubmit_t, 8>::Base()
{
} /* size: 0 */

// <02E2436B> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<32, ISceneWorld::Base()
{
} /* size: 0 */

// <02E23FF0> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<64, ISceneWorld::Base()
{
} /* size: 0 */

// <02E23FA5> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<64, CSceneWorld::Base()
{
} /* size: 0 */

// <02E2118C> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<256, DisplayListToSubmit_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <02E20E70> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<16, CSceneView::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <02E20E45> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<16, CSceneView::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <02E20BA2> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<64, ISceneWorld::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <02E202E5> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<16, std::function<void(CSceneObject::AlignedByteArrayExplicit_t()>*, 8>* this)
{
	{
	}
} /* size: 0 */

// <02E202A1> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<16, std::function<void(CSceneObject::Base()>*, 8>* this)
{
} /* size: 0 */

// <02E1F8F4> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<8, RenderDescriptorBinding_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <02E1F8DB> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<8, RenderDescriptorBinding_t, 8>::Base()
{
} /* size: 0 */

// <02E1E074> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<256, CSceneSystem::RenderAttributesSetup_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <02E1E049> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<256, CSceneSystem::RenderAttributesSetup_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <02E1E030> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<256, CSceneSystem::RenderAttributesSetup_t, 8>::Base()
{
} /* size: 0 */

// <02E1DF0B> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<256, CSceneLayer::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <02E1DEC7> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<256, CSceneLayer::Base()
{
} /* size: 0 */

// <02E1D5AE> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<16, AtlasChart_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <02E1D56A> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<16, AtlasChart_t, 8>::Base()
{
} /* size: 0 */

// <02E1D303> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<64, CSceneWorld::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <02E1D2D8> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<64, CSceneWorld::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <02E1CB16> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<12, void::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <02E1CAEB> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<12, void::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <02E1CACD> ../public/tier0/platform_compile_base.h:1614
inline void** AlignedByteArrayExplicit_t<12, void::Base()
{
} /* size: 0 */

// <02E1C3DE> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<8, RenderDescriptorDesc_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <02E1C3B3> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<8, RenderDescriptorDesc_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <02E1C39A> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<8, RenderDescriptorDesc_t, 8>::Base()
{
} /* size: 0 */

// <02E15CE5> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<32, CSceneLayer::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <02E15CBA> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<32, CSceneLayer::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <02E15CA1> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<32, CSceneLayer::Base()
{
} /* size: 0 */

// <02E15BF7> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<32, CUtlVectorFixedGrowableCompat<CSceneDrawList::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <02E15BCC> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<32, CUtlVectorFixedGrowableCompat<CSceneDrawList::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <02E15BB3> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<32, CUtlVectorFixedGrowableCompat<CSceneDrawList::Base()
{
} /* size: 0 */

// <02E159D3> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<64, PendingVisitList_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <02E159A8> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<64, PendingVisitList_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <02E1598F> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<64, PendingVisitList_t, 8>::Base()
{
} /* size: 0 */

// <02B761A7> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<4, ISceneWorld::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <02B7617C> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<4, ISceneWorld::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <02B76163> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<4, ISceneWorld::Base()
{
} /* size: 0 */

// <02639E28> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<4, audio_buffer_input_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <02639DFD> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<4, audio_buffer_input_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <02639DE4> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<4, audio_buffer_input_t, 8>::Base()
{
} /* size: 0 */

// <023E68F7> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<16, char const::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <023E68CC> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<16, char const::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <023E68B3> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<16, char const::Base()
{
} /* size: 0 */

// <023E668E> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<64, char const::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0234CF83> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<16, NullTypeManager_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0234CF58> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<16, NullTypeManager_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0234C8E5> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<8, CResourceSystem::ForcedSynchronizationCallbackInfo_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0234C8BA> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<8, CResourceSystem::ForcedSynchronizationCallbackInfo_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0234C8A1> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<8, CResourceSystem::ForcedSynchronizationCallbackInfo_t, 8>::Base()
{
} /* size: 0 */

// <0234B4C9> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<256, CLoadingResource::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0234B49E> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<256, CLoadingResource::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0234B485> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<256, CLoadingResource::Base()
{
} /* size: 0 */

// <0234B216> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<128, CResourceManifest::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0234B1EB> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<128, CResourceManifest::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0234B1D2> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<128, CResourceManifest::Base()
{
} /* size: 0 */

// <0234B0AD> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<32, const ResourceBindingBase_t::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0234B082> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<32, const ResourceBindingBase_t::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0234B069> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<32, const ResourceBindingBase_t::Base()
{
} /* size: 0 */

// <0175D001> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<128, PhysicsTrace_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0175CFBD> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<128, PhysicsTrace_t, 8>::Base()
{
} /* size: 0 */

// <0125F925> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<128, IPhysicsShape::Base()
{
} /* size: 0 */

// <0125F83E> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<128, IPhysicsShape::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0125F813> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<128, IPhysicsShape::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <010F49CD> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<4, CSceneObject::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <010F49A2> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<4, CSceneObject::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <010F4989> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<4, CSceneObject::Base()
{
} /* size: 0 */

// <00FFF45E> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<1, VertexBufferHandle_t__::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <00FFF433> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<1, VertexBufferHandle_t__::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <00FFF41A> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<1, VertexBufferHandle_t__::Base()
{
} /* size: 0 */

// <00FFF369> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<5, CWeakHandle<InfoForResourceTypeCTextureBase>, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <00FFF33E> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<5, CWeakHandle<InfoForResourceTypeCTextureBase>, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <00B9AB7A> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<1, CPhysicsShape::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <00B9AB4F> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<1, CPhysicsShape::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <00B9AB36> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<1, CPhysicsShape::Base()
{
} /* size: 0 */

// <009E9AE5> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<32, const qhVertex::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <009E9ABA> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<32, const qhVertex::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <009E9AA1> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<32, const qhVertex::Base()
{
} /* size: 0 */

// <009E9963> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<32, const qhFace::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <009E9938> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<32, const qhFace::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <009E991F> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<32, const qhFace::Base()
{
} /* size: 0 */

// <009E97FA> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<128, const qhHalfEdge::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <009E97CF> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<128, const qhHalfEdge::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <009E97B6> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<128, const qhHalfEdge::Base()
{
} /* size: 0 */

// <009E88C7> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<64, DebugMeshInfo_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <009E889C> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<64, DebugMeshInfo_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <009E8883> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<64, DebugMeshInfo_t, 8>::Base()
{
} /* size: 0 */

// <008A7BF5> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<1, CInputSystem::CursorSurface_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <008A7BCA> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<1, CInputSystem::CursorSurface_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <008A7BB1> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<1, CInputSystem::CursorSurface_t, 8>::Base()
{
} /* size: 0 */

// <027EC302> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<12, CAnimationChannelResult, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <027EC2D7> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<12, CAnimationChannelResult, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <027EC2BE> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<12, CAnimationChannelResult, 8>::Base()
{
} /* size: 0 */

// <00C38818> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<4096, CUtlString, 8>::Base()
{
} /* size: 0 */

// <00C30886> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<4096, CUtlString, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <00C3085B> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<4096, CUtlString, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <00142212> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<16, CIKChainContext, 8>::Base()
{
} /* size: 0 */

// <00089DEB> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<3, IIKRuleContext::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <00089DC0> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<3, IIKRuleContext::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <00B6D137> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<16, VkImageMemoryBarrier, 8>::Base()
{
} /* size: 0 */

// <00B66F83> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<100, CDependencyDescriptor::Base()
{
} /* size: 0 */

// <009CFE76> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<16, CDependencyDescriptor::Base()
{
} /* size: 0 */

// <009BD80A> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<16, CDependencyDescriptor::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <009BD7DF> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<16, CDependencyDescriptor::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <009B530B> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<4, RenderDescriptorSetHandle_t__::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <009B52E0> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<4, RenderDescriptorSetHandle_t__::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <009B52C7> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<4, RenderDescriptorSetHandle_t__::Base()
{
} /* size: 0 */

// <0083718D> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<4, CBarrierHelperVulkan::BufferState_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <00837162> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<4, CBarrierHelperVulkan::BufferState_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <00837149> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<4, CBarrierHelperVulkan::BufferState_t, 8>::Base()
{
} /* size: 0 */

// <00837061> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<4, CBarrierHelperVulkan::UAVState_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <00837036> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<4, CBarrierHelperVulkan::UAVState_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0083701D> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<4, CBarrierHelperVulkan::UAVState_t, 8>::Base()
{
} /* size: 0 */

// <00836E09> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<2, CWeakHandle<InfoForResourceTypeCTextureBase>, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <00836DDE> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<2, CWeakHandle<InfoForResourceTypeCTextureBase>, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <00836CCB> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<4, RenderBufferBarrier_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <00836CB2> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<4, RenderBufferBarrier_t, 8>::Base()
{
} /* size: 0 */

// <00836B9F> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<4, RenderUAVBarrier_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <00836B86> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<4, RenderUAVBarrier_t, 8>::Base()
{
} /* size: 0 */

// <006FE212> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<4, VkPipeline_T::Base()
{
} /* size: 0 */

// <006F8ED2> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<4, VkPipeline_T::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <006F8EA7> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<4, VkPipeline_T::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <006F8DC9> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<4, const CDescriptorSetVulkan::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <005D8333> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<128, PerThreadDataVulkan_t::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <005D8308> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<128, PerThreadDataVulkan_t::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <004D4EC1> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<128, VulkanFramebufferState_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <004D4E96> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<128, VulkanFramebufferState_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <004A5F43> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<128, VkWriteDescriptorSet, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <004A5F18> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<128, VkWriteDescriptorSet, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <004A5EFF> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<128, VkWriteDescriptorSet, 8>::Base()
{
} /* size: 0 */

// <004A5D5C> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<128, VkDescriptorImageInfo, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <004A5D31> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<128, VkDescriptorImageInfo, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <004A5D18> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<128, VkDescriptorImageInfo, 8>::Base()
{
} /* size: 0 */

// <004A5B75> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<128, VkDescriptorBufferInfo, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <004A5B4A> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<128, VkDescriptorBufferInfo, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <004A5B31> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<128, VkDescriptorBufferInfo, 8>::Base()
{
} /* size: 0 */

// <0022D428> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<100, CDependencyDescriptor::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0022D3FD> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<100, CDependencyDescriptor::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <004CE9FA> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<1, CThreadFastMutex, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <004CE8E1> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<1, CThreadLocalScope::CScopeCreatedOrDestroyedHandler, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <004CE8B6> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<1, CThreadLocalScope::CScopeCreatedOrDestroyedHandler, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <004CE83E> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<1, CConstructedMainThreadID, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <004CE522> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<1, CThreadLocalScope, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <004CE4F7> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<1, CThreadLocalScope, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <004CD717> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<1, CThreadLocalScope::CScopeCreatedOrDestroyedHandler, 8>::Base()
{
} /* size: 0 */

// <004CD55B> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<1, CConstructedMainThreadID, 8>::Base()
{
} /* size: 0 */

// <003A051F> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<1, SignalHandlerMemory_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <003A04F4> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<1, SignalHandlerMemory_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0039FC9A> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<1, SignalHandlerMemory_t, 8>::Base()
{
} /* size: 0 */

// <00384604> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<1, CBufferStringN<200>, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <00381F0A> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<1, CBufferStringN<200>, 8>::Base()
{
} /* size: 0 */

// <00282E90> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<1, CLoggingSystem, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <00282E65> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<1, CLoggingSystem, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <00281FFC> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<1, CLoggingSystem, 8>::Base()
{
} /* size: 0 */

// <001C9ACF> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<48, CExecMultiWorkerJob::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <001C9AA4> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<48, CExecMultiWorkerJob::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <001C9A8B> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<48, CExecMultiWorkerJob::Base()
{
} /* size: 0 */

// <00156823> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<1, FiberToolsOrderedConstructionGlobals_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <001567F8> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<1, FiberToolsOrderedConstructionGlobals_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <00156299> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<1, CFiberJobPool, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0015626E> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<1, CFiberJobPool, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <00156221> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<1, CFiber, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <001561F6> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<1, CFiber, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <00153581> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<1, FiberToolsOrderedConstructionGlobals_t, 8>::Base()
{
} /* size: 0 */

// <00153568> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<1, CFiberJobPool, 8>::Base()
{
} /* size: 0 */

// <001534E2> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<1, CFiber, 8>::Base()
{
} /* size: 0 */

// <0009E507> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<1, CCommandLine, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0009E4DC> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<1, CCommandLine, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0009D810> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<1, CCommandLine, 8>::Base()
{
} /* size: 0 */

// <00026712> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<1, CAssertGlobals, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <000B9B8C> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<128, CSchemaClassInfo::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <000B9B61> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<128, CSchemaClassInfo::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <000B9B48> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<128, CSchemaClassInfo::Base()
{
} /* size: 0 */

// <000B999E> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<128, CSchemaEnumInfo::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <00403678> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<1, RuntimeBuffersInfo_t::BufferInfo_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <00403634> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<1, RuntimeBuffersInfo_t::BufferInfo_t, 8>::Base()
{
} /* size: 0 */

// <0034667E> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<4, const CAnimationGroupResource::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <00346654> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<4, const CAnimationGroupResource::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0034663B> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<4, const CAnimationGroupResource::Base()
{
} /* size: 0 */

// <00165721> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<4, CModelTypeManager::AsyncProcessDataResults::MeshData::Base()
{
} /* size: 0 */

// <0016393A> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<4, CModelTypeManager::AsyncProcessDataResults::MeshData::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0057B86C> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<8, IMaterial2::TextureAttributeValue_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0057B841> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<8, IMaterial2::TextureAttributeValue_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0043985B> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<2, CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <00439830> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<2, CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <00439817> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<2, CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, 8>::Base()
{
} /* size: 0 */

// <00267F6B> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<16, texture_use_info_t, 8>::Base()
{
} /* size: 0 */

// <00153FCD> ../public/tier0/platform_compile_base.h:1614
void AlignedByteArrayExplicit_t<32, CMaterialLayer::CommandBufferInfo_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <00153FA2> ../public/tier0/platform_compile_base.h:1614
inline void AlignedByteArrayExplicit_t<32, CMaterialLayer::CommandBufferInfo_t, 8>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <000483AB> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 256
struct AlignedByteArrayExplicit_t<16, ISceneView::WorldList_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<16, ISceneView::WorldList_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	WorldList_t* Base(AlignedByteArrayExplicit_t<16, ISceneView::WorldList_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const WorldList_t* Base(const AlignedByteArrayExplicit_t<16, ISceneView::WorldList_t, 8>* );
private:
	uint8 m_Data[256]; /* 0 256 */
} __attribute__((__aligned__(8)));

// <00054C28> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 8
struct AlignedByteArrayExplicit_t<1, ISceneLayer*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<1, ISceneLayer*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	ISceneLayer** Base(AlignedByteArrayExplicit_t<1, ISceneLayer*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	ISceneLayer* const* Base(const AlignedByteArrayExplicit_t<1, ISceneLayer*, 8>* );
private:
	uint8 m_Data[8]; /* 0 8 */
} __attribute__((__aligned__(8)));

// <00056052> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 32
struct AlignedByteArrayExplicit_t<4, ConstantBufferHandle_t__*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<4, ConstantBufferHandle_t__*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	ConstantBufferHandle_t__** Base(AlignedByteArrayExplicit_t<4, ConstantBufferHandle_t__*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	ConstantBufferHandle_t__* const* Base(const AlignedByteArrayExplicit_t<4, ConstantBufferHandle_t__*, 8>* );
private:
	uint8 m_Data[32]; /* 0 32 */
} __attribute__((__aligned__(8)));

// <00058BAC> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 32
struct AlignedByteArrayExplicit_t<2, ISceneLayer::InputTexture_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<2, ISceneLayer::InputTexture_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	InputTexture_t* Base(AlignedByteArrayExplicit_t<2, ISceneLayer::InputTexture_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const InputTexture_t* Base(const AlignedByteArrayExplicit_t<2, ISceneLayer::InputTexture_t, 8>* );
private:
	uint8 m_Data[32]; /* 0 32 */
} __attribute__((__aligned__(8)));

// <0005A341> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 48
struct AlignedByteArrayExplicit_t<2, ISceneLayer::InputSceneViewRenderTarget_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<2, ISceneLayer::InputSceneViewRenderTarget_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	InputSceneViewRenderTarget_t* Base(AlignedByteArrayExplicit_t<2, ISceneLayer::InputSceneViewRenderTarget_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const InputSceneViewRenderTarget_t* Base(const AlignedByteArrayExplicit_t<2, ISceneLayer::InputSceneViewRenderTarget_t, 8>* );
private:
	uint8 m_Data[48]; /* 0 48 */
} __attribute__((__aligned__(8)));

// <000BE98F> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 64
struct AlignedByteArrayExplicit_t<4, CRenderBufferBinding, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<4, CRenderBufferBinding, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CRenderBufferBinding* Base(AlignedByteArrayExplicit_t<4, CRenderBufferBinding, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const CRenderBufferBinding* Base(const AlignedByteArrayExplicit_t<4, CRenderBufferBinding, 8>* );
private:
	uint8 m_Data[64]; /* 0 64 */
} __attribute__((__aligned__(8)));

// <000C3A28> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 112
struct AlignedByteArrayExplicit_t<1, CSceneObjectData, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<1, CSceneObjectData, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CSceneObjectData* Base(AlignedByteArrayExplicit_t<1, CSceneObjectData, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const CSceneObjectData* Base(const AlignedByteArrayExplicit_t<1, CSceneObjectData, 8>* );
private:
	uint8 m_Data[112]; /* 0 112 */
} __attribute__((__aligned__(8)));

// <000FDE83> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 40
struct AlignedByteArrayExplicit_t<5, CWeakHandle<InfoForResourceTypeCTextureBase>, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<5, CWeakHandle<InfoForResourceTypeCTextureBase>, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CWeakHandle<InfoForResourceTypeCTextureBase>* Base(AlignedByteArrayExplicit_t<5, CWeakHandle<InfoForResourceTypeCTextureBase>, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const CWeakHandle<InfoForResourceTypeCTextureBase>* Base(const AlignedByteArrayExplicit_t<5, CWeakHandle<InfoForResourceTypeCTextureBase>, 8>* );
private:
	uint8 m_Data[40]; /* 0 40 */
} __attribute__((__aligned__(8)));

// <00100C1D> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 16
struct AlignedByteArrayExplicit_t<1, CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<1, CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >* Base(AlignedByteArrayExplicit_t<1, CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >* Base(const AlignedByteArrayExplicit_t<1, CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >,);
private:
	uint8 m_Data[16]; /* 0 16 */
} __attribute__((__aligned__(8)));

// <00103A51> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 16
struct AlignedByteArrayExplicit_t<1, ChildSceneObjectReference_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<1, ChildSceneObjectReference_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	ChildSceneObjectReference_t* Base(AlignedByteArrayExplicit_t<1, ChildSceneObjectReference_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const ChildSceneObjectReference_t* Base(const AlignedByteArrayExplicit_t<1, ChildSceneObjectReference_t, 8>* );
private:
	uint8 m_Data[16]; /* 0 16 */
} __attribute__((__aligned__(8)));

// <00107132> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 2,400
struct AlignedByteArrayExplicit_t<20, CMeshDrawPrimitive_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<20, CMeshDrawPrimitive_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CMeshDrawPrimitive_t* Base(AlignedByteArrayExplicit_t<20, CMeshDrawPrimitive_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const CMeshDrawPrimitive_t* Base(const AlignedByteArrayExplicit_t<20, CMeshDrawPrimitive_t, 8>* );
private:
	uint8 m_Data[2400]; /* 0 2400 */
} __attribute__((__aligned__(8)));

// <0085F14F> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 16
struct AlignedByteArrayExplicit_t<1, CInputSystem::CursorSurface_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<1, CInputSystem::CursorSurface_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CursorSurface_t* Base(AlignedByteArrayExplicit_t<1, CInputSystem::CursorSurface_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const CursorSurface_t* Base(const AlignedByteArrayExplicit_t<1, CInputSystem::CursorSurface_t, 8>* );
private:
	uint8 m_Data[16]; /* 0 16 */
} __attribute__((__aligned__(8)));

// <009197D5> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 64
struct AlignedByteArrayExplicit_t<4, CKeyValues3Iterator::StackEntry_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<4, CKeyValues3Iterator::StackEntry_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	StackEntry_t* Base(AlignedByteArrayExplicit_t<4, CKeyValues3Iterator::StackEntry_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const StackEntry_t* Base(const AlignedByteArrayExplicit_t<4, CKeyValues3Iterator::StackEntry_t, 8>* );
private:
	uint8 m_Data[64]; /* 0 64 */
} __attribute__((__aligned__(8)));

// <009CCE4A> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 1,024
struct AlignedByteArrayExplicit_t<128, const qhHalfEdge*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<128, const qhHalfEdge*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const qhHalfEdge* * Base(AlignedByteArrayExplicit_t<128, const qhHalfEdge*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const qhHalfEdge* const* Base(const AlignedByteArrayExplicit_t<128, const qhHalfEdge*, 8>* );
private:
	uint8 m_Data[1024]; /* 0 1024 */
} __attribute__((__aligned__(8)));

// <009CE6CC> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 256
struct AlignedByteArrayExplicit_t<32, const qhVertex*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<32, const qhVertex*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const qhVertex* * Base(AlignedByteArrayExplicit_t<32, const qhVertex*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const qhVertex* const* Base(const AlignedByteArrayExplicit_t<32, const qhVertex*, 8>* );
private:
	uint8 m_Data[256]; /* 0 256 */
} __attribute__((__aligned__(8)));

// <009CFF3C> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 256
struct AlignedByteArrayExplicit_t<32, const qhFace*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<32, const qhFace*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const qhFace* * Base(AlignedByteArrayExplicit_t<32, const qhFace*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const qhFace* const* Base(const AlignedByteArrayExplicit_t<32, const qhFace*, 8>* );
private:
	uint8 m_Data[256]; /* 0 256 */
} __attribute__((__aligned__(8)));

// <009D182D> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 7,168
struct AlignedByteArrayExplicit_t<64, DebugMeshInfo_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<64, DebugMeshInfo_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	DebugMeshInfo_t* Base(AlignedByteArrayExplicit_t<64, DebugMeshInfo_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const DebugMeshInfo_t* Base(const AlignedByteArrayExplicit_t<64, DebugMeshInfo_t, 8>* );
private:
	uint8 m_Data[7168]; /* 0 7168 */
} __attribute__((__aligned__(8)));

// <00B02743> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 8,192
struct AlignedByteArrayExplicit_t<128, PhysicsTrace_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<128, PhysicsTrace_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	PhysicsTrace_t* Base(AlignedByteArrayExplicit_t<128, PhysicsTrace_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const PhysicsTrace_t* Base(const AlignedByteArrayExplicit_t<128, PhysicsTrace_t, 8>* );
private:
	uint8 m_Data[8192]; /* 0 8192 */
} __attribute__((__aligned__(8)));

// <00B03FBB> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 1,024
struct AlignedByteArrayExplicit_t<128, IPhysicsShape*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<128, IPhysicsShape*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	IPhysicsShape** Base(AlignedByteArrayExplicit_t<128, IPhysicsShape*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	IPhysicsShape* const* Base(const AlignedByteArrayExplicit_t<128, IPhysicsShape*, 8>* );
private:
	uint8 m_Data[1024]; /* 0 1024 */
} __attribute__((__aligned__(8)));

// <00B9130B> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 8
struct AlignedByteArrayExplicit_t<1, CPhysicsShape*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<1, CPhysicsShape*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CPhysicsShape** Base(AlignedByteArrayExplicit_t<1, CPhysicsShape*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CPhysicsShape* const* Base(const AlignedByteArrayExplicit_t<1, CPhysicsShape*, 8>* );
private:
	uint8 m_Data[8]; /* 0 8 */
} __attribute__((__aligned__(8)));

// <00FE56D5> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 8
struct AlignedByteArrayExplicit_t<1, VertexBufferHandle_t__*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<1, VertexBufferHandle_t__*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	VertexBufferHandle_t__** Base(AlignedByteArrayExplicit_t<1, VertexBufferHandle_t__*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	VertexBufferHandle_t__* const* Base(const AlignedByteArrayExplicit_t<1, VertexBufferHandle_t__*, 8>* );
private:
	uint8 m_Data[8]; /* 0 8 */
} __attribute__((__aligned__(8)));

// <010E2EF0> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 32
struct AlignedByteArrayExplicit_t<4, CSceneObject*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<4, CSceneObject*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CSceneObject** Base(AlignedByteArrayExplicit_t<4, CSceneObject*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CSceneObject* const* Base(const AlignedByteArrayExplicit_t<4, CSceneObject*, 8>* );
private:
	uint8 m_Data[32]; /* 0 32 */
} __attribute__((__aligned__(8)));

// <012016DD> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 64
struct AlignedByteArrayExplicit_t<4, audio_buffer_input_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<4, audio_buffer_input_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	audio_buffer_input_t* Base(AlignedByteArrayExplicit_t<4, audio_buffer_input_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const audio_buffer_input_t* Base(const AlignedByteArrayExplicit_t<4, audio_buffer_input_t, 8>* );
private:
	uint8 m_Data[64]; /* 0 64 */
} __attribute__((__aligned__(8)));

// <02189116> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 512
struct AlignedByteArrayExplicit_t<64, char const*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<64, char const*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const char* * Base(AlignedByteArrayExplicit_t<64, char const*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const char* const* Base(const AlignedByteArrayExplicit_t<64, char const*, 8>* );
private:
	uint8 m_Data[512]; /* 0 512 */
} __attribute__((__aligned__(8)));

// <0224FB50> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 2,048
struct AlignedByteArrayExplicit_t<256, CLoadingResource*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<256, CLoadingResource*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CLoadingResource** Base(AlignedByteArrayExplicit_t<256, CLoadingResource*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CLoadingResource* const* Base(const AlignedByteArrayExplicit_t<256, CLoadingResource*, 8>* );
private:
	uint8 m_Data[2048]; /* 0 2048 */
} __attribute__((__aligned__(8)));

// <023215D2> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 128
struct AlignedByteArrayExplicit_t<8, CResourceSystem::ForcedSynchronizationCallbackInfo_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<8, CResourceSystem::ForcedSynchronizationCallbackInfo_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	ForcedSynchronizationCallbackInfo_t* Base(AlignedByteArrayExplicit_t<8, CResourceSystem::ForcedSynchronizationCallbackInfo_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const ForcedSynchronizationCallbackInfo_t* Base(const AlignedByteArrayExplicit_t<8, CResourceSystem::ForcedSynchronizationCallbackInfo_t, 8>* );
private:
	uint8 m_Data[128]; /* 0 128 */
} __attribute__((__aligned__(8)));

// <0233485D> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 256
struct AlignedByteArrayExplicit_t<16, NullTypeManager_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<16, NullTypeManager_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	NullTypeManager_t* Base(AlignedByteArrayExplicit_t<16, NullTypeManager_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const NullTypeManager_t* Base(const AlignedByteArrayExplicit_t<16, NullTypeManager_t, 8>* );
private:
	uint8 m_Data[256]; /* 0 256 */
} __attribute__((__aligned__(8)));

// <0233DE38> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 1,024
struct AlignedByteArrayExplicit_t<128, CResourceManifest*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<128, CResourceManifest*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CResourceManifest** Base(AlignedByteArrayExplicit_t<128, CResourceManifest*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CResourceManifest* const* Base(const AlignedByteArrayExplicit_t<128, CResourceManifest*, 8>* );
private:
	uint8 m_Data[1024]; /* 0 1024 */
} __attribute__((__aligned__(8)));

// <0233EF67> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 256
struct AlignedByteArrayExplicit_t<32, const ResourceBindingBase_t*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<32, const ResourceBindingBase_t*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const ResourceBindingBase_t* * Base(AlignedByteArrayExplicit_t<32, const ResourceBindingBase_t*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const ResourceBindingBase_t* const* Base(const AlignedByteArrayExplicit_t<32, const ResourceBindingBase_t*, 8>* );
private:
	uint8 m_Data[256]; /* 0 256 */
} __attribute__((__aligned__(8)));

// <023E0842> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 128
struct AlignedByteArrayExplicit_t<16, char const*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<16, char const*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const char* * Base(AlignedByteArrayExplicit_t<16, char const*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const char* const* Base(const AlignedByteArrayExplicit_t<16, char const*, 8>* );
private:
	uint8 m_Data[128]; /* 0 128 */
} __attribute__((__aligned__(8)));

// <027854E0> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 16
struct AlignedByteArrayExplicit_t<2, CWeakHandle<InfoForResourceTypeIMaterial2>, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<2, CWeakHandle<InfoForResourceTypeIMaterial2>, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CWeakHandle<InfoForResourceTypeIMaterial2>* Base(AlignedByteArrayExplicit_t<2, CWeakHandle<InfoForResourceTypeIMaterial2>, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const CWeakHandle<InfoForResourceTypeIMaterial2>* Base(const AlignedByteArrayExplicit_t<2, CWeakHandle<InfoForResourceTypeIMaterial2>, 8>* );
private:
	uint8 m_Data[16]; /* 0 16 */
} __attribute__((__aligned__(8)));

// <02B5FB97> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 64
struct AlignedByteArrayExplicit_t<8, CRenderBatchList*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<8, CRenderBatchList*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CRenderBatchList** Base(AlignedByteArrayExplicit_t<8, CRenderBatchList*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CRenderBatchList* const* Base(const AlignedByteArrayExplicit_t<8, CRenderBatchList*, 8>* );
private:
	uint8 m_Data[64]; /* 0 64 */
} __attribute__((__aligned__(8)));

// <02B60B94> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 16
struct AlignedByteArrayExplicit_t<2, ISceneWorld*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<2, ISceneWorld*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	ISceneWorld** Base(AlignedByteArrayExplicit_t<2, ISceneWorld*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	ISceneWorld* const* Base(const AlignedByteArrayExplicit_t<2, ISceneWorld*, 8>* );
private:
	uint8 m_Data[16]; /* 0 16 */
} __attribute__((__aligned__(8)));

// <02B62739> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 32
struct AlignedByteArrayExplicit_t<4, ISceneView*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<4, ISceneView*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	ISceneView** Base(AlignedByteArrayExplicit_t<4, ISceneView*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	ISceneView* const* Base(const AlignedByteArrayExplicit_t<4, ISceneView*, 8>* );
private:
	uint8 m_Data[32]; /* 0 32 */
} __attribute__((__aligned__(8)));

// <02B6F4D2> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 32
struct AlignedByteArrayExplicit_t<4, ISceneWorld*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<4, ISceneWorld*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	ISceneWorld** Base(AlignedByteArrayExplicit_t<4, ISceneWorld*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	ISceneWorld* const* Base(const AlignedByteArrayExplicit_t<4, ISceneWorld*, 8>* );
private:
	uint8 m_Data[32]; /* 0 32 */
} __attribute__((__aligned__(8)));

// <02DA7A56> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 128
struct AlignedByteArrayExplicit_t<16, CSceneView*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<16, CSceneView*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CSceneView** Base(AlignedByteArrayExplicit_t<16, CSceneView*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CSceneView* const* Base(const AlignedByteArrayExplicit_t<16, CSceneView*, 8>* );
private:
	uint8 m_Data[128]; /* 0 128 */
} __attribute__((__aligned__(8)));

// <02DAD781> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 2,048
struct AlignedByteArrayExplicit_t<256, DisplayListToSubmit_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<256, DisplayListToSubmit_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	DisplayListToSubmit_t* Base(AlignedByteArrayExplicit_t<256, DisplayListToSubmit_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const DisplayListToSubmit_t* Base(const AlignedByteArrayExplicit_t<256, DisplayListToSubmit_t, 8>* );
private:
	uint8 m_Data[2048]; /* 0 2048 */
} __attribute__((__aligned__(8)));

// <02DB2808> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 512
struct AlignedByteArrayExplicit_t<64, CSceneObject*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<64, CSceneObject*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CSceneObject** Base(AlignedByteArrayExplicit_t<64, CSceneObject*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CSceneObject* const* Base(const AlignedByteArrayExplicit_t<64, CSceneObject*, 8>* );
private:
	uint8 m_Data[512]; /* 0 512 */
} __attribute__((__aligned__(8)));

// <02DB4046> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 512
struct AlignedByteArrayExplicit_t<64, ISceneWorld*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<64, ISceneWorld*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	ISceneWorld** Base(AlignedByteArrayExplicit_t<64, ISceneWorld*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	ISceneWorld* const* Base(const AlignedByteArrayExplicit_t<64, ISceneWorld*, 8>* );
private:
	uint8 m_Data[512]; /* 0 512 */
} __attribute__((__aligned__(8)));

// <02DB812B> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 256
struct AlignedByteArrayExplicit_t<32, ISceneWorld*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<32, ISceneWorld*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	ISceneWorld** Base(AlignedByteArrayExplicit_t<32, ISceneWorld*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	ISceneWorld* const* Base(const AlignedByteArrayExplicit_t<32, ISceneWorld*, 8>* );
private:
	uint8 m_Data[256]; /* 0 256 */
} __attribute__((__aligned__(8)));

// <02DC2BD4> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 128
struct AlignedByteArrayExplicit_t<16, std::function<void(CSceneObject*)>*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<16, std::function<void(CSceneObject*)>*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	function<void(CSceneObject*)>** Base(AlignedByteArrayExplicit_t<16, std::function<void(CSceneObject*)>*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	function<void(CSceneObject*)>* const* Base(const AlignedByteArrayExplicit_t<16, std::function<void(CSceneObject*)>*, 8>* );
private:
	uint8 m_Data[128]; /* 0 128 */
} __attribute__((__aligned__(8)));

// <02DCADBD> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 384
struct AlignedByteArrayExplicit_t<8, RenderDescriptorBinding_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<8, RenderDescriptorBinding_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	RenderDescriptorBinding_t* Base(AlignedByteArrayExplicit_t<8, RenderDescriptorBinding_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const RenderDescriptorBinding_t* Base(const AlignedByteArrayExplicit_t<8, RenderDescriptorBinding_t, 8>* );
private:
	uint8 m_Data[384]; /* 0 384 */
} __attribute__((__aligned__(8)));

// <02DD893A> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 64
struct AlignedByteArrayExplicit_t<8, ISceneView*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<8, ISceneView*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	ISceneView** Base(AlignedByteArrayExplicit_t<8, ISceneView*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	ISceneView* const* Base(const AlignedByteArrayExplicit_t<8, ISceneView*, 8>* );
private:
	uint8 m_Data[64]; /* 0 64 */
} __attribute__((__aligned__(8)));

// <02DD98B5> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 128
struct AlignedByteArrayExplicit_t<16, ISceneView*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<16, ISceneView*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	ISceneView** Base(AlignedByteArrayExplicit_t<16, ISceneView*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	ISceneView* const* Base(const AlignedByteArrayExplicit_t<16, ISceneView*, 8>* );
private:
	uint8 m_Data[128]; /* 0 128 */
} __attribute__((__aligned__(8)));

// <02DEE66C> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 8,192
struct AlignedByteArrayExplicit_t<1024, CSceneObject*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<1024, CSceneObject*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CSceneObject** Base(AlignedByteArrayExplicit_t<1024, CSceneObject*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CSceneObject* const* Base(const AlignedByteArrayExplicit_t<1024, CSceneObject*, 8>* );
private:
	uint8 m_Data[8192]; /* 0 8192 */
} __attribute__((__aligned__(8)));

// <02DF027F> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 256
struct AlignedByteArrayExplicit_t<32, CSceneDrawList*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<32, CSceneDrawList*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CSceneDrawList** Base(AlignedByteArrayExplicit_t<32, CSceneDrawList*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CSceneDrawList* const* Base(const AlignedByteArrayExplicit_t<32, CSceneDrawList*, 8>* );
private:
	uint8 m_Data[256]; /* 0 256 */
} __attribute__((__aligned__(8)));

// <02DF1E20> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 9,216
struct AlignedByteArrayExplicit_t<32, CUtlVectorFixedGrowableCompat<CSceneDrawList*, 32>, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<32, CUtlVectorFixedGrowableCompat<CSceneDrawList*, 32>, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CUtlVectorFixedGrowableCompat<CSceneDrawList*, 32>* Base(AlignedByteArrayExplicit_t<32, CUtlVectorFixedGrowableCompat<CSceneDrawList*, 32>, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const CUtlVectorFixedGrowableCompat<CSceneDrawList*, 32>* Base(const AlignedByteArrayExplicit_t<32, CUtlVectorFixedGrowableCompat<CSceneDrawList*, 32>, 8>* );
private:
	uint8 m_Data[9216]; /* 0 9216 */
} __attribute__((__aligned__(8)));

// <02DF3691> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 256
struct AlignedByteArrayExplicit_t<32, CSceneLayer*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<32, CSceneLayer*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CSceneLayer** Base(AlignedByteArrayExplicit_t<32, CSceneLayer*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CSceneLayer* const* Base(const AlignedByteArrayExplicit_t<32, CSceneLayer*, 8>* );
private:
	uint8 m_Data[256]; /* 0 256 */
} __attribute__((__aligned__(8)));

// <02DF5F53> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 1,536
struct AlignedByteArrayExplicit_t<64, PendingVisitList_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<64, PendingVisitList_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	PendingVisitList_t* Base(AlignedByteArrayExplicit_t<64, PendingVisitList_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const PendingVisitList_t* Base(const AlignedByteArrayExplicit_t<64, PendingVisitList_t, 8>* );
private:
	uint8 m_Data[1536]; /* 0 1536 */
} __attribute__((__aligned__(8)));

// <02DF780A> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 4,096
struct AlignedByteArrayExplicit_t<256, CSceneSystem::RenderAttributesSetup_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<256, CSceneSystem::RenderAttributesSetup_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	RenderAttributesSetup_t* Base(AlignedByteArrayExplicit_t<256, CSceneSystem::RenderAttributesSetup_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const RenderAttributesSetup_t* Base(const AlignedByteArrayExplicit_t<256, CSceneSystem::RenderAttributesSetup_t, 8>* );
private:
	uint8 m_Data[4096]; /* 0 4096 */
} __attribute__((__aligned__(8)));

// <02DF8885> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 2,048
struct AlignedByteArrayExplicit_t<256, CSceneLayer*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<256, CSceneLayer*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CSceneLayer** Base(AlignedByteArrayExplicit_t<256, CSceneLayer*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CSceneLayer* const* Base(const AlignedByteArrayExplicit_t<256, CSceneLayer*, 8>* );
private:
	uint8 m_Data[2048]; /* 0 2048 */
} __attribute__((__aligned__(8)));

// <02DFC568> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 640
struct AlignedByteArrayExplicit_t<16, AtlasChart_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<16, AtlasChart_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	AtlasChart_t* Base(AlignedByteArrayExplicit_t<16, AtlasChart_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const AtlasChart_t* Base(const AlignedByteArrayExplicit_t<16, AtlasChart_t, 8>* );
private:
	uint8 m_Data[640]; /* 0 640 */
} __attribute__((__aligned__(8)));

// <02DFE698> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 512
struct AlignedByteArrayExplicit_t<64, CSceneWorld*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<64, CSceneWorld*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CSceneWorld** Base(AlignedByteArrayExplicit_t<64, CSceneWorld*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CSceneWorld* const* Base(const AlignedByteArrayExplicit_t<64, CSceneWorld*, 8>* );
private:
	uint8 m_Data[512]; /* 0 512 */
} __attribute__((__aligned__(8)));

// <02DFFF97> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 96
struct AlignedByteArrayExplicit_t<12, void*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<12, void*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	void** Base(AlignedByteArrayExplicit_t<12, void*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	void* const* Base(const AlignedByteArrayExplicit_t<12, void*, 8>* );
private:
	uint8 m_Data[96]; /* 0 96 */
} __attribute__((__aligned__(8)));

// <02E02EB8> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 192
struct AlignedByteArrayExplicit_t<8, RenderDescriptorDesc_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<8, RenderDescriptorDesc_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	RenderDescriptorDesc_t* Base(AlignedByteArrayExplicit_t<8, RenderDescriptorDesc_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const RenderDescriptorDesc_t* Base(const AlignedByteArrayExplicit_t<8, RenderDescriptorDesc_t, 8>* );
private:
	uint8 m_Data[192]; /* 0 192 */
} __attribute__((__aligned__(8)));

// <0304C25F> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 1,024
struct AlignedByteArrayExplicit_t<128, CSceneLightObjectInternal*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<128, CSceneLightObjectInternal*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CSceneLightObjectInternal** Base(AlignedByteArrayExplicit_t<128, CSceneLightObjectInternal*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CSceneLightObjectInternal* const* Base(const AlignedByteArrayExplicit_t<128, CSceneLightObjectInternal*, 8>* );
private:
	uint8 m_Data[1024]; /* 0 1024 */
} __attribute__((__aligned__(8)));

// <0304DAF1> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 32
struct AlignedByteArrayExplicit_t<4, ISceneLightListener*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<4, ISceneLightListener*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	ISceneLightListener** Base(AlignedByteArrayExplicit_t<4, ISceneLightListener*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	ISceneLightListener* const* Base(const AlignedByteArrayExplicit_t<4, ISceneLightListener*, 8>* );
private:
	uint8 m_Data[32]; /* 0 32 */
} __attribute__((__aligned__(8)));

// <0304F39B> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 1,024
struct AlignedByteArrayExplicit_t<128, CEnvMapSceneObject*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<128, CEnvMapSceneObject*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CEnvMapSceneObject** Base(AlignedByteArrayExplicit_t<128, CEnvMapSceneObject*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CEnvMapSceneObject* const* Base(const AlignedByteArrayExplicit_t<128, CEnvMapSceneObject*, 8>* );
private:
	uint8 m_Data[1024]; /* 0 1024 */
} __attribute__((__aligned__(8)));

// <03050C1B> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 32
struct AlignedByteArrayExplicit_t<4, ISceneEnvironmentMapListener*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<4, ISceneEnvironmentMapListener*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	ISceneEnvironmentMapListener** Base(AlignedByteArrayExplicit_t<4, ISceneEnvironmentMapListener*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	ISceneEnvironmentMapListener* const* Base(const AlignedByteArrayExplicit_t<4, ISceneEnvironmentMapListener*, 8>* );
private:
	uint8 m_Data[32]; /* 0 32 */
} __attribute__((__aligned__(8)));

// <0305261C> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 1,024
struct AlignedByteArrayExplicit_t<128, CSceneLightProbeVolumeObject*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<128, CSceneLightProbeVolumeObject*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CSceneLightProbeVolumeObject** Base(AlignedByteArrayExplicit_t<128, CSceneLightProbeVolumeObject*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CSceneLightProbeVolumeObject* const* Base(const AlignedByteArrayExplicit_t<128, CSceneLightProbeVolumeObject*, 8>* );
private:
	uint8 m_Data[1024]; /* 0 1024 */
} __attribute__((__aligned__(8)));

// <03053E9C> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 32
struct AlignedByteArrayExplicit_t<4, ISceneLightProbeVolumeListener*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<4, ISceneLightProbeVolumeListener*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	ISceneLightProbeVolumeListener** Base(AlignedByteArrayExplicit_t<4, ISceneLightProbeVolumeListener*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	ISceneLightProbeVolumeListener* const* Base(const AlignedByteArrayExplicit_t<4, ISceneLightProbeVolumeListener*, 8>* );
private:
	uint8 m_Data[32]; /* 0 32 */
} __attribute__((__aligned__(8)));

// <03113658> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 512
struct AlignedByteArrayExplicit_t<64, CWeakHandle<InfoForResourceTypeCTextureBase>, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<64, CWeakHandle<InfoForResourceTypeCTextureBase>, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CWeakHandle<InfoForResourceTypeCTextureBase>* Base(AlignedByteArrayExplicit_t<64, CWeakHandle<InfoForResourceTypeCTextureBase>, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const CWeakHandle<InfoForResourceTypeCTextureBase>* Base(const AlignedByteArrayExplicit_t<64, CWeakHandle<InfoForResourceTypeCTextureBase>, 8>* );
private:
	uint8 m_Data[512]; /* 0 512 */
} __attribute__((__aligned__(8)));

// <031152CA> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 8,192
struct AlignedByteArrayExplicit_t<1024, const DebugSphere_t*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<1024, const DebugSphere_t*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const DebugSphere_t* * Base(AlignedByteArrayExplicit_t<1024, const DebugSphere_t*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const DebugSphere_t* const* Base(const AlignedByteArrayExplicit_t<1024, const DebugSphere_t*, 8>* );
private:
	uint8 m_Data[8192]; /* 0 8192 */
} __attribute__((__aligned__(8)));

// <03205138> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 5,320
struct AlignedByteArrayExplicit_t<35, CScratchRenderTargetSystem::RenderTargetInfo_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<35, CScratchRenderTargetSystem::RenderTargetInfo_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	RenderTargetInfo_t* Base(AlignedByteArrayExplicit_t<35, CScratchRenderTargetSystem::RenderTargetInfo_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const RenderTargetInfo_t* Base(const AlignedByteArrayExplicit_t<35, CScratchRenderTargetSystem::RenderTargetInfo_t, 8>* );
private:
	uint8 m_Data[5320]; /* 0 5320 */
} __attribute__((__aligned__(8)));

// <03457900> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 64
struct AlignedByteArrayExplicit_t<4, RenderSubPassAttachment_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<4, RenderSubPassAttachment_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	RenderSubPassAttachment_t* Base(AlignedByteArrayExplicit_t<4, RenderSubPassAttachment_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const RenderSubPassAttachment_t* Base(const AlignedByteArrayExplicit_t<4, RenderSubPassAttachment_t, 8>* );
private:
	uint8 m_Data[64]; /* 0 64 */
} __attribute__((__aligned__(8)));

// <034585E2> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 32
struct AlignedByteArrayExplicit_t<2, RenderSubPassAttachment_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<2, RenderSubPassAttachment_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	RenderSubPassAttachment_t* Base(AlignedByteArrayExplicit_t<2, RenderSubPassAttachment_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const RenderSubPassAttachment_t* Base(const AlignedByteArrayExplicit_t<2, RenderSubPassAttachment_t, 8>* );
private:
	uint8 m_Data[32]; /* 0 32 */
} __attribute__((__aligned__(8)));

// <034592B8> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 16
struct AlignedByteArrayExplicit_t<2, CWeakHandle<InfoForResourceTypeCTextureBase>, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<2, CWeakHandle<InfoForResourceTypeCTextureBase>, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CWeakHandle<InfoForResourceTypeCTextureBase>* Base(AlignedByteArrayExplicit_t<2, CWeakHandle<InfoForResourceTypeCTextureBase>, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const CWeakHandle<InfoForResourceTypeCTextureBase>* Base(const AlignedByteArrayExplicit_t<2, CWeakHandle<InfoForResourceTypeCTextureBase>, 8>* );
private:
	uint8 m_Data[16]; /* 0 16 */
} __attribute__((__aligned__(8)));

// <0345A16C> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 320
struct AlignedByteArrayExplicit_t<8, RenderPassAttachmentDesc_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<8, RenderPassAttachmentDesc_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	RenderPassAttachmentDesc_t* Base(AlignedByteArrayExplicit_t<8, RenderPassAttachmentDesc_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const RenderPassAttachmentDesc_t* Base(const AlignedByteArrayExplicit_t<8, RenderPassAttachmentDesc_t, 8>* );
private:
	uint8 m_Data[320]; /* 0 320 */
} __attribute__((__aligned__(8)));

// <0345ADD7> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 2,048
struct AlignedByteArrayExplicit_t<8, RenderPassSubPass_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<8, RenderPassSubPass_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	RenderPassSubPass_t* Base(AlignedByteArrayExplicit_t<8, RenderPassSubPass_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const RenderPassSubPass_t* Base(const AlignedByteArrayExplicit_t<8, RenderPassSubPass_t, 8>* );
private:
	uint8 m_Data[2048]; /* 0 2048 */
} __attribute__((__aligned__(8)));

// <036A0CF4> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 768
struct AlignedByteArrayExplicit_t<32, RenderDescriptorDesc_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<32, RenderDescriptorDesc_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	RenderDescriptorDesc_t* Base(AlignedByteArrayExplicit_t<32, RenderDescriptorDesc_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const RenderDescriptorDesc_t* Base(const AlignedByteArrayExplicit_t<32, RenderDescriptorDesc_t, 8>* );
private:
	uint8 m_Data[768]; /* 0 768 */
} __attribute__((__aligned__(8)));

// <03ADC200> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 64
struct AlignedByteArrayExplicit_t<8, CWeakHandle<InfoForResourceTypeCTextureBase>, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<8, CWeakHandle<InfoForResourceTypeCTextureBase>, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CWeakHandle<InfoForResourceTypeCTextureBase>* Base(AlignedByteArrayExplicit_t<8, CWeakHandle<InfoForResourceTypeCTextureBase>, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const CWeakHandle<InfoForResourceTypeCTextureBase>* Base(const AlignedByteArrayExplicit_t<8, CWeakHandle<InfoForResourceTypeCTextureBase>, 8>* );
private:
	uint8 m_Data[64]; /* 0 64 */
} __attribute__((__aligned__(8)));

// <04189F27> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 280
struct AlignedByteArrayExplicit_t<1, RuntimeBuffersInfo_t::BufferInfo_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<1, RuntimeBuffersInfo_t::BufferInfo_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	BufferInfo_t* Base(AlignedByteArrayExplicit_t<1, RuntimeBuffersInfo_t::BufferInfo_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const BufferInfo_t* Base(const AlignedByteArrayExplicit_t<1, RuntimeBuffersInfo_t::BufferInfo_t, 8>* );
private:
	uint8 m_Data[280]; /* 0 280 */
} __attribute__((__aligned__(8)));

// <0494AA68> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 128
struct AlignedByteArrayExplicit_t<8, CSchemaInheritanceIterator::ClassToTraverse_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<8, CSchemaInheritanceIterator::ClassToTraverse_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	ClassToTraverse_t* Base(AlignedByteArrayExplicit_t<8, CSchemaInheritanceIterator::ClassToTraverse_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const ClassToTraverse_t* Base(const AlignedByteArrayExplicit_t<8, CSchemaInheritanceIterator::ClassToTraverse_t, 8>* );
private:
	uint8 m_Data[128]; /* 0 128 */
} __attribute__((__aligned__(8)));

// <0496C6BA> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 256
struct AlignedByteArrayExplicit_t<32, const CSchemaClassInfo*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<32, const CSchemaClassInfo*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const CSchemaClassInfo* * Base(AlignedByteArrayExplicit_t<32, const CSchemaClassInfo*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const CSchemaClassInfo* const* Base(const AlignedByteArrayExplicit_t<32, const CSchemaClassInfo*, 8>* );
private:
	uint8 m_Data[256]; /* 0 256 */
} __attribute__((__aligned__(8)));

// <04A90FE0> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 256
struct AlignedByteArrayExplicit_t<16, HitBoxSetAndMesh_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<16, HitBoxSetAndMesh_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	HitBoxSetAndMesh_t* Base(AlignedByteArrayExplicit_t<16, HitBoxSetAndMesh_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const HitBoxSetAndMesh_t* Base(const AlignedByteArrayExplicit_t<16, HitBoxSetAndMesh_t, 8>* );
private:
	uint8 m_Data[256]; /* 0 256 */
} __attribute__((__aligned__(8)));

// <04A9278D> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 512
struct AlignedByteArrayExplicit_t<32, HitBoxAndMesh_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<32, HitBoxAndMesh_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	HitBoxAndMesh_t* Base(AlignedByteArrayExplicit_t<32, HitBoxAndMesh_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const HitBoxAndMesh_t* Base(const AlignedByteArrayExplicit_t<32, HitBoxAndMesh_t, 8>* );
private:
	uint8 m_Data[512]; /* 0 512 */
} __attribute__((__aligned__(8)));

// <055332DC> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 32
struct AlignedByteArrayExplicit_t<4, KeyValues3*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<4, KeyValues3*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	KeyValues3** Base(AlignedByteArrayExplicit_t<4, KeyValues3*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	KeyValues3* const* Base(const AlignedByteArrayExplicit_t<4, KeyValues3*, 8>* );
private:
	uint8 m_Data[32]; /* 0 32 */
} __attribute__((__aligned__(8)));

// <05537585> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 64
struct AlignedByteArrayExplicit_t<8, KeyValues3*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<8, KeyValues3*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	KeyValues3** Base(AlignedByteArrayExplicit_t<8, KeyValues3*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	KeyValues3* const* Base(const AlignedByteArrayExplicit_t<8, KeyValues3*, 8>* );
private:
	uint8 m_Data[64]; /* 0 64 */
} __attribute__((__aligned__(8)));

// <05538DA0> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 64
struct AlignedByteArrayExplicit_t<8, char const*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<8, char const*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const char* * Base(AlignedByteArrayExplicit_t<8, char const*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const char* const* Base(const AlignedByteArrayExplicit_t<8, char const*, 8>* );
private:
	uint8 m_Data[64]; /* 0 64 */
} __attribute__((__aligned__(8)));

// <0553C192> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 64
struct AlignedByteArrayExplicit_t<8, CKeyValues3Cluster*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<8, CKeyValues3Cluster*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CKeyValues3Cluster** Base(AlignedByteArrayExplicit_t<8, CKeyValues3Cluster*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CKeyValues3Cluster* const* Base(const AlignedByteArrayExplicit_t<8, CKeyValues3Cluster*, 8>* );
private:
	uint8 m_Data[64]; /* 0 64 */
} __attribute__((__aligned__(8)));

// <0553D9F8> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 32
struct AlignedByteArrayExplicit_t<4, CKeyValues3ArrayCluster*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<4, CKeyValues3ArrayCluster*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CKeyValues3ArrayCluster** Base(AlignedByteArrayExplicit_t<4, CKeyValues3ArrayCluster*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CKeyValues3ArrayCluster* const* Base(const AlignedByteArrayExplicit_t<4, CKeyValues3ArrayCluster*, 8>* );
private:
	uint8 m_Data[32]; /* 0 32 */
} __attribute__((__aligned__(8)));

// <0553F25E> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 32
struct AlignedByteArrayExplicit_t<4, CKeyValues3TableCluster*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<4, CKeyValues3TableCluster*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CKeyValues3TableCluster** Base(AlignedByteArrayExplicit_t<4, CKeyValues3TableCluster*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CKeyValues3TableCluster* const* Base(const AlignedByteArrayExplicit_t<4, CKeyValues3TableCluster*, 8>* );
private:
	uint8 m_Data[32]; /* 0 32 */
} __attribute__((__aligned__(8)));

// <055B6E87> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 320
struct AlignedByteArrayExplicit_t<8, CUtlTokenReference, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<8, CUtlTokenReference, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CUtlTokenReference* Base(AlignedByteArrayExplicit_t<8, CUtlTokenReference, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const CUtlTokenReference* Base(const AlignedByteArrayExplicit_t<8, CUtlTokenReference, 8>* );
private:
	uint8 m_Data[320]; /* 0 320 */
} __attribute__((__aligned__(8)));

// <0561CE8E> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 2,048
struct AlignedByteArrayExplicit_t<256, char const*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<256, char const*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const char* * Base(AlignedByteArrayExplicit_t<256, char const*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const char* const* Base(const AlignedByteArrayExplicit_t<256, char const*, 8>* );
private:
	uint8 m_Data[2048]; /* 0 2048 */
} __attribute__((__aligned__(8)));

// <05662A64> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 128
struct AlignedByteArrayExplicit_t<8, std::pair<unsigned char*, unsigned int>, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<8, std::pair<unsigned char*, unsigned int>, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	pair<unsigned char*, unsigned int>* Base(AlignedByteArrayExplicit_t<8, std::pair<unsigned char*, unsigned int>, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const pair<unsigned char*, unsigned int>* Base(const AlignedByteArrayExplicit_t<8, std::pair<unsigned char*, unsigned int>, 8>* );
private:
	uint8 m_Data[128]; /* 0 128 */
} __attribute__((__aligned__(8)));

// <056B844B> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 128
struct AlignedByteArrayExplicit_t<8, CKV3MemberName, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<8, CKV3MemberName, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CKV3MemberName* Base(AlignedByteArrayExplicit_t<8, CKV3MemberName, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const CKV3MemberName* Base(const AlignedByteArrayExplicit_t<8, CKV3MemberName, 8>* );
private:
	uint8 m_Data[128]; /* 0 128 */
} __attribute__((__aligned__(8)));

// <056B9F72> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 64
struct AlignedByteArrayExplicit_t<8, CLoadKV3FromKV1Text::CTranslationPath*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<8, CLoadKV3FromKV1Text::CTranslationPath*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CTranslationPath** Base(AlignedByteArrayExplicit_t<8, CLoadKV3FromKV1Text::CTranslationPath*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CTranslationPath* const* Base(const AlignedByteArrayExplicit_t<8, CLoadKV3FromKV1Text::CTranslationPath*, 8>* );
private:
	uint8 m_Data[64]; /* 0 64 */
} __attribute__((__aligned__(8)));

// <0572B4D6> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 64
struct AlignedByteArrayExplicit_t<8, const CKV3FormatManager::Conversion_t*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<8, const CKV3FormatManager::Conversion_t*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const Conversion_t* * Base(AlignedByteArrayExplicit_t<8, const CKV3FormatManager::Conversion_t*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const Conversion_t* const* Base(const AlignedByteArrayExplicit_t<8, const CKV3FormatManager::Conversion_t*, 8>* );
private:
	uint8 m_Data[64]; /* 0 64 */
} __attribute__((__aligned__(8)));

// <058BB872> ../../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 64
struct AlignedByteArrayExplicit_t<4, CRenderBufferBinding, 8> {
	/* ../../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<4, CRenderBufferBinding, 8>* );
	/* ../../public/tier0/platform_compile_base.h:1614 */
	CRenderBufferBinding* Base(AlignedByteArrayExplicit_t<4, CRenderBufferBinding, 8>* );
	/* ../../public/tier0/platform_compile_base.h:1614 */
	const CRenderBufferBinding* Base(const AlignedByteArrayExplicit_t<4, CRenderBufferBinding, 8>* );
private:
	uint8 m_Data[64]; /* 0 64 */
} __attribute__((__aligned__(8)));

// <058C08FA> ../../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 112
struct AlignedByteArrayExplicit_t<1, CSceneObjectData, 8> {
	/* ../../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<1, CSceneObjectData, 8>* );
	/* ../../public/tier0/platform_compile_base.h:1614 */
	CSceneObjectData* Base(AlignedByteArrayExplicit_t<1, CSceneObjectData, 8>* );
	/* ../../public/tier0/platform_compile_base.h:1614 */
	const CSceneObjectData* Base(const AlignedByteArrayExplicit_t<1, CSceneObjectData, 8>* );
private:
	uint8 m_Data[112]; /* 0 112 */
} __attribute__((__aligned__(8)));

// <058D72F3> ../../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 256
struct AlignedByteArrayExplicit_t<16, ISceneView::WorldList_t, 8> {
	/* ../../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<16, ISceneView::WorldList_t, 8>* );
	/* ../../public/tier0/platform_compile_base.h:1614 */
	WorldList_t* Base(AlignedByteArrayExplicit_t<16, ISceneView::WorldList_t, 8>* );
	/* ../../public/tier0/platform_compile_base.h:1614 */
	const WorldList_t* Base(const AlignedByteArrayExplicit_t<16, ISceneView::WorldList_t, 8>* );
private:
	uint8 m_Data[256]; /* 0 256 */
} __attribute__((__aligned__(8)));

// <058DB0CE> ../../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 8
struct AlignedByteArrayExplicit_t<1, ISceneLayer*, 8> {
	/* ../../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<1, ISceneLayer*, 8>* );
	/* ../../public/tier0/platform_compile_base.h:1614 */
	ISceneLayer** Base(AlignedByteArrayExplicit_t<1, ISceneLayer*, 8>* );
	/* ../../public/tier0/platform_compile_base.h:1614 */
	ISceneLayer* const* Base(const AlignedByteArrayExplicit_t<1, ISceneLayer*, 8>* );
private:
	uint8 m_Data[8]; /* 0 8 */
} __attribute__((__aligned__(8)));

// <058DC4F5> ../../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 32
struct AlignedByteArrayExplicit_t<4, ConstantBufferHandle_t__*, 8> {
	/* ../../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<4, ConstantBufferHandle_t__*, 8>* );
	/* ../../public/tier0/platform_compile_base.h:1614 */
	ConstantBufferHandle_t__** Base(AlignedByteArrayExplicit_t<4, ConstantBufferHandle_t__*, 8>* );
	/* ../../public/tier0/platform_compile_base.h:1614 */
	ConstantBufferHandle_t__* const* Base(const AlignedByteArrayExplicit_t<4, ConstantBufferHandle_t__*, 8>* );
private:
	uint8 m_Data[32]; /* 0 32 */
} __attribute__((__aligned__(8)));

// <058DF04D> ../../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 32
struct AlignedByteArrayExplicit_t<2, ISceneLayer::InputTexture_t, 8> {
	/* ../../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<2, ISceneLayer::InputTexture_t, 8>* );
	/* ../../public/tier0/platform_compile_base.h:1614 */
	InputTexture_t* Base(AlignedByteArrayExplicit_t<2, ISceneLayer::InputTexture_t, 8>* );
	/* ../../public/tier0/platform_compile_base.h:1614 */
	const InputTexture_t* Base(const AlignedByteArrayExplicit_t<2, ISceneLayer::InputTexture_t, 8>* );
private:
	uint8 m_Data[32]; /* 0 32 */
} __attribute__((__aligned__(8)));

// <058E07DF> ../../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 48
struct AlignedByteArrayExplicit_t<2, ISceneLayer::InputSceneViewRenderTarget_t, 8> {
	/* ../../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<2, ISceneLayer::InputSceneViewRenderTarget_t, 8>* );
	/* ../../public/tier0/platform_compile_base.h:1614 */
	InputSceneViewRenderTarget_t* Base(AlignedByteArrayExplicit_t<2, ISceneLayer::InputSceneViewRenderTarget_t, 8>* );
	/* ../../public/tier0/platform_compile_base.h:1614 */
	const InputSceneViewRenderTarget_t* Base(const AlignedByteArrayExplicit_t<2, ISceneLayer::InputSceneViewRenderTarget_t, 8>* );
private:
	uint8 m_Data[48]; /* 0 48 */
} __attribute__((__aligned__(8)));

// <058E1ED0> ../../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 40
struct AlignedByteArrayExplicit_t<5, CWeakHandle<InfoForResourceTypeCTextureBase>, 8> {
	/* ../../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<5, CWeakHandle<InfoForResourceTypeCTextureBase>, 8>* );
	/* ../../public/tier0/platform_compile_base.h:1614 */
	CWeakHandle<InfoForResourceTypeCTextureBase>* Base(AlignedByteArrayExplicit_t<5, CWeakHandle<InfoForResourceTypeCTextureBase>, 8>* );
	/* ../../public/tier0/platform_compile_base.h:1614 */
	const CWeakHandle<InfoForResourceTypeCTextureBase>* Base(const AlignedByteArrayExplicit_t<5, CWeakHandle<InfoForResourceTypeCTextureBase>, 8>* );
private:
	uint8 m_Data[40]; /* 0 40 */
} __attribute__((__aligned__(8)));

// <058E4C6B> ../../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 16
struct AlignedByteArrayExplicit_t<1, CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, 8> {
	/* ../../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<1, CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, 8>* );
	/* ../../public/tier0/platform_compile_base.h:1614 */
	CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >* Base(AlignedByteArrayExplicit_t<1, CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, 8>* );
	/* ../../public/tier0/platform_compile_base.h:1614 */
	const CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >* Base(const AlignedByteArrayExplicit_t<1, CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >,);
private:
	uint8 m_Data[16]; /* 0 16 */
} __attribute__((__aligned__(8)));

// <058E7A97> ../../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 16
struct AlignedByteArrayExplicit_t<1, ChildSceneObjectReference_t, 8> {
	/* ../../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<1, ChildSceneObjectReference_t, 8>* );
	/* ../../public/tier0/platform_compile_base.h:1614 */
	ChildSceneObjectReference_t* Base(AlignedByteArrayExplicit_t<1, ChildSceneObjectReference_t, 8>* );
	/* ../../public/tier0/platform_compile_base.h:1614 */
	const ChildSceneObjectReference_t* Base(const AlignedByteArrayExplicit_t<1, ChildSceneObjectReference_t, 8>* );
private:
	uint8 m_Data[16]; /* 0 16 */
} __attribute__((__aligned__(8)));

// <058EBDEA> ../../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 2,400
struct AlignedByteArrayExplicit_t<20, CMeshDrawPrimitive_t, 8> {
	/* ../../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<20, CMeshDrawPrimitive_t, 8>* );
	/* ../../public/tier0/platform_compile_base.h:1614 */
	CMeshDrawPrimitive_t* Base(AlignedByteArrayExplicit_t<20, CMeshDrawPrimitive_t, 8>* );
	/* ../../public/tier0/platform_compile_base.h:1614 */
	const CMeshDrawPrimitive_t* Base(const AlignedByteArrayExplicit_t<20, CMeshDrawPrimitive_t, 8>* );
private:
	uint8 m_Data[2400]; /* 0 2400 */
} __attribute__((__aligned__(8)));

// <05B9DFAD> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 512
struct AlignedByteArrayExplicit_t<64, float const*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<64, float const*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const float* * Base(AlignedByteArrayExplicit_t<64, float const*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const float* const* Base(const AlignedByteArrayExplicit_t<64, float const*, 8>* );
private:
	uint8 m_Data[512]; /* 0 512 */
} __attribute__((__aligned__(8)));

// <05DA0183> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 4,096
struct AlignedByteArrayExplicit_t<256, CQuickHullSimplifier::Face_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<256, CQuickHullSimplifier::Face_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	Face_t* Base(AlignedByteArrayExplicit_t<256, CQuickHullSimplifier::Face_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const Face_t* Base(const AlignedByteArrayExplicit_t<256, CQuickHullSimplifier::Face_t, 8>* );
private:
	uint8 m_Data[4096]; /* 0 4096 */
} __attribute__((__aligned__(8)));

// <05DACF95> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 64
struct AlignedByteArrayExplicit_t<8, const qhVertex*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<8, const qhVertex*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const qhVertex* * Base(AlignedByteArrayExplicit_t<8, const qhVertex*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const qhVertex* const* Base(const AlignedByteArrayExplicit_t<8, const qhVertex*, 8>* );
private:
	uint8 m_Data[64]; /* 0 64 */
} __attribute__((__aligned__(8)));

// <05DAE0AE> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 128
struct AlignedByteArrayExplicit_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointer_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleW);
	/* ../public/tier0/platform_compile_base.h:1614 */
	ComponentHandleWithListPointer_t* Base(AlignedByteArrayExplicit_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleW);
	/* ../public/tier0/platform_compile_base.h:1614 */
	const ComponentHandleWithListPointer_t* Base(const AlignedByteArrayExplicit_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentH);
private:
	uint8 m_Data[128]; /* 0 128 */
} __attribute__((__aligned__(8)));

// <05DB15BC> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 512
struct AlignedByteArrayExplicit_t<32, CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentHandleWithListPointer_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<32, CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentHandleWi);
	/* ../public/tier0/platform_compile_base.h:1614 */
	ComponentHandleWithListPointer_t* Base(AlignedByteArrayExplicit_t<32, CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentHandleWi);
	/* ../public/tier0/platform_compile_base.h:1614 */
	const ComponentHandleWithListPointer_t* Base(const AlignedByteArrayExplicit_t<32, CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentHa);
private:
	uint8 m_Data[512]; /* 0 512 */
} __attribute__((__aligned__(8)));

// <05E3B6D4> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 192
struct AlignedByteArrayExplicit_t<12, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<12, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Ver);
	/* ../public/tier0/platform_compile_base.h:1614 */
	ComponentHandleWithListPointer_t* Base(AlignedByteArrayExplicit_t<12, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Ver);
	/* ../public/tier0/platform_compile_base.h:1614 */
	const ComponentHandleWithListPointer_t* Base(const AlignedByteArrayExplicit_t<12, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t);
private:
	uint8 m_Data[192]; /* 0 192 */
} __attribute__((__aligned__(8)));

// <05E3D929> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 128
struct AlignedByteArrayExplicit_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vert);
	/* ../public/tier0/platform_compile_base.h:1614 */
	ComponentHandleWithListPointer_t* Base(AlignedByteArrayExplicit_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vert);
	/* ../public/tier0/platform_compile_base.h:1614 */
	const ComponentHandleWithListPointer_t* Base(const AlignedByteArrayExplicit_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>);
private:
	uint8 m_Data[128]; /* 0 128 */
} __attribute__((__aligned__(8)));

// <05E417BB> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 256
struct AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Ver);
	/* ../public/tier0/platform_compile_base.h:1614 */
	ComponentHandleWithListPointer_t* Base(AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Ver);
	/* ../public/tier0/platform_compile_base.h:1614 */
	const ComponentHandleWithListPointer_t* Base(const AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t);
private:
	uint8 m_Data[256]; /* 0 256 */
} __attribute__((__aligned__(8)));

// <05E45E80> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 128
struct AlignedByteArrayExplicit_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::ComponentHandleWithListPointer_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face);
	/* ../public/tier0/platform_compile_base.h:1614 */
	ComponentHandleWithListPointer_t* Base(AlignedByteArrayExplicit_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face);
	/* ../public/tier0/platform_compile_base.h:1614 */
	const ComponentHandleWithListPointer_t* Base(const AlignedByteArrayExplicit_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>);
private:
	uint8 m_Data[128]; /* 0 128 */
} __attribute__((__aligned__(8)));

// <05ECFEE5> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 256
struct AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFa);
	/* ../public/tier0/platform_compile_base.h:1614 */
	ComponentHandleWithListPointer_t* Base(AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFa);
	/* ../public/tier0/platform_compile_base.h:1614 */
	const ComponentHandleWithListPointer_t* Base(const AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, Hul);
private:
	uint8 m_Data[256]; /* 0 256 */
} __attribute__((__aligned__(8)));

// <05F5308A> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 256
struct AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	ComponentHandleWithListPointer_t* Base(AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const ComponentHandleWithListPointer_t* Base(const AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, );
private:
	uint8 m_Data[256]; /* 0 256 */
} __attribute__((__aligned__(8)));

// <05F549CD> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 256
struct AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	ComponentHandleWithListPointer_t* Base(AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const ComponentHandleWithListPointer_t* Base(const AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, 8> );
private:
	uint8 m_Data[256]; /* 0 256 */
} __attribute__((__aligned__(8)));

// <05F5731A> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 256
struct AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	ComponentHandleWithListPointer_t* Base(AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const ComponentHandleWithListPointer_t* Base(const AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, 8>* );
private:
	uint8 m_Data[256]; /* 0 256 */
} __attribute__((__aligned__(8)));

// <05F58BDE> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 256
struct AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	ComponentHandleWithListPointer_t* Base(AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const ComponentHandleWithListPointer_t* Base(const AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, 8>* );
private:
	uint8 m_Data[256]; /* 0 256 */
} __attribute__((__aligned__(8)));

// <06053350> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 512
struct AlignedByteArrayExplicit_t<32, CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<32, CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	ComponentHandleWithListPointer_t* Base(AlignedByteArrayExplicit_t<32, CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const ComponentHandleWithListPointer_t* Base(const AlignedByteArrayExplicit_t<32, CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, );
private:
	uint8 m_Data[512]; /* 0 512 */
} __attribute__((__aligned__(8)));

// <062355F1> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 448
struct AlignedByteArrayExplicit_t<8, RayTracingSingleResult_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<8, RayTracingSingleResult_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	RayTracingSingleResult_t* Base(AlignedByteArrayExplicit_t<8, RayTracingSingleResult_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const RayTracingSingleResult_t* Base(const AlignedByteArrayExplicit_t<8, RayTracingSingleResult_t, 8>* );
private:
	uint8 m_Data[448]; /* 0 448 */
} __attribute__((__aligned__(8)));

// <06D67503> ../../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 512
struct AlignedByteArrayExplicit_t<64, CAudioProcessor*, 8> {
	/* ../../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<64, CAudioProcessor*, 8>* );
	/* ../../public/tier0/platform_compile_base.h:1614 */
	CAudioProcessor** Base(AlignedByteArrayExplicit_t<64, CAudioProcessor*, 8>* );
	/* ../../public/tier0/platform_compile_base.h:1614 */
	CAudioProcessor* const* Base(const AlignedByteArrayExplicit_t<64, CAudioProcessor*, 8>* );
private:
	uint8 m_Data[512]; /* 0 512 */
} __attribute__((__aligned__(8)));

// <06F1D162> ../../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 64
struct AlignedByteArrayExplicit_t<8, CFeAgglomerator::CCluster*, 8> {
	/* ../../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<8, CFeAgglomerator::CCluster*, 8>* );
	/* ../../public/tier0/platform_compile_base.h:1614 */
	CCluster** Base(AlignedByteArrayExplicit_t<8, CFeAgglomerator::CCluster*, 8>* );
	/* ../../public/tier0/platform_compile_base.h:1614 */
	CCluster* const* Base(const AlignedByteArrayExplicit_t<8, CFeAgglomerator::CCluster*, 8>* );
private:
	uint8 m_Data[64]; /* 0 64 */
} __attribute__((__aligned__(8)));

// <000845E1> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 24
struct AlignedByteArrayExplicit_t<3, IIKRuleContext*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<3, IIKRuleContext*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	IIKRuleContext** Base(AlignedByteArrayExplicit_t<3, IIKRuleContext*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	IIKRuleContext* const* Base(const AlignedByteArrayExplicit_t<3, IIKRuleContext*, 8>* );
private:
	uint8 m_Data[24]; /* 0 24 */
} __attribute__((__aligned__(8)));

// <001343C0> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 1,280
struct AlignedByteArrayExplicit_t<16, CIKChainContext, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<16, CIKChainContext, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CIKChainContext* Base(AlignedByteArrayExplicit_t<16, CIKChainContext, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const CIKChainContext* Base(const AlignedByteArrayExplicit_t<16, CIKChainContext, 8>* );
private:
	uint8 m_Data[1280]; /* 0 1280 */
} __attribute__((__aligned__(8)));

// <00B27E25> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 32,768
struct AlignedByteArrayExplicit_t<4096, CUtlString, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<4096, CUtlString, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CUtlString* Base(AlignedByteArrayExplicit_t<4096, CUtlString, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const CUtlString* Base(const AlignedByteArrayExplicit_t<4096, CUtlString, 8>* );
private:
	uint8 m_Data[32768]; /* 0 32768 */
} __attribute__((__aligned__(8)));

// <00B9DFBC> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 384
struct AlignedByteArrayExplicit_t<12, CAnimationChannelResult, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<12, CAnimationChannelResult, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CAnimationChannelResult* Base(AlignedByteArrayExplicit_t<12, CAnimationChannelResult, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const CAnimationChannelResult* Base(const AlignedByteArrayExplicit_t<12, CAnimationChannelResult, 8>* );
private:
	uint8 m_Data[384]; /* 0 384 */
} __attribute__((__aligned__(8)));

// <000DFDBD> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 128
struct AlignedByteArrayExplicit_t<16, CDependencyDescriptor*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<16, CDependencyDescriptor*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CDependencyDescriptor** Base(AlignedByteArrayExplicit_t<16, CDependencyDescriptor*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CDependencyDescriptor* const* Base(const AlignedByteArrayExplicit_t<16, CDependencyDescriptor*, 8>* );
private:
	uint8 m_Data[128]; /* 0 128 */
} __attribute__((__aligned__(8)));

// <0022645C> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 800
struct AlignedByteArrayExplicit_t<100, CDependencyDescriptor*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<100, CDependencyDescriptor*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CDependencyDescriptor** Base(AlignedByteArrayExplicit_t<100, CDependencyDescriptor*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CDependencyDescriptor* const* Base(const AlignedByteArrayExplicit_t<100, CDependencyDescriptor*, 8>* );
private:
	uint8 m_Data[800]; /* 0 800 */
} __attribute__((__aligned__(8)));

// <00419F83> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 64
struct AlignedByteArrayExplicit_t<4, CBarrierHelperVulkan::BufferState_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<4, CBarrierHelperVulkan::BufferState_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	BufferState_t* Base(AlignedByteArrayExplicit_t<4, CBarrierHelperVulkan::BufferState_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const BufferState_t* Base(const AlignedByteArrayExplicit_t<4, CBarrierHelperVulkan::BufferState_t, 8>* );
private:
	uint8 m_Data[64]; /* 0 64 */
} __attribute__((__aligned__(8)));

// <0041B800> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 96
struct AlignedByteArrayExplicit_t<4, CBarrierHelperVulkan::UAVState_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<4, CBarrierHelperVulkan::UAVState_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	UAVState_t* Base(AlignedByteArrayExplicit_t<4, CBarrierHelperVulkan::UAVState_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const UAVState_t* Base(const AlignedByteArrayExplicit_t<4, CBarrierHelperVulkan::UAVState_t, 8>* );
private:
	uint8 m_Data[96]; /* 0 96 */
} __attribute__((__aligned__(8)));

// <00420102> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 96
struct AlignedByteArrayExplicit_t<4, RenderBufferBarrier_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<4, RenderBufferBarrier_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	RenderBufferBarrier_t* Base(AlignedByteArrayExplicit_t<4, RenderBufferBarrier_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const RenderBufferBarrier_t* Base(const AlignedByteArrayExplicit_t<4, RenderBufferBarrier_t, 8>* );
private:
	uint8 m_Data[96]; /* 0 96 */
} __attribute__((__aligned__(8)));

// <00421950> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 160
struct AlignedByteArrayExplicit_t<4, RenderUAVBarrier_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<4, RenderUAVBarrier_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	RenderUAVBarrier_t* Base(AlignedByteArrayExplicit_t<4, RenderUAVBarrier_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const RenderUAVBarrier_t* Base(const AlignedByteArrayExplicit_t<4, RenderUAVBarrier_t, 8>* );
private:
	uint8 m_Data[160]; /* 0 160 */
} __attribute__((__aligned__(8)));

// <0049CB30> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 8,192
struct AlignedByteArrayExplicit_t<128, VkWriteDescriptorSet, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<128, VkWriteDescriptorSet, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	VkWriteDescriptorSet* Base(AlignedByteArrayExplicit_t<128, VkWriteDescriptorSet, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const VkWriteDescriptorSet* Base(const AlignedByteArrayExplicit_t<128, VkWriteDescriptorSet, 8>* );
private:
	uint8 m_Data[8192]; /* 0 8192 */
} __attribute__((__aligned__(8)));

// <0049E3B0> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 3,072
struct AlignedByteArrayExplicit_t<128, VkDescriptorImageInfo, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<128, VkDescriptorImageInfo, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	VkDescriptorImageInfo* Base(AlignedByteArrayExplicit_t<128, VkDescriptorImageInfo, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const VkDescriptorImageInfo* Base(const AlignedByteArrayExplicit_t<128, VkDescriptorImageInfo, 8>* );
private:
	uint8 m_Data[3072]; /* 0 3072 */
} __attribute__((__aligned__(8)));

// <0049FC30> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 3,072
struct AlignedByteArrayExplicit_t<128, VkDescriptorBufferInfo, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<128, VkDescriptorBufferInfo, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	VkDescriptorBufferInfo* Base(AlignedByteArrayExplicit_t<128, VkDescriptorBufferInfo, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const VkDescriptorBufferInfo* Base(const AlignedByteArrayExplicit_t<128, VkDescriptorBufferInfo, 8>* );
private:
	uint8 m_Data[3072]; /* 0 3072 */
} __attribute__((__aligned__(8)));

// <004D28E5> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 47,104
struct AlignedByteArrayExplicit_t<128, VulkanFramebufferState_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<128, VulkanFramebufferState_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	VulkanFramebufferState_t* Base(AlignedByteArrayExplicit_t<128, VulkanFramebufferState_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const VulkanFramebufferState_t* Base(const AlignedByteArrayExplicit_t<128, VulkanFramebufferState_t, 8>* );
private:
	uint8 m_Data[47104]; /* 0 47104 */
} __attribute__((__aligned__(8)));

// <004FBF3C> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 1,152
struct AlignedByteArrayExplicit_t<16, VkImageMemoryBarrier, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<16, VkImageMemoryBarrier, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	VkImageMemoryBarrier* Base(AlignedByteArrayExplicit_t<16, VkImageMemoryBarrier, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const VkImageMemoryBarrier* Base(const AlignedByteArrayExplicit_t<16, VkImageMemoryBarrier, 8>* );
private:
	uint8 m_Data[1152]; /* 0 1152 */
} __attribute__((__aligned__(8)));

// <005D58B6> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 1,024
struct AlignedByteArrayExplicit_t<128, PerThreadDataVulkan_t*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<128, PerThreadDataVulkan_t*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	PerThreadDataVulkan_t** Base(AlignedByteArrayExplicit_t<128, PerThreadDataVulkan_t*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	PerThreadDataVulkan_t* const* Base(const AlignedByteArrayExplicit_t<128, PerThreadDataVulkan_t*, 8>* );
private:
	uint8 m_Data[1024]; /* 0 1024 */
} __attribute__((__aligned__(8)));

// <006E89B2> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 32
struct AlignedByteArrayExplicit_t<4, VkPipeline_T*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<4, VkPipeline_T*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	VkPipeline_T** Base(AlignedByteArrayExplicit_t<4, VkPipeline_T*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	VkPipeline_T* const* Base(const AlignedByteArrayExplicit_t<4, VkPipeline_T*, 8>* );
private:
	uint8 m_Data[32]; /* 0 32 */
} __attribute__((__aligned__(8)));

// <006EA204> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 32
struct AlignedByteArrayExplicit_t<4, const CDescriptorSetVulkan*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<4, const CDescriptorSetVulkan*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const CDescriptorSetVulkan* * Base(AlignedByteArrayExplicit_t<4, const CDescriptorSetVulkan*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const CDescriptorSetVulkan* const* Base(const AlignedByteArrayExplicit_t<4, const CDescriptorSetVulkan*, 8>* );
private:
	uint8 m_Data[32]; /* 0 32 */
} __attribute__((__aligned__(8)));

// <0099FE5A> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 32
struct AlignedByteArrayExplicit_t<4, RenderDescriptorSetHandle_t__*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<4, RenderDescriptorSetHandle_t__*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	RenderDescriptorSetHandle_t__** Base(AlignedByteArrayExplicit_t<4, RenderDescriptorSetHandle_t__*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	RenderDescriptorSetHandle_t__* const* Base(const AlignedByteArrayExplicit_t<4, RenderDescriptorSetHandle_t__*, 8>* );
private:
	uint8 m_Data[32]; /* 0 32 */
} __attribute__((__aligned__(8)));

// <00023999> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 528
struct AlignedByteArrayExplicit_t<1, CAssertGlobals, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<1, CAssertGlobals, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CAssertGlobals* Base(AlignedByteArrayExplicit_t<1, CAssertGlobals, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const CAssertGlobals* Base(const AlignedByteArrayExplicit_t<1, CAssertGlobals, 8>* );
private:
	uint8 m_Data[528]; /* 0 528 */
} __attribute__((__aligned__(8)));

// <0009B930> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 56
struct AlignedByteArrayExplicit_t<1, CCommandLine, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<1, CCommandLine, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CCommandLine* Base(AlignedByteArrayExplicit_t<1, CCommandLine, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const CCommandLine* Base(const AlignedByteArrayExplicit_t<1, CCommandLine, 8>* );
private:
	uint8 m_Data[56]; /* 0 56 */
} __attribute__((__aligned__(8)));

// <0014FF6B> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 344
struct AlignedByteArrayExplicit_t<1, FiberToolsOrderedConstructionGlobals_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<1, FiberToolsOrderedConstructionGlobals_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	FiberToolsOrderedConstructionGlobals_t* Base(AlignedByteArrayExplicit_t<1, FiberToolsOrderedConstructionGlobals_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const FiberToolsOrderedConstructionGlobals_t* Base(const AlignedByteArrayExplicit_t<1, FiberToolsOrderedConstructionGlobals_t, 8>* );
private:
	uint8 m_Data[344]; /* 0 344 */
} __attribute__((__aligned__(8)));

// <00150736> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 96
struct AlignedByteArrayExplicit_t<1, CFiberJobPool, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<1, CFiberJobPool, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CFiberJobPool* Base(AlignedByteArrayExplicit_t<1, CFiberJobPool, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const CFiberJobPool* Base(const AlignedByteArrayExplicit_t<1, CFiberJobPool, 8>* );
private:
	uint8 m_Data[96]; /* 0 96 */
} __attribute__((__aligned__(8)));

// <00151071> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 304
struct AlignedByteArrayExplicit_t<1, CFiber, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<1, CFiber, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CFiber* Base(AlignedByteArrayExplicit_t<1, CFiber, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const CFiber* Base(const AlignedByteArrayExplicit_t<1, CFiber, 8>* );
private:
	uint8 m_Data[304]; /* 0 304 */
} __attribute__((__aligned__(8)));

// <001C16F8> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 384
struct AlignedByteArrayExplicit_t<48, CExecMultiWorkerJob*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<48, CExecMultiWorkerJob*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CExecMultiWorkerJob** Base(AlignedByteArrayExplicit_t<48, CExecMultiWorkerJob*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CExecMultiWorkerJob* const* Base(const AlignedByteArrayExplicit_t<48, CExecMultiWorkerJob*, 8>* );
private:
	uint8 m_Data[384]; /* 0 384 */
} __attribute__((__aligned__(8)));

// <00280320> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 54,496
struct AlignedByteArrayExplicit_t<1, CLoggingSystem, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<1, CLoggingSystem, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CLoggingSystem* Base(AlignedByteArrayExplicit_t<1, CLoggingSystem, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const CLoggingSystem* Base(const AlignedByteArrayExplicit_t<1, CLoggingSystem, 8>* );
private:
	uint8 m_Data[54496]; /* 0 54496 */
} __attribute__((__aligned__(8)));

// <0037E57A> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 208
struct AlignedByteArrayExplicit_t<1, CBufferStringN<200>, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<1, CBufferStringN<200>, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CBufferStringN<200>* Base(AlignedByteArrayExplicit_t<1, CBufferStringN<200>, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const CBufferStringN<200>* Base(const AlignedByteArrayExplicit_t<1, CBufferStringN<200>, 8>* );
private:
	uint8 m_Data[208]; /* 0 208 */
} __attribute__((__aligned__(8)));

// <00396C15> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 13,528
struct AlignedByteArrayExplicit_t<1, SignalHandlerMemory_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<1, SignalHandlerMemory_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	SignalHandlerMemory_t* Base(AlignedByteArrayExplicit_t<1, SignalHandlerMemory_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const SignalHandlerMemory_t* Base(const AlignedByteArrayExplicit_t<1, SignalHandlerMemory_t, 8>* );
private:
	uint8 m_Data[13528]; /* 0 13528 */
} __attribute__((__aligned__(8)));

// <00487E82> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 24
struct AlignedByteArrayExplicit_t<1, CThreadFastMutex, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<1, CThreadFastMutex, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CThreadFastMutex* Base(AlignedByteArrayExplicit_t<1, CThreadFastMutex, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const CThreadFastMutex* Base(const AlignedByteArrayExplicit_t<1, CThreadFastMutex, 8>* );
private:
	uint8 m_Data[24]; /* 0 24 */
} __attribute__((__aligned__(8)));

// <004C7D83> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 16
struct AlignedByteArrayExplicit_t<1, CThreadLocalScope::CScopeCreatedOrDestroyedHandler, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<1, CThreadLocalScope::CScopeCreatedOrDestroyedHandler, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CScopeCreatedOrDestroyedHandler* Base(AlignedByteArrayExplicit_t<1, CThreadLocalScope::CScopeCreatedOrDestroyedHandler, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const CScopeCreatedOrDestroyedHandler* Base(const AlignedByteArrayExplicit_t<1, CThreadLocalScope::CScopeCreatedOrDestroyedHandler, 8>* );
private:
	uint8 m_Data[16]; /* 0 16 */
} __attribute__((__aligned__(8)));

// <004C954E> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 8
struct AlignedByteArrayExplicit_t<1, CConstructedMainThreadID, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<1, CConstructedMainThreadID, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CConstructedMainThreadID* Base(AlignedByteArrayExplicit_t<1, CConstructedMainThreadID, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const CConstructedMainThreadID* Base(const AlignedByteArrayExplicit_t<1, CConstructedMainThreadID, 8>* );
private:
	uint8 m_Data[8]; /* 0 8 */
} __attribute__((__aligned__(8)));

// <004C9BFC> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 56
struct AlignedByteArrayExplicit_t<1, CThreadLocalScope, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<1, CThreadLocalScope, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CThreadLocalScope* Base(AlignedByteArrayExplicit_t<1, CThreadLocalScope, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const CThreadLocalScope* Base(const AlignedByteArrayExplicit_t<1, CThreadLocalScope, 8>* );
private:
	uint8 m_Data[56]; /* 0 56 */
} __attribute__((__aligned__(8)));

// <00066ECC> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 1,024
struct AlignedByteArrayExplicit_t<128, CSchemaClassInfo*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<128, CSchemaClassInfo*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CSchemaClassInfo** Base(AlignedByteArrayExplicit_t<128, CSchemaClassInfo*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CSchemaClassInfo* const* Base(const AlignedByteArrayExplicit_t<128, CSchemaClassInfo*, 8>* );
private:
	uint8 m_Data[1024]; /* 0 1024 */
} __attribute__((__aligned__(8)));

// <0006873A> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 1,024
struct AlignedByteArrayExplicit_t<128, CSchemaEnumInfo*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<128, CSchemaEnumInfo*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CSchemaEnumInfo** Base(AlignedByteArrayExplicit_t<128, CSchemaEnumInfo*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CSchemaEnumInfo* const* Base(const AlignedByteArrayExplicit_t<128, CSchemaEnumInfo*, 8>* );
private:
	uint8 m_Data[1024]; /* 0 1024 */
} __attribute__((__aligned__(8)));

// <0015314F> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 32
struct AlignedByteArrayExplicit_t<4, CModelTypeManager::AsyncProcessDataResults::MeshData*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<4, CModelTypeManager::AsyncProcessDataResults::MeshData*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	MeshData** Base(AlignedByteArrayExplicit_t<4, CModelTypeManager::AsyncProcessDataResults::MeshData*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	MeshData* const* Base(const AlignedByteArrayExplicit_t<4, CModelTypeManager::AsyncProcessDataResults::MeshData*, 8>* );
private:
	uint8 m_Data[32]; /* 0 32 */
} __attribute__((__aligned__(8)));

// <0033D034> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 32
struct AlignedByteArrayExplicit_t<4, const CAnimationGroupResource*, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<4, const CAnimationGroupResource*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const CAnimationGroupResource* * Base(AlignedByteArrayExplicit_t<4, const CAnimationGroupResource*, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const CAnimationGroupResource* const* Base(const AlignedByteArrayExplicit_t<4, const CAnimationGroupResource*, 8>* );
private:
	uint8 m_Data[32]; /* 0 32 */
} __attribute__((__aligned__(8)));

// <0007F3FE> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 6,912
struct AlignedByteArrayExplicit_t<6, CMaterialMode, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<6, CMaterialMode, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CMaterialMode* Base(AlignedByteArrayExplicit_t<6, CMaterialMode, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const CMaterialMode* Base(const AlignedByteArrayExplicit_t<6, CMaterialMode, 8>* );
private:
	uint8 m_Data[6912]; /* 0 6912 */
} __attribute__((__aligned__(8)));

// <0014C9BD> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 512
struct AlignedByteArrayExplicit_t<32, CMaterialLayer::CommandBufferInfo_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<32, CMaterialLayer::CommandBufferInfo_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CommandBufferInfo_t* Base(AlignedByteArrayExplicit_t<32, CMaterialLayer::CommandBufferInfo_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const CommandBufferInfo_t* Base(const AlignedByteArrayExplicit_t<32, CMaterialLayer::CommandBufferInfo_t, 8>* );
private:
	uint8 m_Data[512]; /* 0 512 */
} __attribute__((__aligned__(8)));

// <0023EF2D> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 256
struct AlignedByteArrayExplicit_t<16, texture_use_info_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<16, texture_use_info_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	texture_use_info_t* Base(AlignedByteArrayExplicit_t<16, texture_use_info_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const texture_use_info_t* Base(const AlignedByteArrayExplicit_t<16, texture_use_info_t, 8>* );
private:
	uint8 m_Data[256]; /* 0 256 */
} __attribute__((__aligned__(8)));

// <0023FBE0> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 768
struct AlignedByteArrayExplicit_t<16, RenderDescriptorBinding_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<16, RenderDescriptorBinding_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	RenderDescriptorBinding_t* Base(AlignedByteArrayExplicit_t<16, RenderDescriptorBinding_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const RenderDescriptorBinding_t* Base(const AlignedByteArrayExplicit_t<16, RenderDescriptorBinding_t, 8>* );
private:
	uint8 m_Data[768]; /* 0 768 */
} __attribute__((__aligned__(8)));

// <00427F60> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 64
struct AlignedByteArrayExplicit_t<2, CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<2, CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >* Base(AlignedByteArrayExplicit_t<2, CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >* Base(const AlignedByteArrayExplicit_t<2, CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, 8>* );
private:
	uint8 m_Data[64]; /* 0 64 */
} __attribute__((__aligned__(8)));

// <00570CC5> ../public/tier0/platform_compile_base.h:1614
// member functions: 3
// member variable: 1
// struct size: 128
struct AlignedByteArrayExplicit_t<8, IMaterial2::TextureAttributeValue_t, 8> {
	/* ../public/tier0/platform_compile_base.h:1614 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<8, IMaterial2::TextureAttributeValue_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	TextureAttributeValue_t* Base(AlignedByteArrayExplicit_t<8, IMaterial2::TextureAttributeValue_t, 8>* );
	/* ../public/tier0/platform_compile_base.h:1614 */
	const TextureAttributeValue_t* Base(const AlignedByteArrayExplicit_t<8, IMaterial2::TextureAttributeValue_t, 8>* );
private:
	uint8 m_Data[128]; /* 0 128 */
} __attribute__((__aligned__(8)));

// <062EB3D2> ../public/tier0/platform_compile_base.h:1615
inline void AlignedByteArrayExplicit_t<32, RayTracingResult_t, 16>::Base()
{
} /* size: 0 */

// <06286AAB> ../public/tier0/platform_compile_base.h:1615
void AlignedByteArrayExplicit_t<32, RayTracingResult_t, 16>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <06286A80> ../public/tier0/platform_compile_base.h:1615
inline void AlignedByteArrayExplicit_t<32, RayTracingResult_t, 16>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <06077E10> ../public/tier0/platform_compile_base.h:1615
void AlignedByteArrayExplicit_t<16, QuaternionAligned, 16>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <06077DE5> ../public/tier0/platform_compile_base.h:1615
inline void AlignedByteArrayExplicit_t<16, QuaternionAligned, 16>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <06077DCC> ../public/tier0/platform_compile_base.h:1615
inline void AlignedByteArrayExplicit_t<16, QuaternionAligned, 16>::Base()
{
} /* size: 0 */

// <053E9BFD> ../public/tier0/platform_compile_base.h:1615
void AlignedByteArrayExplicit_t<64, CTransform, 16>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <053E9BD2> ../public/tier0/platform_compile_base.h:1615
inline void AlignedByteArrayExplicit_t<64, CTransform, 16>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <053E9BB9> ../public/tier0/platform_compile_base.h:1615
inline void AlignedByteArrayExplicit_t<64, CTransform, 16>::Base()
{
} /* size: 0 */

// <04998ED6> ../public/tier0/platform_compile_base.h:1615
void AlignedByteArrayExplicit_t<128, CTransform, 16>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <04998EAB> ../public/tier0/platform_compile_base.h:1615
inline void AlignedByteArrayExplicit_t<128, CTransform, 16>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <04998E92> ../public/tier0/platform_compile_base.h:1615
inline void AlignedByteArrayExplicit_t<128, CTransform, 16>::Base()
{
} /* size: 0 */

// <040ADCB6> ../public/tier0/platform_compile_base.h:1615
inline void AlignedByteArrayExplicit_t<2, CFrustum, 16>::Base()
{
} /* size: 0 */

// <034600DD> ../public/tier0/platform_compile_base.h:1615
void AlignedByteArrayExplicit_t<2, CFrustum, 16>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0240A17C> ../public/tier0/platform_compile_base.h:1615
void AlignedByteArrayExplicit_t<2, CAudioMixBuffer, 16>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0240A151> ../public/tier0/platform_compile_base.h:1615
inline void AlignedByteArrayExplicit_t<2, CAudioMixBuffer, 16>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <0240A138> ../public/tier0/platform_compile_base.h:1615
inline void AlignedByteArrayExplicit_t<2, CAudioMixBuffer, 16>::Base()
{
} /* size: 0 */

// <027EE87E> ../public/tier0/platform_compile_base.h:1615
void AlignedByteArrayExplicit_t<32, matrix3x4a_t, 16>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <027EE853> ../public/tier0/platform_compile_base.h:1615
inline void AlignedByteArrayExplicit_t<32, matrix3x4a_t, 16>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <027EE83A> ../public/tier0/platform_compile_base.h:1615
inline void AlignedByteArrayExplicit_t<32, matrix3x4a_t, 16>::Base()
{
} /* size: 0 */

// <027EE7B7> ../public/tier0/platform_compile_base.h:1615
void AlignedByteArrayExplicit_t<32, CTransform, 16>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <027EE78C> ../public/tier0/platform_compile_base.h:1615
inline void AlignedByteArrayExplicit_t<32, CTransform, 16>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <027EC199> ../public/tier0/platform_compile_base.h:1615
void AlignedByteArrayExplicit_t<12, IKLocked_t, 16>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <027EC16E> ../public/tier0/platform_compile_base.h:1615
inline void AlignedByteArrayExplicit_t<12, IKLocked_t, 16>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <027EC155> ../public/tier0/platform_compile_base.h:1615
inline void AlignedByteArrayExplicit_t<12, IKLocked_t, 16>::Base()
{
} /* size: 0 */

// <02729017> ../public/tier0/platform_compile_base.h:1615
void AlignedByteArrayExplicit_t<32, CAnimationResult, 16>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <02728FED> ../public/tier0/platform_compile_base.h:1615
inline void AlignedByteArrayExplicit_t<32, CAnimationResult, 16>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <02728FD4> ../public/tier0/platform_compile_base.h:1615
inline void AlignedByteArrayExplicit_t<32, CAnimationResult, 16>::Base()
{
} /* size: 0 */

// <025B800F> ../public/tier0/platform_compile_base.h:1615
void AlignedByteArrayExplicit_t<128, matrix3x4a_t, 16>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <025B7FE4> ../public/tier0/platform_compile_base.h:1615
inline void AlignedByteArrayExplicit_t<128, matrix3x4a_t, 16>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <025B7FCB> ../public/tier0/platform_compile_base.h:1615
inline void AlignedByteArrayExplicit_t<128, matrix3x4a_t, 16>::Base()
{
} /* size: 0 */

// <025B3A71> ../public/tier0/platform_compile_base.h:1615
inline void AlignedByteArrayExplicit_t<256, CAnimationDecodeCacheEntry_t, 16>::Base()
{
} /* size: 0 */

// <00C2FD06> ../public/tier0/platform_compile_base.h:1615
void AlignedByteArrayExplicit_t<256, CAnimationDecodeCacheEntry_t, 16>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <00C2FCDB> ../public/tier0/platform_compile_base.h:1615
inline void AlignedByteArrayExplicit_t<256, CAnimationDecodeCacheEntry_t, 16>::AlignedByteArrayExplicit_t()
{
	{
	}
} /* size: 0 */

// <02406350> ../public/tier0/platform_compile_base.h:1615
// member functions: 3
// member variable: 1
// struct size: 4,096
struct AlignedByteArrayExplicit_t<2, CAudioMixBuffer, 16> {
	/* ../public/tier0/platform_compile_base.h:1615 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<2, CAudioMixBuffer, 16>* );
	/* ../public/tier0/platform_compile_base.h:1615 */
	CAudioMixBuffer* Base(AlignedByteArrayExplicit_t<2, CAudioMixBuffer, 16>* );
	/* ../public/tier0/platform_compile_base.h:1615 */
	const CAudioMixBuffer* Base(const AlignedByteArrayExplicit_t<2, CAudioMixBuffer, 16>* );
private:
	uint8 m_Data[4096]; /* 0 4096 */
} __attribute__((__aligned__(16)));

// <02B5E3EE> ../public/tier0/platform_compile_base.h:1615
// member functions: 3
// member variable: 1
// struct size: 2,272
struct AlignedByteArrayExplicit_t<2, CFrustum, 16> {
	/* ../public/tier0/platform_compile_base.h:1615 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<2, CFrustum, 16>* );
	/* ../public/tier0/platform_compile_base.h:1615 */
	CFrustum* Base(AlignedByteArrayExplicit_t<2, CFrustum, 16>* );
	/* ../public/tier0/platform_compile_base.h:1615 */
	const CFrustum* Base(const AlignedByteArrayExplicit_t<2, CFrustum, 16>* );
private:
	uint8 m_Data[2272]; /* 0 2272 */
} __attribute__((__aligned__(16)));

// <03B83DCC> ../public/tier0/platform_compile_base.h:1615
// member functions: 3
// member variable: 1
// struct size: 2,048
struct AlignedByteArrayExplicit_t<64, CTransform, 16> {
	/* ../public/tier0/platform_compile_base.h:1615 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<64, CTransform, 16>* );
	/* ../public/tier0/platform_compile_base.h:1615 */
	CTransform* Base(AlignedByteArrayExplicit_t<64, CTransform, 16>* );
	/* ../public/tier0/platform_compile_base.h:1615 */
	const CTransform* Base(const AlignedByteArrayExplicit_t<64, CTransform, 16>* );
private:
	uint8 m_Data[2048]; /* 0 2048 */
} __attribute__((__aligned__(16)));

// <04997075> ../public/tier0/platform_compile_base.h:1615
// member functions: 3
// member variable: 1
// struct size: 4,096
struct AlignedByteArrayExplicit_t<128, CTransform, 16> {
	/* ../public/tier0/platform_compile_base.h:1615 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<128, CTransform, 16>* );
	/* ../public/tier0/platform_compile_base.h:1615 */
	CTransform* Base(AlignedByteArrayExplicit_t<128, CTransform, 16>* );
	/* ../public/tier0/platform_compile_base.h:1615 */
	const CTransform* Base(const AlignedByteArrayExplicit_t<128, CTransform, 16>* );
private:
	uint8 m_Data[4096]; /* 0 4096 */
} __attribute__((__aligned__(16)));

// <053E73C3> ../public/tier0/platform_compile_base.h:1615
// member functions: 3
// member variable: 1
// struct size: 256
struct AlignedByteArrayExplicit_t<16, QuaternionAligned, 16> {
	/* ../public/tier0/platform_compile_base.h:1615 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<16, QuaternionAligned, 16>* );
	/* ../public/tier0/platform_compile_base.h:1615 */
	QuaternionAligned* Base(AlignedByteArrayExplicit_t<16, QuaternionAligned, 16>* );
	/* ../public/tier0/platform_compile_base.h:1615 */
	const QuaternionAligned* Base(const AlignedByteArrayExplicit_t<16, QuaternionAligned, 16>* );
private:
	uint8 m_Data[256]; /* 0 256 */
} __attribute__((__aligned__(16)));

// <06233D86> ../public/tier0/platform_compile_base.h:1615
// member functions: 3
// member variable: 1
// struct size: 6,656
struct AlignedByteArrayExplicit_t<32, RayTracingResult_t, 16> {
	/* ../public/tier0/platform_compile_base.h:1615 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<32, RayTracingResult_t, 16>* );
	/* ../public/tier0/platform_compile_base.h:1615 */
	RayTracingResult_t* Base(AlignedByteArrayExplicit_t<32, RayTracingResult_t, 16>* );
	/* ../public/tier0/platform_compile_base.h:1615 */
	const RayTracingResult_t* Base(const AlignedByteArrayExplicit_t<32, RayTracingResult_t, 16>* );
private:
	uint8 m_Data[6656]; /* 0 6656 */
} __attribute__((__aligned__(16)));

// <00B9F76E> ../public/tier0/platform_compile_base.h:1615
// member functions: 3
// member variable: 1
// struct size: 960
struct AlignedByteArrayExplicit_t<12, IKLocked_t, 16> {
	/* ../public/tier0/platform_compile_base.h:1615 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<12, IKLocked_t, 16>* );
	/* ../public/tier0/platform_compile_base.h:1615 */
	IKLocked_t* Base(AlignedByteArrayExplicit_t<12, IKLocked_t, 16>* );
	/* ../public/tier0/platform_compile_base.h:1615 */
	const IKLocked_t* Base(const AlignedByteArrayExplicit_t<12, IKLocked_t, 16>* );
private:
	uint8 m_Data[960]; /* 0 960 */
} __attribute__((__aligned__(16)));

// <00BD9027> ../public/tier0/platform_compile_base.h:1615
// member functions: 3
// member variable: 1
// struct size: 36,864
struct AlignedByteArrayExplicit_t<256, CAnimationDecodeCacheEntry_t, 16> {
	/* ../public/tier0/platform_compile_base.h:1615 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<256, CAnimationDecodeCacheEntry_t, 16>* );
	/* ../public/tier0/platform_compile_base.h:1615 */
	CAnimationDecodeCacheEntry_t* Base(AlignedByteArrayExplicit_t<256, CAnimationDecodeCacheEntry_t, 16>* );
	/* ../public/tier0/platform_compile_base.h:1615 */
	const CAnimationDecodeCacheEntry_t* Base(const AlignedByteArrayExplicit_t<256, CAnimationDecodeCacheEntry_t, 16>* );
private:
	uint8 m_Data[36864]; /* 0 36864 */
} __attribute__((__aligned__(16)));

// <0258C291> ../public/tier0/platform_compile_base.h:1615
// member functions: 3
// member variable: 1
// struct size: 6,144
struct AlignedByteArrayExplicit_t<128, matrix3x4a_t, 16> {
	/* ../public/tier0/platform_compile_base.h:1615 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<128, matrix3x4a_t, 16>* );
	/* ../public/tier0/platform_compile_base.h:1615 */
	matrix3x4a_t* Base(AlignedByteArrayExplicit_t<128, matrix3x4a_t, 16>* );
	/* ../public/tier0/platform_compile_base.h:1615 */
	const matrix3x4a_t* Base(const AlignedByteArrayExplicit_t<128, matrix3x4a_t, 16>* );
private:
	uint8 m_Data[6144]; /* 0 6144 */
} __attribute__((__aligned__(16)));

// <02721384> ../public/tier0/platform_compile_base.h:1615
// member functions: 3
// member variable: 1
// struct size: 182,784
struct AlignedByteArrayExplicit_t<32, CAnimationResult, 16> {
	/* ../public/tier0/platform_compile_base.h:1615 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<32, CAnimationResult, 16>* );
	/* ../public/tier0/platform_compile_base.h:1615 */
	CAnimationResult* Base(AlignedByteArrayExplicit_t<32, CAnimationResult, 16>* );
	/* ../public/tier0/platform_compile_base.h:1615 */
	const CAnimationResult* Base(const AlignedByteArrayExplicit_t<32, CAnimationResult, 16>* );
private:
	uint8 m_Data[182784]; /* 0 182784 */
} __attribute__((__aligned__(16)));

// <02724EFE> ../public/tier0/platform_compile_base.h:1615
// member functions: 3
// member variable: 1
// struct size: 1,024
struct AlignedByteArrayExplicit_t<32, CTransform, 16> {
	/* ../public/tier0/platform_compile_base.h:1615 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<32, CTransform, 16>* );
	/* ../public/tier0/platform_compile_base.h:1615 */
	CTransform* Base(AlignedByteArrayExplicit_t<32, CTransform, 16>* );
	/* ../public/tier0/platform_compile_base.h:1615 */
	const CTransform* Base(const AlignedByteArrayExplicit_t<32, CTransform, 16>* );
private:
	uint8 m_Data[1024]; /* 0 1024 */
} __attribute__((__aligned__(16)));

// <027EA009> ../public/tier0/platform_compile_base.h:1615
// member functions: 3
// member variable: 1
// struct size: 1,536
struct AlignedByteArrayExplicit_t<32, matrix3x4a_t, 16> {
	/* ../public/tier0/platform_compile_base.h:1615 */
	void AlignedByteArrayExplicit_t(AlignedByteArrayExplicit_t<32, matrix3x4a_t, 16>* );
	/* ../public/tier0/platform_compile_base.h:1615 */
	matrix3x4a_t* Base(AlignedByteArrayExplicit_t<32, matrix3x4a_t, 16>* );
	/* ../public/tier0/platform_compile_base.h:1615 */
	const matrix3x4a_t* Base(const AlignedByteArrayExplicit_t<32, matrix3x4a_t, 16>* );
private:
	uint8 m_Data[1536]; /* 0 1536 */
} __attribute__((__aligned__(16)));

