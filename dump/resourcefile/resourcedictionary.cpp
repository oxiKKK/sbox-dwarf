
//
// resourcefile/resourcedictionary.cpp
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	functions: 45
//

// <066D21E8> resourcefile/resourcedictionary.cpp:18
// variable: 1
bool IsSource1ResourceFileName(const char* pFileName)
{
	const char* pExt; // 20
} /* size: 0, variables: 1 */

// <066D216E> resourcefile/resourcedictionary.cpp:25
bool GenerateContentRelativePathFromFullPath(const char* pFullPath, CBufferString* pRelativePathOut)
{
} /* size: 0 */

// <066D0FBE> resourcefile/resourcedictionary.cpp:123
// variable: 1
// function calls: 8
void GenerateResourceNameFromFileName(const char* pFileName, ResourceType_t nType, CBufferString* pResourceName, bool bQuiet)
{
	CPathBufferString fixedFileName; // 125
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 125
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 127
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 128
} /* size: 0, variables: 1, inline expansions: 8 (0 bytes) */

// <066D0EFA> resourcefile/resourcedictionary.cpp:134
// variables: 3
// function call: 1
bool HasGameResourceFileExtensionSuffix(const char* pFileName)
{
	char* pExt; // 136
	int nLen; // 143
	bool bHasSuffix; // 144
	V_strlen(const char* str); // 143
} /* size: 0, variables: 3, inline expansions: 1 (0 bytes) */

// <066D0ECB> resourcefile/resourcedictionary.cpp:152
const char* AppendGameResourceFileExtensionSuffix(const char* pFileName, CBufferString* pScratchBuf)
{
} /* size: 0 */

// <066D0E94> resourcefile/resourcedictionary.cpp:164
void GenerateStandardRelativePathForResourceName(const char* pResourceName, ResourcePathGenerationType_t type, CBufferString* pOutResultBuf)
{
} /* size: 0 */

// <014B8E1D> resourcefile/resourcedictionary.cpp:179
// variables: 2
// function calls: 22
bool GenerateStandardFullPathForResourceName(const char* pResourceName, ResourcePathGenerationType_t type, CBufferString* pFullPath)
{
	CPathBufferString relativePathBuf; // 187
	const char* pPathID; // 190
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 187
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 172
	GenerateStandardRelativePathForResourceName(const char* pResourceName,
							ResourcePathGenerationType_t type,
							CBufferString* pOutResultBuf);  // 164
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 158
	AppendGameResourceFileExtensionSuffix(const char* pFileName,
						CBufferString* pScratchBuf);  // 152
	AppendGameResourceFileExtensionSuffix(const char* pFileName,
						CBufferString* pScratchBuf);  // 168
	GenerateStandardRelativePathForResourceName(const char* pResourceName,
							ResourcePathGenerationType_t type,
							CBufferString* pOutResultBuf);  // 188
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 196
	CFileSystemPassThru::RelativePathToFullPath(
				const char* pFileName,
				const char* pPathID,
				CBufferString* pLocalPath,
				PathTypeFilter_t pathFilter);  // 163
	CFileSystemPassThru::RelativePathToFullPath(
				const char* pFileName,
				const char* pPathID,
				CBufferString* pLocalPath,
				PathTypeFilter_t pathFilter);  // 163
	CFileSystemPassThru::RelativePathToFullPath(
				const char* pFileName,
				const char* pPathID,
				CBufferString* pLocalPath,
				PathTypeFilter_t pathFilter);  // 163
	CFileSystemPassThru::RelativePathToFullPath(
				const char* pFileName,
				const char* pPathID,
				CBufferString* pLocalPath,
				PathTypeFilter_t pathFilter);  // 196
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 202
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 198
} /* size: 0, variables: 2, inline expansions: 22 (0 bytes) */

// <066D04F9> resourcefile/resourcedictionary.cpp:208
// variable: 1
// function calls: 9
void SetResourceFileNameExtension(const char* pFileName, ResourceType_t nType, CBufferString* pOutFileName)
{
	char pExt; // 211
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1256
	CBufferString::CopyAndFixupPathName(
				const char* pPath,
				char chSeparator);  // 213
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 81
	ResourceTypeToExt(char* pOutChars,
				size_t nBufferSize,
				ResourceType_t nType);  // 89
	ResourceTypeToExt<9>(char& pDest,
				ResourceType_t nType);  // 212
} /* size: 0, variables: 1, inline expansions: 9 (0 bytes) */

// <014B7654> resourcefile/resourcedictionary.cpp:292
// variables: 14
// function calls: 33
bool FixupResourceName(CBufferString* pInOutResourceName)
{
	const char* pActualExt; // 306
	const char  cDesiredPathSeparator; // 327
	const char* pOrigResourceName; // 328
	const char* pExtensionWithDot; // 329
	CPathBufferString fixedResourceName; // 330
	int nOldResourceNameLength; // 332
	int nNewResourceNameLength; // 333
	bool bMightNeedRemoveDotSlashes; // 334
	const char   __FUNCTION__; // 38180
	char* pFixedResourceName; // 338
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 336
	}
	{
		int i; // 339
		int cLastCharacter; // 339
		{
			char c; // 341
			FastASCIIToLower<int>(int c); // 341
		}
	}
	CBufferString::IsEmpty(); // 294
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 299
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 793
	CBufferString::GetHeadChar(); // 299
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 309
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 328
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 330
	CBufferString::Length(); // 332
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 302
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 310
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 364
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 367
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 301
	V_strlen(const char* str); // 361
} /* size: 0, variables: 10, inline expansions: 32 (902 bytes) */

// <00738F33> resourcefile/resourcedictionary.cpp:292
// variables: 14
// function calls: 33
bool FixupResourceName(CBufferString* pInOutResourceName)
{
	const char* pActualExt; // 306
	const char  cDesiredPathSeparator; // 327
	const char* pOrigResourceName; // 328
	const char* pExtensionWithDot; // 329
	CPathBufferString fixedResourceName; // 330
	int nOldResourceNameLength; // 332
	int nNewResourceNameLength; // 333
	bool bMightNeedRemoveDotSlashes; // 334
	const char   __FUNCTION__; // 1888
	char* pFixedResourceName; // 338
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 336
	}
	{
		int i; // 339
		int cLastCharacter; // 339
		{
			char c; // 341
			FastASCIIToLower<int>(int c); // 341
		}
	}
	CBufferString::IsEmpty(); // 294
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 299
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 793
	CBufferString::GetHeadChar(); // 299
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 309
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 328
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 330
	CBufferString::Length(); // 332
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 302
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 310
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 364
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 367
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 301
	V_strlen(const char* str); // 361
} /* size: 0, variables: 10, inline expansions: 32 (0 bytes) */

// <008FD6E2> resourcefile/resourcedictionary.cpp:292
// variables: 14
// function calls: 33
bool FixupResourceName(CBufferString* pInOutResourceName)
{
	const char* pActualExt; // 306
	const char  cDesiredPathSeparator; // 327
	const char* pOrigResourceName; // 328
	const char* pExtensionWithDot; // 329
	CPathBufferString fixedResourceName; // 330
	int nOldResourceNameLength; // 332
	int nNewResourceNameLength; // 333
	bool bMightNeedRemoveDotSlashes; // 334
	const char   __FUNCTION__; // 32991
	char* pFixedResourceName; // 338
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 336
	}
	{
		int i; // 339
		int cLastCharacter; // 339
		{
			char c; // 341
			FastASCIIToLower<int>(int c); // 341
		}
	}
	CBufferString::IsEmpty(); // 294
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 299
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 793
	CBufferString::GetHeadChar(); // 299
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 309
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 328
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 330
	CBufferString::Length(); // 332
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 302
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 310
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 364
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 367
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 301
	V_strlen(const char* str); // 361
} /* size: 0, variables: 10, inline expansions: 32 (902 bytes) */

// <00CB8E43> resourcefile/resourcedictionary.cpp:292
// variables: 14
// function calls: 33
bool FixupResourceName(CBufferString* pInOutResourceName)
{
	const char* pActualExt; // 306
	const char  cDesiredPathSeparator; // 327
	const char* pOrigResourceName; // 328
	const char* pExtensionWithDot; // 329
	CPathBufferString fixedResourceName; // 330
	int nOldResourceNameLength; // 332
	int nNewResourceNameLength; // 333
	bool bMightNeedRemoveDotSlashes; // 334
	const char   __FUNCTION__; // 28229
	char* pFixedResourceName; // 338
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 336
	}
	{
		int i; // 339
		int cLastCharacter; // 339
		{
			char c; // 341
			FastASCIIToLower<int>(int c); // 341
		}
	}
	CBufferString::IsEmpty(); // 294
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 299
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 793
	CBufferString::GetHeadChar(); // 299
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 309
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 328
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 330
	CBufferString::Length(); // 332
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 302
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 310
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 364
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 367
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 301
	V_strlen(const char* str); // 361
} /* size: 0, variables: 10, inline expansions: 32 (902 bytes) */

// <066CEFBD> resourcefile/resourcedictionary.cpp:373
// variable: 1
// function call: 1
bool IsResourceNameValid(const char* pResourceName)
{
	{
		const char* c; // 382
		V_isupper(char c); // 384
	}
} /* size: 0 */

// <066CEF92> resourcefile/resourcedictionary.cpp:396
ResourceId_t ComputeResourceIdFromFixedResourceName(const CPathBufferString& fixedResourceName)
{
} /* size: 0 */

// <0311FEE7> resourcefile/resourcedictionary.cpp:415
// variable: 1
// function calls: 14
ResourceId_t ComputeResourceIdFromResourceName(const char* pResourceName)
{
	CPathBufferString fixedResourceName; // 420
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 420
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 288
	FixupResourceName(const char* pResourceName,
				CBufferString* pOutResourceName);  // 421
	CBufferString::IsEmpty(); // 422
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 426
	CBufferString::Length(); // 398
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 398
	ResourceId_t::ResourceId_t(
			uint64 value);  // 398
	ComputeResourceIdFromFixedResourceName(const CPathBufferString& fixedResourceName); // 425
} /* size: 0, variables: 1, inline expansions: 14 (0 bytes) */

// <066CE7AC> resourcefile/resourcedictionary.cpp:431
// function calls: 3
void CResourceName::CResourceName()
{
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 431
} /* size: 37, inline expansions: 3 (24 bytes) */

// <066CE78F> resourcefile/resourcedictionary.cpp:431
void CResourceName::CResourceName()
{
} /* size: 0 */

// <066CE5CE> resourcefile/resourcedictionary.cpp:438
// function calls: 6
void CResourceName::CResourceName(const char* pResourceName)
{
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 438
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 671
	CBufferStringN<200>::operator=(
			const char* pSrc);  // 484
	CResourceName::Init(
		const char* pResourceName);  // 440
} /* size: 80, inline expansions: 6 (94 bytes) */

// <066CE5A4> resourcefile/resourcedictionary.cpp:438
void CResourceName::CResourceName(const char* pResourceName)
{
} /* size: 0 */

// <066CE3C7> resourcefile/resourcedictionary.cpp:446
// function calls: 6
void CResourceName::CResourceName(const char* pResourceName, ResourceType_t nType)
{
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 446
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 671
	CBufferStringN<200>::operator=(
			const char* pSrc);  // 493
	CResourceName::Init(
		const char* pResourceName,
		ResourceType_t nResourceType);  // 448
} /* size: 89, inline expansions: 6 (104 bytes) */

// <066CE390> resourcefile/resourcedictionary.cpp:446
void CResourceName::CResourceName(const char* pResourceName, ResourceType_t nType)
{
} /* size: 0 */

// <066CE166> resourcefile/resourcedictionary.cpp:454
// function calls: 9
void CResourceName::CopyFrom(const CResourceName& rhs)
{
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 666
	CBufferString::Length(); // 666
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 666
	CBufferStringN<200>::operator=(
			const CBufferStringN<200>& src);  // 456
} /* size: 142, inline expansions: 9 (274 bytes) */

// <066D39F4> resourcefile/resourcedictionary.cpp:464
// function calls: 3
void CResourceName::Clear()
{
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 466
} /* size: 48, inline expansions: 3 (50 bytes) */

// <066CE149> resourcefile/resourcedictionary.cpp:464
void CResourceName::Clear()
{
} /* size: 0 */

// <066CE0E6> resourcefile/resourcedictionary.cpp:474
// function call: 1
void CResourceName::IsEmpty()
{
	CBufferString::IsEmpty(); // 476
} /* size: 14, inline expansions: 1 (9 bytes) */

// <066D3AA6> resourcefile/resourcedictionary.cpp:482
// function calls: 5
void CResourceName::Init(const char* pResourceName)
{
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 671
	CBufferStringN<200>::operator=(
			const char* pSrc);  // 484
} /* size: 80, inline expansions: 5 (152 bytes) */

// <066CE0BC> resourcefile/resourcedictionary.cpp:482
void CResourceName::Init(const char* pResourceName)
{
} /* size: 0 */

// <066D3C35> resourcefile/resourcedictionary.cpp:491
// function calls: 5
void CResourceName::Init(const char* pResourceName, ResourceType_t nResourceType)
{
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 671
	CBufferStringN<200>::operator=(
			const char* pSrc);  // 493
} /* size: 0, inline expansions: 5 (0 bytes) */

// <066CE085> resourcefile/resourcedictionary.cpp:491
void CResourceName::Init(const char* pResourceName, ResourceType_t nResourceType)
{
} /* size: 0 */

// <066CDEC7> resourcefile/resourcedictionary.cpp:500
// function calls: 5
void CResourceName::InitAndForceType(const char* pResourceName, ResourceType_t nResourceType)
{
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 671
	CBufferStringN<200>::operator=(
			const char* pSrc);  // 502
} /* size: 92, inline expansions: 5 (158 bytes) */

// <066CD91E> resourcefile/resourcedictionary.cpp:509
// variable: 1
// function calls: 25
void CResourceName::ProcessName(ResourceType_t nResourceType, bool bForceType)
{
	{
		char pExt; // 531
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 81
		ResourceTypeToExt(char* pOutChars,
					size_t nBufferSize,
					ResourceType_t nType);  // 89
		ResourceTypeToExt<9>(char& pDest,
					ResourceType_t nType);  // 532
	}
	CBufferString::IsEmpty(); // 511
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 466
	CResourceName::Clear(); // 539
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 466
	CResourceName::Clear(); // 522
	CBufferString::Length(); // 398
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 398
	ResourceId_t::ResourceId_t(
			uint64 value);  // 398
	ComputeResourceIdFromFixedResourceName(const CPathBufferString& fixedResourceName); // 544
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 545
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 466
	CResourceName::Clear(); // 513
} /* size: 409, inline expansions: 21 (402 bytes) */

// <066CD7A2> resourcefile/resourcedictionary.cpp:552
// variable: 1
// function calls: 4
void CResourceName::InitFormat(const char* pFormat, ...)
{
	va_list args; // 554
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 1029
	CBufferString::FormatV(
		const char* pFormat,
		typedef __va_list_tag __va_list_tag* marker);  // 556
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <066CD610> resourcefile/resourcedictionary.cpp:565
// variable: 1
// function calls: 4
void CResourceName::InitFormat(ResourceType_t nResourceType, const char* pFormat, ...)
{
	va_list args; // 567
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 1029
	CBufferString::FormatV(
		const char* pFormat,
		typedef __va_list_tag __va_list_tag* marker);  // 569
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <066CD563> resourcefile/resourcedictionary.cpp:578
// function calls: 3
void CResourceName::GetName()
{
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 580
} /* size: 37, inline expansions: 3 (82 bytes) */

// <066CD531> resourcefile/resourcedictionary.cpp:586
void CResourceName::GetType()
{
} /* size: 12 */

// <066CD4FF> resourcefile/resourcedictionary.cpp:594
void CResourceName::GetId()
{
} /* size: 12 */

// <066CD21D> resourcefile/resourcedictionary.cpp:602
// variables: 4
// function calls: 9
void CResourceName::AssertTypeIs(ResourceType_t nResourceType)
{
	char pExpectedType; // 607
	char pActualType; // 608
	const char   __FUNCTION__; // 10263
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 612
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 612
	}
	ResourceTypeToExt(char* pOutChars,
				size_t nBufferSize,
				ResourceType_t nType);  // 89
	ResourceTypeToExt<9>(char& pDest,
				ResourceType_t nType);  // 609
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 81
	ResourceTypeToExt(char* pOutChars,
				size_t nBufferSize,
				ResourceType_t nType);  // 89
	ResourceTypeToExt<9>(char& pDest,
				ResourceType_t nType);  // 610
} /* size: 150, variables: 3, inline expansions: 6 (32 bytes) */

// <0311E8AD> resourcefile/resourcedictionary.cpp:602
// variables: 4
// function calls: 9
void CResourceName::AssertTypeIs(ResourceType_t nResourceType)
{
	char pExpectedType; // 607
	char pActualType; // 608
	const char   __FUNCTION__; // 3484
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 612
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 612
	}
	ResourceTypeToExt(char* pOutChars,
				size_t nBufferSize,
				ResourceType_t nType);  // 89
	ResourceTypeToExt<9>(char& pDest,
				ResourceType_t nType);  // 609
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 81
	ResourceTypeToExt(char* pOutChars,
				size_t nBufferSize,
				ResourceType_t nType);  // 89
	ResourceTypeToExt<9>(char& pDest,
				ResourceType_t nType);  // 610
} /* size: 0, variables: 3, inline expansions: 6 (0 bytes) */

// <014B5804> resourcefile/resourcedictionary.cpp:602
// variables: 4
// function calls: 9
void CResourceName::AssertTypeIs(ResourceType_t nResourceType)
{
	char pExpectedType; // 607
	char pActualType; // 608
	const char   __FUNCTION__; // 38065
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 612
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 612
	}
	ResourceTypeToExt(char* pOutChars,
				size_t nBufferSize,
				ResourceType_t nType);  // 89
	ResourceTypeToExt<9>(char& pDest,
				ResourceType_t nType);  // 609
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 81
	ResourceTypeToExt(char* pOutChars,
				size_t nBufferSize,
				ResourceType_t nType);  // 89
	ResourceTypeToExt<9>(char& pDest,
				ResourceType_t nType);  // 610
} /* size: 150, variables: 3, inline expansions: 6 (32 bytes) */

// <007370E3> resourcefile/resourcedictionary.cpp:602
// variables: 4
// function calls: 9
void CResourceName::AssertTypeIs(ResourceType_t nResourceType)
{
	char pExpectedType; // 607
	char pActualType; // 608
	const char   __FUNCTION__; // 1773
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 612
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 612
	}
	ResourceTypeToExt(char* pOutChars,
				size_t nBufferSize,
				ResourceType_t nType);  // 89
	ResourceTypeToExt<9>(char& pDest,
				ResourceType_t nType);  // 609
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 81
	ResourceTypeToExt(char* pOutChars,
				size_t nBufferSize,
				ResourceType_t nType);  // 89
	ResourceTypeToExt<9>(char& pDest,
				ResourceType_t nType);  // 610
} /* size: 0, variables: 3, inline expansions: 6 (0 bytes) */

// <01984369> resourcefile/resourcedictionary.cpp:602
// variables: 4
// function calls: 9
void CResourceName::AssertTypeIs(ResourceType_t nResourceType)
{
	char pExpectedType; // 607
	char pActualType; // 608
	const char   __FUNCTION__; // 42440
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 612
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 612
	}
	ResourceTypeToExt(char* pOutChars,
				size_t nBufferSize,
				ResourceType_t nType);  // 89
	ResourceTypeToExt<9>(char& pDest,
				ResourceType_t nType);  // 609
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 81
	ResourceTypeToExt(char* pOutChars,
				size_t nBufferSize,
				ResourceType_t nType);  // 89
	ResourceTypeToExt<9>(char& pDest,
				ResourceType_t nType);  // 610
} /* size: 150, variables: 3, inline expansions: 6 (32 bytes) */

// <008FB892> resourcefile/resourcedictionary.cpp:602
// variables: 4
// function calls: 9
void CResourceName::AssertTypeIs(ResourceType_t nResourceType)
{
	char pExpectedType; // 607
	char pActualType; // 608
	const char   __FUNCTION__; // 32876
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 612
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 612
	}
	ResourceTypeToExt(char* pOutChars,
				size_t nBufferSize,
				ResourceType_t nType);  // 89
	ResourceTypeToExt<9>(char& pDest,
				ResourceType_t nType);  // 609
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 81
	ResourceTypeToExt(char* pOutChars,
				size_t nBufferSize,
				ResourceType_t nType);  // 89
	ResourceTypeToExt<9>(char& pDest,
				ResourceType_t nType);  // 610
} /* size: 150, variables: 3, inline expansions: 6 (32 bytes) */

// <00CB6FF3> resourcefile/resourcedictionary.cpp:602
// variables: 4
// function calls: 9
void CResourceName::AssertTypeIs(ResourceType_t nResourceType)
{
	char pExpectedType; // 607
	char pActualType; // 608
	const char   __FUNCTION__; // 28114
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 612
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 612
	}
	ResourceTypeToExt(char* pOutChars,
				size_t nBufferSize,
				ResourceType_t nType);  // 89
	ResourceTypeToExt<9>(char& pDest,
				ResourceType_t nType);  // 609
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 81
	ResourceTypeToExt(char* pOutChars,
				size_t nBufferSize,
				ResourceType_t nType);  // 89
	ResourceTypeToExt<9>(char& pDest,
				ResourceType_t nType);  // 610
} /* size: 150, variables: 3, inline expansions: 6 (32 bytes) */

// <066CD02E> resourcefile/resourcedictionary.cpp:619
// variables: 2
// function calls: 7
void CResourceNameFmt::CResourceNameFmt(const char* pFormat, ...)
{
	{
		va_list args; // 621
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 431
	CResourceName::CResourceName(); // 619
	{
		va_list args; // 621
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 1029
		CBufferString::FormatV(
			const char* pFormat,
			typedef __va_list_tag __va_list_tag* marker);  // 623
	}
} /* size: 255, inline expansions: 4 (56 bytes) */

// <066CCFF3> resourcefile/resourcedictionary.cpp:619
// variable: 1
void CResourceNameFmt::CResourceNameFmt(const char* pFormat, ...)
{
	{
		va_list args; // 621
	}
} /* size: 0 */

