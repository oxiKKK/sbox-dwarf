
//
// public/steam/steam_api_internal.h
//
//	referenced by: libengine2.so
//				   libfilesystem_stdio.so
//
//	functions: 43
//

// <00128E2A> ../public/steam/steam_api_internal.h:18
HSteamUser SteamAPI_GetHSteamUser(void)
{
} /* size: 0 */

// <01259528> ../public/steam/steam_api_internal.h:20
HSteamUser SteamGameServer_GetHSteamUser(void)
{
} /* size: 0 */

// <00128E3A> ../public/steam/steam_api_internal.h:21
void* SteamInternal_ContextInit(void *)
{
} /* size: 0 */

// <00128C7D> ../public/steam/steam_api_internal.h:22
void* SteamInternal_CreateInterface(const char *)
{
} /* size: 0 */

// <00128E0B> ../public/steam/steam_api_internal.h:23
void* SteamInternal_FindOrCreateUserInterface(HSteamUser, const char *)
{
} /* size: 0 */

// <01259538> ../public/steam/steam_api_internal.h:24
void* SteamInternal_FindOrCreateGameServerInterface(HSteamUser, const char *)
{
} /* size: 0 */

// <00128E89> ../public/steam/steam_api_internal.h:51
void SteamAPI_RegisterCallback(CCallbackBase *, int)
{
} /* size: 0 */

// <00128E54> ../public/steam/steam_api_internal.h:52
void SteamAPI_UnregisterCallback(CCallbackBase *)
{
} /* size: 0 */

// <01F496D4> ../public/steam/steam_api_internal.h:54
void SteamAPI_RegisterCallResult(CCallbackBase *, SteamAPICall_t)
{
} /* size: 0 */

// <01F496B9> ../public/steam/steam_api_internal.h:55
void SteamAPI_UnregisterCallResult(CCallbackBase *, SteamAPICall_t)
{
} /* size: 0 */

// <01F82789> ../public/steam/steam_api_internal.h:79
void CCallResult<Steam::Ugc::CUgcUpdate, SubmitItemUpdateResult_t>::CCallResult()
{
} /* size: 0 */

// <01F82770> ../public/steam/steam_api_internal.h:79
inline void CCallResult<Steam::Ugc::CUgcUpdate, SubmitItemUpdateResult_t>::CCallResult()
{
} /* size: 0 */

// <01F82729> ../public/steam/steam_api_internal.h:79
void CCallResult<Steam::Ugc::CUgcUpdate, CreateItemResult_t>::CCallResult()
{
} /* size: 0 */

// <01F82710> ../public/steam/steam_api_internal.h:79
inline void CCallResult<Steam::Ugc::CUgcUpdate, CreateItemResult_t>::CCallResult()
{
} /* size: 0 */

// <01F82334> ../public/steam/steam_api_internal.h:79
void CCallResult<Steam::Ugc::CUgcQuery, SteamUGCQueryCompleted_t>::CCallResult()
{
} /* size: 0 */

// <01F8231B> ../public/steam/steam_api_internal.h:79
inline void CCallResult<Steam::Ugc::CUgcQuery, SteamUGCQueryCompleted_t>::CCallResult()
{
} /* size: 0 */

// <01F826A5> ../public/steam/steam_api_internal.h:88
inline void CCallResult<Steam::Ugc::CUgcUpdate, CreateItemResult_t>::Set(SteamAPICall_t hAPICall, CUgcUpdate* p, func_t func)
{
} /* size: 0 */

// <01F8266A> ../public/steam/steam_api_internal.h:88
inline void CCallResult<Steam::Ugc::CUgcUpdate, SubmitItemUpdateResult_t>::Set(SteamAPICall_t hAPICall, CUgcUpdate* p, func_t func)
{
} /* size: 0 */

// <01F822B0> ../public/steam/steam_api_internal.h:88
inline void CCallResult<Steam::Ugc::CUgcQuery, SteamUGCQueryCompleted_t>::Set(SteamAPICall_t hAPICall, CUgcQuery* p, func_t func)
{
} /* size: 0 */

// <01F82003> ../public/steam/steam_api_internal.h:108
inline void CCallResult<Steam::Ugc::CUgcUpdate, SubmitItemUpdateResult_t>::Cancel()
{
} /* size: 0 */

// <01F81FEA> ../public/steam/steam_api_internal.h:108
inline void CCallResult<Steam::Ugc::CUgcUpdate, CreateItemResult_t>::Cancel()
{
} /* size: 0 */

// <01F81C4C> ../public/steam/steam_api_internal.h:108
inline void CCallResult<Steam::Ugc::CUgcQuery, SteamUGCQueryCompleted_t>::Cancel()
{
} /* size: 0 */

// <01F82759> ../public/steam/steam_api_internal.h:118
void CCallResult<Steam::Ugc::CUgcUpdate, SubmitItemUpdateResult_t>::~CCallResult()
{
} /* size: 0 */

// <01F82740> ../public/steam/steam_api_internal.h:118
inline void CCallResult<Steam::Ugc::CUgcUpdate, SubmitItemUpdateResult_t>::~CCallResult()
{
} /* size: 0 */

// <01F826F9> ../public/steam/steam_api_internal.h:118
void CCallResult<Steam::Ugc::CUgcUpdate, CreateItemResult_t>::~CCallResult()
{
} /* size: 0 */

// <01F826E0> ../public/steam/steam_api_internal.h:118
inline void CCallResult<Steam::Ugc::CUgcUpdate, CreateItemResult_t>::~CCallResult()
{
} /* size: 0 */

// <01F82304> ../public/steam/steam_api_internal.h:118
void CCallResult<Steam::Ugc::CUgcQuery, SteamUGCQueryCompleted_t>::~CCallResult()
{
} /* size: 0 */

// <01F822EB> ../public/steam/steam_api_internal.h:118
inline void CCallResult<Steam::Ugc::CUgcQuery, SteamUGCQueryCompleted_t>::~CCallResult()
{
} /* size: 0 */

// <01F80F4E> ../public/steam/steam_api_internal.h:124
void CCallResult<Steam::Ugc::CUgcQuery, SteamUGCQueryCompleted_t>::Run(void* pvParam)
{
} /* size: 44 */

// <01F80E89> ../public/steam/steam_api_internal.h:124
void CCallResult<Steam::Ugc::CUgcUpdate, CreateItemResult_t>::Run(void* pvParam)
{
} /* size: 44 */

// <01F80DC4> ../public/steam/steam_api_internal.h:124
void CCallResult<Steam::Ugc::CUgcUpdate, SubmitItemUpdateResult_t>::Run(void* pvParam)
{
} /* size: 44 */

// <01F8B75F> ../public/steam/steam_api_internal.h:131
// function call: 1
void CCallResult<Steam::Ugc::CUgcUpdate, SubmitItemUpdateResult_t>::Run(void* pvParam, bool bIOFailure, SteamAPICall_t hSteamAPICall)
{
	CCallResult<Steam::Ugc::CUgcUpdate, SubmitItemUpdateResult_t>::Run(
		void* pvParam,
		bool bIOFailure,
		SteamAPICall_t hSteamAPICall);  // 131
} /* size: 57, inline expansions: 1 (41 bytes) */

// <01F8B69C> ../public/steam/steam_api_internal.h:131
// function call: 1
void CCallResult<Steam::Ugc::CUgcUpdate, CreateItemResult_t>::Run(void* pvParam, bool bIOFailure, SteamAPICall_t hSteamAPICall)
{
	CCallResult<Steam::Ugc::CUgcUpdate, CreateItemResult_t>::Run(
		void* pvParam,
		bool bIOFailure,
		SteamAPICall_t hSteamAPICall);  // 131
} /* size: 57, inline expansions: 1 (41 bytes) */

// <01F8B5D9> ../public/steam/steam_api_internal.h:131
// function call: 1
void CCallResult<Steam::Ugc::CUgcQuery, SteamUGCQueryCompleted_t>::Run(void* pvParam, bool bIOFailure, SteamAPICall_t hSteamAPICall)
{
	CCallResult<Steam::Ugc::CUgcQuery, SteamUGCQueryCompleted_t>::Run(
		void* pvParam,
		bool bIOFailure,
		SteamAPICall_t hSteamAPICall);  // 131
} /* size: 57, inline expansions: 1 (41 bytes) */

// <01F80F11> ../public/steam/steam_api_internal.h:131
inline void CCallResult<Steam::Ugc::CUgcQuery, SteamUGCQueryCompleted_t>::Run(void* pvParam, bool bIOFailure, SteamAPICall_t hSteamAPICall)
{
} /* size: 0 */

// <01F80E4C> ../public/steam/steam_api_internal.h:131
inline void CCallResult<Steam::Ugc::CUgcUpdate, CreateItemResult_t>::Run(void* pvParam, bool bIOFailure, SteamAPICall_t hSteamAPICall)
{
} /* size: 0 */

// <01F80D87> ../public/steam/steam_api_internal.h:131
inline void CCallResult<Steam::Ugc::CUgcUpdate, SubmitItemUpdateResult_t>::Run(void* pvParam, bool bIOFailure, SteamAPICall_t hSteamAPICall)
{
} /* size: 0 */

// <01F81BF8> ../public/steam/steam_api_internal.h:141
void CCallback<Steam::Ugc::CUgcInstall, DownloadItemResult_t, false>::CCallback(CUgcInstall* pObj, func_t func)
{
} /* size: 0 */

// <01F81BC7> ../public/steam/steam_api_internal.h:141
inline void CCallback<Steam::Ugc::CUgcInstall, DownloadItemResult_t, false>::CCallback(CUgcInstall* pObj, func_t func)
{
} /* size: 0 */

// <01F82208> ../public/steam/steam_api_internal.h:152
inline void CCallback<Steam::Ugc::CUgcInstall, DownloadItemResult_t, false>::Register(CUgcInstall* pObj, func_t func)
{
} /* size: 0 */

// <01F821EF> ../public/steam/steam_api_internal.h:167
inline void CCallback<Steam::Ugc::CUgcInstall, DownloadItemResult_t, false>::Unregister()
{
} /* size: 0 */

// <01F8B59D> ../public/steam/steam_api_internal.h:174
void CCallback<Steam::Ugc::CUgcInstall, DownloadItemResult_t, false>::Run(void* pvParam)
{
} /* size: 33 */

// <01F8106B> ../public/steam/steam_api_internal.h:174
inline void CCallback<Steam::Ugc::CUgcInstall, DownloadItemResult_t, false>::Run(void* pvParam)
{
} /* size: 0 */

