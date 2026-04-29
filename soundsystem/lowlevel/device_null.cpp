
//
// soundsystem/lowlevel/device_null.cpp
//
//	referenced by: libengine2.so
//
//	functions: 40
//	classes: 2
//

// <06D5EE09> soundsystem/lowlevel/device_null.cpp:10
void CNullAudioSubsystem::CNullAudioSubsystem()
{
} /* size: 0 */

// <06D5EDED> soundsystem/lowlevel/device_null.cpp:10
inline void CNullAudioSubsystem::CNullAudioSubsystem()
{
} /* size: 0 */

// <06D5C76D> soundsystem/lowlevel/device_null.cpp:10
// function call: 1
void CNullAudioSubsystem::~CNullAudioSubsystem()
{
	IAudioSubsystem::~IAudioSubsystem(); // 10
} /* size: 5, inline expansions: 1 (0 bytes) */

// <06D5C6BD> soundsystem/lowlevel/device_null.cpp:10
// function calls: 2
void CNullAudioSubsystem::~CNullAudioSubsystem()
{
	IAudioSubsystem::~IAudioSubsystem(); // 10
	CNullAudioSubsystem::~CNullAudioSubsystem(); // 10
} /* size: 14, inline expansions: 2 (0 bytes) */

// <06D5C6A1> soundsystem/lowlevel/device_null.cpp:10
inline void CNullAudioSubsystem::~CNullAudioSubsystem()
{
} /* size: 0 */

// <06D5BF10> soundsystem/lowlevel/device_null.cpp:10
// member functions: 20
// member variable: 1
// vtable entries: 6
// class size: 8
class CNullAudioSubsystem : public IAudioSubsystem {
public:
	/* class IAudioSubsystem <ancestor>; */ /* 0 8 */
	void CNullAudioSubsystem(CNullAudioSubsystem* , CNullAudioSubsystem& );
	void CNullAudioSubsystem(CNullAudioSubsystem* , const CNullAudioSubsystem& );
	void CNullAudioSubsystem(CNullAudioSubsystem* );
	/* soundsystem/lowlevel/device_null.cpp:13 */
	virtual eSubSystems_t GetSubsystemID(CNullAudioSubsystem* );
	/* soundsystem/lowlevel/device_null.cpp:14 */
	virtual bool NeedsRestart(CNullAudioSubsystem* );
	/* soundsystem/lowlevel/device_null.cpp:15 */
	virtual void ForceRestart(CNullAudioSubsystem* );
	/* soundsystem/lowlevel/device_null.cpp:16 */
	virtual int EnumerateDevices(CNullAudioSubsystem* , audio_device_description_t* , int);
	/* soundsystem/lowlevel/device_null.cpp:70 */
	virtual IAudioDevice2* CreateDevice(CNullAudioSubsystem* , const audio_device_init_params_t& );
	/* soundsystem/lowlevel/device_null.cpp:26 */
	virtual void DestroyDevice(CNullAudioSubsystem* , IAudioDevice2* );
	virtual void ~CNullAudioSubsystem(CNullAudioSubsystem* );
	void CNullAudioSubsystem(class CNullAudioSubsystem *, class CNullAudioSubsystem &); /* linkage=_ZN19CNullAudioSubsystemC4EOS_ */
	void CNullAudioSubsystem(class CNullAudioSubsystem *, const class CNullAudioSubsystem  &); /* linkage=_ZN19CNullAudioSubsystemC4ERKS_ */
	void CNullAudioSubsystem(class CNullAudioSubsystem *); /* linkage=_ZN19CNullAudioSubsystemC4Ev */
	/* <6d5f3f8> soundsystem/lowlevel/device_null.cpp:13 */
	virtual enum eSubSystems_t GetSubsystemID(class CNullAudioSubsystem *); /* linkage=_ZN19CNullAudioSubsystem14GetSubsystemIDEv */
	virtual bool NeedsRestart(class CNullAudioSubsystem *); /* linkage=_ZN19CNullAudioSubsystem12NeedsRestartEv */
	virtual void ForceRestart(class CNullAudioSubsystem *); /* linkage=_ZN19CNullAudioSubsystem12ForceRestartEv */
	/* <6d5f58a> soundsystem/lowlevel/device_null.cpp:16 */
	virtual int EnumerateDevices(class CNullAudioSubsystem *, class audio_device_description_t *, int); /* linkage=_ZN19CNullAudioSubsystem16EnumerateDevicesEP26audio_device_description_ti */
	/* <6d5f44c> soundsystem/lowlevel/device_null.cpp:70 */
	virtual class IAudioDevice2 * CreateDevice(class CNullAudioSubsystem *, const class audio_device_init_params_t  &); /* linkage=_ZN19CNullAudioSubsystem12CreateDeviceERK26audio_device_init_params_t */
	virtual void DestroyDevice(class CNullAudioSubsystem *, class IAudioDevice2 *); /* linkage=_ZN19CNullAudioSubsystem13DestroyDeviceEP13IAudioDevice2 */
	virtual void ~CNullAudioSubsystem(class CNullAudioSubsystem *); /* linkage=_ZN19CNullAudioSubsystemD4Ev */
};

// <06D5F3F8> soundsystem/lowlevel/device_null.cpp:13
void CNullAudioSubsystem::GetSubsystemID()
{
} /* size: 10 */

// <06D5F008> soundsystem/lowlevel/device_null.cpp:13
inline void CNullAudioSubsystem::GetSubsystemID()
{
} /* size: 0 */

// <06D5EFDA> soundsystem/lowlevel/device_null.cpp:14
void CNullAudioSubsystem::NeedsRestart()
{
} /* size: 7 */

// <06D5F58A> soundsystem/lowlevel/device_null.cpp:16
// function calls: 7
void CNullAudioSubsystem::EnumerateDevices(audio_device_description_t* pDeviceListOut, int nListCount)
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 70
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 71
	audio_device_description_t::InitAsNullDevice(); // 20
	V_strcpy_safe<256>(char& pDest,
				const char* pSrc);  // 21
	CNullAudioSubsystem::EnumerateDevices(
			audio_device_description_t* pDeviceListOut,
			int nListCount);  // 16
} /* size: 107, inline expansions: 7 (230 bytes) */

// <06D5EF7B> soundsystem/lowlevel/device_null.cpp:16
inline void CNullAudioSubsystem::EnumerateDevices(audio_device_description_t* pDeviceListOut, int nListCount)
{
} /* size: 0 */

// <06D5EE53> soundsystem/lowlevel/device_null.cpp:26
// function calls: 4
void CNullAudioSubsystem::DestroyDevice(IAudioDevice2* pDevice)
{
	CAudioDeviceNull2::Shutdown(); // 46
	IAudioDevice2::~IAudioDevice2(); // 46
	CAudioDeviceNull2::~CAudioDeviceNull2(); // 46
	CAudioDeviceNull2::~CAudioDeviceNull2(); // 26
} /* size: 58, inline expansions: 4 (17 bytes) */

// <06D5EDDA> soundsystem/lowlevel/device_null.cpp:29
IAudioSubsystem* Audio_CreateNullSubsystem(void)
{
} /* size: 0 */

// <06D5C0C7> soundsystem/lowlevel/device_null.cpp:34
// member functions: 24
// member variable: 1
// vtable entries: 9
// class size: 32
class CAudioDeviceNull2 : public IAudioDevice2 {
public:
	/* class IAudioDevice2 <ancestor>; */ /* 0 32 */
	void CAudioDeviceNull2(CAudioDeviceNull2* , const CAudioDeviceNull2& );
	/* soundsystem/lowlevel/device_null.cpp:37 */
	void CAudioDeviceNull2(CAudioDeviceNull2* );
	/* soundsystem/lowlevel/device_null.cpp:46 */
	virtual void ~CAudioDeviceNull2(CAudioDeviceNull2* );
	/* soundsystem/lowlevel/device_null.cpp:47 */
	virtual void OutputBuffer(CAudioDeviceNull2* , int, CAudioMixBuffer* );
	/* soundsystem/lowlevel/device_null.cpp:48 */
	virtual void Shutdown(CAudioDeviceNull2* );
	/* soundsystem/lowlevel/device_null.cpp:49 */
	virtual int EmptyBufferCount(CAudioDeviceNull2* , int* );
	/* soundsystem/lowlevel/device_null.cpp:54 */
	virtual void CancelOutput(CAudioDeviceNull2* );
	/* soundsystem/lowlevel/device_null.cpp:55 */
	virtual void WaitForComplete(CAudioDeviceNull2* );
	/* soundsystem/lowlevel/device_null.cpp:56 */
	virtual void MuteDevice(CAudioDeviceNull2* , bool);
	/* soundsystem/lowlevel/device_null.cpp:57 */
	virtual void ClearBuffer(CAudioDeviceNull2* );
	/* soundsystem/lowlevel/device_null.cpp:58 */
	virtual const wchar_t* GetDeviceID(const CAudioDeviceNull2* );
	/* soundsystem/lowlevel/device_null.cpp:64 */
	virtual void OutputDebugInfo(const CAudioDeviceNull2* );
	void CAudioDeviceNull2(class CAudioDeviceNull2 *, const class CAudioDeviceNull2  &); /* linkage=_ZN17CAudioDeviceNull2C4ERKS_ */
	void CAudioDeviceNull2(class CAudioDeviceNull2 *); /* linkage=_ZN17CAudioDeviceNull2C4Ev */
	virtual void ~CAudioDeviceNull2(class CAudioDeviceNull2 *); /* linkage=_ZN17CAudioDeviceNull2D4Ev */
	virtual void OutputBuffer(class CAudioDeviceNull2 *, int, class CAudioMixBuffer *); /* linkage=_ZN17CAudioDeviceNull212OutputBufferEiP15CAudioMixBuffer */
	/* <6d5f422> soundsystem/lowlevel/device_null.cpp:48 */
	virtual void Shutdown(class CAudioDeviceNull2 *); /* linkage=_ZN17CAudioDeviceNull28ShutdownEv */
	virtual int EmptyBufferCount(class CAudioDeviceNull2 *, int *); /* linkage=_ZN17CAudioDeviceNull216EmptyBufferCountEPi */
	virtual void CancelOutput(class CAudioDeviceNull2 *); /* linkage=_ZN17CAudioDeviceNull212CancelOutputEv */
	virtual void WaitForComplete(class CAudioDeviceNull2 *); /* linkage=_ZN17CAudioDeviceNull215WaitForCompleteEv */
	virtual void MuteDevice(class CAudioDeviceNull2 *, bool); /* linkage=_ZN17CAudioDeviceNull210MuteDeviceEb */
	virtual void ClearBuffer(class CAudioDeviceNull2 *); /* linkage=_ZN17CAudioDeviceNull211ClearBufferEv */
	virtual const wchar_t  * GetDeviceID(const class CAudioDeviceNull2  *); /* linkage=_ZNK17CAudioDeviceNull211GetDeviceIDEv */
	/* <6d5f4ff> soundsystem/lowlevel/device_null.cpp:64 */
	virtual void OutputDebugInfo(const class CAudioDeviceNull2  *); /* linkage=_ZNK17CAudioDeviceNull215OutputDebugInfoEv */
};

// <06D5ED90> soundsystem/lowlevel/device_null.cpp:37
void CAudioDeviceNull2::CAudioDeviceNull2()
{
} /* size: 0 */

// <06D5ED77> soundsystem/lowlevel/device_null.cpp:37
inline void CAudioDeviceNull2::CAudioDeviceNull2()
{
} /* size: 0 */

// <06D5ED1B> soundsystem/lowlevel/device_null.cpp:46
// function call: 1
void CAudioDeviceNull2::~CAudioDeviceNull2()
{
	IAudioDevice2::~IAudioDevice2(); // 46
} /* size: 5, inline expansions: 1 (0 bytes) */

// <06D5EC37> soundsystem/lowlevel/device_null.cpp:46
// function calls: 3
void CAudioDeviceNull2::~CAudioDeviceNull2()
{
	CAudioDeviceNull2::Shutdown(); // 46
	IAudioDevice2::~IAudioDevice2(); // 46
	CAudioDeviceNull2::~CAudioDeviceNull2(); // 46
} /* size: 14, inline expansions: 3 (0 bytes) */

// <06D5EC1E> soundsystem/lowlevel/device_null.cpp:46
inline void CAudioDeviceNull2::~CAudioDeviceNull2()
{
} /* size: 0 */

// <06D5EBD4> soundsystem/lowlevel/device_null.cpp:47
void CAudioDeviceNull2::OutputBuffer(int nChannels, CAudioMixBuffer* pChannelArray)
{
} /* size: 5 */

// <06D5F422> soundsystem/lowlevel/device_null.cpp:48
void CAudioDeviceNull2::Shutdown()
{
} /* size: 5 */

// <06D5EBBB> soundsystem/lowlevel/device_null.cpp:48
inline void CAudioDeviceNull2::Shutdown()
{
} /* size: 0 */

// <06D5EB7F> soundsystem/lowlevel/device_null.cpp:49
void CAudioDeviceNull2::EmptyBufferCount(int* pQueuedBufferCount)
{
} /* size: 13 */

// <06D5EB51> soundsystem/lowlevel/device_null.cpp:54
void CAudioDeviceNull2::CancelOutput()
{
} /* size: 5 */

// <06D5EB23> soundsystem/lowlevel/device_null.cpp:55
void CAudioDeviceNull2::WaitForComplete()
{
} /* size: 5 */

// <06D5EAE7> soundsystem/lowlevel/device_null.cpp:56
void CAudioDeviceNull2::MuteDevice(bool bWindowHasFocus)
{
} /* size: 5 */

// <06D5EAB9> soundsystem/lowlevel/device_null.cpp:57
void CAudioDeviceNull2::ClearBuffer()
{
} /* size: 5 */

// <06D5EA6F> soundsystem/lowlevel/device_null.cpp:58
// variable: 1
void CAudioDeviceNull2::GetDeviceID()
{
	wchar_t deviceID; // 60
} /* size: 12, variables: 1 */

// <06D5F4FF> soundsystem/lowlevel/device_null.cpp:64
// function call: 1
void CAudioDeviceNull2::OutputDebugInfo()
{
	CAudioDeviceNull2::OutputDebugInfo(); // 64
} /* size: 74, inline expansions: 1 (21 bytes) */

// <06D5EA56> soundsystem/lowlevel/device_null.cpp:64
inline void CAudioDeviceNull2::OutputDebugInfo()
{
} /* size: 0 */

// <06D5F44C> soundsystem/lowlevel/device_null.cpp:70
// function calls: 2
void CNullAudioSubsystem::CreateDevice(const audio_device_init_params_t& params)
{
	IAudioDevice2::IAudioDevice2(); // 38
	CAudioDeviceNull2::CAudioDeviceNull2(); // 72
} /* size: 65, inline expansions: 2 (45 bytes) */

// <06D5EA31> soundsystem/lowlevel/device_null.cpp:70
void CNullAudioSubsystem::CreateDevice(const audio_device_init_params_t& params)
{
} /* size: 0 */

// <06D5F859> soundsystem/lowlevel/device_null.cpp:103
// variable: 1
// function calls: 4
void CAudioDeviceList::FindDeviceById(const wchar_t* pId, finddevice_t nFind)
{
	{
		int i; // 105
		CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::Count(); // 105
		CUtlMemory<audio_device_description_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::operator[](
				int i);  // 107
		V_wcscmp(const wchar_t* s1,
			const wchar_t* s2);  // 109
	}
} /* size: 0 */

// <06D5E8F9> soundsystem/lowlevel/device_null.cpp:103
// variable: 1
void CAudioDeviceList::FindDeviceById(const wchar_t* pId, finddevice_t nFind)
{
	{
		int i; // 105
	}
} /* size: 0 */

// <06D5E67D> soundsystem/lowlevel/device_null.cpp:116
// variables: 3
// function calls: 7
void CAudioDeviceList::FindDeviceById(const char* pId)
{
	wchar_t tempName; // 118
	int nDevice; // 120
	{
		int i; // 105
		CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::Count(); // 105
		CUtlMemory<audio_device_description_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::operator[](
				int i);  // 107
		V_wcscmp(const wchar_t* s1,
			const wchar_t* s2);  // 109
	}
	CAudioDeviceList::FindDeviceById(
			const wchar_t* pId,
			finddevice_t nFind);  // 120
	CUtlMemory<audio_device_description_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::operator[](
			int i);  // 122
} /* size: 203, variables: 2, inline expansions: 3 (97 bytes) */

// <06D5DC14> soundsystem/lowlevel/device_null.cpp:127
// variables: 8
// function calls: 41
void CAudioDeviceList::BuildDeviceList(IAudioDevice2* pCurrentDevice)
{
	int nNextDeviceStamp; // 132
	audio_device_description_t initList; // 133
	int nCount; // 135
	{
		int i; // 147
		CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::Count(); // 147
		CUtlMemory<audio_device_description_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::operator[](
				int i);  // 149
	}
	{
		int i; // 154
		CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::Count(); // 154
		CUtlMemory<audio_device_description_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::operator[](
				int i);  // 156
		CUtlMemory<audio_device_description_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::operator[](
				int i);  // 157
	}
	{
		int i; // 159
		{
			int nIndex; // 161
			{
				int i; // 105
				CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::Count(); // 105
				CUtlMemory<audio_device_description_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::operator[](
						int i);  // 109
				V_wcscmp(const wchar_t* s1,
					const wchar_t* s2);  // 109
			}
			CAudioDeviceList::FindDeviceById(
					const wchar_t* pId,
					finddevice_t nFind);  // 161
			CUtlMemory<audio_device_description_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::operator[](
					int i);  // 164
			CUtlMemory<audio_device_description_t, int>::NumAllocated(); // 1196
			CopyConstruct<audio_device_description_t>(audio_device_description_t* pMemory,
									const audio_device_description_t& src);  // 1201
			CUtlMemory<audio_device_description_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::Element(
				int i);  // 1201
			CUtlMemory<audio_device_description_t, int>::Base(); // 112
			CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::Base(); // 368
			CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::AddToTail(
					const audio_device_description_t& src);  // 168
		}
	}
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 132
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 70
	audio_device_description_t::InitAsNullDevice(); // 20
	CNullAudioSubsystem::EnumerateDevices(
			audio_device_description_t* pDeviceListOut,
			int nListCount);  // 16
	CNullAudioSubsystem::EnumerateDevices(
			audio_device_description_t* pDeviceListOut,
			int nListCount);  // 135
	Audio_GetSubsystem(void); // 135
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 70
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 71
	audio_device_description_t::InitAsNullDevice(); // 20
	V_strcpy_safe<256>(char& pDest,
				const char* pSrc);  // 21
	CNullAudioSubsystem::EnumerateDevices(
			audio_device_description_t* pDeviceListOut,
			int nListCount);  // 16
	CNullAudioSubsystem::EnumerateDevices(
			audio_device_description_t* pDeviceListOut,
			int nListCount);  // 139
	CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::Count(); // 144
	Audio_GetSubsystem(void); // 139
} /* size: 783, variables: 3, inline expansions: 17 (354 bytes) */

// <06D5DB78> soundsystem/lowlevel/device_null.cpp:176
// function call: 1
void CAudioDeviceList::UpdateDeviceList(IAudioDevice2* pCurrentDevice)
{
	CInterlockedIntT<unsigned int, 4>::operator unsigned int(); // 178
} /* size: 27, inline expansions: 1 (6 bytes) */

// <06D5DAA2> soundsystem/lowlevel/device_null.cpp:184
// variables: 2
// function calls: 3
void CAudioDeviceList::UpdateDefaultDevice()
{
	int nFirst; // 200
	{
		int i; // 201
		CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::Count(); // 201
		CUtlMemory<audio_device_description_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::operator[](
				int i);  // 203
	}
} /* size: 106, variables: 1 */

// <06D5D722> soundsystem/lowlevel/device_null.cpp:222
// variables: 6
// function calls: 12
void CAudioDeviceList::CreateDevice(audio_device_init_params_t& params)
{
	const char   __FUNCTION__; // 19522
	eSubSystems_t nSubSystem; // 226
	IAudioDevice2* pDevice; // 237
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 224
	}
	{
		eSubSystems_t nOverride; // 229
		Audio_GetSubsystem(void); // 233
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 244
	}
	CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::Count(); // 103
	CAudioDeviceList::IsValid(); // 224
	Audio_GetSubsystem(void); // 226
	Audio_GetSubsystem(void); // 237
	IAudioDevice2::IAudioDevice2(); // 38
	CAudioDeviceNull2::CAudioDeviceNull2(); // 72
	CNullAudioSubsystem::CreateDevice(
			const audio_device_init_params_t& params);  // 237
	Audio_GetSubsystem(void); // 241
	IAudioDevice2::IAudioDevice2(); // 38
	CAudioDeviceNull2::CAudioDeviceNull2(); // 72
	CNullAudioSubsystem::CreateDevice(
			const audio_device_init_params_t& params);  // 241
} /* size: 0, variables: 3, inline expansions: 11 (165 bytes) */

// <06D5D427> soundsystem/lowlevel/device_null.cpp:248
// variables: 4
// function calls: 10
void CAudioDeviceList::GetDeviceToCreate(audio_device_init_params_t& params)
{
	const char   __FUNCTION__; // 19543
	{
		int nIndex; // 252
		{
			int i; // 105
			CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::Count(); // 105
			CUtlMemory<audio_device_description_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::operator[](
					int i);  // 107
			V_wcscmp(const wchar_t* s1,
				const wchar_t* s2);  // 109
		}
		CAudioDeviceList::FindDeviceById(
				const wchar_t* pId,
				finddevice_t nFind);  // 252
		CUtlMemory<audio_device_description_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::operator[](
				int i);  // 255
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 258
	}
	CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::Count(); // 258
	CUtlMemory<audio_device_description_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::operator[](
			int i);  // 259
} /* size: 0, variables: 1, inline expansions: 3 (22 bytes) */

// <06D5D3A1> soundsystem/lowlevel/device_null.cpp:263
// variables: 2
uint SpeakerConfigValueToChannelCount(int nSpeakerConfig)
{
	const char   __FUNCTION__; // 19564
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 284
	}
} /* size: 0, variables: 1 */

// <06D5D306> soundsystem/lowlevel/device_null.cpp:288
// variables: 2
int ChannelCountToSpeakerConfigValue(uint nChannelCount, bool bIsHeadphone)
{
	const char   __FUNCTION__; // 19564
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 301
	}
} /* size: 0, variables: 1 */

