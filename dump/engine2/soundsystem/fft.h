
//
// engine2/soundsystem/fft.h
//
//	referenced by: libengine2.so
//
//	functions: 2
//	class: 1
//

// <01FA19D4> ../engine2/soundsystem/fft.h:23
// member functions: 8
// member variables: 3
// class size: 12
class CFFTPlan {
private:
	float m_flInverseScale; /* 0 4 */
	uint m_nFrameSize; /* 4 4 */
	int m_nDir; /* 8 4 */
	/* ../engine2/soundsystem/fft.h:32 */
	void CFFTPlan(CFFTPlan* , int, fft_direction_t);
	/* ../engine2/soundsystem/fft.h:33 */
	void ~CFFTPlan(CFFTPlan* );
	/* ../engine2/soundsystem/fft.h:36 */
	void TransformSignalToSpectrum(CFFTPlan* , const float* , float* );
	/* ../engine2/soundsystem/fft.h:39 */
	void TransformSpectrumToSignal(CFFTPlan* , const float* , float* );
	void CFFTPlan(class CFFTPlan *, int, enum fft_direction_t); /* linkage=_ZN8CFFTPlanC4Ei15fft_direction_t */
	void ~CFFTPlan(class CFFTPlan *); /* linkage=_ZN8CFFTPlanD4Ev */
	void TransformSignalToSpectrum(class CFFTPlan *, const float  *, float *); /* linkage=_ZN8CFFTPlan25TransformSignalToSpectrumEPKfPf */
	void TransformSpectrumToSignal(class CFFTPlan *, const float  *, float *); /* linkage=_ZN8CFFTPlan25TransformSpectrumToSignalEPKfPf */
};

// <01FA74BA> ../engine2/soundsystem/fft.h:32
void CFFTPlan::CFFTPlan(int nFrameSize, fft_direction_t nDir)
{
} /* size: 0 */

// <01FA7349> ../engine2/soundsystem/fft.h:33
void CFFTPlan::~CFFTPlan()
{
} /* size: 0 */

