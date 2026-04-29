
//
// public/soundsystem/isoundsystem.h
//
//	referenced by: libengine2.so
//
//	functions: 11
//	classes: 3
//	structs: 2
//

// <01200CF0> ../public/soundsystem/isoundsystem.h:41
// member variables: 2
// struct size: 2
struct AudioDeviceDesc {
	bool IsAvailable; /* 0 1 */
	bool IsDefault; /* 1 1 */
};

// <00625A52> ../public/soundsystem/isoundsystem.h:87
// member functions: 2
// member variables: 19
// struct size: 88
struct StartSoundParams_t {
	/* ../public/soundsystem/isoundsystem.h:89 */
	void StartSoundParams_t(StartSoundParams_t* );
	/* ../public/soundsystem/isoundsystem.h:104 */
	void Init(StartSoundParams_t* , CSfxTable* , float, sound_voice_layer_t);
	bool m_bReadLevel:1; /* 0: 0 1 */
	float m_flInitSpeakerVolumes[6]; /* 4 24 */
	Vector origin; /* 28 12 */
	CSfxTable * pSfx; /* 40 8 */
	float fvol; /* 48 4 */
	float delay; /* 52 4 */
	float m_flFadeTime; /* 56 4 */
	int pitch; /* 60 4 */
	SoundGuid_t m_nQueuedGUID; /* 64 4 */
	CUtlStringToken m_nVMixName; /* 68 4 */
	CUtlStringToken m_nTrackName; /* 72 4 */
	VMIX_MEMTYPE m_nMemType; /* 76 1 */
	sound_voice_layer_t m_nLayer; /* 77 1 */
	vaudio_channel_index_t m_nChannelSelect; /* 78 1 */
	int8 entchannel; /* 79 1 */
	bool m_bForceToTrack:1; /* 80: 0 1 */
	bool m_bFadeIn:1; /* 80: 1 1 */
	bool m_bIsToolVoice:1; /* 80: 2 1 */
	bool m_bShouldPause:1; /* 80: 3 1 */
};

// <0068C03C> ../public/soundsystem/isoundsystem.h:89
void StartSoundParams_t::StartSoundParams_t()
{
} /* size: 0 */

// <0068C023> ../public/soundsystem/isoundsystem.h:89
inline void StartSoundParams_t::StartSoundParams_t()
{
} /* size: 0 */

// <0068BFD9> ../public/soundsystem/isoundsystem.h:104
// variable: 1
inline void StartSoundParams_t::Init(CSfxTable* pSfxIn, float flVolume, sound_voice_layer_t nLayer)
{
	{
		int i; // 108
	}
} /* size: 0 */

// <01FACBFE> ../public/soundsystem/isoundsystem.h:142
void IAudioOutputStreamCallback::IAudioOutputStreamCallback()
{
} /* size: 0 */

// <01FACBE2> ../public/soundsystem/isoundsystem.h:142
inline void IAudioOutputStreamCallback::IAudioOutputStreamCallback()
{
} /* size: 0 */

// <01FA6766> ../public/soundsystem/isoundsystem.h:142
// member functions: 10
// member variable: 1
// vtable entry: 1
// class size: 8
class IAudioOutputStreamCallback {
	void IAudioOutputStreamCallback(IAudioOutputStreamCallback* , IAudioOutputStreamCallback& );
	void IAudioOutputStreamCallback(IAudioOutputStreamCallback* , const IAudioOutputStreamCallback& );
	void IAudioOutputStreamCallback(IAudioOutputStreamCallback* );
	void ~IAudioOutputStreamCallback(IAudioOutputStreamCallback* );
	int ()(void) * * _vptr.IAudioOutputStreamCallback; /* 0 8 */
	/* ../public/soundsystem/isoundsystem.h:146 */
	virtual bool UpdateMixerData(IAudioOutputStreamCallback* , uint8* , int);
	void IAudioOutputStreamCallback(class IAudioOutputStreamCallback *, class IAudioOutputStreamCallback &); /* linkage=_ZN26IAudioOutputStreamCallbackC4EOS_ */
	void IAudioOutputStreamCallback(class IAudioOutputStreamCallback *, const class IAudioOutputStreamCallback  &); /* linkage=_ZN26IAudioOutputStreamCallbackC4ERKS_ */
	void IAudioOutputStreamCallback(class IAudioOutputStreamCallback *); /* linkage=_ZN26IAudioOutputStreamCallbackC4Ev */
	void ~IAudioOutputStreamCallback(class IAudioOutputStreamCallback *); /* linkage=_ZN26IAudioOutputStreamCallbackD4Ev */
	virtual bool UpdateMixerData(class IAudioOutputStreamCallback *, uint8 *, int); /* linkage=_ZN26IAudioOutputStreamCallback15UpdateMixerDataEPhi */
};

// <0240F27E> ../public/soundsystem/isoundsystem.h:150
void IAudioOutputStream::IAudioOutputStream()
{
} /* size: 0 */

// <0240F262> ../public/soundsystem/isoundsystem.h:150
inline void IAudioOutputStream::IAudioOutputStream()
{
} /* size: 0 */

// <02408E36> ../public/soundsystem/isoundsystem.h:150
// member functions: 22
// member variable: 1
// vtable entries: 8
// class size: 8
class IAudioOutputStream {
	void IAudioOutputStream(IAudioOutputStream* , const IAudioOutputStream& );
	void IAudioOutputStream(IAudioOutputStream* );
	int ()(void) * * _vptr.IAudioOutputStream; /* 0 8 */
	/* ../public/soundsystem/isoundsystem.h:153 */
	virtual void ~IAudioOutputStream(IAudioOutputStream* );
	/* ../public/soundsystem/isoundsystem.h:157 */
	virtual void WriteAudioData(IAudioOutputStream* , const int16* , uint, uint);
	/* ../public/soundsystem/isoundsystem.h:160 */
	virtual void SetVolume(IAudioOutputStream* , float);
	/* ../public/soundsystem/isoundsystem.h:163 */
	virtual uint32 QueuedSampleCount(IAudioOutputStream* );
	/* ../public/soundsystem/isoundsystem.h:166 */
	virtual uint32 MaxWriteSampleCount(IAudioOutputStream* );
	/* ../public/soundsystem/isoundsystem.h:169 */
	virtual uint32 LatencySamplesCount(IAudioOutputStream* );
	/* ../public/soundsystem/isoundsystem.h:171 */
	virtual void Pause(IAudioOutputStream* );
	/* ../public/soundsystem/isoundsystem.h:172 */
	virtual void Resume(IAudioOutputStream* );
	/* ../public/soundsystem/isoundsystem.h:173 */
	virtual void Clear(IAudioOutputStream* );
	void IAudioOutputStream(class IAudioOutputStream *, const class IAudioOutputStream  &); /* linkage=_ZN18IAudioOutputStreamC4ERKS_ */
	void IAudioOutputStream(class IAudioOutputStream *); /* linkage=_ZN18IAudioOutputStreamC4Ev */
	virtual void ~IAudioOutputStream(class IAudioOutputStream *); /* linkage=_ZN18IAudioOutputStreamD4Ev */
	virtual void WriteAudioData(class IAudioOutputStream *, const int16  *, uint, uint); /* linkage=_ZN18IAudioOutputStream14WriteAudioDataEPKsjj */
	virtual void SetVolume(class IAudioOutputStream *, float); /* linkage=_ZN18IAudioOutputStream9SetVolumeEf */
	virtual uint32 QueuedSampleCount(class IAudioOutputStream *); /* linkage=_ZN18IAudioOutputStream17QueuedSampleCountEv */
	virtual uint32 MaxWriteSampleCount(class IAudioOutputStream *); /* linkage=_ZN18IAudioOutputStream19MaxWriteSampleCountEv */
	virtual uint32 LatencySamplesCount(class IAudioOutputStream *); /* linkage=_ZN18IAudioOutputStream19LatencySamplesCountEv */
	virtual void Pause(class IAudioOutputStream *); /* linkage=_ZN18IAudioOutputStream5PauseEv */
	virtual void Resume(class IAudioOutputStream *); /* linkage=_ZN18IAudioOutputStream6ResumeEv */
	virtual void Clear(class IAudioOutputStream *); /* linkage=_ZN18IAudioOutputStream5ClearEv */
};

// <0240F65C> ../public/soundsystem/isoundsystem.h:153
void IAudioOutputStream::~IAudioOutputStream()
{
} /* size: 0 */

// <0240F62C> ../public/soundsystem/isoundsystem.h:153
inline void IAudioOutputStream::~IAudioOutputStream()
{
} /* size: 0 */

// <026137EE> ../public/soundsystem/isoundsystem.h:179
void ISoundSystem::ISoundSystem()
{
} /* size: 0 */

// <026137D2> ../public/soundsystem/isoundsystem.h:179
inline void ISoundSystem::ISoundSystem()
{
} /* size: 0 */

// <025694B0> ../public/soundsystem/isoundsystem.h:179
// member functions: 80
// member variable: 1
// vtable entries: 36
// class size: 8
class ISoundSystem : public IAppSystem {
public:
	/* class IAppSystem <ancestor>; */ /* 0 8 */
	void ~ISoundSystem(ISoundSystem* );
	void ISoundSystem(ISoundSystem* , ISoundSystem& );
	void ISoundSystem(ISoundSystem* , const ISoundSystem& );
	void ISoundSystem(ISoundSystem* );
	/* ../public/soundsystem/isoundsystem.h:182 */
	virtual IAudioDevice2* CreateDefaultDevice(ISoundSystem* );
	/* ../public/soundsystem/isoundsystem.h:184 */
	virtual void DestroyDevice(ISoundSystem* , IAudioDevice2* );
	/* ../public/soundsystem/isoundsystem.h:185 */
	virtual IAudioDevice2* CreateNullDevice(ISoundSystem* );
	/* ../public/soundsystem/isoundsystem.h:188 */
	virtual IAudioOutputStream* CreateDirectMixOutputStream(ISoundSystem* , uint, uint, uint);
	/* ../public/soundsystem/isoundsystem.h:191 */
	virtual void DestroyOutputStream(ISoundSystem* , IAudioOutputStream* );
	/* ../public/soundsystem/isoundsystem.h:193 */
	virtual void InitSoundSystem(ISoundSystem* );
	/* ../public/soundsystem/isoundsystem.h:195 */
	virtual void Update(ISoundSystem* , bool);
	/* ../public/soundsystem/isoundsystem.h:196 */
	virtual void StopAllSounds(ISoundSystem* , bool);
	/* ../public/soundsystem/isoundsystem.h:197 */
	virtual void ClearBuffer(ISoundSystem* );
	/* ../public/soundsystem/isoundsystem.h:199 */
	virtual SoundGuid_t StartSound(ISoundSystem* , StartSoundParams_t& );
	/* ../public/soundsystem/isoundsystem.h:200 */
	virtual void StopSound(ISoundSystem* , SoundGuid_t, bool);
	/* ../public/soundsystem/isoundsystem.h:202 */
	virtual bool IsSoundStillPlaying(ISoundSystem* , SoundGuid_t);
	/* ../public/soundsystem/isoundsystem.h:204 */
	virtual CSfxTable* PrecacheSound(ISoundSystem* , const char* );
	/* ../public/soundsystem/isoundsystem.h:206 */
	virtual void PreloadSound(ISoundSystem* , CSfxTable* );
	/* ../public/soundsystem/isoundsystem.h:207 */
	virtual void PreloadSound(ISoundSystem* , const char* );
	/* ../public/soundsystem/isoundsystem.h:209 */
	virtual void ResetMixControlInput(ISoundSystem* , CUtlStringToken);
	/* ../public/soundsystem/isoundsystem.h:210 */
	virtual void SetMixControlInput(ISoundSystem* , CUtlStringToken, float);
	/* ../public/soundsystem/isoundsystem.h:211 */
	virtual void SetMixNameInput(ISoundSystem* , CUtlStringToken, uint32);
	/* ../public/soundsystem/isoundsystem.h:212 */
	virtual float GetMixControlInputValue(ISoundSystem* , CUtlStringToken);
	/* ../public/soundsystem/isoundsystem.h:214 */
	virtual SoundGuid_t GetGuidForLastSoundEmitted(ISoundSystem* );
	/* ../public/soundsystem/isoundsystem.h:215 */
	virtual void GetActiveSounds(ISoundSystem* , CUtlVector<SndInfo_t, CUtlMemory<SndInfo_t, int> >& );
	/* ../public/soundsystem/isoundsystem.h:217 */
	virtual void GetAudioDevices(const ISoundSystem* , CUtlVector<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >& );
	/* ../public/soundsystem/isoundsystem.h:219 */
	virtual void FadeOutAllSounds(ISoundSystem* , float, sound_voice_layer_t, sound_fade_type_t);
	/* ../public/soundsystem/isoundsystem.h:221 */
	virtual bool IsMuted(ISoundSystem* );
	/* ../public/soundsystem/isoundsystem.h:224 */
	virtual void PlaySoundAtOSLevel(ISoundSystem* , const char* );
	/* ../public/soundsystem/isoundsystem.h:226 */
	virtual bool DisableAudioMuting(ISoundSystem* , float);
	/* ../public/soundsystem/isoundsystem.h:228 */
	virtual void ResetMainGraphInputs(ISoundSystem* );
	/* ../public/soundsystem/isoundsystem.h:230 */
	virtual bool ToolLoadVSnd(ISoundSystem* , CSimplePCMWaveData* , const char* );
	/* ../public/soundsystem/isoundsystem.h:232 */
	virtual void OutputDebugInfo(ISoundSystem* , CUtlBuffer& );
	/* ../public/soundsystem/isoundsystem.h:234 */
	virtual int GetNumAudioDevices(ISoundSystem* );
	/* ../public/soundsystem/isoundsystem.h:235 */
	virtual AudioDeviceDesc GetAudioDeviceDesc(ISoundSystem* , int);
	/* ../public/soundsystem/isoundsystem.h:236 */
	virtual CUtlString GetAudioDeviceId(ISoundSystem* , int);
	/* ../public/soundsystem/isoundsystem.h:237 */
	virtual CUtlString GetAudioDeviceName(ISoundSystem* , int);
	/* ../public/soundsystem/isoundsystem.h:238 */
	virtual CUtlString GetActiveAudioDevice(ISoundSystem* );
	/* ../public/soundsystem/isoundsystem.h:239 */
	virtual void SetActiveAudioDevice(ISoundSystem* , CUtlString);
	/* ../public/soundsystem/isoundsystem.h:241 */
	virtual CSfxTable* CreateSound(ISoundSystem* , const char* , int, int, int, int, float, bool, void* , int);
	void ~ISoundSystem(class ISoundSystem *); /* linkage=_ZN12ISoundSystemD4Ev */
	void ISoundSystem(class ISoundSystem *, class ISoundSystem &); /* linkage=_ZN12ISoundSystemC4EOS_ */
	void ISoundSystem(class ISoundSystem *, const class ISoundSystem  &); /* linkage=_ZN12ISoundSystemC4ERKS_ */
	void ISoundSystem(class ISoundSystem *); /* linkage=_ZN12ISoundSystemC4Ev */
	virtual class IAudioDevice2 * CreateDefaultDevice(class ISoundSystem *); /* linkage=_ZN12ISoundSystem19CreateDefaultDeviceEv */
	virtual void DestroyDevice(class ISoundSystem *, class IAudioDevice2 *); /* linkage=_ZN12ISoundSystem13DestroyDeviceEP13IAudioDevice2 */
	virtual class IAudioDevice2 * CreateNullDevice(class ISoundSystem *); /* linkage=_ZN12ISoundSystem16CreateNullDeviceEv */
	virtual class IAudioOutputStream * CreateDirectMixOutputStream(class ISoundSystem *, uint, uint, uint); /* linkage=_ZN12ISoundSystem27CreateDirectMixOutputStreamEjjj */
	virtual void DestroyOutputStream(class ISoundSystem *, class IAudioOutputStream *); /* linkage=_ZN12ISoundSystem19DestroyOutputStreamEP18IAudioOutputStream */
	virtual void InitSoundSystem(class ISoundSystem *); /* linkage=_ZN12ISoundSystem15InitSoundSystemEv */
	virtual void Update(class ISoundSystem *, bool); /* linkage=_ZN12ISoundSystem6UpdateEb */
	virtual void StopAllSounds(class ISoundSystem *, bool); /* linkage=_ZN12ISoundSystem13StopAllSoundsEb */
	virtual void ClearBuffer(class ISoundSystem *); /* linkage=_ZN12ISoundSystem11ClearBufferEv */
	virtual class SoundGuid_t StartSound(class ISoundSystem *, class StartSoundParams_t &); /* linkage=_ZN12ISoundSystem10StartSoundER18StartSoundParams_t */
	virtual void StopSound(class ISoundSystem *, class SoundGuid_t, bool); /* linkage=_ZN12ISoundSystem9StopSoundE11SoundGuid_tb */
	virtual bool IsSoundStillPlaying(class ISoundSystem *, class SoundGuid_t); /* linkage=_ZN12ISoundSystem19IsSoundStillPlayingE11SoundGuid_t */
	virtual class CSfxTable * PrecacheSound(class ISoundSystem *, const char  *); /* linkage=_ZN12ISoundSystem13PrecacheSoundEPKc */
	virtual void PreloadSound(class ISoundSystem *, class CSfxTable *); /* linkage=_ZN12ISoundSystem12PreloadSoundEP9CSfxTable */
	virtual void PreloadSound(class ISoundSystem *, const char  *); /* linkage=_ZN12ISoundSystem12PreloadSoundEPKc */
	virtual void ResetMixControlInput(class ISoundSystem *, class CUtlStringToken); /* linkage=_ZN12ISoundSystem20ResetMixControlInputE15CUtlStringToken */
	virtual void SetMixControlInput(class ISoundSystem *, class CUtlStringToken, float); /* linkage=_ZN12ISoundSystem18SetMixControlInputE15CUtlStringTokenf */
	virtual void SetMixNameInput(class ISoundSystem *, class CUtlStringToken, uint32); /* linkage=_ZN12ISoundSystem15SetMixNameInputE15CUtlStringTokenj */
	virtual float GetMixControlInputValue(class ISoundSystem *, class CUtlStringToken); /* linkage=_ZN12ISoundSystem23GetMixControlInputValueE15CUtlStringToken */
	virtual class SoundGuid_t GetGuidForLastSoundEmitted(class ISoundSystem *); /* linkage=_ZN12ISoundSystem26GetGuidForLastSoundEmittedEv */
	virtual void GetActiveSounds(class ISoundSystem *, class CUtlVector<SndInfo_t, CUtlMemory<SndInfo_t, int> > &); /* linkage=_ZN12ISoundSystem15GetActiveSoundsER10CUtlVectorI9SndInfo_t10CUtlMemoryIS1_iEE */
	virtual void GetAudioDevices(const class ISoundSystem  *, class CUtlVector<audio_device_description_t, CUtlMemory<audio_device_description_t, int> > &); /* linkage=_ZNK12ISoundSystem15GetAudioDevicesER10CUtlVectorI26audio_device_description_t10CUtlMemoryIS1_iEE */
	virtual void FadeOutAllSounds(class ISoundSystem *, float, enum sound_voice_layer_t, enum sound_fade_type_t); /* linkage=_ZN12ISoundSystem16FadeOutAllSoundsEf19sound_voice_layer_t17sound_fade_type_t */
	virtual bool IsMuted(class ISoundSystem *); /* linkage=_ZN12ISoundSystem7IsMutedEv */
	virtual void PlaySoundAtOSLevel(class ISoundSystem *, const char  *); /* linkage=_ZN12ISoundSystem18PlaySoundAtOSLevelEPKc */
	virtual bool DisableAudioMuting(class ISoundSystem *, float); /* linkage=_ZN12ISoundSystem18DisableAudioMutingEf */
	virtual void ResetMainGraphInputs(class ISoundSystem *); /* linkage=_ZN12ISoundSystem20ResetMainGraphInputsEv */
	virtual bool ToolLoadVSnd(class ISoundSystem *, class CSimplePCMWaveData *, const char  *); /* linkage=_ZN12ISoundSystem12ToolLoadVSndEP18CSimplePCMWaveDataPKc */
	virtual void OutputDebugInfo(class ISoundSystem *, class CUtlBuffer &); /* linkage=_ZN12ISoundSystem15OutputDebugInfoER10CUtlBuffer */
	virtual int GetNumAudioDevices(class ISoundSystem *); /* linkage=_ZN12ISoundSystem18GetNumAudioDevicesEv */
	virtual class AudioDeviceDesc GetAudioDeviceDesc(class ISoundSystem *, int); /* linkage=_ZN12ISoundSystem18GetAudioDeviceDescEi */
	virtual class CUtlString GetAudioDeviceId(class ISoundSystem *, int); /* linkage=_ZN12ISoundSystem16GetAudioDeviceIdEi */
	virtual class CUtlString GetAudioDeviceName(class ISoundSystem *, int); /* linkage=_ZN12ISoundSystem18GetAudioDeviceNameEi */
	virtual class CUtlString GetActiveAudioDevice(class ISoundSystem *); /* linkage=_ZN12ISoundSystem20GetActiveAudioDeviceEv */
	virtual void SetActiveAudioDevice(class ISoundSystem *, class CUtlString); /* linkage=_ZN12ISoundSystem20SetActiveAudioDeviceE10CUtlString */
	virtual class CSfxTable * CreateSound(class ISoundSystem *, const char  *, int, int, int, int, float, bool, void *, int); /* linkage=_ZN12ISoundSystem11CreateSoundEPKciiiifbPvi */
};

