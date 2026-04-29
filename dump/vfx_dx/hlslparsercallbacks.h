
//
// vfx_dx/hlslparsercallbacks.h
//
//	referenced by: libvfx_vulkan.so
//
//	functions: 12
//	classes: 2
//	structs: 5
//

// <002DD419> ../vfx_dx/hlslparsercallbacks.h:16
void VariableValue_t::~VariableValue_t()
{
} /* size: 0 */

// <002DD3FC> ../vfx_dx/hlslparsercallbacks.h:16
inline void VariableValue_t::~VariableValue_t()
{
} /* size: 0 */

// <002D8711> ../vfx_dx/hlslparsercallbacks.h:16
void VariableValue_t::VariableValue_t(const VariableValue_t &)
{
} /* size: 0 */

// <002D86EF> ../vfx_dx/hlslparsercallbacks.h:16
inline void VariableValue_t::VariableValue_t(const VariableValue_t &)
{
} /* size: 0 */

// <002752A0> ../vfx_dx/hlslparsercallbacks.h:16
// member function: 1
// member variables: 3
// struct size: 16
struct VariableValue_t {
	/* ../vfx_dx/hlslparsercallbacks.h:21 */
	union {
		int32 nIntValue; /* 0 4 */
		float32 flValue; /* 0 4 */
	};
	VfxParsedShaderParamType_t type; /* 0 4 */
	union {
		int32 nIntValue; /* 4 4 */
		float32 flValue; /* 4 4 */
	}; /* 4 4 */
	CUtlString stringValue; /* 8 8 */
	/* ../vfx_dx/hlslparsercallbacks.h:28 */
	void VariableValue_t(VariableValue_t* );
};

// <002CD473> ../vfx_dx/hlslparsercallbacks.h:16
// member functions: 3
// member variables: 3
// struct size: 16
struct VariableValue_t {
	/* ../vfx_dx/hlslparsercallbacks.h:21 */
	union {
		int32 nIntValue; /* 0 4 */
		float32 flValue; /* 0 4 */
	};
	VfxParsedShaderParamType_t type; /* 0 4 */
	union {
		int32 nIntValue; /* 4 4 */
		float32 flValue; /* 4 4 */
	}; /* 4 4 */
	CUtlString stringValue; /* 8 8 */
	/* ../vfx_dx/hlslparsercallbacks.h:28 */
	void VariableValue_t(VariableValue_t* );
	void VariableValue_t(VariableValue_t* , const VariableValue_t& );
	void ~VariableValue_t(VariableValue_t* );
};

// <0032A840> ../vfx_dx/hlslparsercallbacks.h:28
void VariableValue_t::VariableValue_t()
{
} /* size: 0 */

// <0032A827> ../vfx_dx/hlslparsercallbacks.h:28
inline void VariableValue_t::VariableValue_t()
{
} /* size: 0 */

// <002A35B9> ../vfx_dx/hlslparsercallbacks.h:31
void ShaderParamInsertString_t::~ShaderParamInsertString_t()
{
} /* size: 0 */

// <002A359C> ../vfx_dx/hlslparsercallbacks.h:31
inline void ShaderParamInsertString_t::~ShaderParamInsertString_t()
{
} /* size: 0 */

// <0027531E> ../vfx_dx/hlslparsercallbacks.h:31
// member function: 1
// member variables: 2
// struct size: 16
struct ShaderParamInsertString_t {
	int nToken; /* 0 4 */
	CUtlString insertString; /* 8 8 */
	void ~ShaderParamInsertString_t(ShaderParamInsertString_t* );
};

// <00275361> ../vfx_dx/hlslparsercallbacks.h:37
// member variables: 4
// struct size: 12
struct VfxOverrideShaderVariable_t {
	bool bOverride; /* 0 1 */
	bool bUseManualRegisterAssignment; /* 1 1 */
	VfxParsedShaderParamType_t newType; /* 4 4 */
	VfxParsedShaderParamClass_t newClass; /* 8 4 */
};

// <002AA32F> ../vfx_dx/hlslparsercallbacks.h:45
void IHlslParserCallbacks::IHlslParserCallbacks()
{
} /* size: 0 */

// <002AA312> ../vfx_dx/hlslparsercallbacks.h:45
inline void IHlslParserCallbacks::IHlslParserCallbacks()
{
} /* size: 0 */

// <002753F5> ../vfx_dx/hlslparsercallbacks.h:45
// member functions: 46
// member variable: 1
// vtable entries: 19
// class size: 8
class IHlslParserCallbacks {
	void IHlslParserCallbacks(IHlslParserCallbacks* , IHlslParserCallbacks& );
	void IHlslParserCallbacks(IHlslParserCallbacks* , const IHlslParserCallbacks& );
	void IHlslParserCallbacks(IHlslParserCallbacks* );
	void ~IHlslParserCallbacks(IHlslParserCallbacks* );
	int ()(void) * * _vptr.IHlslParserCallbacks; /* 0 8 */
	/* ../vfx_dx/hlslparsercallbacks.h:48 */
	virtual bool BeginStructDecl(IHlslParserCallbacks* , const char* );
	/* ../vfx_dx/hlslparsercallbacks.h:49 */
	virtual bool AddStructMember(IHlslParserCallbacks* , const char* , VfxParsedShaderParamClass_t, VfxParsedShaderParamType_t, int32, int32, int, const char* , const char* );
	/* ../vfx_dx/hlslparsercallbacks.h:51 */
	virtual bool IsCurrentStructDeclEmpty(const IHlslParserCallbacks* );
	/* ../vfx_dx/hlslparsercallbacks.h:52 */
	virtual bool EndStructDecl(IHlslParserCallbacks* );
	/* ../vfx_dx/hlslparsercallbacks.h:54 */
	virtual bool BeginConstantBufferDecl(IHlslParserCallbacks* , const char* );
	/* ../vfx_dx/hlslparsercallbacks.h:55 */
	virtual bool SetContantBufferBindSlot(IHlslParserCallbacks* , int32);
	/* ../vfx_dx/hlslparsercallbacks.h:56 */
	virtual bool EndConstantBufferDecl(IHlslParserCallbacks* );
	/* ../vfx_dx/hlslparsercallbacks.h:57 */
	virtual const char* GetCurrentConstantBufferName(const IHlslParserCallbacks* );
	/* ../vfx_dx/hlslparsercallbacks.h:59 */
	virtual bool ShouldEmitVariable(const IHlslParserCallbacks* , const CUtlString& );
	/* ../vfx_dx/hlslparsercallbacks.h:60 */
	virtual bool AddGlobalVariable(IHlslParserCallbacks* , const char* , VfxParsedShaderParamClass_t, VfxParsedShaderParamType_t, int32, int32, int32, const char* , bool, int, VfxOverrideShaderVariable_t& , bool);
	/* ../vfx_dx/hlslparsercallbacks.h:64 */
	virtual bool AddAnnotation(IHlslParserCallbacks* , const char* , VfxParsedShaderParamClass_t, VfxParsedShaderParamType_t, int32, int32, int32, const CUtlVector<VariableValue_t, CUtlMemory<VariableValue_t, int> >& );
	/* ../vfx_dx/hlslparsercallbacks.h:67 */
	virtual bool AddFunctionAttribute(IHlslParserCallbacks* , const CUtlVector<VariableValue_t, CUtlMemory<VariableValue_t, int> >& );
	/* ../vfx_dx/hlslparsercallbacks.h:68 */
	virtual void ClearFunctionAttributes(IHlslParserCallbacks* );
	/* ../vfx_dx/hlslparsercallbacks.h:69 */
	virtual bool AddFunctionDefinition(IHlslParserCallbacks* , const char* , const char* , const char* , void* , int, int);
	/* ../vfx_dx/hlslparsercallbacks.h:71 */
	virtual CUtlString GetFunctionBodyPrefix(IHlslParserCallbacks* , const char* );
	/* ../vfx_dx/hlslparsercallbacks.h:73 */
	virtual int GetBindSlotForExternalDescriptorSet(IHlslParserCallbacks* , const char* );
	/* ../vfx_dx/hlslparsercallbacks.h:75 */
	virtual bool InjectRtxFetchGlobals(const IHlslParserCallbacks* );
	/* ../vfx_dx/hlslparsercallbacks.h:76 */
	virtual bool GetBDAGlobalsVariable(const IHlslParserCallbacks* );
	/* ../vfx_dx/hlslparsercallbacks.h:77 */
	virtual bool GetAllowRewriteBDAGlobalsVariable(const IHlslParserCallbacks* );
	void IHlslParserCallbacks(class IHlslParserCallbacks *, class IHlslParserCallbacks &); /* linkage=_ZN20IHlslParserCallbacksC4EOS_ */
	void IHlslParserCallbacks(class IHlslParserCallbacks *, const class IHlslParserCallbacks  &); /* linkage=_ZN20IHlslParserCallbacksC4ERKS_ */
	void IHlslParserCallbacks(class IHlslParserCallbacks *); /* linkage=_ZN20IHlslParserCallbacksC4Ev */
	void ~IHlslParserCallbacks(class IHlslParserCallbacks *); /* linkage=_ZN20IHlslParserCallbacksD4Ev */
	virtual bool BeginStructDecl(class IHlslParserCallbacks *, const char  *); /* linkage=_ZN20IHlslParserCallbacks15BeginStructDeclEPKc */
	virtual bool AddStructMember(class IHlslParserCallbacks *, const char  *, enum VfxParsedShaderParamClass_t, enum VfxParsedShaderParamType_t, int32, int32, int, const char  *, const char  *); /* linkage=_ZN20IHlslParserCallbacks15AddStructMemberEPKc27VfxParsedShaderParamClass_t26VfxParsedShaderParamType_tiiiS1_S1_ */
	virtual bool IsCurrentStructDeclEmpty(const class IHlslParserCallbacks  *); /* linkage=_ZNK20IHlslParserCallbacks24IsCurrentStructDeclEmptyEv */
	virtual bool EndStructDecl(class IHlslParserCallbacks *); /* linkage=_ZN20IHlslParserCallbacks13EndStructDeclEv */
	virtual bool BeginConstantBufferDecl(class IHlslParserCallbacks *, const char  *); /* linkage=_ZN20IHlslParserCallbacks23BeginConstantBufferDeclEPKc */
	virtual bool SetContantBufferBindSlot(class IHlslParserCallbacks *, int32); /* linkage=_ZN20IHlslParserCallbacks24SetContantBufferBindSlotEi */
	virtual bool EndConstantBufferDecl(class IHlslParserCallbacks *); /* linkage=_ZN20IHlslParserCallbacks21EndConstantBufferDeclEv */
	virtual const char  * GetCurrentConstantBufferName(const class IHlslParserCallbacks  *); /* linkage=_ZNK20IHlslParserCallbacks28GetCurrentConstantBufferNameEv */
	virtual bool ShouldEmitVariable(const class IHlslParserCallbacks  *, const class CUtlString  &); /* linkage=_ZNK20IHlslParserCallbacks18ShouldEmitVariableERK10CUtlString */
	virtual bool AddGlobalVariable(class IHlslParserCallbacks *, const char  *, enum VfxParsedShaderParamClass_t, enum VfxParsedShaderParamType_t, int32, int32, int32, const char  *, bool, int, class VfxOverrideShaderVariable_t &, bool); /* linkage=_ZN20IHlslParserCallbacks17AddGlobalVariableEPKc27VfxParsedShaderParamClass_t26VfxParsedShaderParamType_tiiiS1_biR27VfxOverrideShaderVariable_tb */
	virtual bool AddAnnotation(class IHlslParserCallbacks *, const char  *, enum VfxParsedShaderParamClass_t, enum VfxParsedShaderParamType_t, int32, int32, int32, const class CUtlVector<VariableValue_t, CUtlMemory<VariableValue_t, int> >  &); /* linkage=_ZN20IHlslParserCallbacks13AddAnnotationEPKc27VfxParsedShaderParamClass_t26VfxParsedShaderParamType_tiiiRK10CUtlVectorI15VariableValue_t10CUtlMemoryIS5_iEE */
	virtual bool AddFunctionAttribute(class IHlslParserCallbacks *, const class CUtlVector<VariableValue_t, CUtlMemory<VariableValue_t, int> >  &); /* linkage=_ZN20IHlslParserCallbacks20AddFunctionAttributeERK10CUtlVectorI15VariableValue_t10CUtlMemoryIS1_iEE */
	virtual void ClearFunctionAttributes(class IHlslParserCallbacks *); /* linkage=_ZN20IHlslParserCallbacks23ClearFunctionAttributesEv */
	virtual bool AddFunctionDefinition(class IHlslParserCallbacks *, const char  *, const char  *, const char  *, void *, int, int); /* linkage=_ZN20IHlslParserCallbacks21AddFunctionDefinitionEPKcS1_S1_Pvii */
	virtual class CUtlString GetFunctionBodyPrefix(class IHlslParserCallbacks *, const char  *); /* linkage=_ZN20IHlslParserCallbacks21GetFunctionBodyPrefixEPKc */
	virtual int GetBindSlotForExternalDescriptorSet(class IHlslParserCallbacks *, const char  *); /* linkage=_ZN20IHlslParserCallbacks35GetBindSlotForExternalDescriptorSetEPKc */
	virtual bool InjectRtxFetchGlobals(const class IHlslParserCallbacks  *); /* linkage=_ZNK20IHlslParserCallbacks21InjectRtxFetchGlobalsEv */
	virtual bool GetBDAGlobalsVariable(const class IHlslParserCallbacks  *); /* linkage=_ZNK20IHlslParserCallbacks21GetBDAGlobalsVariableEv */
	virtual bool GetAllowRewriteBDAGlobalsVariable(const class IHlslParserCallbacks  *); /* linkage=_ZNK20IHlslParserCallbacks33GetAllowRewriteBDAGlobalsVariableEv */
};

// <002988E1> ../vfx_dx/hlslparsercallbacks.h:80
void IStreamRewriter::IStreamRewriter()
{
} /* size: 0 */

// <002988C4> ../vfx_dx/hlslparsercallbacks.h:80
inline void IStreamRewriter::IStreamRewriter()
{
} /* size: 0 */

// <00275863> ../vfx_dx/hlslparsercallbacks.h:80
// member functions: 24
// member variable: 1
// vtable entries: 8
// class size: 8
class IStreamRewriter {
	void IStreamRewriter(IStreamRewriter* , IStreamRewriter& );
	void IStreamRewriter(IStreamRewriter* , const IStreamRewriter& );
	void IStreamRewriter(IStreamRewriter* );
	void ~IStreamRewriter(IStreamRewriter* );
	int ()(void) * * _vptr.IStreamRewriter; /* 0 8 */
	/* ../vfx_dx/hlslparsercallbacks.h:83 */
	virtual void InsertRegisterAllocation(IStreamRewriter* , int, const CUtlString& );
	/* ../vfx_dx/hlslparsercallbacks.h:84 */
	virtual void InsertRegisterAllocationPrefix(IStreamRewriter* , int, const CUtlString& );
	/* ../vfx_dx/hlslparsercallbacks.h:85 */
	virtual void SkipTokens(IStreamRewriter* , int, int);
	/* ../vfx_dx/hlslparsercallbacks.h:86 */
	virtual void SelectOutputStream(IStreamRewriter* , int, int);
	/* ../vfx_dx/hlslparsercallbacks.h:87 */
	virtual void InsertChar(IStreamRewriter* , int, char);
	/* ../vfx_dx/hlslparsercallbacks.h:88 */
	virtual void InsertString(IStreamRewriter* , int, const char* );
	/* ../vfx_dx/hlslparsercallbacks.h:89 */
	virtual void InsertBindlessConstants(IStreamRewriter* , const char* , const char* );
	/* ../vfx_dx/hlslparsercallbacks.h:90 */
	virtual void InsertBindlessTexture2D(IStreamRewriter* , const char* , const char* , int);
	void IStreamRewriter(class IStreamRewriter *, class IStreamRewriter &); /* linkage=_ZN15IStreamRewriterC4EOS_ */
	void IStreamRewriter(class IStreamRewriter *, const class IStreamRewriter  &); /* linkage=_ZN15IStreamRewriterC4ERKS_ */
	void IStreamRewriter(class IStreamRewriter *); /* linkage=_ZN15IStreamRewriterC4Ev */
	void ~IStreamRewriter(class IStreamRewriter *); /* linkage=_ZN15IStreamRewriterD4Ev */
	virtual void InsertRegisterAllocation(class IStreamRewriter *, int, const class CUtlString  &); /* linkage=_ZN15IStreamRewriter24InsertRegisterAllocationEiRK10CUtlString */
	virtual void InsertRegisterAllocationPrefix(class IStreamRewriter *, int, const class CUtlString  &); /* linkage=_ZN15IStreamRewriter30InsertRegisterAllocationPrefixEiRK10CUtlString */
	virtual void SkipTokens(class IStreamRewriter *, int, int); /* linkage=_ZN15IStreamRewriter10SkipTokensEii */
	virtual void SelectOutputStream(class IStreamRewriter *, int, int); /* linkage=_ZN15IStreamRewriter18SelectOutputStreamEii */
	virtual void InsertChar(class IStreamRewriter *, int, char); /* linkage=_ZN15IStreamRewriter10InsertCharEic */
	virtual void InsertString(class IStreamRewriter *, int, const char  *); /* linkage=_ZN15IStreamRewriter12InsertStringEiPKc */
	virtual void InsertBindlessConstants(class IStreamRewriter *, const char  *, const char  *); /* linkage=_ZN15IStreamRewriter23InsertBindlessConstantsEPKcS1_ */
	virtual void InsertBindlessTexture2D(class IStreamRewriter *, const char  *, const char  *, int); /* linkage=_ZN15IStreamRewriter23InsertBindlessTexture2DEPKcS1_i */
};

// <002753AB> ../vfx_dx/hlslparsercallbacks.h:93
// member variables: 4
// struct size: 32
struct ParserCallbacks_t {
	IHlslParserCallbacks * pParserCallbacks; /* 0 8 */
	IStreamRewriter * pRewriter; /* 8 8 */
	CHlslParser * pHlslParser; /* 16 8 */
	VfxShaderLanguage_t lang; /* 24 4 */
};

