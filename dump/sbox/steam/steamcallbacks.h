
//
// sbox/steam/steamcallbacks.h
//
//	referenced by: libengine2.so
//
//	functions: 423
//	classes: 2
//

// <00116018> sbox/steam/steamcallbacks.h:5
// member functions: 344
// member variables: 57
// vtable entry: 1
// class size: 912
class CSteamEngine {
	/* sbox/steam/steamcallbacks.h:9 */
	void CSteamEngine(CSteamEngine* );
	/* sbox/steam/steamcallbacks.h:32 */
	struct CCallbackInternal_OnSteamAPICallCompleted_t : CCallbackImpl<16> {
		/* class CCallbackImpl<16> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:32 */
		void CCallbackInternal_OnSteamAPICallCompleted_t(CCallbackInternal_OnSteamAPICallCompleted_t* );
		/* sbox/steam/steamcallbacks.h:32 */
		void CCallbackInternal_OnSteamAPICallCompleted_t(CCallbackInternal_OnSteamAPICallCompleted_t* , const CCallbackInternal_OnSteamAPICallCompleted_t& );
		/* sbox/steam/steamcallbacks.h:32 */
		CCallbackInternal_OnSteamAPICallCompleted_t& operator=(CCallbackInternal_OnSteamAPICallCompleted_t* , const CCallbackInternal_OnSteamAPICallCompleted_t& );
	private:
		/* sbox/steam/steamcallbacks.h:32 */
		virtual void Run(CCallbackInternal_OnSteamAPICallCompleted_t* , void* );
		virtual void ~CCallbackInternal_OnSteamAPICallCompleted_t(CCallbackInternal_OnSteamAPICallCompleted_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_OnSteamAPICallCompleted_t m_steamcallback_OnSteamAPICallCompleted_t; /* 0 16 */
	/* sbox/steam/steamcallbacks.h:32 */
	void OnSteamAPICallCompleted_t(CSteamEngine* , SteamAPICallCompleted_t* );
	/* sbox/steam/steamcallbacks.h:37 */
	struct CCallbackInternal_OnPersonaStateChange_t : CCallbackImpl<12> {
		/* class CCallbackImpl<12> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:37 */
		void CCallbackInternal_OnPersonaStateChange_t(CCallbackInternal_OnPersonaStateChange_t* );
		/* sbox/steam/steamcallbacks.h:37 */
		void CCallbackInternal_OnPersonaStateChange_t(CCallbackInternal_OnPersonaStateChange_t* , const CCallbackInternal_OnPersonaStateChange_t& );
		/* sbox/steam/steamcallbacks.h:37 */
		CCallbackInternal_OnPersonaStateChange_t& operator=(CCallbackInternal_OnPersonaStateChange_t* , const CCallbackInternal_OnPersonaStateChange_t& );
	private:
		/* sbox/steam/steamcallbacks.h:37 */
		virtual void Run(CCallbackInternal_OnPersonaStateChange_t* , void* );
		virtual void ~CCallbackInternal_OnPersonaStateChange_t(CCallbackInternal_OnPersonaStateChange_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_OnPersonaStateChange_t m_steamcallback_OnPersonaStateChange_t; /* 16 16 */
	/* sbox/steam/steamcallbacks.h:37 */
	void OnPersonaStateChange_t(CSteamEngine* , PersonaStateChange_t* );
	/* sbox/steam/steamcallbacks.h:38 */
	struct CCallbackInternal_OnGameRichPresenceJoinRequested_t : CCallbackImpl<264> {
		/* class CCallbackImpl<264> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:38 */
		void CCallbackInternal_OnGameRichPresenceJoinRequested_t(CCallbackInternal_OnGameRichPresenceJoinRequested_t* );
		/* sbox/steam/steamcallbacks.h:38 */
		void CCallbackInternal_OnGameRichPresenceJoinRequested_t(CCallbackInternal_OnGameRichPresenceJoinRequested_t* , const CCallbackInternal_OnGameRichPresenceJoinRequested_t& );
		/* sbox/steam/steamcallbacks.h:38 */
		CCallbackInternal_OnGameRichPresenceJoinRequested_t& operator=(CCallbackInternal_OnGameRichPresenceJoinRequested_t* , const CCallbackInternal_OnGameRichPresenceJoinRequested_t& );
	private:
		/* sbox/steam/steamcallbacks.h:38 */
		virtual void Run(CCallbackInternal_OnGameRichPresenceJoinRequested_t* , void* );
		virtual void ~CCallbackInternal_OnGameRichPresenceJoinRequested_t(CCallbackInternal_OnGameRichPresenceJoinRequested_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_OnGameRichPresenceJoinRequested_t m_steamcallback_OnGameRichPresenceJoinRequested_t; /* 32 16 */
	/* sbox/steam/steamcallbacks.h:38 */
	void OnGameRichPresenceJoinRequested_t(CSteamEngine* , GameRichPresenceJoinRequested_t* );
	/* sbox/steam/steamcallbacks.h:39 */
	struct CCallbackInternal_OnGameConnectedFriendChatMsg_t : CCallbackImpl<12> {
		/* class CCallbackImpl<12> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:39 */
		void CCallbackInternal_OnGameConnectedFriendChatMsg_t(CCallbackInternal_OnGameConnectedFriendChatMsg_t* );
		/* sbox/steam/steamcallbacks.h:39 */
		void CCallbackInternal_OnGameConnectedFriendChatMsg_t(CCallbackInternal_OnGameConnectedFriendChatMsg_t* , const CCallbackInternal_OnGameConnectedFriendChatMsg_t& );
		/* sbox/steam/steamcallbacks.h:39 */
		CCallbackInternal_OnGameConnectedFriendChatMsg_t& operator=(CCallbackInternal_OnGameConnectedFriendChatMsg_t* , const CCallbackInternal_OnGameConnectedFriendChatMsg_t& );
	private:
		/* sbox/steam/steamcallbacks.h:39 */
		virtual void Run(CCallbackInternal_OnGameConnectedFriendChatMsg_t* , void* );
		virtual void ~CCallbackInternal_OnGameConnectedFriendChatMsg_t(CCallbackInternal_OnGameConnectedFriendChatMsg_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_OnGameConnectedFriendChatMsg_t m_steamcallback_OnGameConnectedFriendChatMsg_t; /* 48 16 */
	/* sbox/steam/steamcallbacks.h:39 */
	void OnGameConnectedFriendChatMsg_t(CSteamEngine* , GameConnectedFriendChatMsg_t* );
	/* sbox/steam/steamcallbacks.h:40 */
	struct CCallbackInternal_OnGameConnectedClanChatMsg_t : CCallbackImpl<20> {
		/* class CCallbackImpl<20> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:40 */
		void CCallbackInternal_OnGameConnectedClanChatMsg_t(CCallbackInternal_OnGameConnectedClanChatMsg_t* );
		/* sbox/steam/steamcallbacks.h:40 */
		void CCallbackInternal_OnGameConnectedClanChatMsg_t(CCallbackInternal_OnGameConnectedClanChatMsg_t* , const CCallbackInternal_OnGameConnectedClanChatMsg_t& );
		/* sbox/steam/steamcallbacks.h:40 */
		CCallbackInternal_OnGameConnectedClanChatMsg_t& operator=(CCallbackInternal_OnGameConnectedClanChatMsg_t* , const CCallbackInternal_OnGameConnectedClanChatMsg_t& );
	private:
		/* sbox/steam/steamcallbacks.h:40 */
		virtual void Run(CCallbackInternal_OnGameConnectedClanChatMsg_t* , void* );
		virtual void ~CCallbackInternal_OnGameConnectedClanChatMsg_t(CCallbackInternal_OnGameConnectedClanChatMsg_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_OnGameConnectedClanChatMsg_t m_steamcallback_OnGameConnectedClanChatMsg_t; /* 64 16 */
	/* sbox/steam/steamcallbacks.h:40 */
	void OnGameConnectedClanChatMsg_t(CSteamEngine* , GameConnectedClanChatMsg_t* );
	/* sbox/steam/steamcallbacks.h:41 */
	struct CCallbackInternal_OnGameOverlayActivated_t : CCallbackImpl<12> {
		/* class CCallbackImpl<12> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:41 */
		void CCallbackInternal_OnGameOverlayActivated_t(CCallbackInternal_OnGameOverlayActivated_t* );
		/* sbox/steam/steamcallbacks.h:41 */
		void CCallbackInternal_OnGameOverlayActivated_t(CCallbackInternal_OnGameOverlayActivated_t* , const CCallbackInternal_OnGameOverlayActivated_t& );
		/* sbox/steam/steamcallbacks.h:41 */
		CCallbackInternal_OnGameOverlayActivated_t& operator=(CCallbackInternal_OnGameOverlayActivated_t* , const CCallbackInternal_OnGameOverlayActivated_t& );
	private:
		/* sbox/steam/steamcallbacks.h:41 */
		virtual void Run(CCallbackInternal_OnGameOverlayActivated_t* , void* );
		virtual void ~CCallbackInternal_OnGameOverlayActivated_t(CCallbackInternal_OnGameOverlayActivated_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_OnGameOverlayActivated_t m_steamcallback_OnGameOverlayActivated_t; /* 80 16 */
	/* sbox/steam/steamcallbacks.h:41 */
	void OnGameOverlayActivated_t(CSteamEngine* , GameOverlayActivated_t* );
	/* sbox/steam/steamcallbacks.h:42 */
	struct CCallbackInternal_OnGameServerChangeRequested_t : CCallbackImpl<128> {
		/* class CCallbackImpl<128> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:42 */
		void CCallbackInternal_OnGameServerChangeRequested_t(CCallbackInternal_OnGameServerChangeRequested_t* );
		/* sbox/steam/steamcallbacks.h:42 */
		void CCallbackInternal_OnGameServerChangeRequested_t(CCallbackInternal_OnGameServerChangeRequested_t* , const CCallbackInternal_OnGameServerChangeRequested_t& );
		/* sbox/steam/steamcallbacks.h:42 */
		CCallbackInternal_OnGameServerChangeRequested_t& operator=(CCallbackInternal_OnGameServerChangeRequested_t* , const CCallbackInternal_OnGameServerChangeRequested_t& );
	private:
		/* sbox/steam/steamcallbacks.h:42 */
		virtual void Run(CCallbackInternal_OnGameServerChangeRequested_t* , void* );
		virtual void ~CCallbackInternal_OnGameServerChangeRequested_t(CCallbackInternal_OnGameServerChangeRequested_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_OnGameServerChangeRequested_t m_steamcallback_OnGameServerChangeRequested_t; /* 96 16 */
	/* sbox/steam/steamcallbacks.h:42 */
	void OnGameServerChangeRequested_t(CSteamEngine* , GameServerChangeRequested_t* );
	/* sbox/steam/steamcallbacks.h:43 */
	struct CCallbackInternal_OnGameLobbyJoinRequested_t : CCallbackImpl<16> {
		/* class CCallbackImpl<16> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:43 */
		void CCallbackInternal_OnGameLobbyJoinRequested_t(CCallbackInternal_OnGameLobbyJoinRequested_t* );
		/* sbox/steam/steamcallbacks.h:43 */
		void CCallbackInternal_OnGameLobbyJoinRequested_t(CCallbackInternal_OnGameLobbyJoinRequested_t* , const CCallbackInternal_OnGameLobbyJoinRequested_t& );
		/* sbox/steam/steamcallbacks.h:43 */
		CCallbackInternal_OnGameLobbyJoinRequested_t& operator=(CCallbackInternal_OnGameLobbyJoinRequested_t* , const CCallbackInternal_OnGameLobbyJoinRequested_t& );
	private:
		/* sbox/steam/steamcallbacks.h:43 */
		virtual void Run(CCallbackInternal_OnGameLobbyJoinRequested_t* , void* );
		virtual void ~CCallbackInternal_OnGameLobbyJoinRequested_t(CCallbackInternal_OnGameLobbyJoinRequested_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_OnGameLobbyJoinRequested_t m_steamcallback_OnGameLobbyJoinRequested_t; /* 112 16 */
	/* sbox/steam/steamcallbacks.h:43 */
	void OnGameLobbyJoinRequested_t(CSteamEngine* , GameLobbyJoinRequested_t* );
	/* sbox/steam/steamcallbacks.h:44 */
	struct CCallbackInternal_OnFriendRichPresenceUpdate_t : CCallbackImpl<12> {
		/* class CCallbackImpl<12> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:44 */
		void CCallbackInternal_OnFriendRichPresenceUpdate_t(CCallbackInternal_OnFriendRichPresenceUpdate_t* );
		/* sbox/steam/steamcallbacks.h:44 */
		void CCallbackInternal_OnFriendRichPresenceUpdate_t(CCallbackInternal_OnFriendRichPresenceUpdate_t* , const CCallbackInternal_OnFriendRichPresenceUpdate_t& );
		/* sbox/steam/steamcallbacks.h:44 */
		CCallbackInternal_OnFriendRichPresenceUpdate_t& operator=(CCallbackInternal_OnFriendRichPresenceUpdate_t* , const CCallbackInternal_OnFriendRichPresenceUpdate_t& );
	private:
		/* sbox/steam/steamcallbacks.h:44 */
		virtual void Run(CCallbackInternal_OnFriendRichPresenceUpdate_t* , void* );
		virtual void ~CCallbackInternal_OnFriendRichPresenceUpdate_t(CCallbackInternal_OnFriendRichPresenceUpdate_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_OnFriendRichPresenceUpdate_t m_steamcallback_OnFriendRichPresenceUpdate_t; /* 128 16 */
	/* sbox/steam/steamcallbacks.h:44 */
	void OnFriendRichPresenceUpdate_t(CSteamEngine* , FriendRichPresenceUpdate_t* );
	/* sbox/steam/steamcallbacks.h:49 */
	struct CCallbackInternal_OnSteamServersConnected_t : CCallbackImpl<1> {
		/* class CCallbackImpl<1> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:49 */
		void CCallbackInternal_OnSteamServersConnected_t(CCallbackInternal_OnSteamServersConnected_t* );
		/* sbox/steam/steamcallbacks.h:49 */
		void CCallbackInternal_OnSteamServersConnected_t(CCallbackInternal_OnSteamServersConnected_t* , const CCallbackInternal_OnSteamServersConnected_t& );
		/* sbox/steam/steamcallbacks.h:49 */
		CCallbackInternal_OnSteamServersConnected_t& operator=(CCallbackInternal_OnSteamServersConnected_t* , const CCallbackInternal_OnSteamServersConnected_t& );
	private:
		/* sbox/steam/steamcallbacks.h:49 */
		virtual void Run(CCallbackInternal_OnSteamServersConnected_t* , void* );
		virtual void ~CCallbackInternal_OnSteamServersConnected_t(CCallbackInternal_OnSteamServersConnected_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_OnSteamServersConnected_t m_steamcallback_OnSteamServersConnected_t; /* 144 16 */
	/* sbox/steam/steamcallbacks.h:49 */
	void OnSteamServersConnected_t(CSteamEngine* , SteamServersConnected_t* );
	/* sbox/steam/steamcallbacks.h:50 */
	struct CCallbackInternal_OnSteamServerConnectFailure_t : CCallbackImpl<8> {
		/* class CCallbackImpl<8> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:50 */
		void CCallbackInternal_OnSteamServerConnectFailure_t(CCallbackInternal_OnSteamServerConnectFailure_t* );
		/* sbox/steam/steamcallbacks.h:50 */
		void CCallbackInternal_OnSteamServerConnectFailure_t(CCallbackInternal_OnSteamServerConnectFailure_t* , const CCallbackInternal_OnSteamServerConnectFailure_t& );
		/* sbox/steam/steamcallbacks.h:50 */
		CCallbackInternal_OnSteamServerConnectFailure_t& operator=(CCallbackInternal_OnSteamServerConnectFailure_t* , const CCallbackInternal_OnSteamServerConnectFailure_t& );
	private:
		/* sbox/steam/steamcallbacks.h:50 */
		virtual void Run(CCallbackInternal_OnSteamServerConnectFailure_t* , void* );
		virtual void ~CCallbackInternal_OnSteamServerConnectFailure_t(CCallbackInternal_OnSteamServerConnectFailure_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_OnSteamServerConnectFailure_t m_steamcallback_OnSteamServerConnectFailure_t; /* 160 16 */
	/* sbox/steam/steamcallbacks.h:50 */
	void OnSteamServerConnectFailure_t(CSteamEngine* , SteamServerConnectFailure_t* );
	/* sbox/steam/steamcallbacks.h:51 */
	struct CCallbackInternal_OnSteamServersDisconnected_t : CCallbackImpl<4> {
		/* class CCallbackImpl<4> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:51 */
		void CCallbackInternal_OnSteamServersDisconnected_t(CCallbackInternal_OnSteamServersDisconnected_t* );
		/* sbox/steam/steamcallbacks.h:51 */
		void CCallbackInternal_OnSteamServersDisconnected_t(CCallbackInternal_OnSteamServersDisconnected_t* , const CCallbackInternal_OnSteamServersDisconnected_t& );
		/* sbox/steam/steamcallbacks.h:51 */
		CCallbackInternal_OnSteamServersDisconnected_t& operator=(CCallbackInternal_OnSteamServersDisconnected_t* , const CCallbackInternal_OnSteamServersDisconnected_t& );
	private:
		/* sbox/steam/steamcallbacks.h:51 */
		virtual void Run(CCallbackInternal_OnSteamServersDisconnected_t* , void* );
		virtual void ~CCallbackInternal_OnSteamServersDisconnected_t(CCallbackInternal_OnSteamServersDisconnected_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_OnSteamServersDisconnected_t m_steamcallback_OnSteamServersDisconnected_t; /* 176 16 */
	/* sbox/steam/steamcallbacks.h:51 */
	void OnSteamServersDisconnected_t(CSteamEngine* , SteamServersDisconnected_t* );
	/* sbox/steam/steamcallbacks.h:52 */
	struct CCallbackInternal_OnClientGameServerDeny_t : CCallbackImpl<16> {
		/* class CCallbackImpl<16> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:52 */
		void CCallbackInternal_OnClientGameServerDeny_t(CCallbackInternal_OnClientGameServerDeny_t* );
		/* sbox/steam/steamcallbacks.h:52 */
		void CCallbackInternal_OnClientGameServerDeny_t(CCallbackInternal_OnClientGameServerDeny_t* , const CCallbackInternal_OnClientGameServerDeny_t& );
		/* sbox/steam/steamcallbacks.h:52 */
		CCallbackInternal_OnClientGameServerDeny_t& operator=(CCallbackInternal_OnClientGameServerDeny_t* , const CCallbackInternal_OnClientGameServerDeny_t& );
	private:
		/* sbox/steam/steamcallbacks.h:52 */
		virtual void Run(CCallbackInternal_OnClientGameServerDeny_t* , void* );
		virtual void ~CCallbackInternal_OnClientGameServerDeny_t(CCallbackInternal_OnClientGameServerDeny_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_OnClientGameServerDeny_t m_steamcallback_OnClientGameServerDeny_t; /* 192 16 */
	/* sbox/steam/steamcallbacks.h:52 */
	void OnClientGameServerDeny_t(CSteamEngine* , ClientGameServerDeny_t* );
	/* sbox/steam/steamcallbacks.h:53 */
	struct CCallbackInternal_OnLicensesUpdated_t : CCallbackImpl<1> {
		/* class CCallbackImpl<1> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:53 */
		void CCallbackInternal_OnLicensesUpdated_t(CCallbackInternal_OnLicensesUpdated_t* );
		/* sbox/steam/steamcallbacks.h:53 */
		void CCallbackInternal_OnLicensesUpdated_t(CCallbackInternal_OnLicensesUpdated_t* , const CCallbackInternal_OnLicensesUpdated_t& );
		/* sbox/steam/steamcallbacks.h:53 */
		CCallbackInternal_OnLicensesUpdated_t& operator=(CCallbackInternal_OnLicensesUpdated_t* , const CCallbackInternal_OnLicensesUpdated_t& );
	private:
		/* sbox/steam/steamcallbacks.h:53 */
		virtual void Run(CCallbackInternal_OnLicensesUpdated_t* , void* );
		virtual void ~CCallbackInternal_OnLicensesUpdated_t(CCallbackInternal_OnLicensesUpdated_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_OnLicensesUpdated_t m_steamcallback_OnLicensesUpdated_t; /* 208 16 */
	/* sbox/steam/steamcallbacks.h:53 */
	void OnLicensesUpdated_t(CSteamEngine* , LicensesUpdated_t* );
	/* sbox/steam/steamcallbacks.h:54 */
	struct CCallbackInternal_OnValidateAuthTicketResponse_t : CCallbackImpl<20> {
		/* class CCallbackImpl<20> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:54 */
		void CCallbackInternal_OnValidateAuthTicketResponse_t(CCallbackInternal_OnValidateAuthTicketResponse_t* );
		/* sbox/steam/steamcallbacks.h:54 */
		void CCallbackInternal_OnValidateAuthTicketResponse_t(CCallbackInternal_OnValidateAuthTicketResponse_t* , const CCallbackInternal_OnValidateAuthTicketResponse_t& );
		/* sbox/steam/steamcallbacks.h:54 */
		CCallbackInternal_OnValidateAuthTicketResponse_t& operator=(CCallbackInternal_OnValidateAuthTicketResponse_t* , const CCallbackInternal_OnValidateAuthTicketResponse_t& );
	private:
		/* sbox/steam/steamcallbacks.h:54 */
		virtual void Run(CCallbackInternal_OnValidateAuthTicketResponse_t* , void* );
		virtual void ~CCallbackInternal_OnValidateAuthTicketResponse_t(CCallbackInternal_OnValidateAuthTicketResponse_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_OnValidateAuthTicketResponse_t m_steamcallback_OnValidateAuthTicketResponse_t; /* 224 16 */
	/* sbox/steam/steamcallbacks.h:54 */
	void OnValidateAuthTicketResponse_t(CSteamEngine* , ValidateAuthTicketResponse_t* );
	/* sbox/steam/steamcallbacks.h:55 */
	struct CCallbackInternal_OnMicroTxnAuthorizationResponse_t : CCallbackImpl<16> {
		/* class CCallbackImpl<16> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:55 */
		void CCallbackInternal_OnMicroTxnAuthorizationResponse_t(CCallbackInternal_OnMicroTxnAuthorizationResponse_t* );
		/* sbox/steam/steamcallbacks.h:55 */
		void CCallbackInternal_OnMicroTxnAuthorizationResponse_t(CCallbackInternal_OnMicroTxnAuthorizationResponse_t* , const CCallbackInternal_OnMicroTxnAuthorizationResponse_t& );
		/* sbox/steam/steamcallbacks.h:55 */
		CCallbackInternal_OnMicroTxnAuthorizationResponse_t& operator=(CCallbackInternal_OnMicroTxnAuthorizationResponse_t* , const CCallbackInternal_OnMicroTxnAuthorizationResponse_t& );
	private:
		/* sbox/steam/steamcallbacks.h:55 */
		virtual void Run(CCallbackInternal_OnMicroTxnAuthorizationResponse_t* , void* );
		virtual void ~CCallbackInternal_OnMicroTxnAuthorizationResponse_t(CCallbackInternal_OnMicroTxnAuthorizationResponse_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_OnMicroTxnAuthorizationResponse_t m_steamcallback_OnMicroTxnAuthorizationResponse_t; /* 240 16 */
	/* sbox/steam/steamcallbacks.h:55 */
	void OnMicroTxnAuthorizationResponse_t(CSteamEngine* , MicroTxnAuthorizationResponse_t* );
	/* sbox/steam/steamcallbacks.h:56 */
	struct CCallbackInternal_OnGameWebCallback_t : CCallbackImpl<256> {
		/* class CCallbackImpl<256> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:56 */
		void CCallbackInternal_OnGameWebCallback_t(CCallbackInternal_OnGameWebCallback_t* );
		/* sbox/steam/steamcallbacks.h:56 */
		void CCallbackInternal_OnGameWebCallback_t(CCallbackInternal_OnGameWebCallback_t* , const CCallbackInternal_OnGameWebCallback_t& );
		/* sbox/steam/steamcallbacks.h:56 */
		CCallbackInternal_OnGameWebCallback_t& operator=(CCallbackInternal_OnGameWebCallback_t* , const CCallbackInternal_OnGameWebCallback_t& );
	private:
		/* sbox/steam/steamcallbacks.h:56 */
		virtual void Run(CCallbackInternal_OnGameWebCallback_t* , void* );
		virtual void ~CCallbackInternal_OnGameWebCallback_t(CCallbackInternal_OnGameWebCallback_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_OnGameWebCallback_t m_steamcallback_OnGameWebCallback_t; /* 256 16 */
	/* sbox/steam/steamcallbacks.h:56 */
	void OnGameWebCallback_t(CSteamEngine* , GameWebCallback_t* );
	/* sbox/steam/steamcallbacks.h:57 */
	struct CCallbackInternal_OnGetAuthSessionTicketResponse_t : CCallbackImpl<8> {
		/* class CCallbackImpl<8> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:57 */
		void CCallbackInternal_OnGetAuthSessionTicketResponse_t(CCallbackInternal_OnGetAuthSessionTicketResponse_t* );
		/* sbox/steam/steamcallbacks.h:57 */
		void CCallbackInternal_OnGetAuthSessionTicketResponse_t(CCallbackInternal_OnGetAuthSessionTicketResponse_t* , const CCallbackInternal_OnGetAuthSessionTicketResponse_t& );
		/* sbox/steam/steamcallbacks.h:57 */
		CCallbackInternal_OnGetAuthSessionTicketResponse_t& operator=(CCallbackInternal_OnGetAuthSessionTicketResponse_t* , const CCallbackInternal_OnGetAuthSessionTicketResponse_t& );
	private:
		/* sbox/steam/steamcallbacks.h:57 */
		virtual void Run(CCallbackInternal_OnGetAuthSessionTicketResponse_t* , void* );
		virtual void ~CCallbackInternal_OnGetAuthSessionTicketResponse_t(CCallbackInternal_OnGetAuthSessionTicketResponse_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_OnGetAuthSessionTicketResponse_t m_steamcallback_OnGetAuthSessionTicketResponse_t; /* 272 16 */
	/* sbox/steam/steamcallbacks.h:57 */
	void OnGetAuthSessionTicketResponse_t(CSteamEngine* , GetAuthSessionTicketResponse_t* );
	/* sbox/steam/steamcallbacks.h:58 */
	struct CCallbackInternal_OnDurationControl_t : CCallbackImpl<32> {
		/* class CCallbackImpl<32> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:58 */
		void CCallbackInternal_OnDurationControl_t(CCallbackInternal_OnDurationControl_t* );
		/* sbox/steam/steamcallbacks.h:58 */
		void CCallbackInternal_OnDurationControl_t(CCallbackInternal_OnDurationControl_t* , const CCallbackInternal_OnDurationControl_t& );
		/* sbox/steam/steamcallbacks.h:58 */
		CCallbackInternal_OnDurationControl_t& operator=(CCallbackInternal_OnDurationControl_t* , const CCallbackInternal_OnDurationControl_t& );
	private:
		/* sbox/steam/steamcallbacks.h:58 */
		virtual void Run(CCallbackInternal_OnDurationControl_t* , void* );
		virtual void ~CCallbackInternal_OnDurationControl_t(CCallbackInternal_OnDurationControl_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_OnDurationControl_t m_steamcallback_OnDurationControl_t; /* 288 16 */
	/* sbox/steam/steamcallbacks.h:58 */
	void OnDurationControl_t(CSteamEngine* , DurationControl_t* );
	/* sbox/steam/steamcallbacks.h:59 */
	struct CCallbackInternal_OnGetTicketForWebApiResponse_t : CCallbackImpl<2572> {
		/* class CCallbackImpl<2572> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:59 */
		void CCallbackInternal_OnGetTicketForWebApiResponse_t(CCallbackInternal_OnGetTicketForWebApiResponse_t* );
		/* sbox/steam/steamcallbacks.h:59 */
		void CCallbackInternal_OnGetTicketForWebApiResponse_t(CCallbackInternal_OnGetTicketForWebApiResponse_t* , const CCallbackInternal_OnGetTicketForWebApiResponse_t& );
		/* sbox/steam/steamcallbacks.h:59 */
		CCallbackInternal_OnGetTicketForWebApiResponse_t& operator=(CCallbackInternal_OnGetTicketForWebApiResponse_t* , const CCallbackInternal_OnGetTicketForWebApiResponse_t& );
	private:
		/* sbox/steam/steamcallbacks.h:59 */
		virtual void Run(CCallbackInternal_OnGetTicketForWebApiResponse_t* , void* );
		virtual void ~CCallbackInternal_OnGetTicketForWebApiResponse_t(CCallbackInternal_OnGetTicketForWebApiResponse_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_OnGetTicketForWebApiResponse_t m_steamcallback_OnGetTicketForWebApiResponse_t; /* 304 16 */
	/* sbox/steam/steamcallbacks.h:59 */
	void OnGetTicketForWebApiResponse_t(CSteamEngine* , GetTicketForWebApiResponse_t* );
	/* sbox/steam/steamcallbacks.h:64 */
	struct CCallbackInternal_OnSteamInputDeviceConnected_t : CCallbackImpl<8> {
		/* class CCallbackImpl<8> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:64 */
		void CCallbackInternal_OnSteamInputDeviceConnected_t(CCallbackInternal_OnSteamInputDeviceConnected_t* );
		/* sbox/steam/steamcallbacks.h:64 */
		void CCallbackInternal_OnSteamInputDeviceConnected_t(CCallbackInternal_OnSteamInputDeviceConnected_t* , const CCallbackInternal_OnSteamInputDeviceConnected_t& );
		/* sbox/steam/steamcallbacks.h:64 */
		CCallbackInternal_OnSteamInputDeviceConnected_t& operator=(CCallbackInternal_OnSteamInputDeviceConnected_t* , const CCallbackInternal_OnSteamInputDeviceConnected_t& );
	private:
		/* sbox/steam/steamcallbacks.h:64 */
		virtual void Run(CCallbackInternal_OnSteamInputDeviceConnected_t* , void* );
		virtual void ~CCallbackInternal_OnSteamInputDeviceConnected_t(CCallbackInternal_OnSteamInputDeviceConnected_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_OnSteamInputDeviceConnected_t m_steamcallback_OnSteamInputDeviceConnected_t; /* 320 16 */
	/* sbox/steam/steamcallbacks.h:64 */
	void OnSteamInputDeviceConnected_t(CSteamEngine* , SteamInputDeviceConnected_t* );
	/* sbox/steam/steamcallbacks.h:65 */
	struct CCallbackInternal_OnSteamInputDeviceDisconnected_t : CCallbackImpl<8> {
		/* class CCallbackImpl<8> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:65 */
		void CCallbackInternal_OnSteamInputDeviceDisconnected_t(CCallbackInternal_OnSteamInputDeviceDisconnected_t* );
		/* sbox/steam/steamcallbacks.h:65 */
		void CCallbackInternal_OnSteamInputDeviceDisconnected_t(CCallbackInternal_OnSteamInputDeviceDisconnected_t* , const CCallbackInternal_OnSteamInputDeviceDisconnected_t& );
		/* sbox/steam/steamcallbacks.h:65 */
		CCallbackInternal_OnSteamInputDeviceDisconnected_t& operator=(CCallbackInternal_OnSteamInputDeviceDisconnected_t* , const CCallbackInternal_OnSteamInputDeviceDisconnected_t& );
	private:
		/* sbox/steam/steamcallbacks.h:65 */
		virtual void Run(CCallbackInternal_OnSteamInputDeviceDisconnected_t* , void* );
		virtual void ~CCallbackInternal_OnSteamInputDeviceDisconnected_t(CCallbackInternal_OnSteamInputDeviceDisconnected_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_OnSteamInputDeviceDisconnected_t m_steamcallback_OnSteamInputDeviceDisconnected_t; /* 336 16 */
	/* sbox/steam/steamcallbacks.h:65 */
	void OnSteamInputDeviceDisconnected_t(CSteamEngine* , SteamInputDeviceDisconnected_t* );
	/* sbox/steam/steamcallbacks.h:66 */
	struct CCallbackInternal_OnSteamInputConfigurationLoaded_t : CCallbackImpl<32> {
		/* class CCallbackImpl<32> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:66 */
		void CCallbackInternal_OnSteamInputConfigurationLoaded_t(CCallbackInternal_OnSteamInputConfigurationLoaded_t* );
		/* sbox/steam/steamcallbacks.h:66 */
		void CCallbackInternal_OnSteamInputConfigurationLoaded_t(CCallbackInternal_OnSteamInputConfigurationLoaded_t* , const CCallbackInternal_OnSteamInputConfigurationLoaded_t& );
		/* sbox/steam/steamcallbacks.h:66 */
		CCallbackInternal_OnSteamInputConfigurationLoaded_t& operator=(CCallbackInternal_OnSteamInputConfigurationLoaded_t* , const CCallbackInternal_OnSteamInputConfigurationLoaded_t& );
	private:
		/* sbox/steam/steamcallbacks.h:66 */
		virtual void Run(CCallbackInternal_OnSteamInputConfigurationLoaded_t* , void* );
		virtual void ~CCallbackInternal_OnSteamInputConfigurationLoaded_t(CCallbackInternal_OnSteamInputConfigurationLoaded_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_OnSteamInputConfigurationLoaded_t m_steamcallback_OnSteamInputConfigurationLoaded_t; /* 352 16 */
	/* sbox/steam/steamcallbacks.h:66 */
	void OnSteamInputConfigurationLoaded_t(CSteamEngine* , SteamInputConfigurationLoaded_t* );
	/* sbox/steam/steamcallbacks.h:71 */
	struct CCallbackInternal_OnHTML_BrowserReady_t : CCallbackImpl<4> {
		/* class CCallbackImpl<4> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:71 */
		void CCallbackInternal_OnHTML_BrowserReady_t(CCallbackInternal_OnHTML_BrowserReady_t* );
		/* sbox/steam/steamcallbacks.h:71 */
		void CCallbackInternal_OnHTML_BrowserReady_t(CCallbackInternal_OnHTML_BrowserReady_t* , const CCallbackInternal_OnHTML_BrowserReady_t& );
		/* sbox/steam/steamcallbacks.h:71 */
		CCallbackInternal_OnHTML_BrowserReady_t& operator=(CCallbackInternal_OnHTML_BrowserReady_t* , const CCallbackInternal_OnHTML_BrowserReady_t& );
	private:
		/* sbox/steam/steamcallbacks.h:71 */
		virtual void Run(CCallbackInternal_OnHTML_BrowserReady_t* , void* );
		virtual void ~CCallbackInternal_OnHTML_BrowserReady_t(CCallbackInternal_OnHTML_BrowserReady_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_OnHTML_BrowserReady_t m_steamcallback_OnHTML_BrowserReady_t; /* 368 16 */
	/* sbox/steam/steamcallbacks.h:71 */
	void OnHTML_BrowserReady_t(CSteamEngine* , HTML_BrowserReady_t* );
	/* sbox/steam/steamcallbacks.h:72 */
	struct CCallbackInternal_OnHTML_NeedsPaint_t : CCallbackImpl<52> {
		/* class CCallbackImpl<52> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:72 */
		void CCallbackInternal_OnHTML_NeedsPaint_t(CCallbackInternal_OnHTML_NeedsPaint_t* );
		/* sbox/steam/steamcallbacks.h:72 */
		void CCallbackInternal_OnHTML_NeedsPaint_t(CCallbackInternal_OnHTML_NeedsPaint_t* , const CCallbackInternal_OnHTML_NeedsPaint_t& );
		/* sbox/steam/steamcallbacks.h:72 */
		CCallbackInternal_OnHTML_NeedsPaint_t& operator=(CCallbackInternal_OnHTML_NeedsPaint_t* , const CCallbackInternal_OnHTML_NeedsPaint_t& );
	private:
		/* sbox/steam/steamcallbacks.h:72 */
		virtual void Run(CCallbackInternal_OnHTML_NeedsPaint_t* , void* );
		virtual void ~CCallbackInternal_OnHTML_NeedsPaint_t(CCallbackInternal_OnHTML_NeedsPaint_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_OnHTML_NeedsPaint_t m_steamcallback_OnHTML_NeedsPaint_t; /* 384 16 */
	/* sbox/steam/steamcallbacks.h:72 */
	void OnHTML_NeedsPaint_t(CSteamEngine* , HTML_NeedsPaint_t* );
	/* sbox/steam/steamcallbacks.h:73 */
	struct CCallbackInternal_OnHTML_StartRequest_t : CCallbackImpl<32> {
		/* class CCallbackImpl<32> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:73 */
		void CCallbackInternal_OnHTML_StartRequest_t(CCallbackInternal_OnHTML_StartRequest_t* );
		/* sbox/steam/steamcallbacks.h:73 */
		void CCallbackInternal_OnHTML_StartRequest_t(CCallbackInternal_OnHTML_StartRequest_t* , const CCallbackInternal_OnHTML_StartRequest_t& );
		/* sbox/steam/steamcallbacks.h:73 */
		CCallbackInternal_OnHTML_StartRequest_t& operator=(CCallbackInternal_OnHTML_StartRequest_t* , const CCallbackInternal_OnHTML_StartRequest_t& );
	private:
		/* sbox/steam/steamcallbacks.h:73 */
		virtual void Run(CCallbackInternal_OnHTML_StartRequest_t* , void* );
		virtual void ~CCallbackInternal_OnHTML_StartRequest_t(CCallbackInternal_OnHTML_StartRequest_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_OnHTML_StartRequest_t m_steamcallback_OnHTML_StartRequest_t; /* 400 16 */
	/* sbox/steam/steamcallbacks.h:73 */
	void OnHTML_StartRequest_t(CSteamEngine* , HTML_StartRequest_t* );
	/* sbox/steam/steamcallbacks.h:74 */
	struct CCallbackInternal_OnHTML_CloseBrowser_t : CCallbackImpl<4> {
		/* class CCallbackImpl<4> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:74 */
		void CCallbackInternal_OnHTML_CloseBrowser_t(CCallbackInternal_OnHTML_CloseBrowser_t* );
		/* sbox/steam/steamcallbacks.h:74 */
		void CCallbackInternal_OnHTML_CloseBrowser_t(CCallbackInternal_OnHTML_CloseBrowser_t* , const CCallbackInternal_OnHTML_CloseBrowser_t& );
		/* sbox/steam/steamcallbacks.h:74 */
		CCallbackInternal_OnHTML_CloseBrowser_t& operator=(CCallbackInternal_OnHTML_CloseBrowser_t* , const CCallbackInternal_OnHTML_CloseBrowser_t& );
	private:
		/* sbox/steam/steamcallbacks.h:74 */
		virtual void Run(CCallbackInternal_OnHTML_CloseBrowser_t* , void* );
		virtual void ~CCallbackInternal_OnHTML_CloseBrowser_t(CCallbackInternal_OnHTML_CloseBrowser_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_OnHTML_CloseBrowser_t m_steamcallback_OnHTML_CloseBrowser_t; /* 416 16 */
	/* sbox/steam/steamcallbacks.h:74 */
	void OnHTML_CloseBrowser_t(CSteamEngine* , HTML_CloseBrowser_t* );
	/* sbox/steam/steamcallbacks.h:75 */
	struct CCallbackInternal_OnHTML_URLChanged_t : CCallbackImpl<36> {
		/* class CCallbackImpl<36> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:75 */
		void CCallbackInternal_OnHTML_URLChanged_t(CCallbackInternal_OnHTML_URLChanged_t* );
		/* sbox/steam/steamcallbacks.h:75 */
		void CCallbackInternal_OnHTML_URLChanged_t(CCallbackInternal_OnHTML_URLChanged_t* , const CCallbackInternal_OnHTML_URLChanged_t& );
		/* sbox/steam/steamcallbacks.h:75 */
		CCallbackInternal_OnHTML_URLChanged_t& operator=(CCallbackInternal_OnHTML_URLChanged_t* , const CCallbackInternal_OnHTML_URLChanged_t& );
	private:
		/* sbox/steam/steamcallbacks.h:75 */
		virtual void Run(CCallbackInternal_OnHTML_URLChanged_t* , void* );
		virtual void ~CCallbackInternal_OnHTML_URLChanged_t(CCallbackInternal_OnHTML_URLChanged_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_OnHTML_URLChanged_t m_steamcallback_OnHTML_URLChanged_t; /* 432 16 */
	/* sbox/steam/steamcallbacks.h:75 */
	void OnHTML_URLChanged_t(CSteamEngine* , HTML_URLChanged_t* );
	/* sbox/steam/steamcallbacks.h:76 */
	struct CCallbackInternal_OnHTML_FinishedRequest_t : CCallbackImpl<20> {
		/* class CCallbackImpl<20> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:76 */
		void CCallbackInternal_OnHTML_FinishedRequest_t(CCallbackInternal_OnHTML_FinishedRequest_t* );
		/* sbox/steam/steamcallbacks.h:76 */
		void CCallbackInternal_OnHTML_FinishedRequest_t(CCallbackInternal_OnHTML_FinishedRequest_t* , const CCallbackInternal_OnHTML_FinishedRequest_t& );
		/* sbox/steam/steamcallbacks.h:76 */
		CCallbackInternal_OnHTML_FinishedRequest_t& operator=(CCallbackInternal_OnHTML_FinishedRequest_t* , const CCallbackInternal_OnHTML_FinishedRequest_t& );
	private:
		/* sbox/steam/steamcallbacks.h:76 */
		virtual void Run(CCallbackInternal_OnHTML_FinishedRequest_t* , void* );
		virtual void ~CCallbackInternal_OnHTML_FinishedRequest_t(CCallbackInternal_OnHTML_FinishedRequest_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_OnHTML_FinishedRequest_t m_steamcallback_OnHTML_FinishedRequest_t; /* 448 16 */
	/* sbox/steam/steamcallbacks.h:76 */
	void OnHTML_FinishedRequest_t(CSteamEngine* , HTML_FinishedRequest_t* );
	/* sbox/steam/steamcallbacks.h:77 */
	struct CCallbackInternal_OnHTML_OpenLinkInNewTab_t : CCallbackImpl<12> {
		/* class CCallbackImpl<12> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:77 */
		void CCallbackInternal_OnHTML_OpenLinkInNewTab_t(CCallbackInternal_OnHTML_OpenLinkInNewTab_t* );
		/* sbox/steam/steamcallbacks.h:77 */
		void CCallbackInternal_OnHTML_OpenLinkInNewTab_t(CCallbackInternal_OnHTML_OpenLinkInNewTab_t* , const CCallbackInternal_OnHTML_OpenLinkInNewTab_t& );
		/* sbox/steam/steamcallbacks.h:77 */
		CCallbackInternal_OnHTML_OpenLinkInNewTab_t& operator=(CCallbackInternal_OnHTML_OpenLinkInNewTab_t* , const CCallbackInternal_OnHTML_OpenLinkInNewTab_t& );
	private:
		/* sbox/steam/steamcallbacks.h:77 */
		virtual void Run(CCallbackInternal_OnHTML_OpenLinkInNewTab_t* , void* );
		virtual void ~CCallbackInternal_OnHTML_OpenLinkInNewTab_t(CCallbackInternal_OnHTML_OpenLinkInNewTab_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_OnHTML_OpenLinkInNewTab_t m_steamcallback_OnHTML_OpenLinkInNewTab_t; /* 464 16 */
	/* sbox/steam/steamcallbacks.h:77 */
	void OnHTML_OpenLinkInNewTab_t(CSteamEngine* , HTML_OpenLinkInNewTab_t* );
	/* sbox/steam/steamcallbacks.h:78 */
	struct CCallbackInternal_OnHTML_ChangedTitle_t : CCallbackImpl<12> {
		/* class CCallbackImpl<12> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:78 */
		void CCallbackInternal_OnHTML_ChangedTitle_t(CCallbackInternal_OnHTML_ChangedTitle_t* );
		/* sbox/steam/steamcallbacks.h:78 */
		void CCallbackInternal_OnHTML_ChangedTitle_t(CCallbackInternal_OnHTML_ChangedTitle_t* , const CCallbackInternal_OnHTML_ChangedTitle_t& );
		/* sbox/steam/steamcallbacks.h:78 */
		CCallbackInternal_OnHTML_ChangedTitle_t& operator=(CCallbackInternal_OnHTML_ChangedTitle_t* , const CCallbackInternal_OnHTML_ChangedTitle_t& );
	private:
		/* sbox/steam/steamcallbacks.h:78 */
		virtual void Run(CCallbackInternal_OnHTML_ChangedTitle_t* , void* );
		virtual void ~CCallbackInternal_OnHTML_ChangedTitle_t(CCallbackInternal_OnHTML_ChangedTitle_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_OnHTML_ChangedTitle_t m_steamcallback_OnHTML_ChangedTitle_t; /* 480 16 */
	/* sbox/steam/steamcallbacks.h:78 */
	void OnHTML_ChangedTitle_t(CSteamEngine* , HTML_ChangedTitle_t* );
	/* sbox/steam/steamcallbacks.h:79 */
	struct CCallbackInternal_OnHTML_SearchResults_t : CCallbackImpl<12> {
		/* class CCallbackImpl<12> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:79 */
		void CCallbackInternal_OnHTML_SearchResults_t(CCallbackInternal_OnHTML_SearchResults_t* );
		/* sbox/steam/steamcallbacks.h:79 */
		void CCallbackInternal_OnHTML_SearchResults_t(CCallbackInternal_OnHTML_SearchResults_t* , const CCallbackInternal_OnHTML_SearchResults_t& );
		/* sbox/steam/steamcallbacks.h:79 */
		CCallbackInternal_OnHTML_SearchResults_t& operator=(CCallbackInternal_OnHTML_SearchResults_t* , const CCallbackInternal_OnHTML_SearchResults_t& );
	private:
		/* sbox/steam/steamcallbacks.h:79 */
		virtual void Run(CCallbackInternal_OnHTML_SearchResults_t* , void* );
		virtual void ~CCallbackInternal_OnHTML_SearchResults_t(CCallbackInternal_OnHTML_SearchResults_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_OnHTML_SearchResults_t m_steamcallback_OnHTML_SearchResults_t; /* 496 16 */
	/* sbox/steam/steamcallbacks.h:79 */
	void OnHTML_SearchResults_t(CSteamEngine* , HTML_SearchResults_t* );
	/* sbox/steam/steamcallbacks.h:80 */
	struct CCallbackInternal_OnHTML_CanGoBackAndForward_t : CCallbackImpl<8> {
		/* class CCallbackImpl<8> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:80 */
		void CCallbackInternal_OnHTML_CanGoBackAndForward_t(CCallbackInternal_OnHTML_CanGoBackAndForward_t* );
		/* sbox/steam/steamcallbacks.h:80 */
		void CCallbackInternal_OnHTML_CanGoBackAndForward_t(CCallbackInternal_OnHTML_CanGoBackAndForward_t* , const CCallbackInternal_OnHTML_CanGoBackAndForward_t& );
		/* sbox/steam/steamcallbacks.h:80 */
		CCallbackInternal_OnHTML_CanGoBackAndForward_t& operator=(CCallbackInternal_OnHTML_CanGoBackAndForward_t* , const CCallbackInternal_OnHTML_CanGoBackAndForward_t& );
	private:
		/* sbox/steam/steamcallbacks.h:80 */
		virtual void Run(CCallbackInternal_OnHTML_CanGoBackAndForward_t* , void* );
		virtual void ~CCallbackInternal_OnHTML_CanGoBackAndForward_t(CCallbackInternal_OnHTML_CanGoBackAndForward_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_OnHTML_CanGoBackAndForward_t m_steamcallback_OnHTML_CanGoBackAndForward_t; /* 512 16 */
	/* sbox/steam/steamcallbacks.h:80 */
	void OnHTML_CanGoBackAndForward_t(CSteamEngine* , HTML_CanGoBackAndForward_t* );
	/* sbox/steam/steamcallbacks.h:81 */
	struct CCallbackInternal_OnHTML_HorizontalScroll_t : CCallbackImpl<24> {
		/* class CCallbackImpl<24> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:81 */
		void CCallbackInternal_OnHTML_HorizontalScroll_t(CCallbackInternal_OnHTML_HorizontalScroll_t* );
		/* sbox/steam/steamcallbacks.h:81 */
		void CCallbackInternal_OnHTML_HorizontalScroll_t(CCallbackInternal_OnHTML_HorizontalScroll_t* , const CCallbackInternal_OnHTML_HorizontalScroll_t& );
		/* sbox/steam/steamcallbacks.h:81 */
		CCallbackInternal_OnHTML_HorizontalScroll_t& operator=(CCallbackInternal_OnHTML_HorizontalScroll_t* , const CCallbackInternal_OnHTML_HorizontalScroll_t& );
	private:
		/* sbox/steam/steamcallbacks.h:81 */
		virtual void Run(CCallbackInternal_OnHTML_HorizontalScroll_t* , void* );
		virtual void ~CCallbackInternal_OnHTML_HorizontalScroll_t(CCallbackInternal_OnHTML_HorizontalScroll_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_OnHTML_HorizontalScroll_t m_steamcallback_OnHTML_HorizontalScroll_t; /* 528 16 */
	/* sbox/steam/steamcallbacks.h:81 */
	void OnHTML_HorizontalScroll_t(CSteamEngine* , HTML_HorizontalScroll_t* );
	/* sbox/steam/steamcallbacks.h:82 */
	struct CCallbackInternal_OnHTML_VerticalScroll_t : CCallbackImpl<24> {
		/* class CCallbackImpl<24> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:82 */
		void CCallbackInternal_OnHTML_VerticalScroll_t(CCallbackInternal_OnHTML_VerticalScroll_t* );
		/* sbox/steam/steamcallbacks.h:82 */
		void CCallbackInternal_OnHTML_VerticalScroll_t(CCallbackInternal_OnHTML_VerticalScroll_t* , const CCallbackInternal_OnHTML_VerticalScroll_t& );
		/* sbox/steam/steamcallbacks.h:82 */
		CCallbackInternal_OnHTML_VerticalScroll_t& operator=(CCallbackInternal_OnHTML_VerticalScroll_t* , const CCallbackInternal_OnHTML_VerticalScroll_t& );
	private:
		/* sbox/steam/steamcallbacks.h:82 */
		virtual void Run(CCallbackInternal_OnHTML_VerticalScroll_t* , void* );
		virtual void ~CCallbackInternal_OnHTML_VerticalScroll_t(CCallbackInternal_OnHTML_VerticalScroll_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_OnHTML_VerticalScroll_t m_steamcallback_OnHTML_VerticalScroll_t; /* 544 16 */
	/* sbox/steam/steamcallbacks.h:82 */
	void OnHTML_VerticalScroll_t(CSteamEngine* , HTML_VerticalScroll_t* );
	/* sbox/steam/steamcallbacks.h:83 */
	struct CCallbackInternal_OnHTML_LinkAtPosition_t : CCallbackImpl<24> {
		/* class CCallbackImpl<24> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:83 */
		void CCallbackInternal_OnHTML_LinkAtPosition_t(CCallbackInternal_OnHTML_LinkAtPosition_t* );
		/* sbox/steam/steamcallbacks.h:83 */
		void CCallbackInternal_OnHTML_LinkAtPosition_t(CCallbackInternal_OnHTML_LinkAtPosition_t* , const CCallbackInternal_OnHTML_LinkAtPosition_t& );
		/* sbox/steam/steamcallbacks.h:83 */
		CCallbackInternal_OnHTML_LinkAtPosition_t& operator=(CCallbackInternal_OnHTML_LinkAtPosition_t* , const CCallbackInternal_OnHTML_LinkAtPosition_t& );
	private:
		/* sbox/steam/steamcallbacks.h:83 */
		virtual void Run(CCallbackInternal_OnHTML_LinkAtPosition_t* , void* );
		virtual void ~CCallbackInternal_OnHTML_LinkAtPosition_t(CCallbackInternal_OnHTML_LinkAtPosition_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_OnHTML_LinkAtPosition_t m_steamcallback_OnHTML_LinkAtPosition_t; /* 560 16 */
	/* sbox/steam/steamcallbacks.h:83 */
	void OnHTML_LinkAtPosition_t(CSteamEngine* , HTML_LinkAtPosition_t* );
	/* sbox/steam/steamcallbacks.h:84 */
	struct CCallbackInternal_OnHTML_JSAlert_t : CCallbackImpl<12> {
		/* class CCallbackImpl<12> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:84 */
		void CCallbackInternal_OnHTML_JSAlert_t(CCallbackInternal_OnHTML_JSAlert_t* );
		/* sbox/steam/steamcallbacks.h:84 */
		void CCallbackInternal_OnHTML_JSAlert_t(CCallbackInternal_OnHTML_JSAlert_t* , const CCallbackInternal_OnHTML_JSAlert_t& );
		/* sbox/steam/steamcallbacks.h:84 */
		CCallbackInternal_OnHTML_JSAlert_t& operator=(CCallbackInternal_OnHTML_JSAlert_t* , const CCallbackInternal_OnHTML_JSAlert_t& );
	private:
		/* sbox/steam/steamcallbacks.h:84 */
		virtual void Run(CCallbackInternal_OnHTML_JSAlert_t* , void* );
		virtual void ~CCallbackInternal_OnHTML_JSAlert_t(CCallbackInternal_OnHTML_JSAlert_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_OnHTML_JSAlert_t m_steamcallback_OnHTML_JSAlert_t; /* 576 16 */
	/* sbox/steam/steamcallbacks.h:84 */
	void OnHTML_JSAlert_t(CSteamEngine* , HTML_JSAlert_t* );
	/* sbox/steam/steamcallbacks.h:85 */
	struct CCallbackInternal_OnHTML_JSConfirm_t : CCallbackImpl<12> {
		/* class CCallbackImpl<12> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:85 */
		void CCallbackInternal_OnHTML_JSConfirm_t(CCallbackInternal_OnHTML_JSConfirm_t* );
		/* sbox/steam/steamcallbacks.h:85 */
		void CCallbackInternal_OnHTML_JSConfirm_t(CCallbackInternal_OnHTML_JSConfirm_t* , const CCallbackInternal_OnHTML_JSConfirm_t& );
		/* sbox/steam/steamcallbacks.h:85 */
		CCallbackInternal_OnHTML_JSConfirm_t& operator=(CCallbackInternal_OnHTML_JSConfirm_t* , const CCallbackInternal_OnHTML_JSConfirm_t& );
	private:
		/* sbox/steam/steamcallbacks.h:85 */
		virtual void Run(CCallbackInternal_OnHTML_JSConfirm_t* , void* );
		virtual void ~CCallbackInternal_OnHTML_JSConfirm_t(CCallbackInternal_OnHTML_JSConfirm_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_OnHTML_JSConfirm_t m_steamcallback_OnHTML_JSConfirm_t; /* 592 16 */
	/* sbox/steam/steamcallbacks.h:85 */
	void OnHTML_JSConfirm_t(CSteamEngine* , HTML_JSConfirm_t* );
	/* sbox/steam/steamcallbacks.h:86 */
	struct CCallbackInternal_OnHTML_FileOpenDialog_t : CCallbackImpl<20> {
		/* class CCallbackImpl<20> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:86 */
		void CCallbackInternal_OnHTML_FileOpenDialog_t(CCallbackInternal_OnHTML_FileOpenDialog_t* );
		/* sbox/steam/steamcallbacks.h:86 */
		void CCallbackInternal_OnHTML_FileOpenDialog_t(CCallbackInternal_OnHTML_FileOpenDialog_t* , const CCallbackInternal_OnHTML_FileOpenDialog_t& );
		/* sbox/steam/steamcallbacks.h:86 */
		CCallbackInternal_OnHTML_FileOpenDialog_t& operator=(CCallbackInternal_OnHTML_FileOpenDialog_t* , const CCallbackInternal_OnHTML_FileOpenDialog_t& );
	private:
		/* sbox/steam/steamcallbacks.h:86 */
		virtual void Run(CCallbackInternal_OnHTML_FileOpenDialog_t* , void* );
		virtual void ~CCallbackInternal_OnHTML_FileOpenDialog_t(CCallbackInternal_OnHTML_FileOpenDialog_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_OnHTML_FileOpenDialog_t m_steamcallback_OnHTML_FileOpenDialog_t; /* 608 16 */
	/* sbox/steam/steamcallbacks.h:86 */
	void OnHTML_FileOpenDialog_t(CSteamEngine* , HTML_FileOpenDialog_t* );
	/* sbox/steam/steamcallbacks.h:87 */
	struct CCallbackInternal_OnHTML_NewWindow_t : CCallbackImpl<32> {
		/* class CCallbackImpl<32> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:87 */
		void CCallbackInternal_OnHTML_NewWindow_t(CCallbackInternal_OnHTML_NewWindow_t* );
		/* sbox/steam/steamcallbacks.h:87 */
		void CCallbackInternal_OnHTML_NewWindow_t(CCallbackInternal_OnHTML_NewWindow_t* , const CCallbackInternal_OnHTML_NewWindow_t& );
		/* sbox/steam/steamcallbacks.h:87 */
		CCallbackInternal_OnHTML_NewWindow_t& operator=(CCallbackInternal_OnHTML_NewWindow_t* , const CCallbackInternal_OnHTML_NewWindow_t& );
	private:
		/* sbox/steam/steamcallbacks.h:87 */
		virtual void Run(CCallbackInternal_OnHTML_NewWindow_t* , void* );
		virtual void ~CCallbackInternal_OnHTML_NewWindow_t(CCallbackInternal_OnHTML_NewWindow_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_OnHTML_NewWindow_t m_steamcallback_OnHTML_NewWindow_t; /* 624 16 */
	/* sbox/steam/steamcallbacks.h:87 */
	void OnHTML_NewWindow_t(CSteamEngine* , HTML_NewWindow_t* );
	/* sbox/steam/steamcallbacks.h:88 */
	struct CCallbackInternal_OnHTML_SetCursor_t : CCallbackImpl<8> {
		/* class CCallbackImpl<8> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:88 */
		void CCallbackInternal_OnHTML_SetCursor_t(CCallbackInternal_OnHTML_SetCursor_t* );
		/* sbox/steam/steamcallbacks.h:88 */
		void CCallbackInternal_OnHTML_SetCursor_t(CCallbackInternal_OnHTML_SetCursor_t* , const CCallbackInternal_OnHTML_SetCursor_t& );
		/* sbox/steam/steamcallbacks.h:88 */
		CCallbackInternal_OnHTML_SetCursor_t& operator=(CCallbackInternal_OnHTML_SetCursor_t* , const CCallbackInternal_OnHTML_SetCursor_t& );
	private:
		/* sbox/steam/steamcallbacks.h:88 */
		virtual void Run(CCallbackInternal_OnHTML_SetCursor_t* , void* );
		virtual void ~CCallbackInternal_OnHTML_SetCursor_t(CCallbackInternal_OnHTML_SetCursor_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_OnHTML_SetCursor_t m_steamcallback_OnHTML_SetCursor_t; /* 640 16 */
	/* sbox/steam/steamcallbacks.h:88 */
	void OnHTML_SetCursor_t(CSteamEngine* , HTML_SetCursor_t* );
	/* sbox/steam/steamcallbacks.h:89 */
	struct CCallbackInternal_OnHTML_StatusText_t : CCallbackImpl<12> {
		/* class CCallbackImpl<12> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:89 */
		void CCallbackInternal_OnHTML_StatusText_t(CCallbackInternal_OnHTML_StatusText_t* );
		/* sbox/steam/steamcallbacks.h:89 */
		void CCallbackInternal_OnHTML_StatusText_t(CCallbackInternal_OnHTML_StatusText_t* , const CCallbackInternal_OnHTML_StatusText_t& );
		/* sbox/steam/steamcallbacks.h:89 */
		CCallbackInternal_OnHTML_StatusText_t& operator=(CCallbackInternal_OnHTML_StatusText_t* , const CCallbackInternal_OnHTML_StatusText_t& );
	private:
		/* sbox/steam/steamcallbacks.h:89 */
		virtual void Run(CCallbackInternal_OnHTML_StatusText_t* , void* );
		virtual void ~CCallbackInternal_OnHTML_StatusText_t(CCallbackInternal_OnHTML_StatusText_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_OnHTML_StatusText_t m_steamcallback_OnHTML_StatusText_t; /* 656 16 */
	/* sbox/steam/steamcallbacks.h:89 */
	void OnHTML_StatusText_t(CSteamEngine* , HTML_StatusText_t* );
	/* sbox/steam/steamcallbacks.h:90 */
	struct CCallbackInternal_OnHTML_ShowToolTip_t : CCallbackImpl<12> {
		/* class CCallbackImpl<12> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:90 */
		void CCallbackInternal_OnHTML_ShowToolTip_t(CCallbackInternal_OnHTML_ShowToolTip_t* );
		/* sbox/steam/steamcallbacks.h:90 */
		void CCallbackInternal_OnHTML_ShowToolTip_t(CCallbackInternal_OnHTML_ShowToolTip_t* , const CCallbackInternal_OnHTML_ShowToolTip_t& );
		/* sbox/steam/steamcallbacks.h:90 */
		CCallbackInternal_OnHTML_ShowToolTip_t& operator=(CCallbackInternal_OnHTML_ShowToolTip_t* , const CCallbackInternal_OnHTML_ShowToolTip_t& );
	private:
		/* sbox/steam/steamcallbacks.h:90 */
		virtual void Run(CCallbackInternal_OnHTML_ShowToolTip_t* , void* );
		virtual void ~CCallbackInternal_OnHTML_ShowToolTip_t(CCallbackInternal_OnHTML_ShowToolTip_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_OnHTML_ShowToolTip_t m_steamcallback_OnHTML_ShowToolTip_t; /* 672 16 */
	/* sbox/steam/steamcallbacks.h:90 */
	void OnHTML_ShowToolTip_t(CSteamEngine* , HTML_ShowToolTip_t* );
	/* sbox/steam/steamcallbacks.h:91 */
	struct CCallbackInternal_OnHTML_UpdateToolTip_t : CCallbackImpl<12> {
		/* class CCallbackImpl<12> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:91 */
		void CCallbackInternal_OnHTML_UpdateToolTip_t(CCallbackInternal_OnHTML_UpdateToolTip_t* );
		/* sbox/steam/steamcallbacks.h:91 */
		void CCallbackInternal_OnHTML_UpdateToolTip_t(CCallbackInternal_OnHTML_UpdateToolTip_t* , const CCallbackInternal_OnHTML_UpdateToolTip_t& );
		/* sbox/steam/steamcallbacks.h:91 */
		CCallbackInternal_OnHTML_UpdateToolTip_t& operator=(CCallbackInternal_OnHTML_UpdateToolTip_t* , const CCallbackInternal_OnHTML_UpdateToolTip_t& );
	private:
		/* sbox/steam/steamcallbacks.h:91 */
		virtual void Run(CCallbackInternal_OnHTML_UpdateToolTip_t* , void* );
		virtual void ~CCallbackInternal_OnHTML_UpdateToolTip_t(CCallbackInternal_OnHTML_UpdateToolTip_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_OnHTML_UpdateToolTip_t m_steamcallback_OnHTML_UpdateToolTip_t; /* 688 16 */
	/* sbox/steam/steamcallbacks.h:91 */
	void OnHTML_UpdateToolTip_t(CSteamEngine* , HTML_UpdateToolTip_t* );
	/* sbox/steam/steamcallbacks.h:92 */
	struct CCallbackInternal_OnHTML_HideToolTip_t : CCallbackImpl<4> {
		/* class CCallbackImpl<4> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:92 */
		void CCallbackInternal_OnHTML_HideToolTip_t(CCallbackInternal_OnHTML_HideToolTip_t* );
		/* sbox/steam/steamcallbacks.h:92 */
		void CCallbackInternal_OnHTML_HideToolTip_t(CCallbackInternal_OnHTML_HideToolTip_t* , const CCallbackInternal_OnHTML_HideToolTip_t& );
		/* sbox/steam/steamcallbacks.h:92 */
		CCallbackInternal_OnHTML_HideToolTip_t& operator=(CCallbackInternal_OnHTML_HideToolTip_t* , const CCallbackInternal_OnHTML_HideToolTip_t& );
	private:
		/* sbox/steam/steamcallbacks.h:92 */
		virtual void Run(CCallbackInternal_OnHTML_HideToolTip_t* , void* );
		virtual void ~CCallbackInternal_OnHTML_HideToolTip_t(CCallbackInternal_OnHTML_HideToolTip_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_OnHTML_HideToolTip_t m_steamcallback_OnHTML_HideToolTip_t; /* 704 16 */
	/* sbox/steam/steamcallbacks.h:92 */
	void OnHTML_HideToolTip_t(CSteamEngine* , HTML_HideToolTip_t* );
	/* sbox/steam/steamcallbacks.h:93 */
	struct CCallbackInternal_OnHTML_BrowserRestarted_t : CCallbackImpl<8> {
		/* class CCallbackImpl<8> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:93 */
		void CCallbackInternal_OnHTML_BrowserRestarted_t(CCallbackInternal_OnHTML_BrowserRestarted_t* );
		/* sbox/steam/steamcallbacks.h:93 */
		void CCallbackInternal_OnHTML_BrowserRestarted_t(CCallbackInternal_OnHTML_BrowserRestarted_t* , const CCallbackInternal_OnHTML_BrowserRestarted_t& );
		/* sbox/steam/steamcallbacks.h:93 */
		CCallbackInternal_OnHTML_BrowserRestarted_t& operator=(CCallbackInternal_OnHTML_BrowserRestarted_t* , const CCallbackInternal_OnHTML_BrowserRestarted_t& );
	private:
		/* sbox/steam/steamcallbacks.h:93 */
		virtual void Run(CCallbackInternal_OnHTML_BrowserRestarted_t* , void* );
		virtual void ~CCallbackInternal_OnHTML_BrowserRestarted_t(CCallbackInternal_OnHTML_BrowserRestarted_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_OnHTML_BrowserRestarted_t m_steamcallback_OnHTML_BrowserRestarted_t; /* 720 16 */
	/* sbox/steam/steamcallbacks.h:93 */
	void OnHTML_BrowserRestarted_t(CSteamEngine* , HTML_BrowserRestarted_t* );
	/* sbox/steam/steamcallbacks.h:95 */
	struct CCallbackInternal_OnGetTicketForWebApiResponse : CCallbackImpl<2572> {
		/* class CCallbackImpl<2572> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:95 */
		void CCallbackInternal_OnGetTicketForWebApiResponse(CCallbackInternal_OnGetTicketForWebApiResponse* );
		/* sbox/steam/steamcallbacks.h:95 */
		void CCallbackInternal_OnGetTicketForWebApiResponse(CCallbackInternal_OnGetTicketForWebApiResponse* , const CCallbackInternal_OnGetTicketForWebApiResponse& );
		/* sbox/steam/steamcallbacks.h:95 */
		CCallbackInternal_OnGetTicketForWebApiResponse& operator=(CCallbackInternal_OnGetTicketForWebApiResponse* , const CCallbackInternal_OnGetTicketForWebApiResponse& );
	private:
		/* sbox/steam/steamcallbacks.h:95 */
		virtual void Run(CCallbackInternal_OnGetTicketForWebApiResponse* , void* );
		virtual void ~CCallbackInternal_OnGetTicketForWebApiResponse(CCallbackInternal_OnGetTicketForWebApiResponse* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_OnGetTicketForWebApiResponse m_steamcallback_OnGetTicketForWebApiResponse; /* 736 16 */
	/* sbox/steam/steamcallbacks.h:95 */
	void OnGetTicketForWebApiResponse(CSteamEngine* , GetTicketForWebApiResponse_t* );
	/* sbox/steam/steamcallbacks.h:100 */
	struct CCallbackInternal_OnLobbyInvite : CCallbackImpl<24> {
		/* class CCallbackImpl<24> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:100 */
		void CCallbackInternal_OnLobbyInvite(CCallbackInternal_OnLobbyInvite* );
		/* sbox/steam/steamcallbacks.h:100 */
		void CCallbackInternal_OnLobbyInvite(CCallbackInternal_OnLobbyInvite* , const CCallbackInternal_OnLobbyInvite& );
		/* sbox/steam/steamcallbacks.h:100 */
		CCallbackInternal_OnLobbyInvite& operator=(CCallbackInternal_OnLobbyInvite* , const CCallbackInternal_OnLobbyInvite& );
	private:
		/* sbox/steam/steamcallbacks.h:100 */
		virtual void Run(CCallbackInternal_OnLobbyInvite* , void* );
		virtual void ~CCallbackInternal_OnLobbyInvite(CCallbackInternal_OnLobbyInvite* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_OnLobbyInvite m_steamcallback_OnLobbyInvite; /* 752 16 */
	/* sbox/steam/steamcallbacks.h:100 */
	void OnLobbyInvite(CSteamEngine* , LobbyInvite_t* );
	/* sbox/steam/steamcallbacks.h:107 */
	struct CCallbackInternal_LobbyChatUpdate : CCallbackImpl<28> {
		/* class CCallbackImpl<28> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:107 */
		void CCallbackInternal_LobbyChatUpdate(CCallbackInternal_LobbyChatUpdate* );
		/* sbox/steam/steamcallbacks.h:107 */
		void CCallbackInternal_LobbyChatUpdate(CCallbackInternal_LobbyChatUpdate* , const CCallbackInternal_LobbyChatUpdate& );
		/* sbox/steam/steamcallbacks.h:107 */
		CCallbackInternal_LobbyChatUpdate& operator=(CCallbackInternal_LobbyChatUpdate* , const CCallbackInternal_LobbyChatUpdate& );
	private:
		/* sbox/steam/steamcallbacks.h:107 */
		virtual void Run(CCallbackInternal_LobbyChatUpdate* , void* );
		virtual void ~CCallbackInternal_LobbyChatUpdate(CCallbackInternal_LobbyChatUpdate* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_LobbyChatUpdate m_steamcallback_LobbyChatUpdate; /* 768 16 */
	/* sbox/steam/steamcallbacks.h:107 */
	void LobbyChatUpdate(CSteamEngine* , LobbyChatUpdate_t* );
	/* sbox/steam/steamcallbacks.h:123 */
	struct CCallbackInternal_LobbyEnter : CCallbackImpl<20> {
		/* class CCallbackImpl<20> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:123 */
		void CCallbackInternal_LobbyEnter(CCallbackInternal_LobbyEnter* );
		/* sbox/steam/steamcallbacks.h:123 */
		void CCallbackInternal_LobbyEnter(CCallbackInternal_LobbyEnter* , const CCallbackInternal_LobbyEnter& );
		/* sbox/steam/steamcallbacks.h:123 */
		CCallbackInternal_LobbyEnter& operator=(CCallbackInternal_LobbyEnter* , const CCallbackInternal_LobbyEnter& );
	private:
		/* sbox/steam/steamcallbacks.h:123 */
		virtual void Run(CCallbackInternal_LobbyEnter* , void* );
		virtual void ~CCallbackInternal_LobbyEnter(CCallbackInternal_LobbyEnter* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_LobbyEnter m_steamcallback_LobbyEnter; /* 784 16 */
	/* sbox/steam/steamcallbacks.h:123 */
	void LobbyEnter(CSteamEngine* , LobbyEnter_t* );
	/* sbox/steam/steamcallbacks.h:129 */
	struct CCallbackInternal_LobbyCreated : CCallbackImpl<12> {
		/* class CCallbackImpl<12> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:129 */
		void CCallbackInternal_LobbyCreated(CCallbackInternal_LobbyCreated* );
		/* sbox/steam/steamcallbacks.h:129 */
		void CCallbackInternal_LobbyCreated(CCallbackInternal_LobbyCreated* , const CCallbackInternal_LobbyCreated& );
		/* sbox/steam/steamcallbacks.h:129 */
		CCallbackInternal_LobbyCreated& operator=(CCallbackInternal_LobbyCreated* , const CCallbackInternal_LobbyCreated& );
	private:
		/* sbox/steam/steamcallbacks.h:129 */
		virtual void Run(CCallbackInternal_LobbyCreated* , void* );
		virtual void ~CCallbackInternal_LobbyCreated(CCallbackInternal_LobbyCreated* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_LobbyCreated m_steamcallback_LobbyCreated; /* 800 16 */
	/* sbox/steam/steamcallbacks.h:129 */
	void LobbyCreated(CSteamEngine* , LobbyCreated_t* );
	/* sbox/steam/steamcallbacks.h:135 */
	struct CCallbackInternal_LobbyGameCreated : CCallbackImpl<24> {
		/* class CCallbackImpl<24> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:135 */
		void CCallbackInternal_LobbyGameCreated(CCallbackInternal_LobbyGameCreated* );
		/* sbox/steam/steamcallbacks.h:135 */
		void CCallbackInternal_LobbyGameCreated(CCallbackInternal_LobbyGameCreated* , const CCallbackInternal_LobbyGameCreated& );
		/* sbox/steam/steamcallbacks.h:135 */
		CCallbackInternal_LobbyGameCreated& operator=(CCallbackInternal_LobbyGameCreated* , const CCallbackInternal_LobbyGameCreated& );
	private:
		/* sbox/steam/steamcallbacks.h:135 */
		virtual void Run(CCallbackInternal_LobbyGameCreated* , void* );
		virtual void ~CCallbackInternal_LobbyGameCreated(CCallbackInternal_LobbyGameCreated* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_LobbyGameCreated m_steamcallback_LobbyGameCreated; /* 816 16 */
	/* sbox/steam/steamcallbacks.h:135 */
	void LobbyGameCreated(CSteamEngine* , LobbyGameCreated_t* );
	/* sbox/steam/steamcallbacks.h:140 */
	struct CCallbackInternal_LobbyDataUpdate : CCallbackImpl<20> {
		/* class CCallbackImpl<20> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:140 */
		void CCallbackInternal_LobbyDataUpdate(CCallbackInternal_LobbyDataUpdate* );
		/* sbox/steam/steamcallbacks.h:140 */
		void CCallbackInternal_LobbyDataUpdate(CCallbackInternal_LobbyDataUpdate* , const CCallbackInternal_LobbyDataUpdate& );
		/* sbox/steam/steamcallbacks.h:140 */
		CCallbackInternal_LobbyDataUpdate& operator=(CCallbackInternal_LobbyDataUpdate* , const CCallbackInternal_LobbyDataUpdate& );
	private:
		/* sbox/steam/steamcallbacks.h:140 */
		virtual void Run(CCallbackInternal_LobbyDataUpdate* , void* );
		virtual void ~CCallbackInternal_LobbyDataUpdate(CCallbackInternal_LobbyDataUpdate* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_LobbyDataUpdate m_steamcallback_LobbyDataUpdate; /* 832 16 */
	/* sbox/steam/steamcallbacks.h:140 */
	void LobbyDataUpdate(CSteamEngine* , LobbyDataUpdate_t* );
	/* sbox/steam/steamcallbacks.h:147 */
	struct CCallbackInternal_SteamNetworkingMessagesSessionRequest : CCallbackImpl<136> {
		/* class CCallbackImpl<136> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:147 */
		void CCallbackInternal_SteamNetworkingMessagesSessionRequest(CCallbackInternal_SteamNetworkingMessagesSessionRequest* );
		/* sbox/steam/steamcallbacks.h:147 */
		void CCallbackInternal_SteamNetworkingMessagesSessionRequest(CCallbackInternal_SteamNetworkingMessagesSessionRequest* , const CCallbackInternal_SteamNetworkingMessagesSessionRequest& );
		/* sbox/steam/steamcallbacks.h:147 */
		CCallbackInternal_SteamNetworkingMessagesSessionRequest& operator=(CCallbackInternal_SteamNetworkingMessagesSessionRequest* , const CCallbackInternal_SteamNetworkingMessagesSessionRequest& );
	private:
		/* sbox/steam/steamcallbacks.h:147 */
		virtual void Run(CCallbackInternal_SteamNetworkingMessagesSessionRequest* , void* );
		virtual void ~CCallbackInternal_SteamNetworkingMessagesSessionRequest(CCallbackInternal_SteamNetworkingMessagesSessionRequest* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_SteamNetworkingMessagesSessionRequest m_steamcallback_SteamNetworkingMessagesSessionRequest; /* 848 16 */
	/* sbox/steam/steamcallbacks.h:147 */
	void SteamNetworkingMessagesSessionRequest(CSteamEngine* , SteamNetworkingMessagesSessionRequest_t* );
	/* sbox/steam/steamcallbacks.h:162 */
	struct CCallbackInternal_SteamNetworkingMessagesSessionFailed : CCallbackImpl<696> {
		/* class CCallbackImpl<696> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:162 */
		void CCallbackInternal_SteamNetworkingMessagesSessionFailed(CCallbackInternal_SteamNetworkingMessagesSessionFailed* );
		/* sbox/steam/steamcallbacks.h:162 */
		void CCallbackInternal_SteamNetworkingMessagesSessionFailed(CCallbackInternal_SteamNetworkingMessagesSessionFailed* , const CCallbackInternal_SteamNetworkingMessagesSessionFailed& );
		/* sbox/steam/steamcallbacks.h:162 */
		CCallbackInternal_SteamNetworkingMessagesSessionFailed& operator=(CCallbackInternal_SteamNetworkingMessagesSessionFailed* , const CCallbackInternal_SteamNetworkingMessagesSessionFailed& );
	private:
		/* sbox/steam/steamcallbacks.h:162 */
		virtual void Run(CCallbackInternal_SteamNetworkingMessagesSessionFailed* , void* );
		virtual void ~CCallbackInternal_SteamNetworkingMessagesSessionFailed(CCallbackInternal_SteamNetworkingMessagesSessionFailed* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_SteamNetworkingMessagesSessionFailed m_steamcallback_SteamNetworkingMessagesSessionFailed; /* 864 16 */
	/* sbox/steam/steamcallbacks.h:162 */
	void SteamNetworkingMessagesSessionFailed(CSteamEngine* , SteamNetworkingMessagesSessionFailed_t* );
	/* sbox/steam/steamcallbacks.h:172 */
	struct CCallbackInternal_LobbyChatMsg : CCallbackImpl<24> {
		/* class CCallbackImpl<24> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:172 */
		void CCallbackInternal_LobbyChatMsg(CCallbackInternal_LobbyChatMsg* );
		/* sbox/steam/steamcallbacks.h:172 */
		void CCallbackInternal_LobbyChatMsg(CCallbackInternal_LobbyChatMsg* , const CCallbackInternal_LobbyChatMsg& );
		/* sbox/steam/steamcallbacks.h:172 */
		CCallbackInternal_LobbyChatMsg& operator=(CCallbackInternal_LobbyChatMsg* , const CCallbackInternal_LobbyChatMsg& );
	private:
		/* sbox/steam/steamcallbacks.h:172 */
		virtual void Run(CCallbackInternal_LobbyChatMsg* , void* );
		virtual void ~CCallbackInternal_LobbyChatMsg(CCallbackInternal_LobbyChatMsg* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_LobbyChatMsg m_steamcallback_LobbyChatMsg; /* 880 16 */
	/* sbox/steam/steamcallbacks.h:172 */
	void LobbyChatMsg(CSteamEngine* , LobbyChatMsg_t* );
	/* sbox/steam/steamcallbacks.h:183 */
	struct CCallbackInternal_SteamInventoryDefinitionUpdate : CCallbackImpl<1> {
		/* class CCallbackImpl<1> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:183 */
		void CCallbackInternal_SteamInventoryDefinitionUpdate(CCallbackInternal_SteamInventoryDefinitionUpdate* );
		/* sbox/steam/steamcallbacks.h:183 */
		void CCallbackInternal_SteamInventoryDefinitionUpdate(CCallbackInternal_SteamInventoryDefinitionUpdate* , const CCallbackInternal_SteamInventoryDefinitionUpdate& );
		/* sbox/steam/steamcallbacks.h:183 */
		CCallbackInternal_SteamInventoryDefinitionUpdate& operator=(CCallbackInternal_SteamInventoryDefinitionUpdate* , const CCallbackInternal_SteamInventoryDefinitionUpdate& );
	private:
		/* sbox/steam/steamcallbacks.h:183 */
		virtual void Run(CCallbackInternal_SteamInventoryDefinitionUpdate* , void* );
		virtual void ~CCallbackInternal_SteamInventoryDefinitionUpdate(CCallbackInternal_SteamInventoryDefinitionUpdate* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_SteamInventoryDefinitionUpdate m_steamcallback_SteamInventoryDefinitionUpdate; /* 896 16 */
	/* sbox/steam/steamcallbacks.h:183 */
	void SteamInventoryDefinitionUpdate(CSteamEngine* , SteamInventoryDefinitionUpdate_t* );
	void CSteamEngine(class CSteamEngine *); /* linkage=_ZN12CSteamEngineC4Ev */
};

// <0014853E> sbox/steam/steamcallbacks.h:9
void CSteamEngine::CSteamEngine()
{
} /* size: 0 */

// <00148525> sbox/steam/steamcallbacks.h:9
inline void CSteamEngine::CSteamEngine()
{
} /* size: 0 */

// <0014CFC0> sbox/steam/steamcallbacks.h:32
// function call: 1
void CCallbackInternal_OnSteamAPICallCompleted_t::~CCallbackInternal_OnSteamAPICallCompleted_t()
{
	CCallbackImpl<16>::~CCallbackImpl(); // 32
} /* size: 29, inline expansions: 1 (21 bytes) */

// <0014CEF1> sbox/steam/steamcallbacks.h:32
// function calls: 2
void CCallbackInternal_OnSteamAPICallCompleted_t::~CCallbackInternal_OnSteamAPICallCompleted_t()
{
	CCallbackImpl<16>::~CCallbackImpl(); // 32
	CCallbackInternal_OnSteamAPICallCompleted_t::~CCallbackInternal_OnSteamAPICallCompleted_t(); // 32
} /* size: 64, inline expansions: 2 (58 bytes) */

// <0014CED5> sbox/steam/steamcallbacks.h:32
inline void CCallbackInternal_OnSteamAPICallCompleted_t::~CCallbackInternal_OnSteamAPICallCompleted_t()
{
} /* size: 0 */

// <001484DB> sbox/steam/steamcallbacks.h:32
void CCallbackInternal_OnSteamAPICallCompleted_t::CCallbackInternal_OnSteamAPICallCompleted_t()
{
} /* size: 0 */

// <001484C2> sbox/steam/steamcallbacks.h:32
inline void CCallbackInternal_OnSteamAPICallCompleted_t::CCallbackInternal_OnSteamAPICallCompleted_t()
{
} /* size: 0 */

// <00148402> sbox/steam/steamcallbacks.h:32
// variable: 1
// function call: 1
void CCallbackInternal_OnSteamAPICallCompleted_t::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 32
	CSteamEngine::OnSteamAPICallCompleted_t(
					SteamAPICallCompleted_t* pParam);  // 32
} /* size: 21, variables: 1, inline expansions: 1 (17 bytes) */

// <001483DD> sbox/steam/steamcallbacks.h:32
inline void CSteamEngine::OnSteamAPICallCompleted_t(SteamAPICallCompleted_t* pParam)
{
} /* size: 0 */

// <0014CE70> sbox/steam/steamcallbacks.h:37
// function call: 1
void CCallbackInternal_OnPersonaStateChange_t::~CCallbackInternal_OnPersonaStateChange_t()
{
	CCallbackImpl<12>::~CCallbackImpl(); // 37
} /* size: 29, inline expansions: 1 (21 bytes) */

// <0014CDA1> sbox/steam/steamcallbacks.h:37
// function calls: 2
void CCallbackInternal_OnPersonaStateChange_t::~CCallbackInternal_OnPersonaStateChange_t()
{
	CCallbackImpl<12>::~CCallbackImpl(); // 37
	CCallbackInternal_OnPersonaStateChange_t::~CCallbackInternal_OnPersonaStateChange_t(); // 37
} /* size: 64, inline expansions: 2 (58 bytes) */

// <0014CD85> sbox/steam/steamcallbacks.h:37
inline void CCallbackInternal_OnPersonaStateChange_t::~CCallbackInternal_OnPersonaStateChange_t()
{
} /* size: 0 */

// <00148393> sbox/steam/steamcallbacks.h:37
void CCallbackInternal_OnPersonaStateChange_t::CCallbackInternal_OnPersonaStateChange_t()
{
} /* size: 0 */

// <0014837A> sbox/steam/steamcallbacks.h:37
inline void CCallbackInternal_OnPersonaStateChange_t::CCallbackInternal_OnPersonaStateChange_t()
{
} /* size: 0 */

// <001482BA> sbox/steam/steamcallbacks.h:37
// variable: 1
// function call: 1
void CCallbackInternal_OnPersonaStateChange_t::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 37
	CSteamEngine::OnPersonaStateChange_t(
				PersonaStateChange_t* pParam);  // 37
} /* size: 21, variables: 1, inline expansions: 1 (17 bytes) */

// <00148295> sbox/steam/steamcallbacks.h:37
inline void CSteamEngine::OnPersonaStateChange_t(PersonaStateChange_t* pParam)
{
} /* size: 0 */

// <0015EC73> sbox/steam/steamcallbacks.h:38
// variable: 1
// function call: 1
void CCallbackInternal_OnGameRichPresenceJoinRequested_t::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 38
	CSteamEngine::OnGameRichPresenceJoinRequested_t(
						GameRichPresenceJoinRequested_t* pParam);  // 38
} /* size: 21, variables: 1, inline expansions: 1 (17 bytes) */

// <0014CD20> sbox/steam/steamcallbacks.h:38
// function call: 1
void CCallbackInternal_OnGameRichPresenceJoinRequested_t::~CCallbackInternal_OnGameRichPresenceJoinRequested_t()
{
	CCallbackImpl<264>::~CCallbackImpl(); // 38
} /* size: 29, inline expansions: 1 (21 bytes) */

// <0014CC51> sbox/steam/steamcallbacks.h:38
// function calls: 2
void CCallbackInternal_OnGameRichPresenceJoinRequested_t::~CCallbackInternal_OnGameRichPresenceJoinRequested_t()
{
	CCallbackImpl<264>::~CCallbackImpl(); // 38
	CCallbackInternal_OnGameRichPresenceJoinRequested_t::~CCallbackInternal_OnGameRichPresenceJoinRequested_t(); // 38
} /* size: 64, inline expansions: 2 (58 bytes) */

// <0014CC35> sbox/steam/steamcallbacks.h:38
inline void CCallbackInternal_OnGameRichPresenceJoinRequested_t::~CCallbackInternal_OnGameRichPresenceJoinRequested_t()
{
} /* size: 0 */

// <0014824B> sbox/steam/steamcallbacks.h:38
void CCallbackInternal_OnGameRichPresenceJoinRequested_t::CCallbackInternal_OnGameRichPresenceJoinRequested_t()
{
} /* size: 0 */

// <00148232> sbox/steam/steamcallbacks.h:38
inline void CCallbackInternal_OnGameRichPresenceJoinRequested_t::CCallbackInternal_OnGameRichPresenceJoinRequested_t()
{
} /* size: 0 */

// <00148200> sbox/steam/steamcallbacks.h:38
// variable: 1
inline void CCallbackInternal_OnGameRichPresenceJoinRequested_t::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 38
} /* size: 0, variables: 1 */

// <001481DB> sbox/steam/steamcallbacks.h:38
inline void CSteamEngine::OnGameRichPresenceJoinRequested_t(GameRichPresenceJoinRequested_t* pParam)
{
} /* size: 0 */

// <0014CBD0> sbox/steam/steamcallbacks.h:39
// function call: 1
void CCallbackInternal_OnGameConnectedFriendChatMsg_t::~CCallbackInternal_OnGameConnectedFriendChatMsg_t()
{
	CCallbackImpl<12>::~CCallbackImpl(); // 39
} /* size: 29, inline expansions: 1 (21 bytes) */

// <0014CB01> sbox/steam/steamcallbacks.h:39
// function calls: 2
void CCallbackInternal_OnGameConnectedFriendChatMsg_t::~CCallbackInternal_OnGameConnectedFriendChatMsg_t()
{
	CCallbackImpl<12>::~CCallbackImpl(); // 39
	CCallbackInternal_OnGameConnectedFriendChatMsg_t::~CCallbackInternal_OnGameConnectedFriendChatMsg_t(); // 39
} /* size: 64, inline expansions: 2 (58 bytes) */

// <0014CAE5> sbox/steam/steamcallbacks.h:39
inline void CCallbackInternal_OnGameConnectedFriendChatMsg_t::~CCallbackInternal_OnGameConnectedFriendChatMsg_t()
{
} /* size: 0 */

// <001481C4> sbox/steam/steamcallbacks.h:39
void CCallbackInternal_OnGameConnectedFriendChatMsg_t::CCallbackInternal_OnGameConnectedFriendChatMsg_t()
{
} /* size: 0 */

// <001481AB> sbox/steam/steamcallbacks.h:39
inline void CCallbackInternal_OnGameConnectedFriendChatMsg_t::CCallbackInternal_OnGameConnectedFriendChatMsg_t()
{
} /* size: 0 */

// <001480EB> sbox/steam/steamcallbacks.h:39
// variable: 1
// function call: 1
void CCallbackInternal_OnGameConnectedFriendChatMsg_t::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 39
	CSteamEngine::OnGameConnectedFriendChatMsg_t(
					GameConnectedFriendChatMsg_t* pParam);  // 39
} /* size: 21, variables: 1, inline expansions: 1 (17 bytes) */

// <001480C6> sbox/steam/steamcallbacks.h:39
inline void CSteamEngine::OnGameConnectedFriendChatMsg_t(GameConnectedFriendChatMsg_t* pParam)
{
} /* size: 0 */

// <0014CA80> sbox/steam/steamcallbacks.h:40
// function call: 1
void CCallbackInternal_OnGameConnectedClanChatMsg_t::~CCallbackInternal_OnGameConnectedClanChatMsg_t()
{
	CCallbackImpl<20>::~CCallbackImpl(); // 40
} /* size: 29, inline expansions: 1 (21 bytes) */

// <0014C9B1> sbox/steam/steamcallbacks.h:40
// function calls: 2
void CCallbackInternal_OnGameConnectedClanChatMsg_t::~CCallbackInternal_OnGameConnectedClanChatMsg_t()
{
	CCallbackImpl<20>::~CCallbackImpl(); // 40
	CCallbackInternal_OnGameConnectedClanChatMsg_t::~CCallbackInternal_OnGameConnectedClanChatMsg_t(); // 40
} /* size: 64, inline expansions: 2 (58 bytes) */

// <0014C995> sbox/steam/steamcallbacks.h:40
inline void CCallbackInternal_OnGameConnectedClanChatMsg_t::~CCallbackInternal_OnGameConnectedClanChatMsg_t()
{
} /* size: 0 */

// <0014807C> sbox/steam/steamcallbacks.h:40
void CCallbackInternal_OnGameConnectedClanChatMsg_t::CCallbackInternal_OnGameConnectedClanChatMsg_t()
{
} /* size: 0 */

// <00148063> sbox/steam/steamcallbacks.h:40
inline void CCallbackInternal_OnGameConnectedClanChatMsg_t::CCallbackInternal_OnGameConnectedClanChatMsg_t()
{
} /* size: 0 */

// <00147FA3> sbox/steam/steamcallbacks.h:40
// variable: 1
// function call: 1
void CCallbackInternal_OnGameConnectedClanChatMsg_t::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 40
	CSteamEngine::OnGameConnectedClanChatMsg_t(
					GameConnectedClanChatMsg_t* pParam);  // 40
} /* size: 21, variables: 1, inline expansions: 1 (17 bytes) */

// <00147F7E> sbox/steam/steamcallbacks.h:40
inline void CSteamEngine::OnGameConnectedClanChatMsg_t(GameConnectedClanChatMsg_t* pParam)
{
} /* size: 0 */

// <0014C930> sbox/steam/steamcallbacks.h:41
// function call: 1
void CCallbackInternal_OnGameOverlayActivated_t::~CCallbackInternal_OnGameOverlayActivated_t()
{
	CCallbackImpl<12>::~CCallbackImpl(); // 41
} /* size: 29, inline expansions: 1 (21 bytes) */

// <0014C861> sbox/steam/steamcallbacks.h:41
// function calls: 2
void CCallbackInternal_OnGameOverlayActivated_t::~CCallbackInternal_OnGameOverlayActivated_t()
{
	CCallbackImpl<12>::~CCallbackImpl(); // 41
	CCallbackInternal_OnGameOverlayActivated_t::~CCallbackInternal_OnGameOverlayActivated_t(); // 41
} /* size: 64, inline expansions: 2 (58 bytes) */

// <0014C845> sbox/steam/steamcallbacks.h:41
inline void CCallbackInternal_OnGameOverlayActivated_t::~CCallbackInternal_OnGameOverlayActivated_t()
{
} /* size: 0 */

// <00147F67> sbox/steam/steamcallbacks.h:41
void CCallbackInternal_OnGameOverlayActivated_t::CCallbackInternal_OnGameOverlayActivated_t()
{
} /* size: 0 */

// <00147F4E> sbox/steam/steamcallbacks.h:41
inline void CCallbackInternal_OnGameOverlayActivated_t::CCallbackInternal_OnGameOverlayActivated_t()
{
} /* size: 0 */

// <00147E8E> sbox/steam/steamcallbacks.h:41
// variable: 1
// function call: 1
void CCallbackInternal_OnGameOverlayActivated_t::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 41
	CSteamEngine::OnGameOverlayActivated_t(
				GameOverlayActivated_t* pParam);  // 41
} /* size: 21, variables: 1, inline expansions: 1 (17 bytes) */

// <00147E69> sbox/steam/steamcallbacks.h:41
inline void CSteamEngine::OnGameOverlayActivated_t(GameOverlayActivated_t* pParam)
{
} /* size: 0 */

// <0015ED21> sbox/steam/steamcallbacks.h:42
// variable: 1
// function call: 1
void CCallbackInternal_OnGameServerChangeRequested_t::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 42
	CSteamEngine::OnGameServerChangeRequested_t(
					GameServerChangeRequested_t* pParam);  // 42
} /* size: 21, variables: 1, inline expansions: 1 (17 bytes) */

// <0014C7E0> sbox/steam/steamcallbacks.h:42
// function call: 1
void CCallbackInternal_OnGameServerChangeRequested_t::~CCallbackInternal_OnGameServerChangeRequested_t()
{
	CCallbackImpl<128>::~CCallbackImpl(); // 42
} /* size: 29, inline expansions: 1 (21 bytes) */

// <0014C711> sbox/steam/steamcallbacks.h:42
// function calls: 2
void CCallbackInternal_OnGameServerChangeRequested_t::~CCallbackInternal_OnGameServerChangeRequested_t()
{
	CCallbackImpl<128>::~CCallbackImpl(); // 42
	CCallbackInternal_OnGameServerChangeRequested_t::~CCallbackInternal_OnGameServerChangeRequested_t(); // 42
} /* size: 64, inline expansions: 2 (58 bytes) */

// <0014C6F5> sbox/steam/steamcallbacks.h:42
inline void CCallbackInternal_OnGameServerChangeRequested_t::~CCallbackInternal_OnGameServerChangeRequested_t()
{
} /* size: 0 */

// <00147E1F> sbox/steam/steamcallbacks.h:42
void CCallbackInternal_OnGameServerChangeRequested_t::CCallbackInternal_OnGameServerChangeRequested_t()
{
} /* size: 0 */

// <00147E06> sbox/steam/steamcallbacks.h:42
inline void CCallbackInternal_OnGameServerChangeRequested_t::CCallbackInternal_OnGameServerChangeRequested_t()
{
} /* size: 0 */

// <00147DD4> sbox/steam/steamcallbacks.h:42
// variable: 1
inline void CCallbackInternal_OnGameServerChangeRequested_t::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 42
} /* size: 0, variables: 1 */

// <00147DAF> sbox/steam/steamcallbacks.h:42
inline void CSteamEngine::OnGameServerChangeRequested_t(GameServerChangeRequested_t* pParam)
{
} /* size: 0 */

// <0014C690> sbox/steam/steamcallbacks.h:43
// function call: 1
void CCallbackInternal_OnGameLobbyJoinRequested_t::~CCallbackInternal_OnGameLobbyJoinRequested_t()
{
	CCallbackImpl<16>::~CCallbackImpl(); // 43
} /* size: 29, inline expansions: 1 (21 bytes) */

// <0014C5C1> sbox/steam/steamcallbacks.h:43
// function calls: 2
void CCallbackInternal_OnGameLobbyJoinRequested_t::~CCallbackInternal_OnGameLobbyJoinRequested_t()
{
	CCallbackImpl<16>::~CCallbackImpl(); // 43
	CCallbackInternal_OnGameLobbyJoinRequested_t::~CCallbackInternal_OnGameLobbyJoinRequested_t(); // 43
} /* size: 64, inline expansions: 2 (58 bytes) */

// <0014C5A5> sbox/steam/steamcallbacks.h:43
inline void CCallbackInternal_OnGameLobbyJoinRequested_t::~CCallbackInternal_OnGameLobbyJoinRequested_t()
{
} /* size: 0 */

// <00147D98> sbox/steam/steamcallbacks.h:43
void CCallbackInternal_OnGameLobbyJoinRequested_t::CCallbackInternal_OnGameLobbyJoinRequested_t()
{
} /* size: 0 */

// <00147D7F> sbox/steam/steamcallbacks.h:43
inline void CCallbackInternal_OnGameLobbyJoinRequested_t::CCallbackInternal_OnGameLobbyJoinRequested_t()
{
} /* size: 0 */

// <00147CBF> sbox/steam/steamcallbacks.h:43
// variable: 1
// function call: 1
void CCallbackInternal_OnGameLobbyJoinRequested_t::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 43
	CSteamEngine::OnGameLobbyJoinRequested_t(
					GameLobbyJoinRequested_t* pParam);  // 43
} /* size: 21, variables: 1, inline expansions: 1 (17 bytes) */

// <00147C9A> sbox/steam/steamcallbacks.h:43
inline void CSteamEngine::OnGameLobbyJoinRequested_t(GameLobbyJoinRequested_t* pParam)
{
} /* size: 0 */

// <0014C540> sbox/steam/steamcallbacks.h:44
// function call: 1
void CCallbackInternal_OnFriendRichPresenceUpdate_t::~CCallbackInternal_OnFriendRichPresenceUpdate_t()
{
	CCallbackImpl<12>::~CCallbackImpl(); // 44
} /* size: 29, inline expansions: 1 (21 bytes) */

// <0014C471> sbox/steam/steamcallbacks.h:44
// function calls: 2
void CCallbackInternal_OnFriendRichPresenceUpdate_t::~CCallbackInternal_OnFriendRichPresenceUpdate_t()
{
	CCallbackImpl<12>::~CCallbackImpl(); // 44
	CCallbackInternal_OnFriendRichPresenceUpdate_t::~CCallbackInternal_OnFriendRichPresenceUpdate_t(); // 44
} /* size: 64, inline expansions: 2 (58 bytes) */

// <0014C455> sbox/steam/steamcallbacks.h:44
inline void CCallbackInternal_OnFriendRichPresenceUpdate_t::~CCallbackInternal_OnFriendRichPresenceUpdate_t()
{
} /* size: 0 */

// <00147C83> sbox/steam/steamcallbacks.h:44
void CCallbackInternal_OnFriendRichPresenceUpdate_t::CCallbackInternal_OnFriendRichPresenceUpdate_t()
{
} /* size: 0 */

// <00147C6A> sbox/steam/steamcallbacks.h:44
inline void CCallbackInternal_OnFriendRichPresenceUpdate_t::CCallbackInternal_OnFriendRichPresenceUpdate_t()
{
} /* size: 0 */

// <00147BAA> sbox/steam/steamcallbacks.h:44
// variable: 1
// function call: 1
void CCallbackInternal_OnFriendRichPresenceUpdate_t::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 44
	CSteamEngine::OnFriendRichPresenceUpdate_t(
					FriendRichPresenceUpdate_t* pParam);  // 44
} /* size: 21, variables: 1, inline expansions: 1 (17 bytes) */

// <00147B85> sbox/steam/steamcallbacks.h:44
inline void CSteamEngine::OnFriendRichPresenceUpdate_t(FriendRichPresenceUpdate_t* pParam)
{
} /* size: 0 */

// <0014C3F0> sbox/steam/steamcallbacks.h:49
// function call: 1
void CCallbackInternal_OnSteamServersConnected_t::~CCallbackInternal_OnSteamServersConnected_t()
{
	CCallbackImpl<1>::~CCallbackImpl(); // 49
} /* size: 29, inline expansions: 1 (21 bytes) */

// <0014C321> sbox/steam/steamcallbacks.h:49
// function calls: 2
void CCallbackInternal_OnSteamServersConnected_t::~CCallbackInternal_OnSteamServersConnected_t()
{
	CCallbackImpl<1>::~CCallbackImpl(); // 49
	CCallbackInternal_OnSteamServersConnected_t::~CCallbackInternal_OnSteamServersConnected_t(); // 49
} /* size: 64, inline expansions: 2 (58 bytes) */

// <0014C305> sbox/steam/steamcallbacks.h:49
inline void CCallbackInternal_OnSteamServersConnected_t::~CCallbackInternal_OnSteamServersConnected_t()
{
} /* size: 0 */

// <00147B3B> sbox/steam/steamcallbacks.h:49
void CCallbackInternal_OnSteamServersConnected_t::CCallbackInternal_OnSteamServersConnected_t()
{
} /* size: 0 */

// <00147B22> sbox/steam/steamcallbacks.h:49
inline void CCallbackInternal_OnSteamServersConnected_t::CCallbackInternal_OnSteamServersConnected_t()
{
} /* size: 0 */

// <00147A63> sbox/steam/steamcallbacks.h:49
// variable: 1
// function call: 1
void CCallbackInternal_OnSteamServersConnected_t::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 49
	CSteamEngine::OnSteamServersConnected_t(
					SteamServersConnected_t* pParam);  // 49
} /* size: 21, variables: 1, inline expansions: 1 (17 bytes) */

// <00147A3E> sbox/steam/steamcallbacks.h:49
inline void CSteamEngine::OnSteamServersConnected_t(SteamServersConnected_t* pParam)
{
} /* size: 0 */

// <0014C2A0> sbox/steam/steamcallbacks.h:50
// function call: 1
void CCallbackInternal_OnSteamServerConnectFailure_t::~CCallbackInternal_OnSteamServerConnectFailure_t()
{
	CCallbackImpl<8>::~CCallbackImpl(); // 50
} /* size: 29, inline expansions: 1 (21 bytes) */

// <0014C1D1> sbox/steam/steamcallbacks.h:50
// function calls: 2
void CCallbackInternal_OnSteamServerConnectFailure_t::~CCallbackInternal_OnSteamServerConnectFailure_t()
{
	CCallbackImpl<8>::~CCallbackImpl(); // 50
	CCallbackInternal_OnSteamServerConnectFailure_t::~CCallbackInternal_OnSteamServerConnectFailure_t(); // 50
} /* size: 64, inline expansions: 2 (58 bytes) */

// <0014C1B5> sbox/steam/steamcallbacks.h:50
inline void CCallbackInternal_OnSteamServerConnectFailure_t::~CCallbackInternal_OnSteamServerConnectFailure_t()
{
} /* size: 0 */

// <001479F4> sbox/steam/steamcallbacks.h:50
void CCallbackInternal_OnSteamServerConnectFailure_t::CCallbackInternal_OnSteamServerConnectFailure_t()
{
} /* size: 0 */

// <001479DB> sbox/steam/steamcallbacks.h:50
inline void CCallbackInternal_OnSteamServerConnectFailure_t::CCallbackInternal_OnSteamServerConnectFailure_t()
{
} /* size: 0 */

// <0014791C> sbox/steam/steamcallbacks.h:50
// variable: 1
// function call: 1
void CCallbackInternal_OnSteamServerConnectFailure_t::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 50
	CSteamEngine::OnSteamServerConnectFailure_t(
					SteamServerConnectFailure_t* pParam);  // 50
} /* size: 21, variables: 1, inline expansions: 1 (17 bytes) */

// <001478F7> sbox/steam/steamcallbacks.h:50
inline void CSteamEngine::OnSteamServerConnectFailure_t(SteamServerConnectFailure_t* pParam)
{
} /* size: 0 */

// <0014C150> sbox/steam/steamcallbacks.h:51
// function call: 1
void CCallbackInternal_OnSteamServersDisconnected_t::~CCallbackInternal_OnSteamServersDisconnected_t()
{
	CCallbackImpl<4>::~CCallbackImpl(); // 51
} /* size: 29, inline expansions: 1 (21 bytes) */

// <0014C081> sbox/steam/steamcallbacks.h:51
// function calls: 2
void CCallbackInternal_OnSteamServersDisconnected_t::~CCallbackInternal_OnSteamServersDisconnected_t()
{
	CCallbackImpl<4>::~CCallbackImpl(); // 51
	CCallbackInternal_OnSteamServersDisconnected_t::~CCallbackInternal_OnSteamServersDisconnected_t(); // 51
} /* size: 64, inline expansions: 2 (58 bytes) */

// <0014C065> sbox/steam/steamcallbacks.h:51
inline void CCallbackInternal_OnSteamServersDisconnected_t::~CCallbackInternal_OnSteamServersDisconnected_t()
{
} /* size: 0 */

// <001478AD> sbox/steam/steamcallbacks.h:51
void CCallbackInternal_OnSteamServersDisconnected_t::CCallbackInternal_OnSteamServersDisconnected_t()
{
} /* size: 0 */

// <00147894> sbox/steam/steamcallbacks.h:51
inline void CCallbackInternal_OnSteamServersDisconnected_t::CCallbackInternal_OnSteamServersDisconnected_t()
{
} /* size: 0 */

// <001477D5> sbox/steam/steamcallbacks.h:51
// variable: 1
// function call: 1
void CCallbackInternal_OnSteamServersDisconnected_t::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 51
	CSteamEngine::OnSteamServersDisconnected_t(
					SteamServersDisconnected_t* pParam);  // 51
} /* size: 21, variables: 1, inline expansions: 1 (17 bytes) */

// <001477B0> sbox/steam/steamcallbacks.h:51
inline void CSteamEngine::OnSteamServersDisconnected_t(SteamServersDisconnected_t* pParam)
{
} /* size: 0 */

// <0014C000> sbox/steam/steamcallbacks.h:52
// function call: 1
void CCallbackInternal_OnClientGameServerDeny_t::~CCallbackInternal_OnClientGameServerDeny_t()
{
	CCallbackImpl<16>::~CCallbackImpl(); // 52
} /* size: 29, inline expansions: 1 (21 bytes) */

// <0014BF31> sbox/steam/steamcallbacks.h:52
// function calls: 2
void CCallbackInternal_OnClientGameServerDeny_t::~CCallbackInternal_OnClientGameServerDeny_t()
{
	CCallbackImpl<16>::~CCallbackImpl(); // 52
	CCallbackInternal_OnClientGameServerDeny_t::~CCallbackInternal_OnClientGameServerDeny_t(); // 52
} /* size: 64, inline expansions: 2 (58 bytes) */

// <0014BF15> sbox/steam/steamcallbacks.h:52
inline void CCallbackInternal_OnClientGameServerDeny_t::~CCallbackInternal_OnClientGameServerDeny_t()
{
} /* size: 0 */

// <00147799> sbox/steam/steamcallbacks.h:52
void CCallbackInternal_OnClientGameServerDeny_t::CCallbackInternal_OnClientGameServerDeny_t()
{
} /* size: 0 */

// <00147780> sbox/steam/steamcallbacks.h:52
inline void CCallbackInternal_OnClientGameServerDeny_t::CCallbackInternal_OnClientGameServerDeny_t()
{
} /* size: 0 */

// <001476C1> sbox/steam/steamcallbacks.h:52
// variable: 1
// function call: 1
void CCallbackInternal_OnClientGameServerDeny_t::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 52
	CSteamEngine::OnClientGameServerDeny_t(
				ClientGameServerDeny_t* pParam);  // 52
} /* size: 21, variables: 1, inline expansions: 1 (17 bytes) */

// <0014769C> sbox/steam/steamcallbacks.h:52
inline void CSteamEngine::OnClientGameServerDeny_t(ClientGameServerDeny_t* pParam)
{
} /* size: 0 */

// <0014BEB0> sbox/steam/steamcallbacks.h:53
// function call: 1
void CCallbackInternal_OnLicensesUpdated_t::~CCallbackInternal_OnLicensesUpdated_t()
{
	CCallbackImpl<1>::~CCallbackImpl(); // 53
} /* size: 29, inline expansions: 1 (21 bytes) */

// <0014BDE1> sbox/steam/steamcallbacks.h:53
// function calls: 2
void CCallbackInternal_OnLicensesUpdated_t::~CCallbackInternal_OnLicensesUpdated_t()
{
	CCallbackImpl<1>::~CCallbackImpl(); // 53
	CCallbackInternal_OnLicensesUpdated_t::~CCallbackInternal_OnLicensesUpdated_t(); // 53
} /* size: 64, inline expansions: 2 (58 bytes) */

// <0014BDC5> sbox/steam/steamcallbacks.h:53
inline void CCallbackInternal_OnLicensesUpdated_t::~CCallbackInternal_OnLicensesUpdated_t()
{
} /* size: 0 */

// <00147685> sbox/steam/steamcallbacks.h:53
void CCallbackInternal_OnLicensesUpdated_t::CCallbackInternal_OnLicensesUpdated_t()
{
} /* size: 0 */

// <0014766C> sbox/steam/steamcallbacks.h:53
inline void CCallbackInternal_OnLicensesUpdated_t::CCallbackInternal_OnLicensesUpdated_t()
{
} /* size: 0 */

// <001475AD> sbox/steam/steamcallbacks.h:53
// variable: 1
// function call: 1
void CCallbackInternal_OnLicensesUpdated_t::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 53
	CSteamEngine::OnLicensesUpdated_t(
				LicensesUpdated_t* pParam);  // 53
} /* size: 21, variables: 1, inline expansions: 1 (17 bytes) */

// <00147588> sbox/steam/steamcallbacks.h:53
inline void CSteamEngine::OnLicensesUpdated_t(LicensesUpdated_t* pParam)
{
} /* size: 0 */

// <0014BD60> sbox/steam/steamcallbacks.h:54
// function call: 1
void CCallbackInternal_OnValidateAuthTicketResponse_t::~CCallbackInternal_OnValidateAuthTicketResponse_t()
{
	CCallbackImpl<20>::~CCallbackImpl(); // 54
} /* size: 29, inline expansions: 1 (21 bytes) */

// <0014BC91> sbox/steam/steamcallbacks.h:54
// function calls: 2
void CCallbackInternal_OnValidateAuthTicketResponse_t::~CCallbackInternal_OnValidateAuthTicketResponse_t()
{
	CCallbackImpl<20>::~CCallbackImpl(); // 54
	CCallbackInternal_OnValidateAuthTicketResponse_t::~CCallbackInternal_OnValidateAuthTicketResponse_t(); // 54
} /* size: 64, inline expansions: 2 (58 bytes) */

// <0014BC75> sbox/steam/steamcallbacks.h:54
inline void CCallbackInternal_OnValidateAuthTicketResponse_t::~CCallbackInternal_OnValidateAuthTicketResponse_t()
{
} /* size: 0 */

// <00147571> sbox/steam/steamcallbacks.h:54
void CCallbackInternal_OnValidateAuthTicketResponse_t::CCallbackInternal_OnValidateAuthTicketResponse_t()
{
} /* size: 0 */

// <00147558> sbox/steam/steamcallbacks.h:54
inline void CCallbackInternal_OnValidateAuthTicketResponse_t::CCallbackInternal_OnValidateAuthTicketResponse_t()
{
} /* size: 0 */

// <00147499> sbox/steam/steamcallbacks.h:54
// variable: 1
// function call: 1
void CCallbackInternal_OnValidateAuthTicketResponse_t::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 54
	CSteamEngine::OnValidateAuthTicketResponse_t(
					ValidateAuthTicketResponse_t* pParam);  // 54
} /* size: 21, variables: 1, inline expansions: 1 (17 bytes) */

// <00147474> sbox/steam/steamcallbacks.h:54
inline void CSteamEngine::OnValidateAuthTicketResponse_t(ValidateAuthTicketResponse_t* pParam)
{
} /* size: 0 */

// <0014BC10> sbox/steam/steamcallbacks.h:55
// function call: 1
void CCallbackInternal_OnMicroTxnAuthorizationResponse_t::~CCallbackInternal_OnMicroTxnAuthorizationResponse_t()
{
	CCallbackImpl<16>::~CCallbackImpl(); // 55
} /* size: 29, inline expansions: 1 (21 bytes) */

// <0014BB41> sbox/steam/steamcallbacks.h:55
// function calls: 2
void CCallbackInternal_OnMicroTxnAuthorizationResponse_t::~CCallbackInternal_OnMicroTxnAuthorizationResponse_t()
{
	CCallbackImpl<16>::~CCallbackImpl(); // 55
	CCallbackInternal_OnMicroTxnAuthorizationResponse_t::~CCallbackInternal_OnMicroTxnAuthorizationResponse_t(); // 55
} /* size: 64, inline expansions: 2 (58 bytes) */

// <0014BB25> sbox/steam/steamcallbacks.h:55
inline void CCallbackInternal_OnMicroTxnAuthorizationResponse_t::~CCallbackInternal_OnMicroTxnAuthorizationResponse_t()
{
} /* size: 0 */

// <0014745D> sbox/steam/steamcallbacks.h:55
void CCallbackInternal_OnMicroTxnAuthorizationResponse_t::CCallbackInternal_OnMicroTxnAuthorizationResponse_t()
{
} /* size: 0 */

// <00147444> sbox/steam/steamcallbacks.h:55
inline void CCallbackInternal_OnMicroTxnAuthorizationResponse_t::CCallbackInternal_OnMicroTxnAuthorizationResponse_t()
{
} /* size: 0 */

// <00147385> sbox/steam/steamcallbacks.h:55
// variable: 1
// function call: 1
void CCallbackInternal_OnMicroTxnAuthorizationResponse_t::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 55
	CSteamEngine::OnMicroTxnAuthorizationResponse_t(
						MicroTxnAuthorizationResponse_t* pParam);  // 55
} /* size: 21, variables: 1, inline expansions: 1 (17 bytes) */

// <00147360> sbox/steam/steamcallbacks.h:55
inline void CSteamEngine::OnMicroTxnAuthorizationResponse_t(MicroTxnAuthorizationResponse_t* pParam)
{
} /* size: 0 */

// <0015EDCF> sbox/steam/steamcallbacks.h:56
// variable: 1
// function call: 1
void CCallbackInternal_OnGameWebCallback_t::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 56
	CSteamEngine::OnGameWebCallback_t(
				GameWebCallback_t* pParam);  // 56
} /* size: 21, variables: 1, inline expansions: 1 (17 bytes) */

// <0014BAC0> sbox/steam/steamcallbacks.h:56
// function call: 1
void CCallbackInternal_OnGameWebCallback_t::~CCallbackInternal_OnGameWebCallback_t()
{
	CCallbackImpl<256>::~CCallbackImpl(); // 56
} /* size: 29, inline expansions: 1 (21 bytes) */

// <0014B9F1> sbox/steam/steamcallbacks.h:56
// function calls: 2
void CCallbackInternal_OnGameWebCallback_t::~CCallbackInternal_OnGameWebCallback_t()
{
	CCallbackImpl<256>::~CCallbackImpl(); // 56
	CCallbackInternal_OnGameWebCallback_t::~CCallbackInternal_OnGameWebCallback_t(); // 56
} /* size: 64, inline expansions: 2 (58 bytes) */

// <0014B9D5> sbox/steam/steamcallbacks.h:56
inline void CCallbackInternal_OnGameWebCallback_t::~CCallbackInternal_OnGameWebCallback_t()
{
} /* size: 0 */

// <00147316> sbox/steam/steamcallbacks.h:56
void CCallbackInternal_OnGameWebCallback_t::CCallbackInternal_OnGameWebCallback_t()
{
} /* size: 0 */

// <001472FD> sbox/steam/steamcallbacks.h:56
inline void CCallbackInternal_OnGameWebCallback_t::CCallbackInternal_OnGameWebCallback_t()
{
} /* size: 0 */

// <001472CB> sbox/steam/steamcallbacks.h:56
// variable: 1
inline void CCallbackInternal_OnGameWebCallback_t::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 56
} /* size: 0, variables: 1 */

// <001472A6> sbox/steam/steamcallbacks.h:56
inline void CSteamEngine::OnGameWebCallback_t(GameWebCallback_t* pParam)
{
} /* size: 0 */

// <0014B970> sbox/steam/steamcallbacks.h:57
// function call: 1
void CCallbackInternal_OnGetAuthSessionTicketResponse_t::~CCallbackInternal_OnGetAuthSessionTicketResponse_t()
{
	CCallbackImpl<8>::~CCallbackImpl(); // 57
} /* size: 29, inline expansions: 1 (21 bytes) */

// <0014B8A1> sbox/steam/steamcallbacks.h:57
// function calls: 2
void CCallbackInternal_OnGetAuthSessionTicketResponse_t::~CCallbackInternal_OnGetAuthSessionTicketResponse_t()
{
	CCallbackImpl<8>::~CCallbackImpl(); // 57
	CCallbackInternal_OnGetAuthSessionTicketResponse_t::~CCallbackInternal_OnGetAuthSessionTicketResponse_t(); // 57
} /* size: 64, inline expansions: 2 (58 bytes) */

// <0014B885> sbox/steam/steamcallbacks.h:57
inline void CCallbackInternal_OnGetAuthSessionTicketResponse_t::~CCallbackInternal_OnGetAuthSessionTicketResponse_t()
{
} /* size: 0 */

// <0014728F> sbox/steam/steamcallbacks.h:57
void CCallbackInternal_OnGetAuthSessionTicketResponse_t::CCallbackInternal_OnGetAuthSessionTicketResponse_t()
{
} /* size: 0 */

// <00147276> sbox/steam/steamcallbacks.h:57
inline void CCallbackInternal_OnGetAuthSessionTicketResponse_t::CCallbackInternal_OnGetAuthSessionTicketResponse_t()
{
} /* size: 0 */

// <001471B7> sbox/steam/steamcallbacks.h:57
// variable: 1
// function call: 1
void CCallbackInternal_OnGetAuthSessionTicketResponse_t::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 57
	CSteamEngine::OnGetAuthSessionTicketResponse_t(
					GetAuthSessionTicketResponse_t* pParam);  // 57
} /* size: 21, variables: 1, inline expansions: 1 (17 bytes) */

// <00147192> sbox/steam/steamcallbacks.h:57
inline void CSteamEngine::OnGetAuthSessionTicketResponse_t(GetAuthSessionTicketResponse_t* pParam)
{
} /* size: 0 */

// <0014B820> sbox/steam/steamcallbacks.h:58
// function call: 1
void CCallbackInternal_OnDurationControl_t::~CCallbackInternal_OnDurationControl_t()
{
	CCallbackImpl<32>::~CCallbackImpl(); // 58
} /* size: 29, inline expansions: 1 (21 bytes) */

// <0014B751> sbox/steam/steamcallbacks.h:58
// function calls: 2
void CCallbackInternal_OnDurationControl_t::~CCallbackInternal_OnDurationControl_t()
{
	CCallbackImpl<32>::~CCallbackImpl(); // 58
	CCallbackInternal_OnDurationControl_t::~CCallbackInternal_OnDurationControl_t(); // 58
} /* size: 64, inline expansions: 2 (58 bytes) */

// <0014B735> sbox/steam/steamcallbacks.h:58
inline void CCallbackInternal_OnDurationControl_t::~CCallbackInternal_OnDurationControl_t()
{
} /* size: 0 */

// <00147148> sbox/steam/steamcallbacks.h:58
void CCallbackInternal_OnDurationControl_t::CCallbackInternal_OnDurationControl_t()
{
} /* size: 0 */

// <0014712F> sbox/steam/steamcallbacks.h:58
inline void CCallbackInternal_OnDurationControl_t::CCallbackInternal_OnDurationControl_t()
{
} /* size: 0 */

// <00147070> sbox/steam/steamcallbacks.h:58
// variable: 1
// function call: 1
void CCallbackInternal_OnDurationControl_t::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 58
	CSteamEngine::OnDurationControl_t(
				DurationControl_t* pParam);  // 58
} /* size: 21, variables: 1, inline expansions: 1 (17 bytes) */

// <0014704B> sbox/steam/steamcallbacks.h:58
inline void CSteamEngine::OnDurationControl_t(DurationControl_t* pParam)
{
} /* size: 0 */

// <0014B6D0> sbox/steam/steamcallbacks.h:59
// function call: 1
void CCallbackInternal_OnGetTicketForWebApiResponse_t::~CCallbackInternal_OnGetTicketForWebApiResponse_t()
{
	CCallbackImpl<2572>::~CCallbackImpl(); // 59
} /* size: 29, inline expansions: 1 (21 bytes) */

// <0014B601> sbox/steam/steamcallbacks.h:59
// function calls: 2
void CCallbackInternal_OnGetTicketForWebApiResponse_t::~CCallbackInternal_OnGetTicketForWebApiResponse_t()
{
	CCallbackImpl<2572>::~CCallbackImpl(); // 59
	CCallbackInternal_OnGetTicketForWebApiResponse_t::~CCallbackInternal_OnGetTicketForWebApiResponse_t(); // 59
} /* size: 64, inline expansions: 2 (58 bytes) */

// <0014B5E5> sbox/steam/steamcallbacks.h:59
inline void CCallbackInternal_OnGetTicketForWebApiResponse_t::~CCallbackInternal_OnGetTicketForWebApiResponse_t()
{
} /* size: 0 */

// <00147001> sbox/steam/steamcallbacks.h:59
void CCallbackInternal_OnGetTicketForWebApiResponse_t::CCallbackInternal_OnGetTicketForWebApiResponse_t()
{
} /* size: 0 */

// <00146FE8> sbox/steam/steamcallbacks.h:59
inline void CCallbackInternal_OnGetTicketForWebApiResponse_t::CCallbackInternal_OnGetTicketForWebApiResponse_t()
{
} /* size: 0 */

// <00146F29> sbox/steam/steamcallbacks.h:59
// variable: 1
// function call: 1
void CCallbackInternal_OnGetTicketForWebApiResponse_t::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 59
	CSteamEngine::OnGetTicketForWebApiResponse_t(
					GetTicketForWebApiResponse_t* pParam);  // 59
} /* size: 21, variables: 1, inline expansions: 1 (17 bytes) */

// <00146F04> sbox/steam/steamcallbacks.h:59
inline void CSteamEngine::OnGetTicketForWebApiResponse_t(GetTicketForWebApiResponse_t* pParam)
{
} /* size: 0 */

// <0014B580> sbox/steam/steamcallbacks.h:64
// function call: 1
void CCallbackInternal_OnSteamInputDeviceConnected_t::~CCallbackInternal_OnSteamInputDeviceConnected_t()
{
	CCallbackImpl<8>::~CCallbackImpl(); // 64
} /* size: 29, inline expansions: 1 (21 bytes) */

// <0014B4B1> sbox/steam/steamcallbacks.h:64
// function calls: 2
void CCallbackInternal_OnSteamInputDeviceConnected_t::~CCallbackInternal_OnSteamInputDeviceConnected_t()
{
	CCallbackImpl<8>::~CCallbackImpl(); // 64
	CCallbackInternal_OnSteamInputDeviceConnected_t::~CCallbackInternal_OnSteamInputDeviceConnected_t(); // 64
} /* size: 64, inline expansions: 2 (58 bytes) */

// <0014B495> sbox/steam/steamcallbacks.h:64
inline void CCallbackInternal_OnSteamInputDeviceConnected_t::~CCallbackInternal_OnSteamInputDeviceConnected_t()
{
} /* size: 0 */

// <00146EED> sbox/steam/steamcallbacks.h:64
void CCallbackInternal_OnSteamInputDeviceConnected_t::CCallbackInternal_OnSteamInputDeviceConnected_t()
{
} /* size: 0 */

// <00146ED4> sbox/steam/steamcallbacks.h:64
inline void CCallbackInternal_OnSteamInputDeviceConnected_t::CCallbackInternal_OnSteamInputDeviceConnected_t()
{
} /* size: 0 */

// <00146E14> sbox/steam/steamcallbacks.h:64
// variable: 1
// function call: 1
void CCallbackInternal_OnSteamInputDeviceConnected_t::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 64
	CSteamEngine::OnSteamInputDeviceConnected_t(
					SteamInputDeviceConnected_t* pParam);  // 64
} /* size: 21, variables: 1, inline expansions: 1 (17 bytes) */

// <00146DEF> sbox/steam/steamcallbacks.h:64
inline void CSteamEngine::OnSteamInputDeviceConnected_t(SteamInputDeviceConnected_t* pParam)
{
} /* size: 0 */

// <0014B430> sbox/steam/steamcallbacks.h:65
// function call: 1
void CCallbackInternal_OnSteamInputDeviceDisconnected_t::~CCallbackInternal_OnSteamInputDeviceDisconnected_t()
{
	CCallbackImpl<8>::~CCallbackImpl(); // 65
} /* size: 29, inline expansions: 1 (21 bytes) */

// <0014B361> sbox/steam/steamcallbacks.h:65
// function calls: 2
void CCallbackInternal_OnSteamInputDeviceDisconnected_t::~CCallbackInternal_OnSteamInputDeviceDisconnected_t()
{
	CCallbackImpl<8>::~CCallbackImpl(); // 65
	CCallbackInternal_OnSteamInputDeviceDisconnected_t::~CCallbackInternal_OnSteamInputDeviceDisconnected_t(); // 65
} /* size: 64, inline expansions: 2 (58 bytes) */

// <0014B345> sbox/steam/steamcallbacks.h:65
inline void CCallbackInternal_OnSteamInputDeviceDisconnected_t::~CCallbackInternal_OnSteamInputDeviceDisconnected_t()
{
} /* size: 0 */

// <00146DD8> sbox/steam/steamcallbacks.h:65
void CCallbackInternal_OnSteamInputDeviceDisconnected_t::CCallbackInternal_OnSteamInputDeviceDisconnected_t()
{
} /* size: 0 */

// <00146DBF> sbox/steam/steamcallbacks.h:65
inline void CCallbackInternal_OnSteamInputDeviceDisconnected_t::CCallbackInternal_OnSteamInputDeviceDisconnected_t()
{
} /* size: 0 */

// <00146CFF> sbox/steam/steamcallbacks.h:65
// variable: 1
// function call: 1
void CCallbackInternal_OnSteamInputDeviceDisconnected_t::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 65
	CSteamEngine::OnSteamInputDeviceDisconnected_t(
					SteamInputDeviceDisconnected_t* pParam);  // 65
} /* size: 21, variables: 1, inline expansions: 1 (17 bytes) */

// <00146CDA> sbox/steam/steamcallbacks.h:65
inline void CSteamEngine::OnSteamInputDeviceDisconnected_t(SteamInputDeviceDisconnected_t* pParam)
{
} /* size: 0 */

// <0014B2E0> sbox/steam/steamcallbacks.h:66
// function call: 1
void CCallbackInternal_OnSteamInputConfigurationLoaded_t::~CCallbackInternal_OnSteamInputConfigurationLoaded_t()
{
	CCallbackImpl<32>::~CCallbackImpl(); // 66
} /* size: 29, inline expansions: 1 (21 bytes) */

// <0014B211> sbox/steam/steamcallbacks.h:66
// function calls: 2
void CCallbackInternal_OnSteamInputConfigurationLoaded_t::~CCallbackInternal_OnSteamInputConfigurationLoaded_t()
{
	CCallbackImpl<32>::~CCallbackImpl(); // 66
	CCallbackInternal_OnSteamInputConfigurationLoaded_t::~CCallbackInternal_OnSteamInputConfigurationLoaded_t(); // 66
} /* size: 64, inline expansions: 2 (58 bytes) */

// <0014B1F5> sbox/steam/steamcallbacks.h:66
inline void CCallbackInternal_OnSteamInputConfigurationLoaded_t::~CCallbackInternal_OnSteamInputConfigurationLoaded_t()
{
} /* size: 0 */

// <00146CC3> sbox/steam/steamcallbacks.h:66
void CCallbackInternal_OnSteamInputConfigurationLoaded_t::CCallbackInternal_OnSteamInputConfigurationLoaded_t()
{
} /* size: 0 */

// <00146CAA> sbox/steam/steamcallbacks.h:66
inline void CCallbackInternal_OnSteamInputConfigurationLoaded_t::CCallbackInternal_OnSteamInputConfigurationLoaded_t()
{
} /* size: 0 */

// <00146BEA> sbox/steam/steamcallbacks.h:66
// variable: 1
// function call: 1
void CCallbackInternal_OnSteamInputConfigurationLoaded_t::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 66
	CSteamEngine::OnSteamInputConfigurationLoaded_t(
						SteamInputConfigurationLoaded_t* pParam);  // 66
} /* size: 21, variables: 1, inline expansions: 1 (17 bytes) */

// <00146BC5> sbox/steam/steamcallbacks.h:66
inline void CSteamEngine::OnSteamInputConfigurationLoaded_t(SteamInputConfigurationLoaded_t* pParam)
{
} /* size: 0 */

// <0014B190> sbox/steam/steamcallbacks.h:71
// function call: 1
void CCallbackInternal_OnHTML_BrowserReady_t::~CCallbackInternal_OnHTML_BrowserReady_t()
{
	CCallbackImpl<4>::~CCallbackImpl(); // 71
} /* size: 29, inline expansions: 1 (21 bytes) */

// <0014B0C1> sbox/steam/steamcallbacks.h:71
// function calls: 2
void CCallbackInternal_OnHTML_BrowserReady_t::~CCallbackInternal_OnHTML_BrowserReady_t()
{
	CCallbackImpl<4>::~CCallbackImpl(); // 71
	CCallbackInternal_OnHTML_BrowserReady_t::~CCallbackInternal_OnHTML_BrowserReady_t(); // 71
} /* size: 64, inline expansions: 2 (58 bytes) */

// <0014B0A5> sbox/steam/steamcallbacks.h:71
inline void CCallbackInternal_OnHTML_BrowserReady_t::~CCallbackInternal_OnHTML_BrowserReady_t()
{
} /* size: 0 */

// <00146BAE> sbox/steam/steamcallbacks.h:71
void CCallbackInternal_OnHTML_BrowserReady_t::CCallbackInternal_OnHTML_BrowserReady_t()
{
} /* size: 0 */

// <00146B95> sbox/steam/steamcallbacks.h:71
inline void CCallbackInternal_OnHTML_BrowserReady_t::CCallbackInternal_OnHTML_BrowserReady_t()
{
} /* size: 0 */

// <00146AD5> sbox/steam/steamcallbacks.h:71
// variable: 1
// function call: 1
void CCallbackInternal_OnHTML_BrowserReady_t::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 71
	CSteamEngine::OnHTML_BrowserReady_t(
				HTML_BrowserReady_t* pParam);  // 71
} /* size: 21, variables: 1, inline expansions: 1 (17 bytes) */

// <00146AB0> sbox/steam/steamcallbacks.h:71
inline void CSteamEngine::OnHTML_BrowserReady_t(HTML_BrowserReady_t* pParam)
{
} /* size: 0 */

// <0015EE7C> sbox/steam/steamcallbacks.h:72
// variable: 1
// function call: 1
void CCallbackInternal_OnHTML_NeedsPaint_t::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 72
	CSteamEngine::OnHTML_NeedsPaint_t(
				HTML_NeedsPaint_t* pParam);  // 72
} /* size: 21, variables: 1, inline expansions: 1 (17 bytes) */

// <0014B040> sbox/steam/steamcallbacks.h:72
// function call: 1
void CCallbackInternal_OnHTML_NeedsPaint_t::~CCallbackInternal_OnHTML_NeedsPaint_t()
{
	CCallbackImpl<52>::~CCallbackImpl(); // 72
} /* size: 29, inline expansions: 1 (21 bytes) */

// <0014AF71> sbox/steam/steamcallbacks.h:72
// function calls: 2
void CCallbackInternal_OnHTML_NeedsPaint_t::~CCallbackInternal_OnHTML_NeedsPaint_t()
{
	CCallbackImpl<52>::~CCallbackImpl(); // 72
	CCallbackInternal_OnHTML_NeedsPaint_t::~CCallbackInternal_OnHTML_NeedsPaint_t(); // 72
} /* size: 64, inline expansions: 2 (58 bytes) */

// <0014AF55> sbox/steam/steamcallbacks.h:72
inline void CCallbackInternal_OnHTML_NeedsPaint_t::~CCallbackInternal_OnHTML_NeedsPaint_t()
{
} /* size: 0 */

// <00146A66> sbox/steam/steamcallbacks.h:72
void CCallbackInternal_OnHTML_NeedsPaint_t::CCallbackInternal_OnHTML_NeedsPaint_t()
{
} /* size: 0 */

// <00146A4D> sbox/steam/steamcallbacks.h:72
inline void CCallbackInternal_OnHTML_NeedsPaint_t::CCallbackInternal_OnHTML_NeedsPaint_t()
{
} /* size: 0 */

// <00146A1B> sbox/steam/steamcallbacks.h:72
// variable: 1
inline void CCallbackInternal_OnHTML_NeedsPaint_t::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 72
} /* size: 0, variables: 1 */

// <001469F6> sbox/steam/steamcallbacks.h:72
inline void CSteamEngine::OnHTML_NeedsPaint_t(HTML_NeedsPaint_t* pParam)
{
} /* size: 0 */

// <0014AEF0> sbox/steam/steamcallbacks.h:73
// function call: 1
void CCallbackInternal_OnHTML_StartRequest_t::~CCallbackInternal_OnHTML_StartRequest_t()
{
	CCallbackImpl<32>::~CCallbackImpl(); // 73
} /* size: 29, inline expansions: 1 (21 bytes) */

// <0014AE21> sbox/steam/steamcallbacks.h:73
// function calls: 2
void CCallbackInternal_OnHTML_StartRequest_t::~CCallbackInternal_OnHTML_StartRequest_t()
{
	CCallbackImpl<32>::~CCallbackImpl(); // 73
	CCallbackInternal_OnHTML_StartRequest_t::~CCallbackInternal_OnHTML_StartRequest_t(); // 73
} /* size: 64, inline expansions: 2 (58 bytes) */

// <0014AE05> sbox/steam/steamcallbacks.h:73
inline void CCallbackInternal_OnHTML_StartRequest_t::~CCallbackInternal_OnHTML_StartRequest_t()
{
} /* size: 0 */

// <001469DF> sbox/steam/steamcallbacks.h:73
void CCallbackInternal_OnHTML_StartRequest_t::CCallbackInternal_OnHTML_StartRequest_t()
{
} /* size: 0 */

// <001469C6> sbox/steam/steamcallbacks.h:73
inline void CCallbackInternal_OnHTML_StartRequest_t::CCallbackInternal_OnHTML_StartRequest_t()
{
} /* size: 0 */

// <00146906> sbox/steam/steamcallbacks.h:73
// variable: 1
// function call: 1
void CCallbackInternal_OnHTML_StartRequest_t::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 73
	CSteamEngine::OnHTML_StartRequest_t(
				HTML_StartRequest_t* pParam);  // 73
} /* size: 21, variables: 1, inline expansions: 1 (17 bytes) */

// <001468E1> sbox/steam/steamcallbacks.h:73
inline void CSteamEngine::OnHTML_StartRequest_t(HTML_StartRequest_t* pParam)
{
} /* size: 0 */

// <0014ADA0> sbox/steam/steamcallbacks.h:74
// function call: 1
void CCallbackInternal_OnHTML_CloseBrowser_t::~CCallbackInternal_OnHTML_CloseBrowser_t()
{
	CCallbackImpl<4>::~CCallbackImpl(); // 74
} /* size: 29, inline expansions: 1 (21 bytes) */

// <0014ACD1> sbox/steam/steamcallbacks.h:74
// function calls: 2
void CCallbackInternal_OnHTML_CloseBrowser_t::~CCallbackInternal_OnHTML_CloseBrowser_t()
{
	CCallbackImpl<4>::~CCallbackImpl(); // 74
	CCallbackInternal_OnHTML_CloseBrowser_t::~CCallbackInternal_OnHTML_CloseBrowser_t(); // 74
} /* size: 64, inline expansions: 2 (58 bytes) */

// <0014ACB5> sbox/steam/steamcallbacks.h:74
inline void CCallbackInternal_OnHTML_CloseBrowser_t::~CCallbackInternal_OnHTML_CloseBrowser_t()
{
} /* size: 0 */

// <001468CA> sbox/steam/steamcallbacks.h:74
void CCallbackInternal_OnHTML_CloseBrowser_t::CCallbackInternal_OnHTML_CloseBrowser_t()
{
} /* size: 0 */

// <001468B1> sbox/steam/steamcallbacks.h:74
inline void CCallbackInternal_OnHTML_CloseBrowser_t::CCallbackInternal_OnHTML_CloseBrowser_t()
{
} /* size: 0 */

// <001467F1> sbox/steam/steamcallbacks.h:74
// variable: 1
// function call: 1
void CCallbackInternal_OnHTML_CloseBrowser_t::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 74
	CSteamEngine::OnHTML_CloseBrowser_t(
				HTML_CloseBrowser_t* pParam);  // 74
} /* size: 21, variables: 1, inline expansions: 1 (17 bytes) */

// <001467CC> sbox/steam/steamcallbacks.h:74
inline void CSteamEngine::OnHTML_CloseBrowser_t(HTML_CloseBrowser_t* pParam)
{
} /* size: 0 */

// <0015EF2A> sbox/steam/steamcallbacks.h:75
// variable: 1
// function call: 1
void CCallbackInternal_OnHTML_URLChanged_t::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 75
	CSteamEngine::OnHTML_URLChanged_t(
				HTML_URLChanged_t* pParam);  // 75
} /* size: 21, variables: 1, inline expansions: 1 (17 bytes) */

// <0014AC50> sbox/steam/steamcallbacks.h:75
// function call: 1
void CCallbackInternal_OnHTML_URLChanged_t::~CCallbackInternal_OnHTML_URLChanged_t()
{
	CCallbackImpl<36>::~CCallbackImpl(); // 75
} /* size: 29, inline expansions: 1 (21 bytes) */

// <0014AB81> sbox/steam/steamcallbacks.h:75
// function calls: 2
void CCallbackInternal_OnHTML_URLChanged_t::~CCallbackInternal_OnHTML_URLChanged_t()
{
	CCallbackImpl<36>::~CCallbackImpl(); // 75
	CCallbackInternal_OnHTML_URLChanged_t::~CCallbackInternal_OnHTML_URLChanged_t(); // 75
} /* size: 64, inline expansions: 2 (58 bytes) */

// <0014AB65> sbox/steam/steamcallbacks.h:75
inline void CCallbackInternal_OnHTML_URLChanged_t::~CCallbackInternal_OnHTML_URLChanged_t()
{
} /* size: 0 */

// <00146782> sbox/steam/steamcallbacks.h:75
void CCallbackInternal_OnHTML_URLChanged_t::CCallbackInternal_OnHTML_URLChanged_t()
{
} /* size: 0 */

// <00146769> sbox/steam/steamcallbacks.h:75
inline void CCallbackInternal_OnHTML_URLChanged_t::CCallbackInternal_OnHTML_URLChanged_t()
{
} /* size: 0 */

// <00146737> sbox/steam/steamcallbacks.h:75
// variable: 1
inline void CCallbackInternal_OnHTML_URLChanged_t::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 75
} /* size: 0, variables: 1 */

// <00146712> sbox/steam/steamcallbacks.h:75
inline void CSteamEngine::OnHTML_URLChanged_t(HTML_URLChanged_t* pParam)
{
} /* size: 0 */

// <0014AB00> sbox/steam/steamcallbacks.h:76
// function call: 1
void CCallbackInternal_OnHTML_FinishedRequest_t::~CCallbackInternal_OnHTML_FinishedRequest_t()
{
	CCallbackImpl<20>::~CCallbackImpl(); // 76
} /* size: 29, inline expansions: 1 (21 bytes) */

// <0014AA31> sbox/steam/steamcallbacks.h:76
// function calls: 2
void CCallbackInternal_OnHTML_FinishedRequest_t::~CCallbackInternal_OnHTML_FinishedRequest_t()
{
	CCallbackImpl<20>::~CCallbackImpl(); // 76
	CCallbackInternal_OnHTML_FinishedRequest_t::~CCallbackInternal_OnHTML_FinishedRequest_t(); // 76
} /* size: 64, inline expansions: 2 (58 bytes) */

// <0014AA15> sbox/steam/steamcallbacks.h:76
inline void CCallbackInternal_OnHTML_FinishedRequest_t::~CCallbackInternal_OnHTML_FinishedRequest_t()
{
} /* size: 0 */

// <001466FB> sbox/steam/steamcallbacks.h:76
void CCallbackInternal_OnHTML_FinishedRequest_t::CCallbackInternal_OnHTML_FinishedRequest_t()
{
} /* size: 0 */

// <001466E2> sbox/steam/steamcallbacks.h:76
inline void CCallbackInternal_OnHTML_FinishedRequest_t::CCallbackInternal_OnHTML_FinishedRequest_t()
{
} /* size: 0 */

// <00146622> sbox/steam/steamcallbacks.h:76
// variable: 1
// function call: 1
void CCallbackInternal_OnHTML_FinishedRequest_t::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 76
	CSteamEngine::OnHTML_FinishedRequest_t(
				HTML_FinishedRequest_t* pParam);  // 76
} /* size: 21, variables: 1, inline expansions: 1 (17 bytes) */

// <001465FD> sbox/steam/steamcallbacks.h:76
inline void CSteamEngine::OnHTML_FinishedRequest_t(HTML_FinishedRequest_t* pParam)
{
} /* size: 0 */

// <0014A9B0> sbox/steam/steamcallbacks.h:77
// function call: 1
void CCallbackInternal_OnHTML_OpenLinkInNewTab_t::~CCallbackInternal_OnHTML_OpenLinkInNewTab_t()
{
	CCallbackImpl<12>::~CCallbackImpl(); // 77
} /* size: 29, inline expansions: 1 (21 bytes) */

// <0014A8E1> sbox/steam/steamcallbacks.h:77
// function calls: 2
void CCallbackInternal_OnHTML_OpenLinkInNewTab_t::~CCallbackInternal_OnHTML_OpenLinkInNewTab_t()
{
	CCallbackImpl<12>::~CCallbackImpl(); // 77
	CCallbackInternal_OnHTML_OpenLinkInNewTab_t::~CCallbackInternal_OnHTML_OpenLinkInNewTab_t(); // 77
} /* size: 64, inline expansions: 2 (58 bytes) */

// <0014A8C5> sbox/steam/steamcallbacks.h:77
inline void CCallbackInternal_OnHTML_OpenLinkInNewTab_t::~CCallbackInternal_OnHTML_OpenLinkInNewTab_t()
{
} /* size: 0 */

// <001465E6> sbox/steam/steamcallbacks.h:77
void CCallbackInternal_OnHTML_OpenLinkInNewTab_t::CCallbackInternal_OnHTML_OpenLinkInNewTab_t()
{
} /* size: 0 */

// <001465CD> sbox/steam/steamcallbacks.h:77
inline void CCallbackInternal_OnHTML_OpenLinkInNewTab_t::CCallbackInternal_OnHTML_OpenLinkInNewTab_t()
{
} /* size: 0 */

// <0014650D> sbox/steam/steamcallbacks.h:77
// variable: 1
// function call: 1
void CCallbackInternal_OnHTML_OpenLinkInNewTab_t::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 77
	CSteamEngine::OnHTML_OpenLinkInNewTab_t(
					HTML_OpenLinkInNewTab_t* pParam);  // 77
} /* size: 21, variables: 1, inline expansions: 1 (17 bytes) */

// <001464E8> sbox/steam/steamcallbacks.h:77
inline void CSteamEngine::OnHTML_OpenLinkInNewTab_t(HTML_OpenLinkInNewTab_t* pParam)
{
} /* size: 0 */

// <0014A860> sbox/steam/steamcallbacks.h:78
// function call: 1
void CCallbackInternal_OnHTML_ChangedTitle_t::~CCallbackInternal_OnHTML_ChangedTitle_t()
{
	CCallbackImpl<12>::~CCallbackImpl(); // 78
} /* size: 29, inline expansions: 1 (21 bytes) */

// <0014A791> sbox/steam/steamcallbacks.h:78
// function calls: 2
void CCallbackInternal_OnHTML_ChangedTitle_t::~CCallbackInternal_OnHTML_ChangedTitle_t()
{
	CCallbackImpl<12>::~CCallbackImpl(); // 78
	CCallbackInternal_OnHTML_ChangedTitle_t::~CCallbackInternal_OnHTML_ChangedTitle_t(); // 78
} /* size: 64, inline expansions: 2 (58 bytes) */

// <0014A775> sbox/steam/steamcallbacks.h:78
inline void CCallbackInternal_OnHTML_ChangedTitle_t::~CCallbackInternal_OnHTML_ChangedTitle_t()
{
} /* size: 0 */

// <001464D1> sbox/steam/steamcallbacks.h:78
void CCallbackInternal_OnHTML_ChangedTitle_t::CCallbackInternal_OnHTML_ChangedTitle_t()
{
} /* size: 0 */

// <001464B8> sbox/steam/steamcallbacks.h:78
inline void CCallbackInternal_OnHTML_ChangedTitle_t::CCallbackInternal_OnHTML_ChangedTitle_t()
{
} /* size: 0 */

// <001463F8> sbox/steam/steamcallbacks.h:78
// variable: 1
// function call: 1
void CCallbackInternal_OnHTML_ChangedTitle_t::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 78
	CSteamEngine::OnHTML_ChangedTitle_t(
				HTML_ChangedTitle_t* pParam);  // 78
} /* size: 21, variables: 1, inline expansions: 1 (17 bytes) */

// <001463D3> sbox/steam/steamcallbacks.h:78
inline void CSteamEngine::OnHTML_ChangedTitle_t(HTML_ChangedTitle_t* pParam)
{
} /* size: 0 */

// <0014A710> sbox/steam/steamcallbacks.h:79
// function call: 1
void CCallbackInternal_OnHTML_SearchResults_t::~CCallbackInternal_OnHTML_SearchResults_t()
{
	CCallbackImpl<12>::~CCallbackImpl(); // 79
} /* size: 29, inline expansions: 1 (21 bytes) */

// <0014A641> sbox/steam/steamcallbacks.h:79
// function calls: 2
void CCallbackInternal_OnHTML_SearchResults_t::~CCallbackInternal_OnHTML_SearchResults_t()
{
	CCallbackImpl<12>::~CCallbackImpl(); // 79
	CCallbackInternal_OnHTML_SearchResults_t::~CCallbackInternal_OnHTML_SearchResults_t(); // 79
} /* size: 64, inline expansions: 2 (58 bytes) */

// <0014A625> sbox/steam/steamcallbacks.h:79
inline void CCallbackInternal_OnHTML_SearchResults_t::~CCallbackInternal_OnHTML_SearchResults_t()
{
} /* size: 0 */

// <001463BC> sbox/steam/steamcallbacks.h:79
void CCallbackInternal_OnHTML_SearchResults_t::CCallbackInternal_OnHTML_SearchResults_t()
{
} /* size: 0 */

// <001463A3> sbox/steam/steamcallbacks.h:79
inline void CCallbackInternal_OnHTML_SearchResults_t::CCallbackInternal_OnHTML_SearchResults_t()
{
} /* size: 0 */

// <001462E3> sbox/steam/steamcallbacks.h:79
// variable: 1
// function call: 1
void CCallbackInternal_OnHTML_SearchResults_t::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 79
	CSteamEngine::OnHTML_SearchResults_t(
				HTML_SearchResults_t* pParam);  // 79
} /* size: 21, variables: 1, inline expansions: 1 (17 bytes) */

// <001462BE> sbox/steam/steamcallbacks.h:79
inline void CSteamEngine::OnHTML_SearchResults_t(HTML_SearchResults_t* pParam)
{
} /* size: 0 */

// <0014A5C0> sbox/steam/steamcallbacks.h:80
// function call: 1
void CCallbackInternal_OnHTML_CanGoBackAndForward_t::~CCallbackInternal_OnHTML_CanGoBackAndForward_t()
{
	CCallbackImpl<8>::~CCallbackImpl(); // 80
} /* size: 29, inline expansions: 1 (21 bytes) */

// <0014A4F1> sbox/steam/steamcallbacks.h:80
// function calls: 2
void CCallbackInternal_OnHTML_CanGoBackAndForward_t::~CCallbackInternal_OnHTML_CanGoBackAndForward_t()
{
	CCallbackImpl<8>::~CCallbackImpl(); // 80
	CCallbackInternal_OnHTML_CanGoBackAndForward_t::~CCallbackInternal_OnHTML_CanGoBackAndForward_t(); // 80
} /* size: 64, inline expansions: 2 (58 bytes) */

// <0014A4D5> sbox/steam/steamcallbacks.h:80
inline void CCallbackInternal_OnHTML_CanGoBackAndForward_t::~CCallbackInternal_OnHTML_CanGoBackAndForward_t()
{
} /* size: 0 */

// <001462A7> sbox/steam/steamcallbacks.h:80
void CCallbackInternal_OnHTML_CanGoBackAndForward_t::CCallbackInternal_OnHTML_CanGoBackAndForward_t()
{
} /* size: 0 */

// <0014628E> sbox/steam/steamcallbacks.h:80
inline void CCallbackInternal_OnHTML_CanGoBackAndForward_t::CCallbackInternal_OnHTML_CanGoBackAndForward_t()
{
} /* size: 0 */

// <001461CE> sbox/steam/steamcallbacks.h:80
// variable: 1
// function call: 1
void CCallbackInternal_OnHTML_CanGoBackAndForward_t::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 80
	CSteamEngine::OnHTML_CanGoBackAndForward_t(
					HTML_CanGoBackAndForward_t* pParam);  // 80
} /* size: 21, variables: 1, inline expansions: 1 (17 bytes) */

// <001461A9> sbox/steam/steamcallbacks.h:80
inline void CSteamEngine::OnHTML_CanGoBackAndForward_t(HTML_CanGoBackAndForward_t* pParam)
{
} /* size: 0 */

// <0014A470> sbox/steam/steamcallbacks.h:81
// function call: 1
void CCallbackInternal_OnHTML_HorizontalScroll_t::~CCallbackInternal_OnHTML_HorizontalScroll_t()
{
	CCallbackImpl<24>::~CCallbackImpl(); // 81
} /* size: 29, inline expansions: 1 (21 bytes) */

// <0014A3A1> sbox/steam/steamcallbacks.h:81
// function calls: 2
void CCallbackInternal_OnHTML_HorizontalScroll_t::~CCallbackInternal_OnHTML_HorizontalScroll_t()
{
	CCallbackImpl<24>::~CCallbackImpl(); // 81
	CCallbackInternal_OnHTML_HorizontalScroll_t::~CCallbackInternal_OnHTML_HorizontalScroll_t(); // 81
} /* size: 64, inline expansions: 2 (58 bytes) */

// <0014A385> sbox/steam/steamcallbacks.h:81
inline void CCallbackInternal_OnHTML_HorizontalScroll_t::~CCallbackInternal_OnHTML_HorizontalScroll_t()
{
} /* size: 0 */

// <0014615F> sbox/steam/steamcallbacks.h:81
void CCallbackInternal_OnHTML_HorizontalScroll_t::CCallbackInternal_OnHTML_HorizontalScroll_t()
{
} /* size: 0 */

// <00146146> sbox/steam/steamcallbacks.h:81
inline void CCallbackInternal_OnHTML_HorizontalScroll_t::CCallbackInternal_OnHTML_HorizontalScroll_t()
{
} /* size: 0 */

// <00146086> sbox/steam/steamcallbacks.h:81
// variable: 1
// function call: 1
void CCallbackInternal_OnHTML_HorizontalScroll_t::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 81
	CSteamEngine::OnHTML_HorizontalScroll_t(
					HTML_HorizontalScroll_t* pParam);  // 81
} /* size: 21, variables: 1, inline expansions: 1 (17 bytes) */

// <00146061> sbox/steam/steamcallbacks.h:81
inline void CSteamEngine::OnHTML_HorizontalScroll_t(HTML_HorizontalScroll_t* pParam)
{
} /* size: 0 */

// <0014A320> sbox/steam/steamcallbacks.h:82
// function call: 1
void CCallbackInternal_OnHTML_VerticalScroll_t::~CCallbackInternal_OnHTML_VerticalScroll_t()
{
	CCallbackImpl<24>::~CCallbackImpl(); // 82
} /* size: 29, inline expansions: 1 (21 bytes) */

// <0014A251> sbox/steam/steamcallbacks.h:82
// function calls: 2
void CCallbackInternal_OnHTML_VerticalScroll_t::~CCallbackInternal_OnHTML_VerticalScroll_t()
{
	CCallbackImpl<24>::~CCallbackImpl(); // 82
	CCallbackInternal_OnHTML_VerticalScroll_t::~CCallbackInternal_OnHTML_VerticalScroll_t(); // 82
} /* size: 64, inline expansions: 2 (58 bytes) */

// <0014A235> sbox/steam/steamcallbacks.h:82
inline void CCallbackInternal_OnHTML_VerticalScroll_t::~CCallbackInternal_OnHTML_VerticalScroll_t()
{
} /* size: 0 */

// <0014604A> sbox/steam/steamcallbacks.h:82
void CCallbackInternal_OnHTML_VerticalScroll_t::CCallbackInternal_OnHTML_VerticalScroll_t()
{
} /* size: 0 */

// <00146031> sbox/steam/steamcallbacks.h:82
inline void CCallbackInternal_OnHTML_VerticalScroll_t::CCallbackInternal_OnHTML_VerticalScroll_t()
{
} /* size: 0 */

// <00145F71> sbox/steam/steamcallbacks.h:82
// variable: 1
// function call: 1
void CCallbackInternal_OnHTML_VerticalScroll_t::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 82
	CSteamEngine::OnHTML_VerticalScroll_t(
				HTML_VerticalScroll_t* pParam);  // 82
} /* size: 21, variables: 1, inline expansions: 1 (17 bytes) */

// <00145F4C> sbox/steam/steamcallbacks.h:82
inline void CSteamEngine::OnHTML_VerticalScroll_t(HTML_VerticalScroll_t* pParam)
{
} /* size: 0 */

// <0014A1D0> sbox/steam/steamcallbacks.h:83
// function call: 1
void CCallbackInternal_OnHTML_LinkAtPosition_t::~CCallbackInternal_OnHTML_LinkAtPosition_t()
{
	CCallbackImpl<24>::~CCallbackImpl(); // 83
} /* size: 29, inline expansions: 1 (21 bytes) */

// <0014A101> sbox/steam/steamcallbacks.h:83
// function calls: 2
void CCallbackInternal_OnHTML_LinkAtPosition_t::~CCallbackInternal_OnHTML_LinkAtPosition_t()
{
	CCallbackImpl<24>::~CCallbackImpl(); // 83
	CCallbackInternal_OnHTML_LinkAtPosition_t::~CCallbackInternal_OnHTML_LinkAtPosition_t(); // 83
} /* size: 64, inline expansions: 2 (58 bytes) */

// <0014A0E5> sbox/steam/steamcallbacks.h:83
inline void CCallbackInternal_OnHTML_LinkAtPosition_t::~CCallbackInternal_OnHTML_LinkAtPosition_t()
{
} /* size: 0 */

// <00145F35> sbox/steam/steamcallbacks.h:83
void CCallbackInternal_OnHTML_LinkAtPosition_t::CCallbackInternal_OnHTML_LinkAtPosition_t()
{
} /* size: 0 */

// <00145F1C> sbox/steam/steamcallbacks.h:83
inline void CCallbackInternal_OnHTML_LinkAtPosition_t::CCallbackInternal_OnHTML_LinkAtPosition_t()
{
} /* size: 0 */

// <00145E5C> sbox/steam/steamcallbacks.h:83
// variable: 1
// function call: 1
void CCallbackInternal_OnHTML_LinkAtPosition_t::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 83
	CSteamEngine::OnHTML_LinkAtPosition_t(
				HTML_LinkAtPosition_t* pParam);  // 83
} /* size: 21, variables: 1, inline expansions: 1 (17 bytes) */

// <00145E37> sbox/steam/steamcallbacks.h:83
inline void CSteamEngine::OnHTML_LinkAtPosition_t(HTML_LinkAtPosition_t* pParam)
{
} /* size: 0 */

// <0014A080> sbox/steam/steamcallbacks.h:84
// function call: 1
void CCallbackInternal_OnHTML_JSAlert_t::~CCallbackInternal_OnHTML_JSAlert_t()
{
	CCallbackImpl<12>::~CCallbackImpl(); // 84
} /* size: 29, inline expansions: 1 (21 bytes) */

// <00149FB1> sbox/steam/steamcallbacks.h:84
// function calls: 2
void CCallbackInternal_OnHTML_JSAlert_t::~CCallbackInternal_OnHTML_JSAlert_t()
{
	CCallbackImpl<12>::~CCallbackImpl(); // 84
	CCallbackInternal_OnHTML_JSAlert_t::~CCallbackInternal_OnHTML_JSAlert_t(); // 84
} /* size: 64, inline expansions: 2 (58 bytes) */

// <00149F95> sbox/steam/steamcallbacks.h:84
inline void CCallbackInternal_OnHTML_JSAlert_t::~CCallbackInternal_OnHTML_JSAlert_t()
{
} /* size: 0 */

// <00145E20> sbox/steam/steamcallbacks.h:84
void CCallbackInternal_OnHTML_JSAlert_t::CCallbackInternal_OnHTML_JSAlert_t()
{
} /* size: 0 */

// <00145E07> sbox/steam/steamcallbacks.h:84
inline void CCallbackInternal_OnHTML_JSAlert_t::CCallbackInternal_OnHTML_JSAlert_t()
{
} /* size: 0 */

// <00145D47> sbox/steam/steamcallbacks.h:84
// variable: 1
// function call: 1
void CCallbackInternal_OnHTML_JSAlert_t::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 84
	CSteamEngine::OnHTML_JSAlert_t(
			HTML_JSAlert_t* pParam);  // 84
} /* size: 21, variables: 1, inline expansions: 1 (17 bytes) */

// <00145D22> sbox/steam/steamcallbacks.h:84
inline void CSteamEngine::OnHTML_JSAlert_t(HTML_JSAlert_t* pParam)
{
} /* size: 0 */

// <00149F30> sbox/steam/steamcallbacks.h:85
// function call: 1
void CCallbackInternal_OnHTML_JSConfirm_t::~CCallbackInternal_OnHTML_JSConfirm_t()
{
	CCallbackImpl<12>::~CCallbackImpl(); // 85
} /* size: 29, inline expansions: 1 (21 bytes) */

// <00149E61> sbox/steam/steamcallbacks.h:85
// function calls: 2
void CCallbackInternal_OnHTML_JSConfirm_t::~CCallbackInternal_OnHTML_JSConfirm_t()
{
	CCallbackImpl<12>::~CCallbackImpl(); // 85
	CCallbackInternal_OnHTML_JSConfirm_t::~CCallbackInternal_OnHTML_JSConfirm_t(); // 85
} /* size: 64, inline expansions: 2 (58 bytes) */

// <00149E45> sbox/steam/steamcallbacks.h:85
inline void CCallbackInternal_OnHTML_JSConfirm_t::~CCallbackInternal_OnHTML_JSConfirm_t()
{
} /* size: 0 */

// <00145D0B> sbox/steam/steamcallbacks.h:85
void CCallbackInternal_OnHTML_JSConfirm_t::CCallbackInternal_OnHTML_JSConfirm_t()
{
} /* size: 0 */

// <00145CF2> sbox/steam/steamcallbacks.h:85
inline void CCallbackInternal_OnHTML_JSConfirm_t::CCallbackInternal_OnHTML_JSConfirm_t()
{
} /* size: 0 */

// <00145C0D> sbox/steam/steamcallbacks.h:85
inline void CSteamEngine::OnHTML_JSConfirm_t(HTML_JSConfirm_t* pParam)
{
} /* size: 0 */

// <00149DE0> sbox/steam/steamcallbacks.h:86
// function call: 1
void CCallbackInternal_OnHTML_FileOpenDialog_t::~CCallbackInternal_OnHTML_FileOpenDialog_t()
{
	CCallbackImpl<20>::~CCallbackImpl(); // 86
} /* size: 29, inline expansions: 1 (21 bytes) */

// <00149D11> sbox/steam/steamcallbacks.h:86
// function calls: 2
void CCallbackInternal_OnHTML_FileOpenDialog_t::~CCallbackInternal_OnHTML_FileOpenDialog_t()
{
	CCallbackImpl<20>::~CCallbackImpl(); // 86
	CCallbackInternal_OnHTML_FileOpenDialog_t::~CCallbackInternal_OnHTML_FileOpenDialog_t(); // 86
} /* size: 64, inline expansions: 2 (58 bytes) */

// <00149CF5> sbox/steam/steamcallbacks.h:86
inline void CCallbackInternal_OnHTML_FileOpenDialog_t::~CCallbackInternal_OnHTML_FileOpenDialog_t()
{
} /* size: 0 */

// <00145BF6> sbox/steam/steamcallbacks.h:86
void CCallbackInternal_OnHTML_FileOpenDialog_t::CCallbackInternal_OnHTML_FileOpenDialog_t()
{
} /* size: 0 */

// <00145BDD> sbox/steam/steamcallbacks.h:86
inline void CCallbackInternal_OnHTML_FileOpenDialog_t::CCallbackInternal_OnHTML_FileOpenDialog_t()
{
} /* size: 0 */

// <00145B1D> sbox/steam/steamcallbacks.h:86
// variable: 1
// function call: 1
void CCallbackInternal_OnHTML_FileOpenDialog_t::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 86
	CSteamEngine::OnHTML_FileOpenDialog_t(
				HTML_FileOpenDialog_t* pParam);  // 86
} /* size: 21, variables: 1, inline expansions: 1 (17 bytes) */

// <00145AF8> sbox/steam/steamcallbacks.h:86
inline void CSteamEngine::OnHTML_FileOpenDialog_t(HTML_FileOpenDialog_t* pParam)
{
} /* size: 0 */

// <00149C90> sbox/steam/steamcallbacks.h:87
// function call: 1
void CCallbackInternal_OnHTML_NewWindow_t::~CCallbackInternal_OnHTML_NewWindow_t()
{
	CCallbackImpl<32>::~CCallbackImpl(); // 87
} /* size: 29, inline expansions: 1 (21 bytes) */

// <00149BC1> sbox/steam/steamcallbacks.h:87
// function calls: 2
void CCallbackInternal_OnHTML_NewWindow_t::~CCallbackInternal_OnHTML_NewWindow_t()
{
	CCallbackImpl<32>::~CCallbackImpl(); // 87
	CCallbackInternal_OnHTML_NewWindow_t::~CCallbackInternal_OnHTML_NewWindow_t(); // 87
} /* size: 64, inline expansions: 2 (58 bytes) */

// <00149BA5> sbox/steam/steamcallbacks.h:87
inline void CCallbackInternal_OnHTML_NewWindow_t::~CCallbackInternal_OnHTML_NewWindow_t()
{
} /* size: 0 */

// <00145AE1> sbox/steam/steamcallbacks.h:87
void CCallbackInternal_OnHTML_NewWindow_t::CCallbackInternal_OnHTML_NewWindow_t()
{
} /* size: 0 */

// <00145AC8> sbox/steam/steamcallbacks.h:87
inline void CCallbackInternal_OnHTML_NewWindow_t::CCallbackInternal_OnHTML_NewWindow_t()
{
} /* size: 0 */

// <00145A08> sbox/steam/steamcallbacks.h:87
// variable: 1
// function call: 1
void CCallbackInternal_OnHTML_NewWindow_t::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 87
	CSteamEngine::OnHTML_NewWindow_t(
				HTML_NewWindow_t* pParam);  // 87
} /* size: 21, variables: 1, inline expansions: 1 (17 bytes) */

// <001459E3> sbox/steam/steamcallbacks.h:87
inline void CSteamEngine::OnHTML_NewWindow_t(HTML_NewWindow_t* pParam)
{
} /* size: 0 */

// <00149B40> sbox/steam/steamcallbacks.h:88
// function call: 1
void CCallbackInternal_OnHTML_SetCursor_t::~CCallbackInternal_OnHTML_SetCursor_t()
{
	CCallbackImpl<8>::~CCallbackImpl(); // 88
} /* size: 29, inline expansions: 1 (21 bytes) */

// <00149A71> sbox/steam/steamcallbacks.h:88
// function calls: 2
void CCallbackInternal_OnHTML_SetCursor_t::~CCallbackInternal_OnHTML_SetCursor_t()
{
	CCallbackImpl<8>::~CCallbackImpl(); // 88
	CCallbackInternal_OnHTML_SetCursor_t::~CCallbackInternal_OnHTML_SetCursor_t(); // 88
} /* size: 64, inline expansions: 2 (58 bytes) */

// <00149A55> sbox/steam/steamcallbacks.h:88
inline void CCallbackInternal_OnHTML_SetCursor_t::~CCallbackInternal_OnHTML_SetCursor_t()
{
} /* size: 0 */

// <001459CC> sbox/steam/steamcallbacks.h:88
void CCallbackInternal_OnHTML_SetCursor_t::CCallbackInternal_OnHTML_SetCursor_t()
{
} /* size: 0 */

// <001459B3> sbox/steam/steamcallbacks.h:88
inline void CCallbackInternal_OnHTML_SetCursor_t::CCallbackInternal_OnHTML_SetCursor_t()
{
} /* size: 0 */

// <001458F3> sbox/steam/steamcallbacks.h:88
// variable: 1
// function call: 1
void CCallbackInternal_OnHTML_SetCursor_t::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 88
	CSteamEngine::OnHTML_SetCursor_t(
				HTML_SetCursor_t* pParam);  // 88
} /* size: 21, variables: 1, inline expansions: 1 (17 bytes) */

// <001458CE> sbox/steam/steamcallbacks.h:88
inline void CSteamEngine::OnHTML_SetCursor_t(HTML_SetCursor_t* pParam)
{
} /* size: 0 */

// <001499F0> sbox/steam/steamcallbacks.h:89
// function call: 1
void CCallbackInternal_OnHTML_StatusText_t::~CCallbackInternal_OnHTML_StatusText_t()
{
	CCallbackImpl<12>::~CCallbackImpl(); // 89
} /* size: 29, inline expansions: 1 (21 bytes) */

// <00149921> sbox/steam/steamcallbacks.h:89
// function calls: 2
void CCallbackInternal_OnHTML_StatusText_t::~CCallbackInternal_OnHTML_StatusText_t()
{
	CCallbackImpl<12>::~CCallbackImpl(); // 89
	CCallbackInternal_OnHTML_StatusText_t::~CCallbackInternal_OnHTML_StatusText_t(); // 89
} /* size: 64, inline expansions: 2 (58 bytes) */

// <00149905> sbox/steam/steamcallbacks.h:89
inline void CCallbackInternal_OnHTML_StatusText_t::~CCallbackInternal_OnHTML_StatusText_t()
{
} /* size: 0 */

// <001458B7> sbox/steam/steamcallbacks.h:89
void CCallbackInternal_OnHTML_StatusText_t::CCallbackInternal_OnHTML_StatusText_t()
{
} /* size: 0 */

// <0014589E> sbox/steam/steamcallbacks.h:89
inline void CCallbackInternal_OnHTML_StatusText_t::CCallbackInternal_OnHTML_StatusText_t()
{
} /* size: 0 */

// <001457DE> sbox/steam/steamcallbacks.h:89
// variable: 1
// function call: 1
void CCallbackInternal_OnHTML_StatusText_t::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 89
	CSteamEngine::OnHTML_StatusText_t(
				HTML_StatusText_t* pParam);  // 89
} /* size: 21, variables: 1, inline expansions: 1 (17 bytes) */

// <001457B9> sbox/steam/steamcallbacks.h:89
inline void CSteamEngine::OnHTML_StatusText_t(HTML_StatusText_t* pParam)
{
} /* size: 0 */

// <001498A0> sbox/steam/steamcallbacks.h:90
// function call: 1
void CCallbackInternal_OnHTML_ShowToolTip_t::~CCallbackInternal_OnHTML_ShowToolTip_t()
{
	CCallbackImpl<12>::~CCallbackImpl(); // 90
} /* size: 29, inline expansions: 1 (21 bytes) */

// <001497D1> sbox/steam/steamcallbacks.h:90
// function calls: 2
void CCallbackInternal_OnHTML_ShowToolTip_t::~CCallbackInternal_OnHTML_ShowToolTip_t()
{
	CCallbackImpl<12>::~CCallbackImpl(); // 90
	CCallbackInternal_OnHTML_ShowToolTip_t::~CCallbackInternal_OnHTML_ShowToolTip_t(); // 90
} /* size: 64, inline expansions: 2 (58 bytes) */

// <001497B5> sbox/steam/steamcallbacks.h:90
inline void CCallbackInternal_OnHTML_ShowToolTip_t::~CCallbackInternal_OnHTML_ShowToolTip_t()
{
} /* size: 0 */

// <001457A2> sbox/steam/steamcallbacks.h:90
void CCallbackInternal_OnHTML_ShowToolTip_t::CCallbackInternal_OnHTML_ShowToolTip_t()
{
} /* size: 0 */

// <00145789> sbox/steam/steamcallbacks.h:90
inline void CCallbackInternal_OnHTML_ShowToolTip_t::CCallbackInternal_OnHTML_ShowToolTip_t()
{
} /* size: 0 */

// <001456C9> sbox/steam/steamcallbacks.h:90
// variable: 1
// function call: 1
void CCallbackInternal_OnHTML_ShowToolTip_t::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 90
	CSteamEngine::OnHTML_ShowToolTip_t(
				HTML_ShowToolTip_t* pParam);  // 90
} /* size: 21, variables: 1, inline expansions: 1 (17 bytes) */

// <001456A4> sbox/steam/steamcallbacks.h:90
inline void CSteamEngine::OnHTML_ShowToolTip_t(HTML_ShowToolTip_t* pParam)
{
} /* size: 0 */

// <00149750> sbox/steam/steamcallbacks.h:91
// function call: 1
void CCallbackInternal_OnHTML_UpdateToolTip_t::~CCallbackInternal_OnHTML_UpdateToolTip_t()
{
	CCallbackImpl<12>::~CCallbackImpl(); // 91
} /* size: 29, inline expansions: 1 (21 bytes) */

// <00149681> sbox/steam/steamcallbacks.h:91
// function calls: 2
void CCallbackInternal_OnHTML_UpdateToolTip_t::~CCallbackInternal_OnHTML_UpdateToolTip_t()
{
	CCallbackImpl<12>::~CCallbackImpl(); // 91
	CCallbackInternal_OnHTML_UpdateToolTip_t::~CCallbackInternal_OnHTML_UpdateToolTip_t(); // 91
} /* size: 64, inline expansions: 2 (58 bytes) */

// <00149665> sbox/steam/steamcallbacks.h:91
inline void CCallbackInternal_OnHTML_UpdateToolTip_t::~CCallbackInternal_OnHTML_UpdateToolTip_t()
{
} /* size: 0 */

// <0014568D> sbox/steam/steamcallbacks.h:91
void CCallbackInternal_OnHTML_UpdateToolTip_t::CCallbackInternal_OnHTML_UpdateToolTip_t()
{
} /* size: 0 */

// <00145674> sbox/steam/steamcallbacks.h:91
inline void CCallbackInternal_OnHTML_UpdateToolTip_t::CCallbackInternal_OnHTML_UpdateToolTip_t()
{
} /* size: 0 */

// <001455B4> sbox/steam/steamcallbacks.h:91
// variable: 1
// function call: 1
void CCallbackInternal_OnHTML_UpdateToolTip_t::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 91
	CSteamEngine::OnHTML_UpdateToolTip_t(
				HTML_UpdateToolTip_t* pParam);  // 91
} /* size: 21, variables: 1, inline expansions: 1 (17 bytes) */

// <0014558F> sbox/steam/steamcallbacks.h:91
inline void CSteamEngine::OnHTML_UpdateToolTip_t(HTML_UpdateToolTip_t* pParam)
{
} /* size: 0 */

// <00149600> sbox/steam/steamcallbacks.h:92
// function call: 1
void CCallbackInternal_OnHTML_HideToolTip_t::~CCallbackInternal_OnHTML_HideToolTip_t()
{
	CCallbackImpl<4>::~CCallbackImpl(); // 92
} /* size: 29, inline expansions: 1 (21 bytes) */

// <00149531> sbox/steam/steamcallbacks.h:92
// function calls: 2
void CCallbackInternal_OnHTML_HideToolTip_t::~CCallbackInternal_OnHTML_HideToolTip_t()
{
	CCallbackImpl<4>::~CCallbackImpl(); // 92
	CCallbackInternal_OnHTML_HideToolTip_t::~CCallbackInternal_OnHTML_HideToolTip_t(); // 92
} /* size: 64, inline expansions: 2 (58 bytes) */

// <00149515> sbox/steam/steamcallbacks.h:92
inline void CCallbackInternal_OnHTML_HideToolTip_t::~CCallbackInternal_OnHTML_HideToolTip_t()
{
} /* size: 0 */

// <00145578> sbox/steam/steamcallbacks.h:92
void CCallbackInternal_OnHTML_HideToolTip_t::CCallbackInternal_OnHTML_HideToolTip_t()
{
} /* size: 0 */

// <0014555F> sbox/steam/steamcallbacks.h:92
inline void CCallbackInternal_OnHTML_HideToolTip_t::CCallbackInternal_OnHTML_HideToolTip_t()
{
} /* size: 0 */

// <0014549F> sbox/steam/steamcallbacks.h:92
// variable: 1
// function call: 1
void CCallbackInternal_OnHTML_HideToolTip_t::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 92
	CSteamEngine::OnHTML_HideToolTip_t(
				HTML_HideToolTip_t* pParam);  // 92
} /* size: 21, variables: 1, inline expansions: 1 (17 bytes) */

// <0014547A> sbox/steam/steamcallbacks.h:92
inline void CSteamEngine::OnHTML_HideToolTip_t(HTML_HideToolTip_t* pParam)
{
} /* size: 0 */

// <001494B0> sbox/steam/steamcallbacks.h:93
// function call: 1
void CCallbackInternal_OnHTML_BrowserRestarted_t::~CCallbackInternal_OnHTML_BrowserRestarted_t()
{
	CCallbackImpl<8>::~CCallbackImpl(); // 93
} /* size: 29, inline expansions: 1 (21 bytes) */

// <001493E1> sbox/steam/steamcallbacks.h:93
// function calls: 2
void CCallbackInternal_OnHTML_BrowserRestarted_t::~CCallbackInternal_OnHTML_BrowserRestarted_t()
{
	CCallbackImpl<8>::~CCallbackImpl(); // 93
	CCallbackInternal_OnHTML_BrowserRestarted_t::~CCallbackInternal_OnHTML_BrowserRestarted_t(); // 93
} /* size: 64, inline expansions: 2 (58 bytes) */

// <001493C5> sbox/steam/steamcallbacks.h:93
inline void CCallbackInternal_OnHTML_BrowserRestarted_t::~CCallbackInternal_OnHTML_BrowserRestarted_t()
{
} /* size: 0 */

// <00145463> sbox/steam/steamcallbacks.h:93
void CCallbackInternal_OnHTML_BrowserRestarted_t::CCallbackInternal_OnHTML_BrowserRestarted_t()
{
} /* size: 0 */

// <0014544A> sbox/steam/steamcallbacks.h:93
inline void CCallbackInternal_OnHTML_BrowserRestarted_t::CCallbackInternal_OnHTML_BrowserRestarted_t()
{
} /* size: 0 */

// <0014538A> sbox/steam/steamcallbacks.h:93
// variable: 1
// function call: 1
void CCallbackInternal_OnHTML_BrowserRestarted_t::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 93
	CSteamEngine::OnHTML_BrowserRestarted_t(
					HTML_BrowserRestarted_t* pParam);  // 93
} /* size: 21, variables: 1, inline expansions: 1 (17 bytes) */

// <00145365> sbox/steam/steamcallbacks.h:93
inline void CSteamEngine::OnHTML_BrowserRestarted_t(HTML_BrowserRestarted_t* pParam)
{
} /* size: 0 */

// <00149360> sbox/steam/steamcallbacks.h:95
// function call: 1
void CCallbackInternal_OnGetTicketForWebApiResponse::~CCallbackInternal_OnGetTicketForWebApiResponse()
{
	CCallbackImpl<2572>::~CCallbackImpl(); // 95
} /* size: 29, inline expansions: 1 (21 bytes) */

// <00149291> sbox/steam/steamcallbacks.h:95
// function calls: 2
void CCallbackInternal_OnGetTicketForWebApiResponse::~CCallbackInternal_OnGetTicketForWebApiResponse()
{
	CCallbackImpl<2572>::~CCallbackImpl(); // 95
	CCallbackInternal_OnGetTicketForWebApiResponse::~CCallbackInternal_OnGetTicketForWebApiResponse(); // 95
} /* size: 64, inline expansions: 2 (58 bytes) */

// <00149275> sbox/steam/steamcallbacks.h:95
inline void CCallbackInternal_OnGetTicketForWebApiResponse::~CCallbackInternal_OnGetTicketForWebApiResponse()
{
} /* size: 0 */

// <0014534E> sbox/steam/steamcallbacks.h:95
void CCallbackInternal_OnGetTicketForWebApiResponse::CCallbackInternal_OnGetTicketForWebApiResponse()
{
} /* size: 0 */

// <00145335> sbox/steam/steamcallbacks.h:95
inline void CCallbackInternal_OnGetTicketForWebApiResponse::CCallbackInternal_OnGetTicketForWebApiResponse()
{
} /* size: 0 */

// <0014528B> sbox/steam/steamcallbacks.h:95
// variable: 1
// function call: 1
void CCallbackInternal_OnGetTicketForWebApiResponse::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 95
	CSteamEngine::OnGetTicketForWebApiResponse(
					GetTicketForWebApiResponse_t* pParam);  // 95
} /* size: 27, variables: 1, inline expansions: 1 (17 bytes) */

// <00145266> sbox/steam/steamcallbacks.h:95
inline void CSteamEngine::OnGetTicketForWebApiResponse(GetTicketForWebApiResponse_t* pParam)
{
} /* size: 0 */

// <00149210> sbox/steam/steamcallbacks.h:100
// function call: 1
void CCallbackInternal_OnLobbyInvite::~CCallbackInternal_OnLobbyInvite()
{
	CCallbackImpl<24>::~CCallbackImpl(); // 100
} /* size: 29, inline expansions: 1 (21 bytes) */

// <00149141> sbox/steam/steamcallbacks.h:100
// function calls: 2
void CCallbackInternal_OnLobbyInvite::~CCallbackInternal_OnLobbyInvite()
{
	CCallbackImpl<24>::~CCallbackImpl(); // 100
	CCallbackInternal_OnLobbyInvite::~CCallbackInternal_OnLobbyInvite(); // 100
} /* size: 64, inline expansions: 2 (58 bytes) */

// <00149125> sbox/steam/steamcallbacks.h:100
inline void CCallbackInternal_OnLobbyInvite::~CCallbackInternal_OnLobbyInvite()
{
} /* size: 0 */

// <0014524F> sbox/steam/steamcallbacks.h:100
void CCallbackInternal_OnLobbyInvite::CCallbackInternal_OnLobbyInvite()
{
} /* size: 0 */

// <00145236> sbox/steam/steamcallbacks.h:100
inline void CCallbackInternal_OnLobbyInvite::CCallbackInternal_OnLobbyInvite()
{
} /* size: 0 */

// <0014513A> sbox/steam/steamcallbacks.h:100
// variable: 1
// function calls: 3
void CCallbackInternal_OnLobbyInvite::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 100
	SteamUtils(void); // 102
	CSteamEngine::OnLobbyInvite(
			LobbyInvite_t* pParam);  // 100
	CSteamEngine::OnLobbyInvite(
			LobbyInvite_t* pParam);  // 100
} /* size: 72, variables: 1, inline expansions: 3 (71 bytes) */

// <00145115> sbox/steam/steamcallbacks.h:100
inline void CSteamEngine::OnLobbyInvite(LobbyInvite_t* pParam)
{
} /* size: 0 */

// <0015FCD2> sbox/steam/steamcallbacks.h:107
// variable: 1
// function calls: 2
void CCallbackInternal_LobbyChatUpdate::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 107
	CSteamEngine::LobbyChatUpdate(
			LobbyChatUpdate_t* pParam);  // 107
	CSteamEngine::LobbyChatUpdate(
			LobbyChatUpdate_t* pParam);  // 107
} /* size: 114, variables: 1, inline expansions: 2 (128 bytes) */

// <001490C0> sbox/steam/steamcallbacks.h:107
// function call: 1
void CCallbackInternal_LobbyChatUpdate::~CCallbackInternal_LobbyChatUpdate()
{
	CCallbackImpl<28>::~CCallbackImpl(); // 107
} /* size: 29, inline expansions: 1 (21 bytes) */

// <00148FF1> sbox/steam/steamcallbacks.h:107
// function calls: 2
void CCallbackInternal_LobbyChatUpdate::~CCallbackInternal_LobbyChatUpdate()
{
	CCallbackImpl<28>::~CCallbackImpl(); // 107
	CCallbackInternal_LobbyChatUpdate::~CCallbackInternal_LobbyChatUpdate(); // 107
} /* size: 64, inline expansions: 2 (58 bytes) */

// <00148FD5> sbox/steam/steamcallbacks.h:107
inline void CCallbackInternal_LobbyChatUpdate::~CCallbackInternal_LobbyChatUpdate()
{
} /* size: 0 */

// <001450CB> sbox/steam/steamcallbacks.h:107
void CCallbackInternal_LobbyChatUpdate::CCallbackInternal_LobbyChatUpdate()
{
} /* size: 0 */

// <001450B2> sbox/steam/steamcallbacks.h:107
inline void CCallbackInternal_LobbyChatUpdate::CCallbackInternal_LobbyChatUpdate()
{
} /* size: 0 */

// <00145080> sbox/steam/steamcallbacks.h:107
// variable: 1
inline void CCallbackInternal_LobbyChatUpdate::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 107
} /* size: 0, variables: 1 */

// <0014505B> sbox/steam/steamcallbacks.h:107
inline void CSteamEngine::LobbyChatUpdate(LobbyChatUpdate_t* pParam)
{
} /* size: 0 */

// <00148F70> sbox/steam/steamcallbacks.h:123
// function call: 1
void CCallbackInternal_LobbyEnter::~CCallbackInternal_LobbyEnter()
{
	CCallbackImpl<20>::~CCallbackImpl(); // 123
} /* size: 29, inline expansions: 1 (21 bytes) */

// <00148EA1> sbox/steam/steamcallbacks.h:123
// function calls: 2
void CCallbackInternal_LobbyEnter::~CCallbackInternal_LobbyEnter()
{
	CCallbackImpl<20>::~CCallbackImpl(); // 123
	CCallbackInternal_LobbyEnter::~CCallbackInternal_LobbyEnter(); // 123
} /* size: 64, inline expansions: 2 (58 bytes) */

// <00148E85> sbox/steam/steamcallbacks.h:123
inline void CCallbackInternal_LobbyEnter::~CCallbackInternal_LobbyEnter()
{
} /* size: 0 */

// <00145044> sbox/steam/steamcallbacks.h:123
void CCallbackInternal_LobbyEnter::CCallbackInternal_LobbyEnter()
{
} /* size: 0 */

// <0014502B> sbox/steam/steamcallbacks.h:123
inline void CCallbackInternal_LobbyEnter::CCallbackInternal_LobbyEnter()
{
} /* size: 0 */

// <00144F66> sbox/steam/steamcallbacks.h:123
// variable: 1
// function call: 1
void CCallbackInternal_LobbyEnter::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 123
	CSteamEngine::LobbyEnter(
			LobbyEnter_t* pParam);  // 123
} /* size: 46, variables: 1, inline expansions: 1 (25 bytes) */

// <00144F41> sbox/steam/steamcallbacks.h:123
inline void CSteamEngine::LobbyEnter(LobbyEnter_t* pParam)
{
} /* size: 0 */

// <00148E20> sbox/steam/steamcallbacks.h:129
// function call: 1
void CCallbackInternal_LobbyCreated::~CCallbackInternal_LobbyCreated()
{
	CCallbackImpl<12>::~CCallbackImpl(); // 129
} /* size: 29, inline expansions: 1 (21 bytes) */

// <00148D51> sbox/steam/steamcallbacks.h:129
// function calls: 2
void CCallbackInternal_LobbyCreated::~CCallbackInternal_LobbyCreated()
{
	CCallbackImpl<12>::~CCallbackImpl(); // 129
	CCallbackInternal_LobbyCreated::~CCallbackInternal_LobbyCreated(); // 129
} /* size: 64, inline expansions: 2 (58 bytes) */

// <00148D35> sbox/steam/steamcallbacks.h:129
inline void CCallbackInternal_LobbyCreated::~CCallbackInternal_LobbyCreated()
{
} /* size: 0 */

// <00144F2A> sbox/steam/steamcallbacks.h:129
void CCallbackInternal_LobbyCreated::CCallbackInternal_LobbyCreated()
{
} /* size: 0 */

// <00144F11> sbox/steam/steamcallbacks.h:129
inline void CCallbackInternal_LobbyCreated::CCallbackInternal_LobbyCreated()
{
} /* size: 0 */

// <00144E4C> sbox/steam/steamcallbacks.h:129
// variable: 1
// function call: 1
void CCallbackInternal_LobbyCreated::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 129
	CSteamEngine::LobbyCreated(
			LobbyCreated_t* pParam);  // 129
} /* size: 47, variables: 1, inline expansions: 1 (26 bytes) */

// <00144E27> sbox/steam/steamcallbacks.h:129
inline void CSteamEngine::LobbyCreated(LobbyCreated_t* pParam)
{
} /* size: 0 */

// <00148CD0> sbox/steam/steamcallbacks.h:135
// function call: 1
void CCallbackInternal_LobbyGameCreated::~CCallbackInternal_LobbyGameCreated()
{
	CCallbackImpl<24>::~CCallbackImpl(); // 135
} /* size: 29, inline expansions: 1 (21 bytes) */

// <00148C01> sbox/steam/steamcallbacks.h:135
// function calls: 2
void CCallbackInternal_LobbyGameCreated::~CCallbackInternal_LobbyGameCreated()
{
	CCallbackImpl<24>::~CCallbackImpl(); // 135
	CCallbackInternal_LobbyGameCreated::~CCallbackInternal_LobbyGameCreated(); // 135
} /* size: 64, inline expansions: 2 (58 bytes) */

// <00148BE5> sbox/steam/steamcallbacks.h:135
inline void CCallbackInternal_LobbyGameCreated::~CCallbackInternal_LobbyGameCreated()
{
} /* size: 0 */

// <00144E10> sbox/steam/steamcallbacks.h:135
void CCallbackInternal_LobbyGameCreated::CCallbackInternal_LobbyGameCreated()
{
} /* size: 0 */

// <00144DF7> sbox/steam/steamcallbacks.h:135
inline void CCallbackInternal_LobbyGameCreated::CCallbackInternal_LobbyGameCreated()
{
} /* size: 0 */

// <00144D42> sbox/steam/steamcallbacks.h:135
// variable: 1
// function call: 1
void CCallbackInternal_LobbyGameCreated::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 135
	CSteamEngine::LobbyGameCreated(
			LobbyGameCreated_t* pParam);  // 135
} /* size: 18, variables: 1, inline expansions: 1 (14 bytes) */

// <00144D1D> sbox/steam/steamcallbacks.h:135
inline void CSteamEngine::LobbyGameCreated(LobbyGameCreated_t* pParam)
{
} /* size: 0 */

// <00148B80> sbox/steam/steamcallbacks.h:140
// function call: 1
void CCallbackInternal_LobbyDataUpdate::~CCallbackInternal_LobbyDataUpdate()
{
	CCallbackImpl<20>::~CCallbackImpl(); // 140
} /* size: 29, inline expansions: 1 (21 bytes) */

// <00148AB1> sbox/steam/steamcallbacks.h:140
// function calls: 2
void CCallbackInternal_LobbyDataUpdate::~CCallbackInternal_LobbyDataUpdate()
{
	CCallbackImpl<20>::~CCallbackImpl(); // 140
	CCallbackInternal_LobbyDataUpdate::~CCallbackInternal_LobbyDataUpdate(); // 140
} /* size: 64, inline expansions: 2 (58 bytes) */

// <00148A95> sbox/steam/steamcallbacks.h:140
inline void CCallbackInternal_LobbyDataUpdate::~CCallbackInternal_LobbyDataUpdate()
{
} /* size: 0 */

// <00144D06> sbox/steam/steamcallbacks.h:140
void CCallbackInternal_LobbyDataUpdate::CCallbackInternal_LobbyDataUpdate()
{
} /* size: 0 */

// <00144CED> sbox/steam/steamcallbacks.h:140
inline void CCallbackInternal_LobbyDataUpdate::CCallbackInternal_LobbyDataUpdate()
{
} /* size: 0 */

// <00144C15> sbox/steam/steamcallbacks.h:140
// variable: 1
// function calls: 2
void CCallbackInternal_LobbyDataUpdate::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 140
	CSteamEngine::LobbyDataUpdate(
			LobbyDataUpdate_t* pParam);  // 140
	CSteamEngine::LobbyDataUpdate(
			LobbyDataUpdate_t* pParam);  // 140
} /* size: 31, variables: 1, inline expansions: 2 (36 bytes) */

// <00144BF0> sbox/steam/steamcallbacks.h:140
inline void CSteamEngine::LobbyDataUpdate(LobbyDataUpdate_t* pParam)
{
} /* size: 0 */

// <0015FBB4> sbox/steam/steamcallbacks.h:147
// variable: 1
// function calls: 4
void CCallbackInternal_SteamNetworkingMessagesSessionRequest::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 147
	SteamNetworkingMessages_SteamAPI(void); // 193
	SteamNetworkingMessages(void); // 149
	SteamNetworkingIdentity::GetSteamID64(); // 154
	CSteamEngine::SteamNetworkingMessagesSessionRequest(
						SteamNetworkingMessagesSessionRequest_t* pParam);  // 147
} /* size: 85, variables: 1, inline expansions: 4 (109 bytes) */

// <00148A30> sbox/steam/steamcallbacks.h:147
// function call: 1
void CCallbackInternal_SteamNetworkingMessagesSessionRequest::~CCallbackInternal_SteamNetworkingMessagesSessionRequest()
{
	CCallbackImpl<136>::~CCallbackImpl(); // 147
} /* size: 29, inline expansions: 1 (21 bytes) */

// <00148961> sbox/steam/steamcallbacks.h:147
// function calls: 2
void CCallbackInternal_SteamNetworkingMessagesSessionRequest::~CCallbackInternal_SteamNetworkingMessagesSessionRequest()
{
	CCallbackImpl<136>::~CCallbackImpl(); // 147
	CCallbackInternal_SteamNetworkingMessagesSessionRequest::~CCallbackInternal_SteamNetworkingMessagesSessionRequest(); // 147
} /* size: 64, inline expansions: 2 (58 bytes) */

// <00148945> sbox/steam/steamcallbacks.h:147
inline void CCallbackInternal_SteamNetworkingMessagesSessionRequest::~CCallbackInternal_SteamNetworkingMessagesSessionRequest()
{
} /* size: 0 */

// <00144BA6> sbox/steam/steamcallbacks.h:147
void CCallbackInternal_SteamNetworkingMessagesSessionRequest::CCallbackInternal_SteamNetworkingMessagesSessionRequest()
{
} /* size: 0 */

// <00144B8D> sbox/steam/steamcallbacks.h:147
inline void CCallbackInternal_SteamNetworkingMessagesSessionRequest::CCallbackInternal_SteamNetworkingMessagesSessionRequest()
{
} /* size: 0 */

// <00144B5B> sbox/steam/steamcallbacks.h:147
// variable: 1
inline void CCallbackInternal_SteamNetworkingMessagesSessionRequest::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 147
} /* size: 0, variables: 1 */

// <00144B1D> sbox/steam/steamcallbacks.h:147
// variable: 1
inline void CSteamEngine::SteamNetworkingMessagesSessionRequest(SteamNetworkingMessagesSessionRequest_t* pParam)
{
	ISteamNetworkingMessages* msg; // 149
} /* size: 0, variables: 1 */

// <0015FDA4> sbox/steam/steamcallbacks.h:162
// variable: 1
// function calls: 8
void CCallbackInternal_SteamNetworkingMessagesSessionFailed::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 162
	SteamUser(void); // 164
	SteamNetworkingIdentity::GetSteamID64(); // 1850
	CSteamID::SetFromUint64(
			uint64 ulSteamID);  // 531
	CSteamID::CSteamID(
		uint64 ulSteamID);  // 1850
	SteamNetworkingIdentity::GetSteamID(); // 164
	CSteamID::operator==(
			const CSteamID& val);  // 164
	SteamNetworkingIdentity::GetSteamID64(); // 169
	CSteamEngine::SteamNetworkingMessagesSessionFailed(
						SteamNetworkingMessagesSessionFailed_t* pParam);  // 162
} /* size: 134, variables: 1, inline expansions: 8 (167 bytes) */

// <001488E0> sbox/steam/steamcallbacks.h:162
// function call: 1
void CCallbackInternal_SteamNetworkingMessagesSessionFailed::~CCallbackInternal_SteamNetworkingMessagesSessionFailed()
{
	CCallbackImpl<696>::~CCallbackImpl(); // 162
} /* size: 29, inline expansions: 1 (21 bytes) */

// <00148811> sbox/steam/steamcallbacks.h:162
// function calls: 2
void CCallbackInternal_SteamNetworkingMessagesSessionFailed::~CCallbackInternal_SteamNetworkingMessagesSessionFailed()
{
	CCallbackImpl<696>::~CCallbackImpl(); // 162
	CCallbackInternal_SteamNetworkingMessagesSessionFailed::~CCallbackInternal_SteamNetworkingMessagesSessionFailed(); // 162
} /* size: 64, inline expansions: 2 (58 bytes) */

// <001487F5> sbox/steam/steamcallbacks.h:162
inline void CCallbackInternal_SteamNetworkingMessagesSessionFailed::~CCallbackInternal_SteamNetworkingMessagesSessionFailed()
{
} /* size: 0 */

// <00144AD3> sbox/steam/steamcallbacks.h:162
void CCallbackInternal_SteamNetworkingMessagesSessionFailed::CCallbackInternal_SteamNetworkingMessagesSessionFailed()
{
} /* size: 0 */

// <00144ABA> sbox/steam/steamcallbacks.h:162
inline void CCallbackInternal_SteamNetworkingMessagesSessionFailed::CCallbackInternal_SteamNetworkingMessagesSessionFailed()
{
} /* size: 0 */

// <00144A88> sbox/steam/steamcallbacks.h:162
// variable: 1
inline void CCallbackInternal_SteamNetworkingMessagesSessionFailed::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 162
} /* size: 0, variables: 1 */

// <00144A63> sbox/steam/steamcallbacks.h:162
inline void CSteamEngine::SteamNetworkingMessagesSessionFailed(SteamNetworkingMessagesSessionFailed_t* pParam)
{
} /* size: 0 */

// <00148790> sbox/steam/steamcallbacks.h:172
// function call: 1
void CCallbackInternal_LobbyChatMsg::~CCallbackInternal_LobbyChatMsg()
{
	CCallbackImpl<24>::~CCallbackImpl(); // 172
} /* size: 29, inline expansions: 1 (21 bytes) */

// <001486C1> sbox/steam/steamcallbacks.h:172
// function calls: 2
void CCallbackInternal_LobbyChatMsg::~CCallbackInternal_LobbyChatMsg()
{
	CCallbackImpl<24>::~CCallbackImpl(); // 172
	CCallbackInternal_LobbyChatMsg::~CCallbackInternal_LobbyChatMsg(); // 172
} /* size: 64, inline expansions: 2 (58 bytes) */

// <001486A5> sbox/steam/steamcallbacks.h:172
inline void CCallbackInternal_LobbyChatMsg::~CCallbackInternal_LobbyChatMsg()
{
} /* size: 0 */

// <00144A4C> sbox/steam/steamcallbacks.h:172
void CCallbackInternal_LobbyChatMsg::CCallbackInternal_LobbyChatMsg()
{
} /* size: 0 */

// <00144A33> sbox/steam/steamcallbacks.h:172
inline void CCallbackInternal_LobbyChatMsg::CCallbackInternal_LobbyChatMsg()
{
} /* size: 0 */

// <0014483D> sbox/steam/steamcallbacks.h:172
// variable: 1
// function calls: 5
void CCallbackInternal_LobbyChatMsg::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 172
	memset(void* __dest,
		int __ch,
		size_t __len);  // 177
	SteamMatchmaking(void); // 178
	CSteamID::SetFromUint64(
			uint64 ulSteamID);  // 531
	CSteamID::CSteamID(
		uint64 ulSteamID);  // 178
	CSteamEngine::LobbyChatMsg(
			LobbyChatMsg_t* pParam);  // 172
} /* size: 117, variables: 1, inline expansions: 5 (130 bytes) */

// <001447CE> sbox/steam/steamcallbacks.h:172
// variables: 3
inline void CSteamEngine::LobbyChatMsg(LobbyChatMsg_t* pParam)
{
	const int  bufferSize; // 174
	char message; // 175
	int length; // 178
} /* size: 0, variables: 3 */

// <00148640> sbox/steam/steamcallbacks.h:183
// function call: 1
void CCallbackInternal_SteamInventoryDefinitionUpdate::~CCallbackInternal_SteamInventoryDefinitionUpdate()
{
	CCallbackImpl<1>::~CCallbackImpl(); // 183
} /* size: 29, inline expansions: 1 (21 bytes) */

// <00148571> sbox/steam/steamcallbacks.h:183
// function calls: 2
void CCallbackInternal_SteamInventoryDefinitionUpdate::~CCallbackInternal_SteamInventoryDefinitionUpdate()
{
	CCallbackImpl<1>::~CCallbackImpl(); // 183
	CCallbackInternal_SteamInventoryDefinitionUpdate::~CCallbackInternal_SteamInventoryDefinitionUpdate(); // 183
} /* size: 64, inline expansions: 2 (58 bytes) */

// <00148555> sbox/steam/steamcallbacks.h:183
inline void CCallbackInternal_SteamInventoryDefinitionUpdate::~CCallbackInternal_SteamInventoryDefinitionUpdate()
{
} /* size: 0 */

// <001447B7> sbox/steam/steamcallbacks.h:183
void CCallbackInternal_SteamInventoryDefinitionUpdate::CCallbackInternal_SteamInventoryDefinitionUpdate()
{
} /* size: 0 */

// <0014479E> sbox/steam/steamcallbacks.h:183
inline void CCallbackInternal_SteamInventoryDefinitionUpdate::CCallbackInternal_SteamInventoryDefinitionUpdate()
{
} /* size: 0 */

// <001446F7> sbox/steam/steamcallbacks.h:183
// variable: 1
// function call: 1
void CCallbackInternal_SteamInventoryDefinitionUpdate::Run(void* pvParam)
{
	CSteamEngine* pOuter; // 183
	CSteamEngine::SteamInventoryDefinitionUpdate(
					SteamInventoryDefinitionUpdate_t* pParam);  // 183
} /* size: 9, variables: 1, inline expansions: 1 (5 bytes) */

// <001446D2> sbox/steam/steamcallbacks.h:183
inline void CSteamEngine::SteamInventoryDefinitionUpdate(SteamInventoryDefinitionUpdate_t* pParam)
{
} /* size: 0 */

// <001199DE> sbox/steam/steamcallbacks.h:190
// member functions: 20
// member variables: 3
// vtable entry: 1
// class size: 48
class CSteamGameServerEngine {
	/* sbox/steam/steamcallbacks.h:194 */
	void CSteamGameServerEngine(CSteamGameServerEngine* );
	/* sbox/steam/steamcallbacks.h:206 */
	struct CCallbackInternal_OnSteamServersConnected_t : CCallbackImpl<1> {
		/* class CCallbackImpl<1> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:206 */
		void CCallbackInternal_OnSteamServersConnected_t(CCallbackInternal_OnSteamServersConnected_t* );
		/* sbox/steam/steamcallbacks.h:206 */
		void CCallbackInternal_OnSteamServersConnected_t(CCallbackInternal_OnSteamServersConnected_t* , const CCallbackInternal_OnSteamServersConnected_t& );
		/* sbox/steam/steamcallbacks.h:206 */
		CCallbackInternal_OnSteamServersConnected_t& operator=(CCallbackInternal_OnSteamServersConnected_t* , const CCallbackInternal_OnSteamServersConnected_t& );
	private:
		/* sbox/steam/steamcallbacks.h:206 */
		virtual void Run(CCallbackInternal_OnSteamServersConnected_t* , void* );
		virtual void ~CCallbackInternal_OnSteamServersConnected_t(CCallbackInternal_OnSteamServersConnected_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_OnSteamServersConnected_t m_steamcallback_OnSteamServersConnected_t; /* 0 16 */
	/* sbox/steam/steamcallbacks.h:206 */
	void OnSteamServersConnected_t(CSteamGameServerEngine* , SteamServersConnected_t* );
	/* sbox/steam/steamcallbacks.h:207 */
	struct CCallbackInternal_OnSteamServerConnectFailure_t : CCallbackImpl<8> {
		/* class CCallbackImpl<8> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:207 */
		void CCallbackInternal_OnSteamServerConnectFailure_t(CCallbackInternal_OnSteamServerConnectFailure_t* );
		/* sbox/steam/steamcallbacks.h:207 */
		void CCallbackInternal_OnSteamServerConnectFailure_t(CCallbackInternal_OnSteamServerConnectFailure_t* , const CCallbackInternal_OnSteamServerConnectFailure_t& );
		/* sbox/steam/steamcallbacks.h:207 */
		CCallbackInternal_OnSteamServerConnectFailure_t& operator=(CCallbackInternal_OnSteamServerConnectFailure_t* , const CCallbackInternal_OnSteamServerConnectFailure_t& );
	private:
		/* sbox/steam/steamcallbacks.h:207 */
		virtual void Run(CCallbackInternal_OnSteamServerConnectFailure_t* , void* );
		virtual void ~CCallbackInternal_OnSteamServerConnectFailure_t(CCallbackInternal_OnSteamServerConnectFailure_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_OnSteamServerConnectFailure_t m_steamcallback_OnSteamServerConnectFailure_t; /* 16 16 */
	/* sbox/steam/steamcallbacks.h:207 */
	void OnSteamServerConnectFailure_t(CSteamGameServerEngine* , SteamServerConnectFailure_t* );
	/* sbox/steam/steamcallbacks.h:208 */
	struct CCallbackInternal_OnSteamServersDisconnected_t : CCallbackImpl<4> {
		/* class CCallbackImpl<4> <ancestor>; */ /* 0 16 */
		/* sbox/steam/steamcallbacks.h:208 */
		void CCallbackInternal_OnSteamServersDisconnected_t(CCallbackInternal_OnSteamServersDisconnected_t* );
		/* sbox/steam/steamcallbacks.h:208 */
		void CCallbackInternal_OnSteamServersDisconnected_t(CCallbackInternal_OnSteamServersDisconnected_t* , const CCallbackInternal_OnSteamServersDisconnected_t& );
		/* sbox/steam/steamcallbacks.h:208 */
		CCallbackInternal_OnSteamServersDisconnected_t& operator=(CCallbackInternal_OnSteamServersDisconnected_t* , const CCallbackInternal_OnSteamServersDisconnected_t& );
	private:
		/* sbox/steam/steamcallbacks.h:208 */
		virtual void Run(CCallbackInternal_OnSteamServersDisconnected_t* , void* );
		virtual void ~CCallbackInternal_OnSteamServersDisconnected_t(CCallbackInternal_OnSteamServersDisconnected_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CCallbackInternal_OnSteamServersDisconnected_t m_steamcallback_OnSteamServersDisconnected_t; /* 32 16 */
	/* sbox/steam/steamcallbacks.h:208 */
	void OnSteamServersDisconnected_t(CSteamGameServerEngine* , SteamServersDisconnected_t* );
	void CSteamGameServerEngine(class CSteamGameServerEngine *); /* linkage=_ZN22CSteamGameServerEngineC4Ev */
};

// <001442CB> sbox/steam/steamcallbacks.h:194
void CSteamGameServerEngine::CSteamGameServerEngine()
{
} /* size: 0 */

// <001442B2> sbox/steam/steamcallbacks.h:194
inline void CSteamGameServerEngine::CSteamGameServerEngine()
{
} /* size: 0 */

// <0014466D> sbox/steam/steamcallbacks.h:206
// function call: 1
void CCallbackInternal_OnSteamServersConnected_t::~CCallbackInternal_OnSteamServersConnected_t()
{
	CCallbackImpl<1>::~CCallbackImpl(); // 206
} /* size: 29, inline expansions: 1 (21 bytes) */

// <0014459E> sbox/steam/steamcallbacks.h:206
// function calls: 2
void CCallbackInternal_OnSteamServersConnected_t::~CCallbackInternal_OnSteamServersConnected_t()
{
	CCallbackImpl<1>::~CCallbackImpl(); // 206
	CCallbackInternal_OnSteamServersConnected_t::~CCallbackInternal_OnSteamServersConnected_t(); // 206
} /* size: 64, inline expansions: 2 (58 bytes) */

// <001441C3> sbox/steam/steamcallbacks.h:206
// variable: 1
// function call: 1
void CCallbackInternal_OnSteamServersConnected_t::Run(void* pvParam)
{
	CSteamGameServerEngine* pOuter; // 206
	CSteamGameServerEngine::OnSteamServersConnected_t(
					SteamServersConnected_t* pParam);  // 206
} /* size: 24, variables: 1, inline expansions: 1 (20 bytes) */

// <0014419E> sbox/steam/steamcallbacks.h:206
inline void CSteamGameServerEngine::OnSteamServersConnected_t(SteamServersConnected_t* pParam)
{
} /* size: 0 */

// <0014451D> sbox/steam/steamcallbacks.h:207
// function call: 1
void CCallbackInternal_OnSteamServerConnectFailure_t::~CCallbackInternal_OnSteamServerConnectFailure_t()
{
	CCallbackImpl<8>::~CCallbackImpl(); // 207
} /* size: 29, inline expansions: 1 (21 bytes) */

// <0014444E> sbox/steam/steamcallbacks.h:207
// function calls: 2
void CCallbackInternal_OnSteamServerConnectFailure_t::~CCallbackInternal_OnSteamServerConnectFailure_t()
{
	CCallbackImpl<8>::~CCallbackImpl(); // 207
	CCallbackInternal_OnSteamServerConnectFailure_t::~CCallbackInternal_OnSteamServerConnectFailure_t(); // 207
} /* size: 64, inline expansions: 2 (58 bytes) */

// <001440AF> sbox/steam/steamcallbacks.h:207
// variable: 1
// function call: 1
void CCallbackInternal_OnSteamServerConnectFailure_t::Run(void* pvParam)
{
	CSteamGameServerEngine* pOuter; // 207
	CSteamGameServerEngine::OnSteamServerConnectFailure_t(
					SteamServerConnectFailure_t* pParam);  // 207
} /* size: 24, variables: 1, inline expansions: 1 (20 bytes) */

// <0014408A> sbox/steam/steamcallbacks.h:207
inline void CSteamGameServerEngine::OnSteamServerConnectFailure_t(SteamServerConnectFailure_t* pParam)
{
} /* size: 0 */

// <001443CD> sbox/steam/steamcallbacks.h:208
// function call: 1
void CCallbackInternal_OnSteamServersDisconnected_t::~CCallbackInternal_OnSteamServersDisconnected_t()
{
	CCallbackImpl<4>::~CCallbackImpl(); // 208
} /* size: 29, inline expansions: 1 (21 bytes) */

// <001442FE> sbox/steam/steamcallbacks.h:208
// function calls: 2
void CCallbackInternal_OnSteamServersDisconnected_t::~CCallbackInternal_OnSteamServersDisconnected_t()
{
	CCallbackImpl<4>::~CCallbackImpl(); // 208
	CCallbackInternal_OnSteamServersDisconnected_t::~CCallbackInternal_OnSteamServersDisconnected_t(); // 208
} /* size: 64, inline expansions: 2 (58 bytes) */

// <00143F9B> sbox/steam/steamcallbacks.h:208
// variable: 1
// function call: 1
void CCallbackInternal_OnSteamServersDisconnected_t::Run(void* pvParam)
{
	CSteamGameServerEngine* pOuter; // 208
	CSteamGameServerEngine::OnSteamServersDisconnected_t(
					SteamServersDisconnected_t* pParam);  // 208
} /* size: 24, variables: 1, inline expansions: 1 (20 bytes) */

// <00143F76> sbox/steam/steamcallbacks.h:208
inline void CSteamGameServerEngine::OnSteamServersDisconnected_t(SteamServersDisconnected_t* pParam)
{
} /* size: 0 */

// <001419BB> sbox/steam/steamcallbacks.h:214
// function calls: 185
void InitSteamManagedCallbacks(bool isDedicatedServer)
{
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<16>::CCallbackImpl(); // 32
	CCallbackInternal_OnSteamAPICallCompleted_t::CCallbackInternal_OnSteamAPICallCompleted_t(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<12>::CCallbackImpl(); // 37
	CCallbackInternal_OnPersonaStateChange_t::CCallbackInternal_OnPersonaStateChange_t(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<264>::CCallbackImpl(); // 38
	CCallbackInternal_OnGameRichPresenceJoinRequested_t::CCallbackInternal_OnGameRichPresenceJoinRequested_t(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<12>::CCallbackImpl(); // 39
	CCallbackInternal_OnGameConnectedFriendChatMsg_t::CCallbackInternal_OnGameConnectedFriendChatMsg_t(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<20>::CCallbackImpl(); // 40
	CCallbackInternal_OnGameConnectedClanChatMsg_t::CCallbackInternal_OnGameConnectedClanChatMsg_t(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<12>::CCallbackImpl(); // 41
	CCallbackInternal_OnGameOverlayActivated_t::CCallbackInternal_OnGameOverlayActivated_t(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<128>::CCallbackImpl(); // 42
	CCallbackInternal_OnGameServerChangeRequested_t::CCallbackInternal_OnGameServerChangeRequested_t(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<16>::CCallbackImpl(); // 43
	CCallbackInternal_OnGameLobbyJoinRequested_t::CCallbackInternal_OnGameLobbyJoinRequested_t(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<12>::CCallbackImpl(); // 44
	CCallbackInternal_OnFriendRichPresenceUpdate_t::CCallbackInternal_OnFriendRichPresenceUpdate_t(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<1>::CCallbackImpl(); // 49
	CCallbackInternal_OnSteamServersConnected_t::CCallbackInternal_OnSteamServersConnected_t(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<8>::CCallbackImpl(); // 50
	CCallbackInternal_OnSteamServerConnectFailure_t::CCallbackInternal_OnSteamServerConnectFailure_t(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<4>::CCallbackImpl(); // 51
	CCallbackInternal_OnSteamServersDisconnected_t::CCallbackInternal_OnSteamServersDisconnected_t(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<16>::CCallbackImpl(); // 52
	CCallbackInternal_OnClientGameServerDeny_t::CCallbackInternal_OnClientGameServerDeny_t(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<1>::CCallbackImpl(); // 53
	CCallbackInternal_OnLicensesUpdated_t::CCallbackInternal_OnLicensesUpdated_t(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<20>::CCallbackImpl(); // 54
	CCallbackInternal_OnValidateAuthTicketResponse_t::CCallbackInternal_OnValidateAuthTicketResponse_t(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<16>::CCallbackImpl(); // 55
	CCallbackInternal_OnMicroTxnAuthorizationResponse_t::CCallbackInternal_OnMicroTxnAuthorizationResponse_t(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<256>::CCallbackImpl(); // 56
	CCallbackInternal_OnGameWebCallback_t::CCallbackInternal_OnGameWebCallback_t(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<8>::CCallbackImpl(); // 57
	CCallbackInternal_OnGetAuthSessionTicketResponse_t::CCallbackInternal_OnGetAuthSessionTicketResponse_t(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<32>::CCallbackImpl(); // 58
	CCallbackInternal_OnDurationControl_t::CCallbackInternal_OnDurationControl_t(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<2572>::CCallbackImpl(); // 59
	CCallbackInternal_OnGetTicketForWebApiResponse_t::CCallbackInternal_OnGetTicketForWebApiResponse_t(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<8>::CCallbackImpl(); // 64
	CCallbackInternal_OnSteamInputDeviceConnected_t::CCallbackInternal_OnSteamInputDeviceConnected_t(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<8>::CCallbackImpl(); // 65
	CCallbackInternal_OnSteamInputDeviceDisconnected_t::CCallbackInternal_OnSteamInputDeviceDisconnected_t(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<32>::CCallbackImpl(); // 66
	CCallbackInternal_OnSteamInputConfigurationLoaded_t::CCallbackInternal_OnSteamInputConfigurationLoaded_t(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<4>::CCallbackImpl(); // 71
	CCallbackInternal_OnHTML_BrowserReady_t::CCallbackInternal_OnHTML_BrowserReady_t(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<52>::CCallbackImpl(); // 72
	CCallbackInternal_OnHTML_NeedsPaint_t::CCallbackInternal_OnHTML_NeedsPaint_t(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<32>::CCallbackImpl(); // 73
	CCallbackInternal_OnHTML_StartRequest_t::CCallbackInternal_OnHTML_StartRequest_t(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<4>::CCallbackImpl(); // 74
	CCallbackInternal_OnHTML_CloseBrowser_t::CCallbackInternal_OnHTML_CloseBrowser_t(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<36>::CCallbackImpl(); // 75
	CCallbackInternal_OnHTML_URLChanged_t::CCallbackInternal_OnHTML_URLChanged_t(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<20>::CCallbackImpl(); // 76
	CCallbackInternal_OnHTML_FinishedRequest_t::CCallbackInternal_OnHTML_FinishedRequest_t(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<12>::CCallbackImpl(); // 77
	CCallbackInternal_OnHTML_OpenLinkInNewTab_t::CCallbackInternal_OnHTML_OpenLinkInNewTab_t(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<12>::CCallbackImpl(); // 78
	CCallbackInternal_OnHTML_ChangedTitle_t::CCallbackInternal_OnHTML_ChangedTitle_t(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<12>::CCallbackImpl(); // 79
	CCallbackInternal_OnHTML_SearchResults_t::CCallbackInternal_OnHTML_SearchResults_t(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<8>::CCallbackImpl(); // 80
	CCallbackInternal_OnHTML_CanGoBackAndForward_t::CCallbackInternal_OnHTML_CanGoBackAndForward_t(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<24>::CCallbackImpl(); // 81
	CCallbackInternal_OnHTML_HorizontalScroll_t::CCallbackInternal_OnHTML_HorizontalScroll_t(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<24>::CCallbackImpl(); // 82
	CCallbackInternal_OnHTML_VerticalScroll_t::CCallbackInternal_OnHTML_VerticalScroll_t(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<24>::CCallbackImpl(); // 83
	CCallbackInternal_OnHTML_LinkAtPosition_t::CCallbackInternal_OnHTML_LinkAtPosition_t(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<12>::CCallbackImpl(); // 84
	CCallbackInternal_OnHTML_JSAlert_t::CCallbackInternal_OnHTML_JSAlert_t(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<12>::CCallbackImpl(); // 85
	CCallbackInternal_OnHTML_JSConfirm_t::CCallbackInternal_OnHTML_JSConfirm_t(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<20>::CCallbackImpl(); // 86
	CCallbackInternal_OnHTML_FileOpenDialog_t::CCallbackInternal_OnHTML_FileOpenDialog_t(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<32>::CCallbackImpl(); // 87
	CCallbackInternal_OnHTML_NewWindow_t::CCallbackInternal_OnHTML_NewWindow_t(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<8>::CCallbackImpl(); // 88
	CCallbackInternal_OnHTML_SetCursor_t::CCallbackInternal_OnHTML_SetCursor_t(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<12>::CCallbackImpl(); // 89
	CCallbackInternal_OnHTML_StatusText_t::CCallbackInternal_OnHTML_StatusText_t(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<12>::CCallbackImpl(); // 90
	CCallbackInternal_OnHTML_ShowToolTip_t::CCallbackInternal_OnHTML_ShowToolTip_t(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<12>::CCallbackImpl(); // 91
	CCallbackInternal_OnHTML_UpdateToolTip_t::CCallbackInternal_OnHTML_UpdateToolTip_t(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<4>::CCallbackImpl(); // 92
	CCallbackInternal_OnHTML_HideToolTip_t::CCallbackInternal_OnHTML_HideToolTip_t(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<8>::CCallbackImpl(); // 93
	CCallbackInternal_OnHTML_BrowserRestarted_t::CCallbackInternal_OnHTML_BrowserRestarted_t(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<2572>::CCallbackImpl(); // 95
	CCallbackInternal_OnGetTicketForWebApiResponse::CCallbackInternal_OnGetTicketForWebApiResponse(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<24>::CCallbackImpl(); // 100
	CCallbackInternal_OnLobbyInvite::CCallbackInternal_OnLobbyInvite(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<28>::CCallbackImpl(); // 107
	CCallbackInternal_LobbyChatUpdate::CCallbackInternal_LobbyChatUpdate(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<20>::CCallbackImpl(); // 123
	CCallbackInternal_LobbyEnter::CCallbackInternal_LobbyEnter(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<12>::CCallbackImpl(); // 129
	CCallbackInternal_LobbyCreated::CCallbackInternal_LobbyCreated(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<24>::CCallbackImpl(); // 135
	CCallbackInternal_LobbyGameCreated::CCallbackInternal_LobbyGameCreated(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<20>::CCallbackImpl(); // 140
	CCallbackInternal_LobbyDataUpdate::CCallbackInternal_LobbyDataUpdate(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<136>::CCallbackImpl(); // 147
	CCallbackInternal_SteamNetworkingMessagesSessionRequest::CCallbackInternal_SteamNetworkingMessagesSessionRequest(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<696>::CCallbackImpl(); // 162
	CCallbackInternal_SteamNetworkingMessagesSessionFailed::CCallbackInternal_SteamNetworkingMessagesSessionFailed(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<24>::CCallbackImpl(); // 172
	CCallbackInternal_LobbyChatMsg::CCallbackInternal_LobbyChatMsg(); // 10
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<1>::CCallbackImpl(); // 183
	CCallbackInternal_SteamInventoryDefinitionUpdate::CCallbackInternal_SteamInventoryDefinitionUpdate(); // 10
	CSteamEngine::CSteamEngine(); // 219
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<1>::CCallbackImpl(); // 206
	CCallbackImpl<1>::SetGameserverFlag(); // 206
	CCallbackInternal_OnSteamServersConnected_t::CCallbackInternal_OnSteamServersConnected_t(); // 195
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<8>::CCallbackImpl(); // 207
	CCallbackImpl<8>::SetGameserverFlag(); // 207
	CCallbackInternal_OnSteamServerConnectFailure_t::CCallbackInternal_OnSteamServerConnectFailure_t(); // 195
	CCallbackBase::CCallbackBase(); // 163
	CCallbackImpl<4>::CCallbackImpl(); // 208
	CCallbackImpl<4>::SetGameserverFlag(); // 208
	CCallbackInternal_OnSteamServersDisconnected_t::CCallbackInternal_OnSteamServersDisconnected_t(); // 195
	CSteamGameServerEngine::CSteamGameServerEngine(); // 217
} /* size: 2499, inline expansions: 185 (6088 bytes) */

