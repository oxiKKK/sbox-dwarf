
//
// public/rendersystem/irenderdevice.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//
//	functions: 46
//	classes: 2
//	structs: 8
//

// <002FB8AC> ../public/rendersystem/irenderdevice.h:71
void TextureResidencyInfo_t::TextureResidencyInfo_t()
{
} /* size: 0 */

// <002FB88F> ../public/rendersystem/irenderdevice.h:71
inline void TextureResidencyInfo_t::TextureResidencyInfo_t()
{
} /* size: 0 */

// <0115A215> ../public/rendersystem/irenderdevice.h:71
// member variables: 10
// struct size: 56
struct TextureResidencyInfo_t {
	HRenderTexture m_hTexture; /* 0 8 */
	uint m_nDiskMemorySizeBytes; /* 8 4 */
	uint m_nLoadedMemorySizeBytes; /* 12 4 */
	RenderMultisampleType_t m_nMultisampleType; /* 16 4 */
	const class CTextureDesc * m_pDiskDesc; /* 24 8 */
	const class CTextureDesc * m_pLoadedDesc; /* 32 8 */
	Vector m_vAverageColor; /* 40 12 */
	RenderTextureDimension_t m_textureDimension; /* 52 1 */
	bool m_bBoundLastFrame; /* 53 1 */
	uint16 m_nTargetMipLevelCount; /* 54 2 */
};

// <002D294A> ../public/rendersystem/irenderdevice.h:71
// member function: 1
// member variables: 10
// struct size: 56
struct TextureResidencyInfo_t {
	HRenderTexture m_hTexture; /* 0 8 */
	uint m_nDiskMemorySizeBytes; /* 8 4 */
	uint m_nLoadedMemorySizeBytes; /* 12 4 */
	RenderMultisampleType_t m_nMultisampleType; /* 16 4 */
	const class CTextureDesc * m_pDiskDesc; /* 24 8 */
	const class CTextureDesc * m_pLoadedDesc; /* 32 8 */
	Vector m_vAverageColor; /* 40 12 */
	RenderTextureDimension_t m_textureDimension; /* 52 1 */
	bool m_bBoundLastFrame; /* 53 1 */
	uint16 m_nTargetMipLevelCount; /* 54 2 */
	void TextureResidencyInfo_t(TextureResidencyInfo_t* );
};

// <012D86C6> ../public/rendersystem/irenderdevice.h:87
void TextureResidencyStats_t::TextureResidencyStats_t()
{
} /* size: 0 */

// <012D86AA> ../public/rendersystem/irenderdevice.h:87
inline void TextureResidencyStats_t::TextureResidencyStats_t()
{
} /* size: 0 */

// <012D8693> ../public/rendersystem/irenderdevice.h:87
void TextureResidencyStats_t::~TextureResidencyStats_t()
{
} /* size: 0 */

// <012D8677> ../public/rendersystem/irenderdevice.h:87
inline void TextureResidencyStats_t::~TextureResidencyStats_t()
{
} /* size: 0 */

// <00398743> ../public/rendersystem/irenderdevice.h:87
inline void TextureResidencyStats_t::operator=(const TextureResidencyStats_t &)
{
} /* size: 0 */

// <0115B9CA> ../public/rendersystem/irenderdevice.h:87
// member functions: 3
// member variables: 7
// struct size: 96
struct TextureResidencyStats_t {
	uint32 m_nFrameNumber; /* 0 4 */
	uint32 m_nStreamedInCount; /* 4 4 */
	uint64 m_nStreamedInBytes; /* 8 8 */
	uint32 m_nStreamedOutCount; /* 16 4 */
	uint64 m_nStreamedOutBytes; /* 24 8 */
	CUtlVector<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int> > m_streamedInTextures; /* 32 32 */
	CUtlVector<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int> > m_streamedOutTextures; /* 64 32 */
	/* ../public/rendersystem/irenderdevice.h:97 */
	void Reset(TextureResidencyStats_t* );
	void ~TextureResidencyStats_t(TextureResidencyStats_t* );
	void TextureResidencyStats_t(TextureResidencyStats_t* );
};

// <0013C7EA> ../public/rendersystem/irenderdevice.h:87
// member function: 1
// member variables: 7
// struct size: 96
struct TextureResidencyStats_t {
	uint32 m_nFrameNumber; /* 0 4 */
	uint32 m_nStreamedInCount; /* 4 4 */
	uint64 m_nStreamedInBytes; /* 8 8 */
	uint32 m_nStreamedOutCount; /* 16 4 */
	uint64 m_nStreamedOutBytes; /* 24 8 */
	CUtlVector<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int> > m_streamedInTextures; /* 32 32 */
	CUtlVector<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int> > m_streamedOutTextures; /* 64 32 */
	/* ../public/rendersystem/irenderdevice.h:97 */
	void Reset(TextureResidencyStats_t* );
};

// <003A4DD5> ../public/rendersystem/irenderdevice.h:97
inline void TextureResidencyStats_t::Reset()
{
} /* size: 0 */

// <0347070A> ../public/rendersystem/irenderdevice.h:112
inline void RenderTargetDesc_t::operator=(const RenderTargetDesc_t &)
{
} /* size: 0 */

// <01CCDCAF> ../public/rendersystem/irenderdevice.h:112
void RenderTargetDesc_t::RenderTargetDesc_t(const RenderTargetDesc_t &)
{
} /* size: 0 */

// <01CCDC8E> ../public/rendersystem/irenderdevice.h:112
inline void RenderTargetDesc_t::RenderTargetDesc_t(const RenderTargetDesc_t &)
{
} /* size: 0 */

// <0005B350> ../public/rendersystem/irenderdevice.h:112
// member functions: 20
// member variables: 7
// struct size: 120
struct RenderTargetDesc_t {
	/* ../public/rendersystem/irenderdevice.h:114 */
	void RenderTargetDesc_t(RenderTargetDesc_t* );
	/* ../public/rendersystem/irenderdevice.h:119 */
	void Clear(RenderTargetDesc_t* );
	/* ../public/rendersystem/irenderdevice.h:134 */
	void RenderTargetDesc_t(RenderTargetDesc_t* , SwapChainHandle_t, bool, bool, RenderColorSpace_t);
	/* ../public/rendersystem/irenderdevice.h:140 */
	void RenderTargetDesc_t(RenderTargetDesc_t* , HRenderTexture, HRenderTexture, RenderColorSpace_t);
	/* ../public/rendersystem/irenderdevice.h:146 */
	void RenderTargetDesc_t(RenderTargetDesc_t* , HRenderTexture, HRenderTexture, HRenderTexture, RenderColorSpace_t);
	/* ../public/rendersystem/irenderdevice.h:152 */
	void RenderTargetDesc_t(RenderTargetDesc_t* , HRenderTexture, HRenderTexture, HRenderTexture, HRenderTexture, RenderColorSpace_t);
	/* ../public/rendersystem/irenderdevice.h:158 */
	void RenderTargetDesc_t(RenderTargetDesc_t* , HRenderTexture, HRenderTexture, HRenderTexture, HRenderTexture, HRenderTexture, RenderColorSpace_t);
	/* ../public/rendersystem/irenderdevice.h:164 */
	void RenderTargetDesc_t(RenderTargetDesc_t* , int, HRenderTexture* , HRenderTexture, RenderColorSpace_t);
	/* ../public/rendersystem/irenderdevice.h:171 */
	void Init(RenderTargetDesc_t* , SwapChainHandle_t, bool, bool, RenderColorSpace_t);
	/* ../public/rendersystem/irenderdevice.h:173 */
	void Init(RenderTargetDesc_t* , HRenderTexture, HRenderTexture, RenderColorSpace_t);
	/* ../public/rendersystem/irenderdevice.h:180 */
	void Init(RenderTargetDesc_t* , HRenderTexture, HRenderTexture, HRenderTexture, RenderColorSpace_t);
	/* ../public/rendersystem/irenderdevice.h:189 */
	void Init(RenderTargetDesc_t* , HRenderTexture, HRenderTexture, HRenderTexture, HRenderTexture, RenderColorSpace_t);
	/* ../public/rendersystem/irenderdevice.h:200 */
	void Init(RenderTargetDesc_t* , HRenderTexture, HRenderTexture, HRenderTexture, HRenderTexture, HRenderTexture, RenderColorSpace_t);
	/* ../public/rendersystem/irenderdevice.h:213 */
	void Init(RenderTargetDesc_t* , int, HRenderTexture* , HRenderTexture, RenderColorSpace_t);
	/* ../public/rendersystem/irenderdevice.h:226 */
	void Init(RenderTargetDesc_t* , const RenderTargetDesc_t& );
	/* ../public/rendersystem/irenderdevice.h:231 */
	bool IsValid(const RenderTargetDesc_t* );
	/* ../public/rendersystem/irenderdevice.h:237 */
	void SetReadOnlyDepthStencil(RenderTargetDesc_t* , bool);
	/* ../public/rendersystem/irenderdevice.h:242 */
	bool AreSrgbWriteStatesEqual(const RenderTargetDesc_t* , const RenderTargetDesc_t& );
	/* ../public/rendersystem/irenderdevice.h:255 */
	bool operator==(const RenderTargetDesc_t* , const RenderTargetDesc_t& );
	/* ../public/rendersystem/irenderdevice.h:276 */
	bool operator!=(const RenderTargetDesc_t* , const RenderTargetDesc_t& );
	HRenderTexture m_pColorTargets[8]; /* 0 64 */
	HRenderTexture m_hDepthTarget; /* 64 8 */
	int m_nColorTargetIndices[8]; /* 72 32 */
	RenderColorSpace_t m_allowSrgbWrite[8]; /* 104 8 */
	int m_nDepthTargetIndex; /* 112 4 */
	short int m_nColorTargetCount; /* 116 2 */
	bool m_bReadOnlyDepthStencil:1; /* 118: 0 1 */
};

// <01C8928D> ../public/rendersystem/irenderdevice.h:112
// member functions: 21
// member variables: 7
// struct size: 120
struct RenderTargetDesc_t {
	/* ../public/rendersystem/irenderdevice.h:114 */
	void RenderTargetDesc_t(RenderTargetDesc_t* );
	/* ../public/rendersystem/irenderdevice.h:119 */
	void Clear(RenderTargetDesc_t* );
	/* ../public/rendersystem/irenderdevice.h:134 */
	void RenderTargetDesc_t(RenderTargetDesc_t* , SwapChainHandle_t, bool, bool, RenderColorSpace_t);
	/* ../public/rendersystem/irenderdevice.h:140 */
	void RenderTargetDesc_t(RenderTargetDesc_t* , HRenderTexture, HRenderTexture, RenderColorSpace_t);
	/* ../public/rendersystem/irenderdevice.h:146 */
	void RenderTargetDesc_t(RenderTargetDesc_t* , HRenderTexture, HRenderTexture, HRenderTexture, RenderColorSpace_t);
	/* ../public/rendersystem/irenderdevice.h:152 */
	void RenderTargetDesc_t(RenderTargetDesc_t* , HRenderTexture, HRenderTexture, HRenderTexture, HRenderTexture, RenderColorSpace_t);
	/* ../public/rendersystem/irenderdevice.h:158 */
	void RenderTargetDesc_t(RenderTargetDesc_t* , HRenderTexture, HRenderTexture, HRenderTexture, HRenderTexture, HRenderTexture, RenderColorSpace_t);
	/* ../public/rendersystem/irenderdevice.h:164 */
	void RenderTargetDesc_t(RenderTargetDesc_t* , int, HRenderTexture* , HRenderTexture, RenderColorSpace_t);
	/* ../public/rendersystem/irenderdevice.h:171 */
	void Init(RenderTargetDesc_t* , SwapChainHandle_t, bool, bool, RenderColorSpace_t);
	/* ../public/rendersystem/irenderdevice.h:173 */
	void Init(RenderTargetDesc_t* , HRenderTexture, HRenderTexture, RenderColorSpace_t);
	/* ../public/rendersystem/irenderdevice.h:180 */
	void Init(RenderTargetDesc_t* , HRenderTexture, HRenderTexture, HRenderTexture, RenderColorSpace_t);
	/* ../public/rendersystem/irenderdevice.h:189 */
	void Init(RenderTargetDesc_t* , HRenderTexture, HRenderTexture, HRenderTexture, HRenderTexture, RenderColorSpace_t);
	/* ../public/rendersystem/irenderdevice.h:200 */
	void Init(RenderTargetDesc_t* , HRenderTexture, HRenderTexture, HRenderTexture, HRenderTexture, HRenderTexture, RenderColorSpace_t);
	/* ../public/rendersystem/irenderdevice.h:213 */
	void Init(RenderTargetDesc_t* , int, HRenderTexture* , HRenderTexture, RenderColorSpace_t);
	/* ../public/rendersystem/irenderdevice.h:226 */
	void Init(RenderTargetDesc_t* , const RenderTargetDesc_t& );
	/* ../public/rendersystem/irenderdevice.h:231 */
	bool IsValid(const RenderTargetDesc_t* );
	/* ../public/rendersystem/irenderdevice.h:237 */
	void SetReadOnlyDepthStencil(RenderTargetDesc_t* , bool);
	/* ../public/rendersystem/irenderdevice.h:242 */
	bool AreSrgbWriteStatesEqual(const RenderTargetDesc_t* , const RenderTargetDesc_t& );
	/* ../public/rendersystem/irenderdevice.h:255 */
	bool operator==(const RenderTargetDesc_t* , const RenderTargetDesc_t& );
	/* ../public/rendersystem/irenderdevice.h:276 */
	bool operator!=(const RenderTargetDesc_t* , const RenderTargetDesc_t& );
	HRenderTexture m_pColorTargets[8]; /* 0 64 */
	HRenderTexture m_hDepthTarget; /* 64 8 */
	int m_nColorTargetIndices[8]; /* 72 32 */
	RenderColorSpace_t m_allowSrgbWrite[8]; /* 104 8 */
	int m_nDepthTargetIndex; /* 112 4 */
	short int m_nColorTargetCount; /* 116 2 */
	bool m_bReadOnlyDepthStencil:1; /* 118: 0 1 */
	void RenderTargetDesc_t(RenderTargetDesc_t* , const RenderTargetDesc_t& );
};

// <02D7601A> ../public/rendersystem/irenderdevice.h:112
// member functions: 21
// member variables: 7
// struct size: 120
struct RenderTargetDesc_t {
	/* ../public/rendersystem/irenderdevice.h:114 */
	void RenderTargetDesc_t(RenderTargetDesc_t* );
	/* ../public/rendersystem/irenderdevice.h:119 */
	void Clear(RenderTargetDesc_t* );
	/* ../public/rendersystem/irenderdevice.h:134 */
	void RenderTargetDesc_t(RenderTargetDesc_t* , SwapChainHandle_t, bool, bool, RenderColorSpace_t);
	/* ../public/rendersystem/irenderdevice.h:140 */
	void RenderTargetDesc_t(RenderTargetDesc_t* , HRenderTexture, HRenderTexture, RenderColorSpace_t);
	/* ../public/rendersystem/irenderdevice.h:146 */
	void RenderTargetDesc_t(RenderTargetDesc_t* , HRenderTexture, HRenderTexture, HRenderTexture, RenderColorSpace_t);
	/* ../public/rendersystem/irenderdevice.h:152 */
	void RenderTargetDesc_t(RenderTargetDesc_t* , HRenderTexture, HRenderTexture, HRenderTexture, HRenderTexture, RenderColorSpace_t);
	/* ../public/rendersystem/irenderdevice.h:158 */
	void RenderTargetDesc_t(RenderTargetDesc_t* , HRenderTexture, HRenderTexture, HRenderTexture, HRenderTexture, HRenderTexture, RenderColorSpace_t);
	/* ../public/rendersystem/irenderdevice.h:164 */
	void RenderTargetDesc_t(RenderTargetDesc_t* , int, HRenderTexture* , HRenderTexture, RenderColorSpace_t);
	/* ../public/rendersystem/irenderdevice.h:171 */
	void Init(RenderTargetDesc_t* , SwapChainHandle_t, bool, bool, RenderColorSpace_t);
	/* ../public/rendersystem/irenderdevice.h:173 */
	void Init(RenderTargetDesc_t* , HRenderTexture, HRenderTexture, RenderColorSpace_t);
	/* ../public/rendersystem/irenderdevice.h:180 */
	void Init(RenderTargetDesc_t* , HRenderTexture, HRenderTexture, HRenderTexture, RenderColorSpace_t);
	/* ../public/rendersystem/irenderdevice.h:189 */
	void Init(RenderTargetDesc_t* , HRenderTexture, HRenderTexture, HRenderTexture, HRenderTexture, RenderColorSpace_t);
	/* ../public/rendersystem/irenderdevice.h:200 */
	void Init(RenderTargetDesc_t* , HRenderTexture, HRenderTexture, HRenderTexture, HRenderTexture, HRenderTexture, RenderColorSpace_t);
	/* ../public/rendersystem/irenderdevice.h:213 */
	void Init(RenderTargetDesc_t* , int, HRenderTexture* , HRenderTexture, RenderColorSpace_t);
	/* ../public/rendersystem/irenderdevice.h:226 */
	void Init(RenderTargetDesc_t* , const RenderTargetDesc_t& );
	/* ../public/rendersystem/irenderdevice.h:231 */
	bool IsValid(const RenderTargetDesc_t* );
	/* ../public/rendersystem/irenderdevice.h:237 */
	void SetReadOnlyDepthStencil(RenderTargetDesc_t* , bool);
	/* ../public/rendersystem/irenderdevice.h:242 */
	bool AreSrgbWriteStatesEqual(const RenderTargetDesc_t* , const RenderTargetDesc_t& );
	/* ../public/rendersystem/irenderdevice.h:255 */
	bool operator==(const RenderTargetDesc_t* , const RenderTargetDesc_t& );
	/* ../public/rendersystem/irenderdevice.h:276 */
	bool operator!=(const RenderTargetDesc_t* , const RenderTargetDesc_t& );
	HRenderTexture m_pColorTargets[8]; /* 0 64 */
	HRenderTexture m_hDepthTarget; /* 64 8 */
	int m_nColorTargetIndices[8]; /* 72 32 */
	RenderColorSpace_t m_allowSrgbWrite[8]; /* 104 8 */
	int m_nDepthTargetIndex; /* 112 4 */
	short int m_nColorTargetCount; /* 116 2 */
	bool m_bReadOnlyDepthStencil:1; /* 118: 0 1 */
	RenderTargetDesc_t& operator=(RenderTargetDesc_t* , const RenderTargetDesc_t& );
};

// <058D4C0E> ../../public/rendersystem/irenderdevice.h:112
// member functions: 20
// member variables: 7
// struct size: 120
struct RenderTargetDesc_t {
	/* ../../public/rendersystem/irenderdevice.h:114 */
	void RenderTargetDesc_t(RenderTargetDesc_t* );
	/* ../../public/rendersystem/irenderdevice.h:119 */
	void Clear(RenderTargetDesc_t* );
	/* ../../public/rendersystem/irenderdevice.h:134 */
	void RenderTargetDesc_t(RenderTargetDesc_t* , SwapChainHandle_t, bool, bool, RenderColorSpace_t);
	/* ../../public/rendersystem/irenderdevice.h:140 */
	void RenderTargetDesc_t(RenderTargetDesc_t* , HRenderTexture, HRenderTexture, RenderColorSpace_t);
	/* ../../public/rendersystem/irenderdevice.h:146 */
	void RenderTargetDesc_t(RenderTargetDesc_t* , HRenderTexture, HRenderTexture, HRenderTexture, RenderColorSpace_t);
	/* ../../public/rendersystem/irenderdevice.h:152 */
	void RenderTargetDesc_t(RenderTargetDesc_t* , HRenderTexture, HRenderTexture, HRenderTexture, HRenderTexture, RenderColorSpace_t);
	/* ../../public/rendersystem/irenderdevice.h:158 */
	void RenderTargetDesc_t(RenderTargetDesc_t* , HRenderTexture, HRenderTexture, HRenderTexture, HRenderTexture, HRenderTexture, RenderColorSpace_t);
	/* ../../public/rendersystem/irenderdevice.h:164 */
	void RenderTargetDesc_t(RenderTargetDesc_t* , int, HRenderTexture* , HRenderTexture, RenderColorSpace_t);
	/* ../../public/rendersystem/irenderdevice.h:171 */
	void Init(RenderTargetDesc_t* , SwapChainHandle_t, bool, bool, RenderColorSpace_t);
	/* ../../public/rendersystem/irenderdevice.h:173 */
	void Init(RenderTargetDesc_t* , HRenderTexture, HRenderTexture, RenderColorSpace_t);
	/* ../../public/rendersystem/irenderdevice.h:180 */
	void Init(RenderTargetDesc_t* , HRenderTexture, HRenderTexture, HRenderTexture, RenderColorSpace_t);
	/* ../../public/rendersystem/irenderdevice.h:189 */
	void Init(RenderTargetDesc_t* , HRenderTexture, HRenderTexture, HRenderTexture, HRenderTexture, RenderColorSpace_t);
	/* ../../public/rendersystem/irenderdevice.h:200 */
	void Init(RenderTargetDesc_t* , HRenderTexture, HRenderTexture, HRenderTexture, HRenderTexture, HRenderTexture, RenderColorSpace_t);
	/* ../../public/rendersystem/irenderdevice.h:213 */
	void Init(RenderTargetDesc_t* , int, HRenderTexture* , HRenderTexture, RenderColorSpace_t);
	/* ../../public/rendersystem/irenderdevice.h:226 */
	void Init(RenderTargetDesc_t* , const RenderTargetDesc_t& );
	/* ../../public/rendersystem/irenderdevice.h:231 */
	bool IsValid(const RenderTargetDesc_t* );
	/* ../../public/rendersystem/irenderdevice.h:237 */
	void SetReadOnlyDepthStencil(RenderTargetDesc_t* , bool);
	/* ../../public/rendersystem/irenderdevice.h:242 */
	bool AreSrgbWriteStatesEqual(const RenderTargetDesc_t* , const RenderTargetDesc_t& );
	/* ../../public/rendersystem/irenderdevice.h:255 */
	bool operator==(const RenderTargetDesc_t* , const RenderTargetDesc_t& );
	/* ../../public/rendersystem/irenderdevice.h:276 */
	bool operator!=(const RenderTargetDesc_t* , const RenderTargetDesc_t& );
	HRenderTexture m_pColorTargets[8]; /* 0 64 */
	HRenderTexture m_hDepthTarget; /* 64 8 */
	int m_nColorTargetIndices[8]; /* 72 32 */
	RenderColorSpace_t m_allowSrgbWrite[8]; /* 104 8 */
	int m_nDepthTargetIndex; /* 112 4 */
	short int m_nColorTargetCount; /* 116 2 */
	bool m_bReadOnlyDepthStencil:1; /* 118: 0 1 */
};

// <0646A791> ../public/rendersystem/irenderdevice.h:114
void RenderTargetDesc_t::RenderTargetDesc_t()
{
} /* size: 0 */

// <0646A778> ../public/rendersystem/irenderdevice.h:114
inline void RenderTargetDesc_t::RenderTargetDesc_t()
{
} /* size: 0 */

// <0646A753> ../public/rendersystem/irenderdevice.h:119
// variable: 1
inline void RenderTargetDesc_t::Clear()
{
	{
		int i; // 121
	}
} /* size: 0 */

// <02F24BCB> ../public/rendersystem/irenderdevice.h:134
void RenderTargetDesc_t::RenderTargetDesc_t(SwapChainHandle_t hSwapChain, bool bUseColorBuffer, bool bUseDepthBuffer, RenderColorSpace_t allowSrgbWrites)
{
} /* size: 0 */

// <02F24B82> ../public/rendersystem/irenderdevice.h:134
inline void RenderTargetDesc_t::RenderTargetDesc_t(SwapChainHandle_t hSwapChain, bool bUseColorBuffer, bool bUseDepthBuffer, RenderColorSpace_t allowSrgbWrites)
{
} /* size: 0 */

// <033CCCCC> ../public/rendersystem/irenderdevice.h:140
void RenderTargetDesc_t::RenderTargetDesc_t(HRenderTexture hColor, HRenderTexture hDepth, RenderColorSpace_t allowSrgbWrites)
{
} /* size: 0 */

// <033CCC8F> ../public/rendersystem/irenderdevice.h:140
inline void RenderTargetDesc_t::RenderTargetDesc_t(HRenderTexture hColor, HRenderTexture hDepth, RenderColorSpace_t allowSrgbWrites)
{
} /* size: 0 */

// <033CCC52> ../public/rendersystem/irenderdevice.h:173
inline void RenderTargetDesc_t::Init(HRenderTexture hColor, HRenderTexture hDepth, RenderColorSpace_t allowSrgbWrites)
{
} /* size: 0 */

// <040B426D> ../public/rendersystem/irenderdevice.h:226
inline void RenderTargetDesc_t::Init(const RenderTargetDesc_t& desc)
{
} /* size: 0 */

// <03754A09> ../public/rendersystem/irenderdevice.h:231
inline void RenderTargetDesc_t::IsValid()
{
} /* size: 0 */

// <0087AE3B> ../public/rendersystem/irenderdevice.h:242
// variable: 1
inline void RenderTargetDesc_t::AreSrgbWriteStatesEqual(const RenderTargetDesc_t& other)
{
	{
		int i; // 247
	}
} /* size: 0 */

// <001E5379> ../public/rendersystem/irenderdevice.h:293
void IRenderDeviceMgr::IRenderDeviceMgr()
{
} /* size: 0 */

// <001E535B> ../public/rendersystem/irenderdevice.h:293
inline void IRenderDeviceMgr::IRenderDeviceMgr()
{
} /* size: 0 */

// <001BC3B2> ../public/rendersystem/irenderdevice.h:293
// member functions: 52
// member variable: 1
// vtable entries: 22
// class size: 8
class IRenderDeviceMgr : public IAppSystem {
public:
	/* class IAppSystem <ancestor>; */ /* 0 8 */
	void IRenderDeviceMgr(IRenderDeviceMgr* , IRenderDeviceMgr& );
	void IRenderDeviceMgr(IRenderDeviceMgr* , const IRenderDeviceMgr& );
	void IRenderDeviceMgr(IRenderDeviceMgr* );
	void ~IRenderDeviceMgr(IRenderDeviceMgr* );
	/* ../public/rendersystem/irenderdevice.h:297 */
	virtual int GetAdapterCount(const IRenderDeviceMgr* );
	/* ../public/rendersystem/irenderdevice.h:300 */
	virtual void GetAdapterInfo(const IRenderDeviceMgr* , int, RenderAdapterInfo_t& );
	/* ../public/rendersystem/irenderdevice.h:305 */
	virtual int FindAdapterForRawAdapterAndOutput(const IRenderDeviceMgr* , int, int);
	/* ../public/rendersystem/irenderdevice.h:310 */
	virtual int FindAdapterForDesktopRect(const IRenderDeviceMgr* , int, int, int, int);
	/* ../public/rendersystem/irenderdevice.h:314 */
	virtual int GetModeCount(const IRenderDeviceMgr* , int);
	/* ../public/rendersystem/irenderdevice.h:318 */
	virtual void GetModeInfo(const IRenderDeviceMgr* , RenderDisplayMode_t* , int, int);
	/* ../public/rendersystem/irenderdevice.h:321 */
	virtual void GetCurrentModeInfo(const IRenderDeviceMgr* , RenderDisplayMode_t* , int);
	/* ../public/rendersystem/irenderdevice.h:326 */
	virtual CreateInterfaceFn CreateDevice(IRenderDeviceMgr* , int, int, int);
	/* ../public/rendersystem/irenderdevice.h:329 */
	virtual void AddModeChangeCallback(IRenderDeviceMgr* , RenderModeChangeCallbackFunc_t);
	/* ../public/rendersystem/irenderdevice.h:330 */
	virtual void RemoveModeChangeCallback(IRenderDeviceMgr* , RenderModeChangeCallbackFunc_t);
	/* ../public/rendersystem/irenderdevice.h:333 */
	virtual void DestroyDevice(IRenderDeviceMgr* );
	/* ../public/rendersystem/irenderdevice.h:337 */
	virtual void InstallRenderDeviceSetup(IRenderDeviceMgr* , IRenderDeviceSetup* );
	/* ../public/rendersystem/irenderdevice.h:339 */
	virtual void AddDeviceEventListener(IRenderDeviceMgr* , IRenderDeviceEventListener* );
	/* ../public/rendersystem/irenderdevice.h:340 */
	virtual void RemoveDeviceEventListener(IRenderDeviceMgr* , IRenderDeviceEventListener* );
	/* ../public/rendersystem/irenderdevice.h:342 */
	virtual KeyValues* GetVideoConfig(IRenderDeviceMgr* );
	/* ../public/rendersystem/irenderdevice.h:343 */
	virtual KeyValues* GetSandboxVideoConfig(IRenderDeviceMgr* );
	/* ../public/rendersystem/irenderdevice.h:344 */
	virtual void InvokeModeChangeCallbacks(IRenderDeviceMgr* , const RenderDeviceInfo_t& );
	/* ../public/rendersystem/irenderdevice.h:345 */
	virtual void WriteVideoConfig(IRenderDeviceMgr* );
	/* ../public/rendersystem/irenderdevice.h:346 */
	virtual void ResetVideoConfig(IRenderDeviceMgr* );
	/* ../public/rendersystem/irenderdevice.h:353 */
	virtual void GetAllDisplayModes(const IRenderDeviceMgr* , CUtlVector<RenderDisplayMode_t, CUtlMemory<RenderDisplayMode_t, int> >& , int, bool);
	/* ../public/rendersystem/irenderdevice.h:357 */
	virtual uint GetPlatWindowFlags(const IRenderDeviceMgr* );
	/* ../public/rendersystem/irenderdevice.h:367 */
	virtual void GetVideoMemoryInfo(const IRenderDeviceMgr* , int, uint64* , uint64* , uint64* );
	void IRenderDeviceMgr(class IRenderDeviceMgr *, class IRenderDeviceMgr &); /* linkage=_ZN16IRenderDeviceMgrC4EOS_ */
	void IRenderDeviceMgr(class IRenderDeviceMgr *, const class IRenderDeviceMgr  &); /* linkage=_ZN16IRenderDeviceMgrC4ERKS_ */
	void IRenderDeviceMgr(class IRenderDeviceMgr *); /* linkage=_ZN16IRenderDeviceMgrC4Ev */
	void ~IRenderDeviceMgr(class IRenderDeviceMgr *); /* linkage=_ZN16IRenderDeviceMgrD4Ev */
	virtual int GetAdapterCount(const class IRenderDeviceMgr  *); /* linkage=_ZNK16IRenderDeviceMgr15GetAdapterCountEv */
	virtual void GetAdapterInfo(const class IRenderDeviceMgr  *, int, class RenderAdapterInfo_t &); /* linkage=_ZNK16IRenderDeviceMgr14GetAdapterInfoEiR19RenderAdapterInfo_t */
	virtual int FindAdapterForRawAdapterAndOutput(const class IRenderDeviceMgr  *, int, int); /* linkage=_ZNK16IRenderDeviceMgr33FindAdapterForRawAdapterAndOutputEii */
	virtual int FindAdapterForDesktopRect(const class IRenderDeviceMgr  *, int, int, int, int); /* linkage=_ZNK16IRenderDeviceMgr25FindAdapterForDesktopRectEiiii */
	virtual int GetModeCount(const class IRenderDeviceMgr  *, int); /* linkage=_ZNK16IRenderDeviceMgr12GetModeCountEi */
	virtual void GetModeInfo(const class IRenderDeviceMgr  *, class RenderDisplayMode_t *, int, int); /* linkage=_ZNK16IRenderDeviceMgr11GetModeInfoEP19RenderDisplayMode_tii */
	virtual void GetCurrentModeInfo(const class IRenderDeviceMgr  *, class RenderDisplayMode_t *, int); /* linkage=_ZNK16IRenderDeviceMgr18GetCurrentModeInfoEP19RenderDisplayMode_ti */
	virtual CreateInterfaceFn CreateDevice(class IRenderDeviceMgr *, int, int, int); /* linkage=_ZN16IRenderDeviceMgr12CreateDeviceEiii */
	virtual void AddModeChangeCallback(class IRenderDeviceMgr *, RenderModeChangeCallbackFunc_t); /* linkage=_ZN16IRenderDeviceMgr21AddModeChangeCallbackEPFvvE */
	virtual void RemoveModeChangeCallback(class IRenderDeviceMgr *, RenderModeChangeCallbackFunc_t); /* linkage=_ZN16IRenderDeviceMgr24RemoveModeChangeCallbackEPFvvE */
	virtual void DestroyDevice(class IRenderDeviceMgr *); /* linkage=_ZN16IRenderDeviceMgr13DestroyDeviceEv */
	virtual void InstallRenderDeviceSetup(class IRenderDeviceMgr *, class IRenderDeviceSetup *); /* linkage=_ZN16IRenderDeviceMgr24InstallRenderDeviceSetupEP18IRenderDeviceSetup */
	virtual void AddDeviceEventListener(class IRenderDeviceMgr *, class IRenderDeviceEventListener *); /* linkage=_ZN16IRenderDeviceMgr22AddDeviceEventListenerEP26IRenderDeviceEventListener */
	virtual void RemoveDeviceEventListener(class IRenderDeviceMgr *, class IRenderDeviceEventListener *); /* linkage=_ZN16IRenderDeviceMgr25RemoveDeviceEventListenerEP26IRenderDeviceEventListener */
	virtual class KeyValues * GetVideoConfig(class IRenderDeviceMgr *); /* linkage=_ZN16IRenderDeviceMgr14GetVideoConfigEv */
	virtual class KeyValues * GetSandboxVideoConfig(class IRenderDeviceMgr *); /* linkage=_ZN16IRenderDeviceMgr21GetSandboxVideoConfigEv */
	virtual void InvokeModeChangeCallbacks(class IRenderDeviceMgr *, const class RenderDeviceInfo_t  &); /* linkage=_ZN16IRenderDeviceMgr25InvokeModeChangeCallbacksERK18RenderDeviceInfo_t */
	virtual void WriteVideoConfig(class IRenderDeviceMgr *); /* linkage=_ZN16IRenderDeviceMgr16WriteVideoConfigEv */
	virtual void ResetVideoConfig(class IRenderDeviceMgr *); /* linkage=_ZN16IRenderDeviceMgr16ResetVideoConfigEv */
	virtual void GetAllDisplayModes(const class IRenderDeviceMgr  *, class CUtlVector<RenderDisplayMode_t, CUtlMemory<RenderDisplayMode_t, int> > &, int, bool); /* linkage=_ZNK16IRenderDeviceMgr18GetAllDisplayModesER10CUtlVectorI19RenderDisplayMode_t10CUtlMemoryIS1_iEEib */
	virtual uint GetPlatWindowFlags(const class IRenderDeviceMgr  *); /* linkage=_ZNK16IRenderDeviceMgr18GetPlatWindowFlagsEv */
	virtual void GetVideoMemoryInfo(const class IRenderDeviceMgr  *, int, uint64 *, uint64 *, uint64 *); /* linkage=_ZNK16IRenderDeviceMgr18GetVideoMemoryInfoEiPyS0_S0_ */
};

// <001A518D> ../public/rendersystem/irenderdevice.h:374
void IRenderDevice::IRenderDevice()
{
} /* size: 0 */

// <001A5170> ../public/rendersystem/irenderdevice.h:374
inline void IRenderDevice::IRenderDevice()
{
} /* size: 0 */

// <0011FCF4> ../public/rendersystem/irenderdevice.h:374
// member functions: 429
// member variables: 3
// vtable entries: 204
// class size: 16
class IRenderDevice {
	void IRenderDevice(IRenderDevice* , IRenderDevice& );
	void IRenderDevice(IRenderDevice* , const IRenderDevice& );
	void IRenderDevice(IRenderDevice* );
	void ~IRenderDevice(IRenderDevice* );
	int ()(void) * * _vptr.IRenderDevice; /* 0 8 */
	/* ../public/rendersystem/irenderdevice.h:379 */
	virtual RenderDeviceAPI_t GetRenderDeviceAPI(const IRenderDevice* );
	/* ../public/rendersystem/irenderdevice.h:381 */
	bool IsEmptyAPI(const IRenderDevice* );
	/* ../public/rendersystem/irenderdevice.h:386 */
	bool IsNoOpDevice(const IRenderDevice* );
	/* ../public/rendersystem/irenderdevice.h:395 */
	virtual SwapChainHandle_t CreateSwapChain(IRenderDevice* , PlatWindow_t, OsSpecificWindowHandle_t, const RenderDeviceInfo_t& , const char* );
	/* ../public/rendersystem/irenderdevice.h:918 */
	SwapChainHandle_t CreateSwapChain(IRenderDevice* , PlatWindow_t, const RenderDeviceInfo_t& , const char* );
	/* ../public/rendersystem/irenderdevice.h:397 */
	virtual void DestroySwapChain(IRenderDevice* , SwapChainHandle_t);
	/* ../public/rendersystem/irenderdevice.h:399 */
	virtual bool UpdateSwapChain(IRenderDevice* , SwapChainHandle_t, const RenderDeviceInfo_t& );
	/* ../public/rendersystem/irenderdevice.h:400 */
	virtual const RenderDeviceInfo_t& GetSwapChainInfo(const IRenderDevice* , SwapChainHandle_t);
	/* ../public/rendersystem/irenderdevice.h:403 */
	virtual OsSpecificWindowHandle_t GetSwapChainOsSpecificWindow(const IRenderDevice* , SwapChainHandle_t);
	/* ../public/rendersystem/irenderdevice.h:404 */
	virtual PlatWindow_t GetSwapChainPlatWindow(const IRenderDevice* , SwapChainHandle_t);
	/* ../public/rendersystem/irenderdevice.h:407 */
	virtual ImageFormat GetBackBufferFormat(const IRenderDevice* , SwapChainHandle_t);
	/* ../public/rendersystem/irenderdevice.h:408 */
	virtual void GetBackBufferDimensions(const IRenderDevice* , SwapChainHandle_t, int* , int* );
	/* ../public/rendersystem/irenderdevice.h:411 */
	virtual int GetCurrentAdapter(const IRenderDevice* );
	/* ../public/rendersystem/irenderdevice.h:414 */
	virtual bool IsUsingGraphics(const IRenderDevice* );
	/* ../public/rendersystem/irenderdevice.h:417 */
	virtual void SpewDriverInfo(const IRenderDevice* );
	/* ../public/rendersystem/irenderdevice.h:420 */
	virtual bool IsWindowResizingEnabled(const IRenderDevice* );
	/* ../public/rendersystem/irenderdevice.h:423 */
	virtual const char* GetShaderVersionString(const IRenderDevice* , RenderShaderType_t);
	/* ../public/rendersystem/irenderdevice.h:426 */
	virtual void BeginRendering(IRenderDevice* );
	/* ../public/rendersystem/irenderdevice.h:430 */
	virtual void BeginSubmittingDisplayLists(IRenderDevice* , SwapChainHandle_t);
	/* ../public/rendersystem/irenderdevice.h:433 */
	virtual bool Present(IRenderDevice* , SwapChainHandle_t);
	/* ../public/rendersystem/irenderdevice.h:436 */
	virtual void Flush(IRenderDevice* );
	/* ../public/rendersystem/irenderdevice.h:439 */
	virtual void ForceFlushGPU(IRenderDevice* , SwapChainHandle_t);
	/* ../public/rendersystem/irenderdevice.h:442 */
	virtual void SetHardwareGammaRamp(IRenderDevice* , SwapChainHandle_t, float, float, float, float, bool);
	/* ../public/rendersystem/irenderdevice.h:445 */
	virtual unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> > CompileShader(IRenderDevice* , const char* , uint32, const char* );
	/* ../public/rendersystem/irenderdevice.h:448 */
	virtual RenderShaderHandle_t CreateShader(IRenderDevice* , RenderShaderType_t, unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >, const char* );
	/* ../public/rendersystem/irenderdevice.h:449 */
	virtual void DestroyShader(IRenderDevice* , RenderShaderType_t, RenderShaderHandle_t);
	/* ../public/rendersystem/irenderdevice.h:450 */
	virtual void GetShaderStats(IRenderDevice* , RenderShaderStats_t* , RenderShaderType_t, RenderShaderHandle_t);
	/* ../public/rendersystem/irenderdevice.h:453 */
	virtual RenderInputLayout_t CreateInputLayout(IRenderDevice* , const char* , int, const RenderInputLayoutField_t* );
	/* ../public/rendersystem/irenderdevice.h:455 */
	virtual void AddInputLayoutReference(IRenderDevice* , RenderInputLayout_t);
	/* ../public/rendersystem/irenderdevice.h:456 */
	virtual void DestroyInputLayout(IRenderDevice* , RenderInputLayout_t);
	/* ../public/rendersystem/irenderdevice.h:457 */
	virtual void ConcatentateInputLayouts(IRenderDevice* , int, RenderInputLayout_t* , int, const RenderInputLayout_t* );
	/* ../public/rendersystem/irenderdevice.h:459 */
	virtual void GetInputLayoutFields(IRenderDevice* , RenderInputLayout_t, const RenderInputLayoutField_t** , int& );
	/* ../public/rendersystem/irenderdevice.h:462 */
	virtual CThreadFastMutex& GetInputLayoutMutex(IRenderDevice* );
	/* ../public/rendersystem/irenderdevice.h:1012 */
	RenderShaderHandle_t CompileAndCreateShader(IRenderDevice* , RenderShaderType_t, const char* , uint32, const char* , const char* );
	/* ../public/rendersystem/irenderdevice.h:468 */
	virtual RsRasterizerStateHandle_t FindOrCreateRasterizerState(IRenderDevice* , const RsRasterizerStateDesc_t* );
	/* ../public/rendersystem/irenderdevice.h:469 */
	virtual RsDepthStencilStateHandle_t FindOrCreateDepthStencilState(IRenderDevice* , const RsDepthStencilStateDesc_t* );
	/* ../public/rendersystem/irenderdevice.h:470 */
	virtual RsBlendStateHandle_t FindOrCreateBlendState(IRenderDevice* , const RsBlendStateDesc_t* );
	/* ../public/rendersystem/irenderdevice.h:474 */
	virtual VertexBufferHandle_t CreateVertexBuffer(IRenderDevice* , RenderBufferType_t, const BufferDesc_t& , RenderBufferFlags_t);
	/* ../public/rendersystem/irenderdevice.h:475 */
	virtual VertexBufferHandle_t CreateVertexBuffer(IRenderDevice* , RenderBufferType_t, const BufferDesc_t& , int, const RenderInputLayoutField_t* , RenderBufferFlags_t);
	/* ../public/rendersystem/irenderdevice.h:476 */
	virtual VertexBufferHandle_t CreateVertexBuffer(IRenderDevice* , RenderBufferType_t, const BufferDesc_t& , RenderInputLayout_t, RenderBufferFlags_t);
	/* ../public/rendersystem/irenderdevice.h:477 */
	virtual void DestroyVertexBuffer(IRenderDevice* , VertexBufferHandle_t);
	/* ../public/rendersystem/irenderdevice.h:479 */
	virtual IndexBufferHandle_t CreateIndexBuffer(IRenderDevice* , RenderBufferType_t, const BufferDesc_t& , RenderBufferFlags_t);
	/* ../public/rendersystem/irenderdevice.h:480 */
	virtual void DestroyIndexBuffer(IRenderDevice* , IndexBufferHandle_t);
	/* ../public/rendersystem/irenderdevice.h:483 */
	virtual void GetVertexBufferDesc(IRenderDevice* , VertexBufferHandle_t, BufferDesc_t* );
	/* ../public/rendersystem/irenderdevice.h:484 */
	virtual void GetIndexBufferDesc(IRenderDevice* , IndexBufferHandle_t, BufferDesc_t* );
	/* ../public/rendersystem/irenderdevice.h:485 */
	virtual void GetGPUBufferDesc(IRenderDevice* , RenderBufferHandle_t, BufferDesc_t* );
	/* ../public/rendersystem/irenderdevice.h:486 */
	virtual RenderInputLayout_t GetVertexBufferInputLayout(IRenderDevice* , VertexBufferHandle_t);
	/* ../public/rendersystem/irenderdevice.h:488 */
	virtual RenderBufferHandle_t CreateGPUBuffer(IRenderDevice* , RenderBufferType_t, const BufferDesc_t& , RenderBufferFlags_t, const void* );
	/* ../public/rendersystem/irenderdevice.h:490 */
	virtual RenderBufferHandle_t CreateGPUBufferFormatted(IRenderDevice* , RenderBufferType_t, const BufferDesc_t& , RenderBufferFlags_t, ImageFormat, const void* );
	/* ../public/rendersystem/irenderdevice.h:491 */
	virtual uint64 GetGPUBufferDeviceAddress(const IRenderDevice* , RenderBufferHandle_t);
	/* ../public/rendersystem/irenderdevice.h:492 */
	virtual void DestroyGPUBuffer(IRenderDevice* , RenderBufferHandle_t);
	/* ../public/rendersystem/irenderdevice.h:497 */
	virtual HRenderTexture FindOrCreateTexture(IRenderDevice* , const char* , bool, const CTextureCreationDesc* , const CTextureDesc* , const void* , int);
	/* ../public/rendersystem/irenderdevice.h:498 */
	virtual HRenderTexture GetErrorTexture(IRenderDevice* , RenderTextureDimension_t);
	/* ../public/rendersystem/irenderdevice.h:501 */
	virtual HRenderTexture FindOrCreateFileTexture(IRenderDevice* , const char* , RenderSystemAssetFileLoadMode_t);
	/* ../public/rendersystem/irenderdevice.h:502 */
	virtual HRenderTexture FindFileTexture(IRenderDevice* , ResourceId_t, RenderSystemAssetFileLoadMode_t);
	/* ../public/rendersystem/irenderdevice.h:505 */
	virtual HRenderTexture FindOrCreateExternalTexture(IRenderDevice* , const char* , SharedResourceHandle_t);
	/* ../public/rendersystem/irenderdevice.h:506 */
	virtual bool UpdateExternalTexture(IRenderDevice* , HRenderTexture, SharedResourceHandle_t);
	/* ../public/rendersystem/irenderdevice.h:509 */
	virtual SamplerStateHandle_t FindOrCreateSamplerState(IRenderDevice* , const CSamplerStateDesc& , const char* );
	/* ../public/rendersystem/irenderdevice.h:512 */
	virtual RenderQueryHandle_t CreateQueryObject(IRenderDevice* , RenderQueryType_t);
	/* ../public/rendersystem/irenderdevice.h:513 */
	virtual RenderQueryState_t GetQueryData(IRenderDevice* , RenderQueryHandle_t, uint64* );
	/* ../public/rendersystem/irenderdevice.h:514 */
	virtual void DeleteQueryObject(IRenderDevice* , RenderQueryHandle_t);
	/* ../public/rendersystem/irenderdevice.h:521 */
	virtual IRenderContext* CreateRenderContext(IRenderDevice* , uint, RenderContextCreationInfo_t* , const char* , ...);
	/* ../public/rendersystem/irenderdevice.h:522 */
	virtual IRenderContext* VaCreateRenderContext(IRenderDevice* , uint, RenderContextCreationInfo_t* , const char* , va_list* );
	/* ../public/rendersystem/irenderdevice.h:523 */
	virtual void ReleaseRenderContext(IRenderDevice* , IRenderContext* );
	/* ../public/rendersystem/irenderdevice.h:528 */
	virtual void SubmitDisplayLists(IRenderDevice* , const DisplayListToSubmit_t* , int);
	/* ../public/rendersystem/irenderdevice.h:531 */
	void SubmitDisplayList(IRenderDevice* , CDisplayList* );
	/* ../public/rendersystem/irenderdevice.h:538 */
	virtual void DiscardDisplayList(IRenderDevice* , CDisplayList* );
	/* ../public/rendersystem/irenderdevice.h:542 */
	virtual CDependencyDescriptor* GetDependencyDescriptor(IRenderDevice* , int, const char* );
	/* ../public/rendersystem/irenderdevice.h:548 */
	virtual ConstantBufferHandle_t CreateConstantBuffer(IRenderDevice* , ConstantBufferType_t, uint32, void* , const char* );
	/* ../public/rendersystem/irenderdevice.h:558 */
	virtual ConstantBufferHandle_t CreateMultiViewConstantBuffer(IRenderDevice* , ConstantBufferType_t, uint32, uint32, uint32, const char* );
	/* ../public/rendersystem/irenderdevice.h:560 */
	virtual void DestroyConstantBuffer(IRenderDevice* , ConstantBufferHandle_t);
	/* ../public/rendersystem/irenderdevice.h:561 */
	virtual ConstantBufferType_t GetConstantBufferType(const IRenderDevice* , ConstantBufferHandle_t);
	/* ../public/rendersystem/irenderdevice.h:563 */
	virtual uint32 GetConstantBufferSize(const IRenderDevice* , ConstantBufferHandle_t);
	/* ../public/rendersystem/irenderdevice.h:567 */
	virtual uint32 GetMultiViewConstantBufferSizes(const IRenderDevice* , ConstantBufferHandle_t, uint32* , uint32* );
	/* ../public/rendersystem/irenderdevice.h:571 */
	virtual void ForceDeviceLost(IRenderDevice* );
	/* ../public/rendersystem/irenderdevice.h:574 */
	virtual bool ReadTexturePixels(IRenderDevice* , HRenderTexture, Rect_t* , int, int, Rect_t* , void* , ImageFormat, int);
	/* ../public/rendersystem/irenderdevice.h:576 */
	bool ReadTexturePixels(IRenderDevice* , HRenderTexture, Rect_t* , Rect_t* , void* , ImageFormat, int);
	/* ../public/rendersystem/irenderdevice.h:582 */
	virtual bool ReadBuffer(IRenderDevice* , RenderBufferHandle_t, uint32, void* , uint32);
	/* ../public/rendersystem/irenderdevice.h:591 */
	virtual const Sheet_t* GetTextureSheet(IRenderDevice* , HRenderTexture);
	/* ../public/rendersystem/irenderdevice.h:594 */
	virtual void SetDebugFlag(IRenderDevice* , RenderDebugFlag_t, bool);
	/* ../public/rendersystem/irenderdevice.h:595 */
	virtual bool GetDebugFlag(const IRenderDevice* , RenderDebugFlag_t);
	/* ../public/rendersystem/irenderdevice.h:596 */
	virtual uint GetDebugFlags(const IRenderDevice* );
	/* ../public/rendersystem/irenderdevice.h:598 */
	virtual void SetFramePacingFPS(IRenderDevice* , double);
	/* ../public/rendersystem/irenderdevice.h:600 */
	virtual void GetMonitorDimensions(const IRenderDevice* , int* , int* );
	/* ../public/rendersystem/irenderdevice.h:603 */
	virtual void PreloadTextureBits(IRenderDevice* , HRenderTexture, int32);
	/* ../public/rendersystem/irenderdevice.h:606 */
	virtual void UnloadTextureBits(IRenderDevice* , HRenderTexture);
	/* ../public/rendersystem/irenderdevice.h:609 */
	virtual bool AreTextureBitsLoaded(const IRenderDevice* , HRenderTexture);
	/* ../public/rendersystem/irenderdevice.h:612 */
	virtual void SetTextureStreamingPriority(IRenderDevice* , HRenderTexture, RenderTextureStreamingPriority_t);
	/* ../public/rendersystem/irenderdevice.h:616 */
	virtual void MarkTextureUsed(IRenderDevice* , HRenderTexture, int);
	/* ../public/rendersystem/irenderdevice.h:620 */
	virtual const CTextureDesc* GetOnDiskTextureDesc(const IRenderDevice* , HRenderTexture);
	/* ../public/rendersystem/irenderdevice.h:621 */
	virtual const CTextureDesc* GetTextureDesc(const IRenderDevice* , HRenderTexture);
	/* ../public/rendersystem/irenderdevice.h:622 */
	virtual Vector GetTextureAverageColor(const IRenderDevice* , HRenderTexture);
	/* ../public/rendersystem/irenderdevice.h:623 */
	virtual bool GetCubemapRadianceSHConstants(const IRenderDevice* , HRenderTexture, int, CUtlVector<float, CUtlMemory<float, int> >& );
	/* ../public/rendersystem/irenderdevice.h:624 */
	virtual size_t GetTextureStreamingDataOffset(const IRenderDevice* , HRenderTexture);
	/* ../public/rendersystem/irenderdevice.h:625 */
	virtual RenderMultisampleType_t GetTextureMultisampleType(const IRenderDevice* , HRenderTexture);
	/* ../public/rendersystem/irenderdevice.h:626 */
	virtual ImageFormat GetSwapChainDepthStencilFormat(const IRenderDevice* , SwapChainHandle_t);
	/* ../public/rendersystem/irenderdevice.h:627 */
	virtual bool IsTextureSampleableRenderTarget(const IRenderDevice* , HRenderTexture);
	/* ../public/rendersystem/irenderdevice.h:628 */
	virtual const char* GetMultisampleTypeName(const IRenderDevice* , RenderMultisampleType_t);
	/* ../public/rendersystem/irenderdevice.h:629 */
	virtual bool IsTextureRenderTarget(const IRenderDevice* , HRenderTexture);
	/* ../public/rendersystem/irenderdevice.h:630 */
	virtual void PinTextureInGPUMemory(IRenderDevice* , HRenderTexture);
	/* ../public/rendersystem/irenderdevice.h:631 */
	virtual void UnpinTextureInGPUMemory(IRenderDevice* , HRenderTexture);
	/* ../public/rendersystem/irenderdevice.h:632 */
	virtual bool IsTextureCubeMap(const IRenderDevice* , HRenderTexture);
	/* ../public/rendersystem/irenderdevice.h:633 */
	virtual bool IsTextureFullyResident(const IRenderDevice* , HRenderTexture);
	/* ../public/rendersystem/irenderdevice.h:634 */
	virtual void AddTextureResidencyListener(IRenderDevice* , ITextureResidencyListener* );
	/* ../public/rendersystem/irenderdevice.h:635 */
	virtual void RemoveTextureResidencyListener(IRenderDevice* , ITextureResidencyListener* );
	/* ../public/rendersystem/irenderdevice.h:639 */
	virtual HRenderTexture GetSwapChainTexture(IRenderDevice* , SwapChainHandle_t, SwapChainBuffer_t);
	/* ../public/rendersystem/irenderdevice.h:641 */
	virtual void GetRenderTargetDescDimensions(IRenderDevice* , const RenderTargetDesc_t& , int* , int* );
	/* ../public/rendersystem/irenderdevice.h:644 */
	virtual bool GetPipelineFrameStats(IRenderDevice* , CRenderPipelineFrameStats& );
	/* ../public/rendersystem/irenderdevice.h:645 */
	virtual void ReleasePipelineFrameStats(IRenderDevice* , CRenderPipelineFrameStats& );
	/* ../public/rendersystem/irenderdevice.h:648 */
	virtual bool IsTextureSwapChain(const IRenderDevice* , HRenderTexture);
	/* ../public/rendersystem/irenderdevice.h:652 */
	virtual bool GetSwapChainFromTexture(IRenderDevice* , HRenderTexture, SwapChainHandle_t* , SwapChainBuffer_t* );
	/* ../public/rendersystem/irenderdevice.h:655 */
	virtual ImageFormat GetNearestSupportedColorFormat(IRenderDevice* , ImageFormat, bool, bool, bool);
	/* ../public/rendersystem/irenderdevice.h:658 */
	virtual uint32 ComputeTextureMemorySize(const IRenderDevice* , const CTextureDesc& );
	/* ../public/rendersystem/irenderdevice.h:661 */
	virtual void GetTextureResidencyInfo(const IRenderDevice* , CUtlVector<TextureResidencyInfo_t, CUtlMemory<TextureResidencyInfo_t, int> >& , TextureResidencyStats_t& );
	/* ../public/rendersystem/irenderdevice.h:667 */
	virtual bool GetSheetSequenceTextureData(IRenderDevice* , HRenderTexture, HRenderTexture* , Vector2D* , int* );
	/* ../public/rendersystem/irenderdevice.h:671 */
	virtual ConstantBufferHandle_t GetSheetSequenceTextureDataConstantBuffer(IRenderDevice* , HRenderTexture);
	/* ../public/rendersystem/irenderdevice.h:674 */
	virtual void GetSheetCacheTextureSize(IRenderDevice* , int& , int& );
	/* ../public/rendersystem/irenderdevice.h:677 */
	virtual void CommitSheetCacheData(IRenderDevice* );
	/* ../public/rendersystem/irenderdevice.h:680 */
	virtual HRenderTexture GetSheetMetaDataTexture(const IRenderDevice* );
	/* ../public/rendersystem/irenderdevice.h:683 */
	virtual void UnThrottleTextureStreamingForNFrames(IRenderDevice* , uint32);
	/* ../public/rendersystem/irenderdevice.h:686 */
	virtual int GetNumTextureLoadsInFlight(const IRenderDevice* );
	/* ../public/rendersystem/irenderdevice.h:695 */
	virtual void OnBeginningOfClientShutdown(IRenderDevice* );
	/* ../public/rendersystem/irenderdevice.h:699 */
	virtual void AppendStatsSummaryString(IRenderDevice* , CBufferString* );
	/* ../public/rendersystem/irenderdevice.h:703 */
	virtual void* GetDeviceSpecificInfo(IRenderDevice* , DeviceSpecificInfo_t);
	/* ../public/rendersystem/irenderdevice.h:706 */
	virtual int QueryFeature(IRenderDevice* , CUtlStringToken);
	/* ../public/rendersystem/irenderdevice.h:709 */
	virtual const RsDepthStencilStateDesc_t* GetDepthStencilStateDesc(const IRenderDevice* , RsDepthStencilStateHandle_t);
	/* ../public/rendersystem/irenderdevice.h:712 */
	virtual const RsRasterizerStateDesc_t* GetRasterizerStateDesc(const IRenderDevice* , RsRasterizerStateHandle_t);
	/* ../public/rendersystem/irenderdevice.h:715 */
	virtual bool CanRenderToSwapChain(const IRenderDevice* , SwapChainHandle_t);
	/* ../public/rendersystem/irenderdevice.h:717 */
	virtual void* GetDeviceSpecificTexture(IRenderDevice* , HRenderTexture, RenderTextureDimension_t);
	/* ../public/rendersystem/irenderdevice.h:718 */
	virtual void* GetDeviceSpecificImageView(IRenderDevice* , HRenderTexture, RenderTextureDimension_t, RenderColorSpace_t);
	/* ../public/rendersystem/irenderdevice.h:719 */
	virtual void* GetDeviceSpecificBuffer(IRenderDevice* , RenderBufferHandle_t);
	/* ../public/rendersystem/irenderdevice.h:720 */
	virtual void* GetDeviceSpecificBuffer(IRenderDevice* , IndexBufferHandle_t);
	/* ../public/rendersystem/irenderdevice.h:721 */
	virtual void* GetDeviceSpecificBuffer(IRenderDevice* , VertexBufferHandle_t);
	/* ../public/rendersystem/irenderdevice.h:722 */
	virtual void* GetDeviceSpecificDescriptorSet(IRenderDevice* , RenderDescriptorSetHandle_t);
	/* ../public/rendersystem/irenderdevice.h:723 */
	virtual void* GetDeviceSpecificRayTracePipeline(IRenderDevice* , RenderRayTracePipelineHandle_t);
	/* ../public/rendersystem/irenderdevice.h:725 */
	virtual void RegisterMaxSwapChainDimensionsChangedListener(IRenderDevice* , IMaxSwapChainDimensionsChangedListener* );
	/* ../public/rendersystem/irenderdevice.h:726 */
	virtual void UnregisterMaxSwapChainDimensionsChangedListener(IRenderDevice* , IMaxSwapChainDimensionsChangedListener* );
	/* ../public/rendersystem/irenderdevice.h:728 */
	virtual void GetCurrentMaxSwapChainDimensions(const IRenderDevice* , int* , int* );
	/* ../public/rendersystem/irenderdevice.h:730 */
	virtual ThreadHandle_t GetRenderThreadHandle(const IRenderDevice* );
	/* ../public/rendersystem/irenderdevice.h:731 */
	virtual ThreadId_t GetRenderThreadId(const IRenderDevice* );
	/* ../public/rendersystem/irenderdevice.h:734 */
	virtual bool HasOutstandingPresents(IRenderDevice* , SwapChainHandle_t);
	/* ../public/rendersystem/irenderdevice.h:737 */
	virtual void WaitForOutstandingPresents(IRenderDevice* , SwapChainHandle_t);
	/* ../public/rendersystem/irenderdevice.h:740 */
	virtual void ResizeEngineWindow(IRenderDevice* , SwapChainHandle_t, PlatWindow_t, RenderDeviceInfo_t);
	/* ../public/rendersystem/irenderdevice.h:743 */
	virtual int GetLastValidSheetCacheFrame(IRenderDevice* );
	/* ../public/rendersystem/irenderdevice.h:745 */
	virtual int GetTexturePinCount(IRenderDevice* , HRenderTexture);
	/* ../public/rendersystem/irenderdevice.h:752 */
	virtual RenderDescriptorSetHandle_t CreateDescriptorSet(IRenderDevice* , int32, const RenderDescriptorDesc_t* , int32, const RenderDescriptorBinding_t* , bool);
	/* ../public/rendersystem/irenderdevice.h:758 */
	virtual void UpdateDescriptorSet(IRenderDevice* , RenderDescriptorSetHandle_t, int32, const RenderDescriptorBinding_t* );
	/* ../public/rendersystem/irenderdevice.h:760 */
	virtual void DestroyDescriptorSet(IRenderDevice* , RenderDescriptorSetHandle_t);
	/* ../public/rendersystem/irenderdevice.h:763 */
	virtual bool AddDescriptorsToGlobalPerFrameDescriptorSet(IRenderDevice* , int32, const RenderDescriptorDesc_t* );
	/* ../public/rendersystem/irenderdevice.h:764 */
	virtual void UpdateGlobalPerFrameDescriptorBindings(IRenderDevice* , int32, const RenderDescriptorBinding_t* );
	/* ../public/rendersystem/irenderdevice.h:767 */
	virtual CRenderPassDesc* AllocPooledRenderPassDesc(IRenderDevice* );
	/* ../public/rendersystem/irenderdevice.h:768 */
	virtual void FreePooledRenderPassDesc(IRenderDevice* , CRenderPassDesc* );
	/* ../public/rendersystem/irenderdevice.h:769 */
	virtual RenderPassHandle_t CreateRenderPass(IRenderDevice* , const CRenderPassDesc* );
	/* ../public/rendersystem/irenderdevice.h:770 */
	virtual void DestroyRenderPass(IRenderDevice* , RenderPassHandle_t);
	/* ../public/rendersystem/irenderdevice.h:772 */
	virtual int GetClearFlagsSupportedInRenderPass(IRenderDevice* , int, const RenderTargetDesc_t& , const RenderClearInfo_t& );
	/* ../public/rendersystem/irenderdevice.h:775 */
	virtual float GetLastPresentTime(IRenderDevice* );
	/* ../public/rendersystem/irenderdevice.h:776 */
	virtual void AsyncSetTextureData(IRenderDevice* , HRenderTexture, const CTextureDesc* , const void* , int, int, const Rect3D_t* , uint32, const DataRecycleDelegate_t* , RenderAsyncTextureUpdateFlags_t);
	/* ../public/rendersystem/irenderdevice.h:781 */
	virtual GraphicsAPISpecificTextureHandle_t GetGraphicsAPISpecificTextureHandle(IRenderDevice* , HRenderTexture);
	/* ../public/rendersystem/irenderdevice.h:783 */
	virtual void GetLargestMonitorDimensions(const IRenderDevice* , int* , int* );
	/* ../public/rendersystem/irenderdevice.h:786 */
	virtual void PushRenderDeviceFlags(IRenderDevice* , RenderDeviceFlag_t);
	/* ../public/rendersystem/irenderdevice.h:787 */
	virtual void PopRenderDeviceFlags(IRenderDevice* , RenderDeviceFlag_t);
	/* ../public/rendersystem/irenderdevice.h:790 */
	virtual bool GetGPUFrameTimeMS(const IRenderDevice* , SwapChainHandle_t, float* , uint32* );
	/* ../public/rendersystem/irenderdevice.h:792 */
	virtual bool IsUsingReverseDepth(const IRenderDevice* );
	/* ../public/rendersystem/irenderdevice.h:793 */
	virtual bool IsUsing32BitDepthBuffer(const IRenderDevice* );
	/* ../public/rendersystem/irenderdevice.h:796 */
	virtual double ConvertTimestampToSeconds(IRenderDevice* , uint64);
	/* ../public/rendersystem/irenderdevice.h:802 */
	virtual void FreeTextureGPUResources(IRenderDevice* , int32, const HRenderTexture* );
	/* ../public/rendersystem/irenderdevice.h:806 */
	virtual bool IsProfilerAttached(IRenderDevice* );
	/* ../public/rendersystem/irenderdevice.h:811 */
	virtual void SetTextureGlobalMipLODBias(IRenderDevice* , float);
	/* ../public/rendersystem/irenderdevice.h:812 */
	virtual float GetTextureGlobalMipLODBias(const IRenderDevice* );
	/* ../public/rendersystem/irenderdevice.h:815 */
	virtual void UnThrottlePipelineCreationForNFrames(IRenderDevice* , uint32);
	/* ../public/rendersystem/irenderdevice.h:820 */
	virtual void RegisterDescriptorSetLayout(IRenderDevice* , CUtlStringToken, RenderDescriptorSetHandle_t);
	/* ../public/rendersystem/irenderdevice.h:821 */
	virtual RenderDescriptorSetHandle_t GetRegisteredDescriptorSetLayout(const IRenderDevice* , CUtlStringToken);
	/* ../public/rendersystem/irenderdevice.h:823 */
	virtual RenderBLASHandle_t CreateBLAS(IRenderDevice* , const BLASCreateDesc_t& , uint32* );
	/* ../public/rendersystem/irenderdevice.h:824 */
	virtual bool IsCompactible(IRenderDevice* , RenderBLASHandle_t);
	/* ../public/rendersystem/irenderdevice.h:825 */
	virtual IsReadyToCompactResult_t IsReadyToCompact(IRenderDevice* , RenderBLASHandle_t);
	/* ../public/rendersystem/irenderdevice.h:826 */
	virtual RenderBLASHandle_t CreateBLASForCompact(IRenderDevice* , RenderBLASHandle_t);
	/* ../public/rendersystem/irenderdevice.h:828 */
	virtual void DestroyBLAS(IRenderDevice* , RenderBLASHandle_t);
	/* ../public/rendersystem/irenderdevice.h:830 */
	virtual RenderTLASHandle_t CreateTLAS(IRenderDevice* , const TLASCreateDesc_t& , TLASInstance_t* , int);
	/* ../public/rendersystem/irenderdevice.h:831 */
	virtual void DestroyTLAS(IRenderDevice* , RenderTLASHandle_t);
	/* ../public/rendersystem/irenderdevice.h:833 */
	virtual RenderRayTracePipelineHandle_t CreateRayTracePipeline(IRenderDevice* , const RayTracePipelineStateCreateDesc_t& );
	/* ../public/rendersystem/irenderdevice.h:834 */
	virtual void DestroyRayTracePipeline(IRenderDevice* , RenderRayTracePipelineHandle_t);
	/* ../public/rendersystem/irenderdevice.h:835 */
	virtual bool IsCreatingRayTracePipelines(IRenderDevice* );
	/* ../public/rendersystem/irenderdevice.h:837 */
	virtual IRaytraceShaderBindingTable* CreateRayTraceShaderBindingTable(IRenderDevice* , const ShaderBindingTableCreateDesc_t& );
	/* ../public/rendersystem/irenderdevice.h:838 */
	virtual void DestroyRayTraceShaderBindingTable(IRenderDevice* , IRaytraceShaderBindingTable* );
	/* ../public/rendersystem/irenderdevice.h:840 */
	virtual bool IsRayTracingSupported(const IRenderDevice* );
	/* ../public/rendersystem/irenderdevice.h:843 */
	virtual bool IsAsyncPresentEnabled(const IRenderDevice* );
	/* ../public/rendersystem/irenderdevice.h:844 */
	virtual void EnableAsyncPresent(IRenderDevice* , bool);
	/* ../public/rendersystem/irenderdevice.h:849 */
	virtual bool StartRenderDocCapture(IRenderDevice* , PlatWindow_t);
	/* ../public/rendersystem/irenderdevice.h:850 */
	virtual bool EndRenderDocCapture(IRenderDevice* , PlatWindow_t);
	/* ../public/rendersystem/irenderdevice.h:852 */
	virtual uint32 GetTextureViewIndex(const IRenderDevice* , HRenderTexture, RenderColorSpace_t, RenderTextureDimension_t);
	/* ../public/rendersystem/irenderdevice.h:853 */
	virtual uint32 GetSamplerIndex(const IRenderDevice* , SamplerStateHandle_t);
	/* ../public/rendersystem/irenderdevice.h:854 */
	virtual RenderDescriptorSetHandle_t GetGlobalLateBoundBindlessDescriptorSet(IRenderDevice* );
	/* ../public/rendersystem/irenderdevice.h:859 */
	virtual PooledIndexBufferHandle_t AllocatePooledIndexBuffer(IRenderDevice* , uint, const uint16* , uint* );
	/* ../public/rendersystem/irenderdevice.h:862 */
	virtual void FreePooledIndexBuffer(IRenderDevice* , PooledIndexBufferHandle_t);
	/* ../public/rendersystem/irenderdevice.h:866 */
	virtual uint GetPooledIndexBufferOffset(IRenderDevice* , PooledIndexBufferHandle_t);
	/* ../public/rendersystem/irenderdevice.h:869 */
	virtual IndexBufferHandle_t GetPooledIndexBuffer(IRenderDevice* );
	/* ../public/rendersystem/irenderdevice.h:872 */
	virtual void TriggerValidationError(IRenderDevice* );
	/* ../public/rendersystem/irenderdevice.h:875 */
	virtual void DefragmentGPUMemory(IRenderDevice* , RenderDefragFlags_t, bool);
	/* ../public/rendersystem/irenderdevice.h:877 */
	virtual uint64 GetGPUMemoryFragmentationBytes(const IRenderDevice* );
protected:
	bool m_bUse32BitDepthBuffer; /* 8 1 */
	bool m_bUseReverseDepth; /* 9 1 */
	/* ../public/rendersystem/irenderdevice.h:891 */
	virtual HRenderTexture FindOrCreateTexture2(IRenderDevice* , const char* , bool, const TextureCreationConfig_t& , const void* , int);
	/* ../public/rendersystem/irenderdevice.h:892 */
	virtual void ClearTexture(IRenderDevice* , HRenderTexture, Color);
	/* ../public/rendersystem/irenderdevice.h:894 */
	virtual void AsyncSetTextureData2(IRenderDevice* , HRenderTexture, const void* , int, Rect3D_t);
	/* ../public/rendersystem/irenderdevice.h:896 */
	virtual void* GetDevicePtr(IRenderDevice* );
	/* ../public/rendersystem/irenderdevice.h:897 */
	virtual void* GetTextureObject(IRenderDevice* , HRenderTexture);
	/* ../public/rendersystem/irenderdevice.h:899 */
	virtual bool IsRenderDocEnabled(IRenderDevice* );
	/* ../public/rendersystem/irenderdevice.h:901 */
	virtual void SetInMainThreadRenderBlock(IRenderDevice* , bool);
	/* ../public/rendersystem/irenderdevice.h:902 */
	virtual bool IsInMainThreadRenderBlock(IRenderDevice* );
	/* ../public/rendersystem/irenderdevice.h:903 */
	virtual int GetTextureLastUsed(IRenderDevice* , HRenderTexture);
	/* ../public/rendersystem/irenderdevice.h:905 */
	virtual void SetForcePreloadStreamingData(IRenderDevice* , bool);
	/* ../public/rendersystem/irenderdevice.h:907 */
	virtual bool ReadBuffer(IRenderDevice* , IndexBufferHandle_t, uint32, void* , uint32);
	void SubmitDisplayList(class IRenderDevice *, class CDisplayList *); /* linkage=_ZN13IRenderDevice17SubmitDisplayListEP12CDisplayList */
	void IRenderDevice(class IRenderDevice *, class IRenderDevice &); /* linkage=_ZN13IRenderDeviceC4EOS_ */
	void IRenderDevice(class IRenderDevice *, const class IRenderDevice  &); /* linkage=_ZN13IRenderDeviceC4ERKS_ */
	void IRenderDevice(class IRenderDevice *); /* linkage=_ZN13IRenderDeviceC4Ev */
	void ~IRenderDevice(class IRenderDevice *); /* linkage=_ZN13IRenderDeviceD4Ev */
	virtual enum RenderDeviceAPI_t GetRenderDeviceAPI(const class IRenderDevice  *); /* linkage=_ZNK13IRenderDevice18GetRenderDeviceAPIEv */
	bool IsEmptyAPI(const class IRenderDevice  *); /* linkage=_ZNK13IRenderDevice10IsEmptyAPIEv */
	bool IsNoOpDevice(const class IRenderDevice  *); /* linkage=_ZNK13IRenderDevice12IsNoOpDeviceEv */
	virtual SwapChainHandle_t CreateSwapChain(class IRenderDevice *, PlatWindow_t, OsSpecificWindowHandle_t, const class RenderDeviceInfo_t  &, const char  *); /* linkage=_ZN13IRenderDevice15CreateSwapChainEP14PlatWindow_t__P26OsSpecificWindowHandle_t__RK18RenderDeviceInfo_tPKc */
	SwapChainHandle_t CreateSwapChain(class IRenderDevice *, PlatWindow_t, const class RenderDeviceInfo_t  &, const char  *); /* linkage=_ZN13IRenderDevice15CreateSwapChainEP14PlatWindow_t__RK18RenderDeviceInfo_tPKc */
	virtual void DestroySwapChain(class IRenderDevice *, SwapChainHandle_t); /* linkage=_ZN13IRenderDevice16DestroySwapChainEP19SwapChainHandle_t__ */
	virtual bool UpdateSwapChain(class IRenderDevice *, SwapChainHandle_t, const class RenderDeviceInfo_t  &); /* linkage=_ZN13IRenderDevice15UpdateSwapChainEP19SwapChainHandle_t__RK18RenderDeviceInfo_t */
	virtual const class RenderDeviceInfo_t  & GetSwapChainInfo(const class IRenderDevice  *, SwapChainHandle_t); /* linkage=_ZNK13IRenderDevice16GetSwapChainInfoEP19SwapChainHandle_t__ */
	virtual OsSpecificWindowHandle_t GetSwapChainOsSpecificWindow(const class IRenderDevice  *, SwapChainHandle_t); /* linkage=_ZNK13IRenderDevice28GetSwapChainOsSpecificWindowEP19SwapChainHandle_t__ */
	virtual PlatWindow_t GetSwapChainPlatWindow(const class IRenderDevice  *, SwapChainHandle_t); /* linkage=_ZNK13IRenderDevice22GetSwapChainPlatWindowEP19SwapChainHandle_t__ */
	virtual enum ImageFormat GetBackBufferFormat(const class IRenderDevice  *, SwapChainHandle_t); /* linkage=_ZNK13IRenderDevice19GetBackBufferFormatEP19SwapChainHandle_t__ */
	virtual void GetBackBufferDimensions(const class IRenderDevice  *, SwapChainHandle_t, int *, int *); /* linkage=_ZNK13IRenderDevice23GetBackBufferDimensionsEP19SwapChainHandle_t__PiS2_ */
	virtual int GetCurrentAdapter(const class IRenderDevice  *); /* linkage=_ZNK13IRenderDevice17GetCurrentAdapterEv */
	virtual bool IsUsingGraphics(const class IRenderDevice  *); /* linkage=_ZNK13IRenderDevice15IsUsingGraphicsEv */
	virtual void SpewDriverInfo(const class IRenderDevice  *); /* linkage=_ZNK13IRenderDevice14SpewDriverInfoEv */
	virtual bool IsWindowResizingEnabled(const class IRenderDevice  *); /* linkage=_ZNK13IRenderDevice23IsWindowResizingEnabledEv */
	virtual const char  * GetShaderVersionString(const class IRenderDevice  *, enum RenderShaderType_t); /* linkage=_ZNK13IRenderDevice22GetShaderVersionStringE18RenderShaderType_t */
	virtual void BeginRendering(class IRenderDevice *); /* linkage=_ZN13IRenderDevice14BeginRenderingEv */
	virtual void BeginSubmittingDisplayLists(class IRenderDevice *, SwapChainHandle_t); /* linkage=_ZN13IRenderDevice27BeginSubmittingDisplayListsEP19SwapChainHandle_t__ */
	virtual bool Present(class IRenderDevice *, SwapChainHandle_t); /* linkage=_ZN13IRenderDevice7PresentEP19SwapChainHandle_t__ */
	virtual void Flush(class IRenderDevice *); /* linkage=_ZN13IRenderDevice5FlushEv */
	virtual void ForceFlushGPU(class IRenderDevice *, SwapChainHandle_t); /* linkage=_ZN13IRenderDevice13ForceFlushGPUEP19SwapChainHandle_t__ */
	virtual void SetHardwareGammaRamp(class IRenderDevice *, SwapChainHandle_t, float, float, float, float, bool); /* linkage=_ZN13IRenderDevice20SetHardwareGammaRampEP19SwapChainHandle_t__ffffb */
	virtual class unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> > CompileShader(class IRenderDevice *, const char  *, uint32, const char  *); /* linkage=_ZN13IRenderDevice13CompileShaderEPKcjS1_ */
	virtual RenderShaderHandle_t CreateShader(class IRenderDevice *, enum RenderShaderType_t, class unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >, const char  *); /* linkage=_ZN13IRenderDevice12CreateShaderE18RenderShaderType_tSt10unique_ptrI21IRenderShaderByteCodeSt14default_deleteIS2_EEPKc */
	virtual void DestroyShader(class IRenderDevice *, enum RenderShaderType_t, RenderShaderHandle_t); /* linkage=_ZN13IRenderDevice13DestroyShaderE18RenderShaderType_tP22RenderShaderHandle_t__ */
	virtual void GetShaderStats(class IRenderDevice *, class RenderShaderStats_t *, enum RenderShaderType_t, RenderShaderHandle_t); /* linkage=_ZN13IRenderDevice14GetShaderStatsEP19RenderShaderStats_t18RenderShaderType_tP22RenderShaderHandle_t__ */
	virtual RenderInputLayout_t CreateInputLayout(class IRenderDevice *, const char  *, int, const class RenderInputLayoutField_t  *); /* linkage=_ZN13IRenderDevice17CreateInputLayoutEPKciPK24RenderInputLayoutField_t */
	virtual void AddInputLayoutReference(class IRenderDevice *, RenderInputLayout_t); /* linkage=_ZN13IRenderDevice23AddInputLayoutReferenceEP21RenderInputLayout_t__ */
	virtual void DestroyInputLayout(class IRenderDevice *, RenderInputLayout_t); /* linkage=_ZN13IRenderDevice18DestroyInputLayoutEP21RenderInputLayout_t__ */
	virtual void ConcatentateInputLayouts(class IRenderDevice *, int, RenderInputLayout_t *, int, const RenderInputLayout_t  *); /* linkage=_ZN13IRenderDevice24ConcatentateInputLayoutsEiPP21RenderInputLayout_t__iPKS1_ */
	virtual void GetInputLayoutFields(class IRenderDevice *, RenderInputLayout_t, const class RenderInputLayoutField_t  * *, int &); /* linkage=_ZN13IRenderDevice20GetInputLayoutFieldsEP21RenderInputLayout_t__PPK24RenderInputLayoutField_tRi */
	virtual class CThreadFastMutex & GetInputLayoutMutex(class IRenderDevice *); /* linkage=_ZN13IRenderDevice19GetInputLayoutMutexEv */
	RenderShaderHandle_t CompileAndCreateShader(class IRenderDevice *, enum RenderShaderType_t, const char  *, uint32, const char  *, const char  *); /* linkage=_ZN13IRenderDevice22CompileAndCreateShaderE18RenderShaderType_tPKcjS2_S2_ */
	virtual RsRasterizerStateHandle_t FindOrCreateRasterizerState(class IRenderDevice *, const class RsRasterizerStateDesc_t  *); /* linkage=_ZN13IRenderDevice27FindOrCreateRasterizerStateEPK23RsRasterizerStateDesc_t */
	virtual RsDepthStencilStateHandle_t FindOrCreateDepthStencilState(class IRenderDevice *, const class RsDepthStencilStateDesc_t  *); /* linkage=_ZN13IRenderDevice29FindOrCreateDepthStencilStateEPK25RsDepthStencilStateDesc_t */
	virtual RsBlendStateHandle_t FindOrCreateBlendState(class IRenderDevice *, const class RsBlendStateDesc_t  *); /* linkage=_ZN13IRenderDevice22FindOrCreateBlendStateEPK18RsBlendStateDesc_t */
	virtual VertexBufferHandle_t CreateVertexBuffer(class IRenderDevice *, enum RenderBufferType_t, const class BufferDesc_t  &, enum RenderBufferFlags_t); /* linkage=_ZN13IRenderDevice18CreateVertexBufferE18RenderBufferType_tRK12BufferDesc_t19RenderBufferFlags_t */
	virtual VertexBufferHandle_t CreateVertexBuffer(class IRenderDevice *, enum RenderBufferType_t, const class BufferDesc_t  &, int, const class RenderInputLayoutField_t  *, enum RenderBufferFlags_t); /* linkage=_ZN13IRenderDevice18CreateVertexBufferE18RenderBufferType_tRK12BufferDesc_tiPK24RenderInputLayoutField_t19RenderBufferFlags_t */
	virtual VertexBufferHandle_t CreateVertexBuffer(class IRenderDevice *, enum RenderBufferType_t, const class BufferDesc_t  &, RenderInputLayout_t, enum RenderBufferFlags_t); /* linkage=_ZN13IRenderDevice18CreateVertexBufferE18RenderBufferType_tRK12BufferDesc_tP21RenderInputLayout_t__19RenderBufferFlags_t */
	virtual void DestroyVertexBuffer(class IRenderDevice *, VertexBufferHandle_t); /* linkage=_ZN13IRenderDevice19DestroyVertexBufferEP22VertexBufferHandle_t__ */
	virtual IndexBufferHandle_t CreateIndexBuffer(class IRenderDevice *, enum RenderBufferType_t, const class BufferDesc_t  &, enum RenderBufferFlags_t); /* linkage=_ZN13IRenderDevice17CreateIndexBufferE18RenderBufferType_tRK12BufferDesc_t19RenderBufferFlags_t */
	virtual void DestroyIndexBuffer(class IRenderDevice *, IndexBufferHandle_t); /* linkage=_ZN13IRenderDevice18DestroyIndexBufferEP21IndexBufferHandle_t__ */
	virtual void GetVertexBufferDesc(class IRenderDevice *, VertexBufferHandle_t, class BufferDesc_t *); /* linkage=_ZN13IRenderDevice19GetVertexBufferDescEP22VertexBufferHandle_t__P12BufferDesc_t */
	virtual void GetIndexBufferDesc(class IRenderDevice *, IndexBufferHandle_t, class BufferDesc_t *); /* linkage=_ZN13IRenderDevice18GetIndexBufferDescEP21IndexBufferHandle_t__P12BufferDesc_t */
	virtual void GetGPUBufferDesc(class IRenderDevice *, RenderBufferHandle_t, class BufferDesc_t *); /* linkage=_ZN13IRenderDevice16GetGPUBufferDescEP22RenderBufferHandle_t__P12BufferDesc_t */
	virtual RenderInputLayout_t GetVertexBufferInputLayout(class IRenderDevice *, VertexBufferHandle_t); /* linkage=_ZN13IRenderDevice26GetVertexBufferInputLayoutEP22VertexBufferHandle_t__ */
	virtual RenderBufferHandle_t CreateGPUBuffer(class IRenderDevice *, enum RenderBufferType_t, const class BufferDesc_t  &, enum RenderBufferFlags_t, const void  *); /* linkage=_ZN13IRenderDevice15CreateGPUBufferE18RenderBufferType_tRK12BufferDesc_t19RenderBufferFlags_tPKv */
	virtual RenderBufferHandle_t CreateGPUBufferFormatted(class IRenderDevice *, enum RenderBufferType_t, const class BufferDesc_t  &, enum RenderBufferFlags_t, enum ImageFormat, const void  *); /* linkage=_ZN13IRenderDevice24CreateGPUBufferFormattedE18RenderBufferType_tRK12BufferDesc_t19RenderBufferFlags_t11ImageFormatPKv */
	virtual uint64 GetGPUBufferDeviceAddress(const class IRenderDevice  *, RenderBufferHandle_t); /* linkage=_ZNK13IRenderDevice25GetGPUBufferDeviceAddressEP22RenderBufferHandle_t__ */
	virtual void DestroyGPUBuffer(class IRenderDevice *, RenderBufferHandle_t); /* linkage=_ZN13IRenderDevice16DestroyGPUBufferEP22RenderBufferHandle_t__ */
	virtual HRenderTexture FindOrCreateTexture(class IRenderDevice *, const char  *, bool, const class CTextureCreationDesc  *, const class CTextureDesc  *, const void  *, int); /* linkage=_ZN13IRenderDevice19FindOrCreateTextureEPKcbPK20CTextureCreationDescPK12CTextureDescPKvi */
	virtual HRenderTexture GetErrorTexture(class IRenderDevice *, enum RenderTextureDimension_t); /* linkage=_ZN13IRenderDevice15GetErrorTextureE24RenderTextureDimension_t */
	virtual HRenderTexture FindOrCreateFileTexture(class IRenderDevice *, const char  *, enum RenderSystemAssetFileLoadMode_t); /* linkage=_ZN13IRenderDevice23FindOrCreateFileTextureEPKc31RenderSystemAssetFileLoadMode_t */
	virtual HRenderTexture FindFileTexture(class IRenderDevice *, class ResourceId_t, enum RenderSystemAssetFileLoadMode_t); /* linkage=_ZN13IRenderDevice15FindFileTextureE12ResourceId_t31RenderSystemAssetFileLoadMode_t */
	virtual HRenderTexture FindOrCreateExternalTexture(class IRenderDevice *, const char  *, SharedResourceHandle_t); /* linkage=_ZN13IRenderDevice27FindOrCreateExternalTextureEPKcy */
	virtual bool UpdateExternalTexture(class IRenderDevice *, HRenderTexture, SharedResourceHandle_t); /* linkage=_ZN13IRenderDevice21UpdateExternalTextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseEy */
	virtual SamplerStateHandle_t FindOrCreateSamplerState(class IRenderDevice *, const class CSamplerStateDesc  &, const char  *); /* linkage=_ZN13IRenderDevice24FindOrCreateSamplerStateERK17CSamplerStateDescPKc */
	virtual RenderQueryHandle_t CreateQueryObject(class IRenderDevice *, enum RenderQueryType_t); /* linkage=_ZN13IRenderDevice17CreateQueryObjectE17RenderQueryType_t */
	virtual enum RenderQueryState_t GetQueryData(class IRenderDevice *, RenderQueryHandle_t, uint64 *); /* linkage=_ZN13IRenderDevice12GetQueryDataEP21RenderQueryHandle_t__Py */
	virtual void DeleteQueryObject(class IRenderDevice *, RenderQueryHandle_t); /* linkage=_ZN13IRenderDevice17DeleteQueryObjectEP21RenderQueryHandle_t__ */
	virtual class IRenderContext * CreateRenderContext(class IRenderDevice *, uint, class RenderContextCreationInfo_t *, const char  *, ...); /* linkage=_ZN13IRenderDevice19CreateRenderContextEjP27RenderContextCreationInfo_tPKcz */
	virtual class IRenderContext * VaCreateRenderContext(class IRenderDevice *, uint, class RenderContextCreationInfo_t *, const char  *, va_list *); /* linkage=_ZN13IRenderDevice21VaCreateRenderContextEjP27RenderContextCreationInfo_tPKcPA1_13__va_list_tag */
	virtual void ReleaseRenderContext(class IRenderDevice *, class IRenderContext *); /* linkage=_ZN13IRenderDevice20ReleaseRenderContextEP14IRenderContext */
	virtual void SubmitDisplayLists(class IRenderDevice *, const class DisplayListToSubmit_t  *, int); /* linkage=_ZN13IRenderDevice18SubmitDisplayListsEPK21DisplayListToSubmit_ti */
	virtual void DiscardDisplayList(class IRenderDevice *, class CDisplayList *); /* linkage=_ZN13IRenderDevice18DiscardDisplayListEP12CDisplayList */
	virtual class CDependencyDescriptor * GetDependencyDescriptor(class IRenderDevice *, int, const char  *); /* linkage=_ZN13IRenderDevice23GetDependencyDescriptorEiPKc */
	virtual ConstantBufferHandle_t CreateConstantBuffer(class IRenderDevice *, enum ConstantBufferType_t, uint32, void *, const char  *); /* linkage=_ZN13IRenderDevice20CreateConstantBufferE20ConstantBufferType_tjPvPKc */
	virtual ConstantBufferHandle_t CreateMultiViewConstantBuffer(class IRenderDevice *, enum ConstantBufferType_t, uint32, uint32, uint32, const char  *); /* linkage=_ZN13IRenderDevice29CreateMultiViewConstantBufferE20ConstantBufferType_tjjjPKc */
	/* <3db07d9> ../public/rendersystem/irenderdevice.h:560 */
	virtual void DestroyConstantBuffer(class IRenderDevice *, ConstantBufferHandle_t); /* linkage=_ZN13IRenderDevice21DestroyConstantBufferEP24ConstantBufferHandle_t__ */
	virtual enum ConstantBufferType_t GetConstantBufferType(const class IRenderDevice  *, ConstantBufferHandle_t); /* linkage=_ZNK13IRenderDevice21GetConstantBufferTypeEP24ConstantBufferHandle_t__ */
	virtual uint32 GetConstantBufferSize(const class IRenderDevice  *, ConstantBufferHandle_t); /* linkage=_ZNK13IRenderDevice21GetConstantBufferSizeEP24ConstantBufferHandle_t__ */
	virtual uint32 GetMultiViewConstantBufferSizes(const class IRenderDevice  *, ConstantBufferHandle_t, uint32 *, uint32 *); /* linkage=_ZNK13IRenderDevice31GetMultiViewConstantBufferSizesEP24ConstantBufferHandle_t__PjS2_ */
	virtual void ForceDeviceLost(class IRenderDevice *); /* linkage=_ZN13IRenderDevice15ForceDeviceLostEv */
	virtual bool ReadTexturePixels(class IRenderDevice *, HRenderTexture, class Rect_t *, int, int, class Rect_t *, void *, enum ImageFormat, int); /* linkage=_ZN13IRenderDevice17ReadTexturePixelsE11CWeakHandleI31InfoForResourceTypeCTextureBaseEP6Rect_tiiS4_Pv11ImageFormati */
	bool ReadTexturePixels(class IRenderDevice *, HRenderTexture, class Rect_t *, class Rect_t *, void *, enum ImageFormat, int); /* linkage=_ZN13IRenderDevice17ReadTexturePixelsE11CWeakHandleI31InfoForResourceTypeCTextureBaseEP6Rect_tS4_Pv11ImageFormati */
	virtual bool ReadBuffer(class IRenderDevice *, RenderBufferHandle_t, uint32, void *, uint32); /* linkage=_ZN13IRenderDevice10ReadBufferEP22RenderBufferHandle_t__jPvj */
	virtual const class Sheet_t  * GetTextureSheet(class IRenderDevice *, HRenderTexture); /* linkage=_ZN13IRenderDevice15GetTextureSheetE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual void SetDebugFlag(class IRenderDevice *, enum RenderDebugFlag_t, bool); /* linkage=_ZN13IRenderDevice12SetDebugFlagE17RenderDebugFlag_tb */
	virtual bool GetDebugFlag(const class IRenderDevice  *, enum RenderDebugFlag_t); /* linkage=_ZNK13IRenderDevice12GetDebugFlagE17RenderDebugFlag_t */
	virtual uint GetDebugFlags(const class IRenderDevice  *); /* linkage=_ZNK13IRenderDevice13GetDebugFlagsEv */
	virtual void SetFramePacingFPS(class IRenderDevice *, double); /* linkage=_ZN13IRenderDevice17SetFramePacingFPSEd */
	virtual void GetMonitorDimensions(const class IRenderDevice  *, int *, int *); /* linkage=_ZNK13IRenderDevice20GetMonitorDimensionsEPiS0_ */
	virtual void PreloadTextureBits(class IRenderDevice *, HRenderTexture, int32); /* linkage=_ZN13IRenderDevice18PreloadTextureBitsE11CWeakHandleI31InfoForResourceTypeCTextureBaseEi */
	virtual void UnloadTextureBits(class IRenderDevice *, HRenderTexture); /* linkage=_ZN13IRenderDevice17UnloadTextureBitsE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual bool AreTextureBitsLoaded(const class IRenderDevice  *, HRenderTexture); /* linkage=_ZNK13IRenderDevice20AreTextureBitsLoadedE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual void SetTextureStreamingPriority(class IRenderDevice *, HRenderTexture, enum RenderTextureStreamingPriority_t); /* linkage=_ZN13IRenderDevice27SetTextureStreamingPriorityE11CWeakHandleI31InfoForResourceTypeCTextureBaseE32RenderTextureStreamingPriority_t */
	virtual void MarkTextureUsed(class IRenderDevice *, HRenderTexture, int); /* linkage=_ZN13IRenderDevice15MarkTextureUsedE11CWeakHandleI31InfoForResourceTypeCTextureBaseEi */
	virtual const class CTextureDesc  * GetOnDiskTextureDesc(const class IRenderDevice  *, HRenderTexture); /* linkage=_ZNK13IRenderDevice20GetOnDiskTextureDescE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual const class CTextureDesc  * GetTextureDesc(const class IRenderDevice  *, HRenderTexture); /* linkage=_ZNK13IRenderDevice14GetTextureDescE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual class Vector GetTextureAverageColor(const class IRenderDevice  *, HRenderTexture); /* linkage=_ZNK13IRenderDevice22GetTextureAverageColorE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual bool GetCubemapRadianceSHConstants(const class IRenderDevice  *, HRenderTexture, int, class CUtlVector<float, CUtlMemory<float, int> > &); /* linkage=_ZNK13IRenderDevice29GetCubemapRadianceSHConstantsE11CWeakHandleI31InfoForResourceTypeCTextureBaseEiR10CUtlVectorIf10CUtlMemoryIfiEE */
	virtual size_t GetTextureStreamingDataOffset(const class IRenderDevice  *, HRenderTexture); /* linkage=_ZNK13IRenderDevice29GetTextureStreamingDataOffsetE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual enum RenderMultisampleType_t GetTextureMultisampleType(const class IRenderDevice  *, HRenderTexture); /* linkage=_ZNK13IRenderDevice25GetTextureMultisampleTypeE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual enum ImageFormat GetSwapChainDepthStencilFormat(const class IRenderDevice  *, SwapChainHandle_t); /* linkage=_ZNK13IRenderDevice30GetSwapChainDepthStencilFormatEP19SwapChainHandle_t__ */
	virtual bool IsTextureSampleableRenderTarget(const class IRenderDevice  *, HRenderTexture); /* linkage=_ZNK13IRenderDevice31IsTextureSampleableRenderTargetE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual const char  * GetMultisampleTypeName(const class IRenderDevice  *, enum RenderMultisampleType_t); /* linkage=_ZNK13IRenderDevice22GetMultisampleTypeNameE23RenderMultisampleType_t */
	virtual bool IsTextureRenderTarget(const class IRenderDevice  *, HRenderTexture); /* linkage=_ZNK13IRenderDevice21IsTextureRenderTargetE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual void PinTextureInGPUMemory(class IRenderDevice *, HRenderTexture); /* linkage=_ZN13IRenderDevice21PinTextureInGPUMemoryE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual void UnpinTextureInGPUMemory(class IRenderDevice *, HRenderTexture); /* linkage=_ZN13IRenderDevice23UnpinTextureInGPUMemoryE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual bool IsTextureCubeMap(const class IRenderDevice  *, HRenderTexture); /* linkage=_ZNK13IRenderDevice16IsTextureCubeMapE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual bool IsTextureFullyResident(const class IRenderDevice  *, HRenderTexture); /* linkage=_ZNK13IRenderDevice22IsTextureFullyResidentE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual void AddTextureResidencyListener(class IRenderDevice *, class ITextureResidencyListener *); /* linkage=_ZN13IRenderDevice27AddTextureResidencyListenerEP25ITextureResidencyListener */
	virtual void RemoveTextureResidencyListener(class IRenderDevice *, class ITextureResidencyListener *); /* linkage=_ZN13IRenderDevice30RemoveTextureResidencyListenerEP25ITextureResidencyListener */
	virtual HRenderTexture GetSwapChainTexture(class IRenderDevice *, SwapChainHandle_t, enum SwapChainBuffer_t); /* linkage=_ZN13IRenderDevice19GetSwapChainTextureEP19SwapChainHandle_t__17SwapChainBuffer_t */
	virtual void GetRenderTargetDescDimensions(class IRenderDevice *, const class RenderTargetDesc_t  &, int *, int *); /* linkage=_ZN13IRenderDevice29GetRenderTargetDescDimensionsERK18RenderTargetDesc_tPiS3_ */
	virtual bool GetPipelineFrameStats(class IRenderDevice *, class CRenderPipelineFrameStats &); /* linkage=_ZN13IRenderDevice21GetPipelineFrameStatsER25CRenderPipelineFrameStats */
	virtual void ReleasePipelineFrameStats(class IRenderDevice *, class CRenderPipelineFrameStats &); /* linkage=_ZN13IRenderDevice25ReleasePipelineFrameStatsER25CRenderPipelineFrameStats */
	virtual bool IsTextureSwapChain(const class IRenderDevice  *, HRenderTexture); /* linkage=_ZNK13IRenderDevice18IsTextureSwapChainE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual bool GetSwapChainFromTexture(class IRenderDevice *, HRenderTexture, SwapChainHandle_t *, enum SwapChainBuffer_t *); /* linkage=_ZN13IRenderDevice23GetSwapChainFromTextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseEPP19SwapChainHandle_t__P17SwapChainBuffer_t */
	virtual enum ImageFormat GetNearestSupportedColorFormat(class IRenderDevice *, enum ImageFormat, bool, bool, bool); /* linkage=_ZN13IRenderDevice30GetNearestSupportedColorFormatE11ImageFormatbbb */
	virtual uint32 ComputeTextureMemorySize(const class IRenderDevice  *, const class CTextureDesc  &); /* linkage=_ZNK13IRenderDevice24ComputeTextureMemorySizeERK12CTextureDesc */
	virtual void GetTextureResidencyInfo(const class IRenderDevice  *, class CUtlVector<TextureResidencyInfo_t, CUtlMemory<TextureResidencyInfo_t, int> > &, class TextureResidencyStats_t &); /* linkage=_ZNK13IRenderDevice23GetTextureResidencyInfoER10CUtlVectorI22TextureResidencyInfo_t10CUtlMemoryIS1_iEER23TextureResidencyStats_t */
	virtual bool GetSheetSequenceTextureData(class IRenderDevice *, HRenderTexture, HRenderTexture *, class Vector2D *, int *); /* linkage=_ZN13IRenderDevice27GetSheetSequenceTextureDataE11CWeakHandleI31InfoForResourceTypeCTextureBaseEPS2_P8Vector2DPi */
	virtual ConstantBufferHandle_t GetSheetSequenceTextureDataConstantBuffer(class IRenderDevice *, HRenderTexture); /* linkage=_ZN13IRenderDevice41GetSheetSequenceTextureDataConstantBufferE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual void GetSheetCacheTextureSize(class IRenderDevice *, int &, int &); /* linkage=_ZN13IRenderDevice24GetSheetCacheTextureSizeERiS0_ */
	virtual void CommitSheetCacheData(class IRenderDevice *); /* linkage=_ZN13IRenderDevice20CommitSheetCacheDataEv */
	virtual HRenderTexture GetSheetMetaDataTexture(const class IRenderDevice  *); /* linkage=_ZNK13IRenderDevice23GetSheetMetaDataTextureEv */
	virtual void UnThrottleTextureStreamingForNFrames(class IRenderDevice *, uint32); /* linkage=_ZN13IRenderDevice36UnThrottleTextureStreamingForNFramesEj */
	virtual int GetNumTextureLoadsInFlight(const class IRenderDevice  *); /* linkage=_ZNK13IRenderDevice26GetNumTextureLoadsInFlightEv */
	virtual void OnBeginningOfClientShutdown(class IRenderDevice *); /* linkage=_ZN13IRenderDevice27OnBeginningOfClientShutdownEv */
	virtual void AppendStatsSummaryString(class IRenderDevice *, class CBufferString *); /* linkage=_ZN13IRenderDevice24AppendStatsSummaryStringEP13CBufferString */
	virtual void * GetDeviceSpecificInfo(class IRenderDevice *, enum DeviceSpecificInfo_t); /* linkage=_ZN13IRenderDevice21GetDeviceSpecificInfoE20DeviceSpecificInfo_t */
	/* <33d2a10> ../public/rendersystem/irenderdevice.h:706 */
	virtual int QueryFeature(class IRenderDevice *, class CUtlStringToken); /* linkage=_ZN13IRenderDevice12QueryFeatureE15CUtlStringToken */
	virtual const class RsDepthStencilStateDesc_t  * GetDepthStencilStateDesc(const class IRenderDevice  *, RsDepthStencilStateHandle_t); /* linkage=_ZNK13IRenderDevice24GetDepthStencilStateDescEP29RsDepthStencilStateHandle_t__ */
	virtual const class RsRasterizerStateDesc_t  * GetRasterizerStateDesc(const class IRenderDevice  *, RsRasterizerStateHandle_t); /* linkage=_ZNK13IRenderDevice22GetRasterizerStateDescEP27RsRasterizerStateHandle_t__ */
	virtual bool CanRenderToSwapChain(const class IRenderDevice  *, SwapChainHandle_t); /* linkage=_ZNK13IRenderDevice20CanRenderToSwapChainEP19SwapChainHandle_t__ */
	virtual void * GetDeviceSpecificTexture(class IRenderDevice *, HRenderTexture, enum RenderTextureDimension_t); /* linkage=_ZN13IRenderDevice24GetDeviceSpecificTextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseE24RenderTextureDimension_t */
	virtual void * GetDeviceSpecificImageView(class IRenderDevice *, HRenderTexture, enum RenderTextureDimension_t, enum RenderColorSpace_t); /* linkage=_ZN13IRenderDevice26GetDeviceSpecificImageViewE11CWeakHandleI31InfoForResourceTypeCTextureBaseE24RenderTextureDimension_t18RenderColorSpace_t */
	virtual void * GetDeviceSpecificBuffer(class IRenderDevice *, RenderBufferHandle_t); /* linkage=_ZN13IRenderDevice23GetDeviceSpecificBufferEP22RenderBufferHandle_t__ */
	virtual void * GetDeviceSpecificBuffer(class IRenderDevice *, IndexBufferHandle_t); /* linkage=_ZN13IRenderDevice23GetDeviceSpecificBufferEP21IndexBufferHandle_t__ */
	virtual void * GetDeviceSpecificBuffer(class IRenderDevice *, VertexBufferHandle_t); /* linkage=_ZN13IRenderDevice23GetDeviceSpecificBufferEP22VertexBufferHandle_t__ */
	virtual void * GetDeviceSpecificDescriptorSet(class IRenderDevice *, RenderDescriptorSetHandle_t); /* linkage=_ZN13IRenderDevice30GetDeviceSpecificDescriptorSetEP29RenderDescriptorSetHandle_t__ */
	virtual void * GetDeviceSpecificRayTracePipeline(class IRenderDevice *, RenderRayTracePipelineHandle_t); /* linkage=_ZN13IRenderDevice33GetDeviceSpecificRayTracePipelineEP32RenderRayTracePipelineHandle_t__ */
	virtual void RegisterMaxSwapChainDimensionsChangedListener(class IRenderDevice *, class IMaxSwapChainDimensionsChangedListener *); /* linkage=_ZN13IRenderDevice45RegisterMaxSwapChainDimensionsChangedListenerEP38IMaxSwapChainDimensionsChangedListener */
	virtual void UnregisterMaxSwapChainDimensionsChangedListener(class IRenderDevice *, class IMaxSwapChainDimensionsChangedListener *); /* linkage=_ZN13IRenderDevice47UnregisterMaxSwapChainDimensionsChangedListenerEP38IMaxSwapChainDimensionsChangedListener */
	virtual void GetCurrentMaxSwapChainDimensions(const class IRenderDevice  *, int *, int *); /* linkage=_ZNK13IRenderDevice32GetCurrentMaxSwapChainDimensionsEPiS0_ */
	virtual ThreadHandle_t GetRenderThreadHandle(const class IRenderDevice  *); /* linkage=_ZNK13IRenderDevice21GetRenderThreadHandleEv */
	virtual ThreadId_t GetRenderThreadId(const class IRenderDevice  *); /* linkage=_ZNK13IRenderDevice17GetRenderThreadIdEv */
	virtual bool HasOutstandingPresents(class IRenderDevice *, SwapChainHandle_t); /* linkage=_ZN13IRenderDevice22HasOutstandingPresentsEP19SwapChainHandle_t__ */
	virtual void WaitForOutstandingPresents(class IRenderDevice *, SwapChainHandle_t); /* linkage=_ZN13IRenderDevice26WaitForOutstandingPresentsEP19SwapChainHandle_t__ */
	virtual void ResizeEngineWindow(class IRenderDevice *, SwapChainHandle_t, PlatWindow_t, class RenderDeviceInfo_t); /* linkage=_ZN13IRenderDevice18ResizeEngineWindowEP19SwapChainHandle_t__P14PlatWindow_t__18RenderDeviceInfo_t */
	virtual int GetLastValidSheetCacheFrame(class IRenderDevice *); /* linkage=_ZN13IRenderDevice27GetLastValidSheetCacheFrameEv */
	virtual int GetTexturePinCount(class IRenderDevice *, HRenderTexture); /* linkage=_ZN13IRenderDevice18GetTexturePinCountE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual RenderDescriptorSetHandle_t CreateDescriptorSet(class IRenderDevice *, int32, const class RenderDescriptorDesc_t  *, int32, const class RenderDescriptorBinding_t  *, bool); /* linkage=_ZN13IRenderDevice19CreateDescriptorSetEiPK22RenderDescriptorDesc_tiPK25RenderDescriptorBinding_tb */
	virtual void UpdateDescriptorSet(class IRenderDevice *, RenderDescriptorSetHandle_t, int32, const class RenderDescriptorBinding_t  *); /* linkage=_ZN13IRenderDevice19UpdateDescriptorSetEP29RenderDescriptorSetHandle_t__iPK25RenderDescriptorBinding_t */
	virtual void DestroyDescriptorSet(class IRenderDevice *, RenderDescriptorSetHandle_t); /* linkage=_ZN13IRenderDevice20DestroyDescriptorSetEP29RenderDescriptorSetHandle_t__ */
	virtual bool AddDescriptorsToGlobalPerFrameDescriptorSet(class IRenderDevice *, int32, const class RenderDescriptorDesc_t  *); /* linkage=_ZN13IRenderDevice43AddDescriptorsToGlobalPerFrameDescriptorSetEiPK22RenderDescriptorDesc_t */
	virtual void UpdateGlobalPerFrameDescriptorBindings(class IRenderDevice *, int32, const class RenderDescriptorBinding_t  *); /* linkage=_ZN13IRenderDevice38UpdateGlobalPerFrameDescriptorBindingsEiPK25RenderDescriptorBinding_t */
	virtual class CRenderPassDesc * AllocPooledRenderPassDesc(class IRenderDevice *); /* linkage=_ZN13IRenderDevice25AllocPooledRenderPassDescEv */
	virtual void FreePooledRenderPassDesc(class IRenderDevice *, class CRenderPassDesc *); /* linkage=_ZN13IRenderDevice24FreePooledRenderPassDescEP15CRenderPassDesc */
	virtual class RenderPassHandle_t CreateRenderPass(class IRenderDevice *, const class CRenderPassDesc  *); /* linkage=_ZN13IRenderDevice16CreateRenderPassEPK15CRenderPassDesc */
	virtual void DestroyRenderPass(class IRenderDevice *, class RenderPassHandle_t); /* linkage=_ZN13IRenderDevice17DestroyRenderPassE18RenderPassHandle_t */
	virtual int GetClearFlagsSupportedInRenderPass(class IRenderDevice *, int, const class RenderTargetDesc_t  &, const class RenderClearInfo_t  &); /* linkage=_ZN13IRenderDevice34GetClearFlagsSupportedInRenderPassEiRK18RenderTargetDesc_tRK17RenderClearInfo_t */
	virtual float GetLastPresentTime(class IRenderDevice *); /* linkage=_ZN13IRenderDevice18GetLastPresentTimeEv */
	virtual void AsyncSetTextureData(class IRenderDevice *, HRenderTexture, const class CTextureDesc  *, const void  *, int, int, const class Rect3D_t  *, uint32, const DataRecycleDelegate_t  *, RenderAsyncTextureUpdateFlags_t); /* linkage=_ZN13IRenderDevice19AsyncSetTextureDataE11CWeakHandleI31InfoForResourceTypeCTextureBaseEPK12CTextureDescPKviiPK8Rect3D_tjPK12CUtlDelegateIFvS7_EEj */
	virtual GraphicsAPISpecificTextureHandle_t GetGraphicsAPISpecificTextureHandle(class IRenderDevice *, HRenderTexture); /* linkage=_ZN13IRenderDevice35GetGraphicsAPISpecificTextureHandleE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual void GetLargestMonitorDimensions(const class IRenderDevice  *, int *, int *); /* linkage=_ZNK13IRenderDevice27GetLargestMonitorDimensionsEPiS0_ */
	virtual void PushRenderDeviceFlags(class IRenderDevice *, enum RenderDeviceFlag_t); /* linkage=_ZN13IRenderDevice21PushRenderDeviceFlagsE18RenderDeviceFlag_t */
	virtual void PopRenderDeviceFlags(class IRenderDevice *, enum RenderDeviceFlag_t); /* linkage=_ZN13IRenderDevice20PopRenderDeviceFlagsE18RenderDeviceFlag_t */
	virtual bool GetGPUFrameTimeMS(const class IRenderDevice  *, SwapChainHandle_t, float *, uint32 *); /* linkage=_ZNK13IRenderDevice17GetGPUFrameTimeMSEP19SwapChainHandle_t__PfPj */
	/* <3183193> ../public/rendersystem/irenderdevice.h:792 */
	virtual bool IsUsingReverseDepth(const class IRenderDevice  *); /* linkage=_ZNK13IRenderDevice19IsUsingReverseDepthEv */
	/* <2f2fbf3> ../public/rendersystem/irenderdevice.h:793 */
	virtual bool IsUsing32BitDepthBuffer(const class IRenderDevice  *); /* linkage=_ZNK13IRenderDevice23IsUsing32BitDepthBufferEv */
	virtual double ConvertTimestampToSeconds(class IRenderDevice *, uint64); /* linkage=_ZN13IRenderDevice25ConvertTimestampToSecondsEy */
	virtual void FreeTextureGPUResources(class IRenderDevice *, int32, const HRenderTexture  *); /* linkage=_ZN13IRenderDevice23FreeTextureGPUResourcesEiPK11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual bool IsProfilerAttached(class IRenderDevice *); /* linkage=_ZN13IRenderDevice18IsProfilerAttachedEv */
	virtual void SetTextureGlobalMipLODBias(class IRenderDevice *, float); /* linkage=_ZN13IRenderDevice26SetTextureGlobalMipLODBiasEf */
	virtual float GetTextureGlobalMipLODBias(const class IRenderDevice  *); /* linkage=_ZNK13IRenderDevice26GetTextureGlobalMipLODBiasEv */
	virtual void UnThrottlePipelineCreationForNFrames(class IRenderDevice *, uint32); /* linkage=_ZN13IRenderDevice36UnThrottlePipelineCreationForNFramesEj */
	virtual void RegisterDescriptorSetLayout(class IRenderDevice *, class CUtlStringToken, RenderDescriptorSetHandle_t); /* linkage=_ZN13IRenderDevice27RegisterDescriptorSetLayoutE15CUtlStringTokenP29RenderDescriptorSetHandle_t__ */
	virtual RenderDescriptorSetHandle_t GetRegisteredDescriptorSetLayout(const class IRenderDevice  *, class CUtlStringToken); /* linkage=_ZNK13IRenderDevice32GetRegisteredDescriptorSetLayoutE15CUtlStringToken */
	virtual RenderBLASHandle_t CreateBLAS(class IRenderDevice *, const class BLASCreateDesc_t  &, uint32 *); /* linkage=_ZN13IRenderDevice10CreateBLASERK16BLASCreateDesc_tPj */
	virtual bool IsCompactible(class IRenderDevice *, RenderBLASHandle_t); /* linkage=_ZN13IRenderDevice13IsCompactibleEP20RenderBLASHandle_t__ */
	virtual enum IsReadyToCompactResult_t IsReadyToCompact(class IRenderDevice *, RenderBLASHandle_t); /* linkage=_ZN13IRenderDevice16IsReadyToCompactEP20RenderBLASHandle_t__ */
	virtual RenderBLASHandle_t CreateBLASForCompact(class IRenderDevice *, RenderBLASHandle_t); /* linkage=_ZN13IRenderDevice20CreateBLASForCompactEP20RenderBLASHandle_t__ */
	virtual void DestroyBLAS(class IRenderDevice *, RenderBLASHandle_t); /* linkage=_ZN13IRenderDevice11DestroyBLASEP20RenderBLASHandle_t__ */
	virtual RenderTLASHandle_t CreateTLAS(class IRenderDevice *, const class TLASCreateDesc_t  &, class TLASInstance_t *, int); /* linkage=_ZN13IRenderDevice10CreateTLASERK16TLASCreateDesc_tP14TLASInstance_ti */
	virtual void DestroyTLAS(class IRenderDevice *, RenderTLASHandle_t); /* linkage=_ZN13IRenderDevice11DestroyTLASEP20RenderTLASHandle_t__ */
	virtual RenderRayTracePipelineHandle_t CreateRayTracePipeline(class IRenderDevice *, const class RayTracePipelineStateCreateDesc_t  &); /* linkage=_ZN13IRenderDevice22CreateRayTracePipelineERK33RayTracePipelineStateCreateDesc_t */
	virtual void DestroyRayTracePipeline(class IRenderDevice *, RenderRayTracePipelineHandle_t); /* linkage=_ZN13IRenderDevice23DestroyRayTracePipelineEP32RenderRayTracePipelineHandle_t__ */
	virtual bool IsCreatingRayTracePipelines(class IRenderDevice *); /* linkage=_ZN13IRenderDevice27IsCreatingRayTracePipelinesEv */
	virtual class IRaytraceShaderBindingTable * CreateRayTraceShaderBindingTable(class IRenderDevice *, const class ShaderBindingTableCreateDesc_t  &); /* linkage=_ZN13IRenderDevice32CreateRayTraceShaderBindingTableERK30ShaderBindingTableCreateDesc_t */
	virtual void DestroyRayTraceShaderBindingTable(class IRenderDevice *, class IRaytraceShaderBindingTable *); /* linkage=_ZN13IRenderDevice33DestroyRayTraceShaderBindingTableEP27IRaytraceShaderBindingTable */
	virtual bool IsRayTracingSupported(const class IRenderDevice  *); /* linkage=_ZNK13IRenderDevice21IsRayTracingSupportedEv */
	virtual bool IsAsyncPresentEnabled(const class IRenderDevice  *); /* linkage=_ZNK13IRenderDevice21IsAsyncPresentEnabledEv */
	virtual void EnableAsyncPresent(class IRenderDevice *, bool); /* linkage=_ZN13IRenderDevice18EnableAsyncPresentEb */
	virtual bool StartRenderDocCapture(class IRenderDevice *, PlatWindow_t); /* linkage=_ZN13IRenderDevice21StartRenderDocCaptureEP14PlatWindow_t__ */
	virtual bool EndRenderDocCapture(class IRenderDevice *, PlatWindow_t); /* linkage=_ZN13IRenderDevice19EndRenderDocCaptureEP14PlatWindow_t__ */
	virtual uint32 GetTextureViewIndex(const class IRenderDevice  *, HRenderTexture, enum RenderColorSpace_t, enum RenderTextureDimension_t); /* linkage=_ZNK13IRenderDevice19GetTextureViewIndexE11CWeakHandleI31InfoForResourceTypeCTextureBaseE18RenderColorSpace_t24RenderTextureDimension_t */
	virtual uint32 GetSamplerIndex(const class IRenderDevice  *, SamplerStateHandle_t); /* linkage=_ZNK13IRenderDevice15GetSamplerIndexEP22SamplerStateHandle_t__ */
	virtual RenderDescriptorSetHandle_t GetGlobalLateBoundBindlessDescriptorSet(class IRenderDevice *); /* linkage=_ZN13IRenderDevice39GetGlobalLateBoundBindlessDescriptorSetEv */
	virtual PooledIndexBufferHandle_t AllocatePooledIndexBuffer(class IRenderDevice *, uint, const uint16  *, uint *); /* linkage=_ZN13IRenderDevice25AllocatePooledIndexBufferEjPKtPj */
	virtual void FreePooledIndexBuffer(class IRenderDevice *, PooledIndexBufferHandle_t); /* linkage=_ZN13IRenderDevice21FreePooledIndexBufferEP27PooledIndexBufferHandle_t__ */
	virtual uint GetPooledIndexBufferOffset(class IRenderDevice *, PooledIndexBufferHandle_t); /* linkage=_ZN13IRenderDevice26GetPooledIndexBufferOffsetEP27PooledIndexBufferHandle_t__ */
	virtual IndexBufferHandle_t GetPooledIndexBuffer(class IRenderDevice *); /* linkage=_ZN13IRenderDevice20GetPooledIndexBufferEv */
	virtual void TriggerValidationError(class IRenderDevice *); /* linkage=_ZN13IRenderDevice22TriggerValidationErrorEv */
	virtual void DefragmentGPUMemory(class IRenderDevice *, enum RenderDefragFlags_t, bool); /* linkage=_ZN13IRenderDevice19DefragmentGPUMemoryE19RenderDefragFlags_tb */
	virtual uint64 GetGPUMemoryFragmentationBytes(const class IRenderDevice  *); /* linkage=_ZNK13IRenderDevice30GetGPUMemoryFragmentationBytesEv */
	virtual HRenderTexture FindOrCreateTexture2(class IRenderDevice *, const char  *, bool, const class TextureCreationConfig_t  &, const void  *, int); /* linkage=_ZN13IRenderDevice20FindOrCreateTexture2EPKcbRK23TextureCreationConfig_tPKvi */
	virtual void ClearTexture(class IRenderDevice *, HRenderTexture, class Color); /* linkage=_ZN13IRenderDevice12ClearTextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseE5Color */
	virtual void AsyncSetTextureData2(class IRenderDevice *, HRenderTexture, const void  *, int, class Rect3D_t); /* linkage=_ZN13IRenderDevice20AsyncSetTextureData2E11CWeakHandleI31InfoForResourceTypeCTextureBaseEPKvi8Rect3D_t */
	virtual void * GetDevicePtr(class IRenderDevice *); /* linkage=_ZN13IRenderDevice12GetDevicePtrEv */
	virtual void * GetTextureObject(class IRenderDevice *, HRenderTexture); /* linkage=_ZN13IRenderDevice16GetTextureObjectE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual bool IsRenderDocEnabled(class IRenderDevice *); /* linkage=_ZN13IRenderDevice18IsRenderDocEnabledEv */
	virtual void SetInMainThreadRenderBlock(class IRenderDevice *, bool); /* linkage=_ZN13IRenderDevice26SetInMainThreadRenderBlockEb */
	virtual bool IsInMainThreadRenderBlock(class IRenderDevice *); /* linkage=_ZN13IRenderDevice25IsInMainThreadRenderBlockEv */
	virtual int GetTextureLastUsed(class IRenderDevice *, HRenderTexture); /* linkage=_ZN13IRenderDevice18GetTextureLastUsedE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual void SetForcePreloadStreamingData(class IRenderDevice *, bool); /* linkage=_ZN13IRenderDevice28SetForcePreloadStreamingDataEb */
	virtual bool ReadBuffer(class IRenderDevice *, IndexBufferHandle_t, uint32, void *, uint32); /* linkage=_ZN13IRenderDevice10ReadBufferEP21IndexBufferHandle_t__jPvj */
	bool ReadBuffer<unsigned char>(class IRenderDevice *, RenderBufferHandle_t, int, unsigned char *, int); /* linkage=_ZN13IRenderDevice10ReadBufferIhEEbP22RenderBufferHandle_t__iPT_i */
};

// <04CD964D> ../public/rendersystem/irenderdevice.h:381
inline void IRenderDevice::IsEmptyAPI()
{
} /* size: 0 */

// <04CD9634> ../public/rendersystem/irenderdevice.h:386
inline void IRenderDevice::IsNoOpDevice()
{
} /* size: 0 */

// <0331059F> ../public/rendersystem/irenderdevice.h:531
// variable: 1
inline void IRenderDevice::SubmitDisplayList(CDisplayList* pCommandList)
{
	DisplayListToSubmit_t temp; // 533
} /* size: 0, variables: 1 */

// <03DB07D9> ../public/rendersystem/irenderdevice.h:560
void IRenderDevice::DestroyConstantBuffer(ConstantBufferHandle_t hConstantBuffer)
{
} /* size: 5 */

// <03DABB0C> ../public/rendersystem/irenderdevice.h:560
inline void IRenderDevice::DestroyConstantBuffer(ConstantBufferHandle_t hConstantBuffer)
{
} /* size: 0 */

// <0202E7C7> ../public/rendersystem/irenderdevice.h:576
inline void IRenderDevice::ReadTexturePixels(HRenderTexture hTexture, Rect_t* pSrcRect, Rect_t* pDstRect, void* pData, ImageFormat dstFormat, int nDstStride)
{
} /* size: 0 */

// <0185903B> ../public/rendersystem/irenderdevice.h:585
inline void ReadBuffer<unsigned IRenderDevice::char>(RenderBufferHandle_t hBuffer, int nOffset, unsigned char* pElements, int nCount)
{
} /* size: 0 */

// <001AC2FB> ../public/rendersystem/irenderdevice.h:598
void IRenderDevice::SetFramePacingFPS(double fps)
{
} /* size: 5 */

// <033D2A10> ../public/rendersystem/irenderdevice.h:706
void IRenderDevice::QueryFeature(CUtlStringToken nTok)
{
} /* size: 7 */

// <033CCC07> ../public/rendersystem/irenderdevice.h:706
inline void IRenderDevice::QueryFeature(CUtlStringToken nTok)
{
} /* size: 0 */

// <03183193> ../public/rendersystem/irenderdevice.h:792
void IRenderDevice::IsUsingReverseDepth()
{
} /* size: 9 */

// <0317CF3E> ../public/rendersystem/irenderdevice.h:792
inline void IRenderDevice::IsUsingReverseDepth()
{
} /* size: 0 */

// <02F2FBF3> ../public/rendersystem/irenderdevice.h:793
void IRenderDevice::IsUsing32BitDepthBuffer()
{
} /* size: 9 */

// <02F24AD2> ../public/rendersystem/irenderdevice.h:793
inline void IRenderDevice::IsUsing32BitDepthBuffer()
{
} /* size: 0 */

// <007D83F0> ../public/rendersystem/irenderdevice.h:918
inline void IRenderDevice::CreateSwapChain(PlatWindow_t hWnd, const RenderDeviceInfo_t& mode, const char* pDebugName)
{
} /* size: 0 */

// <033AF8ED> ../public/rendersystem/irenderdevice.h:945
// variables: 2
IndexBufferHandle_t CreateIndexBuffer<short unsigned int>(int nNumIndices, const char* pDebugName, const char* pBudgetGroupName)
{
	BufferDesc_t indexDesc; // 947
	IndexBufferHandle_t hRet; // 952
} /* size: 0, variables: 2 */

// <033AF462> ../public/rendersystem/irenderdevice.h:945
// variables: 2
IndexBufferHandle_t CreateIndexBuffer<unsigned int>(int nNumIndices, const char* pDebugName, const char* pBudgetGroupName)
{
	BufferDesc_t indexDesc; // 947
	IndexBufferHandle_t hRet; // 952
} /* size: 0, variables: 2 */

// <032416EE> ../public/rendersystem/irenderdevice.h:985
inline void RenderTargetDesc_t::Init(SwapChainHandle_t hSwapChain, bool bUseColorBuffer, bool bUseDepthBuffer, RenderColorSpace_t allowSrgbWrites)
{
} /* size: 0 */

// <01351ADA> ../public/rendersystem/irenderdevice.h:1012
// variables: 2
inline void IRenderDevice::CompileAndCreateShader(RenderShaderType_t nType, const char* pProgram, uint32 nBufLen, const char* pShaderVersion, const char* pDebugName)
{
	RenderShaderHandle_t hShader; // 1014
	unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> > pShaderBuffer; // 1015
} /* size: 0, variables: 2 */

// <00A5A78F> ../public/rendersystem/irenderdevice.h:1012
// variables: 4
// function calls: 48
void IRenderDevice::CompileAndCreateShader(RenderShaderType_t nType, const char* pProgram, uint32 nBufLen, const char* pShaderVersion, const char* pDebugName)
{
	RenderShaderHandle_t hShader; // 1014
	unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> > pShaderBuffer; // 1015
	IRenderShaderByteCode::IRenderShaderByteCode(); // 4341
	CVfxShaderFileRenderShaderBuffer::CVfxShaderFileRenderShaderBuffer(
					const char* pShaderSource,
					uint32 nSizeInBytes);  // 4359
	_Head_base<1, std::default_delete<IRenderShaderByteCode>, true>::_Head_base(); // 561
	_Tuple_impl<1, std::default_delete<IRenderShaderByteCode> >::_Tuple_impl(); // 303
	_Head_base<0, IRenderShaderByteCode::_Head_base(); // 303
	_Tuple_impl<0, IRenderShaderByteCode::_Tuple_impl(); // 966
	tuple<IRenderShaderByteCode::tuple(); // 169
	__uniq_ptr_impl<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::_M_ptr(); // 169
	__uniq_ptr_impl<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::__uniq_ptr_impl(
			pointer __p);  // 234
	__uniq_ptr_data<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode>, true, true>::__uniq_ptr_data(
			pointer);  // 311
	unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::unique_ptr<>(
			pointer __p);  // 4359
	CRenderDeviceVulkan::CompileShader(
			const char* pProgram,
			uint32 nBufLen,
			const char* pShaderVersion);  // 1015
	__uniq_ptr_impl<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::_M_ptr(); // 472
	unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::get(); // 489
	unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::operator bool(); // 1016
	_Tuple_impl<1, std::default_delete<IRenderShaderByteCode> >::_Tuple_impl(
			_Tuple_impl<1, std::default_delete<IRenderShaderByteCode> >& __in);  // 324
	_Tuple_impl<0, IRenderShaderByteCode::_Tuple_impl(
			_Tuple_impl<0, IRenderShaderByteCode*, std::default_delete<IRenderShaderByteCode> > &);  // 996
	tuple<IRenderShaderByteCode::tuple(
		tuple<IRenderShaderByteCode*, std::default_delete<IRenderShaderByteCode> > &);  // 178
	__uniq_ptr_impl<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::_M_ptr(); // 179
	__uniq_ptr_impl<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::__uniq_ptr_impl(
			__uniq_ptr_impl<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >& __u);  // 235
	__uniq_ptr_data<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode>, true, true>::__uniq_ptr_data(
			__uniq_ptr_data<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode>, true, true> &);  // 359
	unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::unique_ptr(
			unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> > &);  // 1018
	{
		IRenderShaderByteCode *& __ptr; // 396
		__uniq_ptr_impl<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::_M_ptr(); // 396
		unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::get_deleter(); // 398
		CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned char, int>::Purge(); // 903
		CUtlMemory<unsigned char, int>::Purge(); // 510
		ValidateAlignment<unsigned char>(void); // 508
		CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
		CUtlBuffer::~CUtlBuffer(); // 4346
		IRenderShaderByteCode::~IRenderShaderByteCode(); // 4346
		CVfxShaderFileRenderShaderBuffer::~CVfxShaderFileRenderShaderBuffer(); // 4346
		CVfxShaderFileRenderShaderBuffer::~CVfxShaderFileRenderShaderBuffer(); // 92
		default_delete<IRenderShaderByteCode>::operator(
				IRenderShaderByteCode* __ptr);  // 398
	}
	unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::~unique_ptr(); // 1018
	{
		IRenderShaderByteCode *& __ptr; // 396
		__uniq_ptr_impl<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::_M_ptr(); // 396
		unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::get_deleter(); // 398
		CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned char, int>::Purge(); // 903
		CUtlMemory<unsigned char, int>::Purge(); // 510
		ValidateAlignment<unsigned char>(void); // 508
		CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
		CUtlBuffer::~CUtlBuffer(); // 4346
		IRenderShaderByteCode::~IRenderShaderByteCode(); // 4346
		CVfxShaderFileRenderShaderBuffer::~CVfxShaderFileRenderShaderBuffer(); // 4346
		CVfxShaderFileRenderShaderBuffer::~CVfxShaderFileRenderShaderBuffer(); // 92
		default_delete<IRenderShaderByteCode>::operator(
				IRenderShaderByteCode* __ptr);  // 398
	}
	unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::~unique_ptr(); // 1021
} /* size: 476, variables: 2, inline expansions: 24 (430 bytes) */

