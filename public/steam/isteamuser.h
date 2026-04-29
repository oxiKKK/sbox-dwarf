
//
// public/steam/isteamuser.h
//
//	referenced by: libengine2.so
//
//	functions: 2
//	structs: 11
//

// <0015C2C1> ../public/steam/isteamuser.h:226
void SteamInternal_Init_SteamUser(ISteamUser** p)
{
} /* size: 44 */

// <0015C287> ../public/steam/isteamuser.h:226
// variable: 1
inline ISteamUser* SteamUser(void)
{
	void* s_CallbackCounterAndContext; // 226
} /* size: 0, variables: 1 */

// <000DAFAD> ../public/steam/isteamuser.h:245
// struct size: 1
struct SteamServersConnected_t {
	/* ../public/steam/isteamuser.h:247 */
	enum {
		k_iCallback = 101,
	};
};

// <000DAFCD> ../public/steam/isteamuser.h:255
// member variables: 2
// struct size: 8
struct SteamServerConnectFailure_t {
	/* ../public/steam/isteamuser.h:257 */
	enum {
		k_iCallback = 102,
	};
	EResult m_eResult; /* 0 4 */
	bool m_bStillRetrying; /* 4 1 */
};

// <000DB011> ../public/steam/isteamuser.h:267
// member variable: 1
// struct size: 4
struct SteamServersDisconnected_t {
	/* ../public/steam/isteamuser.h:269 */
	enum {
		k_iCallback = 103,
	};
	EResult m_eResult; /* 0 4 */
};

// <000DB046> ../public/steam/isteamuser.h:280
// member variables: 5
// struct size: 16
struct ClientGameServerDeny_t {
	/* ../public/steam/isteamuser.h:282 */
	enum {
		k_iCallback = 113,
	};
	uint32 m_uAppID; /* 0 4 */
	uint32 m_unGameServerIP; /* 4 4 */
	uint16 m_usGameServerPort; /* 8 2 */
	uint16 m_bSecure; /* 10 2 */
	uint32 m_uReason; /* 12 4 */
};

// <000DB0BB> ../public/steam/isteamuser.h:312
// struct size: 1
struct LicensesUpdated_t {
	/* ../public/steam/isteamuser.h:314 */
	enum {
		k_iCallback = 125,
	};
};

// <000DB0DD> ../public/steam/isteamuser.h:321
// member variables: 3
// struct size: 20
struct ValidateAuthTicketResponse_t {
	/* ../public/steam/isteamuser.h:323 */
	enum {
		k_iCallback = 143,
	};
	CSteamID m_SteamID; /* 0 8 */
	EAuthSessionResponse m_eAuthSessionResponse; /* 8 4 */
	CSteamID m_OwnerSteamID; /* 12 8 */
} __attribute__((__packed__));

// <000DB132> ../public/steam/isteamuser.h:333
// member variables: 3
// struct size: 16
struct MicroTxnAuthorizationResponse_t {
	/* ../public/steam/isteamuser.h:335 */
	enum {
		k_iCallback = 152,
	};
	uint32 m_unAppID; /* 0 4 */
	uint64 m_ulOrderID; /* 4 8 */
	uint8 m_bAuthorized; /* 12 1 */
};

// <000DB187> ../public/steam/isteamuser.h:356
// member variables: 2
// struct size: 8
struct GetAuthSessionTicketResponse_t {
	/* ../public/steam/isteamuser.h:358 */
	enum {
		k_iCallback = 163,
	};
	HAuthTicket m_hAuthTicket; /* 0 4 */
	EResult m_eResult; /* 4 4 */
};

// <000DB1CC> ../public/steam/isteamuser.h:366
// member variable: 1
// struct size: 256
struct GameWebCallback_t {
	/* ../public/steam/isteamuser.h:368 */
	enum {
		k_iCallback = 164,
	};
	char m_szURL[256]; /* 0 256 */
};

// <000DB203> ../public/steam/isteamuser.h:405
// member variables: 8
// struct size: 32
struct DurationControl_t {
	/* ../public/steam/isteamuser.h:407 */
	enum {
		k_iCallback = 167,
	};
	EResult m_eResult; /* 0 4 */
	AppId_t m_appid; /* 4 4 */
	bool m_bApplicable; /* 8 1 */
	int32 m_csecsLast5h; /* 12 4 */
	EDurationControlProgress m_progress; /* 16 4 */
	EDurationControlNotification m_notification; /* 20 4 */
	int32 m_csecsToday; /* 24 4 */
	int32 m_csecsRemaining; /* 28 4 */
};

// <000DB2A8> ../public/steam/isteamuser.h:426
// member variables: 4
// static member variable: 1
// struct size: 2,572
struct GetTicketForWebApiResponse_t {
	/* ../public/steam/isteamuser.h:428 */
	enum {
		k_iCallback = 168,
	};
	HAuthTicket m_hAuthTicket; /* 0 4 */
	EResult m_eResult; /* 4 4 */
	int m_cubTicket; /* 8 4 */
	static const int k_nCubTicketMaxLength = 2560; /* 0 0 */
	uint8 m_rgubTicket[2560]; /* 12 2560 */
};

