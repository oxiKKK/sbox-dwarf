
//
// vfx/vfx_vulkan/vfx_compile_helpers_vulkan.h
//
//	referenced by: libvfx_vulkan.so
//
//	functions: 13
//	classes: 2
//	structs: 3
//

// <00179C95> vfx/vfx_vulkan/vfx_compile_helpers_vulkan.h:17
void VfxUniformInfo_t::~VfxUniformInfo_t()
{
} /* size: 0 */

// <00179C78> vfx/vfx_vulkan/vfx_compile_helpers_vulkan.h:17
inline void VfxUniformInfo_t::~VfxUniformInfo_t()
{
} /* size: 0 */

// <0017766F> vfx/vfx_vulkan/vfx_compile_helpers_vulkan.h:17
void VfxUniformInfo_t::VfxUniformInfo_t(const VfxUniformInfo_t &)
{
} /* size: 0 */

// <0017764D> vfx/vfx_vulkan/vfx_compile_helpers_vulkan.h:17
inline void VfxUniformInfo_t::VfxUniformInfo_t(const VfxUniformInfo_t &)
{
} /* size: 0 */

// <000A3DA0> vfx/vfx_vulkan/vfx_compile_helpers_vulkan.h:17
// member function: 1
// member variables: 10
// struct size: 48
struct VfxUniformInfo_t {
	/* vfx/vfx_vulkan/vfx_compile_helpers_vulkan.h:30 */
	enum TextureType_t {
		TEXTURE_TYPE_INVALID = 0,
		TEXTURE_TYPE_TEXTURE = 1,
		TEXTURE_TYPE_BUFFER = 2,
		TEXTURE_TYPE_INPUT_ATTACHMENT = 3,
	};
	CUtlString uniformName; /* 0 8 */
	VfxRegisterType_t nRegisterType; /* 8 4 */
	int nUniformSize; /* 12 4 */
	int nUniformBlockIndex; /* 16 4 */
	int nUniformOffset; /* 20 4 */
	int nUniformNumElements; /* 24 4 */
	bool bIsArray; /* 28 1 */
	int nBinding; /* 32 4 */
	int nDescriptorSet; /* 36 4 */
	TextureType_t nTextureType; /* 40 4 */
	void ~VfxUniformInfo_t(VfxUniformInfo_t* );
};

// <00168898> vfx/vfx_vulkan/vfx_compile_helpers_vulkan.h:17
// member functions: 2
// member variables: 10
// struct size: 48
struct VfxUniformInfo_t {
	/* vfx/vfx_vulkan/vfx_compile_helpers_vulkan.h:30 */
	enum TextureType_t {
		TEXTURE_TYPE_INVALID = 0,
		TEXTURE_TYPE_TEXTURE = 1,
		TEXTURE_TYPE_BUFFER = 2,
		TEXTURE_TYPE_INPUT_ATTACHMENT = 3,
	};
	CUtlString uniformName; /* 0 8 */
	VfxRegisterType_t nRegisterType; /* 8 4 */
	int nUniformSize; /* 12 4 */
	int nUniformBlockIndex; /* 16 4 */
	int nUniformOffset; /* 20 4 */
	int nUniformNumElements; /* 24 4 */
	bool bIsArray; /* 28 1 */
	int nBinding; /* 32 4 */
	int nDescriptorSet; /* 36 4 */
	TextureType_t nTextureType; /* 40 4 */
	void VfxUniformInfo_t(VfxUniformInfo_t* , const VfxUniformInfo_t& );
	void ~VfxUniformInfo_t(VfxUniformInfo_t* );
};

// <001790C0> vfx/vfx_vulkan/vfx_compile_helpers_vulkan.h:42
void VfxUniformBlockInfo_t::~VfxUniformBlockInfo_t()
{
} /* size: 0 */

// <001790A3> vfx/vfx_vulkan/vfx_compile_helpers_vulkan.h:42
inline void VfxUniformBlockInfo_t::~VfxUniformBlockInfo_t()
{
} /* size: 0 */

// <00174E22> vfx/vfx_vulkan/vfx_compile_helpers_vulkan.h:42
void VfxUniformBlockInfo_t::VfxUniformBlockInfo_t(const VfxUniformBlockInfo_t &)
{
} /* size: 0 */

// <00174E00> vfx/vfx_vulkan/vfx_compile_helpers_vulkan.h:42
inline void VfxUniformBlockInfo_t::VfxUniformBlockInfo_t(const VfxUniformBlockInfo_t &)
{
} /* size: 0 */

// <000A3E8B> vfx/vfx_vulkan/vfx_compile_helpers_vulkan.h:42
// member function: 1
// member variables: 7
// struct size: 32
struct VfxUniformBlockInfo_t {
	CUtlString uniformBlockName; /* 0 8 */
	int nUniformBlockDataSize; /* 8 4 */
	VfxRegisterType_t nRegisterType; /* 12 4 */
	int nBinding; /* 16 4 */
	int nDescriptorSet; /* 20 4 */
	bool bIsPushConstant; /* 24 1 */
	int nUAVAssociatedBlockIndex; /* 28 4 */
	void ~VfxUniformBlockInfo_t(VfxUniformBlockInfo_t* );
};

// <000C02C2> vfx/vfx_vulkan/vfx_compile_helpers_vulkan.h:66
void ShaderCompileContext::ShaderCompileContext()
{
} /* size: 0 */

// <000C02A6> vfx/vfx_vulkan/vfx_compile_helpers_vulkan.h:66
inline void ShaderCompileContext::ShaderCompileContext()
{
} /* size: 0 */

// <000A695D> vfx/vfx_vulkan/vfx_compile_helpers_vulkan.h:66
// member functions: 12
// member variables: 5
// vtable entry: 1
// class size: 192
class ShaderCompileContext : public IShaderCompileContext {
public:
	/* class IShaderCompileContext <ancestor>; */ /* 0 8 */
	void ShaderCompileContext(ShaderCompileContext* , const ShaderCompileContext& );
	void ShaderCompileContext(ShaderCompileContext* );
	CUtlString m_MaskedCode; /* 8 8 */
	CThreadMutex m_lock; /* 16 72 */
	/* vfx/vfx_vulkan/vfx_compile_helpers_vulkan.h:73 */
	virtual void SetMaskedCode(ShaderCompileContext* , const char* );
	/* vfx/vfx_vulkan/vfx_compile_helpers_vulkan.h:78 */
	void ~ShaderCompileContext(ShaderCompileContext* );
	shared_mutex m_Mutex; /* 88 56 */
	CUtlDict<CUtlBuffer*, int> m_includeCache; /* 144 48 */
	/* vfx/vfx_vulkan/vfx_compile_helpers_vulkan.h:87 */
	CUtlBuffer* StoreInclude(ShaderCompileContext* , const char* , CUtlBuffer& );
	/* vfx/vfx_vulkan/vfx_compile_helpers_vulkan.h:103 */
	CUtlBuffer* GetInclude(ShaderCompileContext* , const char* );
	void ShaderCompileContext(class ShaderCompileContext *, const class ShaderCompileContext  &); /* linkage=_ZN20ShaderCompileContextC4ERKS_ */
	void ShaderCompileContext(class ShaderCompileContext *); /* linkage=_ZN20ShaderCompileContextC4Ev */
	virtual void SetMaskedCode(class ShaderCompileContext *, const char  *); /* linkage=_ZN20ShaderCompileContext13SetMaskedCodeEPKc */
	void ~ShaderCompileContext(class ShaderCompileContext *); /* linkage=_ZN20ShaderCompileContextD4Ev */
	class CUtlBuffer * StoreInclude(class ShaderCompileContext *, const char  *, class CUtlBuffer &); /* linkage=_ZN20ShaderCompileContext12StoreIncludeEPKcR10CUtlBuffer */
	class CUtlBuffer * GetInclude(class ShaderCompileContext *, const char  *); /* linkage=_ZN20ShaderCompileContext10GetIncludeEPKc */
};

// <0011DE10> vfx/vfx_vulkan/vfx_compile_helpers_vulkan.h:66
// member functions: 10
// member variables: 5
// vtable entry: 1
// class size: 192
class ShaderCompileContext : public IShaderCompileContext {
public:
	/* class IShaderCompileContext <ancestor>; */ /* 0 8 */
	CUtlString m_MaskedCode; /* 8 8 */
	CThreadMutex m_lock; /* 16 72 */
	/* vfx/vfx_vulkan/vfx_compile_helpers_vulkan.h:73 */
	virtual void SetMaskedCode(ShaderCompileContext* , const char* );
	/* vfx/vfx_vulkan/vfx_compile_helpers_vulkan.h:78 */
	void ~ShaderCompileContext(ShaderCompileContext* );
	shared_mutex m_Mutex; /* 88 56 */
	CUtlDict<CUtlBuffer*, int> m_includeCache; /* 144 48 */
	/* vfx/vfx_vulkan/vfx_compile_helpers_vulkan.h:87 */
	CUtlBuffer* StoreInclude(ShaderCompileContext* , const char* , CUtlBuffer& );
	/* vfx/vfx_vulkan/vfx_compile_helpers_vulkan.h:103 */
	CUtlBuffer* GetInclude(ShaderCompileContext* , const char* );
	void ShaderCompileContext(class ShaderCompileContext *, const class ShaderCompileContext  &); /* linkage=_ZN20ShaderCompileContextC4ERKS_ */
	void ShaderCompileContext(class ShaderCompileContext *); /* linkage=_ZN20ShaderCompileContextC4Ev */
	virtual void SetMaskedCode(class ShaderCompileContext *, const char  *); /* linkage=_ZN20ShaderCompileContext13SetMaskedCodeEPKc */
	void ~ShaderCompileContext(class ShaderCompileContext *); /* linkage=_ZN20ShaderCompileContextD4Ev */
	class CUtlBuffer * StoreInclude(class ShaderCompileContext *, const char  *, class CUtlBuffer &); /* linkage=_ZN20ShaderCompileContext12StoreIncludeEPKcR10CUtlBuffer */
	class CUtlBuffer * GetInclude(class ShaderCompileContext *, const char  *); /* linkage=_ZN20ShaderCompileContext10GetIncludeEPKc */
};

// <000D61BE> vfx/vfx_vulkan/vfx_compile_helpers_vulkan.h:73
// function call: 1
void ShaderCompileContext::SetMaskedCode(const char* code)
{
	CUtlString::operator=(
			const char* src);  // 75
} /* size: 13, inline expansions: 1 (5 bytes) */

// <0018E9E0> vfx/vfx_vulkan/vfx_compile_helpers_vulkan.h:87
// variables: 3
inline void ShaderCompileContext::StoreInclude(const char* name, CUtlBuffer& buffer)
{
	unique_lock<std::shared_mutex> lock; // 89
	int ex; // 91
	CUtlBuffer* ins; // 95
} /* size: 0, variables: 3 */

// <0018E9A5> vfx/vfx_vulkan/vfx_compile_helpers_vulkan.h:103
// variables: 2
inline void ShaderCompileContext::GetInclude(const char* name)
{
	shared_lock<std::shared_mutex> lock; // 105
	int i; // 107
} /* size: 0, variables: 2 */

