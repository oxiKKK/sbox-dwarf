
//
// public/steam/isteamnetworkingmessages.h
//
//	referenced by: libengine2.so
//
//	functions: 3
//	structs: 2
//

// <000DC5B5> ../public/steam/isteamnetworkingmessages.h:136
// member variable: 1
// struct size: 136
struct SteamNetworkingMessagesSessionRequest_t {
	/* ../public/steam/isteamnetworkingmessages.h:138 */
	enum {
		k_iCallback = 1251,
	};
	SteamNetworkingIdentity m_identityRemote; /* 0 136 */
};

// <000DC5EF> ../public/steam/isteamnetworkingmessages.h:153
// member variable: 1
// struct size: 696
struct SteamNetworkingMessagesSessionFailed_t {
	/* ../public/steam/isteamnetworkingmessages.h:155 */
	enum {
		k_iCallback = 1252,
	};
	SteamNetConnectionInfo_t m_info; /* 0 696 */
};

// <0015BF48> ../public/steam/isteamnetworkingmessages.h:189
void SteamInternal_Init_SteamNetworkingMessages_SteamAPI(ISteamNetworkingMessages** p)
{
} /* size: 44 */

// <0015BF04> ../public/steam/isteamnetworkingmessages.h:189
// variable: 1
inline ISteamNetworkingMessages* SteamNetworkingMessages_SteamAPI(void)
{
	void* s_CallbackCounterAndContext; // 189
} /* size: 0, variables: 1 */

// <0015BEF1> ../public/steam/isteamnetworkingmessages.h:193
inline ISteamNetworkingMessages* SteamNetworkingMessages(void)
{
} /* size: 0 */

