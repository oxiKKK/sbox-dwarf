
//
// public/rendersystem/renderpass.h
//
//	referenced by: libengine2.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 47
//	class: 1
//	structs: 11
//

// <034602C8> ../public/rendersystem/renderpass.h:41
void RenderPassAttachmentDesc_t::RenderPassAttachmentDesc_t(RenderPassAttachmentDesc_t &)
{
} /* size: 0 */

// <034602A7> ../public/rendersystem/renderpass.h:41
inline void RenderPassAttachmentDesc_t::RenderPassAttachmentDesc_t(RenderPassAttachmentDesc_t &)
{
} /* size: 0 */

// <00AC6F79> ../public/rendersystem/renderpass.h:41
inline void RenderPassAttachmentDesc_t::operator=(const RenderPassAttachmentDesc_t &)
{
} /* size: 0 */

// <03457312> ../public/rendersystem/renderpass.h:41
// member functions: 5
// member variables: 9
// struct size: 40
struct RenderPassAttachmentDesc_t {
	/* ../public/rendersystem/renderpass.h:43 */
	void RenderPassAttachmentDesc_t(RenderPassAttachmentDesc_t* );
	/* ../public/rendersystem/renderpass.h:48 */
	void RenderPassAttachmentDesc_t(RenderPassAttachmentDesc_t* , HRenderTexture, RenderPassLoadOp_t, RenderPassStoreOp_t, RenderPassLoadOp_t, RenderPassStoreOp_t, RenderImageLayout_t, RenderImageLayout_t, RenderColorSpace_t, int32);
	HRenderTexture m_hTexture; /* 0 8 */
	RenderPassLoadOp_t m_nLoadOp; /* 8 4 */
	RenderPassStoreOp_t m_nStoreOp; /* 12 4 */
	RenderPassLoadOp_t m_nStencilLoadOp; /* 16 4 */
	RenderPassStoreOp_t m_nStencilStoreOp; /* 20 4 */
	RenderImageLayout_t m_nInitialLayout; /* 24 4 */
	RenderImageLayout_t m_nFinalLayout; /* 28 4 */
	RenderColorSpace_t m_nColorSpace; /* 32 1 */
	int32 m_nTargetIndex; /* 36 4 */
	/* ../public/rendersystem/renderpass.h:89 */
	void Clear(RenderPassAttachmentDesc_t* );
	/* ../public/rendersystem/renderpass.h:103 */
	bool operator<(const RenderPassAttachmentDesc_t* , const RenderPassAttachmentDesc_t& );
	void RenderPassAttachmentDesc_t(RenderPassAttachmentDesc_t* , RenderPassAttachmentDesc_t& );
};

// <00164837> ../public/rendersystem/renderpass.h:41
// member functions: 4
// member variables: 9
// struct size: 40
struct RenderPassAttachmentDesc_t {
	/* ../public/rendersystem/renderpass.h:43 */
	void RenderPassAttachmentDesc_t(RenderPassAttachmentDesc_t* );
	/* ../public/rendersystem/renderpass.h:48 */
	void RenderPassAttachmentDesc_t(RenderPassAttachmentDesc_t* , HRenderTexture, RenderPassLoadOp_t, RenderPassStoreOp_t, RenderPassLoadOp_t, RenderPassStoreOp_t, RenderImageLayout_t, RenderImageLayout_t, RenderColorSpace_t, int32);
	HRenderTexture m_hTexture; /* 0 8 */
	RenderPassLoadOp_t m_nLoadOp; /* 8 4 */
	RenderPassStoreOp_t m_nStoreOp; /* 12 4 */
	RenderPassLoadOp_t m_nStencilLoadOp; /* 16 4 */
	RenderPassStoreOp_t m_nStencilStoreOp; /* 20 4 */
	RenderImageLayout_t m_nInitialLayout; /* 24 4 */
	RenderImageLayout_t m_nFinalLayout; /* 28 4 */
	RenderColorSpace_t m_nColorSpace; /* 32 1 */
	int32 m_nTargetIndex; /* 36 4 */
	/* ../public/rendersystem/renderpass.h:89 */
	void Clear(RenderPassAttachmentDesc_t* );
	/* ../public/rendersystem/renderpass.h:103 */
	bool operator<(const RenderPassAttachmentDesc_t* , const RenderPassAttachmentDesc_t& );
};

// <00AA8402> ../public/rendersystem/renderpass.h:41
// member functions: 6
// member variables: 9
// struct size: 40
struct RenderPassAttachmentDesc_t {
	/* ../public/rendersystem/renderpass.h:43 */
	void RenderPassAttachmentDesc_t(RenderPassAttachmentDesc_t* );
	/* ../public/rendersystem/renderpass.h:48 */
	void RenderPassAttachmentDesc_t(RenderPassAttachmentDesc_t* , HRenderTexture, RenderPassLoadOp_t, RenderPassStoreOp_t, RenderPassLoadOp_t, RenderPassStoreOp_t, RenderImageLayout_t, RenderImageLayout_t, RenderColorSpace_t, int32);
	HRenderTexture m_hTexture; /* 0 8 */
	RenderPassLoadOp_t m_nLoadOp; /* 8 4 */
	RenderPassStoreOp_t m_nStoreOp; /* 12 4 */
	RenderPassLoadOp_t m_nStencilLoadOp; /* 16 4 */
	RenderPassStoreOp_t m_nStencilStoreOp; /* 20 4 */
	RenderImageLayout_t m_nInitialLayout; /* 24 4 */
	RenderImageLayout_t m_nFinalLayout; /* 28 4 */
	RenderColorSpace_t m_nColorSpace; /* 32 1 */
	int32 m_nTargetIndex; /* 36 4 */
	/* ../public/rendersystem/renderpass.h:89 */
	void Clear(RenderPassAttachmentDesc_t* );
	/* ../public/rendersystem/renderpass.h:103 */
	bool operator<(const RenderPassAttachmentDesc_t* , const RenderPassAttachmentDesc_t& );
	void RenderPassAttachmentDesc_t(RenderPassAttachmentDesc_t* , RenderPassAttachmentDesc_t& );
	RenderPassAttachmentDesc_t& operator=(RenderPassAttachmentDesc_t* , const RenderPassAttachmentDesc_t& );
};

// <034755C1> ../public/rendersystem/renderpass.h:43
void RenderPassAttachmentDesc_t::RenderPassAttachmentDesc_t()
{
} /* size: 0 */

// <034755A8> ../public/rendersystem/renderpass.h:43
inline void RenderPassAttachmentDesc_t::RenderPassAttachmentDesc_t()
{
} /* size: 0 */

// <0347558F> ../public/rendersystem/renderpass.h:89
inline void RenderPassAttachmentDesc_t::Clear()
{
} /* size: 0 */

// <00ADC230> ../public/rendersystem/renderpass.h:103
inline void RenderPassAttachmentDesc_t::operator<(const RenderPassAttachmentDesc_t& rhs)
{
} /* size: 0 */

// <0345748A> ../public/rendersystem/renderpass.h:125
// member functions: 4
// member variables: 3
// struct size: 12
struct RenderPassSubPassDependency_t {
	/* ../public/rendersystem/renderpass.h:127 */
	void RenderPassSubPassDependency_t(RenderPassSubPassDependency_t* );
	/* ../public/rendersystem/renderpass.h:132 */
	void RenderPassSubPassDependency_t(RenderPassSubPassDependency_t* , int32, int32, bool);
	int32_t m_nSrcPassIndex; /* 0 4 */
	int32_t m_nDstPassIndex; /* 4 4 */
	bool m_bByRegionDependency; /* 8 1 */
	/* ../public/rendersystem/renderpass.h:151 */
	void Clear(RenderPassSubPassDependency_t* );
	/* ../public/rendersystem/renderpass.h:159 */
	bool operator<(const RenderPassSubPassDependency_t* , const RenderPassSubPassDependency_t& );
};

// <03475578> ../public/rendersystem/renderpass.h:127
void RenderPassSubPassDependency_t::RenderPassSubPassDependency_t()
{
} /* size: 0 */

// <0347555F> ../public/rendersystem/renderpass.h:127
inline void RenderPassSubPassDependency_t::RenderPassSubPassDependency_t()
{
} /* size: 0 */

// <03475546> ../public/rendersystem/renderpass.h:151
inline void RenderPassSubPassDependency_t::Clear()
{
} /* size: 0 */

// <00ADC1C2> ../public/rendersystem/renderpass.h:159
inline void RenderPassSubPassDependency_t::operator<(const RenderPassSubPassDependency_t& rhs)
{
} /* size: 0 */

// <034601A5> ../public/rendersystem/renderpass.h:176
void RenderSubPassAttachment_t::RenderSubPassAttachment_t(RenderSubPassAttachment_t &)
{
} /* size: 0 */

// <03460184> ../public/rendersystem/renderpass.h:176
inline void RenderSubPassAttachment_t::RenderSubPassAttachment_t(RenderSubPassAttachment_t &)
{
} /* size: 0 */

// <0345E4D4> ../public/rendersystem/renderpass.h:176
inline void RenderSubPassAttachment_t::operator=(RenderSubPassAttachment_t &)
{
} /* size: 0 */

// <00AC6F58> ../public/rendersystem/renderpass.h:176
inline void RenderSubPassAttachment_t::operator=(const RenderSubPassAttachment_t &)
{
} /* size: 0 */

// <03457569> ../public/rendersystem/renderpass.h:176
// member functions: 6
// member variables: 2
// struct size: 16
struct RenderSubPassAttachment_t {
	/* ../public/rendersystem/renderpass.h:178 */
	void RenderSubPassAttachment_t(RenderSubPassAttachment_t* );
	/* ../public/rendersystem/renderpass.h:182 */
	void RenderSubPassAttachment_t(RenderSubPassAttachment_t* , HRenderTexture, RenderImageLayout_t);
	HRenderTexture m_hTexture; /* 0 8 */
	RenderImageLayout_t m_nImageLayout; /* 8 4 */
	/* ../public/rendersystem/renderpass.h:194 */
	void Clear(RenderSubPassAttachment_t* );
	/* ../public/rendersystem/renderpass.h:201 */
	bool operator<(const RenderSubPassAttachment_t* , const RenderSubPassAttachment_t& );
	RenderSubPassAttachment_t& operator=(RenderSubPassAttachment_t* , RenderSubPassAttachment_t& );
	void RenderSubPassAttachment_t(RenderSubPassAttachment_t* , RenderSubPassAttachment_t& );
};

// <00164A63> ../public/rendersystem/renderpass.h:176
// member functions: 4
// member variables: 2
// struct size: 16
struct RenderSubPassAttachment_t {
	/* ../public/rendersystem/renderpass.h:178 */
	void RenderSubPassAttachment_t(RenderSubPassAttachment_t* );
	/* ../public/rendersystem/renderpass.h:182 */
	void RenderSubPassAttachment_t(RenderSubPassAttachment_t* , HRenderTexture, RenderImageLayout_t);
	HRenderTexture m_hTexture; /* 0 8 */
	RenderImageLayout_t m_nImageLayout; /* 8 4 */
	/* ../public/rendersystem/renderpass.h:194 */
	void Clear(RenderSubPassAttachment_t* );
	/* ../public/rendersystem/renderpass.h:201 */
	bool operator<(const RenderSubPassAttachment_t* , const RenderSubPassAttachment_t& );
};

// <00AA8687> ../public/rendersystem/renderpass.h:176
// member functions: 7
// member variables: 2
// struct size: 16
struct RenderSubPassAttachment_t {
	/* ../public/rendersystem/renderpass.h:178 */
	void RenderSubPassAttachment_t(RenderSubPassAttachment_t* );
	/* ../public/rendersystem/renderpass.h:182 */
	void RenderSubPassAttachment_t(RenderSubPassAttachment_t* , HRenderTexture, RenderImageLayout_t);
	HRenderTexture m_hTexture; /* 0 8 */
	RenderImageLayout_t m_nImageLayout; /* 8 4 */
	/* ../public/rendersystem/renderpass.h:194 */
	void Clear(RenderSubPassAttachment_t* );
	/* ../public/rendersystem/renderpass.h:201 */
	bool operator<(const RenderSubPassAttachment_t* , const RenderSubPassAttachment_t& );
	RenderSubPassAttachment_t& operator=(RenderSubPassAttachment_t* , RenderSubPassAttachment_t& );
	void RenderSubPassAttachment_t(RenderSubPassAttachment_t* , RenderSubPassAttachment_t& );
	RenderSubPassAttachment_t& operator=(RenderSubPassAttachment_t* , const RenderSubPassAttachment_t& );
};

// <0347552F> ../public/rendersystem/renderpass.h:178
void RenderSubPassAttachment_t::RenderSubPassAttachment_t()
{
} /* size: 0 */

// <03475516> ../public/rendersystem/renderpass.h:178
inline void RenderSubPassAttachment_t::RenderSubPassAttachment_t()
{
} /* size: 0 */

// <034754FD> ../public/rendersystem/renderpass.h:194
inline void RenderSubPassAttachment_t::Clear()
{
} /* size: 0 */

// <00ADC154> ../public/rendersystem/renderpass.h:201
inline void RenderSubPassAttachment_t::operator<(const RenderSubPassAttachment_t& rhs)
{
} /* size: 0 */

// <0346255A> ../public/rendersystem/renderpass.h:216
void RenderPassSubPass_t::~RenderPassSubPass_t()
{
} /* size: 0 */

// <0346253E> ../public/rendersystem/renderpass.h:216
inline void RenderPassSubPass_t::~RenderPassSubPass_t()
{
} /* size: 0 */

// <03460168> ../public/rendersystem/renderpass.h:216
void RenderPassSubPass_t::RenderPassSubPass_t(RenderPassSubPass_t &)
{
} /* size: 0 */

// <03460147> ../public/rendersystem/renderpass.h:216
inline void RenderPassSubPass_t::RenderPassSubPass_t(RenderPassSubPass_t &)
{
} /* size: 0 */

// <00AC6F37> ../public/rendersystem/renderpass.h:216
inline void RenderPassSubPass_t::operator=(const RenderPassSubPass_t &)
{
} /* size: 0 */

// <03459D08> ../public/rendersystem/renderpass.h:216
// member functions: 10
// member variables: 6
// struct size: 256
struct RenderPassSubPass_t {
	/* ../public/rendersystem/renderpass.h:218 */
	void RenderPassSubPass_t(RenderPassSubPass_t* );
	/* ../public/rendersystem/renderpass.h:223 */
	void RenderPassSubPass_t(RenderPassSubPass_t* , const char* , ...);
	char m_szDebugName[32]; /* 0 32 */
	CUtlLeanVectorFixedGrowable<RenderSubPassAttachment_t, 4, short int> m_colorAttachments __attribute__((__aligned__(8))); /* 32 72 */
	RenderSubPassAttachment_t m_depthStencilAttachment; /* 104 16 */
	CUtlLeanVectorFixedGrowable<RenderSubPassAttachment_t, 2, short int> m_resolveAttachments __attribute__((__aligned__(8))); /* 120 40 */
	CUtlLeanVectorFixedGrowable<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int> m_preserveAttachments __attribute__((__aligned__(8))); /* 160 24 */
	CUtlLeanVectorFixedGrowable<RenderSubPassAttachment_t, 4, short int> m_inputAttachments __attribute__((__aligned__(8))); /* 184 72 */
	/* ../public/rendersystem/renderpass.h:254 */
	void Clear(RenderPassSubPass_t* );
	/* ../public/rendersystem/renderpass.h:264 */
	const char* GetDebugName(const RenderPassSubPass_t* );
	/* ../public/rendersystem/renderpass.h:268 */
	void SetDebugNameV(RenderPassSubPass_t* , const char* , typedef __va_list_tag __va_list_tag* );
	/* ../public/rendersystem/renderpass.h:272 */
	void SetDebugName(RenderPassSubPass_t* , const char* , ...);
	/* ../public/rendersystem/renderpass.h:279 */
	void SetDebugNameString(RenderPassSubPass_t* , const char* );
	/* ../public/rendersystem/renderpass.h:285 */
	bool operator<(const RenderPassSubPass_t* , const RenderPassSubPass_t& );
	void RenderPassSubPass_t(RenderPassSubPass_t* , RenderPassSubPass_t& );
	void ~RenderPassSubPass_t(RenderPassSubPass_t* );
} __attribute__((__aligned__(8)));

// <00167049> ../public/rendersystem/renderpass.h:216
// member functions: 9
// member variables: 6
// struct size: 256
struct RenderPassSubPass_t {
	/* ../public/rendersystem/renderpass.h:218 */
	void RenderPassSubPass_t(RenderPassSubPass_t* );
	/* ../public/rendersystem/renderpass.h:223 */
	void RenderPassSubPass_t(RenderPassSubPass_t* , const char* , ...);
	char m_szDebugName[32]; /* 0 32 */
	CUtlLeanVectorFixedGrowable<RenderSubPassAttachment_t, 4, short int> m_colorAttachments __attribute__((__aligned__(8))); /* 32 72 */
	RenderSubPassAttachment_t m_depthStencilAttachment; /* 104 16 */
	CUtlLeanVectorFixedGrowable<RenderSubPassAttachment_t, 2, short int> m_resolveAttachments __attribute__((__aligned__(8))); /* 120 40 */
	CUtlLeanVectorFixedGrowable<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int> m_preserveAttachments __attribute__((__aligned__(8))); /* 160 24 */
	CUtlLeanVectorFixedGrowable<RenderSubPassAttachment_t, 4, short int> m_inputAttachments __attribute__((__aligned__(8))); /* 184 72 */
	/* ../public/rendersystem/renderpass.h:254 */
	void Clear(RenderPassSubPass_t* );
	/* ../public/rendersystem/renderpass.h:264 */
	const char* GetDebugName(const RenderPassSubPass_t* );
	/* ../public/rendersystem/renderpass.h:268 */
	void SetDebugNameV(RenderPassSubPass_t* , const char* , typedef __va_list_tag __va_list_tag* );
	/* ../public/rendersystem/renderpass.h:272 */
	void SetDebugName(RenderPassSubPass_t* , const char* , ...);
	/* ../public/rendersystem/renderpass.h:279 */
	void SetDebugNameString(RenderPassSubPass_t* , const char* );
	/* ../public/rendersystem/renderpass.h:285 */
	bool operator<(const RenderPassSubPass_t* , const RenderPassSubPass_t& );
	void ~RenderPassSubPass_t(RenderPassSubPass_t* );
} __attribute__((__aligned__(8)));

// <00990046> ../public/rendersystem/renderpass.h:216
// member functions: 8
// member variables: 6
// struct size: 256
struct RenderPassSubPass_t {
	/* ../public/rendersystem/renderpass.h:218 */
	void RenderPassSubPass_t(RenderPassSubPass_t* );
	/* ../public/rendersystem/renderpass.h:223 */
	void RenderPassSubPass_t(RenderPassSubPass_t* , const char* , ...);
	char m_szDebugName[32]; /* 0 32 */
	CUtlLeanVectorFixedGrowable<RenderSubPassAttachment_t, 4, short int> m_colorAttachments __attribute__((__aligned__(8))); /* 32 72 */
	RenderSubPassAttachment_t m_depthStencilAttachment; /* 104 16 */
	CUtlLeanVectorFixedGrowable<RenderSubPassAttachment_t, 2, short int> m_resolveAttachments __attribute__((__aligned__(8))); /* 120 40 */
	CUtlLeanVectorFixedGrowable<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int> m_preserveAttachments __attribute__((__aligned__(8))); /* 160 24 */
	CUtlLeanVectorFixedGrowable<RenderSubPassAttachment_t, 4, short int> m_inputAttachments __attribute__((__aligned__(8))); /* 184 72 */
	/* ../public/rendersystem/renderpass.h:254 */
	void Clear(RenderPassSubPass_t* );
	/* ../public/rendersystem/renderpass.h:264 */
	const char* GetDebugName(const RenderPassSubPass_t* );
	/* ../public/rendersystem/renderpass.h:268 */
	void SetDebugNameV(RenderPassSubPass_t* , const char* , typedef __va_list_tag __va_list_tag* );
	/* ../public/rendersystem/renderpass.h:272 */
	void SetDebugName(RenderPassSubPass_t* , const char* , ...);
	/* ../public/rendersystem/renderpass.h:279 */
	void SetDebugNameString(RenderPassSubPass_t* , const char* );
	/* ../public/rendersystem/renderpass.h:285 */
	bool operator<(const RenderPassSubPass_t* , const RenderPassSubPass_t& );
} __attribute__((__aligned__(8)));

// <00AAAE4C> ../public/rendersystem/renderpass.h:216
// member functions: 11
// member variables: 6
// struct size: 256
struct RenderPassSubPass_t {
	/* ../public/rendersystem/renderpass.h:218 */
	void RenderPassSubPass_t(RenderPassSubPass_t* );
	/* ../public/rendersystem/renderpass.h:223 */
	void RenderPassSubPass_t(RenderPassSubPass_t* , const char* , ...);
	char m_szDebugName[32]; /* 0 32 */
	CUtlLeanVectorFixedGrowable<RenderSubPassAttachment_t, 4, short int> m_colorAttachments __attribute__((__aligned__(8))); /* 32 72 */
	RenderSubPassAttachment_t m_depthStencilAttachment; /* 104 16 */
	CUtlLeanVectorFixedGrowable<RenderSubPassAttachment_t, 2, short int> m_resolveAttachments __attribute__((__aligned__(8))); /* 120 40 */
	CUtlLeanVectorFixedGrowable<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int> m_preserveAttachments __attribute__((__aligned__(8))); /* 160 24 */
	CUtlLeanVectorFixedGrowable<RenderSubPassAttachment_t, 4, short int> m_inputAttachments __attribute__((__aligned__(8))); /* 184 72 */
	/* ../public/rendersystem/renderpass.h:254 */
	void Clear(RenderPassSubPass_t* );
	/* ../public/rendersystem/renderpass.h:264 */
	const char* GetDebugName(const RenderPassSubPass_t* );
	/* ../public/rendersystem/renderpass.h:268 */
	void SetDebugNameV(RenderPassSubPass_t* , const char* , typedef __va_list_tag __va_list_tag* );
	/* ../public/rendersystem/renderpass.h:272 */
	void SetDebugName(RenderPassSubPass_t* , const char* , ...);
	/* ../public/rendersystem/renderpass.h:279 */
	void SetDebugNameString(RenderPassSubPass_t* , const char* );
	/* ../public/rendersystem/renderpass.h:285 */
	bool operator<(const RenderPassSubPass_t* , const RenderPassSubPass_t& );
	void RenderPassSubPass_t(RenderPassSubPass_t* , RenderPassSubPass_t& );
	void ~RenderPassSubPass_t(RenderPassSubPass_t* );
	RenderPassSubPass_t& operator=(RenderPassSubPass_t* , const RenderPassSubPass_t& );
} __attribute__((__aligned__(8)));

// <034753AE> ../public/rendersystem/renderpass.h:218
void RenderPassSubPass_t::RenderPassSubPass_t()
{
} /* size: 0 */

// <03475395> ../public/rendersystem/renderpass.h:218
inline void RenderPassSubPass_t::RenderPassSubPass_t()
{
} /* size: 0 */

// <0347536F> ../public/rendersystem/renderpass.h:279
inline void RenderPassSubPass_t::SetDebugNameString(const char* pString)
{
} /* size: 0 */

// <00ADB62A> ../public/rendersystem/renderpass.h:285
// variables: 4
// function calls: 49
void RenderPassSubPass_t::operator<(const RenderPassSubPass_t& rhs)
{
	{
		int32 nAttachment; // 295
		AlignedByteArrayExplicit_t<4, RenderSubPassAttachment_t, 8>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 452
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this,
			int i);  // 442
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this,
				int i);  // 297
		AlignedByteArrayExplicit_t<4, RenderSubPassAttachment_t, 8>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 452
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this,
			int i);  // 442
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this,
				int i);  // 297
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator<(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& rhs);  // 203
		RenderSubPassAttachment_t::operator<(
				const RenderSubPassAttachment_t& rhs);  // 297
	}
	{
		int32 nResolveAttachment; // 316
		AlignedByteArrayExplicit_t<2, RenderSubPassAttachment_t, 8>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>::Base(); // 452
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>, RenderSubPassAtt this,
			int i);  // 442
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>, RenderSubPassAtt this,
				int i);  // 318
		AlignedByteArrayExplicit_t<2, RenderSubPassAttachment_t, 8>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>::Base(); // 452
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>, RenderSubPassAtt this,
			int i);  // 442
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>, RenderSubPassAtt this,
				int i);  // 318
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator<(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& rhs);  // 203
		RenderSubPassAttachment_t::operator<(
				const RenderSubPassAttachment_t& rhs);  // 318
	}
	{
		int32 nPreserveAttachment; // 332
		AlignedByteArrayExplicit_t<2, CWeakHandle<InfoForResourceTypeCTextureBase>, 8>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::Base(); // 452
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int this,
			int i);  // 442
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int this,
				int i);  // 334
		AlignedByteArrayExplicit_t<2, CWeakHandle<InfoForResourceTypeCTextureBase>, 8>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::Base(); // 452
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int this,
			int i);  // 442
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int this,
				int i);  // 334
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator<(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& rhs);  // 334
	}
	{
		int32 nInputAttachment; // 348
		AlignedByteArrayExplicit_t<4, RenderSubPassAttachment_t, 8>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 452
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this,
			int i);  // 442
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this,
				int i);  // 350
		AlignedByteArrayExplicit_t<4, RenderSubPassAttachment_t, 8>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 452
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this,
			int i);  // 442
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this,
				int i);  // 350
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator<(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& rhs);  // 203
		RenderSubPassAttachment_t::operator<(
				const RenderSubPassAttachment_t& rhs);  // 350
	}
	Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this); // 287
	Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this); // 287
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator<(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& rhs);  // 203
	RenderSubPassAttachment_t::operator<(
			const RenderSubPassAttachment_t& rhs);  // 303
	Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>, RenderSubPassAtt this); // 308
	Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>, RenderSubPassAtt this); // 308
	Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int this); // 324
	Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int this); // 324
	Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this); // 340
	Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this); // 340
} /* size: 740, inline expansions: 10 (48 bytes) */

// <0345CBCA> ../public/rendersystem/renderpass.h:364
// member functions: 40
// member variables: 4
// class size: 2,448
class CRenderPassDesc {
	int ()(void) * * _vptr.CRenderPassDesc; /* 0 8 */
	/* ../public/rendersystem/renderpass.h:368 */
	void CRenderPassDesc(CRenderPassDesc* );
	/* ../public/rendersystem/renderpass.h:369 */
	virtual void ~CRenderPassDesc(CRenderPassDesc* );
	/* ../public/rendersystem/renderpass.h:372 */
	void CRenderPassDesc(CRenderPassDesc* , const CRenderPassDesc& );
	/* ../public/rendersystem/renderpass.h:383 */
	void AddAttachment(CRenderPassDesc* , const RenderPassAttachmentDesc_t& );
	/* ../public/rendersystem/renderpass.h:387 */
	RenderPassAttachmentDesc_t* AddAttachmentGetPtr(CRenderPassDesc* );
	/* ../public/rendersystem/renderpass.h:394 */
	int32 AddSubPass(CRenderPassDesc* , const RenderPassSubPass_t& );
	/* ../public/rendersystem/renderpass.h:398 */
	RenderPassSubPass_t* AddSubPassGetPtr(CRenderPassDesc* );
	/* ../public/rendersystem/renderpass.h:404 */
	void AddSubPassDependency(CRenderPassDesc* , const RenderPassSubPassDependency_t& );
	/* ../public/rendersystem/renderpass.h:408 */
	RenderPassSubPassDependency_t* AddSubPassDependencyGetPtr(CRenderPassDesc* );
	/* ../public/rendersystem/renderpass.h:420 */
	int32 NumAttachments(const CRenderPassDesc* );
	/* ../public/rendersystem/renderpass.h:416 */
	typedef struct CUtlLeanVectorFixedGrowable<RenderPassAttachmentDesc_t, 8, short int> RenderPassAttachmentDescList_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/rendersystem/renderpass.h:421 */
	const RenderPassAttachmentDescList_t& GetAttachments(const CRenderPassDesc* );
	/* ../public/rendersystem/renderpass.h:422 */
	RenderPassAttachmentDescList_t& GetAttachmentsNonConst(CRenderPassDesc* );
	/* ../public/rendersystem/renderpass.h:424 */
	int32 NumSubPasses(const CRenderPassDesc* );
	/* ../public/rendersystem/renderpass.h:417 */
	typedef struct CUtlLeanVectorFixedGrowable<RenderPassSubPass_t, 8, short int> RenderPassSubPassList_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/rendersystem/renderpass.h:425 */
	const RenderPassSubPassList_t& GetSubPasses(const CRenderPassDesc* );
	/* ../public/rendersystem/renderpass.h:426 */
	RenderPassSubPassList_t& GetSubPassesNonConst(CRenderPassDesc* );
	/* ../public/rendersystem/renderpass.h:428 */
	int32 NumSubPassDependencies(const CRenderPassDesc* );
	/* ../public/rendersystem/renderpass.h:418 */
	typedef struct CUtlLeanVectorFixedGrowable<RenderPassSubPassDependency_t, 4, short int> RenderPassSubPassDepedencyList_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/rendersystem/renderpass.h:429 */
	const RenderPassSubPassDepedencyList_t& GetSubPassDependencies(const CRenderPassDesc* );
	/* ../public/rendersystem/renderpass.h:430 */
	RenderPassSubPassDepedencyList_t& GetSubPassDependenciesNonConst(CRenderPassDesc* );
	/* ../public/rendersystem/renderpass.h:433 */
	int32 FindAttachment(const CRenderPassDesc* , HRenderTexture);
	/* ../public/rendersystem/renderpass.h:448 */
	void Clear(CRenderPassDesc* );
private:
	RenderPassAttachmentDescList_t m_attachments __attribute__((__aligned__(8))); /* 8 328 */
	RenderPassSubPassList_t m_subPasses __attribute__((__aligned__(8))); /* 336 2056 */
	RenderPassSubPassDepedencyList_t m_subPassDependencies __attribute__((__aligned__(8))); /* 2392 56 */
	void CRenderPassDesc(class CRenderPassDesc *); /* linkage=_ZN15CRenderPassDescC4Ev */
	virtual void ~CRenderPassDesc(class CRenderPassDesc *); /* linkage=_ZN15CRenderPassDescD4Ev */
	void CRenderPassDesc(class CRenderPassDesc *, const class CRenderPassDesc  &); /* linkage=_ZN15CRenderPassDescC4ERKS_ */
	void AddAttachment(class CRenderPassDesc *, const class RenderPassAttachmentDesc_t  &); /* linkage=_ZN15CRenderPassDesc13AddAttachmentERK26RenderPassAttachmentDesc_t */
	class RenderPassAttachmentDesc_t * AddAttachmentGetPtr(class CRenderPassDesc *); /* linkage=_ZN15CRenderPassDesc19AddAttachmentGetPtrEv */
	int32 AddSubPass(class CRenderPassDesc *, const class RenderPassSubPass_t  &); /* linkage=_ZN15CRenderPassDesc10AddSubPassERK19RenderPassSubPass_t */
	class RenderPassSubPass_t * AddSubPassGetPtr(class CRenderPassDesc *); /* linkage=_ZN15CRenderPassDesc16AddSubPassGetPtrEv */
	void AddSubPassDependency(class CRenderPassDesc *, const class RenderPassSubPassDependency_t  &); /* linkage=_ZN15CRenderPassDesc20AddSubPassDependencyERK29RenderPassSubPassDependency_t */
	class RenderPassSubPassDependency_t * AddSubPassDependencyGetPtr(class CRenderPassDesc *); /* linkage=_ZN15CRenderPassDesc26AddSubPassDependencyGetPtrEv */
	int32 NumAttachments(const class CRenderPassDesc  *); /* linkage=_ZNK15CRenderPassDesc14NumAttachmentsEv */
	const RenderPassAttachmentDescList_t  & GetAttachments(const class CRenderPassDesc  *); /* linkage=_ZNK15CRenderPassDesc14GetAttachmentsEv */
	RenderPassAttachmentDescList_t & GetAttachmentsNonConst(class CRenderPassDesc *); /* linkage=_ZN15CRenderPassDesc22GetAttachmentsNonConstEv */
	int32 NumSubPasses(const class CRenderPassDesc  *); /* linkage=_ZNK15CRenderPassDesc12NumSubPassesEv */
	const RenderPassSubPassList_t  & GetSubPasses(const class CRenderPassDesc  *); /* linkage=_ZNK15CRenderPassDesc12GetSubPassesEv */
	RenderPassSubPassList_t & GetSubPassesNonConst(class CRenderPassDesc *); /* linkage=_ZN15CRenderPassDesc20GetSubPassesNonConstEv */
	int32 NumSubPassDependencies(const class CRenderPassDesc  *); /* linkage=_ZNK15CRenderPassDesc22NumSubPassDependenciesEv */
	const RenderPassSubPassDepedencyList_t  & GetSubPassDependencies(const class CRenderPassDesc  *); /* linkage=_ZNK15CRenderPassDesc22GetSubPassDependenciesEv */
	RenderPassSubPassDepedencyList_t & GetSubPassDependenciesNonConst(class CRenderPassDesc *); /* linkage=_ZN15CRenderPassDesc30GetSubPassDependenciesNonConstEv */
	int32 FindAttachment(const class CRenderPassDesc  *, HRenderTexture); /* linkage=_ZNK15CRenderPassDesc14FindAttachmentE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	void Clear(class CRenderPassDesc *); /* linkage=_ZN15CRenderPassDesc5ClearEv */
} __attribute__((__aligned__(8)));

// <00ADB4DB> ../public/rendersystem/renderpass.h:368
void CRenderPassDesc::CRenderPassDesc()
{
} /* size: 0 */

// <00ADB4C2> ../public/rendersystem/renderpass.h:368
inline void CRenderPassDesc::CRenderPassDesc()
{
} /* size: 0 */

// <00ADAB3E> ../public/rendersystem/renderpass.h:369
// function calls: 55
void CRenderPassDesc::~CRenderPassDesc()
{
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>::RemoveAll(); // 191
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>::Base(); // 194
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>::Purge(); // 55
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>::~CUtlLeanVectorFixedGrowableBase(); // 399
	~CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>, RenderPassSubPassD this); // 796
	CUtlLeanVectorFixedGrowable<RenderPassSubPassDependency_t, 4, short int>::~CUtlLeanVectorFixedGrowable(); // 369
	AlignedByteArrayExplicit_t<8, RenderPassSubPass_t, 8>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>::Base(); // 183
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 194
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::RemoveAll(); // 191
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Purge(); // 55
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::~CUtlLeanVectorFixedGrowableBase(); // 399
	~CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAttachmen this); // 796
	CUtlLeanVectorFixedGrowable<RenderSubPassAttachment_t, 4, short int>::~CUtlLeanVectorFixedGrowable(); // 216
	CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::RemoveAll(); // 191
	CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::Base(); // 194
	CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::Purge(); // 55
	CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::~CUtlLeanVectorFixedGrowableBase(); // 399
	~CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>, CWe this); // 796
	CUtlLeanVectorFixedGrowable<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::~CUtlLeanVectorFixedGrowable(); // 216
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>::RemoveAll(); // 191
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>::Base(); // 194
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>::Purge(); // 55
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>::~CUtlLeanVectorFixedGrowableBase(); // 399
	~CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>, RenderSubPassAttachmen this); // 796
	CUtlLeanVectorFixedGrowable<RenderSubPassAttachment_t, 2, short int>::~CUtlLeanVectorFixedGrowable(); // 216
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::RemoveAll(); // 191
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 194
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Purge(); // 55
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::~CUtlLeanVectorFixedGrowableBase(); // 399
	~CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAttachmen this); // 796
	CUtlLeanVectorFixedGrowable<RenderSubPassAttachment_t, 4, short int>::~CUtlLeanVectorFixedGrowable(); // 216
	RenderPassSubPass_t::~RenderPassSubPass_t(); // 1526
	Destruct<RenderPassSubPass_t>(RenderPassSubPass_t* pMemory); // 76
	UtlTraitsDestructRange<RenderPassSubPass_t>(RenderPassSubPass_t* pStart,
							RenderPassSubPass_t* pEnd);  // 184
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>::RemoveAll(); // 191
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>::Base(); // 194
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>::Purge(); // 55
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>::~CUtlLeanVectorFixedGrowableBase(); // 399
	~CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>, RenderPassSubPass_t, short i this); // 796
	CUtlLeanVectorFixedGrowable<RenderPassSubPass_t, 8, short int>::~CUtlLeanVectorFixedGrowable(); // 369
	CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::RemoveAll(); // 191
	CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::Base(); // 194
	CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::Purge(); // 55
	CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::~CUtlLeanVectorFixedGrowableBase(); // 399
	~CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttachmentD this); // 796
	CUtlLeanVectorFixedGrowable<RenderPassAttachmentDesc_t, 8, short int>::~CUtlLeanVectorFixedGrowable(); // 369
} /* size: 538, inline expansions: 55 (3686 bytes) */

// <00ADA175> ../public/rendersystem/renderpass.h:369
// function calls: 56
void CRenderPassDesc::~CRenderPassDesc()
{
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>::RemoveAll(); // 191
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>::Base(); // 194
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>::Purge(); // 55
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>::~CUtlLeanVectorFixedGrowableBase(); // 399
	~CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>, RenderPassSubPassD this); // 796
	CUtlLeanVectorFixedGrowable<RenderPassSubPassDependency_t, 4, short int>::~CUtlLeanVectorFixedGrowable(); // 369
	AlignedByteArrayExplicit_t<8, RenderPassSubPass_t, 8>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>::Base(); // 183
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 194
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::RemoveAll(); // 191
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Purge(); // 55
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::~CUtlLeanVectorFixedGrowableBase(); // 399
	~CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAttachmen this); // 796
	CUtlLeanVectorFixedGrowable<RenderSubPassAttachment_t, 4, short int>::~CUtlLeanVectorFixedGrowable(); // 216
	CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::RemoveAll(); // 191
	CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::Base(); // 194
	CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::Purge(); // 55
	CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::~CUtlLeanVectorFixedGrowableBase(); // 399
	~CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>, CWe this); // 796
	CUtlLeanVectorFixedGrowable<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::~CUtlLeanVectorFixedGrowable(); // 216
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>::RemoveAll(); // 191
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>::Base(); // 194
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>::Purge(); // 55
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>::~CUtlLeanVectorFixedGrowableBase(); // 399
	~CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>, RenderSubPassAttachmen this); // 796
	CUtlLeanVectorFixedGrowable<RenderSubPassAttachment_t, 2, short int>::~CUtlLeanVectorFixedGrowable(); // 216
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::RemoveAll(); // 191
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 194
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Purge(); // 55
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::~CUtlLeanVectorFixedGrowableBase(); // 399
	~CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAttachmen this); // 796
	CUtlLeanVectorFixedGrowable<RenderSubPassAttachment_t, 4, short int>::~CUtlLeanVectorFixedGrowable(); // 216
	RenderPassSubPass_t::~RenderPassSubPass_t(); // 1526
	Destruct<RenderPassSubPass_t>(RenderPassSubPass_t* pMemory); // 76
	UtlTraitsDestructRange<RenderPassSubPass_t>(RenderPassSubPass_t* pStart,
							RenderPassSubPass_t* pEnd);  // 184
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>::RemoveAll(); // 191
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>::Base(); // 194
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>::Purge(); // 55
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>::~CUtlLeanVectorFixedGrowableBase(); // 399
	~CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>, RenderPassSubPass_t, short i this); // 796
	CUtlLeanVectorFixedGrowable<RenderPassSubPass_t, 8, short int>::~CUtlLeanVectorFixedGrowable(); // 369
	CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::RemoveAll(); // 191
	CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::Base(); // 194
	CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::Purge(); // 55
	CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::~CUtlLeanVectorFixedGrowableBase(); // 399
	~CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttachmentD this); // 796
	CUtlLeanVectorFixedGrowable<RenderPassAttachmentDesc_t, 8, short int>::~CUtlLeanVectorFixedGrowable(); // 369
	CRenderPassDesc::~CRenderPassDesc(); // 369
} /* size: 546, inline expansions: 56 (4226 bytes) */

// <00ADA15C> ../public/rendersystem/renderpass.h:369
inline void CRenderPassDesc::~CRenderPassDesc()
{
} /* size: 0 */

// <00AD6611> ../public/rendersystem/renderpass.h:372
// variables: 24
// function calls: 302
void CRenderPassDesc::CRenderPassDesc(const CRenderPassDesc& other)
{
	CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::CUtlLeanVectorFixedGrowableBase(); // 411
	CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttachmentD this); // 799
	CUtlLeanVectorFixedGrowable<RenderPassAttachmentDesc_t, 8, short int>::CUtlLeanVectorFixedGrowable(); // 373
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>::CUtlLeanVectorFixedGrowableBase(); // 411
	CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>, RenderPassSubPassD this); // 799
	CUtlLeanVectorFixedGrowable<RenderPassSubPassDependency_t, 4, short int>::CUtlLeanVectorFixedGrowable(); // 373
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>::CUtlLeanVectorFixedGrowableBase(); // 411
	CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>, RenderPassSubPass_t, short i this); // 799
	CUtlLeanVectorFixedGrowable<RenderPassSubPass_t, 8, short int>::CUtlLeanVectorFixedGrowable(); // 373
	Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttac this); // 374
	AlignedByteArrayExplicit_t<8, RenderPassAttachmentDesc_t, 8>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::Base(); // 374
	{
		ElemType_t* pNew; // 168
		ElemType_t* pBase; // 169
		AlignedByteArrayExplicit_t<8, RenderPassAttachmentDesc_t, 8>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::Base(); // 169
	}
	CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::EnsureCapacity(
			int nCapacity,
			bool bConservative);  // 516
	AlignedByteArrayExplicit_t<8, RenderPassAttachmentDesc_t, 8>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::Base(); // 518
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 44
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 91
	RenderPassAttachmentDesc_t::Clear(); // 45
	RenderPassAttachmentDesc_t::RenderPassAttachmentDesc_t(); // 1479
	Construct<RenderPassAttachmentDesc_t>(RenderPassAttachmentDesc_t* pMemory); // 63
	UtlTraitsConstructRange<RenderPassAttachmentDesc_t>(RenderPassAttachmentDesc_t* pStart,
								RenderPassAttachmentDesc_t* pEnd);  // 523
	SetCount(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttachmentD this,
		int nCount);  // 750
	AlignedByteArrayExplicit_t<8, RenderPassAttachmentDesc_t, 8>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::Base(); // 751
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 41
	RenderPassAttachmentDesc_t::operator=(
			const RenderPassAttachmentDesc_t  &);  // 209
	UtlTraitsCopyRange<RenderPassAttachmentDesc_t>(const RenderPassAttachmentDesc_t* pFrom,
							const RenderPassAttachmentDesc_t* pFromEnd,
							RenderPassAttachmentDesc_t* pTo);  // 200
	UtlTraitsCopyRange<RenderPassAttachmentDesc_t>(const RenderPassAttachmentDesc_t* pFrom,
							const RenderPassAttachmentDesc_t* pFromEnd,
							RenderPassAttachmentDesc_t* pTo);  // 752
	CopyArray(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttachmentD this,
			const ElemType_t* pArray,
			IndexType_t nSize);  // 374
	Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>, RenderPassSubPass_t, s this); // 375
	AlignedByteArrayExplicit_t<8, RenderPassSubPass_t, 8>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>::Base(); // 375
	{
		ElemType_t* pNew; // 168
		ElemType_t* pBase; // 169
		AlignedByteArrayExplicit_t<8, RenderPassSubPass_t, 8>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>::Base(); // 169
	}
	{
		ElemType_t* pNew; // 147
		ElemType_t* pBase; // 148
		AlignedByteArrayExplicit_t<8, RenderPassSubPass_t, 8>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>::Base(); // 148
	}
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>::EnsureCapacity(
			int nCapacity,
			bool bConservative);  // 516
	AlignedByteArrayExplicit_t<8, RenderPassSubPass_t, 8>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>::Base(); // 518
	CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::RemoveAll(); // 191
	CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::Base(); // 194
	CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::Purge(); // 55
	CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::~CUtlLeanVectorFixedGrowableBase(); // 399
	~CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>, CWe this); // 796
	CUtlLeanVectorFixedGrowable<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::~CUtlLeanVectorFixedGrowable(); // 216
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>::RemoveAll(); // 191
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>::Base(); // 194
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>::Purge(); // 55
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>::~CUtlLeanVectorFixedGrowableBase(); // 399
	~CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>, RenderSubPassAttachmen this); // 796
	CUtlLeanVectorFixedGrowable<RenderSubPassAttachment_t, 2, short int>::~CUtlLeanVectorFixedGrowable(); // 216
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::RemoveAll(); // 191
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 194
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Purge(); // 55
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::~CUtlLeanVectorFixedGrowableBase(); // 399
	~CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAttachmen this); // 796
	CUtlLeanVectorFixedGrowable<RenderSubPassAttachment_t, 4, short int>::~CUtlLeanVectorFixedGrowable(); // 216
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::RemoveAll(); // 191
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 194
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Purge(); // 55
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::~CUtlLeanVectorFixedGrowableBase(); // 399
	~CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAttachmen this); // 796
	CUtlLeanVectorFixedGrowable<RenderSubPassAttachment_t, 4, short int>::~CUtlLeanVectorFixedGrowable(); // 216
	RenderPassSubPass_t::~RenderPassSubPass_t(); // 1526
	Destruct<RenderPassSubPass_t>(RenderPassSubPass_t* pMemory); // 76
	UtlTraitsDestructRange<RenderPassSubPass_t>(RenderPassSubPass_t* pStart,
							RenderPassSubPass_t* pEnd);  // 527
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::CUtlLeanVectorFixedGrowableBase(); // 411
	CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAttachmen this); // 799
	CUtlLeanVectorFixedGrowable<RenderSubPassAttachment_t, 4, short int>::CUtlLeanVectorFixedGrowable(); // 219
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 179
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 196
	RenderSubPassAttachment_t::Clear(); // 180
	RenderSubPassAttachment_t::RenderSubPassAttachment_t(); // 219
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>::CUtlLeanVectorFixedGrowableBase(); // 411
	CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>, RenderSubPassAttachmen this); // 799
	CUtlLeanVectorFixedGrowable<RenderSubPassAttachment_t, 2, short int>::CUtlLeanVectorFixedGrowable(); // 219
	CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::CUtlLeanVectorFixedGrowableBase(); // 411
	CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>, CWe this); // 799
	CUtlLeanVectorFixedGrowable<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::CUtlLeanVectorFixedGrowable(); // 219
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::CUtlLeanVectorFixedGrowableBase(); // 411
	CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAttachmen this); // 799
	CUtlLeanVectorFixedGrowable<RenderSubPassAttachment_t, 4, short int>::CUtlLeanVectorFixedGrowable(); // 219
	RenderPassSubPass_t::RenderPassSubPass_t(); // 1479
	Construct<RenderPassSubPass_t>(RenderPassSubPass_t* pMemory); // 63
	UtlTraitsConstructRange<RenderPassSubPass_t>(RenderPassSubPass_t* pStart,
							RenderPassSubPass_t* pEnd);  // 523
	SetCount(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>, RenderPassSubPass_t, short i this,
		int nCount);  // 750
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>::Base(); // 751
	Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this); // 806
	AlignedByteArrayExplicit_t<4, RenderSubPassAttachment_t, 8>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 806
	{
		ElemType_t* pNew; // 168
		ElemType_t* pBase; // 169
		AlignedByteArrayExplicit_t<4, RenderSubPassAttachment_t, 8>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 169
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 176
		RenderSubPassAttachment_t::RenderSubPassAttachment_t(
						RenderSubPassAttachment_t &);  // 1514
		Construct<RenderSubPassAttachment_t, RenderSubPassAttachment_t>(RenderSubPassAttachment_t* pMemory); // 100
		Destruct<RenderSubPassAttachment_t>(RenderSubPassAttachment_t* pMemory); // 101
		UtlTraitsMoveRawMemoryRange<RenderSubPassAttachment_t>(RenderSubPassAttachment_t* pFrom,
									RenderSubPassAttachment_t* pFromEnd,
									RenderSubPassAttachment_t* pTo);  // 170
	}
	{
		ElemType_t* pNew; // 147
		ElemType_t* pBase; // 148
		AlignedByteArrayExplicit_t<4, RenderSubPassAttachment_t, 8>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 148
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 176
		RenderSubPassAttachment_t::RenderSubPassAttachment_t(
						RenderSubPassAttachment_t &);  // 1514
		Construct<RenderSubPassAttachment_t, RenderSubPassAttachment_t>(RenderSubPassAttachment_t* pMemory); // 100
		Destruct<RenderSubPassAttachment_t>(RenderSubPassAttachment_t* pMemory); // 101
		UtlTraitsMoveRawMemoryRange<RenderSubPassAttachment_t>(RenderSubPassAttachment_t* pFrom,
									RenderSubPassAttachment_t* pFromEnd,
									RenderSubPassAttachment_t* pTo);  // 149
	}
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::EnsureCapacity(
			int nCapacity,
			bool bConservative);  // 516
	AlignedByteArrayExplicit_t<4, RenderSubPassAttachment_t, 8>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 518
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 179
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 196
	RenderSubPassAttachment_t::Clear(); // 180
	RenderSubPassAttachment_t::RenderSubPassAttachment_t(); // 1479
	Construct<RenderSubPassAttachment_t>(RenderSubPassAttachment_t* pMemory); // 63
	UtlTraitsConstructRange<RenderSubPassAttachment_t>(RenderSubPassAttachment_t* pStart,
								RenderSubPassAttachment_t* pEnd);  // 523
	SetCount(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAttachmen this,
		int nCount);  // 750
	AlignedByteArrayExplicit_t<4, RenderSubPassAttachment_t, 8>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 751
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 176
	RenderSubPassAttachment_t::operator=(
			const RenderSubPassAttachment_t  &);  // 209
	UtlTraitsCopyRange<RenderSubPassAttachment_t>(const RenderSubPassAttachment_t* pFrom,
							const RenderSubPassAttachment_t* pFromEnd,
							RenderSubPassAttachment_t* pTo);  // 200
	UtlTraitsCopyRange<RenderSubPassAttachment_t>(const RenderSubPassAttachment_t* pFrom,
							const RenderSubPassAttachment_t* pFromEnd,
							RenderSubPassAttachment_t* pTo);  // 752
	CopyArray(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAttachmen this,
			const ElemType_t* pArray,
			IndexType_t nSize);  // 806
	CUtlLeanVectorFixedGrowable<RenderSubPassAttachment_t, 4, short int>::operator=(
			const CUtlLeanVectorFixedGrowable<RenderSubPassAttachment_t, 4, short int>& other);  // 216
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 176
	RenderSubPassAttachment_t::operator=(
			const RenderSubPassAttachment_t  &);  // 216
	Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>, RenderSubPassAtt this); // 806
	AlignedByteArrayExplicit_t<2, RenderSubPassAttachment_t, 8>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>::Base(); // 806
	{
		ElemType_t* pNew; // 168
		ElemType_t* pBase; // 169
		AlignedByteArrayExplicit_t<2, RenderSubPassAttachment_t, 8>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>::Base(); // 169
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 176
		RenderSubPassAttachment_t::RenderSubPassAttachment_t(
						RenderSubPassAttachment_t &);  // 1514
		Construct<RenderSubPassAttachment_t, RenderSubPassAttachment_t>(RenderSubPassAttachment_t* pMemory); // 100
		Destruct<RenderSubPassAttachment_t>(RenderSubPassAttachment_t* pMemory); // 101
		UtlTraitsMoveRawMemoryRange<RenderSubPassAttachment_t>(RenderSubPassAttachment_t* pFrom,
									RenderSubPassAttachment_t* pFromEnd,
									RenderSubPassAttachment_t* pTo);  // 170
	}
	{
		ElemType_t* pNew; // 147
		ElemType_t* pBase; // 148
		AlignedByteArrayExplicit_t<2, RenderSubPassAttachment_t, 8>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>::Base(); // 148
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 176
		RenderSubPassAttachment_t::RenderSubPassAttachment_t(
						RenderSubPassAttachment_t &);  // 1514
		Construct<RenderSubPassAttachment_t, RenderSubPassAttachment_t>(RenderSubPassAttachment_t* pMemory); // 100
		Destruct<RenderSubPassAttachment_t>(RenderSubPassAttachment_t* pMemory); // 101
		UtlTraitsMoveRawMemoryRange<RenderSubPassAttachment_t>(RenderSubPassAttachment_t* pFrom,
									RenderSubPassAttachment_t* pFromEnd,
									RenderSubPassAttachment_t* pTo);  // 149
	}
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>::EnsureCapacity(
			int nCapacity,
			bool bConservative);  // 516
	AlignedByteArrayExplicit_t<2, RenderSubPassAttachment_t, 8>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>::Base(); // 518
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 179
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 196
	RenderSubPassAttachment_t::Clear(); // 180
	RenderSubPassAttachment_t::RenderSubPassAttachment_t(); // 1479
	Construct<RenderSubPassAttachment_t>(RenderSubPassAttachment_t* pMemory); // 63
	UtlTraitsConstructRange<RenderSubPassAttachment_t>(RenderSubPassAttachment_t* pStart,
								RenderSubPassAttachment_t* pEnd);  // 523
	SetCount(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>, RenderSubPassAttachmen this,
		int nCount);  // 750
	AlignedByteArrayExplicit_t<2, RenderSubPassAttachment_t, 8>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>::Base(); // 751
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 176
	RenderSubPassAttachment_t::operator=(
			const RenderSubPassAttachment_t  &);  // 209
	UtlTraitsCopyRange<RenderSubPassAttachment_t>(const RenderSubPassAttachment_t* pFrom,
							const RenderSubPassAttachment_t* pFromEnd,
							RenderSubPassAttachment_t* pTo);  // 200
	UtlTraitsCopyRange<RenderSubPassAttachment_t>(const RenderSubPassAttachment_t* pFrom,
							const RenderSubPassAttachment_t* pFromEnd,
							RenderSubPassAttachment_t* pTo);  // 752
	CopyArray(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>, RenderSubPassAttachmen this,
			const ElemType_t* pArray,
			IndexType_t nSize);  // 806
	CUtlLeanVectorFixedGrowable<RenderSubPassAttachment_t, 2, short int>::operator=(
			const CUtlLeanVectorFixedGrowable<RenderSubPassAttachment_t, 2, short int>& other);  // 216
	Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int this); // 806
	AlignedByteArrayExplicit_t<2, CWeakHandle<InfoForResourceTypeCTextureBase>, 8>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::Base(); // 806
	{
		ElemType_t* pNew; // 168
		ElemType_t* pBase; // 169
		AlignedByteArrayExplicit_t<2, CWeakHandle<InfoForResourceTypeCTextureBase>, 8>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::Base(); // 169
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1514
		Construct<CWeakHandle<InfoForResourceTypeCTextureBase>, CWeakHandle<InfoForResourceTypeCTextureBase> >(CWeakHandle<InfoForResourceTypeCTextureBase>* pMemory); // 100
		Destruct<CWeakHandle<InfoForResourceTypeCTextureBase> >(CWeakHandle<InfoForResourceTypeCTextureBase>* pMemory); // 101
		UtlTraitsMoveRawMemoryRange<CWeakHandle<InfoForResourceTypeCTextureBase> >(CWeakHandle<InfoForResourceTypeCTextureBase>* pFrom,
												CWeakHandle<InfoForResourceTypeCTextureBase>* pFromEnd,
												CWeakHandle<InfoForResourceTypeCTextureBase>* pTo);  // 170
	}
	{
		ElemType_t* pNew; // 147
		ElemType_t* pBase; // 148
		AlignedByteArrayExplicit_t<2, CWeakHandle<InfoForResourceTypeCTextureBase>, 8>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::Base(); // 148
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1514
		Construct<CWeakHandle<InfoForResourceTypeCTextureBase>, CWeakHandle<InfoForResourceTypeCTextureBase> >(CWeakHandle<InfoForResourceTypeCTextureBase>* pMemory); // 100
		Destruct<CWeakHandle<InfoForResourceTypeCTextureBase> >(CWeakHandle<InfoForResourceTypeCTextureBase>* pMemory); // 101
		UtlTraitsMoveRawMemoryRange<CWeakHandle<InfoForResourceTypeCTextureBase> >(CWeakHandle<InfoForResourceTypeCTextureBase>* pFrom,
												CWeakHandle<InfoForResourceTypeCTextureBase>* pFromEnd,
												CWeakHandle<InfoForResourceTypeCTextureBase>* pTo);  // 149
	}
	CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::EnsureCapacity(
			int nCapacity,
			bool bConservative);  // 516
	AlignedByteArrayExplicit_t<2, CWeakHandle<InfoForResourceTypeCTextureBase>, 8>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::Base(); // 518
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 1479
	Construct<CWeakHandle<InfoForResourceTypeCTextureBase> >(CWeakHandle<InfoForResourceTypeCTextureBase>* pMemory); // 63
	UtlTraitsConstructRange<CWeakHandle<InfoForResourceTypeCTextureBase> >(CWeakHandle<InfoForResourceTypeCTextureBase>* pStart,
										CWeakHandle<InfoForResourceTypeCTextureBase>* pEnd);  // 523
	SetCount(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>, CWe this,
		int nCount);  // 750
	AlignedByteArrayExplicit_t<2, CWeakHandle<InfoForResourceTypeCTextureBase>, 8>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::Base(); // 751
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 209
	UtlTraitsCopyRange<CWeakHandle<InfoForResourceTypeCTextureBase> >(const CWeakHandle<InfoForResourceTypeCTextureBase>* pFrom,
										const CWeakHandle<InfoForResourceTypeCTextureBase>* pFromEnd,
										CWeakHandle<InfoForResourceTypeCTextureBase>* pTo);  // 200
	UtlTraitsCopyRange<CWeakHandle<InfoForResourceTypeCTextureBase> >(const CWeakHandle<InfoForResourceTypeCTextureBase>* pFrom,
										const CWeakHandle<InfoForResourceTypeCTextureBase>* pFromEnd,
										CWeakHandle<InfoForResourceTypeCTextureBase>* pTo);  // 752
	CopyArray(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>, CWe this,
			const ElemType_t* pArray,
			IndexType_t nSize);  // 806
	CUtlLeanVectorFixedGrowable<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::operator=(
			const CUtlLeanVectorFixedGrowable<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>& other);  // 216
	Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAtt this); // 806
	AlignedByteArrayExplicit_t<4, RenderSubPassAttachment_t, 8>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 806
	{
		ElemType_t* pNew; // 168
		ElemType_t* pBase; // 169
		CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 169
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 176
		RenderSubPassAttachment_t::RenderSubPassAttachment_t(
						RenderSubPassAttachment_t &);  // 1514
		Construct<RenderSubPassAttachment_t, RenderSubPassAttachment_t>(RenderSubPassAttachment_t* pMemory); // 100
		Destruct<RenderSubPassAttachment_t>(RenderSubPassAttachment_t* pMemory); // 101
		UtlTraitsMoveRawMemoryRange<RenderSubPassAttachment_t>(RenderSubPassAttachment_t* pFrom,
									RenderSubPassAttachment_t* pFromEnd,
									RenderSubPassAttachment_t* pTo);  // 170
	}
	{
		ElemType_t* pNew; // 147
		ElemType_t* pBase; // 148
		CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 148
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 176
		RenderSubPassAttachment_t::RenderSubPassAttachment_t(
						RenderSubPassAttachment_t &);  // 1514
		Construct<RenderSubPassAttachment_t, RenderSubPassAttachment_t>(RenderSubPassAttachment_t* pMemory); // 100
		Destruct<RenderSubPassAttachment_t>(RenderSubPassAttachment_t* pMemory); // 101
		UtlTraitsMoveRawMemoryRange<RenderSubPassAttachment_t>(RenderSubPassAttachment_t* pFrom,
									RenderSubPassAttachment_t* pFromEnd,
									RenderSubPassAttachment_t* pTo);  // 149
	}
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::EnsureCapacity(
			int nCapacity,
			bool bConservative);  // 516
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 518
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 179
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 196
	RenderSubPassAttachment_t::Clear(); // 180
	RenderSubPassAttachment_t::RenderSubPassAttachment_t(); // 1479
	Construct<RenderSubPassAttachment_t>(RenderSubPassAttachment_t* pMemory); // 63
	UtlTraitsConstructRange<RenderSubPassAttachment_t>(RenderSubPassAttachment_t* pStart,
								RenderSubPassAttachment_t* pEnd);  // 523
	SetCount(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAttachmen this,
		int nCount);  // 750
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 751
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 176
	RenderSubPassAttachment_t::operator=(
			const RenderSubPassAttachment_t  &);  // 209
	UtlTraitsCopyRange<RenderSubPassAttachment_t>(const RenderSubPassAttachment_t* pFrom,
							const RenderSubPassAttachment_t* pFromEnd,
							RenderSubPassAttachment_t* pTo);  // 200
	UtlTraitsCopyRange<RenderSubPassAttachment_t>(const RenderSubPassAttachment_t* pFrom,
							const RenderSubPassAttachment_t* pFromEnd,
							RenderSubPassAttachment_t* pTo);  // 752
	CopyArray(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAttachmen this,
			const ElemType_t* pArray,
			IndexType_t nSize);  // 806
	CUtlLeanVectorFixedGrowable<RenderSubPassAttachment_t, 4, short int>::operator=(
			const CUtlLeanVectorFixedGrowable<RenderSubPassAttachment_t, 4, short int>& other);  // 216
	RenderPassSubPass_t::operator=(
			const RenderPassSubPass_t  &);  // 209
	UtlTraitsCopyRange<RenderPassSubPass_t>(const RenderPassSubPass_t* pFrom,
						const RenderPassSubPass_t* pFromEnd,
						RenderPassSubPass_t* pTo);  // 200
	UtlTraitsCopyRange<RenderPassSubPass_t>(const RenderPassSubPass_t* pFrom,
						const RenderPassSubPass_t* pFromEnd,
						RenderPassSubPass_t* pTo);  // 752
	CopyArray(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>, RenderPassSubPass_t, short i this,
			const ElemType_t* pArray,
			IndexType_t nSize);  // 375
	Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>, RenderPassSu this); // 376
	AlignedByteArrayExplicit_t<4, RenderPassSubPassDependency_t, 4>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>::Base(); // 376
	{
		ElemType_t* pNew; // 168
		ElemType_t* pBase; // 169
		AlignedByteArrayExplicit_t<4, RenderPassSubPassDependency_t, 4>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>::Base(); // 169
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 85
		V_memcpy(void* dest,
			const void* src,
			ptrdiff_t count);  // 91
		UtlTraitsMoveRawMemoryRange<RenderPassSubPassDependency_t>(RenderPassSubPassDependency_t* pFrom,
										RenderPassSubPassDependency_t* pFromEnd,
										RenderPassSubPassDependency_t* pTo);  // 170
	}
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>::EnsureCapacity(
			int nCapacity,
			bool bConservative);  // 516
	AlignedByteArrayExplicit_t<4, RenderPassSubPassDependency_t, 4>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>::Base(); // 518
	RenderPassSubPassDependency_t::Clear(); // 129
	RenderPassSubPassDependency_t::RenderPassSubPassDependency_t(); // 1479
	Construct<RenderPassSubPassDependency_t>(RenderPassSubPassDependency_t* pMemory); // 63
	UtlTraitsConstructRange<RenderPassSubPassDependency_t>(RenderPassSubPassDependency_t* pStart,
								RenderPassSubPassDependency_t* pEnd);  // 523
	SetCount(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>, RenderPassSubPassD this,
		int nCount);  // 750
	AlignedByteArrayExplicit_t<4, RenderPassSubPassDependency_t, 4>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>::Base(); // 751
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<RenderPassSubPassDependency_t>(const RenderPassSubPassDependency_t* pFrom,
								const RenderPassSubPassDependency_t* pFromEnd,
								RenderPassSubPassDependency_t* pTo);  // 173
	UtlTraitsCopyRange<RenderPassSubPassDependency_t>(const RenderPassSubPassDependency_t* pFrom,
								const RenderPassSubPassDependency_t* pFromEnd,
								RenderPassSubPassDependency_t* pTo);  // 752
	CopyArray(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>, RenderPassSubPassD this,
			const ElemType_t* pArray,
			IndexType_t nSize);  // 376
} /* size: 6754, inline expansions: 219 (39932 bytes) */

// <00AD65EB> ../public/rendersystem/renderpass.h:372
inline void CRenderPassDesc::CRenderPassDesc(const CRenderPassDesc& other)
{
} /* size: 0 */

// <03475356> ../public/rendersystem/renderpass.h:387
inline void CRenderPassDesc::AddAttachmentGetPtr()
{
} /* size: 0 */

// <0347533D> ../public/rendersystem/renderpass.h:398
inline void CRenderPassDesc::AddSubPassGetPtr()
{
} /* size: 0 */

// <03475324> ../public/rendersystem/renderpass.h:408
inline void CRenderPassDesc::AddSubPassDependencyGetPtr()
{
} /* size: 0 */

// <0347530B> ../public/rendersystem/renderpass.h:420
inline void CRenderPassDesc::NumAttachments()
{
} /* size: 0 */

// <00AD65B9> ../public/rendersystem/renderpass.h:421
inline void CRenderPassDesc::GetAttachments()
{
} /* size: 0 */

// <034752F2> ../public/rendersystem/renderpass.h:422
inline void CRenderPassDesc::GetAttachmentsNonConst()
{
} /* size: 0 */

// <00AD65A0> ../public/rendersystem/renderpass.h:424
inline void CRenderPassDesc::NumSubPasses()
{
} /* size: 0 */

// <00AD6587> ../public/rendersystem/renderpass.h:425
inline void CRenderPassDesc::GetSubPasses()
{
} /* size: 0 */

// <00AD656E> ../public/rendersystem/renderpass.h:428
inline void CRenderPassDesc::NumSubPassDependencies()
{
} /* size: 0 */

// <00AD6555> ../public/rendersystem/renderpass.h:429
inline void CRenderPassDesc::GetSubPassDependencies()
{
} /* size: 0 */

// <034752BD> ../public/rendersystem/renderpass.h:433
// variable: 1
inline void CRenderPassDesc::FindAttachment(HRenderTexture hTexture)
{
	{
		int nIndex; // 435
	}
} /* size: 0 */

// <001A534A> ../public/rendersystem/renderpass.h:448
inline void CRenderPassDesc::Clear()
{
} /* size: 0 */

