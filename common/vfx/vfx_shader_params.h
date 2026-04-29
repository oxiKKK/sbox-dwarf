
//
// common/vfx/vfx_shader_params.h
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	functions: 4
//	structs: 5
//

// <0011599E> ../common/vfx/vfx_shader_params.h:10
// member variables: 3
// struct size: 16
struct VfxStaticComboSource_t {
	const char * m_pszName; /* 0 8 */
	VfxComboValue_t m_nMin; /* 8 1 */
	VfxComboValue_t m_nMax; /* 9 1 */
};

// <001159FC> ../common/vfx/vfx_shader_params.h:52
// member variables: 3
// struct size: 16
struct VfxDynamicComboSource_t {
	const char * m_pszName; /* 0 8 */
	VfxComboValue_t m_nMin; /* 8 1 */
	VfxComboValue_t m_nMax; /* 9 1 */
};

// <0024F6AD> ../../common/vfx/vfx_shader_params.h:158
inline bool VfxVariableTypeIsTexture(VfxVariableType_t nVarType)
{
} /* size: 0 */

// <00115C37> ../common/vfx/vfx_shader_params.h:186
// member variables: 4
// struct size: 24
struct VfxVariableTypeData_t {
	VfxRegisterType_t m_registerType; /* 0 4 */
	const char * m_pszVariableDebugString; /* 8 8 */
	int m_nNumElements; /* 16 4 */
	VfxUiType_t m_defaultUiType; /* 20 4 */
};

// <0697192E> ../common/vfx/vfx_shader_params.h:280
inline bool VfxVariableUsesTextureReference(int nVarType)
{
} /* size: 0 */

// <06971909> ../common/vfx/vfx_shader_params.h:290
inline bool VfxVariableIsArtistEditable(int nVarType)
{
} /* size: 0 */

// <069718E4> ../common/vfx/vfx_shader_params.h:295
inline bool VfxVariableIsUsingExpression(int nVarType)
{
} /* size: 0 */

// <00115D32> ../common/vfx/vfx_shader_params.h:300
// member variables: 8
// struct size: 40
struct VfxVariableSource_t {
	VfxVariableSourceType_t m_variableSourceType; /* 0 4 */
	const char * m_pszName; /* 8 8 */
	VfxVariableType_t m_type; /* 16 4 */
	int m_nRegisterElements; /* 20 4 */
	int m_nArraySize; /* 24 4 */
	bool m_bCanBeInStaticConstantBuffer; /* 28 1 */
	int m_forceRegisterVs; /* 32 4 */
	int m_forceRegisterPs; /* 36 4 */
};

// <00115E1A> ../common/vfx/vfx_shader_params.h:359
// member variables: 3
// struct size: 12
struct VfxMaterialVarPerInstanceInfo_t {
	VfxMaterialVarPerInstance_t m_perInstanceType; /* 0 4 */
	uint32 m_nImpliedMaterialFlags; /* 4 4 */
	uint32 m_nImpliedMaterialFlags2; /* 8 4 */
};

