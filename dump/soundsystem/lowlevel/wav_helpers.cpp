
//
// soundsystem/lowlevel/wav_helpers.cpp
//
//	referenced by: libengine2.so
//
//	functions: 5
//

// <06DAF718> soundsystem/lowlevel/wav_helpers.cpp:9
// variable: 1
// function calls: 3
bool IsPCMFormat(const waveheader_t* pHeader)
{
	{
		const waveheaderextensible_t* pExt; // 15
		V_memcmp(const void* m1,
			const void* m2,
			size_t count);  // 1563
		Plat_CompareUUIDs(const V_uuid_t* pLhs,
					const V_uuid_t* pRhs);  // 1588
		operator==(const V_uuid_t& lhs,
				const V_uuid_t& rhs);  // 16
	}
} /* size: 0 */

// <06DAF618> soundsystem/lowlevel/wav_helpers.cpp:22
// variable: 1
// function calls: 3
bool IsFloatFormat(const waveheader_t* pHeader)
{
	{
		const waveheaderextensible_t* pExt; // 28
		V_memcmp(const void* m1,
			const void* m2,
			size_t count);  // 1563
		Plat_CompareUUIDs(const V_uuid_t* pLhs,
					const V_uuid_t* pRhs);  // 1588
		operator==(const V_uuid_t& lhs,
				const V_uuid_t& rhs);  // 29
	}
} /* size: 0 */

// <06DADC80> soundsystem/lowlevel/wav_helpers.cpp:159
// variables: 9
// function call: 1
bool ResampleFloatAudio(CUtlBuffer* pOut, uint nOutputSamplingRate, const uint8* pInputData, uint nInputBytes, uint nChannels, uint nInputSamplingRate)
{
	const SDL_AudioSpec  srcSpec; // 161
	const SDL_AudioSpec  dstSpec; // 162
	SDL_AudioStream* pStream; // 163
	uint nDataSize; // 167
	bool bAllSubmit; // 168
	uint nSubmitOffset; // 169
	int nBytesRead; // 171
	{
		char buf; // 174
		{
			uint nAvail; // 177
		}
	}
	CUtlBuffer::TellMaxPut(); // 198
} /* size: 0, variables: 7, inline expansions: 1 (0 bytes) */

// <06DAD5D7> soundsystem/lowlevel/wav_helpers.cpp:201
// variables: 2
// function calls: 24
bool ResamplePCMAudio(CUtlBuffer* pOut, uint nOutputSamplingRate, const uint8* pInputData, uint nInputBytes, uint nBitsPerSample, uint nChannels, uint nInputSamplingRate)
{
	CUtlBuffer floatData; // 203
	{
		CUtlBuffer floatResample; // 208
		CUtlBuffer::TellMaxPut(); // 209
		CUtlMemory<unsigned char, int>::Base(); // 1484
		CUtlBuffer::Base(); // 209
		ValidateAlignment<unsigned char>(void); // 508
		CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned char, int>::Purge(); // 903
		CUtlMemory<unsigned char, int>::Purge(); // 510
		CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
		CUtlBuffer::~CUtlBuffer(); // 214
		CUtlBuffer::TellMaxPut(); // 211
		CUtlMemory<unsigned char, int>::Base(); // 1484
		CUtlBuffer::Base(); // 211
		ValidateAlignment<unsigned char>(void); // 508
		CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned char, int>::Purge(); // 903
		CUtlMemory<unsigned char, int>::Purge(); // 510
		CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
		CUtlBuffer::~CUtlBuffer(); // 214
	}
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 216
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

// <06DACD58> soundsystem/lowlevel/wav_helpers.cpp:262
// variables: 8
// function calls: 15
bool WriteWAVFile(CUtlBuffer& waveFile, uint nBitsPerSample, uint nChannels, uint nSampleRate, const void* pData, uint nWaveDataSize)
{
	waveheader_t header; // 264
	uint nWaveFmtSize; // 273
	uint nChunkCount; // 274
	uint nChunkHeaderSize; // 275
	uint nRIFFSize; // 276
	riff_chunk_t chunk; // 278
	CUtlBuffer::IsText(); // 1238
	CByteswap::IsSwappingBytes(); // 1208
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1210
	CUtlBuffer::PutTypeBin<float>(
				float src);  // 1204
	{
	}
	{
		int i; // 200
		{
			int i; // 214
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 218
		LowLevelByteSwap<unsigned int>(unsigned int* output,
						unsigned int* input);  // 202
	}
	CByteswap::SwapBufferToTargetEndian<unsigned int>(
						unsigned int* outputBuffer,
						unsigned int* inputBuffer,
						int count);  // 170
	CByteswap::SwapBufferToTargetEndian<unsigned int>(
						unsigned int* outputBuffer,
						unsigned int* inputBuffer,
						int count);  // 1214
	CUtlBuffer::PutTypeBin<unsigned int>(
				unsigned int src);  // 1240
	GetFmtStr<unsigned int>(int nRadix,
				bool bPrint);  // 1244
	CUtlBuffer::PutType<unsigned int>(
				unsigned int src);  // 1236
	CUtlBuffer::PutType<unsigned int>(
				unsigned int src);  // 1345
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 283
} /* size: 0, variables: 6, inline expansions: 12 (0 bytes) */

