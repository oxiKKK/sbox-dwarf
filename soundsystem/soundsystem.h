
//
// soundsystem/soundsystem.h
//
//	referenced by: libengine2.so
//
//	functions: 3
//	class: 1
//

// <0260F82C> soundsystem/soundsystem.h:69
// function calls: 19
void CSoundSystem::~CSoundSystem()
{
	CUtlMemory<audio_device_description_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<audio_device_description_t, int>::Purge(); // 903
	CUtlMemory<audio_device_description_t, int>::Purge(); // 1799
	CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::RemoveAll(); // 1798
	CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::Purge(); // 560
	ValidateAlignment<audio_device_description_t>(void); // 508
	CUtlMemory<audio_device_description_t, int>::Purge(); // 510
	CUtlMemory<audio_device_description_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::~CUtlVector(); // 85
	CAudioDeviceList::~CAudioDeviceList(); // 69
	CUtlMemory<ResourceManifestDesc_t::IsExternallyAllocated(); // 905
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 903
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 1799
	CUtlVectorBase<ResourceManifestDesc_t::RemoveAll(); // 1798
	CUtlVectorBase<ResourceManifestDesc_t::Purge(); // 560
	CUtlVectorBase<ResourceManifestDesc_t::~CUtlVectorBase(); // 410
	CUtlVector<ResourceManifestDesc_t::~CUtlVector(); // 42
	CTier2AppSystem<ISoundSystem, 0>::~CTier2AppSystem(); // 69
} /* size: 114, inline expansions: 19 (434 bytes) */

// <0260F810> soundsystem/soundsystem.h:69
inline void CSoundSystem::~CSoundSystem()
{
} /* size: 0 */

// <025903DD> soundsystem/soundsystem.h:69
// member functions: 98
// member variables: 6
// vtable entries: 41
// class size: 112
class CSoundSystem : public CTier2AppSystem<ISoundSystem, 0> {
public:
	/* class CTier2AppSystem<ISoundSystem, 0> <ancestor>; */ /* 0 48 */
	void CSoundSystem(CSoundSystem* , CSoundSystem& );
	void CSoundSystem(CSoundSystem* , const CSoundSystem& );
	/* soundsystem/soundsystem.cpp:100 */
	void CSoundSystem(CSoundSystem* );
	/* soundsystem/soundsystem.cpp:162 */
	virtual InitReturnVal_t Init(CSoundSystem* );
	/* soundsystem/soundsystem.cpp:177 */
	virtual void Shutdown(CSoundSystem* );
	/* soundsystem/soundsystem.cpp:193 */
	virtual bool Connect(CSoundSystem* , CreateInterfaceFn);
	/* soundsystem/soundsystem.cpp:203 */
	virtual void Disconnect(CSoundSystem* );
	/* soundsystem/soundsystem.cpp:219 */
	virtual const AppSystemInfo_t* GetDependencies(CSoundSystem* );
	/* soundsystem/soundsystem.cpp:110 */
	virtual IAudioOutputStream* CreateDirectMixOutputStream(CSoundSystem* , uint, uint, uint);
	/* soundsystem/soundsystem.cpp:116 */
	virtual void DestroyOutputStream(CSoundSystem* , IAudioOutputStream* );
	/* soundsystem/soundsystem.cpp:93 */
	virtual void InitSoundSystem(CSoundSystem* );
	/* soundsystem/soundsystem.cpp:225 */
	virtual void Update(CSoundSystem* , bool);
	/* soundsystem/soundsystem.cpp:245 */
	virtual void StopAllSounds(CSoundSystem* , bool);
	/* soundsystem/soundsystem.cpp:250 */
	virtual void FadeOutAllSounds(CSoundSystem* , float, sound_voice_layer_t, sound_fade_type_t);
	/* soundsystem/soundsystem.cpp:255 */
	virtual void ClearBuffer(CSoundSystem* );
	/* soundsystem/soundsystem.cpp:260 */
	virtual SoundGuid_t StartSound(CSoundSystem* , StartSoundParams_t& );
	/* soundsystem/soundsystem.cpp:265 */
	virtual void StopSound(CSoundSystem* , SoundGuid_t, bool);
	/* soundsystem/soundsystem.cpp:269 */
	virtual SoundGuid_t GetGuidForLastSoundEmitted(CSoundSystem* );
	/* soundsystem/soundsystem.cpp:274 */
	virtual bool IsSoundStillPlaying(CSoundSystem* , SoundGuid_t);
	/* soundsystem/soundsystem.cpp:280 */
	virtual CSfxTable* PrecacheSound(CSoundSystem* , const char* );
	/* soundsystem/soundsystem.cpp:285 */
	CSfxTable* PrecacheSound_src2(CSoundSystem* , const char* , VMIX_MEMTYPE);
	/* soundsystem/soundsystem.cpp:482 */
	virtual void PreloadSound(CSoundSystem* , CSfxTable* );
	/* soundsystem/soundsystem.cpp:477 */
	virtual void PreloadSound(CSoundSystem* , const char* );
	/* soundsystem/soundsystem.cpp:295 */
	virtual void ResetMixControlInput(CSoundSystem* , CUtlStringToken);
	/* soundsystem/soundsystem.cpp:300 */
	virtual void SetMixControlInput(CSoundSystem* , CUtlStringToken, float);
	/* soundsystem/soundsystem.cpp:305 */
	virtual void SetMixNameInput(CSoundSystem* , CUtlStringToken, uint32);
	/* soundsystem/soundsystem.cpp:316 */
	virtual float GetMixControlInputValue(CSoundSystem* , CUtlStringToken);
	/* soundsystem/soundsystem.cpp:420 */
	virtual void GetActiveSounds(CSoundSystem* , CUtlVector<SndInfo_t, CUtlMemory<SndInfo_t, int> >& );
	/* soundsystem/soundsystem.cpp:463 */
	virtual void GetAudioDevices(const CSoundSystem* , CUtlVector<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >& );
	/* soundsystem/soundsystem.cpp:368 */
	virtual IAudioDevice2* CreateDefaultDevice(CSoundSystem* );
	/* soundsystem/soundsystem.cpp:407 */
	virtual void DestroyDevice(CSoundSystem* , IAudioDevice2* );
	/* soundsystem/soundsystem.cpp:412 */
	virtual IAudioDevice2* CreateNullDevice(CSoundSystem* );
	/* soundsystem/soundsystem.cpp:498 */
	virtual bool IsMuted(CSoundSystem* );
	/* soundsystem/soundsystem.cpp:331 */
	virtual void PlaySoundAtOSLevel(CSoundSystem* , const char* );
	/* soundsystem/soundsystem.cpp:336 */
	virtual bool DisableAudioMuting(CSoundSystem* , float);
	/* soundsystem/soundsystem.cpp:310 */
	virtual void ResetMainGraphInputs(CSoundSystem* );
	/* soundsystem/soundsystem.cpp:503 */
	virtual bool ToolLoadVSnd(CSoundSystem* , CSimplePCMWaveData* , const char* );
	/* soundsystem/soundsystem.cpp:238 */
	virtual void OutputDebugInfo(CSoundSystem* , CUtlBuffer& );
	/* soundsystem/soundsystem.cpp:121 */
	void QueueRestart(CSoundSystem* );
	/* soundsystem/soundsystem.cpp:129 */
	void CheckDevice(CSoundSystem* );
private:
	/* soundsystem/soundsystem.cpp:322 */
	void EnableDebugVisualizer(CSoundSystem* , bool);
	bool :0;
	bool m_bNeedsRestart:1; /* 44: 0 1 */
	CVSoundTypeManager * m_pSoundInfoTypeManager; /* 48 8 */
	CAudioDeviceList m_DeviceList; /* 56 40 */
	double m_flDisableMuteUntil; /* 96 8 */
	IAudioDevice2 * m_pOriginalAudioDevice; /* 104 8 */
	/* soundsystem/soundsystem.cpp:508 */
	virtual int GetNumAudioDevices(CSoundSystem* );
	/* soundsystem/soundsystem.cpp:513 */
	virtual AudioDeviceDesc GetAudioDeviceDesc(CSoundSystem* , int);
	/* soundsystem/soundsystem.cpp:528 */
	virtual CUtlString GetAudioDeviceId(CSoundSystem* , int);
	/* soundsystem/soundsystem.cpp:540 */
	virtual CUtlString GetAudioDeviceName(CSoundSystem* , int);
	/* soundsystem/soundsystem.cpp:557 */
	virtual CUtlString GetActiveAudioDevice(CSoundSystem* );
	/* soundsystem/soundsystem.cpp:563 */
	virtual void SetActiveAudioDevice(CSoundSystem* , CUtlString);
	/* soundsystem/soundsystem.cpp:290 */
	virtual CSfxTable* CreateSound(CSoundSystem* , const char* , int, int, int, int, float, bool, void* , int);
	void ~CSoundSystem(CSoundSystem* );
	void CSoundSystem(class CSoundSystem *, class CSoundSystem &); /* linkage=_ZN12CSoundSystemC4EOS_ */
	void CSoundSystem(class CSoundSystem *, const class CSoundSystem  &); /* linkage=_ZN12CSoundSystemC4ERKS_ */
	void CSoundSystem(class CSoundSystem *); /* linkage=_ZN12CSoundSystemC4Ev */
	virtual enum InitReturnVal_t Init(class CSoundSystem *); /* linkage=_ZN12CSoundSystem4InitEv */
	virtual void Shutdown(class CSoundSystem *); /* linkage=_ZN12CSoundSystem8ShutdownEv */
	virtual bool Connect(class CSoundSystem *, CreateInterfaceFn); /* linkage=_ZN12CSoundSystem7ConnectEPFPvPKcPiE */
	virtual void Disconnect(class CSoundSystem *); /* linkage=_ZN12CSoundSystem10DisconnectEv */
	virtual const class AppSystemInfo_t  * GetDependencies(class CSoundSystem *); /* linkage=_ZN12CSoundSystem15GetDependenciesEv */
	virtual class IAudioOutputStream * CreateDirectMixOutputStream(class CSoundSystem *, uint, uint, uint); /* linkage=_ZN12CSoundSystem27CreateDirectMixOutputStreamEjjj */
	virtual void DestroyOutputStream(class CSoundSystem *, class IAudioOutputStream *); /* linkage=_ZN12CSoundSystem19DestroyOutputStreamEP18IAudioOutputStream */
	virtual void InitSoundSystem(class CSoundSystem *); /* linkage=_ZN12CSoundSystem15InitSoundSystemEv */
	virtual void Update(class CSoundSystem *, bool); /* linkage=_ZN12CSoundSystem6UpdateEb */
	virtual void StopAllSounds(class CSoundSystem *, bool); /* linkage=_ZN12CSoundSystem13StopAllSoundsEb */
	virtual void FadeOutAllSounds(class CSoundSystem *, float, enum sound_voice_layer_t, enum sound_fade_type_t); /* linkage=_ZN12CSoundSystem16FadeOutAllSoundsEf19sound_voice_layer_t17sound_fade_type_t */
	virtual void ClearBuffer(class CSoundSystem *); /* linkage=_ZN12CSoundSystem11ClearBufferEv */
	virtual class SoundGuid_t StartSound(class CSoundSystem *, class StartSoundParams_t &); /* linkage=_ZN12CSoundSystem10StartSoundER18StartSoundParams_t */
	virtual void StopSound(class CSoundSystem *, class SoundGuid_t, bool); /* linkage=_ZN12CSoundSystem9StopSoundE11SoundGuid_tb */
	virtual class SoundGuid_t GetGuidForLastSoundEmitted(class CSoundSystem *); /* linkage=_ZN12CSoundSystem26GetGuidForLastSoundEmittedEv */
	virtual bool IsSoundStillPlaying(class CSoundSystem *, class SoundGuid_t); /* linkage=_ZN12CSoundSystem19IsSoundStillPlayingE11SoundGuid_t */
	/* <2628b71> soundsystem/soundsystem.cpp:280 */
	virtual class CSfxTable * PrecacheSound(class CSoundSystem *, const char  *); /* linkage=_ZN12CSoundSystem13PrecacheSoundEPKc */
	class CSfxTable * PrecacheSound_src2(class CSoundSystem *, const char  *, enum VMIX_MEMTYPE); /* linkage=_ZN12CSoundSystem18PrecacheSound_src2EPKc12VMIX_MEMTYPE */
	/* <2629def> soundsystem/soundsystem.cpp:482 */
	virtual void PreloadSound(class CSoundSystem *, class CSfxTable *); /* linkage=_ZN12CSoundSystem12PreloadSoundEP9CSfxTable */
	virtual void PreloadSound(class CSoundSystem *, const char  *); /* linkage=_ZN12CSoundSystem12PreloadSoundEPKc */
	virtual void ResetMixControlInput(class CSoundSystem *, class CUtlStringToken); /* linkage=_ZN12CSoundSystem20ResetMixControlInputE15CUtlStringToken */
	virtual void SetMixControlInput(class CSoundSystem *, class CUtlStringToken, float); /* linkage=_ZN12CSoundSystem18SetMixControlInputE15CUtlStringTokenf */
	virtual void SetMixNameInput(class CSoundSystem *, class CUtlStringToken, uint32); /* linkage=_ZN12CSoundSystem15SetMixNameInputE15CUtlStringTokenj */
	virtual float GetMixControlInputValue(class CSoundSystem *, class CUtlStringToken); /* linkage=_ZN12CSoundSystem23GetMixControlInputValueE15CUtlStringToken */
	virtual void GetActiveSounds(class CSoundSystem *, class CUtlVector<SndInfo_t, CUtlMemory<SndInfo_t, int> > &); /* linkage=_ZN12CSoundSystem15GetActiveSoundsER10CUtlVectorI9SndInfo_t10CUtlMemoryIS1_iEE */
	virtual void GetAudioDevices(const class CSoundSystem  *, class CUtlVector<audio_device_description_t, CUtlMemory<audio_device_description_t, int> > &); /* linkage=_ZNK12CSoundSystem15GetAudioDevicesER10CUtlVectorI26audio_device_description_t10CUtlMemoryIS1_iEE */
	virtual class IAudioDevice2 * CreateDefaultDevice(class CSoundSystem *); /* linkage=_ZN12CSoundSystem19CreateDefaultDeviceEv */
	virtual void DestroyDevice(class CSoundSystem *, class IAudioDevice2 *); /* linkage=_ZN12CSoundSystem13DestroyDeviceEP13IAudioDevice2 */
	virtual class IAudioDevice2 * CreateNullDevice(class CSoundSystem *); /* linkage=_ZN12CSoundSystem16CreateNullDeviceEv */
	virtual bool IsMuted(class CSoundSystem *); /* linkage=_ZN12CSoundSystem7IsMutedEv */
	virtual void PlaySoundAtOSLevel(class CSoundSystem *, const char  *); /* linkage=_ZN12CSoundSystem18PlaySoundAtOSLevelEPKc */
	virtual bool DisableAudioMuting(class CSoundSystem *, float); /* linkage=_ZN12CSoundSystem18DisableAudioMutingEf */
	virtual void ResetMainGraphInputs(class CSoundSystem *); /* linkage=_ZN12CSoundSystem20ResetMainGraphInputsEv */
	virtual bool ToolLoadVSnd(class CSoundSystem *, class CSimplePCMWaveData *, const char  *); /* linkage=_ZN12CSoundSystem12ToolLoadVSndEP18CSimplePCMWaveDataPKc */
	virtual void OutputDebugInfo(class CSoundSystem *, class CUtlBuffer &); /* linkage=_ZN12CSoundSystem15OutputDebugInfoER10CUtlBuffer */
	void QueueRestart(class CSoundSystem *); /* linkage=_ZN12CSoundSystem12QueueRestartEv */
	void CheckDevice(class CSoundSystem *); /* linkage=_ZN12CSoundSystem11CheckDeviceEv */
	/* <262aa72> soundsystem/soundsystem.cpp:322 */
	void EnableDebugVisualizer(class CSoundSystem *, bool); /* linkage=_ZN12CSoundSystem21EnableDebugVisualizerEb */
	virtual int GetNumAudioDevices(class CSoundSystem *); /* linkage=_ZN12CSoundSystem18GetNumAudioDevicesEv */
	/* <2628fc0> soundsystem/soundsystem.cpp:513 */
	virtual class AudioDeviceDesc GetAudioDeviceDesc(class CSoundSystem *, int); /* linkage=_ZN12CSoundSystem18GetAudioDeviceDescEi */
	virtual class CUtlString GetAudioDeviceId(class CSoundSystem *, int); /* linkage=_ZN12CSoundSystem16GetAudioDeviceIdEi */
	virtual class CUtlString GetAudioDeviceName(class CSoundSystem *, int); /* linkage=_ZN12CSoundSystem18GetAudioDeviceNameEi */
	virtual class CUtlString GetActiveAudioDevice(class CSoundSystem *); /* linkage=_ZN12CSoundSystem20GetActiveAudioDeviceEv */
	virtual void SetActiveAudioDevice(class CSoundSystem *, class CUtlString); /* linkage=_ZN12CSoundSystem20SetActiveAudioDeviceE10CUtlString */
	virtual class CSfxTable * CreateSound(class CSoundSystem *, const char  *, int, int, int, int, float, bool, void *, int); /* linkage=_ZN12CSoundSystem11CreateSoundEPKciiiifbPvi */
	void ~CSoundSystem(class CSoundSystem *); /* linkage=_ZN12CSoundSystemD4Ev */
};

// <0125A9B9> soundsystem/soundsystem.h:168
CAudioProcessor* CreateDelayAudioProcessor(int)
{
} /* size: 0 */

