
//
// sbox/steam/steamscreenshots.cpp
//
//	referenced by: libengine2.so
//
//	functions: 2
//

// <01F93718> sbox/steam/steamscreenshots.cpp:4
ISteamScreenshots* GetScreenshots(void)
{
} /* size: 0 */

// <01F93619> sbox/steam/steamscreenshots.cpp:9
// variable: 1
// function calls: 2
void WriteScreenshot(void* pubRGB, uint32 cubRGB, int nWidth, int nHeight)
{
	ISteamScreenshots* screenshots; // 11
	SteamScreenshots(void); // 6
	GetScreenshots(void); // 11
} /* size: 91, variables: 1, inline expansions: 2 (30 bytes) */

