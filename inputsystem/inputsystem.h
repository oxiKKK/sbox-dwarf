
//
// inputsystem/inputsystem.h
//
//	referenced by: libengine2.so
//
//	functions: 10
//	class: 1
//

// <0085DB09> inputsystem/inputsystem.h:43
// member functions: 135
// member variables: 35
// vtable entries: 38
// class size: 640
class CInputSystem : public CTier2AppSystem<IInputSystem, 0> {
	/* inputsystem/inputsystem.h:126 */
	struct InputWindow_t {
		OsSpecificWindowHandle_t m_hAttachedHWnd; /* 0 8 */
		WNDPROC m_ChainedWndProc; /* 8 8 */
		WNDPROC m_OriginalWndProc; /* 16 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* inputsystem/inputsystem.h:147 */
	struct CursorSurface_t {
		SDL_Surface * pSurface; /* 0 8 */
		int nHotX; /* 8 4 */
		int nHotY; /* 12 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* inputsystem/inputsystem.h:154 */
	struct CursorEntry_t {
		SDL_Cursor * pSDLCursor; /* 0 8 */
		CUtlVectorFixedGrowable<CInputSystem::CursorSurface_t, 1> m_surfaces __attribute__((__aligned__(8))); /* 8 48 */
		void ~CursorEntry_t(CursorEntry_t* );
		void CursorEntry_t(CursorEntry_t* );
	} __attribute__((__aligned__(8)));
	/* inputsystem/inputsystem.h:231 */
	struct UserCursor_t {
		CursorEntry_t * pCursorEntry; /* 0 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class CTier2AppSystem<IInputSystem, 0> <ancestor>; */ /* 0 48 */
	void CInputSystem(CInputSystem* , const CInputSystem& );
	/* inputsystem/inputsystem.cpp:166 */
	virtual bool Connect(CInputSystem* , CreateInterfaceFn);
	/* inputsystem/inputsystem.cpp:161 */
	virtual const AppSystemInfo_t* GetDependencies(CInputSystem* );
	/* inputsystem/inputsystem.cpp:101 */
	virtual InitReturnVal_t Init(CInputSystem* );
	/* inputsystem/inputsystem.cpp:177 */
	virtual void Shutdown(CInputSystem* );
	/* inputsystem/inputsystem.cpp:224 */
	virtual void AttachToWindow(CInputSystem* , OsSpecificWindowHandle_t);
	/* inputsystem/inputsystem.cpp:254 */
	virtual void DetachFromWindow(CInputSystem* , OsSpecificWindowHandle_t);
	/* inputsystem/inputsystem.cpp:2018 */
	virtual void RegisterWindowWithSDL(CInputSystem* , OsSpecificWindowHandle_t);
	/* inputsystem/inputsystem.cpp:2037 */
	virtual void UnregisterWindowFromSDL(CInputSystem* , OsSpecificWindowHandle_t);
	/* inputsystem/inputsystem.cpp:2052 */
	virtual void SetEditorMainWindow(CInputSystem* , OsSpecificWindowHandle_t);
	/* inputsystem/inputsystem.cpp:764 */
	virtual void OnEditorGameFocusChange(CInputSystem* , OsSpecificWindowHandle_t, bool);
	/* inputsystem/inputsystem.cpp:527 */
	virtual void PollInputState(CInputSystem* , bool);
	/* inputsystem/inputsystem.cpp:273 */
	virtual const char* CodeToString(const CInputSystem* , ButtonCode_t);
	/* inputsystem/inputsystem.cpp:278 */
	virtual const char* GetKeyDisplayName(const CInputSystem* , ButtonCode_t);
	/* inputsystem/inputsystem.cpp:283 */
	virtual ButtonCode_t StringToButtonCode(const CInputSystem* , const char* );
	/* inputsystem/inputsystem.cpp:292 */
	virtual ButtonCode_t VirtualKeyToButtonCode(const CInputSystem* , int);
	/* inputsystem/inputsystem.cpp:297 */
	virtual int ButtonCodeToVirtualKey(const CInputSystem* , ButtonCode_t);
	/* inputsystem/inputsystem.cpp:593 */
	virtual void SetCursorPosition(CInputSystem* , int, int, PlatWindow_t);
	/* inputsystem/inputsystem.cpp:607 */
	virtual void GetCursorPosition(CInputSystem* , int* , int* , PlatWindow_t);
	/* inputsystem/inputsystem.cpp:1637 */
	virtual InputCursorHandle_t GetSystemCursor(CInputSystem* , InputStandardCursor_t);
	/* inputsystem/inputsystem.cpp:1645 */
	virtual InputCursorHandle_t GetStandardCursor(CInputSystem* , InputStandardCursor_t);
	/* inputsystem/inputsystem.cpp:1650 */
	virtual bool LoadCursorFromFile(CInputSystem* , const char* , const char* , int, int);
	/* inputsystem/inputsystem.cpp:1690 */
	virtual void DestroyLoadedCursor(CInputSystem* , InputCursorHandle_t);
	/* inputsystem/inputsystem.cpp:1745 */
	virtual void SetCursorIcon(CInputSystem* , InputCursorHandle_t, bool);
	/* inputsystem/inputsystem.cpp:1787 */
	virtual void SetCursorStandard(CInputSystem* , InputStandardCursor_t, bool);
	/* inputsystem/inputsystem.h:75 */
	virtual bool HasMouseFocus(const CInputSystem* );
	/* inputsystem/inputsystem.h:76 */
	virtual bool IsAppActive(const CInputSystem* );
	/* inputsystem/inputsystem.cpp:1282 */
	virtual void EnablePowerManagement(CInputSystem* , bool);
	/* inputsystem/inputsystem.cpp:1287 */
	virtual void EnableSystemCommands(CInputSystem* , uint32, bool);
	/* inputsystem/inputsystem.cpp:1809 */
	virtual void SetRelativeMouseMode(CInputSystem* , bool);
	/* inputsystem/inputsystem.cpp:1846 */
	virtual bool GetRelativeMouseMode(CInputSystem* );
	/* inputsystem/inputsystem.cpp:1851 */
	virtual void OnDPIChanged(CInputSystem* );
	/* inputsystem/inputsystem.cpp:1897 */
	virtual bool IsIMEAllowed(const CInputSystem* );
	/* inputsystem/inputsystem.cpp:1902 */
	virtual void SetIMEAllowed(CInputSystem* , bool);
	/* inputsystem/inputsystem.cpp:1951 */
	virtual void SetIMETextLocation(CInputSystem* , int, int, int, int);
	/* inputsystem/inputsystem.cpp:1970 */
	virtual void DismissIME(CInputSystem* );
	/* inputsystem/inputsystem.cpp:2062 */
	virtual const char* GetIMEComposition(CInputSystem* , int);
	/* inputsystem/inputsystem.cpp:64 */
	void CInputSystem(CInputSystem* );
	/* inputsystem/inputsystem.cpp:93 */
	virtual void ~CInputSystem(CInputSystem* );
	/* inputsystem/inputsystem.cpp:697 */
	void OnAppActivationChanged(CInputSystem* , bool, PlatWindow_t);
	/* inputsystem/inputsystem.cpp:729 */
	void OnWindowActivationChanged(CInputSystem* , bool, OsSpecificWindowHandle_t);
	/* inputsystem/inputsystem.cpp:811 */
	void ProcessSDLEvent(CInputSystem* , const SDL_Event* );
private:
	/* inputsystem/inputsystem.h:134 */
	intp ChainWindowMessage(CInputSystem* , WNDPROC, void* , uint32, uintp, uintp);
	/* inputsystem/inputsystem.cpp:553 */
	int ComputeSampleTick(CInputSystem* );
	/* inputsystem/inputsystem.cpp:209 */
	int FindInputWindow(const CInputSystem* , OsSpecificWindowHandle_t);
	/* inputsystem/inputsystem.cpp:1316 */
	void InitCursors(CInputSystem* );
	/* inputsystem/inputsystem.cpp:1342 */
	void ShutdownCursors(CInputSystem* );
	/* inputsystem/inputsystem.h:166 */
	CursorEntry_t* HandleToEntry(CInputSystem* , InputCursorHandle_t);
	/* inputsystem/inputsystem.h:176 */
	InputCursorHandle_t EntryToHandle(CInputSystem* , CursorEntry_t* );
	/* inputsystem/inputsystem.cpp:1387 */
	CursorEntry_t* CreateCursorEntry(CInputSystem* , SDL_Cursor* );
	/* inputsystem/inputsystem.cpp:1394 */
	void AddCursorEntrySurface(CInputSystem* , CursorEntry_t* , SDL_Surface* , int, int);
	/* inputsystem/inputsystem.cpp:1402 */
	bool AddCursorEntrySurface(CInputSystem* , CursorEntry_t* , KeyValues* , const char* );
	/* inputsystem/inputsystem.cpp:1427 */
	bool AddCursorEntrySurfaces(CInputSystem* , CursorEntry_t* , KeyValues* , const char* , const char* );
	/* inputsystem/inputsystem.cpp:1482 */
	CursorEntry_t* CreateSystemCursorEntry(CInputSystem* , SDL_SystemCursor);
	/* inputsystem/inputsystem.cpp:1487 */
	void DeleteCursorEntry(CInputSystem* , CursorEntry_t* );
	/* inputsystem/inputsystem.cpp:1503 */
	bool ScaleCursorEntry(CInputSystem* , CursorEntry_t* , const char* );
	/* inputsystem/inputsystem.cpp:1613 */
	void UpdateLoadedCursorScale(CInputSystem* , float);
	/* inputsystem/inputsystem.h:194 */
	bool UseAutoLoadedCursorScale(const CInputSystem* );
	/* inputsystem/inputsystem.cpp:472 */
	void PollInputState_SDL(CInputSystem* );
	/* inputsystem/inputsystem.cpp:386 */
	void SDL_Spew(CInputSystem* , const SDL_Event& );
	/* inputsystem/inputsystem.cpp:302 */
	void DetectApplicationActive(CInputSystem* );
	/* inputsystem/inputsystem.cpp:625 */
	uint GetKeyModifierFlags(SDL_Keymod);
	PlatWindow_t m_hLastIMEHWnd; /* 48 8 */
	CUtlVector<CInputSystem::InputWindow_t, CUtlMemory<CInputSystem::InputWindow_t, int> > m_Windows; /* 56 32 */
	bool m_bEnabled; /* 88 1 */
	bool m_bIsPolling; /* 89 1 */
	bool m_bIMEComposing; /* 90 1 */
	bool m_bHasFocus; /* 91 1 */
	bool m_bIsActivated; /* 92 1 */
	bool m_bEnablePowerManagement; /* 93 1 */
	bool m_bMouseRelativeMode; /* 94 1 */
	bool m_bIMEAllowed; /* 95 1 */
	uint32 m_nInputSystemCommandEnableFlags; /* 96 4 */
	uint32 m_StartupTimeTick; /* 100 4 */
	int m_nLastPollTick; /* 104 4 */
	int m_nLastSampleTick; /* 108 4 */
	int m_nPollCount; /* 112 4 */
	uint32 m_uiMouseWheel; /* 116 4 */
	bool m_bSDLInitDone; /* 120 1 */
	PlatWindow_t m_hEditorMainWnd; /* 128 8 */
	InputCursorHandle_t m_pSystemCursors[16]; /* 136 128 */
	InputCursorHandle_t m_pDefaultCursors[16]; /* 264 128 */
	CUtlStringMap<CInputSystem::UserCursor_t, CUtlSymbolTable> m_UserCursors; /* 392 176 */
	float m_fLoadedCursorScale; /* 568 4 */
	InputCursorHandle_t m_hCursor; /* 576 8 */
	CUtlString m_strPrevSDLAltF4Hint; /* 584 8 */
	bool m_bAllowAltF4; /* 592 1 */
	bool m_bPass_VK_PROCESSKEY; /* 593 1 */
	uint32 m_unLastFingerDownTime; /* 596 4 */
	SDL_Haptic * m_pSDLHaptic; /* 600 8 */
	SDL_FingerID m_curFingerID; /* 608 8 */
	bool m_curFingerActive; /* 616 1 */
	int m_nFingersDown; /* 620 4 */
	int mouseWindowX; /* 624 4 */
	int mouseWindowY; /* 628 4 */
	PlatWindow_t m_hFocusWindow; /* 632 8 */
	/* inputsystem/inputsystem.cpp:652 */
	void AddGameController(CInputSystem* , int);
	/* inputsystem/inputsystem.cpp:684 */
	void RemoveGameController(CInputSystem* , int);
	/* inputsystem/inputsystem.cpp:1796 */
	virtual void SetCursorUser(CInputSystem* , const char* , bool);
	/* inputsystem/inputsystem.cpp:1368 */
	virtual void ShutdownUserCursors(CInputSystem* );
	void CInputSystem(class CInputSystem *, const class CInputSystem  &); /* linkage=_ZN12CInputSystemC4ERKS_ */
	virtual bool Connect(class CInputSystem *, CreateInterfaceFn); /* linkage=_ZN12CInputSystem7ConnectEPFPvPKcPiE */
	virtual const class AppSystemInfo_t  * GetDependencies(class CInputSystem *); /* linkage=_ZN12CInputSystem15GetDependenciesEv */
	virtual enum InitReturnVal_t Init(class CInputSystem *); /* linkage=_ZN12CInputSystem4InitEv */
	virtual void Shutdown(class CInputSystem *); /* linkage=_ZN12CInputSystem8ShutdownEv */
	/* <8cae50> inputsystem/inputsystem.cpp:224 */
	virtual void AttachToWindow(class CInputSystem *, OsSpecificWindowHandle_t); /* linkage=_ZN12CInputSystem14AttachToWindowEP26OsSpecificWindowHandle_t__ */
	virtual void DetachFromWindow(class CInputSystem *, OsSpecificWindowHandle_t); /* linkage=_ZN12CInputSystem16DetachFromWindowEP26OsSpecificWindowHandle_t__ */
	/* <8cabc8> inputsystem/inputsystem.cpp:2018 */
	virtual void RegisterWindowWithSDL(class CInputSystem *, OsSpecificWindowHandle_t); /* linkage=_ZN12CInputSystem21RegisterWindowWithSDLEP26OsSpecificWindowHandle_t__ */
	/* <8c533d> inputsystem/inputsystem.cpp:2037 */
	virtual void UnregisterWindowFromSDL(class CInputSystem *, OsSpecificWindowHandle_t); /* linkage=_ZN12CInputSystem23UnregisterWindowFromSDLEP26OsSpecificWindowHandle_t__ */
	/* <8c4cfa> inputsystem/inputsystem.cpp:2052 */
	virtual void SetEditorMainWindow(class CInputSystem *, OsSpecificWindowHandle_t); /* linkage=_ZN12CInputSystem19SetEditorMainWindowEP26OsSpecificWindowHandle_t__ */
	/* <8c59bb> inputsystem/inputsystem.cpp:764 */
	virtual void OnEditorGameFocusChange(class CInputSystem *, OsSpecificWindowHandle_t, bool); /* linkage=_ZN12CInputSystem23OnEditorGameFocusChangeEP26OsSpecificWindowHandle_t__b */
	/* <8c9c25> inputsystem/inputsystem.cpp:527 */
	virtual void PollInputState(class CInputSystem *, bool); /* linkage=_ZN12CInputSystem14PollInputStateEb */
	virtual const char  * CodeToString(const class CInputSystem  *, enum ButtonCode_t); /* linkage=_ZNK12CInputSystem12CodeToStringE12ButtonCode_t */
	virtual const char  * GetKeyDisplayName(const class CInputSystem  *, enum ButtonCode_t); /* linkage=_ZNK12CInputSystem17GetKeyDisplayNameE12ButtonCode_t */
	virtual enum ButtonCode_t StringToButtonCode(const class CInputSystem  *, const char  *); /* linkage=_ZNK12CInputSystem18StringToButtonCodeEPKc */
	virtual enum ButtonCode_t VirtualKeyToButtonCode(const class CInputSystem  *, int); /* linkage=_ZNK12CInputSystem22VirtualKeyToButtonCodeEi */
	virtual int ButtonCodeToVirtualKey(const class CInputSystem  *, enum ButtonCode_t); /* linkage=_ZNK12CInputSystem22ButtonCodeToVirtualKeyE12ButtonCode_t */
	virtual void SetCursorPosition(class CInputSystem *, int, int, PlatWindow_t); /* linkage=_ZN12CInputSystem17SetCursorPositionEiiP14PlatWindow_t__ */
	virtual void GetCursorPosition(class CInputSystem *, int *, int *, PlatWindow_t); /* linkage=_ZN12CInputSystem17GetCursorPositionEPiS0_P14PlatWindow_t__ */
	/* <8c4957> inputsystem/inputsystem.cpp:1637 */
	virtual InputCursorHandle_t GetSystemCursor(class CInputSystem *, enum InputStandardCursor_t); /* linkage=_ZN12CInputSystem15GetSystemCursorE21InputStandardCursor_t */
	/* <8c498a> inputsystem/inputsystem.cpp:1645 */
	virtual InputCursorHandle_t GetStandardCursor(class CInputSystem *, enum InputStandardCursor_t); /* linkage=_ZN12CInputSystem17GetStandardCursorE21InputStandardCursor_t */
	/* <8cab05> inputsystem/inputsystem.cpp:1650 */
	virtual bool LoadCursorFromFile(class CInputSystem *, const char  *, const char  *, int, int); /* linkage=_ZN12CInputSystem18LoadCursorFromFileEPKcS1_ii */
	/* <8c7ca0> inputsystem/inputsystem.cpp:1690 */
	virtual void DestroyLoadedCursor(class CInputSystem *, InputCursorHandle_t); /* linkage=_ZN12CInputSystem19DestroyLoadedCursorEP21InputCursorHandle_t__ */
	/* <8c4b5c> inputsystem/inputsystem.cpp:1745 */
	virtual void SetCursorIcon(class CInputSystem *, InputCursorHandle_t, bool); /* linkage=_ZN12CInputSystem13SetCursorIconEP21InputCursorHandle_t__b */
	virtual void SetCursorStandard(class CInputSystem *, enum InputStandardCursor_t, bool); /* linkage=_ZN12CInputSystem17SetCursorStandardE21InputStandardCursor_tb */
	/* <8c48a5> inputsystem/inputsystem.h:75 */
	virtual bool HasMouseFocus(const class CInputSystem  *); /* linkage=_ZNK12CInputSystem13HasMouseFocusEv */
	virtual bool IsAppActive(const class CInputSystem  *); /* linkage=_ZNK12CInputSystem11IsAppActiveEv */
	virtual void EnablePowerManagement(class CInputSystem *, bool); /* linkage=_ZN12CInputSystem21EnablePowerManagementEb */
	virtual void EnableSystemCommands(class CInputSystem *, uint32, bool); /* linkage=_ZN12CInputSystem20EnableSystemCommandsEjb */
	/* <8c4d9b> inputsystem/inputsystem.cpp:1809 */
	virtual void SetRelativeMouseMode(class CInputSystem *, bool); /* linkage=_ZN12CInputSystem20SetRelativeMouseModeEb */
	virtual bool GetRelativeMouseMode(class CInputSystem *); /* linkage=_ZN12CInputSystem20GetRelativeMouseModeEv */
	virtual void OnDPIChanged(class CInputSystem *); /* linkage=_ZN12CInputSystem12OnDPIChangedEv */
	virtual bool IsIMEAllowed(const class CInputSystem  *); /* linkage=_ZNK12CInputSystem12IsIMEAllowedEv */
	/* <8c51d1> inputsystem/inputsystem.cpp:1902 */
	virtual void SetIMEAllowed(class CInputSystem *, bool); /* linkage=_ZN12CInputSystem13SetIMEAllowedEb */
	/* <8c4f21> inputsystem/inputsystem.cpp:1951 */
	virtual void SetIMETextLocation(class CInputSystem *, int, int, int, int); /* linkage=_ZN12CInputSystem18SetIMETextLocationEiiii */
	/* <8c508c> inputsystem/inputsystem.cpp:1970 */
	virtual void DismissIME(class CInputSystem *); /* linkage=_ZN12CInputSystem10DismissIMEEv */
	virtual const char  * GetIMEComposition(class CInputSystem *, int); /* linkage=_ZN12CInputSystem17GetIMECompositionEi */
	void CInputSystem(class CInputSystem *); /* linkage=_ZN12CInputSystemC4Ev */
	virtual void ~CInputSystem(class CInputSystem *); /* linkage=_ZN12CInputSystemD4Ev */
	void OnAppActivationChanged(class CInputSystem *, bool, PlatWindow_t); /* linkage=_ZN12CInputSystem22OnAppActivationChangedEbP14PlatWindow_t__ */
	void OnWindowActivationChanged(class CInputSystem *, bool, OsSpecificWindowHandle_t); /* linkage=_ZN12CInputSystem25OnWindowActivationChangedEbP26OsSpecificWindowHandle_t__ */
	void ProcessSDLEvent(class CInputSystem *, const SDL_Event  *); /* linkage=_ZN12CInputSystem15ProcessSDLEventEPK9SDL_Event */
	intp ChainWindowMessage(class CInputSystem *, WNDPROC, void *, uint32, uintp, uintp); /* linkage=_ZN12CInputSystem18ChainWindowMessageEPvS0_jyy */
	int ComputeSampleTick(class CInputSystem *); /* linkage=_ZN12CInputSystem17ComputeSampleTickEv */
	/* <8c742f> inputsystem/inputsystem.cpp:209 */
	int FindInputWindow(const class CInputSystem  *, OsSpecificWindowHandle_t); /* linkage=_ZNK12CInputSystem15FindInputWindowEP26OsSpecificWindowHandle_t__ */
	void InitCursors(class CInputSystem *); /* linkage=_ZN12CInputSystem11InitCursorsEv */
	void ShutdownCursors(class CInputSystem *); /* linkage=_ZN12CInputSystem15ShutdownCursorsEv */
	class CursorEntry_t * HandleToEntry(class CInputSystem *, InputCursorHandle_t); /* linkage=_ZN12CInputSystem13HandleToEntryEP21InputCursorHandle_t__ */
	InputCursorHandle_t EntryToHandle(class CInputSystem *, class CursorEntry_t *); /* linkage=_ZN12CInputSystem13EntryToHandleEPNS_13CursorEntry_tE */
	/* <8c7661> inputsystem/inputsystem.cpp:1387 */
	class CursorEntry_t * CreateCursorEntry(class CInputSystem *, SDL_Cursor *); /* linkage=_ZN12CInputSystem17CreateCursorEntryEP10SDL_Cursor */
	/* <8cb16f> inputsystem/inputsystem.cpp:1394 */
	void AddCursorEntrySurface(class CInputSystem *, class CursorEntry_t *, SDL_Surface *, int, int); /* linkage=_ZN12CInputSystem21AddCursorEntrySurfaceEPNS_13CursorEntry_tEP11SDL_Surfaceii */
	bool AddCursorEntrySurface(class CInputSystem *, class CursorEntry_t *, class KeyValues *, const char  *); /* linkage=_ZN12CInputSystem21AddCursorEntrySurfaceEPNS_13CursorEntry_tEP9KeyValuesPKc */
	bool AddCursorEntrySurfaces(class CInputSystem *, class CursorEntry_t *, class KeyValues *, const char  *, const char  *); /* linkage=_ZN12CInputSystem22AddCursorEntrySurfacesEPNS_13CursorEntry_tEP9KeyValuesPKcS5_ */
	/* <8c795f> inputsystem/inputsystem.cpp:1482 */
	class CursorEntry_t * CreateSystemCursorEntry(class CInputSystem *, SDL_SystemCursor); /* linkage=_ZN12CInputSystem23CreateSystemCursorEntryE16SDL_SystemCursor */
	void DeleteCursorEntry(class CInputSystem *, class CursorEntry_t *); /* linkage=_ZN12CInputSystem17DeleteCursorEntryEPNS_13CursorEntry_tE */
	bool ScaleCursorEntry(class CInputSystem *, class CursorEntry_t *, const char  *); /* linkage=_ZN12CInputSystem16ScaleCursorEntryEPNS_13CursorEntry_tEPKc */
	/* <8c8938> inputsystem/inputsystem.cpp:1613 */
	void UpdateLoadedCursorScale(class CInputSystem *, float); /* linkage=_ZN12CInputSystem23UpdateLoadedCursorScaleEf */
	bool UseAutoLoadedCursorScale(const class CInputSystem  *); /* linkage=_ZNK12CInputSystem24UseAutoLoadedCursorScaleEv */
	void PollInputState_SDL(class CInputSystem *); /* linkage=_ZN12CInputSystem18PollInputState_SDLEv */
	void SDL_Spew(class CInputSystem *, const SDL_Event  &); /* linkage=_ZN12CInputSystem8SDL_SpewERK9SDL_Event */
	/* <8c7542> inputsystem/inputsystem.cpp:302 */
	void DetectApplicationActive(class CInputSystem *); /* linkage=_ZN12CInputSystem23DetectApplicationActiveEv */
	uint GetKeyModifierFlags(SDL_Keymod); /* linkage=_ZN12CInputSystem19GetKeyModifierFlagsEt */
	void AddGameController(class CInputSystem *, int); /* linkage=_ZN12CInputSystem17AddGameControllerEi */
	/* <8c756d> inputsystem/inputsystem.cpp:684 */
	void RemoveGameController(class CInputSystem *, int); /* linkage=_ZN12CInputSystem20RemoveGameControllerEi */
	virtual void SetCursorUser(class CInputSystem *, const char  *, bool); /* linkage=_ZN12CInputSystem13SetCursorUserEPKcb */
	virtual void ShutdownUserCursors(class CInputSystem *); /* linkage=_ZN12CInputSystem19ShutdownUserCursorsEv */
};

// <008C48A5> inputsystem/inputsystem.h:75
void CInputSystem::HasMouseFocus()
{
} /* size: 9 */

// <008C2D02> inputsystem/inputsystem.h:75
inline void CInputSystem::HasMouseFocus()
{
} /* size: 0 */

// <008C2CD4> inputsystem/inputsystem.h:76
void CInputSystem::IsAppActive()
{
} /* size: 9 */

// <008B02C6> inputsystem/inputsystem.h:154
void CursorEntry_t::CursorEntry_t()
{
} /* size: 0 */

// <008B02AA> inputsystem/inputsystem.h:154
inline void CursorEntry_t::CursorEntry_t()
{
} /* size: 0 */

// <008AED80> inputsystem/inputsystem.h:154
void CursorEntry_t::~CursorEntry_t()
{
} /* size: 0 */

// <008AED64> inputsystem/inputsystem.h:154
inline void CursorEntry_t::~CursorEntry_t()
{
} /* size: 0 */

// <008C2CAF> inputsystem/inputsystem.h:166
inline void CInputSystem::HandleToEntry(InputCursorHandle_t hCursor)
{
} /* size: 0 */

// <008C2C8A> inputsystem/inputsystem.h:176
inline void CInputSystem::EntryToHandle(CursorEntry_t* pEntry)
{
} /* size: 0 */

// <008C2C71> inputsystem/inputsystem.h:194
inline void CInputSystem::UseAutoLoadedCursorScale()
{
} /* size: 0 */

