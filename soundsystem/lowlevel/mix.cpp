
//
// soundsystem/lowlevel/mix.cpp
//
//	referenced by: libengine2.so
//
//	functions: 46
//

// <06D7DF93> soundsystem/lowlevel/mix.cpp:14
inline bool IsAlign4(uint nAlign)
{
} /* size: 0 */

// <06D7DF72> soundsystem/lowlevel/mix.cpp:19
inline bool IsAligned16Bytes(void* p)
{
} /* size: 0 */

// <06D7DCC1> soundsystem/lowlevel/mix.cpp:24
// variables: 2
// function calls: 10
void CAudioMixCommandList::ClearMultichannel(uint16 nTarget, int nCount)
{
	{
		int i; // 26
		{
			audio_mix_command_t cmd; // 28
			CUtlMemory<audio_mix_command_t, int>::Base(); // 112
			CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::Base(); // 368
			CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::GrowMemory(
					int num);  // 1198
			CUtlMemory<audio_mix_command_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::Element(
				int i);  // 1201
			CopyConstruct<audio_mix_command_t>(audio_mix_command_t* pMemory,
								const audio_mix_command_t& src);  // 1201
			CUtlMemory<audio_mix_command_t, int>::NumAllocated(); // 1196
			CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::AddToTail(
					const audio_mix_command_t& src);  // 30
			audio_mix_command_t::Init(
				mix_command_id_t cmd,
				uint16 nOut);  // 29
		}
	}
} /* size: 0 */

// <06D7D9CE> soundsystem/lowlevel/mix.cpp:34
// variables: 2
// function calls: 10
void CAudioMixCommandList::ScaleMultichannel(uint16 nOutput, uint16 nInput, int nCount, float flVolume)
{
	{
		int i; // 36
		{
			audio_mix_command_t cmd; // 38
			CUtlMemory<audio_mix_command_t, int>::Base(); // 112
			CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::Base(); // 368
			CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::GrowMemory(
					int num);  // 1198
			CUtlMemory<audio_mix_command_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::Element(
				int i);  // 1201
			CopyConstruct<audio_mix_command_t>(audio_mix_command_t* pMemory,
								const audio_mix_command_t& src);  // 1201
			CUtlMemory<audio_mix_command_t, int>::NumAllocated(); // 1196
			CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::AddToTail(
					const audio_mix_command_t& src);  // 40
			audio_mix_command_t::Init(
				mix_command_id_t cmd,
				uint16 nOut,
				uint16 nIn0,
				float flScale);  // 39
		}
	}
} /* size: 0 */

// <06D7A85C> soundsystem/lowlevel/mix.cpp:45
// variables: 7
// function calls: 202
void CAudioMixCommandList::AccumulateMultichannel(uint16 nOutput, int nOutputChannels, uint16 nInput, int nInputChannels, float flInputVolume)
{
	const char   __FUNCTION__; // 59680
	{
		int i; // 49
		CUtlMemory<audio_mix_command_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::Element(
			int i);  // 1201
		CopyConstruct<audio_mix_command_t>(audio_mix_command_t* pMemory,
							const audio_mix_command_t& src);  // 1201
		CUtlMemory<audio_mix_command_t, int>::NumAllocated(); // 1196
		CUtlMemory<audio_mix_command_t, int>::Base(); // 112
		CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::Base(); // 368
		CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::AddToTail(
				const audio_mix_command_t& src);  // 235
		audio_mix_command_t::Init(
			mix_command_id_t cmd,
			uint16 nOut,
			uint16 nIn0,
			float flScale);  // 234
		CAudioMixCommandList::AccumulateToBuffer(
					uint16 nOutput,
					uint16 nInput,
					float flVolume);  // 227
		CAudioMixCommandList::AccumulateToBuffer(
					uint16 nOutput,
					uint16 nInput,
					float flVolume);  // 51
	}
	{
		int i; // 67
		CUtlMemory<audio_mix_command_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::Element(
			int i);  // 1201
		CopyConstruct<audio_mix_command_t>(audio_mix_command_t* pMemory,
							const audio_mix_command_t& src);  // 1201
		CUtlMemory<audio_mix_command_t, int>::NumAllocated(); // 1196
		CUtlMemory<audio_mix_command_t, int>::Base(); // 112
		CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::Base(); // 368
		CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::AddToTail(
				const audio_mix_command_t& src);  // 235
		audio_mix_command_t::Init(
			mix_command_id_t cmd,
			uint16 nOut,
			uint16 nIn0,
			float flScale);  // 234
		CAudioMixCommandList::AccumulateToBuffer(
					uint16 nOutput,
					uint16 nInput,
					float flVolume);  // 227
		CAudioMixCommandList::AccumulateToBuffer(
					uint16 nOutput,
					uint16 nInput,
					float flVolume);  // 69
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 77
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 90
	}
	{
		int i; // 106
		CUtlMemory<audio_mix_command_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::Element(
			int i);  // 1201
		CopyConstruct<audio_mix_command_t>(audio_mix_command_t* pMemory,
							const audio_mix_command_t& src);  // 1201
		CUtlMemory<audio_mix_command_t, int>::NumAllocated(); // 1196
		CUtlMemory<audio_mix_command_t, int>::Base(); // 112
		CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::Base(); // 368
		CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::AddToTail(
				const audio_mix_command_t& src);  // 235
		audio_mix_command_t::Init(
			mix_command_id_t cmd,
			uint16 nOut,
			uint16 nIn0,
			float flScale);  // 234
		CAudioMixCommandList::AccumulateToBuffer(
					uint16 nOutput,
					uint16 nInput,
					float flVolume);  // 227
		CAudioMixCommandList::AccumulateToBuffer(
					uint16 nOutput,
					uint16 nInput,
					float flVolume);  // 108
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
	CUtlMemory<audio_mix_command_t, int>::NumAllocated(); // 1196
	CUtlMemory<audio_mix_command_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::Element(
		int i);  // 1201
	CopyConstruct<audio_mix_command_t>(audio_mix_command_t* pMemory,
						const audio_mix_command_t& src);  // 1201
	CUtlMemory<audio_mix_command_t, int>::Base(); // 112
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::Base(); // 368
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::AddToTail(
			const audio_mix_command_t& src);  // 235
	CAudioMixCommandList::AccumulateToBuffer(
				uint16 nOutput,
				uint16 nInput,
				float flVolume);  // 227
	CAudioMixCommandList::AccumulateToBuffer(
				uint16 nOutput,
				uint16 nInput,
				float flVolume);  // 92
	CUtlMemory<audio_mix_command_t, int>::NumAllocated(); // 1196
	CUtlMemory<audio_mix_command_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::Element(
		int i);  // 1201
	CopyConstruct<audio_mix_command_t>(audio_mix_command_t* pMemory,
						const audio_mix_command_t& src);  // 1201
	CUtlMemory<audio_mix_command_t, int>::Base(); // 112
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::Base(); // 368
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::AddToTail(
			const audio_mix_command_t& src);  // 235
	audio_mix_command_t::Init(
		mix_command_id_t cmd,
		uint16 nOut,
		uint16 nIn0,
		float flScale);  // 234
	CAudioMixCommandList::AccumulateToBuffer(
				uint16 nOutput,
				uint16 nInput,
				float flVolume);  // 227
	CAudioMixCommandList::AccumulateToBuffer(
				uint16 nOutput,
				uint16 nInput,
				float flVolume);  // 94
	CUtlMemory<audio_mix_command_t, int>::NumAllocated(); // 1196
	CUtlMemory<audio_mix_command_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::Element(
		int i);  // 1201
	CopyConstruct<audio_mix_command_t>(audio_mix_command_t* pMemory,
						const audio_mix_command_t& src);  // 1201
	CUtlMemory<audio_mix_command_t, int>::Base(); // 112
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::Base(); // 368
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::AddToTail(
			const audio_mix_command_t& src);  // 235
	audio_mix_command_t::Init(
		mix_command_id_t cmd,
		uint16 nOut,
		uint16 nIn0,
		float flScale);  // 234
	CAudioMixCommandList::AccumulateToBuffer(
				uint16 nOutput,
				uint16 nInput,
				float flVolume);  // 227
	CAudioMixCommandList::AccumulateToBuffer(
				uint16 nOutput,
				uint16 nInput,
				float flVolume);  // 96
	audio_mix_command_t::Init(
		mix_command_id_t cmd,
		uint16 nOut,
		uint16 nIn0,
		float flScale);  // 234
	CUtlMemory<audio_mix_command_t, int>::NumAllocated(); // 1196
	CUtlMemory<audio_mix_command_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::Element(
		int i);  // 1201
	CopyConstruct<audio_mix_command_t>(audio_mix_command_t* pMemory,
						const audio_mix_command_t& src);  // 1201
	CUtlMemory<audio_mix_command_t, int>::Base(); // 112
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::Base(); // 368
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::AddToTail(
			const audio_mix_command_t& src);  // 235
	CAudioMixCommandList::AccumulateToBuffer(
				uint16 nOutput,
				uint16 nInput,
				float flVolume);  // 227
	CAudioMixCommandList::AccumulateToBuffer(
				uint16 nOutput,
				uint16 nInput,
				float flVolume);  // 97
	CUtlMemory<audio_mix_command_t, int>::NumAllocated(); // 1196
	CUtlMemory<audio_mix_command_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::Element(
		int i);  // 1201
	CopyConstruct<audio_mix_command_t>(audio_mix_command_t* pMemory,
						const audio_mix_command_t& src);  // 1201
	CUtlMemory<audio_mix_command_t, int>::Base(); // 112
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::Base(); // 368
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::AddToTail(
			const audio_mix_command_t& src);  // 235
	audio_mix_command_t::Init(
		mix_command_id_t cmd,
		uint16 nOut,
		uint16 nIn0,
		float flScale);  // 234
	CAudioMixCommandList::AccumulateToBuffer(
				uint16 nOutput,
				uint16 nInput,
				float flVolume);  // 227
	CAudioMixCommandList::AccumulateToBuffer(
				uint16 nOutput,
				uint16 nInput,
				float flVolume);  // 99
	audio_mix_command_t::Init(
		mix_command_id_t cmd,
		uint16 nOut,
		uint16 nIn0,
		float flScale);  // 234
	CUtlMemory<audio_mix_command_t, int>::NumAllocated(); // 1196
	CUtlMemory<audio_mix_command_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::Element(
		int i);  // 1201
	CopyConstruct<audio_mix_command_t>(audio_mix_command_t* pMemory,
						const audio_mix_command_t& src);  // 1201
	CUtlMemory<audio_mix_command_t, int>::Base(); // 112
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::Base(); // 368
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::AddToTail(
			const audio_mix_command_t& src);  // 235
	CAudioMixCommandList::AccumulateToBuffer(
				uint16 nOutput,
				uint16 nInput,
				float flVolume);  // 227
	CAudioMixCommandList::AccumulateToBuffer(
				uint16 nOutput,
				uint16 nInput,
				float flVolume);  // 101
	audio_mix_command_t::Init(
		mix_command_id_t cmd,
		uint16 nOut,
		uint16 nIn0,
		float flScale);  // 234
	CUtlMemory<audio_mix_command_t, int>::NumAllocated(); // 1196
	CUtlMemory<audio_mix_command_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::Element(
		int i);  // 1201
	CopyConstruct<audio_mix_command_t>(audio_mix_command_t* pMemory,
						const audio_mix_command_t& src);  // 1201
	CUtlMemory<audio_mix_command_t, int>::Base(); // 112
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::Base(); // 368
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::AddToTail(
			const audio_mix_command_t& src);  // 235
	CAudioMixCommandList::AccumulateToBuffer(
				uint16 nOutput,
				uint16 nInput,
				float flVolume);  // 227
	CAudioMixCommandList::AccumulateToBuffer(
				uint16 nOutput,
				uint16 nInput,
				float flVolume);  // 79
	audio_mix_command_t::Init(
		mix_command_id_t cmd,
		uint16 nOut,
		uint16 nIn0,
		float flScale);  // 234
	CUtlMemory<audio_mix_command_t, int>::NumAllocated(); // 1196
	CUtlMemory<audio_mix_command_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::Element(
		int i);  // 1201
	CopyConstruct<audio_mix_command_t>(audio_mix_command_t* pMemory,
						const audio_mix_command_t& src);  // 1201
	CUtlMemory<audio_mix_command_t, int>::Base(); // 112
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::Base(); // 368
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::AddToTail(
			const audio_mix_command_t& src);  // 235
	CAudioMixCommandList::AccumulateToBuffer(
				uint16 nOutput,
				uint16 nInput,
				float flVolume);  // 227
	CAudioMixCommandList::AccumulateToBuffer(
				uint16 nOutput,
				uint16 nInput,
				float flVolume);  // 80
	CUtlMemory<audio_mix_command_t, int>::NumAllocated(); // 1196
	CUtlMemory<audio_mix_command_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::Element(
		int i);  // 1201
	CopyConstruct<audio_mix_command_t>(audio_mix_command_t* pMemory,
						const audio_mix_command_t& src);  // 1201
	CUtlMemory<audio_mix_command_t, int>::Base(); // 112
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::Base(); // 368
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::AddToTail(
			const audio_mix_command_t& src);  // 235
	audio_mix_command_t::Init(
		mix_command_id_t cmd,
		uint16 nOut,
		uint16 nIn0,
		float flScale);  // 234
	CAudioMixCommandList::AccumulateToBuffer(
				uint16 nOutput,
				uint16 nInput,
				float flVolume);  // 227
	CAudioMixCommandList::AccumulateToBuffer(
				uint16 nOutput,
				uint16 nInput,
				float flVolume);  // 81
	CUtlMemory<audio_mix_command_t, int>::NumAllocated(); // 1196
	CUtlMemory<audio_mix_command_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::Element(
		int i);  // 1201
	CopyConstruct<audio_mix_command_t>(audio_mix_command_t* pMemory,
						const audio_mix_command_t& src);  // 1201
	CUtlMemory<audio_mix_command_t, int>::Base(); // 112
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::Base(); // 368
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::AddToTail(
			const audio_mix_command_t& src);  // 235
	audio_mix_command_t::Init(
		mix_command_id_t cmd,
		uint16 nOut,
		uint16 nIn0,
		float flScale);  // 234
	CAudioMixCommandList::AccumulateToBuffer(
				uint16 nOutput,
				uint16 nInput,
				float flVolume);  // 227
	CAudioMixCommandList::AccumulateToBuffer(
				uint16 nOutput,
				uint16 nInput,
				float flVolume);  // 83
	audio_mix_command_t::Init(
		mix_command_id_t cmd,
		uint16 nOut,
		uint16 nIn0,
		float flScale);  // 234
	CUtlMemory<audio_mix_command_t, int>::NumAllocated(); // 1196
	CUtlMemory<audio_mix_command_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::Element(
		int i);  // 1201
	CopyConstruct<audio_mix_command_t>(audio_mix_command_t* pMemory,
						const audio_mix_command_t& src);  // 1201
	CUtlMemory<audio_mix_command_t, int>::Base(); // 112
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::Base(); // 368
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::AddToTail(
			const audio_mix_command_t& src);  // 235
	CAudioMixCommandList::AccumulateToBuffer(
				uint16 nOutput,
				uint16 nInput,
				float flVolume);  // 227
	CAudioMixCommandList::AccumulateToBuffer(
				uint16 nOutput,
				uint16 nInput,
				float flVolume);  // 84
	CUtlMemory<audio_mix_command_t, int>::NumAllocated(); // 1196
	CUtlMemory<audio_mix_command_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::Element(
		int i);  // 1201
	CopyConstruct<audio_mix_command_t>(audio_mix_command_t* pMemory,
						const audio_mix_command_t& src);  // 1201
	CUtlMemory<audio_mix_command_t, int>::Base(); // 112
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::Base(); // 368
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::AddToTail(
			const audio_mix_command_t& src);  // 235
	audio_mix_command_t::Init(
		mix_command_id_t cmd,
		uint16 nOut,
		uint16 nIn0,
		float flScale);  // 234
	CAudioMixCommandList::AccumulateToBuffer(
				uint16 nOutput,
				uint16 nInput,
				float flVolume);  // 227
	CAudioMixCommandList::AccumulateToBuffer(
				uint16 nOutput,
				uint16 nInput,
				float flVolume);  // 85
	CUtlMemory<audio_mix_command_t, int>::NumAllocated(); // 1196
	CUtlMemory<audio_mix_command_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::Element(
		int i);  // 1201
	CopyConstruct<audio_mix_command_t>(audio_mix_command_t* pMemory,
						const audio_mix_command_t& src);  // 1201
	CUtlMemory<audio_mix_command_t, int>::Base(); // 112
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::Base(); // 368
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::AddToTail(
			const audio_mix_command_t& src);  // 235
	CAudioMixCommandList::AccumulateToBuffer(
				uint16 nOutput,
				uint16 nInput,
				float flVolume);  // 227
	CAudioMixCommandList::AccumulateToBuffer(
				uint16 nOutput,
				uint16 nInput,
				float flVolume);  // 62
	audio_mix_command_t::Init(
		mix_command_id_t cmd,
		uint16 nOut,
		uint16 nIn0,
		float flScale);  // 234
	CUtlMemory<audio_mix_command_t, int>::NumAllocated(); // 1196
	CUtlMemory<audio_mix_command_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::Element(
		int i);  // 1201
	CopyConstruct<audio_mix_command_t>(audio_mix_command_t* pMemory,
						const audio_mix_command_t& src);  // 1201
	CUtlMemory<audio_mix_command_t, int>::Base(); // 112
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::Base(); // 368
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<audio_mix_command_t, CUtlMemoryFixedGrowable<audio_mix_command_t, 256, int> >::AddToTail(
			const audio_mix_command_t& src);  // 235
	CAudioMixCommandList::AccumulateToBuffer(
				uint16 nOutput,
				uint16 nInput,
				float flVolume);  // 227
	CAudioMixCommandList::AccumulateToBuffer(
				uint16 nOutput,
				uint16 nInput,
				float flVolume);  // 63
} /* size: 0, variables: 1, inline expansions: 166 (0 bytes) */

// <06D7A72D> soundsystem/lowlevel/mix.cpp:122
// variables: 3
// function calls: 4
void CAudioMixDeviceBuffers::CAudioMixDeviceBuffers(int nOutputChannelCount)
{
	{
		{
		}
		{
			int i; // 127
		}
	}
	{
		{
		}
		{
			int i; // 127
			{
				int i; // 1149
				_mm_store_ps(float* __P,
						__m128 __A);  // 273
				StoreAlignedSIMD<>(float* pSIMD,
							const fltx4& a);  // 1151
			}
			SilenceBuffer(float* flBuffer); // 334
			CAudioMixBuffer::Silence(); // 129
		}
	}
} /* size: 0 */

// <06D7A6CE> soundsystem/lowlevel/mix.cpp:122
// variables: 3
void CAudioMixDeviceBuffers::CAudioMixDeviceBuffers(int nOutputChannelCount)
{
	const char   __FUNCTION__; // 59680
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 124
	}
	{
		int i; // 127
	}
} /* size: 0, variables: 1 */

// <06D7A32F> soundsystem/lowlevel/mix.cpp:133
// variables: 7
// function calls: 11
void CAudioMixDeviceBuffers::Mix(CAudioMixBuffer* pBuffers, int nCount)
{
	{
		int i; // 136
		{
			int i; // 1169
			{
				fltx4 fl4Sample; // 1171
				fltx4 fl4Mix; // 1172
				{
					fltx4 retVal; // 602
					_mm_load_ps(const float* __P); // 603
				}
				LoadAlignedSIMD<>(const void* pSIMD); // 1171
				{
					fltx4 retVal; // 602
					_mm_load_ps(const float* __P); // 603
				}
				LoadAlignedSIMD<>(const void* pSIMD); // 1172
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 1684
				MaddSIMD<>(const fltx4& a,
						const fltx4& b,
						const fltx4& c);  // 1173
				_mm_store_ps(float* __P,
						__m128 __A);  // 273
				StoreAlignedSIMD<>(float* pSIMD,
							const fltx4& a);  // 1173
			}
		}
		MixBuffer(float* flOutput,
				const float* flInput,
				float scale);  // 299
		CAudioMixBuffer::Mix(
			const CAudioMixBuffer& addThis,
			float flScale);  // 138
	}
} /* size: 0 */

// <06D7A1F4> soundsystem/lowlevel/mix.cpp:143
// variables: 5
// function call: 1
void CMuteControl::ApplyMuting(int nMixChannelCount, CAudioMixBuffer* pMixChannels)
{
	float flTargetVolume; // 145
	const float  flFadeTime; // 150
	const float  flFadeRate; // 151
	float flNextVolume; // 152
	{
		int i; // 156
	}
	Approach(float target,
		float value,
		float speed);  // 152
} /* size: 273, variables: 4, inline expansions: 1 (111 bytes) */

// <06D79B5B> soundsystem/lowlevel/mix.cpp:166
// variables: 22
// function calls: 20
void ConvertFloat32Int16_Clamp_Interleave2_Unaligned(short int* pOut, float* pflInputLeft, float* pflInputRight, int nSampleCount)
{
	{
		int nSampleQuads; // 170
		fltx4 fl4Scale; // 174
		{
			int i; // 175
			{
				fltx4 leftSamples; // 178
				fltx4 rightSamples; // 180
				i32x4 nLeft; // 182
				i32x4 nRight; // 183
				i32x4 nInterleavedLow; // 185
				i32x4 nInterleavedHigh; // 186
				i16x8 nOut; // 188
				{
					fltx4 retVal; // 602
					_mm_load_ps(const float* __P); // 603
				}
				LoadAlignedSIMD<>(const void* pSIMD); // 178
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 178
				{
					fltx4 retVal; // 602
					_mm_load_ps(const float* __P); // 603
				}
				LoadAlignedSIMD<>(const void* pSIMD); // 180
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 180
				{
					__m128i retVal; // 3296
					_mm_cvtps_epi32(__m128 __A); // 3297
				}
				RoundFloatToIntSIMD<>(const fltx4& a); // 182
				{
					__m128i retVal; // 3296
					_mm_cvtps_epi32(__m128 __A); // 3297
				}
				RoundFloatToIntSIMD<>(const fltx4& a); // 183
				{
					__m128i retVal; // 3215
					_mm_unpacklo_epi32(__m128i __A,
								__m128i __B);  // 3216
				}
				InterleaveLowIntsSIMD<>(const i32x4& a,
							const i32x4& b);  // 185
				{
					__m128i retVal; // 3248
					_mm_unpackhi_epi32(__m128i __A,
								__m128i __B);  // 3249
				}
				InterleaveHighIntsSIMD<>(const i32x4& a,
							const i32x4& b);  // 186
				{
					__m128i retVal; // 3181
					_mm_packs_epi32(__m128i __A,
							__m128i __B);  // 3182
				}
				PackSignedIntsToShortsWithSaturateSIMD<>(const i32x4& a,
									const i32x4& b);  // 188
				_mm_storeu_si128(__m128i_u* __P,
						__m128i __B);  // 2747
				StoreUnalignedSIMD<>(short int* pSIMD,
							const i16x8& a);  // 189
			}
		}
	}
	{
		int i; // 195
		{
			int l; // 197
			int r; // 200
		}
	}
} /* size: 0 */

// <06D79474> soundsystem/lowlevel/mix.cpp:209
// variables: 22
// function calls: 21
void ConvertFloat32Int16_Clamp_Interleave2(short int* pOut, float* pflInputLeft, float* pflInputRight, int nSampleCount)
{
	{
		int nSampleQuads; // 218
		fltx4 fl4Scale; // 223
		{
			int i; // 224
			{
				fltx4 leftSamples; // 227
				fltx4 rightSamples; // 229
				i32x4 nLeft; // 231
				i32x4 nRight; // 232
				i32x4 nInterleavedLow; // 233
				i32x4 nInterleavedHigh; // 234
				i16x8 nOut; // 235
				{
					fltx4 retVal; // 602
					_mm_load_ps(const float* __P); // 603
				}
				LoadAlignedSIMD<>(const void* pSIMD); // 227
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 227
				{
					fltx4 retVal; // 602
					_mm_load_ps(const float* __P); // 603
				}
				LoadAlignedSIMD<>(const void* pSIMD); // 229
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 229
				{
					__m128i retVal; // 3296
					_mm_cvtps_epi32(__m128 __A); // 3297
				}
				RoundFloatToIntSIMD<>(const fltx4& a); // 231
				{
					__m128i retVal; // 3296
					_mm_cvtps_epi32(__m128 __A); // 3297
				}
				RoundFloatToIntSIMD<>(const fltx4& a); // 232
				{
					__m128i retVal; // 3215
					_mm_unpacklo_epi32(__m128i __A,
								__m128i __B);  // 3216
				}
				InterleaveLowIntsSIMD<>(const i32x4& a,
							const i32x4& b);  // 233
				{
					__m128i retVal; // 3248
					_mm_unpackhi_epi32(__m128i __A,
								__m128i __B);  // 3249
				}
				InterleaveHighIntsSIMD<>(const i32x4& a,
							const i32x4& b);  // 234
				{
					__m128i retVal; // 3181
					_mm_packs_epi32(__m128i __A,
							__m128i __B);  // 3182
				}
				PackSignedIntsToShortsWithSaturateSIMD<>(const i32x4& a,
									const i32x4& b);  // 235
				_mm_store_si128(__m128i* __P,
						__m128i __B);  // 2701
				StoreAlignedSIMD<>(short int* pSIMD,
							const i16x8& a);  // 236
			}
		}
	}
	{
		int i; // 243
		{
			int l; // 245
			int r; // 248
		}
	}
	IsAligned16Bytes(void* p); // 211
} /* size: 0, inline expansions: 1 (0 bytes) */

// <06D77C1F> soundsystem/lowlevel/mix.cpp:258
// variables: 65
// function calls: 85
void ConvertFloat32Int16_Clamp_Interleave6(short int* pOut, int nOutputChannelCount, int nChannelStrideFloats, float* pflChannel0, int nInputChannelCount, int nSampleCount)
{
	const char   __FUNCTION__; // 59785
	fltx4 fl4Scale; // 261
	const float* pInput0; // 262
	const float* pInput1; // 263
	const float* pInput2; // 264
	const float* pInput3; // 265
	const float* pInput4; // 266
	const float* pInput5; // 267
	short int* pWrite; // 268
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 260
	}
	{
		int i; // 270
		{
			fltx4 fl4Samples0; // 273
			fltx4 fl4Samples1; // 274
			fltx4 fl4Samples2; // 275
			fltx4 fl4Samples3; // 276
			fltx4 fl4Samples4; // 277
			fltx4 fl4Samples5; // 278
			fltx4 fl4Pair0; // 281
			fltx4 fl4Pair1; // 282
			fltx4 fl4Pair2; // 283
			fltx4 fl4Pair3; // 284
			fltx4 fl4Pair4; // 285
			fltx4 fl4Pair5; // 286
			fltx4 fl4Out0; // 289
			fltx4 fl4Out1; // 290
			fltx4 fl4Out2; // 291
			fltx4 fl4Out3; // 292
			fltx4 fl4Out4; // 293
			fltx4 fl4Out5; // 294
			i16x8 nOut0; // 297
			i16x8 nOut1; // 298
			i16x8 nOut2; // 299
			{
				fltx4 retVal; // 602
				_mm_load_ps(const float* __P); // 603
			}
			LoadAlignedSIMD<>(const void* pSIMD); // 273
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 273
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 274
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 275
			{
				fltx4 retVal; // 602
				_mm_load_ps(const float* __P); // 603
			}
			LoadAlignedSIMD<>(const void* pSIMD); // 274
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 276
			{
				fltx4 retVal; // 602
				_mm_load_ps(const float* __P); // 603
			}
			LoadAlignedSIMD<>(const void* pSIMD); // 275
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 277
			{
				fltx4 retVal; // 602
				_mm_load_ps(const float* __P); // 603
			}
			LoadAlignedSIMD<>(const void* pSIMD); // 276
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 278
			{
				fltx4 retVal; // 602
				_mm_load_ps(const float* __P); // 603
			}
			LoadAlignedSIMD<>(const void* pSIMD); // 277
			{
				fltx4 retVal; // 602
				_mm_load_ps(const float* __P); // 603
			}
			LoadAlignedSIMD<>(const void* pSIMD); // 278
			{
				fltx4 retVal; // 1276
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1277
			}
			ShuffleSIMD<68>(const fltx4& a,
					const fltx4& b);  // 665
			ShuffleSIMD<68>(const fltx4& a,
					const fltx4& b);  // 281
			{
				fltx4 retVal; // 1276
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1277
			}
			ShuffleSIMD<238>(const fltx4& a,
					const fltx4& b);  // 665
			ShuffleSIMD<238>(const fltx4& a,
					const fltx4& b);  // 282
			{
				fltx4 retVal; // 1276
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1277
			}
			ShuffleSIMD<68>(const fltx4& a,
					const fltx4& b);  // 665
			ShuffleSIMD<68>(const fltx4& a,
					const fltx4& b);  // 283
			{
				fltx4 retVal; // 1276
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1277
			}
			ShuffleSIMD<238>(const fltx4& a,
					const fltx4& b);  // 665
			ShuffleSIMD<238>(const fltx4& a,
					const fltx4& b);  // 284
			{
				fltx4 retVal; // 1276
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1277
			}
			ShuffleSIMD<68>(const fltx4& a,
					const fltx4& b);  // 665
			ShuffleSIMD<68>(const fltx4& a,
					const fltx4& b);  // 285
			{
				fltx4 retVal; // 1276
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1277
			}
			ShuffleSIMD<238>(const fltx4& a,
					const fltx4& b);  // 665
			ShuffleSIMD<238>(const fltx4& a,
					const fltx4& b);  // 286
			{
				fltx4 retVal; // 1276
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1277
			}
			ShuffleSIMD<136>(const fltx4& a,
					const fltx4& b);  // 665
			ShuffleSIMD<136>(const fltx4& a,
					const fltx4& b);  // 289
			{
				fltx4 retVal; // 1276
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1277
			}
			ShuffleSIMD<216>(const fltx4& a,
					const fltx4& b);  // 665
			ShuffleSIMD<216>(const fltx4& a,
					const fltx4& b);  // 290
			{
				fltx4 retVal; // 1276
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1277
			}
			ShuffleSIMD<221>(const fltx4& a,
					const fltx4& b);  // 665
			ShuffleSIMD<221>(const fltx4& a,
					const fltx4& b);  // 291
			{
				fltx4 retVal; // 1276
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1277
			}
			ShuffleSIMD<136>(const fltx4& a,
					const fltx4& b);  // 665
			ShuffleSIMD<136>(const fltx4& a,
					const fltx4& b);  // 292
			{
				fltx4 retVal; // 1276
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1277
			}
			ShuffleSIMD<216>(const fltx4& a,
					const fltx4& b);  // 665
			ShuffleSIMD<216>(const fltx4& a,
					const fltx4& b);  // 293
			{
				fltx4 retVal; // 1276
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1277
			}
			ShuffleSIMD<221>(const fltx4& a,
					const fltx4& b);  // 665
			ShuffleSIMD<221>(const fltx4& a,
					const fltx4& b);  // 294
			{
				__m128i retVal; // 3296
				_mm_cvtps_epi32(__m128 __A); // 3297
			}
			RoundFloatToIntSIMD<>(const fltx4& a); // 297
			{
				__m128i retVal; // 3296
				_mm_cvtps_epi32(__m128 __A); // 3297
			}
			RoundFloatToIntSIMD<>(const fltx4& a); // 297
			{
				__m128i retVal; // 3181
				_mm_packs_epi32(__m128i __A,
						__m128i __B);  // 3182
			}
			PackSignedIntsToShortsWithSaturateSIMD<>(const i32x4& a,
								const i32x4& b);  // 297
			{
				__m128i retVal; // 3296
				_mm_cvtps_epi32(__m128 __A); // 3297
			}
			RoundFloatToIntSIMD<>(const fltx4& a); // 298
			{
				__m128i retVal; // 3296
				_mm_cvtps_epi32(__m128 __A); // 3297
			}
			RoundFloatToIntSIMD<>(const fltx4& a); // 298
			{
				__m128i retVal; // 3181
				_mm_packs_epi32(__m128i __A,
						__m128i __B);  // 3182
			}
			PackSignedIntsToShortsWithSaturateSIMD<>(const i32x4& a,
								const i32x4& b);  // 298
			{
				__m128i retVal; // 3296
				_mm_cvtps_epi32(__m128 __A); // 3297
			}
			RoundFloatToIntSIMD<>(const fltx4& a); // 299
			{
				__m128i retVal; // 3296
				_mm_cvtps_epi32(__m128 __A); // 3297
			}
			RoundFloatToIntSIMD<>(const fltx4& a); // 299
			{
				__m128i retVal; // 3181
				_mm_packs_epi32(__m128i __A,
						__m128i __B);  // 3182
			}
			PackSignedIntsToShortsWithSaturateSIMD<>(const i32x4& a,
								const i32x4& b);  // 299
			_mm_storeu_si128(__m128i_u* __P,
					__m128i __B);  // 2747
			StoreUnalignedSIMD<>(short int* pSIMD,
						const i16x8& a);  // 301
			_mm_storeu_si128(__m128i_u* __P,
					__m128i __B);  // 2747
			StoreUnalignedSIMD<>(short int* pSIMD,
						const i16x8& a);  // 302
			_mm_storeu_si128(__m128i_u* __P,
					__m128i __B);  // 2747
			StoreUnalignedSIMD<>(short int* pSIMD,
						const i16x8& a);  // 303
		}
	}
	IsAligned16Bytes(void* p); // 260
} /* size: 0, variables: 9, inline expansions: 1 (0 bytes) */

// <06D75CCB> soundsystem/lowlevel/mix.cpp:310
// variables: 85
// function calls: 113
void ConvertFloat32Int16_Clamp_Interleave8(short int* pOut, int nOutputChannelCount, int nChannelStrideFloats, float* pflChannel0, int nInputChannelCount, int nSampleCount)
{
	const char   __FUNCTION__; // 59785
	fltx4 fl4Scale; // 313
	const float* pInput0; // 314
	const float* pInput1; // 315
	const float* pInput2; // 316
	const float* pInput3; // 317
	const float* pInput4; // 318
	const float* pInput5; // 319
	const float* pInput6; // 320
	const float* pInput7; // 321
	short int* pWrite; // 322
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 312
	}
	{
		int i; // 324
		{
			fltx4 fl4Samples0; // 327
			fltx4 fl4Samples1; // 328
			fltx4 fl4Samples2; // 329
			fltx4 fl4Samples3; // 330
			fltx4 fl4Samples4; // 331
			fltx4 fl4Samples5; // 332
			fltx4 fl4Samples6; // 333
			fltx4 fl4Samples7; // 334
			fltx4 fl4Pair0; // 337
			fltx4 fl4Pair1; // 338
			fltx4 fl4Pair2; // 339
			fltx4 fl4Pair3; // 340
			fltx4 fl4Pair4; // 341
			fltx4 fl4Pair5; // 342
			fltx4 fl4Pair6; // 343
			fltx4 fl4Pair7; // 344
			fltx4 fl4Out0; // 347
			fltx4 fl4Out1; // 348
			fltx4 fl4Out2; // 349
			fltx4 fl4Out3; // 350
			fltx4 fl4Out4; // 351
			fltx4 fl4Out5; // 352
			fltx4 fl4Out6; // 353
			fltx4 fl4Out7; // 354
			i16x8 nOut0; // 357
			i16x8 nOut1; // 358
			i16x8 nOut2; // 359
			i16x8 nOut3; // 360
			{
				fltx4 retVal; // 602
				_mm_load_ps(const float* __P); // 603
			}
			LoadAlignedSIMD<>(const void* pSIMD); // 327
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 327
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 328
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 329
			{
				fltx4 retVal; // 602
				_mm_load_ps(const float* __P); // 603
			}
			LoadAlignedSIMD<>(const void* pSIMD); // 328
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 331
			{
				fltx4 retVal; // 602
				_mm_load_ps(const float* __P); // 603
			}
			LoadAlignedSIMD<>(const void* pSIMD); // 329
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 330
			{
				fltx4 retVal; // 602
				_mm_load_ps(const float* __P); // 603
			}
			LoadAlignedSIMD<>(const void* pSIMD); // 330
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 332
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 333
			{
				fltx4 retVal; // 602
				_mm_load_ps(const float* __P); // 603
			}
			LoadAlignedSIMD<>(const void* pSIMD); // 331
			{
				fltx4 retVal; // 602
				_mm_load_ps(const float* __P); // 603
			}
			LoadAlignedSIMD<>(const void* pSIMD); // 332
			{
				fltx4 retVal; // 1276
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1277
			}
			ShuffleSIMD<68>(const fltx4& a,
					const fltx4& b);  // 665
			ShuffleSIMD<68>(const fltx4& a,
					const fltx4& b);  // 337
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 334
			{
				fltx4 retVal; // 602
				_mm_load_ps(const float* __P); // 603
			}
			LoadAlignedSIMD<>(const void* pSIMD); // 333
			{
				fltx4 retVal; // 1276
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1277
			}
			ShuffleSIMD<238>(const fltx4& a,
					const fltx4& b);  // 665
			ShuffleSIMD<238>(const fltx4& a,
					const fltx4& b);  // 338
			{
				fltx4 retVal; // 602
				_mm_load_ps(const float* __P); // 603
			}
			LoadAlignedSIMD<>(const void* pSIMD); // 334
			{
				fltx4 retVal; // 1276
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1277
			}
			ShuffleSIMD<68>(const fltx4& a,
					const fltx4& b);  // 665
			ShuffleSIMD<68>(const fltx4& a,
					const fltx4& b);  // 339
			{
				fltx4 retVal; // 1276
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1277
			}
			ShuffleSIMD<238>(const fltx4& a,
					const fltx4& b);  // 665
			ShuffleSIMD<238>(const fltx4& a,
					const fltx4& b);  // 340
			{
				fltx4 retVal; // 1276
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1277
			}
			ShuffleSIMD<68>(const fltx4& a,
					const fltx4& b);  // 665
			ShuffleSIMD<68>(const fltx4& a,
					const fltx4& b);  // 341
			{
				fltx4 retVal; // 1276
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1277
			}
			ShuffleSIMD<238>(const fltx4& a,
					const fltx4& b);  // 665
			ShuffleSIMD<238>(const fltx4& a,
					const fltx4& b);  // 342
			{
				fltx4 retVal; // 1276
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1277
			}
			ShuffleSIMD<68>(const fltx4& a,
					const fltx4& b);  // 665
			ShuffleSIMD<68>(const fltx4& a,
					const fltx4& b);  // 343
			{
				fltx4 retVal; // 1276
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1277
			}
			ShuffleSIMD<136>(const fltx4& a,
					const fltx4& b);  // 665
			ShuffleSIMD<136>(const fltx4& a,
					const fltx4& b);  // 348
			{
				fltx4 retVal; // 1276
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1277
			}
			ShuffleSIMD<238>(const fltx4& a,
					const fltx4& b);  // 665
			ShuffleSIMD<238>(const fltx4& a,
					const fltx4& b);  // 344
			{
				fltx4 retVal; // 1276
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1277
			}
			ShuffleSIMD<136>(const fltx4& a,
					const fltx4& b);  // 665
			ShuffleSIMD<136>(const fltx4& a,
					const fltx4& b);  // 347
			{
				fltx4 retVal; // 1276
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1277
			}
			ShuffleSIMD<221>(const fltx4& a,
					const fltx4& b);  // 665
			ShuffleSIMD<221>(const fltx4& a,
					const fltx4& b);  // 349
			{
				fltx4 retVal; // 1276
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1277
			}
			ShuffleSIMD<221>(const fltx4& a,
					const fltx4& b);  // 665
			ShuffleSIMD<221>(const fltx4& a,
					const fltx4& b);  // 350
			{
				fltx4 retVal; // 1276
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1277
			}
			ShuffleSIMD<136>(const fltx4& a,
					const fltx4& b);  // 665
			ShuffleSIMD<136>(const fltx4& a,
					const fltx4& b);  // 351
			{
				fltx4 retVal; // 1276
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1277
			}
			ShuffleSIMD<136>(const fltx4& a,
					const fltx4& b);  // 665
			ShuffleSIMD<136>(const fltx4& a,
					const fltx4& b);  // 352
			{
				fltx4 retVal; // 1276
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1277
			}
			ShuffleSIMD<221>(const fltx4& a,
					const fltx4& b);  // 665
			ShuffleSIMD<221>(const fltx4& a,
					const fltx4& b);  // 353
			{
				fltx4 retVal; // 1276
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1277
			}
			ShuffleSIMD<221>(const fltx4& a,
					const fltx4& b);  // 665
			ShuffleSIMD<221>(const fltx4& a,
					const fltx4& b);  // 354
			{
				__m128i retVal; // 3296
				_mm_cvtps_epi32(__m128 __A); // 3297
			}
			RoundFloatToIntSIMD<>(const fltx4& a); // 357
			{
				__m128i retVal; // 3296
				_mm_cvtps_epi32(__m128 __A); // 3297
			}
			RoundFloatToIntSIMD<>(const fltx4& a); // 357
			{
				__m128i retVal; // 3181
				_mm_packs_epi32(__m128i __A,
						__m128i __B);  // 3182
			}
			PackSignedIntsToShortsWithSaturateSIMD<>(const i32x4& a,
								const i32x4& b);  // 357
			{
				__m128i retVal; // 3296
				_mm_cvtps_epi32(__m128 __A); // 3297
			}
			RoundFloatToIntSIMD<>(const fltx4& a); // 358
			{
				__m128i retVal; // 3296
				_mm_cvtps_epi32(__m128 __A); // 3297
			}
			RoundFloatToIntSIMD<>(const fltx4& a); // 358
			{
				__m128i retVal; // 3181
				_mm_packs_epi32(__m128i __A,
						__m128i __B);  // 3182
			}
			PackSignedIntsToShortsWithSaturateSIMD<>(const i32x4& a,
								const i32x4& b);  // 358
			{
				__m128i retVal; // 3296
				_mm_cvtps_epi32(__m128 __A); // 3297
			}
			RoundFloatToIntSIMD<>(const fltx4& a); // 359
			_mm_storeu_si128(__m128i_u* __P,
					__m128i __B);  // 2747
			StoreUnalignedSIMD<>(short int* pSIMD,
						const i16x8& a);  // 362
			{
				__m128i retVal; // 3296
				_mm_cvtps_epi32(__m128 __A); // 3297
			}
			RoundFloatToIntSIMD<>(const fltx4& a); // 360
			{
				__m128i retVal; // 3296
				_mm_cvtps_epi32(__m128 __A); // 3297
			}
			RoundFloatToIntSIMD<>(const fltx4& a); // 359
			_mm_storeu_si128(__m128i_u* __P,
					__m128i __B);  // 2747
			StoreUnalignedSIMD<>(short int* pSIMD,
						const i16x8& a);  // 363
			{
				__m128i retVal; // 3181
				_mm_packs_epi32(__m128i __A,
						__m128i __B);  // 3182
			}
			PackSignedIntsToShortsWithSaturateSIMD<>(const i32x4& a,
								const i32x4& b);  // 359
			{
				__m128i retVal; // 3296
				_mm_cvtps_epi32(__m128 __A); // 3297
			}
			RoundFloatToIntSIMD<>(const fltx4& a); // 360
			{
				__m128i retVal; // 3181
				_mm_packs_epi32(__m128i __A,
						__m128i __B);  // 3182
			}
			PackSignedIntsToShortsWithSaturateSIMD<>(const i32x4& a,
								const i32x4& b);  // 360
			_mm_storeu_si128(__m128i_u* __P,
					__m128i __B);  // 2747
			StoreUnalignedSIMD<>(short int* pSIMD,
						const i16x8& a);  // 364
			_mm_storeu_si128(__m128i_u* __P,
					__m128i __B);  // 2747
			StoreUnalignedSIMD<>(short int* pSIMD,
						const i16x8& a);  // 365
		}
	}
	IsAligned16Bytes(void* p); // 312
} /* size: 0, variables: 11, inline expansions: 1 (0 bytes) */

// <06D7599F> soundsystem/lowlevel/mix.cpp:371
// variables: 12
// function calls: 2
void ConvertFloat32Int16_Clamp_InterleaveStride(short int* pOut, int nOutputChannelCount, int nChannelStrideFloats, float* pflChannel0, int nInputChannelCount, int nSampleCount)
{
	const char   __FUNCTION__; // 59806
	{
		int i; // 390
		{
			float* pIn; // 392
			{
				int j; // 393
				{
					int nOut; // 395
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 396
				}
			}
			{
				int j; // 400
			}
		}
	}
	{
		int nCopyChannels; // 408
		{
			int i; // 409
			{
				float* pIn; // 411
				{
					int j; // 412
					{
						int nOut; // 414
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 415
					}
				}
			}
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 421
	}
} /* size: 0, variables: 1 */

// <06D754C8> soundsystem/lowlevel/mix.cpp:424
// variables: 11
// function calls: 13
void Float32_Clamp_Interleave2(float* pOut, float* pflLeft, float* pflRight, int nSampleCount)
{
	int nSampleQuads; // 436
	{
		int i; // 428
	}
	{
		int i; // 438
		{
			fltx4 leftSamples; // 441
			fltx4 rightSamples; // 443
			fltx4 fl4InterleavedLow; // 446
			fltx4 fl4InterleavedHigh; // 447
			{
				fltx4 retVal; // 602
				_mm_load_ps(const float* __P); // 603
			}
			LoadAlignedSIMD<>(const void* pSIMD); // 441
			{
				fltx4 retVal; // 602
				_mm_load_ps(const float* __P); // 603
			}
			LoadAlignedSIMD<>(const void* pSIMD); // 443
			{
				fltx4 retVal; // 2811
				_mm_unpacklo_ps(__m128 __A,
						__m128 __B);  // 2812
			}
			InterleaveSIMDXY<>(const fltx4& a,
						const fltx4& b);  // 446
			{
				fltx4 retVal; // 2844
				_mm_unpackhi_ps(__m128 __A,
						__m128 __B);  // 2845
			}
			InterleaveSIMDZW<>(const fltx4& a,
						const fltx4& b);  // 447
			_mm_store_ps(float* __P,
					__m128 __A);  // 273
			StoreAlignedSIMD<>(float* pSIMD,
						const fltx4& a);  // 448
			_mm_store_ps(float* __P,
					__m128 __A);  // 273
			StoreAlignedSIMD<>(float* pSIMD,
						const fltx4& a);  // 449
		}
	}
	IsAligned16Bytes(void* p); // 426
} /* size: 162, variables: 1, inline expansions: 1 (0 bytes) */

// <06D75342> soundsystem/lowlevel/mix.cpp:455
// variables: 8
void Float32_Clamp_InterleaveStride(float* pOut, int nOutputChannelCount, int nChannelStrideFloats, float* pflChannel0, int nInputChannelCount, int nSampleCount)
{
	{
		int i; // 460
		{
			float* pIn; // 462
			{
				int j; // 463
			}
			{
				int j; // 468
			}
		}
	}
	{
		int nCopyChannels; // 476
		{
			int i; // 477
			{
				float* pIn; // 479
				{
					int j; // 480
				}
			}
		}
	}
} /* size: 373 */

// <06D752BD> soundsystem/lowlevel/mix.cpp:489
// variables: 7
void ConvertShortToFloatx8(float* flOutput, const short int* pIn)
{
	fltx4* pOutput; // 491
	const i16x8* pInput; // 492
	fltx4 fl4Scale; // 493
	{
		int i; // 494
		{
			i16x8 samples; // 496
			fltx4 lo; // 498
			fltx4 hi; // 500
		}
	}
} /* size: 0, variables: 3 */

// <06D75298> soundsystem/lowlevel/mix.cpp:513
inline int FLOAT_TO_FIXED(float flVal)
{
} /* size: 0 */

// <06D75229> soundsystem/lowlevel/mix.cpp:519
// variables: 4
int CalcAdvanceSamples(int nOutCount, float sampleRatio, uint* pInputOffsetFrac)
{
	uint nRateScaleFix; // 521
	uint nSampleFrac; // 522
	uint nSampleIndex; // 523
	{
		int i; // 525
	}
} /* size: 0, variables: 3 */

// <06D7515D> soundsystem/lowlevel/mix.cpp:537
// variables: 9
uint Resample16to32(float* pOut, const short int* pWaveData, float sampleRatio, uint* pInputOffsetFrac)
{
	uint nRateScaleFix; // 539
	uint nSampleFrac; // 540
	const char   __FUNCTION__; // 59659
	uint nSampleIndex; // 542
	int nFirst; // 544
	int nSecond; // 544
	int nInterp; // 544
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 541
	}
	{
		int i; // 545
	}
} /* size: 0, variables: 7 */

// <06D74FA9> soundsystem/lowlevel/mix.cpp:573
// variables: 29
uint Resample16to32_2x(float* flOutput, const short int* pWaveData, uint* pInputOffsetFrac)
{
	fltx4* pOutput; // 575
	const i16x8* pInput; // 576
	fltx4 fl4Scale; // 577
	fltx4 flAllOne; // 578
	fltx4 fl4FirstTwo; // 579
	fltx4 fl4LastTwo; // 580
	{
		int i; // 581
		{
			i16x8 samples; // 583
			fltx4 lo; // 585
			fltx4 hi; // 587
			i16x8 samplesNext; // 589
			fltx4 hi4; // 591
			fltx4 samp0; // 594
			fltx4 samp1; // 595
			fltx4 samp0011; // 596
			fltx4 samp2; // 597
			fltx4 samp1122; // 598
			fltx4 samp3; // 602
			fltx4 samp2233; // 603
			fltx4 samp4; // 604
			fltx4 samp3344; // 605
			fltx4 samp5; // 609
			fltx4 samp4455; // 610
			fltx4 samp6; // 611
			fltx4 samp5566; // 612
			fltx4 samp7; // 616
			fltx4 samp6677; // 617
			fltx4 samp8; // 618
			fltx4 samp7788; // 619
		}
	}
} /* size: 0, variables: 6 */

// <06D74E7E> soundsystem/lowlevel/mix.cpp:629
// variables: 18
uint Resample16to32_4x(float* flOutput, const short int* pWaveData, uint* pInputOffsetFrac)
{
	fltx4* pOutput; // 631
	const i16x8* pInput; // 632
	fltx4 fl4Scale; // 633
	{
		int i; // 634
		{
			i16x8 samples; // 636
			fltx4 lo; // 638
			fltx4 hi; // 640
			i16x8 samplesNext; // 642
			fltx4 hi4; // 644
			fltx4 samp0; // 647
			fltx4 samp1; // 648
			fltx4 samp2; // 652
			fltx4 samp3; // 656
			fltx4 samp4; // 660
			fltx4 samp5; // 664
			fltx4 samp6; // 668
			fltx4 samp7; // 672
			fltx4 samp8; // 676
		}
	}
} /* size: 0, variables: 3 */

// <06D74E3F> soundsystem/lowlevel/mix.cpp:683
// variable: 1
inline int ZeroFill(short int* pBuffer, int nCount)
{
	short int* pLast; // 685
} /* size: 0, variables: 1 */

// <06D748F6> soundsystem/lowlevel/mix.cpp:694
// variables: 20
// function calls: 11
const short int* GetContiguousSamples_8Mono(const audio_source_input_t& source, const audio_source_indexstate_t* pState, int nSamplesNeeded, short int* pTemp, int nTempSampleCount)
{
	const char   __FUNCTION__; // 59701
	int nSampleIndex; // 698
	uint nPacketIndex; // 699
	int nOutIndex; // 700
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 696
	}
	{
		const uint8* pSourceData; // 706
		int nSamplesAvailable; // 707
		int nCopy; // 709
		i32x4* pOut; // 711
		int nConverted; // 712
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 708
		}
		{
			int nBundles; // 715
			i32x4 n4ConvertToSigned; // 716
			{
				int i; // 717
				{
					i32x4 nSamples; // 720
					i32x4 nSamples16; // 724
					_mm_add_epi8(__m128i __A,
							__m128i __B);  // 721
					{
						__m128i retVal; // 2638
						_mm_loadu_si128(const __m128i_u* __P); // 2639
					}
					LoadUnalignedIntSIMD<>(const void* pSIMD); // 720
					_mm_unpacklo_epi8(__m128i __A,
								__m128i __B);  // 724
					_mm_store_si128(__m128i* __P,
							__m128i __B);  // 725
					_mm_unpackhi_epi8(__m128i __A,
								__m128i __B);  // 728
					_mm_store_si128(__m128i* __P,
							__m128i __B);  // 729
				}
			}
		}
		{
			int i; // 734
			{
				uint8 nSample; // 736
			}
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 748
		}
		IsAligned16Bytes(void* p); // 713
		Min<int>(const int& val1,
			const int& val2);  // 709
	}
	ZeroFill(short int* pBuffer,
		int nCount);  // 700
	ZeroFill(short int* pBuffer,
		int nCount);  // 755
} /* size: 0, variables: 4, inline expansions: 2 (61 bytes) */

// <06D745DA> soundsystem/lowlevel/mix.cpp:761
// variables: 12
// function calls: 3
const short int* GetContiguousSamples_8Stereo(const audio_source_input_t& source, const audio_source_indexstate_t* pState, int nSamplesNeeded, short int* pTemp, int nTempSampleCount)
{
	const char   __FUNCTION__; // 59743
	uint nSampleIndex; // 765
	uint nPacketIndex; // 766
	int nOutIndex; // 767
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 763
	}
	{
		const uint8* pSourceData; // 773
		int nSamplesAvailable; // 774
		int nCopy; // 776
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 775
		}
		{
			int i; // 777
			{
				uint8 nSample; // 779
			}
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 784
		}
		Min<int>(const int& val1,
			const int& val2);  // 776
	}
	ZeroFill(short int* pBuffer,
		int nCount);  // 767
	ZeroFill(short int* pBuffer,
		int nCount);  // 791
} /* size: 0, variables: 4, inline expansions: 2 (69 bytes) */

// <06D742D4> soundsystem/lowlevel/mix.cpp:797
// variables: 9
// function calls: 5
const short int* GetContiguousSamples_16Mono(const audio_source_input_t& source, const audio_source_indexstate_t* pState, int nSamplesNeeded, short int* pTemp, int nTempSampleCount)
{
	const char   __FUNCTION__; // 59722
	uint nSampleIndex; // 801
	uint nPacketIndex; // 802
	int nOutIndex; // 816
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 799
	}
	{
		int nSamplesAvailable; // 806
	}
	{
		const short int* pSourceData; // 822
		int nSamplesAvailable; // 823
		int nCopy; // 825
		Min<int>(const int& val1,
			const int& val2);  // 825
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 826
	}
	ZeroFill(short int* pBuffer,
		int nCount);  // 816
	ZeroFill(short int* pBuffer,
		int nCount);  // 837
} /* size: 0, variables: 4, inline expansions: 2 (64 bytes) */

// <06D74049> soundsystem/lowlevel/mix.cpp:843
// variables: 9
// function calls: 3
const short int* GetContiguousSamples_16Stereo(const audio_source_input_t& source, const audio_source_indexstate_t* pState, int nSamplesNeeded, short int* pTemp, int nTempSampleCount)
{
	const char   __FUNCTION__; // 59764
	uint nSampleIndex; // 847
	uint nPacketIndex; // 848
	int nOutIndex; // 849
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 845
	}
	{
		const short int* pSourceData; // 855
		int nSamplesAvailable; // 856
		int nCopy; // 858
		{
			int i; // 859
		}
		Min<int>(const int& val1,
			const int& val2);  // 858
	}
	ZeroFill(short int* pBuffer,
		int nCount);  // 849
	ZeroFill(short int* pBuffer,
		int nCount);  // 874
} /* size: 0, variables: 4, inline expansions: 2 (69 bytes) */

// <06D73D94> soundsystem/lowlevel/mix.cpp:880
// variables: 11
// function calls: 3
const short int* GetContiguousSamples_16Stride(const audio_source_input_t& source, const audio_source_indexstate_t* pState, int nSamplesNeeded, short int* pTemp, int nTempSampleCount)
{
	const char   __FUNCTION__; // 59764
	uint nSampleIndex; // 884
	uint nPacketIndex; // 885
	int nOutIndex; // 886
	uint nChannelsPerFrame; // 888
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 882
	}
	{
		const short int* pSourceData; // 894
		int nSamplesAvailable; // 895
		int nCopy; // 897
		uint nIndex; // 898
		{
			int i; // 899
		}
		Min<int>(const int& val1,
			const int& val2);  // 897
	}
	ZeroFill(short int* pBuffer,
		int nCount);  // 886
	ZeroFill(short int* pBuffer,
		int nCount);  // 914
} /* size: 0, variables: 5, inline expansions: 2 (69 bytes) */

// <06D73D45> soundsystem/lowlevel/mix.cpp:920
bool IsFinished(const audio_source_input_t& source, const audio_source_indexstate_t* pCurrentState)
{
} /* size: 0 */

// <06D6F4A2> soundsystem/lowlevel/mix.cpp:1080
// variables: 4
// function calls: 3
int AdvanceSource(const audio_source_input_t& source, float flPitch, audio_source_indexstate_t* pOut)
{
	float flSampleRatio; // 1082
	int nSamplesNeeded; // 1083
	float flSampleRate; // 1084
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 1088
	FLOAT_TO_FIXED(float flVal); // 521
	{
		int i; // 525
	}
	CalcAdvanceSamples(int nOutCount,
				float sampleRatio,
				uint* pInputOffsetFrac);  // 1089
} /* size: 0, variables: 3, inline expansions: 3 (0 bytes) */

// <06D6F211> soundsystem/lowlevel/mix.cpp:1156
// variables: 2
// function calls: 3
void SilenceBuffers(CAudioMixBuffer* pBuffers, int nBufferCount)
{
	{
		int i; // 1158
		{
			int i; // 1149
			_mm_store_ps(float* __P,
					__m128 __A);  // 273
			StoreAlignedSIMD<>(float* pSIMD,
						const fltx4& a);  // 1151
		}
		SilenceBuffer(float* flBuffer); // 1160
	}
} /* size: 0 */

// <06D6DF51> soundsystem/lowlevel/mix.cpp:1226
// variables: 7
// function calls: 8
void SwapBuffersInPlace(float* flInput0, float* flInput1)
{
	fltx4* pIn0; // 1228
	fltx4* pIn1; // 1229
	{
		int i; // 1230
		{
			fltx4 fl4Sample0; // 1232
			fltx4 fl4Sample1; // 1233
			{
				fltx4 retVal; // 602
				_mm_load_ps(const float* __P); // 603
			}
			LoadAlignedSIMD<>(const void* pSIMD); // 1232
			{
				fltx4 retVal; // 602
				_mm_load_ps(const float* __P); // 603
			}
			LoadAlignedSIMD<>(const void* pSIMD); // 1233
			_mm_store_ps(float* __P,
					__m128 __A);  // 273
			StoreAlignedSIMD<>(float* pSIMD,
						const fltx4& a);  // 1234
			_mm_store_ps(float* __P,
					__m128 __A);  // 273
			StoreAlignedSIMD<>(float* pSIMD,
						const fltx4& a);  // 1235
		}
	}
} /* size: 0, variables: 2 */

// <06D6CCBF> soundsystem/lowlevel/mix.cpp:1318
// variables: 2
float ComputeAttackTimeConstant(float flAttackTimeMs, float fldbGainNoiseFloor)
{
	const float  flLnAttenuation; // 1320
	float flAttackRate; // 1322
} /* size: 0, variables: 2 */

// <06D6CC4A> soundsystem/lowlevel/mix.cpp:1326
// variables: 3
float ComputeRMSLevel(const float* pSamples, uint nSampleCount, float flCurrentLevelRMS, float flTimeConstant)
{
	{
		uint i; // 1328
		{
			float flSample; // 1330
			float flRMS; // 1331
		}
	}
} /* size: 0 */

// <06D6C611> soundsystem/lowlevel/mix.cpp:1338
// variables: 14
// function calls: 21
void AverageBuffers(CAudioMixBuffer* pOut, const CAudioMixBuffer* pInput, int nChannels)
{
	float flMixdownScale; // 1340
	{
		int i; // 1342
		{
			int i; // 1169
			{
				fltx4 fl4Sample; // 1171
				fltx4 fl4Mix; // 1172
				{
					fltx4 retVal; // 602
					_mm_load_ps(const float* __P); // 603
				}
				LoadAlignedSIMD<>(const void* pSIMD); // 1171
				{
					fltx4 retVal; // 602
					_mm_load_ps(const float* __P); // 603
				}
				LoadAlignedSIMD<>(const void* pSIMD); // 1172
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 1684
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 1684
				MaddSIMD<>(const fltx4& a,
						const fltx4& b,
						const fltx4& c);  // 1173
				_mm_store_ps(float* __P,
						__m128 __A);  // 273
				StoreAlignedSIMD<>(float* pSIMD,
							const fltx4& a);  // 1173
			}
		}
		MixBuffer(float* flOutput,
				const float* flInput,
				float scale);  // 1344
	}
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 1105
	{
		int i; // 1108
		{
			fltx4 sample; // 1110
			{
				fltx4 retVal; // 602
				_mm_load_ps(const float* __P); // 603
			}
			LoadAlignedSIMD<>(const void* pSIMD); // 1110
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 1111
			_mm_store_ps(float* __P,
					__m128 __A);  // 273
			StoreAlignedSIMD<>(float* pSIMD,
						const fltx4& a);  // 1111
		}
	}
	ScaleBuffer(float* flOutput,
			const float* input,
			float scale);  // 1341
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <06D6C5C9> soundsystem/lowlevel/mix.cpp:1348
void rms_level_t::GetCurrentLevel()
{
} /* size: 0 */

// <06D6C558> soundsystem/lowlevel/mix.cpp:1353
// function call: 1
void rms_level_t::GetCurrentLeveldB()
{
	rms_to_dB(float flRMS); // 1355
} /* size: 0, inline expansions: 1 (0 bytes) */

// <06D7FAC2> soundsystem/lowlevel/mix.cpp:1358
// variable: 1
// function calls: 7
void rms_level_t::Init(float flInitialLeveldB, float flAttackTimeMS)
{
	float flLevel; // 1360
	dB_To_Gain(float dB); // 53
	dB_To_Gain(float dB); // 1360
	dB_To_Gain(float dB); // 53
	dB_To_Gain(float dB); // 1320
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 1323
	ComputeAttackTimeConstant(float flAttackTimeMs,
					float fldbGainNoiseFloor);  // 1367
	rms_level_t::SetAttackTime(
			float flAttackTimeMS);  // 1362
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <06D6C513> soundsystem/lowlevel/mix.cpp:1358
// variable: 1
void rms_level_t::Init(float flInitialLeveldB, float flAttackTimeMS)
{
	float flLevel; // 1360
} /* size: 0, variables: 1 */

// <06D7FCE4> soundsystem/lowlevel/mix.cpp:1365
// function calls: 4
void rms_level_t::SetAttackTime(float flAttackTimeMS)
{
	dB_To_Gain(float dB); // 53
	dB_To_Gain(float dB); // 1320
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 1323
	ComputeAttackTimeConstant(float flAttackTimeMs,
					float fldbGainNoiseFloor);  // 1367
} /* size: 0, inline expansions: 4 (0 bytes) */

// <06D6C4E8> soundsystem/lowlevel/mix.cpp:1365
void rms_level_t::SetAttackTime(float flAttackTimeMS)
{
} /* size: 0 */

// <06D6C316> soundsystem/lowlevel/mix.cpp:1370
// variables: 7
// function calls: 2
void rms_level_t::Update(const CAudioMixBuffer* pInput, int nChannels)
{
	{
		CAudioMixBuffer mixdownInput; // 1378
		{
			uint i; // 1328
			{
				float flSample; // 1330
				float flRMS; // 1331
			}
		}
		ComputeRMSLevel(const float* pSamples,
				uint nSampleCount,
				float flCurrentLevelRMS,
				float flTimeConstant);  // 1380
	}
	{
		uint i; // 1328
		{
			float flSample; // 1330
			float flRMS; // 1331
		}
	}
	ComputeRMSLevel(const float* pSamples,
			uint nSampleCount,
			float flCurrentLevelRMS,
			float flTimeConstant);  // 1374
} /* size: 0, inline expansions: 1 (0 bytes) */

// <06D6BFA5> soundsystem/lowlevel/mix.cpp:1385
// function calls: 12
void CAudioSignalMeter::CAudioSignalMeter()
{
	dB_To_Gain(float dB); // 53
	dB_To_Gain(float dB); // 1320
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 1323
	ComputeAttackTimeConstant(float flAttackTimeMs,
					float fldbGainNoiseFloor);  // 1367
	rms_level_t::SetAttackTime(
			float flAttackTimeMS);  // 1362
	rms_level_t::Init(
		float flInitialLeveldB,
		float flAttackTimeMS);  // 1387
	dB_To_Gain(float dB); // 53
	dB_To_Gain(float dB); // 1320
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 1323
	ComputeAttackTimeConstant(float flAttackTimeMs,
					float fldbGainNoiseFloor);  // 1367
	rms_level_t::SetAttackTime(
			float flAttackTimeMS);  // 1362
	rms_level_t::Init(
		float flInitialLeveldB,
		float flAttackTimeMS);  // 1388
} /* size: 197, inline expansions: 12 (641 bytes) */

// <06D6BF87> soundsystem/lowlevel/mix.cpp:1385
void CAudioSignalMeter::CAudioSignalMeter()
{
} /* size: 0 */

// <06D6BE38> soundsystem/lowlevel/mix.cpp:1391
// variables: 6
// function calls: 2
void CAudioSignalMeter::Update(const CAudioMixBuffer* pInput)
{
	const float* pSamples; // 1393
	float flPeakRMS; // 1395
	float flCurrentLevelRMS; // 1396
	{
		uint i; // 1401
		{
			float flSample; // 1403
			float flRMS; // 1404
		}
	}
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 1398
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 1399
} /* size: 197, variables: 3, inline expansions: 2 (71 bytes) */

// <06D6BDAF> soundsystem/lowlevel/mix.cpp:1423
void CAudioSignalMeter::UpdateExternalState(const CAudioMixBuffer* pInput, CAudioMeterInstance* pOutput, int nChannel)
{
} /* size: 0 */

