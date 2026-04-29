
//
// public/steam/isteamutils.h
//
//	referenced by: libengine2.so
//
//	functions: 2
//	struct: 1
//

// <0015C174> ../public/steam/isteamutils.h:227
void SteamInternal_Init_SteamUtils(ISteamUtils** p)
{
} /* size: 39 */

// <0015C140> ../public/steam/isteamutils.h:227
// variable: 1
inline ISteamUtils* SteamUtils(void)
{
	void* s_CallbackCounterAndContext; // 227
} /* size: 0, variables: 1 */

// <000DB608> ../public/steam/isteamutils.h:264
// member variables: 3
// struct size: 16
struct SteamAPICallCompleted_t {
	/* ../public/steam/isteamutils.h:266 */
	enum {
		k_iCallback = 703,
	};
	SteamAPICall_t m_hAsyncCall; /* 0 8 */
	int m_iCallback; /* 8 4 */
	uint32 m_cubParam; /* 12 4 */
};

