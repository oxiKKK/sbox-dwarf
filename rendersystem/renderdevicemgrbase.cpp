
//
// rendersystem/renderdevicemgrbase.cpp
//
//	referenced by: librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 67
//	struct: 1
//

// <001DFC80> rendersystem/renderdevicemgrbase.cpp:37
// member variables: 2
// struct size: 16
struct ProblematicModule_t {
	const char * m_pModuleName; /* 0 8 */
	const char * m_pDescription; /* 8 8 */
};

// <001EE221> rendersystem/renderdevicemgrbase.cpp:53
// variables: 9
// function calls: 2
void ExitAndReportBadThirdPartyProcesses(void)
{
	char pModuleNames; // 55
	int nProblemCount; // 58
	int pProblemIndices; // 59
	char pLocalizedTitle; // 116
	char pLocalizedBody; // 117
	const char   __FUNCTION__; // 16735
	{
		int i; // 120
		{
			const char* pProblem; // 122
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 127
	}
	V_strcpy_safe<256>(char& pDest,
				const char* pSrc);  // 118
	V_strcpy_safe<8192>(char& pDest,
				const char* pSrc);  // 119
} /* size: 0, variables: 6, inline expansions: 2 (0 bytes) */

// <001E8E05> rendersystem/renderdevicemgrbase.cpp:53
// variables: 9
// function calls: 2
void ExitAndReportBadThirdPartyProcesses(void)
{
	char pModuleNames; // 55
	int nProblemCount; // 58
	int pProblemIndices; // 59
	char pLocalizedTitle; // 116
	char pLocalizedBody; // 117
	const char   __FUNCTION__; // 30832
	{
		int i; // 120
		{
			const char* pProblem; // 122
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 127
	}
	V_strcpy_safe<256>(char& pDest,
				const char* pSrc);  // 118
	V_strcpy_safe<8192>(char& pDest,
				const char* pSrc);  // 119
} /* size: 0, variables: 6, inline expansions: 2 (0 bytes) */

// <001EDBCA> rendersystem/renderdevicemgrbase.cpp:155
// function calls: 26
void CRenderDeviceMgrBase::CRenderDeviceMgrBase()
{
	IAppSystem::IAppSystem(); // 293
	IRenderDeviceMgr::IRenderDeviceMgr(); // 120
	CBaseAppSystem<IRenderDeviceMgr>::CBaseAppSystem(); // 171
	CTier0AppSystem<IRenderDeviceMgr, 0>::CTier0AppSystem(); // 225
	CTier1AppSystem<IRenderDeviceMgr, 0>::CTier1AppSystem(); // 48
	CUtlMemory<ResourceManifestDesc_t::ValidateGrowSize(); // 475
	CUtlMemory<ResourceManifestDesc_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ResourceManifestDesc_t::ResetDbgInfo(); // 530
	CUtlVectorBase<ResourceManifestDesc_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ResourceManifestDesc_t::CUtlVector(); // 48
	CTier2AppSystem<IRenderDeviceMgr, 0>::CTier2AppSystem(); // 156
	CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CRenderDeviceMgrBase::AdapterInfo_t, CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CRenderDeviceMgrBase::AdapterInfo_t, CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CRenderDeviceMgrBase::AdapterInfo_t, CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int> >::CUtlVector(); // 156
	CUtlMemory<void (::ValidateGrowSize()(), int>* this); // 475
	CUtlMemory<void (::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<void (::ResetDbgInfo()(), CUtlMemory<void (*)(), int> >* this); // 530
	CUtlVectorBase<void (::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<void (::CUtlVector()(), CUtlMemory<void (*)(), int> >* this); // 156
	CUtlMemory<IRenderDeviceEventListener::ValidateGrowSize(); // 475
	CUtlMemory<IRenderDeviceEventListener::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<IRenderDeviceEventListener::ResetDbgInfo(); // 530
	CUtlVectorBase<IRenderDeviceEventListener::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<IRenderDeviceEventListener::CUtlVector(); // 156
} /* size: 182, inline expansions: 26 (287 bytes) */

// <001EDBB1> rendersystem/renderdevicemgrbase.cpp:155
void CRenderDeviceMgrBase::CRenderDeviceMgrBase()
{
} /* size: 0 */

// <001ED490> rendersystem/renderdevicemgrbase.cpp:163
// function calls: 38
void CRenderDeviceMgrBase::~CRenderDeviceMgrBase()
{
	CUtlVectorBase<IRenderDeviceEventListener::RemoveAll(); // 1798
	CUtlMemory<IRenderDeviceEventListener::IsExternallyAllocated(); // 905
	CUtlMemory<IRenderDeviceEventListener::Purge(); // 903
	CUtlMemory<IRenderDeviceEventListener::Purge(); // 1799
	CUtlVectorBase<IRenderDeviceEventListener::Purge(); // 560
	ValidateAlignment<IRenderDeviceEventListener*>(void); // 508
	CUtlMemory<IRenderDeviceEventListener::Purge(); // 510
	CUtlMemory<IRenderDeviceEventListener::~CUtlMemory(); // 562
	CUtlVectorBase<IRenderDeviceEventListener::~CUtlVectorBase(); // 410
	CUtlVector<IRenderDeviceEventListener::~CUtlVector(); // 165
	CUtlVectorBase<void (::RemoveAll()(), CUtlMemory<void (*)(), int> >* this); // 1798
	CUtlMemory<void (::IsExternallyAllocated()(), int>* this); // 905
	CUtlMemory<void (::Purge()(), int>* this); // 903
	CUtlMemory<void (::Purge()(), int>* this); // 1799
	CUtlVectorBase<void (::Purge()(), CUtlMemory<void (*)(), int> >* this); // 560
	ValidateAlignment<void (*)()>(void); // 508
	CUtlMemory<void (::Purge()(), int>* this); // 510
	CUtlMemory<void (::~CUtlMemory()(), int>* this); // 562
	CUtlVectorBase<void (::~CUtlVectorBase()(), CUtlMemory<void (*)(), int> >* this); // 410
	CUtlVector<void (::~CUtlVector()(), CUtlMemory<void (*)(), int> >* this); // 165
	CUtlVectorBase<CRenderDeviceMgrBase::AdapterInfo_t, CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int>::Purge(); // 903
	CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int>::Purge(); // 1799
	CUtlVectorBase<CRenderDeviceMgrBase::AdapterInfo_t, CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int> >::Purge(); // 560
	ValidateAlignment<CRenderDeviceMgrBase::AdapterInfo_t>(void); // 508
	CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int>::Purge(); // 510
	CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CRenderDeviceMgrBase::AdapterInfo_t, CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CRenderDeviceMgrBase::AdapterInfo_t, CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int> >::~CUtlVector(); // 165
	CUtlMemory<ResourceManifestDesc_t::IsExternallyAllocated(); // 905
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 903
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 1799
	CUtlVectorBase<ResourceManifestDesc_t::RemoveAll(); // 1798
	CUtlVectorBase<ResourceManifestDesc_t::Purge(); // 560
	CUtlVectorBase<ResourceManifestDesc_t::~CUtlVectorBase(); // 410
	CUtlVector<ResourceManifestDesc_t::~CUtlVector(); // 42
	CTier2AppSystem<IRenderDeviceMgr, 0>::~CTier2AppSystem(); // 165
} /* size: 182, inline expansions: 38 (657 bytes) */

// <001ED429> rendersystem/renderdevicemgrbase.cpp:163
void CRenderDeviceMgrBase::~CRenderDeviceMgrBase()
{
} /* size: 0 */

// <001ED3E2> rendersystem/renderdevicemgrbase.cpp:180
void CRenderDeviceMgrBase::GetDependencies()
{
} /* size: 12 */

// <001ED24D> rendersystem/renderdevicemgrbase.cpp:189
// variable: 1
// function calls: 2
void CRenderDeviceMgrBase::Connect(CreateInterfaceFn factory)
{
	{
		const char* pRenderDocPath; // 196
	}
	CTier0AppSystem<IRenderDeviceMgr, 0>::Connect(
		CreateInterfaceFn factory);  // 54
	CTier2AppSystem<IRenderDeviceMgr, 0>::Connect(
		CreateInterfaceFn factory);  // 200
} /* size: 193, inline expansions: 2 (58 bytes) */

// <001ED075> rendersystem/renderdevicemgrbase.cpp:209
// function calls: 5
void CRenderDeviceMgrBase::Disconnect()
{
	CUtlVectorBase<ResourceManifestDesc_t::Count(); // 90
	CUtlMemory<ResourceManifestDesc_t::Base(); // 112
	CUtlVectorBase<ResourceManifestDesc_t::Base(); // 90
	CTier0AppSystem<IRenderDeviceMgr, 0>::Disconnect(); // 96
	CTier2AppSystem<IRenderDeviceMgr, 0>::Disconnect(); // 222
} /* size: 204, inline expansions: 5 (54 bytes) */

// <001ECEED> rendersystem/renderdevicemgrbase.cpp:228
// variable: 1
// function calls: 2
void CRenderDeviceMgrBase::Init()
{
	InitReturnVal_t nRetVal; // 241
	CTier0AppSystem<IRenderDeviceMgr, 0>::Init(); // 71
	CTier2AppSystem<IRenderDeviceMgr, 0>::Init(); // 241
} /* size: 189, variables: 1, inline expansions: 2 (44 bytes) */

// <001ECEB0> rendersystem/renderdevicemgrbase.cpp:251
void CRenderDeviceMgrBase::InstallRenderDeviceSetup(IRenderDeviceSetup* pSetup)
{
} /* size: 12 */

// <001ECDA5> rendersystem/renderdevicemgrbase.cpp:260
// variables: 2
// function calls: 2
void CRenderDeviceMgrBase::GetHardwareCaps(int nAdapter)
{
	const char   __FUNCTION__; // 16270
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 262
	}
	CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CRenderDeviceMgrBase::AdapterInfo_t, CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int> >::operator[](
			int i);  // 263
} /* size: 0, variables: 1, inline expansions: 2 (30 bytes) */

// <001E7989> rendersystem/renderdevicemgrbase.cpp:260
// variables: 2
// function calls: 2
void CRenderDeviceMgrBase::GetHardwareCaps(int nAdapter)
{
	const char   __FUNCTION__; // 30367
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 262
	}
	CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CRenderDeviceMgrBase::AdapterInfo_t, CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int> >::operator[](
			int i);  // 263
} /* size: 0, variables: 1, inline expansions: 2 (30 bytes) */

// <001ECD41> rendersystem/renderdevicemgrbase.cpp:271
// variables: 4
inline int ReadHexValue(KeyValues* pVal, HKeySymbol hKeyName)
{
	KeyValues* pSubkey; // 273
	{
		const char* pString; // 278
		char* pTemp; // 279
		int64 nVal; // 280
	}
} /* size: 0, variables: 1 */

// <001ECCF0> rendersystem/renderdevicemgrbase.cpp:299
// variable: 1
void ReadInt(KeyValues* pGroup, const char* pKeyName, int nInvalidValue, int* pResult)
{
	int nVal; // 301
} /* size: 0, variables: 1 */

// <001ECCA1> rendersystem/renderdevicemgrbase.cpp:313
// variables: 2
void AddKey(KeyValues* pDest, KeyValues* pSrc)
{
	const char   __FUNCTION__; // 16067
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 339
	}
} /* size: 0, variables: 1 */

// <001E7885> rendersystem/renderdevicemgrbase.cpp:313
// variables: 2
void AddKey(KeyValues* pDest, KeyValues* pSrc)
{
	const char   __FUNCTION__; // 30164
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 339
	}
} /* size: 0, variables: 1 */

// <001ECB98> rendersystem/renderdevicemgrbase.cpp:347
// variables: 2
void CRenderDeviceMgrBase::FindDXLevelSpecificConfig(KeyValues* pKeyValues, int nDxLevel)
{
	KeyValues* pGroup; // 349
	{
		int nFoundDxLevel; // 352
	}
} /* size: 0, variables: 1 */

// <001EC6AD> rendersystem/renderdevicemgrbase.cpp:363
// variables: 8
// function calls: 11
void CRenderDeviceMgrBase::FindDXLevelAndVendorSpecificConfig(KeyValues* pKeyValues, int nDxLevel, int nVendorID)
{
	KeyValues* pGroup; // 365
	CKeySymbol keyVendorID; // 366
	CKeySymbol keyName; // 367
	{
		int nFoundDxLevel; // 370
		int nFoundVendorID; // 371
		CKeyValues_Data::Internal_GetDataType(); // 444
		KeyValues::IsString(); // 276
		{
			const char* pString; // 278
			char* pTemp; // 279
			int64 nVal; // 280
		}
		ReadHexValue(KeyValues* pVal,
				HKeySymbol hKeyName);  // 371
		CKeySymbol::operator HKeySymbol(); // 370
		HKeySymbol::HKeySymbol(
				uint32 index);  // 669
		KeyValues::GetInt(
			int keySymbol,
			int defaultValue);  // 370
		CKeySymbol::operator HKeySymbol(); // 371
	}
	HKeySymbol::HKeySymbol(); // 629
	CKeySymbol::CKeySymbol(
			const char* pszSymbolName);  // 366
	HKeySymbol::HKeySymbol(); // 629
	CKeySymbol::CKeySymbol(
			const char* pszSymbolName);  // 367
} /* size: 0, variables: 3, inline expansions: 4 (0 bytes) */

// <001EC4B9> rendersystem/renderdevicemgrbase.cpp:382
// variables: 4
void CRenderDeviceMgrBase::FindCPUSpecificConfig(KeyValues* pKeyValues, int nCPUMhz, bool bAMD)
{
	{
		KeyValues* pGroup; // 384
		{
			const char* pName; // 386
			{
				int nMinMegahertz; // 393
				int nMaxMegahertz; // 394
			}
		}
	}
} /* size: 0 */

// <001EBCCE> rendersystem/renderdevicemgrbase.cpp:409
// variables: 16
// function calls: 18
void CRenderDeviceMgrBase::FindCardSpecificConfig(KeyValues* pKeyValues, int nVendorId, int nDeviceId)
{
	CKeySymbol keyVendorID; // 411
	CKeySymbol keyMinDeviceID; // 412
	CKeySymbol keyMaxDeviceID; // 413
	KeyValues* pGroup; // 414
	{
		int nFoundVendorId; // 417
		int nFoundDeviceIdMin; // 418
		int nFoundDeviceIdMax; // 419
		CKeyValues_Data::Internal_GetDataType(); // 444
		KeyValues::IsString(); // 276
		{
			const char* pString; // 278
			char* pTemp; // 279
			int64 nVal; // 280
		}
		ReadHexValue(KeyValues* pVal,
				HKeySymbol hKeyName);  // 417
		CKeySymbol::operator HKeySymbol(); // 418
		CKeyValues_Data::Internal_GetDataType(); // 444
		KeyValues::IsString(); // 276
		{
			const char* pString; // 278
			char* pTemp; // 279
			int64 nVal; // 280
		}
		ReadHexValue(KeyValues* pVal,
				HKeySymbol hKeyName);  // 418
		CKeySymbol::operator HKeySymbol(); // 419
		CKeyValues_Data::Internal_GetDataType(); // 444
		KeyValues::IsString(); // 276
		{
			const char* pString; // 278
			char* pTemp; // 279
			int64 nVal; // 280
		}
		ReadHexValue(KeyValues* pVal,
				HKeySymbol hKeyName);  // 419
		CKeySymbol::operator HKeySymbol(); // 417
	}
	HKeySymbol::HKeySymbol(); // 629
	CKeySymbol::CKeySymbol(
			const char* pszSymbolName);  // 411
	HKeySymbol::HKeySymbol(); // 629
	CKeySymbol::CKeySymbol(
			const char* pszSymbolName);  // 412
	HKeySymbol::HKeySymbol(); // 629
	CKeySymbol::CKeySymbol(
			const char* pszSymbolName);  // 413
} /* size: 648, variables: 4, inline expansions: 6 (87 bytes) */

// <001EBB94> rendersystem/renderdevicemgrbase.cpp:431
// variables: 3
void CRenderDeviceMgrBase::FindMemorySpecificConfig(KeyValues* pKeyValues, int nSystemRamMB)
{
	{
		KeyValues* pGroup; // 433
		{
			int nMinMB; // 438
			int nMaxMB; // 439
		}
	}
} /* size: 0 */

// <001EBA5A> rendersystem/renderdevicemgrbase.cpp:453
// variables: 3
void CRenderDeviceMgrBase::FindVidMemSpecificConfig(KeyValues* pKeyValues, int nVideoRamMB)
{
	{
		KeyValues* pGroup; // 455
		{
			int nMinMB; // 457
			int nMaxMB; // 458
		}
	}
} /* size: 0 */

// <001EB932> rendersystem/renderdevicemgrbase.cpp:472
// variables: 2
void CRenderDeviceMgrBase::ReadDXSupportKeyValues()
{
	KeyValues* pCfg; // 480
	const char* pPathID; // 482
} /* size: 215, variables: 2 */

// <001EB6A0> rendersystem/renderdevicemgrbase.cpp:499
// variables: 5
// function calls: 3
void CRenderDeviceMgrBase::ReadDXSupportLevels(HardwareCaps_t& caps)
{
	KeyValues* pCfg; // 502
	KeyValues* pDeviceKeyValues; // 506
	{
		int nMaxDXSupportLevel; // 510
		int nMinDXSupportLevel; // 517
		int nDXSupportLevel; // 525
		ReadInt(KeyValues* pGroup,
			const char* pKeyName,
			int nInvalidValue,
			int* pResult);  // 511
		ReadInt(KeyValues* pGroup,
			const char* pKeyName,
			int nInvalidValue,
			int* pResult);  // 518
		ReadInt(KeyValues* pGroup,
			const char* pKeyName,
			int nInvalidValue,
			int* pResult);  // 526
	}
} /* size: 177, variables: 2 */

// <001EAF7F> rendersystem/renderdevicemgrbase.cpp:541
// variables: 2
// function calls: 11
void CRenderDeviceMgrBase::LoadConfig(KeyValues* pKeyValues, KeyValues* pConfiguration)
{
	{
		CUtlBuffer tmpBuf; // 548
		CUtlMemory<unsigned char, int>::Base(); // 1484
		CUtlBuffer::Base(); // 550
		ValidateAlignment<unsigned char>(void); // 508
		CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned char, int>::Purge(); // 903
		CUtlMemory<unsigned char, int>::Purge(); // 510
		CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
		CUtlBuffer::~CUtlBuffer(); // 551
	}
	{
		KeyValues* pGroup; // 552
		Color::SetColor(
			int _r,
			int _g,
			int _b,
			int _a);  // 50
		Color::Color(
			int _r,
			int _g,
			int _b,
			int _a);  // 336
		{
		}
		AddKey(KeyValues* pDest,
			KeyValues* pSrc);  // 554
	}
} /* size: 0 */

// <001EAF51> rendersystem/renderdevicemgrbase.cpp:559
void CRenderDeviceMgrBase::GetVideoConfig()
{
} /* size: 12 */

// <001EAF23> rendersystem/renderdevicemgrbase.cpp:564
void CRenderDeviceMgrBase::GetSandboxVideoConfig()
{
} /* size: 12 */

// <001EAD67> rendersystem/renderdevicemgrbase.cpp:587
void CreateDefaultVideoConfigKeys(KeyValues* pKV)
{
} /* size: 186 */

// <001EAAA4> rendersystem/renderdevicemgrbase.cpp:601
// variables: 5
// function call: 1
void CopySettingKeysChooseLower(KeyValues* pModKeys, KeyValues* pConfigKeys)
{
	{
		KeyValues* pSubKey; // 603
		{
			const char* pSubKeyName; // 605
			const char* pValue; // 617
			{
				float flOldValue; // 612
				float flNewValue; // 613
			}
			V_strnicmp_fast<int>(const char* s1,
						const char* s2,
						int n);  // 607
		}
	}
} /* size: 295 */

// <001EA866> rendersystem/renderdevicemgrbase.cpp:623
// variables: 3
// function call: 1
void AddNewSettingKeys(KeyValues* pModKeys, KeyValues* pConfigKeys)
{
	{
		KeyValues* pSubKey; // 625
		{
			const char* pSubKeyName; // 627
			const char* pValue; // 633
			V_strnicmp_fast<int>(const char* s1,
						const char* s2,
						int n);  // 629
		}
	}
} /* size: 271 */

// <001EA4C1> rendersystem/renderdevicemgrbase.cpp:639
// variables: 9
// function calls: 6
void AddCPULevelKeys(KeyValues* pModKeys, KeyValues* pVideoConfigKeys)
{
	const CPUInformation& cpuInfo; // 642
	int nProcessorCount; // 643
	CKeySymbol keyMinProc; // 645
	CKeySymbol keyMaxProc; // 646
	{
		KeyValues* pModKey; // 648
		{
			KeyValues* pMinKey; // 650
			KeyValues* pMaxKey; // 651
			{
				int nMin; // 654
				int nMax; // 655
			}
			CKeySymbol::operator HKeySymbol(); // 650
			CKeySymbol::operator HKeySymbol(); // 651
		}
	}
	HKeySymbol::HKeySymbol(); // 629
	CKeySymbol::CKeySymbol(
			const char* pszSymbolName);  // 645
	HKeySymbol::HKeySymbol(); // 629
	CKeySymbol::CKeySymbol(
			const char* pszSymbolName);  // 646
} /* size: 255, variables: 4, inline expansions: 4 (58 bytes) */

// <001EA4A0> rendersystem/renderdevicemgrbase.cpp:669
// variable: 1
uint GetSystemRAMSizeMB(void)
{
	OsMemoryStatus_t memInfo; // 671
} /* size: 0, variables: 1 */

// <001EA12D> rendersystem/renderdevicemgrbase.cpp:679
// variables: 7
// function calls: 6
void AddMemoryKeys(KeyValues* pModKeys, int nMemory, KeyValues* pVideoConfigKeys)
{
	CKeySymbol keyMinMegabytes; // 681
	CKeySymbol keyMaxMegabytes; // 682
	{
		KeyValues* pModKey; // 683
		{
			KeyValues* pMinMegabytes; // 685
			KeyValues* pMaxMegabytes; // 686
			{
				int nMin; // 689
				int nMax; // 690
			}
			CKeySymbol::operator HKeySymbol(); // 685
			CKeySymbol::operator HKeySymbol(); // 686
		}
	}
	HKeySymbol::HKeySymbol(); // 629
	CKeySymbol::CKeySymbol(
			const char* pszSymbolName);  // 681
	HKeySymbol::HKeySymbol(); // 629
	CKeySymbol::CKeySymbol(
			const char* pszSymbolName);  // 682
} /* size: 239, variables: 2, inline expansions: 4 (58 bytes) */

// <001E9DBA> rendersystem/renderdevicemgrbase.cpp:701
// variables: 7
// function calls: 6
void AddVideoMemoryKeys(KeyValues* pModKeys, uint nVidMemory, KeyValues* pVideoConfigKeys)
{
	CKeySymbol keyMinMegatexels; // 703
	CKeySymbol keyMaxMegatexels; // 704
	{
		KeyValues* pModKey; // 705
		{
			KeyValues* pMinMegaTexels; // 707
			KeyValues* pMaxMegaTexels; // 708
			{
				uint nMin; // 711
				uint nMax; // 712
			}
			CKeySymbol::operator HKeySymbol(); // 707
			CKeySymbol::operator HKeySymbol(); // 708
		}
	}
	HKeySymbol::HKeySymbol(); // 629
	CKeySymbol::CKeySymbol(
			const char* pszSymbolName);  // 703
	HKeySymbol::HKeySymbol(); // 629
	CKeySymbol::CKeySymbol(
			const char* pszSymbolName);  // 704
} /* size: 239, variables: 2, inline expansions: 4 (58 bytes) */

// <001EEBC6> rendersystem/renderdevicemgrbase.cpp:723
void CRenderDeviceMgrBase::GetModDefaultFileName()
{
} /* size: 12 */

// <001E93D7> rendersystem/renderdevicemgrbase.cpp:728
// variables: 21
// function calls: 21
void CRenderDeviceMgrBase::AddVideoCardKeys(KeyValues* pModKeys, const HardwareCaps_t& hardwareCaps, KeyValues* pVideoConfigKeys)
{
	int nVendorID; // 730
	int nDeviceID; // 731
	bool bFoundDevice; // 732
	CKeySymbol keyVendorID; // 734
	CKeySymbol keyMinDeviceID; // 735
	CKeySymbol keyMaxDeviceID; // 736
	CKeySymbol unknownDeviceMarker; // 738
	{
		KeyValues* pModKey; // 740
		{
			int nVendor; // 743
			int iDeviceMin; // 747
			int iDeviceMax; // 748
			bool bUnknownDevice; // 753
			CKeyValues_Data::Internal_GetDataType(); // 444
			KeyValues::IsString(); // 276
			{
				const char* pString; // 278
				char* pTemp; // 279
				int64 nVal; // 280
			}
			ReadHexValue(KeyValues* pVal,
					HKeySymbol hKeyName);  // 743
			CKeySymbol::operator HKeySymbol(); // 747
			CKeyValues_Data::Internal_GetDataType(); // 444
			KeyValues::IsString(); // 276
			{
				const char* pString; // 278
				char* pTemp; // 279
				int64 nVal; // 280
			}
			ReadHexValue(KeyValues* pVal,
					HKeySymbol hKeyName);  // 747
			CKeySymbol::operator HKeySymbol(); // 748
			CKeyValues_Data::Internal_GetDataType(); // 444
			KeyValues::IsString(); // 276
			{
				const char* pString; // 278
				char* pTemp; // 279
				int64 nVal; // 280
			}
			ReadHexValue(KeyValues* pVal,
					HKeySymbol hKeyName);  // 748
			CKeySymbol::operator HKeySymbol(); // 753
			CKeySymbol::operator HKeySymbol(); // 743
		}
	}
	HKeySymbol::HKeySymbol(); // 629
	CKeySymbol::CKeySymbol(
			const char* pszSymbolName);  // 734
	HKeySymbol::HKeySymbol(); // 629
	CKeySymbol::CKeySymbol(
			const char* pszSymbolName);  // 735
	HKeySymbol::HKeySymbol(); // 629
	CKeySymbol::CKeySymbol(
			const char* pszSymbolName);  // 736
	HKeySymbol::HKeySymbol(); // 629
	CKeySymbol::CKeySymbol(
			const char* pszSymbolName);  // 738
} /* size: 881, variables: 7, inline expansions: 8 (116 bytes) */

// <001E91BB> rendersystem/renderdevicemgrbase.cpp:773
// variables: 3
// function calls: 3
void AddDXLevelKeys(KeyValues* pModKeys, int nDXLevel, KeyValues* pVideoConfigKeys)
{
	CKeySymbol keyMaxDXLevel; // 775
	{
		KeyValues* pModKey; // 777
		{
			KeyValues* pDXLevelKey; // 779
			CKeySymbol::operator HKeySymbol(); // 779
		}
	}
	HKeySymbol::HKeySymbol(); // 629
	CKeySymbol::CKeySymbol(
			const char* pszSymbolName);  // 775
} /* size: 165, variables: 1, inline expansions: 2 (29 bytes) */

// <001E89FC> rendersystem/renderdevicemgrbase.cpp:790
// variables: 7
// function calls: 9
void CRenderDeviceMgrBase::AutomaticVideoConfig(int nAdapter, int nCurrentVersion)
{
	KeyValues fileKeys; // 792
	int nDesktopWidth; // 827
	int nDesktopHeight; // 828
	{
		uint64 nMegatexels; // 810
		bool bFoundDevice; // 813
		GetSystemRAMSizeMB(void); // 807
		CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CRenderDeviceMgrBase::AdapterInfo_t, CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int> >::operator[](
				int i);  // 813
		CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CRenderDeviceMgrBase::AdapterInfo_t, CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int> >::operator[](
				int i);  // 818
	}
	{
		int nRecommendedWidth; // 834
		int nRecommendedHeight; // 835
	}
	CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CRenderDeviceMgrBase::AdapterInfo_t, CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int> >::operator[](
			int i);  // 795
	CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CRenderDeviceMgrBase::AdapterInfo_t, CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int> >::operator[](
			int i);  // 796
} /* size: 1152, variables: 3, inline expansions: 4 (20 bytes) */

// <001E89CE> rendersystem/renderdevicemgrbase.cpp:884
void GetVideoConfigFileName(int nAdapter, CUtlString* pVideoCfgFilename)
{
} /* size: 0 */

// <001E7A8A> rendersystem/renderdevicemgrbase.cpp:899
// variables: 10
// function calls: 33
void CRenderDeviceMgrBase::LoadVideoConfig(int nAdapter)
{
	int nCurrentConfigVersion; // 916
	KeyValues versionFileKeys; // 917
	bool bAutoConfig; // 932
	bool bWriteConfig; // 933
	{
		CUtlString videoCfgFilename; // 937
		{
			uint nVendorID; // 956
			uint nDeviceID; // 957
			{
				const int  nFileVersionNumber; // 966
				CUtlString::Get(); // 99
				CUtlString::String(); // 970
			}
			CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CRenderDeviceMgrBase::AdapterInfo_t, CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int> >::operator[](
					int i);  // 959
		}
		CUtlString::CUtlString(); // 937
		CUtlString::Get(); // 99
		CUtlString::String(); // 940
		CUtlString::~CUtlString(); // 983
	}
	{
		CUtlBuffer buf; // 999
		{
			bool bSuccess; // 1002
		}
		ValidateAlignment<unsigned char>(void); // 508
		CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned char, int>::Purge(); // 903
		CUtlMemory<unsigned char, int>::Purge(); // 510
		CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
		CUtlBuffer::~CUtlBuffer(); // 1016
		KeyValues::GetBool(
			const char* keyName,
			bool defaultValue);  // 1012
		KeyValues::GetBool(
			const char* keyName,
			bool defaultValue);  // 1011
		KeyValues::GetBool(
			const char* keyName,
			bool defaultValue);  // 1010
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 83
		CFmtStrN<256>::operator char const*(); // 1009
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 1009
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 83
		CFmtStrN<256>::operator char const*(); // 1008
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 1008
	}
	CUtlVectorBase<CRenderDeviceMgrBase::AdapterInfo_t, CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int> >::Count(); // 904
	CRenderDeviceMgrBase::WriteVideoConfig(); // 994
} /* size: 2053, variables: 4, inline expansions: 2 (17 bytes) */

// <001E78F8> rendersystem/renderdevicemgrbase.cpp:1026
// variables: 2
// function call: 1
void CRenderDeviceMgrBase::ResetVideoConfig()
{
	const char   __FUNCTION__; // 16297
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1028
	}
	CRenderDeviceMgrBase::WriteVideoConfig(); // 1040
} /* size: 0, variables: 1, inline expansions: 1 (25 bytes) */

// <001E24DC> rendersystem/renderdevicemgrbase.cpp:1026
// variables: 2
// function call: 1
void CRenderDeviceMgrBase::ResetVideoConfig()
{
	const char   __FUNCTION__; // 30394
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1028
	}
	CRenderDeviceMgrBase::WriteVideoConfig(); // 1040
} /* size: 0, variables: 1, inline expansions: 1 (25 bytes) */

// <001EF451> rendersystem/renderdevicemgrbase.cpp:1044
// variables: 2
void CRenderDeviceMgrBase::WriteVideoConfig()
{
	CUtlBuffer buf; // 1050
	CUtlString videoCfgFilename; // 1053
} /* size: 21, variables: 2 */

// <001EF0A1> rendersystem/renderdevicemgrbase.cpp:1044
// variables: 2
// function calls: 13
void CRenderDeviceMgrBase::WriteVideoConfig()
{
	CUtlBuffer buf; // 1050
	CUtlString videoCfgFilename; // 1053
	CUtlString::CUtlString(); // 1053
	CUtlString::Get(); // 1056
	CUtlString::~CUtlString(); // 1064
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 1064
	CUtlString::Get(); // 99
	CUtlString::String(); // 1062
	CUtlString::Get(); // 99
	CUtlString::String(); // 1058
} /* size: 377, variables: 2, inline expansions: 13 (193 bytes) */

// <001E7887> rendersystem/renderdevicemgrbase.cpp:1070
void CRenderDeviceMgrBase::GetClosestActualDXLevel(int nDxLevel)
{
} /* size: 0 */

// <001E74A2> rendersystem/renderdevicemgrbase.cpp:1089
// variables: 3
// function calls: 18
void CRenderDeviceMgrBase::AddModeChangeCallback(RenderModeChangeCallbackFunc_t func)
{
	const char   __FUNCTION__; // 16417
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1091
	}
	{
		int i; // 1531
		CUtlVectorBase<void (::Count()(), CUtlMemory<void (*)(), int> >* this); // 1531
		CUtlMemory<void (::operator[](
				int i);  // 609
		CUtlVectorBase<void (::Element(
			int i);  // 1533
	}
	CUtlVectorBase<void (::Find(
		void ()(void)* const& src);  // 1091
	CUtlMemory<void (::NumAllocated()(), int>* this); // 1196
	CUtlMemory<void (::Base()(), int>* this); // 112
	CUtlVectorBase<void (::Base()(), CUtlMemory<void (*)(), int> >* this); // 368
	CUtlVectorBase<void (::ResetDbgInfo()(), CUtlMemory<void (*)(), int> >* this); // 824
	CUtlMemory<void (::IsGrowable()(), int>* this); // 823
	CUtlMemory<void (::IsExternallyAllocated()(), int>* this); // 859
	CUtlMemory<void (::IsExternallyAllocated()(), int>* this); // 861
	CUtlMemory<void (::Grow(
		int num);  // 806
	CUtlVectorBase<void (::GrowMemory(
			int num);  // 1198
	CUtlMemory<void (::operator[](
			int i);  // 602
	CUtlVectorBase<void (::Element(
		int i);  // 1201
	CopyConstruct<void (*)()>(void ()(void)** pMemory,
					void ()(void)* const& src); // 1201
	CUtlVectorBase<void (::AddToTail(
			void ()(void)* const& src);  // 1092
} /* size: 0, variables: 1, inline expansions: 14 (887 bytes) */

// <001E2086> rendersystem/renderdevicemgrbase.cpp:1089
// variables: 3
// function calls: 18
void CRenderDeviceMgrBase::AddModeChangeCallback(RenderModeChangeCallbackFunc_t func)
{
	const char   __FUNCTION__; // 30514
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1091
	}
	{
		int i; // 1531
		CUtlVectorBase<void (::Count()(), CUtlMemory<void (*)(), int> >* this); // 1531
		CUtlMemory<void (::operator[](
				int i);  // 609
		CUtlVectorBase<void (::Element(
			int i);  // 1533
	}
	CUtlVectorBase<void (::Find(
		void ()(void)* const& src);  // 1091
	CUtlMemory<void (::NumAllocated()(), int>* this); // 1196
	CUtlMemory<void (::Base()(), int>* this); // 112
	CUtlVectorBase<void (::Base()(), CUtlMemory<void (*)(), int> >* this); // 368
	CUtlVectorBase<void (::ResetDbgInfo()(), CUtlMemory<void (*)(), int> >* this); // 824
	CUtlMemory<void (::IsGrowable()(), int>* this); // 823
	CUtlMemory<void (::IsExternallyAllocated()(), int>* this); // 859
	CUtlMemory<void (::IsExternallyAllocated()(), int>* this); // 861
	CUtlMemory<void (::Grow(
		int num);  // 806
	CUtlVectorBase<void (::GrowMemory(
			int num);  // 1198
	CUtlMemory<void (::operator[](
			int i);  // 602
	CUtlVectorBase<void (::Element(
		int i);  // 1201
	CopyConstruct<void (*)()>(void ()(void)** pMemory,
					void ()(void)* const& src); // 1201
	CUtlVectorBase<void (::AddToTail(
			void ()(void)* const& src);  // 1092
} /* size: 0, variables: 1, inline expansions: 14 (887 bytes) */

// <001E719E> rendersystem/renderdevicemgrbase.cpp:1095
// variable: 1
// function calls: 13
void CRenderDeviceMgrBase::RemoveModeChangeCallback(RenderModeChangeCallbackFunc_t func)
{
	{
		int i; // 1531
		CUtlVectorBase<void (::Count()(), CUtlMemory<void (*)(), int> >* this); // 1531
		CUtlMemory<void (::operator[](
				int i);  // 609
		CUtlVectorBase<void (::Element(
			int i);  // 1533
	}
	CUtlVectorBase<void (::Find(
		void ()(void)* const& src);  // 1617
	CUtlMemory<void (::operator[](
			int i);  // 602
	CUtlVectorBase<void (::Element(
		int i);  // 1114
	CUtlMemory<void (::operator[](
			int i);  // 602
	CUtlVectorBase<void (::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<void (::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<void (::Remove(
		int elem);  // 1620
	CUtlVectorBase<void (::FindAndRemove(
			void ()(void)* const& src);  // 1097
} /* size: 143, inline expansions: 10 (365 bytes) */

// <001E6F71> rendersystem/renderdevicemgrbase.cpp:1100
// variables: 4
// function calls: 6
void CRenderDeviceMgrBase::InvokeModeChangeCallbacks(const RenderDeviceInfo_t& mode)
{
	int nCount; // 1102
	int nEventListenersCount; // 1108
	{
		int i; // 1103
		CUtlMemory<void (::operator[](
				int i);  // 588
		CUtlVectorBase<void (::operator[](
				int i);  // 1105
	}
	{
		int i; // 1109
		CUtlMemory<IRenderDeviceEventListener::operator[](
				int i);  // 588
		CUtlVectorBase<IRenderDeviceEventListener::operator[](
				int i);  // 1111
	}
	CUtlVectorBase<void (::Count()(), CUtlMemory<void (*)(), int> >* this); // 1102
	CUtlVectorBase<IRenderDeviceEventListener::Count(); // 1108
} /* size: 119, variables: 2, inline expansions: 2 (9 bytes) */

// <001E6930> rendersystem/renderdevicemgrbase.cpp:1118
// variables: 3
// function calls: 23
void CRenderDeviceMgrBase::GetAllDisplayModes(CUtlVector<RenderDisplayMode_t, CUtlMemory<RenderDisplayMode_t, int> >& listOut, int nAdapter, bool bCommonWindowed)
{
	int nModeCount; // 1120
	{
		int i; // 1122
		CUtlMemory<RenderDisplayMode_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<RenderDisplayMode_t, CUtlMemory<RenderDisplayMode_t, int> >::operator[](
				int i);  // 1124
	}
	CUtlVectorBase<RenderDisplayMode_t, CUtlMemory<RenderDisplayMode_t, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlMemory<RenderDisplayMode_t, int>::NumAllocated(); // 782
	CUtlMemory<RenderDisplayMode_t, int>::Base(); // 112
	CUtlVectorBase<RenderDisplayMode_t, CUtlMemory<RenderDisplayMode_t, int> >::Base(); // 368
	CUtlVectorBase<RenderDisplayMode_t, CUtlMemory<RenderDisplayMode_t, int> >::ResetDbgInfo(); // 824
	CUtlMemory<RenderDisplayMode_t, int>::IsGrowable(); // 823
	CUtlMemory<RenderDisplayMode_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<RenderDisplayMode_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<RenderDisplayMode_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<RenderDisplayMode_t, CUtlMemory<RenderDisplayMode_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<RenderDisplayMode_t, CUtlMemory<RenderDisplayMode_t, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
		CUtlMemory<RenderDisplayMode_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<RenderDisplayMode_t, CUtlMemory<RenderDisplayMode_t, int> >::Element(
			int i);  // 1453
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 213
		RenderDisplayMode_t::RenderDisplayMode_t(); // 1479
		Construct<RenderDisplayMode_t>(RenderDisplayMode_t* pMemory); // 1453
	}
	CUtlVectorBase<RenderDisplayMode_t, CUtlMemory<RenderDisplayMode_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<RenderDisplayMode_t, CUtlMemory<RenderDisplayMode_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<RenderDisplayMode_t, CUtlMemory<RenderDisplayMode_t, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<RenderDisplayMode_t, CUtlMemory<RenderDisplayMode_t, int> >::SetCount(
		int count);  // 1121
} /* size: 468, variables: 1, inline expansions: 15 (2122 bytes) */

// <001E6902> rendersystem/renderdevicemgrbase.cpp:1131
void CRenderDeviceMgrBase::GetPlatWindowFlags()
{
} /* size: 7 */

// <001E651D> rendersystem/renderdevicemgrbase.cpp:1139
// variables: 3
// function calls: 17
void CRenderDeviceMgrBase::AddDeviceEventListener(IRenderDeviceEventListener* pObject)
{
	const char   __FUNCTION__; // 16444
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1141
	}
	{
		int i; // 1531
		CUtlVectorBase<IRenderDeviceEventListener::Count(); // 1531
		CUtlMemory<IRenderDeviceEventListener::operator[](
				int i);  // 609
		CUtlVectorBase<IRenderDeviceEventListener::Element(
			int i);  // 1533
	}
	CUtlVectorBase<IRenderDeviceEventListener::Find(
		IRenderDeviceEventListener* const& src);  // 1141
	CUtlMemory<IRenderDeviceEventListener::NumAllocated(); // 1196
	CUtlMemory<IRenderDeviceEventListener::Base(); // 112
	CUtlVectorBase<IRenderDeviceEventListener::Base(); // 368
	CUtlVectorBase<IRenderDeviceEventListener::ResetDbgInfo(); // 824
	CUtlMemory<IRenderDeviceEventListener::IsGrowable(); // 823
	CUtlMemory<IRenderDeviceEventListener::IsExternallyAllocated(); // 859
	CUtlMemory<IRenderDeviceEventListener::IsExternallyAllocated(); // 861
	CUtlMemory<IRenderDeviceEventListener::Grow(
		int num);  // 806
	CUtlVectorBase<IRenderDeviceEventListener::GrowMemory(
			int num);  // 1198
	CUtlMemory<IRenderDeviceEventListener::operator[](
			int i);  // 602
	CUtlVectorBase<IRenderDeviceEventListener::Element(
		int i);  // 1201
	CopyConstruct<IRenderDeviceEventListener*>(IRenderDeviceEventListener** pMemory,
							IRenderDeviceEventListener* const& src);  // 1201
	CUtlVectorBase<IRenderDeviceEventListener::AddToTail(
			IRenderDeviceEventListener* const& src);  // 1142
} /* size: 0, variables: 1, inline expansions: 14 (1014 bytes) */

// <001E1101> rendersystem/renderdevicemgrbase.cpp:1139
// variables: 3
// function calls: 17
void CRenderDeviceMgrBase::AddDeviceEventListener(IRenderDeviceEventListener* pObject)
{
	const char   __FUNCTION__; // 30541
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1141
	}
	{
		int i; // 1531
		CUtlVectorBase<IRenderDeviceEventListener::Count(); // 1531
		CUtlMemory<IRenderDeviceEventListener::operator[](
				int i);  // 609
		CUtlVectorBase<IRenderDeviceEventListener::Element(
			int i);  // 1533
	}
	CUtlVectorBase<IRenderDeviceEventListener::Find(
		IRenderDeviceEventListener* const& src);  // 1141
	CUtlMemory<IRenderDeviceEventListener::NumAllocated(); // 1196
	CUtlMemory<IRenderDeviceEventListener::Base(); // 112
	CUtlVectorBase<IRenderDeviceEventListener::Base(); // 368
	CUtlVectorBase<IRenderDeviceEventListener::ResetDbgInfo(); // 824
	CUtlMemory<IRenderDeviceEventListener::IsGrowable(); // 823
	CUtlMemory<IRenderDeviceEventListener::IsExternallyAllocated(); // 859
	CUtlMemory<IRenderDeviceEventListener::IsExternallyAllocated(); // 861
	CUtlMemory<IRenderDeviceEventListener::Grow(
		int num);  // 806
	CUtlVectorBase<IRenderDeviceEventListener::GrowMemory(
			int num);  // 1198
	CUtlMemory<IRenderDeviceEventListener::operator[](
			int i);  // 602
	CUtlVectorBase<IRenderDeviceEventListener::Element(
		int i);  // 1201
	CopyConstruct<IRenderDeviceEventListener*>(IRenderDeviceEventListener** pMemory,
							IRenderDeviceEventListener* const& src);  // 1201
	CUtlVectorBase<IRenderDeviceEventListener::AddToTail(
			IRenderDeviceEventListener* const& src);  // 1142
} /* size: 0, variables: 1, inline expansions: 14 (1014 bytes) */

// <001E6219> rendersystem/renderdevicemgrbase.cpp:1145
// variable: 1
// function calls: 13
void CRenderDeviceMgrBase::RemoveDeviceEventListener(IRenderDeviceEventListener* pObject)
{
	{
		int i; // 1531
		CUtlVectorBase<IRenderDeviceEventListener::Count(); // 1531
		CUtlMemory<IRenderDeviceEventListener::operator[](
				int i);  // 609
		CUtlVectorBase<IRenderDeviceEventListener::Element(
			int i);  // 1533
	}
	CUtlVectorBase<IRenderDeviceEventListener::Find(
		IRenderDeviceEventListener* const& src);  // 1617
	CUtlMemory<IRenderDeviceEventListener::operator[](
			int i);  // 602
	CUtlVectorBase<IRenderDeviceEventListener::Element(
		int i);  // 1114
	CUtlMemory<IRenderDeviceEventListener::operator[](
			int i);  // 602
	CUtlVectorBase<IRenderDeviceEventListener::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<IRenderDeviceEventListener::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<IRenderDeviceEventListener::Remove(
		int elem);  // 1620
	CUtlVectorBase<IRenderDeviceEventListener::FindAndRemove(
			IRenderDeviceEventListener* const& src);  // 1147
} /* size: 143, inline expansions: 10 (365 bytes) */

// <001E6104> rendersystem/renderdevicemgrbase.cpp:1150
// variables: 2
// function calls: 3
void CRenderDeviceMgrBase::InvokeDeviceLostNotifications()
{
	int nCount; // 1152
	{
		int i; // 1153
		CUtlMemory<IRenderDeviceEventListener::operator[](
				int i);  // 588
		CUtlVectorBase<IRenderDeviceEventListener::operator[](
				int i);  // 1155
	}
	CUtlVectorBase<IRenderDeviceEventListener::Count(); // 1152
} /* size: 76, variables: 1, inline expansions: 1 (4 bytes) */

// <001E5FEF> rendersystem/renderdevicemgrbase.cpp:1159
// variables: 2
// function calls: 3
void CRenderDeviceMgrBase::InvokeDeviceCreatedNotifications()
{
	int nCount; // 1161
	{
		int i; // 1162
		CUtlMemory<IRenderDeviceEventListener::operator[](
				int i);  // 588
		CUtlVectorBase<IRenderDeviceEventListener::operator[](
				int i);  // 1164
	}
	CUtlVectorBase<IRenderDeviceEventListener::Count(); // 1161
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <001E5EDA> rendersystem/renderdevicemgrbase.cpp:1168
// variables: 2
// function calls: 3
void CRenderDeviceMgrBase::InvokeDeviceRestoredNotifications()
{
	int nCount; // 1170
	{
		int i; // 1171
		CUtlMemory<IRenderDeviceEventListener::operator[](
				int i);  // 588
		CUtlVectorBase<IRenderDeviceEventListener::operator[](
				int i);  // 1173
	}
	CUtlVectorBase<IRenderDeviceEventListener::Count(); // 1170
} /* size: 77, variables: 1, inline expansions: 1 (4 bytes) */

// <001E5E46> rendersystem/renderdevicemgrbase.cpp:1180
void* ShaderInterfaceFactory(const char* pInterfaceName, int* pReturnCode)
{
} /* size: 122 */

// <001EF49C> rendersystem/renderdevicemgrbase.cpp:1201
// variables: 5
// function calls: 4
void UpdateBestDesktopRectMatch(int nX1, int nY1, int nWidth1, int nHeight1, int nX2, int nY2, int nWidth2, int nHeight2, int nAdapterIndex, int* pBestAdapterIndex, int* pBestScore)
{
	int nXStart; // 1209
	int nXEnd; // 1210
	int nYStart; // 1217
	int nYEnd; // 1218
	int nScore; // 1226
	Max<int>(const int& val1,
		const int& val2);  // 1209
	Min<int>(const int& val1,
		const int& val2);  // 1210
	Max<int>(const int& val1,
		const int& val2);  // 1217
	Min<int>(const int& val1,
		const int& val2);  // 1218
} /* size: 0, variables: 5, inline expansions: 4 (0 bytes) */

// <001E5D6A> rendersystem/renderdevicemgrbase.cpp:1201
// variables: 5
void UpdateBestDesktopRectMatch(int nX1, int nY1, int nWidth1, int nHeight1, int nX2, int nY2, int nWidth2, int nHeight2, int nAdapterIndex, int* pBestAdapterIndex, int* pBestScore)
{
	int nXStart; // 1209
	int nXEnd; // 1210
	int nYStart; // 1217
	int nYEnd; // 1218
	int nScore; // 1226
} /* size: 0, variables: 5 */

// <001E5A35> rendersystem/renderdevicemgrbase.cpp:1238
// variables: 4
// function calls: 8
void FindDesktopRectInAdapterInfo(const CUtlVector<CRenderDeviceMgrBase::AdapterInfo_t, CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int> >& adapters, int nX, int nY, int nWidth, int nHeight)
{
	int nBestAdapterIndex; // 1241
	int nBestScore; // 1242
	{
		int i; // 1244
		{
			const AdapterInfo_t& info; // 1246
			Max<int>(const int& val1,
				const int& val2);  // 1209
			Min<int>(const int& val1,
				const int& val2);  // 1210
			Max<int>(const int& val1,
				const int& val2);  // 1217
			Min<int>(const int& val1,
				const int& val2);  // 1218
			UpdateBestDesktopRectMatch(int nX1,
							int nY1,
							int nWidth1,
							int nHeight1,
							int nX2,
							int nY2,
							int nWidth2,
							int nHeight2,
							int nAdapterIndex,
							int* pBestAdapterIndex,
							int* pBestScore);  // 1247
			CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CRenderDeviceMgrBase::AdapterInfo_t, CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int> >::operator[](
					int i);  // 1246
		}
		CUtlVectorBase<CRenderDeviceMgrBase::AdapterInfo_t, CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int> >::Count(); // 1244
	}
} /* size: 210, variables: 2 */

// <001E591A> rendersystem/renderdevicemgrbase.cpp:1255
// variables: 2
// function calls: 3
void FindRawAdapterAndOutputInAdapterInfo(const CUtlVector<CRenderDeviceMgrBase::AdapterInfo_t, CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int> >& adapters, int nRawAdapter, int nRawOutput)
{
	{
		int i; // 1258
		{
			const AdapterInfo_t& info; // 1260
			CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CRenderDeviceMgrBase::AdapterInfo_t, CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int> >::operator[](
					int i);  // 1260
		}
		CUtlVectorBase<CRenderDeviceMgrBase::AdapterInfo_t, CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int> >::Count(); // 1258
	}
} /* size: 104 */

// <001E5712> rendersystem/renderdevicemgrbase.cpp:1276
// variables: 7
// function calls: 5
void CRenderDeviceMgrBase::GetVideoMemoryInfo(int nAdapter, uint64* pBudgetInBytesOut, uint64* pUsageInBytesOut, uint64* pRenderSystemUsageInBytesOut)
{
	const char   __FUNCTION__; // 16346
	const HardwareCaps_t& caps; // 1279
	uint64 nVBBytes; // 1281
	uint64 nIBBytes; // 1282
	uint64 nTexBytes; // 1283
	uint64 nCBBytes; // 1284
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1278
	}
	CInterlockedIntT<int, 4>::operator int(); // 59
	GetAllocatedBufferMemory(void); // 1282
	CInterlockedIntT<int, 4>::operator int(); // 61
	GetAllocatedBufferMemory(void); // 1281
	CTextureManagerBase::GetCurrentTextureMemorySize(); // 1283
} /* size: 0, variables: 6, inline expansions: 5 (47 bytes) */

// <001E02F6> rendersystem/renderdevicemgrbase.cpp:1276
// variables: 7
// function calls: 5
void CRenderDeviceMgrBase::GetVideoMemoryInfo(int nAdapter, uint64* pBudgetInBytesOut, uint64* pUsageInBytesOut, uint64* pRenderSystemUsageInBytesOut)
{
	const char   __FUNCTION__; // 30443
	const HardwareCaps_t& caps; // 1279
	uint64 nVBBytes; // 1281
	uint64 nIBBytes; // 1282
	uint64 nTexBytes; // 1283
	uint64 nCBBytes; // 1284
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1278
	}
	CInterlockedIntT<int, 4>::operator int(); // 59
	GetAllocatedBufferMemory(void); // 1282
	CInterlockedIntT<int, 4>::operator int(); // 61
	GetAllocatedBufferMemory(void); // 1281
	CTextureManagerBase::GetCurrentTextureMemorySize(); // 1283
} /* size: 0, variables: 6, inline expansions: 5 (47 bytes) */

// <001E56B4> rendersystem/renderdevicemgrbase.cpp:1300
void CRenderDeviceMgrBase::GetDynamicTextureMemoryBudget(int nAdapter, uint64_t* pHeapUsageOut, uint64_t* pHeapBudgetOut)
{
} /* size: 31 */

// <001E5570> rendersystem/renderdevicemgrbase.cpp:1323
// variables: 2
// function calls: 5
void CRenderDeviceMgrBase::GetDynamicTextureMemoryBudgetUsingModel(int nAdapter, uint64_t* pHeapUsageOut, uint64_t* pHeapBudgetOut)
{
	uint64 nGPUMemoryUsedBytes; // 1325
	uint64 nGPUHeapBudgetBytes; // 1326
	CInterlockedIntT<int, 4>::operator int(); // 59
	GetAllocatedBufferMemory(void); // 1330
	CInterlockedIntT<int, 4>::operator int(); // 61
	GetAllocatedBufferMemory(void); // 1329
	CTextureManagerBase::GetCurrentTextureMemorySize(); // 1334
} /* size: 0, variables: 2, inline expansions: 5 (0 bytes) */

