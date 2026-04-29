
//
// soundsystem/smbpitchshift.h
//
//	referenced by: libengine2.so
//
//	function: 1
//	class: 1
//

// <0244607C> soundsystem/smbpitchshift.h:7
// member functions: 4
// member variables: 2
// class size: 16
class CPitchShiftFFT {
private:
	CFFTAdapter * m_pTransform; /* 0 8 */
	int m_nQuality; /* 8 4 */
	/* soundsystem/smbpitchshift.h:12 */
	void CPitchShiftFFT(CPitchShiftFFT* , int);
	/* soundsystem/smbpitchshift.h:14 */
	void ProcessShift(CPitchShiftFFT* , float* , const float* , uint, float, float);
	void CPitchShiftFFT(class CPitchShiftFFT *, int); /* linkage=_ZN14CPitchShiftFFTC4Ei */
	void ProcessShift(class CPitchShiftFFT *, float *, const float  *, uint, float, float); /* linkage=_ZN14CPitchShiftFFT12ProcessShiftEPfPKfjff */
};

// <02448B33> soundsystem/smbpitchshift.h:12
void CPitchShiftFFT::CPitchShiftFFT(int nQuality)
{
} /* size: 0 */

