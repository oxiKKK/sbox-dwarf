
//
// soundsystem/real_time_pitch.cpp
//
//	referenced by: libengine2.so
//
//	functions: 12
//	classes: 2
//	structs: 2
//

// <02446117> soundsystem/real_time_pitch.cpp:12
// member functions: 7
// member variables: 2
// class size: 65,540
class CDelayRingBuffer {
private:
	float m_delayLine[16384]; /* 0 65536 */
	uint m_nWriteStart; /* 65536 4 */
	/* soundsystem/real_time_pitch.cpp:17 */
	void CDelayRingBuffer(CDelayRingBuffer* );
	/* soundsystem/real_time_pitch.cpp:24 */
	void Update(CDelayRingBuffer* , const CAudioMixBuffer& );
	/* soundsystem/real_time_pitch.cpp:32 */
	uint GetWriteCursor(CDelayRingBuffer* );
	/* soundsystem/real_time_pitch.cpp:33 */
	uint GetOffsetPosition(CDelayRingBuffer* , int);
	/* soundsystem/real_time_pitch.cpp:34 */
	float InterpolateSample_Linear(CDelayRingBuffer* , uint, float);
	/* soundsystem/real_time_pitch.cpp:40 */
	float InterpolateSample_Allpass(CDelayRingBuffer* , float, uint, float);
	/* soundsystem/real_time_pitch.cpp:46 */
	float InterpolateSample_Cubic(CDelayRingBuffer* , uint, float);
};

// <02446270> soundsystem/real_time_pitch.cpp:65
// member function: 1
// member variables: 5
// struct size: 20
struct resample_grain_t {
	uint m_nPosition; /* 0 4 */
	uint32 m_nRate; /* 4 4 */
	uint32 m_nFrac; /* 8 4 */
	uint m_nCurrentIndex; /* 12 4 */
	uint m_nCount; /* 16 4 */
	/* soundsystem/real_time_pitch.cpp:72 */
	bool IsComplete(resample_grain_t* );
};

// <024462EC> soundsystem/real_time_pitch.cpp:78
// member variable: 1
// struct size: 40
struct resample_grain_set_t {
	resample_grain_t m_grains[2]; /* 0 40 */
};

// <024488DE> soundsystem/real_time_pitch.cpp:261
// member functions: 18
// member variables: 5
// vtable entries: 5
// class size: 160
class CRealtimePitchShiftProcessorFFT : public CAudioProcessor {
public:
	/* class CAudioProcessor <ancestor>; */ /* 0 0 */
	void CRealtimePitchShiftProcessorFFT(CRealtimePitchShiftProcessorFFT* , const CRealtimePitchShiftProcessorFFT& );
private:
	float m_flPitchShift; /* 108 4 */
	int m_nQuality; /* 112 4 */
	CUtlVector<CPitchShiftFFT*, CUtlMemory<CPitchShiftFFT*, int> > m_channels; /* 120 32 */
	int m_nCurrentQuality; /* 152 4 */
	/* soundsystem/real_time_pitch.cpp:270 */
	void CRealtimePitchShiftProcessorFFT(CRealtimePitchShiftProcessorFFT* , int);
	/* soundsystem/real_time_pitch.cpp:279 */
	virtual void ~CRealtimePitchShiftProcessorFFT(CRealtimePitchShiftProcessorFFT* );
	/* soundsystem/real_time_pitch.cpp:284 */
	void UpdateEffect(CRealtimePitchShiftProcessorFFT* );
	/* soundsystem/real_time_pitch.cpp:298 */
	virtual void ProcessSingleChannel(CRealtimePitchShiftProcessorFFT* , const CAudioMixBuffer& , CAudioMixBuffer* , int);
	/* soundsystem/real_time_pitch.cpp:303 */
	virtual bool SetNameParameter(CRealtimePitchShiftProcessorFFT* , CUtlStringToken, uint32);
	/* soundsystem/real_time_pitch.cpp:307 */
	virtual uint32 GetNameParameter(CRealtimePitchShiftProcessorFFT* , CUtlStringToken, uint32);
	/* soundsystem/real_time_pitch.cpp:312 */
	virtual bool SetControlParameter(CRealtimePitchShiftProcessorFFT* , CUtlStringToken, float);
	/* soundsystem/real_time_pitch.cpp:330 */
	virtual float GetControlParameter(CRealtimePitchShiftProcessorFFT* , CUtlStringToken, float);
	void CRealtimePitchShiftProcessorFFT(class CRealtimePitchShiftProcessorFFT *, const class CRealtimePitchShiftProcessorFFT  &); /* linkage=_ZN31CRealtimePitchShiftProcessorFFTC4ERKS_ */
	void CRealtimePitchShiftProcessorFFT(class CRealtimePitchShiftProcessorFFT *, int); /* linkage=_ZN31CRealtimePitchShiftProcessorFFTC4Ei */
	virtual void ~CRealtimePitchShiftProcessorFFT(class CRealtimePitchShiftProcessorFFT *); /* linkage=_ZN31CRealtimePitchShiftProcessorFFTD4Ev */
	void UpdateEffect(class CRealtimePitchShiftProcessorFFT *); /* linkage=_ZN31CRealtimePitchShiftProcessorFFT12UpdateEffectEv */
	virtual void ProcessSingleChannel(class CRealtimePitchShiftProcessorFFT *, const class CAudioMixBuffer  &, class CAudioMixBuffer *, int); /* linkage=_ZN31CRealtimePitchShiftProcessorFFT20ProcessSingleChannelERK15CAudioMixBufferPS0_i */
	virtual bool SetNameParameter(class CRealtimePitchShiftProcessorFFT *, class CUtlStringToken, uint32); /* linkage=_ZN31CRealtimePitchShiftProcessorFFT16SetNameParameterE15CUtlStringTokenj */
	virtual uint32 GetNameParameter(class CRealtimePitchShiftProcessorFFT *, class CUtlStringToken, uint32); /* linkage=_ZN31CRealtimePitchShiftProcessorFFT16GetNameParameterE15CUtlStringTokenj */
	virtual bool SetControlParameter(class CRealtimePitchShiftProcessorFFT *, class CUtlStringToken, float); /* linkage=_ZN31CRealtimePitchShiftProcessorFFT19SetControlParameterE15CUtlStringTokenf */
	/* <244aaa9> soundsystem/real_time_pitch.cpp:330 */
	virtual float GetControlParameter(class CRealtimePitchShiftProcessorFFT *, class CUtlStringToken, float); /* linkage=_ZN31CRealtimePitchShiftProcessorFFT19GetControlParameterE15CUtlStringTokenf */
};

// <0244A57F> soundsystem/real_time_pitch.cpp:270
void CRealtimePitchShiftProcessorFFT::CRealtimePitchShiftProcessorFFT(int nChannels)
{
} /* size: 0 */

// <0244A559> soundsystem/real_time_pitch.cpp:270
inline void CRealtimePitchShiftProcessorFFT::CRealtimePitchShiftProcessorFFT(int nChannels)
{
} /* size: 0 */

// <0244A256> soundsystem/real_time_pitch.cpp:279
// variable: 1
// function calls: 13
void CRealtimePitchShiftProcessorFFT::~CRealtimePitchShiftProcessorFFT()
{
	{
		int i; // 1807
		CUtlMemory<CPitchShiftFFT::operator[](
				int i);  // 602
		CUtlVectorBase<CPitchShiftFFT::Element(
			int i);  // 1809
	}
	CUtlVectorBase<CPitchShiftFFT::RemoveAll(); // 1798
	CUtlMemory<CPitchShiftFFT::IsExternallyAllocated(); // 905
	CUtlMemory<CPitchShiftFFT::Purge(); // 903
	CUtlMemory<CPitchShiftFFT::Purge(); // 1799
	CUtlVectorBase<CPitchShiftFFT::Purge(); // 1811
	CUtlVectorBase<CPitchShiftFFT::PurgeAndDeleteElements(); // 281
	CUtlVectorBase<CPitchShiftFFT::Purge(); // 560
	CUtlVectorBase<CPitchShiftFFT::~CUtlVectorBase(); // 410
	CUtlVector<CPitchShiftFFT::~CUtlVector(); // 282
	CUtlString::~CUtlString(); // 222
	CAudioProcessor::~CAudioProcessor(); // 282
} /* size: 173, inline expansions: 11 (263 bytes) */

// <02449F07> soundsystem/real_time_pitch.cpp:279
// variable: 1
// function calls: 14
void CRealtimePitchShiftProcessorFFT::~CRealtimePitchShiftProcessorFFT()
{
	{
		int i; // 1807
		CUtlMemory<CPitchShiftFFT::operator[](
				int i);  // 602
		CUtlVectorBase<CPitchShiftFFT::Element(
			int i);  // 1809
	}
	CUtlVectorBase<CPitchShiftFFT::RemoveAll(); // 1798
	CUtlMemory<CPitchShiftFFT::IsExternallyAllocated(); // 905
	CUtlMemory<CPitchShiftFFT::Purge(); // 903
	CUtlMemory<CPitchShiftFFT::Purge(); // 1799
	CUtlVectorBase<CPitchShiftFFT::Purge(); // 1811
	CUtlVectorBase<CPitchShiftFFT::PurgeAndDeleteElements(); // 281
	CUtlVectorBase<CPitchShiftFFT::Purge(); // 560
	CUtlVectorBase<CPitchShiftFFT::~CUtlVectorBase(); // 410
	CUtlVector<CPitchShiftFFT::~CUtlVector(); // 282
	CUtlString::~CUtlString(); // 222
	CAudioProcessor::~CAudioProcessor(); // 282
	CRealtimePitchShiftProcessorFFT::~CRealtimePitchShiftProcessorFFT(); // 282
} /* size: 175, inline expansions: 12 (393 bytes) */

// <02449EEE> soundsystem/real_time_pitch.cpp:279
inline void CRealtimePitchShiftProcessorFFT::~CRealtimePitchShiftProcessorFFT()
{
} /* size: 0 */

// <02449EC8> soundsystem/real_time_pitch.cpp:284
// variable: 1
inline void CRealtimePitchShiftProcessorFFT::UpdateEffect()
{
	{
		int i; // 290
	}
} /* size: 0 */

// <02449DBF> soundsystem/real_time_pitch.cpp:298
// function calls: 2
void CRealtimePitchShiftProcessorFFT::ProcessSingleChannel(const CAudioMixBuffer& input, CAudioMixBuffer* pOutput, int nChannelIndex)
{
	CUtlMemory<CPitchShiftFFT::operator[](
			int i);  // 588
	CUtlVectorBase<CPitchShiftFFT::operator[](
			int i);  // 300
} /* size: 53, inline expansions: 2 (6 bytes) */

// <02449D73> soundsystem/real_time_pitch.cpp:303
void CRealtimePitchShiftProcessorFFT::SetNameParameter(CUtlStringToken name, uint32 nNameValue)
{
} /* size: 7 */

// <02449D27> soundsystem/real_time_pitch.cpp:307
void CRealtimePitchShiftProcessorFFT::GetNameParameter(CUtlStringToken name, uint32 nDefaultValue)
{
} /* size: 7 */

// <02449BC0> soundsystem/real_time_pitch.cpp:312
// function calls: 3
void CRealtimePitchShiftProcessorFFT::SetControlParameter(CUtlStringToken name, float flValue)
{
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 314
	CUtlStringToken::operator==(
			const CUtlStringToken& other);  // 314
	CUtlStringToken::operator==(
			const CUtlStringToken& other);  // 322
} /* size: 174, inline expansions: 3 (0 bytes) */

// <0244AAA9> soundsystem/real_time_pitch.cpp:330
// function calls: 4
void CRealtimePitchShiftProcessorFFT::GetControlParameter(CUtlStringToken name, float flDefaultValue)
{
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 332
	CUtlStringToken::operator==(
			const CUtlStringToken& other);  // 332
	CUtlStringToken::operator==(
			const CUtlStringToken& other);  // 336
	{
	}
	CRealtimePitchShiftProcessorFFT::GetControlParameter(
				CUtlStringToken name,
				float flDefaultValue);  // 330
} /* size: 141, inline expansions: 4 (29 bytes) */

// <02449B62> soundsystem/real_time_pitch.cpp:330
// variables: 2
inline void CRealtimePitchShiftProcessorFFT::GetControlParameter(CUtlStringToken name, float flDefaultValue)
{
	const char   __FUNCTION__; // 26153
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 341
	}
} /* size: 0, variables: 1 */

