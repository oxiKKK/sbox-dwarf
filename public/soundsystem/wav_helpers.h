
//
// public/soundsystem/wav_helpers.h
//
//	referenced by: libengine2.so
//
//	functions: 4
//	structs: 3
//

// <06DAFDAE> ../../public/soundsystem/wav_helpers.h:7
// variables: 2
inline int16 Convert8bitTo16bit(uint8 nSample)
{
	uint8 nSampleOut; // 9
	short int nSampleOut16; // 10
} /* size: 0, variables: 2 */

// <06DAFD73> ../../public/soundsystem/wav_helpers.h:20
// variables: 2
inline float Convert24bitToFloatNorm(const uint8* pSample)
{
	const float  flScale; // 22
	int nSampleOut; // 23
} /* size: 0, variables: 2 */

// <06D86C9A> ../../public/soundsystem/wav_helpers.h:29
// member variables: 7
// struct size: 18
struct waveheader_t {
	uint16 wFormatTag; /* 0 2 */
	uint16 nChannels; /* 2 2 */
	uint32 nSamplesPerSec; /* 4 4 */
	uint32 nAvgBytesPerSec; /* 8 4 */
	uint16 nBlockAlign; /* 12 2 */
	uint16 wBitsPerSample; /* 14 2 */
	uint16 cbSize; /* 16 2 */
} __attribute__((__packed__));

// <06DA182C> ../../public/soundsystem/wav_helpers.h:52
// member variables: 4
// struct size: 40
struct waveheaderextensible_t {
	waveheader_t baseHeader; /* 0 18 */
	uint16 wValidBitsPerSample; /* 18 2 */
	uint32 dwChannelMask; /* 20 4 */
	V_uuid_t subFormat; /* 24 16 */
};

// <06DA187B> ../../public/soundsystem/wav_helpers.h:60
// member variables: 2
// struct size: 8
struct riff_chunk_t {
	uint m_nID; /* 0 4 */
	uint m_nSize; /* 4 4 */
};

// <06D87919> ../../public/soundsystem/wav_helpers.h:108
const uint8* FindRIFFChunk(const void *, uint, uint, uint *)
{
} /* size: 0 */

// <06D878AE> ../../public/soundsystem/wav_helpers.h:113
bool ConvertPCMToFloat(CUtlBuffer *, const uint8 *, uint, uint)
{
} /* size: 0 */

