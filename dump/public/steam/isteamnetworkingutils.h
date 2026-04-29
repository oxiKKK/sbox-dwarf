
//
// public/steam/isteamnetworkingutils.h
//
//	referenced by: libengine2.so
//
//	functions: 7
//	struct: 1
//

// <013387E4> ../public/steam/isteamnetworkingutils.h:372
void SteamInternal_Init_SteamNetworkingUtils_SteamAPI(ISteamNetworkingUtils** p)
{
} /* size: 78 */

// <013387AE> ../public/steam/isteamnetworkingutils.h:372
// variable: 1
inline ISteamNetworkingUtils* SteamNetworkingUtils_SteamAPI(void)
{
	void* s_CallbackCounterAndContext; // 372
} /* size: 0, variables: 1 */

// <0133879A> ../public/steam/isteamnetworkingutils.h:383
inline ISteamNetworkingUtils* SteamNetworkingUtils(void)
{
} /* size: 0 */

// <0187E81E> ../public/steam/isteamnetworkingutils.h:390
// member variables: 5
// struct size: 272
struct SteamRelayNetworkStatus_t {
	ESteamNetworkingAvailability m_eAvail; /* 0 4 */
	int m_bPingMeasurementInProgress; /* 4 4 */
	ESteamNetworkingAvailability m_eAvailNetworkConfig; /* 8 4 */
	ESteamNetworkingAvailability m_eAvailAnyRelay; /* 12 4 */
	char m_debugMsg[256]; /* 16 256 */
};

// <01338781> ../public/steam/isteamnetworkingutils.h:449
inline void ISteamNetworkingUtils::InitRelayNetworkAccess()
{
} /* size: 0 */

// <0133874E> ../public/steam/isteamnetworkingutils.h:450
inline void ISteamNetworkingUtils::SetGlobalConfigValueInt32(ESteamNetworkingConfigValue eValue, int32 val)
{
} /* size: 0 */

// <0133871B> ../public/steam/isteamnetworkingutils.h:452
inline void ISteamNetworkingUtils::SetGlobalConfigValueString(ESteamNetworkingConfigValue eValue, const char* val)
{
} /* size: 0 */

// <01885843> ../public/steam/isteamnetworkingutils.h:494
inline void SteamNetworkingIdentity::ToString(char* buf, size_t cbBuf)
{
} /* size: 0 */

