
//
// public/inputsystem/iinputsystem.h
//
//	referenced by: libengine2.so
//
//	functions: 5
//	class: 1
//	struct: 1
//

// <00822717> ../public/inputsystem/iinputsystem.h:22
// member variable: 1
// struct size: 4
struct InputCursorHandle_t__ {
	int unused; /* 0 4 */
};

// <008ABEA2> ../public/inputsystem/iinputsystem.h:70
void IInputSystem::IInputSystem()
{
} /* size: 0 */

// <008ABE86> ../public/inputsystem/iinputsystem.h:70
inline void IInputSystem::IInputSystem()
{
} /* size: 0 */

// <007F9988> ../public/inputsystem/iinputsystem.h:70
// member functions: 81
// member variable: 1
// vtable entries: 34
// class size: 8
class IInputSystem : public IAppSystem {
public:
	/* class IAppSystem <ancestor>; */ /* 0 8 */
	void IInputSystem(IInputSystem* , IInputSystem& );
	void IInputSystem(IInputSystem* , const IInputSystem& );
	void IInputSystem(IInputSystem* );
	void ~IInputSystem(IInputSystem* );
	/* ../public/inputsystem/iinputsystem.h:76 */
	virtual void AttachToWindow(IInputSystem* , OsSpecificWindowHandle_t);
	/* ../public/inputsystem/iinputsystem.h:77 */
	virtual void DetachFromWindow(IInputSystem* , OsSpecificWindowHandle_t);
	/* ../public/inputsystem/iinputsystem.h:179 */
	void AttachToWindow(IInputSystem* , PlatWindow_t);
	/* ../public/inputsystem/iinputsystem.h:184 */
	void DetachFromWindow(IInputSystem* , PlatWindow_t);
	/* ../public/inputsystem/iinputsystem.h:82 */
	virtual void RegisterWindowWithSDL(IInputSystem* , OsSpecificWindowHandle_t);
	/* ../public/inputsystem/iinputsystem.h:83 */
	virtual void UnregisterWindowFromSDL(IInputSystem* , OsSpecificWindowHandle_t);
	/* ../public/inputsystem/iinputsystem.h:86 */
	virtual void SetEditorMainWindow(IInputSystem* , OsSpecificWindowHandle_t);
	/* ../public/inputsystem/iinputsystem.h:89 */
	virtual void OnEditorGameFocusChange(IInputSystem* , OsSpecificWindowHandle_t, bool);
	/* ../public/inputsystem/iinputsystem.h:92 */
	virtual void PollInputState(IInputSystem* , bool);
	/* ../public/inputsystem/iinputsystem.h:95 */
	virtual const char* CodeToString(const IInputSystem* , ButtonCode_t);
	/* ../public/inputsystem/iinputsystem.h:96 */
	virtual ButtonCode_t StringToButtonCode(const IInputSystem* , const char* );
	/* ../public/inputsystem/iinputsystem.h:100 */
	virtual const char* GetKeyDisplayName(const IInputSystem* , ButtonCode_t);
	/* ../public/inputsystem/iinputsystem.h:104 */
	virtual ButtonCode_t VirtualKeyToButtonCode(const IInputSystem* , int);
	/* ../public/inputsystem/iinputsystem.h:105 */
	virtual int ButtonCodeToVirtualKey(const IInputSystem* , ButtonCode_t);
	/* ../public/inputsystem/iinputsystem.h:108 */
	virtual void SetCursorPosition(IInputSystem* , int, int, PlatWindow_t);
	/* ../public/inputsystem/iinputsystem.h:111 */
	virtual InputCursorHandle_t GetSystemCursor(IInputSystem* , InputStandardCursor_t);
	/* ../public/inputsystem/iinputsystem.h:114 */
	virtual InputCursorHandle_t GetStandardCursor(IInputSystem* , InputStandardCursor_t);
	/* ../public/inputsystem/iinputsystem.h:117 */
	virtual bool LoadCursorFromFile(IInputSystem* , const char* , const char* , int, int);
	/* ../public/inputsystem/iinputsystem.h:120 */
	virtual void DestroyLoadedCursor(IInputSystem* , InputCursorHandle_t);
	/* ../public/inputsystem/iinputsystem.h:124 */
	virtual void SetCursorIcon(IInputSystem* , InputCursorHandle_t, bool);
	/* ../public/inputsystem/iinputsystem.h:125 */
	virtual void SetCursorStandard(IInputSystem* , InputStandardCursor_t, bool);
	/* ../public/inputsystem/iinputsystem.h:128 */
	virtual void GetCursorPosition(IInputSystem* , int* , int* , PlatWindow_t);
	/* ../public/inputsystem/iinputsystem.h:131 */
	virtual bool HasMouseFocus(const IInputSystem* );
	/* ../public/inputsystem/iinputsystem.h:134 */
	virtual bool IsAppActive(const IInputSystem* );
	/* ../public/inputsystem/iinputsystem.h:137 */
	virtual void EnablePowerManagement(IInputSystem* , bool);
	/* ../public/inputsystem/iinputsystem.h:140 */
	virtual void EnableSystemCommands(IInputSystem* , uint32, bool);
	/* ../public/inputsystem/iinputsystem.h:142 */
	virtual void SetRelativeMouseMode(IInputSystem* , bool);
	/* ../public/inputsystem/iinputsystem.h:143 */
	virtual bool GetRelativeMouseMode(IInputSystem* );
	/* ../public/inputsystem/iinputsystem.h:148 */
	virtual void OnDPIChanged(IInputSystem* );
	/* ../public/inputsystem/iinputsystem.h:156 */
	virtual bool IsIMEAllowed(const IInputSystem* );
	/* ../public/inputsystem/iinputsystem.h:157 */
	virtual void SetIMEAllowed(IInputSystem* , bool);
	/* ../public/inputsystem/iinputsystem.h:161 */
	virtual void SetIMETextLocation(IInputSystem* , int, int, int, int);
	/* ../public/inputsystem/iinputsystem.h:166 */
	virtual void DismissIME(IInputSystem* );
	/* ../public/inputsystem/iinputsystem.h:168 */
	virtual const char* GetIMEComposition(IInputSystem* , int);
	/* ../public/inputsystem/iinputsystem.h:170 */
	virtual void SetCursorUser(IInputSystem* , const char* , bool);
	/* ../public/inputsystem/iinputsystem.h:171 */
	virtual void ShutdownUserCursors(IInputSystem* );
	enum ButtonCode_t StringToCode<ButtonCode_t>(const class IInputSystem  *, const char  *); /* linkage=_ZNK12IInputSystem12StringToCodeI12ButtonCode_tEET_PKc */
	void DetachFromWindow(class IInputSystem *, PlatWindow_t); /* linkage=_ZN12IInputSystem16DetachFromWindowEP14PlatWindow_t__ */
	void AttachToWindow(class IInputSystem *, PlatWindow_t); /* linkage=_ZN12IInputSystem14AttachToWindowEP14PlatWindow_t__ */
	void IInputSystem(class IInputSystem *, class IInputSystem &); /* linkage=_ZN12IInputSystemC4EOS_ */
	void IInputSystem(class IInputSystem *, const class IInputSystem  &); /* linkage=_ZN12IInputSystemC4ERKS_ */
	void IInputSystem(class IInputSystem *); /* linkage=_ZN12IInputSystemC4Ev */
	void ~IInputSystem(class IInputSystem *); /* linkage=_ZN12IInputSystemD4Ev */
	virtual void AttachToWindow(class IInputSystem *, OsSpecificWindowHandle_t); /* linkage=_ZN12IInputSystem14AttachToWindowEP26OsSpecificWindowHandle_t__ */
	virtual void DetachFromWindow(class IInputSystem *, OsSpecificWindowHandle_t); /* linkage=_ZN12IInputSystem16DetachFromWindowEP26OsSpecificWindowHandle_t__ */
	virtual void RegisterWindowWithSDL(class IInputSystem *, OsSpecificWindowHandle_t); /* linkage=_ZN12IInputSystem21RegisterWindowWithSDLEP26OsSpecificWindowHandle_t__ */
	virtual void UnregisterWindowFromSDL(class IInputSystem *, OsSpecificWindowHandle_t); /* linkage=_ZN12IInputSystem23UnregisterWindowFromSDLEP26OsSpecificWindowHandle_t__ */
	virtual void SetEditorMainWindow(class IInputSystem *, OsSpecificWindowHandle_t); /* linkage=_ZN12IInputSystem19SetEditorMainWindowEP26OsSpecificWindowHandle_t__ */
	virtual void OnEditorGameFocusChange(class IInputSystem *, OsSpecificWindowHandle_t, bool); /* linkage=_ZN12IInputSystem23OnEditorGameFocusChangeEP26OsSpecificWindowHandle_t__b */
	virtual void PollInputState(class IInputSystem *, bool); /* linkage=_ZN12IInputSystem14PollInputStateEb */
	virtual const char  * CodeToString(const class IInputSystem  *, enum ButtonCode_t); /* linkage=_ZNK12IInputSystem12CodeToStringE12ButtonCode_t */
	virtual enum ButtonCode_t StringToButtonCode(const class IInputSystem  *, const char  *); /* linkage=_ZNK12IInputSystem18StringToButtonCodeEPKc */
	virtual const char  * GetKeyDisplayName(const class IInputSystem  *, enum ButtonCode_t); /* linkage=_ZNK12IInputSystem17GetKeyDisplayNameE12ButtonCode_t */
	virtual enum ButtonCode_t VirtualKeyToButtonCode(const class IInputSystem  *, int); /* linkage=_ZNK12IInputSystem22VirtualKeyToButtonCodeEi */
	virtual int ButtonCodeToVirtualKey(const class IInputSystem  *, enum ButtonCode_t); /* linkage=_ZNK12IInputSystem22ButtonCodeToVirtualKeyE12ButtonCode_t */
	virtual void SetCursorPosition(class IInputSystem *, int, int, PlatWindow_t); /* linkage=_ZN12IInputSystem17SetCursorPositionEiiP14PlatWindow_t__ */
	virtual InputCursorHandle_t GetSystemCursor(class IInputSystem *, enum InputStandardCursor_t); /* linkage=_ZN12IInputSystem15GetSystemCursorE21InputStandardCursor_t */
	virtual InputCursorHandle_t GetStandardCursor(class IInputSystem *, enum InputStandardCursor_t); /* linkage=_ZN12IInputSystem17GetStandardCursorE21InputStandardCursor_t */
	virtual bool LoadCursorFromFile(class IInputSystem *, const char  *, const char  *, int, int); /* linkage=_ZN12IInputSystem18LoadCursorFromFileEPKcS1_ii */
	virtual void DestroyLoadedCursor(class IInputSystem *, InputCursorHandle_t); /* linkage=_ZN12IInputSystem19DestroyLoadedCursorEP21InputCursorHandle_t__ */
	virtual void SetCursorIcon(class IInputSystem *, InputCursorHandle_t, bool); /* linkage=_ZN12IInputSystem13SetCursorIconEP21InputCursorHandle_t__b */
	virtual void SetCursorStandard(class IInputSystem *, enum InputStandardCursor_t, bool); /* linkage=_ZN12IInputSystem17SetCursorStandardE21InputStandardCursor_tb */
	virtual void GetCursorPosition(class IInputSystem *, int *, int *, PlatWindow_t); /* linkage=_ZN12IInputSystem17GetCursorPositionEPiS0_P14PlatWindow_t__ */
	virtual bool HasMouseFocus(const class IInputSystem  *); /* linkage=_ZNK12IInputSystem13HasMouseFocusEv */
	virtual bool IsAppActive(const class IInputSystem  *); /* linkage=_ZNK12IInputSystem11IsAppActiveEv */
	virtual void EnablePowerManagement(class IInputSystem *, bool); /* linkage=_ZN12IInputSystem21EnablePowerManagementEb */
	virtual void EnableSystemCommands(class IInputSystem *, uint32, bool); /* linkage=_ZN12IInputSystem20EnableSystemCommandsEjb */
	virtual void SetRelativeMouseMode(class IInputSystem *, bool); /* linkage=_ZN12IInputSystem20SetRelativeMouseModeEb */
	virtual bool GetRelativeMouseMode(class IInputSystem *); /* linkage=_ZN12IInputSystem20GetRelativeMouseModeEv */
	virtual void OnDPIChanged(class IInputSystem *); /* linkage=_ZN12IInputSystem12OnDPIChangedEv */
	virtual bool IsIMEAllowed(const class IInputSystem  *); /* linkage=_ZNK12IInputSystem12IsIMEAllowedEv */
	virtual void SetIMEAllowed(class IInputSystem *, bool); /* linkage=_ZN12IInputSystem13SetIMEAllowedEb */
	virtual void SetIMETextLocation(class IInputSystem *, int, int, int, int); /* linkage=_ZN12IInputSystem18SetIMETextLocationEiiii */
	virtual void DismissIME(class IInputSystem *); /* linkage=_ZN12IInputSystem10DismissIMEEv */
	virtual const char  * GetIMEComposition(class IInputSystem *, int); /* linkage=_ZN12IInputSystem17GetIMECompositionEi */
	virtual void SetCursorUser(class IInputSystem *, const char  *, bool); /* linkage=_ZN12IInputSystem13SetCursorUserEPKcb */
	virtual void ShutdownUserCursors(class IInputSystem *); /* linkage=_ZN12IInputSystem19ShutdownUserCursorsEv */
};

// <004D3F6F> ../public/inputsystem/iinputsystem.h:174
inline void IInputSystem::StringToCode<ButtonCode_t>(const char* pString)
{
} /* size: 0 */

// <007D6E16> ../public/inputsystem/iinputsystem.h:179
inline void IInputSystem::AttachToWindow(PlatWindow_t hWnd)
{
} /* size: 0 */

// <007D6DF1> ../public/inputsystem/iinputsystem.h:184
inline void IInputSystem::DetachFromWindow(PlatWindow_t hWnd)
{
} /* size: 0 */

