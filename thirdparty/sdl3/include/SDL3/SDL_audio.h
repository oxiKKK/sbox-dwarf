
//
// thirdparty/sdl3/include/SDL3/SDL_audio.h
//
//	referenced by: libengine2.so
//
//	functions: 16
//	struct: 1
//

// <02401B14> ../thirdparty/sdl3/include/SDL3/SDL_audio.h:405
// member variables: 3
// struct size: 12
struct SDL_AudioSpec {
	SDL_AudioFormat format; /* 0 4 */
	int channels; /* 4 4 */
	int freq; /* 8 4 */
};

// <06E6926E> ../../thirdparty/sdl3/include/SDL3/SDL_audio.h:517
const char* SDL_GetCurrentAudioDriver(void)
{
} /* size: 0 */

// <06E693F7> ../../thirdparty/sdl3/include/SDL3/SDL_audio.h:546
SDL_AudioDeviceID* SDL_GetAudioPlaybackDevices(int *)
{
} /* size: 0 */

// <06E693C9> ../../thirdparty/sdl3/include/SDL3/SDL_audio.h:591
const char* SDL_GetAudioDeviceName(SDL_AudioDeviceID)
{
} /* size: 0 */

// <06E69255> ../../thirdparty/sdl3/include/SDL3/SDL_audio.h:845
bool SDL_AudioDevicePaused(SDL_AudioDeviceID)
{
} /* size: 0 */

// <06E692D2> ../../thirdparty/sdl3/include/SDL3/SDL_audio.h:1039
SDL_AudioDeviceID SDL_GetAudioStreamDevice(SDL_AudioStream *)
{
} /* size: 0 */

// <02409353> ../thirdparty/sdl3/include/SDL3/SDL_audio.h:1061
SDL_AudioStream* SDL_CreateAudioStream(const SDL_AudioSpec *, const SDL_AudioSpec *)
{
} /* size: 0 */

// <0240931B> ../thirdparty/sdl3/include/SDL3/SDL_audio.h:1415
bool SDL_PutAudioStreamData(SDL_AudioStream *, const void *, int)
{
} /* size: 0 */

// <024092DF> ../thirdparty/sdl3/include/SDL3/SDL_audio.h:1445
int SDL_GetAudioStreamData(SDL_AudioStream *, void *, int)
{
} /* size: 0 */

// <02409302> ../thirdparty/sdl3/include/SDL3/SDL_audio.h:1471
int SDL_GetAudioStreamAvailable(SDL_AudioStream *)
{
} /* size: 0 */

// <024092C6> ../thirdparty/sdl3/include/SDL3/SDL_audio.h:1531
bool SDL_FlushAudioStream(SDL_AudioStream *)
{
} /* size: 0 */

// <024092AD> ../thirdparty/sdl3/include/SDL3/SDL_audio.h:1552
bool SDL_ClearAudioStream(SDL_AudioStream *)
{
} /* size: 0 */

// <06E6911C> ../../thirdparty/sdl3/include/SDL3/SDL_audio.h:1599
bool SDL_ResumeAudioStreamDevice(SDL_AudioStream *)
{
} /* size: 0 */

// <06E69135> ../../thirdparty/sdl3/include/SDL3/SDL_audio.h:1647
bool SDL_LockAudioStream(SDL_AudioStream *)
{
} /* size: 0 */

// <06E69103> ../../thirdparty/sdl3/include/SDL3/SDL_audio.h:1666
bool SDL_UnlockAudioStream(SDL_AudioStream *)
{
} /* size: 0 */

// <0240933E> ../thirdparty/sdl3/include/SDL3/SDL_audio.h:1825
void SDL_DestroyAudioStream(SDL_AudioStream *)
{
} /* size: 0 */

// <06E692EB> ../../thirdparty/sdl3/include/SDL3/SDL_audio.h:1888
SDL_AudioStream* SDL_OpenAudioDeviceStream(SDL_AudioDeviceID, const SDL_AudioSpec *, SDL_AudioStreamCallback, void *)
{
} /* size: 0 */

