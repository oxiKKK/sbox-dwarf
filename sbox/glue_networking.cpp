
//
// sbox/glue_networking.cpp
//
//	referenced by: libengine2.so
//
//	functions: 34
//

// <0188583C> sbox/glue_networking.cpp:11
inline void NetSockets(void)
{
} /* size: 0 */

// <01885663> sbox/glue_networking.cpp:22
// variable: 1
// function calls: 6
void GetRelayNetworkStatus(void* debugMsg)
{
	SteamRelayNetworkStatus_t status; // 25
	SteamNetworkingUtils_SteamAPI(void); // 383
	SteamNetworkingUtils(void); // 24
	SteamNetworkingUtils_SteamAPI(void); // 383
	SteamNetworkingUtils(void); // 26
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 27
} /* size: 135, variables: 1, inline expansions: 6 (104 bytes) */

// <018851C2> sbox/glue_networking.cpp:31
// variable: 1
// function calls: 22
void GetAuthenticationStatus(void* debugMsg)
{
	SteamNetAuthenticationStatus_t status; // 34
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 13
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 14
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 16
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 17
	NetSockets(void); // 11
	NetSockets(void); // 33
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 13
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 14
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 16
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 17
	NetSockets(void); // 11
	NetSockets(void); // 35
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 36
} /* size: 0, variables: 1, inline expansions: 22 (490 bytes) */

// <01884E9C> sbox/glue_networking.cpp:40
// function calls: 20
void RunCallbacks(void)
{
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 13
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 14
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 16
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 17
	NetSockets(void); // 11
	NetSockets(void); // 43
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 13
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 14
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 16
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 17
	NetSockets(void); // 11
	NetSockets(void); // 44
} /* size: 0, inline expansions: 20 (406 bytes) */

// <01884DF0> sbox/glue_networking.cpp:47
// function calls: 2
void SetDebugFunction(int level, void* function)
{
	SteamNetworkingUtils_SteamAPI(void); // 383
	SteamNetworkingUtils(void); // 49
} /* size: 49, inline expansions: 2 (30 bytes) */

// <01884A89> sbox/glue_networking.cpp:56
// function calls: 20
void CloseSocket(HSteamListenSocket socket)
{
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 13
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 14
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 16
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 17
	NetSockets(void); // 11
	NetSockets(void); // 58
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 13
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 14
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 16
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 17
	NetSockets(void); // 11
	NetSockets(void); // 60
} /* size: 0, inline expansions: 20 (406 bytes) */

// <018845BD> sbox/glue_networking.cpp:63
// variables: 2
// function calls: 23
void GetSocketAddress(HSteamListenSocket socket)
{
	char chars; // 67
	SteamNetworkingIPAddr address; // 70
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 13
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 14
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 16
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 17
	NetSockets(void); // 11
	NetSockets(void); // 65
	memset(void* __dest,
		int __ch,
		size_t __len);  // 68
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 13
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 14
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 16
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 17
	NetSockets(void); // 11
	NetSockets(void); // 71
	SteamNetworkingUtils_SteamAPI(void); // 383
	SteamNetworkingUtils(void); // 72
} /* size: 0, variables: 2, inline expansions: 23 (497 bytes) */

// <018840DC> sbox/glue_networking.cpp:77
// variables: 2
// function calls: 24
void GetIdentity(void)
{
	char chars; // 81
	SteamNetworkingIdentity ident; // 84
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 13
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 14
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 16
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 17
	NetSockets(void); // 11
	NetSockets(void); // 79
	memset(void* __dest,
		int __ch,
		size_t __len);  // 82
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 13
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 14
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 16
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 17
	NetSockets(void); // 11
	NetSockets(void); // 85
	SteamNetworkingUtils_SteamAPI(void); // 383
	SteamNetworkingUtils(void); // 494
	SteamNetworkingIdentity::ToString(
		char* buf,
		size_t cbBuf);  // 87
} /* size: 0, variables: 2, inline expansions: 24 (579 bytes) */

// <01883F5A> sbox/glue_networking.cpp:96
// function calls: 10
void CreatePollGroup(void)
{
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 13
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 14
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 16
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 17
	NetSockets(void); // 11
	NetSockets(void); // 98
} /* size: 0, inline expansions: 10 (193 bytes) */

// <01883BCD> sbox/glue_networking.cpp:101
// function calls: 20
void DestroyPollGroup(HSteamNetPollGroup group)
{
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 13
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 14
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 16
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 17
	NetSockets(void); // 11
	NetSockets(void); // 103
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 13
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 14
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 16
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 17
	NetSockets(void); // 11
	NetSockets(void); // 105
} /* size: 0, inline expansions: 20 (450 bytes) */

// <018839ED> sbox/glue_networking.cpp:108
// function calls: 10
void SetPollGroup(HSteamNetConnection connection, HSteamNetPollGroup group)
{
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 13
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 14
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 16
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 17
	NetSockets(void); // 11
	NetSockets(void); // 110
} /* size: 0, inline expansions: 10 (201 bytes) */

// <018837F2> sbox/glue_networking.cpp:113
// function calls: 10
void GetPollGroupMessages(HSteamNetPollGroup group, void* array_of_pointers, int maxmessages)
{
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 13
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 14
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 16
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 17
	NetSockets(void); // 11
	NetSockets(void); // 115
} /* size: 0, inline expansions: 10 (201 bytes) */

// <01883599> sbox/glue_networking.cpp:122
// variables: 2
// function calls: 10
void CloseConnection(HSteamNetConnection c, int reason, const char* debugReason)
{
	const char   __FUNCTION__; // 24056
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 126
	}
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 13
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 14
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 16
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 17
	NetSockets(void); // 11
	NetSockets(void); // 124
} /* size: 0, variables: 1, inline expansions: 10 (201 bytes) */

// <01883361> sbox/glue_networking.cpp:130
// variables: 2
// function calls: 10
void AcceptConnection(HSteamNetConnection c)
{
	const char   __FUNCTION__; // 24077
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 132
	}
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 13
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 14
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 16
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 17
	NetSockets(void); // 11
	NetSockets(void); // 133
} /* size: 0, variables: 1, inline expansions: 10 (193 bytes) */

// <01883129> sbox/glue_networking.cpp:136
// variables: 2
// function calls: 10
void FlushMessagesOnConnection(HSteamNetConnection c)
{
	const char   __FUNCTION__; // 24119
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 138
	}
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 13
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 14
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 16
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 17
	NetSockets(void); // 11
	NetSockets(void); // 139
} /* size: 0, variables: 1, inline expansions: 10 (193 bytes) */

// <01882F44> sbox/glue_networking.cpp:142
// function calls: 10
void SendMessages(void* pMessages, int nMessages)
{
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 13
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 14
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 16
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 17
	NetSockets(void); // 11
	NetSockets(void); // 144
} /* size: 0, inline expansions: 10 (201 bytes) */

// <01882E76> sbox/glue_networking.cpp:147
// variable: 1
// function calls: 2
void AllocateMessage(HSteamNetConnection conn, int size, int flags)
{
	const SteamNetworkingMessage_t* pMsg; // 149
	SteamNetworkingUtils_SteamAPI(void); // 383
	SteamNetworkingUtils(void); // 149
} /* size: 70, variables: 1, inline expansions: 2 (30 bytes) */

// <01882E48> sbox/glue_networking.cpp:162
void SetFreeDataCallback(void* callback)
{
} /* size: 12 */

// <01882E16> sbox/glue_networking.cpp:167
void SteamMessageFreeCallback(SteamNetworkingMessage_t* pMsg)
{
} /* size: 33 */

// <01882D37> sbox/glue_networking.cpp:175
// variable: 1
// function calls: 2
void AllocateMessageWithManagedBuffer(HSteamNetConnection conn, void* buffer, int size, int flags)
{
	const SteamNetworkingMessage_t* pMsg; // 177
	SteamNetworkingUtils_SteamAPI(void); // 383
	SteamNetworkingUtils(void); // 177
} /* size: 93, variables: 1, inline expansions: 2 (30 bytes) */

// <01882D05> sbox/glue_networking.cpp:191
void* GetMessageDataBuffer(void* pMsg)
{
} /* size: 8 */

// <01882AD4> sbox/glue_networking.cpp:196
// function calls: 10
void SendMessage(HSteamNetConnection c, void* data, int length, int flags)
{
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 13
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 14
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 16
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 17
	NetSockets(void); // 11
	NetSockets(void); // 201
} /* size: 0, inline expansions: 10 (201 bytes) */

// <018828DB> sbox/glue_networking.cpp:204
// function calls: 10
void GetConnectionMessages(HSteamNetConnection c, void* array_of_pointers, int maxmessages)
{
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 13
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 14
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 16
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 17
	NetSockets(void); // 11
	NetSockets(void); // 206
} /* size: 0, inline expansions: 10 (201 bytes) */

// <018826B6> sbox/glue_networking.cpp:209
// variable: 1
// function calls: 10
void GetConnectionState(HSteamNetConnection c)
{
	SteamNetConnectionInfo_t info; // 211
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 13
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 14
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 16
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 17
	NetSockets(void); // 11
	NetSockets(void); // 212
} /* size: 0, variables: 1, inline expansions: 10 (201 bytes) */

// <018824D2> sbox/glue_networking.cpp:216
// variable: 1
// function calls: 10
void GetConnectionDescription(HSteamNetConnection c)
{
	SteamNetConnectionInfo_t info; // 218
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 13
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 14
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 16
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 17
	NetSockets(void); // 11
	NetSockets(void); // 219
} /* size: 0, variables: 1, inline expansions: 10 (201 bytes) */

// <0188227A> sbox/glue_networking.cpp:223
// variable: 1
// function calls: 11
void GetConnectionSteamId(HSteamNetConnection c)
{
	SteamNetConnectionInfo_t info; // 225
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 13
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 14
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 16
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 17
	NetSockets(void); // 11
	NetSockets(void); // 226
	SteamNetworkingIdentity::GetSteamID64(); // 227
} /* size: 0, variables: 1, inline expansions: 11 (218 bytes) */

// <01881EBD> sbox/glue_networking.cpp:230
// function calls: 20
void SocketConnectionStatusChanged(SteamNetConnectionStatusChangedCallback_t* pInfo)
{
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 13
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 14
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 16
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 17
	NetSockets(void); // 11
	NetSockets(void); // 235
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 13
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 14
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 16
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 17
	NetSockets(void); // 11
	NetSockets(void); // 237
} /* size: 0, inline expansions: 20 (433 bytes) */

// <01881BE0> sbox/glue_networking.cpp:268
// variable: 1
// function calls: 13
void CreateSocket(int virtualPort)
{
	SteamNetworkingConfigValue_t options; // 270
	SteamNetworkingConfigValue_t::SetPtr(
		ESteamNetworkingConfigValue eVal,
		void* data);  // 272
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 13
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 14
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 16
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 17
	NetSockets(void); // 11
	NetSockets(void); // 276
	SteamNetworkingConfigValue_t::SetInt32(
		ESteamNetworkingConfigValue eVal,
		int32_t data);  // 273
	SteamNetworkingConfigValue_t::SetInt32(
		ESteamNetworkingConfigValue eVal,
		int32_t data);  // 274
} /* size: 0, variables: 1, inline expansions: 13 (259 bytes) */

// <01881867> sbox/glue_networking.cpp:279
// function calls: 20
void BeginAsyncRequestFakeIP(void)
{
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 13
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 14
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 16
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 17
	NetSockets(void); // 11
	NetSockets(void); // 281
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 13
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 14
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 16
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 17
	NetSockets(void); // 11
	NetSockets(void); // 282
} /* size: 0, inline expansions: 20 (414 bytes) */

// <01881315> sbox/glue_networking.cpp:285
// variables: 2
// function calls: 25
void CreateIpBasedSocket(int port, bool hideAddress)
{
	SteamNetworkingConfigValue_t options; // 287
	SteamNetworkingIPAddr addr; // 296
	SteamNetworkingConfigValue_t::SetPtr(
		ESteamNetworkingConfigValue eVal,
		void* data);  // 289
	SteamNetworkingConfigValue_t::SetInt32(
		ESteamNetworkingConfigValue eVal,
		int32_t data);  // 290
	SteamNetworkingConfigValue_t::SetInt32(
		ESteamNetworkingConfigValue eVal,
		int32_t data);  // 291
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 13
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 14
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 16
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 17
	NetSockets(void); // 11
	NetSockets(void); // 294
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1837
	SteamNetworkingIPAddr::Clear(); // 297
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 13
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 14
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 16
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 17
	NetSockets(void); // 11
	NetSockets(void); // 300
} /* size: 0, variables: 2, inline expansions: 25 (532 bytes) */

// <01885DE9> sbox/glue_networking.cpp:303
// function call: 1
void ConnectionStatusChanged(SteamNetConnectionStatusChangedCallback_t* p)
{
	ConnectionStatusChanged(SteamNetConnectionStatusChangedCallback_t* p); // 303
} /* size: 44, inline expansions: 1 (20 bytes) */

// <018812FD> sbox/glue_networking.cpp:303
void ConnectionStatusChanged(SteamNetConnectionStatusChangedCallback_t* p)
{
} /* size: 0 */

// <01880FBE> sbox/glue_networking.cpp:314
// variables: 2
// function calls: 14
void ConnectToSteamId(uint64 steamid, int virtualPort)
{
	SteamNetworkingIdentity ident; // 316
	SteamNetworkingConfigValue_t options; // 319
	SteamNetworkingIdentity::SetSteamID64(
			uint64 steamID);  // 317
	SteamNetworkingConfigValue_t::SetPtr(
		ESteamNetworkingConfigValue eVal,
		void* data);  // 321
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 13
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 14
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 16
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 17
	NetSockets(void); // 11
	NetSockets(void); // 325
	SteamNetworkingConfigValue_t::SetInt32(
		ESteamNetworkingConfigValue eVal,
		int32_t data);  // 322
	SteamNetworkingConfigValue_t::SetInt32(
		ESteamNetworkingConfigValue eVal,
		int32_t data);  // 323
} /* size: 0, variables: 2, inline expansions: 14 (301 bytes) */

// <01880BF1> sbox/glue_networking.cpp:328
// variables: 4
// function calls: 15
void ConnectToIpAddress(const char* address)
{
	SteamNetworkingIPAddr addr; // 330
	const char   __FUNCTION__; // 24098
	SteamNetworkingConfigValue_t options; // 336
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 333
	}
	SteamNetworkingUtils_SteamAPI(void); // 383
	SteamNetworkingUtils(void); // 331
	SteamNetworkingConfigValue_t::SetPtr(
		ESteamNetworkingConfigValue eVal,
		void* data);  // 338
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 13
	SteamGameServerNetworkingSockets_SteamAPI(void); // 946
	SteamGameServerNetworkingSockets(void); // 14
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 16
	SteamNetworkingSockets_SteamAPI(void); // 945
	SteamNetworkingSockets(void); // 17
	NetSockets(void); // 11
	NetSockets(void); // 342
	SteamNetworkingConfigValue_t::SetInt32(
		ESteamNetworkingConfigValue eVal,
		int32_t data);  // 339
	SteamNetworkingConfigValue_t::SetInt32(
		ESteamNetworkingConfigValue eVal,
		int32_t data);  // 340
} /* size: 0, variables: 3, inline expansions: 15 (289 bytes) */

