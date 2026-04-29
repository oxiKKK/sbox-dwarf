
//
// soundsystem/snd_wave_source.h
//
//	referenced by: libengine2.so
//
//	functions: 4
//	classes: 2
//

// <02473C72> soundsystem/snd_wave_source.h:24
CAudioSource* Audio_CreateMemoryWave(CSfxTable *)
{
} /* size: 0 */

// <0254B429> soundsystem/snd_wave_source.h:28
// member functions: 20
// member variables: 2
// vtable entries: 6
// class size: 16
class CAudioSourceCached : public CAudioSource {
public:
	/* class CAudioSource <ancestor>; */ /* 0 8 */
	void CAudioSourceCached(CAudioSourceCached* , const CAudioSourceCached& );
	/* soundsystem/snd_wave_source.cpp:207 */
	void CAudioSourceCached(CAudioSourceCached* , CSfxTable* );
	/* soundsystem/snd_wave_source.cpp:211 */
	virtual void ~CAudioSourceCached(CAudioSourceCached* );
	/* soundsystem/snd_wave_source.cpp:216 */
	virtual int SampleRate(CAudioSourceCached* );
	/* soundsystem/snd_wave_source.cpp:235 */
	virtual void ReferenceAdd(CAudioSourceCached* , CAudioMixer* );
	/* soundsystem/snd_wave_source.cpp:225 */
	virtual void ReferenceRemove(CAudioSourceCached* , CAudioMixer* );
	/* soundsystem/snd_wave_source.cpp:250 */
	virtual bool CopySamples16(CAudioSourceCached* , CUtlVector<short int, CUtlMemory<short int, int> >& );
	/* soundsystem/snd_wave_source.cpp:338 */
	virtual bool ShouldDuckOtherVoices(CAudioSourceCached* );
	/* soundsystem/snd_wave_source.cpp:128 */
	virtual const char* GetFileName(CAudioSourceCached* , CBufferString* );
protected:
	/* soundsystem/snd_wave_source.cpp:244 */
	char* GetDataPointer(CAudioSourceCached* );
	CSfxTable * m_pSfx; /* 8 8 */
	void CAudioSourceCached(class CAudioSourceCached *, const class CAudioSourceCached  &); /* linkage=_ZN18CAudioSourceCachedC4ERKS_ */
	void CAudioSourceCached(class CAudioSourceCached *, class CSfxTable *); /* linkage=_ZN18CAudioSourceCachedC4EP9CSfxTable */
	virtual void ~CAudioSourceCached(class CAudioSourceCached *); /* linkage=_ZN18CAudioSourceCachedD4Ev */
	virtual int SampleRate(class CAudioSourceCached *); /* linkage=_ZN18CAudioSourceCached10SampleRateEv */
	/* <2550f49> soundsystem/snd_wave_source.cpp:235 */
	virtual void ReferenceAdd(class CAudioSourceCached *, class CAudioMixer *); /* linkage=_ZN18CAudioSourceCached12ReferenceAddEP11CAudioMixer */
	virtual void ReferenceRemove(class CAudioSourceCached *, class CAudioMixer *); /* linkage=_ZN18CAudioSourceCached15ReferenceRemoveEP11CAudioMixer */
	virtual bool CopySamples16(class CAudioSourceCached *, class CUtlVector<short int, CUtlMemory<short int, int> > &); /* linkage=_ZN18CAudioSourceCached13CopySamples16ER10CUtlVectorIs10CUtlMemoryIsiEE */
	virtual bool ShouldDuckOtherVoices(class CAudioSourceCached *); /* linkage=_ZN18CAudioSourceCached21ShouldDuckOtherVoicesEv */
	virtual const char  * GetFileName(class CAudioSourceCached *, class CBufferString *); /* linkage=_ZN18CAudioSourceCached11GetFileNameEP13CBufferString */
	/* <2551323> soundsystem/snd_wave_source.cpp:244 */
	char * GetDataPointer(class CAudioSourceCached *); /* linkage=_ZN18CAudioSourceCached14GetDataPointerEv */
};

// <024B8DFF> soundsystem/snd_wave_source.h:31
void CAudioSourceCached::CAudioSourceCached(CSfxTable* pSfx)
{
} /* size: 0 */

// <024B8D8E> soundsystem/snd_wave_source.h:32
void CAudioSourceCached::~CAudioSourceCached()
{
} /* size: 0 */

// <0254B20A> soundsystem/snd_wave_source.h:48
// member functions: 24
// member variables: 2
// vtable entries: 7
// class size: 24
class CAudioSourceWave : public CAudioSourceCached {
public:
	/* class CAudioSourceCached <ancestor>; */ /* 0 16 */
	/* soundsystem/snd_wave_source.cpp:101 */
	void CAudioSourceWave(CAudioSourceWave* , CSfxTable* );
	/* soundsystem/snd_wave_source.cpp:115 */
	virtual void ~CAudioSourceWave(CAudioSourceWave* );
	/* soundsystem/snd_wave_source.cpp:119 */
	virtual int GetType(CAudioSourceWave* );
	/* soundsystem/snd_wave_source.cpp:137 */
	virtual int SampleSize(CAudioSourceWave* );
	/* soundsystem/snd_wave_source.cpp:146 */
	virtual uint SampleCount(CAudioSourceWave* );
	/* soundsystem/snd_wave_source.cpp:152 */
	virtual int DataSize(CAudioSourceWave* );
	/* soundsystem/snd_wave_source.cpp:170 */
	const void* GetHeader(CAudioSourceWave* );
	/* soundsystem/snd_wave_source.h:62 */
	virtual bool IsPlayerVoice(CAudioSourceWave* );
	/* soundsystem/snd_wave_source.cpp:157 */
	virtual bool IsLooped(CAudioSourceWave* );
	/* soundsystem/snd_wave_source.cpp:162 */
	virtual int ChannelCount(CAudioSourceWave* );
	/* soundsystem/snd_wave_source.cpp:180 */
	int ConvertLoopedPosition(CAudioSourceWave* , int);
protected:
	uint m_numDecodedSamples; /* 16 4 */
private:
	/* soundsystem/snd_wave_source.h:76 */
	void CAudioSourceWave(CAudioSourceWave* , const CAudioSourceWave& );
	void CAudioSourceWave(class CAudioSourceWave *, class CSfxTable *); /* linkage=_ZN16CAudioSourceWaveC4EP9CSfxTable */
	virtual void ~CAudioSourceWave(class CAudioSourceWave *); /* linkage=_ZN16CAudioSourceWaveD4Ev */
	virtual int GetType(class CAudioSourceWave *); /* linkage=_ZN16CAudioSourceWave7GetTypeEv */
	virtual int SampleSize(class CAudioSourceWave *); /* linkage=_ZN16CAudioSourceWave10SampleSizeEv */
	/* <2550ed0> soundsystem/snd_wave_source.cpp:146 */
	virtual uint SampleCount(class CAudioSourceWave *); /* linkage=_ZN16CAudioSourceWave11SampleCountEv */
	virtual int DataSize(class CAudioSourceWave *); /* linkage=_ZN16CAudioSourceWave8DataSizeEv */
	const void  * GetHeader(class CAudioSourceWave *); /* linkage=_ZN16CAudioSourceWave9GetHeaderEv */
	virtual bool IsPlayerVoice(class CAudioSourceWave *); /* linkage=_ZN16CAudioSourceWave13IsPlayerVoiceEv */
	/* <2550efa> soundsystem/snd_wave_source.cpp:157 */
	virtual bool IsLooped(class CAudioSourceWave *); /* linkage=_ZN16CAudioSourceWave8IsLoopedEv */
	virtual int ChannelCount(class CAudioSourceWave *); /* linkage=_ZN16CAudioSourceWave12ChannelCountEv */
	/* <25512a5> soundsystem/snd_wave_source.cpp:180 */
	int ConvertLoopedPosition(class CAudioSourceWave *, int); /* linkage=_ZN16CAudioSourceWave21ConvertLoopedPositionEi */
	void CAudioSourceWave(class CAudioSourceWave *, const class CAudioSourceWave  &); /* linkage=_ZN16CAudioSourceWaveC4ERKS_ */
};

// <025509B4> soundsystem/snd_wave_source.h:62
void CAudioSourceWave::IsPlayerVoice()
{
} /* size: 7 */

