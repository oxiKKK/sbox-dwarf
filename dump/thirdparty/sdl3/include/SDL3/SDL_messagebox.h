
//
// thirdparty/sdl3/include/SDL3/SDL_messagebox.h
//
//	referenced by: libtier0.so
//
//	function: 1
//	structs: 4
//

// <00022EC6> ../thirdparty/sdl3/include/SDL3/SDL_messagebox.h:82
// member variables: 3
// struct size: 16
struct SDL_MessageBoxButtonData {
	SDL_MessageBoxButtonFlags flags; /* 0 4 */
	int buttonID; /* 4 4 */
	const char * text; /* 8 8 */
};

// <00022F12> ../thirdparty/sdl3/include/SDL3/SDL_messagebox.h:94
// member variables: 3
// struct size: 3
struct SDL_MessageBoxColor {
	Uint8 r; /* 0 1 */
	Uint8 g; /* 1 1 */
	Uint8 b; /* 2 1 */
};

// <00022F8A> ../thirdparty/sdl3/include/SDL3/SDL_messagebox.h:118
// member variable: 1
// struct size: 15
struct SDL_MessageBoxColorScheme {
	SDL_MessageBoxColor colors[5]; /* 0 15 */
};

// <00022FC8> ../thirdparty/sdl3/include/SDL3/SDL_messagebox.h:128
// member variables: 7
// struct size: 56
struct SDL_MessageBoxData {
	SDL_MessageBoxFlags flags; /* 0 4 */
	SDL_Window * window; /* 8 8 */
	const char * title; /* 16 8 */
	const char * message; /* 24 8 */
	int numbuttons; /* 32 4 */
	const SDL_MessageBoxButtonData * buttons; /* 40 8 */
	const SDL_MessageBoxColorScheme * colorScheme; /* 48 8 */
};

// <000243A4> ../thirdparty/sdl3/include/SDL3/SDL_messagebox.h:175
bool SDL_ShowMessageBox(const SDL_MessageBoxData *, int *)
{
} /* size: 0 */

