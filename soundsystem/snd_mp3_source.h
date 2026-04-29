
//
// soundsystem/snd_mp3_source.h
//
//	referenced by: libengine2.so
//
//	functions: 9
//	class: 1
//

// <024B93A8> soundsystem/snd_mp3_source.h:20
void CAudioSourceMP3::~CAudioSourceMP3()
{
} /* size: 19 */

// <024B931B> soundsystem/snd_mp3_source.h:20
// function call: 1
void CAudioSourceMP3::~CAudioSourceMP3()
{
	CAudioSourceMP3::~CAudioSourceMP3(); // 20
} /* size: 46, inline expansions: 1 (19 bytes) */

// <024B92FE> soundsystem/snd_mp3_source.h:20
inline void CAudioSourceMP3::~CAudioSourceMP3()
{
} /* size: 0 */

// <024B890C> soundsystem/snd_mp3_source.h:20
// member functions: 32
// member variable: 1
// vtable entries: 12
// class size: 16
class CAudioSourceMP3 : public CAudioSourceCached {
public:
	/* class CAudioSourceCached <ancestor>; */ /* 0 0 */
	void CAudioSourceMP3(CAudioSourceMP3* , CAudioSourceMP3& );
	void CAudioSourceMP3(CAudioSourceMP3* , const CAudioSourceMP3& );
	/* soundsystem/snd_mp3_source.cpp:12 */
	void CAudioSourceMP3(CAudioSourceMP3* , CSfxTable* );
	/* soundsystem/snd_mp3_source.cpp:21 */
	virtual int GetType(CAudioSourceMP3* );
	/* soundsystem/snd_mp3_source.h:32 */
	virtual bool IsPlayerVoice(CAudioSourceMP3* );
	/* soundsystem/snd_mp3_source.h:33 */
	virtual int SampleSize(CAudioSourceMP3* );
	/* soundsystem/snd_mp3_source.cpp:35 */
	virtual uint SampleCount(CAudioSourceMP3* );
	/* soundsystem/snd_mp3_source.h:39 */
	virtual int Format(CAudioSourceMP3* );
	/* soundsystem/snd_mp3_source.h:40 */
	virtual int DataSize(CAudioSourceMP3* );
	/* soundsystem/snd_mp3_source.cpp:26 */
	virtual bool IsLooped(CAudioSourceMP3* );
	/* soundsystem/snd_mp3_source.cpp:31 */
	virtual int ChannelCount(CAudioSourceMP3* );
	/* soundsystem/snd_mp3_source.h:45 */
	virtual void UpdateMixerData(CAudioSourceMP3* , const audio_source_indexstate_t& , CAudioMixerData* );
	/* soundsystem/snd_mp3_source.cpp:41 */
	virtual int GetOutputData(CAudioSourceMP3* , void** , int, int, char* );
	/* soundsystem/snd_mp3_source.cpp:72 */
	virtual CAudioMixer* CreateMixer(CAudioSourceMP3* );
	/* soundsystem/snd_mp3_source.cpp:83 */
	virtual void InitPackets(CAudioSourceMP3* , CAudioMixerData* );
	virtual void ~CAudioSourceMP3(CAudioSourceMP3* );
	void CAudioSourceMP3(class CAudioSourceMP3 *, class CAudioSourceMP3 &); /* linkage=_ZN15CAudioSourceMP3C4EOS_ */
	void CAudioSourceMP3(class CAudioSourceMP3 *, const class CAudioSourceMP3  &); /* linkage=_ZN15CAudioSourceMP3C4ERKS_ */
	void CAudioSourceMP3(class CAudioSourceMP3 *, class CSfxTable *); /* linkage=_ZN15CAudioSourceMP3C4EP9CSfxTable */
	virtual int GetType(class CAudioSourceMP3 *); /* linkage=_ZN15CAudioSourceMP37GetTypeEv */
	virtual bool IsPlayerVoice(class CAudioSourceMP3 *); /* linkage=_ZN15CAudioSourceMP313IsPlayerVoiceEv */
	virtual int SampleSize(class CAudioSourceMP3 *); /* linkage=_ZN15CAudioSourceMP310SampleSizeEv */
	virtual uint SampleCount(class CAudioSourceMP3 *); /* linkage=_ZN15CAudioSourceMP311SampleCountEv */
	virtual int Format(class CAudioSourceMP3 *); /* linkage=_ZN15CAudioSourceMP36FormatEv */
	virtual int DataSize(class CAudioSourceMP3 *); /* linkage=_ZN15CAudioSourceMP38DataSizeEv */
	virtual bool IsLooped(class CAudioSourceMP3 *); /* linkage=_ZN15CAudioSourceMP38IsLoopedEv */
	virtual int ChannelCount(class CAudioSourceMP3 *); /* linkage=_ZN15CAudioSourceMP312ChannelCountEv */
	virtual void UpdateMixerData(class CAudioSourceMP3 *, const class audio_source_indexstate_t  &, class CAudioMixerData *); /* linkage=_ZN15CAudioSourceMP315UpdateMixerDataERK25audio_source_indexstate_tP15CAudioMixerData */
	virtual int GetOutputData(class CAudioSourceMP3 *, void * *, int, int, char *); /* linkage=_ZN15CAudioSourceMP313GetOutputDataEPPviiPc */
	virtual class CAudioMixer * CreateMixer(class CAudioSourceMP3 *); /* linkage=_ZN15CAudioSourceMP311CreateMixerEv */
	virtual void InitPackets(class CAudioSourceMP3 *, class CAudioMixerData *); /* linkage=_ZN15CAudioSourceMP311InitPacketsEP15CAudioMixerData */
	virtual void ~CAudioSourceMP3(class CAudioSourceMP3 *); /* linkage=_ZN15CAudioSourceMP3D4Ev */
};

// <024B9A40> soundsystem/snd_mp3_source.h:32
void CAudioSourceMP3::IsPlayerVoice()
{
} /* size: 7 */

// <024B9A12> soundsystem/snd_mp3_source.h:33
void CAudioSourceMP3::SampleSize()
{
} /* size: 10 */

// <024B99E4> soundsystem/snd_mp3_source.h:39
void CAudioSourceMP3::Format()
{
} /* size: 7 */

// <024B99B6> soundsystem/snd_mp3_source.h:40
void CAudioSourceMP3::DataSize()
{
} /* size: 7 */

// <024B996C> soundsystem/snd_mp3_source.h:45
void CAudioSourceMP3::UpdateMixerData(const audio_source_indexstate_t& index, CAudioMixerData* pData)
{
} /* size: 5 */

// <024B8DE3> soundsystem/snd_mp3_source.h:56
CAudioMixer* CreateMP3Mixer(CSfxTable *)
{
} /* size: 0 */

