
//
// public/soundsystem/soundschema.h
//
//	referenced by: libengine2.so
//
//	functions: 11
//	classes: 2
//	structs: 10
//

// <0065923C> ../public/soundsystem/soundschema.h:19
// member variables: 2
// struct size: 8
struct CEmphasisSample_t {
	float32 time; /* 0 4 */
	float32 value; /* 4 4 */
};

// <0065926D> ../public/soundsystem/soundschema.h:26
// member functions: 3
// member variables: 3
// struct size: 12
struct CBasePhonemeTag_t {
	/* ../public/soundsystem/soundschema.h:29 */
	float GetStartTime(const CBasePhonemeTag_t* );
	/* ../public/soundsystem/soundschema.h:30 */
	float GetEndTime(const CBasePhonemeTag_t* );
	/* ../public/soundsystem/soundschema.h:31 */
	int GetPhonemeCode(const CBasePhonemeTag_t* );
	float32 m_flStartTime; /* 0 4 */
	float32 m_flEndTime; /* 4 4 */
	uint16 m_nPhonemeCode; /* 8 2 */
};

// <00659C9F> ../public/soundsystem/soundschema.h:39
// member variables: 6
// struct size: 40
struct CMorphData_t {
	CResourceArray<float> m_times; /* 0 8 */
	CResourceArray<unsigned int> m_nameHashCodes; /* 8 8 */
	CResourceArray<CResourceString> m_nameStrings; /* 16 8 */
	CResourceArray<CResourceArray<float> > m_samples; /* 24 8 */
	float m_flEaseIn; /* 32 4 */
	float m_flEaseOut; /* 36 4 */
};

// <0065A3A0> ../public/soundsystem/soundschema.h:74
// member functions: 9
// member variables: 3
// class size: 20
class CSentenceOnDisk_t {
	/* ../public/soundsystem/soundschema.h:77 */
	float GetIntensity(const CSentenceOnDisk_t* , float, float);
	/* ../public/soundsystem/soundschema.h:78 */
	CEmphasisSample_t* GetBoundedSample(CSentenceOnDisk_t* , int, float);
	/* ../public/soundsystem/soundschema.h:79 */
	const CEmphasisSample_t* GetBoundedSample(const CSentenceOnDisk_t* , int, float);
	/* ../public/soundsystem/soundschema.h:80 */
	int GetNumSamples(const CSentenceOnDisk_t* );
	/* ../public/soundsystem/soundschema.h:81 */
	CEmphasisSample_t* GetSample(CSentenceOnDisk_t* , int);
	/* ../public/soundsystem/soundschema.h:82 */
	const CEmphasisSample_t* GetSample(const CSentenceOnDisk_t* , int);
	/* ../public/soundsystem/soundschema.h:84 */
	bool GetVoiceDuck(const CSentenceOnDisk_t* );
	/* ../public/soundsystem/soundschema.h:86 */
	int GetRuntimePhonemeCount(const CSentenceOnDisk_t* );
	/* ../public/soundsystem/soundschema.h:87 */
	const CBasePhonemeTag_t* GetRuntimePhoneme(const CSentenceOnDisk_t* , int);
	bool m_bShouldVoiceDuck; /* 0 1 */
	CResourceArray<CBasePhonemeTag_t> m_RunTimePhonemes; /* 4 8 */
	CResourceArray<CEmphasisSample_t> m_EmphasisSamples; /* 12 8 */
};

// <0065A56D> ../public/soundsystem/soundschema.h:205
// member variables: 3
// struct size: 4
struct soundinfoheader_t {
	uint16 m_nRate; /* 0 2 */
	uint8 m_nFormat; /* 2 1 */
	uint8 m_nChannels; /* 3 1 */
};

// <0065A765> ../public/soundsystem/soundschema.h:219
// member functions: 10
// member variables: 7
// struct size: 32
struct VSoundV00_t {
	uint32 m_bitpackedsoundinfo; /* 0 4 */
	/* ../public/soundsystem/soundschema.h:223 */
	const soundinfoheader_t& info(const VSoundV00_t* );
	/* ../public/soundsystem/soundschema.h:224 */
	vsound_format_t format(const VSoundV00_t* );
	/* ../public/soundsystem/soundschema.h:225 */
	int BitsPerSample(const VSoundV00_t* );
	/* ../public/soundsystem/soundschema.h:226 */
	int channels(const VSoundV00_t* );
	/* ../public/soundsystem/soundschema.h:227 */
	int BytesPerSample(const VSoundV00_t* );
	/* ../public/soundsystem/soundschema.h:228 */
	int m_sampleFrameSize(const VSoundV00_t* );
	/* ../public/soundsystem/soundschema.h:229 */
	int m_rate(const VSoundV00_t* );
	/* ../public/soundsystem/soundschema.h:230 */
	float32 Duration(const VSoundV00_t* );
	/* ../public/soundsystem/soundschema.h:232 */
	int BitsPerSample(const VSoundV00_t* , vsound_format_t);
	/* ../public/soundsystem/soundschema.h:239 */
	int BytesPerSample(const VSoundV00_t* , vsound_format_t);
	int32 m_loopStart; /* 4 4 */
	uint32 m_sampleCount; /* 8 4 */
	float32 m_flDuration; /* 12 4 */
	CResourcePointer<CSentenceOnDisk_t> m_SentenceV00; /* 16 4 */
	CResourceArray<unsigned char> m_pHeader; /* 20 8 */
	uint32 m_nStreamingDataSize; /* 28 4 */
};

// <026A39D9> ../public/soundsystem/soundschema.h:223
inline void VSoundV00_t::info()
{
} /* size: 0 */

// <026A39C0> ../public/soundsystem/soundschema.h:224
inline void VSoundV00_t::format()
{
} /* size: 0 */

// <02550B05> ../public/soundsystem/soundschema.h:225
inline void VSoundV00_t::BitsPerSample()
{
} /* size: 0 */

// <026A398E> ../public/soundsystem/soundschema.h:226
inline void VSoundV00_t::channels()
{
} /* size: 0 */

// <02550AD3> ../public/soundsystem/soundschema.h:227
inline void VSoundV00_t::BytesPerSample()
{
} /* size: 0 */

// <026A395C> ../public/soundsystem/soundschema.h:228
inline void VSoundV00_t::m_sampleFrameSize()
{
} /* size: 0 */

// <026A3943> ../public/soundsystem/soundschema.h:229
inline void VSoundV00_t::m_rate()
{
} /* size: 0 */

// <01338EB0> ../public/soundsystem/soundschema.h:230
inline void VSoundV00_t::Duration()
{
} /* size: 0 */

// <02550A7C> ../public/soundsystem/soundschema.h:232
inline void VSoundV00_t::BitsPerSample(vsound_format_t nFormat)
{
} /* size: 0 */

// <02550A57> ../public/soundsystem/soundschema.h:239
inline void VSoundV00_t::BytesPerSample(vsound_format_t nFormat)
{
} /* size: 0 */

// <0065A942> ../public/soundsystem/soundschema.h:259
// member variables: 2
// struct size: 40
struct VSoundV01_t : public VSoundV00_t {
public:
	/* struct VSoundV00_t <ancestor>; */ /* 0 32 */
	CResourceArray<unsigned int> m_nSeekTable; /* 32 8 */
};

// <0065AB2E> ../public/soundsystem/soundschema.h:265
// member variables: 2
// struct size: 44
struct VSoundV02_t : public VSoundV01_t {
public:
	/* struct VSoundV01_t <ancestor>; */ /* 0 40 */
	CResourcePointer<CMorphData_t> m_MorphData; /* 40 4 */
};

// <0065AB56> ../public/soundsystem/soundschema.h:272
// member variables: 2
// struct size: 48
struct VSoundV04_t : public VSoundV02_t {
public:
	/* struct VSoundV02_t <ancestor>; */ /* 0 44 */
	int m_nLoopEnd; /* 44 4 */
};

// <0065AB7E> ../public/soundsystem/soundschema.h:279
// member variable: 1
// struct size: 48
struct VSoundOnDisk_t : public VSoundV04_t {
public:
	/* struct VSoundV04_t <ancestor>; */ /* 0 48 */
};

// <0065AB96> ../public/soundsystem/soundschema.h:284
// member functions: 17
// member variables: 2
// class size: 16
class CSentence_t {
	/* ../public/soundsystem/soundschema.h:287 */
	void Init(CSentence_t* , CSentenceOnDisk_t* , CMorphData_t* );
	/* ../public/soundsystem/soundschema.h:295 */
	float GetIntensity(const CSentence_t* , float, float);
	/* ../public/soundsystem/soundschema.h:296 */
	CEmphasisSample_t* GetBoundedSample(CSentence_t* , int, float);
	/* ../public/soundsystem/soundschema.h:297 */
	const CEmphasisSample_t* GetBoundedSample(const CSentence_t* , int, float);
	/* ../public/soundsystem/soundschema.h:298 */
	int GetNumSamples(const CSentence_t* );
	/* ../public/soundsystem/soundschema.h:299 */
	CEmphasisSample_t* GetSample(CSentence_t* , int);
	/* ../public/soundsystem/soundschema.h:300 */
	const CEmphasisSample_t* GetSample(const CSentence_t* , int);
	/* ../public/soundsystem/soundschema.h:301 */
	bool GetVoiceDuck(const CSentence_t* );
	/* ../public/soundsystem/soundschema.h:302 */
	int GetRuntimePhonemeCount(const CSentence_t* );
	/* ../public/soundsystem/soundschema.h:303 */
	const CBasePhonemeTag_t* GetRuntimePhoneme(const CSentence_t* , int);
	/* ../public/soundsystem/soundschema.h:305 */
	bool HasMorphs(const CSentence_t* );
	/* ../public/soundsystem/soundschema.h:306 */
	int GetMorphNameCount(const CSentence_t* );
	/* ../public/soundsystem/soundschema.h:307 */
	uint32 GetMorphNameHashCode(const CSentence_t* , int);
	/* ../public/soundsystem/soundschema.h:308 */
	float GetMorphDuration(const CSentence_t* );
	/* ../public/soundsystem/soundschema.h:309 */
	float GetMorphEaseIn(const CSentence_t* );
	/* ../public/soundsystem/soundschema.h:310 */
	float GetMorphEaseOut(const CSentence_t* );
	/* ../public/soundsystem/soundschema.h:312 */
	const float FindMorphSample(const CSentence_t* , float, const float** , const float** );
protected:
	CSentenceOnDisk_t * m_pSentence; /* 0 8 */
	CMorphData_t * m_pMorphData; /* 8 8 */
};

// <026A38A6> ../public/soundsystem/soundschema.h:287
// variables: 2
inline void CSentence_t::Init(CSentenceOnDisk_t* pSentence, CMorphData_t* pMorphData)
{
	const char   __FUNCTION__; // 125
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 289
	}
} /* size: 0, variables: 1 */

// <005E030B> ../public/soundsystem/soundschema.h:346
// member variables: 5
// struct size: 88
struct VSound_t : public VSoundOnDisk_t {
public:
	/* struct VSoundOnDisk_t <ancestor>; */ /* 0 48 */
	CSentence_t * m_Sentence; /* 48 8 */
	CSentence_t m_SentenceStore; /* 56 16 */
	uint32 m_nStreamingDataOffset; /* 72 4 */
	memhandle_t m_hStreamDataCacheHandle; /* 80 8 */
};

