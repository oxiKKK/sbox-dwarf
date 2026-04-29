
//
// public/tier0/win32consoleio.h
//
//	referenced by: libtier0.so
//
//	functions: 4
//	struct: 1
//

// <000EC897> ../public/tier0/win32consoleio.h:15
// member variables: 4
// struct size: 12
struct Win32ConsoleColorContext_t {
	int m_InitialColor; /* 0 4 */
	uint16 m_LastColor; /* 4 2 */
	uint16 m_BadColor; /* 6 2 */
	uint16 m_BackgroundFlags; /* 8 2 */
};

// <00281220> ../public/tier0/win32consoleio.h:23
void InitWin32ConsoleColorContext(Win32ConsoleColorContext_t *)
{
} /* size: 0 */

// <002811CF> ../public/tier0/win32consoleio.h:25
uint16 SetWin32ConsoleColor(Win32ConsoleColorContext_t *, int, int, int, int)
{
} /* size: 0 */

// <002811AF> ../public/tier0/win32consoleio.h:27
void RestoreWin32ConsoleColor(Win32ConsoleColorContext_t *, uint16)
{
} /* size: 0 */

// <00281211> ../public/tier0/win32consoleio.h:29
uint GetWin32ConsoleCursorColumnIndex(void)
{
} /* size: 0 */

