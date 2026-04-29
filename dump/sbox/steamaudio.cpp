
//
// sbox/steamaudio.cpp
//
//	referenced by: libengine2.so
//
//	functions: 11
//

// <01EA002E> sbox/steamaudio.cpp:6
void Log(IPLLogLevel level, const char* message)
{
} /* size: 0 */

// <01E9FFBE> sbox/steamaudio.cpp:23
void* Phonon_Alloc(IPLsize nSize, IPLsize nAlign)
{
} /* size: 9 */

// <01E9FF6D> sbox/steamaudio.cpp:28
void Phonon_Free(void* pMem)
{
} /* size: 9 */

// <01E9FEF9> sbox/steamaudio.cpp:35
// variables: 6
IPLContext GetIPLContext(void)
{
	CThreadFastMutex autoMutex_iplContext; // 41
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_41; // 41
	IPLContextSettings contextSettings; // 45
	IPLerror errorCode; // 54
	const char   __FUNCTION__; // 25375
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 55
	}
} /* size: 0, variables: 5 */

// <01E9FEC0> sbox/steamaudio.cpp:66
// variables: 2
IPLAudioSettings* GetAudioSettings(void)
{
	CThreadFastMutex autoMutex_iplAudioSettings; // 71
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_71; // 71
} /* size: 0, variables: 2 */

// <01E9FE4C> sbox/steamaudio.cpp:84
// variables: 6
IPLHRTF GetHRTF(void)
{
	CThreadFastMutex autoMutex_iplHRTF; // 90
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_90; // 90
	IPLHRTFSettings hrtfSettings; // 94
	IPLerror errorCode; // 101
	const char   __FUNCTION__; // 25354
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 102
	}
} /* size: 0, variables: 5 */

// <01E9FE29> sbox/steamaudio.cpp:107
inline IPLVector3 TransformDirectionToSteamAudio(const Vector& vector)
{
} /* size: 0 */

// <01E9FC9C> sbox/steamaudio.cpp:112
// variables: 6
// function calls: 4
void CBinauralEffect::CBinauralEffect()
{
	{
		{
			IPLBinauralEffectSettings effectSettings; // 114
			IPLerror errorCode; // 117
			{
			}
		}
	}
	{
		{
			IPLBinauralEffectSettings effectSettings; // 114
			IPLerror errorCode; // 117
			GetHRTF(void); // 115
			GetAudioSettings(void); // 117
			GetIPLContext(void); // 117
		}
	}
	{
		IPLBinauralEffectSettings effectSettings; // 114
		IPLerror errorCode; // 117
		{
		}
	}
	CBinauralEffect::CBinauralEffect(); // 112
} /* size: 0, inline expansions: 1 (26 bytes) */

// <01E9FC42> sbox/steamaudio.cpp:112
// variables: 4
void CBinauralEffect::CBinauralEffect()
{
	const char   __FUNCTION__; // 25396
	{
		IPLBinauralEffectSettings effectSettings; // 114
		IPLerror errorCode; // 117
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 118
		}
	}
} /* size: 0, variables: 1 */

// <01E9FBF8> sbox/steamaudio.cpp:121
void CBinauralEffect::~CBinauralEffect()
{
} /* size: 9 */

// <01E9FA51> sbox/steamaudio.cpp:126
// variables: 5
// function calls: 2
void CBinauralEffect::Apply(Vector direction, float spatialBlend, bool useNearestInterpolation, CAudioMixDeviceBuffers* input, CAudioMixDeviceBuffers* output)
{
	float* inArray; // 128
	IPLAudioBuffer inBuffer; // 129
	float* outArray; // 134
	IPLAudioBuffer outBuffer; // 135
	IPLBinauralEffectParams params; // 141
	TransformDirectionToSteamAudio(const Vector& vector); // 142
	GetHRTF(void); // 143
} /* size: 350, variables: 5, inline expansions: 2 (70 bytes) */

