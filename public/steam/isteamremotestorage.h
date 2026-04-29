
//
// public/steam/isteamremotestorage.h
//
//	referenced by: libengine2.so
//
//	functions: 2
//	struct: 1
//

// <01F7B030> ../public/steam/isteamremotestorage.h:33
// member variables: 2
// struct size: 12
struct SteamParamStringArray_t {
	const char * * m_ppStrings; /* 0 8 */
	int32 m_nNumStrings; /* 8 4 */
} __attribute__((__packed__));

// <004CFD66> ../public/steam/isteamremotestorage.h:328
void SteamInternal_Init_SteamRemoteStorage(ISteamRemoteStorage** p)
{
} /* size: 44 */

// <004CFD1A> ../public/steam/isteamremotestorage.h:328
// variable: 1
inline ISteamRemoteStorage* SteamRemoteStorage(void)
{
	void* s_CallbackCounterAndContext; // 328
} /* size: 0, variables: 1 */

