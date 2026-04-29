
//
// public/soundsystem/mp3_helpers.h
//
//	referenced by: libengine2.so
//
//	functions: 4
//	classes: 3
//

// <012EAAB1> ../public/soundsystem/mp3_helpers.h:8
void CSimplePCMWaveData::CSimplePCMWaveData()
{
} /* size: 0 */

// <012EAA95> ../public/soundsystem/mp3_helpers.h:8
inline void CSimplePCMWaveData::CSimplePCMWaveData()
{
} /* size: 0 */

// <012EA9F9> ../public/soundsystem/mp3_helpers.h:8
void CSimplePCMWaveData::~CSimplePCMWaveData()
{
} /* size: 0 */

// <012EA9DD> ../public/soundsystem/mp3_helpers.h:8
inline void CSimplePCMWaveData::~CSimplePCMWaveData()
{
} /* size: 0 */

// <012044F9> ../public/soundsystem/mp3_helpers.h:8
// member functions: 10
// member variables: 7
// class size: 104
class CSimplePCMWaveData {
	/* ../public/soundsystem/mp3_helpers.h:13 */
	void ParseMP3File(CSimplePCMWaveData* , const uint8* , size_t);
	/* ../public/soundsystem/mp3_helpers.h:16 */
	void ParseWAVFile(CSimplePCMWaveData* , const uint8* , size_t);
	/* ../public/soundsystem/mp3_helpers.h:19 */
	bool ChangeBitDepth(CSimplePCMWaveData* , int);
	uint m_nFormat; /* 0 4 */
	uint m_nSampleRate; /* 4 4 */
	uint m_nChannels; /* 8 4 */
	uint m_nSampleCount; /* 12 4 */
	uint m_nBits; /* 16 4 */
	float m_flDuration; /* 20 4 */
	CUtlBuffer m_pcmData; /* 24 80 */
	void ~CSimplePCMWaveData(CSimplePCMWaveData* );
	void CSimplePCMWaveData(CSimplePCMWaveData* );
	void ParseMP3File(class CSimplePCMWaveData *, const uint8  *, size_t); /* linkage=_ZN18CSimplePCMWaveData12ParseMP3FileEPKhm */
	void ParseWAVFile(class CSimplePCMWaveData *, const uint8  *, size_t); /* linkage=_ZN18CSimplePCMWaveData12ParseWAVFileEPKhm */
	bool ChangeBitDepth(class CSimplePCMWaveData *, int); /* linkage=_ZN18CSimplePCMWaveData14ChangeBitDepthEi */
	void ~CSimplePCMWaveData(class CSimplePCMWaveData *); /* linkage=_ZN18CSimplePCMWaveDataD4Ev */
	void CSimplePCMWaveData(class CSimplePCMWaveData *); /* linkage=_ZN18CSimplePCMWaveDataC4Ev */
};

// <02601D64> ../public/soundsystem/mp3_helpers.h:8
// member functions: 8
// member variables: 7
// class size: 104
class CSimplePCMWaveData {
	/* ../public/soundsystem/mp3_helpers.h:13 */
	void ParseMP3File(CSimplePCMWaveData* , const uint8* , size_t);
	/* ../public/soundsystem/mp3_helpers.h:16 */
	void ParseWAVFile(CSimplePCMWaveData* , const uint8* , size_t);
	/* ../public/soundsystem/mp3_helpers.h:19 */
	bool ChangeBitDepth(CSimplePCMWaveData* , int);
	uint m_nFormat; /* 0 4 */
	uint m_nSampleRate; /* 4 4 */
	uint m_nChannels; /* 8 4 */
	uint m_nSampleCount; /* 12 4 */
	uint m_nBits; /* 16 4 */
	float m_flDuration; /* 20 4 */
	CUtlBuffer m_pcmData; /* 24 80 */
	void ParseMP3File(class CSimplePCMWaveData *, const uint8  *, size_t); /* linkage=_ZN18CSimplePCMWaveData12ParseMP3FileEPKhm */
	void ParseWAVFile(class CSimplePCMWaveData *, const uint8  *, size_t); /* linkage=_ZN18CSimplePCMWaveData12ParseWAVFileEPKhm */
	bool ChangeBitDepth(class CSimplePCMWaveData *, int); /* linkage=_ZN18CSimplePCMWaveData14ChangeBitDepthEi */
	void ~CSimplePCMWaveData(class CSimplePCMWaveData *); /* linkage=_ZN18CSimplePCMWaveDataD4Ev */
	void CSimplePCMWaveData(class CSimplePCMWaveData *); /* linkage=_ZN18CSimplePCMWaveDataC4Ev */
};

// <06D86B9E> ../../public/soundsystem/mp3_helpers.h:8
// member functions: 8
// member variables: 7
// class size: 104
class CSimplePCMWaveData {
	/* ../../public/soundsystem/mp3_helpers.h:13 */
	void ParseMP3File(CSimplePCMWaveData* , const uint8* , size_t);
	/* ../../public/soundsystem/mp3_helpers.h:16 */
	void ParseWAVFile(CSimplePCMWaveData* , const uint8* , size_t);
	/* ../../public/soundsystem/mp3_helpers.h:19 */
	bool ChangeBitDepth(CSimplePCMWaveData* , int);
	uint m_nFormat; /* 0 4 */
	uint m_nSampleRate; /* 4 4 */
	uint m_nChannels; /* 8 4 */
	uint m_nSampleCount; /* 12 4 */
	uint m_nBits; /* 16 4 */
	float m_flDuration; /* 20 4 */
	CUtlBuffer m_pcmData; /* 24 80 */
	void ParseMP3File(class CSimplePCMWaveData *, const uint8  *, size_t); /* linkage=_ZN18CSimplePCMWaveData12ParseMP3FileEPKhm */
	void ParseWAVFile(class CSimplePCMWaveData *, const uint8  *, size_t); /* linkage=_ZN18CSimplePCMWaveData12ParseWAVFileEPKhm */
	bool ChangeBitDepth(class CSimplePCMWaveData *, int); /* linkage=_ZN18CSimplePCMWaveData14ChangeBitDepthEi */
	void ~CSimplePCMWaveData(class CSimplePCMWaveData *); /* linkage=_ZN18CSimplePCMWaveDataD4Ev */
	void CSimplePCMWaveData(class CSimplePCMWaveData *); /* linkage=_ZN18CSimplePCMWaveDataC4Ev */
};

