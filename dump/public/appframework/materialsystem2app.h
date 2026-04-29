
//
// public/appframework/materialsystem2app.h
//
//	referenced by: libengine2.so
//
//	functions: 4
//	class: 1
//	struct: 1
//

// <007BD4E5> ../public/appframework/materialsystem2app.h:40
// member variables: 6
// struct size: 40
struct MaterialSystem2AppSystemDictCreateInfo {
	const char * pWindowTitle; /* 0 8 */
	MaterialSystem2AppSystemDictFlags iFlags; /* 8 4 */
	uint32 nSteamAppId; /* 12 4 */
	void * hInstance; /* 16 8 */
	void * hPrevInstance; /* 24 8 */
	int nCmdShow; /* 32 4 */
};

// <007C9B03> ../public/appframework/materialsystem2app.h:55
// member functions: 58
// member variables: 15
// vtable entries: 2
// class size: 624
class CMaterialSystem2AppSystemDict : public CTier2AppSystemDict, public IRenderDeviceSetup {
public:
	/* class CTier2AppSystemDict <ancestor>; */ /* 0 544 */
	/* class IRenderDeviceSetup <ancestor>; */ /* 544 8 */
	void CMaterialSystem2AppSystemDict(CMaterialSystem2AppSystemDict* , const CMaterialSystem2AppSystemDict& );
	/* ../public/appframework/materialsystem2app.cpp:46 */
	void CMaterialSystem2AppSystemDict(CMaterialSystem2AppSystemDict* , const char* , bool, void* , void* , int, bool, bool);
	/* ../public/appframework/materialsystem2app.cpp:62 */
	void CMaterialSystem2AppSystemDict(CMaterialSystem2AppSystemDict* , const char* , bool, bool, bool);
	/* ../public/appframework/materialsystem2app.cpp:68 */
	void CMaterialSystem2AppSystemDict(CMaterialSystem2AppSystemDict* , const MaterialSystem2AppSystemDictCreateInfo& );
	/* ../public/appframework/materialsystem2app.cpp:224 */
	virtual void ~CMaterialSystem2AppSystemDict(CMaterialSystem2AppSystemDict* );
	/* ../public/appframework/materialsystem2app.cpp:107 */
	virtual bool Init(CMaterialSystem2AppSystemDict* );
	/* ../public/appframework/materialsystem2app.cpp:124 */
	bool InitWithoutMaterialSystem(CMaterialSystem2AppSystemDict* );
	/* ../public/appframework/materialsystem2app.cpp:139 */
	bool InitFinishSetupMaterialSystem(CMaterialSystem2AppSystemDict* );
	/* ../public/appframework/materialsystem2app.h:78 */
	void SetInitWithoutMaterialSystem(CMaterialSystem2AppSystemDict* , bool);
	/* ../public/appframework/materialsystem2app.h:83 */
	void EnableExtendedMaterialInfo(CMaterialSystem2AppSystemDict* );
	/* ../public/appframework/materialsystem2app.h:89 */
	void SetDefaultToRendersystemEmpty(CMaterialSystem2AppSystemDict* );
	/* ../public/appframework/materialsystem2app.h:94 */
	void SetDefaultRenderSystemOption(CMaterialSystem2AppSystemDict* , const char* );
	/* ../public/appframework/materialsystem2app.h:99 */
	bool HasCommandLineRenderSystemOption(const CMaterialSystem2AppSystemDict* );
	/* ../public/appframework/materialsystem2app.cpp:922 */
	PlatWindow_t GetAppWindow(CMaterialSystem2AppSystemDict* );
	/* ../public/appframework/materialsystem2app.h:216 */
	SwapChainHandle_t GetAppWindowSwapChain(const CMaterialSystem2AppSystemDict* );
	/* ../public/appframework/materialsystem2app.h:207 */
	int GetThreadCount(const CMaterialSystem2AppSystemDict* );
	/* ../public/appframework/materialsystem2app.cpp:769 */
	SwapChainHandle_t Create3DWindow(CMaterialSystem2AppSystemDict* , const char* , RenderDeviceInfo_t& , bool, bool, bool);
	/* ../public/appframework/materialsystem2app.cpp:909 */
	void Destroy3DWindow(CMaterialSystem2AppSystemDict* , SwapChainHandle_t);
	/* ../public/appframework/materialsystem2app.cpp:933 */
	void SetAppWindowTitle(CMaterialSystem2AppSystemDict* , const char* );
	/* ../public/appframework/materialsystem2app.cpp:947 */
	void SetAppWindowIcon(CMaterialSystem2AppSystemDict* , const char* );
	/* ../public/appframework/materialsystem2app.cpp:967 */
	void SetInitialAppWindowImage(CMaterialSystem2AppSystemDict* , const char* );
	/* ../public/appframework/materialsystem2app.cpp:450 */
	void SetAppWindowMultisampleType(CMaterialSystem2AppSystemDict* , RenderMultisampleType_t);
	/* ../public/appframework/materialsystem2app.cpp:456 */
	void SetAppWindowDiscardMouseFocusClick(CMaterialSystem2AppSystemDict* , bool);
	/* ../public/appframework/materialsystem2app.cpp:974 */
	void DrawInitialWindowImage(CMaterialSystem2AppSystemDict* );
private:
	/* ../public/appframework/materialsystem2app.cpp:354 */
	virtual bool CreateRenderDevice(CMaterialSystem2AppSystemDict* );
	/* ../public/appframework/materialsystem2app.cpp:240 */
	const char* GetRenderSystemDLLForOption(CMaterialSystem2AppSystemDict* , const char* );
	/* ../public/appframework/materialsystem2app.cpp:259 */
	bool AddRenderSystem(CMaterialSystem2AppSystemDict* );
	/* ../public/appframework/materialsystem2app.cpp:489 */
	bool CreateMainWindow(CMaterialSystem2AppSystemDict* , bool);
	/* ../public/appframework/materialsystem2app.cpp:176 */
	bool SetupMaterialSystem(CMaterialSystem2AppSystemDict* );
	SwapChainHandle_t m_hSwapChain; /* 552 8 */
	int m_nThreadCount; /* 560 4 */
	CreateInterfaceFn m_RenderFactory; /* 568 8 */
	CUtlString m_WindowTitle; /* 576 8 */
	CUtlString m_WindowIcon; /* 584 8 */
	CUtlString m_DefaultRenderSystemOption; /* 592 8 */
	CUtlString m_WindowInitialImage; /* 600 8 */
	RenderMultisampleType_t m_MultisampleType; /* 608 4 */
	bool m_bInitWithoutMaterialSystem; /* 612 1 */
	bool m_bEnableExtendedMaterialInfo; /* 613 1 */
	bool m_bDefaultToRendersystemEmpty; /* 614 1 */
	bool m_bDiscardMouseFocusClick; /* 615 1 */
	bool m_bRenderSystemOptionOnCommandLine; /* 616 1 */
	bool InitFinishSetupMaterialSystem(class CMaterialSystem2AppSystemDict *); /* linkage=_ZN29CMaterialSystem2AppSystemDict29InitFinishSetupMaterialSystemEv */
	/* <7e567a> ../public/appframework/materialsystem2app.cpp:124 */
	bool InitWithoutMaterialSystem(class CMaterialSystem2AppSystemDict *); /* linkage=_ZN29CMaterialSystem2AppSystemDict25InitWithoutMaterialSystemEv */
	/* <7e2e49> ../public/appframework/materialsystem2app.cpp:922 */
	PlatWindow_t GetAppWindow(class CMaterialSystem2AppSystemDict *); /* linkage=_ZN29CMaterialSystem2AppSystemDict12GetAppWindowEv */
	void SetAppWindowMultisampleType(class CMaterialSystem2AppSystemDict *, enum RenderMultisampleType_t); /* linkage=_ZN29CMaterialSystem2AppSystemDict27SetAppWindowMultisampleTypeE23RenderMultisampleType_t */
	void SetInitialAppWindowImage(class CMaterialSystem2AppSystemDict *, const char  *); /* linkage=_ZN29CMaterialSystem2AppSystemDict24SetInitialAppWindowImageEPKc */
	void SetAppWindowDiscardMouseFocusClick(class CMaterialSystem2AppSystemDict *, bool); /* linkage=_ZN29CMaterialSystem2AppSystemDict34SetAppWindowDiscardMouseFocusClickEb */
	SwapChainHandle_t GetAppWindowSwapChain(const class CMaterialSystem2AppSystemDict  *); /* linkage=_ZNK29CMaterialSystem2AppSystemDict21GetAppWindowSwapChainEv */
	bool HasCommandLineRenderSystemOption(const class CMaterialSystem2AppSystemDict  *); /* linkage=_ZNK29CMaterialSystem2AppSystemDict32HasCommandLineRenderSystemOptionEv */
	void CMaterialSystem2AppSystemDict(class CMaterialSystem2AppSystemDict *, const class CMaterialSystem2AppSystemDict  &); /* linkage=_ZN29CMaterialSystem2AppSystemDictC4ERKS_ */
	void CMaterialSystem2AppSystemDict(class CMaterialSystem2AppSystemDict *, const char  *, bool, void *, void *, int, bool, bool); /* linkage=_ZN29CMaterialSystem2AppSystemDictC4EPKcbPvS2_ibb */
	void CMaterialSystem2AppSystemDict(class CMaterialSystem2AppSystemDict *, const char  *, bool, bool, bool); /* linkage=_ZN29CMaterialSystem2AppSystemDictC4EPKcbbb */
	void CMaterialSystem2AppSystemDict(class CMaterialSystem2AppSystemDict *, const class MaterialSystem2AppSystemDictCreateInfo  &); /* linkage=_ZN29CMaterialSystem2AppSystemDictC4ERK38MaterialSystem2AppSystemDictCreateInfo */
	virtual void ~CMaterialSystem2AppSystemDict(class CMaterialSystem2AppSystemDict *); /* linkage=_ZN29CMaterialSystem2AppSystemDictD4Ev */
	/* <7e5876> ../public/appframework/materialsystem2app.cpp:107 */
	virtual bool Init(class CMaterialSystem2AppSystemDict *); /* linkage=_ZN29CMaterialSystem2AppSystemDict4InitEv */
	void SetInitWithoutMaterialSystem(class CMaterialSystem2AppSystemDict *, bool); /* linkage=_ZN29CMaterialSystem2AppSystemDict28SetInitWithoutMaterialSystemEb */
	void EnableExtendedMaterialInfo(class CMaterialSystem2AppSystemDict *); /* linkage=_ZN29CMaterialSystem2AppSystemDict26EnableExtendedMaterialInfoEv */
	void SetDefaultToRendersystemEmpty(class CMaterialSystem2AppSystemDict *); /* linkage=_ZN29CMaterialSystem2AppSystemDict29SetDefaultToRendersystemEmptyEv */
	void SetDefaultRenderSystemOption(class CMaterialSystem2AppSystemDict *, const char  *); /* linkage=_ZN29CMaterialSystem2AppSystemDict28SetDefaultRenderSystemOptionEPKc */
	int GetThreadCount(const class CMaterialSystem2AppSystemDict  *); /* linkage=_ZNK29CMaterialSystem2AppSystemDict14GetThreadCountEv */
	SwapChainHandle_t Create3DWindow(class CMaterialSystem2AppSystemDict *, const char  *, class RenderDeviceInfo_t &, bool, bool, bool); /* linkage=_ZN29CMaterialSystem2AppSystemDict14Create3DWindowEPKcR18RenderDeviceInfo_tbbb */
	void Destroy3DWindow(class CMaterialSystem2AppSystemDict *, SwapChainHandle_t); /* linkage=_ZN29CMaterialSystem2AppSystemDict15Destroy3DWindowEP19SwapChainHandle_t__ */
	void SetAppWindowTitle(class CMaterialSystem2AppSystemDict *, const char  *); /* linkage=_ZN29CMaterialSystem2AppSystemDict17SetAppWindowTitleEPKc */
	void SetAppWindowIcon(class CMaterialSystem2AppSystemDict *, const char  *); /* linkage=_ZN29CMaterialSystem2AppSystemDict16SetAppWindowIconEPKc */
	void DrawInitialWindowImage(class CMaterialSystem2AppSystemDict *); /* linkage=_ZN29CMaterialSystem2AppSystemDict22DrawInitialWindowImageEv */
	virtual bool CreateRenderDevice(class CMaterialSystem2AppSystemDict *); /* linkage=_ZN29CMaterialSystem2AppSystemDict18CreateRenderDeviceEv */
	/* <7e2dc5> ../public/appframework/materialsystem2app.cpp:240 */
	const char  * GetRenderSystemDLLForOption(class CMaterialSystem2AppSystemDict *, const char  *); /* linkage=_ZN29CMaterialSystem2AppSystemDict27GetRenderSystemDLLForOptionEPKc */
	bool AddRenderSystem(class CMaterialSystem2AppSystemDict *); /* linkage=_ZN29CMaterialSystem2AppSystemDict15AddRenderSystemEv */
	/* <7e415c> ../public/appframework/materialsystem2app.cpp:489 */
	bool CreateMainWindow(class CMaterialSystem2AppSystemDict *, bool); /* linkage=_ZN29CMaterialSystem2AppSystemDict16CreateMainWindowEb */
	bool SetupMaterialSystem(class CMaterialSystem2AppSystemDict *); /* linkage=_ZN29CMaterialSystem2AppSystemDict19SetupMaterialSystemEv */
} __attribute__((__aligned__(8)));

// <0125A188> ../public/appframework/materialsystem2app.h:65
void CMaterialSystem2AppSystemDict::CMaterialSystem2AppSystemDict(const MaterialSystem2AppSystemDictCreateInfo& createInfo)
{
} /* size: 0 */

// <0133DA2A> ../public/appframework/materialsystem2app.h:94
inline void CMaterialSystem2AppSystemDict::SetDefaultRenderSystemOption(const char* pOption)
{
} /* size: 0 */

// <001545F3> ../public/appframework/materialsystem2app.h:99
inline void CMaterialSystem2AppSystemDict::HasCommandLineRenderSystemOption()
{
} /* size: 0 */

// <0133DA11> ../public/appframework/materialsystem2app.h:216
inline void CMaterialSystem2AppSystemDict::GetAppWindowSwapChain()
{
} /* size: 0 */

