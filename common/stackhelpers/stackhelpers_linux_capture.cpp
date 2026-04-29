
//
// common/stackhelpers/stackhelpers_linux_capture.cpp
//
//	referenced by: libtier0.so
//
//	functions: 20
//

// <00411C6E> ../common/stackhelpers/stackhelpers_linux_capture.cpp:51
void StackTools_ReportChangeToListeners(StackTranslation_LoadedModuleInfo_t *, bool)
{
} /* size: 0 */

// <00413048> ../common/stackhelpers/stackhelpers_linux_capture.cpp:53
// variable: 1
// function call: 1
void CCaptureHelper_Linux_NoConstruct::~CCaptureHelper_Linux_NoConstruct()
{
	{
		LoadedModule_t* pModule; // 122
	}
	CCaptureHelper_Linux_NoConstruct::UnloadModules(); // 55
} /* size: 75, inline expansions: 1 (59 bytes) */

// <0041302C> ../common/stackhelpers/stackhelpers_linux_capture.cpp:53
void CCaptureHelper_Linux_NoConstruct::~CCaptureHelper_Linux_NoConstruct()
{
} /* size: 0 */

// <00412FED> ../common/stackhelpers/stackhelpers_linux_capture.cpp:58
void CCaptureHelper_Linux_NoConstruct::SetSymbolSearchPath(const char* szSemicolonSeparatedList)
{
} /* size: 5 */

// <00412FA0> ../common/stackhelpers/stackhelpers_linux_capture.cpp:63
void CCaptureHelper_Linux_NoConstruct::VerifyLoadedModuleMappings()
{
} /* size: 9 */

// <00412E6A> ../common/stackhelpers/stackhelpers_linux_capture.cpp:68
// variables: 2
// function call: 1
void CCaptureHelper_Linux_NoConstruct::LoadedModule(const char* szModuleName, PlatModule_t hModule, void* pBaseAddress, uint32 nSize)
{
	LoadedModule_t* pModule; // 79
	{
		uint64 nBase; // 82
		CCaptureHelper_Linux_NoConstruct::FindModuleByAddress(
					uint64 nAddr);  // 83
	}
} /* size: 163, variables: 1 */

// <00412E09> ../common/stackhelpers/stackhelpers_linux_capture.cpp:101
void CCaptureHelper_Linux_NoConstruct::UnloadedModule(PlatModule_t hModule)
{
} /* size: 17 */

// <00412DCA> ../common/stackhelpers/stackhelpers_linux_capture.cpp:113
void CCaptureHelper_Linux_NoConstruct::SetLoadingModuleState(bool bEnabled)
{
} /* size: 5 */

// <00413300> ../common/stackhelpers/stackhelpers_linux_capture.cpp:118
// variable: 1
void CCaptureHelper_Linux_NoConstruct::UnloadModules()
{
	{
		LoadedModule_t* pModule; // 122
	}
} /* size: 0 */

// <00412D18> ../common/stackhelpers/stackhelpers_linux_capture.cpp:129
// variables: 2
void CCaptureHelper_Linux_NoConstruct::IsElfHeader(uint64 nBase)
{
	uint8* pRaw; // 131
	ElfPtr_Ehdr* pHdr; // 151
} /* size: 57, variables: 2 */

// <00412B98> ../common/stackhelpers/stackhelpers_linux_capture.cpp:163
// variables: 10
void CCaptureHelper_Linux_NoConstruct::FindElfBuildId(uint64 nBase, uint8** pId, uint32* pIdBytes)
{
	ElfPtr_Ehdr* pHdr; // 169
	ElfPtr_Phdr* pProgHdrs; // 175
	{
		uint i; // 176
		{
			uint8* pData; // 183
			uint8* pDataEnd; // 184
			{
				uint32 nNameLen; // 188
				uint32 nBodyLen; // 190
				uint32 nType; // 192
				char* pName; // 194
				uint8* pBody; // 196
			}
		}
	}
} /* size: 343, variables: 2 */

// <00413354> ../common/stackhelpers/stackhelpers_linux_capture.cpp:215
// variables: 2
void CCaptureHelper_Linux_NoConstruct::ParseDec(char** pText)
{
	uint64 nVal; // 217
	{
		char ch; // 220
	}
} /* size: 0, variables: 1 */

// <00412AE5> ../common/stackhelpers/stackhelpers_linux_capture.cpp:236
// variables: 2
void CCaptureHelper_Linux_NoConstruct::ParseHex(char** pText)
{
	uint64 nVal; // 238
	{
		char ch; // 241
	}
} /* size: 129, variables: 1 */

// <00412918> ../common/stackhelpers/stackhelpers_linux_capture.cpp:265
// variables: 5
// function calls: 2
void CCaptureHelper_Linux_NoConstruct::ReadProcMaps()
{
	int nFile; // 267
	int nBytes; // 273
	char* pBuf; // 274
	{
		int nTotalRead; // 282
		{
			int nRead; // 285
			read(int __fd,
				void* __buf,
				size_t __nbytes);  // 285
		}
	}
	open(const char* __path,
		int __oflag, ...);  // 267
} /* size: 186, variables: 3, inline expansions: 1 (16 bytes) */

// <00412426> ../common/stackhelpers/stackhelpers_linux_capture.cpp:310
// variables: 14
// function calls: 4
void CCaptureHelper_Linux_NoConstruct::ParseProcMaps()
{

Exit: // 571
	bool bSuccess; // 312
	char* pText; // 314
	LoadedModule_t* pModule; // 322
	char* pScan; // 330
	LoadedModule_t** pPrevModule; // 495
	{
		uint64 nBase; // 333
		uint64 nEnd; // 342
		uint nFlags; // 351
		uint64 nOffset; // 404
		char* pTail; // 438
		{
			uint32 nSize; // 461
			CCaptureHelper_Linux_NoConstruct::AddModuleSegment(
					LoadedModule_t* pModule,
					uint64 nBase,
					uint32 nSize);  // 485
		}
		{
			char ch; // 220
		}
		CCaptureHelper_Linux_NoConstruct::ParseDec(
			char** pText);  // 431
		strstr(char* __haystack,
			const char* __needle);  // 450
		strstr(char* __haystack,
			const char* __needle);  // 450
	}
	{
		uint8* pBuildId; // 530
		uint32 nBuildIdBytes; // 531
	}
} /* size: 1360, variables: 5, goto labels: 1 */

// <004122B7> ../common/stackhelpers/stackhelpers_linux_capture.cpp:576
// variables: 3
// function calls: 2
void CCaptureHelper_Linux_NoConstruct::FindModuleByPath(const char* pPath)
{
	bool bFileOnly; // 578
	LoadedModule_t* pModule; // 579
	{
		const char* pFile; // 584
		strrchr(char* __s,
			int __c);  // 584
	}
	strrchr(const char* __s,
		int __c);  // 578
} /* size: 169, variables: 2, inline expansions: 1 (13 bytes) */

// <004133B4> ../common/stackhelpers/stackhelpers_linux_capture.cpp:609
// variable: 1
void CCaptureHelper_Linux_NoConstruct::FindModuleByAddress(uint64 nAddr)
{
	LoadedModule_t* pModule; // 611
} /* size: 0, variables: 1 */

// <004120E5> ../common/stackhelpers/stackhelpers_linux_capture.cpp:626
// variable: 1
// function calls: 2
void CCaptureHelper_Linux_NoConstruct::CreateTranslationInfo(const char* pPath, uint64 nBase, uint32 nSize, uint8* pBuildId, uint32 nBuildIdBytes)
{
	StackTranslation_LoadedModuleInfo_t* pInfo; // 628
	strcpy(char* __dest,
		const char* __src);  // 634
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 638
} /* size: 144, variables: 1, inline expansions: 2 (41 bytes) */

// <00411F33> ../common/stackhelpers/stackhelpers_linux_capture.cpp:644
// variables: 4
// function call: 1
void CCaptureHelper_Linux_NoConstruct::AddModule(const char* pPath, uint64 nBase, uint32 nSize)
{
	int nPathChars; // 646
	LoadedModule_t* pModule; // 647
	uint8* pBuildId; // 659
	uint32 nBuildIdBytes; // 660
	strcpy(char* __dest,
		const char* __src);  // 650
} /* size: 252, variables: 4, inline expansions: 1 (25 bytes) */

// <004133F1> ../common/stackhelpers/stackhelpers_linux_capture.cpp:671
void CCaptureHelper_Linux_NoConstruct::AddModuleSegment(LoadedModule_t* pModule, uint64 nBase, uint32 nSize)
{
} /* size: 0 */

