
//
// soundsystem/vsound_manager.cpp
//
//	referenced by: libengine2.so
//
//	functions: 35
//	class: 1
//	struct: 1
//

// <02697429> soundsystem/vsound_manager.cpp:15
// member variables: 6
// struct size: 4
struct soundinfoheaderV03_t {
	unsigned int m_Type:2; /* 0: 0 4 */
	unsigned int m_bits:5; /* 0: 2 4 */
	unsigned int m_channels:2; /* 0: 7 4 */
	unsigned int m_sampleSize:3; /* 0: 9 4 */
	unsigned int m_format:2; /* 0:12 4 */
	unsigned int m_rate:17; /* 0:14 4 */
};

// <026A37C3> soundsystem/vsound_manager.cpp:26
int BitsPerSample(vsound_format_t nFormat)
{
} /* size: 0 */

// <026A3783> soundsystem/vsound_manager.cpp:33
int BytesPerSample(vsound_format_t nFormat)
{
} /* size: 0 */

// <026A3709> soundsystem/vsound_manager.cpp:40
// variables: 2
vsound_format_t FindFormat(int nType, int nFormat, int nBitsPerSample)
{
	const char   __FUNCTION__; // 282
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 52
	}
} /* size: 0, variables: 1 */

// <0269C8D2> soundsystem/vsound_manager.cpp:71
// function calls: 9
void CVSoundTypeManager::~CVSoundTypeManager()
{
	ValidateAlignment<CUtlHashtableEntry<unsigned int, CVSoundTypeManager::SfxDictEntry> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<unsigned int, CVSoundTypeManager::SfxDictEntry>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<unsigned int, CVSoundTypeManager::SfxDictEntry>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<unsigned int, CVSoundTypeManager::SfxDictEntry>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<unsigned int, CVSoundTypeManager::SfxDictEntry>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<unsigned int, CVSoundTypeManager::SfxDictEntry, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor this); // 71
	CClassMemoryPool<CSfxTable, CUtlMemoryPool<CSfxTable> >::Clear(); // 162
	CUtlMemoryPool<CSfxTable>::~CUtlMemoryPool(); // 163
	CClassMemoryPool<CSfxTable, CUtlMemoryPool<CSfxTable> >::~CClassMemoryPool(); // 71
} /* size: 113, inline expansions: 9 (171 bytes) */

// <0269C625> soundsystem/vsound_manager.cpp:71
// function calls: 11
void CVSoundTypeManager::~CVSoundTypeManager()
{
	ValidateAlignment<CUtlHashtableEntry<unsigned int, CVSoundTypeManager::SfxDictEntry> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<unsigned int, CVSoundTypeManager::SfxDictEntry>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<unsigned int, CVSoundTypeManager::SfxDictEntry>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<unsigned int, CVSoundTypeManager::SfxDictEntry>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<unsigned int, CVSoundTypeManager::SfxDictEntry>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<unsigned int, CVSoundTypeManager::SfxDictEntry, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor this); // 71
	CClassMemoryPool<CSfxTable, CUtlMemoryPool<CSfxTable> >::Clear(); // 162
	CUtlMemoryPool<CSfxTable>::~CUtlMemoryPool(); // 163
	CClassMemoryPool<CSfxTable, CUtlMemoryPool<CSfxTable> >::~CClassMemoryPool(); // 71
	IVSoundManager::~IVSoundManager(); // 71
	CVSoundTypeManager::~CVSoundTypeManager(); // 71
} /* size: 126, inline expansions: 11 (266 bytes) */

// <0269C608> soundsystem/vsound_manager.cpp:71
inline void CVSoundTypeManager::~CVSoundTypeManager()
{
} /* size: 0 */

// <026977D2> soundsystem/vsound_manager.cpp:71
// member functions: 50
// member variables: 5
// vtable entries: 15
// class size: 248
class CVSoundTypeManager : public IVSoundManager {
	/* soundsystem/vsound_manager.cpp:299 */
	struct SfxDictEntry {
		CSfxTable * pSfx; /* 0 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class IVSoundManager <ancestor>; */ /* 0 8 */
	void CVSoundTypeManager(CVSoundTypeManager* , CVSoundTypeManager& );
	void CVSoundTypeManager(CVSoundTypeManager* , const CVSoundTypeManager& );
private:
	int m_nRefCount; /* 8 4 */
	/* soundsystem/vsound_manager.cpp:308 */
	void CVSoundTypeManager(CVSoundTypeManager* );
	/* soundsystem/vsound_manager.cpp:78 */
	void AddRef(CVSoundTypeManager* );
	/* soundsystem/vsound_manager.cpp:89 */
	void Release(CVSoundTypeManager* );
	/* soundsystem/vsound_manager.cpp:102 */
	VSound_t* AllocVSound(CVSoundTypeManager* , uint, size_t, const void* );
	/* soundsystem/vsound_manager.cpp:134 */
	VSound_t* AllocVSound(CVSoundTypeManager* , const ResourceFileHeader_t* );
	/* soundsystem/vsound_manager.cpp:186 */
	virtual void AllocateResource(CVSoundTypeManager* , ResourceHandle_t, ResourceId_t, const ResourceFileHeader_t* , IRD_RegisterResourceDataUtils* );
	/* soundsystem/vsound_manager.cpp:202 */
	virtual bool ToolLoadVSnd(CVSoundTypeManager* , CSimplePCMWaveData* , const char* );
	/* soundsystem/vsound_manager.cpp:239 */
	virtual bool RequiresFinalizeResourceCall(const CVSoundTypeManager* );
	/* soundsystem/vsound_manager.cpp:242 */
	virtual void FinalizeResource(CVSoundTypeManager* , ResourceHandle_t, ResourceLoadType_t);
	/* soundsystem/vsound_manager.cpp:251 */
	virtual void DeallocateResource(CVSoundTypeManager* , void* , IResourceDeallocatorUtils* );
	/* soundsystem/vsound_manager.cpp:257 */
	virtual ResourceStreamingType_t GetStreamingType(const CVSoundTypeManager* );
	/* soundsystem/vsound_manager.cpp:262 */
	virtual int GetNonStreamingDataLoadSize(const CVSoundTypeManager* , ResourceHandle_t, bool);
	/* soundsystem/vsound_manager.cpp:270 */
	virtual bool IsStreamingDataAlreadyLoaded(CVSoundTypeManager* , ResourceHandle_t);
	/* soundsystem/vsound_manager.cpp:277 */
	virtual void LoadStreamingData(CVSoundTypeManager* , ResourceHandle_t, IResourceSystemUtils* );
	/* soundsystem/vsound_manager.cpp:316 */
	virtual vsnds_id_t AddVsnd(CVSoundTypeManager* , const char* );
	/* soundsystem/vsound_manager.cpp:642 */
	virtual const char* GetVsndPath(const CVSoundTypeManager* , vsnds_id_t);
	/* soundsystem/vsound_manager.cpp:324 */
	virtual float GetVSndDuration(const CVSoundTypeManager* , const char* , float);
	/* soundsystem/vsound_manager.cpp:346 */
	virtual CSfxTable* GetSfx(CVSoundTypeManager* , vsnds_id_t, VMIX_MEMTYPE);
	/* soundsystem/vsound_manager.cpp:410 */
	virtual CSfxTable* GetSfx(CVSoundTypeManager* , const char* , bool, VMIX_MEMTYPE);
	/* soundsystem/vsound_manager.cpp:512 */
	virtual CSfxTable* CreateSfx(CVSoundTypeManager* , const char* , int, int, int, int, float, bool, void* , int);
	/* soundsystem/vsound_manager.cpp:613 */
	void UnloadAllVSndResources(CVSoundTypeManager* );
	/* soundsystem/vsound_manager.cpp:580 */
	void ListAllSounds(CVSoundTypeManager* );
	CUtlSymbolTable m_Vsnds; /* 16 144 */
	CClassMemoryPool<CSfxTable, CUtlMemoryPool<CSfxTable> > m_SfxPool __attribute__((__aligned__(8))); /* 160 56 */
	CUtlHashtable<unsigned int, CVSoundTypeManager::SfxDictEntry, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CVSoundTypeManager::SfxDictEntry>, int> > m_Sounds; /* 216 32 */
	virtual void ~CVSoundTypeManager(CVSoundTypeManager* );
	void CVSoundTypeManager(class CVSoundTypeManager *, class CVSoundTypeManager &); /* linkage=_ZN18CVSoundTypeManagerC4EOS_ */
	void CVSoundTypeManager(class CVSoundTypeManager *, const class CVSoundTypeManager  &); /* linkage=_ZN18CVSoundTypeManagerC4ERKS_ */
	void CVSoundTypeManager(class CVSoundTypeManager *); /* linkage=_ZN18CVSoundTypeManagerC4Ev */
	void AddRef(class CVSoundTypeManager *); /* linkage=_ZN18CVSoundTypeManager6AddRefEv */
	void Release(class CVSoundTypeManager *); /* linkage=_ZN18CVSoundTypeManager7ReleaseEv */
	class VSound_t * AllocVSound(class CVSoundTypeManager *, uint, size_t, const void  *); /* linkage=_ZN18CVSoundTypeManager11AllocVSoundEjmPKv */
	class VSound_t * AllocVSound(class CVSoundTypeManager *, const class ResourceFileHeader_t  *); /* linkage=_ZN18CVSoundTypeManager11AllocVSoundEPK20ResourceFileHeader_t */
	/* <26a54c9> soundsystem/vsound_manager.cpp:186 */
	virtual void AllocateResource(class CVSoundTypeManager *, ResourceHandle_t, class ResourceId_t, const class ResourceFileHeader_t  *, class IRD_RegisterResourceDataUtils *); /* linkage=_ZN18CVSoundTypeManager16AllocateResourceEPK21ResourceBindingBase_t12ResourceId_tPK20ResourceFileHeader_tP29IRD_RegisterResourceDataUtils */
	virtual bool ToolLoadVSnd(class CVSoundTypeManager *, class CSimplePCMWaveData *, const char  *); /* linkage=_ZN18CVSoundTypeManager12ToolLoadVSndEP18CSimplePCMWaveDataPKc */
	virtual bool RequiresFinalizeResourceCall(const class CVSoundTypeManager  *); /* linkage=_ZNK18CVSoundTypeManager28RequiresFinalizeResourceCallEv */
	/* <26a488a> soundsystem/vsound_manager.cpp:242 */
	virtual void FinalizeResource(class CVSoundTypeManager *, ResourceHandle_t, enum ResourceLoadType_t); /* linkage=_ZN18CVSoundTypeManager16FinalizeResourceEPK21ResourceBindingBase_t18ResourceLoadType_t */
	/* <26a47bc> soundsystem/vsound_manager.cpp:251 */
	virtual void DeallocateResource(class CVSoundTypeManager *, void *, class IResourceDeallocatorUtils *); /* linkage=_ZN18CVSoundTypeManager18DeallocateResourceEPvP25IResourceDeallocatorUtils */
	virtual enum ResourceStreamingType_t GetStreamingType(const class CVSoundTypeManager  *); /* linkage=_ZNK18CVSoundTypeManager16GetStreamingTypeEv */
	virtual int GetNonStreamingDataLoadSize(const class CVSoundTypeManager  *, ResourceHandle_t, bool); /* linkage=_ZNK18CVSoundTypeManager27GetNonStreamingDataLoadSizeEPK21ResourceBindingBase_tb */
	virtual bool IsStreamingDataAlreadyLoaded(class CVSoundTypeManager *, ResourceHandle_t); /* linkage=_ZN18CVSoundTypeManager28IsStreamingDataAlreadyLoadedEPK21ResourceBindingBase_t */
	virtual void LoadStreamingData(class CVSoundTypeManager *, ResourceHandle_t, class IResourceSystemUtils *); /* linkage=_ZN18CVSoundTypeManager17LoadStreamingDataEPK21ResourceBindingBase_tP20IResourceSystemUtils */
	virtual vsnds_id_t AddVsnd(class CVSoundTypeManager *, const char  *); /* linkage=_ZN18CVSoundTypeManager7AddVsndEPKc */
	virtual const char  * GetVsndPath(const class CVSoundTypeManager  *, vsnds_id_t); /* linkage=_ZNK18CVSoundTypeManager11GetVsndPathE10CUtlSymbol */
	virtual float GetVSndDuration(const class CVSoundTypeManager  *, const char  *, float); /* linkage=_ZNK18CVSoundTypeManager15GetVSndDurationEPKcf */
	virtual class CSfxTable * GetSfx(class CVSoundTypeManager *, vsnds_id_t, enum VMIX_MEMTYPE); /* linkage=_ZN18CVSoundTypeManager6GetSfxE10CUtlSymbol12VMIX_MEMTYPE */
	virtual class CSfxTable * GetSfx(class CVSoundTypeManager *, const char  *, bool, enum VMIX_MEMTYPE); /* linkage=_ZN18CVSoundTypeManager6GetSfxEPKcb12VMIX_MEMTYPE */
	virtual class CSfxTable * CreateSfx(class CVSoundTypeManager *, const char  *, int, int, int, int, float, bool, void *, int); /* linkage=_ZN18CVSoundTypeManager9CreateSfxEPKciiiifbPvi */
	void UnloadAllVSndResources(class CVSoundTypeManager *); /* linkage=_ZN18CVSoundTypeManager22UnloadAllVSndResourcesEv */
	void ListAllSounds(class CVSoundTypeManager *); /* linkage=_ZN18CVSoundTypeManager13ListAllSoundsEv */
	virtual void ~CVSoundTypeManager(class CVSoundTypeManager *); /* linkage=_ZN18CVSoundTypeManagerD4Ev */
} __attribute__((__aligned__(8)));

// <026A36C7> soundsystem/vsound_manager.cpp:78
// variables: 2
inline void CVSoundTypeManager::AddRef()
{
	const char   __FUNCTION__; // 174
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 85
	}
} /* size: 0, variables: 1 */

// <026A368F> soundsystem/vsound_manager.cpp:89
// variables: 2
inline void CVSoundTypeManager::Release()
{
	const char   __FUNCTION__; // 201
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 94
	}
} /* size: 0, variables: 1 */

// <026A3622> soundsystem/vsound_manager.cpp:102
// variables: 4
inline void CVSoundTypeManager::AllocVSound(uint nBlockSize, size_t nDiskSize, const void* pDisk)
{
	size_t nExtraSize; // 105
	size_t nMemSize; // 106
	VSound_t* pVSound; // 108
	int32 nShiftResourcePointers; // 114
} /* size: 0, variables: 4 */

// <026A4DA9> soundsystem/vsound_manager.cpp:134
// variables: 8
// function calls: 22
void ResourceFileHeader_t::AllocVSound()
{
	ResourceHeaderBlockInfo_t dataBlockInfo; // 136
	const size_t  nDiskSize; // 139
	VSound_t* pVSound; // 149
	CSentenceOnDisk_t* pSentence; // 155
	CMorphData_t* pMorph; // 156
	{
	}
	{
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 109
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 110
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 111
	CResourcePointerBase::IsNull(); // 116
	CResourcePointerBase::Rebase(
		int nOffset);  // 119
	CResourceArrayBase::Rebase(
		int nOffset);  // 122
	CResourceArrayBase::Rebase(
		int nOffset);  // 123
	CResourcePointerBase::IsNull(); // 125
	CResourcePointerBase::Rebase(
		int nOffset);  // 128
	CVSoundTypeManager::AllocVSound(
			uint nBlockSize,
			size_t nDiskSize,
			const void* pDisk);  // 149
	ResolveOffset(const int32* pOffset); // 248
	CResourcePointer<CSentenceOnDisk_t>::GetPtr(); // 254
	CResourcePointer<CSentenceOnDisk_t>::operator CSentenceOnDisk_t*(); // 155
	ResolveOffset(const int32* pOffset); // 248
	CResourcePointer<CMorphData_t>::GetPtr(); // 254
	CResourcePointer<CMorphData_t>::operator CMorphData_t*(); // 156
	CSentence_t::Init(
		CSentenceOnDisk_t* pSentence,
		CMorphData_t* pMorphData);  // 159
	{
		uint32 nOldBits; // 167
		soundinfoheaderV03_t* pOldInfo; // 169
		soundinfoheader_t* pInfo; // 170
		{
		}
		FindFormat(int nType,
				int nFormat,
				int nBitsPerSample);  // 173
	}
	_DebuggerBreakInlineExpressionWrapper(void); // 137
} /* size: 0, variables: 5, inline expansions: 21 (422 bytes) */

// <026A34B9> soundsystem/vsound_manager.cpp:134
// variables: 11
inline void CVSoundTypeManager::AllocVSound(const ResourceFileHeader_t* pHeader)
{
	ResourceHeaderBlockInfo_t dataBlockInfo; // 136
	const size_t  nDiskSize; // 139
	const char   __FUNCTION__; // 309
	VSound_t* pVSound; // 149
	CSentenceOnDisk_t* pSentence; // 155
	CMorphData_t* pMorph; // 156
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 142
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 146
	}
	{
		uint32 nOldBits; // 167
		soundinfoheaderV03_t* pOldInfo; // 169
		soundinfoheader_t* pInfo; // 170
	}
} /* size: 0, variables: 6 */

// <026A54C9> soundsystem/vsound_manager.cpp:186
// variables: 2
// function calls: 11
void CVSoundTypeManager::AllocateResource(ResourceHandle_t hResource, ResourceId_t nId, const ResourceFileHeader_t* pHeader, IRD_RegisterResourceDataUtils* pUtils)
{
	VSound_t* pVSound; // 196
	{
		CResourceNameGetter resourceName; // 190
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 180
		ResourceGetName(ResourceHandle_t hResource,
				CResourceName* pTarget);  // 196
		CResourceNameGetter::CResourceNameGetter(
					ResourceHandle_t hResource);  // 190
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 194
		CResourceName::Get(); // 191
	}
	CVSoundTypeManager::AllocateResource(
			ResourceHandle_t hResource,
			ResourceId_t nId,
			const ResourceFileHeader_t* pHeader,
			IRD_RegisterResourceDataUtils* pUtils);  // 186
} /* size: 328, variables: 1, inline expansions: 1 (45 bytes) */

// <026A33D7> soundsystem/vsound_manager.cpp:186
// variables: 2
inline void CVSoundTypeManager::AllocateResource(ResourceHandle_t hResource, ResourceId_t nId, const ResourceFileHeader_t* pHeader, IRD_RegisterResourceDataUtils* pUtils)
{
	VSound_t* pVSound; // 196
	{
		CResourceNameGetter resourceName; // 190
	}
} /* size: 0, variables: 1 */

// <026A2A56> soundsystem/vsound_manager.cpp:202
// variables: 9
// function calls: 32
void CVSoundTypeManager::ToolLoadVSnd(CSimplePCMWaveData* pSoundData, const char* pVSndName)
{
	CUtlBuffer soundFile; // 204
	CPathBufferString soundName; // 205
	bool bOk; // 208
	const char   __FUNCTION__; // 336
	{
		const ResourceFileHeader_t* pHeader; // 211
		VSound_t* pVSound; // 212
		const uint8* pBaseData; // 213
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 228
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 230
		}
		CUtlMemory<unsigned char, int>::Base(); // 1484
		CUtlBuffer::Base(); // 211
		CUtlMemory<unsigned char, int>::Base(); // 1484
		CUtlBuffer::Base(); // 213
		VSoundV00_t::format(); // 215
		VSoundV00_t::m_rate(); // 222
		VSoundV00_t::channels(); // 223
		VSoundV00_t::format(); // 225
		VSoundV00_t::BitsPerSample(
				vsound_format_t nFormat);  // 225
		VSoundV00_t::BitsPerSample(); // 225
		VSoundV00_t::format(); // 228
		VSoundV00_t::BytesPerSample(
				vsound_format_t nFormat);  // 227
		VSoundV00_t::BytesPerSample(); // 228
		VSoundV00_t::channels(); // 228
		VSoundV00_t::m_sampleFrameSize(); // 228
		CVSoundTypeManager::DeallocateResource(
					void* pResourceData,
					IResourceDeallocatorUtils* pDealloc);  // 231
		VSoundV00_t::format(); // 230
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 596
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 601
	CBufferStringN<200>::CBufferStringN(
			const char* pString,
			int nChars,
			bool bExact,
			bool bGrowable);  // 205
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 208
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 236
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 236
} /* size: 620, variables: 4, inline expansions: 15 (321 bytes) */

// <026A2A28> soundsystem/vsound_manager.cpp:239
void CVSoundTypeManager::RequiresFinalizeResourceCall()
{
} /* size: 10 */

// <026A488A> soundsystem/vsound_manager.cpp:242
// variable: 1
// function calls: 11
void CVSoundTypeManager::FinalizeResource(ResourceHandle_t hResource, ResourceLoadType_t nLoadType)
{
	{
		CResourceNameGetter resourceName; // 246
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 180
		ResourceGetName(ResourceHandle_t hResource,
				CResourceName* pTarget);  // 196
		CResourceNameGetter::CResourceNameGetter(
					ResourceHandle_t hResource);  // 246
		CResourceName::Get(); // 247
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 248
	}
	CVSoundTypeManager::FinalizeResource(
			ResourceHandle_t hResource,
			ResourceLoadType_t nLoadType);  // 242
} /* size: 195, inline expansions: 1 (115 bytes) */

// <026A29E9> soundsystem/vsound_manager.cpp:242
// variable: 1
inline void CVSoundTypeManager::FinalizeResource(ResourceHandle_t hResource, ResourceLoadType_t nLoadType)
{
	{
		CResourceNameGetter resourceName; // 246
	}
} /* size: 0 */

// <026A47BC> soundsystem/vsound_manager.cpp:251
// variable: 1
void CVSoundTypeManager::DeallocateResource(void* pResourceData, IResourceDeallocatorUtils* pDealloc)
{
	byte* pVSound; // 253
} /* size: 25, variables: 1 */

// <026A29AC> soundsystem/vsound_manager.cpp:251
// variable: 1
inline void CVSoundTypeManager::DeallocateResource(void* pResourceData, IResourceDeallocatorUtils* pDealloc)
{
	byte* pVSound; // 253
} /* size: 0, variables: 1 */

// <026A297E> soundsystem/vsound_manager.cpp:257
void CVSoundTypeManager::GetStreamingType()
{
} /* size: 10 */

// <026A2932> soundsystem/vsound_manager.cpp:262
void CVSoundTypeManager::GetNonStreamingDataLoadSize(ResourceHandle_t hResource, bool bIsReloading)
{
} /* size: 10 */

// <026A28F5> soundsystem/vsound_manager.cpp:270
void CVSoundTypeManager::IsStreamingDataAlreadyLoaded(ResourceHandle_t hResource)
{
} /* size: 10 */

// <026A28A9> soundsystem/vsound_manager.cpp:277
void CVSoundTypeManager::LoadStreamingData(ResourceHandle_t hResource, IResourceSystemUtils* pUtils)
{
} /* size: 5 */

// <026A25A5> soundsystem/vsound_manager.cpp:308
// function calls: 9
void CVSoundTypeManager::CVSoundTypeManager()
{
	IResourceTypeManager::IResourceTypeManager(); // 23
	IVSoundManager::IVSoundManager(); // 308
	ValidateAlignment<CSfxTable>(void); // 133
	CUtlMemoryPool<CSfxTable>::CUtlMemoryPool(
			int numElements,
			MemoryPoolGrowType_t growMode,
			const char* pszAllocOwner);  // 156
	CClassMemoryPool<CSfxTable, CUtlMemoryPool<CSfxTable> >::CClassMemoryPool(
			int numElements,
			MemoryPoolGrowType_t growMode);  // 308
	CUtlMemory<CUtlHashtableEntry<unsigned int, CVSoundTypeManager::SfxDictEntry>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<unsigned int, CVSoundTypeManager::SfxDictEntry>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<unsigned int, CVSoundTypeManager::SfxDictEntry, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor this); // 178
	CUtlHashtable(const CUtlHashtable<unsigned int, CVSoundTypeManager::SfxDictEntry, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor this,
			int minimumSize);  // 308
} /* size: 139, inline expansions: 9 (128 bytes) */

// <026A258C> soundsystem/vsound_manager.cpp:308
void CVSoundTypeManager::CVSoundTypeManager()
{
} /* size: 0 */

// <026A250D> soundsystem/vsound_manager.cpp:316
void CVSoundTypeManager::AddVsnd(const char* pVsndPath)
{
} /* size: 67 */

// <026A2408> soundsystem/vsound_manager.cpp:324
// variables: 2
// function call: 1
void CVSoundTypeManager::GetVSndDuration(const char* pVSndName, float flDefaultDuration)
{
	{
		CSfxTable* pSfx; // 332
		{
			const VSound_t* pVSound; // 335
			CStrongHandle<InfoForResourceTypeVSound_t>::operator const ResourceHandleInfo_t<InfoForResourceTypeVSound_t>::RuntimeClass_t*(); // 335
		}
	}
} /* size: 122 */

// <026A23BB> soundsystem/vsound_manager.cpp:346
void CVSoundTypeManager::GetSfx(vsnds_id_t vsndSymbol, VMIX_MEMTYPE nPriority)
{
} /* size: 7 */

// <026A2252> soundsystem/vsound_manager.cpp:351
// variables: 2
// function calls: 4
void V_StripLeadingSlashes(CBufferString* pFileNameBuf)
{
	int i; // 353
	{
		const char* pScan; // 357
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 776
		CBufferString::String(); // 357
		CBufferString::RemoveHead(
				int nChars);  // 364
	}
} /* size: 73, variables: 1 */

// <026A0E67> soundsystem/vsound_manager.cpp:410
// variables: 13
// function calls: 67
void CVSoundTypeManager::GetSfx(const char* pSoundName, bool bIsResource, VMIX_MEMTYPE nPriority)
{
	CSfxTable* sfx; // 412
	CPathBufferString soundFileName; // 413
	const char   __FUNCTION__; // 174
	const char* pExt; // 422
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_449; // 449
	CResourceName resourceName; // 452
	FileNameHandle_t fnHandle; // 453
	UtlHashHandle_t i; // 454
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 458
	}
	{
		ResourceStatus_t status; // 462
		CWeakHandle<InfoForResourceTypeVSound_t>::CWeakHandle(); // 226
		CWeakHandle<InfoForResourceTypeVSound_t>::InitUntypedUnchecked(
					ResourceHandle_t hUntypedResource);  // 227
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 705
		IResourceSystem::FindOrRegisterResourceByName<1684960118>(
							const CResourceName& resourceName,
							bool bWarnIfNotLoaded);  // 465
		CStrongHandle<InfoForResourceTypeVSound_t>::operator=(
				const CWeakHandle<InfoForResourceTypeVSound_t>& src);  // 465
	}
	{
		ResourceStatus_t status; // 486
		SfxDictEntry entry; // 504
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 480
		}
		CUtlMemoryPool<CSfxTable>::Alloc(); // 180
		CStrongHandle<InfoForResourceTypeVSound_t>::CStrongHandle(); // 36
		CSfxTable::CSfxTable(); // 1479
		Construct<CSfxTable>(CSfxTable* pMemory); // 185
		CClassMemoryPool<CSfxTable, CUtlMemoryPool<CSfxTable> >::Alloc(); // 478
		CWeakHandle<InfoForResourceTypeVSound_t>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 499
		CStrongHandle<InfoForResourceTypeVSound_t>::Init(
			ResourceHandleTyped_t hResource);  // 673
		CStrongHandle<InfoForResourceTypeVSound_t>::operator=(
				const CWeakHandle<InfoForResourceTypeVSound_t>& src);  // 499
		CUtlMemory<CUtlHashtableEntry<unsigned int, CVSoundTypeManager::SfxDictEntry>, int>::operator[](
				int i);  // 720
		CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry>::CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry>(
										const unsigned int& k,
										const SfxDictEntry& v);  // 1514
		Construct<CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry>, unsigned int&, const CVSoundTypeManager::SfxDictEntry&>(CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry>* pMemory); // 720
		DoInsert<unsigned int>(const CUtlHashtable<unsigned int, CVSoundTypeManager::SfxDictEntry, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor this,
					unsigned int k,
					Arg_t v,
					unsigned int h,
					bool* pDidInsert);  // 714
		DoInsert<unsigned int>(const CUtlHashtable<unsigned int, CVSoundTypeManager::SfxDictEntry, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor this,
					unsigned int k,
					Arg_t v,
					unsigned int h,
					bool* pDidInsert);  // 249
		Insert(const CUtlHashtable<unsigned int, CVSoundTypeManager::SfxDictEntry, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor this,
			KeyArg_t k,
			ValueArg_t v,
			bool* pDidInsert);  // 506
		CWeakHandle<InfoForResourceTypeVSound_t>::CWeakHandle(); // 226
		CWeakHandle<InfoForResourceTypeVSound_t>::InitUntypedUnchecked(
					ResourceHandle_t hUntypedResource);  // 227
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 703
		CWeakHandle<InfoForResourceTypeVSound_t>::CWeakHandle(); // 226
		CWeakHandle<InfoForResourceTypeVSound_t>::InitUntypedUnchecked(
					ResourceHandle_t hUntypedResource);  // 227
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 705
		IResourceSystem::FindOrRegisterResourceByName<1684960118>(
							const CResourceName& resourceName,
							bool bWarnIfNotLoaded);  // 494
		CStrongHandle<InfoForResourceTypeVSound_t>::operator=(
				const CWeakHandle<InfoForResourceTypeVSound_t>& src);  // 494
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 413
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 423
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 449
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 452
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 453
	Mix32HashFunctor::operator(
			uint32 n);  // 218
	Find(const CUtlHashtable<unsigned int, CVSoundTypeManager::SfxDictEntry, DefaultHashFunctor<unsigned int>, DefaultEqualF this,
		KeyArg_t k);  // 454
	CUtlMemory<CUtlHashtableEntry<unsigned int, CVSoundTypeManager::SfxDictEntry>, int>::operator[](
			int i);  // 297
	operator[](const CUtlHashtable<unsigned int, CVSoundTypeManager::SfxDictEntry, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor this,
			handle_t idx);  // 457
	CWeakHandle<InfoForResourceTypeVSound_t>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 460
	CStrongHandle<InfoForResourceTypeVSound_t>::operator==(
			const CWeakHandle<InfoForResourceTypeVSound_t>& hResource);  // 460
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 509
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 509
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 509
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 417
} /* size: 0, variables: 8, inline expansions: 37 (1336 bytes) */

// <026A033D> soundsystem/vsound_manager.cpp:512
// variables: 10
// function calls: 33
void CVSoundTypeManager::CreateSfx(const char* pSoundName, int nChannels, int nRate, int nFormat, int nSampleCount, float flDuration, bool bLoop, void* pData, int nDataSize)
{
	CSfxTable* sfx; // 514
	const char   __FUNCTION__; // 255
	size_t nMemSize; // 517
	VSound_t* pVSound; // 520
	FileNameHandle_t fnHandle; // 524
	uint32 infolong; // 40021
	soundinfoheader_t info; // 31603
	union  (null); // 40079
	CResourceName resourceName; // 550
	SfxDictEntry entry; // 553
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 515
	}
	CUtlMemoryPool<CSfxTable>::Alloc(); // 180
	CStrongHandle<InfoForResourceTypeVSound_t>::CStrongHandle(); // 36
	CSfxTable::CSfxTable(); // 1479
	Construct<CSfxTable>(CSfxTable* pMemory); // 185
	CClassMemoryPool<CSfxTable, CUtlMemoryPool<CSfxTable> >::Alloc(); // 514
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 521
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 522
	CFileSystemPassThru::FindOrAddFileName(
				const char* pFileName);  // 149
	CFileSystemPassThru::FindOrAddFileName(
				const char* pFileName);  // 149
	CFileSystemPassThru::FindOrAddFileName(
				const char* pFileName);  // 149
	CFileSystemPassThru::FindOrAddFileName(
				const char* pFileName);  // 524
	CWeakHandle<InfoForResourceTypeVSound_t>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeVSound_t>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 693
	CWeakHandle<InfoForResourceTypeVSound_t>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeVSound_t>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 695
	IResourceSystem::FindOrCreateProceduralResource<1684960118>(
							const CResourceName& resourceName,
							void* pResourceData,
							ProceduralResourceType_t type);  // 551
	CStrongHandle<InfoForResourceTypeVSound_t>::operator=(
			const CWeakHandle<InfoForResourceTypeVSound_t>& src);  // 551
	CUtlMemory<CUtlHashtableEntry<unsigned int, CVSoundTypeManager::SfxDictEntry>, int>::operator[](
			int i);  // 720
	CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry>::CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry>(
									const unsigned int& k,
									const SfxDictEntry& v);  // 1514
	Construct<CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry>, unsigned int&, const CVSoundTypeManager::SfxDictEntry&>(CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry>* pMemory); // 720
	DoInsert<unsigned int>(const CUtlHashtable<unsigned int, CVSoundTypeManager::SfxDictEntry, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor this,
				unsigned int k,
				Arg_t v,
				unsigned int h,
				bool* pDidInsert);  // 714
	DoInsert<unsigned int>(const CUtlHashtable<unsigned int, CVSoundTypeManager::SfxDictEntry, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor this,
				unsigned int k,
				Arg_t v,
				unsigned int h,
				bool* pDidInsert);  // 249
	Mix32HashFunctor::operator(
			uint32 n);  // 249
	Insert(const CUtlHashtable<unsigned int, CVSoundTypeManager::SfxDictEntry, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor this,
		KeyArg_t k,
		ValueArg_t v,
		bool* pDidInsert);  // 555
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 560
} /* size: 0, variables: 10, inline expansions: 32 (1160 bytes) */

// <026A0254> soundsystem/vsound_manager.cpp:571
// variable: 1
void S_SoundList(const CCommandContext& ctx, const CCommand& args)
{
	{
		CVSoundTypeManager* pManager; // 575
	}
} /* size: 25 */

// <0269FD1E> soundsystem/vsound_manager.cpp:580
// variables: 8
// function calls: 16
void CVSoundTypeManager::ListAllSounds()
{
	CSfxTable* sfx; // 582
	CAudioSource* pSource; // 583
	int size; // 584
	int total; // 584
	CPathBufferString nameBuf; // 585
	{
		UtlHashHandle_t i; // 588
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<unsigned int, CVSoundTypeManager::SfxDictEntry>, int>::Count(); // 915
			CUtlHashtableEntry<unsigned int, CVSoundTypeManager::SfxDictEntry>::IsValid(); // 917
		}
		CUtlMemory<CUtlHashtableEntry<unsigned int, CVSoundTypeManager::SfxDictEntry>, int>::Base(); // 914
		NextHandle(const CUtlHashtable<unsigned int, CVSoundTypeManager::SfxDictEntry, DefaultHashFunctor<unsigned int>, DefaultEqualF this,
				handle_t start);  // 208
		FirstHandle(const CUtlHashtable<unsigned int, CVSoundTypeManager::SfxDictEntry, DefaultHashFunctor<unsigned int>, DefaultEqualF this); // 588
		CUtlMemory<CUtlHashtableEntry<unsigned int, CVSoundTypeManager::SfxDictEntry>, int>::operator[](
				int i);  // 297
		operator[](const CUtlHashtable<unsigned int, CVSoundTypeManager::SfxDictEntry, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor this,
				handle_t idx);  // 590
		CUtlMemory<CUtlHashtableEntry<unsigned int, CVSoundTypeManager::SfxDictEntry>, int>::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<unsigned int, CVSoundTypeManager::SfxDictEntry>, int>::Count(); // 915
			CUtlHashtableEntry<unsigned int, CVSoundTypeManager::SfxDictEntry>::IsValid(); // 917
		}
		NextHandle(const CUtlHashtable<unsigned int, CVSoundTypeManager::SfxDictEntry, DefaultHashFunctor<unsigned int>, DefaultEqualF this,
				handle_t start);  // 588
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 585
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 610
} /* size: 706, variables: 5, inline expansions: 5 (87 bytes) */

// <0269F112> soundsystem/vsound_manager.cpp:613
// variables: 6
// function calls: 43
void CVSoundTypeManager::UnloadAllVSndResources()
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_615; // 615
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_616; // 616
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_620; // 620
		CVMixMasterVoiceList::GetMutex(); // 620
		ThreadInterlockedAssignIf64(volatile int64* pDest,
						int64 value,
						int64 comparand);  // 800
		CThreadFastMutex::TryLockInline(
				const char* pFileName,
				int nLineNumber,
				const ThreadId_t  threadId);  // 837
		ThreadPause(void); // 839
		CThreadFastMutex::Lock(
			const char* pFileName,
			int nLineNumber,
			unsigned int nSpinSleepTime);  // 943
		Lock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
				const CThreadFastMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 620
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 622
	}
	{
		UtlHashHandle_t i; // 626
		CUtlMemory<CUtlHashtableEntry<unsigned int, CVSoundTypeManager::SfxDictEntry>, int>::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<unsigned int, CVSoundTypeManager::SfxDictEntry>, int>::Count(); // 915
			CUtlHashtableEntry<unsigned int, CVSoundTypeManager::SfxDictEntry>::IsValid(); // 917
		}
		NextHandle(const CUtlHashtable<unsigned int, CVSoundTypeManager::SfxDictEntry, DefaultHashFunctor<unsigned int>, DefaultEqualF this,
				handle_t start);  // 208
		FirstHandle(const CUtlHashtable<unsigned int, CVSoundTypeManager::SfxDictEntry, DefaultHashFunctor<unsigned int>, DefaultEqualF this); // 626
		CUtlMemory<CUtlHashtableEntry<unsigned int, CVSoundTypeManager::SfxDictEntry>, int>::operator[](
				int i);  // 297
		operator[](const CUtlHashtable<unsigned int, CVSoundTypeManager::SfxDictEntry, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor this,
				handle_t idx);  // 628
		CUtlMemory<CUtlHashtableEntry<unsigned int, CVSoundTypeManager::SfxDictEntry>, int>::operator[](
				int i);  // 297
		operator[](const CUtlHashtable<unsigned int, CVSoundTypeManager::SfxDictEntry, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor this,
				handle_t idx);  // 631
		CUtlMemory<CUtlHashtableEntry<unsigned int, CVSoundTypeManager::SfxDictEntry>, int>::operator[](
				int i);  // 297
		operator[](const CUtlHashtable<unsigned int, CVSoundTypeManager::SfxDictEntry, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor this,
				handle_t idx);  // 632
		CUtlMemory<CUtlHashtableEntry<unsigned int, CVSoundTypeManager::SfxDictEntry>, int>::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<unsigned int, CVSoundTypeManager::SfxDictEntry>, int>::Count(); // 915
			CUtlHashtableEntry<unsigned int, CVSoundTypeManager::SfxDictEntry>::IsValid(); // 917
		}
		NextHandle(const CUtlHashtable<unsigned int, CVSoundTypeManager::SfxDictEntry, DefaultHashFunctor<unsigned int>, DefaultEqualF this,
				handle_t start);  // 626
	}
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 615
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 616
	CClassMemoryPool<CSfxTable, CUtlMemoryPool<CSfxTable> >::Clear(); // 636
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 637
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 637
} /* size: 665, variables: 2, inline expansions: 17 (724 bytes) */

// <0269EFC1> soundsystem/vsound_manager.cpp:642
// variable: 1
// function calls: 4
void CVSoundTypeManager::GetVsndPath(vsnds_id_t vsndSymbol)
{
	UtlSymId_t nIndex; // 644
	CUtlSymbol::operator UtlSymId_t(); // 644
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
	CUtlSymbolTable::GetNumStrings(); // 646
	CUtlSymbol::CUtlSymbol(
			const CUtlSymbol& sym);  // 648
} /* size: 74, variables: 1, inline expansions: 4 (7 bytes) */

