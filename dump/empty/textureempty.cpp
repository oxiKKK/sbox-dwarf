
//
// empty/textureempty.cpp
//
//	referenced by: librendersystemempty.so
//
//	functions: 21
//

// <00419741> empty/textureempty.cpp:23
void CTextureEmpty::CTextureEmpty()
{
} /* size: 0 */

// <00419573> empty/textureempty.cpp:31
// function call: 1
void CTextureManagerEmpty::CTextureManagerEmpty()
{
	{
		{
		}
	}
	{
		CTextureEmpty::CTextureEmpty(); // 31
		{
		}
	}
} /* size: 0 */

// <00419535> empty/textureempty.cpp:31
// variables: 2
void CTextureManagerEmpty::CTextureManagerEmpty()
{
	const char   __FUNCTION__; // 59007
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 33
	}
} /* size: 0, variables: 1 */

// <004194B6> empty/textureempty.cpp:38
// function call: 1
void CTextureManagerEmpty::~CTextureManagerEmpty()
{
	CTextureEmpty::~CTextureEmpty(); // 41
} /* size: 97, inline expansions: 1 (26 bytes) */

// <004193F5> empty/textureempty.cpp:38
// function calls: 2
void CTextureManagerEmpty::~CTextureManagerEmpty()
{
	CTextureEmpty::~CTextureEmpty(); // 41
	CTextureManagerEmpty::~CTextureManagerEmpty(); // 41
} /* size: 110, inline expansions: 2 (102 bytes) */

// <004193DC> empty/textureempty.cpp:38
void CTextureManagerEmpty::~CTextureManagerEmpty()
{
} /* size: 0 */

// <00419352> empty/textureempty.cpp:48
void CTextureManagerEmpty::Init(IResourceSystemUtils* pUtils)
{
} /* size: 55 */

// <00419308> empty/textureempty.cpp:61
void CTextureManagerEmpty::Shutdown()
{
} /* size: 9 */

// <0041924C> empty/textureempty.cpp:66
// function calls: 2
void CTextureManagerEmpty::InstallResourceType()
{
	ResourceTypeName(void); // 673
	IResourceSystem::InstallTypeManager<2019914870>(
					IResourceTypeManager* pTypeManager,
					const char* pErrorManifestName);  // 68
} /* size: 41, inline expansions: 2 (24 bytes) */

// <00419EAF> empty/textureempty.cpp:75
// function call: 1
void CTextureManagerEmpty::GenerateTextureObject(TextureObjectInfo_t* pInfo, const TextureSpecification_t& texSpec, const void* pTextureBits, int nDataSize, IMemoryMappedFile* pMemoryMappedFile, TextureBitsMemoryType_t nMemory)
{
	{
	}
	CTextureManagerEmpty::GenerateTextureObject(
				TextureObjectInfo_t* pInfo,
				const TextureSpecification_t& texSpec,
				const void* pTextureBits,
				int nDataSize,
				IMemoryMappedFile* pMemoryMappedFile,
				TextureBitsMemoryType_t nMemory);  // 75
} /* size: 0, inline expansions: 1 (26 bytes) */

// <004191C6> empty/textureempty.cpp:75
// variables: 2
void CTextureManagerEmpty::GenerateTextureObject(TextureObjectInfo_t* pInfo, const TextureSpecification_t& texSpec, const void* pTextureBits, int nDataSize, IMemoryMappedFile* pMemoryMappedFile, TextureBitsMemoryType_t nMemory)
{
	const char   __FUNCTION__; // 59028
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 77
	}
} /* size: 0, variables: 1 */

// <00419195> empty/textureempty.cpp:81
void CTextureManagerEmpty::HookUpTextureObject(CTextureBase* pTextureBase, const TextureObjectInfo_t& textureObject)
{
} /* size: 0 */

// <004190A9> empty/textureempty.cpp:88
// function calls: 4
void CTextureManagerEmpty::FindOrCreateExternalTexture(const char* pResourceName, SharedResourceHandle_t hSharedTexture)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 90
} /* size: 15, inline expansions: 4 (21 bytes) */

// <0041905E> empty/textureempty.cpp:97
void CTextureManagerEmpty::UpdateExternalTexture(HRenderTexture hTexture, SharedResourceHandle_t hSharedTexture)
{
} /* size: 7 */

// <00419022> empty/textureempty.cpp:106
void CTextureManagerEmpty::SupportsTextureDimension(RenderTextureDimension_t nDim)
{
} /* size: 7 */

// <00418F92> empty/textureempty.cpp:112
// function call: 1
void CTextureManagerEmpty::NewTexture()
{
	CTextureEmpty::CTextureEmpty(); // 114
} /* size: 50, inline expansions: 1 (26 bytes) */

// <00418EEF> empty/textureempty.cpp:117
void CTextureManagerEmpty::AllocateResource(ResourceHandle_t hResource, ResourceId_t nId, const ResourceFileHeader_t* pHeader, IRD_RegisterResourceDataUtils* pUtils)
{
} /* size: 23 */

// <00418EA5> empty/textureempty.cpp:123
void CTextureManagerEmpty::DeallocateResource(void* pResourceData, IResourceDeallocatorUtils* pDealloc)
{
} /* size: 5 */

// <00418E31> empty/textureempty.cpp:128
void CTextureManagerEmpty::ComputeTextureObject(TextureObjectInfo_t* pInfo, const TextureSpecification_t* pResourceSpec, const void* pTextureBitsData, int nTextureBitsSize, bool bImmutable)
{
} /* size: 5 */

// <00418DF5> empty/textureempty.cpp:132
void CTextureManagerEmpty::DestroyTextureObject(TextureObjectInfo_t& info)
{
} /* size: 5 */

// <00418DB8> empty/textureempty.cpp:136
void CTextureManagerEmpty::IsSwapChain(HRenderTexture hTexture)
{
} /* size: 7 */

