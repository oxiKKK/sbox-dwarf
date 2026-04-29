
//
// vfx_dx/hlsl_parser.h
//
//	referenced by: libvfx_vulkan.so
//
//	functions: 12
//	classes: 2
//

// <00275A84> ../vfx_dx/hlsl_parser.h:12
// member functions: 16
// member variables: 5
// class size: 40
class CHlslParser {
	/* ../vfx_dx/hlsl_parser.h:23 */
	enum RegisterAllocationFormat_t {
		REGISTER_ALLOCATION_NONE = 0,
		REGISTER_ALLOCATION_D3D11 = 1,
		REGISTER_ALLOCATION_RTX = 2,
	};
	/* ../vfx_dx/hlsl_parser.h:30 */
	enum HLSLCompiler_t {
		HLSL_COMPILER_FXC = 0,
		HLSL_COMPILER_DXC = 1,
	};
	void CHlslParser(CHlslParser* , const CHlslParser& );
	int ()(void) * * _vptr.CHlslParser; /* 0 8 */
	/* ../vfx_dx/hlsl_parser.cpp:1783 */
	void CHlslParser(CHlslParser* , const CUtlString& , IHlslParserCallbacks* );
	/* ../vfx_dx/hlsl_parser.cpp:1790 */
	virtual void ~CHlslParser(CHlslParser* );
	/* ../vfx_dx/hlsl_parser.cpp:1848 */
	bool Parse(CHlslParser* , CUtlString* , VfxShaderLanguage_t);
	/* ../vfx_dx/hlsl_parser.cpp:1841 */
	void ReportParseError(CHlslParser* , const char* );
	/* ../vfx_dx/hlsl_parser.h:20 */
	const char* GetSourceString(const CHlslParser* );
	/* ../vfx_dx/hlsl_parser.h:21 */
	bool GetBDAGlobalsVaraiable(const CHlslParser* );
	/* ../vfx_dx/hlsl_parser.cpp:1936 */
	CUtlString RewriteInput(CHlslParser* , CVfxParsedShaderParamMap& , CVfxParsedConstantBufferVector& , VfxCompileTarget_t, const CUtlString& , const CUtlString& , RegisterAllocationFormat_t, HLSLCompiler_t, bool);
private:
	CUtlString m_InputString; /* 8 8 */
	IHlslParserCallbacks * m_pCallbacks; /* 16 8 */
	CHlslParseContextHelper * m_pCtx; /* 24 8 */
	CUtlString m_parseErrors; /* 32 8 */
	virtual void ~CHlslParser(class CHlslParser *); /* linkage=_ZN11CHlslParserD4Ev */
	class CUtlString RewriteInput(class CHlslParser *, CVfxParsedShaderParamMap &, CVfxParsedConstantBufferVector &, enum VfxCompileTarget_t, const class CUtlString  &, const class CUtlString  &, enum RegisterAllocationFormat_t, enum HLSLCompiler_t, bool); /* linkage=_ZN11CHlslParser12RewriteInputER7CUtlMapI10CUtlStringP21CVfxParsedShaderParamtPFbRKS1_S5_EER19CUtlVectorAutoPurgeIP24CVfxParsedConstantBufferE18VfxCompileTarget_tS5_S5_NS_26RegisterAllocationFormat_tENS_14HLSLCompiler_tEb */
	bool Parse(class CHlslParser *, class CUtlString *, enum VfxShaderLanguage_t); /* linkage=_ZN11CHlslParser5ParseEP10CUtlString19VfxShaderLanguage_t */
	void CHlslParser(class CHlslParser *, const class CUtlString  &, class IHlslParserCallbacks *); /* linkage=_ZN11CHlslParserC4ERK10CUtlStringP20IHlslParserCallbacks */
	bool GetBDAGlobalsVaraiable(const class CHlslParser  *); /* linkage=_ZNK11CHlslParser22GetBDAGlobalsVaraiableEv */
	void CHlslParser(class CHlslParser *, const class CHlslParser  &); /* linkage=_ZN11CHlslParserC4ERKS_ */
	/* <2ab6e2> ../vfx_dx/hlsl_parser.cpp:1841 */
	void ReportParseError(class CHlslParser *, const char  *); /* linkage=_ZN11CHlslParser16ReportParseErrorEPKc */
	const char  * GetSourceString(const class CHlslParser  *); /* linkage=_ZNK11CHlslParser15GetSourceStringEv */
};

// <000B7D28> ../vfx_dx/hlsl_parser.h:15
void CHlslParser::CHlslParser(const CUtlString& string, IHlslParserCallbacks* pParserCallbacks)
{
} /* size: 0 */

// <000B7CD8> ../vfx_dx/hlsl_parser.h:16
void CHlslParser::~CHlslParser()
{
} /* size: 0 */

// <002AA461> ../vfx_dx/hlsl_parser.h:20
inline void CHlslParser::GetSourceString()
{
} /* size: 0 */

// <000D5F25> ../vfx_dx/hlsl_parser.h:21
inline void CHlslParser::GetBDAGlobalsVaraiable()
{
} /* size: 0 */

// <00289970> ../vfx_dx/hlsl_parser.h:54
// member functions: 70
// member variables: 23
// vtable entries: 19
// class size: 216
class CShaderParamBuilder : public IHlslParserCallbacks {
public:
	/* class IHlslParserCallbacks <ancestor>; */ /* 0 8 */
	void CShaderParamBuilder(CShaderParamBuilder* , const CShaderParamBuilder& );
	/* ../vfx_dx/hlsl_parser.cpp:59 */
	void CShaderParamBuilder(CShaderParamBuilder* , VfxProgram_t, CVfxParsedShaderParamMap& , CVfxParsedConstantBufferVector& , CVfxStructDeclVector& , CVfxMainEntryPointInfo& , CVfxParsedInputSignatureVector& );
	/* ../vfx_dx/hlsl_parser.cpp:83 */
	virtual void ~CShaderParamBuilder(CShaderParamBuilder* );
	/* ../vfx_dx/hlsl_parser.cpp:88 */
	virtual bool BeginStructDecl(CShaderParamBuilder* , const char* );
	/* ../vfx_dx/hlsl_parser.cpp:107 */
	virtual bool AddStructMember(CShaderParamBuilder* , const char* , VfxParsedShaderParamClass_t, VfxParsedShaderParamType_t, int32, int32, int, const char* , const char* );
	/* ../vfx_dx/hlsl_parser.cpp:139 */
	virtual bool IsCurrentStructDeclEmpty(const CShaderParamBuilder* );
	/* ../vfx_dx/hlsl_parser.cpp:146 */
	virtual bool EndStructDecl(CShaderParamBuilder* );
	/* ../vfx_dx/hlsl_parser.cpp:197 */
	virtual bool BeginConstantBufferDecl(CShaderParamBuilder* , const char* );
	/* ../vfx_dx/hlsl_parser.cpp:210 */
	virtual bool SetContantBufferBindSlot(CShaderParamBuilder* , int32);
	/* ../vfx_dx/hlsl_parser.cpp:227 */
	virtual bool EndConstantBufferDecl(CShaderParamBuilder* );
	/* ../vfx_dx/hlsl_parser.cpp:221 */
	virtual const char* GetCurrentConstantBufferName(const CShaderParamBuilder* );
	/* ../vfx_dx/hlsl_parser.cpp:260 */
	virtual bool ShouldEmitVariable(const CShaderParamBuilder* , const CUtlString& );
	/* ../vfx_dx/hlsl_parser.cpp:284 */
	virtual bool AddGlobalVariable(CShaderParamBuilder* , const char* , VfxParsedShaderParamClass_t, VfxParsedShaderParamType_t, int32, int32, int32, const char* , bool, int32, VfxOverrideShaderVariable_t& , bool);
	/* ../vfx_dx/hlsl_parser.cpp:437 */
	virtual bool AddAnnotation(CShaderParamBuilder* , const char* , VfxParsedShaderParamClass_t, VfxParsedShaderParamType_t, int32, int32, int32, const CUtlVector<VariableValue_t, CUtlMemory<VariableValue_t, int> >& );
	/* ../vfx_dx/hlsl_parser.cpp:762 */
	virtual bool AddFunctionAttribute(CShaderParamBuilder* , const CUtlVector<VariableValue_t, CUtlMemory<VariableValue_t, int> >& );
	/* ../vfx_dx/hlsl_parser.cpp:782 */
	virtual void ClearFunctionAttributes(CShaderParamBuilder* );
	/* ../vfx_dx/hlsl_parser.cpp:788 */
	virtual bool AddFunctionDefinition(CShaderParamBuilder* , const char* , const char* , const char* , void* , int, int);
	/* ../vfx_dx/hlsl_parser.cpp:848 */
	virtual CUtlString GetFunctionBodyPrefix(CShaderParamBuilder* , const char* );
	/* ../vfx_dx/hlsl_parser.cpp:1229 */
	virtual int GetBindSlotForExternalDescriptorSet(CShaderParamBuilder* , const char* );
	/* ../vfx_dx/hlsl_parser.h:93 */
	virtual bool InjectRtxFetchGlobals(const CShaderParamBuilder* );
	/* ../vfx_dx/hlsl_parser.h:95 */
	virtual bool GetBDAGlobalsVariable(const CShaderParamBuilder* );
	/* ../vfx_dx/hlsl_parser.h:97 */
	virtual bool GetAllowRewriteBDAGlobalsVariable(const CShaderParamBuilder* );
	/* ../vfx_dx/hlsl_parser.h:100 */
	void AllowBindlessResourceRewriting(CShaderParamBuilder* , bool);
	/* ../vfx_dx/hlsl_parser.h:103 */
	void AllowGlobalsBDARewriting(CShaderParamBuilder* , bool);
	/* ../vfx_dx/hlsl_parser.cpp:884 */
	void AllocateConstantRegistersForScalarBlockLayout(CShaderParamBuilder* );
private:
	/* ../vfx_dx/hlsl_parser.cpp:158 */
	bool AddVsInputSignatureMember(CShaderParamBuilder* , const char* , VfxParsedShaderParamClass_t, VfxParsedShaderParamType_t, int32, int32, int, const char* );
protected:
	/* ../vfx_dx/hlsl_parser.cpp:937 */
	void ComputeStructLayoutsForGlslStd140(CShaderParamBuilder* );
	/* ../vfx_dx/hlsl_parser.cpp:965 */
	void ComputeStructLayoutsForScalarBlockLayout(CShaderParamBuilder* );
	/* ../vfx_dx/hlsl_parser.cpp:235 */
	bool ShouldCreateIndexedBindlessVariable(const CShaderParamBuilder* , VfxParsedShaderParamType_t, int32, VfxParsedShaderParamType_t* );
	/* ../vfx_dx/hlsl_parser.cpp:1211 */
	void ComputeRegisterOffsetsInConstantBuffer(CShaderParamBuilder* , CVfxParsedConstantBuffer* );
	/* ../vfx_dx/hlsl_parser.cpp:1116 */
	void ComputeRegisterOffsetsInConstantBufferGlslStd140(CShaderParamBuilder* , CVfxParsedConstantBuffer* );
	/* ../vfx_dx/hlsl_parser.cpp:1156 */
	void ComputeRegisterOffsetsInConstantBufferScalarBlockLayout(CShaderParamBuilder* , CVfxParsedConstantBuffer* );
	/* ../vfx_dx/hlsl_parser.cpp:993 */
	int ComputeRegisterSpaceGlslStd140(const CShaderParamBuilder* , const CUtlString& , const CUtlString& , VfxParsedShaderParamClass_t, VfxParsedShaderParamType_t, uint, uint, uint, bool, const CUtlString& , int* );
	/* ../vfx_dx/hlsl_parser.cpp:1049 */
	int ComputeRegisterSpaceScalarBlockLayout(const CShaderParamBuilder* , const CUtlString& , const CUtlString& , VfxParsedShaderParamClass_t, VfxParsedShaderParamType_t, uint, uint, uint, bool, const CUtlString& , int* );
	/* ../vfx_dx/hlsl_parser.cpp:1102 */
	const CVfxStructDecl* FindStructDecl(const CShaderParamBuilder* , const CUtlString& );
	VfxProgram_t m_programType; /* 8 4 */
	CVfxParsedShaderParamMap & m_effectParams; /* 16 8 */
	CVfxParsedConstantBufferVector & m_constantBuffers; /* 24 8 */
	CVfxStructDeclVector & m_structs; /* 32 8 */
	CVfxParsedInputSignatureVector & m_inputSignature; /* 40 8 */
	CVfxMainEntryPointInfo & m_entryPointInfo; /* 48 8 */
	CVfxParsedShaderParam * m_pLastNewParam; /* 56 8 */
	CVfxStructMember * m_pLastNewStructMember; /* 64 8 */
	CVfxParsedConstantBuffer * m_pCurrentCB; /* 72 8 */
	CVfxStructDecl * m_pCurrentStruct; /* 80 8 */
	CVfxParsedConstantBuffer * m_pDefaultCB; /* 88 8 */
	bool m_bInVsInputStruct; /* 96 1 */
	int32 m_nFirstFreeExternalDescriptorSetSlot; /* 100 4 */
	CUtlVector<CVfxParsedShaderParam*, CUtlMemory<CVfxParsedShaderParam*, int> > m_declaredExternalDescriptorSets; /* 104 32 */
	int32 m_nBindlessTextureCount; /* 136 4 */
	CUtlHashtable<CUtlString, CBufferString, DefaultHashFunctor<CUtlString>, DefaultEqualFunctor<CUtlString>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlString, CBufferString>, int> > m_renderStates; /* 144 32 */
	CUtlVector<CVfxFunctionAttribute, CUtlMemory<CVfxFunctionAttribute, int> > m_functionAttributes; /* 176 32 */
	bool m_bAllowBindlessResourceRewriting; /* 208 1 */
	bool m_bEnabledBindlessResourceRewriting; /* 209 1 */
	bool m_bAllowGlobalsBDARewriting; /* 210 1 */
	bool m_bInjectRtxGlobals; /* 211 1 */
	bool m_bBDAGlobalsVariable; /* 212 1 */
	virtual void ~CShaderParamBuilder(class CShaderParamBuilder *); /* linkage=_ZN19CShaderParamBuilderD4Ev */
	void AllocateConstantRegistersForScalarBlockLayout(class CShaderParamBuilder *); /* linkage=_ZN19CShaderParamBuilder45AllocateConstantRegistersForScalarBlockLayoutEv */
	void CShaderParamBuilder(class CShaderParamBuilder *, enum VfxProgram_t, CVfxParsedShaderParamMap &, CVfxParsedConstantBufferVector &, CVfxStructDeclVector &, class CVfxMainEntryPointInfo &, CVfxParsedInputSignatureVector &); /* linkage=_ZN19CShaderParamBuilderC4E12VfxProgram_tR7CUtlMapI10CUtlStringP21CVfxParsedShaderParamtPFbRKS2_S6_EER19CUtlVectorAutoPurgeIP24CVfxParsedConstantBufferERSB_IP14CVfxStructDeclER22CVfxMainEntryPointInfoRSB_IP32VfxParsedInputSignatureElement_tE */
	/* <2aaf0b> ../vfx_dx/hlsl_parser.h:95 */
	virtual bool GetBDAGlobalsVariable(const class CShaderParamBuilder  *); /* linkage=_ZNK19CShaderParamBuilder21GetBDAGlobalsVariableEv */
	void CShaderParamBuilder(class CShaderParamBuilder *, const class CShaderParamBuilder  &); /* linkage=_ZN19CShaderParamBuilderC4ERKS_ */
	virtual bool BeginStructDecl(class CShaderParamBuilder *, const char  *); /* linkage=_ZN19CShaderParamBuilder15BeginStructDeclEPKc */
	virtual bool AddStructMember(class CShaderParamBuilder *, const char  *, enum VfxParsedShaderParamClass_t, enum VfxParsedShaderParamType_t, int32, int32, int, const char  *, const char  *); /* linkage=_ZN19CShaderParamBuilder15AddStructMemberEPKc27VfxParsedShaderParamClass_t26VfxParsedShaderParamType_tiiiS1_S1_ */
	virtual bool IsCurrentStructDeclEmpty(const class CShaderParamBuilder  *); /* linkage=_ZNK19CShaderParamBuilder24IsCurrentStructDeclEmptyEv */
	virtual bool EndStructDecl(class CShaderParamBuilder *); /* linkage=_ZN19CShaderParamBuilder13EndStructDeclEv */
	virtual bool BeginConstantBufferDecl(class CShaderParamBuilder *, const char  *); /* linkage=_ZN19CShaderParamBuilder23BeginConstantBufferDeclEPKc */
	virtual bool SetContantBufferBindSlot(class CShaderParamBuilder *, int32); /* linkage=_ZN19CShaderParamBuilder24SetContantBufferBindSlotEi */
	virtual bool EndConstantBufferDecl(class CShaderParamBuilder *); /* linkage=_ZN19CShaderParamBuilder21EndConstantBufferDeclEv */
	virtual const char  * GetCurrentConstantBufferName(const class CShaderParamBuilder  *); /* linkage=_ZNK19CShaderParamBuilder28GetCurrentConstantBufferNameEv */
	virtual bool ShouldEmitVariable(const class CShaderParamBuilder  *, const class CUtlString  &); /* linkage=_ZNK19CShaderParamBuilder18ShouldEmitVariableERK10CUtlString */
	virtual bool AddGlobalVariable(class CShaderParamBuilder *, const char  *, enum VfxParsedShaderParamClass_t, enum VfxParsedShaderParamType_t, int32, int32, int32, const char  *, bool, int32, class VfxOverrideShaderVariable_t &, bool); /* linkage=_ZN19CShaderParamBuilder17AddGlobalVariableEPKc27VfxParsedShaderParamClass_t26VfxParsedShaderParamType_tiiiS1_biR27VfxOverrideShaderVariable_tb */
	virtual bool AddAnnotation(class CShaderParamBuilder *, const char  *, enum VfxParsedShaderParamClass_t, enum VfxParsedShaderParamType_t, int32, int32, int32, const class CUtlVector<VariableValue_t, CUtlMemory<VariableValue_t, int> >  &); /* linkage=_ZN19CShaderParamBuilder13AddAnnotationEPKc27VfxParsedShaderParamClass_t26VfxParsedShaderParamType_tiiiRK10CUtlVectorI15VariableValue_t10CUtlMemoryIS5_iEE */
	virtual bool AddFunctionAttribute(class CShaderParamBuilder *, const class CUtlVector<VariableValue_t, CUtlMemory<VariableValue_t, int> >  &); /* linkage=_ZN19CShaderParamBuilder20AddFunctionAttributeERK10CUtlVectorI15VariableValue_t10CUtlMemoryIS1_iEE */
	virtual void ClearFunctionAttributes(class CShaderParamBuilder *); /* linkage=_ZN19CShaderParamBuilder23ClearFunctionAttributesEv */
	virtual bool AddFunctionDefinition(class CShaderParamBuilder *, const char  *, const char  *, const char  *, void *, int, int); /* linkage=_ZN19CShaderParamBuilder21AddFunctionDefinitionEPKcS1_S1_Pvii */
	virtual class CUtlString GetFunctionBodyPrefix(class CShaderParamBuilder *, const char  *); /* linkage=_ZN19CShaderParamBuilder21GetFunctionBodyPrefixEPKc */
	virtual int GetBindSlotForExternalDescriptorSet(class CShaderParamBuilder *, const char  *); /* linkage=_ZN19CShaderParamBuilder35GetBindSlotForExternalDescriptorSetEPKc */
	/* <2aaee0> ../vfx_dx/hlsl_parser.h:93 */
	virtual bool InjectRtxFetchGlobals(const class CShaderParamBuilder  *); /* linkage=_ZNK19CShaderParamBuilder21InjectRtxFetchGlobalsEv */
	/* <2aaf36> ../vfx_dx/hlsl_parser.h:97 */
	virtual bool GetAllowRewriteBDAGlobalsVariable(const class CShaderParamBuilder  *); /* linkage=_ZNK19CShaderParamBuilder33GetAllowRewriteBDAGlobalsVariableEv */
	void AllowBindlessResourceRewriting(class CShaderParamBuilder *, bool); /* linkage=_ZN19CShaderParamBuilder30AllowBindlessResourceRewritingEb */
	void AllowGlobalsBDARewriting(class CShaderParamBuilder *, bool); /* linkage=_ZN19CShaderParamBuilder24AllowGlobalsBDARewritingEb */
	bool AddVsInputSignatureMember(class CShaderParamBuilder *, const char  *, enum VfxParsedShaderParamClass_t, enum VfxParsedShaderParamType_t, int32, int32, int, const char  *); /* linkage=_ZN19CShaderParamBuilder25AddVsInputSignatureMemberEPKc27VfxParsedShaderParamClass_t26VfxParsedShaderParamType_tiiiS1_ */
	void ComputeStructLayoutsForGlslStd140(class CShaderParamBuilder *); /* linkage=_ZN19CShaderParamBuilder33ComputeStructLayoutsForGlslStd140Ev */
	void ComputeStructLayoutsForScalarBlockLayout(class CShaderParamBuilder *); /* linkage=_ZN19CShaderParamBuilder40ComputeStructLayoutsForScalarBlockLayoutEv */
	/* <2ab2ad> ../vfx_dx/hlsl_parser.cpp:235 */
	bool ShouldCreateIndexedBindlessVariable(const class CShaderParamBuilder  *, enum VfxParsedShaderParamType_t, int32, enum VfxParsedShaderParamType_t *); /* linkage=_ZNK19CShaderParamBuilder35ShouldCreateIndexedBindlessVariableE26VfxParsedShaderParamType_tiPS0_ */
	void ComputeRegisterOffsetsInConstantBuffer(class CShaderParamBuilder *, class CVfxParsedConstantBuffer *); /* linkage=_ZN19CShaderParamBuilder38ComputeRegisterOffsetsInConstantBufferEP24CVfxParsedConstantBuffer */
	void ComputeRegisterOffsetsInConstantBufferGlslStd140(class CShaderParamBuilder *, class CVfxParsedConstantBuffer *); /* linkage=_ZN19CShaderParamBuilder48ComputeRegisterOffsetsInConstantBufferGlslStd140EP24CVfxParsedConstantBuffer */
	void ComputeRegisterOffsetsInConstantBufferScalarBlockLayout(class CShaderParamBuilder *, class CVfxParsedConstantBuffer *); /* linkage=_ZN19CShaderParamBuilder55ComputeRegisterOffsetsInConstantBufferScalarBlockLayoutEP24CVfxParsedConstantBuffer */
	int ComputeRegisterSpaceGlslStd140(const class CShaderParamBuilder  *, const class CUtlString  &, const class CUtlString  &, enum VfxParsedShaderParamClass_t, enum VfxParsedShaderParamType_t, uint, uint, uint, bool, const class CUtlString  &, int *); /* linkage=_ZNK19CShaderParamBuilder30ComputeRegisterSpaceGlslStd140ERK10CUtlStringS2_27VfxParsedShaderParamClass_t26VfxParsedShaderParamType_tjjjbS2_Pi */
	int ComputeRegisterSpaceScalarBlockLayout(const class CShaderParamBuilder  *, const class CUtlString  &, const class CUtlString  &, enum VfxParsedShaderParamClass_t, enum VfxParsedShaderParamType_t, uint, uint, uint, bool, const class CUtlString  &, int *); /* linkage=_ZNK19CShaderParamBuilder37ComputeRegisterSpaceScalarBlockLayoutERK10CUtlStringS2_27VfxParsedShaderParamClass_t26VfxParsedShaderParamType_tjjjbS2_Pi */
	const class CVfxStructDecl  * FindStructDecl(const class CShaderParamBuilder  *, const class CUtlString  &); /* linkage=_ZNK19CShaderParamBuilder14FindStructDeclERK10CUtlString */
};

// <000B7D6E> ../vfx_dx/hlsl_parser.h:57
void CShaderParamBuilder::CShaderParamBuilder(VfxProgram_t programType, CVfxParsedShaderParamMap& effectParams, CVfxParsedConstantBufferVector& constantBuffers, CVfxStructDeclVector& structs, CVfxMainEntryPointInfo& mainEntryPointInfo, CVfxParsedInputSignatureVector& inputSignature)
{
} /* size: 0 */

// <000B7CBC> ../vfx_dx/hlsl_parser.h:63
void CShaderParamBuilder::~CShaderParamBuilder()
{
} /* size: 0 */

// <002AAEE0> ../vfx_dx/hlsl_parser.h:93
void CShaderParamBuilder::InjectRtxFetchGlobals()
{
} /* size: 12 */

// <002AA448> ../vfx_dx/hlsl_parser.h:93
inline void CShaderParamBuilder::InjectRtxFetchGlobals()
{
} /* size: 0 */

// <002AAF0B> ../vfx_dx/hlsl_parser.h:95
void CShaderParamBuilder::GetBDAGlobalsVariable()
{
} /* size: 12 */

// <002AA42F> ../vfx_dx/hlsl_parser.h:95
inline void CShaderParamBuilder::GetBDAGlobalsVariable()
{
} /* size: 0 */

// <002AAF36> ../vfx_dx/hlsl_parser.h:97
void CShaderParamBuilder::GetAllowRewriteBDAGlobalsVariable()
{
} /* size: 12 */

// <002AA416> ../vfx_dx/hlsl_parser.h:97
inline void CShaderParamBuilder::GetAllowRewriteBDAGlobalsVariable()
{
} /* size: 0 */

