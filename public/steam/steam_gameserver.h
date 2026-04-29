
//
// public/steam/steam_gameserver.h
//
//	referenced by: libengine2.so
//
//	functions: 6
//

// <012594FF> ../public/steam/steam_gameserver.h:64
void SteamGameServer_Shutdown(void)
{
} /* size: 0 */

// <01259519> ../public/steam/steam_gameserver.h:73
bool SteamGameServer_BSecure(void)
{
} /* size: 0 */

// <0125950A> ../public/steam/steam_gameserver.h:74
uint64 SteamGameServer_GetSteamID(void)
{
} /* size: 0 */

// <012594B6> ../public/steam/steam_gameserver.h:114
ESteamAPIInitResult SteamInternal_GameServer_Init_V2(uint32, uint16, uint16, EServerMode, const char *, const char *, SteamErrMsg *)
{
} /* size: 0 */

// <013385FF> ../public/steam/steam_gameserver.h:115
// variable: 1
inline ESteamAPIInitResult SteamGameServer_InitEx(uint32 unIP, uint16 usGamePort, uint16 usQueryPort, EServerMode eServerMode, const char* pchVersionString, SteamErrMsg* pOutErrMsg)
{
	const char* pszInternalCheckInterfaceVersions; // 117
} /* size: 0, variables: 1 */

// <013385F0> ../public/steam/steam_gameserver.h:132
inline void SteamGameServer_ReleaseCurrentThreadMemory(void)
{
} /* size: 0 */

