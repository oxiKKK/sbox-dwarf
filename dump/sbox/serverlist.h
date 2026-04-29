
//
// sbox/serverlist.h
//
//	referenced by: libengine2.so
//
//	functions: 2
//	class: 1
//

// <01C03684> sbox/serverlist.h:13
// member functions: 16
// member variables: 6
// vtable entries: 3
// class size: 8,224
class CServerList : public ISteamMatchmakingServerListResponse {
public:
	/* class ISteamMatchmakingServerListResponse <ancestor>; */ /* 0 8 */
	void CServerList(CServerList* , const CServerList& );
	/* sbox/serverlist.cpp:6 */
	void CServerList(CServerList* , uint);
	/* sbox/serverlist.cpp:11 */
	void ~CServerList(CServerList* );
	/* sbox/serverlist.cpp:37 */
	void StartQuery(CServerList* );
	/* sbox/serverlist.cpp:26 */
	void AddFilter(CServerList* , const char* , const char* );
	int AppId; /* 8 4 */
	int FilterCount; /* 12 4 */
	MatchMakingKeyValuePair_t Filters[16]; /* 16 8192 */
	HServerListRequest CurrentRequest; /* 8208 8 */
	/* sbox/serverlist.cpp:64 */
	virtual void ServerResponded(CServerList* , HServerListRequest, int);
	/* sbox/serverlist.cpp:73 */
	virtual void ServerFailedToRespond(CServerList* , HServerListRequest, int);
	/* sbox/serverlist.cpp:78 */
	virtual void RefreshComplete(CServerList* , HServerListRequest, EMatchMakingServerResponse);
	ServerList managedObject; /* 8216 4 */
	void CServerList(class CServerList *, const class CServerList  &); /* linkage=_ZN11CServerListC4ERKS_ */
	void CServerList(class CServerList *, uint); /* linkage=_ZN11CServerListC4Ej */
	void ~CServerList(class CServerList *); /* linkage=_ZN11CServerListD4Ev */
	void StartQuery(class CServerList *); /* linkage=_ZN11CServerList10StartQueryEv */
	void AddFilter(class CServerList *, const char  *, const char  *); /* linkage=_ZN11CServerList9AddFilterEPKcS1_ */
	virtual void ServerResponded(class CServerList *, HServerListRequest, int); /* linkage=_ZN11CServerList15ServerRespondedEPvi */
	virtual void ServerFailedToRespond(class CServerList *, HServerListRequest, int); /* linkage=_ZN11CServerList21ServerFailedToRespondEPvi */
	virtual void RefreshComplete(class CServerList *, HServerListRequest, enum EMatchMakingServerResponse); /* linkage=_ZN11CServerList15RefreshCompleteEPv26EMatchMakingServerResponse */
};

// <01259E0A> sbox/serverlist.h:17
void CServerList::CServerList(unsigned int managedObject)
{
} /* size: 0 */

// <01259DEE> sbox/serverlist.h:18
void CServerList::~CServerList()
{
} /* size: 0 */

