
//
// inputsystem/inputsystem.cpp
//
//	referenced by: libengine2.so
//
//	functions: 86
//

// <008B3DC2> inputsystem/inputsystem.cpp:43
inline bool Input_ShouldSpew(void)
{
} /* size: 0 */

// <008B3DAF> inputsystem/inputsystem.cpp:48
inline bool InputTiming_ShouldSpew(void)
{
} /* size: 0 */

// <008B3D8E> inputsystem/inputsystem.cpp:57
void* __CreateCInputSystemIInputSystem_interface(void)
{
} /* size: 12 */

// <008B36ED> inputsystem/inputsystem.cpp:64
// function calls: 24
void CInputSystem::CInputSystem()
{
	IAppSystem::IAppSystem(); // 70
	IInputSystem::IInputSystem(); // 120
	CBaseAppSystem<IInputSystem>::CBaseAppSystem(); // 171
	CTier0AppSystem<IInputSystem, 0>::CTier0AppSystem(); // 225
	CTier1AppSystem<IInputSystem, 0>::CTier1AppSystem(); // 48
	CUtlMemory<ResourceManifestDesc_t::ValidateGrowSize(); // 475
	CUtlMemory<ResourceManifestDesc_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ResourceManifestDesc_t::ResetDbgInfo(); // 530
	CUtlVectorBase<ResourceManifestDesc_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ResourceManifestDesc_t::CUtlVector(); // 48
	CTier2AppSystem<IInputSystem, 0>::CTier2AppSystem(); // 64
	CUtlMemory<CInputSystem::InputWindow_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CInputSystem::InputWindow_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CInputSystem::InputWindow_t, CUtlMemory<CInputSystem::InputWindow_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CInputSystem::InputWindow_t, CUtlMemory<CInputSystem::InputWindow_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CInputSystem::InputWindow_t, CUtlMemory<CInputSystem::InputWindow_t, int> >::CUtlVector(); // 64
	CUtlMemory<CInputSystem::UserCursor_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CInputSystem::UserCursor_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CInputSystem::UserCursor_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CInputSystem::UserCursor_t, CUtlMemory<CInputSystem::UserCursor_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CInputSystem::UserCursor_t, CUtlMemory<CInputSystem::UserCursor_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<CInputSystem::UserCursor_t, CUtlMemory<CInputSystem::UserCursor_t, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 30
	CUtlStringMap<CInputSystem::UserCursor_t, CUtlSymbolTable>::CUtlStringMap(
			bool caseInsensitive,
			int growSize,
			int initSize);  // 64
	CUtlString::CUtlString(); // 64
} /* size: 320, inline expansions: 24 (315 bytes) */

// <008B36D4> inputsystem/inputsystem.cpp:64
void CInputSystem::CInputSystem()
{
} /* size: 0 */

// <008B310F> inputsystem/inputsystem.cpp:93
// function calls: 30
void CInputSystem::~CInputSystem()
{
	CUtlString::~CUtlString(); // 96
	CUtlVectorBase<CInputSystem::UserCursor_t, CUtlMemory<CInputSystem::UserCursor_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CInputSystem::UserCursor_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CInputSystem::UserCursor_t, int>::Purge(); // 903
	CUtlMemory<CInputSystem::UserCursor_t, int>::Purge(); // 1799
	CUtlVectorBase<CInputSystem::UserCursor_t, CUtlMemory<CInputSystem::UserCursor_t, int> >::Purge(); // 560
	ValidateAlignment<CInputSystem::UserCursor_t>(void); // 508
	CUtlMemory<CInputSystem::UserCursor_t, int>::Purge(); // 510
	CUtlMemory<CInputSystem::UserCursor_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CInputSystem::UserCursor_t, CUtlMemory<CInputSystem::UserCursor_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CInputSystem::UserCursor_t, CUtlMemory<CInputSystem::UserCursor_t, int> >::~CUtlVector(); // 15
	CUtlStringMap<CInputSystem::UserCursor_t, CUtlSymbolTable>::~CUtlStringMap(); // 96
	CUtlVectorBase<CInputSystem::InputWindow_t, CUtlMemory<CInputSystem::InputWindow_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CInputSystem::InputWindow_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CInputSystem::InputWindow_t, int>::Purge(); // 903
	CUtlMemory<CInputSystem::InputWindow_t, int>::Purge(); // 1799
	CUtlVectorBase<CInputSystem::InputWindow_t, CUtlMemory<CInputSystem::InputWindow_t, int> >::Purge(); // 560
	ValidateAlignment<CInputSystem::InputWindow_t>(void); // 508
	CUtlMemory<CInputSystem::InputWindow_t, int>::Purge(); // 510
	CUtlMemory<CInputSystem::InputWindow_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CInputSystem::InputWindow_t, CUtlMemory<CInputSystem::InputWindow_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CInputSystem::InputWindow_t, CUtlMemory<CInputSystem::InputWindow_t, int> >::~CUtlVector(); // 96
	CUtlMemory<ResourceManifestDesc_t::IsExternallyAllocated(); // 905
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 903
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 1799
	CUtlVectorBase<ResourceManifestDesc_t::RemoveAll(); // 1798
	CUtlVectorBase<ResourceManifestDesc_t::Purge(); // 560
	CUtlVectorBase<ResourceManifestDesc_t::~CUtlVectorBase(); // 410
	CUtlVector<ResourceManifestDesc_t::~CUtlVector(); // 42
	CTier2AppSystem<IInputSystem, 0>::~CTier2AppSystem(); // 96
} /* size: 182, inline expansions: 30 (559 bytes) */

// <008B30A8> inputsystem/inputsystem.cpp:93
void CInputSystem::~CInputSystem()
{
} /* size: 36 */

// <008B2DB5> inputsystem/inputsystem.cpp:101
// variables: 2
// function calls: 2
void CInputSystem::Init()
{
	InitReturnVal_t nRetVal; // 103
	_BlockRequiresSDLMainThread_t blockRequiresSDLMainThread___LINE__; // 107
	CTier0AppSystem<IInputSystem, 0>::Init(); // 71
	CTier2AppSystem<IInputSystem, 0>::Init(); // 103
} /* size: 357, variables: 2, inline expansions: 2 (44 bytes) */

// <008B2D87> inputsystem/inputsystem.cpp:161
void CInputSystem::GetDependencies()
{
} /* size: 12 */

// <008B2C7C> inputsystem/inputsystem.cpp:166
// function calls: 2
void CInputSystem::Connect(CreateInterfaceFn factory)
{
	CTier0AppSystem<IInputSystem, 0>::Connect(
		CreateInterfaceFn factory);  // 54
	CTier2AppSystem<IInputSystem, 0>::Connect(
		CreateInterfaceFn factory);  // 168
} /* size: 100, inline expansions: 2 (54 bytes) */

// <008B2BC8> inputsystem/inputsystem.cpp:177
// function calls: 2
void CInputSystem::Shutdown()
{
	CTier0AppSystem<IInputSystem, 0>::Shutdown(); // 85
	CTier2AppSystem<IInputSystem, 0>::Shutdown(); // 187
} /* size: 86, inline expansions: 2 (52 bytes) */

// <008C742F> inputsystem/inputsystem.cpp:209
// variables: 2
// function calls: 3
void CInputSystem::FindInputWindow(OsSpecificWindowHandle_t hWnd)
{
	int nCount; // 211
	CUtlVectorBase<CInputSystem::InputWindow_t, CUtlMemory<CInputSystem::InputWindow_t, int> >::Count(); // 211
	{
		int i; // 212
		CUtlMemory<CInputSystem::InputWindow_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CInputSystem::InputWindow_t, CUtlMemory<CInputSystem::InputWindow_t, int> >::operator[](
				int i);  // 214
	}
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <008B2B89> inputsystem/inputsystem.cpp:209
// variables: 2
void CInputSystem::FindInputWindow(OsSpecificWindowHandle_t hWnd)
{
	int nCount; // 211
	{
		int i; // 212
	}
} /* size: 0, variables: 1 */

// <008CAE50> inputsystem/inputsystem.cpp:224
// variables: 2
// function calls: 13
void CInputSystem::AttachToWindow(OsSpecificWindowHandle_t hPlatWnd)
{
	int i; // 232
	CUtlVectorBase<CInputSystem::InputWindow_t, CUtlMemory<CInputSystem::InputWindow_t, int> >::Count(); // 211
	{
		int i; // 212
		CUtlMemory<CInputSystem::InputWindow_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CInputSystem::InputWindow_t, CUtlMemory<CInputSystem::InputWindow_t, int> >::operator[](
				int i);  // 214
	}
	CInputSystem::FindInputWindow(
			OsSpecificWindowHandle_t hWnd);  // 226
	CUtlMemory<CInputSystem::InputWindow_t, int>::NumAllocated(); // 1143
	CUtlMemory<CInputSystem::InputWindow_t, int>::Base(); // 112
	CUtlVectorBase<CInputSystem::InputWindow_t, CUtlMemory<CInputSystem::InputWindow_t, int> >::Base(); // 368
	CUtlVectorBase<CInputSystem::InputWindow_t, CUtlMemory<CInputSystem::InputWindow_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CInputSystem::InputWindow_t, CUtlMemory<CInputSystem::InputWindow_t, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CInputSystem::InputWindow_t, CUtlMemory<CInputSystem::InputWindow_t, int> >::AddToTail(); // 232
	CUtlMemory<CInputSystem::InputWindow_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CInputSystem::InputWindow_t, CUtlMemory<CInputSystem::InputWindow_t, int> >::operator[](
			int i);  // 233
	CInputSystem::AttachToWindow(
			OsSpecificWindowHandle_t hPlatWnd);  // 224
} /* size: 168, variables: 1, inline expansions: 11 (266 bytes) */

// <008B2B59> inputsystem/inputsystem.cpp:224
// variable: 1
void CInputSystem::AttachToWindow(OsSpecificWindowHandle_t hPlatWnd)
{
	int i; // 232
} /* size: 0, variables: 1 */

// <008B2873> inputsystem/inputsystem.cpp:254
// variables: 3
// function calls: 12
void CInputSystem::DetachFromWindow(OsSpecificWindowHandle_t hPlatWnd)
{
	int i; // 256
	CUtlVectorBase<CInputSystem::InputWindow_t, CUtlMemory<CInputSystem::InputWindow_t, int> >::Count(); // 211
	{
		int i; // 212
		CUtlMemory<CInputSystem::InputWindow_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CInputSystem::InputWindow_t, CUtlMemory<CInputSystem::InputWindow_t, int> >::operator[](
				int i);  // 214
	}
	CInputSystem::FindInputWindow(
			OsSpecificWindowHandle_t hWnd);  // 256
	CUtlMemory<CInputSystem::InputWindow_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CInputSystem::InputWindow_t, CUtlMemory<CInputSystem::InputWindow_t, int> >::Element(
		int i);  // 1575
	Destruct<CInputSystem::InputWindow_t>(InputWindow_t* pMemory); // 1575
	{
		const bool  bNotLast; // 1578
		CUtlMemory<CInputSystem::InputWindow_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CInputSystem::InputWindow_t, CUtlMemory<CInputSystem::InputWindow_t, int> >::Element(
			int i);  // 1584
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 1584
	}
	CUtlVectorBase<CInputSystem::InputWindow_t, CUtlMemory<CInputSystem::InputWindow_t, int> >::FastRemove(
			int elem);  // 267
} /* size: 126, variables: 1, inline expansions: 6 (133 bytes) */

// <008B280F> inputsystem/inputsystem.cpp:273
void CInputSystem::CodeToString(ButtonCode_t code)
{
} /* size: 13 */

// <008B27AB> inputsystem/inputsystem.cpp:278
void CInputSystem::GetKeyDisplayName(ButtonCode_t code)
{
} /* size: 13 */

// <008B2747> inputsystem/inputsystem.cpp:283
void CInputSystem::StringToButtonCode(const char* pString)
{
} /* size: 17 */

// <008B26E8> inputsystem/inputsystem.cpp:292
void CInputSystem::VirtualKeyToButtonCode(int nVirtualKey)
{
} /* size: 11 */

// <008B2689> inputsystem/inputsystem.cpp:297
void CInputSystem::ButtonCodeToVirtualKey(ButtonCode_t code)
{
} /* size: 11 */

// <008C7542> inputsystem/inputsystem.cpp:302
void CInputSystem::DetectApplicationActive()
{
} /* size: 0 */

// <008B22B7> inputsystem/inputsystem.cpp:386
// variables: 2
// function calls: 14
void CInputSystem::SDL_Spew(const SDL_Event& event)
{
	{
		CFmtStr sButtons; // 402
		{
			int i; // 404
			CBufferString::Length(); // 86
			CFmtStrN<256>::Length(); // 408
		}
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 80
		CFmtStrN<256>::Get(); // 419
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 427
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<256>::CBufferStringN(); // 29
		CFmtStrN<256>::CFmtStrN(); // 402
	}
	tokenset_t<SDL_EventType>::GetNameByToken(
			SDL_EventType checkToken);  // 393
} /* size: 569, inline expansions: 1 (76 bytes) */

// <008B20C6> inputsystem/inputsystem.cpp:472
// variables: 5
// function calls: 2
void CInputSystem::PollInputState_SDL()
{
	uint64 nLimitTicks; // 474
	uint64 nPollLimit; // 475
	SDL_Event event; // 495
	{
		uint64 nLastPollTicks; // 489
		uint64 nPollTicks; // 490
	}
	InputTiming_ShouldSpew(void); // 487
	Input_ShouldSpew(void); // 504
} /* size: 289, variables: 3, inline expansions: 2 (0 bytes) */

// <008C9C25> inputsystem/inputsystem.cpp:527
// variable: 1
// function calls: 4
void CInputSystem::PollInputState(bool bPollOutOfBand)
{
	Scope s; // 529
	Scope::Scope(
		const char* name,
		const char* data,
		uint32 color);  // 529
	Scope::~Scope(); // 548
	Scope::~Scope(); // 548
	CInputSystem::PollInputState(
			bool bPollOutOfBand);  // 527
} /* size: 97, variables: 1, inline expansions: 4 (46 bytes) */

// <008B2095> inputsystem/inputsystem.cpp:527
// variable: 1
void CInputSystem::PollInputState(bool bPollOutOfBand)
{
	Scope s; // 529
} /* size: 0, variables: 1 */

// <008B2015> inputsystem/inputsystem.cpp:553
// variables: 3
void CInputSystem::ComputeSampleTick()
{
	int nSampleTick; // 556
	uint32 nCurrentTick; // 558
	{
		uint32 nDelta; // 565
	}
} /* size: 0, variables: 2 */

// <008B1F4D> inputsystem/inputsystem.cpp:593
// variables: 2
void CInputSystem::SetCursorPosition(int x, int y, PlatWindow_t hRelativeToWnd)
{
	int screenX; // 595
	int screenY; // 596
} /* size: 123, variables: 2 */

// <008B1E90> inputsystem/inputsystem.cpp:607
// variables: 2
void CInputSystem::GetCursorPosition(int* pX, int* pY, PlatWindow_t hRelativeToWnd)
{
	int screenX; // 609
	int screenY; // 610
} /* size: 131, variables: 2 */

// <008B1E39> inputsystem/inputsystem.cpp:625
// variable: 1
void GetKeyModifierFlags(SDL_Keymod modstate)
{
	uint nModifierFlags; // 627
} /* size: 73, variables: 1 */

// <008B1C59> inputsystem/inputsystem.cpp:652
// variables: 3
void CInputSystem::AddGameController(int controllerIndex)
{
	SDL_Gamepad* controller; // 654
	SDL_Joystick* joystick; // 661
	int32 joystickInstanceId; // 669
} /* size: 323, variables: 3 */

// <008C756D> inputsystem/inputsystem.cpp:684
// variable: 1
// function call: 1
void CInputSystem::RemoveGameController(int joystickInstanceId)
{
	SDL_Gamepad* controller; // 686
	CInputSystem::RemoveGameController(
				int joystickInstanceId);  // 684
} /* size: 112, variables: 1, inline expansions: 1 (27 bytes) */

// <008B1C26> inputsystem/inputsystem.cpp:684
// variable: 1
void CInputSystem::RemoveGameController(int joystickInstanceId)
{
	SDL_Gamepad* controller; // 686
} /* size: 0, variables: 1 */

// <008B1A2D> inputsystem/inputsystem.cpp:697
// variables: 2
// function calls: 4
void CInputSystem::OnAppActivationChanged(bool bIsActive, PlatWindow_t hEventWnd)
{
	{
		OsSpecificWindowHandle_t hOsEventWnd; // 715
		{
			int i; // 716
			CUtlVectorBase<CInputSystem::InputWindow_t, CUtlMemory<CInputSystem::InputWindow_t, int> >::Count(); // 716
			CUtlMemory<CInputSystem::InputWindow_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CInputSystem::InputWindow_t, CUtlMemory<CInputSystem::InputWindow_t, int> >::operator[](
					int i);  // 718
		}
	}
	Input_ShouldSpew(void); // 699
} /* size: 0, inline expansions: 1 (0 bytes) */

// <008B17BA> inputsystem/inputsystem.cpp:729
// variables: 2
// function calls: 3
void CInputSystem::OnWindowActivationChanged(bool bIsActive, OsSpecificWindowHandle_t hEventWnd)
{
	{
		CursorEntry_t* pCursorEntry; // 752
		{
			_BlockRequiresSDLMainThread_t blockRequiresSDLMainThread___LINE__; // 755
		}
		CInputSystem::GetStandardCursor(
					InputStandardCursor_t id);  // 752
		CInputSystem::HandleToEntry(
				InputCursorHandle_t hCursor);  // 752
	}
	Input_ShouldSpew(void); // 734
} /* size: 0, inline expansions: 1 (0 bytes) */

// <008C59BB> inputsystem/inputsystem.cpp:764
// variables: 2
// function calls: 3
void CInputSystem::OnEditorGameFocusChange(OsSpecificWindowHandle_t hWnd, bool bIsFocused)
{
	{
		CursorEntry_t* pCursorEntry; // 787
		CInputSystem::GetStandardCursor(
					InputStandardCursor_t id);  // 787
		CInputSystem::HandleToEntry(
				InputCursorHandle_t hCursor);  // 787
		{
			_BlockRequiresSDLMainThread_t blockRequiresSDLMainThread___LINE__; // 790
		}
	}
	CInputSystem::OnEditorGameFocusChange(
				OsSpecificWindowHandle_t hWnd,
				bool bIsFocused);  // 764
} /* size: 423, inline expansions: 1 (291 bytes) */

// <008B1769> inputsystem/inputsystem.cpp:764
// variables: 2
void CInputSystem::OnEditorGameFocusChange(OsSpecificWindowHandle_t hWnd, bool bIsFocused)
{
	{
		CursorEntry_t* pCursorEntry; // 787
		{
			_BlockRequiresSDLMainThread_t blockRequiresSDLMainThread___LINE__; // 790
		}
	}
} /* size: 0 */

// <008B1737> inputsystem/inputsystem.cpp:799
inline ButtonCode_t ButtonCode_SDLKeyEventToButtonCode(const SDL_KeyboardEvent& kb, bool bButtonCodeIsScanCode)
{
} /* size: 0 */

// <008B12C0> inputsystem/inputsystem.cpp:811
// variables: 20
// function calls: 3
void CInputSystem::ProcessSDLEvent(const SDL_Event* pEvent)
{
	{
		const SDL_KeyboardEvent& kb; // 824
		bool bRepeating; // 825
		bool bDown; // 826
		ButtonCode_t scanButtonCode; // 828
		ButtonCode_t keyButtonCode; // 829
		ButtonCode_SDLKeyEventToButtonCode(const SDL_KeyboardEvent& kb,
							bool bButtonCodeIsScanCode);  // 828
		ButtonCode_SDLKeyEventToButtonCode(const SDL_KeyboardEvent& kb,
							bool bButtonCodeIsScanCode);  // 829
	}
	{
		const SDL_TextInputEvent& input; // 842
		uchar32 unichars; // 844
		int count; // 846
		{
			int i; // 847
		}
		V_strlen32(const uchar32* puc32); // 846
	}
	{
		const SDL_MouseMotionEvent& motionEvent; // 856
	}
	{
		const SDL_MouseButtonEvent& buttonEvent; // 884
		bool bDown; // 885
		int windowID; // 886
		int button; // 893
		ButtonCode_t code; // 903
	}
	{
		const SDL_MouseWheelEvent& wheelEvent; // 910
	}
	{
		GameControllerCode_t code; // 942
		bool bDown; // 944
	}
	{
		GameControllerAxis_t code; // 950
		Sint16 value; // 951
	}
} /* size: 1264 */

// <008B1282> inputsystem/inputsystem.cpp:1282
void CInputSystem::EnablePowerManagement(bool bEnable)
{
} /* size: 9 */

// <008B11F3> inputsystem/inputsystem.cpp:1287
// variable: 1
void CInputSystem::EnableSystemCommands(uint32 nSystemCommandFlags, bool bEnable)
{
	uint32 nChanges; // 1289
} /* size: 61, variables: 1 */

// <008B0F20> inputsystem/inputsystem.cpp:1316
// function calls: 3
void CInputSystem::InitCursors()
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1319
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 1337
	CInputSystem::GetSystemCursor(
			InputStandardCursor_t id);  // 1339
} /* size: 569, inline expansions: 3 (245 bytes) */

// <008B097F> inputsystem/inputsystem.cpp:1342
// variables: 4
// function calls: 21
void CInputSystem::ShutdownCursors()
{
	int nCount; // 1344
	{
		UtlSymId_t i; // 1345
		CUtlVectorBase<CInputSystem::UserCursor_t, CUtlMemory<CInputSystem::UserCursor_t, int> >::Count(); // 53
		{
		}
		CUtlMemory<CInputSystem::UserCursor_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CInputSystem::UserCursor_t, CUtlMemory<CInputSystem::UserCursor_t, int> >::operator[](
				int i);  // 54
		CUtlStringMap<CInputSystem::UserCursor_t, CUtlSymbolTable>::operator[](
				IndexType_t n);  // 1347
		CUtlMemory<CInputSystem::UserCursor_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CInputSystem::UserCursor_t, CUtlMemory<CInputSystem::UserCursor_t, int> >::operator[](
				int i);  // 54
		CUtlVectorBase<CInputSystem::UserCursor_t, CUtlMemory<CInputSystem::UserCursor_t, int> >::Count(); // 53
		{
		}
		CUtlStringMap<CInputSystem::UserCursor_t, CUtlSymbolTable>::operator[](
				IndexType_t n);  // 1349
	}
	{
		int i; // 1354
		{
			CursorEntry_t* pCursorEntry; // 1356
			CInputSystem::HandleToEntry(
					InputCursorHandle_t hCursor);  // 1356
		}
	}
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
	CUtlSymbolTable::GetNumStrings(); // 177
	CUtlStringMap<CInputSystem::UserCursor_t, CUtlSymbolTable>::GetNumStrings(); // 1344
	CUtlVectorBase<CInputSystem::UserCursor_t, CUtlMemory<CInputSystem::UserCursor_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CInputSystem::UserCursor_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CInputSystem::UserCursor_t, int>::Purge(); // 903
	CUtlMemory<CInputSystem::UserCursor_t, int>::Purge(); // 1799
	CUtlVectorBase<CInputSystem::UserCursor_t, CUtlMemory<CInputSystem::UserCursor_t, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<CInputSystem::UserCursor_t, CUtlMemory<CInputSystem::UserCursor_t, int> >::Purge(); // 200
	CUtlStringMap<CInputSystem::UserCursor_t, CUtlSymbolTable>::Purge(); // 1352
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1363
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 1364
} /* size: 0, variables: 1, inline expansions: 12 (526 bytes) */

// <008B0311> inputsystem/inputsystem.cpp:1368
// variables: 3
// function calls: 23
void CInputSystem::ShutdownUserCursors()
{
	int nCount; // 1370
	{
		UtlSymId_t i; // 1371
		{
			InputCursorHandle_t hCursor; // 1375
			CUtlMemory<CInputSystem::UserCursor_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CInputSystem::UserCursor_t, CUtlMemory<CInputSystem::UserCursor_t, int> >::operator[](
					int i);  // 54
			CUtlVectorBase<CInputSystem::UserCursor_t, CUtlMemory<CInputSystem::UserCursor_t, int> >::Count(); // 53
			{
			}
			CUtlStringMap<CInputSystem::UserCursor_t, CUtlSymbolTable>::operator[](
					IndexType_t n);  // 1381
			CUtlVectorBase<CInputSystem::UserCursor_t, CUtlMemory<CInputSystem::UserCursor_t, int> >::Count(); // 53
			{
			}
			CUtlMemory<CInputSystem::UserCursor_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CInputSystem::UserCursor_t, CUtlMemory<CInputSystem::UserCursor_t, int> >::operator[](
					int i);  // 54
			CUtlStringMap<CInputSystem::UserCursor_t, CUtlSymbolTable>::operator[](
					IndexType_t n);  // 1375
			CInputSystem::SetCursorIcon(
					InputCursorHandle_t hCursor,
					bool bForce);  // 1378
		}
		CUtlVectorBase<CInputSystem::UserCursor_t, CUtlMemory<CInputSystem::UserCursor_t, int> >::Count(); // 53
		{
		}
		CUtlMemory<CInputSystem::UserCursor_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CInputSystem::UserCursor_t, CUtlMemory<CInputSystem::UserCursor_t, int> >::operator[](
				int i);  // 54
		CUtlStringMap<CInputSystem::UserCursor_t, CUtlSymbolTable>::operator[](
				IndexType_t n);  // 1373
	}
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
	CUtlSymbolTable::GetNumStrings(); // 177
	CUtlStringMap<CInputSystem::UserCursor_t, CUtlSymbolTable>::GetNumStrings(); // 1370
	CUtlVectorBase<CInputSystem::UserCursor_t, CUtlMemory<CInputSystem::UserCursor_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CInputSystem::UserCursor_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CInputSystem::UserCursor_t, int>::Purge(); // 903
	CUtlMemory<CInputSystem::UserCursor_t, int>::Purge(); // 1799
	CUtlVectorBase<CInputSystem::UserCursor_t, CUtlMemory<CInputSystem::UserCursor_t, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<CInputSystem::UserCursor_t, CUtlMemory<CInputSystem::UserCursor_t, int> >::Purge(); // 200
	CUtlStringMap<CInputSystem::UserCursor_t, CUtlSymbolTable>::Purge(); // 1384
} /* size: 0, variables: 1, inline expansions: 10 (302 bytes) */

// <008C7661> inputsystem/inputsystem.cpp:1387
// variable: 1
// function calls: 11
void CInputSystem::CreateCursorEntry(SDL_Cursor* pSDLCursor)
{
	CursorEntry_t* pCursorEntry; // 1389
	CUtlMemory<CInputSystem::CursorSurface_t, int>::CUtlMemory(
			CursorSurface_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CInputSystem::CursorSurface_t, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CInputSystem::CursorSurface_t, int>::CUtlMemoryFixedGrowable_Base(
					CursorSurface_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	{
	}
	AlignedByteArrayExplicit_t<1, CInputSystem::CursorSurface_t, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<1, CInputSystem::CursorSurface_t>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<1, CInputSystem::CursorSurface_t, 8>::Base(); // 231
	CUtlMemoryFixedGrowable<CInputSystem::CursorSurface_t, 1, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<CInputSystem::CursorSurface_t, CUtlMemoryFixedGrowable<CInputSystem::CursorSurface_t, 1, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CInputSystem::CursorSurface_t, CUtlMemoryFixedGrowable<CInputSystem::CursorSurface_t, 1, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CInputSystem::CursorSurface_t, 1>::CUtlVectorFixedGrowable(
				int growSize);  // 154
	CursorEntry_t::CursorEntry_t(); // 1389
} /* size: 0, variables: 1, inline expansions: 11 (0 bytes) */

// <008B0277> inputsystem/inputsystem.cpp:1387
// variable: 1
void CInputSystem::CreateCursorEntry(SDL_Cursor* pSDLCursor)
{
	CursorEntry_t* pCursorEntry; // 1389
} /* size: 0, variables: 1 */

// <008CB16F> inputsystem/inputsystem.cpp:1394
// variable: 1
// function calls: 9
void CInputSystem::AddCursorEntrySurface(CursorEntry_t* pCursorEntry, SDL_Surface* pSDLSurface, int nHotX, int nHotY)
{
	CursorSurface_t* pCursorSurface; // 1396
	CUtlMemory<CInputSystem::CursorSurface_t, int>::NumAllocated(); // 1143
	CUtlMemory<CInputSystem::CursorSurface_t, int>::Base(); // 112
	CUtlVectorBase<CInputSystem::CursorSurface_t, CUtlMemoryFixedGrowable<CInputSystem::CursorSurface_t, 1, int> >::Base(); // 368
	CUtlVectorBase<CInputSystem::CursorSurface_t, CUtlMemoryFixedGrowable<CInputSystem::CursorSurface_t, 1, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CInputSystem::CursorSurface_t, CUtlMemoryFixedGrowable<CInputSystem::CursorSurface_t, 1, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CInputSystem::CursorSurface_t, CUtlMemoryFixedGrowable<CInputSystem::CursorSurface_t, 1, int> >::AddToTail(); // 1156
	CUtlMemory<CInputSystem::CursorSurface_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CInputSystem::CursorSurface_t, CUtlMemoryFixedGrowable<CInputSystem::CursorSurface_t, 1, int> >::Element(
		int i);  // 1156
	CUtlVectorBase<CInputSystem::CursorSurface_t, CUtlMemoryFixedGrowable<CInputSystem::CursorSurface_t, 1, int> >::AddToTailGetPtr(); // 1396
} /* size: 0, variables: 1, inline expansions: 9 (0 bytes) */

// <008B021D> inputsystem/inputsystem.cpp:1394
// variable: 1
void CInputSystem::AddCursorEntrySurface(CursorEntry_t* pCursorEntry, SDL_Surface* pSDLSurface, int nHotX, int nHotY)
{
	CursorSurface_t* pCursorSurface; // 1396
} /* size: 0, variables: 1 */

// <008AFDFD> inputsystem/inputsystem.cpp:1402
// variables: 5
// function calls: 11
void CInputSystem::AddCursorEntrySurface(CursorEntry_t* pCursorEntry, KeyValues* pCursorResource, const char* pFullFile)
{
	SDL_Surface* surface; // 1404
	char pchCursorName; // 1411
	int nHotX; // 1414
	int nHotY; // 1414
	KeyValues* pRes; // 1416
	V_FileBase<long unsigned int>(const char* in,
					char* out,
					long unsigned int maxlen);  // 1412
	CUtlMemory<CInputSystem::CursorSurface_t, int>::NumAllocated(); // 1143
	CUtlMemory<CInputSystem::CursorSurface_t, int>::Base(); // 112
	CUtlVectorBase<CInputSystem::CursorSurface_t, CUtlMemoryFixedGrowable<CInputSystem::CursorSurface_t, 1, int> >::Base(); // 368
	CUtlVectorBase<CInputSystem::CursorSurface_t, CUtlMemoryFixedGrowable<CInputSystem::CursorSurface_t, 1, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CInputSystem::CursorSurface_t, CUtlMemoryFixedGrowable<CInputSystem::CursorSurface_t, 1, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CInputSystem::CursorSurface_t, CUtlMemoryFixedGrowable<CInputSystem::CursorSurface_t, 1, int> >::AddToTail(); // 1156
	CUtlMemory<CInputSystem::CursorSurface_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CInputSystem::CursorSurface_t, CUtlMemoryFixedGrowable<CInputSystem::CursorSurface_t, 1, int> >::Element(
		int i);  // 1156
	CUtlVectorBase<CInputSystem::CursorSurface_t, CUtlMemoryFixedGrowable<CInputSystem::CursorSurface_t, 1, int> >::AddToTailGetPtr(); // 1396
	CInputSystem::AddCursorEntrySurface(
				CursorEntry_t* pCursorEntry,
				SDL_Surface* pSDLSurface,
				int nHotX,
				int nHotY);  // 1423
} /* size: 0, variables: 5, inline expansions: 11 (0 bytes) */

// <008AEDBD> inputsystem/inputsystem.cpp:1427
// variables: 6
// function calls: 57
void CInputSystem::AddCursorEntrySurfaces(CursorEntry_t* pCursorEntry, KeyValues* pCursorResource, const char* pKeyFile, const char* pPathID)
{
	CPathBufferString bitmap; // 1431
	const char   __FUNCTION__; // 25544
	{
		CPathBufferString vszFile; // 1447
		int nBaseLen; // 1448
		int nFileIndex; // 1450
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 901
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 1445
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 627
		CBufferString::Length(); // 631
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 776
		CBufferString::String(); // 631
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 631
		CBufferStringN<200>::CBufferStringN(
				const CBufferStringN<200>& string);  // 1447
		CBufferString::Length(); // 1448
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1455
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
					PathTypeFilter_t pathFilter);  // 1455
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1456
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1469
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1476
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1476
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1478
	}
	CFileSystemPassThru::GetLocalCopy(
			const char* pFileName);  // 148
	CFileSystemPassThru::GetLocalCopy(
			const char* pFileName);  // 148
	CFileSystemPassThru::GetLocalCopy(
			const char* pFileName);  // 148
	CFileSystemPassThru::GetLocalCopy(
			const char* pFileName);  // 148
	CFileSystemPassThru::GetLocalCopy(
			const char* pFileName);  // 148
	CFileSystemPassThru::GetLocalCopy(
			const char* pFileName);  // 148
	CFileSystemPassThru::GetLocalCopy(
			const char* pFileName);  // 148
	CFileSystemPassThru::GetLocalCopy(
			const char* pFileName);  // 148
	CFileSystemPassThru::GetLocalCopy(
			const char* pFileName);  // 148
	CFileSystemPassThru::GetLocalCopy(
			const char* pFileName);  // 148
	CFileSystemPassThru::GetLocalCopy(
			const char* pFileName);  // 1429
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 1431
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
				PathTypeFilter_t pathFilter);  // 1432
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 1436
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 1438
	Count(const CUtlVectorBase<CInputSystem::CursorSurface_t, CUtlMemoryFixedGrowable<CInputSystem::CursorSurface_t, 1, int> this); // 135
	IsEmpty(const CUtlVectorBase<CInputSystem::CursorSurface_t, CUtlMemoryFixedGrowable<CInputSystem::CursorSurface_t, 1, int> this); // 1478
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1480
} /* size: 0, variables: 2, inline expansions: 27 (0 bytes) */

// <008C795F> inputsystem/inputsystem.cpp:1482
// function calls: 12
void CInputSystem::CreateSystemCursorEntry(SDL_SystemCursor sdlSystemCursor)
{
	CUtlMemory<CInputSystem::CursorSurface_t, int>::CUtlMemory(
			CursorSurface_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CInputSystem::CursorSurface_t, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CInputSystem::CursorSurface_t, int>::CUtlMemoryFixedGrowable_Base(
					CursorSurface_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	{
	}
	AlignedByteArrayExplicit_t<1, CInputSystem::CursorSurface_t, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<1, CInputSystem::CursorSurface_t>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<1, CInputSystem::CursorSurface_t, 8>::Base(); // 231
	CUtlMemoryFixedGrowable<CInputSystem::CursorSurface_t, 1, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<CInputSystem::CursorSurface_t, CUtlMemoryFixedGrowable<CInputSystem::CursorSurface_t, 1, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CInputSystem::CursorSurface_t, CUtlMemoryFixedGrowable<CInputSystem::CursorSurface_t, 1, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CInputSystem::CursorSurface_t, 1>::CUtlVectorFixedGrowable(
				int growSize);  // 154
	CursorEntry_t::CursorEntry_t(); // 1389
	CInputSystem::CreateCursorEntry(
				SDL_Cursor* pSDLCursor);  // 1484
} /* size: 0, inline expansions: 12 (0 bytes) */

// <008C5C05> inputsystem/inputsystem.cpp:1482
// function calls: 12
void CInputSystem::CreateSystemCursorEntry()
{
	CUtlMemory<CInputSystem::CursorSurface_t, int>::CUtlMemory(
			CursorSurface_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CInputSystem::CursorSurface_t, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CInputSystem::CursorSurface_t, int>::CUtlMemoryFixedGrowable_Base(
					CursorSurface_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	{
	}
	AlignedByteArrayExplicit_t<1, CInputSystem::CursorSurface_t, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<1, CInputSystem::CursorSurface_t>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<1, CInputSystem::CursorSurface_t, 8>::Base(); // 231
	CUtlMemoryFixedGrowable<CInputSystem::CursorSurface_t, 1, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<CInputSystem::CursorSurface_t, CUtlMemoryFixedGrowable<CInputSystem::CursorSurface_t, 1, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CInputSystem::CursorSurface_t, CUtlMemoryFixedGrowable<CInputSystem::CursorSurface_t, 1, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CInputSystem::CursorSurface_t, 1>::CUtlVectorFixedGrowable(
				int growSize);  // 154
	CursorEntry_t::CursorEntry_t(); // 1389
	CInputSystem::CreateCursorEntry(
				SDL_Cursor* pSDLCursor);  // 1484
} /* size: 131, inline expansions: 12 (395 bytes) */

// <008AED97> inputsystem/inputsystem.cpp:1482
void CInputSystem::CreateSystemCursorEntry(SDL_SystemCursor sdlSystemCursor)
{
} /* size: 0 */

// <008AE81C> inputsystem/inputsystem.cpp:1487
// variables: 3
// function calls: 21
void CInputSystem::DeleteCursorEntry(CursorEntry_t* pCursorEntry)
{
	_BlockRequiresSDLMainThread_t blockRequiresSDLMainThread___LINE__; // 1489
	{
		int i; // 1495
		{
			CursorSurface_t* pCursorSurface; // 1497
			CUtlMemory<CInputSystem::CursorSurface_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CInputSystem::CursorSurface_t, CUtlMemoryFixedGrowable<CInputSystem::CursorSurface_t, 1, int> >::operator[](
					int i);  // 1497
		}
		Count(const CUtlVectorBase<CInputSystem::CursorSurface_t, CUtlMemoryFixedGrowable<CInputSystem::CursorSurface_t, 1, int> this); // 1495
	}
	CUtlVectorBase<CInputSystem::CursorSurface_t, CUtlMemoryFixedGrowable<CInputSystem::CursorSurface_t, 1, int> >::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<1, CInputSystem::CursorSurface_t, 8>::Base(); // 237
	CUtlMemory<CInputSystem::CursorSurface_t, int>::IsExternallyAllocated(); // 577
	CUtlMemory<CInputSystem::CursorSurface_t, int>::ConvertToExternalMemory(
				CursorSurface_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CInputSystem::CursorSurface_t, int>::Purge_FixedGrowable(
				CursorSurface_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CInputSystem::CursorSurface_t, int>::Purge_FixedGrowable(
				CursorSurface_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<CInputSystem::CursorSurface_t, 1, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<CInputSystem::CursorSurface_t, CUtlMemoryFixedGrowable<CInputSystem::CursorSurface_t, 1, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<CInputSystem::CursorSurface_t, CUtlMemoryFixedGrowable<CInputSystem::CursorSurface_t, 1, int> >::Purge(); // 560
	ValidateAlignment<CInputSystem::CursorSurface_t>(void); // 508
	CUtlMemory<CInputSystem::CursorSurface_t, int>::Purge(); // 903
	CUtlMemory<CInputSystem::CursorSurface_t, int>::Purge(); // 510
	CUtlMemory<CInputSystem::CursorSurface_t, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CInputSystem::CursorSurface_t, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CInputSystem::CursorSurface_t, 1, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CInputSystem::CursorSurface_t, CUtlMemoryFixedGrowable<CInputSystem::CursorSurface_t, 1, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CInputSystem::CursorSurface_t, 1>::~CUtlVectorFixedGrowable(); // 154
	CursorEntry_t::~CursorEntry_t(); // 1500
} /* size: 275, variables: 1, inline expansions: 18 (732 bytes) */

// <008AE34E> inputsystem/inputsystem.cpp:1503
// variables: 17
// function calls: 8
void CInputSystem::ScaleCursorEntry(CursorEntry_t* pCursorEntry, const char* pName)
{
	CursorSurface_t* pBestCursorSurface; // 1513
	int nScaledWidth; // 1514
	int nScaledHeight; // 1515
	int nMinCursorX; // 1545
	int nMinCursorY; // 1546
	SDL_Surface* surface; // 1558
	int nHotX; // 1559
	int nHotY; // 1560
	int destCurWidth; // 1561
	int destCurHeight; // 1562
	{
		int i; // 1516
		{
			CursorSurface_t* pCursorSurface; // 1518
			CUtlMemory<CInputSystem::CursorSurface_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CInputSystem::CursorSurface_t, CUtlMemoryFixedGrowable<CInputSystem::CursorSurface_t, 1, int> >::operator[](
					int i);  // 1518
		}
	}
	{
		SDL_Surface* scaledSurface; // 1567
		{
			SDL_Rect src_rect; // 1571
			SDL_Rect dst_rect; // 1572
			float scaleX; // 1577
			float scaleY; // 1578
		}
	}
	Count(const CUtlVectorBase<CInputSystem::CursorSurface_t, CUtlMemoryFixedGrowable<CInputSystem::CursorSurface_t, 1, int> this); // 135
	IsEmpty(const CUtlVectorBase<CInputSystem::CursorSurface_t, CUtlMemoryFixedGrowable<CInputSystem::CursorSurface_t, 1, int> this); // 1505
	CUtlMemory<CInputSystem::CursorSurface_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CInputSystem::CursorSurface_t, CUtlMemoryFixedGrowable<CInputSystem::CursorSurface_t, 1, int> >::operator[](
			int i);  // 1513
	Max<int>(const int& val1,
		const int& val2);  // 1561
	Max<int>(const int& val1,
		const int& val2);  // 1562
} /* size: 619, variables: 10, inline expansions: 6 (34 bytes) */

// <008C8938> inputsystem/inputsystem.cpp:1613
// variable: 1
void CInputSystem::UpdateLoadedCursorScale(float fScale)
{
	CursorEntry_t* pCurCursorEntry; // 1622
} /* size: 0, variables: 1 */

// <008C823C> inputsystem/inputsystem.cpp:1613
// variables: 2
// function calls: 28
void CInputSystem::UpdateLoadedCursorScale(float fScale)
{
	CursorEntry_t* pCurCursorEntry; // 1622
	CInputSystem::HandleToEntry(
			InputCursorHandle_t hCursor);  // 1622
	{
		UtlSymId_t i; // 1623
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
		CUtlSymbolTable::GetNumStrings(); // 76
		CUtlVectorBase<CInputSystem::UserCursor_t, CUtlMemory<CInputSystem::UserCursor_t, int> >::Count(); // 76
		{
		}
		CUtlVectorBase<CInputSystem::UserCursor_t, CUtlMemory<CInputSystem::UserCursor_t, int> >::Count(); // 79
		CUtlStringMap<CInputSystem::UserCursor_t, CUtlSymbolTable>::Count(); // 142
		CUtlStringMap<CInputSystem::UserCursor_t, CUtlSymbolTable>::First(); // 1623
		{
		}
		CUtlMemory<CInputSystem::UserCursor_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CInputSystem::UserCursor_t, CUtlMemory<CInputSystem::UserCursor_t, int> >::operator[](
				int i);  // 54
		CUtlStringMap<CInputSystem::UserCursor_t, CUtlSymbolTable>::operator[](
				IndexType_t n);  // 1625
		CUtlMemory<CInputSystem::UserCursor_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CInputSystem::UserCursor_t, CUtlMemory<CInputSystem::UserCursor_t, int> >::operator[](
				int i);  // 54
		CUtlVectorBase<CInputSystem::UserCursor_t, CUtlMemory<CInputSystem::UserCursor_t, int> >::Count(); // 53
		{
		}
		CUtlStringMap<CInputSystem::UserCursor_t, CUtlSymbolTable>::operator[](
				IndexType_t n);  // 1627
		CUtlVectorBase<CInputSystem::UserCursor_t, CUtlMemory<CInputSystem::UserCursor_t, int> >::Count(); // 53
		{
		}
		CUtlMemory<CInputSystem::UserCursor_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CInputSystem::UserCursor_t, CUtlMemory<CInputSystem::UserCursor_t, int> >::operator[](
				int i);  // 54
		CUtlStringMap<CInputSystem::UserCursor_t, CUtlSymbolTable>::operator[](
				IndexType_t n);  // 1629
		CUtlVectorBase<CInputSystem::UserCursor_t, CUtlMemory<CInputSystem::UserCursor_t, int> >::Count(); // 76
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
		CUtlSymbolTable::GetNumStrings(); // 76
		{
		}
		CUtlVectorBase<CInputSystem::UserCursor_t, CUtlMemory<CInputSystem::UserCursor_t, int> >::Count(); // 79
		CUtlStringMap<CInputSystem::UserCursor_t, CUtlSymbolTable>::Count(); // 155
		CUtlStringMap<CInputSystem::UserCursor_t, CUtlSymbolTable>::Next(
			IndexType_t i);  // 1623
		CUtlMemory<CInputSystem::UserCursor_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CInputSystem::UserCursor_t, CUtlMemory<CInputSystem::UserCursor_t, int> >::operator[](
				int i);  // 54
		CUtlVectorBase<CInputSystem::UserCursor_t, CUtlMemory<CInputSystem::UserCursor_t, int> >::Count(); // 53
		{
		}
		CUtlStringMap<CInputSystem::UserCursor_t, CUtlSymbolTable>::operator[](
				IndexType_t n);  // 1631
	}
} /* size: 0, variables: 1, inline expansions: 1 (10 bytes) */

// <008AE30E> inputsystem/inputsystem.cpp:1613
// variables: 2
void CInputSystem::UpdateLoadedCursorScale(float fScale)
{
	CursorEntry_t* pCurCursorEntry; // 1622
	{
		UtlSymId_t i; // 1623
	}
} /* size: 0, variables: 1 */

// <008C4957> inputsystem/inputsystem.cpp:1637
void CInputSystem::GetSystemCursor(InputStandardCursor_t id)
{
} /* size: 16 */

// <008C498A> inputsystem/inputsystem.cpp:1645
void CInputSystem::GetStandardCursor(InputStandardCursor_t id)
{
} /* size: 16 */

// <008CAB05> inputsystem/inputsystem.cpp:1650
// variables: 9
void CInputSystem::LoadCursorFromFile(const char* pFileName, const char* pName, int nHotX, int nHotY)
{
	UtlSymId_t nCursorIndex; // 1657
	FloatBitMap_t fb; // 1664
	Bitmap_t bm; // 1668
	int nWidth; // 1671
	int nHeight; // 1672
	SDL_Surface* surface; // 1673
	SDL_Cursor* cursor; // 1677
	CursorEntry_t* pCursorEntry; // 1683
	UserCursor_t mapEntry; // 1684
} /* size: 35, variables: 9 */

// <008C9DAB> inputsystem/inputsystem.cpp:1650
// variables: 9
// function calls: 48
void CInputSystem::LoadCursorFromFile(const char* pFileName, const char* pName, int nHotX, int nHotY)
{
	UtlSymId_t nCursorIndex; // 1657
	FloatBitMap_t fb; // 1664
	Bitmap_t bm; // 1668
	int nWidth; // 1671
	int nHeight; // 1672
	SDL_Surface* surface; // 1673
	SDL_Cursor* cursor; // 1677
	CursorEntry_t* pCursorEntry; // 1683
	UserCursor_t mapEntry; // 1684
	CUtlSymbol::IsValid(); // 88
	CUtlSymbolTable::FindElement(
			const char* pString);  // 90
	CUtlStringMap<CInputSystem::UserCursor_t, CUtlSymbolTable>::Find(
		const char* pString);  // 1657
	CUtlVectorBase<CInputSystem::UserCursor_t, CUtlMemory<CInputSystem::UserCursor_t, int> >::Count(); // 53
	{
	}
	CUtlMemory<CInputSystem::UserCursor_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CInputSystem::UserCursor_t, CUtlMemory<CInputSystem::UserCursor_t, int> >::operator[](
			int i);  // 54
	CUtlStringMap<CInputSystem::UserCursor_t, CUtlSymbolTable>::operator[](
			IndexType_t n);  // 1660
	CUtlMemory<CInputSystem::UserCursor_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CInputSystem::UserCursor_t, CUtlMemory<CInputSystem::UserCursor_t, int> >::operator[](
			int i);  // 54
	CUtlVectorBase<CInputSystem::UserCursor_t, CUtlMemory<CInputSystem::UserCursor_t, int> >::Count(); // 53
	{
	}
	CUtlStringMap<CInputSystem::UserCursor_t, CUtlSymbolTable>::operator[](
			IndexType_t n);  // 1661
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 900
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 901
	CSOAContainer::Init(); // 1482
	CSOAContainer::CSOAContainer(); // 461
	FloatBitMap_t::FloatBitMap_t(); // 1664
	Bitmap_t::Reset(); // 31
	Bitmap_t::Bitmap_t(); // 1668
	Bitmap_t::Width(); // 1671
	Bitmap_t::Height(); // 1672
	Bitmap_t::GetBits(); // 1673
	Clamp<int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 1677
	Clamp<int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 1677
	CUtlMemory<CInputSystem::CursorSurface_t, int>::CUtlMemory(
			CursorSurface_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CInputSystem::CursorSurface_t, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CInputSystem::CursorSurface_t, int>::CUtlMemoryFixedGrowable_Base(
					CursorSurface_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	{
	}
	AlignedByteArrayExplicit_t<1, CInputSystem::CursorSurface_t, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<1, CInputSystem::CursorSurface_t>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<1, CInputSystem::CursorSurface_t, 8>::Base(); // 231
	CUtlMemoryFixedGrowable<CInputSystem::CursorSurface_t, 1, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<CInputSystem::CursorSurface_t, CUtlMemoryFixedGrowable<CInputSystem::CursorSurface_t, 1, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CInputSystem::CursorSurface_t, CUtlMemoryFixedGrowable<CInputSystem::CursorSurface_t, 1, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CInputSystem::CursorSurface_t, 1>::CUtlVectorFixedGrowable(
				int growSize);  // 154
	CursorEntry_t::CursorEntry_t(); // 1389
	CInputSystem::CreateCursorEntry(
				SDL_Cursor* pSDLCursor);  // 1683
	CUtlSymbol::IsValid(); // 64
	CUtlSymbolTable::AddStringElement(
			const char* pString);  // 37
	CUtlVectorBase<CInputSystem::UserCursor_t, CUtlMemory<CInputSystem::UserCursor_t, int> >::Count(); // 43
	CUtlMemory<CInputSystem::UserCursor_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CInputSystem::UserCursor_t, CUtlMemory<CInputSystem::UserCursor_t, int> >::operator[](
			int i);  // 47
	{
	}
	CUtlMemory<CInputSystem::UserCursor_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CInputSystem::UserCursor_t, CUtlMemory<CInputSystem::UserCursor_t, int> >::operator[](
			int i);  // 41
	CUtlStringMap<CInputSystem::UserCursor_t, CUtlSymbolTable>::operator[](
			const char* pString);  // 35
	CUtlStringMap<CInputSystem::UserCursor_t, CUtlSymbolTable>::operator[](
			const char* pString);  // 1685
	Bitmap_t::~Bitmap_t(); // 1688
	FloatBitMap_t::~FloatBitMap_t(); // 1688
} /* size: 0, variables: 9, inline expansions: 48 (2215 bytes) */

// <008C7CA0> inputsystem/inputsystem.cpp:1690
// variables: 4
// function calls: 21
void CInputSystem::DestroyLoadedCursor(InputCursorHandle_t hCursor)
{
	CursorEntry_t* pCursorEntry; // 1731
	{
		int i; // 1705
	}
	{
		int i; // 1715
	}
	{
		UtlSymId_t i; // 1734
		CUtlVectorBase<CInputSystem::UserCursor_t, CUtlMemory<CInputSystem::UserCursor_t, int> >::Count(); // 76
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
		CUtlSymbolTable::GetNumStrings(); // 76
		{
		}
		CUtlVectorBase<CInputSystem::UserCursor_t, CUtlMemory<CInputSystem::UserCursor_t, int> >::Count(); // 79
		CUtlStringMap<CInputSystem::UserCursor_t, CUtlSymbolTable>::Count(); // 142
		CUtlStringMap<CInputSystem::UserCursor_t, CUtlSymbolTable>::First(); // 1734
		{
		}
		CUtlMemory<CInputSystem::UserCursor_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CInputSystem::UserCursor_t, CUtlMemory<CInputSystem::UserCursor_t, int> >::operator[](
				int i);  // 54
		CUtlStringMap<CInputSystem::UserCursor_t, CUtlSymbolTable>::operator[](
				IndexType_t n);  // 1736
		CUtlVectorBase<CInputSystem::UserCursor_t, CUtlMemory<CInputSystem::UserCursor_t, int> >::Count(); // 76
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
		CUtlSymbolTable::GetNumStrings(); // 76
		{
		}
		CUtlVectorBase<CInputSystem::UserCursor_t, CUtlMemory<CInputSystem::UserCursor_t, int> >::Count(); // 79
		CUtlStringMap<CInputSystem::UserCursor_t, CUtlSymbolTable>::Count(); // 155
		CUtlStringMap<CInputSystem::UserCursor_t, CUtlSymbolTable>::Next(
			IndexType_t i);  // 1734
		CUtlMemory<CInputSystem::UserCursor_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CInputSystem::UserCursor_t, CUtlMemory<CInputSystem::UserCursor_t, int> >::operator[](
				int i);  // 54
		CUtlVectorBase<CInputSystem::UserCursor_t, CUtlMemory<CInputSystem::UserCursor_t, int> >::Count(); // 53
		{
		}
		CUtlStringMap<CInputSystem::UserCursor_t, CUtlSymbolTable>::operator[](
				IndexType_t n);  // 1738
	}
	CInputSystem::SetCursorIcon(
			InputCursorHandle_t hCursor,
			bool bForce);  // 1728
	CInputSystem::DestroyLoadedCursor(
				InputCursorHandle_t hCursor);  // 1690
} /* size: 0, variables: 1, inline expansions: 2 (718 bytes) */

// <008AE1A0> inputsystem/inputsystem.cpp:1690
// variables: 4
void CInputSystem::DestroyLoadedCursor(InputCursorHandle_t hCursor)
{
	CursorEntry_t* pCursorEntry; // 1731
	{
		int i; // 1705
	}
	{
		int i; // 1715
	}
	{
		UtlSymId_t i; // 1734
	}
} /* size: 0, variables: 1 */

// <008C4B5C> inputsystem/inputsystem.cpp:1745
// variables: 2
// function call: 1
void CInputSystem::SetCursorIcon(InputCursorHandle_t hCursor, bool bForce)
{
	_BlockRequiresSDLMainThread_t blockRequiresSDLMainThread___LINE__; // 1763
	CursorEntry_t* pCursorEntry; // 1765
	{
	}
	CInputSystem::HandleToEntry(
			InputCursorHandle_t hCursor);  // 1765
} /* size: 0, variables: 2, inline expansions: 1 (6 bytes) */

// <008AE113> inputsystem/inputsystem.cpp:1745
// variables: 4
void CInputSystem::SetCursorIcon(InputCursorHandle_t hCursor, bool bForce)
{
	const char   __FUNCTION__; // 25321
	_BlockRequiresSDLMainThread_t blockRequiresSDLMainThread___LINE__; // 1763
	CursorEntry_t* pCursorEntry; // 1765
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1747
	}
} /* size: 0, variables: 3 */

// <008ADFED> inputsystem/inputsystem.cpp:1787
// variable: 1
// function calls: 2
void CInputSystem::SetCursorStandard(InputStandardCursor_t hCursor, bool bForce)
{
	InputCursorHandle_t__* handle; // 1791
	CInputSystem::HasMouseFocus(); // 1789
	CInputSystem::GetSystemCursor(
			InputStandardCursor_t id);  // 1791
} /* size: 186, variables: 1, inline expansions: 2 (15 bytes) */

// <008ADC65> inputsystem/inputsystem.cpp:1796
// variables: 2
// function calls: 11
void CInputSystem::SetCursorUser(const char* pName, bool bForce)
{
	UtlSymId_t nCursorIndex; // 1798
	InputCursorHandle_t hCursor; // 1805
	CUtlSymbol::IsValid(); // 88
	CUtlSymbolTable::FindElement(
			const char* pString);  // 90
	CUtlStringMap<CInputSystem::UserCursor_t, CUtlSymbolTable>::Find(
		const char* pString);  // 1798
	CUtlVectorBase<CInputSystem::UserCursor_t, CUtlMemory<CInputSystem::UserCursor_t, int> >::Count(); // 53
	{
	}
	CUtlMemory<CInputSystem::UserCursor_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CInputSystem::UserCursor_t, CUtlMemory<CInputSystem::UserCursor_t, int> >::operator[](
			int i);  // 54
	CUtlStringMap<CInputSystem::UserCursor_t, CUtlSymbolTable>::operator[](
			IndexType_t n);  // 1802
	CUtlMemory<CInputSystem::UserCursor_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CInputSystem::UserCursor_t, CUtlMemory<CInputSystem::UserCursor_t, int> >::operator[](
			int i);  // 54
	CUtlVectorBase<CInputSystem::UserCursor_t, CUtlMemory<CInputSystem::UserCursor_t, int> >::Count(); // 53
	{
	}
	CUtlStringMap<CInputSystem::UserCursor_t, CUtlSymbolTable>::operator[](
			IndexType_t n);  // 1805
} /* size: 0, variables: 2, inline expansions: 11 (147 bytes) */

// <008C4D9B> inputsystem/inputsystem.cpp:1809
// variables: 2
// function call: 1
void CInputSystem::SetRelativeMouseMode(bool bState)
{
	_BlockRequiresSDLMainThread_t blockRequiresSDLMainThread___LINE__; // 1814
	SDL_Window* mainWindow; // 1816
	CInputSystem::SetRelativeMouseMode(
				bool bState);  // 1809
} /* size: 288, variables: 2, inline expansions: 1 (203 bytes) */

// <008ADC25> inputsystem/inputsystem.cpp:1809
// variables: 2
void CInputSystem::SetRelativeMouseMode(bool bState)
{
	_BlockRequiresSDLMainThread_t blockRequiresSDLMainThread___LINE__; // 1814
	SDL_Window* mainWindow; // 1816
} /* size: 0, variables: 2 */

// <008ADBF7> inputsystem/inputsystem.cpp:1846
void CInputSystem::GetRelativeMouseMode()
{
} /* size: 9 */

// <008ADA52> inputsystem/inputsystem.cpp:1851
// variables: 7
// function call: 1
void CInputSystem::OnDPIChanged()
{
	float fScale; // 1860
	{
		PlatWindow_t hEngineWnd; // 1874
		int nMonitor; // 1875
		int nDesktopWidth; // 1876
		int nDesktopHeight; // 1876
		{
			int nWindowWidth; // 1883
			int nWindowHeight; // 1883
		}
	}
	CInputSystem::UpdateLoadedCursorScale(
				float fScale);  // 1894
} /* size: 306, variables: 1, inline expansions: 1 (41 bytes) */

// <008ADA24> inputsystem/inputsystem.cpp:1897
void CInputSystem::IsIMEAllowed()
{
} /* size: 9 */

// <008C51D1> inputsystem/inputsystem.cpp:1902
// variables: 2
// function call: 1
void CInputSystem::SetIMEAllowed(bool bAllowed)
{
	{
	}
	{
		_BlockRequiresSDLMainThread_t blockRequiresSDLMainThread___LINE__; // 1926
		PlatWindow_t platHWnd; // 1928
	}
	CInputSystem::SetIMEAllowed(
			bool bAllowed);  // 1902
} /* size: 0, inline expansions: 1 (198 bytes) */

// <008AD9B8> inputsystem/inputsystem.cpp:1902
// variables: 4
void CInputSystem::SetIMEAllowed(bool bAllowed)
{
	const char   __FUNCTION__; // 25321
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1911
	}
	{
		_BlockRequiresSDLMainThread_t blockRequiresSDLMainThread___LINE__; // 1926
		PlatWindow_t platHWnd; // 1928
	}
} /* size: 0, variables: 1 */

// <008C4F21> inputsystem/inputsystem.cpp:1951
// variables: 3
// function call: 1
void CInputSystem::SetIMETextLocation(int x, int y, int nWidth, int nHeight)
{
	_BlockRequiresSDLMainThread_t blockRequiresSDLMainThread___LINE__; // 1958
	PlatWindow_t platHWnd; // 1960
	SDL_Rect sdlRect; // 1962
	CInputSystem::SetIMETextLocation(
				int x,
				int y,
				int nWidth,
				int nHeight);  // 1951
} /* size: 162, variables: 3, inline expansions: 1 (90 bytes) */

// <008AD948> inputsystem/inputsystem.cpp:1951
// variables: 3
void CInputSystem::SetIMETextLocation(int x, int y, int nWidth, int nHeight)
{
	_BlockRequiresSDLMainThread_t blockRequiresSDLMainThread___LINE__; // 1958
	PlatWindow_t platHWnd; // 1960
	SDL_Rect sdlRect; // 1962
} /* size: 0, variables: 3 */

// <008C508C> inputsystem/inputsystem.cpp:1970
// variables: 3
// function call: 1
void CInputSystem::DismissIME()
{
	PlatWindow_t platHWnd; // 1977
	{
		_BlockRequiresSDLMainThread_t blockRequiresSDLMainThread___LINE__; // 1985
		SDL_Rect sdlRect; // 2007
	}
	CInputSystem::DismissIME(); // 1970
} /* size: 183, variables: 1, inline expansions: 1 (113 bytes) */

// <008AD906> inputsystem/inputsystem.cpp:1970
// variables: 3
void CInputSystem::DismissIME()
{
	PlatWindow_t platHWnd; // 1977
	{
		_BlockRequiresSDLMainThread_t blockRequiresSDLMainThread___LINE__; // 1985
		SDL_Rect sdlRect; // 2007
	}
} /* size: 0, variables: 1 */

// <008CABC8> inputsystem/inputsystem.cpp:2018
// variables: 4
// function calls: 9
void CInputSystem::RegisterWindowWithSDL(OsSpecificWindowHandle_t hWnd)
{
	void* qtWndProc; // 2023
	bool createdNew; // 2024
	PlatWindow_t window; // 2025
	int i; // 2027
	CUtlMemory<CInputSystem::InputWindow_t, int>::NumAllocated(); // 1143
	CUtlMemory<CInputSystem::InputWindow_t, int>::Base(); // 112
	CUtlVectorBase<CInputSystem::InputWindow_t, CUtlMemory<CInputSystem::InputWindow_t, int> >::Base(); // 368
	CUtlVectorBase<CInputSystem::InputWindow_t, CUtlMemory<CInputSystem::InputWindow_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CInputSystem::InputWindow_t, CUtlMemory<CInputSystem::InputWindow_t, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CInputSystem::InputWindow_t, CUtlMemory<CInputSystem::InputWindow_t, int> >::AddToTail(); // 2027
	CUtlMemory<CInputSystem::InputWindow_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CInputSystem::InputWindow_t, CUtlMemory<CInputSystem::InputWindow_t, int> >::operator[](
			int i);  // 2028
	CInputSystem::RegisterWindowWithSDL(
				OsSpecificWindowHandle_t hWnd);  // 2018
} /* size: 167, variables: 4, inline expansions: 9 (194 bytes) */

// <008AD8AE> inputsystem/inputsystem.cpp:2018
// variables: 4
void CInputSystem::RegisterWindowWithSDL(OsSpecificWindowHandle_t hWnd)
{
	void* qtWndProc; // 2023
	bool createdNew; // 2024
	PlatWindow_t window; // 2025
	int i; // 2027
} /* size: 0, variables: 4 */

// <008C533D> inputsystem/inputsystem.cpp:2037
// variable: 1
// function call: 1
void CInputSystem::UnregisterWindowFromSDL(OsSpecificWindowHandle_t hWnd)
{
	PlatWindow_t sdlWindow; // 2042
	CInputSystem::UnregisterWindowFromSDL(
				OsSpecificWindowHandle_t hWnd);  // 2037
} /* size: 117, variables: 1, inline expansions: 1 (48 bytes) */

// <008AD87B> inputsystem/inputsystem.cpp:2037
// variable: 1
void CInputSystem::UnregisterWindowFromSDL(OsSpecificWindowHandle_t hWnd)
{
	PlatWindow_t sdlWindow; // 2042
} /* size: 0, variables: 1 */

// <008C4CFA> inputsystem/inputsystem.cpp:2052
// function call: 1
void CInputSystem::SetEditorMainWindow(OsSpecificWindowHandle_t hWnd)
{
	CInputSystem::SetEditorMainWindow(
				OsSpecificWindowHandle_t hWnd);  // 2052
} /* size: 46, inline expansions: 1 (15 bytes) */

// <008AD855> inputsystem/inputsystem.cpp:2052
void CInputSystem::SetEditorMainWindow(OsSpecificWindowHandle_t hWnd)
{
} /* size: 0 */

// <008AD817> inputsystem/inputsystem.cpp:2062
void CInputSystem::GetIMEComposition(int flags)
{
} /* size: 7 */

