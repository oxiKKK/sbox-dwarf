
//
// thirdparty/sdl3/include/SDL3/SDL_video.h
//
//	referenced by: libengine2.so
//				   librendersystemvulkan.so
//				   libtier0.so
//
//	functions: 35
//	struct: 1
//

// <008B6A87> ../thirdparty/sdl3/include/SDL3/SDL_video.h:137
// member variables: 9
// struct size: 40
struct SDL_DisplayMode {
	SDL_DisplayID displayID; /* 0 4 */
	SDL_PixelFormat format; /* 4 4 */
	int w; /* 8 4 */
	int h; /* 12 4 */
	float pixel_density; /* 16 4 */
	float refresh_rate; /* 20 4 */
	int refresh_rate_numerator; /* 24 4 */
	int refresh_rate_denominator; /* 28 4 */
	SDL_DisplayModeData * internal; /* 32 8 */
};

// <008BF6A2> ../thirdparty/sdl3/include/SDL3/SDL_video.h:586
SDL_DisplayID* SDL_GetDisplays(int *)
{
} /* size: 0 */

// <003B41E2> ../thirdparty/sdl3/include/SDL3/SDL_video.h:646
const char* SDL_GetDisplayName(SDL_DisplayID)
{
} /* size: 0 */

// <003B41FB> ../thirdparty/sdl3/include/SDL3/SDL_video.h:666
bool SDL_GetDisplayBounds(SDL_DisplayID, SDL_Rect *)
{
} /* size: 0 */

// <003B4193> ../thirdparty/sdl3/include/SDL3/SDL_video.h:749
float SDL_GetDisplayContentScale(SDL_DisplayID)
{
} /* size: 0 */

// <008BF6D6> ../thirdparty/sdl3/include/SDL3/SDL_video.h:777
SDL_DisplayMode** SDL_GetFullscreenDisplayModes(SDL_DisplayID, int *)
{
} /* size: 0 */

// <003B42C9> ../thirdparty/sdl3/include/SDL3/SDL_video.h:808
bool SDL_GetClosestFullscreenDisplayMode(SDL_DisplayID, int, int, float, bool, SDL_DisplayMode *)
{
} /* size: 0 */

// <003B4231> ../thirdparty/sdl3/include/SDL3/SDL_video.h:829
const SDL_DisplayMode* SDL_GetDesktopDisplayMode(SDL_DisplayID)
{
} /* size: 0 */

// <008BF66B> ../thirdparty/sdl3/include/SDL3/SDL_video.h:850
const SDL_DisplayMode* SDL_GetCurrentDisplayMode(SDL_DisplayID)
{
} /* size: 0 */

// <003B4301> ../thirdparty/sdl3/include/SDL3/SDL_video.h:900
SDL_DisplayID SDL_GetDisplayForWindow(SDL_Window *)
{
} /* size: 0 */

// <003B41AC> ../thirdparty/sdl3/include/SDL3/SDL_video.h:919
float SDL_GetWindowPixelDensity(SDL_Window *)
{
} /* size: 0 */

// <003B42AB> ../thirdparty/sdl3/include/SDL3/SDL_video.h:978
bool SDL_SetWindowFullscreenMode(SDL_Window *, const SDL_DisplayMode *)
{
} /* size: 0 */

// <003B45EA> ../thirdparty/sdl3/include/SDL3/SDL_video.h:1320
SDL_Window* SDL_CreateWindowWithProperties(SDL_PropertiesID)
{
} /* size: 0 */

// <008A542D> ../thirdparty/sdl3/include/SDL3/SDL_video.h:1373
SDL_WindowID SDL_GetWindowID(SDL_Window *)
{
} /* size: 0 */

// <003B44B2> ../thirdparty/sdl3/include/SDL3/SDL_video.h:1584
SDL_WindowFlags SDL_GetWindowFlags(SDL_Window *)
{
} /* size: 0 */

// <003B4494> ../thirdparty/sdl3/include/SDL3/SDL_video.h:1602
bool SDL_SetWindowTitle(SDL_Window *, const char *)
{
} /* size: 0 */

// <003B43D8> ../thirdparty/sdl3/include/SDL3/SDL_video.h:1641
bool SDL_SetWindowIcon(SDL_Window *, SDL_Surface *)
{
} /* size: 0 */

// <003B4383> ../thirdparty/sdl3/include/SDL3/SDL_video.h:1682
bool SDL_SetWindowPosition(SDL_Window *, int, int)
{
} /* size: 0 */

// <003B433D> ../thirdparty/sdl3/include/SDL3/SDL_video.h:1707
bool SDL_GetWindowPosition(SDL_Window *, int *, int *)
{
} /* size: 0 */

// <003B4360> ../thirdparty/sdl3/include/SDL3/SDL_video.h:1744
bool SDL_SetWindowSize(SDL_Window *, int, int)
{
} /* size: 0 */

// <003B431A> ../thirdparty/sdl3/include/SDL3/SDL_video.h:1767
bool SDL_GetWindowSize(SDL_Window *, int *, int *)
{
} /* size: 0 */

// <003B414C> ../thirdparty/sdl3/include/SDL3/SDL_video.h:1789
bool SDL_GetWindowSafeArea(SDL_Window *, SDL_Rect *)
{
} /* size: 0 */

// <003B4170> ../thirdparty/sdl3/include/SDL3/SDL_video.h:1906
bool SDL_GetWindowSizeInPixels(SDL_Window *, int *, int *)
{
} /* size: 0 */

// <003B426F> ../thirdparty/sdl3/include/SDL3/SDL_video.h:2004
bool SDL_SetWindowBordered(SDL_Window *, bool)
{
} /* size: 0 */

// <003B44FD> ../thirdparty/sdl3/include/SDL3/SDL_video.h:2061
bool SDL_ShowWindow(SDL_Window *)
{
} /* size: 0 */

// <003B44CB> ../thirdparty/sdl3/include/SDL3/SDL_video.h:2077
bool SDL_HideWindow(SDL_Window *)
{
} /* size: 0 */

// <003B44E4> ../thirdparty/sdl3/include/SDL3/SDL_video.h:2097
bool SDL_RaiseWindow(SDL_Window *)
{
} /* size: 0 */

// <003B401A> ../thirdparty/sdl3/include/SDL3/SDL_video.h:2160
bool SDL_MinimizeWindow(SDL_Window *)
{
} /* size: 0 */

// <003B43BF> ../thirdparty/sdl3/include/SDL3/SDL_video.h:2190
bool SDL_RestoreWindow(SDL_Window *)
{
} /* size: 0 */

// <003B428D> ../thirdparty/sdl3/include/SDL3/SDL_video.h:2222
bool SDL_SetWindowFullscreen(SDL_Window *, bool)
{
} /* size: 0 */

// <000243C7> ../thirdparty/sdl3/include/SDL3/SDL_video.h:2463
bool SDL_SetWindowMouseGrab(SDL_Window *, bool)
{
} /* size: 0 */

// <000243E5> ../thirdparty/sdl3/include/SDL3/SDL_video.h:2508
SDL_Window* SDL_GetGrabbedWindow(void)
{
} /* size: 0 */

// <003B40E3> ../thirdparty/sdl3/include/SDL3/SDL_video.h:2803
bool SDL_FlashWindow(SDL_Window *, SDL_FlashOperation)
{
} /* size: 0 */

// <003B451C> ../thirdparty/sdl3/include/SDL3/SDL_video.h:2825
void SDL_DestroyWindow(SDL_Window *)
{
} /* size: 0 */

// <008A53D5> ../thirdparty/sdl3/include/SDL3/SDL_video.h:2859
bool SDL_EnableScreenSaver(void)
{
} /* size: 0 */

// <008A53C5> ../thirdparty/sdl3/include/SDL3/SDL_video.h:2880
bool SDL_DisableScreenSaver(void)
{
} /* size: 0 */

