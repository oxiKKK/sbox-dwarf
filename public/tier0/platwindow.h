
//
// public/tier0/platwindow.h
//
//	referenced by: libengine2.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libtier0.so
//
//	functions: 28
//	structs: 2
//

// <007923F4> ../public/tier0/platwindow.h:21
// member variable: 1
// struct size: 4
struct OsSpecificWindowHandle_t__ {
	int unused; /* 0 4 */
};

// <0006C564> ../public/tier0/platwindow.h:54
// member variable: 1
// struct size: 4
struct PlatWindow_t__ {
	int unused; /* 0 4 */
};

// <04635D9B> ../public/tier0/platwindow.h:92
PlatWindow_t Plat_CreateWindow(void *, const char *, int, int, int, int, int, float)
{
} /* size: 0 */

// <008A508E> ../public/tier0/platwindow.h:94
PlatWindow_t Plat_FindOrCreateWrappedPlatWindow(OsSpecificWindowHandle_t, WindowCreateFlags_t, bool &, void* *)
{
} /* size: 0 */

// <007CD854> ../public/tier0/platwindow.h:99
void Plat_DestroyWindow(PlatWindow_t)
{
} /* size: 0 */

// <007CD83B> ../public/tier0/platwindow.h:118
void Plat_SetWindowTitle(PlatWindow_t, const char *)
{
} /* size: 0 */

// <007CD806> ../public/tier0/platwindow.h:124
bool Plat_SetWindowIcon(PlatWindow_t, const char *)
{
} /* size: 0 */

// <0058DD09> ../public/tier0/platwindow.h:129
void Plat_SetWindowPos(PlatWindow_t, int, int)
{
} /* size: 0 */

// <007CD8D0> ../public/tier0/platwindow.h:137
void Plat_SetFullscreenMinimizeOnFocusLoss(bool)
{
} /* size: 0 */

// <0016D2B2> ../public/tier0/platwindow.h:149
void Plat_ReconfigureWindow(PlatWindow_t, int, int, int, int, uint32, uint32, float)
{
} /* size: 0 */

// <0058DD80> ../public/tier0/platwindow.h:155
int Plat_GetDefaultMonitorIndex(void)
{
} /* size: 0 */

// <0058DD8F> ../public/tier0/platwindow.h:157
int Plat_GetWindowMonitorIndex(PlatWindow_t)
{
} /* size: 0 */

// <007CD8E4> ../public/tier0/platwindow.h:162
bool Plat_GetDesktopResolution(int, int *, int *, uint *)
{
} /* size: 0 */

// <0058DD28> ../public/tier0/platwindow.h:163
bool Plat_GetDesktopBounds(int, int *, int *, int *, int *)
{
} /* size: 0 */

// <008BF700> ../public/tier0/platwindow.h:164
bool Plat_GetMonitorResolution(int, int *, int *)
{
} /* size: 0 */

// <0058DD54> ../public/tier0/platwindow.h:165
bool Plat_GetMonitorBounds(int, int *, int *, int *, int *)
{
} /* size: 0 */

// <007CD823> ../public/tier0/platwindow.h:209
bool Plat_SetDesktopNotifyIconPath(const char *)
{
} /* size: 0 */

// <00228E29> ../public/tier0/platwindow.h:228
void Plat_GetWindowClientSize(PlatWindow_t, int *, int *)
{
} /* size: 0 */

// <00228C90> ../public/tier0/platwindow.h:232
void Plat_GetWindowClientBounds(PlatWindow_t, int *, int *, int *, int *)
{
} /* size: 0 */

// <00228C78> ../public/tier0/platwindow.h:234
float Plat_GetWindowContentsScale(PlatWindow_t)
{
} /* size: 0 */

// <04635D86> ../public/tier0/platwindow.h:259
void Plat_SetActiveWindow(PlatWindow_t)
{
} /* size: 0 */

// <01259815> ../public/tier0/platwindow.h:264
bool Plat_IsWindowFocused(PlatWindow_t)
{
} /* size: 0 */

// <007CD881> ../public/tier0/platwindow.h:270
void Plat_MinimizeWindow(PlatWindow_t, bool)
{
} /* size: 0 */

// <007CD868> ../public/tier0/platwindow.h:271
bool Plat_IsWindowMinimized(PlatWindow_t)
{
} /* size: 0 */

// <008A5635> ../public/tier0/platwindow.h:284
void Plat_WindowToScreenCoords(PlatWindow_t, int &, int &)
{
} /* size: 0 */

// <007CDA8F> ../public/tier0/platwindow.h:291
OsSpecificWindowHandle_t Plat_WindowToOsSpecificHandle(PlatWindow_t)
{
} /* size: 0 */

// <008A546E> ../public/tier0/platwindow.h:294
PlatWindow_t Plat_OsSpecificHandleToPlatWindow(OsSpecificWindowHandle_t)
{
} /* size: 0 */

// <008A5196> ../public/tier0/platwindow.h:300
bool Plat_IsHighDPI(void)
{
} /* size: 0 */

// <012595D8> ../public/tier0/platwindow.h:301
float Plat_GetDPI(void)
{
} /* size: 0 */

// <0058DCFD> ../public/tier0/platwindow.h:305
void Plat_RefreshDPI(void)
{
} /* size: 0 */

