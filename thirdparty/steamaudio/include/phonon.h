
//
// thirdparty/steamaudio/include/phonon.h
//
//	referenced by: libengine2.so
//
//	functions: 5
//	structs: 7
//

// <01E9E5A2> ../thirdparty/steamaudio/include/phonon.h:160
// member variables: 6
// struct size: 40
typedef struct {
	IPLuint32 version; /* 0 4 */
	IPLLogFunction logCallback; /* 8 8 */
	IPLAllocateFunction allocateCallback; /* 16 8 */
	IPLFreeFunction freeCallback; /* 24 8 */
	IPLSIMDLevel simdLevel; /* 32 4 */
	IPLContextFlags flags; /* 36 4 */
} IPLContextSettings;

// <01E9F3C9> ../thirdparty/steamaudio/include/phonon.h:195
IPLerror iplContextCreate(IPLContextSettings *, IPLContext *)
{
} /* size: 0 */

// <01E9E616> ../thirdparty/steamaudio/include/phonon.h:226
// member variables: 3
// struct size: 12
typedef struct {
	IPLfloat32 x; /* 0 4 */
	IPLfloat32 y; /* 4 4 */
	IPLfloat32 z; /* 8 4 */
} IPLVector3;

// <01E9E684> ../thirdparty/steamaudio/include/phonon.h:1267
// member variables: 2
// struct size: 8
typedef struct {
	IPLint32 samplingRate; /* 0 4 */
	IPLint32 frameSize; /* 4 4 */
} IPLAudioSettings;

// <01E9E6C0> ../thirdparty/steamaudio/include/phonon.h:1276
// member variables: 3
// struct size: 16
typedef struct {
	IPLint32 numChannels; /* 0 4 */
	IPLint32 numSamples; /* 4 4 */
	IPLfloat32 * * data; /* 8 8 */
} IPLAudioBuffer;

// <01E9E78B> ../thirdparty/steamaudio/include/phonon.h:1404
// member variables: 6
// struct size: 40
typedef struct {
	IPLHRTFType type; /* 0 4 */
	const char * sofaFileName; /* 8 8 */
	const IPLuint8 * sofaData; /* 16 8 */
	int sofaDataSize; /* 24 4 */
	float volume; /* 28 4 */
	IPLHRTFNormType normType; /* 32 4 */
} IPLHRTFSettings;

// <01E9F348> ../thirdparty/steamaudio/include/phonon.h:1441
IPLerror iplHRTFCreate(IPLContext, IPLAudioSettings *, IPLHRTFSettings *, IPLHRTF *)
{
} /* size: 0 */

// <01E9E847> ../thirdparty/steamaudio/include/phonon.h:1581
// member variable: 1
// struct size: 8
typedef struct {
	IPLHRTF hrtf; /* 0 8 */
} IPLBinauralEffectSettings;

// <01E9E873> ../thirdparty/steamaudio/include/phonon.h:1587
// member variables: 5
// struct size: 40
typedef struct {
	IPLVector3 direction; /* 0 12 */
	IPLHRTFInterpolation interpolation; /* 12 4 */
	IPLfloat32 spatialBlend; /* 16 4 */
	IPLHRTF hrtf; /* 24 8 */
	IPLfloat32 * peakDelays; /* 32 8 */
} IPLBinauralEffectParams;

// <01E9F31A> ../thirdparty/steamaudio/include/phonon.h:1616
IPLerror iplBinauralEffectCreate(IPLContext, IPLAudioSettings *, IPLBinauralEffectSettings *, IPLBinauralEffect *)
{
} /* size: 0 */

// <01E9F2FF> ../thirdparty/steamaudio/include/phonon.h:1630
void iplBinauralEffectRelease(IPLBinauralEffect *)
{
} /* size: 0 */

// <01E9F2CB> ../thirdparty/steamaudio/include/phonon.h:1650
IPLAudioEffectState iplBinauralEffectApply(IPLBinauralEffect, IPLBinauralEffectParams *, IPLAudioBuffer *, IPLAudioBuffer *)
{
} /* size: 0 */

