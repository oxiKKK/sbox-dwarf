
//
// vfx/vfx_vulkan/vfx_vulkan.h
//
//	referenced by: libvfx_vulkan.so
//
//	class: 1
//

// <00051CBA> vfx/vfx_vulkan/vfx_vulkan.h:12
// member functions: 32
// member variables: 2
// vtable entries: 7
// class size: 40
class CVfxVulkan : public IVfx {
public:
	/* class IVfx <ancestor>; */ /* 0 8 */
	void CVfxVulkan(CVfxVulkan* , const CVfxVulkan& );
	/* vfx/vfx_vulkan/vfx_vulkan.cpp:10 */
	void CVfxVulkan(CVfxVulkan* );
	/* vfx/vfx_vulkan/vfx_vulkan.cpp:15 */
	virtual void ~CVfxVulkan(CVfxVulkan* );
	/* vfx/vfx_vulkan/vfx_vulkan.cpp:19 */
	virtual void Init(CVfxVulkan* , CreateInterfaceFn);
	/* vfx/vfx_vulkan/vfx_vulkan.cpp:35 */
	virtual const CUtlVector<VfxCompileTarget_t, CUtlMemory<VfxCompileTarget_t, int> >& GetSupportedCompileTargets(CVfxVulkan* );
	/* vfx/vfx_vulkan/vfx_vulkan.h:20 */
	virtual IShaderCompileContext* CreateSharedContext(CVfxVulkan* );
	/* vfx/vfx_vulkan/vfx_vulkan.h:22 */
	virtual bool CompileShaderAndGetVariables(CVfxVulkan* , uint64, uint64, const CVfx* , VfxCompileTarget_t, VfxProgram_t, VfxCompiledShaderInfo_t* , bool, uint, IShaderCompileContext* );
	/* vfx/vfx_vulkan/vfx_vulkan.cpp:40 */
	virtual void ClearShaderCache(CVfxVulkan* );
	/* vfx/vfx_vulkan/vfx_vulkan.h:26 */
	void BuildComboMacros(CVfxVulkan* , CUtlVector<VfxShaderMacro_t, CUtlMemory<VfxShaderMacro_t, int> >& , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& , int, const VfxComboValueVector_t& , const CUtlVector<CVfxCombo, CUtlMemory<CVfxCombo, int> >& );
	/* vfx/vfx_vulkan/vfx_vulkan.h:27 */
	int CalcNumGlobalMacros(CVfxVulkan* , VfxCompileTarget_t);
	/* vfx/vfx_vulkan/vfx_vulkan.h:31 */
	void CreateGlobalMacrosAndNULLTerminate(CVfxVulkan* , CUtlVector<VfxShaderMacro_t, CUtlMemory<VfxShaderMacro_t, int> >& , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& , int, VfxCompileTarget_t, VfxProgram_t);
	/* vfx/vfx_vulkan/vfx_vulkan.h:33 */
	void CreateMacros(CVfxVulkan* , CUtlVector<VfxShaderMacro_t, CUtlMemory<VfxShaderMacro_t, int> >& , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& , const CVfxProgramData* , uint64, uint64, VfxCompileTarget_t, VfxProgram_t);
private:
	CUtlVector<VfxCompileTarget_t, CUtlMemory<VfxCompileTarget_t, int> > m_supportedCompileTargets; /* 8 32 */
	/* vfx/vfx_vulkan/vfx_vulkan.h:40 */
	void ConvertShaderParams(CVfxVulkan* , const CHLSLShaderCompiler* , VfxCompileTarget_t, VfxProgram_t, CVfxParsedShaderParamMap* , CVfxParsedConstantBufferVector& , uint32* , uint32* , bool& , CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >& );
	/* vfx/vfx_vulkan/vfx_vulkan.h:43 */
	bool CompileSource(CVfxVulkan* , IShaderCompileContext* , CHLSLShaderCompiler* , const char* , VfxCompileTarget_t, VfxProgram_t, VfxCompiledShaderInfo_t* , uint, const char* , const char* , CUtlString& , CVfxParsedShaderParamMap& , CVfxParsedConstantBufferVector& , const CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& , CUtlString& , CUtlString& );
	/* vfx/vfx_vulkan/vfx_vulkan.h:49 */
	virtual void SerializeCompiledShaderInfo(CVfxVulkan* , const VfxCompiledShaderInfo_t& , CUtlBuffer& );
	/* vfx/vfx_vulkan/vfx_vulkan.h:50 */
	virtual void UnserializeCompiledShaderInfo(CVfxVulkan* , VfxCompiledShaderInfo_t* , CUtlBuffer& );
	void CVfxVulkan(class CVfxVulkan *, const class CVfxVulkan  &); /* linkage=_ZN10CVfxVulkanC4ERKS_ */
	void CVfxVulkan(class CVfxVulkan *); /* linkage=_ZN10CVfxVulkanC4Ev */
	virtual void ~CVfxVulkan(class CVfxVulkan *); /* linkage=_ZN10CVfxVulkanD4Ev */
	/* <53c71> vfx/vfx_vulkan/vfx_vulkan.cpp:19 */
	virtual void Init(class CVfxVulkan *, CreateInterfaceFn); /* linkage=_ZN10CVfxVulkan4InitEPFPvPKcPiE */
	virtual const class CUtlVector<VfxCompileTarget_t, CUtlMemory<VfxCompileTarget_t, int> >  & GetSupportedCompileTargets(class CVfxVulkan *); /* linkage=_ZN10CVfxVulkan26GetSupportedCompileTargetsEv */
	virtual class IShaderCompileContext * CreateSharedContext(class CVfxVulkan *); /* linkage=_ZN10CVfxVulkan19CreateSharedContextEv */
	virtual bool CompileShaderAndGetVariables(class CVfxVulkan *, uint64, uint64, const class CVfx  *, enum VfxCompileTarget_t, enum VfxProgram_t, class VfxCompiledShaderInfo_t *, bool, uint, class IShaderCompileContext *); /* linkage=_ZN10CVfxVulkan28CompileShaderAndGetVariablesEyyPK4CVfx18VfxCompileTarget_t12VfxProgram_tP23VfxCompiledShaderInfo_tbjP21IShaderCompileContext */
	virtual void ClearShaderCache(class CVfxVulkan *); /* linkage=_ZN10CVfxVulkan16ClearShaderCacheEv */
	void BuildComboMacros(class CVfxVulkan *, class CUtlVector<VfxShaderMacro_t, CUtlMemory<VfxShaderMacro_t, int> > &, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &, int, const VfxComboValueVector_t  &, const class CUtlVector<CVfxCombo, CUtlMemory<CVfxCombo, int> >  &); /* linkage=_ZN10CVfxVulkan16BuildComboMacrosER10CUtlVectorI16VfxShaderMacro_t10CUtlMemoryIS1_iEERS0_I10CUtlStringS2_IS6_iEEiRK27CUtlLeanVectorFixedGrowableIhLt12EsERKS0_I9CVfxComboS2_ISE_iEE */
	/* <d8b11> vfx/vfx_vulkan/vfx_compile_helpers_vulkan.cpp:41 */
	int CalcNumGlobalMacros(class CVfxVulkan *, enum VfxCompileTarget_t); /* linkage=_ZN10CVfxVulkan19CalcNumGlobalMacrosE18VfxCompileTarget_t */
	void CreateGlobalMacrosAndNULLTerminate(class CVfxVulkan *, class CUtlVector<VfxShaderMacro_t, CUtlMemory<VfxShaderMacro_t, int> > &, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &, int, enum VfxCompileTarget_t, enum VfxProgram_t); /* linkage=_ZN10CVfxVulkan34CreateGlobalMacrosAndNULLTerminateER10CUtlVectorI16VfxShaderMacro_t10CUtlMemoryIS1_iEERS0_I10CUtlStringS2_IS6_iEEi18VfxCompileTarget_t12VfxProgram_t */
	void CreateMacros(class CVfxVulkan *, class CUtlVector<VfxShaderMacro_t, CUtlMemory<VfxShaderMacro_t, int> > &, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &, const class CVfxProgramData  *, uint64, uint64, enum VfxCompileTarget_t, enum VfxProgram_t); /* linkage=_ZN10CVfxVulkan12CreateMacrosER10CUtlVectorI16VfxShaderMacro_t10CUtlMemoryIS1_iEERS0_I10CUtlStringS2_IS6_iEEPK15CVfxProgramDatayy18VfxCompileTarget_t12VfxProgram_t */
	void ConvertShaderParams(class CVfxVulkan *, const class CHLSLShaderCompiler  *, enum VfxCompileTarget_t, enum VfxProgram_t, CVfxParsedShaderParamMap *, CVfxParsedConstantBufferVector &, uint32 *, uint32 *, bool &, class CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> > &); /* linkage=_ZN10CVfxVulkan19ConvertShaderParamsEPK19CHLSLShaderCompiler18VfxCompileTarget_t12VfxProgram_tP7CUtlMapI10CUtlStringP21CVfxParsedShaderParamtPFbRKS6_SA_EER19CUtlVectorAutoPurgeIP24CVfxParsedConstantBufferEPjSK_RbR10CUtlVectorI15CUtlStringToken10CUtlMemoryISN_iEE */
	bool CompileSource(class CVfxVulkan *, class IShaderCompileContext *, class CHLSLShaderCompiler *, const char  *, enum VfxCompileTarget_t, enum VfxProgram_t, class VfxCompiledShaderInfo_t *, uint, const char  *, const char  *, class CUtlString &, CVfxParsedShaderParamMap &, CVfxParsedConstantBufferVector &, const class CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >  &, class CUtlString &, class CUtlString &); /* linkage=_ZN10CVfxVulkan13CompileSourceEP21IShaderCompileContextP19CHLSLShaderCompilerPKc18VfxCompileTarget_t12VfxProgram_tP23VfxCompiledShaderInfo_tjS5_S5_R10CUtlStringR7CUtlMapISA_P21CVfxParsedShaderParamtPFbRKSA_SG_EER19CUtlVectorAutoPurgeIP24CVfxParsedConstantBufferERK10CUtlVectorIh10CUtlMemoryIhiEESB_SB_ */
	virtual void SerializeCompiledShaderInfo(class CVfxVulkan *, const class VfxCompiledShaderInfo_t  &, class CUtlBuffer &); /* linkage=_ZN10CVfxVulkan27SerializeCompiledShaderInfoERK23VfxCompiledShaderInfo_tR10CUtlBuffer */
	virtual void UnserializeCompiledShaderInfo(class CVfxVulkan *, class VfxCompiledShaderInfo_t *, class CUtlBuffer &); /* linkage=_ZN10CVfxVulkan29UnserializeCompiledShaderInfoEP23VfxCompiledShaderInfo_tR10CUtlBuffer */
};

