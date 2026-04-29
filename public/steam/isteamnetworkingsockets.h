
//
// public/steam/isteamnetworkingsockets.h
//
//	referenced by: libengine2.so
//
//	functions: 6
//	structs: 2
//

// <01339580> ../public/steam/isteamnetworkingsockets.h:941
void SteamInternal_Init_SteamNetworkingSockets_SteamAPI(ISteamNetworkingSockets** p)
{
} /* size: 44 */

// <0133954A> ../public/steam/isteamnetworkingsockets.h:941
// variable: 1
inline ISteamNetworkingSockets* SteamNetworkingSockets_SteamAPI(void)
{
	void* s_CallbackCounterAndContext; // 941
} /* size: 0, variables: 1 */

// <013394E0> ../public/steam/isteamnetworkingsockets.h:942
void SteamInternal_Init_SteamGameServerNetworkingSockets_SteamAPI(ISteamNetworkingSockets** p)
{
} /* size: 44 */

// <013394AA> ../public/steam/isteamnetworkingsockets.h:942
// variable: 1
inline ISteamNetworkingSockets* SteamGameServerNetworkingSockets_SteamAPI(void)
{
	void* s_CallbackCounterAndContext; // 942
} /* size: 0, variables: 1 */

// <01339496> ../public/steam/isteamnetworkingsockets.h:945
inline ISteamNetworkingSockets* SteamNetworkingSockets(void)
{
} /* size: 0 */

// <01339482> ../public/steam/isteamnetworkingsockets.h:946
inline ISteamNetworkingSockets* SteamGameServerNetworkingSockets(void)
{
} /* size: 0 */

// <0187E7AD> ../public/steam/isteamnetworkingsockets.h:994
// member variables: 3
// struct size: 704
struct SteamNetConnectionStatusChangedCallback_t {
	HSteamNetConnection m_hConn; /* 0 4 */
	SteamNetConnectionInfo_t m_info; /* 4 696 */
	ESteamNetworkingConnectionState m_eOldState; /* 700 4 */
} __attribute__((__packed__));

// <0187E7EE> ../public/steam/isteamnetworkingsockets.h:1016
// member variables: 2
// struct size: 260
struct SteamNetAuthenticationStatus_t {
	ESteamNetworkingAvailability m_eAvail; /* 0 4 */
	char m_debugMsg[256]; /* 4 256 */
};

