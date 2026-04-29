
//
// soundsystem/fft.cpp
//
//	referenced by: libengine2.so
//
//	functions: 5
//

// <026AB757> soundsystem/fft.cpp:104
// variables: 22
// function calls: 5
void smbFft(float* fftBuffer, uint fftFrameSize, int sign)
{
	float flSign; // 117
	uint nLog2Len; // 118
	float wr; // 132
	float wi; // 132
	float arg; // 132
	float tr; // 133
	float ti; // 133
	float ur; // 133
	float ui; // 133
	float* p1r; // 133
	float* p1i; // 133
	float* p2r; // 133
	float* p2i; // 133
	{
		uint i; // 120
		{
			uint nRev; // 122
			{
				uint n0; // 125
				uint n1; // 126
				swap<float>(float& __a,
						float& __b);  // 19
				V_swap<float>(float& x,
						float& y);  // 127
				swap<float>(float& __a,
						float& __b);  // 19
				V_swap<float>(float& x,
						float& y);  // 128
			}
			ReverseBits(uint32 v,
					uint32 nBits);  // 122
		}
	}
	{
		uint k; // 135
		uint le; // 135
		{
			uint le2; // 138
			{
				uint j; // 144
				{
					uint i; // 148
				}
			}
		}
	}
} /* size: 581, variables: 13 */

// <026AB71C> soundsystem/fft.cpp:164
void CFFTPlan::CFFTPlan(int nFrameSize, fft_direction_t nDir)
{
} /* size: 43 */

// <026AB6BB> soundsystem/fft.cpp:173
void CFFTPlan::~CFFTPlan()
{
} /* size: 5 */

// <026AB5A7> soundsystem/fft.cpp:177
// variables: 4
void CFFTPlan::TransformSignalToSpectrum(const float* pSignalIn, float* pSpectrumOut)
{
	const char   __FUNCTION__; // 16264
	float* pOut; // 181
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 179
	}
	{
		uint i; // 182
	}
} /* size: 0, variables: 2 */

// <026AB4A4> soundsystem/fft.cpp:192
// variables: 5
void CFFTPlan::TransformSpectrumToSignal(const float* pSpectrumIn, float* pSignalOut)
{
	const char   __FUNCTION__; // 16264
	float flScale; // 198
	const float* pSpec; // 199
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 194
	}
	{
		uint i; // 200
	}
} /* size: 0, variables: 3 */

