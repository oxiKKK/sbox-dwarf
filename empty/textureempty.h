
//
// empty/textureempty.h
//
//	referenced by: librendersystemempty.so
//
//	functions: 13
//	classes: 2
//

// <004196DE> empty/textureempty.h:13
void CTextureEmpty::~CTextureEmpty()
{
} /* size: 19 */

// <00419653> empty/textureempty.h:13
// function call: 1
void CTextureEmpty::~CTextureEmpty()
{
	CTextureEmpty::~CTextureEmpty(); // 13
} /* size: 46, inline expansions: 1 (19 bytes) */

// <00419636> empty/textureempty.h:13
inline void CTextureEmpty::~CTextureEmpty()
{
} /* size: 0 */

// <00417B40> empty/textureempty.h:13
// member functions: 16
// member variable: 1
// vtable entries: 4
// class size: 16
class CTextureEmpty : public CTextureBase {
public:
	/* class CTextureBase <ancestor>; */ /* 0 0 */
	void CTextureEmpty(CTextureEmpty* , CTextureEmpty& );
	void CTextureEmpty(CTextureEmpty* , const CTextureEmpty& );
	/* empty/textureempty.cpp:23 */
	void CTextureEmpty(CTextureEmpty* );
	/* empty/textureempty.h:20 */
	virtual void AssignTextureObject(CTextureEmpty* , const TextureObjectInfo_t& , bool, uint32, CRenderContextBase* );
	/* empty/textureempty.h:21 */
	virtual void AssignStandin(CTextureEmpty* , CTextureBase* , TextureStandinType_t, CRenderContextBase* );
	/* empty/textureempty.h:22 */
	virtual void AssignFallbackTexture(CTextureEmpty* , CRenderContextBase* );
	/* empty/textureempty.h:23 */
	virtual void AssignDebugName(CTextureEmpty* , const CResourceName& );
	virtual void ~CTextureEmpty(CTextureEmpty* );
	void CTextureEmpty(class CTextureEmpty *, class CTextureEmpty &); /* linkage=_ZN13CTextureEmptyC4EOS_ */
	void CTextureEmpty(class CTextureEmpty *, const class CTextureEmpty  &); /* linkage=_ZN13CTextureEmptyC4ERKS_ */
	void CTextureEmpty(class CTextureEmpty *); /* linkage=_ZN13CTextureEmptyC4Ev */
	virtual void AssignTextureObject(class CTextureEmpty *, const class TextureObjectInfo_t  &, bool, uint32, class CRenderContextBase *); /* linkage=_ZN13CTextureEmpty19AssignTextureObjectERK19TextureObjectInfo_tbjP18CRenderContextBase */
	virtual void AssignStandin(class CTextureEmpty *, class CTextureBase *, enum TextureStandinType_t, class CRenderContextBase *); /* linkage=_ZN13CTextureEmpty13AssignStandinEP12CTextureBase20TextureStandinType_tP18CRenderContextBase */
	virtual void AssignFallbackTexture(class CTextureEmpty *, class CRenderContextBase *); /* linkage=_ZN13CTextureEmpty21AssignFallbackTextureEP18CRenderContextBase */
	virtual void AssignDebugName(class CTextureEmpty *, const class CResourceName  &); /* linkage=_ZN13CTextureEmpty15AssignDebugNameERK13CResourceName */
	virtual void ~CTextureEmpty(class CTextureEmpty *); /* linkage=_ZN13CTextureEmptyD4Ev */
};

// <00419940> empty/textureempty.h:20
void CTextureEmpty::AssignTextureObject(const TextureObjectInfo_t& textureObject, bool bImmutable, uint32 nOverrideSwapchainFormat, CRenderContextBase* pRenderContext)
{
} /* size: 5 */

// <004198E8> empty/textureempty.h:21
void CTextureEmpty::AssignStandin(CTextureBase* pStandinTexture, TextureStandinType_t nType, CRenderContextBase* pRenderContext)
{
} /* size: 5 */

// <004198AC> empty/textureempty.h:22
void CTextureEmpty::AssignFallbackTexture(CRenderContextBase* pRenderContext)
{
} /* size: 5 */

// <00419870> empty/textureempty.h:23
void CTextureEmpty::AssignDebugName(const CResourceName& debugName)
{
} /* size: 5 */

// <0041763C> empty/textureempty.h:31
// member functions: 44
// member variables: 2
// vtable entries: 18
// class size: 17,216
class CTextureManagerEmpty : public CTextureManagerBase {
public:
	/* class CTextureManagerBase <ancestor>; */ /* 0 0 */
	void CTextureManagerEmpty(CTextureManagerEmpty* , const CTextureManagerEmpty& );
	/* empty/textureempty.cpp:48 */
	virtual bool Init(CTextureManagerEmpty* , IResourceSystemUtils* );
	/* empty/textureempty.cpp:61 */
	virtual void Shutdown(CTextureManagerEmpty* );
	/* empty/textureempty.cpp:112 */
	virtual CTextureBase* NewTexture(const CTextureManagerEmpty* );
	/* empty/textureempty.cpp:117 */
	virtual void AllocateResource(CTextureManagerEmpty* , ResourceHandle_t, ResourceId_t, const ResourceFileHeader_t* , IRD_RegisterResourceDataUtils* );
	/* empty/textureempty.cpp:123 */
	virtual void DeallocateResource(CTextureManagerEmpty* , void* , IResourceDeallocatorUtils* );
	/* empty/textureempty.h:46 */
	virtual bool IsStreamingDataAlreadyLoaded(CTextureManagerEmpty* , ResourceHandle_t);
	/* empty/textureempty.h:47 */
	virtual void LoadStreamingData(CTextureManagerEmpty* , ResourceHandle_t, IResourceSystemUtils* );
	/* empty/textureempty.h:48 */
	virtual bool UsesData(const CTextureManagerEmpty* );
	/* empty/textureempty.h:49 */
	virtual void* GetEmpty(CTextureManagerEmpty* );
	/* empty/textureempty.cpp:66 */
	virtual void InstallResourceType(CTextureManagerEmpty* );
	/* empty/textureempty.cpp:75 */
	virtual bool GenerateTextureObject(CTextureManagerEmpty* , TextureObjectInfo_t* , const TextureSpecification_t& , const void* , int, IMemoryMappedFile* , TextureBitsMemoryType_t);
	/* empty/textureempty.cpp:81 */
	virtual void HookUpTextureObject(CTextureManagerEmpty* , CTextureBase* , const TextureObjectInfo_t& );
	/* empty/textureempty.cpp:88 */
	virtual HRenderTexture FindOrCreateExternalTexture(CTextureManagerEmpty* , const char* , SharedResourceHandle_t);
	/* empty/textureempty.cpp:97 */
	virtual bool UpdateExternalTexture(CTextureManagerEmpty* , HRenderTexture, SharedResourceHandle_t);
	/* empty/textureempty.cpp:132 */
	virtual void DestroyTextureObject(CTextureManagerEmpty* , TextureObjectInfo_t& );
	/* empty/textureempty.cpp:128 */
	virtual void ComputeTextureObject(CTextureManagerEmpty* , TextureObjectInfo_t* , const TextureSpecification_t* , const void* , int, bool);
	/* empty/textureempty.cpp:106 */
	virtual bool SupportsTextureDimension(const CTextureManagerEmpty* , RenderTextureDimension_t);
	/* empty/textureempty.cpp:31 */
	void CTextureManagerEmpty(CTextureManagerEmpty* );
	/* empty/textureempty.cpp:38 */
	virtual void ~CTextureManagerEmpty(CTextureManagerEmpty* );
	/* empty/textureempty.h:66 */
	bool IsSurfaceOnly(const CTextureManagerEmpty* , HRenderTexture);
	/* empty/textureempty.cpp:136 */
	virtual bool IsSwapChain(const CTextureManagerEmpty* , HRenderTexture);
private:
	CTextureEmpty m_emptyTexture; /* 17200 16 */
	void CTextureManagerEmpty(class CTextureManagerEmpty *, const class CTextureManagerEmpty  &); /* linkage=_ZN20CTextureManagerEmptyC4ERKS_ */
	virtual bool Init(class CTextureManagerEmpty *, class IResourceSystemUtils *); /* linkage=_ZN20CTextureManagerEmpty4InitEP20IResourceSystemUtils */
	virtual void Shutdown(class CTextureManagerEmpty *); /* linkage=_ZN20CTextureManagerEmpty8ShutdownEv */
	virtual class CTextureBase * NewTexture(const class CTextureManagerEmpty  *); /* linkage=_ZNK20CTextureManagerEmpty10NewTextureEv */
	virtual void AllocateResource(class CTextureManagerEmpty *, ResourceHandle_t, class ResourceId_t, const class ResourceFileHeader_t  *, class IRD_RegisterResourceDataUtils *); /* linkage=_ZN20CTextureManagerEmpty16AllocateResourceEPK21ResourceBindingBase_t12ResourceId_tPK20ResourceFileHeader_tP29IRD_RegisterResourceDataUtils */
	virtual void DeallocateResource(class CTextureManagerEmpty *, void *, class IResourceDeallocatorUtils *); /* linkage=_ZN20CTextureManagerEmpty18DeallocateResourceEPvP25IResourceDeallocatorUtils */
	virtual bool IsStreamingDataAlreadyLoaded(class CTextureManagerEmpty *, ResourceHandle_t); /* linkage=_ZN20CTextureManagerEmpty28IsStreamingDataAlreadyLoadedEPK21ResourceBindingBase_t */
	virtual void LoadStreamingData(class CTextureManagerEmpty *, ResourceHandle_t, class IResourceSystemUtils *); /* linkage=_ZN20CTextureManagerEmpty17LoadStreamingDataEPK21ResourceBindingBase_tP20IResourceSystemUtils */
	virtual bool UsesData(const class CTextureManagerEmpty  *); /* linkage=_ZNK20CTextureManagerEmpty8UsesDataEv */
	virtual void * GetEmpty(class CTextureManagerEmpty *); /* linkage=_ZN20CTextureManagerEmpty8GetEmptyEv */
	virtual void InstallResourceType(class CTextureManagerEmpty *); /* linkage=_ZN20CTextureManagerEmpty19InstallResourceTypeEv */
	/* <419eaf> empty/textureempty.cpp:75 */
	virtual bool GenerateTextureObject(class CTextureManagerEmpty *, class TextureObjectInfo_t *, const class TextureSpecification_t  &, const void  *, int, class IMemoryMappedFile *, enum TextureBitsMemoryType_t); /* linkage=_ZN20CTextureManagerEmpty21GenerateTextureObjectEP19TextureObjectInfo_tRK22TextureSpecification_tPKviP17IMemoryMappedFile23TextureBitsMemoryType_t */
	virtual void HookUpTextureObject(class CTextureManagerEmpty *, class CTextureBase *, const class TextureObjectInfo_t  &); /* linkage=_ZN20CTextureManagerEmpty19HookUpTextureObjectEP12CTextureBaseRK19TextureObjectInfo_t */
	virtual HRenderTexture FindOrCreateExternalTexture(class CTextureManagerEmpty *, const char  *, SharedResourceHandle_t); /* linkage=_ZN20CTextureManagerEmpty27FindOrCreateExternalTextureEPKcy */
	virtual bool UpdateExternalTexture(class CTextureManagerEmpty *, HRenderTexture, SharedResourceHandle_t); /* linkage=_ZN20CTextureManagerEmpty21UpdateExternalTextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseEy */
	virtual void DestroyTextureObject(class CTextureManagerEmpty *, class TextureObjectInfo_t &); /* linkage=_ZN20CTextureManagerEmpty20DestroyTextureObjectER19TextureObjectInfo_t */
	virtual void ComputeTextureObject(class CTextureManagerEmpty *, class TextureObjectInfo_t *, const class TextureSpecification_t  *, const void  *, int, bool); /* linkage=_ZN20CTextureManagerEmpty20ComputeTextureObjectEP19TextureObjectInfo_tPK22TextureSpecification_tPKvib */
	virtual bool SupportsTextureDimension(const class CTextureManagerEmpty  *, enum RenderTextureDimension_t); /* linkage=_ZNK20CTextureManagerEmpty24SupportsTextureDimensionE24RenderTextureDimension_t */
	void CTextureManagerEmpty(class CTextureManagerEmpty *); /* linkage=_ZN20CTextureManagerEmptyC4Ev */
	virtual void ~CTextureManagerEmpty(class CTextureManagerEmpty *); /* linkage=_ZN20CTextureManagerEmptyD4Ev */
	bool IsSurfaceOnly(const class CTextureManagerEmpty  *, HRenderTexture); /* linkage=_ZNK20CTextureManagerEmpty13IsSurfaceOnlyE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual bool IsSwapChain(const class CTextureManagerEmpty  *, HRenderTexture); /* linkage=_ZNK20CTextureManagerEmpty11IsSwapChainE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
} __attribute__((__aligned__(8)));

// <00419834> empty/textureempty.h:46
void CTextureManagerEmpty::IsStreamingDataAlreadyLoaded(ResourceHandle_t hResource)
{
} /* size: 10 */

// <004197EA> empty/textureempty.h:47
void CTextureManagerEmpty::LoadStreamingData(ResourceHandle_t hResource, IResourceSystemUtils* pUtils)
{
} /* size: 5 */

// <004197BC> empty/textureempty.h:48
void CTextureManagerEmpty::UsesData()
{
} /* size: 10 */

// <00419789> empty/textureempty.h:49
void* CTextureManagerEmpty::GetEmpty()
{
} /* size: 12 */

// <003E5B02> empty/textureempty.h:63
void CTextureManagerEmpty::CTextureManagerEmpty()
{
} /* size: 0 */

// <003E5AE6> empty/textureempty.h:64
void CTextureManagerEmpty::~CTextureManagerEmpty()
{
} /* size: 0 */

