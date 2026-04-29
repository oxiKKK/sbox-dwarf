
//
// public/steam/matchmakingtypes.h
//
//	referenced by: libengine2.so
//
//	functions: 2
//	classes: 2
//	struct: 1
//

// <01BC9950> ../public/steam/matchmakingtypes.h:30
// member functions: 2
// member variables: 2
// struct size: 512
struct MatchMakingKeyValuePair_t {
	/* ../public/steam/matchmakingtypes.h:32 */
	void MatchMakingKeyValuePair_t(MatchMakingKeyValuePair_t* );
	/* ../public/steam/matchmakingtypes.h:33 */
	void MatchMakingKeyValuePair_t(MatchMakingKeyValuePair_t* , const char* , const char* );
	char m_szKey[256]; /* 0 256 */
	char m_szValue[256]; /* 256 256 */
};

// <01C1D987> ../public/steam/matchmakingtypes.h:32
void MatchMakingKeyValuePair_t::MatchMakingKeyValuePair_t()
{
} /* size: 0 */

// <01C1D96E> ../public/steam/matchmakingtypes.h:32
inline void MatchMakingKeyValuePair_t::MatchMakingKeyValuePair_t()
{
} /* size: 0 */

// <01BC99F3> ../public/steam/matchmakingtypes.h:54
// member functions: 13
// member variables: 3
// class size: 8
class servernetadr_t {
	/* ../public/steam/matchmakingtypes.h:58 */
	void servernetadr_t(servernetadr_t* );
	/* ../public/steam/matchmakingtypes.h:60 */
	void Init(servernetadr_t* , unsigned int, uint16, uint16);
	/* ../public/steam/matchmakingtypes.h:63 */
	uint16 GetQueryPort(const servernetadr_t* );
	/* ../public/steam/matchmakingtypes.h:64 */
	void SetQueryPort(servernetadr_t* , uint16);
	/* ../public/steam/matchmakingtypes.h:67 */
	uint16 GetConnectionPort(const servernetadr_t* );
	/* ../public/steam/matchmakingtypes.h:68 */
	void SetConnectionPort(servernetadr_t* , uint16);
	/* ../public/steam/matchmakingtypes.h:71 */
	uint32 GetIP(const servernetadr_t* );
	/* ../public/steam/matchmakingtypes.h:72 */
	void SetIP(servernetadr_t* , uint32);
	/* ../public/steam/matchmakingtypes.h:75 */
	const char* GetConnectionAddressString(const servernetadr_t* );
	/* ../public/steam/matchmakingtypes.h:76 */
	const char* GetQueryAddressString(const servernetadr_t* );
	/* ../public/steam/matchmakingtypes.h:79 */
	bool operator<(const servernetadr_t* , const servernetadr_t& );
	/* ../public/steam/matchmakingtypes.h:80 */
	void operator=(servernetadr_t* , const servernetadr_t& );
private:
	/* ../public/steam/matchmakingtypes.h:89 */
	const char* ToString(const servernetadr_t* , uint32, uint16);
	uint16 m_usConnectionPort; /* 0 2 */
	uint16 m_usQueryPort; /* 2 2 */
	uint32 m_unIP; /* 4 4 */
};

// <01BC9C10> ../public/steam/matchmakingtypes.h:167
// member functions: 3
// member variables: 18
// class size: 372
class gameserveritem_t {
	/* ../public/steam/matchmakingtypes.h:170 */
	void gameserveritem_t(gameserveritem_t* );
	/* ../public/steam/matchmakingtypes.h:172 */
	const char* GetName(const gameserveritem_t* );
	/* ../public/steam/matchmakingtypes.h:173 */
	void SetName(gameserveritem_t* , const char* );
	servernetadr_t m_NetAdr; /* 0 8 */
	int m_nPing; /* 8 4 */
	bool m_bHadSuccessfulResponse; /* 12 1 */
	bool m_bDoNotRefresh; /* 13 1 */
	char m_szGameDir[32]; /* 14 32 */
	char m_szMap[32]; /* 46 32 */
	char m_szGameDescription[64]; /* 78 64 */
	uint32 m_nAppID; /* 144 4 */
	int m_nPlayers; /* 148 4 */
	int m_nMaxPlayers; /* 152 4 */
	int m_nBotPlayers; /* 156 4 */
	bool m_bPassword; /* 160 1 */
	bool m_bSecure; /* 161 1 */
	uint32 m_ulTimeLastPlayed; /* 164 4 */
	int m_nServerVersion; /* 168 4 */
private:
	char m_szServerName[64]; /* 172 64 */
	char m_szGameTags[128]; /* 236 128 */
	CSteamID m_steamID; /* 364 8 */
};

