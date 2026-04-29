
//
// public/rendersystem/renderstate.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libvfx_vulkan.so
//
//	functions: 111
//	classes: 4
//	structs: 15
//

// <0003F6D1> ../public/rendersystem/renderstate.h:19
// member variable: 1
// struct size: 4
struct RsRasterizerStateHandle_t__ {
	int unused; /* 0 4 */
};

// <0003F700> ../public/rendersystem/renderstate.h:21
// member variable: 1
// struct size: 4
struct RsDepthStencilStateHandle_t__ {
	int unused; /* 0 4 */
};

// <00093813> ../public/rendersystem/renderstate.h:23
// member variable: 1
// struct size: 4
struct RsBlendStateHandle_t__ {
	int unused; /* 0 4 */
};

// <007D8C7F> ../public/rendersystem/renderstate.h:42
// variables: 4
inline uint32 ClampAndPackFloat4ColorToUInt32(float flR, float flG, float flB, float flA)
{
	uint32 nR; // 44
	uint32 nG; // 44
	uint32 nB; // 44
	uint32 nA; // 44
} /* size: 0, variables: 4 */

// <06977E84> ../public/rendersystem/renderstate.h:106
inline RsComparison_t ReverseDepthComparisonEnum(RsComparison_t cmp)
{
} /* size: 0 */

// <06AB8300> ../public/rendersystem/renderstate.h:187
void RsRasterizerStateDesc_t::RsRasterizerStateDesc_t()
{
} /* size: 0 */

// <06AB82E4> ../public/rendersystem/renderstate.h:187
inline void RsRasterizerStateDesc_t::RsRasterizerStateDesc_t()
{
} /* size: 0 */

// <000939D5> ../public/rendersystem/renderstate.h:187
// member functions: 4
// member variables: 7
// struct size: 16
struct RsRasterizerStateDesc_t {
	RsFillMode_t m_nFillMode; /* 0 1 */
	RsCullMode_t m_nCullMode; /* 1 1 */
	bool m_bDepthClipEnable; /* 2 1 */
	bool m_bMultisampleEnable; /* 3 1 */
	int32 m_nDepthBias; /* 4 4 */
	float32 m_flDepthBiasClamp; /* 8 4 */
	float32 m_flSlopeScaledDepthBias; /* 12 4 */
	/* ../public/rendersystem/renderstate.h:206 */
	uint32 HashValue(const RsRasterizerStateDesc_t* );
	/* ../public/rendersystem/renderstate.h:212 */
	bool operator==(const RsRasterizerStateDesc_t* , const RsRasterizerStateDesc_t& );
	/* ../public/rendersystem/renderstate.h:217 */
	void Serialize(const RsRasterizerStateDesc_t* , CUtlBuffer& );
	/* ../public/rendersystem/renderstate.h:228 */
	void Unserialize(RsRasterizerStateDesc_t* , CUtlBuffer& );
};

// <000129B5> ../../public/rendersystem/renderstate.h:187
// member functions: 4
// member variables: 7
// struct size: 16
struct RsRasterizerStateDesc_t {
	RsFillMode_t m_nFillMode; /* 0 1 */
	RsCullMode_t m_nCullMode; /* 1 1 */
	bool m_bDepthClipEnable; /* 2 1 */
	bool m_bMultisampleEnable; /* 3 1 */
	int32 m_nDepthBias; /* 4 4 */
	float32 m_flDepthBiasClamp; /* 8 4 */
	float32 m_flSlopeScaledDepthBias; /* 12 4 */
	/* ../../public/rendersystem/renderstate.h:206 */
	uint32 HashValue(const RsRasterizerStateDesc_t* );
	/* ../../public/rendersystem/renderstate.h:212 */
	bool operator==(const RsRasterizerStateDesc_t* , const RsRasterizerStateDesc_t& );
	/* ../../public/rendersystem/renderstate.h:217 */
	void Serialize(const RsRasterizerStateDesc_t* , CUtlBuffer& );
	/* ../../public/rendersystem/renderstate.h:228 */
	void Unserialize(RsRasterizerStateDesc_t* , CUtlBuffer& );
};

// <001AD86F> ../public/rendersystem/renderstate.h:206
inline void RsRasterizerStateDesc_t::HashValue()
{
} /* size: 0 */

// <001AD84A> ../public/rendersystem/renderstate.h:212
inline void RsRasterizerStateDesc_t::operator==(const RsRasterizerStateDesc_t& state)
{
} /* size: 0 */

// <06977E5F> ../public/rendersystem/renderstate.h:217
inline void RsRasterizerStateDesc_t::Serialize(CUtlBuffer& buf)
{
} /* size: 0 */

// <06977E3A> ../public/rendersystem/renderstate.h:228
inline void RsRasterizerStateDesc_t::Unserialize(CUtlBuffer& buf)
{
} /* size: 0 */

// <0348011E> ../public/rendersystem/renderstate.h:241
// variable: 1
inline const RsRasterizerStateDesc_t& DefaultRasterizerStateDesc(void)
{
	RsRasterizerStateDesc_t defaultRasterizerState; // 243
} /* size: 0, variables: 1 */

// <0003F7F9> ../public/rendersystem/renderstate.h:249
// member functions: 20
// member variables: 12
// struct size: 6
struct RsStencilStateDesc_t {
	/* ../public/rendersystem/renderstate.h:251 */
	void RsStencilStateDesc_t(RsStencilStateDesc_t* );
	/* ../public/rendersystem/renderstate.h:252 */
	void RsStencilStateDesc_t(RsStencilStateDesc_t* , bool, uint8, uint8, RsStencilOp_t, RsStencilOp_t, RsStencilOp_t, RsComparison_t, RsStencilOp_t, RsStencilOp_t, RsStencilOp_t, RsComparison_t);
	/* ../public/rendersystem/renderstate.h:266 */
	bool IsStencilEnabled(const RsStencilStateDesc_t* );
	/* ../public/rendersystem/renderstate.h:267 */
	void SetStencilEnabled(RsStencilStateDesc_t* , bool);
	/* ../public/rendersystem/renderstate.h:273 */
	RsStencilOp_t GetFrontStencilFailOp(const RsStencilStateDesc_t* );
	/* ../public/rendersystem/renderstate.h:273 */
	void SetFrontStencilFailOp(RsStencilStateDesc_t* , RsStencilOp_t);
	/* ../public/rendersystem/renderstate.h:274 */
	RsStencilOp_t GetFrontStencilDepthFailOp(const RsStencilStateDesc_t* );
	/* ../public/rendersystem/renderstate.h:274 */
	void SetFrontStencilDepthFailOp(RsStencilStateDesc_t* , RsStencilOp_t);
	/* ../public/rendersystem/renderstate.h:275 */
	RsStencilOp_t GetFrontStencilPassOp(const RsStencilStateDesc_t* );
	/* ../public/rendersystem/renderstate.h:275 */
	void SetFrontStencilPassOp(RsStencilStateDesc_t* , RsStencilOp_t);
	/* ../public/rendersystem/renderstate.h:276 */
	RsComparison_t GetFrontStencilFunc(const RsStencilStateDesc_t* );
	/* ../public/rendersystem/renderstate.h:276 */
	void SetFrontStencilFunc(RsStencilStateDesc_t* , RsComparison_t);
	/* ../public/rendersystem/renderstate.h:277 */
	RsStencilOp_t GetBackStencilFailOp(const RsStencilStateDesc_t* );
	/* ../public/rendersystem/renderstate.h:277 */
	void SetBackStencilFailOp(RsStencilStateDesc_t* , RsStencilOp_t);
	/* ../public/rendersystem/renderstate.h:278 */
	RsStencilOp_t GetBackStencilDepthFailOp(const RsStencilStateDesc_t* );
	/* ../public/rendersystem/renderstate.h:278 */
	void SetBackStencilDepthFailOp(RsStencilStateDesc_t* , RsStencilOp_t);
	/* ../public/rendersystem/renderstate.h:279 */
	RsStencilOp_t GetBackStencilPassOp(const RsStencilStateDesc_t* );
	/* ../public/rendersystem/renderstate.h:279 */
	void SetBackStencilPassOp(RsStencilStateDesc_t* , RsStencilOp_t);
	/* ../public/rendersystem/renderstate.h:280 */
	RsComparison_t GetBackStencilFunc(const RsStencilStateDesc_t* );
	/* ../public/rendersystem/renderstate.h:280 */
	void SetBackStencilFunc(RsStencilStateDesc_t* , RsComparison_t);
private:
	uint16 m_bStencilEnable:1; /* 0: 0 2 */
	uint16 m_frontStencilFailOp:3; /* 0: 1 2 */
	uint16 m_frontStencilDepthFailOp:3; /* 0: 4 2 */
	uint16 m_frontStencilPassOp:3; /* 0: 7 2 */
	uint16 m_frontStencilFunc:3; /* 0:10 2 */
	uint16 m_backStencilFailOp:3; /* 0:13 2 */
	uint16 m_backStencilDepthFailOp:3; /* 2: 0 2 */
	uint16 m_backStencilPassOp:3; /* 2: 3 2 */
	uint16 m_backStencilFunc:3; /* 2: 6 2 */
	uint16 m_nPad:7; /* 2: 9 2 */
	uint8 m_nStencilReadMask; /* 4 1 */
	uint8 m_nStencilWriteMask; /* 5 1 */
};

// <058A7D08> ../../public/rendersystem/renderstate.h:249
// member functions: 20
// member variables: 12
// struct size: 6
struct RsStencilStateDesc_t {
	/* ../../public/rendersystem/renderstate.h:251 */
	void RsStencilStateDesc_t(RsStencilStateDesc_t* );
	/* ../../public/rendersystem/renderstate.h:252 */
	void RsStencilStateDesc_t(RsStencilStateDesc_t* , bool, uint8, uint8, RsStencilOp_t, RsStencilOp_t, RsStencilOp_t, RsComparison_t, RsStencilOp_t, RsStencilOp_t, RsStencilOp_t, RsComparison_t);
	/* ../../public/rendersystem/renderstate.h:266 */
	bool IsStencilEnabled(const RsStencilStateDesc_t* );
	/* ../../public/rendersystem/renderstate.h:267 */
	void SetStencilEnabled(RsStencilStateDesc_t* , bool);
	/* ../../public/rendersystem/renderstate.h:273 */
	RsStencilOp_t GetFrontStencilFailOp(const RsStencilStateDesc_t* );
	/* ../../public/rendersystem/renderstate.h:273 */
	void SetFrontStencilFailOp(RsStencilStateDesc_t* , RsStencilOp_t);
	/* ../../public/rendersystem/renderstate.h:274 */
	RsStencilOp_t GetFrontStencilDepthFailOp(const RsStencilStateDesc_t* );
	/* ../../public/rendersystem/renderstate.h:274 */
	void SetFrontStencilDepthFailOp(RsStencilStateDesc_t* , RsStencilOp_t);
	/* ../../public/rendersystem/renderstate.h:275 */
	RsStencilOp_t GetFrontStencilPassOp(const RsStencilStateDesc_t* );
	/* ../../public/rendersystem/renderstate.h:275 */
	void SetFrontStencilPassOp(RsStencilStateDesc_t* , RsStencilOp_t);
	/* ../../public/rendersystem/renderstate.h:276 */
	RsComparison_t GetFrontStencilFunc(const RsStencilStateDesc_t* );
	/* ../../public/rendersystem/renderstate.h:276 */
	void SetFrontStencilFunc(RsStencilStateDesc_t* , RsComparison_t);
	/* ../../public/rendersystem/renderstate.h:277 */
	RsStencilOp_t GetBackStencilFailOp(const RsStencilStateDesc_t* );
	/* ../../public/rendersystem/renderstate.h:277 */
	void SetBackStencilFailOp(RsStencilStateDesc_t* , RsStencilOp_t);
	/* ../../public/rendersystem/renderstate.h:278 */
	RsStencilOp_t GetBackStencilDepthFailOp(const RsStencilStateDesc_t* );
	/* ../../public/rendersystem/renderstate.h:278 */
	void SetBackStencilDepthFailOp(RsStencilStateDesc_t* , RsStencilOp_t);
	/* ../../public/rendersystem/renderstate.h:279 */
	RsStencilOp_t GetBackStencilPassOp(const RsStencilStateDesc_t* );
	/* ../../public/rendersystem/renderstate.h:279 */
	void SetBackStencilPassOp(RsStencilStateDesc_t* , RsStencilOp_t);
	/* ../../public/rendersystem/renderstate.h:280 */
	RsComparison_t GetBackStencilFunc(const RsStencilStateDesc_t* );
	/* ../../public/rendersystem/renderstate.h:280 */
	void SetBackStencilFunc(RsStencilStateDesc_t* , RsComparison_t);
private:
	uint16 m_bStencilEnable:1; /* 0: 0 2 */
	uint16 m_frontStencilFailOp:3; /* 0: 1 2 */
	uint16 m_frontStencilDepthFailOp:3; /* 0: 4 2 */
	uint16 m_frontStencilPassOp:3; /* 0: 7 2 */
	uint16 m_frontStencilFunc:3; /* 0:10 2 */
	uint16 m_backStencilFailOp:3; /* 0:13 2 */
	uint16 m_backStencilDepthFailOp:3; /* 2: 0 2 */
	uint16 m_backStencilPassOp:3; /* 2: 3 2 */
	uint16 m_backStencilFunc:3; /* 2: 6 2 */
	uint16 m_nPad:7; /* 2: 9 2 */
	uint8 m_nStencilReadMask; /* 4 1 */
	uint8 m_nStencilWriteMask; /* 5 1 */
};

// <06AB82CD> ../public/rendersystem/renderstate.h:251
void RsStencilStateDesc_t::RsStencilStateDesc_t()
{
} /* size: 0 */

// <06AB82B4> ../public/rendersystem/renderstate.h:251
inline void RsStencilStateDesc_t::RsStencilStateDesc_t()
{
} /* size: 0 */

// <06AB8266> ../public/rendersystem/renderstate.h:252
void RsStencilStateDesc_t::RsStencilStateDesc_t(bool bStencilEnable, uint8 nStencilReadMask, uint8 nStencilWriteMask, RsStencilOp_t frontStencilFailOp, RsStencilOp_t frontStencilDepthFailOp, RsStencilOp_t frontStencilPassOp, RsComparison_t frontStencilFunc, RsStencilOp_t backStencilFailOp, RsStencilOp_t backStencilDepthFailOp, RsStencilOp_t backStencilPassOp, RsComparison_t backStencilFunc)
{
} /* size: 0 */

// <06AB81C7> ../public/rendersystem/renderstate.h:252
inline void RsStencilStateDesc_t::RsStencilStateDesc_t(bool bStencilEnable, uint8 nStencilReadMask, uint8 nStencilWriteMask, RsStencilOp_t frontStencilFailOp, RsStencilOp_t frontStencilDepthFailOp, RsStencilOp_t frontStencilPassOp, RsComparison_t frontStencilFunc, RsStencilOp_t backStencilFailOp, RsStencilOp_t backStencilDepthFailOp, RsStencilOp_t backStencilPassOp, RsComparison_t backStencilFunc)
{
} /* size: 0 */

// <00A5D312> ../public/rendersystem/renderstate.h:266
inline void RsStencilStateDesc_t::IsStencilEnabled()
{
} /* size: 0 */

// <02F2A976> ../public/rendersystem/renderstate.h:267
inline void RsStencilStateDesc_t::SetStencilEnabled(bool bEnable)
{
} /* size: 0 */

// <02F2A950> ../public/rendersystem/renderstate.h:273
inline void RsStencilStateDesc_t::SetFrontStencilFailOp(RsStencilOp_t value)
{
} /* size: 0 */

// <00A5D2D3> ../public/rendersystem/renderstate.h:273
inline void RsStencilStateDesc_t::GetFrontStencilFailOp()
{
} /* size: 0 */

// <02F2A92A> ../public/rendersystem/renderstate.h:274
inline void RsStencilStateDesc_t::SetFrontStencilDepthFailOp(RsStencilOp_t value)
{
} /* size: 0 */

// <00A5D294> ../public/rendersystem/renderstate.h:274
inline void RsStencilStateDesc_t::GetFrontStencilDepthFailOp()
{
} /* size: 0 */

// <02F2A904> ../public/rendersystem/renderstate.h:275
inline void RsStencilStateDesc_t::SetFrontStencilPassOp(RsStencilOp_t value)
{
} /* size: 0 */

// <00A5D255> ../public/rendersystem/renderstate.h:275
inline void RsStencilStateDesc_t::GetFrontStencilPassOp()
{
} /* size: 0 */

// <02F2A8DE> ../public/rendersystem/renderstate.h:276
inline void RsStencilStateDesc_t::SetFrontStencilFunc(RsComparison_t value)
{
} /* size: 0 */

// <00A5D216> ../public/rendersystem/renderstate.h:276
inline void RsStencilStateDesc_t::GetFrontStencilFunc()
{
} /* size: 0 */

// <02F2A8B8> ../public/rendersystem/renderstate.h:277
inline void RsStencilStateDesc_t::SetBackStencilFailOp(RsStencilOp_t value)
{
} /* size: 0 */

// <00A5D1D7> ../public/rendersystem/renderstate.h:277
inline void RsStencilStateDesc_t::GetBackStencilFailOp()
{
} /* size: 0 */

// <02F2A892> ../public/rendersystem/renderstate.h:278
inline void RsStencilStateDesc_t::SetBackStencilDepthFailOp(RsStencilOp_t value)
{
} /* size: 0 */

// <00A5D198> ../public/rendersystem/renderstate.h:278
inline void RsStencilStateDesc_t::GetBackStencilDepthFailOp()
{
} /* size: 0 */

// <02F2A86C> ../public/rendersystem/renderstate.h:279
inline void RsStencilStateDesc_t::SetBackStencilPassOp(RsStencilOp_t value)
{
} /* size: 0 */

// <00A5D159> ../public/rendersystem/renderstate.h:279
inline void RsStencilStateDesc_t::GetBackStencilPassOp()
{
} /* size: 0 */

// <02F2A846> ../public/rendersystem/renderstate.h:280
inline void RsStencilStateDesc_t::SetBackStencilFunc(RsComparison_t value)
{
} /* size: 0 */

// <00A5D11A> ../public/rendersystem/renderstate.h:280
inline void RsStencilStateDesc_t::GetBackStencilFunc()
{
} /* size: 0 */

// <04021226> ../public/rendersystem/renderstate.h:307
void RsStencilStateOverride_t::RsStencilStateOverride_t()
{
} /* size: 0 */

// <04021209> ../public/rendersystem/renderstate.h:307
inline void RsStencilStateOverride_t::RsStencilStateOverride_t()
{
} /* size: 0 */

// <0003FBDE> ../public/rendersystem/renderstate.h:307
// member variables: 2
// struct size: 8
struct RsStencilStateOverride_t {
	int16 m_nStencilRefValue; /* 0 2 */
	RsStencilStateDesc_t m_stencilState; /* 2 6 */
};

// <0347C134> ../public/rendersystem/renderstate.h:314
void RsDepthBiasStateOverride_t::RsDepthBiasStateOverride_t()
{
} /* size: 0 */

// <0347C117> ../public/rendersystem/renderstate.h:314
inline void RsDepthBiasStateOverride_t::RsDepthBiasStateOverride_t()
{
} /* size: 0 */

// <0003FC12> ../public/rendersystem/renderstate.h:314
// member variables: 3
// struct size: 12
struct RsDepthBiasStateOverride_t {
	int32 m_nDepthBias; /* 0 4 */
	float32 m_flDepthBiasClamp; /* 4 4 */
	float32 m_flSlopeScaledDepthBias; /* 8 4 */
};

// <0003FC56> ../public/rendersystem/renderstate.h:322
// member variable: 1
// struct size: 1
struct RsFillModeOverride_t {
	RsFillMode_t m_fillMode; /* 0 1 */
};

// <00093F6C> ../public/rendersystem/renderstate.h:328
// member functions: 7
// member variables: 6
// struct size: 8
struct RsDepthStencilStateDesc_t {
	/* ../public/rendersystem/renderstate.h:330 */
	enum DepthStencilStateVersion {
		Vanilla = 0,
		ReverseZByDefault = 1,
		Current = 1,
	} __attribute__((__packed__));
	uint8 m_bDepthTestEnable:1; /* 0: 0 1 */
	uint8 m_bDepthWriteEnable:1; /* 0: 1 1 */
	DepthStencilStateVersion m_nDepthStencilStateVersion:1; /* 0: 2 1 */
	uint8 m_nPad0:5; /* 0: 3 1 */
	RsComparison_t m_depthFunc; /* 1 1 */
	RsStencilStateDesc_t m_stencilState; /* 2 6 */
	/* ../public/rendersystem/renderstate.h:348 */
	void RsDepthStencilStateDesc_t(RsDepthStencilStateDesc_t* );
	/* ../public/rendersystem/renderstate.h:349 */
	void RsDepthStencilStateDesc_t(RsDepthStencilStateDesc_t* , bool, bool, RsComparison_t, bool, uint8, uint8, RsStencilOp_t, RsStencilOp_t, RsStencilOp_t, RsComparison_t, RsStencilOp_t, RsStencilOp_t, RsStencilOp_t, RsComparison_t);
	/* ../public/rendersystem/renderstate.h:363 */
	uint32 HashValue(const RsDepthStencilStateDesc_t* );
	/* ../public/rendersystem/renderstate.h:369 */
	bool operator==(const RsDepthStencilStateDesc_t* , const RsDepthStencilStateDesc_t& );
	/* ../public/rendersystem/renderstate.h:374 */
	void Serialize(const RsDepthStencilStateDesc_t* , CUtlBuffer& );
	/* ../public/rendersystem/renderstate.h:398 */
	void Unserialize(RsDepthStencilStateDesc_t* , CUtlBuffer& );
};

// <00012EAF> ../../public/rendersystem/renderstate.h:328
// member functions: 7
// member variables: 6
// struct size: 8
struct RsDepthStencilStateDesc_t {
	/* ../../public/rendersystem/renderstate.h:330 */
	enum DepthStencilStateVersion {
		Vanilla = 0,
		ReverseZByDefault = 1,
		Current = 1,
	} __attribute__((__packed__));
	uint8 m_bDepthTestEnable:1; /* 0: 0 1 */
	uint8 m_bDepthWriteEnable:1; /* 0: 1 1 */
	DepthStencilStateVersion m_nDepthStencilStateVersion:1; /* 0: 2 1 */
	uint8 m_nPad0:5; /* 0: 3 1 */
	RsComparison_t m_depthFunc; /* 1 1 */
	RsStencilStateDesc_t m_stencilState; /* 2 6 */
	/* ../../public/rendersystem/renderstate.h:348 */
	void RsDepthStencilStateDesc_t(RsDepthStencilStateDesc_t* );
	/* ../../public/rendersystem/renderstate.h:349 */
	void RsDepthStencilStateDesc_t(RsDepthStencilStateDesc_t* , bool, bool, RsComparison_t, bool, uint8, uint8, RsStencilOp_t, RsStencilOp_t, RsStencilOp_t, RsComparison_t, RsStencilOp_t, RsStencilOp_t, RsStencilOp_t, RsComparison_t);
	/* ../../public/rendersystem/renderstate.h:363 */
	uint32 HashValue(const RsDepthStencilStateDesc_t* );
	/* ../../public/rendersystem/renderstate.h:369 */
	bool operator==(const RsDepthStencilStateDesc_t* , const RsDepthStencilStateDesc_t& );
	/* ../../public/rendersystem/renderstate.h:374 */
	void Serialize(const RsDepthStencilStateDesc_t* , CUtlBuffer& );
	/* ../../public/rendersystem/renderstate.h:398 */
	void Unserialize(RsDepthStencilStateDesc_t* , CUtlBuffer& );
};

// <06AB816A> ../public/rendersystem/renderstate.h:349
void RsDepthStencilStateDesc_t::RsDepthStencilStateDesc_t(bool bDepthTestEnable, bool bDepthWriteEnable, RsComparison_t depthFunc, bool bStencilEnable, uint8 nStencilReadMask, uint8 nStencilWriteMask, RsStencilOp_t frontStencilFailOp, RsStencilOp_t frontStencilDepthFailOp, RsStencilOp_t frontStencilPassOp, RsComparison_t frontStencilFunc, RsStencilOp_t backStencilFailOp, RsStencilOp_t backStencilDepthFailOp, RsStencilOp_t backStencilPassOp, RsComparison_t backStencilFunc)
{
} /* size: 0 */

// <06AB809B> ../public/rendersystem/renderstate.h:349
inline void RsDepthStencilStateDesc_t::RsDepthStencilStateDesc_t(bool bDepthTestEnable, bool bDepthWriteEnable, RsComparison_t depthFunc, bool bStencilEnable, uint8 nStencilReadMask, uint8 nStencilWriteMask, RsStencilOp_t frontStencilFailOp, RsStencilOp_t frontStencilDepthFailOp, RsStencilOp_t frontStencilPassOp, RsComparison_t frontStencilFunc, RsStencilOp_t backStencilFailOp, RsStencilOp_t backStencilDepthFailOp, RsStencilOp_t backStencilPassOp, RsComparison_t backStencilFunc)
{
} /* size: 0 */

// <001AD5E5> ../public/rendersystem/renderstate.h:363
inline void RsDepthStencilStateDesc_t::HashValue()
{
} /* size: 0 */

// <001AD5BF> ../public/rendersystem/renderstate.h:369
inline void RsDepthStencilStateDesc_t::operator==(const RsDepthStencilStateDesc_t& state)
{
} /* size: 0 */

// <06977B97> ../public/rendersystem/renderstate.h:374
inline void RsDepthStencilStateDesc_t::Serialize(CUtlBuffer& buf)
{
} /* size: 0 */

// <06976085> ../public/rendersystem/renderstate.h:398
// function calls: 110
void RsDepthStencilStateDesc_t::Unserialize(CUtlBuffer& buf)
{
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 690
	CUtlBuffer::BGetTypeBin<char>(
				char& dest);  // 672
	CUtlBuffer::BGetTypeBin<char>(
				char& dest);  // 1040
	CUtlBuffer::BGetChar(
		char* pOutChar);  // 937
	CUtlBuffer::GetChar(); // 400
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 690
	CUtlBuffer::BGetTypeBin<char>(
				char& dest);  // 672
	CUtlBuffer::BGetTypeBin<char>(
				char& dest);  // 1040
	CUtlBuffer::BGetChar(
		char* pOutChar);  // 937
	CUtlBuffer::GetChar(); // 401
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 690
	CUtlBuffer::BGetTypeBin<char>(
				char& dest);  // 672
	CUtlBuffer::BGetTypeBin<char>(
				char& dest);  // 1040
	CUtlBuffer::BGetChar(
		char* pOutChar);  // 937
	CUtlBuffer::GetChar(); // 402
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 690
	CUtlBuffer::BGetTypeBin<char>(
				char& dest);  // 672
	CUtlBuffer::BGetTypeBin<char>(
				char& dest);  // 1040
	CUtlBuffer::BGetChar(
		char* pOutChar);  // 937
	CUtlBuffer::GetChar(); // 403
	CUtlBuffer::BGetTypeBin<char>(
				char& dest);  // 672
	CUtlBuffer::BGetTypeBin<char>(
				char& dest);  // 1040
	CUtlBuffer::BGetChar(
		char* pOutChar);  // 937
	CUtlBuffer::GetChar(); // 404
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 690
	CUtlBuffer::BGetTypeBin<char>(
				char& dest);  // 672
	CUtlBuffer::BGetTypeBin<char>(
				char& dest);  // 1040
	CUtlBuffer::BGetChar(
		char* pOutChar);  // 937
	CUtlBuffer::GetChar(); // 405
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 690
	CUtlBuffer::BGetTypeBin<char>(
				char& dest);  // 672
	CUtlBuffer::BGetTypeBin<char>(
				char& dest);  // 1040
	CUtlBuffer::BGetChar(
		char* pOutChar);  // 937
	CUtlBuffer::GetChar(); // 406
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 690
	CUtlBuffer::BGetTypeBin<char>(
				char& dest);  // 672
	CUtlBuffer::BGetTypeBin<char>(
				char& dest);  // 1040
	CUtlBuffer::BGetChar(
		char* pOutChar);  // 937
	CUtlBuffer::GetChar(); // 407
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 690
	CUtlBuffer::BGetTypeBin<char>(
				char& dest);  // 672
	CUtlBuffer::BGetTypeBin<char>(
				char& dest);  // 1040
	CUtlBuffer::BGetChar(
		char* pOutChar);  // 937
	CUtlBuffer::GetChar(); // 408
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 690
	CUtlBuffer::BGetTypeBin<char>(
				char& dest);  // 672
	CUtlBuffer::BGetTypeBin<char>(
				char& dest);  // 1040
	CUtlBuffer::BGetChar(
		char* pOutChar);  // 937
	CUtlBuffer::GetChar(); // 409
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 690
	CUtlBuffer::BGetTypeBin<char>(
				char& dest);  // 672
	CUtlBuffer::BGetTypeBin<char>(
				char& dest);  // 1040
	CUtlBuffer::BGetChar(
		char* pOutChar);  // 937
	CUtlBuffer::GetChar(); // 410
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 690
	CUtlBuffer::BGetTypeBin<char>(
				char& dest);  // 672
	CUtlBuffer::BGetTypeBin<char>(
				char& dest);  // 1040
	CUtlBuffer::BGetChar(
		char* pOutChar);  // 937
	CUtlBuffer::GetChar(); // 411
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 690
	CUtlBuffer::BGetTypeBin<char>(
				char& dest);  // 672
	CUtlBuffer::BGetTypeBin<char>(
				char& dest);  // 1040
	CUtlBuffer::BGetChar(
		char* pOutChar);  // 937
	CUtlBuffer::GetChar(); // 412
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 690
	CUtlBuffer::BGetTypeBin<char>(
				char& dest);  // 672
	CUtlBuffer::BGetTypeBin<char>(
				char& dest);  // 1040
	CUtlBuffer::BGetChar(
		char* pOutChar);  // 937
	CUtlBuffer::GetChar(); // 413
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 690
	CUtlBuffer::BGetTypeBin<char>(
				char& dest);  // 672
	CUtlBuffer::BGetTypeBin<char>(
				char& dest);  // 1040
	CUtlBuffer::BGetChar(
		char* pOutChar);  // 937
	CUtlBuffer::GetChar(); // 414
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 690
	CUtlBuffer::BGetTypeBin<char>(
				char& dest);  // 672
	CUtlBuffer::BGetTypeBin<char>(
				char& dest);  // 1040
	CUtlBuffer::BGetChar(
		char* pOutChar);  // 937
	CUtlBuffer::GetChar(); // 415
	CUtlBuffer::BGetTypeBin<char>(
				char& dest);  // 672
	CUtlBuffer::BGetTypeBin<char>(
				char& dest);  // 1040
	CUtlBuffer::BGetChar(
		char* pOutChar);  // 937
	CUtlBuffer::GetChar(); // 416
	CUtlBuffer::BGetTypeBin<char>(
				char& dest);  // 672
	CUtlBuffer::BGetTypeBin<char>(
				char& dest);  // 1040
	CUtlBuffer::BGetChar(
		char* pOutChar);  // 937
	CUtlBuffer::GetChar(); // 417
	CUtlBuffer::BGetTypeBin<char>(
				char& dest);  // 672
	CUtlBuffer::BGetTypeBin<char>(
				char& dest);  // 1040
	CUtlBuffer::BGetChar(
		char* pOutChar);  // 937
	CUtlBuffer::GetChar(); // 418
	CUtlBuffer::BGetTypeBin<char>(
				char& dest);  // 672
	CUtlBuffer::BGetTypeBin<char>(
				char& dest);  // 1040
	CUtlBuffer::BGetChar(
		char* pOutChar);  // 937
	CUtlBuffer::GetChar(); // 419
} /* size: 1088, inline expansions: 110 (2840 bytes) */

// <01352D11> ../public/rendersystem/renderstate.h:424
// variable: 1
inline const RsDepthStencilStateDesc_t& DefaultDepthStencilStateDesc(void)
{
	RsDepthStencilStateDesc_t defaultDepthStencilState; // 426
} /* size: 0, variables: 1 */

// <06AB8050> ../public/rendersystem/renderstate.h:433
void RsDepthStencilStateDesc_t::RsDepthStencilStateDesc_t()
{
} /* size: 0 */

// <06AB8034> ../public/rendersystem/renderstate.h:433
inline void RsDepthStencilStateDesc_t::RsDepthStencilStateDesc_t()
{
} /* size: 0 */

// <00094136> ../public/rendersystem/renderstate.h:440
// member functions: 28
// member variables: 12
// struct size: 32
struct RsBlendStateDesc_t {
	/* ../public/rendersystem/renderstate.h:443 */
	void RsBlendStateDesc_t(RsBlendStateDesc_t* );
	/* ../public/rendersystem/renderstate.h:444 */
	void RsBlendStateDesc_t(RsBlendStateDesc_t* , bool, bool, bool, RsBlendMode_t, RsBlendMode_t, RsBlendOp_t, RsBlendMode_t, RsBlendMode_t, RsBlendOp_t, uint8, bool);
	/* ../public/rendersystem/renderstate.h:470 */
	bool IsAlphaToCoverageEnabled(const RsBlendStateDesc_t* );
	/* ../public/rendersystem/renderstate.h:473 */
	void SetAlphaToCoverageEnabled(RsBlendStateDesc_t* , bool);
	/* ../public/rendersystem/renderstate.h:476 */
	bool IsIndependentBlendEnabled(const RsBlendStateDesc_t* );
	/* ../public/rendersystem/renderstate.h:479 */
	void SetIndependentBlendEnabled(RsBlendStateDesc_t* , bool);
	/* ../public/rendersystem/renderstate.h:482 */
	bool IsAlphaBlendEnabled(const RsBlendStateDesc_t* , int);
	/* ../public/rendersystem/renderstate.h:485 */
	void SetAlphaBlendEnabled(RsBlendStateDesc_t* , bool, int);
	/* ../public/rendersystem/renderstate.h:488 */
	bool IsSrgbWriteEnabled(const RsBlendStateDesc_t* , int);
	/* ../public/rendersystem/renderstate.h:491 */
	void SetSrgbWriteEnabled(RsBlendStateDesc_t* , bool, int);
	/* ../public/rendersystem/renderstate.h:494 */
	RsBlendMode_t GetSrcBlend(const RsBlendStateDesc_t* , int);
	/* ../public/rendersystem/renderstate.h:497 */
	void SetSrcBlend(RsBlendStateDesc_t* , RsBlendMode_t, int);
	/* ../public/rendersystem/renderstate.h:501 */
	RsBlendMode_t GetDestBlend(const RsBlendStateDesc_t* , int);
	/* ../public/rendersystem/renderstate.h:504 */
	void SetDestBlend(RsBlendStateDesc_t* , RsBlendMode_t, int);
	/* ../public/rendersystem/renderstate.h:508 */
	RsBlendMode_t GetSrcBlendAlpha(const RsBlendStateDesc_t* , int);
	/* ../public/rendersystem/renderstate.h:511 */
	void SetSrcBlendAlpha(RsBlendStateDesc_t* , RsBlendMode_t, int);
	/* ../public/rendersystem/renderstate.h:515 */
	RsBlendMode_t GetDestBlendAlpha(const RsBlendStateDesc_t* , int);
	/* ../public/rendersystem/renderstate.h:518 */
	void SetDestBlendAlpha(RsBlendStateDesc_t* , RsBlendMode_t, int);
	/* ../public/rendersystem/renderstate.h:522 */
	uint8 GetRenderTargetWriteMask(const RsBlendStateDesc_t* , int);
	/* ../public/rendersystem/renderstate.h:525 */
	void SetRenderTargetWriteMask(RsBlendStateDesc_t* , uint8, int);
	/* ../public/rendersystem/renderstate.h:529 */
	RsBlendOp_t GetBlendOp(const RsBlendStateDesc_t* , int);
	/* ../public/rendersystem/renderstate.h:532 */
	void SetBlendOp(RsBlendStateDesc_t* , RsBlendOp_t, int);
	/* ../public/rendersystem/renderstate.h:536 */
	RsBlendOp_t GetBlendOpAlpha(const RsBlendStateDesc_t* , int);
	/* ../public/rendersystem/renderstate.h:539 */
	void SetBlendOpAlpha(RsBlendStateDesc_t* , RsBlendOp_t, int);
	/* ../public/rendersystem/renderstate.h:544 */
	uint32 HashValue(const RsBlendStateDesc_t* );
	/* ../public/rendersystem/renderstate.h:550 */
	bool operator==(const RsBlendStateDesc_t* , const RsBlendStateDesc_t& );
	/* ../public/rendersystem/renderstate.h:555 */
	void Serialize(const RsBlendStateDesc_t* , CUtlBuffer& );
	/* ../public/rendersystem/renderstate.h:589 */
	void Unserialize(RsBlendStateDesc_t* , CUtlBuffer& );
private:
	uint32 m_srcBlendBits; /* 0 4 */
	uint32 m_destBlendBits; /* 4 4 */
	uint32 m_srcBlendAlphaBits; /* 8 4 */
	uint32 m_destBlendAlphaBits; /* 12 4 */
	uint32 m_renderTargetWriteMaskBits; /* 16 4 */
	uint32 m_blendOpBits:30; /* 20: 0 4 */
	uint32 m_bAlphaToCoverageEnable:1; /* 20:30 4 */
	uint32 m_bIndependentBlendEnable:1; /* 20:31 4 */
	uint32 m_blendOpAlphaBits; /* 24 4 */
	uint8 m_blendEnableBits; /* 28 1 */
	uint8 m_srgbWriteEnableBits; /* 29 1 */
	uint16 m_padding; /* 30 2 */
};

// <00013074> ../../public/rendersystem/renderstate.h:440
// member functions: 28
// member variables: 12
// struct size: 32
struct RsBlendStateDesc_t {
	/* ../../public/rendersystem/renderstate.h:443 */
	void RsBlendStateDesc_t(RsBlendStateDesc_t* );
	/* ../../public/rendersystem/renderstate.h:444 */
	void RsBlendStateDesc_t(RsBlendStateDesc_t* , bool, bool, bool, RsBlendMode_t, RsBlendMode_t, RsBlendOp_t, RsBlendMode_t, RsBlendMode_t, RsBlendOp_t, uint8, bool);
	/* ../../public/rendersystem/renderstate.h:470 */
	bool IsAlphaToCoverageEnabled(const RsBlendStateDesc_t* );
	/* ../../public/rendersystem/renderstate.h:473 */
	void SetAlphaToCoverageEnabled(RsBlendStateDesc_t* , bool);
	/* ../../public/rendersystem/renderstate.h:476 */
	bool IsIndependentBlendEnabled(const RsBlendStateDesc_t* );
	/* ../../public/rendersystem/renderstate.h:479 */
	void SetIndependentBlendEnabled(RsBlendStateDesc_t* , bool);
	/* ../../public/rendersystem/renderstate.h:482 */
	bool IsAlphaBlendEnabled(const RsBlendStateDesc_t* , int);
	/* ../../public/rendersystem/renderstate.h:485 */
	void SetAlphaBlendEnabled(RsBlendStateDesc_t* , bool, int);
	/* ../../public/rendersystem/renderstate.h:488 */
	bool IsSrgbWriteEnabled(const RsBlendStateDesc_t* , int);
	/* ../../public/rendersystem/renderstate.h:491 */
	void SetSrgbWriteEnabled(RsBlendStateDesc_t* , bool, int);
	/* ../../public/rendersystem/renderstate.h:494 */
	RsBlendMode_t GetSrcBlend(const RsBlendStateDesc_t* , int);
	/* ../../public/rendersystem/renderstate.h:497 */
	void SetSrcBlend(RsBlendStateDesc_t* , RsBlendMode_t, int);
	/* ../../public/rendersystem/renderstate.h:501 */
	RsBlendMode_t GetDestBlend(const RsBlendStateDesc_t* , int);
	/* ../../public/rendersystem/renderstate.h:504 */
	void SetDestBlend(RsBlendStateDesc_t* , RsBlendMode_t, int);
	/* ../../public/rendersystem/renderstate.h:508 */
	RsBlendMode_t GetSrcBlendAlpha(const RsBlendStateDesc_t* , int);
	/* ../../public/rendersystem/renderstate.h:511 */
	void SetSrcBlendAlpha(RsBlendStateDesc_t* , RsBlendMode_t, int);
	/* ../../public/rendersystem/renderstate.h:515 */
	RsBlendMode_t GetDestBlendAlpha(const RsBlendStateDesc_t* , int);
	/* ../../public/rendersystem/renderstate.h:518 */
	void SetDestBlendAlpha(RsBlendStateDesc_t* , RsBlendMode_t, int);
	/* ../../public/rendersystem/renderstate.h:522 */
	uint8 GetRenderTargetWriteMask(const RsBlendStateDesc_t* , int);
	/* ../../public/rendersystem/renderstate.h:525 */
	void SetRenderTargetWriteMask(RsBlendStateDesc_t* , uint8, int);
	/* ../../public/rendersystem/renderstate.h:529 */
	RsBlendOp_t GetBlendOp(const RsBlendStateDesc_t* , int);
	/* ../../public/rendersystem/renderstate.h:532 */
	void SetBlendOp(RsBlendStateDesc_t* , RsBlendOp_t, int);
	/* ../../public/rendersystem/renderstate.h:536 */
	RsBlendOp_t GetBlendOpAlpha(const RsBlendStateDesc_t* , int);
	/* ../../public/rendersystem/renderstate.h:539 */
	void SetBlendOpAlpha(RsBlendStateDesc_t* , RsBlendOp_t, int);
	/* ../../public/rendersystem/renderstate.h:544 */
	uint32 HashValue(const RsBlendStateDesc_t* );
	/* ../../public/rendersystem/renderstate.h:550 */
	bool operator==(const RsBlendStateDesc_t* , const RsBlendStateDesc_t& );
	/* ../../public/rendersystem/renderstate.h:555 */
	void Serialize(const RsBlendStateDesc_t* , CUtlBuffer& );
	/* ../../public/rendersystem/renderstate.h:589 */
	void Unserialize(RsBlendStateDesc_t* , CUtlBuffer& );
private:
	uint32 m_srcBlendBits; /* 0 4 */
	uint32 m_destBlendBits; /* 4 4 */
	uint32 m_srcBlendAlphaBits; /* 8 4 */
	uint32 m_destBlendAlphaBits; /* 12 4 */
	uint32 m_renderTargetWriteMaskBits; /* 16 4 */
	uint32 m_blendOpBits:30; /* 20: 0 4 */
	uint32 m_bAlphaToCoverageEnable:1; /* 20:30 4 */
	uint32 m_bIndependentBlendEnable:1; /* 20:31 4 */
	uint32 m_blendOpAlphaBits; /* 24 4 */
	uint8 m_blendEnableBits; /* 28 1 */
	uint8 m_srgbWriteEnableBits; /* 29 1 */
	uint16 m_padding; /* 30 2 */
};

// <06AB7FD9> ../public/rendersystem/renderstate.h:444
// variable: 1
void RsBlendStateDesc_t::RsBlendStateDesc_t(bool bBlendEnable, bool bAlphaToCoverageEnable, bool bIndependendBlendEnable, RsBlendMode_t srcBlend, RsBlendMode_t destBlend, RsBlendOp_t blendOp, RsBlendMode_t srcBlendAlpha, RsBlendMode_t destBlendAlpha, RsBlendOp_t blendOpAlpha, uint8 nRenderTargetWriteMask, bool bSrgbWriteEnable)
{
	{
		int i; // 455
	}
} /* size: 0 */

// <06AB7F24> ../public/rendersystem/renderstate.h:444
// variable: 1
inline void RsBlendStateDesc_t::RsBlendStateDesc_t(bool bBlendEnable, bool bAlphaToCoverageEnable, bool bIndependendBlendEnable, RsBlendMode_t srcBlend, RsBlendMode_t destBlend, RsBlendOp_t blendOp, RsBlendMode_t srcBlendAlpha, RsBlendMode_t destBlendAlpha, RsBlendOp_t blendOpAlpha, uint8 nRenderTargetWriteMask, bool bSrgbWriteEnable)
{
	{
		int i; // 455
	}
} /* size: 0 */

// <00A5CF47> ../public/rendersystem/renderstate.h:470
inline void RsBlendStateDesc_t::IsAlphaToCoverageEnabled()
{
} /* size: 0 */

// <06AB7EFE> ../public/rendersystem/renderstate.h:473
inline void RsBlendStateDesc_t::SetAlphaToCoverageEnabled(bool bEnable)
{
} /* size: 0 */

// <00A5CF2E> ../public/rendersystem/renderstate.h:476
inline void RsBlendStateDesc_t::IsIndependentBlendEnabled()
{
} /* size: 0 */

// <06AB7ED8> ../public/rendersystem/renderstate.h:479
inline void RsBlendStateDesc_t::SetIndependentBlendEnabled(bool bEnable)
{
} /* size: 0 */

// <06975E9C> ../public/rendersystem/renderstate.h:482
inline void RsBlendStateDesc_t::IsAlphaBlendEnabled(int nRenderTargetIdx)
{
} /* size: 0 */

// <06AB7EA5> ../public/rendersystem/renderstate.h:485
inline void RsBlendStateDesc_t::SetAlphaBlendEnabled(bool bEnable, int nRenderTargetIdx)
{
} /* size: 0 */

// <06975E43> ../public/rendersystem/renderstate.h:488
inline void RsBlendStateDesc_t::IsSrgbWriteEnabled(int nRenderTargetIdx)
{
} /* size: 0 */

// <06AB7E72> ../public/rendersystem/renderstate.h:491
inline void RsBlendStateDesc_t::SetSrgbWriteEnabled(bool bEnable, int nRenderTargetIdx)
{
} /* size: 0 */

// <06975DEA> ../public/rendersystem/renderstate.h:494
inline void RsBlendStateDesc_t::GetSrcBlend(int nRenderTargetIdx)
{
} /* size: 0 */

// <06AB7E3F> ../public/rendersystem/renderstate.h:497
inline void RsBlendStateDesc_t::SetSrcBlend(RsBlendMode_t blendMode, int nRenderTargetIdx)
{
} /* size: 0 */

// <06975D91> ../public/rendersystem/renderstate.h:501
inline void RsBlendStateDesc_t::GetDestBlend(int nRenderTargetIdx)
{
} /* size: 0 */

// <06AB7E0C> ../public/rendersystem/renderstate.h:504
inline void RsBlendStateDesc_t::SetDestBlend(RsBlendMode_t blendMode, int nRenderTargetIdx)
{
} /* size: 0 */

// <06975D38> ../public/rendersystem/renderstate.h:508
inline void RsBlendStateDesc_t::GetSrcBlendAlpha(int nRenderTargetIdx)
{
} /* size: 0 */

// <06AB7DD9> ../public/rendersystem/renderstate.h:511
inline void RsBlendStateDesc_t::SetSrcBlendAlpha(RsBlendMode_t blendMode, int nRenderTargetIdx)
{
} /* size: 0 */

// <06975CDF> ../public/rendersystem/renderstate.h:515
inline void RsBlendStateDesc_t::GetDestBlendAlpha(int nRenderTargetIdx)
{
} /* size: 0 */

// <06AB7DA6> ../public/rendersystem/renderstate.h:518
inline void RsBlendStateDesc_t::SetDestBlendAlpha(RsBlendMode_t blendMode, int nRenderTargetIdx)
{
} /* size: 0 */

// <06975C86> ../public/rendersystem/renderstate.h:522
inline void RsBlendStateDesc_t::GetRenderTargetWriteMask(int nRenderTargetIdx)
{
} /* size: 0 */

// <06AB7D73> ../public/rendersystem/renderstate.h:525
inline void RsBlendStateDesc_t::SetRenderTargetWriteMask(uint8 nWriteMask, int nRenderTargetIdx)
{
} /* size: 0 */

// <06975C2D> ../public/rendersystem/renderstate.h:529
inline void RsBlendStateDesc_t::GetBlendOp(int nRenderTargetIdx)
{
} /* size: 0 */

// <06AB7D40> ../public/rendersystem/renderstate.h:532
inline void RsBlendStateDesc_t::SetBlendOp(RsBlendOp_t blendOp, int nRenderTargetIdx)
{
} /* size: 0 */

// <06975BD4> ../public/rendersystem/renderstate.h:536
inline void RsBlendStateDesc_t::GetBlendOpAlpha(int nRenderTargetIdx)
{
} /* size: 0 */

// <06AB7D0D> ../public/rendersystem/renderstate.h:539
inline void RsBlendStateDesc_t::SetBlendOpAlpha(RsBlendOp_t blendOp, int nRenderTargetIdx)
{
} /* size: 0 */

// <001AD24C> ../public/rendersystem/renderstate.h:544
inline void RsBlendStateDesc_t::HashValue()
{
} /* size: 0 */

// <001AD226> ../public/rendersystem/renderstate.h:550
inline void RsBlendStateDesc_t::operator==(const RsBlendStateDesc_t& state)
{
} /* size: 0 */

// <06973198> ../public/rendersystem/renderstate.h:555
// variables: 21
// function calls: 177
void RsBlendStateDesc_t::Serialize(CUtlBuffer& buf)
{
	{
		uint i; // 561
		RsBlendStateDesc_t::IsAlphaBlendEnabled(
					int nRenderTargetIdx);  // 562
		CUtlBuffer::IsText(); // 1253
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1256
		CUtlBuffer::WasLastCharacterCR(); // 1303
		{
			int i; // 1262
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1210
			CUtlBuffer::PutTypeBin<char>(
					char src);  // 1204
			CUtlBuffer::PutTypeBin<char>(
					char src);  // 1264
		}
		CUtlBuffer::PutTabs(); // 1305
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1210
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1204
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1308
		CUtlBuffer::PutChar(
			char c);  // 562
	}
	{
		uint i; // 564
		RsBlendStateDesc_t::GetSrcBlend(
				int nRenderTargetIdx);  // 565
		CUtlBuffer::IsText(); // 1253
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1256
		CUtlBuffer::WasLastCharacterCR(); // 1303
		{
			int i; // 1262
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1210
			CUtlBuffer::PutTypeBin<char>(
					char src);  // 1204
			CUtlBuffer::PutTypeBin<char>(
					char src);  // 1264
		}
		CUtlBuffer::PutTabs(); // 1305
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1210
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1204
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1308
		CUtlBuffer::PutChar(
			char c);  // 565
	}
	{
		uint i; // 567
		RsBlendStateDesc_t::GetDestBlend(
				int nRenderTargetIdx);  // 568
		CUtlBuffer::IsText(); // 1253
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1256
		CUtlBuffer::WasLastCharacterCR(); // 1303
		{
			int i; // 1262
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1210
			CUtlBuffer::PutTypeBin<char>(
					char src);  // 1204
			CUtlBuffer::PutTypeBin<char>(
					char src);  // 1264
		}
		CUtlBuffer::PutTabs(); // 1305
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1210
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1204
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1308
		CUtlBuffer::PutChar(
			char c);  // 568
	}
	{
		uint i; // 570
		RsBlendStateDesc_t::GetBlendOp(
				int nRenderTargetIdx);  // 571
		CUtlBuffer::IsText(); // 1253
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1256
		CUtlBuffer::WasLastCharacterCR(); // 1303
		{
			int i; // 1262
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1210
			CUtlBuffer::PutTypeBin<char>(
					char src);  // 1204
			CUtlBuffer::PutTypeBin<char>(
					char src);  // 1264
		}
		CUtlBuffer::PutTabs(); // 1305
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1210
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1204
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1308
		CUtlBuffer::PutChar(
			char c);  // 571
	}
	{
		uint i; // 573
		RsBlendStateDesc_t::GetSrcBlendAlpha(
				int nRenderTargetIdx);  // 574
		CUtlBuffer::IsText(); // 1253
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1256
		CUtlBuffer::WasLastCharacterCR(); // 1303
		{
			int i; // 1262
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1210
			CUtlBuffer::PutTypeBin<char>(
					char src);  // 1204
			CUtlBuffer::PutTypeBin<char>(
					char src);  // 1264
		}
		CUtlBuffer::PutTabs(); // 1305
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1210
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1204
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1308
		CUtlBuffer::PutChar(
			char c);  // 574
	}
	{
		uint i; // 576
		RsBlendStateDesc_t::GetDestBlendAlpha(
					int nRenderTargetIdx);  // 577
		CUtlBuffer::IsText(); // 1253
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1256
		CUtlBuffer::WasLastCharacterCR(); // 1303
		{
			int i; // 1262
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1210
			CUtlBuffer::PutTypeBin<char>(
					char src);  // 1204
			CUtlBuffer::PutTypeBin<char>(
					char src);  // 1264
		}
		CUtlBuffer::PutTabs(); // 1305
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1210
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1204
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1308
		CUtlBuffer::PutChar(
			char c);  // 577
	}
	{
		uint i; // 579
		RsBlendStateDesc_t::GetBlendOpAlpha(
				int nRenderTargetIdx);  // 580
		CUtlBuffer::IsText(); // 1253
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1256
		CUtlBuffer::WasLastCharacterCR(); // 1303
		{
			int i; // 1262
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1210
			CUtlBuffer::PutTypeBin<char>(
					char src);  // 1204
			CUtlBuffer::PutTypeBin<char>(
					char src);  // 1264
		}
		CUtlBuffer::PutTabs(); // 1305
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1210
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1204
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1308
		CUtlBuffer::PutChar(
			char c);  // 580
	}
	{
		uint i; // 582
		RsBlendStateDesc_t::GetRenderTargetWriteMask(
					int nRenderTargetIdx);  // 583
		CUtlBuffer::IsText(); // 1253
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1256
		CUtlBuffer::WasLastCharacterCR(); // 1303
		{
			int i; // 1262
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1210
			CUtlBuffer::PutTypeBin<char>(
					char src);  // 1204
			CUtlBuffer::PutTypeBin<char>(
					char src);  // 1264
		}
		CUtlBuffer::PutTabs(); // 1305
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1210
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1204
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1308
		CUtlBuffer::PutChar(
			char c);  // 583
	}
	{
		uint i; // 585
		RsBlendStateDesc_t::IsSrgbWriteEnabled(
					int nRenderTargetIdx);  // 586
		CUtlBuffer::IsText(); // 1253
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1256
		CUtlBuffer::WasLastCharacterCR(); // 1303
		{
			int i; // 1262
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1210
			CUtlBuffer::PutTypeBin<char>(
					char src);  // 1204
			CUtlBuffer::PutTypeBin<char>(
					char src);  // 1264
		}
		CUtlBuffer::PutTabs(); // 1305
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1210
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1204
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1308
		CUtlBuffer::PutChar(
			char c);  // 586
	}
	CUtlBuffer::IsText(); // 1253
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1256
	CUtlBuffer::WasLastCharacterCR(); // 1303
	{
		int i; // 1262
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1210
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1204
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1264
	}
	CUtlBuffer::PutTabs(); // 1305
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1210
	CUtlBuffer::PutTypeBin<char>(
			char src);  // 1204
	CUtlBuffer::PutTypeBin<char>(
			char src);  // 1308
	CUtlBuffer::PutChar(
		char c);  // 557
	CUtlBuffer::IsText(); // 1253
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1256
	CUtlBuffer::WasLastCharacterCR(); // 1303
	{
		int i; // 1262
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1210
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1204
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1264
	}
	CUtlBuffer::PutTabs(); // 1305
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1210
	CUtlBuffer::PutTypeBin<char>(
			char src);  // 1204
	CUtlBuffer::PutTypeBin<char>(
			char src);  // 1308
	CUtlBuffer::PutChar(
		char c);  // 558
	CUtlBuffer::IsText(); // 1253
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1256
	CUtlBuffer::WasLastCharacterCR(); // 1303
	{
		int i; // 1262
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1210
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1204
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1264
	}
	CUtlBuffer::PutTabs(); // 1305
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1210
	CUtlBuffer::PutTypeBin<char>(
			char src);  // 1204
	CUtlBuffer::PutTypeBin<char>(
			char src);  // 1308
	CUtlBuffer::PutChar(
		char c);  // 559
} /* size: 2904, inline expansions: 30 (1443 bytes) */

// <06971E2E> ../public/rendersystem/renderstate.h:589
// variables: 9
// function calls: 79
void RsBlendStateDesc_t::Unserialize(CUtlBuffer& buf)
{
	{
		uint i; // 596
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 690
		CUtlBuffer::BGetTypeBin<char>(
					char& dest);  // 672
		CUtlBuffer::BGetTypeBin<char>(
					char& dest);  // 1040
		CUtlBuffer::BGetChar(
			char* pOutChar);  // 937
		CUtlBuffer::GetChar(); // 597
		RsBlendStateDesc_t::SetAlphaBlendEnabled(
					bool bEnable,
					int nRenderTargetIdx);  // 597
	}
	{
		uint i; // 599
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 690
		CUtlBuffer::BGetTypeBin<char>(
					char& dest);  // 672
		CUtlBuffer::BGetTypeBin<char>(
					char& dest);  // 1040
		CUtlBuffer::BGetChar(
			char* pOutChar);  // 937
		CUtlBuffer::GetChar(); // 600
		RsBlendStateDesc_t::SetSrcBlend(
				RsBlendMode_t blendMode,
				int nRenderTargetIdx);  // 600
	}
	{
		uint i; // 602
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 690
		CUtlBuffer::BGetTypeBin<char>(
					char& dest);  // 672
		CUtlBuffer::BGetTypeBin<char>(
					char& dest);  // 1040
		CUtlBuffer::BGetChar(
			char* pOutChar);  // 937
		CUtlBuffer::GetChar(); // 603
		RsBlendStateDesc_t::SetDestBlend(
				RsBlendMode_t blendMode,
				int nRenderTargetIdx);  // 603
	}
	{
		uint i; // 605
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 690
		CUtlBuffer::BGetTypeBin<char>(
					char& dest);  // 672
		CUtlBuffer::BGetTypeBin<char>(
					char& dest);  // 1040
		CUtlBuffer::BGetChar(
			char* pOutChar);  // 937
		CUtlBuffer::GetChar(); // 606
		RsBlendStateDesc_t::SetBlendOp(
				RsBlendOp_t blendOp,
				int nRenderTargetIdx);  // 606
	}
	{
		uint i; // 608
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 690
		CUtlBuffer::BGetTypeBin<char>(
					char& dest);  // 672
		CUtlBuffer::BGetTypeBin<char>(
					char& dest);  // 1040
		CUtlBuffer::BGetChar(
			char* pOutChar);  // 937
		CUtlBuffer::GetChar(); // 609
		RsBlendStateDesc_t::SetSrcBlendAlpha(
				RsBlendMode_t blendMode,
				int nRenderTargetIdx);  // 609
	}
	{
		uint i; // 611
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 690
		CUtlBuffer::BGetTypeBin<char>(
					char& dest);  // 672
		CUtlBuffer::BGetTypeBin<char>(
					char& dest);  // 1040
		CUtlBuffer::BGetChar(
			char* pOutChar);  // 937
		CUtlBuffer::GetChar(); // 612
		RsBlendStateDesc_t::SetDestBlendAlpha(
					RsBlendMode_t blendMode,
					int nRenderTargetIdx);  // 612
	}
	{
		uint i; // 614
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 690
		CUtlBuffer::BGetTypeBin<char>(
					char& dest);  // 672
		CUtlBuffer::BGetTypeBin<char>(
					char& dest);  // 1040
		CUtlBuffer::BGetChar(
			char* pOutChar);  // 937
		CUtlBuffer::GetChar(); // 615
		RsBlendStateDesc_t::SetBlendOpAlpha(
				RsBlendOp_t blendOp,
				int nRenderTargetIdx);  // 615
	}
	{
		uint i; // 617
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 690
		CUtlBuffer::BGetTypeBin<char>(
					char& dest);  // 672
		CUtlBuffer::BGetTypeBin<char>(
					char& dest);  // 1040
		CUtlBuffer::BGetChar(
			char* pOutChar);  // 937
		CUtlBuffer::GetChar(); // 618
		RsBlendStateDesc_t::SetRenderTargetWriteMask(
					uint8 nWriteMask,
					int nRenderTargetIdx);  // 618
	}
	{
		uint i; // 620
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 690
		CUtlBuffer::BGetTypeBin<char>(
					char& dest);  // 672
		CUtlBuffer::BGetTypeBin<char>(
					char& dest);  // 1040
		CUtlBuffer::BGetChar(
			char* pOutChar);  // 937
		CUtlBuffer::GetChar(); // 621
		RsBlendStateDesc_t::SetSrgbWriteEnabled(
					bool bEnable,
					int nRenderTargetIdx);  // 621
	}
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 690
	CUtlBuffer::BGetTypeBin<char>(
				char& dest);  // 672
	CUtlBuffer::BGetTypeBin<char>(
				char& dest);  // 1040
	CUtlBuffer::BGetChar(
		char* pOutChar);  // 937
	CUtlBuffer::GetChar(); // 591
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 690
	CUtlBuffer::BGetTypeBin<char>(
				char& dest);  // 672
	CUtlBuffer::BGetTypeBin<char>(
				char& dest);  // 1040
	CUtlBuffer::BGetChar(
		char* pOutChar);  // 937
	CUtlBuffer::GetChar(); // 592
	CUtlBuffer::BGetTypeBin<char>(
				char& dest);  // 672
	CUtlBuffer::BGetTypeBin<char>(
				char& dest);  // 1040
	CUtlBuffer::BGetChar(
		char* pOutChar);  // 937
	CUtlBuffer::GetChar(); // 594
} /* size: 996, inline expansions: 16 (389 bytes) */

// <01352982> ../public/rendersystem/renderstate.h:640
// variable: 1
inline const RsBlendStateDesc_t& DefaultBlendStateDesc(void)
{
	const RsBlendStateDesc_t  defaultBlendState; // 642
} /* size: 0, variables: 1 */

// <06AB7CC2> ../public/rendersystem/renderstate.h:651
void RsBlendStateDesc_t::RsBlendStateDesc_t()
{
} /* size: 0 */

// <06AB7CA6> ../public/rendersystem/renderstate.h:651
inline void RsBlendStateDesc_t::RsBlendStateDesc_t()
{
} /* size: 0 */

// <00683F69> ../public/rendersystem/renderstate.h:688
inline RsFilter_t RsEncodeBasicTextureFilter(RsFilterType_t minFilter, RsFilterType_t magFilter, RsFilterType_t mipFilter, bool bComparison)
{
} /* size: 0 */

// <00A5CDD9> ../public/rendersystem/renderstate.h:713
inline bool RsIsComparisonTextureFilter(RsFilter_t filter)
{
} /* size: 0 */

// <004B8E0D> ../public/rendersystem/renderstate.h:718
inline bool RsIsAnisoTextureFilter(RsFilter_t filter)
{
} /* size: 0 */

// <0003FD2C> ../public/rendersystem/renderstate.h:734
// member functions: 60
// member variables: 13
// class size: 20
class CSamplerStateDescBase {
	/* ../public/rendersystem/renderstate.h:737 */
	void CSamplerStateDescBase(CSamplerStateDescBase* );
	/* ../public/rendersystem/renderstate.h:739 */
	RsFilter_t GetFilterMode(const CSamplerStateDescBase* );
	/* ../public/rendersystem/renderstate.h:743 */
	void SetFilterMode(CSamplerStateDescBase* , RsFilter_t);
	/* ../public/rendersystem/renderstate.h:748 */
	RsTextureAddressMode_t GetTextureAddressModeU(const CSamplerStateDescBase* );
	/* ../public/rendersystem/renderstate.h:752 */
	RsTextureAddressMode_t GetTextureAddressModeV(const CSamplerStateDescBase* );
	/* ../public/rendersystem/renderstate.h:756 */
	RsTextureAddressMode_t GetTextureAddressModeW(const CSamplerStateDescBase* );
	/* ../public/rendersystem/renderstate.h:761 */
	void SetTextureAddressModeU(CSamplerStateDescBase* , RsTextureAddressMode_t);
	/* ../public/rendersystem/renderstate.h:765 */
	void SetTextureAddressModeV(CSamplerStateDescBase* , RsTextureAddressMode_t);
	/* ../public/rendersystem/renderstate.h:769 */
	void SetTextureAddressModeW(CSamplerStateDescBase* , RsTextureAddressMode_t);
	/* ../public/rendersystem/renderstate.h:774 */
	float32 GetMipLodBias(const CSamplerStateDescBase* );
	/* ../public/rendersystem/renderstate.h:779 */
	void SetMipLodBias(CSamplerStateDescBase* , float32);
	/* ../public/rendersystem/renderstate.h:787 */
	uint32 GetMaxAnisotropyExp(const CSamplerStateDescBase* );
	/* ../public/rendersystem/renderstate.h:792 */
	uint32 GetMaxAnisotropy(const CSamplerStateDescBase* );
	/* ../public/rendersystem/renderstate.h:797 */
	void SetMaxAnisotropy(CSamplerStateDescBase* , uint32);
	/* ../public/rendersystem/renderstate.h:803 */
	RsComparison_t GetComparisonFunc(const CSamplerStateDescBase* );
	/* ../public/rendersystem/renderstate.h:807 */
	void SetComparisonFunc(CSamplerStateDescBase* , RsComparison_t);
	/* ../public/rendersystem/renderstate.h:812 */
	void SetBorderColor(CSamplerStateDescBase* , const float32* );
	/* ../public/rendersystem/renderstate.h:817 */
	void GetBorderColor(const CSamplerStateDescBase* , float32* );
	/* ../public/rendersystem/renderstate.h:822 */
	uint32 GetBorderColor32Bit(const CSamplerStateDescBase* );
	/* ../public/rendersystem/renderstate.h:827 */
	void GetMinMaxLod(const CSamplerStateDescBase* , uint32* , uint32* );
	/* ../public/rendersystem/renderstate.h:833 */
	uint32 GetMinLod(const CSamplerStateDescBase* );
	/* ../public/rendersystem/renderstate.h:837 */
	uint32 GetMaxLod(const CSamplerStateDescBase* );
	/* ../public/rendersystem/renderstate.h:842 */
	void SetMinMaxLod(CSamplerStateDescBase* , uint32, uint32);
	/* ../public/rendersystem/renderstate.h:848 */
	void SetMinLod(CSamplerStateDescBase* , uint32);
	/* ../public/rendersystem/renderstate.h:853 */
	void SetMaxLod(CSamplerStateDescBase* , uint32);
	/* ../public/rendersystem/renderstate.h:858 */
	bool IsGlobalMipBiasOverrideAllowed(const CSamplerStateDescBase* );
	/* ../public/rendersystem/renderstate.h:862 */
	void SetGlobalMipBiasOverrideAllowed(CSamplerStateDescBase* , bool);
	/* ../public/rendersystem/renderstate.h:867 */
	uint32 HashValue(const CSamplerStateDescBase* );
	/* ../public/rendersystem/renderstate.h:873 */
	bool operator==(const CSamplerStateDescBase* , const CSamplerStateDescBase& );
	/* ../public/rendersystem/renderstate.h:881 */
	bool operator!=(const CSamplerStateDescBase* , const CSamplerStateDescBase& );
protected:
	uint8_t m_nFilterMode; /* 0 1 */
	uint8_t m_nMipLodBias; /* 1 1 */
	uint8_t m_nMipLodBiasSign; /* 2 1 */
	uint8_t m_nAddressU; /* 3 1 */
	uint8_t m_nAddressV; /* 4 1 */
	uint8_t m_nAddressW; /* 5 1 */
	uint8_t m_nAnisoExp; /* 6 1 */
	uint8_t m_nComparisonFunc; /* 7 1 */
	uint8_t m_nAllowGlobalMipBiasOverride; /* 8 1 */
	uint8_t m_nMinLod; /* 9 1 */
	uint8_t m_nMaxLod; /* 10 1 */
	uint32_t m_nBorderColor8Bit; /* 12 4 */
	uint8_t m_nPad[2]; /* 16 2 */
	void CSamplerStateDescBase(class CSamplerStateDescBase *); /* linkage=_ZN21CSamplerStateDescBaseC4Ev */
	enum RsFilter_t GetFilterMode(const class CSamplerStateDescBase  *); /* linkage=_ZNK21CSamplerStateDescBase13GetFilterModeEv */
	void SetFilterMode(class CSamplerStateDescBase *, enum RsFilter_t); /* linkage=_ZN21CSamplerStateDescBase13SetFilterModeE10RsFilter_t */
	enum RsTextureAddressMode_t GetTextureAddressModeU(const class CSamplerStateDescBase  *); /* linkage=_ZNK21CSamplerStateDescBase22GetTextureAddressModeUEv */
	enum RsTextureAddressMode_t GetTextureAddressModeV(const class CSamplerStateDescBase  *); /* linkage=_ZNK21CSamplerStateDescBase22GetTextureAddressModeVEv */
	enum RsTextureAddressMode_t GetTextureAddressModeW(const class CSamplerStateDescBase  *); /* linkage=_ZNK21CSamplerStateDescBase22GetTextureAddressModeWEv */
	void SetTextureAddressModeU(class CSamplerStateDescBase *, enum RsTextureAddressMode_t); /* linkage=_ZN21CSamplerStateDescBase22SetTextureAddressModeUE22RsTextureAddressMode_t */
	void SetTextureAddressModeV(class CSamplerStateDescBase *, enum RsTextureAddressMode_t); /* linkage=_ZN21CSamplerStateDescBase22SetTextureAddressModeVE22RsTextureAddressMode_t */
	void SetTextureAddressModeW(class CSamplerStateDescBase *, enum RsTextureAddressMode_t); /* linkage=_ZN21CSamplerStateDescBase22SetTextureAddressModeWE22RsTextureAddressMode_t */
	float32 GetMipLodBias(const class CSamplerStateDescBase  *); /* linkage=_ZNK21CSamplerStateDescBase13GetMipLodBiasEv */
	void SetMipLodBias(class CSamplerStateDescBase *, float32); /* linkage=_ZN21CSamplerStateDescBase13SetMipLodBiasEf */
	uint32 GetMaxAnisotropyExp(const class CSamplerStateDescBase  *); /* linkage=_ZNK21CSamplerStateDescBase19GetMaxAnisotropyExpEv */
	uint32 GetMaxAnisotropy(const class CSamplerStateDescBase  *); /* linkage=_ZNK21CSamplerStateDescBase16GetMaxAnisotropyEv */
	void SetMaxAnisotropy(class CSamplerStateDescBase *, uint32); /* linkage=_ZN21CSamplerStateDescBase16SetMaxAnisotropyEj */
	enum RsComparison_t GetComparisonFunc(const class CSamplerStateDescBase  *); /* linkage=_ZNK21CSamplerStateDescBase17GetComparisonFuncEv */
	void SetComparisonFunc(class CSamplerStateDescBase *, enum RsComparison_t); /* linkage=_ZN21CSamplerStateDescBase17SetComparisonFuncE14RsComparison_t */
	void SetBorderColor(class CSamplerStateDescBase *, const float32  *); /* linkage=_ZN21CSamplerStateDescBase14SetBorderColorEPKf */
	void GetBorderColor(const class CSamplerStateDescBase  *, float32 *); /* linkage=_ZNK21CSamplerStateDescBase14GetBorderColorEPf */
	uint32 GetBorderColor32Bit(const class CSamplerStateDescBase  *); /* linkage=_ZNK21CSamplerStateDescBase19GetBorderColor32BitEv */
	void GetMinMaxLod(const class CSamplerStateDescBase  *, uint32 *, uint32 *); /* linkage=_ZNK21CSamplerStateDescBase12GetMinMaxLodEPjS0_ */
	uint32 GetMinLod(const class CSamplerStateDescBase  *); /* linkage=_ZNK21CSamplerStateDescBase9GetMinLodEv */
	uint32 GetMaxLod(const class CSamplerStateDescBase  *); /* linkage=_ZNK21CSamplerStateDescBase9GetMaxLodEv */
	void SetMinMaxLod(class CSamplerStateDescBase *, uint32, uint32); /* linkage=_ZN21CSamplerStateDescBase12SetMinMaxLodEjj */
	void SetMinLod(class CSamplerStateDescBase *, uint32); /* linkage=_ZN21CSamplerStateDescBase9SetMinLodEj */
	void SetMaxLod(class CSamplerStateDescBase *, uint32); /* linkage=_ZN21CSamplerStateDescBase9SetMaxLodEj */
	bool IsGlobalMipBiasOverrideAllowed(const class CSamplerStateDescBase  *); /* linkage=_ZNK21CSamplerStateDescBase30IsGlobalMipBiasOverrideAllowedEv */
	void SetGlobalMipBiasOverrideAllowed(class CSamplerStateDescBase *, bool); /* linkage=_ZN21CSamplerStateDescBase31SetGlobalMipBiasOverrideAllowedEb */
	uint32 HashValue(const class CSamplerStateDescBase  *); /* linkage=_ZNK21CSamplerStateDescBase9HashValueEv */
	bool operator==(const class CSamplerStateDescBase  *, const class CSamplerStateDescBase  &); /* linkage=_ZNK21CSamplerStateDescBaseeqERKS_ */
	bool operator!=(const class CSamplerStateDescBase  *, const class CSamplerStateDescBase  &); /* linkage=_ZNK21CSamplerStateDescBaseneERKS_ */
};

// <058A823B> ../../public/rendersystem/renderstate.h:734
// member functions: 60
// member variables: 13
// class size: 20
class CSamplerStateDescBase {
	/* ../../public/rendersystem/renderstate.h:737 */
	void CSamplerStateDescBase(CSamplerStateDescBase* );
	/* ../../public/rendersystem/renderstate.h:739 */
	RsFilter_t GetFilterMode(const CSamplerStateDescBase* );
	/* ../../public/rendersystem/renderstate.h:743 */
	void SetFilterMode(CSamplerStateDescBase* , RsFilter_t);
	/* ../../public/rendersystem/renderstate.h:748 */
	RsTextureAddressMode_t GetTextureAddressModeU(const CSamplerStateDescBase* );
	/* ../../public/rendersystem/renderstate.h:752 */
	RsTextureAddressMode_t GetTextureAddressModeV(const CSamplerStateDescBase* );
	/* ../../public/rendersystem/renderstate.h:756 */
	RsTextureAddressMode_t GetTextureAddressModeW(const CSamplerStateDescBase* );
	/* ../../public/rendersystem/renderstate.h:761 */
	void SetTextureAddressModeU(CSamplerStateDescBase* , RsTextureAddressMode_t);
	/* ../../public/rendersystem/renderstate.h:765 */
	void SetTextureAddressModeV(CSamplerStateDescBase* , RsTextureAddressMode_t);
	/* ../../public/rendersystem/renderstate.h:769 */
	void SetTextureAddressModeW(CSamplerStateDescBase* , RsTextureAddressMode_t);
	/* ../../public/rendersystem/renderstate.h:774 */
	float32 GetMipLodBias(const CSamplerStateDescBase* );
	/* ../../public/rendersystem/renderstate.h:779 */
	void SetMipLodBias(CSamplerStateDescBase* , float32);
	/* ../../public/rendersystem/renderstate.h:787 */
	uint32 GetMaxAnisotropyExp(const CSamplerStateDescBase* );
	/* ../../public/rendersystem/renderstate.h:792 */
	uint32 GetMaxAnisotropy(const CSamplerStateDescBase* );
	/* ../../public/rendersystem/renderstate.h:797 */
	void SetMaxAnisotropy(CSamplerStateDescBase* , uint32);
	/* ../../public/rendersystem/renderstate.h:803 */
	RsComparison_t GetComparisonFunc(const CSamplerStateDescBase* );
	/* ../../public/rendersystem/renderstate.h:807 */
	void SetComparisonFunc(CSamplerStateDescBase* , RsComparison_t);
	/* ../../public/rendersystem/renderstate.h:812 */
	void SetBorderColor(CSamplerStateDescBase* , const float32* );
	/* ../../public/rendersystem/renderstate.h:817 */
	void GetBorderColor(const CSamplerStateDescBase* , float32* );
	/* ../../public/rendersystem/renderstate.h:822 */
	uint32 GetBorderColor32Bit(const CSamplerStateDescBase* );
	/* ../../public/rendersystem/renderstate.h:827 */
	void GetMinMaxLod(const CSamplerStateDescBase* , uint32* , uint32* );
	/* ../../public/rendersystem/renderstate.h:833 */
	uint32 GetMinLod(const CSamplerStateDescBase* );
	/* ../../public/rendersystem/renderstate.h:837 */
	uint32 GetMaxLod(const CSamplerStateDescBase* );
	/* ../../public/rendersystem/renderstate.h:842 */
	void SetMinMaxLod(CSamplerStateDescBase* , uint32, uint32);
	/* ../../public/rendersystem/renderstate.h:848 */
	void SetMinLod(CSamplerStateDescBase* , uint32);
	/* ../../public/rendersystem/renderstate.h:853 */
	void SetMaxLod(CSamplerStateDescBase* , uint32);
	/* ../../public/rendersystem/renderstate.h:858 */
	bool IsGlobalMipBiasOverrideAllowed(const CSamplerStateDescBase* );
	/* ../../public/rendersystem/renderstate.h:862 */
	void SetGlobalMipBiasOverrideAllowed(CSamplerStateDescBase* , bool);
	/* ../../public/rendersystem/renderstate.h:867 */
	uint32 HashValue(const CSamplerStateDescBase* );
	/* ../../public/rendersystem/renderstate.h:873 */
	bool operator==(const CSamplerStateDescBase* , const CSamplerStateDescBase& );
	/* ../../public/rendersystem/renderstate.h:881 */
	bool operator!=(const CSamplerStateDescBase* , const CSamplerStateDescBase& );
protected:
	uint8_t m_nFilterMode; /* 0 1 */
	uint8_t m_nMipLodBias; /* 1 1 */
	uint8_t m_nMipLodBiasSign; /* 2 1 */
	uint8_t m_nAddressU; /* 3 1 */
	uint8_t m_nAddressV; /* 4 1 */
	uint8_t m_nAddressW; /* 5 1 */
	uint8_t m_nAnisoExp; /* 6 1 */
	uint8_t m_nComparisonFunc; /* 7 1 */
	uint8_t m_nAllowGlobalMipBiasOverride; /* 8 1 */
	uint8_t m_nMinLod; /* 9 1 */
	uint8_t m_nMaxLod; /* 10 1 */
	uint32_t m_nBorderColor8Bit; /* 12 4 */
	uint8_t m_nPad[2]; /* 16 2 */
	void CSamplerStateDescBase(class CSamplerStateDescBase *); /* linkage=_ZN21CSamplerStateDescBaseC4Ev */
	enum RsFilter_t GetFilterMode(const class CSamplerStateDescBase  *); /* linkage=_ZNK21CSamplerStateDescBase13GetFilterModeEv */
	void SetFilterMode(class CSamplerStateDescBase *, enum RsFilter_t); /* linkage=_ZN21CSamplerStateDescBase13SetFilterModeE10RsFilter_t */
	enum RsTextureAddressMode_t GetTextureAddressModeU(const class CSamplerStateDescBase  *); /* linkage=_ZNK21CSamplerStateDescBase22GetTextureAddressModeUEv */
	enum RsTextureAddressMode_t GetTextureAddressModeV(const class CSamplerStateDescBase  *); /* linkage=_ZNK21CSamplerStateDescBase22GetTextureAddressModeVEv */
	enum RsTextureAddressMode_t GetTextureAddressModeW(const class CSamplerStateDescBase  *); /* linkage=_ZNK21CSamplerStateDescBase22GetTextureAddressModeWEv */
	void SetTextureAddressModeU(class CSamplerStateDescBase *, enum RsTextureAddressMode_t); /* linkage=_ZN21CSamplerStateDescBase22SetTextureAddressModeUE22RsTextureAddressMode_t */
	void SetTextureAddressModeV(class CSamplerStateDescBase *, enum RsTextureAddressMode_t); /* linkage=_ZN21CSamplerStateDescBase22SetTextureAddressModeVE22RsTextureAddressMode_t */
	void SetTextureAddressModeW(class CSamplerStateDescBase *, enum RsTextureAddressMode_t); /* linkage=_ZN21CSamplerStateDescBase22SetTextureAddressModeWE22RsTextureAddressMode_t */
	float32 GetMipLodBias(const class CSamplerStateDescBase  *); /* linkage=_ZNK21CSamplerStateDescBase13GetMipLodBiasEv */
	void SetMipLodBias(class CSamplerStateDescBase *, float32); /* linkage=_ZN21CSamplerStateDescBase13SetMipLodBiasEf */
	uint32 GetMaxAnisotropyExp(const class CSamplerStateDescBase  *); /* linkage=_ZNK21CSamplerStateDescBase19GetMaxAnisotropyExpEv */
	uint32 GetMaxAnisotropy(const class CSamplerStateDescBase  *); /* linkage=_ZNK21CSamplerStateDescBase16GetMaxAnisotropyEv */
	void SetMaxAnisotropy(class CSamplerStateDescBase *, uint32); /* linkage=_ZN21CSamplerStateDescBase16SetMaxAnisotropyEj */
	enum RsComparison_t GetComparisonFunc(const class CSamplerStateDescBase  *); /* linkage=_ZNK21CSamplerStateDescBase17GetComparisonFuncEv */
	void SetComparisonFunc(class CSamplerStateDescBase *, enum RsComparison_t); /* linkage=_ZN21CSamplerStateDescBase17SetComparisonFuncE14RsComparison_t */
	void SetBorderColor(class CSamplerStateDescBase *, const float32  *); /* linkage=_ZN21CSamplerStateDescBase14SetBorderColorEPKf */
	void GetBorderColor(const class CSamplerStateDescBase  *, float32 *); /* linkage=_ZNK21CSamplerStateDescBase14GetBorderColorEPf */
	uint32 GetBorderColor32Bit(const class CSamplerStateDescBase  *); /* linkage=_ZNK21CSamplerStateDescBase19GetBorderColor32BitEv */
	void GetMinMaxLod(const class CSamplerStateDescBase  *, uint32 *, uint32 *); /* linkage=_ZNK21CSamplerStateDescBase12GetMinMaxLodEPjS0_ */
	uint32 GetMinLod(const class CSamplerStateDescBase  *); /* linkage=_ZNK21CSamplerStateDescBase9GetMinLodEv */
	uint32 GetMaxLod(const class CSamplerStateDescBase  *); /* linkage=_ZNK21CSamplerStateDescBase9GetMaxLodEv */
	void SetMinMaxLod(class CSamplerStateDescBase *, uint32, uint32); /* linkage=_ZN21CSamplerStateDescBase12SetMinMaxLodEjj */
	void SetMinLod(class CSamplerStateDescBase *, uint32); /* linkage=_ZN21CSamplerStateDescBase9SetMinLodEj */
	void SetMaxLod(class CSamplerStateDescBase *, uint32); /* linkage=_ZN21CSamplerStateDescBase9SetMaxLodEj */
	bool IsGlobalMipBiasOverrideAllowed(const class CSamplerStateDescBase  *); /* linkage=_ZNK21CSamplerStateDescBase30IsGlobalMipBiasOverrideAllowedEv */
	void SetGlobalMipBiasOverrideAllowed(class CSamplerStateDescBase *, bool); /* linkage=_ZN21CSamplerStateDescBase31SetGlobalMipBiasOverrideAllowedEb */
	uint32 HashValue(const class CSamplerStateDescBase  *); /* linkage=_ZNK21CSamplerStateDescBase9HashValueEv */
	bool operator==(const class CSamplerStateDescBase  *, const class CSamplerStateDescBase  &); /* linkage=_ZNK21CSamplerStateDescBaseeqERKS_ */
	bool operator!=(const class CSamplerStateDescBase  *, const class CSamplerStateDescBase  &); /* linkage=_ZNK21CSamplerStateDescBaseneERKS_ */
};

// <04025963> ../public/rendersystem/renderstate.h:737
void CSamplerStateDescBase::CSamplerStateDescBase()
{
} /* size: 0 */

// <0402594A> ../public/rendersystem/renderstate.h:737
inline void CSamplerStateDescBase::CSamplerStateDescBase()
{
} /* size: 0 */

// <00A5CD90> ../public/rendersystem/renderstate.h:739
inline void CSamplerStateDescBase::GetFilterMode()
{
} /* size: 0 */

// <04025924> ../public/rendersystem/renderstate.h:743
inline void CSamplerStateDescBase::SetFilterMode(RsFilter_t filter)
{
} /* size: 0 */

// <00A5CD51> ../public/rendersystem/renderstate.h:748
inline void CSamplerStateDescBase::GetTextureAddressModeU()
{
} /* size: 0 */

// <00A5CD38> ../public/rendersystem/renderstate.h:752
inline void CSamplerStateDescBase::GetTextureAddressModeV()
{
} /* size: 0 */

// <00A5CD1F> ../public/rendersystem/renderstate.h:756
inline void CSamplerStateDescBase::GetTextureAddressModeW()
{
} /* size: 0 */

// <040258FE> ../public/rendersystem/renderstate.h:761
inline void CSamplerStateDescBase::SetTextureAddressModeU(RsTextureAddressMode_t addressMode)
{
} /* size: 0 */

// <040258D8> ../public/rendersystem/renderstate.h:765
inline void CSamplerStateDescBase::SetTextureAddressModeV(RsTextureAddressMode_t addressMode)
{
} /* size: 0 */

// <040258B2> ../public/rendersystem/renderstate.h:769
inline void CSamplerStateDescBase::SetTextureAddressModeW(RsTextureAddressMode_t addressMode)
{
} /* size: 0 */

// <00A5CC94> ../public/rendersystem/renderstate.h:774
inline void CSamplerStateDescBase::GetMipLodBias()
{
} /* size: 0 */

// <04025874> ../public/rendersystem/renderstate.h:779
// variable: 1
inline void CSamplerStateDescBase::SetMipLodBias(float32 flBias)
{
	const float32  flMaxBiasValue; // 781
} /* size: 0, variables: 1 */

// <00A5CC3D> ../public/rendersystem/renderstate.h:792
inline void CSamplerStateDescBase::GetMaxAnisotropy()
{
} /* size: 0 */

// <040257CF> ../public/rendersystem/renderstate.h:797
// variable: 1
inline void CSamplerStateDescBase::SetMaxAnisotropy(uint32 nMaxAniso)
{
	uint32 nAnisoExp; // 799
} /* size: 0, variables: 1 */

// <040257A9> ../public/rendersystem/renderstate.h:807
inline void CSamplerStateDescBase::SetComparisonFunc(RsComparison_t compFunc)
{
} /* size: 0 */

// <04025783> ../public/rendersystem/renderstate.h:812
inline void CSamplerStateDescBase::SetBorderColor(const float32* pBorderColor)
{
} /* size: 0 */

// <00A5CB1A> ../public/rendersystem/renderstate.h:822
inline void CSamplerStateDescBase::GetBorderColor32Bit()
{
} /* size: 0 */

// <00A5CAE7> ../public/rendersystem/renderstate.h:827
inline void CSamplerStateDescBase::GetMinMaxLod(uint32* pMinLodOut, uint32* pMaxLodOut)
{
} /* size: 0 */

// <04025750> ../public/rendersystem/renderstate.h:842
inline void CSamplerStateDescBase::SetMinMaxLod(uint32 nMinLod, uint32 nMaxLod)
{
} /* size: 0 */

// <00683D19> ../public/rendersystem/renderstate.h:848
inline void CSamplerStateDescBase::SetMinLod(uint32 nMinLod)
{
} /* size: 0 */

// <00683CF3> ../public/rendersystem/renderstate.h:853
inline void CSamplerStateDescBase::SetMaxLod(uint32 nMaxLod)
{
} /* size: 0 */

// <0402572A> ../public/rendersystem/renderstate.h:862
inline void CSamplerStateDescBase::SetGlobalMipBiasOverrideAllowed(bool bAllow)
{
} /* size: 0 */

// <00A5CA75> ../public/rendersystem/renderstate.h:867
inline void CSamplerStateDescBase::HashValue()
{
} /* size: 0 */

// <001A16C0> ../public/rendersystem/renderstate.h:873
// variables: 2
inline void CSamplerStateDescBase::operator==(const CSamplerStateDescBase& state)
{
	const uint32* pThis; // 876
	const uint32* pThat; // 877
} /* size: 0, variables: 2 */

// <0004026B> ../public/rendersystem/renderstate.h:912
// member functions: 8
// member variable: 1
// class size: 20
class CSamplerStateDesc : public CSamplerStateDescBase {
public:
	/* class CSamplerStateDescBase <ancestor>; */ /* 0 20 */
	/* ../public/rendersystem/renderstate.h:915 */
	void CSamplerStateDesc(CSamplerStateDesc* );
	/* ../public/rendersystem/renderstate.h:916 */
	void CSamplerStateDesc(CSamplerStateDesc* , RsFilter_t, RsTextureAddressMode_t, RsTextureAddressMode_t, RsTextureAddressMode_t, float32, uint32, RsComparison_t, uint32, uint32, bool, bool);
	/* ../public/rendersystem/renderstate.h:942 */
	bool operator==(const CSamplerStateDesc* , const CSamplerStateDesc& );
	/* ../public/rendersystem/renderstate.h:950 */
	bool operator!=(const CSamplerStateDesc* , const CSamplerStateDesc& );
	void CSamplerStateDesc(class CSamplerStateDesc *); /* linkage=_ZN17CSamplerStateDescC4Ev */
	void CSamplerStateDesc(class CSamplerStateDesc *, enum RsFilter_t, enum RsTextureAddressMode_t, enum RsTextureAddressMode_t, enum RsTextureAddressMode_t, float32, uint32, enum RsComparison_t, uint32, uint32, bool, bool); /* linkage=_ZN17CSamplerStateDescC4E10RsFilter_t22RsTextureAddressMode_tS1_S1_fj14RsComparison_tjjbb */
	bool operator==(const class CSamplerStateDesc  *, const class CSamplerStateDesc  &); /* linkage=_ZNK17CSamplerStateDesceqERKS_ */
	bool operator!=(const class CSamplerStateDesc  *, const class CSamplerStateDesc  &); /* linkage=_ZNK17CSamplerStateDescneERKS_ */
};

// <001E135D> ../../public/rendersystem/renderstate.h:912
// member functions: 8
// member variable: 1
// class size: 20
class CSamplerStateDesc : public CSamplerStateDescBase {
public:
	/* class CSamplerStateDescBase <ancestor>; */ /* 0 20 */
	/* ../../public/rendersystem/renderstate.h:915 */
	void CSamplerStateDesc(CSamplerStateDesc* );
	/* ../../public/rendersystem/renderstate.h:916 */
	void CSamplerStateDesc(CSamplerStateDesc* , RsFilter_t, RsTextureAddressMode_t, RsTextureAddressMode_t, RsTextureAddressMode_t, float32, uint32, RsComparison_t, uint32, uint32, bool, bool);
	/* ../../public/rendersystem/renderstate.h:942 */
	bool operator==(const CSamplerStateDesc* , const CSamplerStateDesc& );
	/* ../../public/rendersystem/renderstate.h:950 */
	bool operator!=(const CSamplerStateDesc* , const CSamplerStateDesc& );
	void CSamplerStateDesc(class CSamplerStateDesc *); /* linkage=_ZN17CSamplerStateDescC4Ev */
	void CSamplerStateDesc(class CSamplerStateDesc *, enum RsFilter_t, enum RsTextureAddressMode_t, enum RsTextureAddressMode_t, enum RsTextureAddressMode_t, float32, uint32, enum RsComparison_t, uint32, uint32, bool, bool); /* linkage=_ZN17CSamplerStateDescC4E10RsFilter_t22RsTextureAddressMode_tS1_S1_fj14RsComparison_tjjbb */
	bool operator==(const class CSamplerStateDesc  *, const class CSamplerStateDesc  &); /* linkage=_ZNK17CSamplerStateDesceqERKS_ */
	bool operator!=(const class CSamplerStateDesc  *, const class CSamplerStateDesc  &); /* linkage=_ZNK17CSamplerStateDescneERKS_ */
};

// <040256CB> ../public/rendersystem/renderstate.h:916
// variables: 2
void CSamplerStateDesc::CSamplerStateDesc(RsFilter_t filter, RsTextureAddressMode_t addressU, RsTextureAddressMode_t addressV, RsTextureAddressMode_t addressW, float32 flMipLodBias, uint32 nMaxAniso, RsComparison_t comparisonFunc, uint32 nMinLod, uint32 nMaxLod, bool bWhiteBorder, bool bAllowGlobalMipBiasOverride)
{
	{
		float32 flZeros; // 936
		float32 flOnes; // 937
	}
} /* size: 0 */

// <040255F7> ../public/rendersystem/renderstate.h:916
// variables: 2
inline void CSamplerStateDesc::CSamplerStateDesc(RsFilter_t filter, RsTextureAddressMode_t addressU, RsTextureAddressMode_t addressV, RsTextureAddressMode_t addressW, float32 flMipLodBias, uint32 nMaxAniso, RsComparison_t comparisonFunc, uint32 nMinLod, uint32 nMaxLod, bool bWhiteBorder, bool bAllowGlobalMipBiasOverride)
{
	{
		float32 flZeros; // 936
		float32 flOnes; // 937
	}
} /* size: 0 */

// <0027E25E> ../public/rendersystem/renderstate.h:916
// variables: 4
// function calls: 15
void CSamplerStateDesc::CSamplerStateDesc(RsFilter_t filter, RsTextureAddressMode_t addressU, RsTextureAddressMode_t addressV, RsTextureAddressMode_t addressW, float32 flMipLodBias, uint32 nMaxAniso, RsComparison_t comparisonFunc, uint32 nMinLod, uint32 nMaxLod, bool bWhiteBorder, bool bAllowGlobalMipBiasOverride)
{
	{
		float32 flZeros; // 936
		float32 flOnes; // 937
	}
	CSamplerStateDescBase::CSamplerStateDescBase(); // 927
	{
		float32 flZeros; // 936
		float32 flOnes; // 937
		clamp<float, float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 782
		CSamplerStateDescBase::SetMipLodBias(
				float32 flBias);  // 932
		CSamplerStateDescBase::SetFilterMode(
				RsFilter_t filter);  // 928
		CSamplerStateDescBase::SetTextureAddressModeU(
					RsTextureAddressMode_t addressMode);  // 929
		CSamplerStateDescBase::SetTextureAddressModeV(
					RsTextureAddressMode_t addressMode);  // 930
		CSamplerStateDescBase::SetTextureAddressModeW(
					RsTextureAddressMode_t addressMode);  // 931
		Max<unsigned int>(const unsigned int& val1,
					const unsigned int& val2);  // 799
		Min<unsigned int>(const unsigned int& val1,
					const unsigned int& val2);  // 800
		CSamplerStateDescBase::SetMaxAnisotropy(
				uint32 nMaxAniso);  // 933
		CSamplerStateDescBase::SetComparisonFunc(
					RsComparison_t compFunc);  // 934
		CSamplerStateDescBase::SetGlobalMipBiasOverrideAllowed(
						bool bAllow);  // 939
		Min<unsigned int>(const unsigned int& val1,
					const unsigned int& val2);  // 844
		Min<unsigned int>(const unsigned int& val1,
					const unsigned int& val2);  // 845
		CSamplerStateDescBase::SetMinMaxLod(
				uint32 nMinLod,
				uint32 nMaxLod);  // 935
	}
} /* size: 268, inline expansions: 1 (24 bytes) */

// <00A5C912> ../public/rendersystem/renderstate.h:942
// variables: 2
inline void CSamplerStateDesc::operator==(const CSamplerStateDesc& state)
{
	const uint32* pThis; // 945
	const uint32* pThat; // 946
} /* size: 0, variables: 2 */

// <001043B8> ../public/rendersystem/renderstate.h:950
// variables: 2
inline void CSamplerStateDesc::operator!=(const CSamplerStateDesc& state)
{
	const uint32* pThis; // 953
	const uint32* pThat; // 954
} /* size: 0, variables: 2 */

// <007D88C4> ../public/rendersystem/renderstate.h:959
// variable: 1
inline const CSamplerStateDesc& DefaultSamplerStateDesc(void)
{
	const CSamplerStateDesc  s_defaultSamplerStateDesc; // 961
} /* size: 0, variables: 1 */

// <0402559A> ../public/rendersystem/renderstate.h:975
// variables: 2
void CSamplerStateDesc::CSamplerStateDesc()
{
	{
		uint32* pThis; // 978
		const uint32* pDefault; // 979
	}
} /* size: 0 */

// <04025562> ../public/rendersystem/renderstate.h:975
// variables: 2
inline void CSamplerStateDesc::CSamplerStateDesc()
{
	{
		uint32* pThis; // 978
		const uint32* pDefault; // 979
	}
} /* size: 0 */

// <006836B8> ../public/rendersystem/renderstate.h:975
// variables: 6
// function calls: 16
void CSamplerStateDesc::CSamplerStateDesc()
{
	{
		uint32* pThis; // 978
		const uint32* pDefault; // 979
	}
	CSamplerStateDescBase::CSamplerStateDescBase(); // 975
	{
		uint32* pThis; // 978
		const uint32* pDefault; // 979
		CSamplerStateDescBase::CSamplerStateDescBase(); // 927
		{
			float32 flZeros; // 936
			float32 flOnes; // 937
			CSamplerStateDescBase::SetFilterMode(
					RsFilter_t filter);  // 928
			CSamplerStateDescBase::SetTextureAddressModeU(
						RsTextureAddressMode_t addressMode);  // 929
			CSamplerStateDescBase::SetTextureAddressModeV(
						RsTextureAddressMode_t addressMode);  // 930
			CSamplerStateDescBase::SetTextureAddressModeW(
						RsTextureAddressMode_t addressMode);  // 931
			Min<unsigned int>(const unsigned int& val1,
						const unsigned int& val2);  // 800
			CSamplerStateDescBase::SetMaxAnisotropy(
					uint32 nMaxAniso);  // 933
			CSamplerStateDescBase::SetMipLodBias(
					float32 flBias);  // 932
			CSamplerStateDescBase::SetBorderColor(
					const float32* pBorderColor);  // 938
			CSamplerStateDescBase::SetComparisonFunc(
						RsComparison_t compFunc);  // 934
			CSamplerStateDescBase::SetMinMaxLod(
					uint32 nMinLod,
					uint32 nMaxLod);  // 935
			CSamplerStateDescBase::SetGlobalMipBiasOverrideAllowed(
							bool bAllow);  // 939
		}
		CSamplerStateDesc::CSamplerStateDesc(
					RsFilter_t filter,
					RsTextureAddressMode_t addressU,
					RsTextureAddressMode_t addressV,
					RsTextureAddressMode_t addressW,
					float32 flMipLodBias,
					uint32 nMaxAniso,
					RsComparison_t comparisonFunc,
					uint32 nMinLod,
					uint32 nMaxLod,
					bool bWhiteBorder,
					bool bAllowGlobalMipBiasOverride);  // 970
		DefaultSamplerStateDesc(void); // 959
		DefaultSamplerStateDesc(void); // 979
	}
} /* size: 194, inline expansions: 1 (21 bytes) */

// <0114A1CE> ../public/rendersystem/renderstate.h:1053
// member function: 1
// member variables: 9
// struct size: 72
struct RenderQueryPipelineStatistics_t {
	uint64 nInputAssemblyVertices; /* 0 8 */
	uint64 nInputAssemblyPrimitives; /* 8 8 */
	uint64 nVertexShaderInvocations; /* 16 8 */
	uint64 nGeometryShaderInvocations; /* 24 8 */
	uint64 nGeometryShaderPrimitives; /* 32 8 */
	uint64 nClippingInvocations; /* 40 8 */
	uint64 nClippingPrimitives; /* 48 8 */
	uint64 nPixelShaderInvocations; /* 56 8 */
	uint64 nComputeShaderInvocations; /* 64 8 */
	/* ../public/rendersystem/renderstate.h:1065 */
	void operator+=(RenderQueryPipelineStatistics_t* , const RenderQueryPipelineStatistics_t& );
};

