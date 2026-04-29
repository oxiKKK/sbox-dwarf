
//
// common/vfx/vfx_render_state.h
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	functions: 10
//	structs: 3
//

// <06A5198A> ../common/vfx/vfx_render_state.h:29
// member variables: 2
// struct size: 16
struct VfxRenderStateEnumInfo_t {
	const char * m_pName; /* 0 8 */
	int m_nEnumID; /* 8 4 */
};

// <06A519BB> ../common/vfx/vfx_render_state.h:35
// member variables: 6
// struct size: 32
struct VfxRenderStateInfo_t {
	/* ../common/vfx/vfx_render_state.h:37 */
	enum DataType {
		INT = 0,
		ENUM = 1,
		BOOL = 2,
		FLOAT = 3,
		FLOAT4 = 4,
	};
	const char * m_pName; /* 0 8 */
	int m_nRenderStateID; /* 8 4 */
	DataType m_dataType; /* 12 4 */
	int m_validProgramType; /* 16 4 */
	VfxRenderStateClass_t m_rsClass; /* 20 4 */
	const class VfxRenderStateEnumInfo_t * m_pValidEnums; /* 24 8 */
};

// <00219261> ../../common/vfx/vfx_render_state.h:35
// member variables: 6
// struct size: 32
struct VfxRenderStateInfo_t {
	/* ../../common/vfx/vfx_render_state.h:37 */
	enum DataType {
		INT = 0,
		ENUM = 1,
		BOOL = 2,
		FLOAT = 3,
		FLOAT4 = 4,
	};
	const char * m_pName; /* 0 8 */
	int m_nRenderStateID; /* 8 4 */
	DataType m_dataType; /* 12 4 */
	int m_validProgramType; /* 16 4 */
	VfxRenderStateClass_t m_rsClass; /* 20 4 */
	const class VfxRenderStateEnumInfo_t * m_pValidEnums; /* 24 8 */
};

// <0022D0B3> ../../common/vfx/vfx_render_state.h:173
uint8 VfxGetDefaultStencilRefValue(void)
{
} /* size: 0 */

// <0022D0A1> ../../common/vfx/vfx_render_state.h:174
const float* VfxGetDefaultBlendFactor(void)
{
} /* size: 0 */

// <0022D06D> ../../common/vfx/vfx_render_state.h:175
uint32 VfxGetDefaultMultisampleMask(void)
{
} /* size: 0 */

// <0022D16E> ../../common/vfx/vfx_render_state.h:178
void VfxSetStateInRasterizerDesc(RsRasterizerStateDesc_t *, VfxRenderState_t, int32, float32)
{
} /* size: 0 */

// <0022D12A> ../../common/vfx/vfx_render_state.h:179
void VfxSetStateInDepthStencilDesc(RsDepthStencilStateDesc_t *, VfxRenderState_t, int32)
{
} /* size: 0 */

// <0022D0E6> ../../common/vfx/vfx_render_state.h:180
void VfxSetStateInBlendDesc(RsBlendStateDesc_t *, VfxRenderState_t, int32)
{
} /* size: 0 */

// <0022D14D> ../../common/vfx/vfx_render_state.h:183
bool VfxIsDefaultRasterizerState(const RsRasterizerStateDesc_t *, VfxRenderState_t)
{
} /* size: 0 */

// <0022D109> ../../common/vfx/vfx_render_state.h:184
bool VfxIsDefaultDepthStencilState(const RsDepthStencilStateDesc_t *, VfxRenderState_t)
{
} /* size: 0 */

// <0022D0C5> ../../common/vfx/vfx_render_state.h:185
bool VfxIsDefaultBlendState(const RsBlendStateDesc_t *, VfxRenderState_t)
{
} /* size: 0 */

// <0022CFB3> ../../common/vfx/vfx_render_state.h:188
Vector4D VfxGetDefaultRenderState(const VfxRenderStateInfo_t &)
{
} /* size: 0 */

