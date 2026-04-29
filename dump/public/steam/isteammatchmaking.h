
//
// public/steam/isteammatchmaking.h
//
//	referenced by: libengine2.so
//
//	functions: 6
//	class: 1
//	structs: 7
//

// <0015C0D6> ../public/steam/isteammatchmaking.h:264
void SteamInternal_Init_SteamMatchmaking(ISteamMatchmaking** p)
{
} /* size: 44 */

// <0015C09A> ../public/steam/isteammatchmaking.h:264
// variable: 1
inline ISteamMatchmaking* SteamMatchmaking(void)
{
	void* s_CallbackCounterAndContext; // 264
} /* size: 0, variables: 1 */

// <01C0EB05> ../public/steam/isteammatchmaking.h:292
void ISteamMatchmakingServerListResponse::ISteamMatchmakingServerListResponse()
{
} /* size: 0 */

// <01C0EAE8> ../public/steam/isteammatchmaking.h:292
inline void ISteamMatchmakingServerListResponse::ISteamMatchmakingServerListResponse()
{
} /* size: 0 */

// <01C03829> ../public/steam/isteammatchmaking.h:292
// member functions: 14
// member variable: 1
// vtable entries: 3
// class size: 8
class ISteamMatchmakingServerListResponse {
	void ISteamMatchmakingServerListResponse(ISteamMatchmakingServerListResponse* , ISteamMatchmakingServerListResponse& );
	void ISteamMatchmakingServerListResponse(ISteamMatchmakingServerListResponse* , const ISteamMatchmakingServerListResponse& );
	void ISteamMatchmakingServerListResponse(ISteamMatchmakingServerListResponse* );
	void ~ISteamMatchmakingServerListResponse(ISteamMatchmakingServerListResponse* );
	int ()(void) * * _vptr.ISteamMatchmakingServerListResponse; /* 0 8 */
	/* ../public/steam/isteammatchmaking.h:296 */
	virtual void ServerResponded(ISteamMatchmakingServerListResponse* , HServerListRequest, int);
	/* ../public/steam/isteammatchmaking.h:299 */
	virtual void ServerFailedToRespond(ISteamMatchmakingServerListResponse* , HServerListRequest, int);
	/* ../public/steam/isteammatchmaking.h:302 */
	virtual void RefreshComplete(ISteamMatchmakingServerListResponse* , HServerListRequest, EMatchMakingServerResponse);
	void ISteamMatchmakingServerListResponse(class ISteamMatchmakingServerListResponse *, class ISteamMatchmakingServerListResponse &); /* linkage=_ZN35ISteamMatchmakingServerListResponseC4EOS_ */
	void ISteamMatchmakingServerListResponse(class ISteamMatchmakingServerListResponse *, const class ISteamMatchmakingServerListResponse  &); /* linkage=_ZN35ISteamMatchmakingServerListResponseC4ERKS_ */
	void ISteamMatchmakingServerListResponse(class ISteamMatchmakingServerListResponse *); /* linkage=_ZN35ISteamMatchmakingServerListResponseC4Ev */
	void ~ISteamMatchmakingServerListResponse(class ISteamMatchmakingServerListResponse *); /* linkage=_ZN35ISteamMatchmakingServerListResponseD4Ev */
	virtual void ServerResponded(class ISteamMatchmakingServerListResponse *, HServerListRequest, int); /* linkage=_ZN35ISteamMatchmakingServerListResponse15ServerRespondedEPvi */
	virtual void ServerFailedToRespond(class ISteamMatchmakingServerListResponse *, HServerListRequest, int); /* linkage=_ZN35ISteamMatchmakingServerListResponse21ServerFailedToRespondEPvi */
	virtual void RefreshComplete(class ISteamMatchmakingServerListResponse *, HServerListRequest, enum EMatchMakingServerResponse); /* linkage=_ZN35ISteamMatchmakingServerListResponse15RefreshCompleteEPv26EMatchMakingServerResponse */
};

// <01C1D904> ../public/steam/isteammatchmaking.h:529
void SteamInternal_Init_SteamMatchmakingServers(ISteamMatchmakingServers** p)
{
} /* size: 44 */

// <01C1D8BE> ../public/steam/isteammatchmaking.h:529
// variable: 1
inline ISteamMatchmakingServers* SteamMatchmakingServers(void)
{
	void* s_CallbackCounterAndContext; // 529
} /* size: 0, variables: 1 */

// <000DB719> ../public/steam/isteammatchmaking.h:753
// member variables: 3
// struct size: 24
struct LobbyInvite_t {
	/* ../public/steam/isteammatchmaking.h:755 */
	enum {
		k_iCallback = 503,
	};
	uint64 m_ulSteamIDUser; /* 0 8 */
	uint64 m_ulSteamIDLobby; /* 8 8 */
	uint64 m_ulGameID; /* 16 8 */
};

// <000DB76F> ../public/steam/isteammatchmaking.h:768
// member variables: 4
// struct size: 20
struct LobbyEnter_t {
	/* ../public/steam/isteammatchmaking.h:770 */
	enum {
		k_iCallback = 504,
	};
	uint64 m_ulSteamIDLobby; /* 0 8 */
	uint32 m_rgfChatPermissions; /* 8 4 */
	bool m_bLocked; /* 12 1 */
	uint32 m_EChatRoomEnterResponse; /* 16 4 */
};

// <000DB7D5> ../public/steam/isteammatchmaking.h:784
// member variables: 3
// struct size: 20
struct LobbyDataUpdate_t {
	/* ../public/steam/isteammatchmaking.h:786 */
	enum {
		k_iCallback = 505,
	};
	uint64 m_ulSteamIDLobby; /* 0 8 */
	uint64 m_ulSteamIDMember; /* 8 8 */
	uint8 m_bSuccess; /* 16 1 */
};

// <000DB82B> ../public/steam/isteammatchmaking.h:799
// member variables: 4
// struct size: 28
struct LobbyChatUpdate_t {
	/* ../public/steam/isteammatchmaking.h:801 */
	enum {
		k_iCallback = 506,
	};
	uint64 m_ulSteamIDLobby; /* 0 8 */
	uint64 m_ulSteamIDUserChanged; /* 8 8 */
	uint64 m_ulSteamIDMakingChange; /* 16 8 */
	uint32 m_rgfChatMemberStateChange; /* 24 4 */
} __attribute__((__packed__));

// <000DB891> ../public/steam/isteammatchmaking.h:815
// member variables: 4
// struct size: 24
struct LobbyChatMsg_t {
	/* ../public/steam/isteammatchmaking.h:817 */
	enum {
		k_iCallback = 507,
	};
	uint64 m_ulSteamIDLobby; /* 0 8 */
	uint64 m_ulSteamIDUser; /* 8 8 */
	uint8 m_eChatEntryType; /* 16 1 */
	uint32 m_iChatID; /* 20 4 */
};

// <000DB8F7> ../public/steam/isteammatchmaking.h:832
// member variables: 4
// struct size: 24
struct LobbyGameCreated_t {
	/* ../public/steam/isteammatchmaking.h:834 */
	enum {
		k_iCallback = 509,
	};
	uint64 m_ulSteamIDLobby; /* 0 8 */
	uint64 m_ulSteamIDGameServer; /* 8 8 */
	uint32 m_unIP; /* 16 4 */
	uint16 m_usPort; /* 20 2 */
};

// <000DB95D> ../public/steam/isteammatchmaking.h:873
// member variables: 2
// struct size: 12
struct LobbyCreated_t {
	/* ../public/steam/isteammatchmaking.h:875 */
	enum {
		k_iCallback = 513,
	};
	EResult m_eResult; /* 0 4 */
	uint64 m_ulSteamIDLobby; /* 4 8 */
} __attribute__((__packed__));

