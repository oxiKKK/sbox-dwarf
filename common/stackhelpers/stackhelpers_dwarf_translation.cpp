
//
// common/stackhelpers/stackhelpers_dwarf_translation.cpp
//
//	referenced by: libtier0.so
//
//	functions: 34
//

// <00421AB7> ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:49
// function call: 1
void CStackTranslationHelper_Dwarf::CStackTranslationHelper_Dwarf(bool bIsLocal)
{
	CStackTranslationHelper::CStackTranslationHelper(); // 49
} /* size: 44, inline expansions: 1 (0 bytes) */

// <00421A92> ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:49
void CStackTranslationHelper_Dwarf::CStackTranslationHelper_Dwarf(bool bIsLocal)
{
} /* size: 0 */

// <004219B5> ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:59
// variables: 2
// function call: 1
void CStackTranslationHelper_Dwarf::~CStackTranslationHelper_Dwarf()
{
	{
		CDwarfModule* pModule; // 63
	}
	{
		CDwarfModule* pModule; // 63
		CDwarfModule::GetNextModule(); // 64
	}
} /* size: 117 */

// <0042198E> ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:59
// variable: 1
void CStackTranslationHelper_Dwarf::~CStackTranslationHelper_Dwarf()
{
	{
		CDwarfModule* pModule; // 63
	}
} /* size: 0 */

// <00421960> ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:71
void CStackTranslationHelper_Dwarf::AddRef()
{
} /* size: 9 */

// <00421D89> ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:76
// variable: 1
// function calls: 3
void CStackTranslationHelper_Dwarf::Release()
{
	{
		CDwarfModule* pModule; // 63
		CDwarfModule::GetNextModule(); // 64
	}
	CStackTranslationHelper_Dwarf::~CStackTranslationHelper_Dwarf(); // 81
	CStackTranslationHelper_Dwarf::Release(); // 76
} /* size: 123, inline expansions: 2 (173 bytes) */

// <00421947> ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:76
void CStackTranslationHelper_Dwarf::Release()
{
} /* size: 0 */

// <00421EBC> ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:86
void CStackTranslationHelper_Dwarf::EnsureReady()
{
} /* size: 0 */

// <004218C9> ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:95
// variables: 2
void CStackTranslationHelper_Dwarf::IsElfHeader(uint64 nBase)
{
	uint8* pRaw; // 97
	ElfPtr_Ehdr* pHdr; // 117
} /* size: 57, variables: 2 */

// <004217E1> ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:173
// variables: 5
void CStackTranslationHelper_Dwarf::GetInMemoryModuleSize(uint64 nBaseAddress)
{
	uint64 nDefBase; // 175
	uint64 nMax; // 176
	{
		ElfPtr_Ehdr* pHdr; // 181
		{
			ElfPtr_Phdr* pProgHdrs; // 184
			{
				uint i; // 185
			}
		}
	}
} /* size: 194, variables: 2 */

// <00421653> ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:253
// variable: 1
// function call: 1
void CStackTranslationHelper_Dwarf::AddLoadedModule(const char* pModulePath, uint64 nBaseAddress, uint32 nVirtualSize, uint8 nBuildIdFormat, const void* pBuildId, uint32 nBuildIdSize)
{
	CDwarfModule* pModule; // 258
	CDwarfModule::SetNextModule(
			CDwarfModule* pNext);  // 265
} /* size: 169, variables: 1, inline expansions: 1 (11 bytes) */

// <00422070> ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:271
// variable: 1
// function calls: 3
void CStackTranslationHelper_Dwarf::FindLoadedModule(uint64 nForAddress)
{
	{
		CDwarfModule* pModule; // 273
		CDwarfModule::GetVirtualSize(); // 475
		CDwarfModule::ContainsAddress(
				uint64 nAddr);  // 275
		CDwarfModule::GetNextModule(); // 273
	}
} /* size: 0 */

// <0042161E> ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:271
// variable: 1
void CStackTranslationHelper_Dwarf::FindLoadedModule(uint64 nForAddress)
{
	{
		CDwarfModule* pModule; // 273
	}
} /* size: 0 */

// <00422158> ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:284
// variable: 1
// function calls: 2
void CStackTranslationHelper_Dwarf::UnloadLoadedModule(CDwarfModule* pModule)
{
	{
		CDwarfModule** pList; // 286
		CDwarfModule::GetNextModuleLink(); // 286
		CDwarfModule::GetNextModule(); // 290
	}
} /* size: 0 */

// <004215B4> ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:284
// variable: 1
void CStackTranslationHelper_Dwarf::UnloadLoadedModule(CDwarfModule* pModule)
{
	{
		CDwarfModule** pList; // 286
	}
} /* size: 0 */

// <00420FD5> ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:299
// variables: 9
// function calls: 19
void CStackTranslationHelper_Dwarf::LoadSymbolsIfNeeded(uint64 nForAddress)
{
	CDwarfModule* pCurModule; // 318
	{
		const char* pSymPath; // 304
	}
	{
		Dl_info addrInfo; // 324
		uint64 nBaseAddress; // 331
		uint32 nSize; // 332
		uint8 nBuildIdFormat; // 339
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 447
		CDwarfModule::GetPrimaryFilePath(); // 347
		{
			CDwarfModule* pModule; // 273
			CDwarfModule::GetVirtualSize(); // 475
			CDwarfModule::ContainsAddress(
					uint64 nAddr);  // 275
			CDwarfModule::GetNextModule(); // 273
		}
		CStackTranslationHelper_Dwarf::FindLoadedModule(
				uint64 nForAddress);  // 344
		CDwarfModule::GetBaseAddress(); // 348
		{
			CDwarfModule** pList; // 286
			CDwarfModule::GetNextModuleLink(); // 286
			CDwarfModule::GetNextModule(); // 290
		}
		CStackTranslationHelper_Dwarf::UnloadLoadedModule(
					CDwarfModule* pModule);  // 352
		CDwarfModule::GetVirtualSize(); // 349
	}
	{
		CDwarfModule* pModule; // 273
		CDwarfModule::GetVirtualSize(); // 475
		CDwarfModule::ContainsAddress(
				uint64 nAddr);  // 275
		CDwarfModule::GetNextModule(); // 273
	}
	CStackTranslationHelper_Dwarf::FindLoadedModule(
			uint64 nForAddress);  // 373
	CDwarfModule::IsOpen(); // 377
	CDwarfModule::GetNumFailedOpenAttempts(); // 378
} /* size: 732, variables: 1, inline expansions: 3 (49 bytes) */

// <00420EBF> ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:391
// variable: 1
// function calls: 2
void CStackTranslationHelper_Dwarf::SetSymbolSearchPath(const char* szSemicolonSeparatedList)
{
	int nChars; // 395
	CStackTranslationHelper_Dwarf::EnsureReady(); // 393
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 398
} /* size: 101, variables: 1, inline expansions: 2 (29 bytes) */

// <00420E10> ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:401
// variables: 2
void CStackTranslationHelper_Dwarf::SetSymbolSearchPath(const wchar_t* szSemicolonSeparatedList)
{
	const char   __FUNCTION__; // 19758
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 403
	}
} /* size: 36, variables: 1 */

// <00420CEA> ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:406
// variable: 1
// function calls: 4
void CStackTranslationHelper_Dwarf::CanTranslatePointer(uint64 pAddress)
{
	{
		CDwarfModule* pModule; // 273
		CDwarfModule::GetVirtualSize(); // 475
		CDwarfModule::ContainsAddress(
				uint64 nAddr);  // 275
		CDwarfModule::GetNextModule(); // 273
	}
	CStackTranslationHelper_Dwarf::FindLoadedModule(
			uint64 nForAddress);  // 408
} /* size: 67, inline expansions: 1 (60 bytes) */

// <00420CAD> ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:411
void CStackTranslationHelper_Dwarf::SetLoadingModuleState(bool bLoading)
{
} /* size: 5 */

// <00420C43> ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:415
void CStackTranslationHelper_Dwarf::LoadedModule(const char* szModuleName, PlatModule_t hModule, void* pBaseAddress, uint32 nSize)
{
} /* size: 9 */

// <00420C06> ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:420
void CStackTranslationHelper_Dwarf::UnloadedModule(PlatModule_t hModule)
{
} /* size: 9 */

// <00420BD8> ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:425
void CStackTranslationHelper_Dwarf::VerifyLoadedModuleMappings()
{
} /* size: 9 */

// <00421EE5> ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:430
// variables: 2
// function calls: 5
void CStackTranslationHelper_Dwarf::ProcessModuleMapping(StackTranslation_LoadedModuleInfo_t* pModuleInfo)
{
	CDwarfModule* pModule; // 448
	{
		CDwarfModule* pModule; // 273
		CDwarfModule::GetVirtualSize(); // 475
		CDwarfModule::ContainsAddress(
				uint64 nAddr);  // 275
		CDwarfModule::GetNextModule(); // 273
	}
	CStackTranslationHelper_Dwarf::FindLoadedModule(
			uint64 nForAddress);  // 448
	CStackTranslationHelper_Dwarf::ProcessModuleMapping(
				StackTranslation_LoadedModuleInfo_t* pModuleInfo);  // 430
} /* size: 250, variables: 1, inline expansions: 2 (275 bytes) */

// <00420BA5> ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:430
// variable: 1
void CStackTranslationHelper_Dwarf::ProcessModuleMapping(StackTranslation_LoadedModuleInfo_t* pModuleInfo)
{
	CDwarfModule* pModule; // 448
} /* size: 0, variables: 1 */

// <00420B68> ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:459
void CStackTranslationHelper_Dwarf::ProcessVirtualMachineUpdate(StackTranslation_VirtualMachineUpdate_t* pVMUpdate)
{
} /* size: 7 */

// <00420B2B> ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:465
void CStackTranslationHelper_Dwarf::ReturnToMapping(StackTranslation_ModuleMappingMarker_t mappingMarker)
{
} /* size: 5 */

// <00420AFD> ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:469
void CStackTranslationHelper_Dwarf::GetCurrentMappingMarker()
{
} /* size: 7 */

// <00420AE4> ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:474
void CStackTranslationHelper_Dwarf::GetNewestMappingMarker()
{
} /* size: 0 */

// <00420AB6> ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:479
void CStackTranslationHelper_Dwarf::SyncToNewestMappings()
{
} /* size: 5 */

// <00420A11> ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:483
// variable: 1
// function call: 1
void CStackTranslationHelper_Dwarf::UnloadSymbolFiles()
{
	{
		CDwarfModule* pModule; // 485
		CDwarfModule::GetNextModule(); // 485
	}
} /* size: 58 */

// <00422204> ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:491
// variables: 6
// function calls: 9
void CStackTranslationHelper_Dwarf::GetTranslationData(uint64 pAddress, char* pModuleNameOut, uint nMaxModuleNameLength, char* pSymbolNameOut, uint nMaxSymbolNameLength, char* pFileNameOut, uint nMaxFileNameLength, uint* pLineNumberOut, uint* pSymbolDisplacementOut, uint* pLineDisplacementOut)
{
	CDwarfModule* pModule; // 498
	uint nRetVal; // 500
	CStackTranslationHelper_Dwarf::EnsureReady(); // 493
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 456
	CDwarfModule::GetPrimaryModuleName(); // 506
	V_strncpy<unsigned int>(char* pDest,
				const char* pSrc,
				unsigned int maxLenInChars);  // 506
	{
		SDwarfSymbolInfo symInfo; // 517
		uint32 nDisp; // 518
		V_strncpy<unsigned int>(char* pDest,
					const char* pSrc,
					unsigned int maxLenInChars);  // 523
	}
	{
		SDwarfSourceLineInfo lineInfo; // 547
		uint32 nDisp; // 548
		V_strncpy<unsigned int>(char* pDest,
					const char* pSrc,
					unsigned int maxLenInChars);  // 553
	}
	CStackTranslationHelper_Dwarf::GetTranslationData(
				uint64 pAddress,
				char* pModuleNameOut,
				uint nMaxModuleNameLength,
				char* pSymbolNameOut,
				uint nMaxSymbolNameLength,
				char* pFileNameOut,
				uint nMaxFileNameLength,
				uint* pLineNumberOut,
				uint* pSymbolDisplacementOut,
				uint* pLineDisplacementOut);  // 491
} /* size: 1079, variables: 2, inline expansions: 7 (1108 bytes) */

// <0042091D> ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:491
// variables: 6
void CStackTranslationHelper_Dwarf::GetTranslationData(uint64 pAddress, char* pModuleNameOut, uint nMaxModuleNameLength, char* pSymbolNameOut, uint nMaxSymbolNameLength, char* pFileNameOut, uint nMaxFileNameLength, uint* pLineNumberOut, uint* pSymbolDisplacementOut, uint* pLineDisplacementOut)
{
	CDwarfModule* pModule; // 498
	uint nRetVal; // 500
	{
		SDwarfSymbolInfo symInfo; // 517
		uint32 nDisp; // 518
	}
	{
		SDwarfSourceLineInfo lineInfo; // 547
		uint32 nDisp; // 548
	}
} /* size: 0, variables: 2 */

// <004207D5> ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:588
// variables: 2
void CStackTranslationHelper_Dwarf::GetTranslationData(uint64 pAddress, wchar_t* pModuleNameOut, uint nMaxModuleNameLength, wchar_t* pSymbolNameOut, uint nMaxSymbolNameLength, wchar_t* pFileNameOut, uint nMaxFileNameLength, uint* pLineNumberOut, uint* pSymbolDisplacementOut, uint* pLineDisplacementOut)
{
	const char   __FUNCTION__; // 18316
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 590
	}
} /* size: 29, variables: 1 */

