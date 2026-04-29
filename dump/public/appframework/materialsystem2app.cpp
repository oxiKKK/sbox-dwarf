
//
// public/appframework/materialsystem2app.cpp
//
//	referenced by: libengine2.so
//
//	functions: 35
//	class: 1
//

// <007D67DB> ../public/appframework/materialsystem2app.cpp:46
// function calls: 21
void CMaterialSystem2AppSystemDict::CMaterialSystem2AppSystemDict(const char* pWindowTitle, bool bIsConsoleApp, void* hInstance, void* hPrevInstance, int nCmdShow, bool bIsGameApp, bool bIsDedicatedServer)
{
	CTier1AppSystemDict::CTier1AppSystemDict(
				bool bIsConsoleApp,
				void* hInstance,
				void* hPrevInstance,
				int nCmdShow,
				bool bIsGameApp,
				bool bIsDedicatedServer);  // 260
	CUtlString::CUtlString(); // 260
	CUtlMemory<HResourceManifest__::ValidateGrowSize(); // 475
	CUtlMemory<HResourceManifest__::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<HResourceManifest__::ResetDbgInfo(); // 530
	CUtlVectorBase<HResourceManifest__::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<HResourceManifest__::CUtlVector(); // 260
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 260
	CUtlString::CUtlString(); // 260
	CUtlString::CUtlString(); // 260
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 263
	CUtlString::operator=(
			const char* src);  // 271
	CTier2AppSystemDict::CTier2AppSystemDict(
				bool bIsConsoleApp,
				void* hInstance,
				void* hPrevInstance,
				int nCmdShow,
				bool bIsGameApp,
				bool bIsDedicatedServer);  // 47
	CUtlString::CUtlString(); // 47
	CUtlString::operator=(
			const char* src);  // 52
	IRenderDeviceSetup::IRenderDeviceSetup(); // 47
	CUtlString::CUtlString(); // 47
	CUtlString::CUtlString(); // 47
	CUtlString::CUtlString(); // 47
	CUtlString::operator=(
			const char* src);  // 53
} /* size: 385, inline expansions: 21 (482 bytes) */

// <007D676E> ../public/appframework/materialsystem2app.cpp:46
void CMaterialSystem2AppSystemDict::CMaterialSystem2AppSystemDict(const char* pWindowTitle, bool bIsConsoleApp, void* hInstance, void* hPrevInstance, int nCmdShow, bool bIsGameApp, bool bIsDedicatedServer)
{
} /* size: 0 */

// <007D66D4> ../public/appframework/materialsystem2app.cpp:62
void CMaterialSystem2AppSystemDict::CMaterialSystem2AppSystemDict(const char* pWindowTitle, bool bIsConsoleApp, bool bIsGameApp, bool bIsDedicatedServer)
{
} /* size: 0 */

// <007D6638> ../public/appframework/materialsystem2app.cpp:68
void CMaterialSystem2AppSystemDict::CMaterialSystem2AppSystemDict(const MaterialSystem2AppSystemDictCreateInfo& createInfo)
{
} /* size: 63 */

// <007E149D> ../public/appframework/materialsystem2app.cpp:86
// function call: 1
void* RenderDeviceSetupFactory(const char* pName, int* pReturnCode)
{
	RenderDeviceSetupFactory(const char* pName,
				int* pReturnCode);  // 86
} /* size: 83, inline expansions: 1 (18 bytes) */

// <007D65E8> ../public/appframework/materialsystem2app.cpp:86
void* RenderDeviceSetupFactory(const char* pName, int* pReturnCode)
{
} /* size: 0 */

// <007E5876> ../public/appframework/materialsystem2app.cpp:107
// function calls: 8
void CMaterialSystem2AppSystemDict::Init()
{
	CAppSystemDict::GetApplicationInfo(); // 126
	KeyValues::SetBool(
		const char* keyName,
		bool value);  // 126
	CTier2AppSystemDict::Init(); // 433
	CTier2AppSystemDict::Init(); // 128
	CMaterialSystem2AppSystemDict::InitWithoutMaterialSystem(); // 111
	CTier2AppSystemDict::Init(); // 433
	CTier2AppSystemDict::Init(); // 114
	CMaterialSystem2AppSystemDict::Init(); // 107
} /* size: 406, inline expansions: 8 (670 bytes) */

// <007D65CF> ../public/appframework/materialsystem2app.cpp:107
void CMaterialSystem2AppSystemDict::Init()
{
} /* size: 0 */

// <007E567A> ../public/appframework/materialsystem2app.cpp:124
// function calls: 4
void CMaterialSystem2AppSystemDict::InitWithoutMaterialSystem()
{
	KeyValues::SetBool(
		const char* keyName,
		bool value);  // 126
	CAppSystemDict::GetApplicationInfo(); // 126
	CTier2AppSystemDict::Init(); // 433
	CTier2AppSystemDict::Init(); // 128
} /* size: 230, inline expansions: 4 (188 bytes) */

// <007D65B6> ../public/appframework/materialsystem2app.cpp:124
void CMaterialSystem2AppSystemDict::InitWithoutMaterialSystem()
{
} /* size: 0 */

// <007D644B> ../public/appframework/materialsystem2app.cpp:139
// function calls: 4
void CMaterialSystem2AppSystemDict::InitFinishSetupMaterialSystem()
{
	KeyValues::SetBool(
		const char* keyName,
		bool value);  // 147
	CAppSystemDict::GetApplicationInfo(); // 147
	CAppSystemDict::GetGameInfo(); // 470
	CTier2AppSystemDict::ResetFileSystemPaths(); // 149
} /* size: 96, inline expansions: 4 (43 bytes) */

// <007C9694> ../public/appframework/materialsystem2app.cpp:160
// member functions: 3
// member variable: 1
// class size: 32
class CScopeExitGuard {
	function<void()> m_exitFN; /* 0 32 */
	/* ../public/appframework/materialsystem2app.cpp:170 */
	void ~CScopeExitGuard(CScopeExitGuard* );
	/* ../public/appframework/materialsystem2app.cpp:164 */
	void CScopeExitGuard<CMaterialSystem2AppSystemDict::SetupMaterialSystem()::<lambda()> >(CScopeExitGuard* , );
	void ~CScopeExitGuard(class CScopeExitGuard *); /* linkage=_ZN15CScopeExitGuardD4Ev */
};

// <007D0BDC> ../public/appframework/materialsystem2app.cpp:164
void CScopeExitGuard::CScopeExitGuard<CMaterialSystem2AppSystemDict::SetupMaterialSystem(f)
{
} /* size: 0 */

// <007D0BB0> ../public/appframework/materialsystem2app.cpp:164
inline void CScopeExitGuard::CScopeExitGuard<CMaterialSystem2AppSystemDict::SetupMaterialSystem(f)
{
} /* size: 0 */

// <007D6434> ../public/appframework/materialsystem2app.cpp:170
void CScopeExitGuard::~CScopeExitGuard()
{
} /* size: 0 */

// <007D641B> ../public/appframework/materialsystem2app.cpp:170
inline void CScopeExitGuard::~CScopeExitGuard()
{
} /* size: 0 */

// <007D5D36> ../public/appframework/materialsystem2app.cpp:176
// variables: 6
// function calls: 25
void CMaterialSystem2AppSystemDict::SetupMaterialSystem()
{
	CScopeExitGuard unSunpressOnExit; // 180
	AppSystemInfo_t appSystems2; // 207
	{
		AppSystemInfo_t appSystems; // 190
		AppSystemInfo_t::AppSystemInfo_t(
				const char* pModuleName,
				const char* pInterfaceName);  // 193
	}
	swap<bool (*)(std::_Any_data&, const std::_Any_data&, std::_Manager_operation)>(bool ()(union _Any_data &, const union _Any_data &, _Manager_operation) *& __a,
											bool ()(union _Any_data &, const union _Any_data &, _Manager_operation) *& __b); // 561
	swap<std::_Any_data>(union _Any_data& __a,
				union _Any_data& __b);  // 560
	function<void()>::swap(
		function<void()>& __x); // 536
	_Function_base::_Function_base(); // 439
	{
		_M_not_empty_function<CMaterialSystem2AppSystemDict::SetupMaterialSystem()::<lambda()> >(const &); // 449
		_M_init_functor<CMaterialSystem2AppSystemDict::SetupMaterialSystem()::<lambda()>&>(union _Any_data& __functor,
													class& __f); // 451
	}
	function<void()>::function<CMaterialSystem2AppSystemDict::SetupMaterialSystem(
											class& __f); // 536
	_Function_base::~_Function_base(); // 336
	function<void()>::~function()>* this); // 536
	function<void()>::operator=<CMaterialSystem2AppSystemDict::SetupMaterialSystem(
											class& __f); // 166
	_Function_base::_Function_base(); // 371
	function<void()>::function()>* this); // 165
	CScopeExitGuard::CScopeExitGuard<CMaterialSystem2AppSystemDict::SetupMaterialSystem(
												 f);  // 180
	CTier2AppSystemDict::SuppressStartupManifestLoad(
					bool bEnable);  // 178
	CAppSystemDict::IsConsoleApp(); // 187
	_Function_base::_M_empty(); // 591
	function<void()>::operator()(const function<void()>* this); // 172
	_Function_base::~_Function_base(); // 336
	function<void()>::~function()>* this); // 173
	CScopeExitGuard::~CScopeExitGuard(); // 222
	AppSystemInfo_t::AppSystemInfo_t(
			const char* pModuleName,
			const char* pInterfaceName);  // 212
	AppSystemInfo_t::AppSystemInfo_t(
			const char* pModuleName,
			const char* pInterfaceName);  // 212
} /* size: 0, variables: 2, inline expansions: 20 (369 bytes) */

// <007D5B57> ../public/appframework/materialsystem2app.cpp:224
// function calls: 5
void CMaterialSystem2AppSystemDict::~CMaterialSystem2AppSystemDict()
{
	IInputSystem::DetachFromWindow(
			PlatWindow_t hWnd);  // 230
	CUtlString::~CUtlString(); // 238
	CUtlString::~CUtlString(); // 238
	CUtlString::~CUtlString(); // 238
	CUtlString::~CUtlString(); // 238
} /* size: 282, inline expansions: 5 (92 bytes) */

// <007D5AF0> ../public/appframework/materialsystem2app.cpp:224
void CMaterialSystem2AppSystemDict::~CMaterialSystem2AppSystemDict()
{
} /* size: 36 */

// <007E2DC5> ../public/appframework/materialsystem2app.cpp:240
void CMaterialSystem2AppSystemDict::GetRenderSystemDLLForOption(const char* pOption)
{
} /* size: 0 */

// <007D5549> ../public/appframework/materialsystem2app.cpp:259
// variables: 5
// function calls: 14
void CMaterialSystem2AppSystemDict::AddRenderSystem()
{
	const char* pShaderDLL; // 261
	CBufferStringN<50> shaderDLLBuf; // 262
	int loadError; // 314
	PlatModule_t module; // 315
	const char   __FUNCTION__; // 8032
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<50>::CBufferStringN(); // 262
	CAppSystemDict::IsDedicatedServer(); // 266
	CAppSystemDict::IsConsoleApp(); // 266
	CUtlString::IsEmpty(); // 295
	CMaterialSystem2AppSystemDict::GetRenderSystemDLLForOption(
					const char* pOption);  // 297
	CBufferString::~CBufferString(); // 587
	CBufferStringN<50>::~CBufferStringN(); // 351
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 274
	CAppSystemDict::IsInTestMode(); // 304
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 318
} /* size: 899, variables: 5, inline expansions: 14 (434 bytes) */

// <007D4DDD> ../public/appframework/materialsystem2app.cpp:354
// variables: 13
// function calls: 13
void CMaterialSystem2AppSystemDict::CreateRenderDevice()
{
	int nFlags; // 356
	int nAdapter; // 357
	bool bResizing; // 399
	int nDefaultDXLevel; // 418
	int nRequestedDXLevel; // 427
	{
		int nAdapterCount; // 382
		{
			int nMonitorX; // 372
			int nMonitorY; // 372
			int nMonitorWidth; // 372
			int nMonitorHeight; // 372
			int nFindAdapter; // 374
		}
		CAppSystemDict::IsConsoleApp(); // 367
		Color::SetColor(
			int _r,
			int _g,
			int _b,
			int _a);  // 50
		Color::Color(
			int _r,
			int _g,
			int _b,
			int _a);  // 388
	}
	{
		KeyValues* pGameInfo; // 402
		KeyValues* pKeys; // 403
		CAppSystemDict::GetGameInfo(); // 105
		CTier1Application::GetGameInfo(); // 402
		KeyValues::GetBool(
			const char* keyName,
			bool defaultValue);  // 406
	}
	CAppSystemDict::IsConsoleApp(); // 399
	CAppSystemDict::IsInToolsMode(); // 110
	CTier1Application::IsInToolsMode(); // 419
	CAppSystemDict::IsConsoleApp(); // 441
	CAppSystemDict::IsInToolsMode(); // 110
	CTier1Application::IsInToolsMode(); // 492
	CMaterialSystem2AppSystemDict::CreateMainWindow(
			bool bResizing);  // 443
} /* size: 1052, variables: 5, inline expansions: 7 (141 bytes) */

// <007D4D9F> ../public/appframework/materialsystem2app.cpp:450
void CMaterialSystem2AppSystemDict::SetAppWindowMultisampleType(RenderMultisampleType_t nType)
{
} /* size: 11 */

// <007D4D61> ../public/appframework/materialsystem2app.cpp:456
void CMaterialSystem2AppSystemDict::SetAppWindowDiscardMouseFocusClick(bool bDiscardMouseFocusClick)
{
} /* size: 12 */

// <007D4BF2> ../public/appframework/materialsystem2app.cpp:462
// variable: 1
// function calls: 2
bool IsNewValue_Bool(KeyValues* pVideoKeys, const char* pSetting, bool bExpectedValue)
{
	{
		bool bValue; // 466
		KeyValues::GetBool(
			const char* keyName,
			bool defaultValue);  // 466
	}
	KeyValues::SetBool(
		const char* keyName,
		bool value);  // 470
} /* size: 109, inline expansions: 1 (11 bytes) */

// <007D4BA8> ../public/appframework/materialsystem2app.cpp:474
// variable: 1
int IsNewValue_Int(KeyValues* pVideoKeys, const char* pSetting, int nExpectedValue)
{
	{
		int nValue; // 478
	}
} /* size: 0 */

// <007E415C> ../public/appframework/materialsystem2app.cpp:489
// variables: 21
// function calls: 2
void CMaterialSystem2AppSystemDict::CreateMainWindow(bool bResizing)
{
	KeyValues* pVideoKeys; // 499
	KeyValues* pSboxVideoSettings; // 500
	bool bBorderless; // 502
	int nWidth; // 513
	int nHeight; // 514
	int nRefreshNumerator; // 515
	int nRefreshDenominator; // 516
	bool bForceCoopFullscreen; // 524
	bool bForceWindowed; // 525
	bool bMinOnFocusLoss; // 526
	bool bForceHighDPI; // 528
	bool bHighDPI; // 529
	bool bForceFullscreenAtNativeResolution; // 531
	bool bFullscreen; // 537
	bool bCoopFullscreen; // 538
	bool bNoBorder; // 540
	bool bAcceptsInput; // 582
	bool bCreateVisibleWindow; // 583
	RenderMultisampleType_t nMSAAType; // 584
	const char* pWindowTitle; // 586
	RenderDeviceInfo_t mode; // 677
	CAppSystemDict::IsInToolsMode(); // 110
	CTier1Application::IsInToolsMode(); // 492
} /* size: 0, variables: 21, inline expansions: 2 (0 bytes) */

// <007E2E78> ../public/appframework/materialsystem2app.cpp:489
// variables: 29
// function calls: 29
void CMaterialSystem2AppSystemDict::CreateMainWindow(bool bResizing)
{
	KeyValues* pVideoKeys; // 499
	KeyValues* pSboxVideoSettings; // 500
	bool bBorderless; // 502
	int nWidth; // 513
	int nHeight; // 514
	int nRefreshNumerator; // 515
	int nRefreshDenominator; // 516
	bool bForceCoopFullscreen; // 524
	bool bForceWindowed; // 525
	bool bMinOnFocusLoss; // 526
	bool bForceHighDPI; // 528
	bool bHighDPI; // 529
	bool bForceFullscreenAtNativeResolution; // 531
	bool bFullscreen; // 537
	bool bCoopFullscreen; // 538
	bool bNoBorder; // 540
	bool bAcceptsInput; // 582
	bool bCreateVisibleWindow; // 583
	RenderMultisampleType_t nMSAAType; // 584
	const char* pWindowTitle; // 586
	RenderDeviceInfo_t mode; // 677
	CAppSystemDict::IsInToolsMode(); // 110
	CTier1Application::IsInToolsMode(); // 508
	KeyValues::GetBool(
		const char* keyName,
		bool defaultValue);  // 526
	KeyValues::GetBool(
		const char* keyName,
		bool defaultValue);  // 529
	KeyValues::GetBool(
		const char* keyName,
		bool defaultValue);  // 552
	{
		int nDesktopWidth; // 555
		int nDesktopHeight; // 556
	}
	CUtlString::IsEmpty(); // 590
	CAppSystemDict::IsGameApp(); // 587
	CAppSystemDict::IsDedicatedServer(); // 587
	CUtlString::IsEmpty(); // 599
	{
		int nTemp; // 603
	}
	RenderDeviceInfo_t::SetHighDPI(
			bool bHighDPI);  // 384
	RenderDeviceInfo_t::SetSettingsFlags(
			bool bFullscreen,
			bool bCoopFullscreen,
			bool bNoBorder,
			bool bHighDPI);  // 683
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 239
	V_memset(void* dest,
		int fill,
		size_t count);  // 213
	RenderDisplayMode_t::RenderDisplayMode_t(); // 239
	RenderDeviceInfo_t::RenderDeviceInfo_t(); // 677
	CAppSystemDict::IsGameApp(); // 695
	CUtlString::Get(); // 711
	CAppSystemDict::IsInToolsMode(); // 110
	CTier1Application::IsInToolsMode(); // 714
	{
		bool bWriteConfig; // 716
		RenderDeviceInfo_t::HasWindowBorder(); // 717
		RenderDeviceInfo_t::IsExclusiveFullscreen(); // 729
		RenderDeviceInfo_t::IsHighDPI(); // 733
		RenderDeviceInfo_t::IsCooperativeFullscreen(); // 737
		{
			int nValue; // 478
		}
		IsNewValue_Int(KeyValues* pVideoKeys,
				const char* pSetting,
				int nExpectedValue);  // 741
		{
			int nValue; // 478
		}
		IsNewValue_Int(KeyValues* pVideoKeys,
				const char* pSetting,
				int nExpectedValue);  // 745
		{
			int nValue; // 478
		}
		IsNewValue_Int(KeyValues* pVideoKeys,
				const char* pSetting,
				int nExpectedValue);  // 749
		{
			int nValue; // 478
		}
		IsNewValue_Int(KeyValues* pVideoKeys,
				const char* pSetting,
				int nExpectedValue);  // 753
	}
	KeyValues::GetBool(
		const char* keyName,
		bool defaultValue);  // 538
} /* size: 3130, variables: 21, inline expansions: 21 (689 bytes) */

// <007D4A2D> ../public/appframework/materialsystem2app.cpp:489
// variables: 25
void CMaterialSystem2AppSystemDict::CreateMainWindow(bool bResizing)
{
	KeyValues* pVideoKeys; // 499
	KeyValues* pSboxVideoSettings; // 500
	bool bBorderless; // 502
	int nWidth; // 513
	int nHeight; // 514
	int nRefreshNumerator; // 515
	int nRefreshDenominator; // 516
	bool bForceCoopFullscreen; // 524
	bool bForceWindowed; // 525
	bool bMinOnFocusLoss; // 526
	bool bForceHighDPI; // 528
	bool bHighDPI; // 529
	bool bForceFullscreenAtNativeResolution; // 531
	bool bFullscreen; // 537
	bool bCoopFullscreen; // 538
	bool bNoBorder; // 540
	bool bAcceptsInput; // 582
	bool bCreateVisibleWindow; // 583
	RenderMultisampleType_t nMSAAType; // 584
	const char* pWindowTitle; // 586
	RenderDeviceInfo_t mode; // 677
	{
		int nDesktopWidth; // 555
		int nDesktopHeight; // 556
	}
	{
		int nTemp; // 603
	}
	{
		bool bWriteConfig; // 716
	}
} /* size: 0, variables: 21 */

// <007D443E> ../public/appframework/materialsystem2app.cpp:769
// variables: 11
// function calls: 9
void CMaterialSystem2AppSystemDict::Create3DWindow(const char* pTitle, RenderDeviceInfo_t& mode, bool bResizing, bool bAcceptsInput, bool bVisible)
{
	int nWindowX; // 771
	int nWindowY; // 772
	int nPlatWindowFlags; // 789
	int nDesktopWidth; // 794
	int nDesktopHeight; // 795
	bool bGotResolutionFromDesktopResolution; // 797
	bool bDetectedDesktopResolution; // 798
	PlatWindow_t hWnd; // 841
	int nTries; // 870
	SwapChainHandle_t hSwapChain; // 880
	{
		KeyValues* pVideoCfg; // 889
	}
	CAppSystemDict::IsInToolsMode(); // 110
	CTier1Application::IsInToolsMode(); // 776
	RenderDeviceInfo_t::SetBorderedWindow(); // 780
	RenderDeviceInfo_t::IsExclusiveFullscreen(); // 434
	RenderDeviceInfo_t::GetWindowFlags(); // 789
	RenderDeviceInfo_t::IsExclusiveFullscreen(); // 801
	RenderDisplayMode_t::GetRefreshRate(); // 841
	IRenderDevice::CreateSwapChain(
			PlatWindow_t hWnd,
			const RenderDeviceInfo_t& mode,
			const char* pDebugName);  // 880
	IInputSystem::AttachToWindow(
			PlatWindow_t hWnd);  // 866
} /* size: 1110, variables: 10, inline expansions: 9 (271 bytes) */

// <007D43A6> ../public/appframework/materialsystem2app.cpp:909
// variable: 1
void CMaterialSystem2AppSystemDict::Destroy3DWindow(SwapChainHandle_t hSwapChain)
{
	PlatWindow_t hWindow; // 913
} /* size: 0, variables: 1 */

// <007E2E49> ../public/appframework/materialsystem2app.cpp:922
void CMaterialSystem2AppSystemDict::GetAppWindow()
{
} /* size: 43 */

// <007D4291> ../public/appframework/materialsystem2app.cpp:933
// variable: 1
// function calls: 2
void CMaterialSystem2AppSystemDict::SetAppWindowTitle(const char* pWindowTitle)
{
	PlatWindow_t hWindow; // 936
	CUtlString::operator=(
			const char* src);  // 935
	CMaterialSystem2AppSystemDict::GetAppWindow(); // 936
} /* size: 93, variables: 1, inline expansions: 2 (38 bytes) */

// <007D3DB1> ../public/appframework/materialsystem2app.cpp:947
// variables: 2
// function calls: 16
void CMaterialSystem2AppSystemDict::SetAppWindowIcon(const char* pWindowIconRelPath)
{
	{
		CPathBufferString fullPath; // 953
		{
			PlatWindow_t hWindow; // 958
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 956
			CMaterialSystem2AppSystemDict::GetAppWindow(); // 958
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 961
		}
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 953
		CFileSystemPassThru::RelativePathToFullPath(
					const char* pFileName,
					const char* pPathID,
					CBufferString* pLocalPath,
					PathTypeFilter_t pathFilter);  // 163
		CFileSystemPassThru::RelativePathToFullPath(
					const char* pFileName,
					const char* pPathID,
					CBufferString* pLocalPath,
					PathTypeFilter_t pathFilter);  // 954
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 964
	}
	CUtlString::operator=(
			const char* src);  // 949
	CUtlString::IsEmpty(); // 951
} /* size: 488, inline expansions: 2 (30 bytes) */

// <007D3D16> ../public/appframework/materialsystem2app.cpp:967
// function call: 1
void CMaterialSystem2AppSystemDict::SetInitialAppWindowImage(const char* pWindowImageVTex)
{
	CUtlString::operator=(
			const char* src);  // 969
} /* size: 16, inline expansions: 1 (5 bytes) */

// <007D1B5A> ../public/appframework/materialsystem2app.cpp:974
// variables: 24
// function calls: 146
void CMaterialSystem2AppSystemDict::DrawInitialWindowImage()
{
	const RenderDeviceInfo_t& mode; // 984
	int nRenderWidth; // 985
	int nRenderHeight; // 986
	RenderViewport_t renderViewport; // 993
	CRenderContextPtr pRenderContext; // 996
	{
		int nWndX; // 989
		int nWndY; // 989
	}
	{
		HMaterialStrong hInitialWindowMaterial; // 1002
		IMaterial2* pInitialWindowMaterial; // 1003
		HRenderTexture hInitialImage; // 1008
		int nTextureWidth; // 1011
		int nTextureHeight; // 1011
		const CTextureDesc* pTextureDesc; // 1012
		{
			float flNormalizedHeight; // 1020
			int nHeight; // 1023
			int nWidth; // 1024
			int nDestX; // 1026
			int nDestY; // 1027
			CRenderAttributes attr; // 1029
			clamp<float, float>(const float& val,
						const float& minVal,
						const float& maxVal);  // 1021
			_mm_store_ps(float* __P,
					__m128 __A);  // 2680
			StoreAlignedIntSIMD<>(i32x4& pSIMD,
						const fltx4& a);  // 45
			_mm_store_ps(float* __P,
					__m128 __A);  // 2680
			StoreAlignedIntSIMD<>(i32x4& pSIMD,
						const fltx4& a);  // 46
			SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 118
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::CUtlAttributeListChunk(); // 248
			CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveList(); // 248
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::CUtlAttributeList(); // 898
			_mm_store_ps(float* __P,
					__m128 __A);  // 2680
			StoreAlignedIntSIMD<>(i32x4& pSIMD,
						const fltx4& a);  // 39
			SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
			CUtlAttributeListChunk<VMatrix, 1, VMatrix>::CUtlAttributeListChunk(); // 248
			CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::CUtlIntrusiveList(); // 248
			CUtlAttributeList<VMatrix, 1, VMatrix, 2>::CUtlAttributeList(); // 898
			_mm_store_ps(float* __P,
					__m128 __A);  // 2680
			StoreAlignedIntSIMD<>(i32x4& pSIMD,
						const fltx4& a);  // 45
			_mm_store_ps(float* __P,
					__m128 __A);  // 2680
			StoreAlignedIntSIMD<>(i32x4& pSIMD,
						const fltx4& a);  // 46
			SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 118
			CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::CUtlAttributeListChunk(); // 248
			CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveList(); // 248
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::CUtlAttributeList(); // 898
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
						ResourceHandle_t hUntypedResource);  // 227
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 76
			TextureAttrForStorage_t::TextureAttrForStorage_t(); // 117
			_mm_store_ps(float* __P,
					__m128 __A);  // 2680
			StoreAlignedIntSIMD<>(i32x4& pSIMD,
						const fltx4& a);  // 45
			_mm_store_ps(float* __P,
					__m128 __A);  // 2680
			StoreAlignedIntSIMD<>(i32x4& pSIMD,
						const fltx4& a);  // 46
			SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 118
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::CUtlAttributeListChunk(); // 248
			CUtlIntrusiveList(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this); // 248
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::CUtlAttributeList(); // 898
			{
				uint32* pThis; // 978
				const uint32* pDefault; // 979
				CSamplerStateDescBase::CSamplerStateDescBase(); // 927
				{
					float32 flZeros; // 936
					float32 flOnes; // 937
					CSamplerStateDescBase::SetFilterMode(
							RsFilter_t filter);  // 928
					CSamplerStateDescBase::SetTextureAddressModeU(
								RsTextureAddressMode_t addressMode);  // 929
					CSamplerStateDescBase::SetTextureAddressModeV(
								RsTextureAddressMode_t addressMode);  // 930
					CSamplerStateDescBase::SetTextureAddressModeW(
								RsTextureAddressMode_t addressMode);  // 931
					Min<unsigned int>(const unsigned int& val1,
								const unsigned int& val2);  // 800
					CSamplerStateDescBase::SetMaxAnisotropy(
							uint32 nMaxAniso);  // 933
					CSamplerStateDescBase::SetMipLodBias(
							float32 flBias);  // 932
					CSamplerStateDescBase::SetComparisonFunc(
								RsComparison_t compFunc);  // 934
					CSamplerStateDescBase::SetMinMaxLod(
							uint32 nMinLod,
							uint32 nMaxLod);  // 935
					CSamplerStateDescBase::SetBorderColor(
							const float32* pBorderColor);  // 938
					CSamplerStateDescBase::SetGlobalMipBiasOverrideAllowed(
									bool bAllow);  // 939
				}
				CSamplerStateDesc::CSamplerStateDesc(
							RsFilter_t filter,
							RsTextureAddressMode_t addressU,
							RsTextureAddressMode_t addressV,
							RsTextureAddressMode_t addressW,
							float32 flMipLodBias,
							uint32 nMaxAniso,
							RsComparison_t comparisonFunc,
							uint32 nMinLod,
							uint32 nMaxLod,
							bool bWhiteBorder,
							bool bAllowGlobalMipBiasOverride);  // 970
				DefaultSamplerStateDesc(void); // 959
				DefaultSamplerStateDesc(void); // 979
			}
			CSamplerStateDescBase::CSamplerStateDescBase(); // 975
			CSamplerStateDesc::CSamplerStateDesc(); // 31
			SamplerAttrForStorage_t::SamplerAttrForStorage_t(); // 117
			_mm_store_ps(float* __P,
					__m128 __A);  // 2680
			StoreAlignedIntSIMD<>(i32x4& pSIMD,
						const fltx4& a);  // 45
			_mm_store_ps(float* __P,
					__m128 __A);  // 2680
			StoreAlignedIntSIMD<>(i32x4& pSIMD,
						const fltx4& a);  // 46
			SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 118
			CUtlAttributeListChunk<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t>::CUtlAttributeListChunk(); // 248
			CUtlIntrusiveList(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t this); // 248
			CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::CUtlAttributeList(); // 898
			ConstantBufferAttr_t::ConstantBufferAttr_t(); // 117
			_mm_store_ps(float* __P,
					__m128 __A);  // 2680
			StoreAlignedIntSIMD<>(i32x4& pSIMD,
						const fltx4& a);  // 39
			SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
			CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::CUtlAttributeListChunk(); // 248
			CUtlIntrusiveList(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAt this); // 248
			CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::CUtlAttributeList(); // 898
			CUtlString::CUtlString(); // 117
			_mm_store_ps(float* __P,
					__m128 __A);  // 2680
			StoreAlignedIntSIMD<>(i32x4& pSIMD,
						const fltx4& a);  // 39
			SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
			CUtlAttributeListChunk<CUtlString, 2, CUtlString>::CUtlAttributeListChunk(); // 248
			CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::CUtlIntrusiveList(); // 248
			CUtlAttributeList<CUtlString, 2, CUtlString, 2>::CUtlAttributeList(); // 898
			DescriptorSetAttr_t::DescriptorSetAttr_t(); // 117
			_mm_store_ps(float* __P,
					__m128 __A);  // 2680
			StoreAlignedIntSIMD<>(i32x4& pSIMD,
						const fltx4& a);  // 39
			SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
			CUtlAttributeListChunk<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t>::CUtlAttributeListChunk(); // 248
			CUtlIntrusiveList(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr this); // 248
			CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::CUtlAttributeList(); // 898
			_mm_store_ps(float* __P,
					__m128 __A);  // 2680
			StoreAlignedIntSIMD<>(i32x4& pSIMD,
						const fltx4& a);  // 39
			SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
			CUtlAttributeListChunk<void::CUtlAttributeListChunk(); // 248
			CUtlIntrusiveList<CUtlAttributeList<void::CUtlIntrusiveList(); // 248
			CUtlAttributeList<void::CUtlAttributeList(); // 898
			CRenderAttributes::CRenderAttributes(); // 1029
		}
		CWeakHandle<InfoForResourceTypeIMaterial2>::GetBinding(); // 476
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 570
		CStrongHandle<InfoForResourceTypeIMaterial2>::Init(
			ResourceHandleTyped_t hResource);  // 476
		CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(
				const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 1002
		CStrongHandle<InfoForResourceTypeIMaterial2>::GetData(); // 1003
		CUtlString::Get(); // 1008
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
					ResourceHandle_t hUntypedResource);  // 227
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 736
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
					ResourceHandle_t hUntypedResource);  // 227
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 738
		IResourceSystem::BlockingLoadResourceByName<2019914870>(
							const CResourceName& resourceName,
							const char* pDebugName);  // 1008
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 1008
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1009
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1012
		CWeakHandle<InfoForResourceTypeCTextureBase>::HasData(); // 1016
		CWeakHandle<InfoForResourceTypeCTextureBase>::IsError(); // 1016
		CStrongHandle<InfoForResourceTypeIMaterial2>::~CStrongHandle(); // 1034
	}
	CAppSystemDict::IsDedicatedServer(); // 976
	CAppSystemDict::IsConsoleApp(); // 976
	IRenderDevice::IsEmptyAPI(); // 390
	IRenderDevice::IsNoOpDevice(); // 976
	CAppSystemDict::IsInToolsMode(); // 976
	RenderDeviceInfo_t::DoesCoverMonitor(); // 987
	RenderViewport_t::RenderViewport_t(); // 993
	RenderViewport_t::Init(
		int x,
		int y,
		int nWidth,
		int nHeight,
		float flMinZ,
		float flMaxZ);  // 994
	{
		int i; // 121
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 123
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 127
	RenderTargetDesc_t::Clear(); // 136
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 989
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 990
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 999
	RenderTargetDesc_t::Init(
		SwapChainHandle_t hSwapChain,
		bool bUseColorBuffer,
		bool bUseDepthBuffer,
		RenderColorSpace_t allowSrgbWrites);  // 137
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 135
	RenderTargetDesc_t::RenderTargetDesc_t(
				SwapChainHandle_t hSwapChain,
				bool bUseColorBuffer,
				bool bUseDepthBuffer,
				RenderColorSpace_t allowSrgbWrites);  // 996
	RenderClearInfo_t::RenderClearInfo_t(
				const Vector4D& vecRGBAColor,
				int nFlags);  // 241
	IRenderContext::Clear(
		const Vector4D& vecRGBAColor,
		int nFlags);  // 997
	CRenderContextPtr::CRenderContextPtr<char const*>(
					IRenderDevice* pDevice,
					const RenderTargetDesc_t& renderTargetDesc);  // 996
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 997
	CUtlString::IsEmpty(); // 1000
	CRenderContextPtr::Release(); // 845
	CRenderContextPtr::~CRenderContextPtr(); // 1038
} /* size: 2205, variables: 5, inline expansions: 29 (788 bytes) */

