
//
// common/vfx/vfx_compile_helpers.h
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	functions: 12
//	classes: 2
//

// <068DB0C8> ../common/vfx/vfx_compile_helpers.h:10
void VfxComputeComboValues(uint64, const CUtlVector<CVfxCombo, CUtlMemory<CVfxCombo, int> > &, VfxComboValueVector_t &)
{
} /* size: 0 */

// <068DAE7E> ../common/vfx/vfx_compile_helpers.h:17
bool VfxAddShaderVariablesToProgramVariableArray(const CUtlVector<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> > &, const CUtlVector<CVfxTextureChannelProcessor, CUtlMemory<CVfxTextureChannelProcessor, int> > &, CUtlVector<CVfxShaderAttribute, CUtlMemory<CVfxShaderAttribute, int> > &, CVfxProgramData *, VfxProgram_t, CVfxStaticComboData *, CVfxVariableIndexArray *)
{
} /* size: 0 */

// <068DAE56> ../common/vfx/vfx_compile_helpers.h:23
void VfxAddConstantBuffersToProgramConstantBufferArray(CUtlVector<ConstantBufferDescription_t, CUtlMemory<ConstantBufferDescription_t, int> > &, CUtlVector<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> > &, CVfxProgramData *)
{
} /* size: 0 */

// <068DAEFE> ../common/vfx/vfx_compile_helpers.h:29
bool VfxBuildFeatureData(CVfx *)
{
} /* size: 0 */

// <068DAED0> ../common/vfx/vfx_compile_helpers.h:33
void VfxSortProgramVariableArray(CVfxProgramData *)
{
} /* size: 0 */

// <068DB570> ../common/vfx/vfx_compile_helpers.h:35
void VfxSortVariableIndexArray(CVfxVariableIndexArray &, const CVfxProgramData *)
{
} /* size: 0 */

// <068DAEB8> ../common/vfx/vfx_compile_helpers.h:37
void VfxRemoveUnnecessaryEntriesFromVariableIndexArrays(CVfxProgramData &)
{
} /* size: 0 */

// <068DB09C> ../common/vfx/vfx_compile_helpers.h:39
void ComputeFixedStaticCombosForFeatureCombo(const VfxComboValueVector_t &, const CVfxProgramData &, const CVfxProgramData &, CUtlVector<bool, CUtlMemory<bool, int> > *, VfxComboValueVector_t *)
{
} /* size: 0 */

// <069178DD> ../common/vfx/vfx_compile_helpers.h:49
void CVfxParanoidComboSubspaceIterator::~CVfxParanoidComboSubspaceIterator()
{
} /* size: 0 */

// <069178C0> ../common/vfx/vfx_compile_helpers.h:49
inline void CVfxParanoidComboSubspaceIterator::~CVfxParanoidComboSubspaceIterator()
{
} /* size: 0 */

// <068BDE31> ../common/vfx/vfx_compile_helpers.h:49
// member functions: 19
// member variables: 11
// class size: 184
class CVfxParanoidComboSubspaceIterator {
	/* ../common/vfx/vfx_compile_helpers.h:52 */
	void CVfxParanoidComboSubspaceIterator(CVfxParanoidComboSubspaceIterator* , CVfx* , VfxProgram_t, const VfxComboValueVector_t& );
	/* ../common/vfx/vfx_compile_helpers.h:54 */
	void InitIterator(CVfxParanoidComboSubspaceIterator* , const VfxComboValueVector_t& , const CUtlVector<bool, CUtlMemory<bool, int> >& );
	/* ../common/vfx/vfx_compile_helpers.h:55 */
	uint64 CurrentStaticCombo(const CVfxParanoidComboSubspaceIterator* );
	/* ../common/vfx/vfx_compile_helpers.h:56 */
	uint64 NextStaticCombo(CVfxParanoidComboSubspaceIterator* );
	/* ../common/vfx/vfx_compile_helpers.h:57 */
	uint64 InvalidIndex(const CVfxParanoidComboSubspaceIterator* );
	/* ../common/vfx/vfx_compile_helpers.h:58 */
	const VfxComboValueVector_t& GetStaticComboValueUtlVector(const CVfxParanoidComboSubspaceIterator* );
private:
	/* ../common/vfx/vfx_compile_helpers.h:61 */
	void UpdateValidStaticComboValues(CVfxParanoidComboSubspaceIterator* );
	/* ../common/vfx/vfx_compile_helpers.h:62 */
	bool Validate(const CVfxParanoidComboSubspaceIterator* );
	CVfx & m_vfx; /* 0 8 */
	VfxProgram_t m_programType; /* 8 4 */
	CVfxProgramData & m_programData; /* 16 8 */
	CUtlVector<int, CUtlMemory<int, int> > m_freeStaticComboIndices; /* 24 32 */
	VfxComboValueVector_t m_staticComboValues __attribute__((__aligned__(8))); /* 56 16 */
	VfxComboValueVector_t m_startStaticComboValues __attribute__((__aligned__(8))); /* 72 16 */
	VfxComboValueVector_t m_validStaticComboValues __attribute__((__aligned__(8))); /* 88 16 */
	VfxComboValueVector_t m_featureComboValues __attribute__((__aligned__(8))); /* 104 16 */
	uint64 m_nMaxIterationCount; /* 120 8 */
	uint64 m_nCurrIteration; /* 128 8 */
	CUtlMap<long long unsigned int, bool, unsigned int, bool (*)(long long unsigned int const&, long long unsigned int const&)> m_visitedComboSet; /* 136 48* /
	void ~CVfxParanoidComboSubspaceIterator(CVfxParanoidComboSubspaceIterator* );
	void CVfxParanoidComboSubspaceIterator(class CVfxParanoidComboSubspaceIterator *, class CVfx *, enum VfxProgram_t, const VfxComboValueVector_t  &); /* linkage=_ZN33CVfxParanoidComboSubspaceIteratorC4EP4CVfx12VfxProgram_tRK27CUtlLeanVectorFixedGrowableIhLt12EsE */
	void InitIterator(class CVfxParanoidComboSubspaceIterator *, const VfxComboValueVector_t  &, const class CUtlVector<bool, CUtlMemory<bool, int> >  &); /* linkage=_ZN33CVfxParanoidComboSubspaceIterator12InitIteratorERK27CUtlLeanVectorFixedGrowableIhLt12EsERK10CUtlVectorIb10CUtlMemoryIbiEE */
	/* <69f777e> vfx/vfx_compile_helpers.cpp:508 */
	uint64 CurrentStaticCombo(const class CVfxParanoidComboSubspaceIterator  *); /* linkage=_ZNK33CVfxParanoidComboSubspaceIterator18CurrentStaticComboEv */
	uint64 NextStaticCombo(class CVfxParanoidComboSubspaceIterator *); /* linkage=_ZN33CVfxParanoidComboSubspaceIterator15NextStaticComboEv */
	uint64 InvalidIndex(const class CVfxParanoidComboSubspaceIterator  *); /* linkage=_ZNK33CVfxParanoidComboSubspaceIterator12InvalidIndexEv */
	const VfxComboValueVector_t  & GetStaticComboValueUtlVector(const class CVfxParanoidComboSubspaceIterator  *); /* linkage=_ZNK33CVfxParanoidComboSubspaceIterator28GetStaticComboValueUtlVectorEv */
	void UpdateValidStaticComboValues(class CVfxParanoidComboSubspaceIterator *); /* linkage=_ZN33CVfxParanoidComboSubspaceIterator28UpdateValidStaticComboValuesEv */
	/* <69f77c7> vfx/vfx_compile_helpers.cpp:558 */
	bool Validate(const class CVfxParanoidComboSubspaceIterator  *); /* linkage=_ZNK33CVfxParanoidComboSubspaceIterator8ValidateEv */
	void ~CVfxParanoidComboSubspaceIterator(class CVfxParanoidComboSubspaceIterator *); /* linkage=_ZN33CVfxParanoidComboSubspaceIteratorD4Ev */
} __attribute__((__aligned__(8)));

// <069D19B3> ../common/vfx/vfx_compile_helpers.h:49
// member functions: 18
// member variables: 11
// class size: 184
class CVfxParanoidComboSubspaceIterator {
	/* ../common/vfx/vfx_compile_helpers.h:52 */
	void CVfxParanoidComboSubspaceIterator(CVfxParanoidComboSubspaceIterator* , CVfx* , VfxProgram_t, const VfxComboValueVector_t& );
	/* ../common/vfx/vfx_compile_helpers.h:54 */
	void InitIterator(CVfxParanoidComboSubspaceIterator* , const VfxComboValueVector_t& , const CUtlVector<bool, CUtlMemory<bool, int> >& );
	/* ../common/vfx/vfx_compile_helpers.h:55 */
	uint64 CurrentStaticCombo(const CVfxParanoidComboSubspaceIterator* );
	/* ../common/vfx/vfx_compile_helpers.h:56 */
	uint64 NextStaticCombo(CVfxParanoidComboSubspaceIterator* );
	/* ../common/vfx/vfx_compile_helpers.h:57 */
	uint64 InvalidIndex(const CVfxParanoidComboSubspaceIterator* );
	/* ../common/vfx/vfx_compile_helpers.h:58 */
	const VfxComboValueVector_t& GetStaticComboValueUtlVector(const CVfxParanoidComboSubspaceIterator* );
private:
	/* ../common/vfx/vfx_compile_helpers.h:61 */
	void UpdateValidStaticComboValues(CVfxParanoidComboSubspaceIterator* );
	/* ../common/vfx/vfx_compile_helpers.h:62 */
	bool Validate(const CVfxParanoidComboSubspaceIterator* );
	CVfx & m_vfx; /* 0 8 */
	VfxProgram_t m_programType; /* 8 4 */
	CVfxProgramData & m_programData; /* 16 8 */
	CUtlVector<int, CUtlMemory<int, int> > m_freeStaticComboIndices; /* 24 32 */
	VfxComboValueVector_t m_staticComboValues __attribute__((__aligned__(8))); /* 56 16 */
	VfxComboValueVector_t m_startStaticComboValues __attribute__((__aligned__(8))); /* 72 16 */
	VfxComboValueVector_t m_validStaticComboValues __attribute__((__aligned__(8))); /* 88 16 */
	VfxComboValueVector_t m_featureComboValues __attribute__((__aligned__(8))); /* 104 16 */
	uint64 m_nMaxIterationCount; /* 120 8 */
	uint64 m_nCurrIteration; /* 128 8 */
	CUtlMap<long long unsigned int, bool, unsigned int, bool (*)(long long unsigned int const&, long long unsigned int const&)> m_visitedComboSet; /* 136 48* /
	void CVfxParanoidComboSubspaceIterator(class CVfxParanoidComboSubspaceIterator *, class CVfx *, enum VfxProgram_t, const VfxComboValueVector_t  &); /* linkage=_ZN33CVfxParanoidComboSubspaceIteratorC4EP4CVfx12VfxProgram_tRK27CUtlLeanVectorFixedGrowableIhLt12EsE */
	void InitIterator(class CVfxParanoidComboSubspaceIterator *, const VfxComboValueVector_t  &, const class CUtlVector<bool, CUtlMemory<bool, int> >  &); /* linkage=_ZN33CVfxParanoidComboSubspaceIterator12InitIteratorERK27CUtlLeanVectorFixedGrowableIhLt12EsERK10CUtlVectorIb10CUtlMemoryIbiEE */
	/* <69f777e> vfx/vfx_compile_helpers.cpp:508 */
	uint64 CurrentStaticCombo(const class CVfxParanoidComboSubspaceIterator  *); /* linkage=_ZNK33CVfxParanoidComboSubspaceIterator18CurrentStaticComboEv */
	uint64 NextStaticCombo(class CVfxParanoidComboSubspaceIterator *); /* linkage=_ZN33CVfxParanoidComboSubspaceIterator15NextStaticComboEv */
	uint64 InvalidIndex(const class CVfxParanoidComboSubspaceIterator  *); /* linkage=_ZNK33CVfxParanoidComboSubspaceIterator12InvalidIndexEv */
	const VfxComboValueVector_t  & GetStaticComboValueUtlVector(const class CVfxParanoidComboSubspaceIterator  *); /* linkage=_ZNK33CVfxParanoidComboSubspaceIterator28GetStaticComboValueUtlVectorEv */
	void UpdateValidStaticComboValues(class CVfxParanoidComboSubspaceIterator *); /* linkage=_ZN33CVfxParanoidComboSubspaceIterator28UpdateValidStaticComboValuesEv */
	/* <69f77c7> vfx/vfx_compile_helpers.cpp:558 */
	bool Validate(const class CVfxParanoidComboSubspaceIterator  *); /* linkage=_ZNK33CVfxParanoidComboSubspaceIterator8ValidateEv */
	void ~CVfxParanoidComboSubspaceIterator(class CVfxParanoidComboSubspaceIterator *); /* linkage=_ZN33CVfxParanoidComboSubspaceIteratorD4Ev */
} __attribute__((__aligned__(8)));

// <068DB05C> ../common/vfx/vfx_compile_helpers.h:52
void CVfxParanoidComboSubspaceIterator::CVfxParanoidComboSubspaceIterator(CVfx* pVfx, VfxProgram_t programType, const VfxComboValueVector_t& featureComboValues)
{
} /* size: 0 */

// <069F70CB> ../common/vfx/vfx_compile_helpers.h:57
inline void CVfxParanoidComboSubspaceIterator::InvalidIndex()
{
} /* size: 0 */

