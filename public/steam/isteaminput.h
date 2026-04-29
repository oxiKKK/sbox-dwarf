
//
// public/steam/isteaminput.h
//
//	referenced by: libengine2.so
//
//	structs: 3
//

// <000DBB14> ../public/steam/isteaminput.h:932
// member variable: 1
// struct size: 8
struct SteamInputDeviceConnected_t {
	/* ../public/steam/isteaminput.h:934 */
	enum {
		k_iCallback = 2801,
	};
	InputHandle_t m_ulConnectedDeviceHandle; /* 0 8 */
};

// <000DBB4A> ../public/steam/isteaminput.h:942
// member variable: 1
// struct size: 8
struct SteamInputDeviceDisconnected_t {
	/* ../public/steam/isteaminput.h:944 */
	enum {
		k_iCallback = 2802,
	};
	InputHandle_t m_ulDisconnectedDeviceHandle; /* 0 8 */
};

// <000DBB80> ../public/steam/isteaminput.h:952
// member variables: 7
// struct size: 32
struct SteamInputConfigurationLoaded_t {
	/* ../public/steam/isteaminput.h:954 */
	enum {
		k_iCallback = 2803,
	};
	AppId_t m_unAppID; /* 0 4 */
	InputHandle_t m_ulDeviceHandle; /* 4 8 */
	CSteamID m_ulMappingCreator; /* 12 8 */
	uint32 m_unMajorRevision; /* 20 4 */
	uint32 m_unMinorRevision; /* 24 4 */
	bool m_bUsesSteamInputAPI; /* 28 1 */
	bool m_bUsesGamepadAPI; /* 29 1 */
};

