
//
// public/soundsystem/lowlevel.h
//
//	referenced by: libengine2.so
//
//	functions: 60
//	classes: 13
//	structs: 3
//

// <026DCE4D> ../public/soundsystem/lowlevel.h:33
// variable: 1
inline uint MsecToSamples(float ms)
{
	float flSamples; // 35
} /* size: 0, variables: 1 */

// <026DCE13> ../public/soundsystem/lowlevel.h:39
// variable: 1
inline uint MsecToFractionalSamples(float ms, float& outFraction)
{
	float flSamples; // 41
} /* size: 0, variables: 1 */

// <025579EE> ../public/soundsystem/lowlevel.h:55
// member functions: 4
// member variables: 7
// struct size: 1,288
struct audio_device_description_t {
	wchar_t m_deviceName[256]; /* 0 1024 */
	char m_friendlyName[256]; /* 1024 256 */
	uint32 m_nDeviceID; /* 1280 4 */
	uint8 m_nSubsystemId; /* 1284 1 */
	uint8 m_nChannelCount; /* 1285 1 */
	bool m_bIsDefault:1; /* 1286: 0 1 */
	bool m_bIsAvailable:1; /* 1286: 1 1 */
	/* ../public/soundsystem/lowlevel.h:65 */
	void audio_device_description_t(audio_device_description_t* );
	/* ../public/soundsystem/lowlevel.h:66 */
	void audio_device_description_t(audio_device_description_t* , eSubSystems_t);
	/* ../public/soundsystem/lowlevel.h:68 */
	void InitAsNullDevice(audio_device_description_t* );
	/* ../public/soundsystem/lowlevel.h:77 */
	void InitAsFailedDevice(audio_device_description_t* );
};

// <06E6CA5E> ../../public/soundsystem/lowlevel.h:65
void audio_device_description_t::audio_device_description_t()
{
} /* size: 0 */

// <06E6CA45> ../../public/soundsystem/lowlevel.h:65
inline void audio_device_description_t::audio_device_description_t()
{
} /* size: 0 */

// <06D5F119> ../../public/soundsystem/lowlevel.h:68
inline void audio_device_description_t::InitAsNullDevice()
{
} /* size: 0 */

// <02617A9A> ../public/soundsystem/lowlevel.h:85
void CAudioDeviceList::~CAudioDeviceList()
{
} /* size: 0 */

// <02617A7E> ../public/soundsystem/lowlevel.h:85
inline void CAudioDeviceList::~CAudioDeviceList()
{
} /* size: 0 */

// <0258F8F0> ../public/soundsystem/lowlevel.h:85
// member functions: 22
// member variables: 3
// class size: 40
class CAudioDeviceList {
	/* ../public/soundsystem/lowlevel.h:110 */
	enum finddevice_t {
		FIND_ANY_DEVICE = 0,
		FIND_AVAILABLE_DEVICE_ONLY = 1,
	};
	CUtlVector<audio_device_description_t, CUtlMemory<audio_device_description_t, int> > m_list; /* 0 32 */
	int m_nDefaultDevice; /* 32 4 */
	/* ../public/soundsystem/lowlevel.h:91 */
	void CAudioDeviceList(CAudioDeviceList* );
	/* ../public/soundsystem/lowlevel.h:92 */
	bool BuildDeviceList(CAudioDeviceList* , IAudioDevice2* );
	/* ../public/soundsystem/lowlevel.h:93 */
	bool UpdateDeviceList(CAudioDeviceList* , IAudioDevice2* );
	/* ../public/soundsystem/lowlevel.h:94 */
	audio_device_description_t* FindDeviceById(CAudioDeviceList* , const char* );
	/* ../public/soundsystem/lowlevel.h:95 */
	audio_device_description_t* GetDefaultDevice(CAudioDeviceList* );
	/* ../public/soundsystem/lowlevel.h:103 */
	bool IsValid(CAudioDeviceList* );
	/* ../public/soundsystem/lowlevel.h:104 */
	IAudioDevice2* CreateDevice(CAudioDeviceList* , audio_device_init_params_t& );
	/* ../public/soundsystem/lowlevel.h:105 */
	const wchar_t* GetDeviceToCreate(CAudioDeviceList* , audio_device_init_params_t& );
private:
	uint m_nDeviceStamp; /* 36 4 */
	/* ../public/soundsystem/lowlevel.h:109 */
	void UpdateDefaultDevice(CAudioDeviceList* );
	/* ../public/soundsystem/lowlevel.h:115 */
	int FindDeviceById(CAudioDeviceList* , const wchar_t* , finddevice_t);
	void ~CAudioDeviceList(CAudioDeviceList* );
	void CAudioDeviceList(class CAudioDeviceList *); /* linkage=_ZN16CAudioDeviceListC4Ev */
	bool BuildDeviceList(class CAudioDeviceList *, class IAudioDevice2 *); /* linkage=_ZN16CAudioDeviceList15BuildDeviceListEP13IAudioDevice2 */
	bool UpdateDeviceList(class CAudioDeviceList *, class IAudioDevice2 *); /* linkage=_ZN16CAudioDeviceList16UpdateDeviceListEP13IAudioDevice2 */
	class audio_device_description_t * FindDeviceById(class CAudioDeviceList *, const char  *); /* linkage=_ZN16CAudioDeviceList14FindDeviceByIdEPKc */
	class audio_device_description_t * GetDefaultDevice(class CAudioDeviceList *); /* linkage=_ZN16CAudioDeviceList16GetDefaultDeviceEv */
	bool IsValid(class CAudioDeviceList *); /* linkage=_ZN16CAudioDeviceList7IsValidEv */
	class IAudioDevice2 * CreateDevice(class CAudioDeviceList *, class audio_device_init_params_t &); /* linkage=_ZN16CAudioDeviceList12CreateDeviceER26audio_device_init_params_t */
	const wchar_t  * GetDeviceToCreate(class CAudioDeviceList *, class audio_device_init_params_t &); /* linkage=_ZN16CAudioDeviceList17GetDeviceToCreateER26audio_device_init_params_t */
	void UpdateDefaultDevice(class CAudioDeviceList *); /* linkage=_ZN16CAudioDeviceList19UpdateDefaultDeviceEv */
	/* <6d5f859> soundsystem/lowlevel/device_null.cpp:103 */
	int FindDeviceById(class CAudioDeviceList *, const wchar_t  *, enum finddevice_t); /* linkage=_ZN16CAudioDeviceList14FindDeviceByIdEPKwNS_12finddevice_tE */
	void ~CAudioDeviceList(class CAudioDeviceList *); /* linkage=_ZN16CAudioDeviceListD4Ev */
};

// <06D5AAC6> ../../public/soundsystem/lowlevel.h:85
// member functions: 21
// member variables: 3
// class size: 40
class CAudioDeviceList {
	/* ../../public/soundsystem/lowlevel.h:110 */
	enum finddevice_t {
		FIND_ANY_DEVICE = 0,
		FIND_AVAILABLE_DEVICE_ONLY = 1,
	};
	CUtlVector<audio_device_description_t, CUtlMemory<audio_device_description_t, int> > m_list; /* 0 32 */
	int m_nDefaultDevice; /* 32 4 */
	/* ../../public/soundsystem/lowlevel.h:91 */
	void CAudioDeviceList(CAudioDeviceList* );
	/* ../../public/soundsystem/lowlevel.h:92 */
	bool BuildDeviceList(CAudioDeviceList* , IAudioDevice2* );
	/* ../../public/soundsystem/lowlevel.h:93 */
	bool UpdateDeviceList(CAudioDeviceList* , IAudioDevice2* );
	/* ../../public/soundsystem/lowlevel.h:94 */
	audio_device_description_t* FindDeviceById(CAudioDeviceList* , const char* );
	/* ../../public/soundsystem/lowlevel.h:95 */
	audio_device_description_t* GetDefaultDevice(CAudioDeviceList* );
	/* ../../public/soundsystem/lowlevel.h:103 */
	bool IsValid(CAudioDeviceList* );
	/* ../../public/soundsystem/lowlevel.h:104 */
	IAudioDevice2* CreateDevice(CAudioDeviceList* , audio_device_init_params_t& );
	/* ../../public/soundsystem/lowlevel.h:105 */
	const wchar_t* GetDeviceToCreate(CAudioDeviceList* , audio_device_init_params_t& );
private:
	uint m_nDeviceStamp; /* 36 4 */
	/* ../../public/soundsystem/lowlevel.h:109 */
	void UpdateDefaultDevice(CAudioDeviceList* );
	/* ../../public/soundsystem/lowlevel.h:115 */
	int FindDeviceById(CAudioDeviceList* , const wchar_t* , finddevice_t);
	void CAudioDeviceList(class CAudioDeviceList *); /* linkage=_ZN16CAudioDeviceListC4Ev */
	bool BuildDeviceList(class CAudioDeviceList *, class IAudioDevice2 *); /* linkage=_ZN16CAudioDeviceList15BuildDeviceListEP13IAudioDevice2 */
	bool UpdateDeviceList(class CAudioDeviceList *, class IAudioDevice2 *); /* linkage=_ZN16CAudioDeviceList16UpdateDeviceListEP13IAudioDevice2 */
	class audio_device_description_t * FindDeviceById(class CAudioDeviceList *, const char  *); /* linkage=_ZN16CAudioDeviceList14FindDeviceByIdEPKc */
	class audio_device_description_t * GetDefaultDevice(class CAudioDeviceList *); /* linkage=_ZN16CAudioDeviceList16GetDefaultDeviceEv */
	bool IsValid(class CAudioDeviceList *); /* linkage=_ZN16CAudioDeviceList7IsValidEv */
	class IAudioDevice2 * CreateDevice(class CAudioDeviceList *, class audio_device_init_params_t &); /* linkage=_ZN16CAudioDeviceList12CreateDeviceER26audio_device_init_params_t */
	const wchar_t  * GetDeviceToCreate(class CAudioDeviceList *, class audio_device_init_params_t &); /* linkage=_ZN16CAudioDeviceList17GetDeviceToCreateER26audio_device_init_params_t */
	void UpdateDefaultDevice(class CAudioDeviceList *); /* linkage=_ZN16CAudioDeviceList19UpdateDefaultDeviceEv */
	/* <6d5f859> soundsystem/lowlevel/device_null.cpp:103 */
	int FindDeviceById(class CAudioDeviceList *, const wchar_t  *, enum finddevice_t); /* linkage=_ZN16CAudioDeviceList14FindDeviceByIdEPKwNS_12finddevice_tE */
	void ~CAudioDeviceList(class CAudioDeviceList *); /* linkage=_ZN16CAudioDeviceListD4Ev */
};

// <026271F2> ../public/soundsystem/lowlevel.h:91
inline void CAudioDeviceList::CAudioDeviceList()
{
} /* size: 0 */

// <026271D9> ../public/soundsystem/lowlevel.h:95
inline void CAudioDeviceList::GetDefaultDevice()
{
} /* size: 0 */

// <06D5F100> ../../public/soundsystem/lowlevel.h:103
inline void CAudioDeviceList::IsValid()
{
} /* size: 0 */

// <06E6C5FA> ../../public/soundsystem/lowlevel.h:120
void audio_device_init_params_t::audio_device_init_params_t()
{
} /* size: 0 */

// <06E6C5DE> ../../public/soundsystem/lowlevel.h:120
inline void audio_device_init_params_t::audio_device_init_params_t()
{
} /* size: 0 */

// <02557E47> ../public/soundsystem/lowlevel.h:120
// member functions: 4
// member variables: 9
// struct size: 1,064
struct audio_device_init_params_t {
	const class audio_device_description_t * m_pOverrideDevice; /* 0 8 */
	int m_nOutputBufferCount; /* 8 4 */
	int m_nSampleCountPerOutputBuffer; /* 12 4 */
	int m_nOverrideSpeakerConfig; /* 16 4 */
	bool m_bOverrideDevice; /* 20 1 */
	bool m_bOverrideSpeakerConfig; /* 21 1 */
	wchar_t m_overrideDeviceName[256]; /* 24 1024 */
	int m_nOverrideSubsystem; /* 1048 4 */
	void (*m_pfnMixAudio)(void); /* 1056 8* /
	/* ../public/soundsystem/lowlevel.h:140 */
	void OverrideDevice(audio_device_init_params_t* , audio_device_description_t* );
	/* ../public/soundsystem/lowlevel.h:147 */
	void OverrideSpeakerConfig(audio_device_init_params_t* , int);
	/* ../public/soundsystem/lowlevel.h:154 */
	void Defaults(audio_device_init_params_t* );
};

// <026271B4> ../public/soundsystem/lowlevel.h:140
inline void audio_device_init_params_t::OverrideDevice(audio_device_description_t* pDevice)
{
} /* size: 0 */

// <02627170> ../public/soundsystem/lowlevel.h:147
// variables: 2
void audio_device_init_params_t::OverrideSpeakerConfig(int nSpeakerConfig)
{
	const char   __FUNCTION__; // 23484
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 149
	}
} /* size: 0, variables: 1 */

// <02627157> ../public/soundsystem/lowlevel.h:154
inline void audio_device_init_params_t::Defaults()
{
} /* size: 0 */

// <06E6C4AE> ../../public/soundsystem/lowlevel.h:165
void IAudioSubsystem::IAudioSubsystem()
{
} /* size: 0 */

// <06E6C492> ../../public/soundsystem/lowlevel.h:165
inline void IAudioSubsystem::IAudioSubsystem()
{
} /* size: 0 */

// <02558225> ../public/soundsystem/lowlevel.h:165
// member functions: 16
// member variable: 1
// vtable entries: 6
// class size: 8
class IAudioSubsystem {
	int ()(void) * * _vptr.IAudioSubsystem; /* 0 8 */
	/* ../public/soundsystem/lowlevel.h:168 */
	virtual void ~IAudioSubsystem(IAudioSubsystem* );
	/* ../public/soundsystem/lowlevel.h:170 */
	virtual eSubSystems_t GetSubsystemID(IAudioSubsystem* );
	/* ../public/soundsystem/lowlevel.h:171 */
	virtual bool NeedsRestart(IAudioSubsystem* );
	/* ../public/soundsystem/lowlevel.h:172 */
	virtual int EnumerateDevices(IAudioSubsystem* , audio_device_description_t* , int);
	/* ../public/soundsystem/lowlevel.h:173 */
	virtual IAudioDevice2* CreateDevice(IAudioSubsystem* , const audio_device_init_params_t& );
	/* ../public/soundsystem/lowlevel.h:174 */
	virtual void DestroyDevice(IAudioSubsystem* , IAudioDevice2* );
	/* ../public/soundsystem/lowlevel.h:175 */
	virtual void ForceRestart(IAudioSubsystem* );
	void IAudioSubsystem(class IAudioSubsystem *, const class IAudioSubsystem  &); /* linkage=_ZN15IAudioSubsystemC4ERKS_ */
	void IAudioSubsystem(class IAudioSubsystem *); /* linkage=_ZN15IAudioSubsystemC4Ev */
	virtual void ~IAudioSubsystem(class IAudioSubsystem *); /* linkage=_ZN15IAudioSubsystemD4Ev */
	virtual enum eSubSystems_t GetSubsystemID(class IAudioSubsystem *); /* linkage=_ZN15IAudioSubsystem14GetSubsystemIDEv */
	virtual bool NeedsRestart(class IAudioSubsystem *); /* linkage=_ZN15IAudioSubsystem12NeedsRestartEv */
	virtual int EnumerateDevices(class IAudioSubsystem *, class audio_device_description_t *, int); /* linkage=_ZN15IAudioSubsystem16EnumerateDevicesEP26audio_device_description_ti */
	virtual class IAudioDevice2 * CreateDevice(class IAudioSubsystem *, const class audio_device_init_params_t  &); /* linkage=_ZN15IAudioSubsystem12CreateDeviceERK26audio_device_init_params_t */
	virtual void DestroyDevice(class IAudioSubsystem *, class IAudioDevice2 *); /* linkage=_ZN15IAudioSubsystem13DestroyDeviceEP13IAudioDevice2 */
	virtual void ForceRestart(class IAudioSubsystem *); /* linkage=_ZN15IAudioSubsystem12ForceRestartEv */
};

// <06D5BD54> ../../public/soundsystem/lowlevel.h:165
// member functions: 18
// member variable: 1
// vtable entries: 6
// class size: 8
class IAudioSubsystem {
	void IAudioSubsystem(IAudioSubsystem* , const IAudioSubsystem& );
	void IAudioSubsystem(IAudioSubsystem* );
	int ()(void) * * _vptr.IAudioSubsystem; /* 0 8 */
	/* ../../public/soundsystem/lowlevel.h:168 */
	virtual void ~IAudioSubsystem(IAudioSubsystem* );
	/* ../../public/soundsystem/lowlevel.h:170 */
	virtual eSubSystems_t GetSubsystemID(IAudioSubsystem* );
	/* ../../public/soundsystem/lowlevel.h:171 */
	virtual bool NeedsRestart(IAudioSubsystem* );
	/* ../../public/soundsystem/lowlevel.h:172 */
	virtual int EnumerateDevices(IAudioSubsystem* , audio_device_description_t* , int);
	/* ../../public/soundsystem/lowlevel.h:173 */
	virtual IAudioDevice2* CreateDevice(IAudioSubsystem* , const audio_device_init_params_t& );
	/* ../../public/soundsystem/lowlevel.h:174 */
	virtual void DestroyDevice(IAudioSubsystem* , IAudioDevice2* );
	/* ../../public/soundsystem/lowlevel.h:175 */
	virtual void ForceRestart(IAudioSubsystem* );
	void IAudioSubsystem(class IAudioSubsystem *, const class IAudioSubsystem  &); /* linkage=_ZN15IAudioSubsystemC4ERKS_ */
	void IAudioSubsystem(class IAudioSubsystem *); /* linkage=_ZN15IAudioSubsystemC4Ev */
	virtual void ~IAudioSubsystem(class IAudioSubsystem *); /* linkage=_ZN15IAudioSubsystemD4Ev */
	virtual enum eSubSystems_t GetSubsystemID(class IAudioSubsystem *); /* linkage=_ZN15IAudioSubsystem14GetSubsystemIDEv */
	virtual bool NeedsRestart(class IAudioSubsystem *); /* linkage=_ZN15IAudioSubsystem12NeedsRestartEv */
	virtual int EnumerateDevices(class IAudioSubsystem *, class audio_device_description_t *, int); /* linkage=_ZN15IAudioSubsystem16EnumerateDevicesEP26audio_device_description_ti */
	virtual class IAudioDevice2 * CreateDevice(class IAudioSubsystem *, const class audio_device_init_params_t  &); /* linkage=_ZN15IAudioSubsystem12CreateDeviceERK26audio_device_init_params_t */
	virtual void DestroyDevice(class IAudioSubsystem *, class IAudioDevice2 *); /* linkage=_ZN15IAudioSubsystem13DestroyDeviceEP13IAudioDevice2 */
	virtual void ForceRestart(class IAudioSubsystem *); /* linkage=_ZN15IAudioSubsystem12ForceRestartEv */
};

// <06E6C9FA> ../../public/soundsystem/lowlevel.h:168
void IAudioSubsystem::~IAudioSubsystem()
{
} /* size: 0 */

// <06E6C9CA> ../../public/soundsystem/lowlevel.h:168
inline void IAudioSubsystem::~IAudioSubsystem()
{
} /* size: 0 */

// <0260E274> ../public/soundsystem/lowlevel.h:178
void Audio_SetSubsystem(eSubSystems_t)
{
} /* size: 0 */

// <025583F9> ../public/soundsystem/lowlevel.h:179
IAudioSubsystem* Audio_GetSubsystem(void)
{
} /* size: 0 */

// <0260E3B7> ../public/soundsystem/lowlevel.h:189
bool Audio_PollErrorEvents(void)
{
} /* size: 0 */

// <06E6C62D> ../../public/soundsystem/lowlevel.h:191
void IAudioDevice2::IAudioDevice2()
{
} /* size: 0 */

// <06E6C611> ../../public/soundsystem/lowlevel.h:191
inline void IAudioDevice2::IAudioDevice2()
{
} /* size: 0 */

// <011DE764> ../public/soundsystem/lowlevel.h:191
// member functions: 40
// member variables: 7
// vtable entries: 9
// class size: 32
class IAudioDevice2 {
	int ()(void) * * _vptr.IAudioDevice2; /* 0 8 */
	/* ../public/soundsystem/lowlevel.h:194 */
	virtual void ~IAudioDevice2(IAudioDevice2* );
	/* ../public/soundsystem/lowlevel.h:195 */
	virtual void OutputBuffer(IAudioDevice2* , int, CAudioMixBuffer* );
	/* ../public/soundsystem/lowlevel.h:196 */
	virtual void Shutdown(IAudioDevice2* );
	/* ../public/soundsystem/lowlevel.h:197 */
	virtual int EmptyBufferCount(IAudioDevice2* , int* );
	/* ../public/soundsystem/lowlevel.h:198 */
	virtual void CancelOutput(IAudioDevice2* );
	/* ../public/soundsystem/lowlevel.h:199 */
	virtual void WaitForComplete(IAudioDevice2* );
	/* ../public/soundsystem/lowlevel.h:200 */
	virtual void MuteDevice(IAudioDevice2* , bool);
	/* ../public/soundsystem/lowlevel.h:201 */
	virtual void ClearBuffer(IAudioDevice2* );
	/* ../public/soundsystem/lowlevel.h:202 */
	virtual const wchar_t* GetDeviceID(const IAudioDevice2* );
	/* ../public/soundsystem/lowlevel.h:203 */
	virtual void OutputDebugInfo(const IAudioDevice2* );
	/* ../public/soundsystem/lowlevel.h:205 */
	const char* Name(const IAudioDevice2* );
	/* ../public/soundsystem/lowlevel.h:206 */
	uint ChannelCount(const IAudioDevice2* );
	/* ../public/soundsystem/lowlevel.h:207 */
	uint MixChannelCount(const IAudioDevice2* );
	/* ../public/soundsystem/lowlevel.h:208 */
	uint BitsPerSample(const IAudioDevice2* );
	/* ../public/soundsystem/lowlevel.h:209 */
	uint BytesPerSample(const IAudioDevice2* );
	/* ../public/soundsystem/lowlevel.h:210 */
	uint SampleRate(const IAudioDevice2* );
	/* ../public/soundsystem/lowlevel.h:211 */
	uint BytesPerSampleFrame(const IAudioDevice2* );
	/* ../public/soundsystem/lowlevel.h:213 */
	bool IsActive(const IAudioDevice2* );
	/* ../public/soundsystem/lowlevel.h:214 */
	bool IsCaptureDevice(IAudioDevice2* );
protected:
	const char * m_pName; /* 8 8 */
	uint16 m_nChannels; /* 16 2 */
	uint16 m_nSampleBits; /* 18 2 */
	uint m_nSampleRate; /* 20 4 */
	bool m_bIsActive; /* 24 1 */
	bool m_bIsCaptureDevice; /* 25 1 */
	virtual void ~IAudioDevice2(class IAudioDevice2 *); /* linkage=_ZN13IAudioDevice2D4Ev */
	virtual void OutputBuffer(class IAudioDevice2 *, int, class CAudioMixBuffer *); /* linkage=_ZN13IAudioDevice212OutputBufferEiP15CAudioMixBuffer */
	virtual void Shutdown(class IAudioDevice2 *); /* linkage=_ZN13IAudioDevice28ShutdownEv */
	virtual int EmptyBufferCount(class IAudioDevice2 *, int *); /* linkage=_ZN13IAudioDevice216EmptyBufferCountEPi */
	virtual void CancelOutput(class IAudioDevice2 *); /* linkage=_ZN13IAudioDevice212CancelOutputEv */
	virtual void WaitForComplete(class IAudioDevice2 *); /* linkage=_ZN13IAudioDevice215WaitForCompleteEv */
	virtual void MuteDevice(class IAudioDevice2 *, bool); /* linkage=_ZN13IAudioDevice210MuteDeviceEb */
	virtual void ClearBuffer(class IAudioDevice2 *); /* linkage=_ZN13IAudioDevice211ClearBufferEv */
	virtual const wchar_t  * GetDeviceID(const class IAudioDevice2  *); /* linkage=_ZNK13IAudioDevice211GetDeviceIDEv */
	virtual void OutputDebugInfo(const class IAudioDevice2  *); /* linkage=_ZNK13IAudioDevice215OutputDebugInfoEv */
	const char  * Name(const class IAudioDevice2  *); /* linkage=_ZNK13IAudioDevice24NameEv */
	uint ChannelCount(const class IAudioDevice2  *); /* linkage=_ZNK13IAudioDevice212ChannelCountEv */
	uint MixChannelCount(const class IAudioDevice2  *); /* linkage=_ZNK13IAudioDevice215MixChannelCountEv */
	uint BitsPerSample(const class IAudioDevice2  *); /* linkage=_ZNK13IAudioDevice213BitsPerSampleEv */
	uint BytesPerSample(const class IAudioDevice2  *); /* linkage=_ZNK13IAudioDevice214BytesPerSampleEv */
	uint SampleRate(const class IAudioDevice2  *); /* linkage=_ZNK13IAudioDevice210SampleRateEv */
	uint BytesPerSampleFrame(const class IAudioDevice2  *); /* linkage=_ZNK13IAudioDevice219BytesPerSampleFrameEv */
	bool IsActive(const class IAudioDevice2  *); /* linkage=_ZNK13IAudioDevice28IsActiveEv */
	bool IsCaptureDevice(class IAudioDevice2 *); /* linkage=_ZN13IAudioDevice215IsCaptureDeviceEv */
	void IAudioDevice2(class IAudioDevice2 *, const class IAudioDevice2  &); /* linkage=_ZN13IAudioDevice2C4ERKS_ */
	void IAudioDevice2(class IAudioDevice2 *); /* linkage=_ZN13IAudioDevice2C4Ev */
};

// <06D5AC9D> ../../public/soundsystem/lowlevel.h:191
// member functions: 42
// member variables: 7
// vtable entries: 9
// class size: 32
class IAudioDevice2 {
	void IAudioDevice2(IAudioDevice2* , const IAudioDevice2& );
	void IAudioDevice2(IAudioDevice2* );
	int ()(void) * * _vptr.IAudioDevice2; /* 0 8 */
	/* ../../public/soundsystem/lowlevel.h:194 */
	virtual void ~IAudioDevice2(IAudioDevice2* );
	/* ../../public/soundsystem/lowlevel.h:195 */
	virtual void OutputBuffer(IAudioDevice2* , int, CAudioMixBuffer* );
	/* ../../public/soundsystem/lowlevel.h:196 */
	virtual void Shutdown(IAudioDevice2* );
	/* ../../public/soundsystem/lowlevel.h:197 */
	virtual int EmptyBufferCount(IAudioDevice2* , int* );
	/* ../../public/soundsystem/lowlevel.h:198 */
	virtual void CancelOutput(IAudioDevice2* );
	/* ../../public/soundsystem/lowlevel.h:199 */
	virtual void WaitForComplete(IAudioDevice2* );
	/* ../../public/soundsystem/lowlevel.h:200 */
	virtual void MuteDevice(IAudioDevice2* , bool);
	/* ../../public/soundsystem/lowlevel.h:201 */
	virtual void ClearBuffer(IAudioDevice2* );
	/* ../../public/soundsystem/lowlevel.h:202 */
	virtual const wchar_t* GetDeviceID(const IAudioDevice2* );
	/* ../../public/soundsystem/lowlevel.h:203 */
	virtual void OutputDebugInfo(const IAudioDevice2* );
	/* ../../public/soundsystem/lowlevel.h:205 */
	const char* Name(const IAudioDevice2* );
	/* ../../public/soundsystem/lowlevel.h:206 */
	uint ChannelCount(const IAudioDevice2* );
	/* ../../public/soundsystem/lowlevel.h:207 */
	uint MixChannelCount(const IAudioDevice2* );
	/* ../../public/soundsystem/lowlevel.h:208 */
	uint BitsPerSample(const IAudioDevice2* );
	/* ../../public/soundsystem/lowlevel.h:209 */
	uint BytesPerSample(const IAudioDevice2* );
	/* ../../public/soundsystem/lowlevel.h:210 */
	uint SampleRate(const IAudioDevice2* );
	/* ../../public/soundsystem/lowlevel.h:211 */
	uint BytesPerSampleFrame(const IAudioDevice2* );
	/* ../../public/soundsystem/lowlevel.h:213 */
	bool IsActive(const IAudioDevice2* );
	/* ../../public/soundsystem/lowlevel.h:214 */
	bool IsCaptureDevice(IAudioDevice2* );
protected:
	const char * m_pName; /* 8 8 */
	uint16 m_nChannels; /* 16 2 */
	uint16 m_nSampleBits; /* 18 2 */
	uint m_nSampleRate; /* 20 4 */
	bool m_bIsActive; /* 24 1 */
	bool m_bIsCaptureDevice; /* 25 1 */
	virtual void ~IAudioDevice2(class IAudioDevice2 *); /* linkage=_ZN13IAudioDevice2D4Ev */
	virtual void OutputBuffer(class IAudioDevice2 *, int, class CAudioMixBuffer *); /* linkage=_ZN13IAudioDevice212OutputBufferEiP15CAudioMixBuffer */
	virtual void Shutdown(class IAudioDevice2 *); /* linkage=_ZN13IAudioDevice28ShutdownEv */
	virtual int EmptyBufferCount(class IAudioDevice2 *, int *); /* linkage=_ZN13IAudioDevice216EmptyBufferCountEPi */
	virtual void CancelOutput(class IAudioDevice2 *); /* linkage=_ZN13IAudioDevice212CancelOutputEv */
	virtual void WaitForComplete(class IAudioDevice2 *); /* linkage=_ZN13IAudioDevice215WaitForCompleteEv */
	virtual void MuteDevice(class IAudioDevice2 *, bool); /* linkage=_ZN13IAudioDevice210MuteDeviceEb */
	virtual void ClearBuffer(class IAudioDevice2 *); /* linkage=_ZN13IAudioDevice211ClearBufferEv */
	virtual const wchar_t  * GetDeviceID(const class IAudioDevice2  *); /* linkage=_ZNK13IAudioDevice211GetDeviceIDEv */
	virtual void OutputDebugInfo(const class IAudioDevice2  *); /* linkage=_ZNK13IAudioDevice215OutputDebugInfoEv */
	const char  * Name(const class IAudioDevice2  *); /* linkage=_ZNK13IAudioDevice24NameEv */
	uint ChannelCount(const class IAudioDevice2  *); /* linkage=_ZNK13IAudioDevice212ChannelCountEv */
	uint MixChannelCount(const class IAudioDevice2  *); /* linkage=_ZNK13IAudioDevice215MixChannelCountEv */
	uint BitsPerSample(const class IAudioDevice2  *); /* linkage=_ZNK13IAudioDevice213BitsPerSampleEv */
	uint BytesPerSample(const class IAudioDevice2  *); /* linkage=_ZNK13IAudioDevice214BytesPerSampleEv */
	uint SampleRate(const class IAudioDevice2  *); /* linkage=_ZNK13IAudioDevice210SampleRateEv */
	uint BytesPerSampleFrame(const class IAudioDevice2  *); /* linkage=_ZNK13IAudioDevice219BytesPerSampleFrameEv */
	bool IsActive(const class IAudioDevice2  *); /* linkage=_ZNK13IAudioDevice28IsActiveEv */
	bool IsCaptureDevice(class IAudioDevice2 *); /* linkage=_ZN13IAudioDevice215IsCaptureDeviceEv */
	void IAudioDevice2(class IAudioDevice2 *, const class IAudioDevice2  &); /* linkage=_ZN13IAudioDevice2C4ERKS_ */
	void IAudioDevice2(class IAudioDevice2 *); /* linkage=_ZN13IAudioDevice2C4Ev */
};

// <06E66CF2> ../../public/soundsystem/lowlevel.h:191
// member functions: 43
// member variables: 7
// vtable entries: 9
// class size: 32
class IAudioDevice2 {
	void IAudioDevice2(IAudioDevice2* , const IAudioDevice2& );
	void IAudioDevice2(IAudioDevice2* );
	IAudioDevice2& operator=(IAudioDevice2* , const IAudioDevice2& );
	int ()(void) * * _vptr.IAudioDevice2; /* 0 8 */
	/* ../../public/soundsystem/lowlevel.h:194 */
	virtual void ~IAudioDevice2(IAudioDevice2* );
	/* ../../public/soundsystem/lowlevel.h:195 */
	virtual void OutputBuffer(IAudioDevice2* , int, CAudioMixBuffer* );
	/* ../../public/soundsystem/lowlevel.h:196 */
	virtual void Shutdown(IAudioDevice2* );
	/* ../../public/soundsystem/lowlevel.h:197 */
	virtual int EmptyBufferCount(IAudioDevice2* , int* );
	/* ../../public/soundsystem/lowlevel.h:198 */
	virtual void CancelOutput(IAudioDevice2* );
	/* ../../public/soundsystem/lowlevel.h:199 */
	virtual void WaitForComplete(IAudioDevice2* );
	/* ../../public/soundsystem/lowlevel.h:200 */
	virtual void MuteDevice(IAudioDevice2* , bool);
	/* ../../public/soundsystem/lowlevel.h:201 */
	virtual void ClearBuffer(IAudioDevice2* );
	/* ../../public/soundsystem/lowlevel.h:202 */
	virtual const wchar_t* GetDeviceID(const IAudioDevice2* );
	/* ../../public/soundsystem/lowlevel.h:203 */
	virtual void OutputDebugInfo(const IAudioDevice2* );
	/* ../../public/soundsystem/lowlevel.h:205 */
	const char* Name(const IAudioDevice2* );
	/* ../../public/soundsystem/lowlevel.h:206 */
	uint ChannelCount(const IAudioDevice2* );
	/* ../../public/soundsystem/lowlevel.h:207 */
	uint MixChannelCount(const IAudioDevice2* );
	/* ../../public/soundsystem/lowlevel.h:208 */
	uint BitsPerSample(const IAudioDevice2* );
	/* ../../public/soundsystem/lowlevel.h:209 */
	uint BytesPerSample(const IAudioDevice2* );
	/* ../../public/soundsystem/lowlevel.h:210 */
	uint SampleRate(const IAudioDevice2* );
	/* ../../public/soundsystem/lowlevel.h:211 */
	uint BytesPerSampleFrame(const IAudioDevice2* );
	/* ../../public/soundsystem/lowlevel.h:213 */
	bool IsActive(const IAudioDevice2* );
	/* ../../public/soundsystem/lowlevel.h:214 */
	bool IsCaptureDevice(IAudioDevice2* );
protected:
	const char * m_pName; /* 8 8 */
	uint16 m_nChannels; /* 16 2 */
	uint16 m_nSampleBits; /* 18 2 */
	uint m_nSampleRate; /* 20 4 */
	bool m_bIsActive; /* 24 1 */
	bool m_bIsCaptureDevice; /* 25 1 */
	virtual void ~IAudioDevice2(class IAudioDevice2 *); /* linkage=_ZN13IAudioDevice2D4Ev */
	virtual void OutputBuffer(class IAudioDevice2 *, int, class CAudioMixBuffer *); /* linkage=_ZN13IAudioDevice212OutputBufferEiP15CAudioMixBuffer */
	virtual void Shutdown(class IAudioDevice2 *); /* linkage=_ZN13IAudioDevice28ShutdownEv */
	virtual int EmptyBufferCount(class IAudioDevice2 *, int *); /* linkage=_ZN13IAudioDevice216EmptyBufferCountEPi */
	virtual void CancelOutput(class IAudioDevice2 *); /* linkage=_ZN13IAudioDevice212CancelOutputEv */
	virtual void WaitForComplete(class IAudioDevice2 *); /* linkage=_ZN13IAudioDevice215WaitForCompleteEv */
	virtual void MuteDevice(class IAudioDevice2 *, bool); /* linkage=_ZN13IAudioDevice210MuteDeviceEb */
	virtual void ClearBuffer(class IAudioDevice2 *); /* linkage=_ZN13IAudioDevice211ClearBufferEv */
	virtual const wchar_t  * GetDeviceID(const class IAudioDevice2  *); /* linkage=_ZNK13IAudioDevice211GetDeviceIDEv */
	virtual void OutputDebugInfo(const class IAudioDevice2  *); /* linkage=_ZNK13IAudioDevice215OutputDebugInfoEv */
	const char  * Name(const class IAudioDevice2  *); /* linkage=_ZNK13IAudioDevice24NameEv */
	uint ChannelCount(const class IAudioDevice2  *); /* linkage=_ZNK13IAudioDevice212ChannelCountEv */
	uint MixChannelCount(const class IAudioDevice2  *); /* linkage=_ZNK13IAudioDevice215MixChannelCountEv */
	uint BitsPerSample(const class IAudioDevice2  *); /* linkage=_ZNK13IAudioDevice213BitsPerSampleEv */
	uint BytesPerSample(const class IAudioDevice2  *); /* linkage=_ZNK13IAudioDevice214BytesPerSampleEv */
	uint SampleRate(const class IAudioDevice2  *); /* linkage=_ZNK13IAudioDevice210SampleRateEv */
	uint BytesPerSampleFrame(const class IAudioDevice2  *); /* linkage=_ZNK13IAudioDevice219BytesPerSampleFrameEv */
	bool IsActive(const class IAudioDevice2  *); /* linkage=_ZNK13IAudioDevice28IsActiveEv */
	bool IsCaptureDevice(class IAudioDevice2 *); /* linkage=_ZN13IAudioDevice215IsCaptureDeviceEv */
	void IAudioDevice2(class IAudioDevice2 *, const class IAudioDevice2  &); /* linkage=_ZN13IAudioDevice2C4ERKS_ */
	void IAudioDevice2(class IAudioDevice2 *); /* linkage=_ZN13IAudioDevice2C4Ev */
};

// <06E6C9B3> ../../public/soundsystem/lowlevel.h:194
void IAudioDevice2::~IAudioDevice2()
{
} /* size: 0 */

// <06E6C983> ../../public/soundsystem/lowlevel.h:194
inline void IAudioDevice2::~IAudioDevice2()
{
} /* size: 0 */

// <0133D977> ../public/soundsystem/lowlevel.h:205
inline void IAudioDevice2::Name()
{
} /* size: 0 */

// <06E6C96A> ../../public/soundsystem/lowlevel.h:206
inline void IAudioDevice2::ChannelCount()
{
} /* size: 0 */

// <0133D945> ../public/soundsystem/lowlevel.h:207
inline void IAudioDevice2::MixChannelCount()
{
} /* size: 0 */

// <0133D92C> ../public/soundsystem/lowlevel.h:208
inline void IAudioDevice2::BitsPerSample()
{
} /* size: 0 */

// <0133D913> ../public/soundsystem/lowlevel.h:209
inline void IAudioDevice2::BytesPerSample()
{
} /* size: 0 */

// <0133D8FA> ../public/soundsystem/lowlevel.h:210
inline void IAudioDevice2::SampleRate()
{
} /* size: 0 */

// <0262713E> ../public/soundsystem/lowlevel.h:213
inline void IAudioDevice2::IsActive()
{
} /* size: 0 */

// <06D5C3CF> ../../public/soundsystem/lowlevel.h:237
IAudioSubsystem* Audio_CreateSDLSubsystem(void)
{
} /* size: 0 */

// <0254C122> ../public/soundsystem/lowlevel.h:245
void ScaleBuffer(float *, const float *, float)
{
} /* size: 0 */

// <0125AA92> ../public/soundsystem/lowlevel.h:246
void ScaleBufferRamp(float *, const float *, float, float)
{
} /* size: 0 */

// <0125AA47> ../public/soundsystem/lowlevel.h:248
void MixBufferRamp(float *, const float *, float, float)
{
} /* size: 0 */

// <0125AAF2> ../public/soundsystem/lowlevel.h:250
void SilenceBuffer(float *)
{
} /* size: 0 */

// <026D832E> ../public/soundsystem/lowlevel.h:252
void SumBuffer2x1(float *, float *, float, float *, float)
{
} /* size: 0 */

// <0125AAD6> ../public/soundsystem/lowlevel.h:254
float BufferLevel(float *)
{
} /* size: 0 */

// <0125AABA> ../public/soundsystem/lowlevel.h:255
float AvergeBufferAmplitude(float *)
{
} /* size: 0 */

// <06D49B66> ../../public/soundsystem/lowlevel.h:256
void AbsBuffer(CAudioMixBuffer *, const CAudioMixBuffer &)
{
} /* size: 0 */

// <06D49B47> ../../public/soundsystem/lowlevel.h:257
void MaxAbsStereoBuffer(CAudioMixBuffer *, const CAudioMixBuffer *)
{
} /* size: 0 */

// <06D49B23> ../../public/soundsystem/lowlevel.h:258
void MaxAbsBuffers(CAudioMixBuffer *, const CAudioMixBuffer *, int)
{
} /* size: 0 */

// <011DEA9F> ../public/soundsystem/lowlevel.h:266
// member functions: 26
// member variable: 1
// class size: 2,048
class CAudioMixBuffer {
	float m_flData[512]; /* 0 2048 */
	/* ../public/soundsystem/lowlevel.h:270 */
	CAudioMixBuffer& operator*=(CAudioMixBuffer* , float);
	/* ../public/soundsystem/lowlevel.h:276 */
	CAudioMixBuffer& operator+=(CAudioMixBuffer* , const CAudioMixBuffer& );
	/* ../public/soundsystem/lowlevel.h:282 */
	void CopyFrom(CAudioMixBuffer* , const CAudioMixBuffer& );
	/* ../public/soundsystem/lowlevel.h:287 */
	void CopyFrom(CAudioMixBuffer* , const CAudioMixBuffer* );
	/* ../public/soundsystem/lowlevel.h:292 */
	void Ramp(CAudioMixBuffer* , float, float);
	/* ../public/soundsystem/lowlevel.h:297 */
	void Mix(CAudioMixBuffer* , const CAudioMixBuffer& , float);
	/* ../public/soundsystem/lowlevel.h:302 */
	void Mix(CAudioMixBuffer* , const CAudioMixBuffer* , float);
	/* ../public/soundsystem/lowlevel.h:307 */
	void MixRamp(CAudioMixBuffer* , const CAudioMixBuffer& , float, float);
	/* ../public/soundsystem/lowlevel.h:312 */
	void MixRamp(CAudioMixBuffer* , const CAudioMixBuffer* , float, float);
	/* ../public/soundsystem/lowlevel.h:318 */
	void Splice(CAudioMixBuffer* , const CAudioMixBuffer& , uint, const CAudioMixBuffer& );
	/* ../public/soundsystem/lowlevel.h:332 */
	void Silence(CAudioMixBuffer* );
	/* ../public/soundsystem/lowlevel.h:337 */
	float AbsLevel(CAudioMixBuffer* );
	/* ../public/soundsystem/lowlevel.h:342 */
	float AvergeLevel(CAudioMixBuffer* );
	class CAudioMixBuffer & operator*=(class CAudioMixBuffer *, float); /* linkage=_ZN15CAudioMixBuffermLEf */
	class CAudioMixBuffer & operator+=(class CAudioMixBuffer *, const class CAudioMixBuffer  &); /* linkage=_ZN15CAudioMixBufferpLERKS_ */
	void CopyFrom(class CAudioMixBuffer *, const class CAudioMixBuffer  &); /* linkage=_ZN15CAudioMixBuffer8CopyFromERKS_ */
	void CopyFrom(class CAudioMixBuffer *, const class CAudioMixBuffer  *); /* linkage=_ZN15CAudioMixBuffer8CopyFromEPKS_ */
	void Ramp(class CAudioMixBuffer *, float, float); /* linkage=_ZN15CAudioMixBuffer4RampEff */
	void Mix(class CAudioMixBuffer *, const class CAudioMixBuffer  &, float); /* linkage=_ZN15CAudioMixBuffer3MixERKS_f */
	void Mix(class CAudioMixBuffer *, const class CAudioMixBuffer  *, float); /* linkage=_ZN15CAudioMixBuffer3MixEPKS_f */
	void MixRamp(class CAudioMixBuffer *, const class CAudioMixBuffer  &, float, float); /* linkage=_ZN15CAudioMixBuffer7MixRampERKS_ff */
	void MixRamp(class CAudioMixBuffer *, const class CAudioMixBuffer  *, float, float); /* linkage=_ZN15CAudioMixBuffer7MixRampEPKS_ff */
	void Splice(class CAudioMixBuffer *, const class CAudioMixBuffer  &, uint, const class CAudioMixBuffer  &); /* linkage=_ZN15CAudioMixBuffer6SpliceERKS_jS1_ */
	void Silence(class CAudioMixBuffer *); /* linkage=_ZN15CAudioMixBuffer7SilenceEv */
	float AbsLevel(class CAudioMixBuffer *); /* linkage=_ZN15CAudioMixBuffer8AbsLevelEv */
	float AvergeLevel(class CAudioMixBuffer *); /* linkage=_ZN15CAudioMixBuffer11AvergeLevelEv */
} __attribute__((__aligned__(16)));

// <026DCDED> ../public/soundsystem/lowlevel.h:270
inline void CAudioMixBuffer::operator*=(float flScale)
{
} /* size: 0 */

// <06D51DB4> ../../public/soundsystem/lowlevel.h:282
inline void CAudioMixBuffer::CopyFrom(const CAudioMixBuffer& src)
{
} /* size: 0 */

// <024A2488> ../public/soundsystem/lowlevel.h:287
inline void CAudioMixBuffer::CopyFrom(const CAudioMixBuffer* src)
{
} /* size: 0 */

// <0133D888> ../public/soundsystem/lowlevel.h:292
inline void CAudioMixBuffer::Ramp(float flStart, float flEnd)
{
} /* size: 0 */

// <06D7E142> ../../public/soundsystem/lowlevel.h:297
inline void CAudioMixBuffer::Mix(const CAudioMixBuffer& addThis, float flScale)
{
} /* size: 0 */

// <0133D855> ../public/soundsystem/lowlevel.h:302
inline void CAudioMixBuffer::Mix(const CAudioMixBuffer* addThis, float flScale)
{
} /* size: 0 */

// <0133D815> ../public/soundsystem/lowlevel.h:312
inline void CAudioMixBuffer::MixRamp(const CAudioMixBuffer* addThis, float flScaleStart, float flScaleEnd)
{
} /* size: 0 */

// <026DCCFB> ../public/soundsystem/lowlevel.h:318
// variables: 2
inline void CAudioMixBuffer::Splice(const CAudioMixBuffer& source0, uint nSampleCount0, const CAudioMixBuffer& source1)
{
	uint nCount0; // 320
	uint nCount1; // 321
} /* size: 0, variables: 2 */

// <06D7E129> ../../public/soundsystem/lowlevel.h:332
inline void CAudioMixBuffer::Silence()
{
} /* size: 0 */

// <0133D7E3> ../public/soundsystem/lowlevel.h:337
inline void CAudioMixBuffer::AbsLevel()
{
} /* size: 0 */

// <0133D7CA> ../public/soundsystem/lowlevel.h:342
inline void CAudioMixBuffer::AvergeLevel()
{
} /* size: 0 */

// <011DECE9> ../public/soundsystem/lowlevel.h:350
// member functions: 4
// member variables: 2
// class size: 16,400
class CAudioMixDeviceBuffers {
	/* ../public/soundsystem/lowlevel.h:353 */
	void CAudioMixDeviceBuffers(CAudioMixDeviceBuffers* , int);
	/* ../public/soundsystem/lowlevel.h:354 */
	void Mix(CAudioMixDeviceBuffers* , CAudioMixBuffer* , int);
	CAudioMixBuffer m_outputBuffers[8] __attribute__((__aligned__(16))); /* 0 16384 */
	int m_nChannelCount; /* 16384 4 */
	void CAudioMixDeviceBuffers(class CAudioMixDeviceBuffers *, int); /* linkage=_ZN22CAudioMixDeviceBuffersC4Ei */
	void Mix(class CAudioMixDeviceBuffers *, class CAudioMixBuffer *, int); /* linkage=_ZN22CAudioMixDeviceBuffers3MixEP15CAudioMixBufferi */
} __attribute__((__aligned__(16)));

// <06D3FC20> ../../public/soundsystem/lowlevel.h:350
// member functions: 4
// member variables: 2
// class size: 16,400
class CAudioMixDeviceBuffers {
	/* ../../public/soundsystem/lowlevel.h:353 */
	void CAudioMixDeviceBuffers(CAudioMixDeviceBuffers* , int);
	/* ../../public/soundsystem/lowlevel.h:354 */
	void Mix(CAudioMixDeviceBuffers* , CAudioMixBuffer* , int);
	CAudioMixBuffer m_outputBuffers[8] __attribute__((__aligned__(16))); /* 0 16384 */
	int m_nChannelCount; /* 16384 4 */
	void CAudioMixDeviceBuffers(class CAudioMixDeviceBuffers *, int); /* linkage=_ZN22CAudioMixDeviceBuffersC4Ei */
	void Mix(class CAudioMixDeviceBuffers *, class CAudioMixBuffer *, int); /* linkage=_ZN22CAudioMixDeviceBuffers3MixEP15CAudioMixBufferi */
} __attribute__((__aligned__(16)));

// <0125AA1E> ../public/soundsystem/lowlevel.h:353
void CAudioMixDeviceBuffers::CAudioMixDeviceBuffers(int nOutputChannelCount)
{
} /* size: 0 */

// <06E6C593> ../../public/soundsystem/lowlevel.h:361
void CMuteControl::CMuteControl()
{
} /* size: 0 */

// <06E6C576> ../../public/soundsystem/lowlevel.h:361
inline void CMuteControl::CMuteControl()
{
} /* size: 0 */

// <06D64D7D> ../../public/soundsystem/lowlevel.h:361
// member functions: 5
// member variables: 2
// class size: 8
class CMuteControl {
private:
	float m_flCurrentVolume; /* 0 4 */
	bool m_bMuted; /* 4 1 */
	/* ../../public/soundsystem/lowlevel.h:366 */
	void Mute(CMuteControl* , bool);
	/* ../../public/soundsystem/lowlevel.h:370 */
	void ApplyMuting(CMuteControl* , int, CAudioMixBuffer* );
	void Mute(class CMuteControl *, bool); /* linkage=_ZN12CMuteControl4MuteEb */
	void ApplyMuting(class CMuteControl *, int, class CAudioMixBuffer *); /* linkage=_ZN12CMuteControl11ApplyMutingEiP15CAudioMixBuffer */
	void CMuteControl(class CMuteControl *); /* linkage=_ZN12CMuteControlC4Ev */
};

// <06E6C944> ../../public/soundsystem/lowlevel.h:366
inline void CMuteControl::Mute(bool bMuted)
{
} /* size: 0 */

// <06D3FCB9> ../../public/soundsystem/lowlevel.h:378
// member functions: 5
// member variables: 2
// struct size: 8
struct rms_level_t {
	float m_flCurrentLevelRMS; /* 0 4 */
	float m_flRMSAveragingTimeConstant; /* 4 4 */
	/* ../../public/soundsystem/lowlevel.h:383 */
	void Init(rms_level_t* , float, float);
	/* ../../public/soundsystem/lowlevel.h:384 */
	float GetCurrentLevel(rms_level_t* );
	/* ../../public/soundsystem/lowlevel.h:385 */
	float GetCurrentLeveldB(rms_level_t* );
	/* ../../public/soundsystem/lowlevel.h:386 */
	void Update(rms_level_t* , const CAudioMixBuffer* , int);
	/* ../../public/soundsystem/lowlevel.h:387 */
	void SetAttackTime(rms_level_t* , float);
};

// <06D3FDA3> ../../public/soundsystem/lowlevel.h:390
// member functions: 2
// member variables: 3
// class size: 20
class CAudioMeterInstance {
	float m_flLevel[2]; /* 0 8 */
	float m_flPeakLevel[2]; /* 8 8 */
	uint m_nDebugIndex; /* 16 4 */
	/* ../../public/soundsystem/lowlevel.h:397 */
	void Clear(CAudioMeterInstance* );
	void Clear(class CAudioMeterInstance *); /* linkage=_ZN19CAudioMeterInstance5ClearEv */
};

// <06D3FE13> ../../public/soundsystem/lowlevel.h:407
// member functions: 10
// member variables: 2
// class size: 16
class CAudioSignalMeter {
	/* ../../public/soundsystem/lowlevel.h:410 */
	void CAudioSignalMeter(CAudioSignalMeter* );
	/* ../../public/soundsystem/lowlevel.h:411 */
	void Update(CAudioSignalMeter* , const CAudioMixBuffer* );
	/* ../../public/soundsystem/lowlevel.h:413 */
	float GetSignalLevel(CAudioSignalMeter* );
	/* ../../public/soundsystem/lowlevel.h:414 */
	float GetPeakSignalLevel(CAudioSignalMeter* );
	/* ../../public/soundsystem/lowlevel.h:416 */
	void UpdateExternalState(CAudioSignalMeter* , const CAudioMixBuffer* , CAudioMeterInstance* , int);
	rms_level_t m_currentLevel; /* 0 8 */
	rms_level_t m_peakLevel; /* 8 8 */
	void CAudioSignalMeter(class CAudioSignalMeter *); /* linkage=_ZN17CAudioSignalMeterC4Ev */
	void Update(class CAudioSignalMeter *, const class CAudioMixBuffer  *); /* linkage=_ZN17CAudioSignalMeter6UpdateEPK15CAudioMixBuffer */
	float GetSignalLevel(class CAudioSignalMeter *); /* linkage=_ZN17CAudioSignalMeter14GetSignalLevelEv */
	float GetPeakSignalLevel(class CAudioSignalMeter *); /* linkage=_ZN17CAudioSignalMeter18GetPeakSignalLevelEv */
	void UpdateExternalState(class CAudioSignalMeter *, const class CAudioMixBuffer  *, class CAudioMeterInstance *, int); /* linkage=_ZN17CAudioSignalMeter19UpdateExternalStateEPK15CAudioMixBufferP19CAudioMeterInstancei */
};

// <06D49D9E> ../../public/soundsystem/lowlevel.h:410
void CAudioSignalMeter::CAudioSignalMeter()
{
} /* size: 0 */

