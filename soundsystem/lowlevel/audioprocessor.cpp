
//
// soundsystem/lowlevel/audioprocessor.cpp
//
//	referenced by: libengine2.so
//
//	functions: 112
//	classes: 6
//	struct: 1
//

// <06D51AD4> soundsystem/lowlevel/audioprocessor.cpp:15
// variables: 2
float* GetDownmixVolumes2(int nChannels, int nIndex)
{
	const char   __FUNCTION__; // 16528
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 30
	}
} /* size: 0, variables: 1 */

// <06D519F2> soundsystem/lowlevel/audioprocessor.cpp:34
// variable: 1
void DownmixBuffers(CAudioMixBuffer& out, const float* pVolumes, int nChannelCount, const float* pInput)
{
	{
		int i; // 37
	}
} /* size: 123 */

// <06D5199F> soundsystem/lowlevel/audioprocessor.cpp:54
// variables: 2
float* GetUpmixVolumes2(int nChannels, int nIndex)
{
	const char   __FUNCTION__; // 16474
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 68
	}
} /* size: 0, variables: 1 */

// <06D51903> soundsystem/lowlevel/audioprocessor.cpp:74
// variables: 3
void UpmixBuffers(CAudioMixBuffer* pOut, const float* pVolumes, int nChannelCount, const float* pInput, float flVolumeStart, float flVolumeEnd)
{
	{
		int i; // 76
		{
			float flVolume0; // 78
			float flVolume1; // 79
		}
	}
} /* size: 0 */

// <06D5178A> soundsystem/lowlevel/audioprocessor.cpp:87
// function calls: 2
void CAudioProcessor::CAudioProcessor(const char* pDebugName, int nChannelCount, bool bDebugTrace)
{
	CUtlString::CUtlString(); // 87
	Min<int>(const int& val1,
		const int& val2);  // 89
} /* size: 160, inline expansions: 2 (12 bytes) */

// <06D5174D> soundsystem/lowlevel/audioprocessor.cpp:87
void CAudioProcessor::CAudioProcessor(const char* pDebugName, int nChannelCount, bool bDebugTrace)
{
} /* size: 0 */

// <06D51585> soundsystem/lowlevel/audioprocessor.cpp:94
// function calls: 4
void CAudioProcessor::SetDebugName(const char* pName)
{
	CUtlString::operator=(
			const char* src);  // 96
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 97
} /* size: 0, inline expansions: 4 (161 bytes) */

// <06D52A2D> soundsystem/lowlevel/audioprocessor.cpp:100
// function call: 1
void CAudioProcessor::GetFadeTarget()
{
	CAudioProcessor::IsEnabled(); // 102
} /* size: 29, inline expansions: 1 (12 bytes) */

// <06D5156C> soundsystem/lowlevel/audioprocessor.cpp:100
void CAudioProcessor::GetFadeTarget()
{
} /* size: 0 */

// <06D53870> soundsystem/lowlevel/audioprocessor.cpp:105
// variables: 4
// function calls: 3
void CAudioProcessor::UpdateFadeTarget()
{
	float flFadeTarget; // 107
	float flXFade; // 119
	CAudioProcessor::IsEnabled(); // 102
	CAudioProcessor::GetFadeTarget(); // 107
	{
		const float  flXFadeTime; // 114
		const float  flXFadeRate; // 115
		Approach(float target,
			float value,
			float speed);  // 116
	}
} /* size: 197, variables: 2, inline expansions: 2 (38 bytes) */

// <06D51521> soundsystem/lowlevel/audioprocessor.cpp:105
// variables: 4
void CAudioProcessor::UpdateFadeTarget()
{
	float flFadeTarget; // 107
	float flXFade; // 119
	{
		const float  flXFadeTime; // 114
		const float  flXFadeRate; // 115
	}
} /* size: 0, variables: 2 */

// <06D52BD9> soundsystem/lowlevel/audioprocessor.cpp:123
// variables: 3
// function calls: 4
void CAudioProcessor::ShouldProcess()
{
	float flXFade; // 125
	CAudioProcessor::IsEnabled(); // 102
	CAudioProcessor::GetFadeTarget(); // 107
	{
		const float  flXFadeTime; // 114
		const float  flXFadeRate; // 115
		Approach(float target,
			float value,
			float speed);  // 116
	}
	CAudioProcessor::UpdateFadeTarget(); // 125
} /* size: 229, variables: 1, inline expansions: 3 (230 bytes) */

// <06D514FC> soundsystem/lowlevel/audioprocessor.cpp:123
// variable: 1
void CAudioProcessor::ShouldProcess()
{
	float flXFade; // 125
} /* size: 0, variables: 1 */

// <06D5398B> soundsystem/lowlevel/audioprocessor.cpp:130
// variable: 1
void CAudioProcessor::GetPrevMix(float flMix)
{
	float flRet; // 136
} /* size: 0, variables: 1 */

// <06D511F4> soundsystem/lowlevel/audioprocessor.cpp:141
// variables: 8
void CAudioProcessor::ApplyMonoProcessor(const CAudioMixBuffer* pInput, CAudioMixBuffer* pOutput, int nOutputChannelCount, float flMixStart, float flMixEnd)
{
	CAudioMixBuffer mixdownInput; // 143
	float flScale; // 145
	{
		int i; // 147
	}
	{
		int i; // 158
	}
	{
		float flInputScaleStart; // 167
		float flInputScaleEnd; // 168
		{
			int i; // 170
		}
		{
			int i; // 175
		}
	}
} /* size: 628, variables: 2 */

// <06D50A65> soundsystem/lowlevel/audioprocessor.cpp:182
// variables: 10
// function calls: 10
void CAudioProcessor::ApplyStereoProcessor(const CAudioMixBuffer* pInput, CAudioMixBuffer* pOutput, int nOutputChannelCount, float flMixStart, float flMixEnd)
{
	CAudioMixBuffer mixdownInput; // 184
	float flInputScaleStart; // 191
	float flInputScaleEnd; // 192
	{
		int i; // 201
	}
	{
	}
	GetDownmixVolumes2(int nChannels,
				int nIndex);  // 15
	GetDownmixVolumes2(int nChannels,
				int nIndex);  // 185
	{
	}
	GetDownmixVolumes2(int nChannels,
				int nIndex);  // 15
	GetDownmixVolumes2(int nChannels,
				int nIndex);  // 186
	{
	}
	GetUpmixVolumes2(int nChannels,
			int nIndex);  // 54
	GetUpmixVolumes2(int nChannels,
			int nIndex);  // 206
	{
		int i; // 76
		{
			float flVolume0; // 78
			float flVolume1; // 79
		}
	}
	UpmixBuffers(CAudioMixBuffer* pOut,
			const float* pVolumes,
			int nChannelCount,
			const float* pInput,
			float flVolumeStart,
			float flVolumeEnd);  // 206
	{
	}
	GetUpmixVolumes2(int nChannels,
			int nIndex);  // 54
	GetUpmixVolumes2(int nChannels,
			int nIndex);  // 207
	{
		int i; // 76
		{
			float flVolume0; // 78
			float flVolume1; // 79
		}
	}
	UpmixBuffers(CAudioMixBuffer* pOut,
			const float* pVolumes,
			int nChannelCount,
			const float* pInput,
			float flVolumeStart,
			float flVolumeEnd);  // 207
} /* size: 0, variables: 3, inline expansions: 10 (600 bytes) */

// <06D505D7> soundsystem/lowlevel/audioprocessor.cpp:210
// variables: 7
// function calls: 6
void CAudioProcessor::ApplyNChannelProcessor(const CAudioMixBuffer* pInput, CAudioMixBuffer* pOutput, int nChannelCount, float flMixStart, float flMixEnd)
{
	CAudioMixBuffer tempBuffer; // 212
	{
		int i; // 217
	}
	{
		float flInputScale; // 225
		{
			int i; // 226
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 284
			CAudioMixBuffer::CopyFrom(
				const CAudioMixBuffer& src);  // 228
		}
	}
	{
		float flInputScaleStart; // 238
		float flInputScaleEnd; // 239
		{
			int i; // 240
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 284
			CAudioMixBuffer::CopyFrom(
				const CAudioMixBuffer& src);  // 242
		}
	}
} /* size: 569, variables: 1 */

// <06D50356> soundsystem/lowlevel/audioprocessor.cpp:250
// variables: 5
// function calls: 4
void CAudioProcessor::PassThrough(const CAudioMixBuffer* pInput, CAudioMixBuffer* pOutput, int nChannelCount)
{
	{
		int i; // 257
	}
	{
		int i; // 335
		{
			int nChannel; // 337
		}
	}
	CAudioProcessor::MeterInput(
			const CAudioMixBuffer* pInput,
			int nChannelCount);  // 331
	CAudioProcessor::MeterInput(
			const CAudioMixBuffer* pInput,
			int nChannelCount);  // 252
	{
		int i; // 324
		{
			int nChannel; // 326
		}
	}
	CAudioProcessor::MeterOutput(
			const CAudioMixBuffer* pOutput,
			int nChannelCount);  // 320
	CAudioProcessor::MeterOutput(
			const CAudioMixBuffer* pOutput,
			int nChannelCount);  // 262
} /* size: 247, inline expansions: 4 (187 bytes) */

// <06D4FEBE> soundsystem/lowlevel/audioprocessor.cpp:265
// variables: 12
// function calls: 6
void CAudioProcessor::ApplyProcessor(const CAudioMixBuffer* pInput, CAudioMixBuffer* pOutput, int nChannelCount)
{
	float flMixEnd; // 268
	float flMixStart; // 270
	const char   __FUNCTION__; // 16420
	int nInputChannelsToProcess; // 276
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 271
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 272
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 295
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 300
	}
	{
		int i; // 335
		{
			int nChannel; // 337
		}
	}
	CAudioProcessor::MeterInput(
			const CAudioMixBuffer* pInput,
			int nChannelCount);  // 331
	CAudioProcessor::MeterInput(
			const CAudioMixBuffer* pInput,
			int nChannelCount);  // 267
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 269
	CAudioProcessor::GetPrevMix(
			float flMix);  // 270
	{
		int i; // 324
		{
			int nChannel; // 326
		}
	}
	CAudioProcessor::MeterOutput(
			const CAudioMixBuffer* pOutput,
			int nChannelCount);  // 320
	CAudioProcessor::MeterOutput(
			const CAudioMixBuffer* pOutput,
			int nChannelCount);  // 307
} /* size: 0, variables: 4, inline expansions: 6 (298 bytes) */

// <06D4FDE8> soundsystem/lowlevel/audioprocessor.cpp:310
// function call: 1
void CAudioProcessor::Process(CAudioMixBuffer* pInput, CAudioMixBuffer* pOutput, int nChannelCount)
{
	CAudioProcessor::ShouldProcess(); // 312
} /* size: 123, inline expansions: 1 (17 bytes) */

// <06D539C7> soundsystem/lowlevel/audioprocessor.cpp:320
// variables: 2
// function call: 1
void CAudioProcessor::MeterOutput(const CAudioMixBuffer* pOutput, int nChannelCount)
{
	{
		int i; // 324
		{
			int nChannel; // 326
		}
	}
	CAudioProcessor::MeterOutput(
			const CAudioMixBuffer* pOutput,
			int nChannelCount);  // 320
} /* size: 0, inline expansions: 1 (0 bytes) */

// <06D4FD99> soundsystem/lowlevel/audioprocessor.cpp:320
// variables: 2
void CAudioProcessor::MeterOutput(const CAudioMixBuffer* pOutput, int nChannelCount)
{
	{
		int i; // 324
		{
			int nChannel; // 326
		}
	}
} /* size: 0 */

// <06D53AAD> soundsystem/lowlevel/audioprocessor.cpp:331
// variables: 2
// function call: 1
void CAudioProcessor::MeterInput(const CAudioMixBuffer* pInput, int nChannelCount)
{
	{
		int i; // 335
		{
			int nChannel; // 337
		}
	}
	CAudioProcessor::MeterInput(
			const CAudioMixBuffer* pInput,
			int nChannelCount);  // 331
} /* size: 0, inline expansions: 1 (0 bytes) */

// <06D4FD4A> soundsystem/lowlevel/audioprocessor.cpp:331
// variables: 2
void CAudioProcessor::MeterInput(const CAudioMixBuffer* pInput, int nChannelCount)
{
	{
		int i; // 335
		{
			int nChannel; // 337
		}
	}
} /* size: 0 */

// <06D4FCA8> soundsystem/lowlevel/audioprocessor.cpp:342
// variables: 2
void CAudioProcessor::GenerateSideChain(CAudioMixBuffer* pInput, int nChannelCount)
{
	const char   __FUNCTION__; // 16501
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 345
	}
} /* size: 27, variables: 1 */

// <06D4FC6B> soundsystem/lowlevel/audioprocessor.cpp:348
void CAudioProcessor::UpdateFromProcessorDescription(const vmix_processor_desc_t& desc)
{
} /* size: 5 */

// <06D4FAAB> soundsystem/lowlevel/audioprocessor.cpp:352
// variables: 3
// function calls: 4
void CAudioProcessor::SetControlParameter(CUtlStringToken name, float flValue)
{
	const char   __FUNCTION__; // 16555
	{
		const char* pDebugName; // 368
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 369
		}
	}
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 354
	CUtlStringToken::operator==(
			const CUtlStringToken& other);  // 354
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 362
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 358
} /* size: 149, variables: 1, inline expansions: 4 (0 bytes) */

// <06D4FA5F> soundsystem/lowlevel/audioprocessor.cpp:374
void CAudioProcessor::SetControlParameterArray(CUtlStringToken name, CUtlVector<float, CUtlMemory<float, int> >& vflValue)
{
} /* size: 7 */

// <06D4A3D9> soundsystem/lowlevel/audioprocessor.cpp:381
// function calls: 2
void CFilterAudioProcessor::~CFilterAudioProcessor()
{
	CUtlString::~CUtlString(); // 222
	CAudioProcessor::~CAudioProcessor(); // 381
} /* size: 0, inline expansions: 2 (0 bytes) */

// <06D4A302> soundsystem/lowlevel/audioprocessor.cpp:381
// function calls: 3
void CFilterAudioProcessor::~CFilterAudioProcessor()
{
	CUtlString::~CUtlString(); // 222
	CAudioProcessor::~CAudioProcessor(); // 381
	CFilterAudioProcessor::~CFilterAudioProcessor(); // 381
} /* size: 0, inline expansions: 3 (0 bytes) */

// <06D4A2E4> soundsystem/lowlevel/audioprocessor.cpp:381
inline void CFilterAudioProcessor::~CFilterAudioProcessor()
{
} /* size: 0 */

// <06D4984D> soundsystem/lowlevel/audioprocessor.cpp:381
// member functions: 24
// member variables: 3
// static member variable: 1
// vtable entries: 6
// class size: 1,152
class CFilterAudioProcessor : public CAudioProcessor {
public:
	/* class CAudioProcessor <ancestor>; */ /* 0 112 */
	void CFilterAudioProcessor(CFilterAudioProcessor* , CFilterAudioProcessor& );
	void CFilterAudioProcessor(CFilterAudioProcessor* , const CFilterAudioProcessor& );
	static const char * g_pDebugNames[0]; /* 0 0 */
	/* soundsystem/lowlevel/audioprocessor.cpp:388 */
	void CFilterAudioProcessor(CFilterAudioProcessor* , const vmix_processor_desc_t& );
	/* soundsystem/lowlevel/audioprocessor.cpp:396 */
	void InitFilter(CFilterAudioProcessor* );
	/* soundsystem/lowlevel/audioprocessor.cpp:404 */
	void UpdateFilter(CFilterAudioProcessor* );
	/* soundsystem/lowlevel/audioprocessor.cpp:412 */
	virtual void ProcessSingleChannel(CFilterAudioProcessor* , const CAudioMixBuffer& , CAudioMixBuffer* , int);
	/* soundsystem/lowlevel/audioprocessor.cpp:417 */
	virtual bool SetNameParameter(CFilterAudioProcessor* , CUtlStringToken, uint32);
	/* soundsystem/lowlevel/audioprocessor.cpp:421 */
	virtual uint32 GetNameParameter(CFilterAudioProcessor* , CUtlStringToken, uint32);
	/* soundsystem/lowlevel/audioprocessor.cpp:426 */
	virtual bool SetControlParameter(CFilterAudioProcessor* , CUtlStringToken, float);
	/* soundsystem/lowlevel/audioprocessor.cpp:458 */
	virtual float GetControlParameter(CFilterAudioProcessor* , CUtlStringToken, float);
	/* soundsystem/lowlevel/audioprocessor.cpp:476 */
	virtual void UpdateFromProcessorDescription(CFilterAudioProcessor* , const vmix_processor_desc_t& );
	filterstate_t m_filterState[8]; /* 112 1024 */
	vmix_filter_desc_t m_filterDesc; /* 1136 16 */
	virtual void ~CFilterAudioProcessor(CFilterAudioProcessor* );
	void CFilterAudioProcessor(class CFilterAudioProcessor *, class CFilterAudioProcessor &); /* linkage=_ZN21CFilterAudioProcessorC4EOS_ */
	void CFilterAudioProcessor(class CFilterAudioProcessor *, const class CFilterAudioProcessor  &); /* linkage=_ZN21CFilterAudioProcessorC4ERKS_ */
	void CFilterAudioProcessor(class CFilterAudioProcessor *, const class vmix_processor_desc_t  &); /* linkage=_ZN21CFilterAudioProcessorC4ERK21vmix_processor_desc_t */
	void InitFilter(class CFilterAudioProcessor *); /* linkage=_ZN21CFilterAudioProcessor10InitFilterEv */
	void UpdateFilter(class CFilterAudioProcessor *); /* linkage=_ZN21CFilterAudioProcessor12UpdateFilterEv */
	virtual void ProcessSingleChannel(class CFilterAudioProcessor *, const class CAudioMixBuffer  &, class CAudioMixBuffer *, int); /* linkage=_ZN21CFilterAudioProcessor20ProcessSingleChannelERK15CAudioMixBufferPS0_i */
	virtual bool SetNameParameter(class CFilterAudioProcessor *, class CUtlStringToken, uint32); /* linkage=_ZN21CFilterAudioProcessor16SetNameParameterE15CUtlStringTokenj */
	virtual uint32 GetNameParameter(class CFilterAudioProcessor *, class CUtlStringToken, uint32); /* linkage=_ZN21CFilterAudioProcessor16GetNameParameterE15CUtlStringTokenj */
	virtual bool SetControlParameter(class CFilterAudioProcessor *, class CUtlStringToken, float); /* linkage=_ZN21CFilterAudioProcessor19SetControlParameterE15CUtlStringTokenf */
	/* <6d53050> soundsystem/lowlevel/audioprocessor.cpp:458 */
	virtual float GetControlParameter(class CFilterAudioProcessor *, class CUtlStringToken, float); /* linkage=_ZN21CFilterAudioProcessor19GetControlParameterE15CUtlStringTokenf */
	virtual void UpdateFromProcessorDescription(class CFilterAudioProcessor *, const class vmix_processor_desc_t  &); /* linkage=_ZN21CFilterAudioProcessor30UpdateFromProcessorDescriptionERK21vmix_processor_desc_t */
	virtual void ~CFilterAudioProcessor(class CFilterAudioProcessor *); /* linkage=_ZN21CFilterAudioProcessorD4Ev */
};

// <06D4FA0F> soundsystem/lowlevel/audioprocessor.cpp:388
void CFilterAudioProcessor::CFilterAudioProcessor(const vmix_processor_desc_t& desc)
{
} /* size: 0 */

// <06D4F9E9> soundsystem/lowlevel/audioprocessor.cpp:388
inline void CFilterAudioProcessor::CFilterAudioProcessor(const vmix_processor_desc_t& desc)
{
} /* size: 0 */

// <06D4F995> soundsystem/lowlevel/audioprocessor.cpp:396
// variables: 3
inline void CFilterAudioProcessor::InitFilter()
{
	const char   __FUNCTION__; // 16327
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 398
	}
	{
		int i; // 399
	}
} /* size: 0, variables: 1 */

// <06D4F96F> soundsystem/lowlevel/audioprocessor.cpp:404
// variable: 1
inline void CFilterAudioProcessor::UpdateFilter()
{
	{
		int i; // 406
	}
} /* size: 0 */

// <06D4F8CA> soundsystem/lowlevel/audioprocessor.cpp:412
void CFilterAudioProcessor::ProcessSingleChannel(const CAudioMixBuffer& input, CAudioMixBuffer* pOutput, int nChannelIndex)
{
} /* size: 0 */

// <06D4F87E> soundsystem/lowlevel/audioprocessor.cpp:417
void CFilterAudioProcessor::SetNameParameter(CUtlStringToken name, uint32 nNameValue)
{
} /* size: 0 */

// <06D4F832> soundsystem/lowlevel/audioprocessor.cpp:421
void CFilterAudioProcessor::GetNameParameter(CUtlStringToken name, uint32 nDefaultValue)
{
} /* size: 0 */

// <06D4F5AF> soundsystem/lowlevel/audioprocessor.cpp:426
// variables: 3
// function calls: 7
void CFilterAudioProcessor::SetControlParameter(CUtlStringToken name, float flValue)
{
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 428
	CUtlStringToken::operator==(
			const CUtlStringToken& other);  // 428
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 437
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 446
	{
		int i; // 406
	}
	CFilterAudioProcessor::UpdateFilter(); // 433
	{
		int i; // 406
	}
	CFilterAudioProcessor::UpdateFilter(); // 442
	{
		int i; // 406
	}
	CFilterAudioProcessor::UpdateFilter(); // 451
} /* size: 0, inline expansions: 7 (0 bytes) */

// <06D53050> soundsystem/lowlevel/audioprocessor.cpp:458
// function calls: 5
void CFilterAudioProcessor::GetControlParameter(CUtlStringToken name, float flDefaultValue)
{
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 460
	CUtlStringToken::operator==(
			const CUtlStringToken& other);  // 460
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 464
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 468
	{
	}
	CFilterAudioProcessor::GetControlParameter(
				CUtlStringToken name,
				float flDefaultValue);  // 458
} /* size: 0, inline expansions: 5 (0 bytes) */

// <06D4F553> soundsystem/lowlevel/audioprocessor.cpp:458
// variables: 2
inline void CFilterAudioProcessor::GetControlParameter(CUtlStringToken name, float flDefaultValue)
{
	const char   __FUNCTION__; // 16555
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 472
	}
} /* size: 0, variables: 1 */

// <06D4F41D> soundsystem/lowlevel/audioprocessor.cpp:476
// variables: 2
// function calls: 2
void CFilterAudioProcessor::UpdateFromProcessorDescription(const vmix_processor_desc_t& desc)
{
	{
	}
	{
		int i; // 399
	}
	CFilterAudioProcessor::InitFilter(); // 486
	{
		int i; // 406
	}
	CFilterAudioProcessor::UpdateFilter(); // 488
} /* size: 0, inline expansions: 2 (0 bytes) */

// <06D4A75C> soundsystem/lowlevel/audioprocessor.cpp:498
// function calls: 12
void CEQ8AudioProcessor::~CEQ8AudioProcessor()
{
	CUtlVectorBase<filterstate_t, CUtlMemory<filterstate_t, int> >::RemoveAll(); // 1798
	CUtlMemory<filterstate_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<filterstate_t, int>::Purge(); // 903
	CUtlMemory<filterstate_t, int>::Purge(); // 1799
	CUtlVectorBase<filterstate_t, CUtlMemory<filterstate_t, int> >::Purge(); // 560
	ValidateAlignment<filterstate_t>(void); // 508
	CUtlMemory<filterstate_t, int>::Purge(); // 510
	CUtlMemory<filterstate_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<filterstate_t, CUtlMemory<filterstate_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<filterstate_t, CUtlMemory<filterstate_t, int> >::~CUtlVector(); // 498
	CUtlString::~CUtlString(); // 222
	CAudioProcessor::~CAudioProcessor(); // 498
} /* size: 0, inline expansions: 12 (0 bytes) */

// <06D4A497> soundsystem/lowlevel/audioprocessor.cpp:498
// function calls: 13
void CEQ8AudioProcessor::~CEQ8AudioProcessor()
{
	CUtlVectorBase<filterstate_t, CUtlMemory<filterstate_t, int> >::RemoveAll(); // 1798
	CUtlMemory<filterstate_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<filterstate_t, int>::Purge(); // 903
	CUtlMemory<filterstate_t, int>::Purge(); // 1799
	CUtlVectorBase<filterstate_t, CUtlMemory<filterstate_t, int> >::Purge(); // 560
	ValidateAlignment<filterstate_t>(void); // 508
	CUtlMemory<filterstate_t, int>::Purge(); // 510
	CUtlMemory<filterstate_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<filterstate_t, CUtlMemory<filterstate_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<filterstate_t, CUtlMemory<filterstate_t, int> >::~CUtlVector(); // 498
	CUtlString::~CUtlString(); // 222
	CAudioProcessor::~CAudioProcessor(); // 498
	CEQ8AudioProcessor::~CEQ8AudioProcessor(); // 498
} /* size: 0, inline expansions: 13 (0 bytes) */

// <06D4A479> soundsystem/lowlevel/audioprocessor.cpp:498
inline void CEQ8AudioProcessor::~CEQ8AudioProcessor()
{
} /* size: 0 */

// <06D495B2> soundsystem/lowlevel/audioprocessor.cpp:498
// member functions: 24
// member variables: 6
// static member variable: 1
// vtable entries: 6
// class size: 288
class CEQ8AudioProcessor : public CAudioProcessor {
public:
	/* class CAudioProcessor <ancestor>; */ /* 0 112 */
	void CEQ8AudioProcessor(CEQ8AudioProcessor* , CEQ8AudioProcessor& );
	void CEQ8AudioProcessor(CEQ8AudioProcessor* , const CEQ8AudioProcessor& );
private:
	CUtlVector<filterstate_t, CUtlMemory<filterstate_t, int> > m_filterState; /* 112 32 */
	vmix_eq8_desc_t m_eq8Desc; /* 144 128 */
	int m_nStageCount; /* 272 4 */
	int m_nLastEnabled; /* 276 4 */
	float m_flEQScale; /* 280 4 */
	static const char * g_pDebugNames[0]; /* 0 0 */
	/* soundsystem/lowlevel/audioprocessor.cpp:510 */
	void CEQ8AudioProcessor(CEQ8AudioProcessor* , const vmix_processor_desc_t& );
	/* soundsystem/lowlevel/audioprocessor.cpp:519 */
	void InitFilter(CEQ8AudioProcessor* );
	/* soundsystem/lowlevel/audioprocessor.cpp:541 */
	void UpdateFilter(CEQ8AudioProcessor* );
	/* soundsystem/lowlevel/audioprocessor.cpp:562 */
	virtual void ProcessSingleChannel(CEQ8AudioProcessor* , const CAudioMixBuffer& , CAudioMixBuffer* , int);
	/* soundsystem/lowlevel/audioprocessor.cpp:579 */
	virtual bool SetNameParameter(CEQ8AudioProcessor* , CUtlStringToken, uint32);
	/* soundsystem/lowlevel/audioprocessor.cpp:583 */
	virtual uint32 GetNameParameter(CEQ8AudioProcessor* , CUtlStringToken, uint32);
	/* soundsystem/lowlevel/audioprocessor.cpp:588 */
	virtual bool SetControlParameter(CEQ8AudioProcessor* , CUtlStringToken, float);
	/* soundsystem/lowlevel/audioprocessor.cpp:602 */
	virtual float GetControlParameter(CEQ8AudioProcessor* , CUtlStringToken, float);
	/* soundsystem/lowlevel/audioprocessor.cpp:610 */
	virtual void UpdateFromProcessorDescription(CEQ8AudioProcessor* , const vmix_processor_desc_t& );
	virtual void ~CEQ8AudioProcessor(CEQ8AudioProcessor* );
	void CEQ8AudioProcessor(class CEQ8AudioProcessor *, class CEQ8AudioProcessor &); /* linkage=_ZN18CEQ8AudioProcessorC4EOS_ */
	void CEQ8AudioProcessor(class CEQ8AudioProcessor *, const class CEQ8AudioProcessor  &); /* linkage=_ZN18CEQ8AudioProcessorC4ERKS_ */
	void CEQ8AudioProcessor(class CEQ8AudioProcessor *, const class vmix_processor_desc_t  &); /* linkage=_ZN18CEQ8AudioProcessorC4ERK21vmix_processor_desc_t */
	void InitFilter(class CEQ8AudioProcessor *); /* linkage=_ZN18CEQ8AudioProcessor10InitFilterEv */
	void UpdateFilter(class CEQ8AudioProcessor *); /* linkage=_ZN18CEQ8AudioProcessor12UpdateFilterEv */
	virtual void ProcessSingleChannel(class CEQ8AudioProcessor *, const class CAudioMixBuffer  &, class CAudioMixBuffer *, int); /* linkage=_ZN18CEQ8AudioProcessor20ProcessSingleChannelERK15CAudioMixBufferPS0_i */
	virtual bool SetNameParameter(class CEQ8AudioProcessor *, class CUtlStringToken, uint32); /* linkage=_ZN18CEQ8AudioProcessor16SetNameParameterE15CUtlStringTokenj */
	virtual uint32 GetNameParameter(class CEQ8AudioProcessor *, class CUtlStringToken, uint32); /* linkage=_ZN18CEQ8AudioProcessor16GetNameParameterE15CUtlStringTokenj */
	/* <6d53b92> soundsystem/lowlevel/audioprocessor.cpp:588 */
	virtual bool SetControlParameter(class CEQ8AudioProcessor *, class CUtlStringToken, float); /* linkage=_ZN18CEQ8AudioProcessor19SetControlParameterE15CUtlStringTokenf */
	/* <6d531de> soundsystem/lowlevel/audioprocessor.cpp:602 */
	virtual float GetControlParameter(class CEQ8AudioProcessor *, class CUtlStringToken, float); /* linkage=_ZN18CEQ8AudioProcessor19GetControlParameterE15CUtlStringTokenf */
	virtual void UpdateFromProcessorDescription(class CEQ8AudioProcessor *, const class vmix_processor_desc_t  &); /* linkage=_ZN18CEQ8AudioProcessor30UpdateFromProcessorDescriptionERK21vmix_processor_desc_t */
	virtual void ~CEQ8AudioProcessor(class CEQ8AudioProcessor *); /* linkage=_ZN18CEQ8AudioProcessorD4Ev */
};

// <06D4F398> soundsystem/lowlevel/audioprocessor.cpp:510
void CEQ8AudioProcessor::CEQ8AudioProcessor(const vmix_processor_desc_t& desc)
{
} /* size: 0 */

// <06D4F372> soundsystem/lowlevel/audioprocessor.cpp:510
inline void CEQ8AudioProcessor::CEQ8AudioProcessor(const vmix_processor_desc_t& desc)
{
} /* size: 0 */

// <06D4F2E6> soundsystem/lowlevel/audioprocessor.cpp:519
// variables: 7
inline void CEQ8AudioProcessor::InitFilter()
{
	const char   __FUNCTION__; // 16327
	int nFilterCount; // 522
	int nFilter; // 524
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 521
	}
	{
		int nChannel; // 526
		{
			int i; // 528
			{
				const vmix_filter_desc_t& desc; // 530
			}
		}
	}
} /* size: 0, variables: 3 */

// <06D4F288> soundsystem/lowlevel/audioprocessor.cpp:541
// variables: 5
inline void CEQ8AudioProcessor::UpdateFilter()
{
	int nFilterCount; // 543
	int nFilter; // 545
	{
		int nChannel; // 547
		{
			int i; // 549
			{
				const vmix_filter_desc_t& desc; // 551
			}
		}
	}
} /* size: 0, variables: 2 */

// <06D4EF96> soundsystem/lowlevel/audioprocessor.cpp:562
// variables: 3
// function calls: 8
void CEQ8AudioProcessor::ProcessSingleChannel(const CAudioMixBuffer& input, CAudioMixBuffer* pOutput, int nChannelIndex)
{
	CAudioMixBuffer tempInput; // 564
	int nFilterIndex; // 566
	{
		int i; // 567
		CUtlMemory<filterstate_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<filterstate_t, CUtlMemory<filterstate_t, int> >::operator[](
				int i);  // 571
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 284
		CAudioMixBuffer::CopyFrom(
			const CAudioMixBuffer& src);  // 574
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 284
	CAudioMixBuffer::CopyFrom(
		const CAudioMixBuffer& src);  // 565
} /* size: 0, variables: 2, inline expansions: 3 (0 bytes) */

// <06D4EF4A> soundsystem/lowlevel/audioprocessor.cpp:579
void CEQ8AudioProcessor::SetNameParameter(CUtlStringToken name, uint32 nNameValue)
{
} /* size: 0 */

// <06D4EEFE> soundsystem/lowlevel/audioprocessor.cpp:583
void CEQ8AudioProcessor::GetNameParameter(CUtlStringToken name, uint32 nDefaultValue)
{
} /* size: 0 */

// <06D53B92> soundsystem/lowlevel/audioprocessor.cpp:588
// variables: 3
// function calls: 6
void CEQ8AudioProcessor::SetControlParameter(CUtlStringToken name, float flValue)
{
	CUtlStringToken::operator==(
			const CUtlStringToken& other);  // 590
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 594
	{
		int nChannel; // 547
		{
			int i; // 549
			{
				const vmix_filter_desc_t& desc; // 551
				CUtlMemory<filterstate_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<filterstate_t, CUtlMemory<filterstate_t, int> >::operator[](
						int i);  // 552
			}
		}
	}
	CEQ8AudioProcessor::UpdateFilter(); // 595
	CEQ8AudioProcessor::SetControlParameter(
				CUtlStringToken name,
				float flValue);  // 588
} /* size: 0, inline expansions: 4 (0 bytes) */

// <06D4EECB> soundsystem/lowlevel/audioprocessor.cpp:588
inline void CEQ8AudioProcessor::SetControlParameter(CUtlStringToken name, float flValue)
{
} /* size: 0 */

// <06D531DE> soundsystem/lowlevel/audioprocessor.cpp:602
// function calls: 3
void CEQ8AudioProcessor::GetControlParameter(CUtlStringToken name, float flDefaultValue)
{
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 604
	CUtlStringToken::operator==(
			const CUtlStringToken& other);  // 604
	{
	}
	CEQ8AudioProcessor::GetControlParameter(
				CUtlStringToken name,
				float flDefaultValue);  // 602
} /* size: 0, inline expansions: 3 (0 bytes) */

// <06D4EE6F> soundsystem/lowlevel/audioprocessor.cpp:602
// variables: 2
inline void CEQ8AudioProcessor::GetControlParameter(CUtlStringToken name, float flDefaultValue)
{
	const char   __FUNCTION__; // 16555
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 606
	}
} /* size: 0, variables: 1 */

// <06D4EAE3> soundsystem/lowlevel/audioprocessor.cpp:610
// variables: 8
// function calls: 9
void CEQ8AudioProcessor::UpdateFromProcessorDescription(const vmix_processor_desc_t& desc)
{
	bool bInitFilter; // 612
	{
		int i; // 619
		CUtlVectorBase<filterstate_t, CUtlMemory<filterstate_t, int> >::Count(); // 619
		CUtlMemory<filterstate_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<filterstate_t, CUtlMemory<filterstate_t, int> >::operator[](
				int i);  // 621
	}
	{
	}
	{
		int nChannel; // 526
		{
			int i; // 528
			{
				const vmix_filter_desc_t& desc; // 530
				CUtlMemory<filterstate_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<filterstate_t, CUtlMemory<filterstate_t, int> >::operator[](
						int i);  // 531
			}
		}
	}
	CEQ8AudioProcessor::InitFilter(); // 629
	{
		int nChannel; // 547
		{
			int i; // 549
			{
				const vmix_filter_desc_t& desc; // 551
				CUtlMemory<filterstate_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<filterstate_t, CUtlMemory<filterstate_t, int> >::operator[](
						int i);  // 552
			}
		}
	}
	CEQ8AudioProcessor::UpdateFilter(); // 631
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <06D48AF6> soundsystem/lowlevel/audioprocessor.cpp:639
// member functions: 8
// member variables: 2
// class size: 16
class CAutomaticGainControl {
private:
	rms_level_t m_inputLevel; /* 0 8 */
	rms_level_t m_outputLevel; /* 8 8 */
	/* soundsystem/lowlevel/audioprocessor.cpp:644 */
	void CAutomaticGainControl(CAutomaticGainControl* );
	/* soundsystem/lowlevel/audioprocessor.cpp:650 */
	void UpdateInputLevel(CAutomaticGainControl* , const CAudioMixBuffer& );
	/* soundsystem/lowlevel/audioprocessor.cpp:655 */
	void UpdateOutputLevel(CAutomaticGainControl* , const CAudioMixBuffer& );
	/* soundsystem/lowlevel/audioprocessor.cpp:660 */
	float GetGain(CAutomaticGainControl* );
	void CAutomaticGainControl(class CAutomaticGainControl *); /* linkage=_ZN21CAutomaticGainControlC4Ev */
	void UpdateInputLevel(class CAutomaticGainControl *, const class CAudioMixBuffer  &); /* linkage=_ZN21CAutomaticGainControl16UpdateInputLevelERK15CAudioMixBuffer */
	void UpdateOutputLevel(class CAutomaticGainControl *, const class CAudioMixBuffer  &); /* linkage=_ZN21CAutomaticGainControl17UpdateOutputLevelERK15CAudioMixBuffer */
	float GetGain(class CAutomaticGainControl *); /* linkage=_ZN21CAutomaticGainControl7GetGainEv */
};

// <06D4EACC> soundsystem/lowlevel/audioprocessor.cpp:644
void CAutomaticGainControl::CAutomaticGainControl()
{
} /* size: 0 */

// <06D4EAB3> soundsystem/lowlevel/audioprocessor.cpp:644
inline void CAutomaticGainControl::CAutomaticGainControl()
{
} /* size: 0 */

// <06D4EA8D> soundsystem/lowlevel/audioprocessor.cpp:650
inline void CAutomaticGainControl::UpdateInputLevel(const CAudioMixBuffer& input)
{
} /* size: 0 */

// <06D4EA67> soundsystem/lowlevel/audioprocessor.cpp:655
inline void CAutomaticGainControl::UpdateOutputLevel(const CAudioMixBuffer& output)
{
} /* size: 0 */

// <06D4EA41> soundsystem/lowlevel/audioprocessor.cpp:660
// variable: 1
inline void CAutomaticGainControl::GetGain()
{
	float flOutputLevel; // 662
} /* size: 0, variables: 1 */

// <06D4EA1D> soundsystem/lowlevel/audioprocessor.cpp:669
inline float ABS(float x)
{
} /* size: 0 */

// <06D4AABF> soundsystem/lowlevel/audioprocessor.cpp:674
// function calls: 2
void CFullWaveIntegratorAudioProcessor::~CFullWaveIntegratorAudioProcessor()
{
	CUtlString::~CUtlString(); // 222
	CAudioProcessor::~CAudioProcessor(); // 674
} /* size: 0, inline expansions: 2 (0 bytes) */

// <06D4A9E8> soundsystem/lowlevel/audioprocessor.cpp:674
// function calls: 3
void CFullWaveIntegratorAudioProcessor::~CFullWaveIntegratorAudioProcessor()
{
	CUtlString::~CUtlString(); // 222
	CAudioProcessor::~CAudioProcessor(); // 674
	CFullWaveIntegratorAudioProcessor::~CFullWaveIntegratorAudioProcessor(); // 674
} /* size: 0, inline expansions: 3 (0 bytes) */

// <06D4A9CA> soundsystem/lowlevel/audioprocessor.cpp:674
inline void CFullWaveIntegratorAudioProcessor::~CFullWaveIntegratorAudioProcessor()
{
} /* size: 0 */

// <06D49313> soundsystem/lowlevel/audioprocessor.cpp:674
// member functions: 24
// member variables: 6
// vtable entries: 6
// class size: 336
class CFullWaveIntegratorAudioProcessor : public CAudioProcessor {
public:
	/* class CAudioProcessor <ancestor>; */ /* 0 112 */
	void CFullWaveIntegratorAudioProcessor(CFullWaveIntegratorAudioProcessor* , CFullWaveIntegratorAudioProcessor& );
	void CFullWaveIntegratorAudioProcessor(CFullWaveIntegratorAudioProcessor* , const CFullWaveIntegratorAudioProcessor& );
private:
	float m_flPrev[8]; /* 108 32 */
	float m_flSum[8]; /* 140 32 */
	CAutomaticGainControl m_autoGain[8]; /* 172 128 */
	float m_flLastAutoGain[8]; /* 300 32 */
	float m_flGain; /* 332 4 */
	/* soundsystem/lowlevel/audioprocessor.cpp:684 */
	void CFullWaveIntegratorAudioProcessor(CFullWaveIntegratorAudioProcessor* , const vmix_processor_desc_t& );
	/* soundsystem/lowlevel/audioprocessor.cpp:691 */
	void InitFilter(CFullWaveIntegratorAudioProcessor* );
	/* soundsystem/lowlevel/audioprocessor.cpp:701 */
	void UpdateFilter(CFullWaveIntegratorAudioProcessor* );
	/* soundsystem/lowlevel/audioprocessor.cpp:705 */
	virtual void ProcessSingleChannel(CFullWaveIntegratorAudioProcessor* , const CAudioMixBuffer& , CAudioMixBuffer* , int);
	/* soundsystem/lowlevel/audioprocessor.cpp:732 */
	virtual bool SetNameParameter(CFullWaveIntegratorAudioProcessor* , CUtlStringToken, uint32);
	/* soundsystem/lowlevel/audioprocessor.cpp:736 */
	virtual uint32 GetNameParameter(CFullWaveIntegratorAudioProcessor* , CUtlStringToken, uint32);
	/* soundsystem/lowlevel/audioprocessor.cpp:741 */
	virtual bool SetControlParameter(CFullWaveIntegratorAudioProcessor* , CUtlStringToken, float);
	/* soundsystem/lowlevel/audioprocessor.cpp:755 */
	virtual float GetControlParameter(CFullWaveIntegratorAudioProcessor* , CUtlStringToken, float);
	/* soundsystem/lowlevel/audioprocessor.cpp:765 */
	virtual void UpdateFromProcessorDescription(CFullWaveIntegratorAudioProcessor* , const vmix_processor_desc_t& );
	virtual void ~CFullWaveIntegratorAudioProcessor(CFullWaveIntegratorAudioProcessor* );
	void CFullWaveIntegratorAudioProcessor(class CFullWaveIntegratorAudioProcessor *, class CFullWaveIntegratorAudioProcessor &); /* linkage=_ZN33CFullWaveIntegratorAudioProcessorC4EOS_ */
	void CFullWaveIntegratorAudioProcessor(class CFullWaveIntegratorAudioProcessor *, const class CFullWaveIntegratorAudioProcessor  &); /* linkage=_ZN33CFullWaveIntegratorAudioProcessorC4ERKS_ */
	void CFullWaveIntegratorAudioProcessor(class CFullWaveIntegratorAudioProcessor *, const class vmix_processor_desc_t  &); /* linkage=_ZN33CFullWaveIntegratorAudioProcessorC4ERK21vmix_processor_desc_t */
	void InitFilter(class CFullWaveIntegratorAudioProcessor *); /* linkage=_ZN33CFullWaveIntegratorAudioProcessor10InitFilterEv */
	void UpdateFilter(class CFullWaveIntegratorAudioProcessor *); /* linkage=_ZN33CFullWaveIntegratorAudioProcessor12UpdateFilterEv */
	virtual void ProcessSingleChannel(class CFullWaveIntegratorAudioProcessor *, const class CAudioMixBuffer  &, class CAudioMixBuffer *, int); /* linkage=_ZN33CFullWaveIntegratorAudioProcessor20ProcessSingleChannelERK15CAudioMixBufferPS0_i */
	virtual bool SetNameParameter(class CFullWaveIntegratorAudioProcessor *, class CUtlStringToken, uint32); /* linkage=_ZN33CFullWaveIntegratorAudioProcessor16SetNameParameterE15CUtlStringTokenj */
	virtual uint32 GetNameParameter(class CFullWaveIntegratorAudioProcessor *, class CUtlStringToken, uint32); /* linkage=_ZN33CFullWaveIntegratorAudioProcessor16GetNameParameterE15CUtlStringTokenj */
	virtual bool SetControlParameter(class CFullWaveIntegratorAudioProcessor *, class CUtlStringToken, float); /* linkage=_ZN33CFullWaveIntegratorAudioProcessor19SetControlParameterE15CUtlStringTokenf */
	/* <6d52eb7> soundsystem/lowlevel/audioprocessor.cpp:755 */
	virtual float GetControlParameter(class CFullWaveIntegratorAudioProcessor *, class CUtlStringToken, float); /* linkage=_ZN33CFullWaveIntegratorAudioProcessor19GetControlParameterE15CUtlStringTokenf */
	virtual void UpdateFromProcessorDescription(class CFullWaveIntegratorAudioProcessor *, const class vmix_processor_desc_t  &); /* linkage=_ZN33CFullWaveIntegratorAudioProcessor30UpdateFromProcessorDescriptionERK21vmix_processor_desc_t */
	virtual void ~CFullWaveIntegratorAudioProcessor(class CFullWaveIntegratorAudioProcessor *); /* linkage=_ZN33CFullWaveIntegratorAudioProcessorD4Ev */
};

// <06D4EA01> soundsystem/lowlevel/audioprocessor.cpp:684
void CFullWaveIntegratorAudioProcessor::CFullWaveIntegratorAudioProcessor(const vmix_processor_desc_t& desc)
{
} /* size: 0 */

// <06D4E9DB> soundsystem/lowlevel/audioprocessor.cpp:684
inline void CFullWaveIntegratorAudioProcessor::CFullWaveIntegratorAudioProcessor(const vmix_processor_desc_t& desc)
{
} /* size: 0 */

// <06D4E987> soundsystem/lowlevel/audioprocessor.cpp:691
// variables: 3
inline void CFullWaveIntegratorAudioProcessor::InitFilter()
{
	const char   __FUNCTION__; // 16327
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 693
	}
	{
		int i; // 694
	}
} /* size: 0, variables: 1 */

// <06D4E740> soundsystem/lowlevel/audioprocessor.cpp:705
// variables: 5
// function calls: 4
void CFullWaveIntegratorAudioProcessor::ProcessSingleChannel(const CAudioMixBuffer& input, CAudioMixBuffer* pOutput, int nChannelIndex)
{
	float flPrev; // 708
	float flSum; // 709
	float flAutoGain; // 726
	{
		uint i; // 710
		{
			float flSample; // 712
			ABS(float x); // 713
		}
	}
	CAutomaticGainControl::UpdateInputLevel(
			const CAudioMixBuffer& input);  // 707
	CAutomaticGainControl::UpdateOutputLevel(
				const CAudioMixBuffer& output);  // 725
	CAutomaticGainControl::GetGain(); // 726
} /* size: 0, variables: 3, inline expansions: 3 (0 bytes) */

// <06D4E6F4> soundsystem/lowlevel/audioprocessor.cpp:732
void CFullWaveIntegratorAudioProcessor::SetNameParameter(CUtlStringToken name, uint32 nNameValue)
{
} /* size: 0 */

// <06D4E6A8> soundsystem/lowlevel/audioprocessor.cpp:736
void CFullWaveIntegratorAudioProcessor::GetNameParameter(CUtlStringToken name, uint32 nDefaultValue)
{
} /* size: 0 */

// <06D4E4F4> soundsystem/lowlevel/audioprocessor.cpp:741
// function calls: 5
void CFullWaveIntegratorAudioProcessor::SetControlParameter(CUtlStringToken name, float flValue)
{
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 743
	CUtlStringToken::operator==(
			const CUtlStringToken& other);  // 743
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 748
	dB_To_Gain(float dB); // 53
	dB_To_Gain(float dB); // 745
} /* size: 0, inline expansions: 5 (0 bytes) */

// <06D52EB7> soundsystem/lowlevel/audioprocessor.cpp:755
// function calls: 5
void CFullWaveIntegratorAudioProcessor::GetControlParameter(CUtlStringToken name, float flDefaultValue)
{
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 757
	CUtlStringToken::operator==(
			const CUtlStringToken& other);  // 757
	Gain_To_dB(float gain); // 43
	Gain_To_dB(float gain); // 759
	{
	}
	CFullWaveIntegratorAudioProcessor::GetControlParameter(
				CUtlStringToken name,
				float flDefaultValue);  // 755
} /* size: 0, inline expansions: 5 (0 bytes) */

// <06D4E498> soundsystem/lowlevel/audioprocessor.cpp:755
// variables: 2
inline void CFullWaveIntegratorAudioProcessor::GetControlParameter(CUtlStringToken name, float flDefaultValue)
{
	const char   __FUNCTION__; // 16555
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 761
	}
} /* size: 0, variables: 1 */

// <06D4E45B> soundsystem/lowlevel/audioprocessor.cpp:765
void CFullWaveIntegratorAudioProcessor::UpdateFromProcessorDescription(const vmix_processor_desc_t& desc)
{
} /* size: 0 */

// <06D48BB4> soundsystem/lowlevel/audioprocessor.cpp:775
// member variables: 3
// struct size: 12
struct dynamics_envelope_point_t {
	float m_flInputValue; /* 0 4 */
	float m_flOutputValue; /* 4 4 */
	float m_flSlope; /* 8 4 */
};

// <06D4AC54> soundsystem/lowlevel/audioprocessor.cpp:813
// function calls: 2
void CDynamicsAudioProcessor::~CDynamicsAudioProcessor()
{
	CUtlString::~CUtlString(); // 222
	CAudioProcessor::~CAudioProcessor(); // 813
} /* size: 0, inline expansions: 2 (0 bytes) */

// <06D4AB7D> soundsystem/lowlevel/audioprocessor.cpp:813
// function calls: 3
void CDynamicsAudioProcessor::~CDynamicsAudioProcessor()
{
	CUtlString::~CUtlString(); // 222
	CAudioProcessor::~CAudioProcessor(); // 813
	CDynamicsAudioProcessor::~CDynamicsAudioProcessor(); // 813
} /* size: 0, inline expansions: 3 (0 bytes) */

// <06D4AB5F> soundsystem/lowlevel/audioprocessor.cpp:813
inline void CDynamicsAudioProcessor::~CDynamicsAudioProcessor()
{
} /* size: 0 */

// <06D48EA9> soundsystem/lowlevel/audioprocessor.cpp:813
// member functions: 34
// member variables: 19
// vtable entries: 8
// class size: 2,336
class CDynamicsAudioProcessor : public CAudioProcessor {
public:
	/* class CAudioProcessor <ancestor>; */ /* 0 112 */
	void CDynamicsAudioProcessor(CDynamicsAudioProcessor* , CDynamicsAudioProcessor& );
	void CDynamicsAudioProcessor(CDynamicsAudioProcessor* , const CDynamicsAudioProcessor& );
private:
	float m_fldbNoiseGateThreshold; /* 108 4 */
	float m_fldbCompressionThreshold; /* 112 4 */
	float m_fldbLimiterThreshold; /* 116 4 */
	float m_fldbGain; /* 120 4 */
	float m_flLimiterRatio; /* 124 4 */
	float m_flRatioFactor; /* 128 4 */
	float m_flAttackTimeConstant; /* 132 4 */
	float m_flReleaseTimeConstant; /* 136 4 */
	float m_flRMSAveragingTimeConstant; /* 140 4 */
	float m_flCurrentLevel; /* 144 4 */
	float m_flOutputGain; /* 148 4 */
	bool m_bSideChainProcessed; /* 152 1 */
	CAudioMixBuffer m_sideChain __attribute__((__aligned__(16))); /* 160 2048 */
	dynamics_envelope_point_t m_gainEnvelope[8]; /* 2208 96 */
	int m_nGainEnvelopeCount; /* 2304 4 */
	int m_nKneeEnvelope; /* 2308 4 */
	float m_flKneeAccel; /* 2312 4 */
	CAudioSignalMeter m_sideChainMeter; /* 2316 16 */
	/* soundsystem/lowlevel/audioprocessor.cpp:839 */
	void CDynamicsAudioProcessor(CDynamicsAudioProcessor* , const vmix_processor_desc_t& );
	/* soundsystem/lowlevel/audioprocessor.cpp:848 */
	virtual void UpdateFromProcessorDescription(CDynamicsAudioProcessor* , const vmix_processor_desc_t& );
	/* soundsystem/lowlevel/audioprocessor.cpp:962 */
	int AddGainEnvelope(CDynamicsAudioProcessor* , float, float);
	/* soundsystem/lowlevel/audioprocessor.cpp:977 */
	int AddGainEnvelope(CDynamicsAudioProcessor* , float, float, float);
	/* soundsystem/lowlevel/audioprocessor.cpp:987 */
	float RemapGainEnvelope(CDynamicsAudioProcessor* , float);
	/* soundsystem/lowlevel/audioprocessor.cpp:1013 */
	void ClearSideChain(CDynamicsAudioProcessor* );
	/* soundsystem/lowlevel/audioprocessor.cpp:1022 */
	virtual void GenerateSideChain(CDynamicsAudioProcessor* , CAudioMixBuffer* , int);
	/* soundsystem/lowlevel/audioprocessor.cpp:1104 */
	virtual void Process(CDynamicsAudioProcessor* , CAudioMixBuffer* , CAudioMixBuffer* , int);
	/* soundsystem/lowlevel/audioprocessor.cpp:1118 */
	int SamplesClipped(CDynamicsAudioProcessor* , CAudioMixBuffer* );
	/* soundsystem/lowlevel/audioprocessor.cpp:1132 */
	virtual void ProcessSingleChannel(CDynamicsAudioProcessor* , const CAudioMixBuffer& , CAudioMixBuffer* , int);
	/* soundsystem/lowlevel/audioprocessor.cpp:1156 */
	virtual bool SetNameParameter(CDynamicsAudioProcessor* , CUtlStringToken, uint32);
	/* soundsystem/lowlevel/audioprocessor.cpp:1160 */
	virtual uint32 GetNameParameter(CDynamicsAudioProcessor* , CUtlStringToken, uint32);
	/* soundsystem/lowlevel/audioprocessor.cpp:1165 */
	virtual bool SetControlParameter(CDynamicsAudioProcessor* , CUtlStringToken, float);
	/* soundsystem/lowlevel/audioprocessor.cpp:1180 */
	virtual float GetControlParameter(CDynamicsAudioProcessor* , CUtlStringToken, float);
	virtual void ~CDynamicsAudioProcessor(CDynamicsAudioProcessor* );
	void CDynamicsAudioProcessor(class CDynamicsAudioProcessor *, class CDynamicsAudioProcessor &); /* linkage=_ZN23CDynamicsAudioProcessorC4EOS_ */
	void CDynamicsAudioProcessor(class CDynamicsAudioProcessor *, const class CDynamicsAudioProcessor  &); /* linkage=_ZN23CDynamicsAudioProcessorC4ERKS_ */
	void CDynamicsAudioProcessor(class CDynamicsAudioProcessor *, const class vmix_processor_desc_t  &); /* linkage=_ZN23CDynamicsAudioProcessorC4ERK21vmix_processor_desc_t */
	virtual void UpdateFromProcessorDescription(class CDynamicsAudioProcessor *, const class vmix_processor_desc_t  &); /* linkage=_ZN23CDynamicsAudioProcessor30UpdateFromProcessorDescriptionERK21vmix_processor_desc_t */
	int AddGainEnvelope(class CDynamicsAudioProcessor *, float, float); /* linkage=_ZN23CDynamicsAudioProcessor15AddGainEnvelopeEff */
	int AddGainEnvelope(class CDynamicsAudioProcessor *, float, float, float); /* linkage=_ZN23CDynamicsAudioProcessor15AddGainEnvelopeEfff */
	float RemapGainEnvelope(class CDynamicsAudioProcessor *, float); /* linkage=_ZN23CDynamicsAudioProcessor17RemapGainEnvelopeEf */
	void ClearSideChain(class CDynamicsAudioProcessor *); /* linkage=_ZN23CDynamicsAudioProcessor14ClearSideChainEv */
	virtual void GenerateSideChain(class CDynamicsAudioProcessor *, class CAudioMixBuffer *, int); /* linkage=_ZN23CDynamicsAudioProcessor17GenerateSideChainEP15CAudioMixBufferi */
	virtual void Process(class CDynamicsAudioProcessor *, class CAudioMixBuffer *, class CAudioMixBuffer *, int); /* linkage=_ZN23CDynamicsAudioProcessor7ProcessEP15CAudioMixBufferS1_i */
	int SamplesClipped(class CDynamicsAudioProcessor *, class CAudioMixBuffer *); /* linkage=_ZN23CDynamicsAudioProcessor14SamplesClippedEP15CAudioMixBuffer */
	virtual void ProcessSingleChannel(class CDynamicsAudioProcessor *, const class CAudioMixBuffer  &, class CAudioMixBuffer *, int); /* linkage=_ZN23CDynamicsAudioProcessor20ProcessSingleChannelERK15CAudioMixBufferPS0_i */
	virtual bool SetNameParameter(class CDynamicsAudioProcessor *, class CUtlStringToken, uint32); /* linkage=_ZN23CDynamicsAudioProcessor16SetNameParameterE15CUtlStringTokenj */
	virtual uint32 GetNameParameter(class CDynamicsAudioProcessor *, class CUtlStringToken, uint32); /* linkage=_ZN23CDynamicsAudioProcessor16GetNameParameterE15CUtlStringTokenj */
	virtual bool SetControlParameter(class CDynamicsAudioProcessor *, class CUtlStringToken, float); /* linkage=_ZN23CDynamicsAudioProcessor19SetControlParameterE15CUtlStringTokenf */
	/* <6d532f8> soundsystem/lowlevel/audioprocessor.cpp:1180 */
	virtual float GetControlParameter(class CDynamicsAudioProcessor *, class CUtlStringToken, float); /* linkage=_ZN23CDynamicsAudioProcessor19GetControlParameterE15CUtlStringTokenf */
	virtual void ~CDynamicsAudioProcessor(class CDynamicsAudioProcessor *); /* linkage=_ZN23CDynamicsAudioProcessorD4Ev */
} __attribute__((__aligned__(16)));

// <06D4E43F> soundsystem/lowlevel/audioprocessor.cpp:839
void CDynamicsAudioProcessor::CDynamicsAudioProcessor(const vmix_processor_desc_t& desc)
{
} /* size: 0 */

// <06D4E419> soundsystem/lowlevel/audioprocessor.cpp:839
inline void CDynamicsAudioProcessor::CDynamicsAudioProcessor(const vmix_processor_desc_t& desc)
{
} /* size: 0 */

// <06D4D53E> soundsystem/lowlevel/audioprocessor.cpp:848
// variables: 35
// function calls: 41
void CDynamicsAudioProcessor::UpdateFromProcessorDescription(const vmix_processor_desc_t& processorDesc)
{
	const vmix_dynamics_desc_t& desc; // 850
	const float  flLnAttenuation; // 860
	const int  nSamplesPerIteration; // 862
	const float  flEnvelopeSampleRate; // 863
	const float  NOISE_GATE_DISABLED_GAIN_DB; // 883
	float flGateThreshold; // 884
	float fldbLimiterGain; // 928
	{
		float k; // 898
		float flThresholdDist; // 899
		float flGateDist; // 900
		float flKneeLimit; // 901
		{
			quadratic_curve_t knee; // 906
			float flGainAtCompressionThreshold; // 907
			Vector2D v0; // 908
			Vector2D vMid; // 909
			float flSlope; // 911
			Vector2D v2; // 912
			Vector2DMultiply(const Vector2D& a,
					vec_t b,
					Vector2D& c);  // 702
			Vector2D::Vector2D(); // 701
			Vector2D::operator*(
					float fl);  // 44
			Vector2DMultiply(const Vector2D& a,
					vec_t b,
					Vector2D& c);  // 702
			Vector2D::Vector2D(); // 701
			Vector2D::operator*(
					float fl);  // 729
			operator*(float fl,
					const Vector2D& v);  // 44
			Vector2DAdd(const Vector2D& a,
					const Vector2D& b,
					Vector2D& c);  // 688
			Vector2D::Vector2D(); // 687
			Vector2D::operator+(
					const Vector2D& v);  // 44
			Vector2D::Vector2D(); // 687
			Vector2DAdd(const Vector2D& a,
					const Vector2D& b,
					Vector2D& c);  // 688
			Vector2D::operator+(
					const Vector2D& v);  // 44
			quadratic_curve_t::Fit(
				const Vector2D& v0,
				const Vector2D& v2,
				const Vector2D& vMid);  // 913
			{
				float flDeltaOut; // 969
				float flDeltaIn; // 970
				{
				}
			}
			CDynamicsAudioProcessor::AddGainEnvelope(
					float flInput,
					float flOutput,
					float flSlope);  // 974
			CDynamicsAudioProcessor::AddGainEnvelope(
					float flInput,
					float flOutput);  // 914
			Vector2D::Vector2D(
				vec_t X,
				vec_t Y);  // 908
			Vector2D::Vector2D(
				vec_t X,
				vec_t Y);  // 909
			Vector2D::Vector2D(
				vec_t X,
				vec_t Y);  // 912
			{
				float flDeltaOut; // 969
				float flDeltaIn; // 970
				{
				}
			}
			CDynamicsAudioProcessor::AddGainEnvelope(
					float flInput,
					float flOutput,
					float flSlope);  // 974
			CDynamicsAudioProcessor::AddGainEnvelope(
					float flInput,
					float flOutput);  // 918
		}
		{
			float flDeltaOut; // 969
			float flDeltaIn; // 970
			{
			}
		}
		CDynamicsAudioProcessor::AddGainEnvelope(
				float flInput,
				float flOutput,
				float flSlope);  // 974
		CDynamicsAudioProcessor::AddGainEnvelope(
				float flInput,
				float flOutput);  // 925
	}
	{
		float fldbOffset; // 941
		float flSlope; // 943
		{
			float flDeltaOut; // 969
			float flDeltaIn; // 970
			{
			}
		}
		CDynamicsAudioProcessor::AddGainEnvelope(
				float flInput,
				float flOutput,
				float flSlope);  // 974
		CDynamicsAudioProcessor::AddGainEnvelope(
				float flInput,
				float flOutput);  // 938
		{
			float flDeltaOut; // 969
			float flDeltaIn; // 970
			{
			}
		}
		CDynamicsAudioProcessor::AddGainEnvelope(
				float flInput,
				float flOutput,
				float flSlope);  // 974
		CDynamicsAudioProcessor::AddGainEnvelope(
				float flInput,
				float flOutput);  // 945
		{
			float flDeltaOut; // 969
			float flDeltaIn; // 970
			{
			}
		}
		CDynamicsAudioProcessor::AddGainEnvelope(
				float flInput,
				float flOutput,
				float flSlope);  // 974
		CDynamicsAudioProcessor::AddGainEnvelope(
				float flInput,
				float flOutput);  // 934
	}
	dB_To_Gain(float dB); // 53
	dB_To_Gain(float dB); // 860
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 873
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 874
	CDynamicsAudioProcessor::AddGainEnvelope(
			float flInput,
			float flOutput,
			float flSlope);  // 974
	CDynamicsAudioProcessor::AddGainEnvelope(
			float flInput,
			float flOutput);  // 893
	CDynamicsAudioProcessor::AddGainEnvelope(
			float flInput,
			float flOutput,
			float flSlope);  // 974
	{
		float flDeltaOut; // 969
		float flDeltaIn; // 970
		{
		}
	}
	CDynamicsAudioProcessor::AddGainEnvelope(
			float flInput,
			float flOutput);  // 889
	{
		float flDeltaOut; // 969
		float flDeltaIn; // 970
		{
		}
	}
	CDynamicsAudioProcessor::AddGainEnvelope(
			float flInput,
			float flOutput,
			float flSlope);  // 974
	CDynamicsAudioProcessor::AddGainEnvelope(
			float flInput,
			float flOutput);  // 950
	CDynamicsAudioProcessor::AddGainEnvelope(
			float flInput,
			float flOutput,
			float flSlope);  // 974
	CDynamicsAudioProcessor::AddGainEnvelope(
			float flInput,
			float flOutput);  // 887
} /* size: 0, variables: 7, inline expansions: 12 (0 bytes) */

// <06D4D4C6> soundsystem/lowlevel/audioprocessor.cpp:962
// variables: 4
inline void CDynamicsAudioProcessor::AddGainEnvelope(float flInput, float flOutput)
{
	const char   __FUNCTION__; // 16447
	{
		float flDeltaOut; // 969
		float flDeltaIn; // 970
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 966
		}
	}
} /* size: 0, variables: 1 */

// <06D4D486> soundsystem/lowlevel/audioprocessor.cpp:977
inline void CDynamicsAudioProcessor::AddGainEnvelope(float flInput, float flOutput, float flSlope)
{
} /* size: 0 */

// <06D4D428> soundsystem/lowlevel/audioprocessor.cpp:987
// variables: 4
inline void CDynamicsAudioProcessor::RemapGainEnvelope(float flLogLevel)
{
	{
		int i; // 993
		{
			float flBase; // 997
			float flDelta; // 998
			{
				float flDelta2; // 1001
			}
		}
	}
} /* size: 0 */

// <06D4D402> soundsystem/lowlevel/audioprocessor.cpp:1013
// variable: 1
inline void CDynamicsAudioProcessor::ClearSideChain()
{
	{
		int i; // 1015
	}
} /* size: 0 */

// <06D4CF2F> soundsystem/lowlevel/audioprocessor.cpp:1022
// variables: 24
// function calls: 11
void CDynamicsAudioProcessor::GenerateSideChain(CAudioMixBuffer* pInput, int nChannelCount)
{
	CAudioMixBuffer mixdownInput; // 1031
	float flCurrentLevel; // 1053
	float flGainControl; // 1058
	fltx4* pOutputGainCurve; // 1060
	float flRMSAveragingTimeConstant; // 1061
	{
		uint i; // 1062
		{
			float flSample; // 1064
			float flRMS; // 1065
			float flLogLevel; // 1081
			float fldbTargetGain; // 1083
			float flTargetGain; // 1085
			float flConstant; // 1086
			float flPrevGainControl; // 1087
			fltx4 fl4Amplification; // 1092
			float flDeltaScale; // 1094
			fltx4 fl4ScaleInc; // 1095
			{
				int i; // 993
				{
					float flBase; // 997
					float flDelta; // 998
					{
						float flDelta2; // 1001
					}
				}
			}
			CDynamicsAudioProcessor::RemapGainEnvelope(
						float flLogLevel);  // 1083
			{
				fltx4 retVal; // 1134
				_mm_set1_ps(float __F); // 1135
			}
			ReplicateX4<>(float flValue); // 1092
			{
				fltx4 retVal; // 1134
				_mm_set1_ps(float __F); // 1135
			}
			ReplicateX4<>(float flValue); // 1095
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 1095
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 1097
			_mm_store_ps(float* __P,
					__m128 __A);  // 273
			StoreAlignedSIMD<>(float* pSIMD,
						const fltx4& a);  // 1097
		}
	}
} /* size: 0, variables: 5 */

// <06D4CDF7> soundsystem/lowlevel/audioprocessor.cpp:1104
// function call: 1
void CDynamicsAudioProcessor::Process(CAudioMixBuffer* pInput, CAudioMixBuffer* pOutput, int nChannelCount)
{
	CAudioProcessor::ShouldProcess(); // 1106
} /* size: 0, inline expansions: 1 (0 bytes) */

// <06D4CB0F> soundsystem/lowlevel/audioprocessor.cpp:1132
// variables: 9
// function calls: 8
void CDynamicsAudioProcessor::ProcessSingleChannel(const CAudioMixBuffer& input, CAudioMixBuffer* pOutput, int nChannelIndex)
{
	fltx4* pOut; // 1134
	fltx4* pIn; // 1135
	fltx4* pGainCurve; // 1136
	{
		int i; // 1138
		{
			fltx4 sample; // 1140
			fltx4 volume; // 1141
			{
				fltx4 retVal; // 602
				_mm_load_ps(const float* __P); // 603
			}
			LoadAlignedSIMD<>(const void* pSIMD); // 1140
			{
				fltx4 retVal; // 602
				_mm_load_ps(const float* __P); // 603
			}
			LoadAlignedSIMD<>(const void* pSIMD); // 1141
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 1142
			_mm_store_ps(float* __P,
					__m128 __A);  // 273
			StoreAlignedSIMD<>(float* pSIMD,
						const fltx4& a);  // 1142
		}
	}
} /* size: 0, variables: 3 */

// <06D4CAC3> soundsystem/lowlevel/audioprocessor.cpp:1156
void CDynamicsAudioProcessor::SetNameParameter(CUtlStringToken name, uint32 nNameValue)
{
} /* size: 0 */

// <06D4CA77> soundsystem/lowlevel/audioprocessor.cpp:1160
void CDynamicsAudioProcessor::GetNameParameter(CUtlStringToken name, uint32 nDefaultValue)
{
} /* size: 0 */

// <06D4C94C> soundsystem/lowlevel/audioprocessor.cpp:1165
// function calls: 3
void CDynamicsAudioProcessor::SetControlParameter(CUtlStringToken name, float flValue)
{
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 1167
	CUtlStringToken::operator==(
			const CUtlStringToken& other);  // 1167
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 1172
} /* size: 0, inline expansions: 3 (0 bytes) */

// <06D532F8> soundsystem/lowlevel/audioprocessor.cpp:1180
// function calls: 12
void CDynamicsAudioProcessor::GetControlParameter(CUtlStringToken name, float flDefaultValue)
{
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 1182
	CUtlStringToken::operator==(
			const CUtlStringToken& other);  // 1182
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 1186
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 1190
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 1194
	Gain_To_dB(float gain); // 43
	Gain_To_dB(float gain); // 1196
	CUtlStringToken::operator==(
			const CUtlStringToken& other);  // 1198
	CUtlStringToken::operator==(
			const CUtlStringToken& other);  // 1202
	Gain_To_dB(float gain); // 43
	Gain_To_dB(float gain); // 1204
	{
	}
	CDynamicsAudioProcessor::GetControlParameter(
				CUtlStringToken name,
				float flDefaultValue);  // 1180
} /* size: 0, inline expansions: 12 (0 bytes) */

// <06D4C8F0> soundsystem/lowlevel/audioprocessor.cpp:1180
// variables: 2
inline void CDynamicsAudioProcessor::GetControlParameter(CUtlStringToken name, float flDefaultValue)
{
	const char   __FUNCTION__; // 16555
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1206
	}
} /* size: 0, variables: 1 */

// <06D4ADE8> soundsystem/lowlevel/audioprocessor.cpp:1211
// function calls: 2
void CEnvelopeAudioProcessor::~CEnvelopeAudioProcessor()
{
	CUtlString::~CUtlString(); // 222
	CAudioProcessor::~CAudioProcessor(); // 1211
} /* size: 0, inline expansions: 2 (0 bytes) */

// <06D4AD12> soundsystem/lowlevel/audioprocessor.cpp:1211
// function calls: 3
void CEnvelopeAudioProcessor::~CEnvelopeAudioProcessor()
{
	CUtlString::~CUtlString(); // 222
	CAudioProcessor::~CAudioProcessor(); // 1211
	CEnvelopeAudioProcessor::~CEnvelopeAudioProcessor(); // 1211
} /* size: 0, inline expansions: 3 (0 bytes) */

// <06D4ACF4> soundsystem/lowlevel/audioprocessor.cpp:1211
inline void CEnvelopeAudioProcessor::~CEnvelopeAudioProcessor()
{
} /* size: 0 */

// <06D48C1C> soundsystem/lowlevel/audioprocessor.cpp:1211
// member functions: 22
// member variables: 7
// vtable entries: 7
// class size: 144
class CEnvelopeAudioProcessor : public CAudioProcessor {
public:
	/* class CAudioProcessor <ancestor>; */ /* 0 112 */
	void CEnvelopeAudioProcessor(CEnvelopeAudioProcessor* , CEnvelopeAudioProcessor& );
	void CEnvelopeAudioProcessor(CEnvelopeAudioProcessor* , const CEnvelopeAudioProcessor& );
private:
	vmix_envelope_desc_t m_desc; /* 108 12 */
	float m_flAttackTimeConstant; /* 120 4 */
	float m_flReleaseTimeConstant; /* 124 4 */
	uint m_nHoldSamples; /* 128 4 */
	uint m_nCurrentHold; /* 132 4 */
	float m_flCurrentLevel; /* 136 4 */
	/* soundsystem/lowlevel/audioprocessor.cpp:1223 */
	void CEnvelopeAudioProcessor(CEnvelopeAudioProcessor* , const vmix_processor_desc_t& );
	/* soundsystem/lowlevel/audioprocessor.cpp:1229 */
	virtual void UpdateFromProcessorDescription(CEnvelopeAudioProcessor* , const vmix_processor_desc_t& );
	/* soundsystem/lowlevel/audioprocessor.cpp:1242 */
	virtual void Process(CEnvelopeAudioProcessor* , CAudioMixBuffer* , CAudioMixBuffer* , int);
	/* soundsystem/lowlevel/audioprocessor.cpp:1288 */
	virtual void ProcessSingleChannel(CEnvelopeAudioProcessor* , const CAudioMixBuffer& , CAudioMixBuffer* , int);
	/* soundsystem/lowlevel/audioprocessor.cpp:1294 */
	virtual bool SetNameParameter(CEnvelopeAudioProcessor* , CUtlStringToken, uint32);
	/* soundsystem/lowlevel/audioprocessor.cpp:1295 */
	virtual uint32 GetNameParameter(CEnvelopeAudioProcessor* , CUtlStringToken, uint32);
	/* soundsystem/lowlevel/audioprocessor.cpp:1297 */
	virtual bool SetControlParameter(CEnvelopeAudioProcessor* , CUtlStringToken, float);
	/* soundsystem/lowlevel/audioprocessor.cpp:1302 */
	virtual float GetControlParameter(CEnvelopeAudioProcessor* , CUtlStringToken, float);
	virtual void ~CEnvelopeAudioProcessor(CEnvelopeAudioProcessor* );
	void CEnvelopeAudioProcessor(class CEnvelopeAudioProcessor *, class CEnvelopeAudioProcessor &); /* linkage=_ZN23CEnvelopeAudioProcessorC4EOS_ */
	void CEnvelopeAudioProcessor(class CEnvelopeAudioProcessor *, const class CEnvelopeAudioProcessor  &); /* linkage=_ZN23CEnvelopeAudioProcessorC4ERKS_ */
	void CEnvelopeAudioProcessor(class CEnvelopeAudioProcessor *, const class vmix_processor_desc_t  &); /* linkage=_ZN23CEnvelopeAudioProcessorC4ERK21vmix_processor_desc_t */
	/* <6d52a7b> soundsystem/lowlevel/audioprocessor.cpp:1229 */
	virtual void UpdateFromProcessorDescription(class CEnvelopeAudioProcessor *, const class vmix_processor_desc_t  &); /* linkage=_ZN23CEnvelopeAudioProcessor30UpdateFromProcessorDescriptionERK21vmix_processor_desc_t */
	virtual void Process(class CEnvelopeAudioProcessor *, class CAudioMixBuffer *, class CAudioMixBuffer *, int); /* linkage=_ZN23CEnvelopeAudioProcessor7ProcessEP15CAudioMixBufferS1_i */
	virtual void ProcessSingleChannel(class CEnvelopeAudioProcessor *, const class CAudioMixBuffer  &, class CAudioMixBuffer *, int); /* linkage=_ZN23CEnvelopeAudioProcessor20ProcessSingleChannelERK15CAudioMixBufferPS0_i */
	virtual bool SetNameParameter(class CEnvelopeAudioProcessor *, class CUtlStringToken, uint32); /* linkage=_ZN23CEnvelopeAudioProcessor16SetNameParameterE15CUtlStringTokenj */
	virtual uint32 GetNameParameter(class CEnvelopeAudioProcessor *, class CUtlStringToken, uint32); /* linkage=_ZN23CEnvelopeAudioProcessor16GetNameParameterE15CUtlStringTokenj */
	virtual bool SetControlParameter(class CEnvelopeAudioProcessor *, class CUtlStringToken, float); /* linkage=_ZN23CEnvelopeAudioProcessor19SetControlParameterE15CUtlStringTokenf */
	/* <6d52d1d> soundsystem/lowlevel/audioprocessor.cpp:1302 */
	virtual float GetControlParameter(class CEnvelopeAudioProcessor *, class CUtlStringToken, float); /* linkage=_ZN23CEnvelopeAudioProcessor19GetControlParameterE15CUtlStringTokenf */
	virtual void ~CEnvelopeAudioProcessor(class CEnvelopeAudioProcessor *); /* linkage=_ZN23CEnvelopeAudioProcessorD4Ev */
};

// <06D4C8D4> soundsystem/lowlevel/audioprocessor.cpp:1223
void CEnvelopeAudioProcessor::CEnvelopeAudioProcessor(const vmix_processor_desc_t& desc)
{
} /* size: 0 */

// <06D4C8AE> soundsystem/lowlevel/audioprocessor.cpp:1223
inline void CEnvelopeAudioProcessor::CEnvelopeAudioProcessor(const vmix_processor_desc_t& desc)
{
} /* size: 0 */

// <06D52A7B> soundsystem/lowlevel/audioprocessor.cpp:1229
// variable: 1
// function calls: 4
void CEnvelopeAudioProcessor::UpdateFromProcessorDescription(const vmix_processor_desc_t& processorDesc)
{
	const float  flLnAttenuation; // 1232
	dB_To_Gain(float dB); // 53
	dB_To_Gain(float dB); // 1232
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 1238
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 1239
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <06D4C87B> soundsystem/lowlevel/audioprocessor.cpp:1229
// variable: 1
inline void CEnvelopeAudioProcessor::UpdateFromProcessorDescription(const vmix_processor_desc_t& processorDesc)
{
	const float  flLnAttenuation; // 1232
} /* size: 0, variables: 1 */

// <06D4C567> soundsystem/lowlevel/audioprocessor.cpp:1242
// variables: 8
// function calls: 5
void CEnvelopeAudioProcessor::Process(CAudioMixBuffer* pInput, CAudioMixBuffer* pOutput, int nChannelCount)
{
	CAudioMixBuffer* pSamples; // 1248
	CAudioMixBuffer mixDown; // 1249
	float flCurrentLevel; // 1260
	uint nHoldSamples; // 1261
	{
		int i; // 1255
		CAudioMixBuffer::Mix(
			const CAudioMixBuffer& addThis,
			float flScale);  // 1257
	}
	{
		uint i; // 1262
		{
			float flSample; // 1264
			float flRMS; // 1265
		}
	}
	CAudioProcessor::ShouldProcess(); // 1245
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 284
	CAudioMixBuffer::CopyFrom(
		const CAudioMixBuffer& src);  // 1254
} /* size: 0, variables: 4, inline expansions: 4 (0 bytes) */

// <06D4C4AB> soundsystem/lowlevel/audioprocessor.cpp:1288
// variables: 2
void CEnvelopeAudioProcessor::ProcessSingleChannel(const CAudioMixBuffer& input, CAudioMixBuffer* pOutput, int nChannelIndex)
{
	const char   __FUNCTION__; // 16582
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1290
	}
} /* size: 0, variables: 1 */

// <06D4C45F> soundsystem/lowlevel/audioprocessor.cpp:1294
void CEnvelopeAudioProcessor::SetNameParameter(CUtlStringToken name, uint32 nNameValue)
{
} /* size: 0 */

// <06D4C413> soundsystem/lowlevel/audioprocessor.cpp:1295
void CEnvelopeAudioProcessor::GetNameParameter(CUtlStringToken name, uint32 nDefaultValue)
{
} /* size: 0 */

// <06D4C396> soundsystem/lowlevel/audioprocessor.cpp:1297
void CEnvelopeAudioProcessor::SetControlParameter(CUtlStringToken name, float flValue)
{
} /* size: 0 */

// <06D52D1D> soundsystem/lowlevel/audioprocessor.cpp:1302
// function calls: 6
void CEnvelopeAudioProcessor::GetControlParameter(CUtlStringToken name, float flDefaultValue)
{
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 1304
	CUtlStringToken::operator==(
			const CUtlStringToken& other);  // 1304
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 1308
	Gain_To_dB(float gain); // 43
	Gain_To_dB(float gain); // 1310
	CEnvelopeAudioProcessor::GetControlParameter(
				CUtlStringToken name,
				float flDefaultValue);  // 1302
} /* size: 0, inline expansions: 6 (0 bytes) */

// <06D4C363> soundsystem/lowlevel/audioprocessor.cpp:1302
inline void CEnvelopeAudioProcessor::GetControlParameter(CUtlStringToken name, float flDefaultValue)
{
} /* size: 0 */

// <06D4BF92> soundsystem/lowlevel/audioprocessor.cpp:1320
// variables: 2
// function calls: 11
CAudioProcessor* CreateFilterAudioProcessor(const vmix_processor_desc_t& desc)
{
	CUtlString::Get(); // 99
	CUtlString::String(); // 389
	vmix_filter_desc_t::vmix_filter_desc_t(); // 389
	vmix_processor_desc_t::filterDesc(); // 391
	{
	}
	{
		int i; // 399
	}
	CFilterAudioProcessor::InitFilter(); // 393
	CFilterAudioProcessor::CFilterAudioProcessor(
				const vmix_processor_desc_t& desc);  // 1324
	CUtlString::Get(); // 99
	CUtlString::String(); // 685
	CAutomaticGainControl::CAutomaticGainControl(); // 685
	{
	}
	{
		int i; // 694
	}
	CFullWaveIntegratorAudioProcessor::InitFilter(); // 687
	CFullWaveIntegratorAudioProcessor::CFullWaveIntegratorAudioProcessor(
						const vmix_processor_desc_t& desc);  // 1323
} /* size: 0, inline expansions: 11 (0 bytes) */

// <06D4BBCD> soundsystem/lowlevel/audioprocessor.cpp:1327
// variables: 3
// function calls: 14
CAudioProcessor* CreateEQ8AudioProcessor(const vmix_processor_desc_t& desc)
{
	CUtlString::Get(); // 99
	CUtlString::String(); // 511
	CUtlVectorBase<filterstate_t, CUtlMemory<filterstate_t, int> >::ResetDbgInfo(); // 530
	CUtlMemory<filterstate_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<filterstate_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<filterstate_t, CUtlMemory<filterstate_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<filterstate_t, CUtlMemory<filterstate_t, int> >::CUtlVector(); // 511
	vmix_filter_desc_t::vmix_filter_desc_t(); // 92
	vmix_eq8_desc_t::vmix_eq8_desc_t(); // 511
	vmix_processor_desc_t::eq8Desc(); // 513
	{
	}
	{
		int nChannel; // 526
		{
			int i; // 528
			{
				const vmix_filter_desc_t& desc; // 530
				CUtlMemory<filterstate_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<filterstate_t, CUtlMemory<filterstate_t, int> >::operator[](
						int i);  // 531
			}
		}
	}
	CEQ8AudioProcessor::InitFilter(); // 516
	CEQ8AudioProcessor::CEQ8AudioProcessor(
				const vmix_processor_desc_t& desc);  // 1329
} /* size: 0, inline expansions: 12 (0 bytes) */

// <06D4BA50> soundsystem/lowlevel/audioprocessor.cpp:1332
// variable: 1
// function calls: 4
CAudioProcessor* CreateDynamicsAudioProcessor(const vmix_processor_desc_t& desc)
{
	CUtlString::Get(); // 99
	CUtlString::String(); // 840
	{
		int i; // 1015
	}
	CDynamicsAudioProcessor::ClearSideChain(); // 843
	CDynamicsAudioProcessor::CDynamicsAudioProcessor(
				const vmix_processor_desc_t& desc);  // 1334
} /* size: 0, inline expansions: 4 (0 bytes) */

// <06D4B80C> soundsystem/lowlevel/audioprocessor.cpp:1337
// function calls: 8
CAudioProcessor* CreateEnvelopeAudioProcessor(const vmix_processor_desc_t& desc)
{
	CUtlString::Get(); // 99
	CUtlString::String(); // 1224
	dB_To_Gain(float dB); // 53
	dB_To_Gain(float dB); // 1232
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 1238
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 1239
	CEnvelopeAudioProcessor::UpdateFromProcessorDescription(
					const vmix_processor_desc_t& processorDesc);  // 1226
	CEnvelopeAudioProcessor::CEnvelopeAudioProcessor(
				const vmix_processor_desc_t& desc);  // 1339
} /* size: 0, inline expansions: 8 (0 bytes) */

