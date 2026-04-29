
//
// common/vfx/vfx_common.h
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	functions: 150
//	classes: 39
//	structs: 8
//

// <0022CD83> ../../common/vfx/vfx_common.h:114
int VfxGetVariableSourceByName(const char *)
{
} /* size: 0 */

// <001A1360> ../common/vfx/vfx_common.h:163
inline bool VfxProgramHasRenderShader(VfxProgram_t programType)
{
} /* size: 0 */

// <069718C0> ../common/vfx/vfx_common.h:168
inline bool VfxProgramHasRenderState(VfxProgram_t programType)
{
} /* size: 0 */

// <06897AF1> ../common/vfx/vfx_common.h:226
// member variables: 8
// struct size: 120
struct VfxCompileTargetInfo_t {
	const char * m_pCompileTargetName; /* 0 8 */
	const char * m_pCompileTargetNameHumanReadable; /* 8 8 */
	const char * m_pVfxCompileDllName; /* 16 8 */
	VfxShaderModel_t m_shaderModel; /* 24 4 */
	VfxPlatformType_t m_platform; /* 28 4 */
	int32 m_platformDefine; /* 32 4 */
	const char * m_pShaderModelProgramName[9]; /* 40 72 */
	int32 m_shaderModelDefine; /* 112 4 */
};

// <0008A8AA> ../common/vfx/vfx_common.h:238
void VfxInit(void)
{
} /* size: 0 */

// <00150FCB> ../common/vfx/vfx_common.h:240
VfxCompileTarget_t VfxGetCompileTargetForDXSupportLevel(int, VfxPlatformType_t)
{
} /* size: 0 */

// <000B8128> ../../common/vfx/vfx_common.h:243
const VfxCompileTargetInfo_t& VfxGetCompileTargetInfo(VfxCompileTarget_t)
{
} /* size: 0 */

// <01257FE0> ../common/vfx/vfx_common.h:252
bool VfxMaskUnusedParts(char *, VfxProgram_t, bool)
{
} /* size: 0 */

// <00150DA9> ../common/vfx/vfx_common.h:266
bool VfxIsShaderProgramRequired(VfxProgram_t)
{
} /* size: 0 */

// <0122409E> ../common/vfx/vfx_common.h:271
// member functions: 12
// member variable: 1
// class size: 16
class CVfxHashValue {
	/* ../common/vfx/vfx_common.h:312 */
	union {
		uint8 m_nHashChar[16]; /* 0 16 */
	};
	/* ../common/vfx/vfx_common.h:274 */
	void CVfxHashValue(CVfxHashValue* );
	/* ../common/vfx/vfx_common.h:279 */
	bool IsValid(const CVfxHashValue* );
	/* ../common/vfx/vfx_common.h:284 */
	void Reset(CVfxHashValue* );
	/* ../common/vfx/vfx_common.h:289 */
	void Serialize(const CVfxHashValue* , CUtlBuffer& );
	/* ../common/vfx/vfx_common.h:297 */
	void Unserialize(CVfxHashValue* , CUtlBuffer& );
	/* ../common/vfx/vfx_common.h:305 */
	uint32 GetHashUint32(const CVfxHashValue* , uint);
	union {
		uint8 m_nHashChar[16]; /* 0 16 */
	}; /* 0 16 */
	void CVfxHashValue(class CVfxHashValue *); /* linkage=_ZN13CVfxHashValueC4Ev */
	bool IsValid(const class CVfxHashValue  *); /* linkage=_ZNK13CVfxHashValue7IsValidEv */
	void Reset(class CVfxHashValue *); /* linkage=_ZN13CVfxHashValue5ResetEv */
	void Serialize(const class CVfxHashValue  *, class CUtlBuffer &); /* linkage=_ZNK13CVfxHashValue9SerializeER10CUtlBuffer */
	void Unserialize(class CVfxHashValue *, class CUtlBuffer &); /* linkage=_ZN13CVfxHashValue11UnserializeER10CUtlBuffer */
	uint32 GetHashUint32(const class CVfxHashValue  *, uint); /* linkage=_ZNK13CVfxHashValue13GetHashUint32Ej */
};

// <0002D1D3> ../../common/vfx/vfx_common.h:271
// member functions: 12
// member variable: 1
// class size: 16
class CVfxHashValue {
	/* ../../common/vfx/vfx_common.h:312 */
	union {
		uint8 m_nHashChar[16]; /* 0 16 */
	};
	/* ../../common/vfx/vfx_common.h:274 */
	void CVfxHashValue(CVfxHashValue* );
	/* ../../common/vfx/vfx_common.h:279 */
	bool IsValid(const CVfxHashValue* );
	/* ../../common/vfx/vfx_common.h:284 */
	void Reset(CVfxHashValue* );
	/* ../../common/vfx/vfx_common.h:289 */
	void Serialize(const CVfxHashValue* , CUtlBuffer& );
	/* ../../common/vfx/vfx_common.h:297 */
	void Unserialize(CVfxHashValue* , CUtlBuffer& );
	/* ../../common/vfx/vfx_common.h:305 */
	uint32 GetHashUint32(const CVfxHashValue* , uint);
	union {
		uint8 m_nHashChar[16]; /* 0 16 */
	}; /* 0 16 */
	void CVfxHashValue(class CVfxHashValue *); /* linkage=_ZN13CVfxHashValueC4Ev */
	bool IsValid(const class CVfxHashValue  *); /* linkage=_ZNK13CVfxHashValue7IsValidEv */
	void Reset(class CVfxHashValue *); /* linkage=_ZN13CVfxHashValue5ResetEv */
	void Serialize(const class CVfxHashValue  *, class CUtlBuffer &); /* linkage=_ZNK13CVfxHashValue9SerializeER10CUtlBuffer */
	void Unserialize(class CVfxHashValue *, class CUtlBuffer &); /* linkage=_ZN13CVfxHashValue11UnserializeER10CUtlBuffer */
	uint32 GetHashUint32(const class CVfxHashValue  *, uint); /* linkage=_ZNK13CVfxHashValue13GetHashUint32Ej */
};

// <06AB7C1A> ../common/vfx/vfx_common.h:274
void CVfxHashValue::CVfxHashValue()
{
} /* size: 0 */

// <06AB7C01> ../common/vfx/vfx_common.h:274
inline void CVfxHashValue::CVfxHashValue()
{
} /* size: 0 */

// <06971877> ../common/vfx/vfx_common.h:279
inline void CVfxHashValue::IsValid()
{
} /* size: 0 */

// <06AB7BE8> ../common/vfx/vfx_common.h:284
inline void CVfxHashValue::Reset()
{
} /* size: 0 */

// <06AB7BB5> ../common/vfx/vfx_common.h:289
// variable: 1
inline void CVfxHashValue::Serialize(CUtlBuffer& buf)
{
	{
		uint i; // 291
	}
} /* size: 0 */

// <06971585> ../common/vfx/vfx_common.h:289
// variable: 1
// function calls: 10
void CVfxHashValue::Serialize(CUtlBuffer& buf)
{
	{
		uint i; // 291
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1210
		CUtlBuffer::PutTypeBin<unsigned char>(
						unsigned char src);  // 1204
		CUtlBuffer::PutTypeBin<unsigned char>(
						unsigned char src);  // 1315
		CUtlBuffer::IsText(); // 1313
		GetFmtStr<short unsigned int>(int nRadix,
						bool bPrint);  // 1244
		CUtlBuffer::PutType<short unsigned int>(
						short unsigned int src);  // 1236
		CUtlBuffer::PutType<short unsigned int>(
						short unsigned int src);  // 1330
		CUtlBuffer::PutUnsignedShort(
				short unsigned int s);  // 1319
		CUtlBuffer::PutUnsignedChar(
				unsigned char c);  // 293
	}
} /* size: 148 */

// <06971552> ../common/vfx/vfx_common.h:297
// variable: 1
inline void CVfxHashValue::Unserialize(CUtlBuffer& buf)
{
	{
		uint i; // 299
	}
} /* size: 0 */

// <0697150C> ../common/vfx/vfx_common.h:305
// variables: 2
inline void CVfxHashValue::GetHashUint32(uint index)
{
	const char   __FUNCTION__; // 62606
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 307
	}
} /* size: 0, variables: 1 */

// <0160E18E> ../common/vfx/vfx_common.h:305
// variables: 2
inline void CVfxHashValue::GetHashUint32(uint index)
{
	const char   __FUNCTION__; // 42947
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 307
	}
} /* size: 0, variables: 1 */

// <004D8A2B> ../common/vfx/vfx_common.h:305
// variables: 2
inline void CVfxHashValue::GetHashUint32(uint index)
{
	const char   __FUNCTION__; // 43453
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 307
	}
} /* size: 0, variables: 1 */

// <001C742C> ../../common/vfx/vfx_common.h:305
// variables: 2
inline void CVfxHashValue::GetHashUint32(uint index)
{
	const char   __FUNCTION__; // 8992
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 307
	}
} /* size: 0, variables: 1 */

// <000D64D5> ../../common/vfx/vfx_common.h:305
// variables: 2
inline void CVfxHashValue::GetHashUint32(uint index)
{
	const char   __FUNCTION__; // 15069
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 307
	}
} /* size: 0, variables: 1 */

// <0082CE3D> ../common/vfx/vfx_common.h:305
// variables: 2
inline void CVfxHashValue::GetHashUint32(uint index)
{
	const char   __FUNCTION__; // 21924
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 307
	}
} /* size: 0, variables: 1 */

// <01232496> ../common/vfx/vfx_common.h:328
// member functions: 12
// member variable: 1
// vtable entries: 4
// class size: 8
class IRuntimeShaderCreateCallbacks {
	int ()(void) * * _vptr.IRuntimeShaderCreateCallbacks; /* 0 8 */
	/* ../common/vfx/vfx_common.h:331 */
	virtual void ~IRuntimeShaderCreateCallbacks(IRuntimeShaderCreateCallbacks* );
	/* ../common/vfx/vfx_common.h:333 */
	virtual RenderShaderHandle_t OnCreateShader(IRuntimeShaderCreateCallbacks* , VfxProgram_t, unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >, const char* );
	/* ../common/vfx/vfx_common.h:334 */
	virtual RsRasterizerStateHandle_t OnCreateRasterizerState(IRuntimeShaderCreateCallbacks* , const RsRasterizerStateDesc_t& );
	/* ../common/vfx/vfx_common.h:335 */
	virtual RsDepthStencilStateHandle_t OnCreateDepthStencilState(IRuntimeShaderCreateCallbacks* , const RsDepthStencilStateDesc_t& );
	/* ../common/vfx/vfx_common.h:336 */
	virtual RsBlendStateHandle_t OnCreateBlendState(IRuntimeShaderCreateCallbacks* , const RsBlendStateDesc_t& );
	virtual void ~IRuntimeShaderCreateCallbacks(class IRuntimeShaderCreateCallbacks *); /* linkage=_ZN29IRuntimeShaderCreateCallbacksD4Ev */
	virtual RenderShaderHandle_t OnCreateShader(class IRuntimeShaderCreateCallbacks *, enum VfxProgram_t, class unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >, const char  *); /* linkage=_ZN29IRuntimeShaderCreateCallbacks14OnCreateShaderE12VfxProgram_tSt10unique_ptrI21IRenderShaderByteCodeSt14default_deleteIS2_EEPKc */
	virtual RsRasterizerStateHandle_t OnCreateRasterizerState(class IRuntimeShaderCreateCallbacks *, const class RsRasterizerStateDesc_t  &); /* linkage=_ZN29IRuntimeShaderCreateCallbacks23OnCreateRasterizerStateERK23RsRasterizerStateDesc_t */
	virtual RsDepthStencilStateHandle_t OnCreateDepthStencilState(class IRuntimeShaderCreateCallbacks *, const class RsDepthStencilStateDesc_t  &); /* linkage=_ZN29IRuntimeShaderCreateCallbacks25OnCreateDepthStencilStateERK25RsDepthStencilStateDesc_t */
	virtual RsBlendStateHandle_t OnCreateBlendState(class IRuntimeShaderCreateCallbacks *, const class RsBlendStateDesc_t  &); /* linkage=_ZN29IRuntimeShaderCreateCallbacks18OnCreateBlendStateERK18RsBlendStateDesc_t */
	void IRuntimeShaderCreateCallbacks(class IRuntimeShaderCreateCallbacks *, const class IRuntimeShaderCreateCallbacks  &); /* linkage=_ZN29IRuntimeShaderCreateCallbacksC4ERKS_ */
	void IRuntimeShaderCreateCallbacks(class IRuntimeShaderCreateCallbacks *); /* linkage=_ZN29IRuntimeShaderCreateCallbacksC4Ev */
};

// <0003EEB5> ../../common/vfx/vfx_common.h:328
// member functions: 12
// member variable: 1
// vtable entries: 4
// class size: 8
class IRuntimeShaderCreateCallbacks {
	int ()(void) * * _vptr.IRuntimeShaderCreateCallbacks; /* 0 8 */
	/* ../../common/vfx/vfx_common.h:331 */
	virtual void ~IRuntimeShaderCreateCallbacks(IRuntimeShaderCreateCallbacks* );
	/* ../../common/vfx/vfx_common.h:333 */
	virtual RenderShaderHandle_t OnCreateShader(IRuntimeShaderCreateCallbacks* , VfxProgram_t, unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >, const char* );
	/* ../../common/vfx/vfx_common.h:334 */
	virtual RsRasterizerStateHandle_t OnCreateRasterizerState(IRuntimeShaderCreateCallbacks* , const RsRasterizerStateDesc_t& );
	/* ../../common/vfx/vfx_common.h:335 */
	virtual RsDepthStencilStateHandle_t OnCreateDepthStencilState(IRuntimeShaderCreateCallbacks* , const RsDepthStencilStateDesc_t& );
	/* ../../common/vfx/vfx_common.h:336 */
	virtual RsBlendStateHandle_t OnCreateBlendState(IRuntimeShaderCreateCallbacks* , const RsBlendStateDesc_t& );
	virtual void ~IRuntimeShaderCreateCallbacks(class IRuntimeShaderCreateCallbacks *); /* linkage=_ZN29IRuntimeShaderCreateCallbacksD4Ev */
	virtual RenderShaderHandle_t OnCreateShader(class IRuntimeShaderCreateCallbacks *, enum VfxProgram_t, class unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >, const char  *); /* linkage=_ZN29IRuntimeShaderCreateCallbacks14OnCreateShaderE12VfxProgram_tSt10unique_ptrI21IRenderShaderByteCodeSt14default_deleteIS2_EEPKc */
	virtual RsRasterizerStateHandle_t OnCreateRasterizerState(class IRuntimeShaderCreateCallbacks *, const class RsRasterizerStateDesc_t  &); /* linkage=_ZN29IRuntimeShaderCreateCallbacks23OnCreateRasterizerStateERK23RsRasterizerStateDesc_t */
	virtual RsDepthStencilStateHandle_t OnCreateDepthStencilState(class IRuntimeShaderCreateCallbacks *, const class RsDepthStencilStateDesc_t  &); /* linkage=_ZN29IRuntimeShaderCreateCallbacks25OnCreateDepthStencilStateERK25RsDepthStencilStateDesc_t */
	virtual RsBlendStateHandle_t OnCreateBlendState(class IRuntimeShaderCreateCallbacks *, const class RsBlendStateDesc_t  &); /* linkage=_ZN29IRuntimeShaderCreateCallbacks18OnCreateBlendStateERK18RsBlendStateDesc_t */
	void IRuntimeShaderCreateCallbacks(class IRuntimeShaderCreateCallbacks *, const class IRuntimeShaderCreateCallbacks  &); /* linkage=_ZN29IRuntimeShaderCreateCallbacksC4ERKS_ */
	void IRuntimeShaderCreateCallbacks(class IRuntimeShaderCreateCallbacks *); /* linkage=_ZN29IRuntimeShaderCreateCallbacksC4Ev */
};

// <00114E6A> ../common/vfx/vfx_common.h:328
// member functions: 14
// member variable: 1
// vtable entries: 4
// class size: 8
class IRuntimeShaderCreateCallbacks {
	void IRuntimeShaderCreateCallbacks(IRuntimeShaderCreateCallbacks* , const IRuntimeShaderCreateCallbacks& );
	void IRuntimeShaderCreateCallbacks(IRuntimeShaderCreateCallbacks* );
	int ()(void) * * _vptr.IRuntimeShaderCreateCallbacks; /* 0 8 */
	/* ../common/vfx/vfx_common.h:331 */
	virtual void ~IRuntimeShaderCreateCallbacks(IRuntimeShaderCreateCallbacks* );
	/* ../common/vfx/vfx_common.h:333 */
	virtual RenderShaderHandle_t OnCreateShader(IRuntimeShaderCreateCallbacks* , VfxProgram_t, unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >, const char* );
	/* ../common/vfx/vfx_common.h:334 */
	virtual RsRasterizerStateHandle_t OnCreateRasterizerState(IRuntimeShaderCreateCallbacks* , const RsRasterizerStateDesc_t& );
	/* ../common/vfx/vfx_common.h:335 */
	virtual RsDepthStencilStateHandle_t OnCreateDepthStencilState(IRuntimeShaderCreateCallbacks* , const RsDepthStencilStateDesc_t& );
	/* ../common/vfx/vfx_common.h:336 */
	virtual RsBlendStateHandle_t OnCreateBlendState(IRuntimeShaderCreateCallbacks* , const RsBlendStateDesc_t& );
	virtual void ~IRuntimeShaderCreateCallbacks(class IRuntimeShaderCreateCallbacks *); /* linkage=_ZN29IRuntimeShaderCreateCallbacksD4Ev */
	virtual RenderShaderHandle_t OnCreateShader(class IRuntimeShaderCreateCallbacks *, enum VfxProgram_t, class unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >, const char  *); /* linkage=_ZN29IRuntimeShaderCreateCallbacks14OnCreateShaderE12VfxProgram_tSt10unique_ptrI21IRenderShaderByteCodeSt14default_deleteIS2_EEPKc */
	virtual RsRasterizerStateHandle_t OnCreateRasterizerState(class IRuntimeShaderCreateCallbacks *, const class RsRasterizerStateDesc_t  &); /* linkage=_ZN29IRuntimeShaderCreateCallbacks23OnCreateRasterizerStateERK23RsRasterizerStateDesc_t */
	virtual RsDepthStencilStateHandle_t OnCreateDepthStencilState(class IRuntimeShaderCreateCallbacks *, const class RsDepthStencilStateDesc_t  &); /* linkage=_ZN29IRuntimeShaderCreateCallbacks25OnCreateDepthStencilStateERK25RsDepthStencilStateDesc_t */
	virtual RsBlendStateHandle_t OnCreateBlendState(class IRuntimeShaderCreateCallbacks *, const class RsBlendStateDesc_t  &); /* linkage=_ZN29IRuntimeShaderCreateCallbacks18OnCreateBlendStateERK18RsBlendStateDesc_t */
	void IRuntimeShaderCreateCallbacks(class IRuntimeShaderCreateCallbacks *, const class IRuntimeShaderCreateCallbacks  &); /* linkage=_ZN29IRuntimeShaderCreateCallbacksC4ERKS_ */
	void IRuntimeShaderCreateCallbacks(class IRuntimeShaderCreateCallbacks *); /* linkage=_ZN29IRuntimeShaderCreateCallbacksC4Ev */
};

// <001A1325> ../common/vfx/vfx_common.h:331
void IRuntimeShaderCreateCallbacks::~IRuntimeShaderCreateCallbacks()
{
} /* size: 0 */

// <001A12F5> ../common/vfx/vfx_common.h:331
inline void IRuntimeShaderCreateCallbacks::~IRuntimeShaderCreateCallbacks()
{
} /* size: 0 */

// <012241AD> ../common/vfx/vfx_common.h:352
// member functions: 6
// member variables: 6
// class size: 60
class CVfxRenderStateInfo {
	/* ../common/vfx/vfx_common.h:355 */
	void CVfxRenderStateInfo(CVfxRenderStateInfo* );
	RsRasterizerStateDesc_t rasterizerStateDesc; /* 0 16 */
	RsDepthStencilStateDesc_t depthStencilStateDesc; /* 16 8 */
	RsBlendStateDesc_t blendStateDesc; /* 24 32 */
	uint8 bDynamicRasterizerState:1; /* 56: 0 1 */
	uint8 bDynamicDepthStencilState:1; /* 56: 1 1 */
	uint8 bDynamicBlendState:1; /* 56: 2 1 */
	/* ../common/vfx/vfx_common.h:368 */
	void Serialize(const CVfxRenderStateInfo* , CUtlBuffer& );
	/* ../common/vfx/vfx_common.h:369 */
	void Unserialize(CVfxRenderStateInfo* , CUtlBuffer& );
	void CVfxRenderStateInfo(class CVfxRenderStateInfo *); /* linkage=_ZN19CVfxRenderStateInfoC4Ev */
	void Serialize(const class CVfxRenderStateInfo  *, class CUtlBuffer &); /* linkage=_ZNK19CVfxRenderStateInfo9SerializeER10CUtlBuffer */
	void Unserialize(class CVfxRenderStateInfo *, class CUtlBuffer &); /* linkage=_ZN19CVfxRenderStateInfo11UnserializeER10CUtlBuffer */
};

// <0002D2DF> ../../common/vfx/vfx_common.h:352
// member functions: 6
// member variables: 6
// class size: 60
class CVfxRenderStateInfo {
	/* ../../common/vfx/vfx_common.h:355 */
	void CVfxRenderStateInfo(CVfxRenderStateInfo* );
	RsRasterizerStateDesc_t rasterizerStateDesc; /* 0 16 */
	RsDepthStencilStateDesc_t depthStencilStateDesc; /* 16 8 */
	RsBlendStateDesc_t blendStateDesc; /* 24 32 */
	uint8 bDynamicRasterizerState:1; /* 56: 0 1 */
	uint8 bDynamicDepthStencilState:1; /* 56: 1 1 */
	uint8 bDynamicBlendState:1; /* 56: 2 1 */
	/* ../../common/vfx/vfx_common.h:368 */
	void Serialize(const CVfxRenderStateInfo* , CUtlBuffer& );
	/* ../../common/vfx/vfx_common.h:369 */
	void Unserialize(CVfxRenderStateInfo* , CUtlBuffer& );
	void CVfxRenderStateInfo(class CVfxRenderStateInfo *); /* linkage=_ZN19CVfxRenderStateInfoC4Ev */
	void Serialize(const class CVfxRenderStateInfo  *, class CUtlBuffer &); /* linkage=_ZNK19CVfxRenderStateInfo9SerializeER10CUtlBuffer */
	void Unserialize(class CVfxRenderStateInfo *, class CUtlBuffer &); /* linkage=_ZN19CVfxRenderStateInfo11UnserializeER10CUtlBuffer */
};

// <06AB7B9E> ../common/vfx/vfx_common.h:355
void CVfxRenderStateInfo::CVfxRenderStateInfo()
{
} /* size: 0 */

// <06AB7B85> ../common/vfx/vfx_common.h:355
inline void CVfxRenderStateInfo::CVfxRenderStateInfo()
{
} /* size: 0 */

// <012242FF> ../common/vfx/vfx_common.h:396
// member functions: 12
// member variables: 7
// class size: 488
class CVfxRule {
	VfxRule_t m_rule; /* 0 4 */
	VfxRuleType_t m_ruleType; /* 4 4 */
	VfxRuleType_t m_argTypeArray[16]; /* 8 64 */
	int16 m_argIndexArray[16]; /* 72 32 */
	int32 m_argValueArray[16]; /* 104 64 */
	int32 m_nExtraRuleData[16]; /* 168 64 */
	char m_szErrorString[256]; /* 232 256 */
	/* ../common/vfx/vfx_common.h:410 */
	void Reset(CVfxRule* );
	/* ../common/vfx/vfx_common.h:411 */
	void CVfxRule(CVfxRule* );
	/* ../common/vfx/vfx_common.h:412 */
	void ~CVfxRule(CVfxRule* );
	/* ../common/vfx/vfx_common.h:413 */
	bool IsTheSameAs(CVfxRule* , CVfxRule* );
	/* ../common/vfx/vfx_common.h:414 */
	void Serialize(const CVfxRule* , CUtlBuffer& );
	/* ../common/vfx/vfx_common.h:415 */
	void Unserialize(CVfxRule* , CUtlBuffer& );
	void Reset(class CVfxRule *); /* linkage=_ZN8CVfxRule5ResetEv */
	void CVfxRule(class CVfxRule *); /* linkage=_ZN8CVfxRuleC4Ev */
	void ~CVfxRule(class CVfxRule *); /* linkage=_ZN8CVfxRuleD4Ev */
	bool IsTheSameAs(class CVfxRule *, class CVfxRule *); /* linkage=_ZN8CVfxRule11IsTheSameAsEPS_ */
	void Serialize(const class CVfxRule  *, class CUtlBuffer &); /* linkage=_ZNK8CVfxRule9SerializeER10CUtlBuffer */
	void Unserialize(class CVfxRule *, class CUtlBuffer &); /* linkage=_ZN8CVfxRule11UnserializeER10CUtlBuffer */
};

// <0002D426> ../../common/vfx/vfx_common.h:396
// member functions: 12
// member variables: 7
// class size: 488
class CVfxRule {
	VfxRule_t m_rule; /* 0 4 */
	VfxRuleType_t m_ruleType; /* 4 4 */
	VfxRuleType_t m_argTypeArray[16]; /* 8 64 */
	int16 m_argIndexArray[16]; /* 72 32 */
	int32 m_argValueArray[16]; /* 104 64 */
	int32 m_nExtraRuleData[16]; /* 168 64 */
	char m_szErrorString[256]; /* 232 256 */
	/* ../../common/vfx/vfx_common.h:410 */
	void Reset(CVfxRule* );
	/* ../../common/vfx/vfx_common.h:411 */
	void CVfxRule(CVfxRule* );
	/* ../../common/vfx/vfx_common.h:412 */
	void ~CVfxRule(CVfxRule* );
	/* ../../common/vfx/vfx_common.h:413 */
	bool IsTheSameAs(CVfxRule* , CVfxRule* );
	/* ../../common/vfx/vfx_common.h:414 */
	void Serialize(const CVfxRule* , CUtlBuffer& );
	/* ../../common/vfx/vfx_common.h:415 */
	void Unserialize(CVfxRule* , CUtlBuffer& );
	void Reset(class CVfxRule *); /* linkage=_ZN8CVfxRule5ResetEv */
	void CVfxRule(class CVfxRule *); /* linkage=_ZN8CVfxRuleC4Ev */
	void ~CVfxRule(class CVfxRule *); /* linkage=_ZN8CVfxRuleD4Ev */
	bool IsTheSameAs(class CVfxRule *, class CVfxRule *); /* linkage=_ZN8CVfxRule11IsTheSameAsEPS_ */
	void Serialize(const class CVfxRule  *, class CUtlBuffer &); /* linkage=_ZNK8CVfxRule9SerializeER10CUtlBuffer */
	void Unserialize(class CVfxRule *, class CUtlBuffer &); /* linkage=_ZN8CVfxRule11UnserializeER10CUtlBuffer */
};

// <069714C5> ../common/vfx/vfx_common.h:411
void CVfxRule::CVfxRule()
{
} /* size: 0 */

// <069714AC> ../common/vfx/vfx_common.h:411
inline void CVfxRule::CVfxRule()
{
} /* size: 0 */

// <06971495> ../common/vfx/vfx_common.h:412
void CVfxRule::~CVfxRule()
{
} /* size: 0 */

// <0697147C> ../common/vfx/vfx_common.h:412
inline void CVfxRule::~CVfxRule()
{
} /* size: 0 */

// <012244B3> ../common/vfx/vfx_common.h:429
// member functions: 22
// member variables: 10
// class size: 184
class CVfxCombo {
	char m_szName[64]; /* 0 64 */
	CUtlStringToken m_nameToken; /* 64 4 */
	char m_szUiGroup[64]; /* 68 64 */
	VfxComboType_t m_comboType; /* 132 4 */
	VfxComboValue_t m_nMin; /* 136 1 */
	VfxComboValue_t m_nMax; /* 137 1 */
	int16 m_shaderComboSourceType; /* 138 2 */
	int16 m_iFeatureIndex; /* 140 2 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_stringArray; /* 144 32 */
	uint64 m_nComboIndexValue; /* 176 8 */
	/* ../common/vfx/vfx_common.h:453 */
	void Reset(CVfxCombo* );
	/* ../common/vfx/vfx_common.h:454 */
	void CVfxCombo(CVfxCombo* );
	/* ../common/vfx/vfx_common.h:455 */
	void ~CVfxCombo(CVfxCombo* );
	/* ../common/vfx/vfx_common.h:456 */
	bool IsTheSameAs(CVfxCombo* , CVfxCombo* );
	/* ../common/vfx/vfx_common.h:457 */
	bool IsTheSameAsWith00(CVfxCombo* , CVfxCombo* );
	/* ../common/vfx/vfx_common.h:458 */
	void Serialize(const CVfxCombo* , CUtlBuffer& );
	/* ../common/vfx/vfx_common.h:459 */
	void Unserialize(CVfxCombo* , CUtlBuffer& );
	/* ../common/vfx/vfx_common.h:460 */
	bool ScanRange(CVfxCombo* , const char* , const char* , const char* );
	/* ../common/vfx/vfx_common.h:462 */
	VfxComboCount_t GetCount(const CVfxCombo* );
	/* ../common/vfx/vfx_common.h:466 */
	VfxComboValue_t GetValueForComboId(const CVfxCombo* , uint64);
	/* ../common/vfx/vfx_common.h:471 */
	uint64 RemoveValueFromComboId(const CVfxCombo* , uint64, VfxComboValue_t* );
	void Reset(class CVfxCombo *); /* linkage=_ZN9CVfxCombo5ResetEv */
	void CVfxCombo(class CVfxCombo *); /* linkage=_ZN9CVfxComboC4Ev */
	void ~CVfxCombo(class CVfxCombo *); /* linkage=_ZN9CVfxComboD4Ev */
	bool IsTheSameAs(class CVfxCombo *, class CVfxCombo *); /* linkage=_ZN9CVfxCombo11IsTheSameAsEPS_ */
	/* <697d1e6> vfx/vfx_common.cpp:1339 */
	bool IsTheSameAsWith00(class CVfxCombo *, class CVfxCombo *); /* linkage=_ZN9CVfxCombo17IsTheSameAsWith00EPS_ */
	void Serialize(const class CVfxCombo  *, class CUtlBuffer &); /* linkage=_ZNK9CVfxCombo9SerializeER10CUtlBuffer */
	void Unserialize(class CVfxCombo *, class CUtlBuffer &); /* linkage=_ZN9CVfxCombo11UnserializeER10CUtlBuffer */
	bool ScanRange(class CVfxCombo *, const char  *, const char  *, const char  *); /* linkage=_ZN9CVfxCombo9ScanRangeEPKcS1_S1_ */
	VfxComboCount_t GetCount(const class CVfxCombo  *); /* linkage=_ZNK9CVfxCombo8GetCountEv */
	VfxComboValue_t GetValueForComboId(const class CVfxCombo  *, uint64); /* linkage=_ZNK9CVfxCombo18GetValueForComboIdEy */
	uint64 RemoveValueFromComboId(const class CVfxCombo  *, uint64, VfxComboValue_t *); /* linkage=_ZNK9CVfxCombo22RemoveValueFromComboIdEyPh */
};

// <0002D5D2> ../../common/vfx/vfx_common.h:429
// member functions: 22
// member variables: 10
// class size: 184
class CVfxCombo {
	char m_szName[64]; /* 0 64 */
	CUtlStringToken m_nameToken; /* 64 4 */
	char m_szUiGroup[64]; /* 68 64 */
	VfxComboType_t m_comboType; /* 132 4 */
	VfxComboValue_t m_nMin; /* 136 1 */
	VfxComboValue_t m_nMax; /* 137 1 */
	int16 m_shaderComboSourceType; /* 138 2 */
	int16 m_iFeatureIndex; /* 140 2 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_stringArray; /* 144 32 */
	uint64 m_nComboIndexValue; /* 176 8 */
	/* ../../common/vfx/vfx_common.h:453 */
	void Reset(CVfxCombo* );
	/* ../../common/vfx/vfx_common.h:454 */
	void CVfxCombo(CVfxCombo* );
	/* ../../common/vfx/vfx_common.h:455 */
	void ~CVfxCombo(CVfxCombo* );
	/* ../../common/vfx/vfx_common.h:456 */
	bool IsTheSameAs(CVfxCombo* , CVfxCombo* );
	/* ../../common/vfx/vfx_common.h:457 */
	bool IsTheSameAsWith00(CVfxCombo* , CVfxCombo* );
	/* ../../common/vfx/vfx_common.h:458 */
	void Serialize(const CVfxCombo* , CUtlBuffer& );
	/* ../../common/vfx/vfx_common.h:459 */
	void Unserialize(CVfxCombo* , CUtlBuffer& );
	/* ../../common/vfx/vfx_common.h:460 */
	bool ScanRange(CVfxCombo* , const char* , const char* , const char* );
	/* ../../common/vfx/vfx_common.h:462 */
	VfxComboCount_t GetCount(const CVfxCombo* );
	/* ../../common/vfx/vfx_common.h:466 */
	VfxComboValue_t GetValueForComboId(const CVfxCombo* , uint64);
	/* ../../common/vfx/vfx_common.h:471 */
	uint64 RemoveValueFromComboId(const CVfxCombo* , uint64, VfxComboValue_t* );
	void Reset(class CVfxCombo *); /* linkage=_ZN9CVfxCombo5ResetEv */
	void CVfxCombo(class CVfxCombo *); /* linkage=_ZN9CVfxComboC4Ev */
	void ~CVfxCombo(class CVfxCombo *); /* linkage=_ZN9CVfxComboD4Ev */
	bool IsTheSameAs(class CVfxCombo *, class CVfxCombo *); /* linkage=_ZN9CVfxCombo11IsTheSameAsEPS_ */
	/* <697d1e6> vfx/vfx_common.cpp:1339 */
	bool IsTheSameAsWith00(class CVfxCombo *, class CVfxCombo *); /* linkage=_ZN9CVfxCombo17IsTheSameAsWith00EPS_ */
	void Serialize(const class CVfxCombo  *, class CUtlBuffer &); /* linkage=_ZNK9CVfxCombo9SerializeER10CUtlBuffer */
	void Unserialize(class CVfxCombo *, class CUtlBuffer &); /* linkage=_ZN9CVfxCombo11UnserializeER10CUtlBuffer */
	bool ScanRange(class CVfxCombo *, const char  *, const char  *, const char  *); /* linkage=_ZN9CVfxCombo9ScanRangeEPKcS1_S1_ */
	VfxComboCount_t GetCount(const class CVfxCombo  *); /* linkage=_ZNK9CVfxCombo8GetCountEv */
	VfxComboValue_t GetValueForComboId(const class CVfxCombo  *, uint64); /* linkage=_ZNK9CVfxCombo18GetValueForComboIdEy */
	uint64 RemoveValueFromComboId(const class CVfxCombo  *, uint64, VfxComboValue_t *); /* linkage=_ZNK9CVfxCombo22RemoveValueFromComboIdEyPh */
};

// <06971431> ../common/vfx/vfx_common.h:454
void CVfxCombo::CVfxCombo()
{
} /* size: 0 */

// <06971418> ../common/vfx/vfx_common.h:454
inline void CVfxCombo::CVfxCombo()
{
} /* size: 0 */

// <06971401> ../common/vfx/vfx_common.h:455
void CVfxCombo::~CVfxCombo()
{
} /* size: 0 */

// <069713E8> ../common/vfx/vfx_common.h:455
inline void CVfxCombo::~CVfxCombo()
{
} /* size: 0 */

// <069F7239> ../common/vfx/vfx_common.h:462
inline void CVfxCombo::GetCount()
{
} /* size: 0 */

// <069F71F9> ../common/vfx/vfx_common.h:471
// variable: 1
inline void CVfxCombo::RemoveValueFromComboId(uint64 nComboId, VfxComboValue_t* pValue)
{
	VfxComboCount_t nCountForCombo; // 473
} /* size: 0, variables: 1 */

// <01224716> ../common/vfx/vfx_common.h:482
// member functions: 36
// member variables: 31
// class size: 512
class CVfxVariableDescription {
	/* ../common/vfx/vfx_common.h:514 */
	union {
		int32 m_nRegisterElements; /* 0 4 */
		int32 m_nPushConstantSizeInBytes; /* 0 4 */
	};
	/* ../common/vfx/vfx_common.h:524 */
	union {
		int32 m_nRenderStateID; /* 0 4 */
		int32 m_nExtConstantBufferID; /* 0 4 */
	};
	char m_szName[64]; /* 0 64 */
	char m_szUiGroup[64]; /* 64 64 */
	VfxUiType_t m_uiType; /* 128 4 */
	float m_flUiStep; /* 132 4 */
	char m_pAttributeName[64]; /* 136 64 */
	CUtlStringToken m_attributeToken; /* 200 4 */
	byte * m_pCompiledExpressionBuffer; /* 208 8 */
	uint32 m_nCompiledExpressionBufferSize; /* 216 4 */
	VfxVariableSourceType_t m_sourceType; /* 220 4 */
	int32 m_sourceIndex; /* 224 4 */
	VfxVariableType_t m_type; /* 228 4 */
	VfxRegisterType_t m_registerType; /* 232 4 */
	int32 m_nRegisterOffset:27; /* 236: 0 4 */
	int32 m_nDescriptorSet:5; /* 236:27 4 */
	union {
		int32 m_nRegisterElements; /* 240 4 */
		int32 m_nPushConstantSizeInBytes; /* 240 4 */
	}; /* 240 4 */
	uint32 m_nContextStateAffectedByVariable; /* 244 4 */
	union {
		int32 m_nRenderStateID; /* 248 4 */
		int32 m_nExtConstantBufferID; /* 248 4 */
	}; /* 248 4 */
	char m_defaultInputTexture[64]; /* 252 64 */
	int32 m_intDefault[4]; /* 316 16 */
	int32 m_intMin[4]; /* 332 16 */
	int32 m_intMax[4]; /* 348 16 */
	float m_flDefault[4]; /* 364 16 */
	float m_flMin[4]; /* 380 16 */
	float m_flMax[4]; /* 396 16 */
	ImageFormat m_outputTextureFormat; /* 412 4 */
	uint32 m_nChannelCount; /* 416 4 */
	int32 m_nChannelInfoIndex[4]; /* 420 16 */
	VfxColorSpace_t m_inputColorSpace; /* 436 4 */
	int32 m_nMinPrecisionBits; /* 440 4 */
	char m_szTextureFileEnding[32]; /* 444 32 */
	char m_inputProcessingCommand[32]; /* 476 32 */
	/* ../common/vfx/vfx_common.h:559 */
	void Reset(CVfxVariableDescription* );
	/* ../common/vfx/vfx_common.h:560 */
	void CVfxVariableDescription(CVfxVariableDescription* );
	/* ../common/vfx/vfx_common.h:561 */
	void CVfxVariableDescription(CVfxVariableDescription* , const CVfxVariableDescription& );
	/* ../common/vfx/vfx_common.h:562 */
	CVfxVariableDescription& operator=(CVfxVariableDescription* , const CVfxVariableDescription& );
	/* ../common/vfx/vfx_common.h:563 */
	void ~CVfxVariableDescription(CVfxVariableDescription* );
	/* ../common/vfx/vfx_common.h:564 */
	bool IsTexture(const CVfxVariableDescription* );
	/* ../common/vfx/vfx_common.h:565 */
	bool IsUAV(const CVfxVariableDescription* );
	/* ../common/vfx/vfx_common.h:566 */
	bool IsTheSameAs(const CVfxVariableDescription* , const CVfxVariableDescription* );
	/* ../common/vfx/vfx_common.h:567 */
	bool HasReferences(const CVfxVariableDescription* );
	/* ../common/vfx/vfx_common.h:568 */
	bool CanBeInStaticConstantBuffer(const CVfxVariableDescription* );
	/* ../common/vfx/vfx_common.h:569 */
	bool IsShaderConstant(const CVfxVariableDescription* );
	/* ../common/vfx/vfx_common.h:570 */
	bool IsRenderState(const CVfxVariableDescription* );
	/* ../common/vfx/vfx_common.h:571 */
	void RemapVariableIndices(CVfxVariableDescription* , const CUtlVector<int, CUtlMemory<int, int> >& , const CUtlVector<int, CUtlMemory<int, int> >& );
	/* ../common/vfx/vfx_common.h:572 */
	void Serialize(const CVfxVariableDescription* , CUtlBuffer& , bool);
	/* ../common/vfx/vfx_common.h:573 */
	void Unserialize(CVfxVariableDescription* , CUtlBuffer& , bool);
	/* ../common/vfx/vfx_common.h:574 */
	void SetCompiledExpression(CVfxVariableDescription* , const void* , uint32);
	/* ../common/vfx/vfx_common.h:576 */
	bool IsUsingExpression(const CVfxVariableDescription* );
	/* ../common/vfx/vfx_common.h:581 */
	void SetAttributeName(CVfxVariableDescription* , const char* );
	void Reset(class CVfxVariableDescription *); /* linkage=_ZN23CVfxVariableDescription5ResetEv */
	void CVfxVariableDescription(class CVfxVariableDescription *); /* linkage=_ZN23CVfxVariableDescriptionC4Ev */
	void CVfxVariableDescription(class CVfxVariableDescription *, const class CVfxVariableDescription  &); /* linkage=_ZN23CVfxVariableDescriptionC4ERKS_ */
	/* <697d304> vfx/vfx_common.cpp:1477 */
	class CVfxVariableDescription & operator=(class CVfxVariableDescription *, const class CVfxVariableDescription  &); /* linkage=_ZN23CVfxVariableDescriptionaSERKS_ */
	void ~CVfxVariableDescription(class CVfxVariableDescription *); /* linkage=_ZN23CVfxVariableDescriptionD4Ev */
	/* <697d4ec> vfx/vfx_common.cpp:1561 */
	bool IsTexture(const class CVfxVariableDescription  *); /* linkage=_ZNK23CVfxVariableDescription9IsTextureEv */
	bool IsUAV(const class CVfxVariableDescription  *); /* linkage=_ZNK23CVfxVariableDescription5IsUAVEv */
	bool IsTheSameAs(const class CVfxVariableDescription  *, const class CVfxVariableDescription  *); /* linkage=_ZNK23CVfxVariableDescription11IsTheSameAsEPKS_ */
	/* <697d517> vfx/vfx_common.cpp:1625 */
	bool HasReferences(const class CVfxVariableDescription  *); /* linkage=_ZNK23CVfxVariableDescription13HasReferencesEv */
	/* <697d567> vfx/vfx_common.cpp:1631 */
	bool CanBeInStaticConstantBuffer(const class CVfxVariableDescription  *); /* linkage=_ZNK23CVfxVariableDescription27CanBeInStaticConstantBufferEv */
	/* <697d592> vfx/vfx_common.cpp:1638 */
	bool IsShaderConstant(const class CVfxVariableDescription  *); /* linkage=_ZNK23CVfxVariableDescription16IsShaderConstantEv */
	bool IsRenderState(const class CVfxVariableDescription  *); /* linkage=_ZNK23CVfxVariableDescription13IsRenderStateEv */
	/* <697d5bd> vfx/vfx_common.cpp:1650 */
	void RemapVariableIndices(class CVfxVariableDescription *, const class CUtlVector<int, CUtlMemory<int, int> >  &, const class CUtlVector<int, CUtlMemory<int, int> >  &); /* linkage=_ZN23CVfxVariableDescription20RemapVariableIndicesERK10CUtlVectorIi10CUtlMemoryIiiEES5_ */
	void Serialize(const class CVfxVariableDescription  *, class CUtlBuffer &, bool); /* linkage=_ZNK23CVfxVariableDescription9SerializeER10CUtlBufferb */
	void Unserialize(class CVfxVariableDescription *, class CUtlBuffer &, bool); /* linkage=_ZN23CVfxVariableDescription11UnserializeER10CUtlBufferb */
	void SetCompiledExpression(class CVfxVariableDescription *, const void  *, uint32); /* linkage=_ZN23CVfxVariableDescription21SetCompiledExpressionEPKvj */
	bool IsUsingExpression(const class CVfxVariableDescription  *); /* linkage=_ZNK23CVfxVariableDescription17IsUsingExpressionEv */
	void SetAttributeName(class CVfxVariableDescription *, const char  *); /* linkage=_ZN23CVfxVariableDescription16SetAttributeNameEPKc */
};

// <0002D82F> ../../common/vfx/vfx_common.h:482
// member functions: 36
// member variables: 31
// class size: 512
class CVfxVariableDescription {
	/* ../../common/vfx/vfx_common.h:514 */
	union {
		int32 m_nRegisterElements; /* 0 4 */
		int32 m_nPushConstantSizeInBytes; /* 0 4 */
	};
	/* ../../common/vfx/vfx_common.h:524 */
	union {
		int32 m_nRenderStateID; /* 0 4 */
		int32 m_nExtConstantBufferID; /* 0 4 */
	};
	char m_szName[64]; /* 0 64 */
	char m_szUiGroup[64]; /* 64 64 */
	VfxUiType_t m_uiType; /* 128 4 */
	float m_flUiStep; /* 132 4 */
	char m_pAttributeName[64]; /* 136 64 */
	CUtlStringToken m_attributeToken; /* 200 4 */
	byte * m_pCompiledExpressionBuffer; /* 208 8 */
	uint32 m_nCompiledExpressionBufferSize; /* 216 4 */
	VfxVariableSourceType_t m_sourceType; /* 220 4 */
	int32 m_sourceIndex; /* 224 4 */
	VfxVariableType_t m_type; /* 228 4 */
	VfxRegisterType_t m_registerType; /* 232 4 */
	int32 m_nRegisterOffset:27; /* 236: 0 4 */
	int32 m_nDescriptorSet:5; /* 236:27 4 */
	union {
		int32 m_nRegisterElements; /* 240 4 */
		int32 m_nPushConstantSizeInBytes; /* 240 4 */
	}; /* 240 4 */
	uint32 m_nContextStateAffectedByVariable; /* 244 4 */
	union {
		int32 m_nRenderStateID; /* 248 4 */
		int32 m_nExtConstantBufferID; /* 248 4 */
	}; /* 248 4 */
	char m_defaultInputTexture[64]; /* 252 64 */
	int32 m_intDefault[4]; /* 316 16 */
	int32 m_intMin[4]; /* 332 16 */
	int32 m_intMax[4]; /* 348 16 */
	float m_flDefault[4]; /* 364 16 */
	float m_flMin[4]; /* 380 16 */
	float m_flMax[4]; /* 396 16 */
	ImageFormat m_outputTextureFormat; /* 412 4 */
	uint32 m_nChannelCount; /* 416 4 */
	int32 m_nChannelInfoIndex[4]; /* 420 16 */
	VfxColorSpace_t m_inputColorSpace; /* 436 4 */
	int32 m_nMinPrecisionBits; /* 440 4 */
	char m_szTextureFileEnding[32]; /* 444 32 */
	char m_inputProcessingCommand[32]; /* 476 32 */
	/* ../../common/vfx/vfx_common.h:559 */
	void Reset(CVfxVariableDescription* );
	/* ../../common/vfx/vfx_common.h:560 */
	void CVfxVariableDescription(CVfxVariableDescription* );
	/* ../../common/vfx/vfx_common.h:561 */
	void CVfxVariableDescription(CVfxVariableDescription* , const CVfxVariableDescription& );
	/* ../../common/vfx/vfx_common.h:562 */
	CVfxVariableDescription& operator=(CVfxVariableDescription* , const CVfxVariableDescription& );
	/* ../../common/vfx/vfx_common.h:563 */
	void ~CVfxVariableDescription(CVfxVariableDescription* );
	/* ../../common/vfx/vfx_common.h:564 */
	bool IsTexture(const CVfxVariableDescription* );
	/* ../../common/vfx/vfx_common.h:565 */
	bool IsUAV(const CVfxVariableDescription* );
	/* ../../common/vfx/vfx_common.h:566 */
	bool IsTheSameAs(const CVfxVariableDescription* , const CVfxVariableDescription* );
	/* ../../common/vfx/vfx_common.h:567 */
	bool HasReferences(const CVfxVariableDescription* );
	/* ../../common/vfx/vfx_common.h:568 */
	bool CanBeInStaticConstantBuffer(const CVfxVariableDescription* );
	/* ../../common/vfx/vfx_common.h:569 */
	bool IsShaderConstant(const CVfxVariableDescription* );
	/* ../../common/vfx/vfx_common.h:570 */
	bool IsRenderState(const CVfxVariableDescription* );
	/* ../../common/vfx/vfx_common.h:571 */
	void RemapVariableIndices(CVfxVariableDescription* , const CUtlVector<int, CUtlMemory<int, int> >& , const CUtlVector<int, CUtlMemory<int, int> >& );
	/* ../../common/vfx/vfx_common.h:572 */
	void Serialize(const CVfxVariableDescription* , CUtlBuffer& , bool);
	/* ../../common/vfx/vfx_common.h:573 */
	void Unserialize(CVfxVariableDescription* , CUtlBuffer& , bool);
	/* ../../common/vfx/vfx_common.h:574 */
	void SetCompiledExpression(CVfxVariableDescription* , const void* , uint32);
	/* ../../common/vfx/vfx_common.h:576 */
	bool IsUsingExpression(const CVfxVariableDescription* );
	/* ../../common/vfx/vfx_common.h:581 */
	void SetAttributeName(CVfxVariableDescription* , const char* );
	void Reset(class CVfxVariableDescription *); /* linkage=_ZN23CVfxVariableDescription5ResetEv */
	void CVfxVariableDescription(class CVfxVariableDescription *); /* linkage=_ZN23CVfxVariableDescriptionC4Ev */
	void CVfxVariableDescription(class CVfxVariableDescription *, const class CVfxVariableDescription  &); /* linkage=_ZN23CVfxVariableDescriptionC4ERKS_ */
	/* <697d304> vfx/vfx_common.cpp:1477 */
	class CVfxVariableDescription & operator=(class CVfxVariableDescription *, const class CVfxVariableDescription  &); /* linkage=_ZN23CVfxVariableDescriptionaSERKS_ */
	void ~CVfxVariableDescription(class CVfxVariableDescription *); /* linkage=_ZN23CVfxVariableDescriptionD4Ev */
	/* <697d4ec> vfx/vfx_common.cpp:1561 */
	bool IsTexture(const class CVfxVariableDescription  *); /* linkage=_ZNK23CVfxVariableDescription9IsTextureEv */
	bool IsUAV(const class CVfxVariableDescription  *); /* linkage=_ZNK23CVfxVariableDescription5IsUAVEv */
	bool IsTheSameAs(const class CVfxVariableDescription  *, const class CVfxVariableDescription  *); /* linkage=_ZNK23CVfxVariableDescription11IsTheSameAsEPKS_ */
	/* <697d517> vfx/vfx_common.cpp:1625 */
	bool HasReferences(const class CVfxVariableDescription  *); /* linkage=_ZNK23CVfxVariableDescription13HasReferencesEv */
	/* <697d567> vfx/vfx_common.cpp:1631 */
	bool CanBeInStaticConstantBuffer(const class CVfxVariableDescription  *); /* linkage=_ZNK23CVfxVariableDescription27CanBeInStaticConstantBufferEv */
	/* <697d592> vfx/vfx_common.cpp:1638 */
	bool IsShaderConstant(const class CVfxVariableDescription  *); /* linkage=_ZNK23CVfxVariableDescription16IsShaderConstantEv */
	bool IsRenderState(const class CVfxVariableDescription  *); /* linkage=_ZNK23CVfxVariableDescription13IsRenderStateEv */
	/* <697d5bd> vfx/vfx_common.cpp:1650 */
	void RemapVariableIndices(class CVfxVariableDescription *, const class CUtlVector<int, CUtlMemory<int, int> >  &, const class CUtlVector<int, CUtlMemory<int, int> >  &); /* linkage=_ZN23CVfxVariableDescription20RemapVariableIndicesERK10CUtlVectorIi10CUtlMemoryIiiEES5_ */
	void Serialize(const class CVfxVariableDescription  *, class CUtlBuffer &, bool); /* linkage=_ZNK23CVfxVariableDescription9SerializeER10CUtlBufferb */
	void Unserialize(class CVfxVariableDescription *, class CUtlBuffer &, bool); /* linkage=_ZN23CVfxVariableDescription11UnserializeER10CUtlBufferb */
	void SetCompiledExpression(class CVfxVariableDescription *, const void  *, uint32); /* linkage=_ZN23CVfxVariableDescription21SetCompiledExpressionEPKvj */
	bool IsUsingExpression(const class CVfxVariableDescription  *); /* linkage=_ZNK23CVfxVariableDescription17IsUsingExpressionEv */
	void SetAttributeName(class CVfxVariableDescription *, const char  *); /* linkage=_ZN23CVfxVariableDescription16SetAttributeNameEPKc */
};

// <069F71E2> ../common/vfx/vfx_common.h:560
void CVfxVariableDescription::CVfxVariableDescription()
{
} /* size: 0 */

// <069F71C9> ../common/vfx/vfx_common.h:560
inline void CVfxVariableDescription::CVfxVariableDescription()
{
} /* size: 0 */

// <069D6102> ../common/vfx/vfx_common.h:561
void CVfxVariableDescription::CVfxVariableDescription(const CVfxVariableDescription& other)
{
} /* size: 0 */

// <069D60E6> ../common/vfx/vfx_common.h:563
void CVfxVariableDescription::~CVfxVariableDescription()
{
} /* size: 0 */

// <0024F61A> ../../common/vfx/vfx_common.h:576
inline void CVfxVariableDescription::IsUsingExpression()
{
} /* size: 0 */

// <06971379> ../common/vfx/vfx_common.h:581
inline void CVfxVariableDescription::SetAttributeName(const char* pAttributeName)
{
} /* size: 0 */

// <01224C1D> ../common/vfx/vfx_common.h:592
// member functions: 14
// member variables: 4
// class size: 280
class CVfxTextureChannelProcessor {
	int8 m_nOutputChannels[4]; /* 0 4 */
	int32 m_nInputTextures[4]; /* 4 16 */
	VfxColorSpace_t m_outputColorSpace; /* 20 4 */
	char m_mipProcessingCommand[256]; /* 24 256 */
	/* ../common/vfx/vfx_common.h:601 */
	void Reset(CVfxTextureChannelProcessor* );
	/* ../common/vfx/vfx_common.h:602 */
	void CVfxTextureChannelProcessor(CVfxTextureChannelProcessor* );
	/* ../common/vfx/vfx_common.h:603 */
	void ~CVfxTextureChannelProcessor(CVfxTextureChannelProcessor* );
	/* ../common/vfx/vfx_common.h:604 */
	bool IsTheSameAs(const CVfxTextureChannelProcessor* , const CVfxTextureChannelProcessor* );
	/* ../common/vfx/vfx_common.h:605 */
	void RemapVariableIndices(CVfxTextureChannelProcessor* , const CUtlVector<int, CUtlMemory<int, int> >& );
	/* ../common/vfx/vfx_common.h:606 */
	void Serialize(const CVfxTextureChannelProcessor* , CUtlBuffer& );
	/* ../common/vfx/vfx_common.h:607 */
	void Unserialize(CVfxTextureChannelProcessor* , CUtlBuffer& );
	/* <697d828> vfx/vfx_common.cpp:1854 */
	void Reset(class CVfxTextureChannelProcessor *); /* linkage=_ZN27CVfxTextureChannelProcessor5ResetEv */
	void CVfxTextureChannelProcessor(class CVfxTextureChannelProcessor *); /* linkage=_ZN27CVfxTextureChannelProcessorC4Ev */
	void ~CVfxTextureChannelProcessor(class CVfxTextureChannelProcessor *); /* linkage=_ZN27CVfxTextureChannelProcessorD4Ev */
	bool IsTheSameAs(const class CVfxTextureChannelProcessor  *, const class CVfxTextureChannelProcessor  *); /* linkage=_ZNK27CVfxTextureChannelProcessor11IsTheSameAsEPKS_ */
	/* <697d8e0> vfx/vfx_common.cpp:1882 */
	void RemapVariableIndices(class CVfxTextureChannelProcessor *, const class CUtlVector<int, CUtlMemory<int, int> >  &); /* linkage=_ZN27CVfxTextureChannelProcessor20RemapVariableIndicesERK10CUtlVectorIi10CUtlMemoryIiiEE */
	void Serialize(const class CVfxTextureChannelProcessor  *, class CUtlBuffer &); /* linkage=_ZNK27CVfxTextureChannelProcessor9SerializeER10CUtlBuffer */
	void Unserialize(class CVfxTextureChannelProcessor *, class CUtlBuffer &); /* linkage=_ZN27CVfxTextureChannelProcessor11UnserializeER10CUtlBuffer */
};

// <0002DE7D> ../../common/vfx/vfx_common.h:592
// member functions: 14
// member variables: 4
// class size: 280
class CVfxTextureChannelProcessor {
	int8 m_nOutputChannels[4]; /* 0 4 */
	int32 m_nInputTextures[4]; /* 4 16 */
	VfxColorSpace_t m_outputColorSpace; /* 20 4 */
	char m_mipProcessingCommand[256]; /* 24 256 */
	/* ../../common/vfx/vfx_common.h:601 */
	void Reset(CVfxTextureChannelProcessor* );
	/* ../../common/vfx/vfx_common.h:602 */
	void CVfxTextureChannelProcessor(CVfxTextureChannelProcessor* );
	/* ../../common/vfx/vfx_common.h:603 */
	void ~CVfxTextureChannelProcessor(CVfxTextureChannelProcessor* );
	/* ../../common/vfx/vfx_common.h:604 */
	bool IsTheSameAs(const CVfxTextureChannelProcessor* , const CVfxTextureChannelProcessor* );
	/* ../../common/vfx/vfx_common.h:605 */
	void RemapVariableIndices(CVfxTextureChannelProcessor* , const CUtlVector<int, CUtlMemory<int, int> >& );
	/* ../../common/vfx/vfx_common.h:606 */
	void Serialize(const CVfxTextureChannelProcessor* , CUtlBuffer& );
	/* ../../common/vfx/vfx_common.h:607 */
	void Unserialize(CVfxTextureChannelProcessor* , CUtlBuffer& );
	/* <697d828> vfx/vfx_common.cpp:1854 */
	void Reset(class CVfxTextureChannelProcessor *); /* linkage=_ZN27CVfxTextureChannelProcessor5ResetEv */
	void CVfxTextureChannelProcessor(class CVfxTextureChannelProcessor *); /* linkage=_ZN27CVfxTextureChannelProcessorC4Ev */
	void ~CVfxTextureChannelProcessor(class CVfxTextureChannelProcessor *); /* linkage=_ZN27CVfxTextureChannelProcessorD4Ev */
	bool IsTheSameAs(const class CVfxTextureChannelProcessor  *, const class CVfxTextureChannelProcessor  *); /* linkage=_ZNK27CVfxTextureChannelProcessor11IsTheSameAsEPKS_ */
	/* <697d8e0> vfx/vfx_common.cpp:1882 */
	void RemapVariableIndices(class CVfxTextureChannelProcessor *, const class CUtlVector<int, CUtlMemory<int, int> >  &); /* linkage=_ZN27CVfxTextureChannelProcessor20RemapVariableIndicesERK10CUtlVectorIi10CUtlMemoryIiiEE */
	void Serialize(const class CVfxTextureChannelProcessor  *, class CUtlBuffer &); /* linkage=_ZNK27CVfxTextureChannelProcessor9SerializeER10CUtlBuffer */
	void Unserialize(class CVfxTextureChannelProcessor *, class CUtlBuffer &); /* linkage=_ZN27CVfxTextureChannelProcessor11UnserializeER10CUtlBuffer */
};

// <06971362> ../common/vfx/vfx_common.h:602
void CVfxTextureChannelProcessor::CVfxTextureChannelProcessor()
{
} /* size: 0 */

// <06971349> ../common/vfx/vfx_common.h:602
inline void CVfxTextureChannelProcessor::CVfxTextureChannelProcessor()
{
} /* size: 0 */

// <069F71B2> ../common/vfx/vfx_common.h:603
void CVfxTextureChannelProcessor::~CVfxTextureChannelProcessor()
{
} /* size: 0 */

// <069F7199> ../common/vfx/vfx_common.h:603
inline void CVfxTextureChannelProcessor::~CVfxTextureChannelProcessor()
{
} /* size: 0 */

// <01224D7B> ../common/vfx/vfx_common.h:611
// member function: 1
// member variables: 2
// struct size: 4
struct VfxVariableIndexData_t {
	/* ../common/vfx/vfx_common.h:614 */
	union {
		struct {
			uint16 m_nVariableIndex:12; /* 0: 0 2 */
			uint16 m_nDescriptorSet:4; /* 0:12 2 */
		}; /* 0 2 */
		uint16 m_nVariableIndexAndDescriptorSet; /* 0 2 */
	};
	union {
		struct {
			uint16 m_nVariableIndex:12; /* 0: 0 2 */
			uint16 m_nDescriptorSet:4; /* 0:12 2 */
		}; /* 0 2 */
		uint16 m_nVariableIndexAndDescriptorSet; /* 0 2 */
	}; /* 0 2 */
	uint16 m_nRegisterOffset; /* 2 2 */
	/* ../common/vfx/vfx_common.h:623 */
	bool operator==(const VfxVariableIndexData_t* , const VfxVariableIndexData_t& );
};

// <0002DFD4> ../../common/vfx/vfx_common.h:611
// member function: 1
// member variables: 2
// struct size: 4
struct VfxVariableIndexData_t {
	/* ../../common/vfx/vfx_common.h:614 */
	union {
		struct {
			uint16 m_nVariableIndex:12; /* 0: 0 2 */
			uint16 m_nDescriptorSet:4; /* 0:12 2 */
		}; /* 0 2 */
		uint16 m_nVariableIndexAndDescriptorSet; /* 0 2 */
	};
	union {
		struct {
			uint16 m_nVariableIndex:12; /* 0: 0 2 */
			uint16 m_nDescriptorSet:4; /* 0:12 2 */
		}; /* 0 2 */
		uint16 m_nVariableIndexAndDescriptorSet; /* 0 2 */
	}; /* 0 2 */
	uint16 m_nRegisterOffset; /* 2 2 */
	/* ../../common/vfx/vfx_common.h:623 */
	bool operator==(const VfxVariableIndexData_t* , const VfxVariableIndexData_t& );
};

// <0082CC24> ../common/vfx/vfx_common.h:623
inline void VfxVariableIndexData_t::operator==(const VfxVariableIndexData_t& other)
{
} /* size: 0 */

// <06971039> ../common/vfx/vfx_common.h:635
void CVfxVariableIndexArray::~CVfxVariableIndexArray()
{
} /* size: 0 */

// <0697101C> ../common/vfx/vfx_common.h:635
inline void CVfxVariableIndexArray::~CVfxVariableIndexArray()
{
} /* size: 0 */

// <0694854C> ../common/vfx/vfx_common.h:635
inline void CVfxVariableIndexArray::operator=(const CVfxVariableIndexArray &)
{
} /* size: 0 */

// <01225A52> ../common/vfx/vfx_common.h:635
// member functions: 10
// member variables: 3
// class size: 24
class CVfxVariableIndexArray {
	VfxVariableIndexDataArray_t m_indexAndRegisterOffsetArray __attribute__((__aligned__(8))); /* 0 16 */
	int16 m_nFirstRenderStateElement; /* 16 2 */
	int16 m_nFirstConstantElement; /* 18 2 */
	/* ../common/vfx/vfx_common.h:642 */
	void CVfxVariableIndexArray(CVfxVariableIndexArray* );
	/* ../common/vfx/vfx_common.h:643 */
	void Reset(CVfxVariableIndexArray* );
	/* ../common/vfx/vfx_common.h:644 */
	void Serialize(const CVfxVariableIndexArray* , CUtlBuffer& , bool);
	/* ../common/vfx/vfx_common.h:645 */
	void Unserialize(CVfxVariableIndexArray* , CUtlBuffer& , bool);
	void CVfxVariableIndexArray(class CVfxVariableIndexArray *); /* linkage=_ZN22CVfxVariableIndexArrayC4Ev */
	/* <697d9b7> vfx/vfx_common.cpp:1926 */
	void Reset(class CVfxVariableIndexArray *); /* linkage=_ZN22CVfxVariableIndexArray5ResetEv */
	void Serialize(const class CVfxVariableIndexArray  *, class CUtlBuffer &, bool); /* linkage=_ZNK22CVfxVariableIndexArray9SerializeER10CUtlBufferb */
	void Unserialize(class CVfxVariableIndexArray *, class CUtlBuffer &, bool); /* linkage=_ZN22CVfxVariableIndexArray11UnserializeER10CUtlBufferb */
	class CVfxVariableIndexArray & operator=(class CVfxVariableIndexArray *, const class CVfxVariableIndexArray  &); /* linkage=_ZN22CVfxVariableIndexArrayaSERKS_ */
	void ~CVfxVariableIndexArray(class CVfxVariableIndexArray *); /* linkage=_ZN22CVfxVariableIndexArrayD4Ev */
} __attribute__((__aligned__(8)));

// <015363F0> ../common/vfx/vfx_common.h:635
// member functions: 12
// member variables: 3
// class size: 24
class CVfxVariableIndexArray {
	VfxVariableIndexDataArray_t m_indexAndRegisterOffsetArray __attribute__((__aligned__(8))); /* 0 16 */
	int16 m_nFirstRenderStateElement; /* 16 2 */
	int16 m_nFirstConstantElement; /* 18 2 */
	/* ../common/vfx/vfx_common.h:642 */
	void CVfxVariableIndexArray(CVfxVariableIndexArray* );
	/* ../common/vfx/vfx_common.h:643 */
	void Reset(CVfxVariableIndexArray* );
	/* ../common/vfx/vfx_common.h:644 */
	void Serialize(const CVfxVariableIndexArray* , CUtlBuffer& , bool);
	/* ../common/vfx/vfx_common.h:645 */
	void Unserialize(CVfxVariableIndexArray* , CUtlBuffer& , bool);
	CVfxVariableIndexArray& operator=(CVfxVariableIndexArray* , const CVfxVariableIndexArray& );
	void ~CVfxVariableIndexArray(CVfxVariableIndexArray* );
	void CVfxVariableIndexArray(class CVfxVariableIndexArray *); /* linkage=_ZN22CVfxVariableIndexArrayC4Ev */
	/* <697d9b7> vfx/vfx_common.cpp:1926 */
	void Reset(class CVfxVariableIndexArray *); /* linkage=_ZN22CVfxVariableIndexArray5ResetEv */
	void Serialize(const class CVfxVariableIndexArray  *, class CUtlBuffer &, bool); /* linkage=_ZNK22CVfxVariableIndexArray9SerializeER10CUtlBufferb */
	void Unserialize(class CVfxVariableIndexArray *, class CUtlBuffer &, bool); /* linkage=_ZN22CVfxVariableIndexArray11UnserializeER10CUtlBufferb */
	class CVfxVariableIndexArray & operator=(class CVfxVariableIndexArray *, const class CVfxVariableIndexArray  &); /* linkage=_ZN22CVfxVariableIndexArrayaSERKS_ */
	void ~CVfxVariableIndexArray(class CVfxVariableIndexArray *); /* linkage=_ZN22CVfxVariableIndexArrayD4Ev */
} __attribute__((__aligned__(8)));

// <0002EC9B> ../../common/vfx/vfx_common.h:635
// member functions: 10
// member variables: 3
// class size: 24
class CVfxVariableIndexArray {
	VfxVariableIndexDataArray_t m_indexAndRegisterOffsetArray __attribute__((__aligned__(8))); /* 0 16 */
	int16 m_nFirstRenderStateElement; /* 16 2 */
	int16 m_nFirstConstantElement; /* 18 2 */
	/* ../../common/vfx/vfx_common.h:642 */
	void CVfxVariableIndexArray(CVfxVariableIndexArray* );
	/* ../../common/vfx/vfx_common.h:643 */
	void Reset(CVfxVariableIndexArray* );
	/* ../../common/vfx/vfx_common.h:644 */
	void Serialize(const CVfxVariableIndexArray* , CUtlBuffer& , bool);
	/* ../../common/vfx/vfx_common.h:645 */
	void Unserialize(CVfxVariableIndexArray* , CUtlBuffer& , bool);
	void CVfxVariableIndexArray(class CVfxVariableIndexArray *); /* linkage=_ZN22CVfxVariableIndexArrayC4Ev */
	/* <697d9b7> vfx/vfx_common.cpp:1926 */
	void Reset(class CVfxVariableIndexArray *); /* linkage=_ZN22CVfxVariableIndexArray5ResetEv */
	void Serialize(const class CVfxVariableIndexArray  *, class CUtlBuffer &, bool); /* linkage=_ZNK22CVfxVariableIndexArray9SerializeER10CUtlBufferb */
	void Unserialize(class CVfxVariableIndexArray *, class CUtlBuffer &, bool); /* linkage=_ZN22CVfxVariableIndexArray11UnserializeER10CUtlBufferb */
	class CVfxVariableIndexArray & operator=(class CVfxVariableIndexArray *, const class CVfxVariableIndexArray  &); /* linkage=_ZN22CVfxVariableIndexArrayaSERKS_ */
	void ~CVfxVariableIndexArray(class CVfxVariableIndexArray *); /* linkage=_ZN22CVfxVariableIndexArrayD4Ev */
} __attribute__((__aligned__(8)));

// <06971274> ../common/vfx/vfx_common.h:642
void CVfxVariableIndexArray::CVfxVariableIndexArray()
{
} /* size: 0 */

// <0697125B> ../common/vfx/vfx_common.h:642
inline void CVfxVariableIndexArray::CVfxVariableIndexArray()
{
} /* size: 0 */

// <01225B2F> ../common/vfx/vfx_common.h:648
// member functions: 6
// member variables: 5
// class size: 16
class CVfxVariableIndexRefArray {
	int32 m_indexAndRegisterOffsetStart; /* 0 4 */
	int32 m_indexAndRegisterOffsetCount; /* 4 4 */
	int32 m_pad16; /* 8 4 */
	int16 m_nFirstRenderStateElement; /* 12 2 */
	int16 m_nFirstConstantElement; /* 14 2 */
	/* ../common/vfx/vfx_common.h:658 */
	void Set(CVfxVariableIndexRefArray* , VfxVariableIndexDataArray_t& , const CVfxVariableIndexArray& );
	/* ../common/vfx/vfx_common.h:660 */
	int32 Count(const CVfxVariableIndexRefArray* );
	/* ../common/vfx/vfx_common.h:664 */
	const VfxVariableIndexData_t& Start(const CVfxVariableIndexRefArray* , const VfxVariableIndexDataArray_t& );
	void Set(class CVfxVariableIndexRefArray *, VfxVariableIndexDataArray_t &, const class CVfxVariableIndexArray  &); /* linkage=_ZN25CVfxVariableIndexRefArray3SetER27CUtlLeanVectorFixedGrowableI22VfxVariableIndexData_tLt2EiERK22CVfxVariableIndexArray */
	int32 Count(const class CVfxVariableIndexRefArray  *); /* linkage=_ZNK25CVfxVariableIndexRefArray5CountEv */
	const class VfxVariableIndexData_t  & Start(const class CVfxVariableIndexRefArray  *, const VfxVariableIndexDataArray_t  &); /* linkage=_ZNK25CVfxVariableIndexRefArray5StartERK27CUtlLeanVectorFixedGrowableI22VfxVariableIndexData_tLt2EiE */
};

// <0002ED75> ../../common/vfx/vfx_common.h:648
// member functions: 6
// member variables: 5
// class size: 16
class CVfxVariableIndexRefArray {
	int32 m_indexAndRegisterOffsetStart; /* 0 4 */
	int32 m_indexAndRegisterOffsetCount; /* 4 4 */
	int32 m_pad16; /* 8 4 */
	int16 m_nFirstRenderStateElement; /* 12 2 */
	int16 m_nFirstConstantElement; /* 14 2 */
	/* ../../common/vfx/vfx_common.h:658 */
	void Set(CVfxVariableIndexRefArray* , VfxVariableIndexDataArray_t& , const CVfxVariableIndexArray& );
	/* ../../common/vfx/vfx_common.h:660 */
	int32 Count(const CVfxVariableIndexRefArray* );
	/* ../../common/vfx/vfx_common.h:664 */
	const VfxVariableIndexData_t& Start(const CVfxVariableIndexRefArray* , const VfxVariableIndexDataArray_t& );
	void Set(class CVfxVariableIndexRefArray *, VfxVariableIndexDataArray_t &, const class CVfxVariableIndexArray  &); /* linkage=_ZN25CVfxVariableIndexRefArray3SetER27CUtlLeanVectorFixedGrowableI22VfxVariableIndexData_tLt2EiERK22CVfxVariableIndexArray */
	int32 Count(const class CVfxVariableIndexRefArray  *); /* linkage=_ZNK25CVfxVariableIndexRefArray5CountEv */
	const class VfxVariableIndexData_t  & Start(const class CVfxVariableIndexRefArray  *, const VfxVariableIndexDataArray_t  &); /* linkage=_ZNK25CVfxVariableIndexRefArray5StartERK27CUtlLeanVectorFixedGrowableI22VfxVariableIndexData_tLt2EiE */
};

// <0027E067> ../common/vfx/vfx_common.h:660
inline void CVfxVariableIndexRefArray::Count()
{
} /* size: 0 */

// <0027E041> ../common/vfx/vfx_common.h:664
inline void CVfxVariableIndexRefArray::Start(const VfxVariableIndexDataArray_t& dataArray)
{
} /* size: 0 */

// <01225C20> ../common/vfx/vfx_common.h:672
// member functions: 56
// member variables: 6
// class size: 96
class CVfxShaderAttribute {
	/* ../common/vfx/vfx_common.h:745 */
	union {
		bool m_bValue; /* 0 1 */
		int32 m_nValue; /* 0 4 */
		float32 m_flValue[4]; /* 0 16 */
		byte * m_pCompiledExpressionBuffer; /* 0 8 */
	};
	/* ../common/vfx/vfx_common.h:675 */
	void CVfxShaderAttribute(CVfxShaderAttribute* );
	/* ../common/vfx/vfx_common.h:684 */
	void CVfxShaderAttribute(CVfxShaderAttribute* , const CVfxShaderAttribute& );
	/* ../common/vfx/vfx_common.h:689 */
	void ~CVfxShaderAttribute(CVfxShaderAttribute* );
	/* ../common/vfx/vfx_common.h:694 */
	CVfxShaderAttribute& operator=(CVfxShaderAttribute* , const CVfxShaderAttribute& );
	/* ../common/vfx/vfx_common.h:704 */
	bool IsTheSameAs(const CVfxShaderAttribute* , const CVfxShaderAttribute& );
	/* ../common/vfx/vfx_common.h:705 */
	bool HasSameNameButDifferentValueAs(const CVfxShaderAttribute* , const CVfxShaderAttribute& );
	/* ../common/vfx/vfx_common.h:706 */
	void Serialize(const CVfxShaderAttribute* , CUtlBuffer& );
	/* ../common/vfx/vfx_common.h:707 */
	void Unserialize(CVfxShaderAttribute* , CUtlBuffer& );
	/* ../common/vfx/vfx_common.h:709 */
	void SetBoolLiteral(CVfxShaderAttribute* , bool);
	/* ../common/vfx/vfx_common.h:710 */
	void SetIntLiteral(CVfxShaderAttribute* , int32);
	/* ../common/vfx/vfx_common.h:711 */
	void SetFloatLiteral(CVfxShaderAttribute* , float);
	/* ../common/vfx/vfx_common.h:712 */
	void SetFloat2Literal(CVfxShaderAttribute* , float, float);
	/* ../common/vfx/vfx_common.h:713 */
	void SetFloat3Literal(CVfxShaderAttribute* , float, float, float);
	/* ../common/vfx/vfx_common.h:714 */
	void SetFloat4Literal(CVfxShaderAttribute* , float, float, float, float);
	/* ../common/vfx/vfx_common.h:715 */
	void SetExpressionBuffer(CVfxShaderAttribute* , VfxVariableType_t, uint32, const byte* );
	/* ../common/vfx/vfx_common.h:716 */
	void SetTextureVariableBinding(CVfxShaderAttribute* , VfxVariableType_t, int);
	/* ../common/vfx/vfx_common.h:718 */
	bool HasExpression(const CVfxShaderAttribute* );
	/* ../common/vfx/vfx_common.h:723 */
	VfxVariableType_t GetType(const CVfxShaderAttribute* );
	/* ../common/vfx/vfx_common.h:728 */
	uint32 GetExpressionBufferSize(const CVfxShaderAttribute* );
	/* ../common/vfx/vfx_common.h:729 */
	const byte* GetExpressionBuffer(const CVfxShaderAttribute* );
	/* ../common/vfx/vfx_common.h:730 */
	bool GetBoolValue(const CVfxShaderAttribute* );
	/* ../common/vfx/vfx_common.h:731 */
	int32 GetIntValue(const CVfxShaderAttribute* );
	/* ../common/vfx/vfx_common.h:732 */
	float32 GetFloatValue(const CVfxShaderAttribute* );
	/* ../common/vfx/vfx_common.h:733 */
	Vector2D GetFloat2Value(const CVfxShaderAttribute* );
	/* ../common/vfx/vfx_common.h:734 */
	Vector GetFloat3Value(const CVfxShaderAttribute* );
	/* ../common/vfx/vfx_common.h:735 */
	Vector4D GetFloat4Value(const CVfxShaderAttribute* );
	char m_szName[64]; /* 0 64 */
	CUtlStringToken m_nameToken; /* 64 4 */
	int32 m_nVariableBinding; /* 68 4 */
private:
	VfxVariableType_t m_type; /* 72 4 */
	uint32 m_nCompiledExpressionBufferSize; /* 76 4 */
	union {
		bool m_bValue; /* 80 1 */
		int32 m_nValue; /* 80 4 */
		float32 m_flValue[4]; /* 80 16 */
		byte * m_pCompiledExpressionBuffer; /* 80 8 */
	}; /* 80 16 */
	/* ../common/vfx/vfx_common.h:753 */
	void FreeExpressionBuffer(CVfxShaderAttribute* );
	/* ../common/vfx/vfx_common.h:762 */
	void InitFrom(CVfxShaderAttribute* , const CVfxShaderAttribute& );
	void CVfxShaderAttribute(class CVfxShaderAttribute *); /* linkage=_ZN19CVfxShaderAttributeC4Ev */
	void CVfxShaderAttribute(class CVfxShaderAttribute *, const class CVfxShaderAttribute  &); /* linkage=_ZN19CVfxShaderAttributeC4ERKS_ */
	void ~CVfxShaderAttribute(class CVfxShaderAttribute *); /* linkage=_ZN19CVfxShaderAttributeD4Ev */
	class CVfxShaderAttribute & operator=(class CVfxShaderAttribute *, const class CVfxShaderAttribute  &); /* linkage=_ZN19CVfxShaderAttributeaSERKS_ */
	/* <697e270> vfx/vfx_common.cpp:7779 */
	bool IsTheSameAs(const class CVfxShaderAttribute  *, const class CVfxShaderAttribute  &); /* linkage=_ZNK19CVfxShaderAttribute11IsTheSameAsERKS_ */
	/* <697e30c> vfx/vfx_common.cpp:7828 */
	bool HasSameNameButDifferentValueAs(const class CVfxShaderAttribute  *, const class CVfxShaderAttribute  &); /* linkage=_ZNK19CVfxShaderAttribute30HasSameNameButDifferentValueAsERKS_ */
	/* <697f226> vfx/vfx_common.cpp:7848 */
	void Serialize(const class CVfxShaderAttribute  *, class CUtlBuffer &); /* linkage=_ZNK19CVfxShaderAttribute9SerializeER10CUtlBuffer */
	void Unserialize(class CVfxShaderAttribute *, class CUtlBuffer &); /* linkage=_ZN19CVfxShaderAttribute11UnserializeER10CUtlBuffer */
	void SetBoolLiteral(class CVfxShaderAttribute *, bool); /* linkage=_ZN19CVfxShaderAttribute14SetBoolLiteralEb */
	void SetIntLiteral(class CVfxShaderAttribute *, int32); /* linkage=_ZN19CVfxShaderAttribute13SetIntLiteralEi */
	void SetFloatLiteral(class CVfxShaderAttribute *, float); /* linkage=_ZN19CVfxShaderAttribute15SetFloatLiteralEf */
	void SetFloat2Literal(class CVfxShaderAttribute *, float, float); /* linkage=_ZN19CVfxShaderAttribute16SetFloat2LiteralEff */
	void SetFloat3Literal(class CVfxShaderAttribute *, float, float, float); /* linkage=_ZN19CVfxShaderAttribute16SetFloat3LiteralEfff */
	void SetFloat4Literal(class CVfxShaderAttribute *, float, float, float, float); /* linkage=_ZN19CVfxShaderAttribute16SetFloat4LiteralEffff */
	void SetExpressionBuffer(class CVfxShaderAttribute *, enum VfxVariableType_t, uint32, const byte  *); /* linkage=_ZN19CVfxShaderAttribute19SetExpressionBufferE17VfxVariableType_tjPKh */
	void SetTextureVariableBinding(class CVfxShaderAttribute *, enum VfxVariableType_t, int); /* linkage=_ZN19CVfxShaderAttribute25SetTextureVariableBindingE17VfxVariableType_ti */
	bool HasExpression(const class CVfxShaderAttribute  *); /* linkage=_ZNK19CVfxShaderAttribute13HasExpressionEv */
	enum VfxVariableType_t GetType(const class CVfxShaderAttribute  *); /* linkage=_ZNK19CVfxShaderAttribute7GetTypeEv */
	uint32 GetExpressionBufferSize(const class CVfxShaderAttribute  *); /* linkage=_ZNK19CVfxShaderAttribute23GetExpressionBufferSizeEv */
	const byte  * GetExpressionBuffer(const class CVfxShaderAttribute  *); /* linkage=_ZNK19CVfxShaderAttribute19GetExpressionBufferEv */
	bool GetBoolValue(const class CVfxShaderAttribute  *); /* linkage=_ZNK19CVfxShaderAttribute12GetBoolValueEv */
	int32 GetIntValue(const class CVfxShaderAttribute  *); /* linkage=_ZNK19CVfxShaderAttribute11GetIntValueEv */
	float32 GetFloatValue(const class CVfxShaderAttribute  *); /* linkage=_ZNK19CVfxShaderAttribute13GetFloatValueEv */
	class Vector2D GetFloat2Value(const class CVfxShaderAttribute  *); /* linkage=_ZNK19CVfxShaderAttribute14GetFloat2ValueEv */
	class Vector GetFloat3Value(const class CVfxShaderAttribute  *); /* linkage=_ZNK19CVfxShaderAttribute14GetFloat3ValueEv */
	class Vector4D GetFloat4Value(const class CVfxShaderAttribute  *); /* linkage=_ZNK19CVfxShaderAttribute14GetFloat4ValueEv */
	void FreeExpressionBuffer(class CVfxShaderAttribute *); /* linkage=_ZN19CVfxShaderAttribute20FreeExpressionBufferEv */
	void InitFrom(class CVfxShaderAttribute *, const class CVfxShaderAttribute  &); /* linkage=_ZN19CVfxShaderAttribute8InitFromERKS_ */
};

// <0002EE64> ../../common/vfx/vfx_common.h:672
// member functions: 56
// member variables: 6
// class size: 96
class CVfxShaderAttribute {
	/* ../../common/vfx/vfx_common.h:745 */
	union {
		bool m_bValue; /* 0 1 */
		int32 m_nValue; /* 0 4 */
		float32 m_flValue[4]; /* 0 16 */
		byte * m_pCompiledExpressionBuffer; /* 0 8 */
	};
	/* ../../common/vfx/vfx_common.h:675 */
	void CVfxShaderAttribute(CVfxShaderAttribute* );
	/* ../../common/vfx/vfx_common.h:684 */
	void CVfxShaderAttribute(CVfxShaderAttribute* , const CVfxShaderAttribute& );
	/* ../../common/vfx/vfx_common.h:689 */
	void ~CVfxShaderAttribute(CVfxShaderAttribute* );
	/* ../../common/vfx/vfx_common.h:694 */
	CVfxShaderAttribute& operator=(CVfxShaderAttribute* , const CVfxShaderAttribute& );
	/* ../../common/vfx/vfx_common.h:704 */
	bool IsTheSameAs(const CVfxShaderAttribute* , const CVfxShaderAttribute& );
	/* ../../common/vfx/vfx_common.h:705 */
	bool HasSameNameButDifferentValueAs(const CVfxShaderAttribute* , const CVfxShaderAttribute& );
	/* ../../common/vfx/vfx_common.h:706 */
	void Serialize(const CVfxShaderAttribute* , CUtlBuffer& );
	/* ../../common/vfx/vfx_common.h:707 */
	void Unserialize(CVfxShaderAttribute* , CUtlBuffer& );
	/* ../../common/vfx/vfx_common.h:709 */
	void SetBoolLiteral(CVfxShaderAttribute* , bool);
	/* ../../common/vfx/vfx_common.h:710 */
	void SetIntLiteral(CVfxShaderAttribute* , int32);
	/* ../../common/vfx/vfx_common.h:711 */
	void SetFloatLiteral(CVfxShaderAttribute* , float);
	/* ../../common/vfx/vfx_common.h:712 */
	void SetFloat2Literal(CVfxShaderAttribute* , float, float);
	/* ../../common/vfx/vfx_common.h:713 */
	void SetFloat3Literal(CVfxShaderAttribute* , float, float, float);
	/* ../../common/vfx/vfx_common.h:714 */
	void SetFloat4Literal(CVfxShaderAttribute* , float, float, float, float);
	/* ../../common/vfx/vfx_common.h:715 */
	void SetExpressionBuffer(CVfxShaderAttribute* , VfxVariableType_t, uint32, const byte* );
	/* ../../common/vfx/vfx_common.h:716 */
	void SetTextureVariableBinding(CVfxShaderAttribute* , VfxVariableType_t, int);
	/* ../../common/vfx/vfx_common.h:718 */
	bool HasExpression(const CVfxShaderAttribute* );
	/* ../../common/vfx/vfx_common.h:723 */
	VfxVariableType_t GetType(const CVfxShaderAttribute* );
	/* ../../common/vfx/vfx_common.h:728 */
	uint32 GetExpressionBufferSize(const CVfxShaderAttribute* );
	/* ../../common/vfx/vfx_common.h:729 */
	const byte* GetExpressionBuffer(const CVfxShaderAttribute* );
	/* ../../common/vfx/vfx_common.h:730 */
	bool GetBoolValue(const CVfxShaderAttribute* );
	/* ../../common/vfx/vfx_common.h:731 */
	int32 GetIntValue(const CVfxShaderAttribute* );
	/* ../../common/vfx/vfx_common.h:732 */
	float32 GetFloatValue(const CVfxShaderAttribute* );
	/* ../../common/vfx/vfx_common.h:733 */
	Vector2D GetFloat2Value(const CVfxShaderAttribute* );
	/* ../../common/vfx/vfx_common.h:734 */
	Vector GetFloat3Value(const CVfxShaderAttribute* );
	/* ../../common/vfx/vfx_common.h:735 */
	Vector4D GetFloat4Value(const CVfxShaderAttribute* );
	char m_szName[64]; /* 0 64 */
	CUtlStringToken m_nameToken; /* 64 4 */
	int32 m_nVariableBinding; /* 68 4 */
private:
	VfxVariableType_t m_type; /* 72 4 */
	uint32 m_nCompiledExpressionBufferSize; /* 76 4 */
	union {
		bool m_bValue; /* 80 1 */
		int32 m_nValue; /* 80 4 */
		float32 m_flValue[4]; /* 80 16 */
		byte * m_pCompiledExpressionBuffer; /* 80 8 */
	}; /* 80 16 */
	/* ../../common/vfx/vfx_common.h:753 */
	void FreeExpressionBuffer(CVfxShaderAttribute* );
	/* ../../common/vfx/vfx_common.h:762 */
	void InitFrom(CVfxShaderAttribute* , const CVfxShaderAttribute& );
	void CVfxShaderAttribute(class CVfxShaderAttribute *); /* linkage=_ZN19CVfxShaderAttributeC4Ev */
	void CVfxShaderAttribute(class CVfxShaderAttribute *, const class CVfxShaderAttribute  &); /* linkage=_ZN19CVfxShaderAttributeC4ERKS_ */
	void ~CVfxShaderAttribute(class CVfxShaderAttribute *); /* linkage=_ZN19CVfxShaderAttributeD4Ev */
	class CVfxShaderAttribute & operator=(class CVfxShaderAttribute *, const class CVfxShaderAttribute  &); /* linkage=_ZN19CVfxShaderAttributeaSERKS_ */
	/* <697e270> vfx/vfx_common.cpp:7779 */
	bool IsTheSameAs(const class CVfxShaderAttribute  *, const class CVfxShaderAttribute  &); /* linkage=_ZNK19CVfxShaderAttribute11IsTheSameAsERKS_ */
	/* <697e30c> vfx/vfx_common.cpp:7828 */
	bool HasSameNameButDifferentValueAs(const class CVfxShaderAttribute  *, const class CVfxShaderAttribute  &); /* linkage=_ZNK19CVfxShaderAttribute30HasSameNameButDifferentValueAsERKS_ */
	/* <697f226> vfx/vfx_common.cpp:7848 */
	void Serialize(const class CVfxShaderAttribute  *, class CUtlBuffer &); /* linkage=_ZNK19CVfxShaderAttribute9SerializeER10CUtlBuffer */
	void Unserialize(class CVfxShaderAttribute *, class CUtlBuffer &); /* linkage=_ZN19CVfxShaderAttribute11UnserializeER10CUtlBuffer */
	void SetBoolLiteral(class CVfxShaderAttribute *, bool); /* linkage=_ZN19CVfxShaderAttribute14SetBoolLiteralEb */
	void SetIntLiteral(class CVfxShaderAttribute *, int32); /* linkage=_ZN19CVfxShaderAttribute13SetIntLiteralEi */
	void SetFloatLiteral(class CVfxShaderAttribute *, float); /* linkage=_ZN19CVfxShaderAttribute15SetFloatLiteralEf */
	void SetFloat2Literal(class CVfxShaderAttribute *, float, float); /* linkage=_ZN19CVfxShaderAttribute16SetFloat2LiteralEff */
	void SetFloat3Literal(class CVfxShaderAttribute *, float, float, float); /* linkage=_ZN19CVfxShaderAttribute16SetFloat3LiteralEfff */
	void SetFloat4Literal(class CVfxShaderAttribute *, float, float, float, float); /* linkage=_ZN19CVfxShaderAttribute16SetFloat4LiteralEffff */
	void SetExpressionBuffer(class CVfxShaderAttribute *, enum VfxVariableType_t, uint32, const byte  *); /* linkage=_ZN19CVfxShaderAttribute19SetExpressionBufferE17VfxVariableType_tjPKh */
	void SetTextureVariableBinding(class CVfxShaderAttribute *, enum VfxVariableType_t, int); /* linkage=_ZN19CVfxShaderAttribute25SetTextureVariableBindingE17VfxVariableType_ti */
	bool HasExpression(const class CVfxShaderAttribute  *); /* linkage=_ZNK19CVfxShaderAttribute13HasExpressionEv */
	enum VfxVariableType_t GetType(const class CVfxShaderAttribute  *); /* linkage=_ZNK19CVfxShaderAttribute7GetTypeEv */
	uint32 GetExpressionBufferSize(const class CVfxShaderAttribute  *); /* linkage=_ZNK19CVfxShaderAttribute23GetExpressionBufferSizeEv */
	const byte  * GetExpressionBuffer(const class CVfxShaderAttribute  *); /* linkage=_ZNK19CVfxShaderAttribute19GetExpressionBufferEv */
	bool GetBoolValue(const class CVfxShaderAttribute  *); /* linkage=_ZNK19CVfxShaderAttribute12GetBoolValueEv */
	int32 GetIntValue(const class CVfxShaderAttribute  *); /* linkage=_ZNK19CVfxShaderAttribute11GetIntValueEv */
	float32 GetFloatValue(const class CVfxShaderAttribute  *); /* linkage=_ZNK19CVfxShaderAttribute13GetFloatValueEv */
	class Vector2D GetFloat2Value(const class CVfxShaderAttribute  *); /* linkage=_ZNK19CVfxShaderAttribute14GetFloat2ValueEv */
	class Vector GetFloat3Value(const class CVfxShaderAttribute  *); /* linkage=_ZNK19CVfxShaderAttribute14GetFloat3ValueEv */
	class Vector4D GetFloat4Value(const class CVfxShaderAttribute  *); /* linkage=_ZNK19CVfxShaderAttribute14GetFloat4ValueEv */
	void FreeExpressionBuffer(class CVfxShaderAttribute *); /* linkage=_ZN19CVfxShaderAttribute20FreeExpressionBufferEv */
	void InitFrom(class CVfxShaderAttribute *, const class CVfxShaderAttribute  &); /* linkage=_ZN19CVfxShaderAttribute8InitFromERKS_ */
};

// <06971244> ../common/vfx/vfx_common.h:675
void CVfxShaderAttribute::CVfxShaderAttribute()
{
} /* size: 0 */

// <0697122B> ../common/vfx/vfx_common.h:675
inline void CVfxShaderAttribute::CVfxShaderAttribute()
{
} /* size: 0 */

// <0697120F> ../common/vfx/vfx_common.h:684
void CVfxShaderAttribute::CVfxShaderAttribute(const CVfxShaderAttribute& other)
{
} /* size: 0 */

// <069711E9> ../common/vfx/vfx_common.h:684
inline void CVfxShaderAttribute::CVfxShaderAttribute(const CVfxShaderAttribute& other)
{
} /* size: 0 */

// <069711D2> ../common/vfx/vfx_common.h:689
void CVfxShaderAttribute::~CVfxShaderAttribute()
{
} /* size: 0 */

// <069711B9> ../common/vfx/vfx_common.h:689
inline void CVfxShaderAttribute::~CVfxShaderAttribute()
{
} /* size: 0 */

// <069711A0> ../common/vfx/vfx_common.h:718
inline void CVfxShaderAttribute::HasExpression()
{
} /* size: 0 */

// <001A126B> ../common/vfx/vfx_common.h:723
inline void CVfxShaderAttribute::GetType()
{
} /* size: 0 */

// <06971187> ../common/vfx/vfx_common.h:728
inline void CVfxShaderAttribute::GetExpressionBufferSize()
{
} /* size: 0 */

// <0697116E> ../common/vfx/vfx_common.h:729
inline void CVfxShaderAttribute::GetExpressionBuffer()
{
} /* size: 0 */

// <0024F4D9> ../../common/vfx/vfx_common.h:730
inline void CVfxShaderAttribute::GetBoolValue()
{
} /* size: 0 */

// <001A1220> ../common/vfx/vfx_common.h:731
inline void CVfxShaderAttribute::GetIntValue()
{
} /* size: 0 */

// <001A1207> ../common/vfx/vfx_common.h:732
inline void CVfxShaderAttribute::GetFloatValue()
{
} /* size: 0 */

// <001A11EE> ../common/vfx/vfx_common.h:733
inline void CVfxShaderAttribute::GetFloat2Value()
{
} /* size: 0 */

// <001A11D5> ../common/vfx/vfx_common.h:734
inline void CVfxShaderAttribute::GetFloat3Value()
{
} /* size: 0 */

// <001A11BC> ../common/vfx/vfx_common.h:735
inline void CVfxShaderAttribute::GetFloat4Value()
{
} /* size: 0 */

// <06971155> ../common/vfx/vfx_common.h:753
inline void CVfxShaderAttribute::FreeExpressionBuffer()
{
} /* size: 0 */

// <06971120> ../common/vfx/vfx_common.h:762
// variable: 1
inline void CVfxShaderAttribute::InitFrom(const CVfxShaderAttribute& other)
{
	{
		byte* pTmp; // 767
	}
} /* size: 0 */

// <012260F6> ../common/vfx/vfx_common.h:787
// member variables: 2
// struct size: 2
struct ConstantBufferBindInfo_t {
	/* ../common/vfx/vfx_common.h:791 */
	union {
		uint8 nStartRegister; /* 0 1 */
		uint8 nDescriptorSet; /* 0 1 */
	};
	uint8 nBufferSlot; /* 0 1 */
	union {
		uint8 nStartRegister; /* 1 1 */
		uint8 nDescriptorSet; /* 1 1 */
	}; /* 1 1 */
};

// <0002F331> ../../common/vfx/vfx_common.h:787
// member variables: 2
// struct size: 2
struct ConstantBufferBindInfo_t {
	/* ../../common/vfx/vfx_common.h:791 */
	union {
		uint8 nStartRegister; /* 0 1 */
		uint8 nDescriptorSet; /* 0 1 */
	};
	uint8 nBufferSlot; /* 0 1 */
	union {
		uint8 nStartRegister; /* 1 1 */
		uint8 nDescriptorSet; /* 1 1 */
	}; /* 1 1 */
};

// <001A1197> ../common/vfx/vfx_common.h:797
inline bool VfxIsConstantBufferBindInfoValid(const ConstantBufferBindInfo_t& info)
{
} /* size: 0 */

// <01231713> ../common/vfx/vfx_common.h:813
// member functions: 46
// member variables: 20
// class size: 440
class CVfxStaticComboData {
	uint32 m_nConstantBufferSize:24; /* 0: 0 4 */
	uint32 m_bIsReadyForReuse:1; /* 0:24 4 */
	uint32 m_bConstantBufferCanBeStatic:1; /* 0:25 4 */
	uint32 m_bIsFullyLoaded:1; /* 0:26 4 */
	uint32 m_bGlobalsInBufferDeviceAddress:1; /* 0:27 4 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_dynamicComboIDs; /* 8 32 */
	CUtlVector<CVfxVariableIndexArray, CUtlMemory<CVfxVariableIndexArray, int> > m_variablesToSetForEachDynamicComboLoose; /* 40 32 */
	VfxVariableIndexDataArray_t m_variablesToSetForEachDynamicComboCompactData __attribute__((__aligned__(8))); /* 72 16 */
	CUtlVector<CVfxVariableIndexRefArray, CUtlMemory<CVfxVariableIndexRefArray, int> > m_variablesToSetForEachDynamicComboCompact; /* 88 32 */
	CUtlVector<ConstantBufferBindInfo_t, CUtlMemory<ConstantBufferBindInfo_t, int> > m_constantBufferBindingArray; /* 120 32 */
	CVfxVariableIndexArray m_variablesUsedInStaticCombo __attribute__((__aligned__(8))); /* 152 24 */
	CUtlVector<RsRasterizerStateHandle_t__*, CUtlMemory<RsRasterizerStateHandle_t__*, int> > m_rasterizerStateHandleArray; /* 176 32 */
	CUtlVector<RsDepthStencilStateHandle_t__*, CUtlMemory<RsDepthStencilStateHandle_t__*, int> > m_depthStencilStateHandleArray; /* 208 32 */
	CUtlVector<RsBlendStateHandle_t__*, CUtlMemory<RsBlendStateHandle_t__*, int> > m_blendStateHandleArray; /* 240 32 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_shaderHandleIndexArray; /* 272 32 */
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_inputPatchSizeArray; /* 304 32 */
	CUtlVector<int, CUtlMemory<int, int> > m_vsInputSignatureIndexArray; /* 336 32 */
	CUtlVector<RenderShaderHandle_t__*, CUtlMemory<RenderShaderHandle_t__*, int> > m_shaderHandleArray; /* 368 32 */
	CUtlVector<CVfxShaderAttribute, CUtlMemory<CVfxShaderAttribute, int> > m_attributes; /* 400 32 */
private:
	CInterlockedInt m_refCount __attribute__((__aligned__(4))); /* 432 4 */
	/* ../common/vfx/vfx_common.h:852 */
	void Reset(CVfxStaticComboData* );
	/* ../common/vfx/vfx_common.h:854 */
	CVfxStaticComboData& Append(CVfxStaticComboData* , const CVfxStaticComboData& , const CUtlVector<int, CUtlMemory<int, int> >& , const CUtlVector<int, CUtlMemory<int, int> >& , const CVfxProgramData& , VfxProgram_t);
	/* ../common/vfx/vfx_common.h:858 */
	void CVfxStaticComboData(CVfxStaticComboData* );
	/* ../common/vfx/vfx_common.h:859 */
	void ~CVfxStaticComboData(CVfxStaticComboData* );
	/* ../common/vfx/vfx_common.h:861 */
	int GetRefCount(const CVfxStaticComboData* );
	/* ../common/vfx/vfx_common.h:862 */
	void AddRef(CVfxStaticComboData* );
	/* ../common/vfx/vfx_common.h:863 */
	void Release(CVfxStaticComboData* );
	/* ../common/vfx/vfx_common.h:865 */
	void ComputeVariablesUsedInStaticCombo(CVfxStaticComboData* , const CVfxProgramData* );
	/* ../common/vfx/vfx_common.h:866 */
	void Serialize(const CVfxStaticComboData* , CUtlBuffer& , const CVfxByteCodeManager* , VfxProgram_t, uint64);
	/* ../common/vfx/vfx_common.h:869 */
	shared_ptr<CVfxStaticComboData::DecompressedComboData_t> Decompress(VfxProgram_t, CUtlBuffer& );
	/* ../common/vfx/vfx_common.h:873 */
	void Unserialize(CVfxStaticComboData* , const shared_ptr<CVfxStaticComboData::DecompressedComboData_t>& , const CVfxProgramData* , VfxProgram_t, uint64, IRuntimeShaderCreateCallbacks* , ICompiletimeShaderCreateCallbacks* );
	/* ../common/vfx/vfx_common.h:877 */
	bool LoadStaticComboData(CVfxStaticComboData* , uint64, CVfx* , CVfxProgramData& , VfxProgram_t, IRuntimeShaderCreateCallbacks* , ICompiletimeShaderCreateCallbacks* );
	/* ../common/vfx/vfx_common.h:880 */
	void AllocateShaderAndRenderStateHandles(CVfxStaticComboData* , VfxProgram_t);
	/* ../common/vfx/vfx_common.h:881 */
	int AddAttribute(CVfxStaticComboData* , const CVfxShaderAttribute& , bool* );
	/* ../common/vfx/vfx_common.h:882 */
	void CopyFrom(CVfxStaticComboData* , const CVfxStaticComboData& );
	/* ../common/vfx/vfx_common.h:883 */
	uint32 FindDynamicComboArrayIndex(const CVfxStaticComboData* , uint64);
	/* ../common/vfx/vfx_common.h:884 */
	void CompactDynamicComboArrays(CVfxStaticComboData* );
	/* ../common/vfx/vfx_common.h:886 */
	bool AreDynamicComboIDsCompact(const CVfxStaticComboData* );
	/* ../common/vfx/vfx_common.h:890 */
	bool IsDynamicComboVariableDataCompact(const CVfxStaticComboData* );
	/* ../common/vfx/vfx_common.h:894 */
	int GetDynamicComboCount(const CVfxStaticComboData* );
	/* ../common/vfx/vfx_common.h:901 */
	bool IsLooseDynamicComboSkipped(const CVfxStaticComboData* , int);
	/* ../common/vfx/vfx_common.h:906 */
	bool IsDynamicComboSkipped(const CVfxStaticComboData* , int);
	/* ../common/vfx/vfx_common.h:921 */
	int GetDynamicComboVariablesToSet(const CVfxStaticComboData* , int, const VfxVariableIndexData_t** , int* , int* );
	void Reset(class CVfxStaticComboData *); /* linkage=_ZN19CVfxStaticComboData5ResetEv */
	class CVfxStaticComboData & Append(class CVfxStaticComboData *, const class CVfxStaticComboData  &, const class CUtlVector<int, CUtlMemory<int, int> >  &, const class CUtlVector<int, CUtlMemory<int, int> >  &, const class CVfxProgramData  &, enum VfxProgram_t); /* linkage=_ZN19CVfxStaticComboData6AppendERKS_RK10CUtlVectorIi10CUtlMemoryIiiEES7_RK15CVfxProgramData12VfxProgram_t */
	void CVfxStaticComboData(class CVfxStaticComboData *); /* linkage=_ZN19CVfxStaticComboDataC4Ev */
	void ~CVfxStaticComboData(class CVfxStaticComboData *); /* linkage=_ZN19CVfxStaticComboDataD4Ev */
	int GetRefCount(const class CVfxStaticComboData  *); /* linkage=_ZNK19CVfxStaticComboData11GetRefCountEv */
	void AddRef(class CVfxStaticComboData *); /* linkage=_ZN19CVfxStaticComboData6AddRefEv */
	void Release(class CVfxStaticComboData *); /* linkage=_ZN19CVfxStaticComboData7ReleaseEv */
	void ComputeVariablesUsedInStaticCombo(class CVfxStaticComboData *, const class CVfxProgramData  *); /* linkage=_ZN19CVfxStaticComboData33ComputeVariablesUsedInStaticComboEPK15CVfxProgramData */
	void Serialize(const class CVfxStaticComboData  *, class CUtlBuffer &, const class CVfxByteCodeManager  *, enum VfxProgram_t, uint64); /* linkage=_ZNK19CVfxStaticComboData9SerializeER10CUtlBufferPK19CVfxByteCodeManager12VfxProgram_ty */
	class shared_ptr<CVfxStaticComboData::DecompressedComboData_t> Decompress(enum VfxProgram_t, class CUtlBuffer &); /* linkage=_ZN19CVfxStaticComboData10DecompressE12VfxProgram_tR10CUtlBuffer */
	void Unserialize(class CVfxStaticComboData *, const class shared_ptr<CVfxStaticComboData::DecompressedComboData_t>  &, const class CVfxProgramData  *, enum VfxProgram_t, uint64, class IRuntimeShaderCreateCallbacks *, class ICompiletimeShaderCreateCallbacks *); /* linkage=_ZN19CVfxStaticComboData11UnserializeERKSt10shared_ptrINS_23DecompressedComboData_tEEPK15CVfxProgramData12VfxProgram_tyP29IRuntimeShaderCreateCallbacksP33ICompiletimeShaderCreateCallbacks */
	/* <6983e08> vfx/vfx_common.cpp:3117 */
	bool LoadStaticComboData(class CVfxStaticComboData *, uint64, class CVfx *, class CVfxProgramData &, enum VfxProgram_t, class IRuntimeShaderCreateCallbacks *, class ICompiletimeShaderCreateCallbacks *); /* linkage=_ZN19CVfxStaticComboData19LoadStaticComboDataEyP4CVfxR15CVfxProgramData12VfxProgram_tP29IRuntimeShaderCreateCallbacksP33ICompiletimeShaderCreateCallbacks */
	void AllocateShaderAndRenderStateHandles(class CVfxStaticComboData *, enum VfxProgram_t); /* linkage=_ZN19CVfxStaticComboData35AllocateShaderAndRenderStateHandlesE12VfxProgram_t */
	int AddAttribute(class CVfxStaticComboData *, const class CVfxShaderAttribute  &, bool *); /* linkage=_ZN19CVfxStaticComboData12AddAttributeERK19CVfxShaderAttributePb */
	void CopyFrom(class CVfxStaticComboData *, const class CVfxStaticComboData  &); /* linkage=_ZN19CVfxStaticComboData8CopyFromERKS_ */
	uint32 FindDynamicComboArrayIndex(const class CVfxStaticComboData  *, uint64); /* linkage=_ZNK19CVfxStaticComboData26FindDynamicComboArrayIndexEy */
	void CompactDynamicComboArrays(class CVfxStaticComboData *); /* linkage=_ZN19CVfxStaticComboData25CompactDynamicComboArraysEv */
	bool AreDynamicComboIDsCompact(const class CVfxStaticComboData  *); /* linkage=_ZNK19CVfxStaticComboData25AreDynamicComboIDsCompactEv */
	bool IsDynamicComboVariableDataCompact(const class CVfxStaticComboData  *); /* linkage=_ZNK19CVfxStaticComboData33IsDynamicComboVariableDataCompactEv */
	int GetDynamicComboCount(const class CVfxStaticComboData  *); /* linkage=_ZNK19CVfxStaticComboData20GetDynamicComboCountEv */
	bool IsLooseDynamicComboSkipped(const class CVfxStaticComboData  *, int); /* linkage=_ZNK19CVfxStaticComboData26IsLooseDynamicComboSkippedEi */
	bool IsDynamicComboSkipped(const class CVfxStaticComboData  *, int); /* linkage=_ZNK19CVfxStaticComboData21IsDynamicComboSkippedEi */
	int GetDynamicComboVariablesToSet(const class CVfxStaticComboData  *, int, const class VfxVariableIndexData_t  * *, int *, int *); /* linkage=_ZNK19CVfxStaticComboData29GetDynamicComboVariablesToSetEiPPK22VfxVariableIndexData_tPiS4_ */
} __attribute__((__aligned__(8)));

// <01546251> ../common/vfx/vfx_common.h:813
// member functions: 48
// member variables: 20
// class size: 440
class CVfxStaticComboData {
	uint32 m_nConstantBufferSize:24; /* 0: 0 4 */
	uint32 m_bIsReadyForReuse:1; /* 0:24 4 */
	uint32 m_bConstantBufferCanBeStatic:1; /* 0:25 4 */
	uint32 m_bIsFullyLoaded:1; /* 0:26 4 */
	uint32 m_bGlobalsInBufferDeviceAddress:1; /* 0:27 4 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_dynamicComboIDs; /* 8 32 */
	CUtlVector<CVfxVariableIndexArray, CUtlMemory<CVfxVariableIndexArray, int> > m_variablesToSetForEachDynamicComboLoose; /* 40 32 */
	VfxVariableIndexDataArray_t m_variablesToSetForEachDynamicComboCompactData __attribute__((__aligned__(8))); /* 72 16 */
	CUtlVector<CVfxVariableIndexRefArray, CUtlMemory<CVfxVariableIndexRefArray, int> > m_variablesToSetForEachDynamicComboCompact; /* 88 32 */
	CUtlVector<ConstantBufferBindInfo_t, CUtlMemory<ConstantBufferBindInfo_t, int> > m_constantBufferBindingArray; /* 120 32 */
	CVfxVariableIndexArray m_variablesUsedInStaticCombo __attribute__((__aligned__(8))); /* 152 24 */
	CUtlVector<RsRasterizerStateHandle_t__*, CUtlMemory<RsRasterizerStateHandle_t__*, int> > m_rasterizerStateHandleArray; /* 176 32 */
	CUtlVector<RsDepthStencilStateHandle_t__*, CUtlMemory<RsDepthStencilStateHandle_t__*, int> > m_depthStencilStateHandleArray; /* 208 32 */
	CUtlVector<RsBlendStateHandle_t__*, CUtlMemory<RsBlendStateHandle_t__*, int> > m_blendStateHandleArray; /* 240 32 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_shaderHandleIndexArray; /* 272 32 */
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_inputPatchSizeArray; /* 304 32 */
	CUtlVector<int, CUtlMemory<int, int> > m_vsInputSignatureIndexArray; /* 336 32 */
	CUtlVector<RenderShaderHandle_t__*, CUtlMemory<RenderShaderHandle_t__*, int> > m_shaderHandleArray; /* 368 32 */
	CUtlVector<CVfxShaderAttribute, CUtlMemory<CVfxShaderAttribute, int> > m_attributes; /* 400 32 */
private:
	CInterlockedInt m_refCount __attribute__((__aligned__(4))); /* 432 4 */
	/* ../common/vfx/vfx_common.h:852 */
	void Reset(CVfxStaticComboData* );
	/* ../common/vfx/vfx_common.h:854 */
	CVfxStaticComboData& Append(CVfxStaticComboData* , const CVfxStaticComboData& , const CUtlVector<int, CUtlMemory<int, int> >& , const CUtlVector<int, CUtlMemory<int, int> >& , const CVfxProgramData& , VfxProgram_t);
	/* ../common/vfx/vfx_common.h:858 */
	void CVfxStaticComboData(CVfxStaticComboData* );
	/* ../common/vfx/vfx_common.h:859 */
	void ~CVfxStaticComboData(CVfxStaticComboData* );
	/* ../common/vfx/vfx_common.h:861 */
	int GetRefCount(const CVfxStaticComboData* );
	/* ../common/vfx/vfx_common.h:862 */
	void AddRef(CVfxStaticComboData* );
	/* ../common/vfx/vfx_common.h:863 */
	void Release(CVfxStaticComboData* );
	/* ../common/vfx/vfx_common.h:865 */
	void ComputeVariablesUsedInStaticCombo(CVfxStaticComboData* , const CVfxProgramData* );
	/* ../common/vfx/vfx_common.h:866 */
	void Serialize(const CVfxStaticComboData* , CUtlBuffer& , const CVfxByteCodeManager* , VfxProgram_t, uint64);
	/* ../common/vfx/vfx_common.h:869 */
	shared_ptr<CVfxStaticComboData::DecompressedComboData_t> Decompress(VfxProgram_t, CUtlBuffer& );
	/* ../common/vfx/vfx_common.h:873 */
	void Unserialize(CVfxStaticComboData* , const shared_ptr<CVfxStaticComboData::DecompressedComboData_t>& , const CVfxProgramData* , VfxProgram_t, uint64, IRuntimeShaderCreateCallbacks* , ICompiletimeShaderCreateCallbacks* );
	/* ../common/vfx/vfx_common.h:877 */
	bool LoadStaticComboData(CVfxStaticComboData* , uint64, CVfx* , CVfxProgramData& , VfxProgram_t, IRuntimeShaderCreateCallbacks* , ICompiletimeShaderCreateCallbacks* );
	/* ../common/vfx/vfx_common.h:880 */
	void AllocateShaderAndRenderStateHandles(CVfxStaticComboData* , VfxProgram_t);
	/* ../common/vfx/vfx_common.h:881 */
	int AddAttribute(CVfxStaticComboData* , const CVfxShaderAttribute& , bool* );
	/* ../common/vfx/vfx_common.h:882 */
	void CopyFrom(CVfxStaticComboData* , const CVfxStaticComboData& );
	/* ../common/vfx/vfx_common.h:883 */
	uint32 FindDynamicComboArrayIndex(const CVfxStaticComboData* , uint64);
	/* ../common/vfx/vfx_common.h:884 */
	void CompactDynamicComboArrays(CVfxStaticComboData* );
	/* ../common/vfx/vfx_common.h:886 */
	bool AreDynamicComboIDsCompact(const CVfxStaticComboData* );
	/* ../common/vfx/vfx_common.h:890 */
	bool IsDynamicComboVariableDataCompact(const CVfxStaticComboData* );
	/* ../common/vfx/vfx_common.h:894 */
	int GetDynamicComboCount(const CVfxStaticComboData* );
	/* ../common/vfx/vfx_common.h:901 */
	bool IsLooseDynamicComboSkipped(const CVfxStaticComboData* , int);
	/* ../common/vfx/vfx_common.h:906 */
	bool IsDynamicComboSkipped(const CVfxStaticComboData* , int);
	/* ../common/vfx/vfx_common.h:921 */
	int GetDynamicComboVariablesToSet(const CVfxStaticComboData* , int, const VfxVariableIndexData_t** , int* , int* );
	/* vfx/vfx_common.cpp:2517 */
	struct DecompressedComboData_t {
		CUtlBuffer m_decompressedData; /* 0 80 */
		void ~DecompressedComboData_t(DecompressedComboData_t* );
		void DecompressedComboData_t(DecompressedComboData_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	void Reset(class CVfxStaticComboData *); /* linkage=_ZN19CVfxStaticComboData5ResetEv */
	class CVfxStaticComboData & Append(class CVfxStaticComboData *, const class CVfxStaticComboData  &, const class CUtlVector<int, CUtlMemory<int, int> >  &, const class CUtlVector<int, CUtlMemory<int, int> >  &, const class CVfxProgramData  &, enum VfxProgram_t); /* linkage=_ZN19CVfxStaticComboData6AppendERKS_RK10CUtlVectorIi10CUtlMemoryIiiEES7_RK15CVfxProgramData12VfxProgram_t */
	void CVfxStaticComboData(class CVfxStaticComboData *); /* linkage=_ZN19CVfxStaticComboDataC4Ev */
	void ~CVfxStaticComboData(class CVfxStaticComboData *); /* linkage=_ZN19CVfxStaticComboDataD4Ev */
	int GetRefCount(const class CVfxStaticComboData  *); /* linkage=_ZNK19CVfxStaticComboData11GetRefCountEv */
	void AddRef(class CVfxStaticComboData *); /* linkage=_ZN19CVfxStaticComboData6AddRefEv */
	void Release(class CVfxStaticComboData *); /* linkage=_ZN19CVfxStaticComboData7ReleaseEv */
	void ComputeVariablesUsedInStaticCombo(class CVfxStaticComboData *, const class CVfxProgramData  *); /* linkage=_ZN19CVfxStaticComboData33ComputeVariablesUsedInStaticComboEPK15CVfxProgramData */
	void Serialize(const class CVfxStaticComboData  *, class CUtlBuffer &, const class CVfxByteCodeManager  *, enum VfxProgram_t, uint64); /* linkage=_ZNK19CVfxStaticComboData9SerializeER10CUtlBufferPK19CVfxByteCodeManager12VfxProgram_ty */
	class shared_ptr<CVfxStaticComboData::DecompressedComboData_t> Decompress(enum VfxProgram_t, class CUtlBuffer &); /* linkage=_ZN19CVfxStaticComboData10DecompressE12VfxProgram_tR10CUtlBuffer */
	void Unserialize(class CVfxStaticComboData *, const class shared_ptr<CVfxStaticComboData::DecompressedComboData_t>  &, const class CVfxProgramData  *, enum VfxProgram_t, uint64, class IRuntimeShaderCreateCallbacks *, class ICompiletimeShaderCreateCallbacks *); /* linkage=_ZN19CVfxStaticComboData11UnserializeERKSt10shared_ptrINS_23DecompressedComboData_tEEPK15CVfxProgramData12VfxProgram_tyP29IRuntimeShaderCreateCallbacksP33ICompiletimeShaderCreateCallbacks */
	/* <6983e08> vfx/vfx_common.cpp:3117 */
	bool LoadStaticComboData(class CVfxStaticComboData *, uint64, class CVfx *, class CVfxProgramData &, enum VfxProgram_t, class IRuntimeShaderCreateCallbacks *, class ICompiletimeShaderCreateCallbacks *); /* linkage=_ZN19CVfxStaticComboData19LoadStaticComboDataEyP4CVfxR15CVfxProgramData12VfxProgram_tP29IRuntimeShaderCreateCallbacksP33ICompiletimeShaderCreateCallbacks */
	void AllocateShaderAndRenderStateHandles(class CVfxStaticComboData *, enum VfxProgram_t); /* linkage=_ZN19CVfxStaticComboData35AllocateShaderAndRenderStateHandlesE12VfxProgram_t */
	int AddAttribute(class CVfxStaticComboData *, const class CVfxShaderAttribute  &, bool *); /* linkage=_ZN19CVfxStaticComboData12AddAttributeERK19CVfxShaderAttributePb */
	void CopyFrom(class CVfxStaticComboData *, const class CVfxStaticComboData  &); /* linkage=_ZN19CVfxStaticComboData8CopyFromERKS_ */
	uint32 FindDynamicComboArrayIndex(const class CVfxStaticComboData  *, uint64); /* linkage=_ZNK19CVfxStaticComboData26FindDynamicComboArrayIndexEy */
	void CompactDynamicComboArrays(class CVfxStaticComboData *); /* linkage=_ZN19CVfxStaticComboData25CompactDynamicComboArraysEv */
	bool AreDynamicComboIDsCompact(const class CVfxStaticComboData  *); /* linkage=_ZNK19CVfxStaticComboData25AreDynamicComboIDsCompactEv */
	bool IsDynamicComboVariableDataCompact(const class CVfxStaticComboData  *); /* linkage=_ZNK19CVfxStaticComboData33IsDynamicComboVariableDataCompactEv */
	int GetDynamicComboCount(const class CVfxStaticComboData  *); /* linkage=_ZNK19CVfxStaticComboData20GetDynamicComboCountEv */
	bool IsLooseDynamicComboSkipped(const class CVfxStaticComboData  *, int); /* linkage=_ZNK19CVfxStaticComboData26IsLooseDynamicComboSkippedEi */
	bool IsDynamicComboSkipped(const class CVfxStaticComboData  *, int); /* linkage=_ZNK19CVfxStaticComboData21IsDynamicComboSkippedEi */
	int GetDynamicComboVariablesToSet(const class CVfxStaticComboData  *, int, const class VfxVariableIndexData_t  * *, int *, int *); /* linkage=_ZNK19CVfxStaticComboData29GetDynamicComboVariablesToSetEiPPK22VfxVariableIndexData_tPiS4_ */
} __attribute__((__aligned__(8)));

// <0003E473> ../../common/vfx/vfx_common.h:813
// member functions: 46
// member variables: 20
// class size: 440
class CVfxStaticComboData {
	uint32 m_nConstantBufferSize:24; /* 0: 0 4 */
	uint32 m_bIsReadyForReuse:1; /* 0:24 4 */
	uint32 m_bConstantBufferCanBeStatic:1; /* 0:25 4 */
	uint32 m_bIsFullyLoaded:1; /* 0:26 4 */
	uint32 m_bGlobalsInBufferDeviceAddress:1; /* 0:27 4 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_dynamicComboIDs; /* 8 32 */
	CUtlVector<CVfxVariableIndexArray, CUtlMemory<CVfxVariableIndexArray, int> > m_variablesToSetForEachDynamicComboLoose; /* 40 32 */
	VfxVariableIndexDataArray_t m_variablesToSetForEachDynamicComboCompactData __attribute__((__aligned__(8))); /* 72 16 */
	CUtlVector<CVfxVariableIndexRefArray, CUtlMemory<CVfxVariableIndexRefArray, int> > m_variablesToSetForEachDynamicComboCompact; /* 88 32 */
	CUtlVector<ConstantBufferBindInfo_t, CUtlMemory<ConstantBufferBindInfo_t, int> > m_constantBufferBindingArray; /* 120 32 */
	CVfxVariableIndexArray m_variablesUsedInStaticCombo __attribute__((__aligned__(8))); /* 152 24 */
	CUtlVector<RsRasterizerStateHandle_t__*, CUtlMemory<RsRasterizerStateHandle_t__*, int> > m_rasterizerStateHandleArray; /* 176 32 */
	CUtlVector<RsDepthStencilStateHandle_t__*, CUtlMemory<RsDepthStencilStateHandle_t__*, int> > m_depthStencilStateHandleArray; /* 208 32 */
	CUtlVector<RsBlendStateHandle_t__*, CUtlMemory<RsBlendStateHandle_t__*, int> > m_blendStateHandleArray; /* 240 32 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_shaderHandleIndexArray; /* 272 32 */
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_inputPatchSizeArray; /* 304 32 */
	CUtlVector<int, CUtlMemory<int, int> > m_vsInputSignatureIndexArray; /* 336 32 */
	CUtlVector<RenderShaderHandle_t__*, CUtlMemory<RenderShaderHandle_t__*, int> > m_shaderHandleArray; /* 368 32 */
	CUtlVector<CVfxShaderAttribute, CUtlMemory<CVfxShaderAttribute, int> > m_attributes; /* 400 32 */
private:
	CInterlockedInt m_refCount __attribute__((__aligned__(4))); /* 432 4 */
	/* ../../common/vfx/vfx_common.h:852 */
	void Reset(CVfxStaticComboData* );
	/* ../../common/vfx/vfx_common.h:854 */
	CVfxStaticComboData& Append(CVfxStaticComboData* , const CVfxStaticComboData& , const CUtlVector<int, CUtlMemory<int, int> >& , const CUtlVector<int, CUtlMemory<int, int> >& , const CVfxProgramData& , VfxProgram_t);
	/* ../../common/vfx/vfx_common.h:858 */
	void CVfxStaticComboData(CVfxStaticComboData* );
	/* ../../common/vfx/vfx_common.h:859 */
	void ~CVfxStaticComboData(CVfxStaticComboData* );
	/* ../../common/vfx/vfx_common.h:861 */
	int GetRefCount(const CVfxStaticComboData* );
	/* ../../common/vfx/vfx_common.h:862 */
	void AddRef(CVfxStaticComboData* );
	/* ../../common/vfx/vfx_common.h:863 */
	void Release(CVfxStaticComboData* );
	/* ../../common/vfx/vfx_common.h:865 */
	void ComputeVariablesUsedInStaticCombo(CVfxStaticComboData* , const CVfxProgramData* );
	/* ../../common/vfx/vfx_common.h:866 */
	void Serialize(const CVfxStaticComboData* , CUtlBuffer& , const CVfxByteCodeManager* , VfxProgram_t, uint64);
	/* ../../common/vfx/vfx_common.h:869 */
	shared_ptr<CVfxStaticComboData::DecompressedComboData_t> Decompress(VfxProgram_t, CUtlBuffer& );
	/* ../../common/vfx/vfx_common.h:873 */
	void Unserialize(CVfxStaticComboData* , const shared_ptr<CVfxStaticComboData::DecompressedComboData_t>& , const CVfxProgramData* , VfxProgram_t, uint64, IRuntimeShaderCreateCallbacks* , ICompiletimeShaderCreateCallbacks* );
	/* ../../common/vfx/vfx_common.h:877 */
	bool LoadStaticComboData(CVfxStaticComboData* , uint64, CVfx* , CVfxProgramData& , VfxProgram_t, IRuntimeShaderCreateCallbacks* , ICompiletimeShaderCreateCallbacks* );
	/* ../../common/vfx/vfx_common.h:880 */
	void AllocateShaderAndRenderStateHandles(CVfxStaticComboData* , VfxProgram_t);
	/* ../../common/vfx/vfx_common.h:881 */
	int AddAttribute(CVfxStaticComboData* , const CVfxShaderAttribute& , bool* );
	/* ../../common/vfx/vfx_common.h:882 */
	void CopyFrom(CVfxStaticComboData* , const CVfxStaticComboData& );
	/* ../../common/vfx/vfx_common.h:883 */
	uint32 FindDynamicComboArrayIndex(const CVfxStaticComboData* , uint64);
	/* ../../common/vfx/vfx_common.h:884 */
	void CompactDynamicComboArrays(CVfxStaticComboData* );
	/* ../../common/vfx/vfx_common.h:886 */
	bool AreDynamicComboIDsCompact(const CVfxStaticComboData* );
	/* ../../common/vfx/vfx_common.h:890 */
	bool IsDynamicComboVariableDataCompact(const CVfxStaticComboData* );
	/* ../../common/vfx/vfx_common.h:894 */
	int GetDynamicComboCount(const CVfxStaticComboData* );
	/* ../../common/vfx/vfx_common.h:901 */
	bool IsLooseDynamicComboSkipped(const CVfxStaticComboData* , int);
	/* ../../common/vfx/vfx_common.h:906 */
	bool IsDynamicComboSkipped(const CVfxStaticComboData* , int);
	/* ../../common/vfx/vfx_common.h:921 */
	int GetDynamicComboVariablesToSet(const CVfxStaticComboData* , int, const VfxVariableIndexData_t** , int* , int* );
	void Reset(class CVfxStaticComboData *); /* linkage=_ZN19CVfxStaticComboData5ResetEv */
	class CVfxStaticComboData & Append(class CVfxStaticComboData *, const class CVfxStaticComboData  &, const class CUtlVector<int, CUtlMemory<int, int> >  &, const class CUtlVector<int, CUtlMemory<int, int> >  &, const class CVfxProgramData  &, enum VfxProgram_t); /* linkage=_ZN19CVfxStaticComboData6AppendERKS_RK10CUtlVectorIi10CUtlMemoryIiiEES7_RK15CVfxProgramData12VfxProgram_t */
	void CVfxStaticComboData(class CVfxStaticComboData *); /* linkage=_ZN19CVfxStaticComboDataC4Ev */
	void ~CVfxStaticComboData(class CVfxStaticComboData *); /* linkage=_ZN19CVfxStaticComboDataD4Ev */
	int GetRefCount(const class CVfxStaticComboData  *); /* linkage=_ZNK19CVfxStaticComboData11GetRefCountEv */
	void AddRef(class CVfxStaticComboData *); /* linkage=_ZN19CVfxStaticComboData6AddRefEv */
	void Release(class CVfxStaticComboData *); /* linkage=_ZN19CVfxStaticComboData7ReleaseEv */
	void ComputeVariablesUsedInStaticCombo(class CVfxStaticComboData *, const class CVfxProgramData  *); /* linkage=_ZN19CVfxStaticComboData33ComputeVariablesUsedInStaticComboEPK15CVfxProgramData */
	void Serialize(const class CVfxStaticComboData  *, class CUtlBuffer &, const class CVfxByteCodeManager  *, enum VfxProgram_t, uint64); /* linkage=_ZNK19CVfxStaticComboData9SerializeER10CUtlBufferPK19CVfxByteCodeManager12VfxProgram_ty */
	class shared_ptr<CVfxStaticComboData::DecompressedComboData_t> Decompress(enum VfxProgram_t, class CUtlBuffer &); /* linkage=_ZN19CVfxStaticComboData10DecompressE12VfxProgram_tR10CUtlBuffer */
	void Unserialize(class CVfxStaticComboData *, const class shared_ptr<CVfxStaticComboData::DecompressedComboData_t>  &, const class CVfxProgramData  *, enum VfxProgram_t, uint64, class IRuntimeShaderCreateCallbacks *, class ICompiletimeShaderCreateCallbacks *); /* linkage=_ZN19CVfxStaticComboData11UnserializeERKSt10shared_ptrINS_23DecompressedComboData_tEEPK15CVfxProgramData12VfxProgram_tyP29IRuntimeShaderCreateCallbacksP33ICompiletimeShaderCreateCallbacks */
	/* <6983e08> vfx/vfx_common.cpp:3117 */
	bool LoadStaticComboData(class CVfxStaticComboData *, uint64, class CVfx *, class CVfxProgramData &, enum VfxProgram_t, class IRuntimeShaderCreateCallbacks *, class ICompiletimeShaderCreateCallbacks *); /* linkage=_ZN19CVfxStaticComboData19LoadStaticComboDataEyP4CVfxR15CVfxProgramData12VfxProgram_tP29IRuntimeShaderCreateCallbacksP33ICompiletimeShaderCreateCallbacks */
	void AllocateShaderAndRenderStateHandles(class CVfxStaticComboData *, enum VfxProgram_t); /* linkage=_ZN19CVfxStaticComboData35AllocateShaderAndRenderStateHandlesE12VfxProgram_t */
	int AddAttribute(class CVfxStaticComboData *, const class CVfxShaderAttribute  &, bool *); /* linkage=_ZN19CVfxStaticComboData12AddAttributeERK19CVfxShaderAttributePb */
	void CopyFrom(class CVfxStaticComboData *, const class CVfxStaticComboData  &); /* linkage=_ZN19CVfxStaticComboData8CopyFromERKS_ */
	uint32 FindDynamicComboArrayIndex(const class CVfxStaticComboData  *, uint64); /* linkage=_ZNK19CVfxStaticComboData26FindDynamicComboArrayIndexEy */
	void CompactDynamicComboArrays(class CVfxStaticComboData *); /* linkage=_ZN19CVfxStaticComboData25CompactDynamicComboArraysEv */
	bool AreDynamicComboIDsCompact(const class CVfxStaticComboData  *); /* linkage=_ZNK19CVfxStaticComboData25AreDynamicComboIDsCompactEv */
	bool IsDynamicComboVariableDataCompact(const class CVfxStaticComboData  *); /* linkage=_ZNK19CVfxStaticComboData33IsDynamicComboVariableDataCompactEv */
	int GetDynamicComboCount(const class CVfxStaticComboData  *); /* linkage=_ZNK19CVfxStaticComboData20GetDynamicComboCountEv */
	bool IsLooseDynamicComboSkipped(const class CVfxStaticComboData  *, int); /* linkage=_ZNK19CVfxStaticComboData26IsLooseDynamicComboSkippedEi */
	bool IsDynamicComboSkipped(const class CVfxStaticComboData  *, int); /* linkage=_ZNK19CVfxStaticComboData21IsDynamicComboSkippedEi */
	int GetDynamicComboVariablesToSet(const class CVfxStaticComboData  *, int, const class VfxVariableIndexData_t  * *, int *, int *); /* linkage=_ZNK19CVfxStaticComboData29GetDynamicComboVariablesToSetEiPPK22VfxVariableIndexData_tPiS4_ */
} __attribute__((__aligned__(8)));

// <06970E99> ../common/vfx/vfx_common.h:858
void CVfxStaticComboData::CVfxStaticComboData()
{
} /* size: 0 */

// <06970E80> ../common/vfx/vfx_common.h:858
inline void CVfxStaticComboData::CVfxStaticComboData()
{
} /* size: 0 */

// <06970E69> ../common/vfx/vfx_common.h:859
void CVfxStaticComboData::~CVfxStaticComboData()
{
} /* size: 0 */

// <06970E50> ../common/vfx/vfx_common.h:859
inline void CVfxStaticComboData::~CVfxStaticComboData()
{
} /* size: 0 */

// <06970E37> ../common/vfx/vfx_common.h:861
inline void CVfxStaticComboData::GetRefCount()
{
} /* size: 0 */

// <06970E1E> ../common/vfx/vfx_common.h:862
inline void CVfxStaticComboData::AddRef()
{
} /* size: 0 */

// <06979AC6> ../common/vfx/vfx_common.h:863
void CVfxStaticComboData::Release()
{
	{
	}
} /* size: 0 */

// <06970DDB> ../common/vfx/vfx_common.h:863
// variables: 2
inline void CVfxStaticComboData::Release()
{
	const char   __FUNCTION__; // 62449
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 863
	}
} /* size: 0, variables: 1 */

// <0160DA5D> ../common/vfx/vfx_common.h:863
// variables: 2
inline void CVfxStaticComboData::Release()
{
	const char   __FUNCTION__; // 42790
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 863
	}
} /* size: 0, variables: 1 */

// <004D82FA> ../common/vfx/vfx_common.h:863
// variables: 2
inline void CVfxStaticComboData::Release()
{
	const char   __FUNCTION__; // 43296
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 863
	}
} /* size: 0, variables: 1 */

// <0082C70C> ../common/vfx/vfx_common.h:863
// variables: 2
inline void CVfxStaticComboData::Release()
{
	const char   __FUNCTION__; // 21767
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 863
	}
} /* size: 0, variables: 1 */

// <06970DC2> ../common/vfx/vfx_common.h:886
inline void CVfxStaticComboData::AreDynamicComboIDsCompact()
{
} /* size: 0 */

// <069F714C> ../common/vfx/vfx_common.h:890
inline void CVfxStaticComboData::IsDynamicComboVariableDataCompact()
{
} /* size: 0 */

// <06970D90> ../common/vfx/vfx_common.h:894
inline void CVfxStaticComboData::GetDynamicComboCount()
{
} /* size: 0 */

// <06970D6A> ../common/vfx/vfx_common.h:901
inline void CVfxStaticComboData::IsLooseDynamicComboSkipped(int nCombo)
{
} /* size: 0 */

// <001A1023> ../common/vfx/vfx_common.h:906
inline void CVfxStaticComboData::IsDynamicComboSkipped(int nCombo)
{
} /* size: 0 */

// <0027DF93> ../common/vfx/vfx_common.h:921
// variables: 2
inline void CVfxStaticComboData::GetDynamicComboVariablesToSet(int nCombo, const VfxVariableIndexData_t ** pIndexAndRegisterOffsetArray, int* pFirstRenderStateElement, int* pFirstConstantElement)
{
	{
		const CVfxVariableIndexRefArray& varArray; // 928
	}
	{
		const CVfxVariableIndexArray& varArray; // 943
	}
} /* size: 0 */

// <012325C2> ../common/vfx/vfx_common.h:953
// member functions: 6
// member variable: 1
// class size: 4
class CVfxStaticComboVcsEntry {
	uint32 m_nVCSFileOffset; /* 0 4 */
	/* ../common/vfx/vfx_common.h:960 */
	void CVfxStaticComboVcsEntry(CVfxStaticComboVcsEntry* );
	/* ../common/vfx/vfx_common.h:961 */
	void Serialize(const CVfxStaticComboVcsEntry* , CUtlBuffer& );
	/* ../common/vfx/vfx_common.h:962 */
	void Unserialize(CVfxStaticComboVcsEntry* , CUtlBuffer& );
	void CVfxStaticComboVcsEntry(class CVfxStaticComboVcsEntry *); /* linkage=_ZN23CVfxStaticComboVcsEntryC4Ev */
	/* <697ed48> vfx/vfx_common.cpp:3171 */
	void Serialize(const class CVfxStaticComboVcsEntry  *, class CUtlBuffer &); /* linkage=_ZNK23CVfxStaticComboVcsEntry9SerializeER10CUtlBuffer */
	/* <697daab> vfx/vfx_common.cpp:3176 */
	void Unserialize(class CVfxStaticComboVcsEntry *, class CUtlBuffer &); /* linkage=_ZN23CVfxStaticComboVcsEntry11UnserializeER10CUtlBuffer */
};

// <0003EFD9> ../../common/vfx/vfx_common.h:953
// member functions: 6
// member variable: 1
// class size: 4
class CVfxStaticComboVcsEntry {
	uint32 m_nVCSFileOffset; /* 0 4 */
	/* ../../common/vfx/vfx_common.h:960 */
	void CVfxStaticComboVcsEntry(CVfxStaticComboVcsEntry* );
	/* ../../common/vfx/vfx_common.h:961 */
	void Serialize(const CVfxStaticComboVcsEntry* , CUtlBuffer& );
	/* ../../common/vfx/vfx_common.h:962 */
	void Unserialize(CVfxStaticComboVcsEntry* , CUtlBuffer& );
	void CVfxStaticComboVcsEntry(class CVfxStaticComboVcsEntry *); /* linkage=_ZN23CVfxStaticComboVcsEntryC4Ev */
	/* <697ed48> vfx/vfx_common.cpp:3171 */
	void Serialize(const class CVfxStaticComboVcsEntry  *, class CUtlBuffer &); /* linkage=_ZNK23CVfxStaticComboVcsEntry9SerializeER10CUtlBuffer */
	/* <697daab> vfx/vfx_common.cpp:3176 */
	void Unserialize(class CVfxStaticComboVcsEntry *, class CUtlBuffer &); /* linkage=_ZN23CVfxStaticComboVcsEntry11UnserializeER10CUtlBuffer */
};

// <06970D53> ../common/vfx/vfx_common.h:960
void CVfxStaticComboVcsEntry::CVfxStaticComboVcsEntry()
{
} /* size: 0 */

// <06970D3A> ../common/vfx/vfx_common.h:960
inline void CVfxStaticComboVcsEntry::CVfxStaticComboVcsEntry()
{
} /* size: 0 */

// <069133D1> ../common/vfx/vfx_common.h:993
void VfxStaticComboLoadRequest_t::VfxStaticComboLoadRequest_t()
{
} /* size: 0 */

// <069133B4> ../common/vfx/vfx_common.h:993
inline void VfxStaticComboLoadRequest_t::VfxStaticComboLoadRequest_t()
{
} /* size: 0 */

// <0691339D> ../common/vfx/vfx_common.h:993
void VfxStaticComboLoadRequest_t::~VfxStaticComboLoadRequest_t()
{
} /* size: 0 */

// <06913380> ../common/vfx/vfx_common.h:993
inline void VfxStaticComboLoadRequest_t::~VfxStaticComboLoadRequest_t()
{
} /* size: 0 */

// <068F34F0> ../common/vfx/vfx_common.h:993
inline void VfxStaticComboLoadRequest_t::operator=(const VfxStaticComboLoadRequest_t &)
{
} /* size: 0 */

// <068E169B> ../common/vfx/vfx_common.h:993
void VfxStaticComboLoadRequest_t::VfxStaticComboLoadRequest_t(VfxStaticComboLoadRequest_t &)
{
} /* size: 0 */

// <068E1679> ../common/vfx/vfx_common.h:993
inline void VfxStaticComboLoadRequest_t::VfxStaticComboLoadRequest_t(VfxStaticComboLoadRequest_t &)
{
} /* size: 0 */

// <001545CD> ../common/vfx/vfx_common.h:993
inline void VfxStaticComboLoadRequest_t::operator=(VfxStaticComboLoadRequest_t &)
{
} /* size: 0 */

// <01232680> ../common/vfx/vfx_common.h:993
// member function: 1
// member variables: 8
// struct size: 48
struct VfxStaticComboLoadRequest_t {
	uint64 nStaticComboId; /* 0 8 */
	CVfx * pVfx; /* 8 8 */
	VfxProgram_t programType; /* 16 4 */
	int32 nStaticComboCacheIdx; /* 20 4 */
	uint32 nFileDataOffset; /* 24 4 */
	uint32 nFileDataLength; /* 28 4 */
	VfxStaticComboLoadRequestType_t type; /* 32 1 */
	CUtlString vcsFilename; /* 40 8 */
	/* ../common/vfx/vfx_common.h:1004 */
	void Reset(VfxStaticComboLoadRequest_t* );
};

// <01547207> ../common/vfx/vfx_common.h:993
// member functions: 5
// member variables: 8
// struct size: 48
struct VfxStaticComboLoadRequest_t {
	uint64 nStaticComboId; /* 0 8 */
	CVfx * pVfx; /* 8 8 */
	VfxProgram_t programType; /* 16 4 */
	int32 nStaticComboCacheIdx; /* 20 4 */
	uint32 nFileDataOffset; /* 24 4 */
	uint32 nFileDataLength; /* 28 4 */
	VfxStaticComboLoadRequestType_t type; /* 32 1 */
	CUtlString vcsFilename; /* 40 8 */
	/* ../common/vfx/vfx_common.h:1004 */
	void Reset(VfxStaticComboLoadRequest_t* );
	void VfxStaticComboLoadRequest_t(VfxStaticComboLoadRequest_t* , VfxStaticComboLoadRequest_t& );
	VfxStaticComboLoadRequest_t& operator=(VfxStaticComboLoadRequest_t* , const VfxStaticComboLoadRequest_t& );
	void ~VfxStaticComboLoadRequest_t(VfxStaticComboLoadRequest_t* );
	void VfxStaticComboLoadRequest_t(VfxStaticComboLoadRequest_t* );
};

// <0003F095> ../../common/vfx/vfx_common.h:993
// member function: 1
// member variables: 8
// struct size: 48
struct VfxStaticComboLoadRequest_t {
	uint64 nStaticComboId; /* 0 8 */
	CVfx * pVfx; /* 8 8 */
	VfxProgram_t programType; /* 16 4 */
	int32 nStaticComboCacheIdx; /* 20 4 */
	uint32 nFileDataOffset; /* 24 4 */
	uint32 nFileDataLength; /* 28 4 */
	VfxStaticComboLoadRequestType_t type; /* 32 1 */
	CUtlString vcsFilename; /* 40 8 */
	/* ../../common/vfx/vfx_common.h:1004 */
	void Reset(VfxStaticComboLoadRequest_t* );
};

// <06970D21> ../common/vfx/vfx_common.h:1004
inline void VfxStaticComboLoadRequest_t::Reset()
{
} /* size: 0 */

// <01231C2B> ../common/vfx/vfx_common.h:1018
// member functions: 46
// member variables: 19
// class size: 616
class CVfxProgramData {
	bool m_bLoadedFromVcsFile; /* 0 1 */
	CUtlString m_vfxModifiedFilename; /* 8 8 */
	CVfxHashValue m_programHashes[9]; /* 16 144 */
	CVfxHashValue m_variableDescriptionVersionHash; /* 160 16 */
	int32 m_nVariableSourceMax; /* 176 4 */
	CVfxHashValue m_shaderSourceHash; /* 180 16 */
	CUtlVector<CVfxCombo, CUtlMemory<CVfxCombo, int> > m_staticComboArray; /* 200 32 */
	CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> > m_staticComboRuleArray; /* 232 32 */
	CUtlVector<CVfxCombo, CUtlMemory<CVfxCombo, int> > m_dynamicComboArray; /* 264 32 */
	CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> > m_dynamicComboRuleArray; /* 296 32 */
	CUtlVector<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> > m_variableDescriptionArray; /* 328 32 */
	CUtlVector<CVfxTextureChannelProcessor, CUtlMemory<CVfxTextureChannelProcessor, int> > m_textureChannelProcessorArray; /* 360 32 */
	CUtlVector<ConstantBufferDescription_t, CUtlMemory<ConstantBufferDescription_t, int> > m_extConstantBufferDescriptionArray; /* 392 32 */
	CUtlVector<CUtlVector<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >, CUtlMemory<CUtlVector<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >, int> > m_vsInputSignatureArray; /* 424 32 */
	CUtlBlockVector<CVfxStaticComboData, int> m_staticComboDataCache; /* 456 32 */
	CUtlVector<long long unsigned int, CUtlMemory<long long unsigned int, int> > m_staticComboDataCacheIDs; /* 488 32 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_staticComboDataCacheIndirection; /* 520 32 */
	CUtlVector<CVfxStaticComboVcsEntry, CUtlMemory<CVfxStaticComboVcsEntry, int> > m_staticComboVcsTable; /* 552 32 */
	CUtlVector<long long unsigned int, CUtlMemory<long long unsigned int, int> > m_staticComboIdTable; /* 584 32 */
	/* ../common/vfx/vfx_common.h:1070 */
	const CVfxStaticComboVcsEntry* FindStaticComboInVcsDictionary(const CVfxProgramData* , uint64);
	/* ../common/vfx/vfx_common.h:1074 */
	int32 FindStaticComboData(const CVfxProgramData* , uint64);
	/* ../common/vfx/vfx_common.h:1077 */
	CUtlString GetDebugName(const CVfxProgramData* );
	/* ../common/vfx/vfx_common.h:1080 */
	void Reset(CVfxProgramData* );
	/* ../common/vfx/vfx_common.h:1083 */
	void CVfxProgramData(CVfxProgramData* );
	/* ../common/vfx/vfx_common.h:1084 */
	void ~CVfxProgramData(CVfxProgramData* );
	/* ../common/vfx/vfx_common.h:1086 */
	uint64 CalcNumDynamicCombosWithoutSkips(const CVfxProgramData* );
	/* ../common/vfx/vfx_common.h:1087 */
	uint64 CalcNumStaticCombosWithoutSkips(const CVfxProgramData* );
	/* ../common/vfx/vfx_common.h:1088 */
	int32 FindStaticComboByName(const CVfxProgramData* , const char* );
	/* ../common/vfx/vfx_common.h:1089 */
	int32 FindDynamicComboByName(const CVfxProgramData* , const char* );
	/* ../common/vfx/vfx_common.h:1090 */
	uint64 CalcStaticComboIdFromValues(const CVfxProgramData* , const VfxComboValueVector_t& );
	/* ../common/vfx/vfx_common.h:1091 */
	uint64 CalcDynamicComboIdFromValues(const CVfxProgramData* , const VfxComboValueVector_t& );
	/* ../common/vfx/vfx_common.h:1093 */
	int32 FindOrLoadStaticComboData(CVfxProgramData* , uint64, CVfx* , VfxProgram_t, IRuntimeShaderCreateCallbacks* , ICompiletimeShaderCreateCallbacks* );
	/* ../common/vfx/vfx_common.h:1094 */
	bool FindOrCreateStaticComboDataInCache(CVfxProgramData* , int64, CVfx* , VfxProgram_t, VfxStaticComboLoadRequest_t* );
	/* ../common/vfx/vfx_common.h:1096 */
	int32 FindOrAddVariableToArray(CVfxProgramData* , const CVfxVariableDescription* );
	/* ../common/vfx/vfx_common.h:1097 */
	int32 FindOrAddTextureProcessingDescriptionToArray(CVfxProgramData* , const CVfxTextureChannelProcessor* );
	/* ../common/vfx/vfx_common.h:1098 */
	int32 FindOrAddExternalConstantBufferToArray(CVfxProgramData* , const ConstantBufferDescription_t* );
	/* ../common/vfx/vfx_common.h:1099 */
	int32 FindOrAddVsInputSignatureToArray(CVfxProgramData* , const CVsInputSignatureVector& );
	/* ../common/vfx/vfx_common.h:1101 */
	void Serialize(CVfxProgramData* , CUtlBuffer& , CVfxByteCodeManager* , VfxProgram_t, int);
	/* ../common/vfx/vfx_common.h:1102 */
	bool Unserialize(CVfxProgramData* , CUtlBuffer& , int, VfxProgram_t, int, IRuntimeShaderCreateCallbacks* , ICompiletimeShaderCreateCallbacks* , bool, bool);
	/* ../common/vfx/vfx_common.h:1104 */
	void UnserializeStaticComboDataCache(CVfxProgramData* , CUtlBuffer& , int, VfxProgram_t, IRuntimeShaderCreateCallbacks* , ICompiletimeShaderCreateCallbacks* );
	/* ../common/vfx/vfx_common.h:1106 */
	uint64 PrintStats(CVfxProgramData* , VfxProgram_t, CVfx& );
	/* ../common/vfx/vfx_common.h:1107 */
	bool HasStaticComboDataVcsLookupTable(const CVfxProgramData* );
	const class CVfxStaticComboVcsEntry  * FindStaticComboInVcsDictionary(const class CVfxProgramData  *, uint64); /* linkage=_ZNK15CVfxProgramData30FindStaticComboInVcsDictionaryEy */
	/* <697de6c> vfx/vfx_common.cpp:3387 */
	int32 FindStaticComboData(const class CVfxProgramData  *, uint64); /* linkage=_ZNK15CVfxProgramData19FindStaticComboDataEy */
	/* <697dda8> vfx/vfx_common.cpp:3331 */
	class CUtlString GetDebugName(const class CVfxProgramData  *); /* linkage=_ZNK15CVfxProgramData12GetDebugNameEv */
	void Reset(class CVfxProgramData *); /* linkage=_ZN15CVfxProgramData5ResetEv */
	void CVfxProgramData(class CVfxProgramData *); /* linkage=_ZN15CVfxProgramDataC4Ev */
	void ~CVfxProgramData(class CVfxProgramData *); /* linkage=_ZN15CVfxProgramDataD4Ev */
	/* <697db64> vfx/vfx_common.cpp:3226 */
	uint64 CalcNumDynamicCombosWithoutSkips(const class CVfxProgramData  *); /* linkage=_ZNK15CVfxProgramData32CalcNumDynamicCombosWithoutSkipsEv */
	/* <697dc86> vfx/vfx_common.cpp:3236 */
	uint64 CalcNumStaticCombosWithoutSkips(const class CVfxProgramData  *); /* linkage=_ZNK15CVfxProgramData31CalcNumStaticCombosWithoutSkipsEv */
	int32 FindStaticComboByName(const class CVfxProgramData  *, const char  *); /* linkage=_ZNK15CVfxProgramData21FindStaticComboByNameEPKc */
	int32 FindDynamicComboByName(const class CVfxProgramData  *, const char  *); /* linkage=_ZNK15CVfxProgramData22FindDynamicComboByNameEPKc */
	uint64 CalcStaticComboIdFromValues(const class CVfxProgramData  *, const VfxComboValueVector_t  &); /* linkage=_ZNK15CVfxProgramData27CalcStaticComboIdFromValuesERK27CUtlLeanVectorFixedGrowableIhLt12EsE */
	uint64 CalcDynamicComboIdFromValues(const class CVfxProgramData  *, const VfxComboValueVector_t  &); /* linkage=_ZNK15CVfxProgramData28CalcDynamicComboIdFromValuesERK27CUtlLeanVectorFixedGrowableIhLt12EsE */
	int32 FindOrLoadStaticComboData(class CVfxProgramData *, uint64, class CVfx *, enum VfxProgram_t, class IRuntimeShaderCreateCallbacks *, class ICompiletimeShaderCreateCallbacks *); /* linkage=_ZN15CVfxProgramData25FindOrLoadStaticComboDataEyP4CVfx12VfxProgram_tP29IRuntimeShaderCreateCallbacksP33ICompiletimeShaderCreateCallbacks */
	bool FindOrCreateStaticComboDataInCache(class CVfxProgramData *, int64, class CVfx *, enum VfxProgram_t, class VfxStaticComboLoadRequest_t *); /* linkage=_ZN15CVfxProgramData34FindOrCreateStaticComboDataInCacheExP4CVfx12VfxProgram_tP27VfxStaticComboLoadRequest_t */
	/* <69839e4> vfx/vfx_common.cpp:3615 */
	int32 FindOrAddVariableToArray(class CVfxProgramData *, const class CVfxVariableDescription  *); /* linkage=_ZN15CVfxProgramData24FindOrAddVariableToArrayEPK23CVfxVariableDescription */
	int32 FindOrAddTextureProcessingDescriptionToArray(class CVfxProgramData *, const class CVfxTextureChannelProcessor  *); /* linkage=_ZN15CVfxProgramData44FindOrAddTextureProcessingDescriptionToArrayEPK27CVfxTextureChannelProcessor */
	int32 FindOrAddExternalConstantBufferToArray(class CVfxProgramData *, const class ConstantBufferDescription_t  *); /* linkage=_ZN15CVfxProgramData38FindOrAddExternalConstantBufferToArrayEPK27ConstantBufferDescription_t */
	int32 FindOrAddVsInputSignatureToArray(class CVfxProgramData *, const CVsInputSignatureVector  &); /* linkage=_ZN15CVfxProgramData32FindOrAddVsInputSignatureToArrayERK10CUtlVectorI25VsInputSignatureElement_t10CUtlMemoryIS1_iEE */
	void Serialize(class CVfxProgramData *, class CUtlBuffer &, class CVfxByteCodeManager *, enum VfxProgram_t, int); /* linkage=_ZN15CVfxProgramData9SerializeER10CUtlBufferP19CVfxByteCodeManager12VfxProgram_ti */
	bool Unserialize(class CVfxProgramData *, class CUtlBuffer &, int, enum VfxProgram_t, int, class IRuntimeShaderCreateCallbacks *, class ICompiletimeShaderCreateCallbacks *, bool, bool); /* linkage=_ZN15CVfxProgramData11UnserializeER10CUtlBufferi12VfxProgram_tiP29IRuntimeShaderCreateCallbacksP33ICompiletimeShaderCreateCallbacksbb */
	void UnserializeStaticComboDataCache(class CVfxProgramData *, class CUtlBuffer &, int, enum VfxProgram_t, class IRuntimeShaderCreateCallbacks *, class ICompiletimeShaderCreateCallbacks *); /* linkage=_ZN15CVfxProgramData31UnserializeStaticComboDataCacheER10CUtlBufferi12VfxProgram_tP29IRuntimeShaderCreateCallbacksP33ICompiletimeShaderCreateCallbacks */
	uint64 PrintStats(class CVfxProgramData *, enum VfxProgram_t, class CVfx &); /* linkage=_ZN15CVfxProgramData10PrintStatsE12VfxProgram_tR4CVfx */
	bool HasStaticComboDataVcsLookupTable(const class CVfxProgramData  *); /* linkage=_ZNK15CVfxProgramData32HasStaticComboDataVcsLookupTableEv */
};

// <0003E983> ../../common/vfx/vfx_common.h:1018
// member functions: 46
// member variables: 19
// class size: 616
class CVfxProgramData {
	bool m_bLoadedFromVcsFile; /* 0 1 */
	CUtlString m_vfxModifiedFilename; /* 8 8 */
	CVfxHashValue m_programHashes[9]; /* 16 144 */
	CVfxHashValue m_variableDescriptionVersionHash; /* 160 16 */
	int32 m_nVariableSourceMax; /* 176 4 */
	CVfxHashValue m_shaderSourceHash; /* 180 16 */
	CUtlVector<CVfxCombo, CUtlMemory<CVfxCombo, int> > m_staticComboArray; /* 200 32 */
	CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> > m_staticComboRuleArray; /* 232 32 */
	CUtlVector<CVfxCombo, CUtlMemory<CVfxCombo, int> > m_dynamicComboArray; /* 264 32 */
	CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> > m_dynamicComboRuleArray; /* 296 32 */
	CUtlVector<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> > m_variableDescriptionArray; /* 328 32 */
	CUtlVector<CVfxTextureChannelProcessor, CUtlMemory<CVfxTextureChannelProcessor, int> > m_textureChannelProcessorArray; /* 360 32 */
	CUtlVector<ConstantBufferDescription_t, CUtlMemory<ConstantBufferDescription_t, int> > m_extConstantBufferDescriptionArray; /* 392 32 */
	CUtlVector<CUtlVector<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >, CUtlMemory<CUtlVector<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >, int> > m_vsInputSignatureArray; /* 424 32 */
	CUtlBlockVector<CVfxStaticComboData, int> m_staticComboDataCache; /* 456 32 */
	CUtlVector<long long unsigned int, CUtlMemory<long long unsigned int, int> > m_staticComboDataCacheIDs; /* 488 32 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_staticComboDataCacheIndirection; /* 520 32 */
	CUtlVector<CVfxStaticComboVcsEntry, CUtlMemory<CVfxStaticComboVcsEntry, int> > m_staticComboVcsTable; /* 552 32 */
	CUtlVector<long long unsigned int, CUtlMemory<long long unsigned int, int> > m_staticComboIdTable; /* 584 32 */
	/* ../../common/vfx/vfx_common.h:1070 */
	const CVfxStaticComboVcsEntry* FindStaticComboInVcsDictionary(const CVfxProgramData* , uint64);
	/* ../../common/vfx/vfx_common.h:1074 */
	int32 FindStaticComboData(const CVfxProgramData* , uint64);
	/* ../../common/vfx/vfx_common.h:1077 */
	CUtlString GetDebugName(const CVfxProgramData* );
	/* ../../common/vfx/vfx_common.h:1080 */
	void Reset(CVfxProgramData* );
	/* ../../common/vfx/vfx_common.h:1083 */
	void CVfxProgramData(CVfxProgramData* );
	/* ../../common/vfx/vfx_common.h:1084 */
	void ~CVfxProgramData(CVfxProgramData* );
	/* ../../common/vfx/vfx_common.h:1086 */
	uint64 CalcNumDynamicCombosWithoutSkips(const CVfxProgramData* );
	/* ../../common/vfx/vfx_common.h:1087 */
	uint64 CalcNumStaticCombosWithoutSkips(const CVfxProgramData* );
	/* ../../common/vfx/vfx_common.h:1088 */
	int32 FindStaticComboByName(const CVfxProgramData* , const char* );
	/* ../../common/vfx/vfx_common.h:1089 */
	int32 FindDynamicComboByName(const CVfxProgramData* , const char* );
	/* ../../common/vfx/vfx_common.h:1090 */
	uint64 CalcStaticComboIdFromValues(const CVfxProgramData* , const VfxComboValueVector_t& );
	/* ../../common/vfx/vfx_common.h:1091 */
	uint64 CalcDynamicComboIdFromValues(const CVfxProgramData* , const VfxComboValueVector_t& );
	/* ../../common/vfx/vfx_common.h:1093 */
	int32 FindOrLoadStaticComboData(CVfxProgramData* , uint64, CVfx* , VfxProgram_t, IRuntimeShaderCreateCallbacks* , ICompiletimeShaderCreateCallbacks* );
	/* ../../common/vfx/vfx_common.h:1094 */
	bool FindOrCreateStaticComboDataInCache(CVfxProgramData* , int64, CVfx* , VfxProgram_t, VfxStaticComboLoadRequest_t* );
	/* ../../common/vfx/vfx_common.h:1096 */
	int32 FindOrAddVariableToArray(CVfxProgramData* , const CVfxVariableDescription* );
	/* ../../common/vfx/vfx_common.h:1097 */
	int32 FindOrAddTextureProcessingDescriptionToArray(CVfxProgramData* , const CVfxTextureChannelProcessor* );
	/* ../../common/vfx/vfx_common.h:1098 */
	int32 FindOrAddExternalConstantBufferToArray(CVfxProgramData* , const ConstantBufferDescription_t* );
	/* ../../common/vfx/vfx_common.h:1099 */
	int32 FindOrAddVsInputSignatureToArray(CVfxProgramData* , const CVsInputSignatureVector& );
	/* ../../common/vfx/vfx_common.h:1101 */
	void Serialize(CVfxProgramData* , CUtlBuffer& , CVfxByteCodeManager* , VfxProgram_t, int);
	/* ../../common/vfx/vfx_common.h:1102 */
	bool Unserialize(CVfxProgramData* , CUtlBuffer& , int, VfxProgram_t, int, IRuntimeShaderCreateCallbacks* , ICompiletimeShaderCreateCallbacks* , bool, bool);
	/* ../../common/vfx/vfx_common.h:1104 */
	void UnserializeStaticComboDataCache(CVfxProgramData* , CUtlBuffer& , int, VfxProgram_t, IRuntimeShaderCreateCallbacks* , ICompiletimeShaderCreateCallbacks* );
	/* ../../common/vfx/vfx_common.h:1106 */
	uint64 PrintStats(CVfxProgramData* , VfxProgram_t, CVfx& );
	/* ../../common/vfx/vfx_common.h:1107 */
	bool HasStaticComboDataVcsLookupTable(const CVfxProgramData* );
	const class CVfxStaticComboVcsEntry  * FindStaticComboInVcsDictionary(const class CVfxProgramData  *, uint64); /* linkage=_ZNK15CVfxProgramData30FindStaticComboInVcsDictionaryEy */
	/* <697de6c> vfx/vfx_common.cpp:3387 */
	int32 FindStaticComboData(const class CVfxProgramData  *, uint64); /* linkage=_ZNK15CVfxProgramData19FindStaticComboDataEy */
	/* <697dda8> vfx/vfx_common.cpp:3331 */
	class CUtlString GetDebugName(const class CVfxProgramData  *); /* linkage=_ZNK15CVfxProgramData12GetDebugNameEv */
	void Reset(class CVfxProgramData *); /* linkage=_ZN15CVfxProgramData5ResetEv */
	void CVfxProgramData(class CVfxProgramData *); /* linkage=_ZN15CVfxProgramDataC4Ev */
	void ~CVfxProgramData(class CVfxProgramData *); /* linkage=_ZN15CVfxProgramDataD4Ev */
	/* <697db64> vfx/vfx_common.cpp:3226 */
	uint64 CalcNumDynamicCombosWithoutSkips(const class CVfxProgramData  *); /* linkage=_ZNK15CVfxProgramData32CalcNumDynamicCombosWithoutSkipsEv */
	/* <697dc86> vfx/vfx_common.cpp:3236 */
	uint64 CalcNumStaticCombosWithoutSkips(const class CVfxProgramData  *); /* linkage=_ZNK15CVfxProgramData31CalcNumStaticCombosWithoutSkipsEv */
	int32 FindStaticComboByName(const class CVfxProgramData  *, const char  *); /* linkage=_ZNK15CVfxProgramData21FindStaticComboByNameEPKc */
	int32 FindDynamicComboByName(const class CVfxProgramData  *, const char  *); /* linkage=_ZNK15CVfxProgramData22FindDynamicComboByNameEPKc */
	uint64 CalcStaticComboIdFromValues(const class CVfxProgramData  *, const VfxComboValueVector_t  &); /* linkage=_ZNK15CVfxProgramData27CalcStaticComboIdFromValuesERK27CUtlLeanVectorFixedGrowableIhLt12EsE */
	uint64 CalcDynamicComboIdFromValues(const class CVfxProgramData  *, const VfxComboValueVector_t  &); /* linkage=_ZNK15CVfxProgramData28CalcDynamicComboIdFromValuesERK27CUtlLeanVectorFixedGrowableIhLt12EsE */
	int32 FindOrLoadStaticComboData(class CVfxProgramData *, uint64, class CVfx *, enum VfxProgram_t, class IRuntimeShaderCreateCallbacks *, class ICompiletimeShaderCreateCallbacks *); /* linkage=_ZN15CVfxProgramData25FindOrLoadStaticComboDataEyP4CVfx12VfxProgram_tP29IRuntimeShaderCreateCallbacksP33ICompiletimeShaderCreateCallbacks */
	bool FindOrCreateStaticComboDataInCache(class CVfxProgramData *, int64, class CVfx *, enum VfxProgram_t, class VfxStaticComboLoadRequest_t *); /* linkage=_ZN15CVfxProgramData34FindOrCreateStaticComboDataInCacheExP4CVfx12VfxProgram_tP27VfxStaticComboLoadRequest_t */
	/* <69839e4> vfx/vfx_common.cpp:3615 */
	int32 FindOrAddVariableToArray(class CVfxProgramData *, const class CVfxVariableDescription  *); /* linkage=_ZN15CVfxProgramData24FindOrAddVariableToArrayEPK23CVfxVariableDescription */
	int32 FindOrAddTextureProcessingDescriptionToArray(class CVfxProgramData *, const class CVfxTextureChannelProcessor  *); /* linkage=_ZN15CVfxProgramData44FindOrAddTextureProcessingDescriptionToArrayEPK27CVfxTextureChannelProcessor */
	int32 FindOrAddExternalConstantBufferToArray(class CVfxProgramData *, const class ConstantBufferDescription_t  *); /* linkage=_ZN15CVfxProgramData38FindOrAddExternalConstantBufferToArrayEPK27ConstantBufferDescription_t */
	int32 FindOrAddVsInputSignatureToArray(class CVfxProgramData *, const CVsInputSignatureVector  &); /* linkage=_ZN15CVfxProgramData32FindOrAddVsInputSignatureToArrayERK10CUtlVectorI25VsInputSignatureElement_t10CUtlMemoryIS1_iEE */
	void Serialize(class CVfxProgramData *, class CUtlBuffer &, class CVfxByteCodeManager *, enum VfxProgram_t, int); /* linkage=_ZN15CVfxProgramData9SerializeER10CUtlBufferP19CVfxByteCodeManager12VfxProgram_ti */
	bool Unserialize(class CVfxProgramData *, class CUtlBuffer &, int, enum VfxProgram_t, int, class IRuntimeShaderCreateCallbacks *, class ICompiletimeShaderCreateCallbacks *, bool, bool); /* linkage=_ZN15CVfxProgramData11UnserializeER10CUtlBufferi12VfxProgram_tiP29IRuntimeShaderCreateCallbacksP33ICompiletimeShaderCreateCallbacksbb */
	void UnserializeStaticComboDataCache(class CVfxProgramData *, class CUtlBuffer &, int, enum VfxProgram_t, class IRuntimeShaderCreateCallbacks *, class ICompiletimeShaderCreateCallbacks *); /* linkage=_ZN15CVfxProgramData31UnserializeStaticComboDataCacheER10CUtlBufferi12VfxProgram_tP29IRuntimeShaderCreateCallbacksP33ICompiletimeShaderCreateCallbacks */
	uint64 PrintStats(class CVfxProgramData *, enum VfxProgram_t, class CVfx &); /* linkage=_ZN15CVfxProgramData10PrintStatsE12VfxProgram_tR4CVfx */
	bool HasStaticComboDataVcsLookupTable(const class CVfxProgramData  *); /* linkage=_ZNK15CVfxProgramData32HasStaticComboDataVcsLookupTableEv */
};

// <0017F292> ../common/vfx/vfx_common.h:1111
inline void CVfxPerLayerProgramData::operator=(const CVfxPerLayerProgramData &)
{
} /* size: 0 */

// <068B8076> ../common/vfx/vfx_common.h:1111
// member functions: 7
// member variables: 3
// class size: 40
class CVfxPerLayerProgramData {
	CUtlLeanVectorFixedGrowable<short int, 6, short int> m_iVariableParamIndexArray __attribute__((__aligned__(8))); /* 0 16 */
	VfxComboValueVector_t m_nStaticComboValueArray __attribute__((__aligned__(8))); /* 16 16 */
	CVfxStaticComboData * m_pStaticComboData; /* 32 8 */
	/* ../common/vfx/vfx_common.h:1125 */
	void Reset(CVfxPerLayerProgramData* );
	/* ../common/vfx/vfx_common.h:1128 */
	void CVfxPerLayerProgramData(CVfxPerLayerProgramData* );
	/* ../common/vfx/vfx_common.h:1129 */
	void ~CVfxPerLayerProgramData(CVfxPerLayerProgramData* );
	/* <697df4f> vfx/vfx_common.cpp:4489 */
	void Reset(class CVfxPerLayerProgramData *); /* linkage=_ZN23CVfxPerLayerProgramData5ResetEv */
	void CVfxPerLayerProgramData(class CVfxPerLayerProgramData *); /* linkage=_ZN23CVfxPerLayerProgramDataC4Ev */
	void ~CVfxPerLayerProgramData(class CVfxPerLayerProgramData *); /* linkage=_ZN23CVfxPerLayerProgramDataD4Ev */
	class CVfxPerLayerProgramData & operator=(class CVfxPerLayerProgramData *, const class CVfxPerLayerProgramData  &); /* linkage=_ZN23CVfxPerLayerProgramDataaSERKS_ */
} __attribute__((__aligned__(8)));

// <001A0ECC> ../common/vfx/vfx_common.h:1128
void CVfxPerLayerProgramData::CVfxPerLayerProgramData()
{
} /* size: 0 */

// <001A0EB3> ../common/vfx/vfx_common.h:1128
inline void CVfxPerLayerProgramData::CVfxPerLayerProgramData()
{
} /* size: 0 */

// <001A0E9C> ../common/vfx/vfx_common.h:1129
void CVfxPerLayerProgramData::~CVfxPerLayerProgramData()
{
} /* size: 0 */

// <001A0E83> ../common/vfx/vfx_common.h:1129
inline void CVfxPerLayerProgramData::~CVfxPerLayerProgramData()
{
} /* size: 0 */

// <0017F264> ../common/vfx/vfx_common.h:1135
inline void CVfxLayerData::operator=(const CVfxLayerData &)
{
} /* size: 0 */

// <068B811D> ../common/vfx/vfx_common.h:1135
// member functions: 7
// member variables: 2
// class size: 368
class CVfxLayerData {
	CVfxPerLayerProgramData m_programDataArray[9] __attribute__((__aligned__(8))); /* 0 360 */
	CUtlVector<int, CUtlMemory<int, int> > * m_pVsStaticComboCacheIdxsForFeatureComboComputation; /* 360 8 */
	/* ../common/vfx/vfx_common.h:1143 */
	void Reset(CVfxLayerData* );
	/* ../common/vfx/vfx_common.h:1146 */
	void CVfxLayerData(CVfxLayerData* );
	/* ../common/vfx/vfx_common.h:1147 */
	void ~CVfxLayerData(CVfxLayerData* );
	void Reset(class CVfxLayerData *); /* linkage=_ZN13CVfxLayerData5ResetEv */
	void CVfxLayerData(class CVfxLayerData *); /* linkage=_ZN13CVfxLayerDataC4Ev */
	void ~CVfxLayerData(class CVfxLayerData *); /* linkage=_ZN13CVfxLayerDataD4Ev */
	class CVfxLayerData & operator=(class CVfxLayerData *, const class CVfxLayerData  &); /* linkage=_ZN13CVfxLayerDataaSERKS_ */
} __attribute__((__aligned__(8)));

// <001A0E6C> ../common/vfx/vfx_common.h:1146
void CVfxLayerData::CVfxLayerData()
{
} /* size: 0 */

// <001A0E53> ../common/vfx/vfx_common.h:1146
inline void CVfxLayerData::CVfxLayerData()
{
} /* size: 0 */

// <001A0E3C> ../common/vfx/vfx_common.h:1147
void CVfxLayerData::~CVfxLayerData()
{
} /* size: 0 */

// <001A0E23> ../common/vfx/vfx_common.h:1147
inline void CVfxLayerData::~CVfxLayerData()
{
} /* size: 0 */

// <0123DC58> ../common/vfx/vfx_common.h:1151
// member functions: 8
// member variables: 2
// class size: 68
class CVfxModeSettings {
	char m_szStaticCombo[64]; /* 0 64 */
	int32 m_nValue; /* 64 4 */
	/* ../common/vfx/vfx_common.h:1158 */
	void Serialize(const CVfxModeSettings* , CUtlBuffer& );
	/* ../common/vfx/vfx_common.h:1159 */
	void Unserialize(CVfxModeSettings* , CUtlBuffer& );
	/* ../common/vfx/vfx_common.h:1162 */
	void CVfxModeSettings(CVfxModeSettings* );
	/* ../common/vfx/vfx_common.h:1163 */
	void ~CVfxModeSettings(CVfxModeSettings* );
	/* <697e855> vfx/vfx_common.cpp:7745 */
	void Serialize(const class CVfxModeSettings  *, class CUtlBuffer &); /* linkage=_ZNK16CVfxModeSettings9SerializeER10CUtlBuffer */
	/* <697e16c> vfx/vfx_common.cpp:7751 */
	void Unserialize(class CVfxModeSettings *, class CUtlBuffer &); /* linkage=_ZN16CVfxModeSettings11UnserializeER10CUtlBuffer */
	void CVfxModeSettings(class CVfxModeSettings *); /* linkage=_ZN16CVfxModeSettingsC4Ev */
	void ~CVfxModeSettings(class CVfxModeSettings *); /* linkage=_ZN16CVfxModeSettingsD4Ev */
};

// <0004BB11> ../../common/vfx/vfx_common.h:1151
// member functions: 8
// member variables: 2
// class size: 68
class CVfxModeSettings {
	char m_szStaticCombo[64]; /* 0 64 */
	int32 m_nValue; /* 64 4 */
	/* ../../common/vfx/vfx_common.h:1158 */
	void Serialize(const CVfxModeSettings* , CUtlBuffer& );
	/* ../../common/vfx/vfx_common.h:1159 */
	void Unserialize(CVfxModeSettings* , CUtlBuffer& );
	/* ../../common/vfx/vfx_common.h:1162 */
	void CVfxModeSettings(CVfxModeSettings* );
	/* ../../common/vfx/vfx_common.h:1163 */
	void ~CVfxModeSettings(CVfxModeSettings* );
	/* <697e855> vfx/vfx_common.cpp:7745 */
	void Serialize(const class CVfxModeSettings  *, class CUtlBuffer &); /* linkage=_ZNK16CVfxModeSettings9SerializeER10CUtlBuffer */
	/* <697e16c> vfx/vfx_common.cpp:7751 */
	void Unserialize(class CVfxModeSettings *, class CUtlBuffer &); /* linkage=_ZN16CVfxModeSettings11UnserializeER10CUtlBuffer */
	void CVfxModeSettings(class CVfxModeSettings *); /* linkage=_ZN16CVfxModeSettingsC4Ev */
	void ~CVfxModeSettings(class CVfxModeSettings *); /* linkage=_ZN16CVfxModeSettingsD4Ev */
};

// <06970CA2> ../common/vfx/vfx_common.h:1162
void CVfxModeSettings::CVfxModeSettings()
{
} /* size: 0 */

// <06970C89> ../common/vfx/vfx_common.h:1162
inline void CVfxModeSettings::CVfxModeSettings()
{
} /* size: 0 */

// <06970C72> ../common/vfx/vfx_common.h:1163
void CVfxModeSettings::~CVfxModeSettings()
{
} /* size: 0 */

// <06970C59> ../common/vfx/vfx_common.h:1163
inline void CVfxModeSettings::~CVfxModeSettings()
{
} /* size: 0 */

// <0123F3BD> ../common/vfx/vfx_common.h:1166
// member functions: 8
// member variables: 4
// class size: 168
class CVfxMode {
	char m_szName[64]; /* 0 64 */
	char m_szShaderFallback[64]; /* 64 64 */
	CUtlVector<CVfxModeSettings, CUtlMemory<CVfxModeSettings, int> > m_staticComboSettings; /* 128 32 */
	/* ../common/vfx/vfx_common.h:1174 */
	void Serialize(const CVfxMode* , CUtlBuffer& );
	/* ../common/vfx/vfx_common.h:1175 */
	void Unserialize(CVfxMode* , CUtlBuffer& );
	/* ../common/vfx/vfx_common.h:1178 */
	void CVfxMode(CVfxMode* );
	/* ../common/vfx/vfx_common.h:1179 */
	void ~CVfxMode(CVfxMode* );
	CStrongHandleVoid m_hShaderExtRef; /* 160 8 */
	void Serialize(const class CVfxMode  *, class CUtlBuffer &); /* linkage=_ZNK8CVfxMode9SerializeER10CUtlBuffer */
	void Unserialize(class CVfxMode *, class CUtlBuffer &); /* linkage=_ZN8CVfxMode11UnserializeER10CUtlBuffer */
	void CVfxMode(class CVfxMode *); /* linkage=_ZN8CVfxModeC4Ev */
	void ~CVfxMode(class CVfxMode *); /* linkage=_ZN8CVfxModeD4Ev */
};

// <0004D275> ../../common/vfx/vfx_common.h:1166
// member functions: 8
// member variables: 4
// class size: 168
class CVfxMode {
	char m_szName[64]; /* 0 64 */
	char m_szShaderFallback[64]; /* 64 64 */
	CUtlVector<CVfxModeSettings, CUtlMemory<CVfxModeSettings, int> > m_staticComboSettings; /* 128 32 */
	/* ../../common/vfx/vfx_common.h:1174 */
	void Serialize(const CVfxMode* , CUtlBuffer& );
	/* ../../common/vfx/vfx_common.h:1175 */
	void Unserialize(CVfxMode* , CUtlBuffer& );
	/* ../../common/vfx/vfx_common.h:1178 */
	void CVfxMode(CVfxMode* );
	/* ../../common/vfx/vfx_common.h:1179 */
	void ~CVfxMode(CVfxMode* );
	CStrongHandleVoid m_hShaderExtRef; /* 160 8 */
	void Serialize(const class CVfxMode  *, class CUtlBuffer &); /* linkage=_ZNK8CVfxMode9SerializeER10CUtlBuffer */
	void Unserialize(class CVfxMode *, class CUtlBuffer &); /* linkage=_ZN8CVfxMode11UnserializeER10CUtlBuffer */
	void CVfxMode(class CVfxMode *); /* linkage=_ZN8CVfxModeC4Ev */
	void ~CVfxMode(class CVfxMode *); /* linkage=_ZN8CVfxModeD4Ev */
};

// <06970BDA> ../common/vfx/vfx_common.h:1178
void CVfxMode::CVfxMode()
{
} /* size: 0 */

// <06970BC1> ../common/vfx/vfx_common.h:1178
inline void CVfxMode::CVfxMode()
{
} /* size: 0 */

// <06970BAA> ../common/vfx/vfx_common.h:1179
void CVfxMode::~CVfxMode()
{
} /* size: 0 */

// <06970B91> ../common/vfx/vfx_common.h:1179
inline void CVfxMode::~CVfxMode()
{
} /* size: 0 */

// <01153603> ../common/vfx/vfx_common.h:1194
// member functions: 92
// member variables: 10
// static member variable: 1
// class size: 6,096
class CVfx {
	/* ../common/vfx/vfx_common.h:1307 */
	struct ShaderHeader_t {
		/* ../common/vfx/vfx_common.h:1309 */
		struct ProgramHeader_t {
			uint32_t m_nOffset; /* 0 4 */
			uint32_t m_nSize; /* 4 4 */
		};
		ProgramHeader_t m_programs[9]; /* 0 72 */
	};
private:
	static bool m_bStartupSanityCheckDone; /* 0 0 */
	CPathBufferString m_filename; /* 0 208 */
	CUtlStringToken m_filenameToken; /* 208 4 */
	int32 m_nVersion; /* 212 4 */
	uint32 m_nSerialized1; /* 216 4 */
	CUtlVector<CVfxMode, CUtlMemory<CVfxMode, int> > m_modeArray; /* 224 32 */
	CVfxProgramData m_programArray[9]; /* 256 5544 */
	VfxCompileTarget_t m_compileTarget; /* 5800 4 */
	bool m_bHasShaderProgram[9]; /* 5804 9 */
	/* ../common/vfx/vfx_common.h:1222 */
	void Reset(CVfx* );
	/* ../common/vfx/vfx_common.h:1225 */
	void CVfx(CVfx* );
	/* ../common/vfx/vfx_common.h:1226 */
	void ~CVfx(CVfx* );
	/* ../common/vfx/vfx_common.h:1229 */
	void StartupSanityCheck(CVfx* );
	/* ../common/vfx/vfx_common.h:1232 */
	bool CreateFromShaderFile(CVfx* , const char* , VfxCompileTarget_t, uint);
	/* ../common/vfx/vfx_common.h:1234 */
	bool CreateFromResourceFile(CVfx* , const char* , VfxCompileTarget_t, uint, bool);
	/* ../common/vfx/vfx_common.h:1235 */
	bool CreateFromResourceBuffer(CVfx* , CUtlBuffer& , VfxCompileTarget_t, uint, bool);
	/* ../common/vfx/vfx_common.h:1237 */
	bool ParseRuleFromText(CVfx* , CVfxRule* , CVfxProgramData* , char* , const char* , VfxRuleType_t);
	/* ../common/vfx/vfx_common.h:1241 */
	void ApplyRules(const CVfx* , const CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> >& , ConstValueArrayPtr_t* , VfxComboValueVector_t** );
	/* ../common/vfx/vfx_common.h:1240 */
	typedef const const VfxComboValueVector_t * ConstValueArrayPtr_t;
	/* ../common/vfx/vfx_common.h:1244 */
	void ApplyRules(const CVfx* , const CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> >& , const VfxComboValue_t** , VfxComboValue_t** );
	/* ../common/vfx/vfx_common.h:1247 */
	void GenerateUiFeatureHiddenRuleErrorIndices(const CVfx* , const VfxComboValueVector_t& , CUtlVector<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >* );
	/* ../common/vfx/vfx_common.h:1250 */
	void ComputeUiVariableListAndFeatureVariableIndices(CVfx* , CUtlVector<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >& , CUtlVector<int, CUtlMemory<int, int> >& , VfxComboValueVector_t& );
	/* ../common/vfx/vfx_common.h:1253 */
	void GetUiShaderAttributesForFeature(CVfx* , CUtlVector<CVfxShaderAttribute, CUtlMemory<CVfxShaderAttribute, int> >& , VfxComboValueVector_t& );
	/* ../common/vfx/vfx_common.h:1256 */
	CUtlVector<CVfxCombo, CUtlMemory<CVfxCombo, int> >& FeatureArray(CVfx* );
	/* ../common/vfx/vfx_common.h:1257 */
	const CUtlVector<CVfxCombo, CUtlMemory<CVfxCombo, int> >& FeatureArray(const CVfx* );
	/* ../common/vfx/vfx_common.h:1259 */
	CVfxCombo& Feature(CVfx* , int);
	/* ../common/vfx/vfx_common.h:1260 */
	const CVfxCombo& Feature(const CVfx* , int);
	/* ../common/vfx/vfx_common.h:1262 */
	CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> >& FeatureRuleArray(CVfx* );
	/* ../common/vfx/vfx_common.h:1263 */
	const CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> >& FeatureRuleArray(const CVfx* );
	/* ../common/vfx/vfx_common.h:1265 */
	int FindFeatureByName(const CVfx* , const char* );
	/* ../common/vfx/vfx_common.h:1267 */
	CVfxProgramData& VS(CVfx* );
	/* ../common/vfx/vfx_common.h:1268 */
	const CVfxProgramData& VS(const CVfx* );
	/* ../common/vfx/vfx_common.h:1269 */
	CVfxProgramData& PS(CVfx* );
	/* ../common/vfx/vfx_common.h:1270 */
	const CVfxProgramData& PS(const CVfx* );
	/* ../common/vfx/vfx_common.h:1272 */
	void CopySkipRulesForComboIterator(CVfx* , VfxProgram_t, CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> >* , CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> >* );
	/* ../common/vfx/vfx_common.h:1273 */
	void CreateInheritedSkipRulesForProgram(CVfx* , VfxProgram_t);
	/* ../common/vfx/vfx_common.h:1275 */
	bool HasShaderProgram(const CVfx* , VfxProgram_t);
	/* ../common/vfx/vfx_common.h:1277 */
	bool IsComputeShader(const CVfx* );
	/* ../common/vfx/vfx_common.h:1279 */
	CUtlStringToken GetFilenameToken(const CVfx* );
	/* ../common/vfx/vfx_common.h:1280 */
	const char* GetFilename(const CVfx* );
	/* ../common/vfx/vfx_common.h:1282 */
	CUtlBuffer* Serialize(CVfx* );
	/* ../common/vfx/vfx_common.h:1284 */
	bool InitializeWrite(CVfx* );
	/* ../common/vfx/vfx_common.h:1285 */
	bool WriteProgramToBuffer(CVfx* , VfxProgram_t, CVfxByteCodeManager* , CUtlBuffer* );
	/* ../common/vfx/vfx_common.h:1286 */
	bool WriteCombo(CVfx* , VfxProgram_t, uint64, uint64, VfxCompiledShaderInfo_t* );
	/* ../common/vfx/vfx_common.h:1287 */
	bool FinalizeCompile(CVfx* );
	/* ../common/vfx/vfx_common.h:1289 */
	const char* GetPropertiesJson(CVfx* );
	/* ../common/vfx/vfx_common.h:1293 */
	bool ParseModes(CVfx* , const char* );
	/* ../common/vfx/vfx_common.h:1294 */
	bool ParseVersionFromFile(CVfx* , CUtlBuffer& );
	/* ../common/vfx/vfx_common.h:1295 */
	bool ParseModesFromFile(CVfx* , CUtlBuffer& );
	/* ../common/vfx/vfx_common.h:1296 */
	bool ParseFeaturesFromFile(CVfx* , CUtlBuffer& );
	/* ../common/vfx/vfx_common.h:1297 */
	bool ParseCombosAndRulesFromFile(CVfx* , VfxProgram_t, CVfxProgramData* , const char* , CUtlBuffer& , VfxCompileTarget_t);
	/* ../common/vfx/vfx_common.h:1298 */
	bool ParseCombosAndRulesFromFileHelper(CVfx* , VfxProgram_t, CVfxProgramData* , const char* , VfxCompileTarget_t, CUtlSymbolTable& );
	/* ../common/vfx/vfx_common.h:1299 */
	bool ParseCombosAndRulesFromFileHelper(CVfx* , VfxProgram_t, CVfxProgramData* , const char* , CUtlBuffer& , VfxCompileTarget_t, CUtlSymbolTable& );
	/* ../common/vfx/vfx_common.h:1300 */
	bool SkipAndValidateVCSHeader(const CVfx* , CUtlBuffer& , const char* , bool);
	/* ../common/vfx/vfx_common.h:1301 */
	bool ParseIncludeFiles(CVfx* , char* , CUtlString& );
	/* ../common/vfx/vfx_common.h:1303 */
	void ComputeUiVariableListInternal(const CVfx* , CUtlVector<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >& , CUtlVector<int, CUtlMemory<int, int> >& );
	ShaderHeader_t m_header; /* 5816 72 */
	CPathBufferString m_shaderPath; /* 5888 208 */
	void Reset(class CVfx *); /* linkage=_ZN4CVfx5ResetEv */
	void CVfx(class CVfx *); /* linkage=_ZN4CVfxC4Ev */
	void ~CVfx(class CVfx *); /* linkage=_ZN4CVfxD4Ev */
	/* <697e10a> vfx/vfx_common.cpp:5876 */
	void StartupSanityCheck(class CVfx *); /* linkage=_ZN4CVfx18StartupSanityCheckEv */
	bool CreateFromShaderFile(class CVfx *, const char  *, enum VfxCompileTarget_t, uint); /* linkage=_ZN4CVfx20CreateFromShaderFileEPKc18VfxCompileTarget_tj */
	bool CreateFromResourceFile(class CVfx *, const char  *, enum VfxCompileTarget_t, uint, bool); /* linkage=_ZN4CVfx22CreateFromResourceFileEPKc18VfxCompileTarget_tjb */
	bool CreateFromResourceBuffer(class CVfx *, class CUtlBuffer &, enum VfxCompileTarget_t, uint, bool); /* linkage=_ZN4CVfx24CreateFromResourceBufferER10CUtlBuffer18VfxCompileTarget_tjb */
	bool ParseRuleFromText(class CVfx *, class CVfxRule *, class CVfxProgramData *, char *, const char  *, enum VfxRuleType_t); /* linkage=_ZN4CVfx17ParseRuleFromTextEP8CVfxRuleP15CVfxProgramDataPcPKc13VfxRuleType_t */
	void ApplyRules(const class CVfx  *, const class CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> >  &, ConstValueArrayPtr_t *, VfxComboValueVector_t * *); /* linkage=_ZNK4CVfx10ApplyRulesERK10CUtlVectorI8CVfxRule10CUtlMemoryIS1_iEEPKPK27CUtlLeanVectorFixedGrowableIhLt12EsEPPS8_ */
	void ApplyRules(const class CVfx  *, const class CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> >  &, const VfxComboValue_t  * *, VfxComboValue_t * *); /* linkage=_ZNK4CVfx10ApplyRulesERK10CUtlVectorI8CVfxRule10CUtlMemoryIS1_iEEPPKhPPh */
	void GenerateUiFeatureHiddenRuleErrorIndices(const class CVfx  *, const VfxComboValueVector_t  &, class CUtlVector<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> > *); /* linkage=_ZNK4CVfx39GenerateUiFeatureHiddenRuleErrorIndicesERK27CUtlLeanVectorFixedGrowableIhLt12EsEP10CUtlVectorIS4_Ii10CUtlMemoryIiiEES5_IS7_iEE */
	void ComputeUiVariableListAndFeatureVariableIndices(class CVfx *, class CUtlVector<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> > &, class CUtlVector<int, CUtlMemory<int, int> > &, VfxComboValueVector_t &); /* linkage=_ZN4CVfx46ComputeUiVariableListAndFeatureVariableIndicesER10CUtlVectorI23CVfxVariableDescription10CUtlMemoryIS1_iEERS0_IiS2_IiiEER27CUtlLeanVectorFixedGrowableIhLt12EsE */
	void GetUiShaderAttributesForFeature(class CVfx *, class CUtlVector<CVfxShaderAttribute, CUtlMemory<CVfxShaderAttribute, int> > &, VfxComboValueVector_t &); /* linkage=_ZN4CVfx31GetUiShaderAttributesForFeatureER10CUtlVectorI19CVfxShaderAttribute10CUtlMemoryIS1_iEER27CUtlLeanVectorFixedGrowableIhLt12EsE */
	class CUtlVector<CVfxCombo, CUtlMemory<CVfxCombo, int> > & FeatureArray(class CVfx *); /* linkage=_ZN4CVfx12FeatureArrayEv */
	const class CUtlVector<CVfxCombo, CUtlMemory<CVfxCombo, int> >  & FeatureArray(const class CVfx  *); /* linkage=_ZNK4CVfx12FeatureArrayEv */
	class CVfxCombo & Feature(class CVfx *, int); /* linkage=_ZN4CVfx7FeatureEi */
	const class CVfxCombo  & Feature(const class CVfx  *, int); /* linkage=_ZNK4CVfx7FeatureEi */
	class CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> > & FeatureRuleArray(class CVfx *); /* linkage=_ZN4CVfx16FeatureRuleArrayEv */
	const class CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> >  & FeatureRuleArray(const class CVfx  *); /* linkage=_ZNK4CVfx16FeatureRuleArrayEv */
	int FindFeatureByName(const class CVfx  *, const char  *); /* linkage=_ZNK4CVfx17FindFeatureByNameEPKc */
	class CVfxProgramData & VS(class CVfx *); /* linkage=_ZN4CVfx2VSEv */
	const class CVfxProgramData  & VS(const class CVfx  *); /* linkage=_ZNK4CVfx2VSEv */
	class CVfxProgramData & PS(class CVfx *); /* linkage=_ZN4CVfx2PSEv */
	const class CVfxProgramData  & PS(const class CVfx  *); /* linkage=_ZNK4CVfx2PSEv */
	void CopySkipRulesForComboIterator(class CVfx *, enum VfxProgram_t, class CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> > *, class CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> > *); /* linkage=_ZN4CVfx29CopySkipRulesForComboIteratorE12VfxProgram_tP10CUtlVectorI8CVfxRule10CUtlMemoryIS2_iEES6_ */
	void CreateInheritedSkipRulesForProgram(class CVfx *, enum VfxProgram_t); /* linkage=_ZN4CVfx34CreateInheritedSkipRulesForProgramE12VfxProgram_t */
	bool HasShaderProgram(const class CVfx  *, enum VfxProgram_t); /* linkage=_ZNK4CVfx16HasShaderProgramE12VfxProgram_t */
	bool IsComputeShader(const class CVfx  *); /* linkage=_ZNK4CVfx15IsComputeShaderEv */
	class CUtlStringToken GetFilenameToken(const class CVfx  *); /* linkage=_ZNK4CVfx16GetFilenameTokenEv */
	/* <697cd77> ../common/vfx/vfx_common.h:1280 */
	const char  * GetFilename(const class CVfx  *); /* linkage=_ZNK4CVfx11GetFilenameEv */
	class CUtlBuffer * Serialize(class CVfx *); /* linkage=_ZN4CVfx9SerializeEv */
	bool InitializeWrite(class CVfx *); /* linkage=_ZN4CVfx15InitializeWriteEv */
	bool WriteProgramToBuffer(class CVfx *, enum VfxProgram_t, class CVfxByteCodeManager *, class CUtlBuffer *); /* linkage=_ZN4CVfx20WriteProgramToBufferE12VfxProgram_tP19CVfxByteCodeManagerP10CUtlBuffer */
	bool WriteCombo(class CVfx *, enum VfxProgram_t, uint64, uint64, class VfxCompiledShaderInfo_t *); /* linkage=_ZN4CVfx10WriteComboE12VfxProgram_tyyP23VfxCompiledShaderInfo_t */
	bool FinalizeCompile(class CVfx *); /* linkage=_ZN4CVfx15FinalizeCompileEv */
	const char  * GetPropertiesJson(class CVfx *); /* linkage=_ZN4CVfx17GetPropertiesJsonEv */
	bool ParseModes(class CVfx *, const char  *); /* linkage=_ZN4CVfx10ParseModesEPKc */
	bool ParseVersionFromFile(class CVfx *, class CUtlBuffer &); /* linkage=_ZN4CVfx20ParseVersionFromFileER10CUtlBuffer */
	bool ParseModesFromFile(class CVfx *, class CUtlBuffer &); /* linkage=_ZN4CVfx18ParseModesFromFileER10CUtlBuffer */
	bool ParseFeaturesFromFile(class CVfx *, class CUtlBuffer &); /* linkage=_ZN4CVfx21ParseFeaturesFromFileER10CUtlBuffer */
	bool ParseCombosAndRulesFromFile(class CVfx *, enum VfxProgram_t, class CVfxProgramData *, const char  *, class CUtlBuffer &, enum VfxCompileTarget_t); /* linkage=_ZN4CVfx27ParseCombosAndRulesFromFileE12VfxProgram_tP15CVfxProgramDataPKcR10CUtlBuffer18VfxCompileTarget_t */
	bool ParseCombosAndRulesFromFileHelper(class CVfx *, enum VfxProgram_t, class CVfxProgramData *, const char  *, enum VfxCompileTarget_t, class CUtlSymbolTable &); /* linkage=_ZN4CVfx33ParseCombosAndRulesFromFileHelperE12VfxProgram_tP15CVfxProgramDataPKc18VfxCompileTarget_tR15CUtlSymbolTable */
	bool ParseCombosAndRulesFromFileHelper(class CVfx *, enum VfxProgram_t, class CVfxProgramData *, const char  *, class CUtlBuffer &, enum VfxCompileTarget_t, class CUtlSymbolTable &); /* linkage=_ZN4CVfx33ParseCombosAndRulesFromFileHelperE12VfxProgram_tP15CVfxProgramDataPKcR10CUtlBuffer18VfxCompileTarget_tR15CUtlSymbolTable */
	bool SkipAndValidateVCSHeader(const class CVfx  *, class CUtlBuffer &, const char  *, bool); /* linkage=_ZNK4CVfx24SkipAndValidateVCSHeaderER10CUtlBufferPKcb */
	bool ParseIncludeFiles(class CVfx *, char *, class CUtlString &); /* linkage=_ZN4CVfx17ParseIncludeFilesEPcR10CUtlString */
	void ComputeUiVariableListInternal(const class CVfx  *, class CUtlVector<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> > &, class CUtlVector<int, CUtlMemory<int, int> > &); /* linkage=_ZNK4CVfx29ComputeUiVariableListInternalER10CUtlVectorI23CVfxVariableDescription10CUtlMemoryIS1_iEERS0_IiS2_IiiEE */
};

// <0688A7D3> ../common/vfx/vfx_common.h:1194
// member functions: 92
// member variables: 10
// static member variable: 1
// class size: 6,096
class CVfx {
	/* ../common/vfx/vfx_common.h:1307 */
	struct ShaderHeader_t {
		/* ../common/vfx/vfx_common.h:1309 */
		struct ProgramHeader_t {
			uint32_t m_nOffset; /* 0 4 */
			uint32_t m_nSize; /* 4 4 */
		};
		ProgramHeader_t m_programs[9]; /* 0 72 */
	};
	/* tag__fprintf: const_type tag not supported! */;
private:
	static bool m_bStartupSanityCheckDone; /* 0 0 */
	CPathBufferString m_filename; /* 0 208 */
	CUtlStringToken m_filenameToken; /* 208 4 */
	int32 m_nVersion; /* 212 4 */
	uint32 m_nSerialized1; /* 216 4 */
	CUtlVector<CVfxMode, CUtlMemory<CVfxMode, int> > m_modeArray; /* 224 32 */
	CVfxProgramData m_programArray[9]; /* 256 5544 */
	VfxCompileTarget_t m_compileTarget; /* 5800 4 */
	bool m_bHasShaderProgram[9]; /* 5804 9 */
	/* ../common/vfx/vfx_common.h:1222 */
	void Reset(CVfx* );
	/* ../common/vfx/vfx_common.h:1225 */
	void CVfx(CVfx* );
	/* ../common/vfx/vfx_common.h:1226 */
	void ~CVfx(CVfx* );
	/* ../common/vfx/vfx_common.h:1229 */
	void StartupSanityCheck(CVfx* );
	/* ../common/vfx/vfx_common.h:1232 */
	bool CreateFromShaderFile(CVfx* , const char* , VfxCompileTarget_t, uint);
	/* ../common/vfx/vfx_common.h:1234 */
	bool CreateFromResourceFile(CVfx* , const char* , VfxCompileTarget_t, uint, bool);
	/* ../common/vfx/vfx_common.h:1235 */
	bool CreateFromResourceBuffer(CVfx* , CUtlBuffer& , VfxCompileTarget_t, uint, bool);
	/* ../common/vfx/vfx_common.h:1237 */
	bool ParseRuleFromText(CVfx* , CVfxRule* , CVfxProgramData* , char* , const char* , VfxRuleType_t);
	/* ../common/vfx/vfx_common.h:1241 */
	void ApplyRules(const CVfx* , const CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> >& , ConstValueArrayPtr_t* , VfxComboValueVector_t** );
	/* ../common/vfx/vfx_common.h:1240 */
	typedef const const VfxComboValueVector_t * ConstValueArrayPtr_t;
	/* ../common/vfx/vfx_common.h:1244 */
	void ApplyRules(const CVfx* , const CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> >& , const VfxComboValue_t** , VfxComboValue_t** );
	/* ../common/vfx/vfx_common.h:1247 */
	void GenerateUiFeatureHiddenRuleErrorIndices(const CVfx* , const VfxComboValueVector_t& , CUtlVector<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >* );
	/* ../common/vfx/vfx_common.h:1250 */
	void ComputeUiVariableListAndFeatureVariableIndices(CVfx* , CUtlVector<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >& , CUtlVector<int, CUtlMemory<int, int> >& , VfxComboValueVector_t& );
	/* ../common/vfx/vfx_common.h:1253 */
	void GetUiShaderAttributesForFeature(CVfx* , CUtlVector<CVfxShaderAttribute, CUtlMemory<CVfxShaderAttribute, int> >& , VfxComboValueVector_t& );
	/* ../common/vfx/vfx_common.h:1256 */
	CUtlVector<CVfxCombo, CUtlMemory<CVfxCombo, int> >& FeatureArray(CVfx* );
	/* ../common/vfx/vfx_common.h:1257 */
	const CUtlVector<CVfxCombo, CUtlMemory<CVfxCombo, int> >& FeatureArray(const CVfx* );
	/* ../common/vfx/vfx_common.h:1259 */
	CVfxCombo& Feature(CVfx* , int);
	/* ../common/vfx/vfx_common.h:1260 */
	const CVfxCombo& Feature(const CVfx* , int);
	/* ../common/vfx/vfx_common.h:1262 */
	CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> >& FeatureRuleArray(CVfx* );
	/* ../common/vfx/vfx_common.h:1263 */
	const CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> >& FeatureRuleArray(const CVfx* );
	/* ../common/vfx/vfx_common.h:1265 */
	int FindFeatureByName(const CVfx* , const char* );
	/* ../common/vfx/vfx_common.h:1267 */
	CVfxProgramData& VS(CVfx* );
	/* ../common/vfx/vfx_common.h:1268 */
	const CVfxProgramData& VS(const CVfx* );
	/* ../common/vfx/vfx_common.h:1269 */
	CVfxProgramData& PS(CVfx* );
	/* ../common/vfx/vfx_common.h:1270 */
	const CVfxProgramData& PS(const CVfx* );
	/* ../common/vfx/vfx_common.h:1272 */
	void CopySkipRulesForComboIterator(CVfx* , VfxProgram_t, CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> >* , CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> >* );
	/* ../common/vfx/vfx_common.h:1273 */
	void CreateInheritedSkipRulesForProgram(CVfx* , VfxProgram_t);
	/* ../common/vfx/vfx_common.h:1275 */
	bool HasShaderProgram(const CVfx* , VfxProgram_t);
	/* ../common/vfx/vfx_common.h:1277 */
	bool IsComputeShader(const CVfx* );
	/* ../common/vfx/vfx_common.h:1279 */
	CUtlStringToken GetFilenameToken(const CVfx* );
	/* ../common/vfx/vfx_common.h:1280 */
	const char* GetFilename(const CVfx* );
	/* ../common/vfx/vfx_common.h:1282 */
	CUtlBuffer* Serialize(CVfx* );
	/* ../common/vfx/vfx_common.h:1284 */
	bool InitializeWrite(CVfx* );
	/* ../common/vfx/vfx_common.h:1285 */
	bool WriteProgramToBuffer(CVfx* , VfxProgram_t, CVfxByteCodeManager* , CUtlBuffer* );
	/* ../common/vfx/vfx_common.h:1286 */
	bool WriteCombo(CVfx* , VfxProgram_t, uint64, uint64, VfxCompiledShaderInfo_t* );
	/* ../common/vfx/vfx_common.h:1287 */
	bool FinalizeCompile(CVfx* );
	/* ../common/vfx/vfx_common.h:1289 */
	const char* GetPropertiesJson(CVfx* );
	/* ../common/vfx/vfx_common.h:1293 */
	bool ParseModes(CVfx* , const char* );
	/* ../common/vfx/vfx_common.h:1294 */
	bool ParseVersionFromFile(CVfx* , CUtlBuffer& );
	/* ../common/vfx/vfx_common.h:1295 */
	bool ParseModesFromFile(CVfx* , CUtlBuffer& );
	/* ../common/vfx/vfx_common.h:1296 */
	bool ParseFeaturesFromFile(CVfx* , CUtlBuffer& );
	/* ../common/vfx/vfx_common.h:1297 */
	bool ParseCombosAndRulesFromFile(CVfx* , VfxProgram_t, CVfxProgramData* , const char* , CUtlBuffer& , VfxCompileTarget_t);
	/* ../common/vfx/vfx_common.h:1298 */
	bool ParseCombosAndRulesFromFileHelper(CVfx* , VfxProgram_t, CVfxProgramData* , const char* , VfxCompileTarget_t, CUtlSymbolTable& );
	/* ../common/vfx/vfx_common.h:1299 */
	bool ParseCombosAndRulesFromFileHelper(CVfx* , VfxProgram_t, CVfxProgramData* , const char* , CUtlBuffer& , VfxCompileTarget_t, CUtlSymbolTable& );
	/* ../common/vfx/vfx_common.h:1300 */
	bool SkipAndValidateVCSHeader(const CVfx* , CUtlBuffer& , const char* , bool);
	/* ../common/vfx/vfx_common.h:1301 */
	bool ParseIncludeFiles(CVfx* , char* , CUtlString& );
	/* ../common/vfx/vfx_common.h:1303 */
	void ComputeUiVariableListInternal(const CVfx* , CUtlVector<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >& , CUtlVector<int, CUtlMemory<int, int> >& );
	ShaderHeader_t m_header; /* 5816 72 */
	CPathBufferString m_shaderPath; /* 5888 208 */
	void Reset(class CVfx *); /* linkage=_ZN4CVfx5ResetEv */
	void CVfx(class CVfx *); /* linkage=_ZN4CVfxC4Ev */
	void ~CVfx(class CVfx *); /* linkage=_ZN4CVfxD4Ev */
	/* <697e10a> vfx/vfx_common.cpp:5876 */
	void StartupSanityCheck(class CVfx *); /* linkage=_ZN4CVfx18StartupSanityCheckEv */
	bool CreateFromShaderFile(class CVfx *, const char  *, enum VfxCompileTarget_t, uint); /* linkage=_ZN4CVfx20CreateFromShaderFileEPKc18VfxCompileTarget_tj */
	bool CreateFromResourceFile(class CVfx *, const char  *, enum VfxCompileTarget_t, uint, bool); /* linkage=_ZN4CVfx22CreateFromResourceFileEPKc18VfxCompileTarget_tjb */
	bool CreateFromResourceBuffer(class CVfx *, class CUtlBuffer &, enum VfxCompileTarget_t, uint, bool); /* linkage=_ZN4CVfx24CreateFromResourceBufferER10CUtlBuffer18VfxCompileTarget_tjb */
	bool ParseRuleFromText(class CVfx *, class CVfxRule *, class CVfxProgramData *, char *, const char  *, enum VfxRuleType_t); /* linkage=_ZN4CVfx17ParseRuleFromTextEP8CVfxRuleP15CVfxProgramDataPcPKc13VfxRuleType_t */
	void ApplyRules(const class CVfx  *, const class CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> >  &, ConstValueArrayPtr_t *, VfxComboValueVector_t * *); /* linkage=_ZNK4CVfx10ApplyRulesERK10CUtlVectorI8CVfxRule10CUtlMemoryIS1_iEEPKPK27CUtlLeanVectorFixedGrowableIhLt12EsEPPS8_ */
	void ApplyRules(const class CVfx  *, const class CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> >  &, const VfxComboValue_t  * *, VfxComboValue_t * *); /* linkage=_ZNK4CVfx10ApplyRulesERK10CUtlVectorI8CVfxRule10CUtlMemoryIS1_iEEPPKhPPh */
	void GenerateUiFeatureHiddenRuleErrorIndices(const class CVfx  *, const VfxComboValueVector_t  &, class CUtlVector<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> > *); /* linkage=_ZNK4CVfx39GenerateUiFeatureHiddenRuleErrorIndicesERK27CUtlLeanVectorFixedGrowableIhLt12EsEP10CUtlVectorIS4_Ii10CUtlMemoryIiiEES5_IS7_iEE */
	void ComputeUiVariableListAndFeatureVariableIndices(class CVfx *, class CUtlVector<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> > &, class CUtlVector<int, CUtlMemory<int, int> > &, VfxComboValueVector_t &); /* linkage=_ZN4CVfx46ComputeUiVariableListAndFeatureVariableIndicesER10CUtlVectorI23CVfxVariableDescription10CUtlMemoryIS1_iEERS0_IiS2_IiiEER27CUtlLeanVectorFixedGrowableIhLt12EsE */
	void GetUiShaderAttributesForFeature(class CVfx *, class CUtlVector<CVfxShaderAttribute, CUtlMemory<CVfxShaderAttribute, int> > &, VfxComboValueVector_t &); /* linkage=_ZN4CVfx31GetUiShaderAttributesForFeatureER10CUtlVectorI19CVfxShaderAttribute10CUtlMemoryIS1_iEER27CUtlLeanVectorFixedGrowableIhLt12EsE */
	class CUtlVector<CVfxCombo, CUtlMemory<CVfxCombo, int> > & FeatureArray(class CVfx *); /* linkage=_ZN4CVfx12FeatureArrayEv */
	const class CUtlVector<CVfxCombo, CUtlMemory<CVfxCombo, int> >  & FeatureArray(const class CVfx  *); /* linkage=_ZNK4CVfx12FeatureArrayEv */
	class CVfxCombo & Feature(class CVfx *, int); /* linkage=_ZN4CVfx7FeatureEi */
	const class CVfxCombo  & Feature(const class CVfx  *, int); /* linkage=_ZNK4CVfx7FeatureEi */
	class CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> > & FeatureRuleArray(class CVfx *); /* linkage=_ZN4CVfx16FeatureRuleArrayEv */
	const class CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> >  & FeatureRuleArray(const class CVfx  *); /* linkage=_ZNK4CVfx16FeatureRuleArrayEv */
	int FindFeatureByName(const class CVfx  *, const char  *); /* linkage=_ZNK4CVfx17FindFeatureByNameEPKc */
	class CVfxProgramData & VS(class CVfx *); /* linkage=_ZN4CVfx2VSEv */
	const class CVfxProgramData  & VS(const class CVfx  *); /* linkage=_ZNK4CVfx2VSEv */
	class CVfxProgramData & PS(class CVfx *); /* linkage=_ZN4CVfx2PSEv */
	const class CVfxProgramData  & PS(const class CVfx  *); /* linkage=_ZNK4CVfx2PSEv */
	void CopySkipRulesForComboIterator(class CVfx *, enum VfxProgram_t, class CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> > *, class CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> > *); /* linkage=_ZN4CVfx29CopySkipRulesForComboIteratorE12VfxProgram_tP10CUtlVectorI8CVfxRule10CUtlMemoryIS2_iEES6_ */
	void CreateInheritedSkipRulesForProgram(class CVfx *, enum VfxProgram_t); /* linkage=_ZN4CVfx34CreateInheritedSkipRulesForProgramE12VfxProgram_t */
	bool HasShaderProgram(const class CVfx  *, enum VfxProgram_t); /* linkage=_ZNK4CVfx16HasShaderProgramE12VfxProgram_t */
	bool IsComputeShader(const class CVfx  *); /* linkage=_ZNK4CVfx15IsComputeShaderEv */
	class CUtlStringToken GetFilenameToken(const class CVfx  *); /* linkage=_ZNK4CVfx16GetFilenameTokenEv */
	/* <697cd77> ../common/vfx/vfx_common.h:1280 */
	const char  * GetFilename(const class CVfx  *); /* linkage=_ZNK4CVfx11GetFilenameEv */
	class CUtlBuffer * Serialize(class CVfx *); /* linkage=_ZN4CVfx9SerializeEv */
	bool InitializeWrite(class CVfx *); /* linkage=_ZN4CVfx15InitializeWriteEv */
	bool WriteProgramToBuffer(class CVfx *, enum VfxProgram_t, class CVfxByteCodeManager *, class CUtlBuffer *); /* linkage=_ZN4CVfx20WriteProgramToBufferE12VfxProgram_tP19CVfxByteCodeManagerP10CUtlBuffer */
	bool WriteCombo(class CVfx *, enum VfxProgram_t, uint64, uint64, class VfxCompiledShaderInfo_t *); /* linkage=_ZN4CVfx10WriteComboE12VfxProgram_tyyP23VfxCompiledShaderInfo_t */
	bool FinalizeCompile(class CVfx *); /* linkage=_ZN4CVfx15FinalizeCompileEv */
	const char  * GetPropertiesJson(class CVfx *); /* linkage=_ZN4CVfx17GetPropertiesJsonEv */
	bool ParseModes(class CVfx *, const char  *); /* linkage=_ZN4CVfx10ParseModesEPKc */
	bool ParseVersionFromFile(class CVfx *, class CUtlBuffer &); /* linkage=_ZN4CVfx20ParseVersionFromFileER10CUtlBuffer */
	bool ParseModesFromFile(class CVfx *, class CUtlBuffer &); /* linkage=_ZN4CVfx18ParseModesFromFileER10CUtlBuffer */
	bool ParseFeaturesFromFile(class CVfx *, class CUtlBuffer &); /* linkage=_ZN4CVfx21ParseFeaturesFromFileER10CUtlBuffer */
	bool ParseCombosAndRulesFromFile(class CVfx *, enum VfxProgram_t, class CVfxProgramData *, const char  *, class CUtlBuffer &, enum VfxCompileTarget_t); /* linkage=_ZN4CVfx27ParseCombosAndRulesFromFileE12VfxProgram_tP15CVfxProgramDataPKcR10CUtlBuffer18VfxCompileTarget_t */
	bool ParseCombosAndRulesFromFileHelper(class CVfx *, enum VfxProgram_t, class CVfxProgramData *, const char  *, enum VfxCompileTarget_t, class CUtlSymbolTable &); /* linkage=_ZN4CVfx33ParseCombosAndRulesFromFileHelperE12VfxProgram_tP15CVfxProgramDataPKc18VfxCompileTarget_tR15CUtlSymbolTable */
	bool ParseCombosAndRulesFromFileHelper(class CVfx *, enum VfxProgram_t, class CVfxProgramData *, const char  *, class CUtlBuffer &, enum VfxCompileTarget_t, class CUtlSymbolTable &); /* linkage=_ZN4CVfx33ParseCombosAndRulesFromFileHelperE12VfxProgram_tP15CVfxProgramDataPKcR10CUtlBuffer18VfxCompileTarget_tR15CUtlSymbolTable */
	bool SkipAndValidateVCSHeader(const class CVfx  *, class CUtlBuffer &, const char  *, bool); /* linkage=_ZNK4CVfx24SkipAndValidateVCSHeaderER10CUtlBufferPKcb */
	bool ParseIncludeFiles(class CVfx *, char *, class CUtlString &); /* linkage=_ZN4CVfx17ParseIncludeFilesEPcR10CUtlString */
	void ComputeUiVariableListInternal(const class CVfx  *, class CUtlVector<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> > &, class CUtlVector<int, CUtlMemory<int, int> > &); /* linkage=_ZNK4CVfx29ComputeUiVariableListInternalER10CUtlVectorI23CVfxVariableDescription10CUtlMemoryIS1_iEERS0_IiS2_IiiEE */
};

// <000282C3> ../../common/vfx/vfx_common.h:1194
// member functions: 92
// member variables: 10
// static member variable: 1
// class size: 6,096
class CVfx {
	/* ../../common/vfx/vfx_common.h:1307 */
	struct ShaderHeader_t {
		/* ../../common/vfx/vfx_common.h:1309 */
		struct ProgramHeader_t {
			uint32_t m_nOffset; /* 0 4 */
			uint32_t m_nSize; /* 4 4 */
		};
		ProgramHeader_t m_programs[9]; /* 0 72 */
	};
private:
	static bool m_bStartupSanityCheckDone; /* 0 0 */
	CPathBufferString m_filename; /* 0 208 */
	CUtlStringToken m_filenameToken; /* 208 4 */
	int32 m_nVersion; /* 212 4 */
	uint32 m_nSerialized1; /* 216 4 */
	CUtlVector<CVfxMode, CUtlMemory<CVfxMode, int> > m_modeArray; /* 224 32 */
	CVfxProgramData m_programArray[9]; /* 256 5544 */
	VfxCompileTarget_t m_compileTarget; /* 5800 4 */
	bool m_bHasShaderProgram[9]; /* 5804 9 */
	/* ../../common/vfx/vfx_common.h:1222 */
	void Reset(CVfx* );
	/* ../../common/vfx/vfx_common.h:1225 */
	void CVfx(CVfx* );
	/* ../../common/vfx/vfx_common.h:1226 */
	void ~CVfx(CVfx* );
	/* ../../common/vfx/vfx_common.h:1229 */
	void StartupSanityCheck(CVfx* );
	/* ../../common/vfx/vfx_common.h:1232 */
	bool CreateFromShaderFile(CVfx* , const char* , VfxCompileTarget_t, uint);
	/* ../../common/vfx/vfx_common.h:1234 */
	bool CreateFromResourceFile(CVfx* , const char* , VfxCompileTarget_t, uint, bool);
	/* ../../common/vfx/vfx_common.h:1235 */
	bool CreateFromResourceBuffer(CVfx* , CUtlBuffer& , VfxCompileTarget_t, uint, bool);
	/* ../../common/vfx/vfx_common.h:1237 */
	bool ParseRuleFromText(CVfx* , CVfxRule* , CVfxProgramData* , char* , const char* , VfxRuleType_t);
	/* ../../common/vfx/vfx_common.h:1241 */
	void ApplyRules(const CVfx* , const CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> >& , ConstValueArrayPtr_t* , VfxComboValueVector_t** );
	/* ../../common/vfx/vfx_common.h:1240 */
	typedef const const VfxComboValueVector_t * ConstValueArrayPtr_t;
	/* ../../common/vfx/vfx_common.h:1244 */
	void ApplyRules(const CVfx* , const CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> >& , const VfxComboValue_t** , VfxComboValue_t** );
	/* ../../common/vfx/vfx_common.h:1247 */
	void GenerateUiFeatureHiddenRuleErrorIndices(const CVfx* , const VfxComboValueVector_t& , CUtlVector<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >* );
	/* ../../common/vfx/vfx_common.h:1250 */
	void ComputeUiVariableListAndFeatureVariableIndices(CVfx* , CUtlVector<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >& , CUtlVector<int, CUtlMemory<int, int> >& , VfxComboValueVector_t& );
	/* ../../common/vfx/vfx_common.h:1253 */
	void GetUiShaderAttributesForFeature(CVfx* , CUtlVector<CVfxShaderAttribute, CUtlMemory<CVfxShaderAttribute, int> >& , VfxComboValueVector_t& );
	/* ../../common/vfx/vfx_common.h:1256 */
	CUtlVector<CVfxCombo, CUtlMemory<CVfxCombo, int> >& FeatureArray(CVfx* );
	/* ../../common/vfx/vfx_common.h:1257 */
	const CUtlVector<CVfxCombo, CUtlMemory<CVfxCombo, int> >& FeatureArray(const CVfx* );
	/* ../../common/vfx/vfx_common.h:1259 */
	CVfxCombo& Feature(CVfx* , int);
	/* ../../common/vfx/vfx_common.h:1260 */
	const CVfxCombo& Feature(const CVfx* , int);
	/* ../../common/vfx/vfx_common.h:1262 */
	CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> >& FeatureRuleArray(CVfx* );
	/* ../../common/vfx/vfx_common.h:1263 */
	const CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> >& FeatureRuleArray(const CVfx* );
	/* ../../common/vfx/vfx_common.h:1265 */
	int FindFeatureByName(const CVfx* , const char* );
	/* ../../common/vfx/vfx_common.h:1267 */
	CVfxProgramData& VS(CVfx* );
	/* ../../common/vfx/vfx_common.h:1268 */
	const CVfxProgramData& VS(const CVfx* );
	/* ../../common/vfx/vfx_common.h:1269 */
	CVfxProgramData& PS(CVfx* );
	/* ../../common/vfx/vfx_common.h:1270 */
	const CVfxProgramData& PS(const CVfx* );
	/* ../../common/vfx/vfx_common.h:1272 */
	void CopySkipRulesForComboIterator(CVfx* , VfxProgram_t, CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> >* , CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> >* );
	/* ../../common/vfx/vfx_common.h:1273 */
	void CreateInheritedSkipRulesForProgram(CVfx* , VfxProgram_t);
	/* ../../common/vfx/vfx_common.h:1275 */
	bool HasShaderProgram(const CVfx* , VfxProgram_t);
	/* ../../common/vfx/vfx_common.h:1277 */
	bool IsComputeShader(const CVfx* );
	/* ../../common/vfx/vfx_common.h:1279 */
	CUtlStringToken GetFilenameToken(const CVfx* );
	/* ../../common/vfx/vfx_common.h:1280 */
	const char* GetFilename(const CVfx* );
	/* ../../common/vfx/vfx_common.h:1282 */
	CUtlBuffer* Serialize(CVfx* );
	/* ../../common/vfx/vfx_common.h:1284 */
	bool InitializeWrite(CVfx* );
	/* ../../common/vfx/vfx_common.h:1285 */
	bool WriteProgramToBuffer(CVfx* , VfxProgram_t, CVfxByteCodeManager* , CUtlBuffer* );
	/* ../../common/vfx/vfx_common.h:1286 */
	bool WriteCombo(CVfx* , VfxProgram_t, uint64, uint64, VfxCompiledShaderInfo_t* );
	/* ../../common/vfx/vfx_common.h:1287 */
	bool FinalizeCompile(CVfx* );
	/* ../../common/vfx/vfx_common.h:1289 */
	const char* GetPropertiesJson(CVfx* );
	/* ../../common/vfx/vfx_common.h:1293 */
	bool ParseModes(CVfx* , const char* );
	/* ../../common/vfx/vfx_common.h:1294 */
	bool ParseVersionFromFile(CVfx* , CUtlBuffer& );
	/* ../../common/vfx/vfx_common.h:1295 */
	bool ParseModesFromFile(CVfx* , CUtlBuffer& );
	/* ../../common/vfx/vfx_common.h:1296 */
	bool ParseFeaturesFromFile(CVfx* , CUtlBuffer& );
	/* ../../common/vfx/vfx_common.h:1297 */
	bool ParseCombosAndRulesFromFile(CVfx* , VfxProgram_t, CVfxProgramData* , const char* , CUtlBuffer& , VfxCompileTarget_t);
	/* ../../common/vfx/vfx_common.h:1298 */
	bool ParseCombosAndRulesFromFileHelper(CVfx* , VfxProgram_t, CVfxProgramData* , const char* , VfxCompileTarget_t, CUtlSymbolTable& );
	/* ../../common/vfx/vfx_common.h:1299 */
	bool ParseCombosAndRulesFromFileHelper(CVfx* , VfxProgram_t, CVfxProgramData* , const char* , CUtlBuffer& , VfxCompileTarget_t, CUtlSymbolTable& );
	/* ../../common/vfx/vfx_common.h:1300 */
	bool SkipAndValidateVCSHeader(const CVfx* , CUtlBuffer& , const char* , bool);
	/* ../../common/vfx/vfx_common.h:1301 */
	bool ParseIncludeFiles(CVfx* , char* , CUtlString& );
	/* ../../common/vfx/vfx_common.h:1303 */
	void ComputeUiVariableListInternal(const CVfx* , CUtlVector<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >& , CUtlVector<int, CUtlMemory<int, int> >& );
	ShaderHeader_t m_header; /* 5816 72 */
	CPathBufferString m_shaderPath; /* 5888 208 */
	void Reset(class CVfx *); /* linkage=_ZN4CVfx5ResetEv */
	void CVfx(class CVfx *); /* linkage=_ZN4CVfxC4Ev */
	void ~CVfx(class CVfx *); /* linkage=_ZN4CVfxD4Ev */
	/* <697e10a> vfx/vfx_common.cpp:5876 */
	void StartupSanityCheck(class CVfx *); /* linkage=_ZN4CVfx18StartupSanityCheckEv */
	bool CreateFromShaderFile(class CVfx *, const char  *, enum VfxCompileTarget_t, uint); /* linkage=_ZN4CVfx20CreateFromShaderFileEPKc18VfxCompileTarget_tj */
	bool CreateFromResourceFile(class CVfx *, const char  *, enum VfxCompileTarget_t, uint, bool); /* linkage=_ZN4CVfx22CreateFromResourceFileEPKc18VfxCompileTarget_tjb */
	bool CreateFromResourceBuffer(class CVfx *, class CUtlBuffer &, enum VfxCompileTarget_t, uint, bool); /* linkage=_ZN4CVfx24CreateFromResourceBufferER10CUtlBuffer18VfxCompileTarget_tjb */
	bool ParseRuleFromText(class CVfx *, class CVfxRule *, class CVfxProgramData *, char *, const char  *, enum VfxRuleType_t); /* linkage=_ZN4CVfx17ParseRuleFromTextEP8CVfxRuleP15CVfxProgramDataPcPKc13VfxRuleType_t */
	void ApplyRules(const class CVfx  *, const class CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> >  &, ConstValueArrayPtr_t *, VfxComboValueVector_t * *); /* linkage=_ZNK4CVfx10ApplyRulesERK10CUtlVectorI8CVfxRule10CUtlMemoryIS1_iEEPKPK27CUtlLeanVectorFixedGrowableIhLt12EsEPPS8_ */
	void ApplyRules(const class CVfx  *, const class CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> >  &, const VfxComboValue_t  * *, VfxComboValue_t * *); /* linkage=_ZNK4CVfx10ApplyRulesERK10CUtlVectorI8CVfxRule10CUtlMemoryIS1_iEEPPKhPPh */
	void GenerateUiFeatureHiddenRuleErrorIndices(const class CVfx  *, const VfxComboValueVector_t  &, class CUtlVector<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> > *); /* linkage=_ZNK4CVfx39GenerateUiFeatureHiddenRuleErrorIndicesERK27CUtlLeanVectorFixedGrowableIhLt12EsEP10CUtlVectorIS4_Ii10CUtlMemoryIiiEES5_IS7_iEE */
	void ComputeUiVariableListAndFeatureVariableIndices(class CVfx *, class CUtlVector<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> > &, class CUtlVector<int, CUtlMemory<int, int> > &, VfxComboValueVector_t &); /* linkage=_ZN4CVfx46ComputeUiVariableListAndFeatureVariableIndicesER10CUtlVectorI23CVfxVariableDescription10CUtlMemoryIS1_iEERS0_IiS2_IiiEER27CUtlLeanVectorFixedGrowableIhLt12EsE */
	void GetUiShaderAttributesForFeature(class CVfx *, class CUtlVector<CVfxShaderAttribute, CUtlMemory<CVfxShaderAttribute, int> > &, VfxComboValueVector_t &); /* linkage=_ZN4CVfx31GetUiShaderAttributesForFeatureER10CUtlVectorI19CVfxShaderAttribute10CUtlMemoryIS1_iEER27CUtlLeanVectorFixedGrowableIhLt12EsE */
	class CUtlVector<CVfxCombo, CUtlMemory<CVfxCombo, int> > & FeatureArray(class CVfx *); /* linkage=_ZN4CVfx12FeatureArrayEv */
	const class CUtlVector<CVfxCombo, CUtlMemory<CVfxCombo, int> >  & FeatureArray(const class CVfx  *); /* linkage=_ZNK4CVfx12FeatureArrayEv */
	class CVfxCombo & Feature(class CVfx *, int); /* linkage=_ZN4CVfx7FeatureEi */
	const class CVfxCombo  & Feature(const class CVfx  *, int); /* linkage=_ZNK4CVfx7FeatureEi */
	class CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> > & FeatureRuleArray(class CVfx *); /* linkage=_ZN4CVfx16FeatureRuleArrayEv */
	const class CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> >  & FeatureRuleArray(const class CVfx  *); /* linkage=_ZNK4CVfx16FeatureRuleArrayEv */
	int FindFeatureByName(const class CVfx  *, const char  *); /* linkage=_ZNK4CVfx17FindFeatureByNameEPKc */
	class CVfxProgramData & VS(class CVfx *); /* linkage=_ZN4CVfx2VSEv */
	const class CVfxProgramData  & VS(const class CVfx  *); /* linkage=_ZNK4CVfx2VSEv */
	class CVfxProgramData & PS(class CVfx *); /* linkage=_ZN4CVfx2PSEv */
	const class CVfxProgramData  & PS(const class CVfx  *); /* linkage=_ZNK4CVfx2PSEv */
	void CopySkipRulesForComboIterator(class CVfx *, enum VfxProgram_t, class CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> > *, class CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> > *); /* linkage=_ZN4CVfx29CopySkipRulesForComboIteratorE12VfxProgram_tP10CUtlVectorI8CVfxRule10CUtlMemoryIS2_iEES6_ */
	void CreateInheritedSkipRulesForProgram(class CVfx *, enum VfxProgram_t); /* linkage=_ZN4CVfx34CreateInheritedSkipRulesForProgramE12VfxProgram_t */
	bool HasShaderProgram(const class CVfx  *, enum VfxProgram_t); /* linkage=_ZNK4CVfx16HasShaderProgramE12VfxProgram_t */
	bool IsComputeShader(const class CVfx  *); /* linkage=_ZNK4CVfx15IsComputeShaderEv */
	class CUtlStringToken GetFilenameToken(const class CVfx  *); /* linkage=_ZNK4CVfx16GetFilenameTokenEv */
	/* <697cd77> ../common/vfx/vfx_common.h:1280 */
	const char  * GetFilename(const class CVfx  *); /* linkage=_ZNK4CVfx11GetFilenameEv */
	class CUtlBuffer * Serialize(class CVfx *); /* linkage=_ZN4CVfx9SerializeEv */
	bool InitializeWrite(class CVfx *); /* linkage=_ZN4CVfx15InitializeWriteEv */
	bool WriteProgramToBuffer(class CVfx *, enum VfxProgram_t, class CVfxByteCodeManager *, class CUtlBuffer *); /* linkage=_ZN4CVfx20WriteProgramToBufferE12VfxProgram_tP19CVfxByteCodeManagerP10CUtlBuffer */
	bool WriteCombo(class CVfx *, enum VfxProgram_t, uint64, uint64, class VfxCompiledShaderInfo_t *); /* linkage=_ZN4CVfx10WriteComboE12VfxProgram_tyyP23VfxCompiledShaderInfo_t */
	bool FinalizeCompile(class CVfx *); /* linkage=_ZN4CVfx15FinalizeCompileEv */
	const char  * GetPropertiesJson(class CVfx *); /* linkage=_ZN4CVfx17GetPropertiesJsonEv */
	bool ParseModes(class CVfx *, const char  *); /* linkage=_ZN4CVfx10ParseModesEPKc */
	bool ParseVersionFromFile(class CVfx *, class CUtlBuffer &); /* linkage=_ZN4CVfx20ParseVersionFromFileER10CUtlBuffer */
	bool ParseModesFromFile(class CVfx *, class CUtlBuffer &); /* linkage=_ZN4CVfx18ParseModesFromFileER10CUtlBuffer */
	bool ParseFeaturesFromFile(class CVfx *, class CUtlBuffer &); /* linkage=_ZN4CVfx21ParseFeaturesFromFileER10CUtlBuffer */
	bool ParseCombosAndRulesFromFile(class CVfx *, enum VfxProgram_t, class CVfxProgramData *, const char  *, class CUtlBuffer &, enum VfxCompileTarget_t); /* linkage=_ZN4CVfx27ParseCombosAndRulesFromFileE12VfxProgram_tP15CVfxProgramDataPKcR10CUtlBuffer18VfxCompileTarget_t */
	bool ParseCombosAndRulesFromFileHelper(class CVfx *, enum VfxProgram_t, class CVfxProgramData *, const char  *, enum VfxCompileTarget_t, class CUtlSymbolTable &); /* linkage=_ZN4CVfx33ParseCombosAndRulesFromFileHelperE12VfxProgram_tP15CVfxProgramDataPKc18VfxCompileTarget_tR15CUtlSymbolTable */
	bool ParseCombosAndRulesFromFileHelper(class CVfx *, enum VfxProgram_t, class CVfxProgramData *, const char  *, class CUtlBuffer &, enum VfxCompileTarget_t, class CUtlSymbolTable &); /* linkage=_ZN4CVfx33ParseCombosAndRulesFromFileHelperE12VfxProgram_tP15CVfxProgramDataPKcR10CUtlBuffer18VfxCompileTarget_tR15CUtlSymbolTable */
	bool SkipAndValidateVCSHeader(const class CVfx  *, class CUtlBuffer &, const char  *, bool); /* linkage=_ZNK4CVfx24SkipAndValidateVCSHeaderER10CUtlBufferPKcb */
	bool ParseIncludeFiles(class CVfx *, char *, class CUtlString &); /* linkage=_ZN4CVfx17ParseIncludeFilesEPcR10CUtlString */
	void ComputeUiVariableListInternal(const class CVfx  *, class CUtlVector<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> > &, class CUtlVector<int, CUtlMemory<int, int> > &); /* linkage=_ZNK4CVfx29ComputeUiVariableListInternalER10CUtlVectorI23CVfxVariableDescription10CUtlMemoryIS1_iEERS0_IiS2_IiiEE */
};

// <01259CEF> ../common/vfx/vfx_common.h:1225
void CVfx::CVfx()
{
} /* size: 0 */

// <0039D4A4> ../common/vfx/vfx_common.h:1226
void CVfx::~CVfx()
{
} /* size: 0 */

// <06970B78> ../common/vfx/vfx_common.h:1256
inline void CVfx::FeatureArray()
{
} /* size: 0 */

// <06970B52> ../common/vfx/vfx_common.h:1259
inline void CVfx::Feature(int iFeatureIndex)
{
} /* size: 0 */

// <06970B13> ../common/vfx/vfx_common.h:1262
inline void CVfx::FeatureRuleArray()
{
} /* size: 0 */

// <0024F40B> ../../common/vfx/vfx_common.h:1265
inline void CVfx::FindFeatureByName(const char* pszName)
{
} /* size: 0 */

// <06970AD4> ../common/vfx/vfx_common.h:1275
inline void CVfx::HasShaderProgram(VfxProgram_t programType)
{
} /* size: 0 */

// <0030C78B> ../common/vfx/vfx_common.h:1279
inline void CVfx::GetFilenameToken()
{
} /* size: 0 */

// <0697CD77> ../common/vfx/vfx_common.h:1280
// function calls: 4
void CVfx::GetFilename()
{
	CBufferString::IsEmpty(); // 1280
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 1280
} /* size: 53, inline expansions: 4 (82 bytes) */

// <06970ABB> ../common/vfx/vfx_common.h:1280
inline void CVfx::GetFilename()
{
} /* size: 0 */

// <0022CBFF> ../../common/vfx/vfx_common.h:1337
void VfxSortVsInputSignature(CVsInputSignatureVector &)
{
} /* size: 0 */

// <001BFAE5> ../../common/vfx/vfx_common.h:1339
void VfxSerializeExternalConstantBufferDescription(const ConstantBufferDescription_t *, CUtlBuffer &)
{
} /* size: 0 */

// <001BFAA7> ../../common/vfx/vfx_common.h:1340
void VfxUnserializeExternalConstantBufferDescription(ConstantBufferDescription_t *, CUtlBuffer &)
{
} /* size: 0 */

// <001BFAC6> ../../common/vfx/vfx_common.h:1341
void VfxSerializeVsInputSignature(const CVsInputSignatureVector &, CUtlBuffer &)
{
} /* size: 0 */

// <001BFA82> ../../common/vfx/vfx_common.h:1342
void VfxUnserializeVsInputSignature(CVsInputSignatureVector &, CUtlBuffer &)
{
} /* size: 0 */

// <00150F3F> ../common/vfx/vfx_common.h:1345
int VfxFindOrBuildFeatureComboData(CVfx *, uint64, IRuntimeShaderCreateCallbacks *)
{
} /* size: 0 */

// <01240D5F> ../common/vfx/vfx_common.h:1353
// member functions: 32
// member variables: 7
// class size: 120
class CVfxComboIterator {
private:
	CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> > m_staticComboRuleArray; /* 0 32 */
	CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> > m_dynamicComboRuleArray; /* 32 32 */
	VfxComboValueVector_t m_staticComboValueArray __attribute__((__aligned__(8))); /* 64 16 */
	VfxComboValueVector_t m_dynamicComboValueArray __attribute__((__aligned__(8))); /* 80 16 */
	CVfxProgramData * m_pProgramData; /* 96 8 */
	uint64 m_iStaticComboId; /* 104 8 */
	uint64 m_iDynamicComboId; /* 112 8 */
	/* ../common/vfx/vfx_common.h:1368 */
	void CVfxComboIterator(CVfxComboIterator* , CVfx* , VfxProgram_t);
	/* ../common/vfx/vfx_common.h:1384 */
	void ~CVfxComboIterator(CVfxComboIterator* );
	/* ../common/vfx/vfx_common.h:1386 */
	const CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> >& GetStaticComboRuleUtlVector(const CVfxComboIterator* );
	/* ../common/vfx/vfx_common.h:1387 */
	const CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> >& GetDynamicComboRuleUtlVector(const CVfxComboIterator* );
	/* ../common/vfx/vfx_common.h:1389 */
	const VfxComboValueVector_t& GetStaticComboValueUtlVector(const CVfxComboIterator* );
	/* ../common/vfx/vfx_common.h:1390 */
	const VfxComboValueVector_t& GetDynamicComboValueUtlVector(const CVfxComboIterator* );
	/* ../common/vfx/vfx_common.h:1392 */
	uint64 CurrentStaticCombo(const CVfxComboIterator* );
	/* ../common/vfx/vfx_common.h:1393 */
	uint64 CurrentDynamicCombo(const CVfxComboIterator* );
	/* ../common/vfx/vfx_common.h:1398 */
	bool IsComboValidInternal(CVfxComboIterator* , VfxComboValueVector_t* , CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> >* , VfxComboValueVector_t* , CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> >* , bool);
	/* ../common/vfx/vfx_common.h:1537 */
	uint64 SetStaticCombo(CVfxComboIterator* , uint64);
	/* ../common/vfx/vfx_common.h:1565 */
	uint64 SetDynamicCombo(CVfxComboIterator* , uint64);
	/* ../common/vfx/vfx_common.h:1589 */
	uint64 InvalidIndex(CVfxComboIterator* );
	/* ../common/vfx/vfx_common.h:1591 */
	uint64 FirstStaticCombo(CVfxComboIterator* );
	/* ../common/vfx/vfx_common.h:1609 */
	uint64 NextStaticCombo(CVfxComboIterator* );
	/* ../common/vfx/vfx_common.h:1652 */
	uint64 FirstDynamicCombo(CVfxComboIterator* );
	/* ../common/vfx/vfx_common.h:1665 */
	uint64 NextDynamicCombo(CVfxComboIterator* );
	void CVfxComboIterator(class CVfxComboIterator *, class CVfx *, enum VfxProgram_t); /* linkage=_ZN17CVfxComboIteratorC4EP4CVfx12VfxProgram_t */
	void ~CVfxComboIterator(class CVfxComboIterator *); /* linkage=_ZN17CVfxComboIteratorD4Ev */
	const class CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> >  & GetStaticComboRuleUtlVector(const class CVfxComboIterator  *); /* linkage=_ZNK17CVfxComboIterator27GetStaticComboRuleUtlVectorEv */
	const class CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> >  & GetDynamicComboRuleUtlVector(const class CVfxComboIterator  *); /* linkage=_ZNK17CVfxComboIterator28GetDynamicComboRuleUtlVectorEv */
	const VfxComboValueVector_t  & GetStaticComboValueUtlVector(const class CVfxComboIterator  *); /* linkage=_ZNK17CVfxComboIterator28GetStaticComboValueUtlVectorEv */
	const VfxComboValueVector_t  & GetDynamicComboValueUtlVector(const class CVfxComboIterator  *); /* linkage=_ZNK17CVfxComboIterator29GetDynamicComboValueUtlVectorEv */
	uint64 CurrentStaticCombo(const class CVfxComboIterator  *); /* linkage=_ZNK17CVfxComboIterator18CurrentStaticComboEv */
	uint64 CurrentDynamicCombo(const class CVfxComboIterator  *); /* linkage=_ZNK17CVfxComboIterator19CurrentDynamicComboEv */
	bool IsComboValidInternal(class CVfxComboIterator *, VfxComboValueVector_t *, class CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> > *, VfxComboValueVector_t *, class CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> > *, bool); /* linkage=_ZN17CVfxComboIterator20IsComboValidInternalEP27CUtlLeanVectorFixedGrowableIhLt12EsEP10CUtlVectorI8CVfxRule10CUtlMemoryIS4_iEES2_S8_b */
	uint64 SetStaticCombo(class CVfxComboIterator *, uint64); /* linkage=_ZN17CVfxComboIterator14SetStaticComboEy */
	uint64 SetDynamicCombo(class CVfxComboIterator *, uint64); /* linkage=_ZN17CVfxComboIterator15SetDynamicComboEy */
	uint64 InvalidIndex(class CVfxComboIterator *); /* linkage=_ZN17CVfxComboIterator12InvalidIndexEv */
	uint64 FirstStaticCombo(class CVfxComboIterator *); /* linkage=_ZN17CVfxComboIterator16FirstStaticComboEv */
	uint64 NextStaticCombo(class CVfxComboIterator *); /* linkage=_ZN17CVfxComboIterator15NextStaticComboEv */
	uint64 FirstDynamicCombo(class CVfxComboIterator *); /* linkage=_ZN17CVfxComboIterator17FirstDynamicComboEv */
	uint64 NextDynamicCombo(class CVfxComboIterator *); /* linkage=_ZN17CVfxComboIterator16NextDynamicComboEv */
} __attribute__((__aligned__(8)));

// <06970A66> ../common/vfx/vfx_common.h:1368
void CVfxComboIterator::CVfxComboIterator(CVfx* pVfx, VfxProgram_t programType)
{
} /* size: 0 */

// <06970A33> ../common/vfx/vfx_common.h:1368
inline void CVfxComboIterator::CVfxComboIterator(CVfx* pVfx, VfxProgram_t programType)
{
} /* size: 0 */

// <06970A1C> ../common/vfx/vfx_common.h:1384
void CVfxComboIterator::~CVfxComboIterator()
{
} /* size: 0 */

// <06970A03> ../common/vfx/vfx_common.h:1384
inline void CVfxComboIterator::~CVfxComboIterator()
{
} /* size: 0 */

// <069709EA> ../common/vfx/vfx_common.h:1386
inline void CVfxComboIterator::GetStaticComboRuleUtlVector()
{
} /* size: 0 */

// <069709D1> ../common/vfx/vfx_common.h:1387
inline void CVfxComboIterator::GetDynamicComboRuleUtlVector()
{
} /* size: 0 */

// <06979E42> ../common/vfx/vfx_common.h:1398
// variables: 15
// function calls: 23
void CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> >::IsComboValidInternal()
{
	CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> >* pRuleArray; // 1402
	{
		int i; // 1413
		CUtlVectorBase<CVfxRule, CUtlMemory<CVfxRule, int> >::Count(); // 1413
		{
			CVfxRule* pRule; // 1415
			CUtlMemory<CVfxRule, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CVfxRule, CUtlMemory<CVfxRule, int> >::operator[](
					int i);  // 1415
			{
				int nNumRequired; // 1421
				int nNumInputs; // 1422
				int nNumEnabledFound; // 1425
				{
					int j; // 1426
					{
						VfxComboValueVector_t* pValueArray; // 1428
						bool bFoundMatch; // 1431
						AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
						CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
						CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 447
						CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::Element(
							int i);  // 438
						CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::operator[](
								int i);  // 1443
						AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
						CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
						CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 447
						CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::Element(
							int i);  // 438
						CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::operator[](
								int i);  // 1435
					}
				}
			}
			{
				int nNumAllowed; // 1478
				int nNumInputs; // 1479
				int nNumEnabledFound; // 1482
				{
					int j; // 1483
					{
						VfxComboValueVector_t* pValueArray; // 1485
						bool bFoundMatch; // 1488
						AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
						CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
						CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 447
						CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::Element(
							int i);  // 438
						CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::operator[](
								int i);  // 1500
						AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
						CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
						CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 447
						CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::Element(
							int i);  // 438
						CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::operator[](
								int i);  // 1492
					}
				}
			}
		}
	}
} /* size: 0, variables: 1 */

// <069708A6> ../common/vfx/vfx_common.h:1398
// variables: 15
inline void CVfxComboIterator::IsComboValidInternal(VfxComboValueVector_t* pStaticComboValueArray, CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> >* pStaticComboRuleArray, VfxComboValueVector_t* pDynamicComboValueArray, CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> >* pDynamicComboRuleArray, bool bApplyStaticCombos)
{
	CUtlVector<CVfxRule, CUtlMemory<CVfxRule, int> >* pRuleArray; // 1402
	{
		int i; // 1413
		{
			CVfxRule* pRule; // 1415
			{
				int nNumRequired; // 1421
				int nNumInputs; // 1422
				int nNumEnabledFound; // 1425
				{
					int j; // 1426
					{
						VfxComboValueVector_t* pValueArray; // 1428
						bool bFoundMatch; // 1431
					}
				}
			}
			{
				int nNumAllowed; // 1478
				int nNumInputs; // 1479
				int nNumEnabledFound; // 1482
				{
					int j; // 1483
					{
						VfxComboValueVector_t* pValueArray; // 1485
						bool bFoundMatch; // 1488
					}
				}
			}
		}
	}
} /* size: 0, variables: 1 */

// <0132342D> ../common/vfx/vfx_common.h:1537
// variables: 2
inline void CVfxComboIterator::SetStaticCombo(uint64 nStaticComboId)
{
	{
		int i; // 1541
		{
			const CVfxCombo& combo; // 1543
		}
	}
} /* size: 0 */

// <013233EB> ../common/vfx/vfx_common.h:1565
// variables: 2
inline void CVfxComboIterator::SetDynamicCombo(uint64 nDynamicComboId)
{
	{
		int i; // 1569
		{
			const CVfxCombo& combo; // 1571
		}
	}
} /* size: 0 */

// <0697088D> ../common/vfx/vfx_common.h:1589
inline void CVfxComboIterator::InvalidIndex()
{
} /* size: 0 */

// <06970856> ../common/vfx/vfx_common.h:1591
// variables: 2
inline void CVfxComboIterator::FirstStaticCombo()
{
	{
		int i; // 1596
	}
	{
		int i; // 1601
	}
} /* size: 0 */

// <06970830> ../common/vfx/vfx_common.h:1609
// variable: 1
inline void CVfxComboIterator::NextStaticCombo()
{
	{
		int i; // 1612
	}
} /* size: 0 */

// <0697080A> ../common/vfx/vfx_common.h:1652
// variable: 1
inline void CVfxComboIterator::FirstDynamicCombo()
{
	{
		int i; // 1657
	}
} /* size: 0 */

// <069707E4> ../common/vfx/vfx_common.h:1665
// variable: 1
inline void CVfxComboIterator::NextDynamicCombo()
{
	{
		int i; // 1668
	}
} /* size: 0 */

// <01258006> ../common/vfx/vfx_common.h:1714
bool ReadVfxFile(const char *, CUtlBuffer &)
{
} /* size: 0 */

