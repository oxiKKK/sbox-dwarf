
//
// common/steamid.cpp
//
//	referenced by: libengine2.so
//
//	functions: 5
//

// <007EA5A8> ../common/steamid.cpp:13
void CSteamID::CSteamID(const char* pchSteamID, EUniverse eDefaultUniverse)
{
} /* size: 0 */

// <007EA07B> ../common/steamid.cpp:23
// variables: 8
// function calls: 8
void CSteamID::SetFromString(const char* pchSteamID, EUniverse eDefaultUniverse)
{
	uint nAccountID; // 25
	uint nInstance; // 26
	EUniverse eUniverse; // 27
	EAccountType eAccountType; // 31
	const char   __FUNCTION__; // 15755
	{
		const char* pchColon; // 46
		strchr(const char* __s,
			int __c);  // 44
		strchr(const char* __s,
			int __c);  // 46
		strchr(const char* __s,
			int __c);  // 47
		CSteamID::CreateBlankAnonLogon(
					EUniverse eUniverse);  // 63
		CSteamID::InstancedSet(
				uint32 unAccountID,
				uint32 unInstance,
				EUniverse eUniverse,
				EAccountType eAccountType);  // 67
	}
	{
		uint64 unSteamID64; // 136
		CSteamID::SetFromUint64(
				uint64 ulSteamID);  // 139
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 157
	}
	strchr(const char* __s,
		int __c);  // 144
	CSteamID::InstancedSet(
			uint32 unAccountID,
			uint32 unInstance,
			EUniverse eUniverse,
			EAccountType eAccountType);  // 159
} /* size: 0, variables: 5, inline expansions: 2 (0 bytes) */

// <007E9D7D> ../common/steamid.cpp:207
// variables: 5
void CSteamID::Render()
{
	const int  k_cBufLen; // 212
	const int  k_cBufs; // 214
	char rgchBuf; // 215
	int nBuf; // 216
	char* pchBuf; // 217
} /* size: 726, variables: 5 */

// <007E9C92> ../common/steamid.cpp:290
// variable: 1
// function calls: 2
void Render(uint64 ulSteamID)
{
	CSteamID steamID; // 292
	CSteamID::SetFromUint64(
			uint64 ulSteamID);  // 531
	CSteamID::CSteamID(
		uint64 ulSteamID);  // 292
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <007E9C60> ../common/steamid.cpp:301
void CSteamID::BValidExternalSteamID()
{
} /* size: 0 */

