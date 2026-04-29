
//
// public/steam/steamnetworkingtypes.h
//
//	referenced by: libengine2.so
//
//	functions: 8
//	structs: 8
//

// <000DC725> ../public/steam/steamnetworkingtypes.h:202
// member functions: 13
// member variables: 2
// struct size: 18
struct SteamNetworkingIPAddr {
	/* ../public/steam/steamnetworkingtypes.h:231 */
	struct IPv4MappedAddress {
		uint64 m_8zeros; /* 0 8 */
		uint16 m_0000; /* 8 2 */
		uint16 m_ffff; /* 10 2 */
		uint8 m_ip[4]; /* 12 4 */
	};
	/* ../public/steam/steamnetworkingtypes.h:239 */
	union {
		uint8 m_ipv6[16]; /* 0 16 */
		IPv4MappedAddress m_ipv4; /* 0 16 */
	};
	/* ../public/steam/steamnetworkingtypes.h:204 */
	void Clear(SteamNetworkingIPAddr* );
	/* ../public/steam/steamnetworkingtypes.h:205 */
	bool IsIPv6AllZeros(const SteamNetworkingIPAddr* );
	/* ../public/steam/steamnetworkingtypes.h:206 */
	void SetIPv6(SteamNetworkingIPAddr* , const uint8* , uint16);
	/* ../public/steam/steamnetworkingtypes.h:207 */
	void SetIPv4(SteamNetworkingIPAddr* , uint32, uint16);
	/* ../public/steam/steamnetworkingtypes.h:208 */
	bool IsIPv4(const SteamNetworkingIPAddr* );
	/* ../public/steam/steamnetworkingtypes.h:209 */
	uint32 GetIPv4(const SteamNetworkingIPAddr* );
	/* ../public/steam/steamnetworkingtypes.h:210 */
	void SetIPv6LocalHost(SteamNetworkingIPAddr* , uint16);
	/* ../public/steam/steamnetworkingtypes.h:211 */
	bool IsLocalHost(const SteamNetworkingIPAddr* );
	/* ../public/steam/steamnetworkingtypes.h:224 */
	void ToString(const SteamNetworkingIPAddr* , char* , size_t, bool);
	/* ../public/steam/steamnetworkingtypes.h:228 */
	bool ParseString(SteamNetworkingIPAddr* , const char* );
	union {
		uint8 m_ipv6[16]; /* 0 16 */
		IPv4MappedAddress m_ipv4; /* 0 16 */
	}; /* 0 16 */
	uint16 m_port; /* 16 2 */
	/* ../public/steam/steamnetworkingtypes.h:246 */
	bool operator==(const SteamNetworkingIPAddr* , const SteamNetworkingIPAddr& );
	/* ../public/steam/steamnetworkingtypes.h:250 */
	ESteamNetworkingFakeIPType GetFakeIPType(const SteamNetworkingIPAddr* );
	/* ../public/steam/steamnetworkingtypes.h:253 */
	bool IsFakeIP(const SteamNetworkingIPAddr* );
} __attribute__((__packed__));

// <0187E9DE> ../public/steam/steamnetworkingtypes.h:202
// member functions: 13
// member variables: 2
// struct size: 18
struct SteamNetworkingIPAddr {
	/* ../public/steam/steamnetworkingtypes.h:215 */
	enum {
		k_cchMaxString = 48,
	};
	/* ../public/steam/steamnetworkingtypes.h:231 */
	struct IPv4MappedAddress {
		uint64 m_8zeros; /* 0 8 */
		uint16 m_0000; /* 8 2 */
		uint16 m_ffff; /* 10 2 */
		uint8 m_ip[4]; /* 12 4 */
	};
	/* ../public/steam/steamnetworkingtypes.h:239 */
	union {
		uint8 m_ipv6[16]; /* 0 16 */
		IPv4MappedAddress m_ipv4; /* 0 16 */
	};
	/* ../public/steam/steamnetworkingtypes.h:204 */
	void Clear(SteamNetworkingIPAddr* );
	/* ../public/steam/steamnetworkingtypes.h:205 */
	bool IsIPv6AllZeros(const SteamNetworkingIPAddr* );
	/* ../public/steam/steamnetworkingtypes.h:206 */
	void SetIPv6(SteamNetworkingIPAddr* , const uint8* , uint16);
	/* ../public/steam/steamnetworkingtypes.h:207 */
	void SetIPv4(SteamNetworkingIPAddr* , uint32, uint16);
	/* ../public/steam/steamnetworkingtypes.h:208 */
	bool IsIPv4(const SteamNetworkingIPAddr* );
	/* ../public/steam/steamnetworkingtypes.h:209 */
	uint32 GetIPv4(const SteamNetworkingIPAddr* );
	/* ../public/steam/steamnetworkingtypes.h:210 */
	void SetIPv6LocalHost(SteamNetworkingIPAddr* , uint16);
	/* ../public/steam/steamnetworkingtypes.h:211 */
	bool IsLocalHost(const SteamNetworkingIPAddr* );
	/* ../public/steam/steamnetworkingtypes.h:224 */
	void ToString(const SteamNetworkingIPAddr* , char* , size_t, bool);
	/* ../public/steam/steamnetworkingtypes.h:228 */
	bool ParseString(SteamNetworkingIPAddr* , const char* );
	union {
		uint8 m_ipv6[16]; /* 0 16 */
		IPv4MappedAddress m_ipv4; /* 0 16 */
	}; /* 0 16 */
	uint16 m_port; /* 16 2 */
	/* ../public/steam/steamnetworkingtypes.h:246 */
	bool operator==(const SteamNetworkingIPAddr* , const SteamNetworkingIPAddr& );
	/* ../public/steam/steamnetworkingtypes.h:250 */
	ESteamNetworkingFakeIPType GetFakeIPType(const SteamNetworkingIPAddr* );
	/* ../public/steam/steamnetworkingtypes.h:253 */
	bool IsFakeIP(const SteamNetworkingIPAddr* );
} __attribute__((__packed__));

// <000DC999> ../public/steam/steamnetworkingtypes.h:261
// member functions: 27
// member variables: 3
// struct size: 136
struct SteamNetworkingIdentity {
	/* ../public/steam/steamnetworkingtypes.h:339 */
	union {
		uint64 m_steamID64; /* 0 8 */
		uint64 m_PSNID; /* 0 8 */
		uint64 m_stadiaID; /* 0 8 */
		char m_szGenericString[32]; /* 0 32 */
		char m_szXboxPairwiseID[33]; /* 0 33 */
		uint8 m_genericBytes[32]; /* 0 32 */
		char m_szUnknownRawString[128]; /* 0 128 */
		SteamNetworkingIPAddr m_ip; /* 0 18 */
		uint32 m_reserved[32]; /* 0 128 */
	};
	ESteamNetworkingIdentityType m_eType; /* 0 4 */
	/* ../public/steam/steamnetworkingtypes.h:270 */
	void Clear(SteamNetworkingIdentity* );
	/* ../public/steam/steamnetworkingtypes.h:271 */
	bool IsInvalid(const SteamNetworkingIdentity* );
	/* ../public/steam/steamnetworkingtypes.h:273 */
	void SetSteamID(SteamNetworkingIdentity* , CSteamID);
	/* ../public/steam/steamnetworkingtypes.h:274 */
	CSteamID GetSteamID(const SteamNetworkingIdentity* );
	/* ../public/steam/steamnetworkingtypes.h:275 */
	void SetSteamID64(SteamNetworkingIdentity* , uint64);
	/* ../public/steam/steamnetworkingtypes.h:276 */
	uint64 GetSteamID64(const SteamNetworkingIdentity* );
	/* ../public/steam/steamnetworkingtypes.h:278 */
	bool SetXboxPairwiseID(SteamNetworkingIdentity* , const char* );
	/* ../public/steam/steamnetworkingtypes.h:279 */
	const char* GetXboxPairwiseID(const SteamNetworkingIdentity* );
	/* ../public/steam/steamnetworkingtypes.h:281 */
	void SetPSNID(SteamNetworkingIdentity* , uint64);
	/* ../public/steam/steamnetworkingtypes.h:282 */
	uint64 GetPSNID(const SteamNetworkingIdentity* );
	/* ../public/steam/steamnetworkingtypes.h:284 */
	void SetStadiaID(SteamNetworkingIdentity* , uint64);
	/* ../public/steam/steamnetworkingtypes.h:285 */
	uint64 GetStadiaID(const SteamNetworkingIdentity* );
	/* ../public/steam/steamnetworkingtypes.h:287 */
	void SetIPAddr(SteamNetworkingIdentity* , const SteamNetworkingIPAddr& );
	/* ../public/steam/steamnetworkingtypes.h:288 */
	const SteamNetworkingIPAddr* GetIPAddr(const SteamNetworkingIdentity* );
	/* ../public/steam/steamnetworkingtypes.h:289 */
	void SetIPv4Addr(SteamNetworkingIdentity* , uint32, uint16);
	/* ../public/steam/steamnetworkingtypes.h:290 */
	uint32 GetIPv4(const SteamNetworkingIdentity* );
	/* ../public/steam/steamnetworkingtypes.h:292 */
	ESteamNetworkingFakeIPType GetFakeIPType(const SteamNetworkingIdentity* );
	/* ../public/steam/steamnetworkingtypes.h:293 */
	bool IsFakeIP(const SteamNetworkingIdentity* );
	/* ../public/steam/steamnetworkingtypes.h:297 */
	void SetLocalHost(SteamNetworkingIdentity* );
	/* ../public/steam/steamnetworkingtypes.h:298 */
	bool IsLocalHost(const SteamNetworkingIdentity* );
	/* ../public/steam/steamnetworkingtypes.h:300 */
	bool SetGenericString(SteamNetworkingIdentity* , const char* );
	/* ../public/steam/steamnetworkingtypes.h:301 */
	const char* GetGenericString(const SteamNetworkingIdentity* );
	/* ../public/steam/steamnetworkingtypes.h:303 */
	bool SetGenericBytes(SteamNetworkingIdentity* , const void* , size_t);
	/* ../public/steam/steamnetworkingtypes.h:304 */
	const uint8* GetGenericBytes(const SteamNetworkingIdentity* , int& );
	/* ../public/steam/steamnetworkingtypes.h:307 */
	bool operator==(const SteamNetworkingIdentity* , const SteamNetworkingIdentity& );
	/* ../public/steam/steamnetworkingtypes.h:315 */
	void ToString(const SteamNetworkingIdentity* , char* , size_t);
	/* ../public/steam/steamnetworkingtypes.h:322 */
	bool ParseString(SteamNetworkingIdentity* , const char* );
	int m_cbSize; /* 4 4 */
	union {
		uint64 m_steamID64; /* 8 8 */
		uint64 m_PSNID; /* 8 8 */
		uint64 m_stadiaID; /* 8 8 */
		char m_szGenericString[32]; /* 8 32 */
		char m_szXboxPairwiseID[33]; /* 8 33 */
		uint8 m_genericBytes[32]; /* 8 32 */
		char m_szUnknownRawString[128]; /* 8 128 */
		SteamNetworkingIPAddr m_ip; /* 8 18 */
		uint32 m_reserved[32]; /* 8 128 */
	}; /* 8 128 */
};

// <0187EC6B> ../public/steam/steamnetworkingtypes.h:261
// member functions: 27
// member variables: 3
// struct size: 136
struct SteamNetworkingIdentity {
	/* ../public/steam/steamnetworkingtypes.h:325 */
	enum {
		k_cchMaxString = 128,
		k_cchMaxGenericString = 32,
		k_cchMaxXboxPairwiseID = 33,
		k_cbMaxGenericBytes = 32,
	};
	/* ../public/steam/steamnetworkingtypes.h:339 */
	union {
		uint64 m_steamID64; /* 0 8 */
		uint64 m_PSNID; /* 0 8 */
		uint64 m_stadiaID; /* 0 8 */
		char m_szGenericString[32]; /* 0 32 */
		char m_szXboxPairwiseID[33]; /* 0 33 */
		uint8 m_genericBytes[32]; /* 0 32 */
		char m_szUnknownRawString[128]; /* 0 128 */
		SteamNetworkingIPAddr m_ip; /* 0 18 */
		uint32 m_reserved[32]; /* 0 128 */
	};
	ESteamNetworkingIdentityType m_eType; /* 0 4 */
	/* ../public/steam/steamnetworkingtypes.h:270 */
	void Clear(SteamNetworkingIdentity* );
	/* ../public/steam/steamnetworkingtypes.h:271 */
	bool IsInvalid(const SteamNetworkingIdentity* );
	/* ../public/steam/steamnetworkingtypes.h:273 */
	void SetSteamID(SteamNetworkingIdentity* , CSteamID);
	/* ../public/steam/steamnetworkingtypes.h:274 */
	CSteamID GetSteamID(const SteamNetworkingIdentity* );
	/* ../public/steam/steamnetworkingtypes.h:275 */
	void SetSteamID64(SteamNetworkingIdentity* , uint64);
	/* ../public/steam/steamnetworkingtypes.h:276 */
	uint64 GetSteamID64(const SteamNetworkingIdentity* );
	/* ../public/steam/steamnetworkingtypes.h:278 */
	bool SetXboxPairwiseID(SteamNetworkingIdentity* , const char* );
	/* ../public/steam/steamnetworkingtypes.h:279 */
	const char* GetXboxPairwiseID(const SteamNetworkingIdentity* );
	/* ../public/steam/steamnetworkingtypes.h:281 */
	void SetPSNID(SteamNetworkingIdentity* , uint64);
	/* ../public/steam/steamnetworkingtypes.h:282 */
	uint64 GetPSNID(const SteamNetworkingIdentity* );
	/* ../public/steam/steamnetworkingtypes.h:284 */
	void SetStadiaID(SteamNetworkingIdentity* , uint64);
	/* ../public/steam/steamnetworkingtypes.h:285 */
	uint64 GetStadiaID(const SteamNetworkingIdentity* );
	/* ../public/steam/steamnetworkingtypes.h:287 */
	void SetIPAddr(SteamNetworkingIdentity* , const SteamNetworkingIPAddr& );
	/* ../public/steam/steamnetworkingtypes.h:288 */
	const SteamNetworkingIPAddr* GetIPAddr(const SteamNetworkingIdentity* );
	/* ../public/steam/steamnetworkingtypes.h:289 */
	void SetIPv4Addr(SteamNetworkingIdentity* , uint32, uint16);
	/* ../public/steam/steamnetworkingtypes.h:290 */
	uint32 GetIPv4(const SteamNetworkingIdentity* );
	/* ../public/steam/steamnetworkingtypes.h:292 */
	ESteamNetworkingFakeIPType GetFakeIPType(const SteamNetworkingIdentity* );
	/* ../public/steam/steamnetworkingtypes.h:293 */
	bool IsFakeIP(const SteamNetworkingIdentity* );
	/* ../public/steam/steamnetworkingtypes.h:297 */
	void SetLocalHost(SteamNetworkingIdentity* );
	/* ../public/steam/steamnetworkingtypes.h:298 */
	bool IsLocalHost(const SteamNetworkingIdentity* );
	/* ../public/steam/steamnetworkingtypes.h:300 */
	bool SetGenericString(SteamNetworkingIdentity* , const char* );
	/* ../public/steam/steamnetworkingtypes.h:301 */
	const char* GetGenericString(const SteamNetworkingIdentity* );
	/* ../public/steam/steamnetworkingtypes.h:303 */
	bool SetGenericBytes(SteamNetworkingIdentity* , const void* , size_t);
	/* ../public/steam/steamnetworkingtypes.h:304 */
	const uint8* GetGenericBytes(const SteamNetworkingIdentity* , int& );
	/* ../public/steam/steamnetworkingtypes.h:307 */
	bool operator==(const SteamNetworkingIdentity* , const SteamNetworkingIdentity& );
	/* ../public/steam/steamnetworkingtypes.h:315 */
	void ToString(const SteamNetworkingIdentity* , char* , size_t);
	/* ../public/steam/steamnetworkingtypes.h:322 */
	bool ParseString(SteamNetworkingIdentity* , const char* );
	int m_cbSize; /* 4 4 */
	union {
		uint64 m_steamID64; /* 8 8 */
		uint64 m_PSNID; /* 8 8 */
		uint64 m_stadiaID; /* 8 8 */
		char m_szGenericString[32]; /* 8 32 */
		char m_szXboxPairwiseID[33]; /* 8 33 */
		uint8 m_genericBytes[32]; /* 8 32 */
		char m_szUnknownRawString[128]; /* 8 128 */
		SteamNetworkingIPAddr m_ip; /* 8 18 */
		uint32 m_reserved[32]; /* 8 128 */
	}; /* 8 128 */
};

// <000DCF12> ../public/steam/steamnetworkingtypes.h:681
// member variables: 13
// struct size: 696
struct SteamNetConnectionInfo_t {
	SteamNetworkingIdentity m_identityRemote; /* 0 136 */
	int64 m_nUserData; /* 136 8 */
	HSteamListenSocket m_hListenSocket; /* 144 4 */
	SteamNetworkingIPAddr m_addrRemote; /* 148 18 */
	uint16 m__pad1; /* 166 2 */
	SteamNetworkingPOPID m_idPOPRemote; /* 168 4 */
	SteamNetworkingPOPID m_idPOPRelay; /* 172 4 */
	ESteamNetworkingConnectionState m_eState; /* 176 4 */
	int m_eEndReason; /* 180 4 */
	char m_szEndDebug[128]; /* 184 128 */
	char m_szConnectionDescription[128]; /* 312 128 */
	int m_nFlags; /* 440 4 */
	uint32 reserved[63]; /* 444 252 */
} __attribute__((__packed__));

// <011FFC4D> ../public/steam/steamnetworkingtypes.h:736
// member variables: 14
// struct size: 120
struct SteamNetConnectionRealTimeStatus_t {
	ESteamNetworkingConnectionState m_eState; /* 0 4 */
	int m_nPing; /* 4 4 */
	float m_flConnectionQualityLocal; /* 8 4 */
	float m_flConnectionQualityRemote; /* 12 4 */
	float m_flOutPacketsPerSec; /* 16 4 */
	float m_flOutBytesPerSec; /* 20 4 */
	float m_flInPacketsPerSec; /* 24 4 */
	float m_flInBytesPerSec; /* 28 4 */
	int m_nSendRateBytesPerSecond; /* 32 4 */
	int m_cbPendingUnreliable; /* 36 4 */
	int m_cbPendingReliable; /* 40 4 */
	int m_cbSentUnackedReliable; /* 44 4 */
	SteamNetworkingMicroseconds m_usecQueueTime; /* 48 8 */
	uint32 reserved[16]; /* 56 64 */
};

// <011FFD4E> ../public/steam/steamnetworkingtypes.h:843
// member functions: 11
// member variables: 14
// struct size: 216
struct SteamNetworkingMessage_t {
	void * m_pData; /* 0 8 */
	int m_cbSize; /* 8 4 */
	HSteamNetConnection m_conn; /* 12 4 */
	SteamNetworkingIdentity m_identityPeer; /* 16 136 */
	int64 m_nConnUserData; /* 152 8 */
	SteamNetworkingMicroseconds m_usecTimeReceived; /* 160 8 */
	int64 m_nMessageNumber; /* 168 8 */
	void (*m_pfnFreeData)(SteamNetworkingMessage_t* ); /* 176 8* /
	void (*m_pfnRelease)(SteamNetworkingMessage_t* ); /* 184 8* /
	int m_nChannel; /* 192 4 */
	int m_nFlags; /* 196 4 */
	int64 m_nUserData; /* 200 8 */
	uint16 m_idxLane; /* 208 2 */
	uint16 _pad1__; /* 210 2 */
	/* ../public/steam/steamnetworkingtypes.h:926 */
	void Release(SteamNetworkingMessage_t* );
	/* ../public/steam/steamnetworkingtypes.h:930 */
	uint32 GetSize(const SteamNetworkingMessage_t* );
	/* ../public/steam/steamnetworkingtypes.h:931 */
	const void* GetData(const SteamNetworkingMessage_t* );
	/* ../public/steam/steamnetworkingtypes.h:932 */
	int GetChannel(const SteamNetworkingMessage_t* );
	/* ../public/steam/steamnetworkingtypes.h:933 */
	HSteamNetConnection GetConnection(const SteamNetworkingMessage_t* );
	/* ../public/steam/steamnetworkingtypes.h:934 */
	int64 GetConnectionUserData(const SteamNetworkingMessage_t* );
	/* ../public/steam/steamnetworkingtypes.h:935 */
	SteamNetworkingMicroseconds GetTimeReceived(const SteamNetworkingMessage_t* );
	/* ../public/steam/steamnetworkingtypes.h:936 */
	int64 GetMessageNumber(const SteamNetworkingMessage_t* );
protected:
	/* ../public/steam/steamnetworkingtypes.h:944 */
	void ~SteamNetworkingMessage_t(SteamNetworkingMessage_t* );
};

// <0187F85F> ../public/steam/steamnetworkingtypes.h:1680
// member functions: 5
// member variables: 3
// struct size: 16
struct SteamNetworkingConfigValue_t {
	/* ../public/steam/steamnetworkingtypes.h:1690 */
	union {
		int32_t m_int32; /* 0 4 */
		int64_t m_int64; /* 0 8 */
		float m_float; /* 0 4 */
		const char * m_string; /* 0 8 */
		void * m_ptr; /* 0 8 */
	};
	ESteamNetworkingConfigValue m_eValue; /* 0 4 */
	ESteamNetworkingConfigDataType m_eDataType; /* 4 4 */
	union {
		int32_t m_int32; /* 8 4 */
		int64_t m_int64; /* 8 8 */
		float m_float; /* 8 4 */
		const char * m_string; /* 8 8 */
		void * m_ptr; /* 8 8 */
	} m_val; /* 8 8 */
	/* ../public/steam/steamnetworkingtypes.h:1701 */
	void SetInt32(SteamNetworkingConfigValue_t* , ESteamNetworkingConfigValue, int32_t);
	/* ../public/steam/steamnetworkingtypes.h:1707 */
	void SetInt64(SteamNetworkingConfigValue_t* , ESteamNetworkingConfigValue, int64_t);
	/* ../public/steam/steamnetworkingtypes.h:1713 */
	void SetFloat(SteamNetworkingConfigValue_t* , ESteamNetworkingConfigValue, float);
	/* ../public/steam/steamnetworkingtypes.h:1719 */
	void SetPtr(SteamNetworkingConfigValue_t* , ESteamNetworkingConfigValue, void* );
	/* ../public/steam/steamnetworkingtypes.h:1725 */
	void SetString(SteamNetworkingConfigValue_t* , ESteamNetworkingConfigValue, const char* );
};

// <01885B65> ../public/steam/steamnetworkingtypes.h:1701
inline void SteamNetworkingConfigValue_t::SetInt32(ESteamNetworkingConfigValue eVal, int32_t data)
{
} /* size: 0 */

// <01885B32> ../public/steam/steamnetworkingtypes.h:1719
inline void SteamNetworkingConfigValue_t::SetPtr(ESteamNetworkingConfigValue eVal, void* data)
{
} /* size: 0 */

// <01885B16> ../public/steam/steamnetworkingtypes.h:1837
inline void SteamNetworkingIPAddr::Clear()
{
} /* size: 0 */

// <01339629> ../public/steam/steamnetworkingtypes.h:1849
inline void SteamNetworkingIdentity::SetSteamID(CSteamID steamID)
{
} /* size: 0 */

// <0015BFCE> ../public/steam/steamnetworkingtypes.h:1850
inline void SteamNetworkingIdentity::GetSteamID()
{
} /* size: 0 */

// <01885AED> ../public/steam/steamnetworkingtypes.h:1851
inline void SteamNetworkingIdentity::SetSteamID64(uint64 steamID)
{
} /* size: 0 */

// <01885AD1> ../public/steam/steamnetworkingtypes.h:1852
inline void SteamNetworkingIdentity::GetSteamID64()
{
} /* size: 0 */

// <013395E4> ../public/steam/steamnetworkingtypes.h:1875
inline void SteamNetworkingMessage_t::Release()
{
} /* size: 0 */

