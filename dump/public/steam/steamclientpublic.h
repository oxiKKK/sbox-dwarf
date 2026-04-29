
//
// public/steam/steamclientpublic.h
//
//	referenced by: libengine2.so
//
//	functions: 9
//	class: 1
//

// <000A39A1> ../public/steam/steamclientpublic.h:479
// member functions: 92
// member variable: 1
// class size: 8
class CSteamID {
	/* ../public/steam/steamclientpublic.h:802 */
	union SteamID_t {
		SteamIDComponent_t m_comp; /* 0 8 */
		uint64 m_unAll64Bits; /* 0 8 */
	};
	/* ../public/steam/steamclientpublic.h:486 */
	void CSteamID(CSteamID* );
	/* ../public/steam/steamclientpublic.h:501 */
	void CSteamID(CSteamID* , uint32, EUniverse, EAccountType);
	/* ../public/steam/steamclientpublic.h:514 */
	void CSteamID(CSteamID* , uint32, unsigned int, EUniverse, EAccountType);
	/* ../public/steam/steamclientpublic.h:529 */
	void CSteamID(CSteamID* , uint64);
	/* ../public/steam/steamclientpublic.h:534 */
	void CSteamID(CSteamID* , uint64_t);
	/* ../public/steam/steamclientpublic.h:547 */
	void Set(CSteamID* , uint32, EUniverse, EAccountType);
	/* ../public/steam/steamclientpublic.h:570 */
	void InstancedSet(CSteamID* , uint32, uint32, EUniverse, EAccountType);
	/* ../public/steam/steamclientpublic.h:583 */
	void FullSet(CSteamID* , uint64, EUniverse, EAccountType);
	/* ../public/steam/steamclientpublic.h:596 */
	void SetFromUint64(CSteamID* , uint64);
	/* ../public/steam/steamclientpublic.h:605 */
	void Clear(CSteamID* );
	/* ../public/steam/steamclientpublic.h:617 */
	uint64 ConvertToUint64(const CSteamID* );
	/* ../public/steam/steamclientpublic.h:630 */
	uint64 GetStaticAccountKey(const CSteamID* );
	/* ../public/steam/steamclientpublic.h:640 */
	void CreateBlankAnonLogon(CSteamID* , EUniverse);
	/* ../public/steam/steamclientpublic.h:652 */
	void CreateBlankAnonUserLogon(CSteamID* , EUniverse);
	/* ../public/steam/steamclientpublic.h:663 */
	bool BBlankAnonAccount(const CSteamID* );
	/* ../public/steam/steamclientpublic.h:671 */
	bool BGameServerAccount(const CSteamID* );
	/* ../public/steam/steamclientpublic.h:679 */
	bool BPersistentGameServerAccount(const CSteamID* );
	/* ../public/steam/steamclientpublic.h:687 */
	bool BAnonGameServerAccount(const CSteamID* );
	/* ../public/steam/steamclientpublic.h:695 */
	bool BContentServerAccount(const CSteamID* );
	/* ../public/steam/steamclientpublic.h:704 */
	bool BClanAccount(const CSteamID* );
	/* ../public/steam/steamclientpublic.h:713 */
	bool BChatAccount(const CSteamID* );
	/* ../public/steam/steamclientpublic.h:721 */
	bool IsLobby(const CSteamID* );
	/* ../public/steam/steamclientpublic.h:731 */
	bool BIndividualAccount(const CSteamID* );
	/* ../public/steam/steamclientpublic.h:740 */
	bool BAnonAccount(const CSteamID* );
	/* ../public/steam/steamclientpublic.h:748 */
	bool BAnonUserAccount(const CSteamID* );
	/* ../public/steam/steamclientpublic.h:756 */
	bool BConsoleUserAccount(const CSteamID* );
	/* ../public/steam/steamclientpublic.h:762 */
	void SetAccountID(CSteamID* , uint32);
	/* ../public/steam/steamclientpublic.h:763 */
	void SetAccountInstance(CSteamID* , uint32);
	/* ../public/steam/steamclientpublic.h:765 */
	AccountID_t GetAccountID(const CSteamID* );
	/* ../public/steam/steamclientpublic.h:766 */
	uint32 GetUnAccountInstance(const CSteamID* );
	/* ../public/steam/steamclientpublic.h:767 */
	EAccountType GetEAccountType(const CSteamID* );
	/* ../public/steam/steamclientpublic.h:768 */
	EUniverse GetEUniverse(const CSteamID* );
	/* ../public/steam/steamclientpublic.h:769 */
	void SetEUniverse(CSteamID* , EUniverse);
	/* ../public/steam/steamclientpublic.h:770 */
	bool IsValid(const CSteamID* );
	/* ../public/steam/steamclientpublic.h:773 */
	void CSteamID(CSteamID* , const char* , EUniverse);
	/* ../public/steam/steamclientpublic.h:774 */
	const char* Render(const CSteamID* );
	/* ../public/steam/steamclientpublic.h:775 */
	const char* Render(uint64);
	/* ../public/steam/steamclientpublic.h:777 */
	void SetFromString(CSteamID* , const char* , EUniverse);
	/* ../public/steam/steamclientpublic.h:783 */
	bool SetFromStringStrict(CSteamID* , const char* , EUniverse);
	/* ../public/steam/steamclientpublic.h:785 */
	bool operator==(const CSteamID* , const CSteamID& );
	/* ../public/steam/steamclientpublic.h:786 */
	bool operator!=(const CSteamID* , const CSteamID& );
	/* ../public/steam/steamclientpublic.h:787 */
	bool operator<(const CSteamID* , const CSteamID& );
	/* ../public/steam/steamclientpublic.h:788 */
	bool operator>(const CSteamID* , const CSteamID& );
	/* ../public/steam/steamclientpublic.h:791 */
	bool BValidExternalSteamID(const CSteamID* );
private:
	/* ../public/steam/steamclientpublic.h:798 */
	void CSteamID(CSteamID* , uint32);
	/* ../public/steam/steamclientpublic.h:799 */
	void CSteamID(CSteamID* , int32);
	union SteamID_t m_steamid; /* 0 8 */
	void CSteamID(class CSteamID *); /* linkage=_ZN8CSteamIDC4Ev */
	void CSteamID(class CSteamID *, uint32, enum EUniverse, enum EAccountType); /* linkage=_ZN8CSteamIDC4Ej9EUniverse12EAccountType */
	void CSteamID(class CSteamID *, uint32, unsigned int, enum EUniverse, enum EAccountType); /* linkage=_ZN8CSteamIDC4Ejj9EUniverse12EAccountType */
	void CSteamID(class CSteamID *, uint64); /* linkage=_ZN8CSteamIDC4Ey */
	void CSteamID(class CSteamID *, uint64_t); /* linkage=_ZN8CSteamIDC4Em */
	void Set(class CSteamID *, uint32, enum EUniverse, enum EAccountType); /* linkage=_ZN8CSteamID3SetEj9EUniverse12EAccountType */
	void InstancedSet(class CSteamID *, uint32, uint32, enum EUniverse, enum EAccountType); /* linkage=_ZN8CSteamID12InstancedSetEjj9EUniverse12EAccountType */
	void FullSet(class CSteamID *, uint64, enum EUniverse, enum EAccountType); /* linkage=_ZN8CSteamID7FullSetEy9EUniverse12EAccountType */
	void SetFromUint64(class CSteamID *, uint64); /* linkage=_ZN8CSteamID13SetFromUint64Ey */
	void Clear(class CSteamID *); /* linkage=_ZN8CSteamID5ClearEv */
	uint64 ConvertToUint64(const class CSteamID  *); /* linkage=_ZNK8CSteamID15ConvertToUint64Ev */
	uint64 GetStaticAccountKey(const class CSteamID  *); /* linkage=_ZNK8CSteamID19GetStaticAccountKeyEv */
	void CreateBlankAnonLogon(class CSteamID *, enum EUniverse); /* linkage=_ZN8CSteamID20CreateBlankAnonLogonE9EUniverse */
	void CreateBlankAnonUserLogon(class CSteamID *, enum EUniverse); /* linkage=_ZN8CSteamID24CreateBlankAnonUserLogonE9EUniverse */
	bool BBlankAnonAccount(const class CSteamID  *); /* linkage=_ZNK8CSteamID17BBlankAnonAccountEv */
	bool BGameServerAccount(const class CSteamID  *); /* linkage=_ZNK8CSteamID18BGameServerAccountEv */
	bool BPersistentGameServerAccount(const class CSteamID  *); /* linkage=_ZNK8CSteamID28BPersistentGameServerAccountEv */
	bool BAnonGameServerAccount(const class CSteamID  *); /* linkage=_ZNK8CSteamID22BAnonGameServerAccountEv */
	bool BContentServerAccount(const class CSteamID  *); /* linkage=_ZNK8CSteamID21BContentServerAccountEv */
	bool BClanAccount(const class CSteamID  *); /* linkage=_ZNK8CSteamID12BClanAccountEv */
	bool BChatAccount(const class CSteamID  *); /* linkage=_ZNK8CSteamID12BChatAccountEv */
	bool IsLobby(const class CSteamID  *); /* linkage=_ZNK8CSteamID7IsLobbyEv */
	bool BIndividualAccount(const class CSteamID  *); /* linkage=_ZNK8CSteamID18BIndividualAccountEv */
	bool BAnonAccount(const class CSteamID  *); /* linkage=_ZNK8CSteamID12BAnonAccountEv */
	bool BAnonUserAccount(const class CSteamID  *); /* linkage=_ZNK8CSteamID16BAnonUserAccountEv */
	bool BConsoleUserAccount(const class CSteamID  *); /* linkage=_ZNK8CSteamID19BConsoleUserAccountEv */
	void SetAccountID(class CSteamID *, uint32); /* linkage=_ZN8CSteamID12SetAccountIDEj */
	void SetAccountInstance(class CSteamID *, uint32); /* linkage=_ZN8CSteamID18SetAccountInstanceEj */
	AccountID_t GetAccountID(const class CSteamID  *); /* linkage=_ZNK8CSteamID12GetAccountIDEv */
	uint32 GetUnAccountInstance(const class CSteamID  *); /* linkage=_ZNK8CSteamID20GetUnAccountInstanceEv */
	enum EAccountType GetEAccountType(const class CSteamID  *); /* linkage=_ZNK8CSteamID15GetEAccountTypeEv */
	enum EUniverse GetEUniverse(const class CSteamID  *); /* linkage=_ZNK8CSteamID12GetEUniverseEv */
	void SetEUniverse(class CSteamID *, enum EUniverse); /* linkage=_ZN8CSteamID12SetEUniverseE9EUniverse */
	bool IsValid(const class CSteamID  *); /* linkage=_ZNK8CSteamID7IsValidEv */
	void CSteamID(class CSteamID *, const char  *, enum EUniverse); /* linkage=_ZN8CSteamIDC4EPKc9EUniverse */
	const char  * Render(const class CSteamID  *); /* linkage=_ZNK8CSteamID6RenderEv */
	const char  * Render(uint64); /* linkage=_ZN8CSteamID6RenderEy */
	void SetFromString(class CSteamID *, const char  *, enum EUniverse); /* linkage=_ZN8CSteamID13SetFromStringEPKc9EUniverse */
	bool SetFromStringStrict(class CSteamID *, const char  *, enum EUniverse); /* linkage=_ZN8CSteamID19SetFromStringStrictEPKc9EUniverse */
	bool operator==(const class CSteamID  *, const class CSteamID  &); /* linkage=_ZNK8CSteamIDeqERKS_ */
	bool operator!=(const class CSteamID  *, const class CSteamID  &); /* linkage=_ZNK8CSteamIDneERKS_ */
	bool operator<(const class CSteamID  *, const class CSteamID  &); /* linkage=_ZNK8CSteamIDltERKS_ */
	bool operator>(const class CSteamID  *, const class CSteamID  &); /* linkage=_ZNK8CSteamIDgtERKS_ */
	bool BValidExternalSteamID(const class CSteamID  *); /* linkage=_ZNK8CSteamID21BValidExternalSteamIDEv */
	void CSteamID(class CSteamID *, uint32); /* linkage=_ZN8CSteamIDC4Ej */
	void CSteamID(class CSteamID *, int32); /* linkage=_ZN8CSteamIDC4Ei */
};

// <01F8AFCC> ../public/steam/steamclientpublic.h:529
void CSteamID::CSteamID(uint64 ulSteamID)
{
} /* size: 0 */

// <01F8AFA6> ../public/steam/steamclientpublic.h:529
inline void CSteamID::CSteamID(uint64 ulSteamID)
{
} /* size: 0 */

// <007EA665> ../public/steam/steamclientpublic.h:570
inline void CSteamID::InstancedSet(uint32 unAccountID, uint32 unInstance, EUniverse eUniverse, EAccountType eAccountType)
{
} /* size: 0 */

// <01F8AF80> ../public/steam/steamclientpublic.h:596
inline void CSteamID::SetFromUint64(uint64 ulSteamID)
{
} /* size: 0 */

// <01C1DC98> ../public/steam/steamclientpublic.h:617
inline void CSteamID::ConvertToUint64()
{
} /* size: 0 */

// <007EA619> ../public/steam/steamclientpublic.h:640
inline void CSteamID::CreateBlankAnonLogon(EUniverse eUniverse)
{
} /* size: 0 */

// <01F8AF67> ../public/steam/steamclientpublic.h:765
inline void CSteamID::GetAccountID()
{
} /* size: 0 */

// <0015C7C5> ../public/steam/steamclientpublic.h:785
inline void CSteamID::operator==(const CSteamID& val)
{
} /* size: 0 */

// <004D4163> ../public/steam/steamclientpublic.h:823
inline void CSteamID::IsValid()
{
} /* size: 0 */

