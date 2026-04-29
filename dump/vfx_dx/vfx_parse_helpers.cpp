
//
// vfx_dx/vfx_parse_helpers.cpp
//
//	referenced by: libvfx_vulkan.so
//
//	functions: 54
//	class: 1
//	struct: 1
//

// <0024E553> ../vfx_dx/vfx_parse_helpers.cpp:23
// variable: 1
const VfxRenderStateInfo_t* FindRenderStateInfo(const char* pName, int* pRSInfoIndexOut, const VfxRenderStateInfo_t* pRSInfoTable)
{
	int i; // 25
} /* size: 0, variables: 1 */

// <0024E523> ../vfx_dx/vfx_parse_helpers.cpp:41
const VfxRenderStateInfo_t* VfxFindBaseRenderStateInfo(const char* pName, int* pRSInfoIndexOut)
{
} /* size: 0 */

// <0024E46C> ../vfx_dx/vfx_parse_helpers.cpp:46
// function call: 1
const VfxRenderStateInfo_t* VfxFindBaseSamplerStateInfo(const char* pName, int* pRSInfoIndexOut)
{
	FindRenderStateInfo(const char* pName,
				int* pRSInfoIndexOut,
				const VfxRenderStateInfo_t* pRSInfoTable);  // 48
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0024E110> ../vfx_dx/vfx_parse_helpers.cpp:52
// function calls: 7
VfxParsedShaderParamType_t VfxExtractShaderParamTypeFromString(const char* pString)
{
	V_strncmp<int>(const char* s1,
			const char* s2,
			int count);  // 54
	V_strncmp<int>(const char* s1,
			const char* s2,
			int count);  // 58
	V_strncmp<int>(const char* s1,
			const char* s2,
			int count);  // 62
	V_strncmp<int>(const char* s1,
			const char* s2,
			int count);  // 66
	V_strncmp<int>(const char* s1,
			const char* s2,
			int count);  // 70
	V_strncmp<int>(const char* s1,
			const char* s2,
			int count);  // 74
	V_strncmp<int>(const char* s1,
			const char* s2,
			int count);  // 78
} /* size: 235, inline expansions: 7 (137 bytes) */

// <0024DCC2> ../vfx_dx/vfx_parse_helpers.cpp:133
// variable: 1
// function calls: 15
CUtlString VfxParamTypeToString(VfxParsedShaderParamType_t paramType, int nNumRows, int nNumColums)
{
	CUtlString s; // 135
	CUtlString::CUtlString(); // 135
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 83
	CFmtStrN<256>::operator char const*(); // 139
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 139
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 83
	CFmtStrN<256>::operator char const*(); // 143
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 143
} /* size: 318, variables: 1, inline expansions: 15 (375 bytes) */

// <0024DC04> ../vfx_dx/vfx_parse_helpers.cpp:162
// variable: 1
// function call: 1
CUtlString VfxRegisterTypeToString(VfxRegisterType_t registerType)
{
	CUtlString s; // 164
	CUtlString::CUtlString(
			const char* pString);  // 164
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <0024DBC5> ../vfx_dx/vfx_parse_helpers.cpp:170
VfxRegisterType_t VfxParsedShaderParamTypeToRegisterType(VfxParsedShaderParamType_t type)
{
} /* size: 29 */

// <0024DB8B> ../vfx_dx/vfx_parse_helpers.cpp:233
bool VfxIsTextureParamType(VfxParsedShaderParamType_t paramType)
{
} /* size: 29 */

// <0024DB4C> ../vfx_dx/vfx_parse_helpers.cpp:255
bool VfxIsSamplerParamType(VfxParsedShaderParamType_t paramType)
{
} /* size: 28 */

// <0024DB0C> ../vfx_dx/vfx_parse_helpers.cpp:272
VfxVariableType_t VfxGetVariableType(const CVfxParsedShaderParam& param, int nRows, int nColumns)
{
} /* size: 0 */

// <0024DAC5> ../vfx_dx/vfx_parse_helpers.cpp:383
// variables: 2
VfxColorSpace_t ConvertStringToColorSpaceEnum(const char* pStr, bool* pSuccessOut)
{
	VfxColorSpace_t colorSpace; // 385
	bool bSuccess; // 386
} /* size: 0, variables: 2 */

// <0024DA78> ../vfx_dx/vfx_parse_helpers.cpp:406
// variable: 1
const CVfxVariableDescription* FindEffectVariable(const char* pVarName, const CUtlVector<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >* pVariableDescriptionArray, int32* pVarIndex)
{
	{
		int i; // 410
	}
} /* size: 0 */

// <0025291A> ../vfx_dx/vfx_parse_helpers.cpp:429
// variables: 5
// function calls: 7
const CVfxVariableDescription* FindOrAddEffectVariable(const char* pVarName, const CVfxParsedShaderParamMap& effectParams, const CVfx* pVfx, VfxProgram_t programType, CUtlVector<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >* pVariableDescriptionArray, CUtlVector<CVfxTextureChannelProcessor, CUtlMemory<CVfxTextureChannelProcessor, int> >* pTextureChannelProcessorArray, int32* pVarIndex)
{
	const CVfxVariableDescription* pFoundVar; // 434
	uint16 nParamIdx; // 441
	CVfxVariableDescription newVar; // 447
	int nVarIndex; // 454
	{
		int i; // 410
		CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::Count(); // 410
		CUtlMemory<CVfxVariableDescription, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::operator[](
				int i);  // 412
		V_strcmp(const char* s1,
			const char* s2);  // 412
		CUtlMemory<CVfxVariableDescription, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::operator[](
				int i);  // 418
	}
	FindEffectVariable(const char* pVarName,
				const CUtlVector<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >* pVariableDescriptionArray,
				int32* pVarIndex);  // 434
} /* size: 184, variables: 4, inline expansions: 1 (60 bytes) */

// <002521C8> ../vfx_dx/vfx_parse_helpers.cpp:429
// variables: 4
// function calls: 27
const CVfxVariableDescription* FindOrAddEffectVariable(const char* pVarName, const CVfxParsedShaderParamMap& effectParams, const CVfx* pVfx, VfxProgram_t programType, CUtlVector<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >* pVariableDescriptionArray, CUtlVector<CVfxTextureChannelProcessor, CUtlMemory<CVfxTextureChannelProcessor, int> >* pTextureChannelProcessorArray, int32* pVarIndex)
{
	const CVfxVariableDescription* pFoundVar; // 434
	uint16 nParamIdx; // 441
	CVfxVariableDescription newVar; // 447
	int nVarIndex; // 454
	CUtlString::CUtlString(
			const char* pString);  // 441
	CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::FindAltKeyType<CUtlString>(
					const CUtlString& search);  // 243
	CUtlMap<CUtlString, CVfxParsedShaderParam::Find(
		const KeyType_t& key);  // 441
	CUtlString::~CUtlString(); // 441
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::IsIdxValid(
			short unsigned int i);  // 661
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::IsIdxAfter(
			short unsigned int i,
			const Iterator_t& it);  // 664
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::operator[](
			short unsigned int i);  // 611
	CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::LeftChild(
			short unsigned int i);  // 667
	CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::IsValidIndex(
			short unsigned int i);  // 659
	CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::IsValidIndex(
			short unsigned int i);  // 190
	CUtlMap<CUtlString, CVfxParsedShaderParam::IsValidIndex(
			IndexType_t i);  // 442
	CUtlStringToken::CUtlStringToken(); // 560
	CVfxVariableDescription::CVfxVariableDescription(); // 447
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::operator[](
			short unsigned int i);  // 545
	CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::Element(
		short unsigned int i);  // 93
	CUtlMap<CUtlString, CVfxParsedShaderParam::operator[](
			IndexType_t i);  // 448
	CUtlMemory<CVfxVariableDescription, int>::NumAllocated(); // 1196
	CUtlMemory<CVfxVariableDescription, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::Element(
		int i);  // 1201
	CopyConstruct<CVfxVariableDescription>(CVfxVariableDescription* pMemory,
						const CVfxVariableDescription& src);  // 1201
	CUtlMemory<CVfxVariableDescription, int>::Base(); // 112
	CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::Base(); // 368
	CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::AddToTail(
			const CVfxVariableDescription& src);  // 454
	CUtlMemory<CVfxVariableDescription, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::operator[](
			int i);  // 459
} /* size: 424, variables: 4, inline expansions: 27 (454 bytes) */

// <0024D9D6> ../vfx_dx/vfx_parse_helpers.cpp:429
// variables: 4
const CVfxVariableDescription* FindOrAddEffectVariable(const char* pVarName, const CVfxParsedShaderParamMap& effectParams, const CVfx* pVfx, VfxProgram_t programType, CUtlVector<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >* pVariableDescriptionArray, CUtlVector<CVfxTextureChannelProcessor, CUtlMemory<CVfxTextureChannelProcessor, int> >* pTextureChannelProcessorArray, int32* pVarIndex)
{
	const CVfxVariableDescription* pFoundVar; // 434
	uint16 nParamIdx; // 441
	CVfxVariableDescription newVar; // 447
	int nVarIndex; // 454
} /* size: 0, variables: 4 */

// <0024D94E> ../vfx_dx/vfx_parse_helpers.cpp:466
// variables: 4
const CVfxVariableDescription* FindOrAddInputTextureVariable(const char* pVarName, const CVfxParsedShaderParamMap& effectParams, const CVfx* pVfx, CUtlVector<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >* pVariableDescriptionArray, int32* pVarIndex)
{
	const CVfxVariableDescription* pFoundVar; // 470
	uint16 nParamIdx; // 483
	CVfxVariableDescription newVar; // 497
	int nVarIndex; // 504
} /* size: 0, variables: 4 */

// <0024D902> ../vfx_dx/vfx_parse_helpers.cpp:515
// variable: 1
VfxVariableType_t RenderStateDataTypeToVariableType(DataType rsType)
{
	const VfxVariableType_t   s_translationTable; // 517
} /* size: 0, variables: 1 */

// <00250770> ../vfx_dx/vfx_parse_helpers.cpp:555
// variable: 1
// function calls: 2
uint32 GetRegTypeContextStateBits(const char* pName, VfxRegisterType_t regType)
{
	const VfxRenderStateInfo_t* pRsInfo; // 557
	FindRenderStateInfo(const char* pName,
				int* pRSInfoIndexOut,
				const VfxRenderStateInfo_t* pRSInfoTable);  // 43
	VfxFindBaseRenderStateInfo(const char* pName,
					int* pRSInfoIndexOut);  // 575
	{
	}
	{
	}
} /* size: 0, variables: 1, inline expansions: 2 (52 bytes) */

// <0024D82F> ../vfx_dx/vfx_parse_helpers.cpp:555
// variables: 4
uint32 GetRegTypeContextStateBits(const char* pName, VfxRegisterType_t regType)
{
	const VfxRenderStateInfo_t* pRsInfo; // 557
	const char   __FUNCTION__; // 48618
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 604
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 620
	}
} /* size: 0, variables: 2 */

// <0024CE01> ../vfx_dx/vfx_parse_helpers.cpp:625
void CExpressionParserCallback::~CExpressionParserCallback()
{
} /* size: 0 */

// <0024CDE4> ../vfx_dx/vfx_parse_helpers.cpp:625
inline void CExpressionParserCallback::~CExpressionParserCallback()
{
} /* size: 0 */

// <0022C81F> ../vfx_dx/vfx_parse_helpers.cpp:625
// member functions: 14
// member variables: 9
// vtable entry: 1
// class size: 96
class CExpressionParserCallback : public IExpressionShaderVariableCallback {
public:
	/* class IExpressionShaderVariableCallback <ancestor>; */ /* 0 8 */
	void ~CExpressionParserCallback(CExpressionParserCallback* );
	void CExpressionParserCallback(CExpressionParserCallback* , CExpressionParserCallback& );
	void CExpressionParserCallback(CExpressionParserCallback* , const CExpressionParserCallback& );
	/* ../vfx_dx/vfx_parse_helpers.cpp:628 */
	void CExpressionParserCallback(CExpressionParserCallback* , const char* , const CVfxParsedShaderParamMap& , const CVfx* , VfxProgram_t, CUtlVector<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >* , CUtlVector<CVfxTextureChannelProcessor, CUtlMemory<CVfxTextureChannelProcessor, int> >* );
	/* ../vfx_dx/vfx_parse_helpers.cpp:640 */
	bool ExpressionReferencedThis(const CExpressionParserCallback* );
	/* ../vfx_dx/vfx_parse_helpers.cpp:642 */
	virtual bool IsShaderVariableName(CExpressionParserCallback* , const char* , bool* , const char** );
	/* ../vfx_dx/vfx_parse_helpers.cpp:712 */
	void UpdateReferencedVariableContextState(CExpressionParserCallback* , CVfxVariableDescription* );
private:
	CVfxParsedShaderParam * m_pParamForVarBeingParsed; /* 8 8 */
	const CVfxParsedShaderParamMap & m_effectParams; /* 16 8 */
	const class CVfx * m_pVfx; /* 24 8 */
	VfxProgram_t m_programType; /* 32 4 */
	CUtlVector<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> > * m_pVariableDescriptionArray; /* 40 8 */
	CUtlVector<int, CUtlMemory<int, int> > m_variableRefArray; /* 48 32 */
	CUtlVector<CVfxTextureChannelProcessor, CUtlMemory<CVfxTextureChannelProcessor, int> > * m_pTextureChannelProcessorArray; /* 80 8 */
	bool m_bExpressionUsedThisReference; /* 88 1 */
	void ~CExpressionParserCallback(class CExpressionParserCallback *); /* linkage=_ZN25CExpressionParserCallbackD4Ev */
	void CExpressionParserCallback(class CExpressionParserCallback *, class CExpressionParserCallback &); /* linkage=_ZN25CExpressionParserCallbackC4EOS_ */
	void CExpressionParserCallback(class CExpressionParserCallback *, const class CExpressionParserCallback  &); /* linkage=_ZN25CExpressionParserCallbackC4ERKS_ */
	void CExpressionParserCallback(class CExpressionParserCallback *, const char  *, const CVfxParsedShaderParamMap  &, const class CVfx  *, enum VfxProgram_t, class CUtlVector<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> > *, class CUtlVector<CVfxTextureChannelProcessor, CUtlMemory<CVfxTextureChannelProcessor, int> > *); /* linkage=_ZN25CExpressionParserCallbackC4EPKcRK7CUtlMapI10CUtlStringP21CVfxParsedShaderParamtPFbRKS3_S7_EEPK4CVfx12VfxProgram_tP10CUtlVectorI23CVfxVariableDescription10CUtlMemoryISI_iEEPSH_I27CVfxTextureChannelProcessorSJ_ISN_iEE */
	bool ExpressionReferencedThis(const class CExpressionParserCallback  *); /* linkage=_ZNK25CExpressionParserCallback24ExpressionReferencedThisEv */
	virtual bool IsShaderVariableName(class CExpressionParserCallback *, const char  *, bool *, const char  * *); /* linkage=_ZN25CExpressionParserCallback20IsShaderVariableNameEPKcPbPS1_ */
	void UpdateReferencedVariableContextState(class CExpressionParserCallback *, class CVfxVariableDescription *); /* linkage=_ZN25CExpressionParserCallback36UpdateReferencedVariableContextStateEP23CVfxVariableDescription */
};

// <0024D7BE> ../vfx_dx/vfx_parse_helpers.cpp:628
void CExpressionParserCallback::CExpressionParserCallback(const char* pParamName, const CVfxParsedShaderParamMap& effectParams, const CVfx* pVfx, VfxProgram_t programType, CUtlVector<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >* pVariableDescriptionArray, CUtlVector<CVfxTextureChannelProcessor, CUtlMemory<CVfxTextureChannelProcessor, int> >* pTextureChannelProcessorArray)
{
	{
		{
		}
	}
} /* size: 0 */

// <0024D72D> ../vfx_dx/vfx_parse_helpers.cpp:628
// variables: 2
inline void CExpressionParserCallback::CExpressionParserCallback(const char* pParamName, const CVfxParsedShaderParamMap& effectParams, const CVfx* pVfx, VfxProgram_t programType, CUtlVector<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >* pVariableDescriptionArray, CUtlVector<CVfxTextureChannelProcessor, CUtlMemory<CVfxTextureChannelProcessor, int> >* pTextureChannelProcessorArray)
{
	const char   __FUNCTION__; // 48591
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 636
	}
} /* size: 0, variables: 1 */

// <0024D714> ../vfx_dx/vfx_parse_helpers.cpp:640
inline void CExpressionParserCallback::ExpressionReferencedThis()
{
} /* size: 0 */

// <0024CEAB> ../vfx_dx/vfx_parse_helpers.cpp:642
// variables: 5
// function calls: 29
void CExpressionParserCallback::IsShaderVariableName(const char* pSymbolName, bool* pLegalToUseOut, const char ** ppTranslatedSymbolNameOut)
{
	int32 nVarIndex; // 671
	const CVfxVariableDescription* pVar; // 672
	const char   __FUNCTION__; // 48466
	{
		CVfxParsedShaderParam* pParamForFoundVar; // 691
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 692
		}
		CUtlMemory<int, int>::NumAllocated(); // 1196
		CUtlMemory<int, int>::operator[](
				int i);  // 602
		CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
			int i);  // 1201
		CopyConstruct<int>(int* pMemory,
					const int& src);  // 1201
		CUtlMemory<int, int>::Base(); // 112
		CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 368
		CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
				const int& src);  // 678
		CUtlString::CUtlString(
				const char* pString);  // 691
		CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::FindAltKeyType<CUtlString>(
						const CUtlString& search);  // 243
		CUtlMap<CUtlString, CVfxParsedShaderParam::Find(
			const KeyType_t& key);  // 291
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::operator[](
				short unsigned int i);  // 545
		CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::Element(
			short unsigned int i);  // 91
		CUtlMap<CUtlString, CVfxParsedShaderParam::Element(
			IndexType_t i);  // 294
		CUtlMap<CUtlString, CVfxParsedShaderParam::FindElement(
				const KeyType_t& key,
				const ElemType_t& defaultValue);  // 691
		CUtlString::~CUtlString(); // 691
		CUtlMemory<CVfxParsedShaderParam::NumAllocated(); // 1196
		CUtlMemory<CVfxParsedShaderParam::operator[](
				int i);  // 602
		CUtlVectorBase<CVfxParsedShaderParam::Element(
			int i);  // 1201
		CopyConstruct<CVfxParsedShaderParam*>(CVfxParsedShaderParam** pMemory,
							CVfxParsedShaderParam* const& src);  // 1201
		CUtlMemory<CVfxParsedShaderParam::Base(); // 112
		CUtlVectorBase<CVfxParsedShaderParam::Base(); // 368
		CUtlVectorBase<CVfxParsedShaderParam::ResetDbgInfo(); // 824
		CUtlVectorBase<CVfxParsedShaderParam::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<CVfxParsedShaderParam::AddToTail(
				CVfxParsedShaderParam* const& src);  // 695
		CVfxParsedShaderParam::IsUsedInShader(); // 696
	}
	V_strcmp(const char* s1,
		const char* s2);  // 653
	CUtlString::Get(); // 661
} /* size: 658, variables: 3, inline expansions: 2 (32 bytes) */

// <0024CE5C> ../vfx_dx/vfx_parse_helpers.cpp:712
// variables: 3
inline void CExpressionParserCallback::UpdateReferencedVariableContextState(CVfxVariableDescription* pVar)
{
	uint32 nVarStateBits; // 714
	{
		int i; // 715
		{
			CVfxVariableDescription& refVar; // 717
		}
	}
} /* size: 0, variables: 1 */

// <0024CE18> ../vfx_dx/vfx_parse_helpers.cpp:734
// variables: 2
void AddRenderStateEnumValuesToStackMachineBuilderConstants(CVfxStackMachineBuilder& builder, const VfxRenderStateEnumInfo_t* pEnums)
{
	int i; // 739
	{
		Vector4D enumVal; // 742
	}
} /* size: 0, variables: 1 */

// <0024B4F3> ../vfx_dx/vfx_parse_helpers.cpp:750
// variables: 17
// function calls: 85
bool ParseRenderStateValue(CVfxVariableDescription* pVar, const VfxRenderStateInfo_t* pRSInfo, const char* pArgStr, const CVfxParsedShaderParamMap& effectParams, const CVfx* pVfx, VfxProgram_t programType, CUtlVector<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >* pVariableDescriptionArray, CUtlVector<CVfxTextureChannelProcessor, CUtlMemory<CVfxTextureChannelProcessor, int> >* pTextureChannelProcessorArray, bool bIsSamplerState)
{
	CUtlString arg; // 754
	Vector4D defaultValue; // 756
	CUtlBuffer compiledExpression; // 850
	CUtlString errorMsg; // 851
	CUtlString paramName; // 852
	CExpressionParserCallback callback; // 854
	CVfxStackMachineBuilder builder; // 856
	const char* pConstNames; // 857
	CVfxExpressionEvalContext emptyCtx; // 878
	Vector4D vExprResult; // 879
	bool bExprIsConst; // 880
	bool bEvalSuccess; // 881
	{
		int i; // 795
		{
			Vector4D enumVal; // 799
			Vector4D::Vector4D(); // 799
		}
	}
	CUtlString::CUtlString(
			const char* pString);  // 754
	CUtlString::CUtlString(
			const char* pString);  // 852
	CUtlString::CUtlString(); // 851
	CUtlString::Get(); // 854
	{
		CUtlMemory<int, int>::ValidateGrowSize(); // 475
		CUtlMemory<int, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 631
		CUtlString::CUtlString(
				const char* pString);  // 635
		CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::FindAltKeyType<CUtlString>(
						const CUtlString& search);  // 243
		CUtlMap<CUtlString, CVfxParsedShaderParam::Find(
			const KeyType_t& key);  // 291
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::operator[](
				short unsigned int i);  // 545
		CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::Element(
			short unsigned int i);  // 91
		CUtlMap<CUtlString, CVfxParsedShaderParam::Element(
			IndexType_t i);  // 294
		CUtlMap<CUtlString, CVfxParsedShaderParam::FindElement(
				const KeyType_t& key,
				const ElemType_t& defaultValue);  // 635
		CUtlString::~CUtlString(); // 635
		IExpressionShaderVariableCallback::IExpressionShaderVariableCallback(); // 631
	}
	{
	}
	CExpressionParserCallback::CExpressionParserCallback(
					const char* pParamName,
					const CVfxParsedShaderParamMap& effectParams,
					const CVfx* pVfx,
					VfxProgram_t programType,
					CUtlVector<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >* pVariableDescriptionArray,
					CUtlVector<CVfxTextureChannelProcessor, CUtlMemory<CVfxTextureChannelProcessor, int> >* pTextureChannelProcessorArray);  // 628
	CExpressionParserCallback::CExpressionParserCallback(
					const char* pParamName,
					const CVfxParsedShaderParamMap& effectParams,
					const CVfx* pVfx,
					VfxProgram_t programType,
					CUtlVector<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >* pVariableDescriptionArray,
					CUtlVector<CVfxTextureChannelProcessor, CUtlMemory<CVfxTextureChannelProcessor, int> >* pTextureChannelProcessorArray);  // 854
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 69
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 69
	CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, this); // 178
	CUtlHashtable(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t,  this,
			int minimumSize);  // 69
	CUtlStackMachineBuilder::CUtlStackMachineBuilder(); // 60
	CUtlString::CUtlString(); // 60
	CUtlString::CUtlString(); // 60
	CUtlMemory<CVfxStackMachineBuilder::Constant_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CVfxStackMachineBuilder::Constant_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CVfxStackMachineBuilder::Constant_t, CUtlMemory<CVfxStackMachineBuilder::Constant_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CVfxStackMachineBuilder::Constant_t, CUtlMemory<CVfxStackMachineBuilder::Constant_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CVfxStackMachineBuilder::Constant_t, CUtlMemory<CVfxStackMachineBuilder::Constant_t, int> >::CUtlVector(); // 60
	{
		Vector4D::Vector4D(
			vec_t X,
			vec_t Y,
			vec_t Z,
			vec_t W);  // 62
	}
	CVfxStackMachineBuilder::CVfxStackMachineBuilder(
				uint32 nFlags,
				const CVfxProgramData* pFeatureProgramData,
				const CVfxProgramData* pProgramData,
				IExpressionShaderVariableCallback* pCallBack);  // 856
	{
		Vector4D enumVal; // 742
		Vector4D::Vector4D(); // 742
	}
	AddRenderStateEnumValuesToStackMachineBuilderConstants(CVfxStackMachineBuilder& builder,
								const VfxRenderStateEnumInfo_t* pEnums);  // 859
	CExpressionParserCallback::ExpressionReferencedThis(); // 869
	{
		int i; // 715
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 715
		{
			CVfxVariableDescription& refVar; // 717
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 717
			CUtlMemory<CVfxVariableDescription, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::Element(
				int i);  // 717
		}
	}
	CExpressionParserCallback::UpdateReferencedVariableContextState(
						CVfxVariableDescription* pVar);  // 875
	memset(void* __dest,
		int __ch,
		size_t __len);  // 124
	CVfxExpressionEvalContext::CVfxExpressionEvalContext(); // 878
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 879
	CUtlBuffer::TellMaxPut(); // 881
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 881
	CUtlBuffer::TellMaxPut(); // 920
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 920
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 625
	CExpressionParserCallback::~CExpressionParserCallback(); // 854
	CUtlString::~CUtlString(); // 852
	CUtlString::~CUtlString(); // 851
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 850
	CUtlString::Get(); // 99
	CUtlString::String(); // 865
	CUtlString::~CUtlString(); // 924
} /* size: 0, variables: 12, inline expansions: 63 (2111 bytes) */

// <00246484> ../vfx_dx/vfx_parse_helpers.cpp:1170
// variables: 13
// function calls: 74
bool AddSamplerStateVariableDescriptions(const CVfxParsedShaderParam* pSamplerParam, const CVfxParsedShaderParamMap& effectParams, int nSamplerIndex, int nDescriptorSet, const CVfx* pVfx, VfxProgram_t programType, CUtlVector<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >* pVariableDescriptionArray, CUtlVector<CVfxTextureChannelProcessor, CUtlMemory<CVfxTextureChannelProcessor, int> >* pTextureChannelProcessorArray)
{
	bool bFoundSamplerState; // 1174
	const CVfxAnnotationMap& samplerStateAnnotations; // 1175
	{
		short unsigned int nAnnIdx; // 1177
		{
			const CVfxAnnotation& ann; // 1179
			const char* pSSName; // 1186
			CVfxVariableDescription ssVar; // 1188
			int nRSInfoIdx; // 1191
			const VfxRenderStateInfo_t* pRSInfo; // 1192
			const char* pArgStr; // 1247
			{
				uint16 nAnnotationIdx; // 1195
				{
					const char* pAnnotationString; // 1204
					CVfxVariableDescription ssVar; // 1213
					V_strncpy<<unnamed enum> >(char* pDest,
									const char* pSrc,
									 maxLenInChars);  // 1201
					operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
							short unsigned int i);  // 545
					Element(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
						short unsigned int i);  // 93
					CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::operator[](
							IndexType_t i);  // 1204
					CVfxAnnotation::GetString(); // 1204
					V_strncpy<long unsigned int>(char* pDest,
									const char* pSrc,
									long unsigned int maxLenInChars);  // 583
					CUtlStringToken::CUtlStringToken(); // 121
					{
					}
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 119
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 584
					CVfxVariableDescription::SetAttributeName(
							const char* pAttributeName);  // 1211
					CUtlStringToken::CUtlStringToken(); // 560
					CVfxVariableDescription::CVfxVariableDescription(); // 1213
					CUtlMemory<CVfxVariableDescription, int>::NumAllocated(); // 1196
					CUtlMemory<CVfxVariableDescription, int>::operator[](
							int i);  // 602
					CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::Element(
						int i);  // 1201
					CopyConstruct<CVfxVariableDescription>(CVfxVariableDescription* pMemory,
										const CVfxVariableDescription& src);  // 1201
					CUtlMemory<CVfxVariableDescription, int>::Base(); // 112
					CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::Base(); // 368
					CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::GrowMemory(
							int num);  // 1198
					CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::AddToTail(
							const CVfxVariableDescription& src);  // 1225
					V_strlen(const char* str); // 1205
				}
				CUtlString::CUtlString(
						const char* pString);  // 1195
				FindAltKeyType<CUtlString>(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
								const CUtlString& search);  // 243
				CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::Find(
					const KeyType_t& key);  // 1195
				CUtlString::~CUtlString(); // 1195
				IsIdxValid(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
						short unsigned int i);  // 661
				IsIdxAfter(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
						short unsigned int i,
						const Iterator_t& it);  // 664
				operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
						short unsigned int i);  // 611
				LeftChild(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
						short unsigned int i);  // 667
				IsValidIndex(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
						short unsigned int i);  // 659
				IsValidIndex(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
						short unsigned int i);  // 190
				CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::IsValidIndex(
						IndexType_t i);  // 1196
			}
			CUtlString::Get(); // 1181
			V_strncmp<int>(const char* s1,
					const char* s2,
					int count);  // 1181
			CUtlString::Get(); // 1186
			CUtlStringToken::CUtlStringToken(); // 560
			CVfxVariableDescription::CVfxVariableDescription(); // 1188
			FindRenderStateInfo(const char* pName,
						int* pRSInfoIndexOut,
						const VfxRenderStateInfo_t* pRSInfoTable);  // 1192
			V_strncpy<<unnamed enum> >(char* pDest,
							const char* pSrc,
							 maxLenInChars);  // 1234
			RenderStateDataTypeToVariableType(DataType rsType); // 1240
			CVfxAnnotation::GetString(); // 1247
			CUtlMemory<CVfxVariableDescription, int>::NumAllocated(); // 1196
			CUtlMemory<CVfxVariableDescription, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::Element(
				int i);  // 1201
			CopyConstruct<CVfxVariableDescription>(CVfxVariableDescription* pMemory,
								const CVfxVariableDescription& src);  // 1201
			CUtlMemory<CVfxVariableDescription, int>::Base(); // 112
			CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::Base(); // 368
			CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::AddToTail(
					const CVfxVariableDescription& src);  // 1285
			CUtlString::Get(); // 1279
		}
		NumAllocated(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this); // 594
		MaxElement(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this); // 187
		CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::MaxElement()(const CUtlString&, const CUtlString&)>* this); // 1177
		IsIdxValid(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
				short unsigned int i);  // 661
		IsIdxAfter(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
				short unsigned int i,
				const Iterator_t& it);  // 664
		operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
				short unsigned int i);  // 611
		LeftChild(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
				short unsigned int i);  // 667
		IsValidIndex(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
				short unsigned int i);  // 659
		IsValidIndex(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
				short unsigned int i);  // 190
		CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::IsValidIndex(
				IndexType_t i);  // 1177
	}
	{
		CVfxVariableDescription ssVar; // 1292
		CUtlStringToken::CUtlStringToken(); // 560
		CVfxVariableDescription::CVfxVariableDescription(); // 1292
		V_strncpy<<unnamed enum> >(char* pDest,
						const char* pSrc,
						 maxLenInChars);  // 1293
		CUtlMemory<CVfxVariableDescription, int>::NumAllocated(); // 1196
		CUtlMemory<CVfxVariableDescription, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::Element(
			int i);  // 1201
		CopyConstruct<CVfxVariableDescription>(CVfxVariableDescription* pMemory,
							const CVfxVariableDescription& src);  // 1201
		CUtlMemory<CVfxVariableDescription, int>::Base(); // 112
		CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::Base(); // 368
		CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::AddToTail(
				const CVfxVariableDescription& src);  // 1306
	}
} /* size: 0, variables: 2 */

// <0024643D> ../vfx_dx/vfx_parse_helpers.cpp:1312
// variables: 2
bool ProcessSrgbFetchAnnotation(const CVfxParsedShaderParam* pParam, CVfxVariableDescription* pVar)
{
	uint16 nAnnIdx; // 1314
	const CVfxAnnotation& ann; // 1322
} /* size: 0, variables: 2 */

// <0024636A> ../vfx_dx/vfx_parse_helpers.cpp:1342
// variables: 7
bool ProcessUvScaleAnnotation(CVfxParsedShaderParam* pParam, CVfxVariableDescription* pVar, const CVfxParsedShaderParamMap& effectParams, const CVfx* pVfx, VfxProgram_t programType, CUtlVector<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >* pVariableDescriptionArray, CUtlVector<CVfxTextureChannelProcessor, CUtlMemory<CVfxTextureChannelProcessor, int> >* pTextureChannelProcessorArray)
{
	uint16 nAnnIdx; // 1346
	const CVfxAnnotation& ann; // 1352
	int nVarIdx; // 1353
	const CVfxVariableDescription* pUvScaleVar; // 1354
	CVfxParsedShaderParam* pParamForFoundUvScaleVar; // 1369
	const char   __FUNCTION__; // 48564
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1370
	}
} /* size: 0, variables: 6 */

// <0024634B> ../vfx_dx/vfx_parse_helpers.cpp:1386
int ChannelCharToChannelIndex(char ch)
{
} /* size: 0 */

// <00246311> ../vfx_dx/vfx_parse_helpers.cpp:1400
// variables: 2
char* GetNextToken(char* line)
{
	const char* szTokenSeparatorsAndEndOfLine; // 1403
	const char* szTokenSeparators; // 1404
} /* size: 0, variables: 2 */

// <002462E4> ../vfx_dx/vfx_parse_helpers.cpp:1410
// variable: 1
int GetCurrentTokenLength(const char* line)
{
	const char* szTokenSeparators; // 1412
} /* size: 0, variables: 1 */

// <0024612E> ../vfx_dx/vfx_parse_helpers.cpp:1417
// variables: 23
bool AddTextureChannelProcessors(const CVfxParsedShaderParam* pParam, CVfxVariableDescription* pVar, const CVfxParsedShaderParamMap& effectParams, const CVfx* pVfx, CUtlVector<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >* pVariableDescriptionArray, CUtlVector<CVfxTextureChannelProcessor, CUtlMemory<CVfxTextureChannelProcessor, int> >* pTextureChannelProcessorArray)
{
	bool bChannelsUsed; // 1421
	uint32 nChannelSpecificationCount; // 1422
	uint16 nTmpAnnIdx; // 1425
	bool bHasSourceAnnotation; // 1426
	bool bHasAttributeAnnotation; // 1429
	uint16 nFormatAnnIdx; // 1432
	{
		short unsigned int nAnnIdx; // 1460
		{
			const CVfxAnnotation& ann; // 1462
			const char* pChannelString; // 1465
			int32 nChannelCount; // 1471
			CVfxTextureChannelProcessor channelInfo; // 1478
			const char* pMipString; // 1501
			int nTokenLength; // 1504
			int nNumArgsFound; // 1508
			char* pLine; // 1509
			uint16 nCsAnnIdx; // 1546
			bool bValidColorSpace; // 1553
			{
				int32 i; // 1481
				{
					int32 nChannelId; // 1483
				}
			}
			{
				char pArg; // 1519
				int nTokenLength2; // 1520
			}
			{
				int i; // 1563
				{
					CVfxTextureChannelProcessor* pExistingDesc; // 1565
				}
			}
		}
	}
} /* size: 0, variables: 6 */

// <0024608C> ../vfx_dx/vfx_parse_helpers.cpp:1596
// variables: 4
bool ProcessVariableWithTextureReferenceSourceType(CVfxVariableDescription* pVar, const CVfxParsedShaderParam* pParam, const CVfxParsedShaderParamMap& effectParams, const CVfx* pVfx, VfxProgram_t programType, CUtlVector<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >* pVariableDescriptionArray, CUtlVector<CVfxTextureChannelProcessor, CUtlMemory<CVfxTextureChannelProcessor, int> >* pTextureChannelProcessorArray)
{
	uint16 nAnnIdx; // 1601
	const char* pTextureNameString; // 1609
	int32 nTextureVarIndex; // 1612
	const CVfxVariableDescription* pTextureVar; // 1613
} /* size: 0, variables: 4 */

// <0023F816> ../vfx_dx/vfx_parse_helpers.cpp:1627
// variables: 48
// function calls: 352
bool VfxSetVariableDescriptionFromEffect(CVfxVariableDescription* pVar, const CVfxParsedShaderParamMap& effectParams, const CVfx* pVfx, VfxProgram_t programType, CVfxParsedShaderParam* pParam, CUtlVector<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >* pVariableDescriptionArray, CUtlVector<CVfxTextureChannelProcessor, CUtlMemory<CVfxTextureChannelProcessor, int> >* pTextureChannelProcessorArray)
{
	int nRows; // 1631
	int nColumns; // 1632
	int nTotalRegisterElements; // 1636
	bool bVariableIsArtistEditable; // 1638
	uint16 nUiTypeAnnIdx; // 1774
	uint16 nGroupAnnIdx; // 1803
	uint16 nStepAnnIdx; // 1817
	uint16 nAnnIdx; // 1826
	float32 flDefault; // 1966
	float flMin; // 1996
	float flMax; // 1997
	bool bFoundMinMax; // 1998
	{
		int nTmp; // 1706
	}
	{
		const char* pString; // 1778
		bool bFound; // 1781
		{
			int i; // 1782
		}
		CVfxAnnotation::GetString(); // 1778
	}
	{
		const char* pString; // 1807
		CVfxAnnotation::GetString(); // 1807
		V_strncpy<<unnamed enum> >(char* pDest,
						const char* pSrc,
						 maxLenInChars);  // 1810
	}
	{
		const char* pSourceString; // 1830
		int iFeatureIndex; // 1833
		{
			int sourceType; // 1871
			VfxVariableUsesTextureReference(int nVarType); // 1893
			CUtlString::CUtlString(
					const char* pString);  // 1601
			FindAltKeyType<CUtlString>(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
							const CUtlString& search);  // 243
			CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::Find(
				const KeyType_t& key);  // 1601
			CUtlString::~CUtlString(); // 1601
			IsIdxValid(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
					short unsigned int i);  // 661
			IsIdxAfter(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
					short unsigned int i,
					const Iterator_t& it);  // 664
			operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
					short unsigned int i);  // 611
			LeftChild(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
					short unsigned int i);  // 667
			IsValidIndex(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
					short unsigned int i);  // 659
			IsValidIndex(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
					short unsigned int i);  // 190
			CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::IsValidIndex(
					IndexType_t i);  // 1602
			CVfxAnnotation::GetString(); // 1609
			ProcessVariableWithTextureReferenceSourceType(CVfxVariableDescription* pVar,
									const CVfxParsedShaderParam* pParam,
									const CVfxParsedShaderParamMap& effectParams,
									const CVfx* pVfx,
									VfxProgram_t programType,
									CUtlVector<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >* pVariableDescriptionArray,
									CUtlVector<CVfxTextureChannelProcessor, CUtlMemory<CVfxTextureChannelProcessor, int> >* pTextureChannelProcessorArray);  // 1895
		}
		CVfxAnnotation::GetString(); // 1830
		CVfx::FindFeatureByName(
					const char* pszName);  // 1833
		CUtlMemory<CVfxCombo, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CVfxCombo, CUtlMemory<CVfxCombo, int> >::operator[](
				int i);  // 1260
		CVfx::Feature(
			int iFeatureIndex);  // 1845
	}
	{
		uint16 nAnnotationIdx; // 1905
		{
			const char* pAnnotationString; // 1914
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned int>::operator[](
					short unsigned int i);  // 539
			Element(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotation>::CK this,
				short unsigned int i);  // 92
			CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::operator[](
					IndexType_t i);  // 1914
			CVfxAnnotation::GetString(); // 1914
			V_strncpy<long unsigned int>(char* pDest,
							const char* pSrc,
							long unsigned int maxLenInChars);  // 583
			CUtlStringToken::CUtlStringToken(); // 121
			{
			}
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 119
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 584
			CVfxVariableDescription::SetAttributeName(
					const char* pAttributeName);  // 1922
			V_strlen(const char* str); // 1915
		}
		CUtlString::CUtlString(
				const char* pString);  // 1905
		FindAltKeyType<CUtlString>(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
						const CUtlString& search);  // 243
		CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::Find(
			const KeyType_t& key);  // 1905
		CUtlString::~CUtlString(); // 1905
		IsIdxValid(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
				short unsigned int i);  // 661
		IsIdxAfter(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
				short unsigned int i,
				const Iterator_t& it);  // 664
		operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
				short unsigned int i);  // 611
		LeftChild(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
				short unsigned int i);  // 667
		IsValidIndex(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
				short unsigned int i);  // 659
		IsValidIndex(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
				short unsigned int i);  // 190
		CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::IsValidIndex(
				IndexType_t i);  // 1906
	}
	{
		int32 i; // 1967
		{
			bool bSuccess; // 1977
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned int>::operator[](
					short unsigned int i);  // 539
			Element(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotation>::CK this,
				short unsigned int i);  // 92
			CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::operator[](
					IndexType_t i);  // 1977
			Min<int>(const int& val1,
				const int& val2);  // 2873
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 2874
			CVfxAnnotation::GetFloatArray(
					float32* pArray,
					int32 nMaxElems);  // 2866
			CVfxAnnotation::GetFloatArray(
					float32* pArray,
					int32 nMaxElems);  // 1977
		}
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 83
		CFmtStrN<256>::operator char const*(); // 1969
		CUtlString::CUtlString(
				const char* pString);  // 1969
		FindAltKeyType<CUtlString>(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
						const CUtlString& search);  // 243
		CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::Find(
			const KeyType_t& key);  // 1969
		CUtlString::~CUtlString(); // 1969
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 1969
	}
	{
		int32 i; // 1987
	}
	{
		int32 i; // 1999
		{
			float32 flTmp; // 2009
			bool bSuccess; // 2010
			{
				int32 j; // 2018
			}
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned int>::operator[](
					short unsigned int i);  // 539
			Element(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotation>::CK this,
				short unsigned int i);  // 92
			CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::operator[](
					IndexType_t i);  // 2010
			Min<int>(const int& val1,
				const int& val2);  // 2873
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 2874
			CVfxAnnotation::GetFloatArray(
					float32* pArray,
					int32 nMaxElems);  // 2866
			CVfxAnnotation::GetFloatArray(
					float32* pArray,
					int32 nMaxElems);  // 2010
		}
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 83
		CFmtStrN<256>::operator char const*(); // 2001
		CUtlString::CUtlString(
				const char* pString);  // 2001
		FindAltKeyType<CUtlString>(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
						const CUtlString& search);  // 243
		CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::Find(
			const KeyType_t& key);  // 2001
		CUtlString::~CUtlString(); // 2001
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 2001
	}
	{
		int i; // 2031
	}
	V_strncpy<<unnamed enum> >(char* pDest,
					const char* pSrc,
					 maxLenInChars);  // 1644
	CUtlString::Get(); // 1644
	CVfxParsedShaderParam::IsUsedInShader(); // 1649
	CUtlString::CUtlString(
			const char* pString);  // 1346
	FindAltKeyType<CUtlString>(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
					const CUtlString& search);  // 243
	CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::Find(
		const KeyType_t& key);  // 1346
	CUtlString::~CUtlString(); // 1346
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned int>::operator[](
			short unsigned int i);  // 539
	Element(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotation>::CK this,
		short unsigned int i);  // 92
	CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::operator[](
			IndexType_t i);  // 1352
	CVfxAnnotation::GetString(); // 1354
	CVfxAnnotation::GetString(); // 1369
	CUtlString::CUtlString(
			const char* pString);  // 1369
	CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::FindAltKeyType<CUtlString>(
					const CUtlString& search);  // 243
	CUtlMap<CUtlString, CVfxParsedShaderParam::Find(
		const KeyType_t& key);  // 291
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::operator[](
			short unsigned int i);  // 545
	CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::Element(
		short unsigned int i);  // 91
	CUtlMap<CUtlString, CVfxParsedShaderParam::Element(
		IndexType_t i);  // 294
	CUtlMap<CUtlString, CVfxParsedShaderParam::FindElement(
			const KeyType_t& key,
			const ElemType_t& defaultValue);  // 1369
	CUtlString::~CUtlString(); // 1369
	{
	}
	CUtlMemory<CVfxParsedShaderParam::NumAllocated(); // 1196
	CUtlMemory<CVfxParsedShaderParam::operator[](
			int i);  // 602
	CUtlVectorBase<CVfxParsedShaderParam::Element(
		int i);  // 1201
	CopyConstruct<CVfxParsedShaderParam*>(CVfxParsedShaderParam** pMemory,
						CVfxParsedShaderParam* const& src);  // 1201
	CUtlMemory<CVfxParsedShaderParam::Base(); // 112
	CUtlVectorBase<CVfxParsedShaderParam::Base(); // 368
	CUtlVectorBase<CVfxParsedShaderParam::ResetDbgInfo(); // 824
	CUtlVectorBase<CVfxParsedShaderParam::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CVfxParsedShaderParam::AddToTail(
			CVfxParsedShaderParam* const& src);  // 1373
	CVfxParsedShaderParam::IsUsedInShader(); // 1374
	CVfxAnnotation::GetString(); // 1364
	CVfxAnnotation::GetString(); // 1357
	ProcessUvScaleAnnotation(CVfxParsedShaderParam* pParam,
				CVfxVariableDescription* pVar,
				const CVfxParsedShaderParamMap& effectParams,
				const CVfx* pVfx,
				VfxProgram_t programType,
				CUtlVector<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >* pVariableDescriptionArray,
				CUtlVector<CVfxTextureChannelProcessor, CUtlMemory<CVfxTextureChannelProcessor, int> >* pTextureChannelProcessorArray);  // 1736
	CUtlString::CUtlString(
			const char* pString);  // 1314
	FindAltKeyType<CUtlString>(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
					const CUtlString& search);  // 243
	CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::Find(
		const KeyType_t& key);  // 1314
	CUtlString::~CUtlString(); // 1314
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
			short unsigned int i);  // 545
	Element(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
		short unsigned int i);  // 93
	CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::operator[](
			IndexType_t i);  // 1322
	CVfxAnnotation::GetString(); // 1324
	CVfxAnnotation::GetString(); // 1328
	ProcessSrgbFetchAnnotation(const CVfxParsedShaderParam* pParam,
					CVfxVariableDescription* pVar);  // 1731
	VfxGetVariableType(const CVfxParsedShaderParam& param,
				int nRows,
				int nColumns);  // 1746
	CVfxParsedShaderParam::IsUsedInShader(); // 1755
	CUtlString::CUtlString(
			const char* pString);  // 1774
	FindAltKeyType<CUtlString>(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
					const CUtlString& search);  // 243
	CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::Find(
		const KeyType_t& key);  // 1774
	CUtlString::~CUtlString(); // 1774
	IsIdxValid(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
			short unsigned int i);  // 661
	IsIdxAfter(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
			short unsigned int i,
			const Iterator_t& it);  // 664
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
			short unsigned int i);  // 611
	LeftChild(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
			short unsigned int i);  // 667
	IsValidIndex(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
			short unsigned int i);  // 659
	IsValidIndex(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
			short unsigned int i);  // 190
	CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::IsValidIndex(
			IndexType_t i);  // 1775
	CUtlString::CUtlString(
			const char* pString);  // 1803
	FindAltKeyType<CUtlString>(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
					const CUtlString& search);  // 243
	CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::Find(
		const KeyType_t& key);  // 1803
	CUtlString::~CUtlString(); // 1803
	IsIdxValid(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
			short unsigned int i);  // 661
	IsIdxAfter(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
			short unsigned int i,
			const Iterator_t& it);  // 664
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
			short unsigned int i);  // 611
	LeftChild(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
			short unsigned int i);  // 667
	IsValidIndex(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
			short unsigned int i);  // 659
	IsValidIndex(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
			short unsigned int i);  // 190
	CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::IsValidIndex(
			IndexType_t i);  // 1804
	CUtlString::CUtlString(
			const char* pString);  // 1817
	FindAltKeyType<CUtlString>(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
					const CUtlString& search);  // 243
	CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::Find(
		const KeyType_t& key);  // 1817
	CUtlString::~CUtlString(); // 1817
	IsIdxValid(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
			short unsigned int i);  // 661
	IsIdxAfter(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
			short unsigned int i,
			const Iterator_t& it);  // 664
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
			short unsigned int i);  // 611
	LeftChild(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
			short unsigned int i);  // 667
	IsValidIndex(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
			short unsigned int i);  // 659
	IsValidIndex(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
			short unsigned int i);  // 190
	CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::IsValidIndex(
			IndexType_t i);  // 1818
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 2874
	Min<int>(const int& val1,
		const int& val2);  // 2873
	CVfxAnnotation::GetFloatArray(
			float32* pArray,
			int32 nMaxElems);  // 2866
	CVfxAnnotation::GetFloatArray(
			float32* pArray,
			int32 nMaxElems);  // 1820
	CUtlString::CUtlString(
			const char* pString);  // 1826
	FindAltKeyType<CUtlString>(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
					const CUtlString& search);  // 243
	CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::Find(
		const KeyType_t& key);  // 1826
	CUtlString::~CUtlString(); // 1826
	IsIdxValid(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
			short unsigned int i);  // 661
	IsIdxAfter(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
			short unsigned int i,
			const Iterator_t& it);  // 664
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
			short unsigned int i);  // 611
	LeftChild(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
			short unsigned int i);  // 667
	IsValidIndex(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
			short unsigned int i);  // 659
	IsValidIndex(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
			short unsigned int i);  // 190
	CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::IsValidIndex(
			IndexType_t i);  // 1827
	CUtlString::CUtlString(
			const char* pString);  // 1425
	FindAltKeyType<CUtlString>(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
					const CUtlString& search);  // 243
	CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::Find(
		const KeyType_t& key);  // 1425
	CUtlString::~CUtlString(); // 1425
	IsIdxValid(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
			short unsigned int i);  // 661
	IsIdxAfter(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
			short unsigned int i,
			const Iterator_t& it);  // 664
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
			short unsigned int i);  // 611
	LeftChild(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
			short unsigned int i);  // 667
	IsValidIndex(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
			short unsigned int i);  // 659
	IsValidIndex(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
			short unsigned int i);  // 190
	CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::IsValidIndex(
			IndexType_t i);  // 1426
	CUtlString::CUtlString(
			const char* pString);  // 1428
	FindAltKeyType<CUtlString>(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
					const CUtlString& search);  // 243
	CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::Find(
		const KeyType_t& key);  // 1428
	CUtlString::~CUtlString(); // 1428
	IsIdxValid(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
			short unsigned int i);  // 661
	IsIdxAfter(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
			short unsigned int i,
			const Iterator_t& it);  // 664
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
			short unsigned int i);  // 611
	LeftChild(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
			short unsigned int i);  // 667
	IsValidIndex(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
			short unsigned int i);  // 659
	IsValidIndex(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
			short unsigned int i);  // 190
	CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::IsValidIndex(
			IndexType_t i);  // 1429
	CUtlString::CUtlString(
			const char* pString);  // 1432
	FindAltKeyType<CUtlString>(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
					const CUtlString& search);  // 243
	CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::Find(
		const KeyType_t& key);  // 1432
	CUtlString::~CUtlString(); // 1432
	IsIdxValid(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
			short unsigned int i);  // 661
	IsIdxAfter(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
			short unsigned int i,
			const Iterator_t& it);  // 664
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
			short unsigned int i);  // 611
	LeftChild(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
			short unsigned int i);  // 667
	IsValidIndex(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
			short unsigned int i);  // 659
	IsValidIndex(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
			short unsigned int i);  // 190
	CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::IsValidIndex(
			IndexType_t i);  // 1433
	CVfxAnnotation::GetString(); // 1453
	{
		short unsigned int nAnnIdx; // 1460
		NumAllocated(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this); // 594
		MaxElement(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this); // 187
		CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::MaxElement()(const CUtlString&, const CUtlString&)>* this); // 1460
		{
			const CVfxAnnotation& ann; // 1462
			const char* pChannelString; // 1465
			int32 nChannelCount; // 1471
			CVfxTextureChannelProcessor channelInfo; // 1478
			const char* pMipString; // 1501
			int nTokenLength; // 1504
			int nNumArgsFound; // 1508
			char* pLine; // 1509
			uint16 nCsAnnIdx; // 1546
			bool bValidColorSpace; // 1553
			CVfxTextureChannelProcessor::CVfxTextureChannelProcessor(); // 1478
			CUtlString::Get(); // 1465
			StringAfterPrefixCaseSensitive<char const>(const char* str,
									const char* prefix);  // 1465
			V_strlen(const char* str); // 1471
			{
				int32 i; // 1481
				{
					int32 nChannelId; // 1483
					ChannelCharToChannelIndex(char ch); // 1483
				}
			}
			IsIdxAfter(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
					short unsigned int i,
					const Iterator_t& it);  // 664
			operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
					short unsigned int i);  // 611
			LeftChild(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
					short unsigned int i);  // 667
			IsValidIndex(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
					short unsigned int i);  // 659
			IsIdxValid(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
					short unsigned int i);  // 661
			IsValidIndex(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
					short unsigned int i);  // 190
			CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::IsValidIndex(
					IndexType_t i);  // 1547
			CVfxAnnotation::GetString(); // 1554
			ConvertStringToColorSpaceEnum(const char* pStr,
							bool* pSuccessOut);  // 1554
			{
				int i; // 1563
				CUtlVectorBase<CVfxTextureChannelProcessor, CUtlMemory<CVfxTextureChannelProcessor, int> >::Count(); // 1563
				{
					CVfxTextureChannelProcessor* pExistingDesc; // 1565
					CUtlMemory<CVfxTextureChannelProcessor, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CVfxTextureChannelProcessor, CUtlMemory<CVfxTextureChannelProcessor, int> >::operator[](
							int i);  // 1565
				}
			}
			CVfxTextureChannelProcessor::~CVfxTextureChannelProcessor(); // 1581
			CVfxAnnotation::GetString(); // 1501
			GetCurrentTokenLength(const char* line); // 1504
			Min<int>(const int& val1,
				const int& val2);  // 1504
			V_strncpy<int>(char* pDest,
					const char* pSrc,
					int maxLenInChars);  // 1505
			GetNextToken(char* line); // 1510
			{
				char pArg; // 1519
				int nTokenLength2; // 1520
				GetCurrentTokenLength(const char* line); // 1520
				Min<int>(const int& val1,
					const int& val2);  // 1520
				V_strncpy<int>(char* pDest,
						const char* pSrc,
						int maxLenInChars);  // 1521
				{
					int i; // 410
					CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::Count(); // 410
					CUtlMemory<CVfxVariableDescription, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::operator[](
							int i);  // 412
					V_strcmp(const char* s1,
						const char* s2);  // 412
				}
				FindEffectVariable(const char* pVarName,
							const CUtlVector<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >* pVariableDescriptionArray,
							int32* pVarIndex);  // 470
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 83
				CFmtStrN<256>::operator char const*(); // 483
				CUtlString::CUtlString(
						const char* pString);  // 483
				CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::FindAltKeyType<CUtlString>(
								const CUtlString& search);  // 243
				CUtlMap<CUtlString, CVfxParsedShaderParam::Find(
					const KeyType_t& key);  // 483
				CUtlString::~CUtlString(); // 483
				CBufferString::~CBufferString(); // 587
				CBufferStringN<256>::~CBufferStringN(); // 41
				CFmtStrN<256>::~CFmtStrN(); // 483
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::IsIdxValid(
						short unsigned int i);  // 661
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::IsIdxAfter(
						short unsigned int i,
						const Iterator_t& it);  // 664
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::operator[](
						short unsigned int i);  // 611
				CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::LeftChild(
						short unsigned int i);  // 667
				CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::IsValidIndex(
						short unsigned int i);  // 659
				CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::IsValidIndex(
						short unsigned int i);  // 190
				CUtlMap<CUtlString, CVfxParsedShaderParam::IsValidIndex(
						IndexType_t i);  // 484
				CUtlStringToken::CUtlStringToken(); // 560
				CVfxVariableDescription::CVfxVariableDescription(); // 497
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::operator[](
						short unsigned int i);  // 545
				CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::Element(
					short unsigned int i);  // 93
				CUtlMap<CUtlString, CVfxParsedShaderParam::operator[](
						IndexType_t i);  // 498
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 83
				CFmtStrN<256>::operator char const*(); // 486
				CUtlString::CUtlString(
						const char* pString);  // 486
				CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::FindAltKeyType<CUtlString>(
								const CUtlString& search);  // 243
				CUtlMap<CUtlString, CVfxParsedShaderParam::Find(
					const KeyType_t& key);  // 486
				CUtlString::~CUtlString(); // 486
				CBufferString::~CBufferString(); // 587
				CBufferStringN<256>::~CBufferStringN(); // 41
				CFmtStrN<256>::~CFmtStrN(); // 486
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::IsIdxValid(
						short unsigned int i);  // 661
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::IsIdxAfter(
						short unsigned int i,
						const Iterator_t& it);  // 664
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::operator[](
						short unsigned int i);  // 611
				CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::LeftChild(
						short unsigned int i);  // 667
				CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::IsValidIndex(
						short unsigned int i);  // 659
				CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::IsValidIndex(
						short unsigned int i);  // 190
				CUtlMap<CUtlString, CVfxParsedShaderParam::IsValidIndex(
						IndexType_t i);  // 487
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 83
				CFmtStrN<256>::operator char const*(); // 489
				CUtlString::CUtlString(
						const char* pString);  // 489
				CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::FindAltKeyType<CUtlString>(
								const CUtlString& search);  // 243
				CUtlMap<CUtlString, CVfxParsedShaderParam::Find(
					const KeyType_t& key);  // 489
				CUtlString::~CUtlString(); // 489
				CBufferString::~CBufferString(); // 587
				CBufferStringN<256>::~CBufferStringN(); // 41
				CFmtStrN<256>::~CFmtStrN(); // 489
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::IsIdxValid(
						short unsigned int i);  // 661
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::IsIdxAfter(
						short unsigned int i,
						const Iterator_t& it);  // 664
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::operator[](
						short unsigned int i);  // 611
				CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::LeftChild(
						short unsigned int i);  // 667
				CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::IsValidIndex(
						short unsigned int i);  // 659
				CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::IsValidIndex(
						short unsigned int i);  // 190
				CUtlMap<CUtlString, CVfxParsedShaderParam::IsValidIndex(
						IndexType_t i);  // 490
				CUtlMemory<CVfxVariableDescription, int>::NumAllocated(); // 1196
				CUtlMemory<CVfxVariableDescription, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::Element(
					int i);  // 1201
				CopyConstruct<CVfxVariableDescription>(CVfxVariableDescription* pMemory,
									const CVfxVariableDescription& src);  // 1201
				CUtlMemory<CVfxVariableDescription, int>::Base(); // 112
				CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::Base(); // 368
				CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::AddToTail(
						const CVfxVariableDescription& src);  // 504
				CUtlMemory<CVfxVariableDescription, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::operator[](
						int i);  // 509
				FindOrAddInputTextureVariable(const char* pVarName,
								const CVfxParsedShaderParamMap& effectParams,
								const CVfx* pVfx,
								CUtlVector<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >* pVariableDescriptionArray,
								int32* pVarIndex);  // 1523
				GetNextToken(char* line); // 1534
			}
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 83
			CFmtStrN<256>::operator char const*(); // 1546
			CUtlString::CUtlString(
					const char* pString);  // 1546
			FindAltKeyType<CUtlString>(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
							const CUtlString& search);  // 243
			CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::Find(
				const KeyType_t& key);  // 1546
			CUtlString::~CUtlString(); // 1546
			CBufferString::~CBufferString(); // 587
			CBufferStringN<256>::~CBufferStringN(); // 41
			CFmtStrN<256>::~CFmtStrN(); // 1546
			operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
					short unsigned int i);  // 545
			Element(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
				short unsigned int i);  // 93
			CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::operator[](
					IndexType_t i);  // 1557
			CVfxAnnotation::GetString(); // 1557
			CUtlMemory<CVfxTextureChannelProcessor, int>::NumAllocated(); // 1196
			CUtlMemory<CVfxTextureChannelProcessor, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CVfxTextureChannelProcessor, CUtlMemory<CVfxTextureChannelProcessor, int> >::Element(
				int i);  // 1201
			CopyConstruct<CVfxTextureChannelProcessor>(CVfxTextureChannelProcessor* pMemory,
									const CVfxTextureChannelProcessor& src);  // 1201
			CUtlMemory<CVfxTextureChannelProcessor, int>::IsGrowable(); // 823
			CUtlMemory<CVfxTextureChannelProcessor, int>::IsExternallyAllocated(); // 859
			CUtlMemory<CVfxTextureChannelProcessor, int>::IsExternallyAllocated(); // 861
			CUtlMemory<CVfxTextureChannelProcessor, int>::Grow(
				int num);  // 806
			CUtlMemory<CVfxTextureChannelProcessor, int>::Base(); // 112
			CUtlVectorBase<CVfxTextureChannelProcessor, CUtlMemory<CVfxTextureChannelProcessor, int> >::Base(); // 368
			CUtlVectorBase<CVfxTextureChannelProcessor, CUtlMemory<CVfxTextureChannelProcessor, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<CVfxTextureChannelProcessor, CUtlMemory<CVfxTextureChannelProcessor, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<CVfxTextureChannelProcessor, CUtlMemory<CVfxTextureChannelProcessor, int> >::AddToTail(
					const CVfxTextureChannelProcessor& src);  // 1577
		}
		IsIdxValid(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
				short unsigned int i);  // 661
		IsIdxAfter(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
				short unsigned int i,
				const Iterator_t& it);  // 664
		operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
				short unsigned int i);  // 611
		LeftChild(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
				short unsigned int i);  // 667
		IsValidIndex(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
				short unsigned int i);  // 659
		IsValidIndex(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
				short unsigned int i);  // 190
		CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::IsValidIndex(
				IndexType_t i);  // 1460
	}
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
			short unsigned int i);  // 545
	Element(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
		short unsigned int i);  // 93
	CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::operator[](
			IndexType_t i);  // 1456
	CVfxAnnotation::GetString(); // 1456
	AddTextureChannelProcessors(const CVfxParsedShaderParam* pParam,
					CVfxVariableDescription* pVar,
					const CVfxParsedShaderParamMap& effectParams,
					const CVfx* pVfx,
					CUtlVector<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >* pVariableDescriptionArray,
					CUtlVector<CVfxTextureChannelProcessor, CUtlMemory<CVfxTextureChannelProcessor, int> >* pTextureChannelProcessorArray);  // 1957
} /* size: 0, variables: 12, inline expansions: 132 (9979 bytes) */

// <0023F7F6> ../vfx_dx/vfx_parse_helpers.cpp:2045
MaterialSystemConstantBufferType_t ParamTypeToConstantBufferType(VfxParsedShaderParamType_t paramType)
{
} /* size: 0 */

// <0023A4B6> ../vfx_dx/vfx_parse_helpers.cpp:2276
// variables: 15
// function calls: 109
bool VfxSetupInputTextureVariableDescription(CVfxVariableDescription* pVar, const CVfxParsedShaderParamMap& effectParams, const CVfx* pVfx, CVfxParsedShaderParam* pParam, CUtlVector<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >* pVariableDescriptionArray)
{
	uint32 nNameStartIdx; // 2285
	const char* pTexName; // 2308
	uint16 nAnnIdx; // 2320
	const char* pArgStr; // 2327
	bool bSuccess; // 2333
	uint16 nImageAlgorithmAnnIdx; // 2362
	uint16 nGroupAnnIdx; // 2409
	float32 flDefault; // 2423
	uint16 nDefaultFileIdx; // 2447
	{
		const char* pSourceString; // 2366
		CVfxAnnotation::GetString(); // 2366
		V_strncpy<int>(char* pDest,
				const char* pSrc,
				int maxLenInChars);  // 2369
	}
	{
		const char* pSourceString; // 2413
		CVfxAnnotation::GetString(); // 2413
		V_strncpy<<unnamed enum> >(char* pDest,
						const char* pSrc,
						 maxLenInChars);  // 2416
	}
	{
		int32 i; // 2424
		{
			bool bSuccess2; // 2428
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned int>::operator[](
					short unsigned int i);  // 539
			Element(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotation>::CK this,
				short unsigned int i);  // 92
			CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::operator[](
					IndexType_t i);  // 2428
			Min<int>(const int& val1,
				const int& val2);  // 2873
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 2874
			CVfxAnnotation::GetFloatArray(
					float32* pArray,
					int32 nMaxElems);  // 2866
			CVfxAnnotation::GetFloatArray(
					float32* pArray,
					int32 nMaxElems);  // 2428
		}
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 83
		CFmtStrN<256>::operator char const*(); // 2426
		CUtlString::CUtlString(
				const char* pString);  // 2426
		FindAltKeyType<CUtlString>(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
						const CUtlString& search);  // 243
		CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::Find(
			const KeyType_t& key);  // 2426
		CUtlString::~CUtlString(); // 2426
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 2426
	}
	{
		int32 i; // 2438
	}
	{
		const char* pString; // 2451
		CVfxAnnotation::GetString(); // 2451
		V_strncpy<long unsigned int>(char* pDest,
						const char* pSrc,
						long unsigned int maxLenInChars);  // 2454
	}
	V_strncmp<int>(const char* s1,
			const char* s2,
			int count);  // 2279
	CUtlString::Get(); // 2279
	CUtlString::Get(); // 2286
	V_strncmp<int>(const char* s1,
			const char* s2,
			int count);  // 2286
	CUtlString::Get(); // 99
	CUtlString::String(); // 2308
	V_strncpy<<unnamed enum> >(char* pDest,
					const char* pSrc,
					 maxLenInChars);  // 2310
	CUtlString::CUtlString(
			const char* pString);  // 2320
	FindAltKeyType<CUtlString>(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
					const CUtlString& search);  // 243
	CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::Find(
		const KeyType_t& key);  // 2320
	CUtlString::~CUtlString(); // 2320
	IsIdxValid(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
			short unsigned int i);  // 661
	IsIdxAfter(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
			short unsigned int i,
			const Iterator_t& it);  // 664
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
			short unsigned int i);  // 611
	LeftChild(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
			short unsigned int i);  // 667
	IsValidIndex(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
			short unsigned int i);  // 659
	IsValidIndex(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
			short unsigned int i);  // 190
	CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::IsValidIndex(
			IndexType_t i);  // 2321
	CUtlString::Get(); // 2291
	V_strncmp<int>(const char* s1,
			const char* s2,
			int count);  // 2291
	CVfxAnnotation::GetString(); // 2327
	CUtlString::Get(); // 2296
	V_strncmp<int>(const char* s1,
			const char* s2,
			int count);  // 2296
	CUtlString::Get(); // 99
	CUtlString::String(); // 2303
	ConvertStringToColorSpaceEnum(const char* pStr,
					bool* pSuccessOut);  // 2334
	CUtlString::CUtlString(
			const char* pString);  // 2344
	FindAltKeyType<CUtlString>(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
					const CUtlString& search);  // 243
	CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::Find(
		const KeyType_t& key);  // 2344
	CUtlString::~CUtlString(); // 2344
	IsIdxValid(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
			short unsigned int i);  // 661
	IsIdxAfter(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
			short unsigned int i,
			const Iterator_t& it);  // 664
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
			short unsigned int i);  // 611
	LeftChild(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
			short unsigned int i);  // 667
	IsValidIndex(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
			short unsigned int i);  // 659
	IsValidIndex(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
			short unsigned int i);  // 190
	CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::IsValidIndex(
			IndexType_t i);  // 2345
	CVfxAnnotation::GetString(); // 2351
	CUtlString::CUtlString(
			const char* pString);  // 2362
	FindAltKeyType<CUtlString>(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
					const CUtlString& search);  // 243
	CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::Find(
		const KeyType_t& key);  // 2362
	CUtlString::~CUtlString(); // 2362
	IsIdxValid(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
			short unsigned int i);  // 661
	IsIdxAfter(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
			short unsigned int i,
			const Iterator_t& it);  // 664
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
			short unsigned int i);  // 611
	LeftChild(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
			short unsigned int i);  // 667
	IsValidIndex(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
			short unsigned int i);  // 659
	IsValidIndex(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
			short unsigned int i);  // 190
	CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::IsValidIndex(
			IndexType_t i);  // 2363
	CUtlString::CUtlString(
			const char* pString);  // 2376
	FindAltKeyType<CUtlString>(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
					const CUtlString& search);  // 243
	CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::Find(
		const KeyType_t& key);  // 2376
	CUtlString::~CUtlString(); // 2376
	IsIdxValid(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
			short unsigned int i);  // 661
	IsIdxAfter(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
			short unsigned int i,
			const Iterator_t& it);  // 664
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
			short unsigned int i);  // 611
	LeftChild(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
			short unsigned int i);  // 667
	IsValidIndex(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
			short unsigned int i);  // 659
	IsValidIndex(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
			short unsigned int i);  // 190
	CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::IsValidIndex(
			IndexType_t i);  // 2377
	CVfxAnnotation::GetString(); // 2383
	V_strlen(const char* str); // 2391
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 2399
	CUtlString::CUtlString(
			const char* pString);  // 2409
	FindAltKeyType<CUtlString>(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
					const CUtlString& search);  // 243
	CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::Find(
		const KeyType_t& key);  // 2409
	CUtlString::~CUtlString(); // 2409
	IsIdxValid(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
			short unsigned int i);  // 661
	IsIdxAfter(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
			short unsigned int i,
			const Iterator_t& it);  // 664
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
			short unsigned int i);  // 611
	LeftChild(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
			short unsigned int i);  // 667
	IsValidIndex(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
			short unsigned int i);  // 659
	IsValidIndex(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
			short unsigned int i);  // 190
	CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::IsValidIndex(
			IndexType_t i);  // 2410
	CUtlString::CUtlString(
			const char* pString);  // 2447
	FindAltKeyType<CUtlString>(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
					const CUtlString& search);  // 243
	CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::Find(
		const KeyType_t& key);  // 2447
	CUtlString::~CUtlString(); // 2447
	IsIdxValid(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
			short unsigned int i);  // 661
	IsIdxAfter(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
			short unsigned int i,
			const Iterator_t& it);  // 664
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this,
			short unsigned int i);  // 611
	LeftChild(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
			short unsigned int i);  // 667
	IsValidIndex(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
			short unsigned int i);  // 659
	IsValidIndex(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotatio this,
			short unsigned int i);  // 190
	CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::IsValidIndex(
			IndexType_t i);  // 2448
} /* size: 2591, variables: 9, inline expansions: 85 (2115 bytes) */

// <0023A496> ../vfx_dx/vfx_parse_helpers.cpp:2464
const char* GetAttributeTypePrefix(VfxVariableType_t variableType)
{
} /* size: 0 */

// <0023A3E6> ../vfx_dx/vfx_parse_helpers.cpp:2490
// variables: 7
bool GetAttributeNameAndType(char* pOutName, VfxVariableType_t* pOutType, const char* pParamName)
{
	const char   __FUNCTION__; // 48537
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2492
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2493
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2494
	}
	{
		int i; // 2497
		{
			const char* pPrefix; // 2499
			int nPrefixLen; // 2504
		}
	}
} /* size: 0, variables: 1 */

// <0023A3B9> ../vfx_dx/vfx_parse_helpers.cpp:2520
bool AttributeTypeMatchesVariableType(VfxVariableType_t attrType, const CVfxVariableDescription& variable)
{
} /* size: 0 */

// <0023A38C> ../vfx_dx/vfx_parse_helpers.cpp:2534
bool IsVariableDynamic(const CVfxVariableDescription& variable, const CUtlVector<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >& variableDescArray)
{
} /* size: 0 */

// <0023A35F> ../vfx_dx/vfx_parse_helpers.cpp:2542
bool IsVariableMostlyStatic(const CVfxVariableDescription& variable, const CUtlVector<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >& variableDescArray)
{
} /* size: 0 */

// <0023435F> ../vfx_dx/vfx_parse_helpers.cpp:2849
// function calls: 2
void CVfxAnnotation::CVfxAnnotation()
{
	CUtlString::CUtlString(); // 2850
	memset(void* __dest,
		int __ch,
		size_t __len);  // 2852
} /* size: 34, inline expansions: 2 (23 bytes) */

// <00234342> ../vfx_dx/vfx_parse_helpers.cpp:2849
void CVfxAnnotation::CVfxAnnotation()
{
} /* size: 0 */

// <0025094A> ../vfx_dx/vfx_parse_helpers.cpp:2856
void CVfxAnnotation::GetString()
{
} /* size: 0 */

// <00250975> ../vfx_dx/vfx_parse_helpers.cpp:2866
// variable: 1
// function calls: 3
void CVfxAnnotation::GetFloatArray(float32* pArray, int32 nMaxElems)
{
	int32 nNumToCopy; // 2873
	Min<int>(const int& val1,
		const int& val2);  // 2873
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 2874
	CVfxAnnotation::GetFloatArray(
			float32* pArray,
			int32 nMaxElems);  // 2866
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <002342E1> ../vfx_dx/vfx_parse_helpers.cpp:2866
// variable: 1
void CVfxAnnotation::GetFloatArray(float32* pArray, int32 nMaxElems)
{
	int32 nNumToCopy; // 2873
} /* size: 0, variables: 1 */

// <002341C7> ../vfx_dx/vfx_parse_helpers.cpp:2879
// function calls: 3
void CVfxAnnotation::SetString(const char* pStr)
{
	V_strlen(const char* str); // 2882
	Min<int>(const int& val1,
		const int& val2);  // 2882
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 2883
} /* size: 87, inline expansions: 3 (46 bytes) */

// <00234085> ../vfx_dx/vfx_parse_helpers.cpp:2887
// function calls: 2
void CVfxAnnotation::SetFloatArray(const float32* pArray, int32 nNumElems)
{
	Min<int>(const int& val1,
		const int& val2);  // 2890
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 2891
} /* size: 43, inline expansions: 2 (19 bytes) */

// <00233D84> ../vfx_dx/vfx_parse_helpers.cpp:2895
// variables: 4
// function calls: 9
void VfxExtractLineNumbersFromD3DErrorString(const char* pString, CUtlVector<int, CUtlMemory<int, int> >& lineNumbersOut)
{
	const char* p; // 2897
	{
		int nLine; // 2902
		int nColumn; // 2903
		int nNumMatched; // 2904
		CUtlMemory<int, int>::NumAllocated(); // 1196
		CUtlMemory<int, int>::operator[](
				int i);  // 602
		CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
			int i);  // 1201
		CopyConstruct<int>(int* pMemory,
					const int& src);  // 1201
		CUtlMemory<int, int>::Base(); // 112
		CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 368
		CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
				const int& src);  // 2915
	}
} /* size: 0, variables: 1 */

// <0022AE75> ../vfx_dx/vfx_parse_helpers.cpp:2924
// member variables: 2
// struct size: 16
struct LineInfo_t {
	const char * pStart; /* 0 8 */
	uint32 nLength; /* 8 4 */
};

// <0023360F> ../vfx_dx/vfx_parse_helpers.cpp:2931
// variables: 13
// function calls: 20
void VfxGetSurroundingLines(const char* pSourceString, int32 nLineNumber, int32 nNumLinesBeforeAndAfter, CUtlString& stringOut)
{
	CUtlVector<LineInfo_t, CUtlMemory<LineInfo_t, int> > lines; // 2934
	LineInfo_t currLine; // 2936
	int32 nStartLine; // 2951
	int32 nEndLine; // 2976
	{
		const char* p; // 2937
		CopyConstruct<LineInfo_t>(LineInfo_t* pMemory,
						const LineInfo_t& src);  // 1201
		CUtlMemory<LineInfo_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<LineInfo_t, CUtlMemory<LineInfo_t, int> >::Element(
			int i);  // 1201
		CUtlMemory<LineInfo_t, int>::Grow(
			int num);  // 806
		CUtlVectorBase<LineInfo_t, CUtlMemory<LineInfo_t, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<LineInfo_t, CUtlMemory<LineInfo_t, int> >::AddToTail(
				const LineInfo_t& src);  // 2941
	}
	{
		int32 i; // 2952
		{
			char* pLineEnd; // 2955
			char nSave; // 2956
		}
	}
	{
		char* pLineEnd; // 2967
		char nSave; // 2968
		CUtlMemory<LineInfo_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<LineInfo_t, CUtlMemory<LineInfo_t, int> >::operator[](
				int i);  // 2967
	}
	{
		int32 i; // 2977
		{
			char* pLineEnd; // 2980
			char nSave; // 2981
		}
	}
	CUtlMemory<LineInfo_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<LineInfo_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<LineInfo_t, CUtlMemory<LineInfo_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<LineInfo_t, CUtlMemory<LineInfo_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<LineInfo_t, CUtlMemory<LineInfo_t, int> >::CUtlVector(); // 2934
	Max<int>(const int& val1,
		const int& val2);  // 2951
	Min<int>(const int& val1,
		const int& val2);  // 2976
	CUtlMemory<LineInfo_t, int>::Purge(); // 903
	CUtlMemory<LineInfo_t, int>::Purge(); // 1799
	CUtlVectorBase<LineInfo_t, CUtlMemory<LineInfo_t, int> >::Purge(); // 560
	CUtlVectorBase<LineInfo_t, CUtlMemory<LineInfo_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<LineInfo_t, CUtlMemory<LineInfo_t, int> >::~CUtlVector(); // 2987
} /* size: 864, variables: 4, inline expansions: 12 (137 bytes) */

// <00232AEB> ../vfx_dx/vfx_parse_helpers.cpp:2990
// variables: 6
// function calls: 41
void VfxAppendContextToD3DErrorString(CUtlString& errorString, const char* pSourceString)
{
	CUtlVector<int, CUtlMemory<int, int> > lineNumbers; // 2993
	CUtlString tmpString; // 2997
	{
		int nLineLength; // 3002
		CUtlString tmpLine; // 3013
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 3014
		CUtlString::~CUtlString(); // 3014
		CUtlString::Get(); // 99
		CUtlString::String(); // 3017
		CUtlString::Get(); // 99
		CUtlString::String(); // 3017
		CUtlString::~CUtlString(); // 3028
		CUtlString::Get(); // 99
		CUtlString::String(); // 3020
		V_strnicmp_fast<int>(const char* s1,
					const char* s2,
					int n);  // 3020
		CUtlString::Get(); // 99
		CUtlString::String(); // 3020
		V_strnicmp_fast<int>(const char* s1,
					const char* s2,
					int n);  // 3020
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 3022
		CUtlString::~CUtlString(); // 3022
	}
	{
		int i; // 3031
		{
			CUtlString tmp; // 3033
			CUtlString::CUtlString(); // 3033
			CUtlString::~CUtlString(); // 3038
		}
	}
	CUtlString::Get(); // 99
	CUtlString::String(); // 2994
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 2993
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 2997
	CUtlString::operator=(
			const char* src);  // 2998
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 2999
	CUtlString::~CUtlString(); // 3039
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 3039
} /* size: 0, variables: 2, inline expansions: 18 (0 bytes) */

