
//
// thirdparty/dr_libs/dr_wav.h
//
//	referenced by: libengine2.so
//
//	functions: 202
//	structs: 21
//

// <0209D4B8> ../thirdparty/dr_libs/dr_wav.h:298
// member functions: 3
// member variables: 4
// struct size: 32
typedef struct {
	void * pUserData; /* 0 8 */
	void* (*onMalloc)(size_t, void* ); /* 8 8* /
	void* (*onRealloc)(void* , size_t, void* ); /* 16 8* /
	void (*onFree)(void* , void* ); /* 24 8* /
} drwav_allocation_callbacks;

// <0209D5DB> ../thirdparty/dr_libs/dr_wav.h:323
// member variables: 3
// struct size: 32
typedef struct {
	/* ../thirdparty/dr_libs/dr_wav.h:325 */
	typedef union {
		drwav_uint8 fourcc[4]; /* 0 4 */
		drwav_uint8 guid[16]; /* 0 16 */
	} drwav_chunk_header;
	union {
		drwav_uint8 fourcc[4]; /* 0 4 */
		drwav_uint8 guid[16]; /* 0 16 */
	} id; /* 0 16 */
	drwav_uint64 sizeInBytes; /* 16 8 */
	unsigned int paddingSize; /* 24 4 */
} drwav_chunk_header;

// <0209D670> ../thirdparty/dr_libs/dr_wav.h:341
// member variables: 10
// struct size: 40
typedef struct {
	drwav_uint16 formatTag; /* 0 2 */
	drwav_uint16 channels; /* 2 2 */
	drwav_uint32 sampleRate; /* 4 4 */
	drwav_uint32 avgBytesPerSec; /* 8 4 */
	drwav_uint16 blockAlign; /* 12 2 */
	drwav_uint16 bitsPerSample; /* 14 2 */
	drwav_uint16 extendedSize; /* 16 2 */
	drwav_uint16 validBitsPerSample; /* 18 2 */
	drwav_uint32 channelMask; /* 20 4 */
	drwav_uint8 subFormat[16]; /* 24 16 */
} drwav_fmt;

// <0209D82E> ../thirdparty/dr_libs/dr_wav.h:463
// member variables: 3
// struct size: 24
typedef struct {
	const drwav_uint8 * data; /* 0 8 */
	size_t dataSize; /* 8 8 */
	size_t currentReadPos; /* 16 8 */
} drwav__memory_stream;

// <0209D880> ../thirdparty/dr_libs/dr_wav.h:471
// member variables: 5
// struct size: 40
typedef struct {
	void * * ppData; /* 0 8 */
	size_t * pDataSize; /* 8 8 */
	size_t dataSize; /* 16 8 */
	size_t dataCapacity; /* 24 8 */
	size_t currentWritePos; /* 32 8 */
} drwav__memory_stream_write;

// <0209D8F2> ../thirdparty/dr_libs/dr_wav.h:480
// member variables: 5
// struct size: 20
typedef struct {
	drwav_container container; /* 0 4 */
	drwav_uint32 format; /* 4 4 */
	drwav_uint32 channels; /* 8 4 */
	drwav_uint32 sampleRate; /* 12 4 */
	drwav_uint32 bitsPerSample; /* 16 4 */
} drwav_data_format;

// <0209DA4D> ../thirdparty/dr_libs/dr_wav.h:572
// member variables: 6
// struct size: 24
typedef struct {
	drwav_uint32 cuePointId; /* 0 4 */
	drwav_uint32 type; /* 4 4 */
	drwav_uint32 firstSampleOffset; /* 8 4 */
	drwav_uint32 lastSampleOffset; /* 12 4 */
	drwav_uint32 sampleFraction; /* 16 4 */
	drwav_uint32 playCount; /* 20 4 */
} drwav_smpl_loop;

// <0209DAC9> ../thirdparty/dr_libs/dr_wav.h:593
// member variables: 11
// struct size: 56
typedef struct {
	drwav_uint32 manufacturerId; /* 0 4 */
	drwav_uint32 productId; /* 4 4 */
	drwav_uint32 samplePeriodNanoseconds; /* 8 4 */
	drwav_uint32 midiUnityNote; /* 12 4 */
	drwav_uint32 midiPitchFraction; /* 16 4 */
	drwav_uint32 smpteFormat; /* 20 4 */
	drwav_uint32 smpteOffset; /* 24 4 */
	drwav_uint32 sampleLoopCount; /* 28 4 */
	drwav_uint32 samplerSpecificDataSizeInBytes; /* 32 4 */
	drwav_smpl_loop * pLoops; /* 40 8 */
	drwav_uint8 * pSamplerSpecificData; /* 48 8 */
} drwav_smpl;

// <0209DBA1> ../thirdparty/dr_libs/dr_wav.h:628
// member variables: 7
// struct size: 7
typedef struct {
	drwav_int8 midiUnityNote; /* 0 1 */
	drwav_int8 fineTuneCents; /* 1 1 */
	drwav_int8 gainDecibels; /* 2 1 */
	drwav_int8 lowNote; /* 3 1 */
	drwav_int8 highNote; /* 4 1 */
	drwav_int8 lowVelocity; /* 5 1 */
	drwav_int8 highVelocity; /* 6 1 */
} drwav_inst;

// <0209DC2D> ../thirdparty/dr_libs/dr_wav.h:645
// member variables: 6
// struct size: 24
typedef struct {
	drwav_uint32 id; /* 0 4 */
	drwav_uint32 playOrderPosition; /* 4 4 */
	drwav_uint8 dataChunkId[4]; /* 8 4 */
	drwav_uint32 chunkStart; /* 12 4 */
	drwav_uint32 blockStart; /* 16 4 */
	drwav_uint32 sampleOffset; /* 20 4 */
} drwav_cue_point;

// <0209DCA8> ../thirdparty/dr_libs/dr_wav.h:666
// member variables: 2
// struct size: 16
typedef struct {
	drwav_uint32 cuePointCount; /* 0 4 */
	drwav_cue_point * pCuePoints; /* 8 8 */
} drwav_cue;

// <0209DCEA> ../thirdparty/dr_libs/dr_wav.h:686
// member variables: 8
// struct size: 24
typedef struct {
	drwav_uint32 flags; /* 0 4 */
	drwav_uint16 midiUnityNote; /* 4 2 */
	drwav_uint16 reserved1; /* 6 2 */
	float reserved2; /* 8 4 */
	drwav_uint32 numBeats; /* 12 4 */
	drwav_uint16 meterDenominator; /* 16 2 */
	drwav_uint16 meterNumerator; /* 18 2 */
	float tempo; /* 20 4 */
} drwav_acid;

// <0209DD86> ../thirdparty/dr_libs/dr_wav.h:716
// member variables: 3
// struct size: 16
typedef struct {
	drwav_uint32 cuePointId; /* 0 4 */
	drwav_uint32 stringLength; /* 4 4 */
	char * pString; /* 8 8 */
} drwav_list_label_or_note;

// <0209DDD2> ../thirdparty/dr_libs/dr_wav.h:734
// member variables: 15
// struct size: 104
typedef struct {
	char * pDescription; /* 0 8 */
	char * pOriginatorName; /* 8 8 */
	char * pOriginatorReference; /* 16 8 */
	char pOriginationDate[10]; /* 24 10 */
	char pOriginationTime[8]; /* 34 8 */
	drwav_uint64 timeReference; /* 48 8 */
	drwav_uint16 version; /* 56 2 */
	char * pCodingHistory; /* 64 8 */
	drwav_uint32 codingHistorySize; /* 72 4 */
	drwav_uint8 * pUMID; /* 80 8 */
	drwav_uint16 loudnessValue; /* 88 2 */
	drwav_uint16 loudnessRange; /* 90 2 */
	drwav_uint16 maxTruePeakLevel; /* 92 2 */
	drwav_uint16 maxMomentaryLoudness; /* 94 2 */
	drwav_uint16 maxShortTermLoudness; /* 96 2 */
} drwav_bext;

// <0209DEDE> ../thirdparty/dr_libs/dr_wav.h:774
// member variables: 2
// struct size: 16
typedef struct {
	drwav_uint32 stringLength; /* 0 4 */
	char * pString; /* 8 8 */
} drwav_list_info_text;

// <0209DF1A> ../thirdparty/dr_libs/dr_wav.h:789
// member variables: 9
// struct size: 32
typedef struct {
	drwav_uint32 cuePointId; /* 0 4 */
	drwav_uint32 sampleLength; /* 4 4 */
	drwav_uint8 purposeId[4]; /* 8 4 */
	drwav_uint16 country; /* 12 2 */
	drwav_uint16 language; /* 14 2 */
	drwav_uint16 dialect; /* 16 2 */
	drwav_uint16 codePage; /* 18 2 */
	drwav_uint32 stringLength; /* 20 4 */
	char * pString; /* 24 8 */
} drwav_list_labelled_cue_region;

// <0209DFFF> ../thirdparty/dr_libs/dr_wav.h:830
// member variables: 4
// struct size: 24
typedef struct {
	drwav_uint8 id[4]; /* 0 4 */
	drwav_metadata_location chunkLocation; /* 4 4 */
	drwav_uint32 dataSizeInBytes; /* 8 4 */
	drwav_uint8 * pData; /* 16 8 */
} drwav_unknown_metadata;

// <0209E05A> ../thirdparty/dr_libs/dr_wav.h:841
// member variables: 2
// struct size: 112
typedef struct {
	/* ../thirdparty/dr_libs/dr_wav.h:846 */
	typedef union {
		drwav_cue cue; /* 0 16 */
		drwav_smpl smpl; /* 0 56 */
		drwav_acid acid; /* 0 24 */
		drwav_inst inst; /* 0 7 */
		drwav_bext bext; /* 0 104 */
		drwav_list_label_or_note labelOrNote; /* 0 16 */
		drwav_list_labelled_cue_region labelledCueRegion; /* 0 32 */
		drwav_list_info_text infoText; /* 0 16 */
		drwav_unknown_metadata unknown; /* 0 24 */
	} drwav_metadata;
	drwav_metadata_type type; /* 0 4 */
	union {
		drwav_cue cue; /* 8 16 */
		drwav_smpl smpl; /* 8 56 */
		drwav_acid acid; /* 8 24 */
		drwav_inst inst; /* 8 7 */
		drwav_bext bext; /* 8 104 */
		drwav_list_label_or_note labelOrNote; /* 8 16 */
		drwav_list_labelled_cue_region labelledCueRegion; /* 8 32 */
		drwav_list_info_text infoText; /* 8 16 */
		drwav_unknown_metadata unknown; /* 8 24 */
	} data; /* 8 104 */
} drwav_metadata;

// <0209E116> ../thirdparty/dr_libs/dr_wav.h:860
// member variables: 26
// struct size: 408
typedef struct {
	/* ../thirdparty/dr_libs/dr_wav.h:938 */
	typedef struct {
		drwav_uint32 bytesRemainingInBlock; /* 0 4 */
		drwav_uint16 predictor[2]; /* 4 4 */
		drwav_int32 delta[2]; /* 8 8 */
		drwav_int32 cachedFrames[4]; /* 16 16 */
		drwav_uint32 cachedFrameCount; /* 32 4 */
		drwav_int32 prevFrames[2][2]; /* 36 16 */
	} drwav;
	/* ../thirdparty/dr_libs/dr_wav.h:949 */
	typedef struct {
		drwav_uint32 bytesRemainingInBlock; /* 0 4 */
		drwav_int32 predictor[2]; /* 4 8 */
		drwav_int32 stepIndex[2]; /* 12 8 */
		drwav_int32 cachedFrames[16]; /* 20 64 */
		drwav_uint32 cachedFrameCount; /* 84 4 */
	} drwav;
	/* ../thirdparty/dr_libs/dr_wav.h:959 */
	typedef struct {
		drwav_bool8 isLE; /* 0 1 */
		drwav_bool8 isUnsigned; /* 1 1 */
	} drwav;
	drwav_read_proc onRead; /* 0 8 */
	drwav_write_proc onWrite; /* 8 8 */
	drwav_seek_proc onSeek; /* 16 8 */
	drwav_tell_proc onTell; /* 24 8 */
	void * pUserData; /* 32 8 */
	drwav_allocation_callbacks allocationCallbacks; /* 40 32 */
	drwav_container container; /* 72 4 */
	drwav_fmt fmt; /* 76 40 */
	drwav_uint32 sampleRate; /* 116 4 */
	drwav_uint16 channels; /* 120 2 */
	drwav_uint16 bitsPerSample; /* 122 2 */
	drwav_uint16 translatedFormatTag; /* 124 2 */
	drwav_uint64 totalPCMFrameCount; /* 128 8 */
	drwav_uint64 dataChunkDataSize; /* 136 8 */
	drwav_uint64 dataChunkDataPos; /* 144 8 */
	drwav_uint64 bytesRemaining; /* 152 8 */
	drwav_uint64 readCursorInPCMFrames; /* 160 8 */
	drwav_uint64 dataChunkDataSizeTargetWrite; /* 168 8 */
	drwav_bool32 isSequentialWrite; /* 176 4 */
	drwav_metadata * pMetadata; /* 184 8 */
	drwav_uint32 metadataCount; /* 192 4 */
	drwav__memory_stream memoryStream; /* 200 24 */
	drwav__memory_stream_write memoryStreamWrite; /* 224 40 */
	struct {
		drwav_uint32 bytesRemainingInBlock; /* 264 4 */
		drwav_uint16 predictor[2]; /* 268 4 */
		drwav_int32 delta[2]; /* 272 8 */
		drwav_int32 cachedFrames[4]; /* 280 16 */
		drwav_uint32 cachedFrameCount; /* 296 4 */
		drwav_int32 prevFrames[2][2]; /* 300 16 */
	} msadpcm; /* 264 52 */
	struct {
		drwav_uint32 bytesRemainingInBlock; /* 316 4 */
		drwav_int32 predictor[2]; /* 320 8 */
		drwav_int32 stepIndex[2]; /* 328 8 */
		drwav_int32 cachedFrames[16]; /* 336 64 */
		drwav_uint32 cachedFrameCount; /* 400 4 */
	} ima; /* 316 88 */
	struct {
		drwav_bool8 isLE; /* 404 1 */
		drwav_bool8 isUnsigned; /* 405 1 */
	} aiff; /* 404 2 */
} drwav;

// <020AD2C0> ../thirdparty/dr_libs/dr_wav.h:1491
void drwav_version(drwav_uint32* pMajor, drwav_uint32* pMinor, drwav_uint32* pRevision)
{
} /* size: 0 */

// <020AD29D> ../thirdparty/dr_libs/dr_wav.h:1506
const char* drwav_version_string(void)
{
} /* size: 0 */

// <020AD28E> ../thirdparty/dr_libs/dr_wav.h:1534
inline int drwav__is_little_endian(void)
{
} /* size: 0 */

// <020AD25A> ../thirdparty/dr_libs/dr_wav.h:1547
// variable: 1
inline void drwav_bytes_to_guid(const drwav_uint8* data, drwav_uint8* guid)
{
	int i; // 1549
} /* size: 0, variables: 1 */

// <020AD23C> ../thirdparty/dr_libs/dr_wav.h:1556
inline drwav_uint16 drwav__bswap16(drwav_uint16 n)
{
} /* size: 0 */

// <020AD21E> ../thirdparty/dr_libs/dr_wav.h:1572
inline drwav_uint32 drwav__bswap32(drwav_uint32 n)
{
} /* size: 0 */

// <020AD200> ../thirdparty/dr_libs/dr_wav.h:1603
inline drwav_uint64 drwav__bswap64(drwav_uint64 n)
{
} /* size: 0 */

// <020AD1E2> ../thirdparty/dr_libs/dr_wav.h:1627
inline drwav_int16 drwav__bswap_s16(drwav_int16 n)
{
} /* size: 0 */

// <020AD1AC> ../thirdparty/dr_libs/dr_wav.h:1632
// variable: 1
inline void drwav__bswap_samples_s16(drwav_int16* pSamples, drwav_uint64 sampleCount)
{
	drwav_uint64 iSample; // 1634
} /* size: 0, variables: 1 */

// <020AD187> ../thirdparty/dr_libs/dr_wav.h:1641
// variable: 1
inline void drwav__bswap_s24(drwav_uint8* p)
{
	drwav_uint8 t; // 1643
} /* size: 0, variables: 1 */

// <020AD142> ../thirdparty/dr_libs/dr_wav.h:1649
// variables: 2
inline void drwav__bswap_samples_s24(drwav_uint8* pSamples, drwav_uint64 sampleCount)
{
	drwav_uint64 iSample; // 1651
	{
		drwav_uint8* pSample; // 1653
	}
} /* size: 0, variables: 1 */

// <020AD124> ../thirdparty/dr_libs/dr_wav.h:1659
inline drwav_int32 drwav__bswap_s32(drwav_int32 n)
{
} /* size: 0 */

// <020AD0EE> ../thirdparty/dr_libs/dr_wav.h:1664
// variable: 1
inline void drwav__bswap_samples_s32(drwav_int32* pSamples, drwav_uint64 sampleCount)
{
	drwav_uint64 iSample; // 1666
} /* size: 0, variables: 1 */

// <020AD0D0> ../thirdparty/dr_libs/dr_wav.h:1673
inline drwav_int64 drwav__bswap_s64(drwav_int64 n)
{
} /* size: 0 */

// <020AD09A> ../thirdparty/dr_libs/dr_wav.h:1678
// variable: 1
inline void drwav__bswap_samples_s64(drwav_int64* pSamples, drwav_uint64 sampleCount)
{
	drwav_uint64 iSample; // 1680
} /* size: 0, variables: 1 */

// <020ACFD7> ../thirdparty/dr_libs/dr_wav.h:1687
// variable: 1
inline float drwav__bswap_f32(float n)
{
	union  x; // 1692
} /* size: 0, variables: 1 */

// <020ACFA1> ../thirdparty/dr_libs/dr_wav.h:1699
// variable: 1
inline void drwav__bswap_samples_f32(float* pSamples, drwav_uint64 sampleCount)
{
	drwav_uint64 iSample; // 1701
} /* size: 0, variables: 1 */

// <020ACF6B> ../thirdparty/dr_libs/dr_wav.h:1708
inline void drwav__bswap_samples(void* pSamples, drwav_uint64 sampleCount, drwav_uint32 bytesPerSample)
{
} /* size: 0 */

// <020ACF4B> ../thirdparty/dr_libs/dr_wav.h:1742
inline drwav_bool32 drwav_is_container_be(drwav_container container)
{
} /* size: 0 */

// <020ACF2B> ../thirdparty/dr_libs/dr_wav.h:1752
inline drwav_uint16 drwav_bytes_to_u16_le(const drwav_uint8* data)
{
} /* size: 0 */

// <020ACF0B> ../thirdparty/dr_libs/dr_wav.h:1757
inline drwav_uint16 drwav_bytes_to_u16_be(const drwav_uint8* data)
{
} /* size: 0 */

// <020ACEDE> ../thirdparty/dr_libs/dr_wav.h:1762
inline drwav_uint16 drwav_bytes_to_u16_ex(const drwav_uint8* data, drwav_container container)
{
} /* size: 0 */

// <020ACEBE> ../thirdparty/dr_libs/dr_wav.h:1772
inline drwav_uint32 drwav_bytes_to_u32_le(const drwav_uint8* data)
{
} /* size: 0 */

// <020ACE9E> ../thirdparty/dr_libs/dr_wav.h:1777
inline drwav_uint32 drwav_bytes_to_u32_be(const drwav_uint8* data)
{
} /* size: 0 */

// <020ACE71> ../thirdparty/dr_libs/dr_wav.h:1782
inline drwav_uint32 drwav_bytes_to_u32_ex(const drwav_uint8* data, drwav_container container)
{
} /* size: 0 */

// <020ACE12> ../thirdparty/dr_libs/dr_wav.h:1793
// variables: 5
drwav_int64 drwav_aiff_extented_to_s64(const drwav_uint8* data)
{
	drwav_uint32 exponent; // 1795
	drwav_uint64 hi; // 1796
	drwav_uint64 lo; // 1797
	drwav_uint64 significand; // 1798
	int sign; // 1799
} /* size: 0, variables: 5 */

// <020ACDAC> ../thirdparty/dr_libs/dr_wav.h:1829
void* drwav__malloc_default(size_t sz, void* pUserData)
{
} /* size: 9 */

// <020ACD2B> ../thirdparty/dr_libs/dr_wav.h:1835
void* drwav__realloc_default(void* p, size_t sz, void* pUserData)
{
} /* size: 9 */

// <020AD5BD> ../thirdparty/dr_libs/dr_wav.h:1841
void drwav__free_default(void* p, void* pUserData)
{
} /* size: 9 */

// <020AD81E> ../thirdparty/dr_libs/dr_wav.h:1848
// function call: 1
void* drwav__malloc_from_callbacks(size_t sz, const drwav_allocation_callbacks* pAllocationCallbacks)
{
	drwav__malloc_from_callbacks(size_t sz,
					const drwav_allocation_callbacks* pAllocationCallbacks);  // 1848
} /* size: 0, inline expansions: 1 (0 bytes) */

// <020ACCD8> ../thirdparty/dr_libs/dr_wav.h:1848
void* drwav__malloc_from_callbacks(size_t sz, const drwav_allocation_callbacks* pAllocationCallbacks)
{
} /* size: 0 */

// <020ACC85> ../thirdparty/dr_libs/dr_wav.h:1866
// variable: 1
void* drwav__realloc_from_callbacks(void* p, size_t szNew, size_t szOld, const drwav_allocation_callbacks* pAllocationCallbacks)
{
	{
		void* p2; // 1878
	}
} /* size: 0 */

// <020ACC5E> ../thirdparty/dr_libs/dr_wav.h:1896
void drwav__free_from_callbacks(void* p, const drwav_allocation_callbacks* pAllocationCallbacks)
{
} /* size: 0 */

// <020ACC2F> ../thirdparty/dr_libs/dr_wav.h:1908
// variable: 1
drwav_allocation_callbacks drwav_copy_allocation_callbacks_or_defaults(const drwav_allocation_callbacks* pAllocationCallbacks)
{
	{
		drwav_allocation_callbacks allocationCallbacks; // 1915
	}
} /* size: 0 */

// <020ACC0F> ../thirdparty/dr_libs/dr_wav.h:1925
inline drwav_bool32 drwav__is_compressed_format_tag(drwav_uint16 formatTag)
{
} /* size: 0 */

// <020ACBEF> ../thirdparty/dr_libs/dr_wav.h:1932
unsigned int drwav__chunk_padding_size_riff(drwav_uint64 chunkSize)
{
} /* size: 0 */

// <020ACBCF> ../thirdparty/dr_libs/dr_wav.h:1937
unsigned int drwav__chunk_padding_size_w64(drwav_uint64 chunkSize)
{
} /* size: 0 */

// <020AC98B> ../thirdparty/dr_libs/dr_wav.h:1946
// variables: 2
// function calls: 5
drwav_result drwav__read_chunk_header(drwav_read_proc onRead, void* pUserData, drwav_container container, drwav_uint64* pRunningBytesReadOut, drwav_chunk_header* pHeaderOut)
{
	{
		drwav_uint8 sizeInBytes; // 1949
		drwav_is_container_be(drwav_container container); // 1784
		drwav_bytes_to_u32_ex(const drwav_uint8* data,
					drwav_container container);  // 1959
		drwav__chunk_padding_size_riff(drwav_uint64 chunkSize); // 1960
	}
	{
		drwav_uint8 sizeInBytes; // 1964
		drwav_bytes_to_u64(const drwav_uint8* data); // 1974
		drwav__chunk_padding_size_w64(drwav_uint64 chunkSize); // 1975
	}
} /* size: 310 */

// <020AD532> ../thirdparty/dr_libs/dr_wav.h:1984
// variable: 1
drwav_bool32 drwav__seek_forward(drwav_seek_proc onSeek, drwav_uint64 offset, void* pUserData)
{
	drwav_uint64 bytesRemainingToSeek; // 1986
} /* size: 101, variables: 1 */

// <020AD60B> ../thirdparty/dr_libs/dr_wav.h:2004
// function call: 1
drwav_bool32 drwav__seek_from_start(drwav_seek_proc onSeek, drwav_uint64 offset, void* pUserData)
{
	drwav__seek_from_start(drwav_seek_proc onSeek,
				drwav_uint64 offset,
				void* pUserData);  // 2004
} /* size: 132, inline expansions: 1 (48 bytes) */

// <020AC90A> ../thirdparty/dr_libs/dr_wav.h:2004
drwav_bool32 drwav__seek_from_start(drwav_seek_proc onSeek, drwav_uint64 offset, void* pUserData)
{
} /* size: 0 */

// <020AC8A9> ../thirdparty/dr_libs/dr_wav.h:2033
// variable: 1
size_t drwav__on_read(drwav_read_proc onRead, void* pUserData, void* pBufferOut, size_t bytesToRead, drwav_uint64* pCursor)
{
	size_t bytesRead; // 2035
} /* size: 0, variables: 1 */

// <0209E4E7> ../thirdparty/dr_libs/dr_wav.h:2090
// member variables: 10
// struct size: 80
typedef struct {
	drwav_read_proc onRead; /* 0 8 */
	drwav_seek_proc onSeek; /* 8 8 */
	void * pReadSeekUserData; /* 16 8 */
	drwav__metadata_parser_stage stage; /* 24 4 */
	drwav_metadata * pMetadata; /* 32 8 */
	drwav_uint32 metadataCount; /* 40 4 */
	drwav_uint8 * pData; /* 48 8 */
	drwav_uint8 * pDataCursor; /* 56 8 */
	drwav_uint64 metadataCursor; /* 64 8 */
	drwav_uint64 extraCapacity; /* 72 8 */
} drwav__metadata_parser;

// <020AC87C> ../thirdparty/dr_libs/dr_wav.h:2103
// variable: 1
size_t drwav__metadata_memory_capacity(drwav__metadata_parser* pParser)
{
	drwav_uint64 cap; // 2105
} /* size: 0, variables: 1 */

// <020AC826> ../thirdparty/dr_libs/dr_wav.h:2113
// variables: 2
drwav_uint8* drwav__metadata_get_memory(drwav__metadata_parser* pParser, size_t size, size_t align)
{
	drwav_uint8* pResult; // 2115
	{
		drwav_uintptr modulo; // 2118
	}
} /* size: 0, variables: 1 */

// <020AC7E3> ../thirdparty/dr_libs/dr_wav.h:2136
// variable: 1
void drwav__metadata_request_extra_memory_for_stage_2(drwav__metadata_parser* pParser, size_t bytes, size_t align)
{
	size_t extra; // 2138
} /* size: 0, variables: 1 */

// <020AC7B0> ../thirdparty/dr_libs/dr_wav.h:2142
drwav_result drwav__metadata_alloc(drwav__metadata_parser* pParser, drwav_allocation_callbacks* pAllocationCallbacks)
{
} /* size: 0 */

// <020AC769> ../thirdparty/dr_libs/dr_wav.h:2166
size_t drwav__metadata_parser_read(drwav__metadata_parser* pParser, void* pBufferOut, size_t bytesToRead, drwav_uint64* pCursor)
{
} /* size: 0 */

// <020AC6C0> ../thirdparty/dr_libs/dr_wav.h:2175
// variables: 7
drwav_uint64 drwav__read_smpl_to_metadata_obj(drwav__metadata_parser* pParser, const drwav_chunk_header* pChunkHeader, drwav_metadata* pMetadata)
{
	drwav_uint8 smplHeaderData; // 2177
	drwav_uint64 totalBytesRead; // 2178
	size_t bytesJustRead; // 2179
	{
		drwav_uint32 iSampleLoop; // 2191
		drwav_uint32 loopCount; // 2192
		drwav_uint32 calculatedLoopCount; // 2193
		{
			drwav_uint8 smplLoopData; // 2228
		}
	}
} /* size: 0, variables: 3 */

// <020AC641> ../thirdparty/dr_libs/dr_wav.h:2264
// variables: 5
drwav_uint64 drwav__read_cue_to_metadata_obj(drwav__metadata_parser* pParser, const drwav_chunk_header* pChunkHeader, drwav_metadata* pMetadata)
{
	drwav_uint8 cueHeaderSectionData; // 2266
	drwav_uint64 totalBytesRead; // 2267
	size_t bytesJustRead; // 2268
	{
		drwav_uint32 iCuePoint; // 2291
		{
			drwav_uint8 cuePointData; // 2294
		}
	}
} /* size: 0, variables: 3 */

// <020AC5FA> ../thirdparty/dr_libs/dr_wav.h:2318
// variables: 2
drwav_uint64 drwav__read_inst_to_metadata_obj(drwav__metadata_parser* pParser, drwav_metadata* pMetadata)
{
	drwav_uint8 instData; // 2320
	drwav_uint64 bytesRead; // 2321
} /* size: 0, variables: 2 */

// <020AC5B3> ../thirdparty/dr_libs/dr_wav.h:2345
// variables: 2
drwav_uint64 drwav__read_acid_to_metadata_obj(drwav__metadata_parser* pParser, drwav_metadata* pMetadata)
{
	drwav_uint8 acidData; // 2347
	drwav_uint64 bytesRead; // 2348
} /* size: 0, variables: 2 */

// <020AC586> ../thirdparty/dr_libs/dr_wav.h:2373
// variable: 1
size_t drwav__strlen(const char* str)
{
	size_t result; // 2375
} /* size: 0, variables: 1 */

// <020AC54C> ../thirdparty/dr_libs/dr_wav.h:2384
// variable: 1
size_t drwav__strlen_clamped(const char* str, size_t maxToRead)
{
	size_t result; // 2386
} /* size: 0, variables: 1 */

// <020AC4F6> ../thirdparty/dr_libs/dr_wav.h:2395
// variables: 2
char* drwav__metadata_copy_string(drwav__metadata_parser* pParser, const char* str, size_t maxToRead)
{
	size_t len; // 2397
	{
		char* result; // 2400
	}
} /* size: 0, variables: 1 */

// <0209E5A3> ../thirdparty/dr_libs/dr_wav.h:2413
// member variables: 3
// struct size: 24
typedef struct {
	const void * pBuffer; /* 0 8 */
	size_t sizeInBytes; /* 8 8 */
	size_t cursor; /* 16 8 */
} drwav_buffer_reader;

// <020AC4BC> ../thirdparty/dr_libs/dr_wav.h:2419
drwav_result drwav_buffer_reader_init(const void* pBuffer, size_t sizeInBytes, drwav_buffer_reader* pReader)
{
} /* size: 0 */

// <020AC496> ../thirdparty/dr_libs/dr_wav.h:2433
const void* drwav_buffer_reader_ptr(const drwav_buffer_reader* pReader)
{
} /* size: 0 */

// <020AC469> ../thirdparty/dr_libs/dr_wav.h:2440
drwav_result drwav_buffer_reader_seek(drwav_buffer_reader* pReader, size_t bytesToSeek)
{
} /* size: 0 */

// <020AC408> ../thirdparty/dr_libs/dr_wav.h:2453
// variables: 2
drwav_result drwav_buffer_reader_read(drwav_buffer_reader* pReader, void* pDst, size_t bytesToRead, size_t* pBytesRead)
{
	drwav_result result; // 2455
	size_t bytesRemaining; // 2456
} /* size: 0, variables: 2 */

// <020AD8BB> ../thirdparty/dr_libs/dr_wav.h:2489
// variables: 3
// function calls: 3
drwav_result drwav_buffer_reader_read_u16(drwav_buffer_reader* pReader, drwav_uint16* pDst)
{
	drwav_result result; // 2491
	size_t bytesRead; // 2492
	drwav_uint8 data; // 2493
	drwav_buffer_reader_ptr(const drwav_buffer_reader* pReader); // 2474
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 2474
	drwav_buffer_reader_read(drwav_buffer_reader* pReader,
				void* pDst,
				size_t bytesToRead,
				size_t* pBytesRead);  // 2500
} /* size: 135, variables: 3, inline expansions: 3 (94 bytes) */

// <020AC3AE> ../thirdparty/dr_libs/dr_wav.h:2489
// variables: 3
drwav_result drwav_buffer_reader_read_u16(drwav_buffer_reader* pReader, drwav_uint16* pDst)
{
	drwav_result result; // 2491
	size_t bytesRead; // 2492
	drwav_uint8 data; // 2493
} /* size: 0, variables: 3 */

// <020AD9EF> ../thirdparty/dr_libs/dr_wav.h:2510
// variables: 3
// function calls: 5
drwav_result drwav_buffer_reader_read_u32(drwav_buffer_reader* pReader, drwav_uint32* pDst)
{
	drwav_result result; // 2512
	size_t bytesRead; // 2513
	drwav_uint8 data; // 2514
	drwav_buffer_reader_ptr(const drwav_buffer_reader* pReader); // 2474
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 2474
	drwav_buffer_reader_read(drwav_buffer_reader* pReader,
				void* pDst,
				size_t bytesToRead,
				size_t* pBytesRead);  // 2521
	drwav_bytes_to_u32_le(const drwav_uint8* data); // 8508
	drwav_bytes_to_u32(const drwav_uint8* data); // 2526
} /* size: 133, variables: 3, inline expansions: 5 (94 bytes) */

// <020AC34E> ../thirdparty/dr_libs/dr_wav.h:2510
// variables: 3
drwav_result drwav_buffer_reader_read_u32(drwav_buffer_reader* pReader, drwav_uint32* pDst)
{
	drwav_result result; // 2512
	size_t bytesRead; // 2513
	drwav_uint8 data; // 2514
} /* size: 0, variables: 3 */

// <020AC2B3> ../thirdparty/dr_libs/dr_wav.h:2533
// variables: 6
drwav_uint64 drwav__read_bext_to_metadata_obj(drwav__metadata_parser* pParser, drwav_metadata* pMetadata, drwav_uint64 chunkSize)
{
	drwav_uint8 bextData; // 2535
	size_t bytesRead; // 2536
	{
		drwav_buffer_reader reader; // 2541
		drwav_uint32 timeReferenceLow; // 2542
		drwav_uint32 timeReferenceHigh; // 2543
		size_t extraBytes; // 2544
	}
} /* size: 0, variables: 2 */

// <020AC236> ../thirdparty/dr_libs/dr_wav.h:2595
// variables: 4
drwav_uint64 drwav__read_list_label_or_note_to_metadata_obj(drwav__metadata_parser* pParser, drwav_metadata* pMetadata, drwav_uint64 chunkSize, drwav_metadata_type type)
{
	drwav_uint8 cueIDBuffer; // 2597
	drwav_uint64 totalBytesRead; // 2598
	size_t bytesJustRead; // 2599
	{
		drwav_uint32 sizeIncludingNullTerminator; // 2604
	}
} /* size: 0, variables: 3 */

// <020AC1B6> ../thirdparty/dr_libs/dr_wav.h:2625
// variables: 4
drwav_uint64 drwav__read_list_labelled_cue_region_to_metadata_obj(drwav__metadata_parser* pParser, drwav_metadata* pMetadata, drwav_uint64 chunkSize)
{
	drwav_uint8 buffer; // 2627
	drwav_uint64 totalBytesRead; // 2628
	size_t bytesJustRead; // 2629
	{
		drwav_uint32 sizeIncludingNullTerminator; // 2634
	}
} /* size: 0, variables: 3 */

// <020ABFA7> ../thirdparty/dr_libs/dr_wav.h:2664
// variables: 4
// function calls: 4
drwav_uint64 drwav__metadata_process_info_text_chunk(drwav__metadata_parser* pParser, drwav_uint64 chunkSize, drwav_metadata_type type)
{
	drwav_uint64 bytesRead; // 2666
	drwav_uint32 stringSizeWithNullTerminator; // 2667
	{
		drwav_metadata* pMetadata; // 2673
		{
			drwav_uintptr modulo; // 2118
		}
		drwav__metadata_get_memory(drwav__metadata_parser* pParser,
						size_t size,
						size_t align);  // 2677
		drwav__metadata_parser_read(drwav__metadata_parser* pParser,
						void* pBufferOut,
						size_t bytesToRead,
						drwav_uint64* pCursor);  // 2166
		drwav__metadata_parser_read(drwav__metadata_parser* pParser,
						void* pBufferOut,
						size_t bytesToRead,
						drwav_uint64* pCursor);  // 2680
	}
	drwav__metadata_request_extra_memory_for_stage_2(drwav__metadata_parser* pParser,
							size_t bytes,
							size_t align);  // 2671
} /* size: 135, variables: 2, inline expansions: 1 (4 bytes) */

// <020ABCFC> ../thirdparty/dr_libs/dr_wav.h:2696
// variables: 3
// function calls: 7
drwav_uint64 drwav__metadata_process_unknown_chunk(drwav__metadata_parser* pParser, const drwav_uint8* pChunkId, drwav_uint64 chunkSize, drwav_metadata_location location)
{
	drwav_uint64 bytesRead; // 2698
	{
		drwav_metadata* pMetadata; // 2712
		drwav__metadata_parser_read(drwav__metadata_parser* pParser,
						void* pBufferOut,
						size_t bytesToRead,
						drwav_uint64* pCursor);  // 2166
		drwav__metadata_parser_read(drwav__metadata_parser* pParser,
						void* pBufferOut,
						size_t bytesToRead,
						drwav_uint64* pCursor);  // 2723
		{
			drwav_uintptr modulo; // 2118
		}
		drwav__metadata_get_memory(drwav__metadata_parser* pParser,
						size_t size,
						size_t align);  // 2720
	}
	drwav_fourcc_equal(const drwav_uint8* a,
				const char* b);  // 2704
	drwav_fourcc_equal(const drwav_uint8* a,
				const char* b);  // 2704
	drwav_fourcc_equal(const drwav_uint8* a,
				const char* b);  // 2704
	drwav__metadata_request_extra_memory_for_stage_2(drwav__metadata_parser* pParser,
							size_t bytes,
							size_t align);  // 2710
} /* size: 263, variables: 1, inline expansions: 4 (104 bytes) */

// <020ABCB5> ../thirdparty/dr_libs/dr_wav.h:2734
drwav_bool32 drwav__chunk_matches(drwav_metadata_type allowedMetadataTypes, const drwav_uint8* pChunkID, drwav_metadata_type type, const char* pID)
{
} /* size: 0 */

// <020B2A4C> ../thirdparty/dr_libs/dr_wav.h:2739
// variables: 45
// function calls: 193
drwav_uint64 drwav__metadata_process_chunk(drwav__metadata_parser* pParser, const drwav_chunk_header* pChunkHeader, drwav_metadata_type allowedMetadataTypes)
{
	const drwav_uint8* pChunkID; // 2741
	drwav_uint64 bytesRead; // 2742
	drwav_fourcc_equal(const drwav_uint8* a,
				const char* b);  // 2736
	drwav__chunk_matches(drwav_metadata_type allowedMetadataTypes,
				const drwav_uint8* pChunkID,
				drwav_metadata_type type,
				const char* pID);  // 2744
	{
		drwav_uint8 buffer; // 2747
		size_t bytesJustRead; // 2748
		drwav__on_read(drwav_read_proc onRead,
				void* pUserData,
				void* pBufferOut,
				size_t bytesToRead,
				drwav_uint64* pCursor);  // 2169
		drwav__metadata_parser_read(drwav__metadata_parser* pParser,
						void* pBufferOut,
						size_t bytesToRead,
						drwav_uint64* pCursor);  // 2755
		{
			drwav_uint32 loopCount; // 2757
			drwav_uint64 calculatedLoopCount; // 2758
			drwav_bytes_to_u32_le(const drwav_uint8* data); // 8508
			drwav_bytes_to_u32(const drwav_uint8* data); // 2757
			drwav__on_read(drwav_read_proc onRead,
					void* pUserData,
					void* pBufferOut,
					size_t bytesToRead,
					drwav_uint64* pCursor);  // 2169
			drwav__metadata_parser_read(drwav__metadata_parser* pParser,
							void* pBufferOut,
							size_t bytesToRead,
							drwav_uint64* pCursor);  // 2763
			{
				drwav_uint32 samplerSpecificDataSizeInBytes; // 2765
				drwav_bytes_to_u32_le(const drwav_uint8* data); // 8508
				drwav_bytes_to_u32(const drwav_uint8* data); // 2765
				drwav__metadata_request_extra_memory_for_stage_2(drwav__metadata_parser* pParser,
										size_t bytes,
										size_t align);  // 2768
				drwav__metadata_request_extra_memory_for_stage_2(drwav__metadata_parser* pParser,
										size_t bytes,
										size_t align);  // 2769
			}
		}
	}
	drwav__on_read(drwav_read_proc onRead,
			void* pUserData,
			void* pBufferOut,
			size_t bytesToRead,
			drwav_uint64* pCursor);  // 2169
	drwav__metadata_parser_read(drwav__metadata_parser* pParser,
					void* pBufferOut,
					size_t bytesToRead,
					drwav_uint64* pCursor);  // 2185
	{
		drwav_uint32 iSampleLoop; // 2191
		drwav_uint32 loopCount; // 2192
		drwav_uint32 calculatedLoopCount; // 2193
		drwav_bytes_to_u32_le(const drwav_uint8* data); // 8508
		drwav_bytes_to_u32(const drwav_uint8* data); // 2203
		drwav_bytes_to_u32_le(const drwav_uint8* data); // 8508
		drwav_bytes_to_u32(const drwav_uint8* data); // 2210
		drwav_bytes_to_u32_le(const drwav_uint8* data); // 8508
		drwav_bytes_to_u32(const drwav_uint8* data); // 2212
		drwav_bytes_to_u32_le(const drwav_uint8* data); // 8508
		drwav_bytes_to_u32(const drwav_uint8* data); // 2214
		drwav_bytes_to_u32_le(const drwav_uint8* data); // 8508
		drwav_bytes_to_u32(const drwav_uint8* data); // 2216
		drwav_bytes_to_u32_le(const drwav_uint8* data); // 8508
		drwav_bytes_to_u32(const drwav_uint8* data); // 2218
		{
			drwav_uintptr modulo; // 2118
		}
		drwav__metadata_get_memory(drwav__metadata_parser* pParser,
						size_t size,
						size_t align);  // 2225
		{
			drwav_uint8 smplLoopData; // 2228
			drwav_bytes_to_u32_le(const drwav_uint8* data); // 8508
			drwav_bytes_to_u32(const drwav_uint8* data); // 2232
			drwav_bytes_to_u32_le(const drwav_uint8* data); // 8508
			drwav_bytes_to_u32(const drwav_uint8* data); // 2233
			drwav_bytes_to_u32_le(const drwav_uint8* data); // 8508
			drwav_bytes_to_u32(const drwav_uint8* data); // 2234
			drwav_bytes_to_u32_le(const drwav_uint8* data); // 8508
			drwav_bytes_to_u32(const drwav_uint8* data); // 2235
			drwav_bytes_to_u32_le(const drwav_uint8* data); // 8508
			drwav_bytes_to_u32(const drwav_uint8* data); // 2236
			drwav_bytes_to_u32_le(const drwav_uint8* data); // 8508
			drwav_bytes_to_u32(const drwav_uint8* data); // 2237
			drwav__on_read(drwav_read_proc onRead,
					void* pUserData,
					void* pBufferOut,
					size_t bytesToRead,
					drwav_uint64* pCursor);  // 2169
			drwav__metadata_parser_read(drwav__metadata_parser* pParser,
							void* pBufferOut,
							size_t bytesToRead,
							drwav_uint64* pCursor);  // 2229
		}
		{
			drwav_uintptr modulo; // 2118
		}
		drwav__metadata_get_memory(drwav__metadata_parser* pParser,
						size_t size,
						size_t align);  // 2244
		drwav__on_read(drwav_read_proc onRead,
				void* pUserData,
				void* pBufferOut,
				size_t bytesToRead,
				drwav_uint64* pCursor);  // 2169
		drwav__metadata_parser_read(drwav__metadata_parser* pParser,
						void* pBufferOut,
						size_t bytesToRead,
						drwav_uint64* pCursor);  // 2247
	}
	drwav__read_smpl_to_metadata_obj(drwav__metadata_parser* pParser,
					const drwav_chunk_header* pChunkHeader,
					drwav_metadata* pMetadata);  // 2776
	drwav_fourcc_equal(const drwav_uint8* a,
				const char* b);  // 2736
	drwav__chunk_matches(drwav_metadata_type allowedMetadataTypes,
				const drwav_uint8* pChunkID,
				drwav_metadata_type type,
				const char* pID);  // 2786
	drwav_fourcc_equal(const drwav_uint8* a,
				const char* b);  // 2736
	drwav__chunk_matches(drwav_metadata_type allowedMetadataTypes,
				const drwav_uint8* pChunkID,
				drwav_metadata_type type,
				const char* pID);  // 2801
	drwav_fourcc_equal(const drwav_uint8* a,
				const char* b);  // 2879
	drwav_fourcc_equal(const drwav_uint8* a,
				const char* b);  // 2879
	{
		drwav_metadata_location listType; // 2880
		{
			drwav_uint8 subchunkId; // 2882
			drwav_uint8 subchunkSizeBuffer; // 2883
			drwav_uint64 subchunkDataSize; // 2884
			drwav_uint64 subchunkBytesRead; // 2885
			drwav_uint64 bytesJustRead; // 2886
			drwav_fourcc_equal(const drwav_uint8* a,
						const char* b);  // 2905
			drwav__on_read(drwav_read_proc onRead,
					void* pUserData,
					void* pBufferOut,
					size_t bytesToRead,
					drwav_uint64* pCursor);  // 2169
			drwav__metadata_parser_read(drwav__metadata_parser* pParser,
							void* pBufferOut,
							size_t bytesToRead,
							drwav_uint64* pCursor);  // 2910
			drwav_bytes_to_u32_le(const drwav_uint8* data); // 8508
			drwav_bytes_to_u32(const drwav_uint8* data); // 2914
			drwav_fourcc_equal(const drwav_uint8* a,
						const char* b);  // 2736
			drwav__chunk_matches(drwav_metadata_type allowedMetadataTypes,
						const drwav_uint8* pChunkID,
						drwav_metadata_type type,
						const char* pID);  // 2916
			drwav_fourcc_equal(const drwav_uint8* a,
						const char* b);  // 2736
			drwav__chunk_matches(drwav_metadata_type allowedMetadataTypes,
						const drwav_uint8* pChunkID,
						drwav_metadata_type type,
						const char* pID);  // 2916
			drwav_fourcc_equal(const drwav_uint8* a,
						const char* b);  // 2736
			drwav__chunk_matches(drwav_metadata_type allowedMetadataTypes,
						const drwav_uint8* pChunkID,
						drwav_metadata_type type,
						const char* pID);  // 2933
			drwav_fourcc_equal(const drwav_uint8* a,
						const char* b);  // 2736
			drwav__chunk_matches(drwav_metadata_type allowedMetadataTypes,
						const drwav_uint8* pChunkID,
						drwav_metadata_type type,
						const char* pID);  // 2950
			drwav_fourcc_equal(const drwav_uint8* a,
						const char* b);  // 2736
			drwav__chunk_matches(drwav_metadata_type allowedMetadataTypes,
						const drwav_uint8* pChunkID,
						drwav_metadata_type type,
						const char* pID);  // 2952
			drwav_fourcc_equal(const drwav_uint8* a,
						const char* b);  // 2736
			drwav__chunk_matches(drwav_metadata_type allowedMetadataTypes,
						const drwav_uint8* pChunkID,
						drwav_metadata_type type,
						const char* pID);  // 2958
			drwav_fourcc_equal(const drwav_uint8* a,
						const char* b);  // 2736
			drwav__chunk_matches(drwav_metadata_type allowedMetadataTypes,
						const drwav_uint8* pChunkID,
						drwav_metadata_type type,
						const char* pID);  // 2960
			drwav_fourcc_equal(const drwav_uint8* a,
						const char* b);  // 2736
			drwav__chunk_matches(drwav_metadata_type allowedMetadataTypes,
						const drwav_uint8* pChunkID,
						drwav_metadata_type type,
						const char* pID);  // 2970
			{
				drwav_uint64 stringSizeWithNullTerminator; // 2935
				drwav__metadata_request_extra_memory_for_stage_2(drwav__metadata_parser* pParser,
										size_t bytes,
										size_t align);  // 2938
				drwav__on_read(drwav_read_proc onRead,
						void* pUserData,
						void* pBufferOut,
						size_t bytesToRead,
						drwav_uint64* pCursor);  // 2169
				drwav__metadata_parser_read(drwav__metadata_parser* pParser,
								void* pBufferOut,
								size_t bytesToRead,
								drwav_uint64* pCursor);  // 2629
				{
					drwav_uint32 sizeIncludingNullTerminator; // 2634
					drwav_bytes_to_u32_le(const drwav_uint8* data); // 8508
					drwav_bytes_to_u32(const drwav_uint8* data); // 2637
					{
						drwav_uintptr modulo; // 2118
					}
					drwav__metadata_get_memory(drwav__metadata_parser* pParser,
									size_t size,
									size_t align);  // 2651
					drwav__on_read(drwav_read_proc onRead,
							void* pUserData,
							void* pBufferOut,
							size_t bytesToRead,
							drwav_uint64* pCursor);  // 2169
					drwav__metadata_parser_read(drwav__metadata_parser* pParser,
									void* pBufferOut,
									size_t bytesToRead,
									drwav_uint64* pCursor);  // 2654
				}
				drwav__read_list_labelled_cue_region_to_metadata_obj(drwav__metadata_parser* pParser,
											drwav_metadata* pMetadata,
											drwav_uint64 chunkSize);  // 2940
			}
			drwav_fourcc_equal(const drwav_uint8* a,
						const char* b);  // 2736
			drwav__chunk_matches(drwav_metadata_type allowedMetadataTypes,
						const drwav_uint8* pChunkID,
						drwav_metadata_type type,
						const char* pID);  // 2962
			drwav_fourcc_equal(const drwav_uint8* a,
						const char* b);  // 2736
			drwav__chunk_matches(drwav_metadata_type allowedMetadataTypes,
						const drwav_uint8* pChunkID,
						drwav_metadata_type type,
						const char* pID);  // 2964
			drwav_fourcc_equal(const drwav_uint8* a,
						const char* b);  // 2736
			drwav__chunk_matches(drwav_metadata_type allowedMetadataTypes,
						const drwav_uint8* pChunkID,
						drwav_metadata_type type,
						const char* pID);  // 2966
			drwav_fourcc_equal(const drwav_uint8* a,
						const char* b);  // 2736
			drwav__chunk_matches(drwav_metadata_type allowedMetadataTypes,
						const drwav_uint8* pChunkID,
						drwav_metadata_type type,
						const char* pID);  // 2968
			drwav_fourcc_equal(const drwav_uint8* a,
						const char* b);  // 2736
			drwav__chunk_matches(drwav_metadata_type allowedMetadataTypes,
						const drwav_uint8* pChunkID,
						drwav_metadata_type type,
						const char* pID);  // 2972
			drwav_fourcc_equal(const drwav_uint8* a,
						const char* b);  // 2736
			drwav__chunk_matches(drwav_metadata_type allowedMetadataTypes,
						const drwav_uint8* pChunkID,
						drwav_metadata_type type,
						const char* pID);  // 2974
			drwav_fourcc_equal(const drwav_uint8* a,
						const char* b);  // 2736
			drwav__chunk_matches(drwav_metadata_type allowedMetadataTypes,
						const drwav_uint8* pChunkID,
						drwav_metadata_type type,
						const char* pID);  // 2954
			drwav_fourcc_equal(const drwav_uint8* a,
						const char* b);  // 2736
			drwav__chunk_matches(drwav_metadata_type allowedMetadataTypes,
						const drwav_uint8* pChunkID,
						drwav_metadata_type type,
						const char* pID);  // 2976
			drwav_fourcc_equal(const drwav_uint8* a,
						const char* b);  // 2736
			drwav__chunk_matches(drwav_metadata_type allowedMetadataTypes,
						const drwav_uint8* pChunkID,
						drwav_metadata_type type,
						const char* pID);  // 2956
			{
				drwav_uint64 stringSizeWithNullTerm; // 2918
				drwav__on_read(drwav_read_proc onRead,
						void* pUserData,
						void* pBufferOut,
						size_t bytesToRead,
						drwav_uint64* pCursor);  // 2169
				drwav__metadata_parser_read(drwav__metadata_parser* pParser,
								void* pBufferOut,
								size_t bytesToRead,
								drwav_uint64* pCursor);  // 2599
				{
					drwav_uint32 sizeIncludingNullTerminator; // 2604
					drwav_bytes_to_u32_le(const drwav_uint8* data); // 8508
					drwav_bytes_to_u32(const drwav_uint8* data); // 2607
					{
						drwav_uintptr modulo; // 2118
					}
					drwav__metadata_get_memory(drwav__metadata_parser* pParser,
									size_t size,
									size_t align);  // 2612
					drwav__on_read(drwav_read_proc onRead,
							void* pUserData,
							void* pBufferOut,
							size_t bytesToRead,
							drwav_uint64* pCursor);  // 2169
					drwav__metadata_parser_read(drwav__metadata_parser* pParser,
									void* pBufferOut,
									size_t bytesToRead,
									drwav_uint64* pCursor);  // 2615
				}
				drwav__read_list_label_or_note_to_metadata_obj(drwav__metadata_parser* pParser,
										drwav_metadata* pMetadata,
										drwav_uint64 chunkSize,
										drwav_metadata_type type);  // 2923
				drwav__metadata_request_extra_memory_for_stage_2(drwav__metadata_parser* pParser,
										size_t bytes,
										size_t align);  // 2921
				drwav_fourcc_equal(const drwav_uint8* a,
							const char* b);  // 2923
			}
			{
				drwav_uint64 bytesToSeek; // 2986
			}
			drwav__on_read(drwav_read_proc onRead,
					void* pUserData,
					void* pBufferOut,
					size_t bytesToRead,
					drwav_uint64* pCursor);  // 2169
			drwav__metadata_parser_read(drwav__metadata_parser* pParser,
							void* pBufferOut,
							size_t bytesToRead,
							drwav_uint64* pCursor);  // 2886
			drwav_fourcc_equal(const drwav_uint8* a,
						const char* b);  // 2902
		}
	}
	{
		size_t cueCount; // 2819
		drwav__metadata_request_extra_memory_for_stage_2(drwav__metadata_parser* pParser,
								size_t bytes,
								size_t align);  // 2823
	}
	drwav__on_read(drwav_read_proc onRead,
			void* pUserData,
			void* pBufferOut,
			size_t bytesToRead,
			drwav_uint64* pCursor);  // 2169
	drwav__metadata_parser_read(drwav__metadata_parser* pParser,
					void* pBufferOut,
					size_t bytesToRead,
					drwav_uint64* pCursor);  // 2274
	{
		drwav_uintptr modulo; // 2118
	}
	drwav__metadata_get_memory(drwav__metadata_parser* pParser,
					size_t size,
					size_t align);  // 2287
	{
		drwav_uint32 iCuePoint; // 2291
		{
			drwav_uint8 cuePointData; // 2294
			drwav_bytes_to_u32_le(const drwav_uint8* data); // 8508
			drwav_bytes_to_u32(const drwav_uint8* data); // 2298
			drwav_bytes_to_u32_le(const drwav_uint8* data); // 8508
			drwav_bytes_to_u32(const drwav_uint8* data); // 2299
			drwav_bytes_to_u32_le(const drwav_uint8* data); // 8508
			drwav_bytes_to_u32(const drwav_uint8* data); // 2304
			drwav_bytes_to_u32_le(const drwav_uint8* data); // 8508
			drwav_bytes_to_u32(const drwav_uint8* data); // 2305
			drwav_bytes_to_u32_le(const drwav_uint8* data); // 8508
			drwav_bytes_to_u32(const drwav_uint8* data); // 2306
			drwav__on_read(drwav_read_proc onRead,
					void* pUserData,
					void* pBufferOut,
					size_t bytesToRead,
					drwav_uint64* pCursor);  // 2169
			drwav__metadata_parser_read(drwav__metadata_parser* pParser,
							void* pBufferOut,
							size_t bytesToRead,
							drwav_uint64* pCursor);  // 2295
		}
	}
	drwav_bytes_to_u32_le(const drwav_uint8* data); // 8508
	drwav_bytes_to_u32(const drwav_uint8* data); // 2280
	drwav__read_cue_to_metadata_obj(drwav__metadata_parser* pParser,
					const drwav_chunk_header* pChunkHeader,
					drwav_metadata* pMetadata);  // 2825
	{
		char buffer; // 2839
		size_t allocSizeNeeded; // 2840
		size_t bytesJustRead; // 2841
		drwav__on_read(drwav_read_proc onRead,
				void* pUserData,
				void* pBufferOut,
				size_t bytesToRead,
				drwav_uint64* pCursor);  // 2169
		drwav__metadata_parser_read(drwav__metadata_parser* pParser,
						void* pBufferOut,
						size_t bytesToRead,
						drwav_uint64* pCursor);  // 2844
		drwav__strlen(const char* str); // 2848
		drwav__on_read(drwav_read_proc onRead,
				void* pUserData,
				void* pBufferOut,
				size_t bytesToRead,
				drwav_uint64* pCursor);  // 2169
		drwav__metadata_parser_read(drwav__metadata_parser* pParser,
						void* pBufferOut,
						size_t bytesToRead,
						drwav_uint64* pCursor);  // 2851
		drwav__strlen(const char* str); // 2855
		drwav__on_read(drwav_read_proc onRead,
				void* pUserData,
				void* pBufferOut,
				size_t bytesToRead,
				drwav_uint64* pCursor);  // 2169
		drwav__metadata_parser_read(drwav__metadata_parser* pParser,
						void* pBufferOut,
						size_t bytesToRead,
						drwav_uint64* pCursor);  // 2858
		drwav__strlen(const char* str); // 2862
		drwav__metadata_request_extra_memory_for_stage_2(drwav__metadata_parser* pParser,
								size_t bytes,
								size_t align);  // 2865
	}
	drwav__metadata_parser_read(drwav__metadata_parser* pParser,
					void* pBufferOut,
					size_t bytesToRead,
					drwav_uint64* pCursor);  // 2166
	drwav__metadata_parser_read(drwav__metadata_parser* pParser,
					void* pBufferOut,
					size_t bytesToRead,
					drwav_uint64* pCursor);  // 2536
	{
		drwav_buffer_reader reader; // 2541
		drwav_uint32 timeReferenceLow; // 2542
		drwav_uint32 timeReferenceHigh; // 2543
		size_t extraBytes; // 2544
		drwav__strlen_clamped(const char* str,
					size_t maxToRead);  // 2397
		{
			char* result; // 2400
			{
				drwav_uintptr modulo; // 2118
			}
			drwav__metadata_get_memory(drwav__metadata_parser* pParser,
							size_t size,
							size_t align);  // 2400
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 2403
		}
		drwav__metadata_copy_string(drwav__metadata_parser* pParser,
						const char* str,
						size_t maxToRead);  // 2549
		drwav_buffer_reader_init(const void* pBuffer,
					size_t sizeInBytes,
					drwav_buffer_reader* pReader);  // 2548
		drwav_buffer_reader_ptr(const drwav_buffer_reader* pReader); // 2552
		drwav__strlen_clamped(const char* str,
					size_t maxToRead);  // 2397
		{
			char* result; // 2400
			{
				drwav_uintptr modulo; // 2118
			}
			drwav__metadata_get_memory(drwav__metadata_parser* pParser,
							size_t size,
							size_t align);  // 2400
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 2403
		}
		drwav__metadata_copy_string(drwav__metadata_parser* pParser,
						const char* str,
						size_t maxToRead);  // 2552
		drwav_buffer_reader_ptr(const drwav_buffer_reader* pReader); // 2555
		drwav__strlen_clamped(const char* str,
					size_t maxToRead);  // 2397
		{
			char* result; // 2400
			{
				drwav_uintptr modulo; // 2118
			}
			drwav__metadata_get_memory(drwav__metadata_parser* pParser,
							size_t size,
							size_t align);  // 2400
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 2403
		}
		drwav__metadata_copy_string(drwav__metadata_parser* pParser,
						const char* str,
						size_t maxToRead);  // 2555
		drwav_buffer_reader_ptr(const drwav_buffer_reader* pReader); // 2474
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 2474
		drwav_buffer_reader_read(drwav_buffer_reader* pReader,
					void* pDst,
					size_t bytesToRead,
					size_t* pBytesRead);  // 2558
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 2474
		drwav_buffer_reader_read(drwav_buffer_reader* pReader,
					void* pDst,
					size_t bytesToRead,
					size_t* pBytesRead);  // 2559
		{
			drwav_uintptr modulo; // 2118
		}
		drwav__metadata_get_memory(drwav__metadata_parser* pParser,
						size_t size,
						size_t align);  // 2567
		drwav_buffer_reader_seek(drwav_buffer_reader* pReader,
					size_t bytesToSeek);  // 2471
		drwav_buffer_reader_ptr(const drwav_buffer_reader* pReader); // 2474
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 2474
		drwav_buffer_reader_read(drwav_buffer_reader* pReader,
					void* pDst,
					size_t bytesToRead,
					size_t* pBytesRead);  // 2568
		{
			drwav_uintptr modulo; // 2118
		}
		drwav__metadata_get_memory(drwav__metadata_parser* pParser,
						size_t size,
						size_t align);  // 2580
		drwav__metadata_parser_read(drwav__metadata_parser* pParser,
						void* pBufferOut,
						size_t bytesToRead,
						drwav_uint64* pCursor);  // 2166
		drwav__metadata_parser_read(drwav__metadata_parser* pParser,
						void* pBufferOut,
						size_t bytesToRead,
						drwav_uint64* pCursor);  // 2583
		drwav__strlen(const char* str); // 2584
	}
	drwav__read_bext_to_metadata_obj(drwav__metadata_parser* pParser,
					drwav_metadata* pMetadata,
					drwav_uint64 chunkSize);  // 2869
	drwav__metadata_parser_read(drwav__metadata_parser* pParser,
					void* pBufferOut,
					size_t bytesToRead,
					drwav_uint64* pCursor);  // 2166
	drwav__metadata_parser_read(drwav__metadata_parser* pParser,
					void* pBufferOut,
					size_t bytesToRead,
					drwav_uint64* pCursor);  // 2354
	drwav_bytes_to_u32_le(const drwav_uint8* data); // 8508
	drwav_bytes_to_u32(const drwav_uint8* data); // 2360
	drwav_bytes_to_u32_le(const drwav_uint8* data); // 8508
	drwav_bytes_to_u32(const drwav_uint8* data); // 8518
	drwav_bytes_to_f32(const drwav_uint8* data); // 2363
	drwav_bytes_to_u32_le(const drwav_uint8* data); // 8508
	drwav_bytes_to_u32(const drwav_uint8* data); // 2364
	drwav_bytes_to_u32_le(const drwav_uint8* data); // 8508
	drwav_bytes_to_u32(const drwav_uint8* data); // 8518
	drwav_bytes_to_f32(const drwav_uint8* data); // 2367
	drwav__read_acid_to_metadata_obj(drwav__metadata_parser* pParser,
					drwav_metadata* pMetadata);  // 2806
	drwav_fourcc_equal(const drwav_uint8* a,
				const char* b);  // 2736
	drwav__chunk_matches(drwav_metadata_type allowedMetadataTypes,
				const drwav_uint8* pChunkID,
				drwav_metadata_type type,
				const char* pID);  // 2816
	drwav_fourcc_equal(const drwav_uint8* a,
				const char* b);  // 2736
	drwav__chunk_matches(drwav_metadata_type allowedMetadataTypes,
				const drwav_uint8* pChunkID,
				drwav_metadata_type type,
				const char* pID);  // 2835
	drwav__metadata_parser_read(drwav__metadata_parser* pParser,
					void* pBufferOut,
					size_t bytesToRead,
					drwav_uint64* pCursor);  // 2166
	drwav__metadata_parser_read(drwav__metadata_parser* pParser,
					void* pBufferOut,
					size_t bytesToRead,
					drwav_uint64* pCursor);  // 2327
	drwav__read_inst_to_metadata_obj(drwav__metadata_parser* pParser,
					drwav_metadata* pMetadata);  // 2791
} /* size: 5279, variables: 2, inline expansions: 40 (2890 bytes) */

// <020ABB38> ../thirdparty/dr_libs/dr_wav.h:2739
// variables: 20
drwav_uint64 drwav__metadata_process_chunk(drwav__metadata_parser* pParser, const drwav_chunk_header* pChunkHeader, drwav_metadata_type allowedMetadataTypes)
{
	const drwav_uint8* pChunkID; // 2741
	drwav_uint64 bytesRead; // 2742
	{
		drwav_uint8 buffer; // 2747
		size_t bytesJustRead; // 2748
		{
			drwav_uint32 loopCount; // 2757
			drwav_uint64 calculatedLoopCount; // 2758
			{
				drwav_uint32 samplerSpecificDataSizeInBytes; // 2765
			}
		}
	}
	{
		size_t cueCount; // 2819
	}
	{
		char buffer; // 2839
		size_t allocSizeNeeded; // 2840
		size_t bytesJustRead; // 2841
	}
	{
		drwav_metadata_location listType; // 2880
		{
			drwav_uint8 subchunkId; // 2882
			drwav_uint8 subchunkSizeBuffer; // 2883
			drwav_uint64 subchunkDataSize; // 2884
			drwav_uint64 subchunkBytesRead; // 2885
			drwav_uint64 bytesJustRead; // 2886
			{
				drwav_uint64 stringSizeWithNullTerm; // 2918
			}
			{
				drwav_uint64 stringSizeWithNullTerminator; // 2935
			}
			{
				drwav_uint64 bytesToSeek; // 2986
			}
		}
	}
} /* size: 0, variables: 2 */

// <020ABB0B> ../thirdparty/dr_libs/dr_wav.h:3009
// variable: 1
drwav_uint32 drwav_get_bytes_per_pcm_frame(drwav* pWav)
{
	drwav_uint32 bytesPerFrame; // 3011
} /* size: 0, variables: 1 */

// <020ABAD5> ../thirdparty/dr_libs/dr_wav.h:3034
drwav_uint16 drwav_fmt_get_format(const drwav_fmt* pFMT)
{
} /* size: 0 */

// <020ABA74> ../thirdparty/dr_libs/dr_wav.h:3047
drwav_bool32 drwav_preinit(drwav* pWav, drwav_read_proc onRead, drwav_seek_proc onSeek, drwav_tell_proc onTell, void* pReadSeekTellUserData, const drwav_allocation_callbacks* pAllocationCallbacks)
{
} /* size: 0 */

// <020A9DDF> ../thirdparty/dr_libs/dr_wav.h:3067
// variables: 55
// function calls: 66
drwav_bool32 drwav_init__internal(drwav* pWav, drwav_chunk_proc onChunk, void* pChunkUserData, drwav_uint32 flags)
{
	drwav_result result; // 3070
	drwav_uint64 cursor; // 3071
	drwav_bool32 sequential; // 3072
	drwav_uint8 riff; // 3073
	drwav_fmt fmt; // 3074
	short unsigned int translatedFormatTag; // 3075
	drwav_uint64 dataChunkSize; // 3076
	drwav_uint64 sampleCountFromFactChunk; // 3077
	drwav_uint64 metadataStartPos; // 3078
	drwav__metadata_parser metadataParser; // 3079
	drwav_bool8 isProcessingMetadata; // 3080
	drwav_bool8 foundChunk_fmt; // 3081
	drwav_bool8 foundChunk_data; // 3082
	drwav_bool8 isAIFCFormType; // 3083
	drwav_uint64 aiffFrameCount; // 3084
	{
		int i; // 3104
		drwav_uint8 riff2; // 3105
		drwav__on_read(drwav_read_proc onRead,
				void* pUserData,
				void* pBufferOut,
				size_t bytesToRead,
				drwav_uint64* pCursor);  // 3110
	}
	{
		drwav_uint8 chunkSizeBytes; // 3129
		drwav_uint8 wave; // 3130
		drwav__on_read(drwav_read_proc onRead,
				void* pUserData,
				void* pBufferOut,
				size_t bytesToRead,
				drwav_uint64* pCursor);  // 3132
		drwav_bytes_to_u32_le(const drwav_uint8* data); // 3147
		drwav__on_read(drwav_read_proc onRead,
				void* pUserData,
				void* pBufferOut,
				size_t bytesToRead,
				drwav_uint64* pCursor);  // 3154
		drwav_fourcc_equal(const drwav_uint8* a,
					const char* b);  // 3158
	}
	{
		drwav_uint8 chunkSizeBytes; // 3162
		drwav_uint8 wave; // 3163
		drwav__on_read(drwav_read_proc onRead,
				void* pUserData,
				void* pBufferOut,
				size_t bytesToRead,
				drwav_uint64* pCursor);  // 3165
		drwav_bytes_to_u64(const drwav_uint8* data); // 3169
		drwav__on_read(drwav_read_proc onRead,
				void* pUserData,
				void* pBufferOut,
				size_t bytesToRead,
				drwav_uint64* pCursor);  // 3173
		drwav_guid_equal(const drwav_uint8* a,
				const drwav_uint8* b);  // 3177
	}
	{
		drwav_uint8 chunkSizeBytes; // 3181
		drwav_uint8 aiff; // 3182
		drwav__on_read(drwav_read_proc onRead,
				void* pUserData,
				void* pBufferOut,
				size_t bytesToRead,
				drwav_uint64* pCursor);  // 3184
		drwav__on_read(drwav_read_proc onRead,
				void* pUserData,
				void* pBufferOut,
				size_t bytesToRead,
				drwav_uint64* pCursor);  // 3192
		drwav_fourcc_equal(const drwav_uint8* a,
					const char* b);  // 3196
		drwav_fourcc_equal(const drwav_uint8* a,
					const char* b);  // 3198
	}
	{
		drwav_uint8 sizeBytes; // 3210
		drwav_uint64 bytesRemainingInChunk; // 3211
		drwav_chunk_header header; // 3212
		drwav_fourcc_equal(const drwav_uint8* a,
					const char* b);  // 3218
		drwav__seek_forward(drwav_seek_proc onSeek,
					drwav_uint64 offset,
					void* pUserData);  // 3225
		drwav__on_read(drwav_read_proc onRead,
				void* pUserData,
				void* pBufferOut,
				size_t bytesToRead,
				drwav_uint64* pCursor);  // 3233
		drwav__on_read(drwav_read_proc onRead,
				void* pUserData,
				void* pBufferOut,
				size_t bytesToRead,
				drwav_uint64* pCursor);  // 3241
	}
	{
		drwav_chunk_header header; // 3287
		drwav_uint64 chunkSize; // 3288
		{
			drwav_uint64 callbackBytesRead; // 3303
		}
		{
			drwav_uint8 fmtData; // 3322
			{
				drwav_uint8 fmt_cbSize; // 3344
				int bytesReadSoFar; // 3345
				{
					drwav_uint8 fmtext; // 3364
					drwav_is_container_be(drwav_container container); // 1764
					drwav_bytes_to_u16_ex(const drwav_uint8* data,
								drwav_container container);  // 3370
					drwav_bytes_to_guid(const drwav_uint8* data,
								drwav_uint8* guid);  // 3372
					drwav_bytes_to_u32_ex(const drwav_uint8* data,
								drwav_container container);  // 3371
				}
				drwav_is_container_be(drwav_container container); // 1764
				drwav_bytes_to_u16_ex(const drwav_uint8* data,
							drwav_container container);  // 3354
			}
			drwav_is_container_be(drwav_container container); // 1764
			drwav_bytes_to_u16_ex(const drwav_uint8* data,
						drwav_container container);  // 3331
			memset(void* __dest,
				int __ch,
				size_t __len);  // 3341
			drwav_bytes_to_u16_ex(const drwav_uint8* data,
						drwav_container container);  // 3336
		}
		{
			drwav_uint8 sampleCount; // 3430
			drwav__on_read(drwav_read_proc onRead,
					void* pUserData,
					void* pBufferOut,
					size_t bytesToRead,
					drwav_uint64* pCursor);  // 3431
			drwav_is_container_be(drwav_container container); // 1784
			drwav_bytes_to_u32_ex(const drwav_uint8* data,
						drwav_container container);  // 3442
		}
		{
			drwav_uint8 commData; // 3469
			drwav_uint32 commDataBytesToRead; // 3470
			drwav_uint16 channels; // 3471
			drwav_uint32 frameCount; // 3472
			drwav_uint16 sampleSizeInBits; // 3473
			drwav_int64 sampleRate; // 3474
			drwav_uint16 compressionFormat; // 3475
			{
				const drwav_uint8* type; // 3506
				drwav_fourcc_equal(const drwav_uint8* a,
							const char* b);  // 3508
			}
			drwav__on_read(drwav_read_proc onRead,
					void* pUserData,
					void* pBufferOut,
					size_t bytesToRead,
					drwav_uint64* pCursor);  // 3491
			drwav_is_container_be(drwav_container container); // 1764
			drwav_bytes_to_u16_ex(const drwav_uint8* data,
						drwav_container container);  // 3496
			drwav_aiff_extented_to_s64(const drwav_uint8* data); // 3499
			drwav_bytes_to_u32_ex(const drwav_uint8* data,
						drwav_container container);  // 3497
			drwav_bytes_to_u16_ex(const drwav_uint8* data,
						drwav_container container);  // 3498
		}
		{
			drwav_uint8 offsetAndBlockSizeData; // 3590
			drwav_uint32 offset; // 3591
			drwav__on_read(drwav_read_proc onRead,
					void* pUserData,
					void* pBufferOut,
					size_t bytesToRead,
					drwav_uint64* pCursor);  // 3595
			drwav_is_container_be(drwav_container container); // 1784
			drwav_bytes_to_u32_ex(const drwav_uint8* data,
						drwav_container container);  // 3600
		}
		drwav_fourcc_equal(const drwav_uint8* a,
					const char* b);  // 3320
		drwav_guid_equal(const drwav_uint8* a,
				const drwav_uint8* b);  // 3321
		drwav_fourcc_equal(const drwav_uint8* a,
					const char* b);  // 3468
		drwav_fourcc_equal(const drwav_uint8* a,
					const char* b);  // 3589
		drwav_fourcc_equal(const drwav_uint8* a,
					const char* b);  // 3402
		drwav_fourcc_equal(const drwav_uint8* a,
					const char* b);  // 3427
		drwav__on_read(drwav_read_proc onRead,
				void* pUserData,
				void* pBufferOut,
				size_t bytesToRead,
				drwav_uint64* pCursor);  // 3447
		drwav_guid_equal(const drwav_uint8* a,
				const drwav_uint8* b);  // 3403
		drwav_guid_equal(const drwav_uint8* a,
				const drwav_uint8* b);  // 3428
	}
	{
		drwav_chunk_header header; // 3716
		drwav_uint64 metadataBytesRead; // 3717
	}
	{
		drwav_int64 fileSize; // 3745
	}
	{
		drwav_uint8 temp; // 3769
		size_t bytesRead; // 3770
	}
	{
		drwav_uint32 bytesPerFrame; // 3803
		drwav_get_bytes_per_pcm_frame(drwav* pWav); // 3803
	}
	{
		drwav_uint32 bytesPerFrame; // 3817
		{
			drwav_uint64 totalBlockHeaderSizeInBytes; // 3826
			drwav_uint64 blockCount; // 3827
		}
		{
			drwav_uint64 totalBlockHeaderSizeInBytes; // 3839
			drwav_uint64 blockCount; // 3840
		}
		drwav_get_bytes_per_pcm_frame(drwav* pWav); // 3817
	}
	drwav__on_read(drwav_read_proc onRead,
			void* pUserData,
			void* pBufferOut,
			size_t bytesToRead,
			drwav_uint64* pCursor);  // 3091
	memset(void* __dest,
		int __ch,
		size_t __len);  // 3088
	drwav_fourcc_equal(const drwav_uint8* a,
				const char* b);  // 3099
	drwav_fourcc_equal(const drwav_uint8* a,
				const char* b);  // 3101
	drwav_fourcc_equal(const drwav_uint8* a,
				const char* b);  // 3103
	drwav_fourcc_equal(const drwav_uint8* a,
				const char* b);  // 3121
	drwav_fourcc_equal(const drwav_uint8* a,
				const char* b);  // 3119
	memset(void* __dest,
		int __ch,
		size_t __len);  // 3272
	drwav__metadata_memory_capacity(drwav__metadata_parser* pParser); // 2147
	drwav__metadata_get_memory(drwav__metadata_parser* pParser,
					size_t size,
					size_t align);  // 2159
	drwav__metadata_alloc(drwav__metadata_parser* pParser,
				drwav_allocation_callbacks* pAllocationCallbacks);  // 3708
	drwav__is_compressed_format_tag(drwav_uint16 formatTag); // 3802
	drwav_get_bytes_per_pcm_frame(drwav* pWav); // 3865
	drwav_is_container_be(drwav_container container); // 1764
	drwav_bytes_to_u16_ex(const drwav_uint8* data,
				drwav_container container);  // 3684
} /* size: 6650, variables: 15, inline expansions: 15 (615 bytes) */

// <020A9D7D> ../thirdparty/dr_libs/dr_wav.h:3892
drwav_bool32 drwav_init(drwav* pWav, drwav_read_proc onRead, drwav_seek_proc onSeek, drwav_tell_proc onTell, void* pUserData, const drwav_allocation_callbacks* pAllocationCallbacks)
{
} /* size: 0 */

// <020A9CF4> ../thirdparty/dr_libs/dr_wav.h:3897
drwav_bool32 drwav_init_ex(drwav* pWav, drwav_read_proc onRead, drwav_seek_proc onSeek, drwav_tell_proc onTell, drwav_chunk_proc onChunk, void* pReadSeekTellUserData, void* pChunkUserData, drwav_uint32 flags, const drwav_allocation_callbacks* pAllocationCallbacks)
{
} /* size: 0 */

// <020A9B3E> ../thirdparty/dr_libs/dr_wav.h:3906
// function calls: 3
drwav_bool32 drwav_init_with_metadata(drwav* pWav, drwav_read_proc onRead, drwav_seek_proc onSeek, drwav_tell_proc onTell, void* pUserData, drwav_uint32 flags, const drwav_allocation_callbacks* pAllocationCallbacks)
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 3053
	drwav_copy_allocation_callbacks_or_defaults(const drwav_allocation_callbacks* pAllocationCallbacks); // 3058
	drwav_preinit(drwav* pWav,
			drwav_read_proc onRead,
			drwav_seek_proc onSeek,
			drwav_tell_proc onTell,
			void* pReadSeekTellUserData,
			const drwav_allocation_callbacks* pAllocationCallbacks);  // 3908
} /* size: 0, inline expansions: 3 (0 bytes) */

// <020A9AF3> ../thirdparty/dr_libs/dr_wav.h:3915
// variable: 1
drwav_metadata* drwav_take_ownership_of_metadata(drwav* pWav)
{
	drwav_metadata* result; // 3917
} /* size: 0, variables: 1 */

// <020A9A8C> ../thirdparty/dr_libs/dr_wav.h:3935
size_t drwav__write_byte(drwav* pWav, drwav_uint8 byte)
{
} /* size: 0 */

// <020A9A5F> ../thirdparty/dr_libs/dr_wav.h:3943
size_t drwav__write_u16ne_to_le(drwav* pWav, drwav_uint16 value)
{
} /* size: 0 */

// <020A9A32> ../thirdparty/dr_libs/dr_wav.h:3955
size_t drwav__write_u32ne_to_le(drwav* pWav, drwav_uint32 value)
{
} /* size: 0 */

// <020A9A05> ../thirdparty/dr_libs/dr_wav.h:3967
size_t drwav__write_u64ne_to_le(drwav* pWav, drwav_uint64 value)
{
} /* size: 0 */

// <020A992F> ../thirdparty/dr_libs/dr_wav.h:3979
// variable: 1
size_t drwav__write_f32ne_to_le(drwav* pWav, float value)
{
	union  u; // 3984
} /* size: 0, variables: 1 */

// <020A98F5> ../thirdparty/dr_libs/dr_wav.h:3998
size_t drwav__write_or_count(drwav* pWav, const void* pData, size_t dataSize)
{
} /* size: 0 */

// <020A98C8> ../thirdparty/dr_libs/dr_wav.h:4007
size_t drwav__write_or_count_byte(drwav* pWav, drwav_uint8 byte)
{
} /* size: 0 */

// <020A989B> ../thirdparty/dr_libs/dr_wav.h:4016
size_t drwav__write_or_count_u16ne_to_le(drwav* pWav, drwav_uint16 value)
{
} /* size: 0 */

// <020A986E> ../thirdparty/dr_libs/dr_wav.h:4025
size_t drwav__write_or_count_u32ne_to_le(drwav* pWav, drwav_uint32 value)
{
} /* size: 0 */

// <020A9841> ../thirdparty/dr_libs/dr_wav.h:4045
size_t drwav__write_or_count_f32ne_to_le(drwav* pWav, float value)
{
} /* size: 0 */

// <020A97ED> ../thirdparty/dr_libs/dr_wav.h:4054
// variables: 2
size_t drwav__write_or_count_string_to_fixed_size_buf(drwav* pWav, char* str, size_t bufFixedSize)
{
	size_t len; // 4056
	{
		size_t i; // 4066
	}
} /* size: 0, variables: 1 */

// <020AE0CD> ../thirdparty/dr_libs/dr_wav.h:4077
// variables: 24
// function calls: 274
size_t drwav__write_or_count_metadata(drwav* pWav, drwav_metadata* pMetadatas, drwav_uint32 metadataCount)
{
	size_t bytesWritten; // 4079
	drwav_bool32 hasListAdtl; // 4080
	drwav_bool32 hasListInfo; // 4081
	drwav_uint32 iMetadata; // 4082
	{
		drwav_metadata* pMetadata; // 4089
		drwav_uint32 chunkSize; // 4090
		{
			drwav_uint32 iCuePoint; // 4151
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 4004
			drwav__write_or_count(drwav* pWav,
						const void* pData,
						size_t dataSize);  // 4155
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 3964
			drwav__write_u32ne_to_le(drwav* pWav,
						drwav_uint32 value);  // 4031
			drwav__write_or_count_u32ne_to_le(drwav* pWav,
								drwav_uint32 value);  // 4156
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 3964
			drwav__write_u32ne_to_le(drwav* pWav,
						drwav_uint32 value);  // 4031
			drwav__write_or_count_u32ne_to_le(drwav* pWav,
								drwav_uint32 value);  // 4157
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 3964
			drwav__write_u32ne_to_le(drwav* pWav,
						drwav_uint32 value);  // 4031
			drwav__write_or_count_u32ne_to_le(drwav* pWav,
								drwav_uint32 value);  // 4159
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 3964
			drwav__write_u32ne_to_le(drwav* pWav,
						drwav_uint32 value);  // 4031
			drwav__write_or_count_u32ne_to_le(drwav* pWav,
								drwav_uint32 value);  // 4160
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 4004
			drwav__write_or_count(drwav* pWav,
						const void* pData,
						size_t dataSize);  // 4161
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 3964
			drwav__write_u32ne_to_le(drwav* pWav,
						drwav_uint32 value);  // 4031
			drwav__write_or_count_u32ne_to_le(drwav* pWav,
								drwav_uint32 value);  // 4162
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 3964
			drwav__write_u32ne_to_le(drwav* pWav,
						drwav_uint32 value);  // 4031
			drwav__write_or_count_u32ne_to_le(drwav* pWav,
								drwav_uint32 value);  // 4163
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 3964
			drwav__write_u32ne_to_le(drwav* pWav,
						drwav_uint32 value);  // 4031
			drwav__write_or_count_u32ne_to_le(drwav* pWav,
								drwav_uint32 value);  // 4164
		}
		drwav__write(drwav* pWav,
				const void* pData,
				size_t dataSize);  // 4004
		drwav__write_or_count(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 4172
		drwav__write(drwav* pWav,
				const void* pData,
				size_t dataSize);  // 3964
		drwav__write_u32ne_to_le(drwav* pWav,
					drwav_uint32 value);  // 4031
		drwav__write_or_count_u32ne_to_le(drwav* pWav,
							drwav_uint32 value);  // 4173
		drwav__write(drwav* pWav,
				const void* pData,
				size_t dataSize);  // 3964
		drwav__write_u32ne_to_le(drwav* pWav,
					drwav_uint32 value);  // 4031
		drwav__write_or_count_u32ne_to_le(drwav* pWav,
							drwav_uint32 value);  // 4174
		drwav__write(drwav* pWav,
				const void* pData,
				size_t dataSize);  // 3952
		drwav__write_u16ne_to_le(drwav* pWav,
					drwav_uint16 value);  // 4022
		drwav__write_or_count_u16ne_to_le(drwav* pWav,
							drwav_uint16 value);  // 4175
		drwav__write(drwav* pWav,
				const void* pData,
				size_t dataSize);  // 3952
		drwav__write_u16ne_to_le(drwav* pWav,
					drwav_uint16 value);  // 4022
		drwav__write_or_count_u16ne_to_le(drwav* pWav,
							drwav_uint16 value);  // 4176
		drwav__write(drwav* pWav,
				const void* pData,
				size_t dataSize);  // 3995
		drwav__write_f32ne_to_le(drwav* pWav,
					float value);  // 4051
		drwav__write_or_count_f32ne_to_le(drwav* pWav,
							float value);  // 4177
		drwav__write(drwav* pWav,
				const void* pData,
				size_t dataSize);  // 3964
		drwav__write_u32ne_to_le(drwav* pWav,
					drwav_uint32 value);  // 4031
		drwav__write_or_count_u32ne_to_le(drwav* pWav,
							drwav_uint32 value);  // 4178
		drwav__write(drwav* pWav,
				const void* pData,
				size_t dataSize);  // 3952
		drwav__write_u16ne_to_le(drwav* pWav,
					drwav_uint16 value);  // 4022
		drwav__write_or_count_u16ne_to_le(drwav* pWav,
							drwav_uint16 value);  // 4179
		drwav__write(drwav* pWav,
				const void* pData,
				size_t dataSize);  // 3952
		drwav__write_u16ne_to_le(drwav* pWav,
					drwav_uint16 value);  // 4022
		drwav__write_or_count_u16ne_to_le(drwav* pWav,
							drwav_uint16 value);  // 4180
		drwav__write(drwav* pWav,
				const void* pData,
				size_t dataSize);  // 3995
		drwav__write_f32ne_to_le(drwav* pWav,
					float value);  // 4051
		drwav__write_or_count_f32ne_to_le(drwav* pWav,
							float value);  // 4181
		{
			char reservedBuf; // 4186
			drwav_uint32 timeReferenceLow; // 4187
			drwav_uint32 timeReferenceHigh; // 4188
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 4004
			drwav__write_or_count(drwav* pWav,
						const void* pData,
						size_t dataSize);  // 4192
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 3964
			drwav__write_u32ne_to_le(drwav* pWav,
						drwav_uint32 value);  // 4031
			drwav__write_or_count_u32ne_to_le(drwav* pWav,
								drwav_uint32 value);  // 4193
			drwav__strlen_clamped(const char* str,
						size_t maxToRead);  // 4062
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 4004
			drwav__write_or_count(drwav* pWav,
						const void* pData,
						size_t dataSize);  // 4063
			{
				size_t i; // 4066
				drwav__write_byte(drwav* pWav,
							drwav_uint8 byte);  // 4068
			}
			drwav__write_or_count_string_to_fixed_size_buf(drwav* pWav,
									char* str,
									size_t bufFixedSize);  // 4054
			drwav__write_or_count_string_to_fixed_size_buf(drwav* pWav,
									char* str,
									size_t bufFixedSize);  // 4195
			drwav__strlen_clamped(const char* str,
						size_t maxToRead);  // 4062
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 4004
			drwav__write_or_count(drwav* pWav,
						const void* pData,
						size_t dataSize);  // 4063
			{
				size_t i; // 4066
				drwav__write_byte(drwav* pWav,
							drwav_uint8 byte);  // 4068
			}
			drwav__write_or_count_string_to_fixed_size_buf(drwav* pWav,
									char* str,
									size_t bufFixedSize);  // 4054
			drwav__write_or_count_string_to_fixed_size_buf(drwav* pWav,
									char* str,
									size_t bufFixedSize);  // 4196
			drwav__strlen_clamped(const char* str,
						size_t maxToRead);  // 4062
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 4004
			drwav__write_or_count(drwav* pWav,
						const void* pData,
						size_t dataSize);  // 4063
			{
				size_t i; // 4066
				drwav__write_byte(drwav* pWav,
							drwav_uint8 byte);  // 4068
			}
			drwav__write_or_count_string_to_fixed_size_buf(drwav* pWav,
									char* str,
									size_t bufFixedSize);  // 4054
			drwav__write_or_count_string_to_fixed_size_buf(drwav* pWav,
									char* str,
									size_t bufFixedSize);  // 4197
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 4004
			drwav__write_or_count(drwav* pWav,
						const void* pData,
						size_t dataSize);  // 4198
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 4004
			drwav__write_or_count(drwav* pWav,
						const void* pData,
						size_t dataSize);  // 4199
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 3964
			drwav__write_u32ne_to_le(drwav* pWav,
						drwav_uint32 value);  // 4031
			drwav__write_or_count_u32ne_to_le(drwav* pWav,
								drwav_uint32 value);  // 4203
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 3964
			drwav__write_u32ne_to_le(drwav* pWav,
						drwav_uint32 value);  // 4031
			drwav__write_or_count_u32ne_to_le(drwav* pWav,
								drwav_uint32 value);  // 4204
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 3952
			drwav__write_u16ne_to_le(drwav* pWav,
						drwav_uint16 value);  // 4022
			drwav__write_or_count_u16ne_to_le(drwav* pWav,
								drwav_uint16 value);  // 4206
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 4004
			drwav__write_or_count(drwav* pWav,
						const void* pData,
						size_t dataSize);  // 4207
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 3952
			drwav__write_u16ne_to_le(drwav* pWav,
						drwav_uint16 value);  // 4022
			drwav__write_or_count_u16ne_to_le(drwav* pWav,
								drwav_uint16 value);  // 4208
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 3952
			drwav__write_u16ne_to_le(drwav* pWav,
						drwav_uint16 value);  // 4022
			drwav__write_or_count_u16ne_to_le(drwav* pWav,
								drwav_uint16 value);  // 4209
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 3952
			drwav__write_u16ne_to_le(drwav* pWav,
						drwav_uint16 value);  // 4022
			drwav__write_or_count_u16ne_to_le(drwav* pWav,
								drwav_uint16 value);  // 4210
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 3952
			drwav__write_u16ne_to_le(drwav* pWav,
						drwav_uint16 value);  // 4022
			drwav__write_or_count_u16ne_to_le(drwav* pWav,
								drwav_uint16 value);  // 4211
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 3952
			drwav__write_u16ne_to_le(drwav* pWav,
						drwav_uint16 value);  // 4022
			drwav__write_or_count_u16ne_to_le(drwav* pWav,
								drwav_uint16 value);  // 4212
			memset(void* __dest,
				int __ch,
				size_t __len);  // 4214
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 4004
			drwav__write_or_count(drwav* pWav,
						const void* pData,
						size_t dataSize);  // 4215
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 4004
			drwav__write_or_count(drwav* pWav,
						const void* pData,
						size_t dataSize);  // 4218
		}
		drwav__write(drwav* pWav,
				const void* pData,
				size_t dataSize);  // 4004
		drwav__write_or_count(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 4229
		{
			drwav_uint32 iLoop; // 4103
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 3964
			drwav__write_u32ne_to_le(drwav* pWav,
						drwav_uint32 value);  // 4031
			drwav__write_or_count_u32ne_to_le(drwav* pWav,
								drwav_uint32 value);  // 4126
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 4004
			drwav__write_or_count(drwav* pWav,
						const void* pData,
						size_t dataSize);  // 4107
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 3964
			drwav__write_u32ne_to_le(drwav* pWav,
						drwav_uint32 value);  // 4031
			drwav__write_or_count_u32ne_to_le(drwav* pWav,
								drwav_uint32 value);  // 4108
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 3964
			drwav__write_u32ne_to_le(drwav* pWav,
						drwav_uint32 value);  // 4031
			drwav__write_or_count_u32ne_to_le(drwav* pWav,
								drwav_uint32 value);  // 4110
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 3964
			drwav__write_u32ne_to_le(drwav* pWav,
						drwav_uint32 value);  // 4031
			drwav__write_or_count_u32ne_to_le(drwav* pWav,
								drwav_uint32 value);  // 4111
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 3964
			drwav__write_u32ne_to_le(drwav* pWav,
						drwav_uint32 value);  // 4031
			drwav__write_or_count_u32ne_to_le(drwav* pWav,
								drwav_uint32 value);  // 4112
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 3964
			drwav__write_u32ne_to_le(drwav* pWav,
						drwav_uint32 value);  // 4031
			drwav__write_or_count_u32ne_to_le(drwav* pWav,
								drwav_uint32 value);  // 4113
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 3964
			drwav__write_u32ne_to_le(drwav* pWav,
						drwav_uint32 value);  // 4031
			drwav__write_or_count_u32ne_to_le(drwav* pWav,
								drwav_uint32 value);  // 4114
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 3964
			drwav__write_u32ne_to_le(drwav* pWav,
						drwav_uint32 value);  // 4031
			drwav__write_or_count_u32ne_to_le(drwav* pWav,
								drwav_uint32 value);  // 4115
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 3964
			drwav__write_u32ne_to_le(drwav* pWav,
						drwav_uint32 value);  // 4031
			drwav__write_or_count_u32ne_to_le(drwav* pWav,
								drwav_uint32 value);  // 4116
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 3964
			drwav__write_u32ne_to_le(drwav* pWav,
						drwav_uint32 value);  // 4031
			drwav__write_or_count_u32ne_to_le(drwav* pWav,
								drwav_uint32 value);  // 4117
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 3964
			drwav__write_u32ne_to_le(drwav* pWav,
						drwav_uint32 value);  // 4031
			drwav__write_or_count_u32ne_to_le(drwav* pWav,
								drwav_uint32 value);  // 4118
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 3964
			drwav__write_u32ne_to_le(drwav* pWav,
						drwav_uint32 value);  // 4031
			drwav__write_or_count_u32ne_to_le(drwav* pWav,
								drwav_uint32 value);  // 4121
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 3964
			drwav__write_u32ne_to_le(drwav* pWav,
						drwav_uint32 value);  // 4031
			drwav__write_or_count_u32ne_to_le(drwav* pWav,
								drwav_uint32 value);  // 4122
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 3964
			drwav__write_u32ne_to_le(drwav* pWav,
						drwav_uint32 value);  // 4031
			drwav__write_or_count_u32ne_to_le(drwav* pWav,
								drwav_uint32 value);  // 4123
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 3964
			drwav__write_u32ne_to_le(drwav* pWav,
						drwav_uint32 value);  // 4031
			drwav__write_or_count_u32ne_to_le(drwav* pWav,
								drwav_uint32 value);  // 4124
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 3964
			drwav__write_u32ne_to_le(drwav* pWav,
						drwav_uint32 value);  // 4031
			drwav__write_or_count_u32ne_to_le(drwav* pWav,
								drwav_uint32 value);  // 4125
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 4004
			drwav__write_or_count(drwav* pWav,
						const void* pData,
						size_t dataSize);  // 4130
		}
		drwav__write(drwav* pWav,
				const void* pData,
				size_t dataSize);  // 4004
		drwav__write_or_count(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 4138
		drwav__write(drwav* pWav,
				const void* pData,
				size_t dataSize);  // 3964
		drwav__write_u32ne_to_le(drwav* pWav,
					drwav_uint32 value);  // 4031
		drwav__write_or_count_u32ne_to_le(drwav* pWav,
							drwav_uint32 value);  // 4139
		drwav__write(drwav* pWav,
				const void* pData,
				size_t dataSize);  // 4004
		drwav__write_or_count(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 4140
		drwav__write(drwav* pWav,
				const void* pData,
				size_t dataSize);  // 4004
		drwav__write_or_count(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 4141
		drwav__write(drwav* pWav,
				const void* pData,
				size_t dataSize);  // 4004
		drwav__write_or_count(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 4142
		drwav__write(drwav* pWav,
				const void* pData,
				size_t dataSize);  // 4004
		drwav__write_or_count(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 4143
		drwav__write(drwav* pWav,
				const void* pData,
				size_t dataSize);  // 4004
		drwav__write_or_count(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 4144
		drwav__write(drwav* pWav,
				const void* pData,
				size_t dataSize);  // 4004
		drwav__write_or_count(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 4145
		drwav__write(drwav* pWav,
				const void* pData,
				size_t dataSize);  // 4004
		drwav__write_or_count(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 4146
		drwav__write(drwav* pWav,
				const void* pData,
				size_t dataSize);  // 4004
		drwav__write_or_count(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 4227
		drwav__write(drwav* pWav,
				const void* pData,
				size_t dataSize);  // 3964
		drwav__write_u32ne_to_le(drwav* pWav,
					drwav_uint32 value);  // 4031
		drwav__write_or_count_u32ne_to_le(drwav* pWav,
							drwav_uint32 value);  // 4228
		drwav__write_byte(drwav* pWav,
					drwav_uint8 byte);  // 4013
		drwav__write_or_count_byte(drwav* pWav,
						drwav_uint8 byte);  // 4236
	}
	{
		drwav_uint32 chunkSize; // 4241
		{
			drwav_metadata* pMetadata; // 4243
		}
		{
			drwav_metadata* pMetadata; // 4263
			drwav_uint32 subchunkSize; // 4264
			{
				const char* pID; // 4267
				drwav__write(drwav* pWav,
						const void* pData,
						size_t dataSize);  // 4004
				drwav__write_or_count(drwav* pWav,
							const void* pData,
							size_t dataSize);  // 4291
				drwav__write(drwav* pWav,
						const void* pData,
						size_t dataSize);  // 3964
				drwav__write_u32ne_to_le(drwav* pWav,
							drwav_uint32 value);  // 4031
				drwav__write_or_count_u32ne_to_le(drwav* pWav,
									drwav_uint32 value);  // 4292
				drwav__write(drwav* pWav,
						const void* pData,
						size_t dataSize);  // 4004
				drwav__write_or_count(drwav* pWav,
							const void* pData,
							size_t dataSize);  // 4293
				drwav__write_byte(drwav* pWav,
							drwav_uint8 byte);  // 4013
				drwav__write_or_count_byte(drwav* pWav,
								drwav_uint8 byte);  // 4294
			}
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 4004
			drwav__write_or_count(drwav* pWav,
						const void* pData,
						size_t dataSize);  // 4300
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 3964
			drwav__write_u32ne_to_le(drwav* pWav,
						drwav_uint32 value);  // 4031
			drwav__write_or_count_u32ne_to_le(drwav* pWav,
								drwav_uint32 value);  // 4301
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 4004
			drwav__write_or_count(drwav* pWav,
						const void* pData,
						size_t dataSize);  // 4302
			drwav__write_byte(drwav* pWav,
						drwav_uint8 byte);  // 4013
			drwav__write_or_count_byte(drwav* pWav,
							drwav_uint8 byte);  // 4307
		}
		drwav__write(drwav* pWav,
				const void* pData,
				size_t dataSize);  // 4004
		drwav__write_or_count(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 4258
		drwav__write(drwav* pWav,
				const void* pData,
				size_t dataSize);  // 3964
		drwav__write_u32ne_to_le(drwav* pWav,
					drwav_uint32 value);  // 4031
		drwav__write_or_count_u32ne_to_le(drwav* pWav,
							drwav_uint32 value);  // 4259
		drwav__write(drwav* pWav,
				const void* pData,
				size_t dataSize);  // 4004
		drwav__write_or_count(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 4260
	}
	{
		drwav_uint32 chunkSize; // 4313
		{
			drwav_metadata* pMetadata; // 4316
		}
		drwav__write(drwav* pWav,
				const void* pData,
				size_t dataSize);  // 4004
		drwav__write_or_count(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 4357
		drwav__write(drwav* pWav,
				const void* pData,
				size_t dataSize);  // 3964
		drwav__write_u32ne_to_le(drwav* pWav,
					drwav_uint32 value);  // 4031
		drwav__write_or_count_u32ne_to_le(drwav* pWav,
							drwav_uint32 value);  // 4358
		drwav__write(drwav* pWav,
				const void* pData,
				size_t dataSize);  // 4004
		drwav__write_or_count(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 4359
		{
			drwav_metadata* pMetadata; // 4362
			drwav_uint32 subchunkSize; // 4363
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 4004
			drwav__write_or_count(drwav* pWav,
						const void* pData,
						size_t dataSize);  // 4399
			{
				const char* pID; // 4371
				drwav__write(drwav* pWav,
						const void* pData,
						size_t dataSize);  // 4004
				drwav__write_or_count(drwav* pWav,
							const void* pData,
							size_t dataSize);  // 4385
				drwav__write(drwav* pWav,
						const void* pData,
						size_t dataSize);  // 3964
				drwav__write_u32ne_to_le(drwav* pWav,
							drwav_uint32 value);  // 4031
				drwav__write_or_count_u32ne_to_le(drwav* pWav,
									drwav_uint32 value);  // 4387
				drwav__write(drwav* pWav,
						const void* pData,
						size_t dataSize);  // 3964
				drwav__write_u32ne_to_le(drwav* pWav,
							drwav_uint32 value);  // 4031
				drwav__write_or_count_u32ne_to_le(drwav* pWav,
									drwav_uint32 value);  // 4389
				drwav__write(drwav* pWav,
						const void* pData,
						size_t dataSize);  // 4004
				drwav__write_or_count(drwav* pWav,
							const void* pData,
							size_t dataSize);  // 4390
				drwav__write_byte(drwav* pWav,
							drwav_uint8 byte);  // 4013
				drwav__write_or_count_byte(drwav* pWav,
								drwav_uint8 byte);  // 4391
			}
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 3964
			drwav__write_u32ne_to_le(drwav* pWav,
						drwav_uint32 value);  // 4031
			drwav__write_or_count_u32ne_to_le(drwav* pWav,
								drwav_uint32 value);  // 4403
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 3964
			drwav__write_u32ne_to_le(drwav* pWav,
						drwav_uint32 value);  // 4031
			drwav__write_or_count_u32ne_to_le(drwav* pWav,
								drwav_uint32 value);  // 4404
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 3964
			drwav__write_u32ne_to_le(drwav* pWav,
						drwav_uint32 value);  // 4031
			drwav__write_or_count_u32ne_to_le(drwav* pWav,
								drwav_uint32 value);  // 4405
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 4004
			drwav__write_or_count(drwav* pWav,
						const void* pData,
						size_t dataSize);  // 4406
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 3952
			drwav__write_u16ne_to_le(drwav* pWav,
						drwav_uint16 value);  // 4022
			drwav__write_or_count_u16ne_to_le(drwav* pWav,
								drwav_uint16 value);  // 4407
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 3952
			drwav__write_u16ne_to_le(drwav* pWav,
						drwav_uint16 value);  // 4022
			drwav__write_or_count_u16ne_to_le(drwav* pWav,
								drwav_uint16 value);  // 4408
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 3952
			drwav__write_u16ne_to_le(drwav* pWav,
						drwav_uint16 value);  // 4022
			drwav__write_or_count_u16ne_to_le(drwav* pWav,
								drwav_uint16 value);  // 4409
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 3952
			drwav__write_u16ne_to_le(drwav* pWav,
						drwav_uint16 value);  // 4022
			drwav__write_or_count_u16ne_to_le(drwav* pWav,
								drwav_uint16 value);  // 4410
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 4004
			drwav__write_or_count(drwav* pWav,
						const void* pData,
						size_t dataSize);  // 4415
			drwav__write_byte(drwav* pWav,
						drwav_uint8 byte);  // 4013
			drwav__write_or_count_byte(drwav* pWav,
							drwav_uint8 byte);  // 4416
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 4004
			drwav__write_or_count(drwav* pWav,
						const void* pData,
						size_t dataSize);  // 4426
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 3964
			drwav__write_u32ne_to_le(drwav* pWav,
						drwav_uint32 value);  // 4031
			drwav__write_or_count_u32ne_to_le(drwav* pWav,
								drwav_uint32 value);  // 4427
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 4004
			drwav__write_or_count(drwav* pWav,
						const void* pData,
						size_t dataSize);  // 4428
			drwav__write_byte(drwav* pWav,
						drwav_uint8 byte);  // 4013
			drwav__write_or_count_byte(drwav* pWav,
							drwav_uint8 byte);  // 4436
		}
	}
} /* size: 5956, variables: 4 */

// <020A9662> ../thirdparty/dr_libs/dr_wav.h:4077
// variables: 21
size_t drwav__write_or_count_metadata(drwav* pWav, drwav_metadata* pMetadatas, drwav_uint32 metadataCount)
{
	size_t bytesWritten; // 4079
	drwav_bool32 hasListAdtl; // 4080
	drwav_bool32 hasListInfo; // 4081
	drwav_uint32 iMetadata; // 4082
	{
		drwav_metadata* pMetadata; // 4089
		drwav_uint32 chunkSize; // 4090
		{
			drwav_uint32 iLoop; // 4103
		}
		{
			drwav_uint32 iCuePoint; // 4151
		}
		{
			char reservedBuf; // 4186
			drwav_uint32 timeReferenceLow; // 4187
			drwav_uint32 timeReferenceHigh; // 4188
		}
	}
	{
		drwav_uint32 chunkSize; // 4241
		{
			drwav_metadata* pMetadata; // 4243
		}
		{
			drwav_metadata* pMetadata; // 4263
			drwav_uint32 subchunkSize; // 4264
			{
				const char* pID; // 4267
			}
		}
	}
	{
		drwav_uint32 chunkSize; // 4313
		{
			drwav_metadata* pMetadata; // 4316
		}
		{
			drwav_metadata* pMetadata; // 4362
			drwav_uint32 subchunkSize; // 4363
			{
				const char* pID; // 4371
			}
		}
	}
} /* size: 0, variables: 4 */

// <020A961B> ../thirdparty/dr_libs/dr_wav.h:4446
// variable: 1
drwav_uint32 drwav__riff_chunk_size_riff(drwav_uint64 dataChunkSize, drwav_metadata* pMetadata, drwav_uint32 metadataCount)
{
	drwav_uint64 chunkSize; // 4448
} /* size: 0, variables: 1 */

// <020A95FB> ../thirdparty/dr_libs/dr_wav.h:4456
drwav_uint32 drwav__data_chunk_size_riff(drwav_uint64 dataChunkSize)
{
} /* size: 0 */

// <020A95CE> ../thirdparty/dr_libs/dr_wav.h:4465
// variable: 1
drwav_uint64 drwav__riff_chunk_size_w64(drwav_uint64 dataChunkSize)
{
	drwav_uint64 dataSubchunkPaddingSize; // 4467
} /* size: 0, variables: 1 */

// <020A95AE> ../thirdparty/dr_libs/dr_wav.h:4472
drwav_uint64 drwav__data_chunk_size_w64(drwav_uint64 dataChunkSize)
{
} /* size: 0 */

// <020A9567> ../thirdparty/dr_libs/dr_wav.h:4477
// variable: 1
drwav_uint64 drwav__riff_chunk_size_rf64(drwav_uint64 dataChunkSize, drwav_metadata* metadata, drwav_uint32 numMetadata)
{
	drwav_uint64 chunkSize; // 4479
} /* size: 0, variables: 1 */

// <020A9431> ../thirdparty/dr_libs/dr_wav.h:4494
// function calls: 2
drwav_bool32 drwav_preinit_write(drwav* pWav, const drwav_data_format* pFormat, drwav_bool32 isSequential, drwav_write_proc onWrite, drwav_seek_proc onSeek, void* pUserData, const drwav_allocation_callbacks* pAllocationCallbacks)
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 4512
	drwav_copy_allocation_callbacks_or_defaults(const drwav_allocation_callbacks* pAllocationCallbacks); // 4516
} /* size: 0, inline expansions: 2 (0 bytes) */

// <020A83BA> ../thirdparty/dr_libs/dr_wav.h:4535
// variables: 9
// function calls: 50
drwav_bool32 drwav_init_write__internal(drwav* pWav, const drwav_data_format* pFormat, drwav_uint64 totalSampleCount)
{
	size_t runningPos; // 4539
	drwav_uint64 initialDataChunkSize; // 4540
	drwav_uint64 chunkSizeFMT; // 4541
	{
		drwav_uint32 chunkSizeRIFF; // 4567
		drwav__write(drwav* pWav,
				const void* pData,
				size_t dataSize);  // 4568
		drwav__write(drwav* pWav,
				const void* pData,
				size_t dataSize);  // 3964
		drwav__write_u32ne_to_le(drwav* pWav,
					drwav_uint32 value);  // 4569
	}
	{
		drwav_uint64 chunkSizeRIFF; // 4572
		drwav__write(drwav* pWav,
				const void* pData,
				size_t dataSize);  // 4573
		drwav__write(drwav* pWav,
				const void* pData,
				size_t dataSize);  // 3976
		drwav__write_u64ne_to_le(drwav* pWav,
					drwav_uint64 value);  // 4574
		drwav__write(drwav* pWav,
				const void* pData,
				size_t dataSize);  // 4575
	}
	{
		drwav_uint32 initialds64ChunkSize; // 4587
		drwav_uint64 initialRiffChunkSize; // 4588
		drwav__write(drwav* pWav,
				const void* pData,
				size_t dataSize);  // 4590
		drwav__write(drwav* pWav,
				const void* pData,
				size_t dataSize);  // 3964
		drwav__write_u32ne_to_le(drwav* pWav,
					drwav_uint32 value);  // 4591
		drwav__write(drwav* pWav,
				const void* pData,
				size_t dataSize);  // 3976
		drwav__write_u64ne_to_le(drwav* pWav,
					drwav_uint64 value);  // 4592
		drwav__write(drwav* pWav,
				const void* pData,
				size_t dataSize);  // 3976
		drwav__write_u64ne_to_le(drwav* pWav,
					drwav_uint64 value);  // 4593
		drwav__write(drwav* pWav,
				const void* pData,
				size_t dataSize);  // 3976
		drwav__write_u64ne_to_le(drwav* pWav,
					drwav_uint64 value);  // 4594
		drwav__write(drwav* pWav,
				const void* pData,
				size_t dataSize);  // 3964
		drwav__write_u32ne_to_le(drwav* pWav,
					drwav_uint32 value);  // 4595
	}
	{
		drwav_uint32 chunkSizeDATA; // 4627
		drwav__write(drwav* pWav,
				const void* pData,
				size_t dataSize);  // 4628
		drwav__write(drwav* pWav,
				const void* pData,
				size_t dataSize);  // 3964
		drwav__write_u32ne_to_le(drwav* pWav,
					drwav_uint32 value);  // 4629
	}
	{
		drwav_uint64 chunkSizeDATA; // 4631
		drwav__write(drwav* pWav,
				const void* pData,
				size_t dataSize);  // 3976
		drwav__write_u64ne_to_le(drwav* pWav,
					drwav_uint64 value);  // 4633
		drwav__write(drwav* pWav,
				const void* pData,
				size_t dataSize);  // 4632
	}
	drwav__write(drwav* pWav,
			const void* pData,
			size_t dataSize);  // 3964
	drwav__write_u32ne_to_le(drwav* pWav,
				drwav_uint32 value);  // 4578
	drwav__write(drwav* pWav,
			const void* pData,
			size_t dataSize);  // 4579
	drwav__write(drwav* pWav,
			const void* pData,
			size_t dataSize);  // 4577
	drwav__write(drwav* pWav,
			const void* pData,
			size_t dataSize);  // 4602
	drwav__write(drwav* pWav,
			const void* pData,
			size_t dataSize);  // 3952
	drwav__write_u16ne_to_le(drwav* pWav,
				drwav_uint16 value);  // 4610
	drwav__write(drwav* pWav,
			const void* pData,
			size_t dataSize);  // 3952
	drwav__write_u16ne_to_le(drwav* pWav,
				drwav_uint16 value);  // 4611
	drwav__write(drwav* pWav,
			const void* pData,
			size_t dataSize);  // 3964
	drwav__write_u32ne_to_le(drwav* pWav,
				drwav_uint32 value);  // 4612
	drwav__write(drwav* pWav,
			const void* pData,
			size_t dataSize);  // 3964
	drwav__write_u32ne_to_le(drwav* pWav,
				drwav_uint32 value);  // 4613
	drwav__write(drwav* pWav,
			const void* pData,
			size_t dataSize);  // 3952
	drwav__write_u16ne_to_le(drwav* pWav,
				drwav_uint16 value);  // 4614
	drwav__write(drwav* pWav,
			const void* pData,
			size_t dataSize);  // 3952
	drwav__write_u16ne_to_le(drwav* pWav,
				drwav_uint16 value);  // 4615
	drwav__write(drwav* pWav,
			const void* pData,
			size_t dataSize);  // 4635
	drwav__write(drwav* pWav,
			const void* pData,
			size_t dataSize);  // 3964
	drwav__write_u32ne_to_le(drwav* pWav,
				drwav_uint32 value);  // 4636
	drwav__write(drwav* pWav,
			const void* pData,
			size_t dataSize);  // 3964
	drwav__write_u32ne_to_le(drwav* pWav,
				drwav_uint32 value);  // 4603
	drwav__write(drwav* pWav,
			const void* pData,
			size_t dataSize);  // 3976
	drwav__write_u64ne_to_le(drwav* pWav,
				drwav_uint64 value);  // 4607
	drwav__write_or_count_metadata(drwav* pWav,
					drwav_metadata* pMetadatas,
					drwav_uint32 metadataCount);  // 4620
	drwav__write(drwav* pWav,
			const void* pData,
			size_t dataSize);  // 4606
} /* size: 0, variables: 3, inline expansions: 26 (0 bytes) */

// <020A82C3> ../thirdparty/dr_libs/dr_wav.h:4651
drwav_bool32 drwav_init_write(drwav* pWav, const drwav_data_format* pFormat, drwav_write_proc onWrite, drwav_seek_proc onSeek, void* pUserData, const drwav_allocation_callbacks* pAllocationCallbacks)
{
} /* size: 0 */

// <020A8261> ../thirdparty/dr_libs/dr_wav.h:4660
drwav_bool32 drwav_init_write_sequential(drwav* pWav, const drwav_data_format* pFormat, drwav_uint64 totalSampleCount, drwav_write_proc onWrite, void* pUserData, const drwav_allocation_callbacks* pAllocationCallbacks)
{
} /* size: 0 */

// <020A8109> ../thirdparty/dr_libs/dr_wav.h:4669
// function call: 1
drwav_bool32 drwav_init_write_sequential_pcm_frames(drwav* pWav, const drwav_data_format* pFormat, drwav_uint64 totalPCMFrameCount, drwav_write_proc onWrite, void* pUserData, const drwav_allocation_callbacks* pAllocationCallbacks)
{
	drwav_init_write_sequential(drwav* pWav,
					const drwav_data_format* pFormat,
					drwav_uint64 totalSampleCount,
					drwav_write_proc onWrite,
					void* pUserData,
					const drwav_allocation_callbacks* pAllocationCallbacks);  // 4675
} /* size: 0, inline expansions: 1 (0 bytes) */

// <020A7FEB> ../thirdparty/dr_libs/dr_wav.h:4678
drwav_bool32 drwav_init_write_with_metadata(drwav* pWav, const drwav_data_format* pFormat, drwav_write_proc onWrite, drwav_seek_proc onSeek, void* pUserData, const drwav_allocation_callbacks* pAllocationCallbacks, drwav_metadata* pMetadata, drwav_uint32 metadataCount)
{
} /* size: 0 */

// <020A7CAB> ../thirdparty/dr_libs/dr_wav.h:4691
// variables: 3
// function calls: 8
drwav_uint64 drwav_target_write_size_bytes(const drwav_data_format* pFormat, drwav_uint64 totalFrameCount, drwav_metadata* pMetadata, drwav_uint32 metadataCount)
{
	drwav_uint64 targetDataSizeBytes; // 4694
	drwav_uint64 riffChunkSizeBytes; // 4695
	drwav_uint64 fileSizeBytes; // 4696
	drwav__write_or_count_metadata(drwav* pWav,
					drwav_metadata* pMetadatas,
					drwav_uint32 metadataCount);  // 4448
	drwav__chunk_padding_size_riff(drwav_uint64 chunkSize); // 4448
	drwav__riff_chunk_size_riff(drwav_uint64 dataChunkSize,
					drwav_metadata* pMetadata,
					drwav_uint32 metadataCount);  // 4699
	drwav__write_or_count_metadata(drwav* pWav,
					drwav_metadata* pMetadatas,
					drwav_uint32 metadataCount);  // 4479
	drwav__chunk_padding_size_riff(drwav_uint64 chunkSize); // 4479
	drwav__riff_chunk_size_rf64(drwav_uint64 dataChunkSize,
					drwav_metadata* metadata,
					drwav_uint32 numMetadata);  // 4705
	drwav__chunk_padding_size_w64(drwav_uint64 chunkSize); // 4467
	drwav__riff_chunk_size_w64(drwav_uint64 dataChunkSize); // 4702
} /* size: 0, variables: 3, inline expansions: 8 (0 bytes) */

// <020A7BC0> ../thirdparty/dr_libs/dr_wav.h:5492
// variables: 2
// function call: 1
size_t drwav__on_read_memory(void* pUserData, void* pBufferOut, size_t bytesToRead)
{
	drwav* pWav; // 5494
	size_t bytesRemaining; // 5495
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 5506
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <020A7B37> ../thirdparty/dr_libs/dr_wav.h:5513
// variables: 2
drwav_bool32 drwav__on_seek_memory(void* pUserData, int offset, drwav_seek_origin origin)
{
	drwav* pWav; // 5515
	drwav_int64 newCursor; // 5516
} /* size: 97, variables: 2 */

// <020A7906> ../thirdparty/dr_libs/dr_wav.h:5545
// variables: 5
// function calls: 3
size_t drwav__on_write_memory(void* pUserData, const void* pDataIn, size_t bytesToWrite)
{
	drwav* pWav; // 5547
	size_t bytesRemaining; // 5548
	{
		void* pNewData; // 5556
		size_t newDataCapacity; // 5557
		{
			void* p2; // 1878
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 1886
		}
		drwav__realloc_from_callbacks(void* p,
						size_t szNew,
						size_t szOld,
						const drwav_allocation_callbacks* pAllocationCallbacks);  // 5564
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 5573
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <020A787D> ../thirdparty/dr_libs/dr_wav.h:5585
// variables: 2
drwav_bool32 drwav__on_seek_memory_write(void* pUserData, int offset, drwav_seek_origin origin)
{
	drwav* pWav; // 5587
	drwav_int64 newCursor; // 5588
} /* size: 0, variables: 2 */

// <020A7824> ../thirdparty/dr_libs/dr_wav.h:5617
// variable: 1
drwav_bool32 drwav__on_tell_memory(void* pUserData, drwav_int64* pCursor)
{
	drwav* pWav; // 5619
} /* size: 0, variables: 1 */

// <020A77DC> ../thirdparty/dr_libs/dr_wav.h:5628
drwav_bool32 drwav_init_memory(drwav* pWav, const void* data, size_t dataSize, const drwav_allocation_callbacks* pAllocationCallbacks)
{
} /* size: 0 */

// <020A776D> ../thirdparty/dr_libs/dr_wav.h:5633
drwav_bool32 drwav_init_memory_ex(drwav* pWav, const void* data, size_t dataSize, drwav_chunk_proc onChunk, void* pChunkUserData, drwav_uint32 flags, const drwav_allocation_callbacks* pAllocationCallbacks)
{
} /* size: 0 */

// <020A75E2> ../thirdparty/dr_libs/dr_wav.h:5650
// function calls: 3
drwav_bool32 drwav_init_memory_with_metadata(drwav* pWav, const void* data, size_t dataSize, drwav_uint32 flags, const drwav_allocation_callbacks* pAllocationCallbacks)
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 3053
	drwav_copy_allocation_callbacks_or_defaults(const drwav_allocation_callbacks* pAllocationCallbacks); // 3058
	drwav_preinit(drwav* pWav,
			drwav_read_proc onRead,
			drwav_seek_proc onSeek,
			drwav_tell_proc onTell,
			void* pReadSeekTellUserData,
			const drwav_allocation_callbacks* pAllocationCallbacks);  // 5656
} /* size: 0, inline expansions: 3 (0 bytes) */

// <020A7574> ../thirdparty/dr_libs/dr_wav.h:5668
drwav_bool32 drwav_init_memory_write__internal(drwav* pWav, void** ppData, size_t* pDataSize, const drwav_data_format* pFormat, drwav_uint64 totalSampleCount, drwav_bool32 isSequential, const drwav_allocation_callbacks* pAllocationCallbacks)
{
} /* size: 0 */

// <020A7412> ../thirdparty/dr_libs/dr_wav.h:5690
// function call: 1
drwav_bool32 drwav_init_memory_write(drwav* pWav, void** ppData, size_t* pDataSize, const drwav_data_format* pFormat, const drwav_allocation_callbacks* pAllocationCallbacks)
{
	drwav_init_memory_write__internal(drwav* pWav,
						void** ppData,
						size_t* pDataSize,
						const drwav_data_format* pFormat,
						drwav_uint64 totalSampleCount,
						drwav_bool32 isSequential,
						const drwav_allocation_callbacks* pAllocationCallbacks);  // 5692
} /* size: 0, inline expansions: 1 (0 bytes) */

// <020A73B0> ../thirdparty/dr_libs/dr_wav.h:5695
drwav_bool32 drwav_init_memory_write_sequential(drwav* pWav, void** ppData, size_t* pDataSize, const drwav_data_format* pFormat, drwav_uint64 totalSampleCount, const drwav_allocation_callbacks* pAllocationCallbacks)
{
} /* size: 0 */

// <020A71D9> ../thirdparty/dr_libs/dr_wav.h:5700
// function calls: 2
drwav_bool32 drwav_init_memory_write_sequential_pcm_frames(drwav* pWav, void** ppData, size_t* pDataSize, const drwav_data_format* pFormat, drwav_uint64 totalPCMFrameCount, const drwav_allocation_callbacks* pAllocationCallbacks)
{
	drwav_init_memory_write__internal(drwav* pWav,
						void** ppData,
						size_t* pDataSize,
						const drwav_data_format* pFormat,
						drwav_uint64 totalSampleCount,
						drwav_bool32 isSequential,
						const drwav_allocation_callbacks* pAllocationCallbacks);  // 5697
	drwav_init_memory_write_sequential(drwav* pWav,
						void** ppData,
						size_t* pDataSize,
						const drwav_data_format* pFormat,
						drwav_uint64 totalSampleCount,
						const drwav_allocation_callbacks* pAllocationCallbacks);  // 5706
} /* size: 0, inline expansions: 2 (0 bytes) */

// <020A693D> ../thirdparty/dr_libs/dr_wav.h:5711
// variables: 10
// function calls: 25
drwav_result drwav_uninit(drwav* pWav)
{
	drwav_result result; // 5713
	{
		drwav_uint32 paddingSize; // 5725
		{
			drwav_uint64 paddingData; // 5735
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 5736
		}
		{
			drwav_uint32 riffChunkSize; // 5747
			drwav__write_or_count_metadata(drwav* pWav,
							drwav_metadata* pMetadatas,
							drwav_uint32 metadataCount);  // 4448
			drwav__chunk_padding_size_riff(drwav_uint64 chunkSize); // 4448
			drwav__riff_chunk_size_riff(drwav_uint64 dataChunkSize,
							drwav_metadata* pMetadata,
							drwav_uint32 metadataCount);  // 5747
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 3964
			drwav__write_u32ne_to_le(drwav* pWav,
						drwav_uint32 value);  // 5748
		}
		{
			drwav_uint32 dataChunkSize; // 5753
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 3964
			drwav__write_u32ne_to_le(drwav* pWav,
						drwav_uint32 value);  // 5754
		}
		{
			drwav_uint64 riffChunkSize; // 5759
			drwav__write(drwav* pWav,
					const void* pData,
					size_t dataSize);  // 3976
			drwav__write_u64ne_to_le(drwav* pWav,
						drwav_uint64 value);  // 5760
			drwav__chunk_padding_size_w64(drwav_uint64 chunkSize); // 4467
			drwav__riff_chunk_size_w64(drwav_uint64 dataChunkSize); // 5759
		}
		{
			drwav_uint64 dataChunkSize; // 5765
			drwav__data_chunk_size_w64(drwav_uint64 dataChunkSize); // 5765
		}
		{
			int ds64BodyPos; // 5770
			{
				drwav_uint64 riffChunkSize; // 5774
				drwav__write_or_count_metadata(drwav* pWav,
								drwav_metadata* pMetadatas,
								drwav_uint32 metadataCount);  // 4479
				drwav__chunk_padding_size_riff(drwav_uint64 chunkSize); // 4479
				drwav__riff_chunk_size_rf64(drwav_uint64 dataChunkSize,
								drwav_metadata* metadata,
								drwav_uint32 numMetadata);  // 5774
				drwav__write(drwav* pWav,
						const void* pData,
						size_t dataSize);  // 3976
				drwav__write_u64ne_to_le(drwav* pWav,
							drwav_uint64 value);  // 5775
			}
			{
				drwav_uint64 dataChunkSize; // 5780
				drwav__write(drwav* pWav,
						const void* pData,
						size_t dataSize);  // 3976
				drwav__write_u64ne_to_le(drwav* pWav,
							drwav_uint64 value);  // 5781
			}
		}
		drwav__chunk_padding_size_riff(drwav_uint64 chunkSize); // 5729
		drwav__chunk_padding_size_w64(drwav_uint64 chunkSize); // 5731
	}
	drwav__free_from_callbacks(void* p,
					const drwav_allocation_callbacks* pAllocationCallbacks);  // 1896
	drwav__free_from_callbacks(void* p,
					const drwav_allocation_callbacks* pAllocationCallbacks);  // 8490
	drwav_free(void* p,
			const drwav_allocation_callbacks* pAllocationCallbacks);  // 5793
} /* size: 770, variables: 1, inline expansions: 3 (86 bytes) */

// <020A68AC> ../thirdparty/dr_libs/dr_wav.h:5811
// variables: 6
size_t drwav_read_raw(drwav* pWav, size_t bytesToRead, void* pBufferOut)
{
	size_t bytesRead; // 5813
	drwav_uint32 bytesPerFrame; // 5814
	{
		size_t bytesToSeek; // 5839
	}
	{
		drwav_uint8 buffer; // 5853
		size_t bytesSeeked; // 5854
		size_t bytesToSeek; // 5855
	}
} /* size: 0, variables: 2 */

// <020A684A> ../thirdparty/dr_libs/dr_wav.h:5877
// variables: 3
drwav_uint64 drwav_read_pcm_frames_le(drwav* pWav, drwav_uint64 framesToRead, void* pBufferOut)
{
	drwav_uint32 bytesPerFrame; // 5879
	drwav_uint64 bytesToRead; // 5880
	drwav_uint64 framesRemainingInFile; // 5881
} /* size: 0, variables: 3 */

// <020A652E> ../thirdparty/dr_libs/dr_wav.h:5919
// variables: 3
// function calls: 13
drwav_uint64 drwav_read_pcm_frames_be(drwav* pWav, drwav_uint64 framesToRead, void* pBufferOut)
{
	drwav_uint64 framesRead; // 5921
	{
		drwav_uint32 bytesPerFrame; // 5924
		drwav_get_bytes_per_pcm_frame(drwav* pWav); // 5924
		{
			drwav_uint8* pSample; // 1653
			drwav__bswap_s24(drwav_uint8* p); // 1654
		}
		drwav__bswap_samples_s24(drwav_uint8* pSamples,
					drwav_uint64 sampleCount);  // 1722
		drwav__bswap16(drwav_uint16 n); // 1629
		drwav__bswap_s16(drwav_int16 n); // 1636
		drwav__bswap_samples_s16(drwav_int16* pSamples,
					drwav_uint64 sampleCount);  // 1718
		drwav__bswap64(drwav_uint64 n); // 1675
		drwav__bswap_s64(drwav_int64 n); // 1682
		drwav__bswap_samples_s64(drwav_int64* pSamples,
					drwav_uint64 sampleCount);  // 1730
		drwav__bswap32(drwav_uint32 n); // 1661
		drwav__bswap_s32(drwav_int32 n); // 1668
		drwav__bswap_samples_s32(drwav_int32* pSamples,
					drwav_uint64 sampleCount);  // 1726
		drwav__bswap_samples(void* pSamples,
					drwav_uint64 sampleCount,
					drwav_uint32 bytesPerSample);  // 5929
	}
} /* size: 524, variables: 1 */

// <020A63F6> ../thirdparty/dr_libs/dr_wav.h:5935
// variables: 2
// function call: 1
drwav_uint64 drwav_read_pcm_frames(drwav* pWav, drwav_uint64 framesToRead, void* pBufferOut)
{

post_process: // 5967
	drwav_uint64 framesRead; // 5937
	{
		drwav_uint64 iSample; // 5971
	}
	drwav_is_container_be(drwav_container container); // 5939
} /* size: 186, variables: 1, goto labels: 1, inline expansions: 1 (14 bytes) */

// <020AD6EB> ../thirdparty/dr_libs/dr_wav.h:5985
// function calls: 4
drwav_bool32 drwav_seek_to_first_pcm_frame(drwav* pWav)
{
	drwav__is_compressed_format_tag(drwav_uint16 formatTag); // 5995
	memset(void* __dest,
		int __ch,
		size_t __len);  // 6000
	memset(void* __dest,
		int __ch,
		size_t __len);  // 5998
	drwav_seek_to_first_pcm_frame(drwav* pWav); // 5985
} /* size: 177, inline expansions: 4 (159 bytes) */

// <020A63D6> ../thirdparty/dr_libs/dr_wav.h:5985
drwav_bool32 drwav_seek_to_first_pcm_frame(drwav* pWav)
{
} /* size: 0 */

// <020A6192> ../thirdparty/dr_libs/dr_wav.h:6012
// variables: 10
// function calls: 2
drwav_bool32 drwav_seek_to_pcm_frame(drwav* pWav, drwav_uint64 targetFrameIndex)
{
	{
		drwav_uint64 offsetInFrames; // 6053
		drwav_int16 devnull; // 6055
		{
			drwav_uint64 framesRead; // 6057
			drwav_uint64 framesToRead; // 6058
		}
	}
	{
		drwav_uint64 totalSizeInBytes; // 6079
		drwav_uint64 currentBytePos; // 6080
		drwav_uint64 targetBytePos; // 6081
		drwav_uint64 offset; // 6082
		drwav_uint32 bytesPerFrame; // 6083
		{
			int offset32; // 6108
		}
		drwav_get_bytes_per_pcm_frame(drwav* pWav); // 6085
	}
	drwav__is_compressed_format_tag(drwav_uint16 formatTag); // 6039
} /* size: 609, inline expansions: 1 (0 bytes) */

// <020A614D> ../thirdparty/dr_libs/dr_wav.h:6122
drwav_result drwav_get_cursor_in_pcm_frames(drwav* pWav, drwav_uint64* pCursor)
{
} /* size: 0 */

// <020A6108> ../thirdparty/dr_libs/dr_wav.h:6139
drwav_result drwav_get_length_in_pcm_frames(drwav* pWav, drwav_uint64* pLength)
{
} /* size: 0 */

// <020A60C0> ../thirdparty/dr_libs/dr_wav.h:6157
// variable: 1
size_t drwav_write_raw(drwav* pWav, size_t bytesToWrite, const void* pData)
{
	size_t bytesWritten; // 6159
} /* size: 0, variables: 1 */

// <020A6042> ../thirdparty/dr_libs/dr_wav.h:6171
// variables: 5
drwav_uint64 drwav_write_pcm_frames_le(drwav* pWav, drwav_uint64 framesToWrite, const void* pData)
{
	drwav_uint64 bytesToWrite; // 6173
	drwav_uint64 bytesWritten; // 6174
	const drwav_uint8* pRunningData; // 6175
	{
		size_t bytesJustWritten; // 6190
		drwav_uint64 bytesToWriteThisIteration; // 6191
	}
} /* size: 0, variables: 3 */

// <020A5F9D> ../thirdparty/dr_libs/dr_wav.h:6209
// variables: 8
drwav_uint64 drwav_write_pcm_frames_be(drwav* pWav, drwav_uint64 framesToWrite, const void* pData)
{
	drwav_uint64 bytesToWrite; // 6211
	drwav_uint64 bytesWritten; // 6212
	drwav_uint32 bytesPerSample; // 6213
	const drwav_uint8* pRunningData; // 6214
	{
		drwav_uint8 temp; // 6234
		drwav_uint32 sampleCount; // 6235
		size_t bytesJustWritten; // 6236
		drwav_uint64 bytesToWriteThisIteration; // 6237
	}
} /* size: 0, variables: 4 */

// <020A5F13> ../thirdparty/dr_libs/dr_wav.h:6268
drwav_uint64 drwav_write_pcm_frames(drwav* pWav, drwav_uint64 framesToWrite, const void* pData)
{
} /* size: 0 */

// <020A5B1E> ../thirdparty/dr_libs/dr_wav.h:6278
// variables: 14
// function calls: 10
drwav_uint64 drwav_read_pcm_frames_s16__msadpcm(drwav* pWav, drwav_uint64 framesToRead, drwav_int16* pBufferOut)
{
	drwav_uint64 totalFramesRead; // 6280
	const drwav_int32   adaptationTable; // 6282
	const drwav_int32   coeff1Table; // 6286
	const drwav_int32   coeff2Table; // 6287
	{
		drwav_uint8 header; // 6301
		drwav_bytes_to_u16(const drwav_uint8* data); // 8503
		drwav_bytes_to_s16(const drwav_uint8* data); // 6310
		drwav_bytes_to_u16(const drwav_uint8* data); // 8503
		drwav_bytes_to_s16(const drwav_uint8* data); // 6308
	}
	{
		drwav_uint8 header; // 6321
		drwav_bytes_to_u16(const drwav_uint8* data); // 8503
		drwav_bytes_to_s16(const drwav_uint8* data); // 6329
		drwav_bytes_to_u16(const drwav_uint8* data); // 8503
		drwav_bytes_to_s16(const drwav_uint8* data); // 6331
		drwav_bytes_to_u16(const drwav_uint8* data); // 8503
		drwav_bytes_to_s16(const drwav_uint8* data); // 6333
	}
	{
		drwav_uint32 iSample; // 6353
	}
	{
		drwav_uint8 nibbles; // 6380
		drwav_int32 nibble0; // 6381
		drwav_int32 nibble1; // 6382
		{
			drwav_int32 newSample0; // 6395
			drwav_int32 newSample1; // 6396
		}
		{
			drwav_int32 newSample0; // 6427
			drwav_int32 newSample1; // 6428
		}
	}
} /* size: 1456, variables: 4 */

// <020A583D> ../thirdparty/dr_libs/dr_wav.h:6471
// variables: 14
// function calls: 3
drwav_uint64 drwav_read_pcm_frames_s16__ima(drwav* pWav, drwav_uint64 framesToRead, drwav_int16* pBufferOut)
{
	drwav_uint64 totalFramesRead; // 6473
	drwav_uint32 iChannel; // 6474
	const drwav_int32   indexTable; // 6476
	const drwav_int32   stepTable; // 6481
	{
		drwav_uint8 header; // 6505
		drwav_bytes_to_u16(const drwav_uint8* data); // 6517
	}
	{
		drwav_uint8 header; // 6523
		drwav_bytes_to_u16(const drwav_uint8* data); // 8503
		drwav_bytes_to_s16(const drwav_uint8* data); // 6535
	}
	{
		drwav_uint32 iSample; // 6549
	}
	{
		drwav_uint32 iByte; // 6580
		drwav_uint8 nibbles; // 6581
		{
			drwav_uint8 nibble0; // 6589
			drwav_uint8 nibble1; // 6590
			drwav_int32 step; // 6592
			drwav_int32 predictor; // 6593
			drwav_int32 diff; // 6595
		}
	}
} /* size: 1252, variables: 4 */

// <020A581D> ../thirdparty/dr_libs/dr_wav.h:6669
inline drwav_int16 drwav__alaw_to_s16(drwav_uint8 sampleIn)
{
} /* size: 0 */

// <020A57FD> ../thirdparty/dr_libs/dr_wav.h:6674
inline drwav_int16 drwav__mulaw_to_s16(drwav_uint8 sampleIn)
{
} /* size: 0 */

// <020A5788> ../thirdparty/dr_libs/dr_wav.h:6681
// variables: 4
void drwav__pcm_to_s16(drwav_int16* pOut, const drwav_uint8* pIn, size_t totalSampleCount, unsigned int bytesPerSample)
{
	size_t i; // 6683
	{
		drwav_uint64 sample; // 6718
		unsigned int shift; // 6719
		unsigned int j; // 6721
	}
} /* size: 0, variables: 1 */

// <020A5745> ../thirdparty/dr_libs/dr_wav.h:6737
void drwav__ieee_to_s16(drwav_int16* pOut, const drwav_uint8* pIn, size_t totalSampleCount, unsigned int bytesPerSample)
{
} /* size: 0 */

// <020A538F> ../thirdparty/dr_libs/dr_wav.h:6752
// variables: 12
// function calls: 5
drwav_uint64 drwav_read_pcm_frames_s16__pcm(drwav* pWav, drwav_uint64 framesToRead, drwav_int16* pBufferOut)
{
	drwav_uint64 totalFramesRead; // 6754
	drwav_uint8 sampleData; // 6755
	drwav_uint32 bytesPerFrame; // 6756
	drwav_uint32 bytesPerSample; // 6757
	drwav_uint64 samplesRead; // 6758
	{
		drwav_uint64 framesToReadThisIteration; // 6778
		drwav_uint64 framesRead; // 6779
		{
			int x; // 7053
		}
		drwav_u8_to_s16(drwav_int16* pOut,
				const drwav_uint8* pIn,
				size_t sampleCount);  // 6687
		{
			drwav_uint64 sample; // 6718
			unsigned int shift; // 6719
			unsigned int j; // 6721
		}
		{
			int x; // 7076
		}
		drwav_s32_to_s16(drwav_int16* pOut,
				const drwav_int32* pIn,
				size_t sampleCount);  // 6704
		memset(void* __dest,
			int __ch,
			size_t __len);  // 6711
		drwav__pcm_to_s16(drwav_int16* pOut,
					const drwav_uint8* pIn,
					size_t totalSampleCount,
					unsigned int bytesPerSample);  // 6793
	}
	drwav_get_bytes_per_pcm_frame(drwav* pWav); // 6765
} /* size: 1175, variables: 5, inline expansions: 1 (56 bytes) */

// <020A503E> ../thirdparty/dr_libs/dr_wav.h:6803
// variables: 11
// function calls: 5
drwav_uint64 drwav_read_pcm_frames_s16__ieee(drwav* pWav, drwav_uint64 framesToRead, drwav_int16* pBufferOut)
{
	drwav_uint64 totalFramesRead; // 6805
	drwav_uint8 sampleData; // 6806
	drwav_uint32 bytesPerFrame; // 6807
	drwav_uint32 bytesPerSample; // 6808
	drwav_uint64 samplesRead; // 6809
	{
		drwav_uint64 framesToReadThisIteration; // 6828
		drwav_uint64 framesRead; // 6829
		memset(void* __dest,
			int __ch,
			size_t __len);  // 6747
		{
			double x; // 7102
			double c; // 7103
		}
		drwav_f64_to_s16(drwav_int16* pOut,
				const double* pIn,
				size_t sampleCount);  // 6743
		{
			float x; // 7087
			float c; // 7088
		}
		drwav_f32_to_s16(drwav_int16* pOut,
				const float* pIn,
				size_t sampleCount);  // 6740
		drwav__ieee_to_s16(drwav_int16* pOut,
					const drwav_uint8* pIn,
					size_t totalSampleCount,
					unsigned int bytesPerSample);  // 6843
	}
	drwav_get_bytes_per_pcm_frame(drwav* pWav); // 6815
} /* size: 701, variables: 5, inline expansions: 1 (47 bytes) */

// <020A4DF4> ../thirdparty/dr_libs/dr_wav.h:6853
// variables: 7
// function calls: 3
drwav_uint64 drwav_read_pcm_frames_s16__alaw(drwav* pWav, drwav_uint64 framesToRead, drwav_int16* pBufferOut)
{
	drwav_uint64 totalFramesRead; // 6855
	drwav_uint8 sampleData; // 6856
	drwav_uint32 bytesPerFrame; // 6857
	drwav_uint32 bytesPerSample; // 6858
	drwav_uint64 samplesRead; // 6859
	{
		drwav_uint64 framesToReadThisIteration; // 6878
		drwav_uint64 framesRead; // 6879
		drwav__alaw_to_s16(drwav_uint8 sampleIn); // 7116
		drwav_alaw_to_s16(drwav_int16* pOut,
					const drwav_uint8* pIn,
					size_t sampleCount);  // 6893
	}
	drwav_get_bytes_per_pcm_frame(drwav* pWav); // 6865
} /* size: 453, variables: 5, inline expansions: 1 (48 bytes) */

// <020A4BAA> ../thirdparty/dr_libs/dr_wav.h:6920
// variables: 7
// function calls: 3
drwav_uint64 drwav_read_pcm_frames_s16__mulaw(drwav* pWav, drwav_uint64 framesToRead, drwav_int16* pBufferOut)
{
	drwav_uint64 totalFramesRead; // 6922
	drwav_uint8 sampleData; // 6923
	drwav_uint32 bytesPerFrame; // 6924
	drwav_uint32 bytesPerSample; // 6925
	drwav_uint64 samplesRead; // 6926
	{
		drwav_uint64 framesToReadThisIteration; // 6945
		drwav_uint64 framesRead; // 6946
		drwav__mulaw_to_s16(drwav_uint8 sampleIn); // 7124
		drwav_mulaw_to_s16(drwav_int16* pOut,
					const drwav_uint8* pIn,
					size_t sampleCount);  // 6960
	}
	drwav_get_bytes_per_pcm_frame(drwav* pWav); // 6932
} /* size: 453, variables: 5, inline expansions: 1 (48 bytes) */

// <020A4B6F> ../thirdparty/dr_libs/dr_wav.h:6985
drwav_uint64 drwav_read_pcm_frames_s16(drwav* pWav, drwav_uint64 framesToRead, drwav_int16* pBufferOut)
{
} /* size: 0 */

// <020A4AD8> ../thirdparty/dr_libs/dr_wav.h:7027
// variable: 1
drwav_uint64 drwav_read_pcm_frames_s16le(drwav* pWav, drwav_uint64 framesToRead, drwav_int16* pBufferOut)
{
	drwav_uint64 framesRead; // 7029
} /* size: 0, variables: 1 */

// <020A49AE> ../thirdparty/dr_libs/dr_wav.h:7037
// variable: 1
// function calls: 3
drwav_uint64 drwav_read_pcm_frames_s16be(drwav* pWav, drwav_uint64 framesToRead, drwav_int16* pBufferOut)
{
	drwav_uint64 framesRead; // 7039
	drwav__bswap16(drwav_uint16 n); // 1629
	drwav__bswap_s16(drwav_int16 n); // 1636
	drwav__bswap_samples_s16(drwav_int16* pSamples,
				drwav_uint64 sampleCount);  // 7041
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <020A4954> ../thirdparty/dr_libs/dr_wav.h:7048
// variables: 3
void drwav_u8_to_s16(drwav_int16* pOut, const drwav_uint8* pIn, size_t sampleCount)
{
	int r; // 7050
	size_t i; // 7051
	{
		int x; // 7053
	}
} /* size: 0, variables: 2 */

// <020A48AD> ../thirdparty/dr_libs/dr_wav.h:7060
// variables: 3
void drwav_s24_to_s16(drwav_int16* pOut, const drwav_uint8* pIn, size_t sampleCount)
{
	int r; // 7062
	size_t i; // 7063
	{
		int x; // 7065
	}
} /* size: 109, variables: 2 */

// <020A4853> ../thirdparty/dr_libs/dr_wav.h:7071
// variables: 3
void drwav_s32_to_s16(drwav_int16* pOut, const drwav_int32* pIn, size_t sampleCount)
{
	int r; // 7073
	size_t i; // 7074
	{
		int x; // 7076
	}
} /* size: 0, variables: 2 */

// <020A47EE> ../thirdparty/dr_libs/dr_wav.h:7082
// variables: 4
void drwav_f32_to_s16(drwav_int16* pOut, const float* pIn, size_t sampleCount)
{
	int r; // 7084
	size_t i; // 7085
	{
		float x; // 7087
		float c; // 7088
	}
} /* size: 0, variables: 2 */

// <020A4789> ../thirdparty/dr_libs/dr_wav.h:7097
// variables: 4
void drwav_f64_to_s16(drwav_int16* pOut, const double* pIn, size_t sampleCount)
{
	int r; // 7099
	size_t i; // 7100
	{
		double x; // 7102
		double c; // 7103
	}
} /* size: 0, variables: 2 */

// <020A4747> ../thirdparty/dr_libs/dr_wav.h:7112
// variable: 1
void drwav_alaw_to_s16(drwav_int16* pOut, const drwav_uint8* pIn, size_t sampleCount)
{
	size_t i; // 7114
} /* size: 0, variables: 1 */

// <020A4705> ../thirdparty/dr_libs/dr_wav.h:7120
// variable: 1
void drwav_mulaw_to_s16(drwav_int16* pOut, const drwav_uint8* pIn, size_t sampleCount)
{
	size_t i; // 7122
} /* size: 0, variables: 1 */

// <020A4690> ../thirdparty/dr_libs/dr_wav.h:7129
// variables: 4
void drwav__pcm_to_f32(float* pOut, const drwav_uint8* pIn, size_t sampleCount, unsigned int bytesPerSample)
{
	unsigned int i; // 7131
	{
		drwav_uint64 sample; // 7163
		unsigned int shift; // 7164
		unsigned int j; // 7166
	}
} /* size: 0, variables: 1 */

// <020A4640> ../thirdparty/dr_libs/dr_wav.h:7182
// variable: 1
void drwav__ieee_to_f32(float* pOut, const drwav_uint8* pIn, size_t sampleCount, unsigned int bytesPerSample)
{
	{
		unsigned int i; // 7185
	}
} /* size: 0 */

// <020A41E5> ../thirdparty/dr_libs/dr_wav.h:7201
// variables: 11
// function calls: 9
drwav_uint64 drwav_read_pcm_frames_f32__pcm(drwav* pWav, drwav_uint64 framesToRead, float* pBufferOut)
{
	drwav_uint64 totalFramesRead; // 7203
	drwav_uint8 sampleData; // 7204
	drwav_uint32 bytesPerFrame; // 7205
	drwav_uint32 bytesPerSample; // 7206
	drwav_uint64 samplesRead; // 7207
	{
		drwav_uint64 framesToReadThisIteration; // 7222
		drwav_uint64 framesRead; // 7223
		{
			drwav_uint64 sample; // 7163
			unsigned int shift; // 7164
			unsigned int j; // 7166
		}
		memset(void* __dest,
			int __ch,
			size_t __len);  // 7156
		{
			float x; // 7521
		}
		drwav_u8_to_f32(float* pOut,
				const drwav_uint8* pIn,
				size_t sampleCount);  // 7501
		drwav_u8_to_f32(float* pOut,
				const drwav_uint8* pIn,
				size_t sampleCount);  // 7135
		drwav_s16_to_f32(float* pOut,
				const drwav_int16* pIn,
				size_t sampleCount);  // 7530
		drwav_s16_to_f32(float* pOut,
				const drwav_int16* pIn,
				size_t sampleCount);  // 7141
		drwav_s32_to_f32(float* pOut,
				const drwav_int32* pIn,
				size_t sampleCount);  // 7562
		drwav_s32_to_f32(float* pOut,
				const drwav_int32* pIn,
				size_t sampleCount);  // 7149
		drwav__pcm_to_f32(float* pOut,
					const drwav_uint8* pIn,
					size_t sampleCount,
					unsigned int bytesPerSample);  // 7237
	}
	drwav_get_bytes_per_pcm_frame(drwav* pWav); // 7209
} /* size: 0, variables: 5, inline expansions: 1 (0 bytes) */

// <020A4084> ../thirdparty/dr_libs/dr_wav.h:7247
// variables: 4
// function calls: 2
drwav_uint64 drwav_read_pcm_frames_f32__msadpcm_ima(drwav* pWav, drwav_uint64 framesToRead, float* pBufferOut)
{
	drwav_uint64 totalFramesRead; // 7253
	drwav_int16 samples16; // 7254
	{
		drwav_uint64 framesToReadThisIteration; // 7259
		drwav_uint64 framesRead; // 7260
		drwav_s16_to_f32(float* pOut,
				const drwav_int16* pIn,
				size_t sampleCount);  // 7530
		drwav_s16_to_f32(float* pOut,
				const drwav_int16* pIn,
				size_t sampleCount);  // 7267
	}
} /* size: 0, variables: 2 */

// <020A3D5F> ../thirdparty/dr_libs/dr_wav.h:7277
// variables: 8
// function calls: 5
drwav_uint64 drwav_read_pcm_frames_f32__ieee(drwav* pWav, drwav_uint64 framesToRead, float* pBufferOut)
{
	drwav_uint64 totalFramesRead; // 7279
	drwav_uint8 sampleData; // 7280
	drwav_uint32 bytesPerFrame; // 7281
	drwav_uint32 bytesPerSample; // 7282
	drwav_uint64 samplesRead; // 7283
	{
		drwav_uint64 framesToReadThisIteration; // 7303
		drwav_uint64 framesRead; // 7304
		memset(void* __dest,
			int __ch,
			size_t __len);  // 7195
		drwav_f64_to_f32(float* pOut,
				const double* pIn,
				size_t sampleCount);  // 7574
		drwav_f64_to_f32(float* pOut,
				const double* pIn,
				size_t sampleCount);  // 7191
		{
			unsigned int i; // 7185
		}
		drwav__ieee_to_f32(float* pOut,
					const drwav_uint8* pIn,
					size_t sampleCount,
					unsigned int bytesPerSample);  // 7318
	}
	drwav_get_bytes_per_pcm_frame(drwav* pWav); // 7290
} /* size: 0, variables: 5, inline expansions: 1 (0 bytes) */

// <020A3AE0> ../thirdparty/dr_libs/dr_wav.h:7328
// variables: 7
// function calls: 4
drwav_uint64 drwav_read_pcm_frames_f32__alaw(drwav* pWav, drwav_uint64 framesToRead, float* pBufferOut)
{
	drwav_uint64 totalFramesRead; // 7330
	drwav_uint8 sampleData; // 7331
	drwav_uint32 bytesPerFrame; // 7332
	drwav_uint32 bytesPerSample; // 7333
	drwav_uint64 samplesRead; // 7334
	{
		drwav_uint64 framesToReadThisIteration; // 7349
		drwav_uint64 framesRead; // 7350
		drwav__alaw_to_s16(drwav_uint8 sampleIn); // 7596
		drwav_alaw_to_f32(float* pOut,
					const drwav_uint8* pIn,
					size_t sampleCount);  // 7587
		drwav_alaw_to_f32(float* pOut,
					const drwav_uint8* pIn,
					size_t sampleCount);  // 7364
	}
	drwav_get_bytes_per_pcm_frame(drwav* pWav); // 7336
} /* size: 0, variables: 5, inline expansions: 1 (0 bytes) */

// <020A3861> ../thirdparty/dr_libs/dr_wav.h:7385
// variables: 7
// function calls: 4
drwav_uint64 drwav_read_pcm_frames_f32__mulaw(drwav* pWav, drwav_uint64 framesToRead, float* pBufferOut)
{
	drwav_uint64 totalFramesRead; // 7387
	drwav_uint8 sampleData; // 7388
	drwav_uint32 bytesPerFrame; // 7389
	drwav_uint32 bytesPerSample; // 7390
	drwav_uint64 samplesRead; // 7391
	{
		drwav_uint64 framesToReadThisIteration; // 7406
		drwav_uint64 framesRead; // 7407
		drwav__mulaw_to_s16(drwav_uint8 sampleIn); // 7609
		drwav_mulaw_to_f32(float* pOut,
					const drwav_uint8* pIn,
					size_t sampleCount);  // 7600
		drwav_mulaw_to_f32(float* pOut,
					const drwav_uint8* pIn,
					size_t sampleCount);  // 7421
	}
	drwav_get_bytes_per_pcm_frame(drwav* pWav); // 7393
} /* size: 0, variables: 5, inline expansions: 1 (0 bytes) */

// <020A3826> ../thirdparty/dr_libs/dr_wav.h:7442
drwav_uint64 drwav_read_pcm_frames_f32(drwav* pWav, drwav_uint64 framesToRead, float* pBufferOut)
{
} /* size: 0 */

// <020A378F> ../thirdparty/dr_libs/dr_wav.h:7480
// variable: 1
drwav_uint64 drwav_read_pcm_frames_f32le(drwav* pWav, drwav_uint64 framesToRead, float* pBufferOut)
{
	drwav_uint64 framesRead; // 7482
} /* size: 0, variables: 1 */

// <020A3654> ../thirdparty/dr_libs/dr_wav.h:7490
// variable: 1
// function calls: 3
drwav_uint64 drwav_read_pcm_frames_f32be(drwav* pWav, drwav_uint64 framesToRead, float* pBufferOut)
{
	drwav_uint64 framesRead; // 7492
	drwav__bswap32(drwav_uint32 n); // 1694
	drwav__bswap_f32(float n); // 1703
	drwav__bswap_samples_f32(float* pSamples,
				drwav_uint64 sampleCount);  // 7494
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <020A3605> ../thirdparty/dr_libs/dr_wav.h:7501
// variables: 2
void drwav_u8_to_f32(float* pOut, const drwav_uint8* pIn, size_t sampleCount)
{
	size_t i; // 7503
	{
		float x; // 7521
	}
} /* size: 0, variables: 1 */

// <020A35C3> ../thirdparty/dr_libs/dr_wav.h:7530
// variable: 1
void drwav_s16_to_f32(float* pOut, const drwav_int16* pIn, size_t sampleCount)
{
	size_t i; // 7532
} /* size: 0, variables: 1 */

// <020A3553> ../thirdparty/dr_libs/dr_wav.h:7543
// variables: 5
void drwav_s24_to_f32(float* pOut, const drwav_uint8* pIn, size_t sampleCount)
{
	size_t i; // 7545
	{
		double x; // 7552
		drwav_uint32 a; // 7553
		drwav_uint32 b; // 7554
		drwav_uint32 c; // 7555
	}
} /* size: 0, variables: 1 */

// <020A350B> ../thirdparty/dr_libs/dr_wav.h:7562
// variable: 1
void drwav_s32_to_f32(float* pOut, const drwav_int32* pIn, size_t sampleCount)
{
	size_t i; // 7564
} /* size: 0, variables: 1 */

// <020A34C9> ../thirdparty/dr_libs/dr_wav.h:7574
// variable: 1
void drwav_f64_to_f32(float* pOut, const double* pIn, size_t sampleCount)
{
	size_t i; // 7576
} /* size: 0, variables: 1 */

// <020A3487> ../thirdparty/dr_libs/dr_wav.h:7587
// variable: 1
void drwav_alaw_to_f32(float* pOut, const drwav_uint8* pIn, size_t sampleCount)
{
	size_t i; // 7589
} /* size: 0, variables: 1 */

// <020A3445> ../thirdparty/dr_libs/dr_wav.h:7600
// variable: 1
void drwav_mulaw_to_f32(float* pOut, const drwav_uint8* pIn, size_t sampleCount)
{
	size_t i; // 7602
} /* size: 0, variables: 1 */

// <020A33D0> ../thirdparty/dr_libs/dr_wav.h:7615
// variables: 4
void drwav__pcm_to_s32(drwav_int32* pOut, const drwav_uint8* pIn, size_t totalSampleCount, unsigned int bytesPerSample)
{
	unsigned int i; // 7617
	{
		drwav_uint64 sample; // 7651
		unsigned int shift; // 7652
		unsigned int j; // 7654
	}
} /* size: 0, variables: 1 */

// <020A338D> ../thirdparty/dr_libs/dr_wav.h:7670
void drwav__ieee_to_s32(drwav_int32* pOut, const drwav_uint8* pIn, size_t totalSampleCount, unsigned int bytesPerSample)
{
} /* size: 0 */

// <020A2F97> ../thirdparty/dr_libs/dr_wav.h:7686
// variables: 10
// function calls: 7
drwav_uint64 drwav_read_pcm_frames_s32__pcm(drwav* pWav, drwav_uint64 framesToRead, drwav_int32* pBufferOut)
{
	drwav_uint64 totalFramesRead; // 7688
	drwav_uint8 sampleData; // 7689
	drwav_uint32 bytesPerFrame; // 7690
	drwav_uint32 bytesPerSample; // 7691
	drwav_uint64 samplesRead; // 7692
	{
		drwav_uint64 framesToReadThisIteration; // 7712
		drwav_uint64 framesRead; // 7713
		{
			drwav_uint64 sample; // 7651
			unsigned int shift; // 7652
			unsigned int j; // 7654
		}
		drwav_u8_to_s32(drwav_int32* pOut,
				const drwav_uint8* pIn,
				size_t sampleCount);  // 7984
		drwav_u8_to_s32(drwav_int32* pOut,
				const drwav_uint8* pIn,
				size_t sampleCount);  // 7621
		memset(void* __dest,
			int __ch,
			size_t __len);  // 7644
		drwav_s16_to_s32(drwav_int32* pOut,
				const drwav_int16* pIn,
				size_t sampleCount);  // 7997
		drwav_s16_to_s32(drwav_int32* pOut,
				const drwav_int16* pIn,
				size_t sampleCount);  // 7627
		drwav__pcm_to_s32(drwav_int32* pOut,
					const drwav_uint8* pIn,
					size_t totalSampleCount,
					unsigned int bytesPerSample);  // 7727
	}
	drwav_get_bytes_per_pcm_frame(drwav* pWav); // 7699
} /* size: 0, variables: 5, inline expansions: 1 (0 bytes) */

// <020A2E25> ../thirdparty/dr_libs/dr_wav.h:7737
// variables: 4
// function calls: 2
drwav_uint64 drwav_read_pcm_frames_s32__msadpcm_ima(drwav* pWav, drwav_uint64 framesToRead, drwav_int32* pBufferOut)
{
	drwav_uint64 totalFramesRead; // 7743
	drwav_int16 samples16; // 7744
	{
		drwav_uint64 framesToReadThisIteration; // 7747
		drwav_uint64 framesRead; // 7748
		drwav_s16_to_s32(drwav_int32* pOut,
				const drwav_int16* pIn,
				size_t sampleCount);  // 7997
		drwav_s16_to_s32(drwav_int32* pOut,
				const drwav_int16* pIn,
				size_t sampleCount);  // 7755
	}
} /* size: 0, variables: 2 */

// <020A2AD1> ../thirdparty/dr_libs/dr_wav.h:7765
// variables: 7
// function calls: 7
drwav_uint64 drwav_read_pcm_frames_s32__ieee(drwav* pWav, drwav_uint64 framesToRead, drwav_int32* pBufferOut)
{
	drwav_uint64 totalFramesRead; // 7767
	drwav_uint8 sampleData; // 7768
	drwav_uint32 bytesPerFrame; // 7769
	drwav_uint32 bytesPerSample; // 7770
	drwav_uint64 samplesRead; // 7771
	{
		drwav_uint64 framesToReadThisIteration; // 7786
		drwav_uint64 framesRead; // 7787
		memset(void* __dest,
			int __ch,
			size_t __len);  // 7680
		drwav_f64_to_s32(drwav_int32* pOut,
				const double* pIn,
				size_t sampleCount);  // 8041
		drwav_f64_to_s32(drwav_int32* pOut,
				const double* pIn,
				size_t sampleCount);  // 7676
		drwav_f32_to_s32(drwav_int32* pOut,
				const float* pIn,
				size_t sampleCount);  // 8028
		drwav_f32_to_s32(drwav_int32* pOut,
				const float* pIn,
				size_t sampleCount);  // 7673
		drwav__ieee_to_s32(drwav_int32* pOut,
					const drwav_uint8* pIn,
					size_t totalSampleCount,
					unsigned int bytesPerSample);  // 7801
	}
	drwav_get_bytes_per_pcm_frame(drwav* pWav); // 7773
} /* size: 0, variables: 5, inline expansions: 1 (0 bytes) */

// <020A2852> ../thirdparty/dr_libs/dr_wav.h:7811
// variables: 7
// function calls: 4
drwav_uint64 drwav_read_pcm_frames_s32__alaw(drwav* pWav, drwav_uint64 framesToRead, drwav_int32* pBufferOut)
{
	drwav_uint64 totalFramesRead; // 7813
	drwav_uint8 sampleData; // 7814
	drwav_uint32 bytesPerFrame; // 7815
	drwav_uint32 bytesPerSample; // 7816
	drwav_uint64 samplesRead; // 7817
	{
		drwav_uint64 framesToReadThisIteration; // 7832
		drwav_uint64 framesRead; // 7833
		drwav__alaw_to_s16(drwav_uint8 sampleIn); // 8063
		drwav_alaw_to_s32(drwav_int32* pOut,
					const drwav_uint8* pIn,
					size_t sampleCount);  // 8054
		drwav_alaw_to_s32(drwav_int32* pOut,
					const drwav_uint8* pIn,
					size_t sampleCount);  // 7847
	}
	drwav_get_bytes_per_pcm_frame(drwav* pWav); // 7819
} /* size: 0, variables: 5, inline expansions: 1 (0 bytes) */

// <020A25C2> ../thirdparty/dr_libs/dr_wav.h:7868
// variables: 7
// function calls: 4
drwav_uint64 drwav_read_pcm_frames_s32__mulaw(drwav* pWav, drwav_uint64 framesToRead, drwav_int32* pBufferOut)
{
	drwav_uint64 totalFramesRead; // 7870
	drwav_uint8 sampleData; // 7871
	drwav_uint32 bytesPerFrame; // 7872
	drwav_uint32 bytesPerSample; // 7873
	drwav_uint64 samplesRead; // 7874
	{
		drwav_uint64 framesToReadThisIteration; // 7889
		drwav_uint64 framesRead; // 7890
		drwav__mulaw_to_s16(drwav_uint8 sampleIn); // 8076
		drwav_mulaw_to_s32(drwav_int32* pOut,
					const drwav_uint8* pIn,
					size_t sampleCount);  // 8067
		drwav_mulaw_to_s32(drwav_int32* pOut,
					const drwav_uint8* pIn,
					size_t sampleCount);  // 7904
	}
	drwav_get_bytes_per_pcm_frame(drwav* pWav); // 7876
} /* size: 0, variables: 5, inline expansions: 1 (0 bytes) */

// <020A2587> ../thirdparty/dr_libs/dr_wav.h:7925
drwav_uint64 drwav_read_pcm_frames_s32(drwav* pWav, drwav_uint64 framesToRead, drwav_int32* pBufferOut)
{
} /* size: 0 */

// <020A24F0> ../thirdparty/dr_libs/dr_wav.h:7963
// variable: 1
drwav_uint64 drwav_read_pcm_frames_s32le(drwav* pWav, drwav_uint64 framesToRead, drwav_int32* pBufferOut)
{
	drwav_uint64 framesRead; // 7965
} /* size: 0, variables: 1 */

// <020A23BA> ../thirdparty/dr_libs/dr_wav.h:7973
// variable: 1
// function calls: 3
drwav_uint64 drwav_read_pcm_frames_s32be(drwav* pWav, drwav_uint64 framesToRead, drwav_int32* pBufferOut)
{
	drwav_uint64 framesRead; // 7975
	drwav__bswap32(drwav_uint32 n); // 1661
	drwav__bswap_s32(drwav_int32 n); // 1668
	drwav__bswap_samples_s32(drwav_int32* pSamples,
				drwav_uint64 sampleCount);  // 7977
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <020A2378> ../thirdparty/dr_libs/dr_wav.h:7984
// variable: 1
void drwav_u8_to_s32(drwav_int32* pOut, const drwav_uint8* pIn, size_t sampleCount)
{
	size_t i; // 7986
} /* size: 0, variables: 1 */

// <020A2330> ../thirdparty/dr_libs/dr_wav.h:7997
// variable: 1
void drwav_s16_to_s32(drwav_int32* pOut, const drwav_int16* pIn, size_t sampleCount)
{
	size_t i; // 7999
} /* size: 0, variables: 1 */

// <020A22BB> ../thirdparty/dr_libs/dr_wav.h:8010
// variables: 5
void drwav_s24_to_s32(drwav_int32* pOut, const drwav_uint8* pIn, size_t sampleCount)
{
	size_t i; // 8012
	{
		unsigned int s0; // 8019
		unsigned int s1; // 8020
		unsigned int s2; // 8021
		drwav_int32 sample32; // 8023
	}
} /* size: 0, variables: 1 */

// <020A2279> ../thirdparty/dr_libs/dr_wav.h:8028
// variable: 1
void drwav_f32_to_s32(drwav_int32* pOut, const float* pIn, size_t sampleCount)
{
	size_t i; // 8030
} /* size: 0, variables: 1 */

// <020A2237> ../thirdparty/dr_libs/dr_wav.h:8041
// variable: 1
void drwav_f64_to_s32(drwav_int32* pOut, const double* pIn, size_t sampleCount)
{
	size_t i; // 8043
} /* size: 0, variables: 1 */

// <020A21F5> ../thirdparty/dr_libs/dr_wav.h:8054
// variable: 1
void drwav_alaw_to_s32(drwav_int32* pOut, const drwav_uint8* pIn, size_t sampleCount)
{
	size_t i; // 8056
} /* size: 0, variables: 1 */

// <020A21B3> ../thirdparty/dr_libs/dr_wav.h:8067
// variable: 1
void drwav_mulaw_to_s32(drwav_int32* pOut, const drwav_uint8* pIn, size_t sampleCount)
{
	size_t i; // 8069
} /* size: 0, variables: 1 */

// <020A2017> ../thirdparty/dr_libs/dr_wav.h:8082
// variables: 3
// function calls: 2
drwav_int16* drwav__read_pcm_frames_and_close_s16(drwav* pWav, unsigned int* channels, unsigned int* sampleRate, drwav_uint64* totalFrameCount)
{
	drwav_uint64 sampleDataSize; // 8084
	drwav_int16* pSampleData; // 8085
	drwav_uint64 framesRead; // 8086
	drwav__free_from_callbacks(void* p,
					const drwav_allocation_callbacks* pAllocationCallbacks);  // 1896
	drwav__free_from_callbacks(void* p,
					const drwav_allocation_callbacks* pAllocationCallbacks);  // 8110
} /* size: 0, variables: 3, inline expansions: 2 (0 bytes) */

// <020A1E7B> ../thirdparty/dr_libs/dr_wav.h:8130
// variables: 3
// function calls: 2
float* drwav__read_pcm_frames_and_close_f32(drwav* pWav, unsigned int* channels, unsigned int* sampleRate, drwav_uint64* totalFrameCount)
{
	drwav_uint64 sampleDataSize; // 8132
	float* pSampleData; // 8133
	drwav_uint64 framesRead; // 8134
	drwav__free_from_callbacks(void* p,
					const drwav_allocation_callbacks* pAllocationCallbacks);  // 1896
	drwav__free_from_callbacks(void* p,
					const drwav_allocation_callbacks* pAllocationCallbacks);  // 8158
} /* size: 0, variables: 3, inline expansions: 2 (0 bytes) */

// <020A1CD9> ../thirdparty/dr_libs/dr_wav.h:8178
// variables: 3
// function calls: 2
drwav_int32* drwav__read_pcm_frames_and_close_s32(drwav* pWav, unsigned int* channels, unsigned int* sampleRate, drwav_uint64* totalFrameCount)
{
	drwav_uint64 sampleDataSize; // 8180
	drwav_int32* pSampleData; // 8181
	drwav_uint64 framesRead; // 8182
	drwav__free_from_callbacks(void* p,
					const drwav_allocation_callbacks* pAllocationCallbacks);  // 1896
	drwav__free_from_callbacks(void* p,
					const drwav_allocation_callbacks* pAllocationCallbacks);  // 8206
} /* size: 0, variables: 3, inline expansions: 2 (0 bytes) */

// <020A19D5> ../thirdparty/dr_libs/dr_wav.h:8228
// variable: 1
// function calls: 5
drwav_int16* drwav_open_and_read_pcm_frames_s16(drwav_read_proc onRead, drwav_seek_proc onSeek, drwav_tell_proc onTell, void* pUserData, unsigned int* channelsOut, unsigned int* sampleRateOut, drwav_uint64* totalFrameCountOut, const drwav_allocation_callbacks* pAllocationCallbacks)
{
	drwav wav; // 8230
	memset(void* __dest,
		int __ch,
		size_t __len);  // 3053
	drwav_copy_allocation_callbacks_or_defaults(const drwav_allocation_callbacks* pAllocationCallbacks); // 3058
	drwav_preinit(drwav* pWav,
			drwav_read_proc onRead,
			drwav_seek_proc onSeek,
			drwav_tell_proc onTell,
			void* pReadSeekTellUserData,
			const drwav_allocation_callbacks* pAllocationCallbacks);  // 3899
	drwav_init_ex(drwav* pWav,
			drwav_read_proc onRead,
			drwav_seek_proc onSeek,
			drwav_tell_proc onTell,
			drwav_chunk_proc onChunk,
			void* pReadSeekTellUserData,
			void* pChunkUserData,
			drwav_uint32 flags,
			const drwav_allocation_callbacks* pAllocationCallbacks);  // 3894
	drwav_init(drwav* pWav,
			drwav_read_proc onRead,
			drwav_seek_proc onSeek,
			drwav_tell_proc onTell,
			void* pUserData,
			const drwav_allocation_callbacks* pAllocationCallbacks);  // 8242
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <020A16D1> ../thirdparty/dr_libs/dr_wav.h:8249
// variable: 1
// function calls: 5
float* drwav_open_and_read_pcm_frames_f32(drwav_read_proc onRead, drwav_seek_proc onSeek, drwav_tell_proc onTell, void* pUserData, unsigned int* channelsOut, unsigned int* sampleRateOut, drwav_uint64* totalFrameCountOut, const drwav_allocation_callbacks* pAllocationCallbacks)
{
	drwav wav; // 8251
	memset(void* __dest,
		int __ch,
		size_t __len);  // 3053
	drwav_copy_allocation_callbacks_or_defaults(const drwav_allocation_callbacks* pAllocationCallbacks); // 3058
	drwav_preinit(drwav* pWav,
			drwav_read_proc onRead,
			drwav_seek_proc onSeek,
			drwav_tell_proc onTell,
			void* pReadSeekTellUserData,
			const drwav_allocation_callbacks* pAllocationCallbacks);  // 3899
	drwav_init_ex(drwav* pWav,
			drwav_read_proc onRead,
			drwav_seek_proc onSeek,
			drwav_tell_proc onTell,
			drwav_chunk_proc onChunk,
			void* pReadSeekTellUserData,
			void* pChunkUserData,
			drwav_uint32 flags,
			const drwav_allocation_callbacks* pAllocationCallbacks);  // 3894
	drwav_init(drwav* pWav,
			drwav_read_proc onRead,
			drwav_seek_proc onSeek,
			drwav_tell_proc onTell,
			void* pUserData,
			const drwav_allocation_callbacks* pAllocationCallbacks);  // 8263
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <020A13CD> ../thirdparty/dr_libs/dr_wav.h:8270
// variable: 1
// function calls: 5
drwav_int32* drwav_open_and_read_pcm_frames_s32(drwav_read_proc onRead, drwav_seek_proc onSeek, drwav_tell_proc onTell, void* pUserData, unsigned int* channelsOut, unsigned int* sampleRateOut, drwav_uint64* totalFrameCountOut, const drwav_allocation_callbacks* pAllocationCallbacks)
{
	drwav wav; // 8272
	memset(void* __dest,
		int __ch,
		size_t __len);  // 3053
	drwav_copy_allocation_callbacks_or_defaults(const drwav_allocation_callbacks* pAllocationCallbacks); // 3058
	drwav_preinit(drwav* pWav,
			drwav_read_proc onRead,
			drwav_seek_proc onSeek,
			drwav_tell_proc onTell,
			void* pReadSeekTellUserData,
			const drwav_allocation_callbacks* pAllocationCallbacks);  // 3899
	drwav_init_ex(drwav* pWav,
			drwav_read_proc onRead,
			drwav_seek_proc onSeek,
			drwav_tell_proc onTell,
			drwav_chunk_proc onChunk,
			void* pReadSeekTellUserData,
			void* pChunkUserData,
			drwav_uint32 flags,
			const drwav_allocation_callbacks* pAllocationCallbacks);  // 3894
	drwav_init(drwav* pWav,
			drwav_read_proc onRead,
			drwav_seek_proc onSeek,
			drwav_tell_proc onTell,
			void* pUserData,
			const drwav_allocation_callbacks* pAllocationCallbacks);  // 8284
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <020A10CC> ../thirdparty/dr_libs/dr_wav.h:8422
// variable: 1
// function calls: 6
drwav_int16* drwav_open_memory_and_read_pcm_frames_s16(const void* data, size_t dataSize, unsigned int* channelsOut, unsigned int* sampleRateOut, drwav_uint64* totalFrameCountOut, const drwav_allocation_callbacks* pAllocationCallbacks)
{
	drwav wav; // 8424
	memset(void* __dest,
		int __ch,
		size_t __len);  // 3053
	drwav_copy_allocation_callbacks_or_defaults(const drwav_allocation_callbacks* pAllocationCallbacks); // 3058
	drwav_preinit(drwav* pWav,
			drwav_read_proc onRead,
			drwav_seek_proc onSeek,
			drwav_tell_proc onTell,
			void* pReadSeekTellUserData,
			const drwav_allocation_callbacks* pAllocationCallbacks);  // 5639
	drwav_init_memory_ex(drwav* pWav,
				const void* data,
				size_t dataSize,
				drwav_chunk_proc onChunk,
				void* pChunkUserData,
				drwav_uint32 flags,
				const drwav_allocation_callbacks* pAllocationCallbacks);  // 5633
	drwav_init_memory_ex(drwav* pWav,
				const void* data,
				size_t dataSize,
				drwav_chunk_proc onChunk,
				void* pChunkUserData,
				drwav_uint32 flags,
				const drwav_allocation_callbacks* pAllocationCallbacks);  // 5630
	drwav_init_memory(drwav* pWav,
				const void* data,
				size_t dataSize,
				const drwav_allocation_callbacks* pAllocationCallbacks);  // 8436
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

// <020A0DD1> ../thirdparty/dr_libs/dr_wav.h:8443
// variable: 1
// function calls: 6
float* drwav_open_memory_and_read_pcm_frames_f32(const void* data, size_t dataSize, unsigned int* channelsOut, unsigned int* sampleRateOut, drwav_uint64* totalFrameCountOut, const drwav_allocation_callbacks* pAllocationCallbacks)
{
	drwav wav; // 8445
	memset(void* __dest,
		int __ch,
		size_t __len);  // 3053
	drwav_copy_allocation_callbacks_or_defaults(const drwav_allocation_callbacks* pAllocationCallbacks); // 3058
	drwav_preinit(drwav* pWav,
			drwav_read_proc onRead,
			drwav_seek_proc onSeek,
			drwav_tell_proc onTell,
			void* pReadSeekTellUserData,
			const drwav_allocation_callbacks* pAllocationCallbacks);  // 5639
	drwav_init_memory_ex(drwav* pWav,
				const void* data,
				size_t dataSize,
				drwav_chunk_proc onChunk,
				void* pChunkUserData,
				drwav_uint32 flags,
				const drwav_allocation_callbacks* pAllocationCallbacks);  // 5633
	drwav_init_memory_ex(drwav* pWav,
				const void* data,
				size_t dataSize,
				drwav_chunk_proc onChunk,
				void* pChunkUserData,
				drwav_uint32 flags,
				const drwav_allocation_callbacks* pAllocationCallbacks);  // 5630
	drwav_init_memory(drwav* pWav,
				const void* data,
				size_t dataSize,
				const drwav_allocation_callbacks* pAllocationCallbacks);  // 8457
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

// <020A0ACA> ../thirdparty/dr_libs/dr_wav.h:8464
// variable: 1
// function calls: 6
drwav_int32* drwav_open_memory_and_read_pcm_frames_s32(const void* data, size_t dataSize, unsigned int* channelsOut, unsigned int* sampleRateOut, drwav_uint64* totalFrameCountOut, const drwav_allocation_callbacks* pAllocationCallbacks)
{
	drwav wav; // 8466
	memset(void* __dest,
		int __ch,
		size_t __len);  // 3053
	drwav_copy_allocation_callbacks_or_defaults(const drwav_allocation_callbacks* pAllocationCallbacks); // 3058
	drwav_preinit(drwav* pWav,
			drwav_read_proc onRead,
			drwav_seek_proc onSeek,
			drwav_tell_proc onTell,
			void* pReadSeekTellUserData,
			const drwav_allocation_callbacks* pAllocationCallbacks);  // 5639
	drwav_init_memory_ex(drwav* pWav,
				const void* data,
				size_t dataSize,
				drwav_chunk_proc onChunk,
				void* pChunkUserData,
				drwav_uint32 flags,
				const drwav_allocation_callbacks* pAllocationCallbacks);  // 5633
	drwav_init_memory_ex(drwav* pWav,
				const void* data,
				size_t dataSize,
				drwav_chunk_proc onChunk,
				void* pChunkUserData,
				drwav_uint32 flags,
				const drwav_allocation_callbacks* pAllocationCallbacks);  // 5630
	drwav_init_memory(drwav* pWav,
				const void* data,
				size_t dataSize,
				const drwav_allocation_callbacks* pAllocationCallbacks);  // 8478
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

// <020A0A9C> ../thirdparty/dr_libs/dr_wav.h:8487
void drwav_free(void* p, const drwav_allocation_callbacks* pAllocationCallbacks)
{
} /* size: 0 */

// <020A0A7B> ../thirdparty/dr_libs/dr_wav.h:8496
drwav_uint16 drwav_bytes_to_u16(const drwav_uint8* data)
{
} /* size: 0 */

// <020A0A5A> ../thirdparty/dr_libs/dr_wav.h:8501
drwav_int16 drwav_bytes_to_s16(const drwav_uint8* data)
{
} /* size: 0 */

// <020A0A39> ../thirdparty/dr_libs/dr_wav.h:8506
drwav_uint32 drwav_bytes_to_u32(const drwav_uint8* data)
{
} /* size: 0 */

// <020A096D> ../thirdparty/dr_libs/dr_wav.h:8511
// variable: 1
float drwav_bytes_to_f32(const drwav_uint8* data)
{
	union  value; // 8516
} /* size: 0, variables: 1 */

// <020A08D5> ../thirdparty/dr_libs/dr_wav.h:8522
// function calls: 2
drwav_int32 drwav_bytes_to_s32(const drwav_uint8* data)
{
	drwav_bytes_to_u32_le(const drwav_uint8* data); // 8508
	drwav_bytes_to_u32(const drwav_uint8* data); // 8524
} /* size: 0, inline expansions: 2 (0 bytes) */

// <020A08B4> ../thirdparty/dr_libs/dr_wav.h:8527
drwav_uint64 drwav_bytes_to_u64(const drwav_uint8* data)
{
} /* size: 0 */

// <020A084D> ../thirdparty/dr_libs/dr_wav.h:8534
// function call: 1
drwav_int64 drwav_bytes_to_s64(const drwav_uint8* data)
{
	drwav_bytes_to_u64(const drwav_uint8* data); // 8536
} /* size: 0, inline expansions: 1 (0 bytes) */

// <020A0818> ../thirdparty/dr_libs/dr_wav.h:8540
// variable: 1
drwav_bool32 drwav_guid_equal(const drwav_uint8* a, const drwav_uint8* b)
{
	int i; // 8542
} /* size: 0, variables: 1 */

// <020A07EE> ../thirdparty/dr_libs/dr_wav.h:8552
drwav_bool32 drwav_fourcc_equal(const drwav_uint8* a, const char* b)
{
} /* size: 0 */

