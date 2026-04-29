
//
// soundsystem/lowlevel/mp3_helpers.cpp
//
//	referenced by: libengine2.so
//
//	functions: 3
//

// <06D88323> soundsystem/lowlevel/mp3_helpers.cpp:10
// variables: 5
// function calls: 8
void CSimplePCMWaveData::ParseMP3File(const uint8* pData, size_t nBytesOfData)
{
	drmp3 mp3; // 12
	const drmp3_uint64  nFrameCount; // 25
	const size_t  nTotalBytes; // 26
	drmp3_uint64 nFramesRead; // 29
	size_t nBytesDecoded; // 30
	drmp3_init_memory(drmp3* pMP3,
				const void* pData,
				size_t dataSize,
				const drmp3_allocation_callbacks* pAllocationCallbacks);  // 13
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 29
	drmp3_read_pcm_frames_s16(drmp3* pMP3,
					drmp3_uint64 framesToRead,
					drmp3_int16* pBufferOut);  // 29
	drmp3__free_from_callbacks(void* p,
					const drmp3_allocation_callbacks* pAllocationCallbacks);  // 2603
	drmp3__free_from_callbacks(void* p,
					const drmp3_allocation_callbacks* pAllocationCallbacks);  // 4098
	drmp3_uninit(drmp3* pMP3); // 4082
	drmp3_uninit(drmp3* pMP3); // 33
} /* size: 387, variables: 5, inline expansions: 8 (173 bytes) */

// <06D881BD> soundsystem/lowlevel/mp3_helpers.cpp:43
// variables: 6
void CSimplePCMWaveData::ParseWAVFile(const uint8* pData, size_t nBytesOfData)
{
	uint nFmtSize; // 45
	waveheader_t* pHeader; // 46
	uint nPCMDataSize; // 47
	const uint8* pPCMData; // 48
	{
		uint nBytesPerSample; // 56
		uint nSampleCount; // 57
	}
} /* size: 0, variables: 4 */

// <06D87C18> soundsystem/lowlevel/mp3_helpers.cpp:70
// variables: 7
// function calls: 16
void CSimplePCMWaveData::ChangeBitDepth(int nBitsPerSample)
{
	CUtlBuffer tempData; // 72
	const char   __FUNCTION__; // 6560
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
	{
		bool bConvertToPCM; // 96
		{
			bool bSuccess; // 111
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 112
			}
			CUtlBuffer::Clear(); // 110
			CUtlBuffer::TellMaxPut(); // 111
			CUtlMemory<unsigned char, int>::Base(); // 1484
			CUtlBuffer::Base(); // 111
		}
		CUtlBuffer::TellMaxPut(); // 105
		CUtlMemory<unsigned char, int>::Base(); // 1484
		CUtlBuffer::Base(); // 105
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 118
	}
	CUtlBuffer::TellMaxPut(); // 81
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 81
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 120
} /* size: 0, variables: 2, inline expansions: 9 (0 bytes) */

