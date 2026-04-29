
//
// materialsystem2/shader_type_manager.cpp
//
//	referenced by: libmaterialsystem2.so
//
//	functions: 12
//

// <0039FFE5> materialsystem2/shader_type_manager.cpp:9
// variables: 2
// function call: 1
ResourceManifestDesc_t* InitManifestDesc<ShaderError::CTemplateArg>(CTemplateArg& def)
{
	ResourceManifestDesc_t s_Manifest; // 9
	ManifestEntryGroupList_t s_pManifestEntries; // 9
	ResourceManifestEntry_t::ResourceManifestEntry_t(
				const char* pResourceName,
				bool bResourceNameIsManifestName,
				CStrongHandleVoid* pHandle);  // 11
} /* size: 170, variables: 2, inline expansions: 1 (50 bytes) */

// <0039FFCB> materialsystem2/shader_type_manager.cpp:16
void GetManualResourceManifest(void)
{
} /* size: 12 */

// <0039FF38> materialsystem2/shader_type_manager.cpp:21
// function call: 1
void CShaderTypeManager::CShaderTypeManager()
{
	IResourceTypeManager::IResourceTypeManager(); // 21
} /* size: 15, inline expansions: 1 (0 bytes) */

// <0039FF1F> materialsystem2/shader_type_manager.cpp:21
void CShaderTypeManager::CShaderTypeManager()
{
} /* size: 0 */

// <0039FE4B> materialsystem2/shader_type_manager.cpp:25
// function calls: 2
void CShaderTypeManager::InstallResourceType()
{
	ResourceTypeName(void); // 673
	IResourceSystem::InstallTypeManager<125779801368691>(
						IResourceTypeManager* pTypeManager,
						const char* pErrorManifestName);  // 27
} /* size: 50, inline expansions: 2 (33 bytes) */

// <0039FE04> materialsystem2/shader_type_manager.cpp:30
void CShaderTypeManager::RemoveResourceType()
{
} /* size: 26 */

// <003A10F2> materialsystem2/shader_type_manager.cpp:35
// variable: 1
// function calls: 11
void CShaderTypeManager::FinalizeResource(ResourceHandle_t hResource, ResourceLoadType_t nLoadType)
{
	CResourceNameGetter resourceName; // 40
	CUtlSymbolLarge::String(); // 160
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 184
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 180
	ResourceGetName(ResourceHandle_t hResource,
			CResourceName* pTarget);  // 196
	CResourceNameGetter::CResourceNameGetter(
				ResourceHandle_t hResource);  // 40
	CResourceName::Get(); // 41
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 42
	CShaderTypeManager::FinalizeResource(
			ResourceHandle_t hResource,
			ResourceLoadType_t nLoadType);  // 35
} /* size: 243, variables: 1, inline expansions: 11 (445 bytes) */

// <0039FD93> materialsystem2/shader_type_manager.cpp:35
// variable: 1
void CShaderTypeManager::FinalizeResource(ResourceHandle_t hResource, ResourceLoadType_t nLoadType)
{
	CResourceNameGetter resourceName; // 40
} /* size: 0, variables: 1 */

// <0039E8F4> materialsystem2/shader_type_manager.cpp:44
// variables: 13
// function calls: 69
void CShaderTypeManager::AllocateResource(ResourceHandle_t hResource, const ResourceId_t nId, const ResourceFileHeader_t* pHeader, IRD_RegisterResourceDataUtils* pUtils)
{
	CResourceNameGetter resourceName; // 46
	VfxPlatformType_t nPlatformType; // 47
	VfxCompileTarget_t compileTarget; // 48
	ResourceBlockId_t nResourceBlockId; // 58
	ResourceHeaderBlockInfo_t dataBlockInfo; // 60
	CUtlBuffer diskDataBuffer; // 68
	CVfx* pVfx; // 69
	const ShaderHeader_t* pShaderHeader; // 72
	int nDataBlockOffset; // 77
	{
		int i; // 89
		{
			const char* szShaderFallback; // 91
			CPathBufferString shaderPath; // 95
			CBufferString::Set(
				const char* pString,
				int nChars,
				bool bExact);  // 601
			CBufferString::InitMinConstruct(
					bool bGrowable);  // 712
			CBufferString::CBufferString(); // 596
			CBufferStringN<200>::CBufferStringN(
					const char* pString,
					int nChars,
					bool bExact,
					bool bGrowable);  // 95
			CUtlMemory<CVfxMode, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CVfxMode, CUtlMemory<CVfxMode, int> >::operator[](
					int i);  // 91
			V_strlen(const char* str); // 92
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 776
			CBufferString::String(); // 97
			CBufferStringN<200>::operator=(
					CBufferString& rhs);  // 97
			CBufferString::~CBufferString(); // 97
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 776
			CBufferString::String(); // 99
			CUtlMemory<CVfxMode, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CVfxMode, CUtlMemory<CVfxMode, int> >::operator[](
					int i);  // 99
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 99
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 100
		}
		CUtlVectorBase<CVfxMode, CUtlMemory<CVfxMode, int> >::Count(); // 89
	}
	{
		int i; // 102
	}
	CUtlSymbolLarge::String(); // 160
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 184
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 180
	ResourceGetName(ResourceHandle_t hResource,
			CResourceName* pTarget);  // 196
	CResourceNameGetter::CResourceNameGetter(
				ResourceHandle_t hResource);  // 46
	CResourceName::Get(); // 70
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 671
	CBufferStringN<200>::operator=(
			const char* pSrc);  // 70
	CResourceName::Get(); // 74
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 74
	CBufferString::IsEmpty(); // 1280
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 1280
	CVfx::GetFilename(); // 75
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 75
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 114
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 114
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 114
	CResourceName::Get(); // 53
	CResourceName::Get(); // 63
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 114
	CResourceName::Get(); // 84
} /* size: 0, variables: 9, inline expansions: 46 (1299 bytes) */

// <003A0C67> materialsystem2/shader_type_manager.cpp:116
// variables: 7
// function calls: 17
void CShaderTypeManager::DeallocateResource(void* pResourceData, IResourceDeallocatorUtils* pDealloc)
{
	CVfx* pVfx; // 124
	CResourceDeallocatorUtils::GetDeallocationType(); // 118
	{
		int nProgramType; // 127
		{
			VfxProgram_t programType; // 129
			CVfxProgramData& pProgramData; // 130
			{
				int nStaticComboIndex; // 131
				CUtlVectorBase<CVfxStaticComboData, CUtlBlockMemory<CVfxStaticComboData, int> >::Count(); // 131
				{
					CVfxStaticComboData& pStaticComboData; // 133
					CUtlBlockMemory<CVfxStaticComboData, int>::MajorIndex(
							int i);  // 243
					CUtlBlockMemory<CVfxStaticComboData, int>::IsIdxValid(
							int i);  // 191
					CUtlBlockMemory<CVfxStaticComboData, int>::MajorIndex(
							int i);  // 192
					CUtlBlockMemory<CVfxStaticComboData, int>::MinorIndex(
							int i);  // 193
					{
					}
					CUtlBlockMemory<CVfxStaticComboData, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CVfxStaticComboData, CUtlBlockMemory<CVfxStaticComboData, int> >::operator[](
							int i);  // 133
					{
						int j; // 136
						CUtlVectorBase<RenderShaderHandle_t__::Count(); // 136
						CUtlMemory<RenderShaderHandle_t__::operator[](
								int i);  // 588
						CUtlVectorBase<RenderShaderHandle_t__::operator[](
								int i);  // 138
						VfxProgramTypeToRenderShaderType(VfxProgram_t programType); // 140
						CUtlMemory<RenderShaderHandle_t__::operator[](
								int i);  // 588
						CUtlVectorBase<RenderShaderHandle_t__::operator[](
								int i);  // 141
					}
					CUtlMemory<long long unsigned int, int>::operator[](
							int i);  // 588
					CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::operator[](
							int i);  // 147
				}
			}
		}
	}
	CShaderTypeManager::DeallocateResource(
				void* pResourceData,
				IResourceDeallocatorUtils* pDealloc);  // 116
} /* size: 0, variables: 1, inline expansions: 2 (377 bytes) */

// <0039E866> materialsystem2/shader_type_manager.cpp:116
// variables: 7
void CShaderTypeManager::DeallocateResource(void* pResourceData, IResourceDeallocatorUtils* pDealloc)
{
	CVfx* pVfx; // 124
	{
		int nProgramType; // 127
		{
			VfxProgram_t programType; // 129
			CVfxProgramData& pProgramData; // 130
			{
				int nStaticComboIndex; // 131
				{
					CVfxStaticComboData& pStaticComboData; // 133
					{
						int j; // 136
					}
				}
			}
		}
	}
} /* size: 0, variables: 1 */

// <0039E649> materialsystem2/shader_type_manager.cpp:154
// function calls: 9
void* CShaderTypeManager::GetErrorResource()
{
	CWeakHandle<InfoForResourceTypeCVfx>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 156
	CStrongHandle<InfoForResourceTypeCVfx>::operator==(
			const CWeakHandle<InfoForResourceTypeCVfx>& hResource);  // 156
	CWeakHandle<InfoForResourceTypeCVfx>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCVfx>::GetHandle(); // 162
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCVfx>(const CWeakHandle<InfoForResourceTypeCVfx>& hResource); // 162
} /* size: 99, inline expansions: 9 (26 bytes) */

