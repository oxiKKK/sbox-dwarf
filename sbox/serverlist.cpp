
//
// sbox/serverlist.cpp
//
//	referenced by: libengine2.so
//
//	functions: 9
//

// <01C0E9EC> sbox/serverlist.cpp:6
// function calls: 4
void CServerList::CServerList(uint managed)
{
	ISteamMatchmakingServerListResponse::ISteamMatchmakingServerListResponse(); // 6
	MatchMakingKeyValuePair_t::MatchMakingKeyValuePair_t(); // 6
	ServerList::ServerList(); // 6
	ServerList::ServerList(
			unsigned int id);  // 8
} /* size: 107, inline expansions: 4 (14 bytes) */

// <01C0E9C7> sbox/serverlist.cpp:6
void CServerList::CServerList(uint managed)
{
} /* size: 0 */

// <01C0E8F4> sbox/serverlist.cpp:11
// variables: 2
// function calls: 2
void CServerList::~CServerList()
{
	{
		ISteamMatchmakingServers* servers; // 15
	}
	{
		ISteamMatchmakingServers* servers; // 15
		ServerList::ServerList(
				unsigned int id);  // 13
		SteamMatchmakingServers(void); // 15
	}
} /* size: 94 */

// <01C0E8CD> sbox/serverlist.cpp:11
// variable: 1
void CServerList::~CServerList()
{
	{
		ISteamMatchmakingServers* servers; // 15
	}
} /* size: 0 */

// <01C0E780> sbox/serverlist.cpp:26
// function calls: 4
void CServerList::AddFilter(const char* key, const char* value)
{
	strcpy(char* __dest,
		const char* __src);  // 124
	V_strcpy(char* dest,
		const char* src);  // 31
	strcpy(char* __dest,
		const char* __src);  // 124
	V_strcpy(char* dest,
		const char* src);  // 32
} /* size: 86, inline expansions: 4 (46 bytes) */

// <01C0E649> sbox/serverlist.cpp:37
// variables: 2
// function call: 1
void CServerList::StartQuery()
{
	ISteamMatchmakingServers* servers; // 41
	MatchMakingKeyValuePair_t* pFilters; // 55
	SteamMatchmakingServers(void); // 41
} /* size: 203, variables: 2, inline expansions: 1 (15 bytes) */

// <01C0E537> sbox/serverlist.cpp:64
// variable: 1
// function calls: 2
void CServerList::ServerResponded(HServerListRequest hRequest, int iServer)
{
	gameserveritem_t* pServerItem; // 66
	SteamMatchmakingServers(void); // 66
	CSteamID::ConvertToUint64(); // 70
} /* size: 94, variables: 1, inline expansions: 2 (15 bytes) */

// <01C0E4BA> sbox/serverlist.cpp:73
void CServerList::ServerFailedToRespond(HServerListRequest hRequest, int iServer)
{
} /* size: 9 */

// <01C0E445> sbox/serverlist.cpp:78
void CServerList::RefreshComplete(HServerListRequest hRequest, EMatchMakingServerResponse response)
{
} /* size: 28 */

