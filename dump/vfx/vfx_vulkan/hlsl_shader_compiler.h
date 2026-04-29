
//
// vfx/vfx_vulkan/hlsl_shader_compiler.h
//
//	referenced by: libvfx_vulkan.so
//
//	functions: 6
//	class: 1
//

// <000A661D> vfx/vfx_vulkan/hlsl_shader_compiler.h:21
// member functions: 32
// member variables: 10
// class size: 96
class CHLSLShaderCompiler {
	/* vfx/vfx_vulkan/hlsl_shader_compiler.h:24 */
	void CHLSLShaderCompiler(CHLSLShaderCompiler* );
	/* vfx/vfx_vulkan/hlsl_shader_compiler.h:25 */
	void ~CHLSLShaderCompiler(CHLSLShaderCompiler* );
	/* vfx/vfx_vulkan/hlsl_shader_compiler.h:27 */
	bool PreprocessShader(CHLSLShaderCompiler* , ShaderCompileContext* , const char* , CUtlString& , CUtlVector<VfxShaderMacro_t, CUtlMemory<VfxShaderMacro_t, int> >& , const char* );
	/* vfx/vfx_vulkan/hlsl_shader_compiler.h:31 */
	bool CompileShader(CHLSLShaderCompiler* , IShaderCompileContext* , VfxProgram_t, VfxCompileTarget_t, const char* , const char* , uint, const char* );
	/* vfx/vfx_vulkan/hlsl_shader_compiler.h:37 */
	bool GetActiveUniforms(const CHLSLShaderCompiler* , CUtlVector<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >& );
	/* vfx/vfx_vulkan/hlsl_shader_compiler.h:43 */
	bool GetActiveUniformBlocks(const CHLSLShaderCompiler* , CUtlVector<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >& );
	/* vfx/vfx_vulkan/hlsl_shader_compiler.h:46 */
	bool GetBinaryShader(const CHLSLShaderCompiler* , uint8** , uint32* );
	/* vfx/vfx_vulkan/hlsl_shader_compiler.h:49 */
	bool GetThreadGroupSize(const CHLSLShaderCompiler* , uint32_t* );
	/* vfx/vfx_vulkan/hlsl_shader_compiler.h:52 */
	bool GetOutputVertices(const CHLSLShaderCompiler* , uint32* , uint32* );
	/* vfx/vfx_vulkan/hlsl_shader_compiler.h:55 */
	bool ValidateUniqueBindings(const CHLSLShaderCompiler* );
	/* vfx/vfx_vulkan/hlsl_shader_compiler.h:57 */
	void GetEntryPoints(const CHLSLShaderCompiler* , CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >& );
	/* vfx/vfx_vulkan/hlsl_shader_compiler.h:59 */
	uint16 GetRequiredSubgroupSize(const CHLSLShaderCompiler* );
	/* vfx/vfx_vulkan/hlsl_shader_compiler.h:61 */
	const char* GetCompilerOutput(CHLSLShaderCompiler* );
private:
	/* vfx/vfx_vulkan/hlsl_shader_compiler.h:68 */
	void PostProcessSPIRV(CHLSLShaderCompiler* , const DxcAttributeOptions_t& );
	/* vfx/vfx_vulkan/hlsl_shader_compiler.h:69 */
	void FixResourceBindingsSPIRV(CHLSLShaderCompiler* );
	/* vfx/vfx_vulkan/hlsl_shader_compiler.h:71 */
	void ComputeBindingChangesForResourceType(CHLSLShaderCompiler* , VfxRegisterType_t, int32, CUtlVector<CVfxSpirVReflect::BindingNumberChange_t, CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int> >& );
	VfxProgram_t m_programType; /* 0 4 */
	VfxCompileTarget_t m_compileTarget; /* 4 4 */
	IDxcCompiler3 * m_pDxcCompiler; /* 8 8 */
	IDxcUtils * m_pDxcUtils; /* 16 8 */
	CVfxSpirVReflect m_spirVReflect; /* 24 0 */
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_spirV; /* 40 32 */
	CUtlString m_Output; /* 72 8 */
	uint m_nVfxCompileShaderFlags; /* 80 4 */
	uint m_nGlobalsConstantBufferSize; /* 84 4 */
	uint16 m_nRequiredSubgroupSize; /* 88 2 */
	void CHLSLShaderCompiler(class CHLSLShaderCompiler *); /* linkage=_ZN19CHLSLShaderCompilerC4Ev */
	void ~CHLSLShaderCompiler(class CHLSLShaderCompiler *); /* linkage=_ZN19CHLSLShaderCompilerD4Ev */
	bool PreprocessShader(class CHLSLShaderCompiler *, class ShaderCompileContext *, const char  *, class CUtlString &, class CUtlVector<VfxShaderMacro_t, CUtlMemory<VfxShaderMacro_t, int> > &, const char  *); /* linkage=_ZN19CHLSLShaderCompiler16PreprocessShaderEP20ShaderCompileContextPKcR10CUtlStringR10CUtlVectorI16VfxShaderMacro_t10CUtlMemoryIS7_iEES3_ */
	bool CompileShader(class CHLSLShaderCompiler *, class IShaderCompileContext *, enum VfxProgram_t, enum VfxCompileTarget_t, const char  *, const char  *, uint, const char  *); /* linkage=_ZN19CHLSLShaderCompiler13CompileShaderEP21IShaderCompileContext12VfxProgram_t18VfxCompileTarget_tPKcS5_jS5_ */
	/* <148c28> vfx/vfx_vulkan/hlsl_shader_compiler.cpp:407 */
	bool GetActiveUniforms(const class CHLSLShaderCompiler  *, class CUtlVector<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> > &); /* linkage=_ZNK19CHLSLShaderCompiler17GetActiveUniformsER10CUtlVectorI16VfxUniformInfo_t10CUtlMemoryIS1_iEE */
	bool GetActiveUniformBlocks(const class CHLSLShaderCompiler  *, class CUtlVector<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> > &); /* linkage=_ZNK19CHLSLShaderCompiler22GetActiveUniformBlocksER10CUtlVectorI21VfxUniformBlockInfo_t10CUtlMemoryIS1_iEE */
	bool GetBinaryShader(const class CHLSLShaderCompiler  *, uint8 * *, uint32 *); /* linkage=_ZNK19CHLSLShaderCompiler15GetBinaryShaderEPPhPj */
	bool GetThreadGroupSize(const class CHLSLShaderCompiler  *, uint32_t *); /* linkage=_ZNK19CHLSLShaderCompiler18GetThreadGroupSizeEPj */
	bool GetOutputVertices(const class CHLSLShaderCompiler  *, uint32 *, uint32 *); /* linkage=_ZNK19CHLSLShaderCompiler17GetOutputVerticesEPjS0_ */
	bool ValidateUniqueBindings(const class CHLSLShaderCompiler  *); /* linkage=_ZNK19CHLSLShaderCompiler22ValidateUniqueBindingsEv */
	void GetEntryPoints(const class CHLSLShaderCompiler  *, class CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> > &); /* linkage=_ZNK19CHLSLShaderCompiler14GetEntryPointsER10CUtlVectorI15CUtlStringToken10CUtlMemoryIS1_iEE */
	uint16 GetRequiredSubgroupSize(const class CHLSLShaderCompiler  *); /* linkage=_ZNK19CHLSLShaderCompiler23GetRequiredSubgroupSizeEv */
	const char  * GetCompilerOutput(class CHLSLShaderCompiler *); /* linkage=_ZN19CHLSLShaderCompiler17GetCompilerOutputEv */
	void PostProcessSPIRV(class CHLSLShaderCompiler *, const class DxcAttributeOptions_t  &); /* linkage=_ZN19CHLSLShaderCompiler16PostProcessSPIRVERK21DxcAttributeOptions_t */
	void FixResourceBindingsSPIRV(class CHLSLShaderCompiler *); /* linkage=_ZN19CHLSLShaderCompiler24FixResourceBindingsSPIRVEv */
	void ComputeBindingChangesForResourceType(class CHLSLShaderCompiler *, enum VfxRegisterType_t, int32, class CUtlVector<CVfxSpirVReflect::BindingNumberChange_t, CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int> > &); /* linkage=_ZN19CHLSLShaderCompiler36ComputeBindingChangesForResourceTypeE17VfxRegisterType_tiR10CUtlVectorIN16CVfxSpirVReflect21BindingNumberChange_tE10CUtlMemoryIS3_iEE */
};

// <000B7AAB> vfx/vfx_vulkan/hlsl_shader_compiler.h:24
void CHLSLShaderCompiler::CHLSLShaderCompiler()
{
} /* size: 0 */

// <000B7A65> vfx/vfx_vulkan/hlsl_shader_compiler.h:25
void CHLSLShaderCompiler::~CHLSLShaderCompiler()
{
} /* size: 0 */

// <000D61A5> vfx/vfx_vulkan/hlsl_shader_compiler.h:59
inline void CHLSLShaderCompiler::GetRequiredSubgroupSize()
{
} /* size: 0 */

// <000D618C> vfx/vfx_vulkan/hlsl_shader_compiler.h:61
inline void CHLSLShaderCompiler::GetCompilerOutput()
{
} /* size: 0 */

// <000B7F7C> vfx/vfx_vulkan/hlsl_shader_compiler.h:89
int32 GetBindingStartOffsetHLSLToSPIRV(VfxCompileTarget_t, VfxProgram_t, VfxRegisterType_t, uint32)
{
} /* size: 0 */

// <000B7984> vfx/vfx_vulkan/hlsl_shader_compiler.h:90
int32 GetMaxDescriptorsPerStageInDynamicDescriptorSet(VfxCompileTarget_t, VfxRegisterType_t)
{
} /* size: 0 */

