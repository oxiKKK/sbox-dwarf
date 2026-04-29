
//
// soundsystem/lowlevel/simple_filter.h
//
//	referenced by: libengine2.so
//
//	functions: 3
//	structs: 2
//

// <06D99E47> soundsystem/lowlevel/simple_filter.h:3
// member variables: 2
// struct size: 24
struct biquad_filter_coefficients_t {
	float m_flA[3]; /* 0 12 */
	float m_flB[3]; /* 12 12 */
};

// <06D49D10> soundsystem/lowlevel/simple_filter.h:10
void SimpleFilter_ProcessBuffer(const float *, float *, filterstate_t *)
{
} /* size: 0 */

// <06D470E9> soundsystem/lowlevel/simple_filter.h:12
// member function: 1
// member variables: 11
// struct size: 128
struct filterstate_t {
	float m_flFIRCoeff[4]; /* 0 16 */
	float m_flIIRCoeff[2]; /* 16 8 */
	int m_nFilterType; /* 24 4 */
	float m_flAmplification; /* 28 4 */
	float m_flFIRState[2]; /* 32 8 */
	float m_flIIRState[2]; /* 40 8 */
	fltx4 m_fl4iirRow0; /* 48 16 */
	fltx4 m_fl4iirRow1; /* 64 16 */
	fltx4 m_fl4iirRow2; /* 80 16 */
	fltx4 m_fl4prevInputSamples; /* 96 16 */
	fltx4 m_fl4prevOutputSamples; /* 112 16 */
	/* soundsystem/lowlevel/simple_filter.h:27 */
	void Process(filterstate_t* , const float* , float* );
};

// <06D49C18> soundsystem/lowlevel/simple_filter.h:38
void SimpleFilter_Init(filterstate_t *, int, float, float, float, float)
{
} /* size: 0 */

// <06D49C49> soundsystem/lowlevel/simple_filter.h:44
void SimpleFilter_Update(filterstate_t *, int, float, float, float, float)
{
} /* size: 0 */

