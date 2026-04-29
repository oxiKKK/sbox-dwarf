
//
// thirdparty/sdl3/include/SDL3/SDL_surface.h
//
//	referenced by: libengine2.so
//				   libtier0.so
//
//	functions: 5
//	struct: 1
//

// <008582E0> ../thirdparty/sdl3/include/SDL3/SDL_surface.h:132
// member variables: 8
// struct size: 48
struct SDL_Surface {
	SDL_SurfaceFlags flags; /* 0 4 */
	SDL_PixelFormat format; /* 4 4 */
	int w; /* 8 4 */
	int h; /* 12 4 */
	int pitch; /* 16 4 */
	void * pixels; /* 24 8 */
	int refcount; /* 32 4 */
	void * reserved; /* 40 8 */
};

// <008A5294> ../thirdparty/sdl3/include/SDL3/SDL_surface.h:167
SDL_Surface* SDL_CreateSurface(int, int, SDL_PixelFormat)
{
} /* size: 0 */

// <008A51F0> ../thirdparty/sdl3/include/SDL3/SDL_surface.h:197
SDL_Surface* SDL_CreateSurfaceFrom(int, int, SDL_PixelFormat, void *, int)
{
} /* size: 0 */

// <008A52D5> ../thirdparty/sdl3/include/SDL3/SDL_surface.h:213
void SDL_DestroySurface(SDL_Surface *)
{
} /* size: 0 */

// <008A5339> ../thirdparty/sdl3/include/SDL3/SDL_surface.h:508
SDL_Surface* SDL_LoadBMP_IO(SDL_IOStream *, bool)
{
} /* size: 0 */

// <008A5267> ../thirdparty/sdl3/include/SDL3/SDL_surface.h:1250
bool SDL_BlitSurfaceScaled(SDL_Surface *, const SDL_Rect *, SDL_Surface *, const SDL_Rect *, SDL_ScaleMode)
{
} /* size: 0 */

