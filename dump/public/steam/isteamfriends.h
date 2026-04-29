
//
// public/steam/isteamfriends.h
//
//	referenced by: libengine2.so
//
//	functions: 2
//	structs: 8
//

// <0015C217> ../public/steam/isteamfriends.h:469
void SteamInternal_Init_SteamFriends(ISteamFriends** p)
{
} /* size: 44 */

// <0015C1DB> ../public/steam/isteamfriends.h:469
// variable: 1
inline ISteamFriends* SteamFriends(void)
{
	void* s_CallbackCounterAndContext; // 469
} /* size: 0, variables: 1 */

// <000DB3A6> ../public/steam/isteamfriends.h:483
// member variables: 2
// struct size: 12
struct PersonaStateChange_t {
	/* ../public/steam/isteamfriends.h:485 */
	enum {
		k_iCallback = 304,
	};
	uint64 m_ulSteamID; /* 0 8 */
	int m_nChangeFlags; /* 8 4 */
} __attribute__((__packed__));

// <000DB3EC> ../public/steam/isteamfriends.h:518
// member variables: 4
// struct size: 12
struct GameOverlayActivated_t {
	/* ../public/steam/isteamfriends.h:520 */
	enum {
		k_iCallback = 331,
	};
	uint8 m_bActive; /* 0 1 */
	bool m_bUserInitiated; /* 1 1 */
	AppId_t m_nAppID; /* 4 4 */
	uint32 m_dwOverlayPID; /* 8 4 */
};

// <000DB452> ../public/steam/isteamfriends.h:532
// member variables: 2
// struct size: 128
struct GameServerChangeRequested_t {
	/* ../public/steam/isteamfriends.h:534 */
	enum {
		k_iCallback = 332,
	};
	char m_rgchServer[64]; /* 0 64 */
	char m_rgchPassword[64]; /* 64 64 */
};

// <000DB498> ../public/steam/isteamfriends.h:544
// member variables: 2
// struct size: 16
struct GameLobbyJoinRequested_t {
	/* ../public/steam/isteamfriends.h:546 */
	enum {
		k_iCallback = 333,
	};
	CSteamID m_steamIDLobby; /* 0 8 */
	CSteamID m_steamIDFriend; /* 8 8 */
};

// <000DB4DE> ../public/steam/isteamfriends.h:587
// member variables: 2
// struct size: 12
struct FriendRichPresenceUpdate_t {
	/* ../public/steam/isteamfriends.h:589 */
	enum {
		k_iCallback = 336,
	};
	CSteamID m_steamIDFriend; /* 0 8 */
	AppId_t m_nAppID; /* 8 4 */
} __attribute__((__packed__));

// <000DB524> ../public/steam/isteamfriends.h:599
// member variables: 2
// struct size: 264
struct GameRichPresenceJoinRequested_t {
	/* ../public/steam/isteamfriends.h:601 */
	enum {
		k_iCallback = 337,
	};
	CSteamID m_steamIDFriend; /* 0 8 */
	char m_rgchConnect[256]; /* 8 256 */
};

// <000DB56C> ../public/steam/isteamfriends.h:610
// member variables: 3
// struct size: 20
struct GameConnectedClanChatMsg_t {
	/* ../public/steam/isteamfriends.h:612 */
	enum {
		k_iCallback = 338,
	};
	CSteamID m_steamIDClanChat; /* 0 8 */
	CSteamID m_steamIDUser; /* 8 8 */
	int m_iMessageID; /* 16 4 */
} __attribute__((__packed__));

// <000DB5C2> ../public/steam/isteamfriends.h:666
// member variables: 2
// struct size: 12
struct GameConnectedFriendChatMsg_t {
	/* ../public/steam/isteamfriends.h:668 */
	enum {
		k_iCallback = 343,
	};
	CSteamID m_steamIDUser; /* 0 8 */
	int m_iMessageID; /* 8 4 */
} __attribute__((__packed__));

