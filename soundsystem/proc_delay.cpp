
//
// soundsystem/proc_delay.cpp
//
//	referenced by: libengine2.so
//
//	functions: 37
//	classes: 4
//

// <026D7F95> soundsystem/proc_delay.cpp:3
// member functions: 22
// member variables: 5
// class size: 32
class CMonoDelayLine {
	void CMonoDelayLine(CMonoDelayLine* , const CMonoDelayLine& );
	int ()(void) * * _vptr.CMonoDelayLine; /* 0 8 */
protected:
	uint m_nMaxDelay; /* 8 4 */
	uint m_nBufferCount; /* 12 4 */
	int m_nCurrent; /* 16 4 */
	CAudioMixBuffer * m_pBuffers; /* 24 8 */
	/* soundsystem/proc_delay.cpp:71 */
	void CMonoDelayLine(CMonoDelayLine* );
	/* soundsystem/proc_delay.cpp:75 */
	virtual void ~CMonoDelayLine(CMonoDelayLine* );
	/* soundsystem/proc_delay.cpp:15 */
	uint GetMaxDelay(const CMonoDelayLine* );
	/* soundsystem/proc_delay.cpp:80 */
	void Resize(CMonoDelayLine* , float);
	/* soundsystem/proc_delay.cpp:85 */
	void ResizeSamples(CMonoDelayLine* , uint);
	/* soundsystem/proc_delay.cpp:106 */
	void ProcessInput(CMonoDelayLine* , const CAudioMixBuffer& );
	/* soundsystem/proc_delay.cpp:113 */
	void AddFeedback(CMonoDelayLine* , const CAudioMixBuffer& , float);
	/* soundsystem/proc_delay.cpp:120 */
	void GetDelayedOutput(const CMonoDelayLine* , CAudioMixBuffer& , float, bool, float);
	/* soundsystem/proc_delay.cpp:25 */
	void GetDelayedOutput(const CMonoDelayLine* , CAudioMixBuffer& , bool, float);
	/* soundsystem/proc_delay.cpp:149 */
	float GetDelayedOutputSample(const CMonoDelayLine* , int32, float, float);
	void CMonoDelayLine(class CMonoDelayLine *, const class CMonoDelayLine  &); /* linkage=_ZN14CMonoDelayLineC4ERKS_ */
	void CMonoDelayLine(class CMonoDelayLine *); /* linkage=_ZN14CMonoDelayLineC4Ev */
	virtual void ~CMonoDelayLine(class CMonoDelayLine *); /* linkage=_ZN14CMonoDelayLineD4Ev */
	uint GetMaxDelay(const class CMonoDelayLine  *); /* linkage=_ZNK14CMonoDelayLine11GetMaxDelayEv */
	/* <26dd48d> soundsystem/proc_delay.cpp:80 */
	void Resize(class CMonoDelayLine *, float); /* linkage=_ZN14CMonoDelayLine6ResizeEf */
	/* <26dd357> soundsystem/proc_delay.cpp:85 */
	void ResizeSamples(class CMonoDelayLine *, uint); /* linkage=_ZN14CMonoDelayLine13ResizeSamplesEj */
	/* <26dd53c> soundsystem/proc_delay.cpp:106 */
	void ProcessInput(class CMonoDelayLine *, const class CAudioMixBuffer  &); /* linkage=_ZN14CMonoDelayLine12ProcessInputERK15CAudioMixBuffer */
	/* <26dd641> soundsystem/proc_delay.cpp:113 */
	void AddFeedback(class CMonoDelayLine *, const class CAudioMixBuffer  &, float); /* linkage=_ZN14CMonoDelayLine11AddFeedbackERK15CAudioMixBufferf */
	void GetDelayedOutput(const class CMonoDelayLine  *, class CAudioMixBuffer &, float, bool, float); /* linkage=_ZNK14CMonoDelayLine16GetDelayedOutputER15CAudioMixBufferfbf */
	void GetDelayedOutput(const class CMonoDelayLine  *, class CAudioMixBuffer &, bool, float); /* linkage=_ZNK14CMonoDelayLine16GetDelayedOutputER15CAudioMixBufferbf */
	float GetDelayedOutputSample(const class CMonoDelayLine  *, int32, float, float); /* linkage=_ZNK14CMonoDelayLine22GetDelayedOutputSampleEiff */
};

// <026D6505> soundsystem/proc_delay.cpp:34
// member functions: 12
// member variables: 2
// class size: 40
class CMonoShortDelayLine {
protected:
	uint m_nReadCounter; /* 0 4 */
	CUtlVector<float, CUtlMemory<float, int> > m_flData; /* 8 32 */
	/* soundsystem/proc_delay.cpp:42 */
	void ResizeSamples(CMonoShortDelayLine* , uint);
	/* soundsystem/proc_delay.cpp:43 */
	void PushInput(CMonoShortDelayLine* , float);
	/* soundsystem/proc_delay.cpp:44 */
	float PeekOutput(const CMonoShortDelayLine* , uint);
	/* soundsystem/proc_delay.cpp:45 */
	void MixTo(const CMonoShortDelayLine* , CAudioMixBuffer& , float);
	/* soundsystem/proc_delay.cpp:47 */
	fltx4 PeekOutput4(const CMonoShortDelayLine* , uint);
	/* soundsystem/proc_delay.cpp:48 */
	void PushInput4(CMonoShortDelayLine* , const fltx4& );
	void ResizeSamples(class CMonoShortDelayLine *, uint); /* linkage=_ZN19CMonoShortDelayLine13ResizeSamplesEj */
	void PushInput(class CMonoShortDelayLine *, float); /* linkage=_ZN19CMonoShortDelayLine9PushInputEf */
	float PeekOutput(const class CMonoShortDelayLine  *, uint); /* linkage=_ZNK19CMonoShortDelayLine10PeekOutputEj */
	void MixTo(const class CMonoShortDelayLine  *, class CAudioMixBuffer &, float); /* linkage=_ZNK19CMonoShortDelayLine5MixToER15CAudioMixBufferf */
	fltx4 PeekOutput4(const class CMonoShortDelayLine  *, uint); /* linkage=_ZNK19CMonoShortDelayLine11PeekOutput4Ej */
	void PushInput4(class CMonoShortDelayLine *, const fltx4  &); /* linkage=_ZN19CMonoShortDelayLine10PushInput4ERKDv4_f */
};

// <026D81CA> soundsystem/proc_delay.cpp:52
// member functions: 12
// member variables: 2
// class size: 40
class CFractionalMonoDelayLine : public CMonoDelayLine {
public:
	/* class CMonoDelayLine <ancestor>; */ /* 0 32 */
	void CFractionalMonoDelayLine(CFractionalMonoDelayLine* , const CFractionalMonoDelayLine& );
private:
	float m_flLastSample; /* 32 4 */
	/* soundsystem/proc_delay.cpp:162 */
	void CFractionalMonoDelayLine(CFractionalMonoDelayLine* );
	/* soundsystem/proc_delay.cpp:58 */
	virtual void ~CFractionalMonoDelayLine(CFractionalMonoDelayLine* );
	/* soundsystem/proc_delay.cpp:168 */
	void GetDelayedOutput(CFractionalMonoDelayLine* , CAudioMixBuffer& , float, bool, float);
	/* soundsystem/proc_delay.cpp:62 */
	void GetDelayedOutput(CFractionalMonoDelayLine* , CAudioMixBuffer& , bool, float);
	/* soundsystem/proc_delay.cpp:232 */
	float GetDelayedOutputSample(const CFractionalMonoDelayLine* , int32, float, float);
	void CFractionalMonoDelayLine(class CFractionalMonoDelayLine *, const class CFractionalMonoDelayLine  &); /* linkage=_ZN24CFractionalMonoDelayLineC4ERKS_ */
	void CFractionalMonoDelayLine(class CFractionalMonoDelayLine *); /* linkage=_ZN24CFractionalMonoDelayLineC4Ev */
	virtual void ~CFractionalMonoDelayLine(class CFractionalMonoDelayLine *); /* linkage=_ZN24CFractionalMonoDelayLineD4Ev */
	void GetDelayedOutput(class CFractionalMonoDelayLine *, class CAudioMixBuffer &, float, bool, float); /* linkage=_ZN24CFractionalMonoDelayLine16GetDelayedOutputER15CAudioMixBufferfbf */
	void GetDelayedOutput(class CFractionalMonoDelayLine *, class CAudioMixBuffer &, bool, float); /* linkage=_ZN24CFractionalMonoDelayLine16GetDelayedOutputER15CAudioMixBufferbf */
	float GetDelayedOutputSample(const class CFractionalMonoDelayLine  *, int32, float, float); /* linkage=_ZNK24CFractionalMonoDelayLine22GetDelayedOutputSampleEiff */
};

// <026D8A9B> soundsystem/proc_delay.cpp:58
// function call: 1
void CFractionalMonoDelayLine::~CFractionalMonoDelayLine()
{
	CMonoDelayLine::~CMonoDelayLine(); // 58
} /* size: 0, inline expansions: 1 (0 bytes) */

// <026D89F3> soundsystem/proc_delay.cpp:58
// function calls: 2
void CFractionalMonoDelayLine::~CFractionalMonoDelayLine()
{
	CMonoDelayLine::~CMonoDelayLine(); // 58
	CFractionalMonoDelayLine::~CFractionalMonoDelayLine(); // 58
} /* size: 0, inline expansions: 2 (0 bytes) */

// <026D89DA> soundsystem/proc_delay.cpp:58
inline void CFractionalMonoDelayLine::~CFractionalMonoDelayLine()
{
} /* size: 0 */

// <026DCB5F> soundsystem/proc_delay.cpp:71
void CMonoDelayLine::CMonoDelayLine()
{
} /* size: 0 */

// <026DCB03> soundsystem/proc_delay.cpp:75
void CMonoDelayLine::~CMonoDelayLine()
{
} /* size: 25 */

// <026DCA7E> soundsystem/proc_delay.cpp:75
// function call: 1
void CMonoDelayLine::~CMonoDelayLine()
{
	CMonoDelayLine::~CMonoDelayLine(); // 78
} /* size: 48, inline expansions: 1 (14 bytes) */

// <026DD48D> soundsystem/proc_delay.cpp:80
// function calls: 2
void CMonoDelayLine::Resize(float flMaxDelayMS)
{
	Ceil2Int(float a); // 36
	MsecToSamples(float ms); // 82
} /* size: 0, inline expansions: 2 (0 bytes) */

// <026DCA40> soundsystem/proc_delay.cpp:80
void CMonoDelayLine::Resize(float flMaxDelayMS)
{
} /* size: 0 */

// <026DD357> soundsystem/proc_delay.cpp:85
// variables: 5
// function calls: 2
void CMonoDelayLine::ResizeSamples(uint nMaxDelaySamples)
{
	uint nSamples; // 89
	uint nBuffers; // 91
	{
		CAudioMixBuffer* pNewBuffers; // 94
	}
	{
		CAudioMixBuffer* pNewBuffers; // 94
		{
			uint i; // 99
			CAudioMixBuffer::Silence(); // 101
		}
	}
	CMonoDelayLine::ResizeSamples(
			uint nMaxDelaySamples);  // 85
} /* size: 145, variables: 2, inline expansions: 1 (39 bytes) */

// <026DC9B7> soundsystem/proc_delay.cpp:85
// variables: 4
void CMonoDelayLine::ResizeSamples(uint nMaxDelaySamples)
{
	uint nSamples; // 89
	uint nBuffers; // 91
	{
		CAudioMixBuffer* pNewBuffers; // 94
		{
			uint i; // 99
		}
	}
} /* size: 0, variables: 2 */

// <026DD53C> soundsystem/proc_delay.cpp:106
// function calls: 3
void CMonoDelayLine::ProcessInput(const CAudioMixBuffer& input)
{
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 284
	CAudioMixBuffer::CopyFrom(
		const CAudioMixBuffer& src);  // 109
} /* size: 0, inline expansions: 3 (0 bytes) */

// <026DC992> soundsystem/proc_delay.cpp:106
void CMonoDelayLine::ProcessInput(const CAudioMixBuffer& input)
{
} /* size: 0 */

// <026DD641> soundsystem/proc_delay.cpp:113
// variable: 1
// function call: 1
void CMonoDelayLine::AddFeedback(const CAudioMixBuffer& feedbackSignal, float flFeedbackVolume)
{
	uint nBuffer; // 115
	CAudioMixBuffer::Mix(
		const CAudioMixBuffer& addThis,
		float flScale);  // 116
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <026DC955> soundsystem/proc_delay.cpp:113
// variable: 1
void CMonoDelayLine::AddFeedback(const CAudioMixBuffer& feedbackSignal, float flFeedbackVolume)
{
	uint nBuffer; // 115
} /* size: 0, variables: 1 */

// <026DC415> soundsystem/proc_delay.cpp:120
// variables: 6
// function calls: 15
void CMonoDelayLine::GetDelayedOutput(CAudioMixBuffer& output, float flDelay, bool bAccumulate, float flGain)
{
	uint nSamples; // 124
	uint nBufferIndex; // 127
	uint nSampleIndex; // 128
	uint nFirst; // 131
	uint nSecond; // 132
	{
		CAudioMixBuffer temp; // 138
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 324
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 328
		CAudioMixBuffer::Splice(
			const CAudioMixBuffer& source0,
			uint nSampleCount0,
			const CAudioMixBuffer& source1);  // 139
		CAudioMixBuffer::Mix(
			const CAudioMixBuffer& addThis,
			float flScale);  // 140
	}
	Ceil2Int(float a); // 36
	MsecToSamples(float ms); // 124
	Min<unsigned int>(const unsigned int& val1,
				const unsigned int& val2);  // 124
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 324
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 328
	CAudioMixBuffer::Splice(
		const CAudioMixBuffer& source0,
		uint nSampleCount0,
		const CAudioMixBuffer& source1);  // 144
	CAudioMixBuffer::operator*=(
			float flScale);  // 145
} /* size: 571, variables: 5, inline expansions: 9 (482 bytes) */

// <026DC2F5> soundsystem/proc_delay.cpp:149
// variables: 3
// function calls: 3
void CMonoDelayLine::GetDelayedOutputSample(int32 sampleIndex, float flDelay, float flGain)
{
	uint nSamples; // 153
	uint nBufferIndex; // 156
	uint nSampleIndex; // 157
	Ceil2Int(float a); // 36
	MsecToSamples(float ms); // 153
	Min<unsigned int>(const unsigned int& val1,
				const unsigned int& val2);  // 153
} /* size: 0, variables: 3, inline expansions: 3 (0 bytes) */

// <026DC2A3> soundsystem/proc_delay.cpp:162
// function call: 1
void CFractionalMonoDelayLine::CFractionalMonoDelayLine()
{
	CMonoDelayLine::CMonoDelayLine(); // 164
} /* size: 0, inline expansions: 1 (0 bytes) */

// <026DC28A> soundsystem/proc_delay.cpp:162
void CFractionalMonoDelayLine::CFractionalMonoDelayLine()
{
} /* size: 0 */

// <026DBC6A> soundsystem/proc_delay.cpp:168
// variables: 18
// function calls: 15
void CFractionalMonoDelayLine::GetDelayedOutput(CAudioMixBuffer& output, float flDelay, bool bAccumulate, float flGain)
{
	float flFraction; // 172
	uint nSamples; // 173
	uint nBufferIndex; // 176
	uint nSampleIndex; // 177
	uint nFirst; // 180
	uint nSecond; // 181
	{
		CAudioMixBuffer temp; // 189
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 328
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 324
		CAudioMixBuffer::Splice(
			const CAudioMixBuffer& source0,
			uint nSampleCount0,
			const CAudioMixBuffer& source1);  // 190
		CAudioMixBuffer::Mix(
			const CAudioMixBuffer& addThis,
			float flScale);  // 191
	}
	{
		uint nFirstBufferRange; // 204
		uint nSecondBufferRange; // 205
		float* pFirstBuffer; // 207
		float* pSecondBuffer; // 208
		float* pOutput; // 210
		{
			uint i; // 214
			{
				const float  flCurrentSample; // 216
				float flPreviousOutput; // 217
			}
		}
		{
			uint i; // 222
			{
				const float  flCurrentSample; // 224
				float flPreviousOutput; // 225
			}
		}
	}
	Floor2Int(float a); // 44
	MsecToFractionalSamples(float ms,
				float& outFraction);  // 173
	Min<unsigned int>(const unsigned int& val1,
				const unsigned int& val2);  // 173
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 324
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 328
	CAudioMixBuffer::Splice(
		const CAudioMixBuffer& source0,
		uint nSampleCount0,
		const CAudioMixBuffer& source1);  // 195
	CAudioMixBuffer::operator*=(
			float flScale);  // 196
} /* size: 0, variables: 6, inline expansions: 9 (0 bytes) */

// <026DBA89> soundsystem/proc_delay.cpp:232
// variables: 10
// function calls: 3
void CFractionalMonoDelayLine::GetDelayedOutputSample(int32 sampleIndex, float flDelay, float flGain)
{
	float flFraction; // 236
	uint nSamples; // 237
	uint nBufferIndex; // 240
	uint nSampleIndex; // 241
	uint nBufferIndexToRead; // 243
	uint nSampleIndexToRead; // 244
	const float& flFirst; // 247
	const char   __FUNCTION__; // 541
	float flSecond; // 251
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 249
	}
	Floor2Int(float a); // 44
	MsecToFractionalSamples(float ms,
				float& outFraction);  // 237
	Min<unsigned int>(const unsigned int& val1,
				const unsigned int& val2);  // 237
} /* size: 0, variables: 9, inline expansions: 3 (0 bytes) */

// <026D8E19> soundsystem/proc_delay.cpp:266
// function calls: 13
void CDelayAudioProcessor::~CDelayAudioProcessor()
{
	CUtlVectorBase<CAudioMixBuffer, CUtlMemory<CAudioMixBuffer, int> >::RemoveAll(); // 1798
	CUtlMemory<CAudioMixBuffer, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAudioMixBuffer, int>::Purge(); // 903
	CUtlMemory<CAudioMixBuffer, int>::Purge(); // 1799
	CUtlVectorBase<CAudioMixBuffer, CUtlMemory<CAudioMixBuffer, int> >::Purge(); // 560
	ValidateAlignment<CAudioMixBuffer>(void); // 508
	CUtlMemory<CAudioMixBuffer, int>::Purge(); // 510
	CUtlMemory<CAudioMixBuffer, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAudioMixBuffer, CUtlMemory<CAudioMixBuffer, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAudioMixBuffer, CUtlMemory<CAudioMixBuffer, int> >::~CUtlVector(); // 266
	CMonoDelayLine::~CMonoDelayLine(); // 266
	CUtlString::~CUtlString(); // 222
	CAudioProcessor::~CAudioProcessor(); // 266
} /* size: 171, inline expansions: 13 (321 bytes) */

// <026D8B2B> soundsystem/proc_delay.cpp:266
// function calls: 14
void CDelayAudioProcessor::~CDelayAudioProcessor()
{
	CUtlVectorBase<CAudioMixBuffer, CUtlMemory<CAudioMixBuffer, int> >::RemoveAll(); // 1798
	CUtlMemory<CAudioMixBuffer, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAudioMixBuffer, int>::Purge(); // 903
	CUtlMemory<CAudioMixBuffer, int>::Purge(); // 1799
	CUtlVectorBase<CAudioMixBuffer, CUtlMemory<CAudioMixBuffer, int> >::Purge(); // 560
	ValidateAlignment<CAudioMixBuffer>(void); // 508
	CUtlMemory<CAudioMixBuffer, int>::Purge(); // 510
	CUtlMemory<CAudioMixBuffer, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAudioMixBuffer, CUtlMemory<CAudioMixBuffer, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAudioMixBuffer, CUtlMemory<CAudioMixBuffer, int> >::~CUtlVector(); // 266
	CMonoDelayLine::~CMonoDelayLine(); // 266
	CUtlString::~CUtlString(); // 222
	CAudioProcessor::~CAudioProcessor(); // 266
	CDelayAudioProcessor::~CDelayAudioProcessor(); // 266
} /* size: 167, inline expansions: 14 (357 bytes) */

// <026D8B0D> soundsystem/proc_delay.cpp:266
inline void CDelayAudioProcessor::~CDelayAudioProcessor()
{
} /* size: 0 */

// <026D7D3D> soundsystem/proc_delay.cpp:266
// member functions: 22
// member variables: 5
// vtable entries: 5
// class size: 408
class CDelayAudioProcessor : public CAudioProcessor {
public:
	/* class CAudioProcessor <ancestor>; */ /* 0 0 */
	void CDelayAudioProcessor(CDelayAudioProcessor* , CDelayAudioProcessor& );
	void CDelayAudioProcessor(CDelayAudioProcessor* , const CDelayAudioProcessor& );
private:
	CMonoDelayLine m_delays[8]; /* 112 256 */
	CUtlVector<CAudioMixBuffer, CUtlMemory<CAudioMixBuffer, int> > m_feedbackSignal; /* 368 32 */
	float m_flDelay; /* 400 4 */
	float m_flFeedbackGain; /* 404 4 */
	/* soundsystem/proc_delay.cpp:277 */
	void CDelayAudioProcessor(CDelayAudioProcessor* , int);
	/* soundsystem/proc_delay.cpp:288 */
	void OnChannelCountChanged(CDelayAudioProcessor* );
	/* soundsystem/proc_delay.cpp:294 */
	void UpdateDelay(CDelayAudioProcessor* );
	/* soundsystem/proc_delay.cpp:310 */
	virtual void ProcessSingleChannel(CDelayAudioProcessor* , const CAudioMixBuffer& , CAudioMixBuffer* , int);
	/* soundsystem/proc_delay.cpp:328 */
	virtual void ProcessorApplied(CDelayAudioProcessor* , const CAudioMixBuffer* , CAudioMixBuffer* , int);
	/* soundsystem/proc_delay.cpp:340 */
	virtual bool SetNameParameter(CDelayAudioProcessor* , CUtlStringToken, uint32);
	/* soundsystem/proc_delay.cpp:344 */
	virtual uint32 GetNameParameter(CDelayAudioProcessor* , CUtlStringToken, uint32);
	/* soundsystem/proc_delay.cpp:349 */
	virtual bool SetControlParameter(CDelayAudioProcessor* , CUtlStringToken, float);
	virtual void ~CDelayAudioProcessor(CDelayAudioProcessor* );
	void CDelayAudioProcessor(class CDelayAudioProcessor *, class CDelayAudioProcessor &); /* linkage=_ZN20CDelayAudioProcessorC4EOS_ */
	void CDelayAudioProcessor(class CDelayAudioProcessor *, const class CDelayAudioProcessor  &); /* linkage=_ZN20CDelayAudioProcessorC4ERKS_ */
	void CDelayAudioProcessor(class CDelayAudioProcessor *, int); /* linkage=_ZN20CDelayAudioProcessorC4Ei */
	void OnChannelCountChanged(class CDelayAudioProcessor *); /* linkage=_ZN20CDelayAudioProcessor21OnChannelCountChangedEv */
	void UpdateDelay(class CDelayAudioProcessor *); /* linkage=_ZN20CDelayAudioProcessor11UpdateDelayEv */
	virtual void ProcessSingleChannel(class CDelayAudioProcessor *, const class CAudioMixBuffer  &, class CAudioMixBuffer *, int); /* linkage=_ZN20CDelayAudioProcessor20ProcessSingleChannelERK15CAudioMixBufferPS0_i */
	virtual void ProcessorApplied(class CDelayAudioProcessor *, const class CAudioMixBuffer  *, class CAudioMixBuffer *, int); /* linkage=_ZN20CDelayAudioProcessor16ProcessorAppliedEPK15CAudioMixBufferPS0_i */
	virtual bool SetNameParameter(class CDelayAudioProcessor *, class CUtlStringToken, uint32); /* linkage=_ZN20CDelayAudioProcessor16SetNameParameterE15CUtlStringTokenj */
	virtual uint32 GetNameParameter(class CDelayAudioProcessor *, class CUtlStringToken, uint32); /* linkage=_ZN20CDelayAudioProcessor16GetNameParameterE15CUtlStringTokenj */
	virtual bool SetControlParameter(class CDelayAudioProcessor *, class CUtlStringToken, float); /* linkage=_ZN20CDelayAudioProcessor19SetControlParameterE15CUtlStringTokenf */
	virtual void ~CDelayAudioProcessor(class CDelayAudioProcessor *); /* linkage=_ZN20CDelayAudioProcessorD4Ev */
};

// <026DBA30> soundsystem/proc_delay.cpp:277
void CDelayAudioProcessor::CDelayAudioProcessor(int channels)
{
	{
		{
		}
	}
} /* size: 0 */

// <026DB9E0> soundsystem/proc_delay.cpp:277
// variables: 2
inline void CDelayAudioProcessor::CDelayAudioProcessor(int channels)
{
	const char   __FUNCTION__; // 492
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 280
	}
} /* size: 0, variables: 1 */

// <026DB994> soundsystem/proc_delay.cpp:294
// variables: 2
inline void CDelayAudioProcessor::UpdateDelay()
{
	float flMaxDelay; // 296
	{
		int i; // 297
	}
} /* size: 0, variables: 1 */

// <026DB48C> soundsystem/proc_delay.cpp:310
// variables: 5
// function calls: 15
void CDelayAudioProcessor::ProcessSingleChannel(const CAudioMixBuffer& input, CAudioMixBuffer* pOutput, int nChannelIndex)
{
	const char   __FUNCTION__; // 492
	CAudioMixBuffer delayedSignal; // 315
	float flDelayInMs; // 317
	float flFeedbackVolume; // 320
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 312
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 284
	CAudioMixBuffer::CopyFrom(
		const CAudioMixBuffer& src);  // 109
	CMonoDelayLine::ProcessInput(
			const CAudioMixBuffer& input);  // 314
	dB_To_Gain(float dB); // 53
	dB_To_Gain(float dB); // 320
	dB_To_Gain(float dB); // 53
	dB_To_Gain(float dB); // 325
	dB_To_Gain(float dB); // 53
	dB_To_Gain(float dB); // 325
	CUtlMemory<CAudioMixBuffer, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAudioMixBuffer, CUtlMemory<CAudioMixBuffer, int> >::operator[](
			int i);  // 323
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 284
	CAudioMixBuffer::CopyFrom(
		const CAudioMixBuffer& src);  // 323
} /* size: 496, variables: 4, inline expansions: 15 (452 bytes) */

// <026DB272> soundsystem/proc_delay.cpp:328
// variables: 2
// function calls: 6
void CDelayAudioProcessor::ProcessorApplied(const CAudioMixBuffer* pInput, CAudioMixBuffer* pOutput, int nChannelCount)
{
	float flFeedbackVolume; // 330
	{
		int i; // 333
		CUtlMemory<CAudioMixBuffer, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CAudioMixBuffer, CUtlMemory<CAudioMixBuffer, int> >::operator[](
				int i);  // 335
		CAudioMixBuffer::Mix(
			const CAudioMixBuffer& addThis,
			float flScale);  // 116
		CMonoDelayLine::AddFeedback(
				const CAudioMixBuffer& feedbackSignal,
				float flFeedbackVolume);  // 335
	}
	dB_To_Gain(float dB); // 53
	dB_To_Gain(float dB); // 330
} /* size: 182, variables: 1, inline expansions: 2 (72 bytes) */

// <026DB224> soundsystem/proc_delay.cpp:340
void CDelayAudioProcessor::SetNameParameter(CUtlStringToken name, uint32 nNameValue)
{
} /* size: 7 */

// <026DB1D6> soundsystem/proc_delay.cpp:344
void CDelayAudioProcessor::GetNameParameter(CUtlStringToken name, uint32 nDefaultValue)
{
} /* size: 7 */

// <026DAFBE> soundsystem/proc_delay.cpp:349
// variable: 1
// function calls: 7
void CDelayAudioProcessor::SetControlParameter(CUtlStringToken name, float flValue)
{
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 351
	CUtlStringToken::operator==(
			const CUtlStringToken& other);  // 351
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 361
	{
		int i; // 297
		Ceil2Int(float a); // 36
		MsecToSamples(float ms); // 82
		CMonoDelayLine::Resize(
			float flMaxDelayMS);  // 299
	}
	CDelayAudioProcessor::UpdateDelay(); // 356
} /* size: 262, inline expansions: 4 (141 bytes) */

// <026DAB87> soundsystem/proc_delay.cpp:374
// variables: 2
// function calls: 17
void CMonoShortDelayLine::ResizeSamples(uint nMaxDelaySamples)
{
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 1078
	{
		const int  nAdd; // 1080
		const int  nAt; // 1081
		CUtlMemory<float, int>::NumAllocated(); // 782
		CUtlMemory<float, int>::Base(); // 112
		CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 368
		CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 824
		CUtlMemory<float, int>::IsGrowable(); // 823
		CUtlMemory<float, int>::IsExternallyAllocated(); // 859
		CUtlMemory<float, int>::IsExternallyAllocated(); // 861
		CUtlMemory<float, int>::Grow(
			int num);  // 806
		CUtlVectorBase<float, CUtlMemory<float, int> >::GrowMemory(
				int num);  // 784
		CUtlVectorBase<float, CUtlMemory<float, int> >::GrowVector(
				int num);  // 1445
		CUtlVectorBase<float, CUtlMemory<float, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<float, CUtlMemory<float, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<float, CUtlMemory<float, int> >::AddMultipleToTail(
					int num);  // 1081
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 1082
	}
	CUtlVectorBase<float, CUtlMemory<float, int> >::EnsureCountZeroed(
				int num);  // 376
} /* size: 0, inline expansions: 2 (0 bytes) */

// <026DAA10> soundsystem/proc_delay.cpp:380
// variables: 2
// function calls: 4
void CMonoShortDelayLine::PushInput(float flInSample)
{
	const char   __FUNCTION__; // 235
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 382
	}
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 382
	CUtlMemory<float, int>::operator[](
			int i);  // 588
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
			int i);  // 383
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 384
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <026DA8A0> soundsystem/proc_delay.cpp:387
// variables: 4
// function calls: 4
void CMonoShortDelayLine::PeekOutput(uint nSamplesAhead)
{
	const char   __FUNCTION__; // 262
	uint nIndexToRead; // 390
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 389
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 397
	}
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 389
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 392
	CUtlMemory<float, int>::operator[](
			int i);  // 595
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
			int i);  // 398
} /* size: 0, variables: 2, inline expansions: 4 (0 bytes) */

// <026DA566> soundsystem/proc_delay.cpp:401
// variables: 7
// function calls: 10
void CMonoShortDelayLine::PeekOutput4(uint nSamplesAhead)
{
	const char   __FUNCTION__; // 289
	uint nIndexToRead; // 405
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 403
	}
	{
		float flOutput; // 419
		{
			int i; // 421
			CUtlMemory<float, int>::operator[](
					int i);  // 595
			CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
					int i);  // 423
		}
		{
			fltx4 retVal; // 602
			_mm_load_ps(const float* __P); // 603
		}
		LoadAlignedSIMD<>(const void* pSIMD); // 427
	}
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 403
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 406
	CUtlMemory<float, int>::operator[](
			int i);  // 595
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
			int i);  // 414
	{
		fltx4 retVal; // 947
		_mm_loadu_ps(const float* __P); // 948
	}
	LoadUnalignedSIMD<>(const void* pSIMD); // 414
} /* size: 0, variables: 2, inline expansions: 5 (0 bytes) */

// <026DA26D> soundsystem/proc_delay.cpp:431
// variables: 2
// function calls: 11
void CMonoShortDelayLine::PushInput4(const fltx4& fl4InSample)
{
	{
		float flInput; // 442
		{
			int i; // 445
			CUtlMemory<float, int>::operator[](
					int i);  // 588
			CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
					int i);  // 447
			CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 448
		}
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 443
	}
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 433
	_mm_storeu_ps(float* __P,
			__m128 __A);  // 294
	StoreUnalignedSIMD<>(float* pSIMD,
				const fltx4& a);  // 436
	CUtlMemory<float, int>::operator[](
			int i);  // 588
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
			int i);  // 436
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 437
} /* size: 0, inline expansions: 6 (0 bytes) */

// <026D9FB0> soundsystem/proc_delay.cpp:453
// variables: 7
// function calls: 7
void CMonoShortDelayLine::MixTo(CAudioMixBuffer& outBuffer, float flCoefficient)
{
	const char   __FUNCTION__; // 142
	int remainder; // 456
	int firstSpanLength; // 457
	int secondSpanLength; // 458
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 455
	}
	{
		int i; // 459
		CUtlMemory<float, int>::operator[](
				int i);  // 595
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
				int i);  // 461
	}
	{
		int i; // 464
		CUtlMemory<float, int>::operator[](
				int i);  // 595
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
				int i);  // 466
	}
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 455
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 456
	Min<int>(const int& val1,
		const int& val2);  // 457
} /* size: 0, variables: 4, inline expansions: 3 (0 bytes) */

