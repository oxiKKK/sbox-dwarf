
//
// inputsystem/key_translation.cpp
//
//	referenced by: libengine2.so
//
//	functions: 5
//

// <008EE468> inputsystem/key_translation.cpp:811
// variables: 3
ButtonCode_t ButtonCode_ScanCodeToButtonCode(int lParam)
{
	int nScanCode; // 813
	ButtonCode_t result; // 817
	bool bIsExtended; // 819
} /* size: 0, variables: 3 */

// <008EE383> inputsystem/key_translation.cpp:938
// function calls: 2
void key_updatelayout(const CCommandContext& ctx, const CCommand& args)
{
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 875
	ButtonCode_UpdateScanCodeLayout(void); // 940
} /* size: 34, inline expansions: 2 (48 bytes) */

// <008E1CBD> inputsystem/key_translation.cpp:1293
// variable: 1
SDL_Keycode ButtonCode_ButtonCodeToSDLKey(ButtonCode_t buttonCode)
{
	SDL_Keycode sdlKey; // 1295
} /* size: 0, variables: 1 */

// <008E1BFA> inputsystem/key_translation.cpp:1302
// variables: 3
void ButtonCode_InitSDLScanCodeTable(void)
{
	{
		int i; // 1304
	}
	{
		int i; // 1644
	}
	{
		int i; // 1649
	}
} /* size: 573 */

// <008E19AE> inputsystem/key_translation.cpp:1679
// variable: 1
SDL_Scancode ButtonCode_ButtonCodeToSDLScanCode(ButtonCode_t nCode)
{
	SDL_Scancode result; // 1681
} /* size: 0, variables: 1 */

