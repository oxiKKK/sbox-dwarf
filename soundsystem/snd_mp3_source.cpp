
//
// soundsystem/snd_mp3_source.cpp
//
//	referenced by: libengine2.so
//
//	functions: 10
//

// <024B990F> soundsystem/snd_mp3_source.cpp:12
void CAudioSourceMP3::CAudioSourceMP3(CSfxTable* pSfx)
{
} /* size: 0 */

// <024B98BC> soundsystem/snd_mp3_source.cpp:21
void CAudioSourceMP3::GetType()
{
} /* size: 10 */

// <024B986A> soundsystem/snd_mp3_source.cpp:26
// function call: 1
void CAudioSourceMP3::IsLooped()
{
	CStrongHandle<InfoForResourceTypeVSound_t>::operator->(); // 28
} /* size: 0, inline expansions: 1 (17 bytes) */

// <024B97F0> soundsystem/snd_mp3_source.cpp:31
// function calls: 2
void CAudioSourceMP3::ChannelCount()
{
	CStrongHandle<InfoForResourceTypeVSound_t>::operator->(); // 33
	VSoundV00_t::channels(); // 33
} /* size: 0, inline expansions: 2 (34 bytes) */

// <024B979E> soundsystem/snd_mp3_source.cpp:35
// function call: 1
void CAudioSourceMP3::SampleCount()
{
	CStrongHandle<InfoForResourceTypeVSound_t>::operator->(); // 37
} /* size: 0, inline expansions: 1 (17 bytes) */

// <024B96D8> soundsystem/snd_mp3_source.cpp:41
// variable: 1
// function call: 1
void CAudioSourceMP3::GetOutputData(void** pData, int nSamplePosition, int nSampleCount, char* copyBuf)
{
	int nTotalSampleCount; // 44
	CStrongHandle<InfoForResourceTypeVSound_t>::operator->(); // 44
} /* size: 0, variables: 1, inline expansions: 1 (17 bytes) */

// <024B9668> soundsystem/snd_mp3_source.cpp:72
// variable: 1
void CAudioSourceMP3::CreateMixer()
{
	CAudioMixer* pMixer; // 74
} /* size: 56, variables: 1 */

// <024B95E5> soundsystem/snd_mp3_source.cpp:83
// function call: 1
void CAudioSourceMP3::InitPackets(CAudioMixerData* pData)
{
	CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::RemoveAll(); // 85
} /* size: 38, inline expansions: 1 (7 bytes) */

// <024B9528> soundsystem/snd_mp3_source.cpp:90
// variable: 1
// function calls: 2
bool Audio_IsMP3(CSfxTable* pSfx)
{
	{
		const VSound_t* pSound; // 94
		VSoundV00_t::format(); // 98
	}
	CStrongHandle<InfoForResourceTypeVSound_t>::HasData(); // 92
} /* size: 33, inline expansions: 1 (17 bytes) */

// <024B9466> soundsystem/snd_mp3_source.cpp:105
// variable: 1
// function call: 1
CAudioSource* Audio_CreateMemoryMP3(CSfxTable* pSfx)
{
	CAudioSourceMP3* pMP3; // 107
	CAudioSourceMP3::CAudioSourceMP3(
			CSfxTable* pSfx);  // 107
} /* size: 61, variables: 1, inline expansions: 1 (29 bytes) */

