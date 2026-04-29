
//
// soundsystem/lowlevel/simple_filter.cpp
//
//	referenced by: libengine2.so
//
//	functions: 12
//

// <06D9C67F> soundsystem/lowlevel/simple_filter.cpp:13
// variable: 1
inline fltx4 LoadSIMD(float flR0, float flR1, float flR2, float flR3)
{
	fltx4 t; // 15
} /* size: 0, variables: 1 */

// <06D9C4FF> soundsystem/lowlevel/simple_filter.cpp:24
// variables: 12
void SimpleFilter_ProcessBufferScalar(const float* flSamples, float* flOutput, filterstate_t* pFilter)
{
	float x1; // 26
	float x2; // 27
	float y1; // 28
	float y2; // 29
	float sample; // 30
	float out; // 30
	float fir0; // 32
	float fir1; // 33
	float fir2; // 34
	float iir0; // 35
	float iir1; // 36
	{
		int i; // 37
	}
} /* size: 0, variables: 11 */

// <06D9C3AA> soundsystem/lowlevel/simple_filter.cpp:65
// variables: 12
void SimpleFilter_ProcessSamples(const float* pInput, float* pOutput, filterstate_t* pFilter, uint nSampleCount)
{
	float x1; // 67
	float x2; // 68
	float y1; // 69
	float y2; // 70
	float sample; // 71
	float out; // 71
	float fir0; // 73
	float fir1; // 74
	float fir2; // 75
	float iir0; // 76
	float iir1; // 77
	{
		uint i; // 78
	}
} /* size: 0, variables: 11 */

// <06D9B72B> soundsystem/lowlevel/simple_filter.cpp:214
// variables: 3
float SimpleFilterQ_FromBandwidth(float flBandwidth, float flCenterFrequency, float flSamplingRate)
{
	float flOmega; // 216
	float flSinOmega; // 217
	float flooQ; // 218
} /* size: 0, variables: 3 */

// <06D9B4D9> soundsystem/lowlevel/simple_filter.cpp:223
// variables: 14
void SimpleFilter_Coefficients(biquad_filter_coefficients_t* pCoeffs, int nFilterType, float fldbGain, float flCenterFrequency, float flQ, float flSamplingRate)
{
	float flA0; // 225
	float flA1; // 225
	float flA2; // 225
	float flB0; // 225
	float flB1; // 225
	float flB2; // 225
	float flPeakGain; // 229
	float flOmega; // 230
	float flSinOmega; // 231
	float flCosOmega; // 232
	float flAlpha; // 233
	float flShelfSlope; // 242
	float flShelfAlpha; // 243
	{
		float flBandwidth; // 237
	}
} /* size: 0, variables: 13 */

// <06D9B04C> soundsystem/lowlevel/simple_filter.cpp:374
// function call: 1
void SimpleFilter_InitLowPass(filterstate_t* pFilter, float dbGain, float flCenterFrequency, float flQ, float flSamplingRate)
{
	SimpleFilter_Init(filterstate_t* pFilter,
				int nFilterType,
				float fldbGain,
				float flCenterFrequency,
				float flQ,
				float flSamplingRate);  // 376
} /* size: 0, inline expansions: 1 (0 bytes) */

// <06D9AEB7> soundsystem/lowlevel/simple_filter.cpp:379
// function call: 1
void SimpleFilter_InitHighPass(filterstate_t* pFilter, float dbGain, float flCenterFrequency, float flQ, float flSamplingRate)
{
	SimpleFilter_Init(filterstate_t* pFilter,
				int nFilterType,
				float fldbGain,
				float flCenterFrequency,
				float flQ,
				float flSamplingRate);  // 381
} /* size: 0, inline expansions: 1 (0 bytes) */

// <06D9AD22> soundsystem/lowlevel/simple_filter.cpp:384
// function call: 1
void SimpleFilter_InitBandPass(filterstate_t* pFilter, float dbGain, float flCenterFrequency, float flQ, float flSamplingRate)
{
	SimpleFilter_Init(filterstate_t* pFilter,
				int nFilterType,
				float fldbGain,
				float flCenterFrequency,
				float flQ,
				float flSamplingRate);  // 386
} /* size: 0, inline expansions: 1 (0 bytes) */

// <06D9AB8D> soundsystem/lowlevel/simple_filter.cpp:389
// function call: 1
void SimpleFilter_InitNotch(filterstate_t* pFilter, float dbGain, float flCenterFrequency, float flQ, float flSamplingRate)
{
	SimpleFilter_Init(filterstate_t* pFilter,
				int nFilterType,
				float fldbGain,
				float flCenterFrequency,
				float flQ,
				float flSamplingRate);  // 391
} /* size: 0, inline expansions: 1 (0 bytes) */

// <06D9A9F8> soundsystem/lowlevel/simple_filter.cpp:394
// function call: 1
void SimpleFilter_InitPeakingEQ(filterstate_t* pFilter, float dbGain, float flCenterFrequency, float flQ, float flSamplingRate)
{
	SimpleFilter_Init(filterstate_t* pFilter,
				int nFilterType,
				float fldbGain,
				float flCenterFrequency,
				float flQ,
				float flSamplingRate);  // 396
} /* size: 0, inline expansions: 1 (0 bytes) */

// <06D9A863> soundsystem/lowlevel/simple_filter.cpp:399
// function call: 1
void SimpleFilter_InitLowShelf(filterstate_t* pFilter, float dbGain, float flCenterFrequency, float flQ, float flSamplingRate)
{
	SimpleFilter_Init(filterstate_t* pFilter,
				int nFilterType,
				float fldbGain,
				float flCenterFrequency,
				float flQ,
				float flSamplingRate);  // 401
} /* size: 0, inline expansions: 1 (0 bytes) */

// <06D9A6CE> soundsystem/lowlevel/simple_filter.cpp:404
// function call: 1
void SimpleFilter_InitHighShelf(filterstate_t* pFilter, float dbGain, float flCenterFrequency, float flQ, float flSamplingRate)
{
	SimpleFilter_Init(filterstate_t* pFilter,
				int nFilterType,
				float fldbGain,
				float flCenterFrequency,
				float flQ,
				float flSamplingRate);  // 406
} /* size: 0, inline expansions: 1 (0 bytes) */

