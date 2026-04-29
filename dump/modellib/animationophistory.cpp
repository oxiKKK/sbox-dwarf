
//
// modellib/animationophistory.cpp
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 84
//

// <049A3FC0> modellib/animationophistory.cpp:22
// variables: 2
// function calls: 33
void CAnimationOpHistory::AddAnimationOp(float flTimeStamp, const AnimationOperationHistory_t& op)
{
	AnimationOperationHistory_t* pOp; // 24
	CUtlMemory<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, CUtlMemory<CTimestampedDa this,
			int i);  // 112
	{
		int nState; // 119
		CUtlMemory<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, CUtlMemory<CTimestampedDa this,
				int i);  // 120
		CUtlMemory<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, CUtlMemory<CTimestampedDa this,
				int i);  // 128
		Count(const CUtlVectorBase<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, CUtlMemory<CTimesta this); // 55
		CTimestampedDataContainer<AnimationOperationHistory_t, 3>::PrevState(
				uint16 nState);  // 129
	}
	{
	}
	Count(const CUtlVectorBase<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, CUtlMemory<CTimesta this); // 54
	CTimestampedDataContainer<AnimationOperationHistory_t, 3>::NextState(
			uint16 nState);  // 136
	CUtlMemory<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, CUtlMemory<CTimestampedDa this,
			int i);  // 138
	CUtlMemory<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, CUtlMemory<CTimestampedDa this,
			int i);  // 143
	CTimestampedDataContainer<AnimationOperationHistory_t, 3>::AllocateNewState(
			float flTimeStamp);  // 24
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 25
	Count(const CUtlVectorBase<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, CUtlMemory<CTimesta this); // 54
	CTimestampedDataContainer<AnimationOperationHistory_t, 3>::NextState(
			uint16 nState);  // 149
	{
	}
	Count(const CUtlVectorBase<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, CUtlMemory<CTimesta this); // 54
	CTimestampedDataContainer<AnimationOperationHistory_t, 3>::NextState(
			uint16 nState);  // 150
	CUtlMemory<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, CUtlMemory<CTimestampedDa this,
			int i);  // 150
	{
	}
	Count(const CUtlVectorBase<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, CUtlMemory<CTimesta this); // 54
	CTimestampedDataContainer<AnimationOperationHistory_t, 3>::NextState(
			uint16 nState);  // 151
	CUtlMemory<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, CUtlMemory<CTimestampedDa this,
			int i);  // 151
	{
	}
	CUtlMemory<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, CUtlMemory<CTimestampedDa this,
			int i);  // 153
	{
	}
	CUtlMemory<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, CUtlMemory<CTimestampedDa this,
			int i);  // 155
	CTimestampedDataContainer<AnimationOperationHistory_t, 3>::ApplyNewState(
			float flTimeStamp,
			AnimationOperationHistory_t* pNewState);  // 147
	CTimestampedDataContainer<AnimationOperationHistory_t, 3>::ApplyNewState(
			float flTimeStamp,
			AnimationOperationHistory_t* pNewState);  // 26
} /* size: 0, variables: 1, inline expansions: 27 (0 bytes) */

// <049A3EAF> modellib/animationophistory.cpp:29
// variable: 1
// function calls: 2
void CAnimationOpHistory::AddAnimationOp(float flTimeStamp, float flPrevCycle, const CAnimationDecodeOp& op)
{
	AnimationOperationHistory_t histOp; // 31
	CAnimationDecodeOp::CAnimationDecodeOp(); // 25
	AnimationOperationHistory_t::AnimationOperationHistory_t(); // 31
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <049A3D36> modellib/animationophistory.cpp:39
// variable: 1
// function calls: 4
void CAnimationOpHistory::ChangeModel(HModel hOldModel, HModel hNewModel)
{
	Count(const CUtlVectorBase<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, CUtlMemory<CTimesta this); // 166
	CUtlMemory<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, CUtlMemory<CTimestampedDa this); // 167
	{
		int i; // 168
	}
	CTimestampedDataContainer<AnimationOperationHistory_t, 3>::ClearHistory(); // 42
} /* size: 0, inline expansions: 4 (0 bytes) */

// <049A35E1> modellib/animationophistory.cpp:46
// variables: 15
// function calls: 22
void CAnimationOpHistory::Interpolate(float flInterpTime, const CModel* pModel, CAnimationDecodeOp* pOp, float* pPrevCycle)
{
	float flTempPrevCycle; // 48
	const InternalData_t* pCurrent; // 56
	const char   __FUNCTION__; // 48127
	int nStateCount; // 64
	const InternalData_t* pBase; // 65
	const InternalData_t* pPrev; // 66
	const InternalData_t* pMostRecent; // 67
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 57
	}
	{
		int nVisited; // 68
		{
			float flPercent; // 86
			float dt; // 87
			bool bHasPrevCycle; // 96
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 88
			}
			{
				bool bIsLooping; // 99
				{
					const InternalData_t* pPrevPrev; // 103
					CUtlMemory<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, int>::operator[](
							int i);  // 595
					operator[](const CUtlVectorBase<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, CUtlMemory<CTimesta this,
							int i);  // 106
					HSequence::operator==(
							const HSequence& other);  // 112
					Lerp<float>(float flPercent,
							const float& A,
							const float& B);  // 118
					Lerp_Hermite<float>(const float  &,
								float t,
								const float& p0,
								const float& p1,
								const float& p2);  // 218
					LoopingLerp_Hermite<float>(const float& current,
									float t,
									const float& f0,
									const float& f1,
									const float& f2);  // 121
					Lerp_Hermite<float>(const float  &,
								float t,
								const float& p0,
								const float& p1,
								const float& p2);  // 125
					clamp<float, float>(const float& val,
								const float& minVal,
								const float& maxVal);  // 132
				}
				HSequence::operator==(
						const HSequence& other);  // 101
				LoopingLerp<float>(float flPercent,
							const float& _flFrom,
							const float& _flTo);  // 141
				Lerp<float>(float flPercent,
						const float& A,
						const float& B);  // 145
			}
			CUtlMemory<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, CUtlMemory<CTimesta this,
					int i);  // 72
			clamp<float, float>(const float& val,
						const float& minVal,
						const float& maxVal);  // 91
		}
	}
	CUtlMemory<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, CUtlMemory<CTimesta this,
			int i);  // 56
	Count(const CUtlVectorBase<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, CUtlMemory<CTimesta this); // 64
	CUtlMemory<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, int>::Base(); // 113
	Base(const CUtlVectorBase<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, CUtlMemory<CTimesta this); // 65
	CTimestampedDataContainer<AnimationOperationHistory_t, 3>::PrevState(
			uint16 nState);  // 66
	CUtlMemory<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, CUtlMemory<CTimesta this,
			int i);  // 66
} /* size: 0, variables: 7, inline expansions: 8 (0 bytes) */

// <01CE844F> modellib/animationophistory.cpp:46
// variables: 15
// function calls: 22
void CAnimationOpHistory::Interpolate(float flInterpTime, const CModel* pModel, CAnimationDecodeOp* pOp, float* pPrevCycle)
{
	float flTempPrevCycle; // 48
	const InternalData_t* pCurrent; // 56
	const char   __FUNCTION__; // 55650
	int nStateCount; // 64
	const InternalData_t* pBase; // 65
	const InternalData_t* pPrev; // 66
	const InternalData_t* pMostRecent; // 67
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 57
	}
	{
		int nVisited; // 68
		{
			float flPercent; // 86
			float dt; // 87
			bool bHasPrevCycle; // 96
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 88
			}
			{
				bool bIsLooping; // 99
				{
					const InternalData_t* pPrevPrev; // 103
					CUtlMemory<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, int>::operator[](
							int i);  // 595
					operator[](const CUtlVectorBase<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, CUtlMemory<CTimesta this,
							int i);  // 106
					HSequence::operator==(
							const HSequence& other);  // 112
					Lerp<float>(float flPercent,
							const float& A,
							const float& B);  // 118
					Lerp_Hermite<float>(const float  &,
								float t,
								const float& p0,
								const float& p1,
								const float& p2);  // 218
					LoopingLerp_Hermite<float>(const float& current,
									float t,
									const float& f0,
									const float& f1,
									const float& f2);  // 121
					Lerp_Hermite<float>(const float  &,
								float t,
								const float& p0,
								const float& p1,
								const float& p2);  // 125
					clamp<float, float>(const float& val,
								const float& minVal,
								const float& maxVal);  // 132
				}
				HSequence::operator==(
						const HSequence& other);  // 101
				LoopingLerp<float>(float flPercent,
							const float& _flFrom,
							const float& _flTo);  // 141
				Lerp<float>(float flPercent,
						const float& A,
						const float& B);  // 145
			}
			CUtlMemory<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, CUtlMemory<CTimesta this,
					int i);  // 72
			clamp<float, float>(const float& val,
						const float& minVal,
						const float& maxVal);  // 91
		}
	}
	CUtlMemory<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, CUtlMemory<CTimesta this,
			int i);  // 56
	Count(const CUtlVectorBase<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, CUtlMemory<CTimesta this); // 64
	CUtlMemory<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, int>::Base(); // 113
	Base(const CUtlVectorBase<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, CUtlMemory<CTimesta this); // 65
	CTimestampedDataContainer<AnimationOperationHistory_t, 3>::PrevState(
			uint16 nState);  // 66
	CUtlMemory<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, CUtlMemory<CTimesta this,
			int i);  // 66
} /* size: 0, variables: 7, inline expansions: 8 (0 bytes) */

// <0091E424> modellib/animationophistory.cpp:46
// variables: 15
// function calls: 22
void CAnimationOpHistory::Interpolate(float flInterpTime, const CModel* pModel, CAnimationDecodeOp* pOp, float* pPrevCycle)
{
	float flTempPrevCycle; // 48
	const InternalData_t* pCurrent; // 56
	const char   __FUNCTION__; // 30375
	int nStateCount; // 64
	const InternalData_t* pBase; // 65
	const InternalData_t* pPrev; // 66
	const InternalData_t* pMostRecent; // 67
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 57
	}
	{
		int nVisited; // 68
		{
			float flPercent; // 86
			float dt; // 87
			bool bHasPrevCycle; // 96
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 88
			}
			{
				bool bIsLooping; // 99
				{
					const InternalData_t* pPrevPrev; // 103
					CUtlMemory<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, int>::operator[](
							int i);  // 595
					operator[](const CUtlVectorBase<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, CUtlMemory<CTimesta this,
							int i);  // 106
					HSequence::operator==(
							const HSequence& other);  // 112
					Lerp<float>(float flPercent,
							const float& A,
							const float& B);  // 118
					Lerp_Hermite<float>(const float  &,
								float t,
								const float& p0,
								const float& p1,
								const float& p2);  // 218
					LoopingLerp_Hermite<float>(const float& current,
									float t,
									const float& f0,
									const float& f1,
									const float& f2);  // 121
					Lerp_Hermite<float>(const float  &,
								float t,
								const float& p0,
								const float& p1,
								const float& p2);  // 125
					clamp<float, float>(const float& val,
								const float& minVal,
								const float& maxVal);  // 132
				}
				HSequence::operator==(
						const HSequence& other);  // 101
				LoopingLerp<float>(float flPercent,
							const float& _flFrom,
							const float& _flTo);  // 141
				Lerp<float>(float flPercent,
						const float& A,
						const float& B);  // 145
			}
			CUtlMemory<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, CUtlMemory<CTimesta this,
					int i);  // 72
			clamp<float, float>(const float& val,
						const float& minVal,
						const float& maxVal);  // 91
		}
	}
	CUtlMemory<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, CUtlMemory<CTimesta this,
			int i);  // 56
	Count(const CUtlVectorBase<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, CUtlMemory<CTimesta this); // 64
	CUtlMemory<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, int>::Base(); // 113
	Base(const CUtlVectorBase<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, CUtlMemory<CTimesta this); // 65
	CTimestampedDataContainer<AnimationOperationHistory_t, 3>::PrevState(
			uint16 nState);  // 66
	CUtlMemory<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, CUtlMemory<CTimesta this,
			int i);  // 66
} /* size: 0, variables: 7, inline expansions: 8 (0 bytes) */

// <049A35B3> modellib/animationophistory.cpp:172
void CAnimationDecodeContext::CAnimationDecodeContext()
{
} /* size: 23 */

// <049A350A> modellib/animationophistory.cpp:176
// function call: 1
void CAnimationDecodeContext::~CAnimationDecodeContext()
{
	CAnimationDecodeContext::Shutdown(); // 178
} /* size: 57, inline expansions: 1 (44 bytes) */

// <049A34EE> modellib/animationophistory.cpp:176
void CAnimationDecodeContext::~CAnimationDecodeContext()
{
} /* size: 0 */

// <049A5A4B> modellib/animationophistory.cpp:181
void CAnimationDecodeContext::Init(AnimationProcessingType_t processingType, CUtlScratchMemoryPool* pMemStack)
{
	{
	}
} /* size: 0 */

// <049A346F> modellib/animationophistory.cpp:181
// variables: 2
void CAnimationDecodeContext::Init(AnimationProcessingType_t processingType, CUtlScratchMemoryPool* pMemStack)
{
	const char   __FUNCTION__; // 48064
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 183
	}
} /* size: 0, variables: 1 */

// <01CE82DD> modellib/animationophistory.cpp:181
// variables: 2
void CAnimationDecodeContext::Init(AnimationProcessingType_t processingType, CUtlScratchMemoryPool* pMemStack)
{
	const char   __FUNCTION__; // 55587
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 183
	}
} /* size: 0, variables: 1 */

// <0091E2B2> modellib/animationophistory.cpp:181
// variables: 2
void CAnimationDecodeContext::Init(AnimationProcessingType_t processingType, CUtlScratchMemoryPool* pMemStack)
{
	const char   __FUNCTION__; // 30312
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 183
	}
} /* size: 0, variables: 1 */

// <049A5AE2> modellib/animationophistory.cpp:197
void CAnimationDecodeContext::Shutdown()
{
} /* size: 0 */

// <049A5B46> modellib/animationophistory.cpp:210
void CAnimationDecodeContext::SetAnimationDecodeRealTimeBase(float flRealTimeBase)
{
} /* size: 0 */

// <049A33F9> modellib/animationophistory.cpp:215
void CAnimationDecodeContext::GetAnimationDecodeCount()
{
} /* size: 0 */

// <049A33C7> modellib/animationophistory.cpp:220
void CAnimationDecodeContext::GetFirstActiveAnimationDecode()
{
} /* size: 0 */

// <049A3387> modellib/animationophistory.cpp:225
void CAnimationDecodeContext::GetNextActiveAnimationDecode(AnimationDecodeDesc_t* pDesc)
{
} /* size: 0 */

// <049A3347> modellib/animationophistory.cpp:230
void CAnimationDecodeContext::GetAnimationDecode(HAnimationDecodeDesc hDesc)
{
} /* size: 0 */

// <049A2E0E> modellib/animationophistory.cpp:235
// variables: 7
// function calls: 10
void CAnimationDecodeContext::AddAnimationDecodeDesc(HModel hModel, float flRealTimeOffset, const uint32* pBonesToSetUp, int nOpCount, const CAnimationDecodeOp* pOperations, int nPoseParamCount, const float* pPoseParameters, int nOwningEntityIndex, LODGroupMask_t nLodsToSkipMask, uint32 nAnimationDecodeDescFlags)
{
	const CModel* pModel; // 240
	AnimationDecodeDesc_t* pDesc; // 244
	{
		int __executeCount; // 247
	}
	{
		int __executeCount; // 268
	}
	{
		int nActualPoseParamCount; // 280
		int nCopyCount; // 287
		{
			int __executeCount; // 284
		}
		CUtlScratchMemoryPool::Alloc(
			int nSizeInBytes);  // 281
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 288
		memset(void* __dest,
			int __ch,
			size_t __len);  // 291
	}
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCModel>(const CWeakHandle<InfoForResourceTypeCModel>& hResource); // 240
	CUtlScratchMemoryPool::Alloc(
		int nSizeInBytes);  // 244
	CWeakHandle<InfoForResourceTypeCModel>::Init(
		const CWeakHandle<InfoForResourceTypeCModel>& src);  // 331
	CWeakHandle<InfoForResourceTypeCModel>::operator=(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 253
	CUtlScratchMemoryPool::Alloc(
		int nSizeInBytes);  // 265
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 271
} /* size: 578, variables: 2, inline expansions: 7 (121 bytes) */

// <049A2BC6> modellib/animationophistory.cpp:303
// variables: 3
// function calls: 5
void CAnimationDecodeContext::AddAnimationDecodeDesc(IAnimationGraphInstance* pAnimGraph, HModel hModel, float flRealTimeOffset, const uint32* pBonesToSetUp, int nOwningEntityIndex, LODGroupMask_t nLodsToSkipMask, uint32 nAnimDecodeDescFlags)
{
	const CModel* pModel; // 305
	AnimationDecodeDesc_t* pDesc; // 309
	{
		int __executeCount; // 312
	}
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCModel>(const CWeakHandle<InfoForResourceTypeCModel>& hResource); // 305
	CUtlScratchMemoryPool::Alloc(
		int nSizeInBytes);  // 309
	CWeakHandle<InfoForResourceTypeCModel>::Init(
		const CWeakHandle<InfoForResourceTypeCModel>& src);  // 331
	CWeakHandle<InfoForResourceTypeCModel>::operator=(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 318
} /* size: 0, variables: 2, inline expansions: 5 (0 bytes) */

// <049A5B76> modellib/animationophistory.cpp:332
// variable: 1
// function calls: 2
void CAnimationDecodeContext::AddAnimationDecode(HAnimationDecodeDesc hDesc, CAnimationState* pOutputAnimationState, int nLod)
{
	AnimationDecodeDesc_t* pDesc; // 337
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 342
	CAnimationDecodeContext::AddAnimationDecode(
				HAnimationDecodeDesc hDesc,
				CAnimationState* pOutputAnimationState,
				int nLod);  // 332
} /* size: 158, variables: 1, inline expansions: 2 (102 bytes) */

// <049A2B2C> modellib/animationophistory.cpp:332
// variable: 1
void CAnimationDecodeContext::AddAnimationDecode(HAnimationDecodeDesc hDesc, CAnimationState* pOutputAnimationState, int nLod)
{
	AnimationDecodeDesc_t* pDesc; // 337
} /* size: 0, variables: 1 */

// <049A2A40> modellib/animationophistory.cpp:374
// function calls: 3
void CAnimationState::CAnimationState()
{
	CStrongHandle<InfoForResourceTypeCModel>::CStrongHandle(); // 375
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 377
} /* size: 41, inline expansions: 3 (37 bytes) */

// <049A2A23> modellib/animationophistory.cpp:374
void CAnimationState::CAnimationState()
{
} /* size: 0 */

// <049A2877> modellib/animationophistory.cpp:380
// function calls: 7
void CAnimationState::~CAnimationState()
{
	CStrongHandle<InfoForResourceTypeCModel>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CStrongHandle<InfoForResourceTypeCModel>::operator=(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 527
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 527
	CAnimationState::Shutdown(); // 382
	CStrongHandle<InfoForResourceTypeCModel>::~CStrongHandle(); // 383
} /* size: 100, inline expansions: 7 (121 bytes) */

// <049A285A> modellib/animationophistory.cpp:380
void CAnimationState::~CAnimationState()
{
} /* size: 0 */

// <049A2740> modellib/animationophistory.cpp:386
// function calls: 3
void CAnimationState::Realloc(HModel hModel)
{
	CStrongHandle<InfoForResourceTypeCModel>::operator!=(
			const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 388
	CWeakHandle<InfoForResourceTypeCModel>::Init(
		const CWeakHandle<InfoForResourceTypeCModel>& src);  // 273
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 393
} /* size: 0, inline expansions: 3 (0 bytes) */

// <049A2321> modellib/animationophistory.cpp:400
// variables: 4
// function calls: 11
void CAnimationState::Init(HModel hModel, int nBufSize, void* pDataBuffer, uint32* pReadableBonesBuffer)
{
	const CModel* pModel; // 405
	const char   __FUNCTION__; // 48064
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 413
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 417
	}
	CWeakHandle<InfoForResourceTypeCModel>::GetBinding(); // 673
	CStrongHandle<InfoForResourceTypeCModel>::operator=(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 404
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCModel>(const CWeakHandle<InfoForResourceTypeCModel>& hResource); // 405
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 408
	CStrongHandle<InfoForResourceTypeCModel>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CStrongHandle<InfoForResourceTypeCModel>::operator=(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 408
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 409
} /* size: 0, variables: 2, inline expansions: 11 (0 bytes) */

// <01CE718F> modellib/animationophistory.cpp:400
// variables: 4
// function calls: 11
void CAnimationState::Init(HModel hModel, int nBufSize, void* pDataBuffer, uint32* pReadableBonesBuffer)
{
	const CModel* pModel; // 405
	const char   __FUNCTION__; // 55587
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 413
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 417
	}
	CWeakHandle<InfoForResourceTypeCModel>::GetBinding(); // 673
	CStrongHandle<InfoForResourceTypeCModel>::operator=(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 404
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCModel>(const CWeakHandle<InfoForResourceTypeCModel>& hResource); // 405
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 408
	CStrongHandle<InfoForResourceTypeCModel>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CStrongHandle<InfoForResourceTypeCModel>::operator=(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 408
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 409
} /* size: 0, variables: 2, inline expansions: 11 (0 bytes) */

// <0091D164> modellib/animationophistory.cpp:400
// variables: 4
// function calls: 11
void CAnimationState::Init(HModel hModel, int nBufSize, void* pDataBuffer, uint32* pReadableBonesBuffer)
{
	const CModel* pModel; // 405
	const char   __FUNCTION__; // 30312
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 413
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 417
	}
	CWeakHandle<InfoForResourceTypeCModel>::GetBinding(); // 673
	CStrongHandle<InfoForResourceTypeCModel>::operator=(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 404
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCModel>(const CWeakHandle<InfoForResourceTypeCModel>& hResource); // 405
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 408
	CStrongHandle<InfoForResourceTypeCModel>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CStrongHandle<InfoForResourceTypeCModel>::operator=(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 408
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 409
} /* size: 0, variables: 2, inline expansions: 11 (0 bytes) */

// <049A1D6F> modellib/animationophistory.cpp:423
// variables: 3
// function calls: 18
void CAnimationState::Init(HModel hModel)
{
	const CModel* pModel; // 428
	int nDataSize; // 436
	uint nUInts; // 446
	CWeakHandle<InfoForResourceTypeCModel>::GetBinding(); // 673
	CStrongHandle<InfoForResourceTypeCModel>::operator=(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 427
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCModel>(const CWeakHandle<InfoForResourceTypeCModel>& hResource); // 428
	AlignValue<int>(int val,
			uintp alignment);  // 443
	CalcNumIntsForBits(int numBits); // 446
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 342
	BitVec_ClearAll(uint32* pDst,
			int nDWords);  // 448
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 431
	CStrongHandle<InfoForResourceTypeCModel>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CStrongHandle<InfoForResourceTypeCModel>::operator=(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 431
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 432
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 439
} /* size: 288, variables: 3, inline expansions: 18 (224 bytes) */

// <049A1C39> modellib/animationophistory.cpp:455
// variables: 5
// function call: 1
void CAnimationState::ComputeHasNonTransformAnimationData()
{
	const CModel* pModel; // 457
	int nTotalSize; // 464
	int nTransformSize; // 465
	const char   __FUNCTION__; // 48337
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 467
	}
	CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 457
} /* size: 0, variables: 4, inline expansions: 1 (13 bytes) */

// <01CE6AA7> modellib/animationophistory.cpp:455
// variables: 5
// function call: 1
void CAnimationState::ComputeHasNonTransformAnimationData()
{
	const CModel* pModel; // 457
	int nTotalSize; // 464
	int nTransformSize; // 465
	const char   __FUNCTION__; // 55860
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 467
	}
	CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 457
} /* size: 0, variables: 4, inline expansions: 1 (13 bytes) */

// <0091CA7C> modellib/animationophistory.cpp:455
// variables: 5
// function call: 1
void CAnimationState::ComputeHasNonTransformAnimationData()
{
	const CModel* pModel; // 457
	int nTotalSize; // 464
	int nTransformSize; // 465
	const char   __FUNCTION__; // 30585
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 467
	}
	CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 457
} /* size: 0, variables: 4, inline expansions: 1 (0 bytes) */

// <049A1576> modellib/animationophistory.cpp:472
// variables: 5
// function calls: 27
void CAnimationState::InitializeState()
{
	const CModel* pModel; // 474
	int nTransformCount; // 476
	int nFlexControllerCount; // 477
	{
		CTransform* pParentTransforms; // 487
		CStrongHandle<InfoForResourceTypeCModel>::operator==(
				const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 598
		CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 598
		CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 601
		CModel::GetAnimationStateData<(
								void* pBase);  // 602
		CAnimationState::GetAnimationData<()0>(const CAnimationState* this); // 487
		CalcNumIntsForBits(int numBits); // 490
		GetEndMask(int numBits); // 490
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 349
		BitVec_SetAll(uint32* pDst,
				int nDWords,
				uint32 nEndMask);  // 490
	}
	{
		float* pFlexController; // 495
		CStrongHandle<InfoForResourceTypeCModel>::operator==(
				const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 598
		CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 598
		CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 601
		CModel::GetAnimationStateData<(
								void* pBase);  // 602
		CAnimationState::GetAnimationData<()1>(const CAnimationState* this); // 495
		memset(void* __dest,
			int __ch,
			size_t __len);  // 496
	}
	CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 474
	CStrongHandle<InfoForResourceTypeCModel>::operator==(
			const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 608
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 608
	CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 611
	CAnimationState::GetAnimationDataCount<()2>(const CAnimationState* this); // 502
} /* size: 364, variables: 3, inline expansions: 7 (54 bytes) */

// <049A1543> modellib/animationophistory.cpp:506
void CAnimationState::HasNonTransformAnimationData()
{
} /* size: 0 */

// <049A5F25> modellib/animationophistory.cpp:511
// function calls: 5
void CAnimationState::Shutdown()
{
	CStrongHandle<InfoForResourceTypeCModel>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CStrongHandle<InfoForResourceTypeCModel>::operator=(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 527
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 527
} /* size: 93, inline expansions: 5 (42 bytes) */

// <049A1526> modellib/animationophistory.cpp:511
void CAnimationState::Shutdown()
{
} /* size: 0 */

// <049A13D5> modellib/animationophistory.cpp:531
// variable: 1
// function calls: 5
void CAnimationState::GetAnimationStateSize()
{
	const CModel* pModel; // 536
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 533
	CStrongHandle<InfoForResourceTypeCModel>::operator==(
			const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 533
	CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 536
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <049A139E> modellib/animationophistory.cpp:541
void* CAnimationState::GetAnimationDataBase()
{
} /* size: 0 */

// <049A5C5D> modellib/animationophistory.cpp:546
// function call: 1
void CAnimationState::IsBoneReadable(int nBone)
{
	BitVec_IsBitSet(const uint32* pBase,
			int nBitNum);  // 548
} /* size: 32, inline expansions: 1 (27 bytes) */

// <049A1374> modellib/animationophistory.cpp:546
void CAnimationState::IsBoneReadable(int nBone)
{
} /* size: 0 */

// <049A5CDE> modellib/animationophistory.cpp:551
void CAnimationState::GetReadableBones()
{
} /* size: 9 */

// <049A133A> modellib/animationophistory.cpp:556
void CAnimationState::GetReadableBonesForWrite()
{
} /* size: 0 */

// <049A128D> modellib/animationophistory.cpp:561
// function calls: 2
void CAnimationState::MarkBoneReadable(int nBone, bool bReadable)
{
	Bitvec_Set(uint32* pBits,
			int nBitNum);  // 575
	CAnimationState::MarkBoneReadable(
			int nBone);  // 565
} /* size: 0, inline expansions: 2 (0 bytes) */

// <049A5D07> modellib/animationophistory.cpp:573
// function call: 1
void CAnimationState::MarkBoneReadable(int nBone)
{
	Bitvec_Set(uint32* pBits,
			int nBitNum);  // 575
} /* size: 0, inline expansions: 1 (0 bytes) */

// <049A1263> modellib/animationophistory.cpp:573
void CAnimationState::MarkBoneReadable(int nBone)
{
} /* size: 0 */

// <049A5D88> modellib/animationophistory.cpp:578
// function call: 1
void CAnimationState::MarkBoneUnreadable(int nBone)
{
	Bitvec_Unset(uint32* pBits,
			int nBitNum);  // 580
} /* size: 0, inline expansions: 1 (0 bytes) */

// <049A1239> modellib/animationophistory.cpp:578
void CAnimationState::MarkBoneUnreadable(int nBone)
{
} /* size: 0 */

// <049A1154> modellib/animationophistory.cpp:583
// variable: 1
// function calls: 2
void CAnimationState::MarkBonesReadable(const uint32* pReadableBones)
{
	int nBones; // 585
	CalcNumIntsForBits(int numBits); // 586
	BitVec_Or<false>(uint32* pDest,
			const uint32* pOperand1,
			const uint32* pOperand2,
			int numDWords);  // 586
} /* size: 82, variables: 1, inline expansions: 2 (60 bytes) */

// <049A5E09> modellib/animationophistory.cpp:589
// variable: 1
// function calls: 4
void CAnimationState::MarkAllBonesUnreadable()
{
	int nBones; // 591
	CalcNumIntsForBits(int numBits); // 592
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 342
	BitVec_ClearAll(uint32* pDst,
			int nDWords);  // 592
} /* size: 37, variables: 1, inline expansions: 4 (55 bytes) */

// <049A112A> modellib/animationophistory.cpp:589
// variable: 1
void CAnimationState::MarkAllBonesUnreadable()
{
	int nBones; // 591
} /* size: 0, variables: 1 */

// <049A0DE7> modellib/animationophistory.cpp:595
// variables: 5
// function calls: 11
void CAnimationState::CopyTransformAnimationData(const CAnimationState* pSrc)
{
	const char   __FUNCTION__; // 48295
	const CModel* pModel; // 604
	int nTransformSize; // 606
	int nDWords; // 609
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 597
	}
	CStrongHandle<InfoForResourceTypeCModel>::operator==(
			const CStrongHandle<InfoForResourceTypeCModel>& hResource);  // 597
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 598
	CStrongHandle<InfoForResourceTypeCModel>::operator==(
			const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 598
	CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 604
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 607
	CalcNumIntsForBits(int numBits); // 609
	CAnimationState::GetReadableBones(); // 610
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 610
	CStrongHandle<InfoForResourceTypeCModel>::operator!=(
			const CStrongHandle<InfoForResourceTypeCModel>& hResource);  // 598
} /* size: 0, variables: 4, inline expansions: 11 (0 bytes) */

// <01CE5C55> modellib/animationophistory.cpp:595
// variables: 5
// function calls: 11
void CAnimationState::CopyTransformAnimationData(const CAnimationState* pSrc)
{
	const char   __FUNCTION__; // 55818
	const CModel* pModel; // 604
	int nTransformSize; // 606
	int nDWords; // 609
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 597
	}
	CStrongHandle<InfoForResourceTypeCModel>::operator==(
			const CStrongHandle<InfoForResourceTypeCModel>& hResource);  // 597
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 598
	CStrongHandle<InfoForResourceTypeCModel>::operator==(
			const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 598
	CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 604
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 607
	CalcNumIntsForBits(int numBits); // 609
	CAnimationState::GetReadableBones(); // 610
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 610
	CStrongHandle<InfoForResourceTypeCModel>::operator!=(
			const CStrongHandle<InfoForResourceTypeCModel>& hResource);  // 598
} /* size: 0, variables: 4, inline expansions: 11 (0 bytes) */

// <0091BC2A> modellib/animationophistory.cpp:595
// variables: 5
// function calls: 11
void CAnimationState::CopyTransformAnimationData(const CAnimationState* pSrc)
{
	const char   __FUNCTION__; // 30543
	const CModel* pModel; // 604
	int nTransformSize; // 606
	int nDWords; // 609
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 597
	}
	CStrongHandle<InfoForResourceTypeCModel>::operator==(
			const CStrongHandle<InfoForResourceTypeCModel>& hResource);  // 597
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 598
	CStrongHandle<InfoForResourceTypeCModel>::operator==(
			const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 598
	CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 604
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 607
	CalcNumIntsForBits(int numBits); // 609
	CAnimationState::GetReadableBones(); // 610
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 610
	CStrongHandle<InfoForResourceTypeCModel>::operator!=(
			const CStrongHandle<InfoForResourceTypeCModel>& hResource);  // 598
} /* size: 0, variables: 4, inline expansions: 11 (0 bytes) */

// <049A0B5E> modellib/animationophistory.cpp:613
// variables: 5
// function calls: 8
void CAnimationState::CopyNonTransformAnimationData(const CAnimationState* pSrc)
{
	const char   __FUNCTION__; // 48316
	const CModel* pModel; // 618
	int nTotalSize; // 620
	int nTransformSize; // 621
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 615
	}
	CStrongHandle<InfoForResourceTypeCModel>::operator==(
			const CStrongHandle<InfoForResourceTypeCModel>& hResource);  // 615
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 616
	CStrongHandle<InfoForResourceTypeCModel>::operator==(
			const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 616
	CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 618
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 624
	CStrongHandle<InfoForResourceTypeCModel>::operator!=(
			const CStrongHandle<InfoForResourceTypeCModel>& hResource);  // 616
} /* size: 0, variables: 4, inline expansions: 8 (0 bytes) */

// <01CE59CC> modellib/animationophistory.cpp:613
// variables: 5
// function calls: 8
void CAnimationState::CopyNonTransformAnimationData(const CAnimationState* pSrc)
{
	const char   __FUNCTION__; // 55839
	const CModel* pModel; // 618
	int nTotalSize; // 620
	int nTransformSize; // 621
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 615
	}
	CStrongHandle<InfoForResourceTypeCModel>::operator==(
			const CStrongHandle<InfoForResourceTypeCModel>& hResource);  // 615
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 616
	CStrongHandle<InfoForResourceTypeCModel>::operator==(
			const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 616
	CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 618
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 624
	CStrongHandle<InfoForResourceTypeCModel>::operator!=(
			const CStrongHandle<InfoForResourceTypeCModel>& hResource);  // 616
} /* size: 0, variables: 4, inline expansions: 8 (0 bytes) */

// <0091B9A1> modellib/animationophistory.cpp:613
// variables: 5
// function calls: 8
void CAnimationState::CopyNonTransformAnimationData(const CAnimationState* pSrc)
{
	const char   __FUNCTION__; // 30564
	const CModel* pModel; // 618
	int nTotalSize; // 620
	int nTransformSize; // 621
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 615
	}
	CStrongHandle<InfoForResourceTypeCModel>::operator==(
			const CStrongHandle<InfoForResourceTypeCModel>& hResource);  // 615
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 616
	CStrongHandle<InfoForResourceTypeCModel>::operator==(
			const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 616
	CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 618
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 624
	CStrongHandle<InfoForResourceTypeCModel>::operator!=(
			const CStrongHandle<InfoForResourceTypeCModel>& hResource);  // 616
} /* size: 0, variables: 4, inline expansions: 8 (0 bytes) */

// <049A05A6> modellib/animationophistory.cpp:627
// variables: 9
// function calls: 18
void CAnimationState::GetBonesInWorldSpace(const matrix3x4_t& rootToWorld, int nTransformCount, matrix3x4_t* pWorldTransforms, const uint32* pBoneRequestBitMask)
{
	matrix3x4_t mJointToParent; // 632
	CTransform* pParentSpaceTransforms; // 633
	const char   __FUNCTION__; // 48232
	{
		int i; // 634
		{
			int nParentBone; // 639
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 641
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 642
			}
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 642
			_mm_cvtss_f32(__m128 __A); // 1553
			GetWSIMD<>(fltx4 a); // 98
			CTransform::GetScale(); // 362
			{
				int i; // 325
				{
					int j; // 327
				}
			}
			matrix3x4_t::ScaleUpper3x3Matrix(
						float flScale);  // 365
			CTransform::ToMatrix(); // 208
			TransformMatrix(const CTransform& in,
					matrix3x4_t& out);  // 644
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 636
			CStrongHandle<InfoForResourceTypeCModel>::operator->(); // 639
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 641
		}
	}
	CStrongHandle<InfoForResourceTypeCModel>::operator==(
			const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 598
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 598
	CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 601
	CModel::GetAnimationStateData<(
							void* pBase);  // 602
	CAnimationState::GetAnimationData<()0>(const CAnimationState* this); // 633
	matrix3x4_t::matrix3x4_t(); // 632
} /* size: 0, variables: 3, inline expansions: 8 (49 bytes) */

// <01CE5414> modellib/animationophistory.cpp:627
// variables: 9
// function calls: 18
void CAnimationState::GetBonesInWorldSpace(const matrix3x4_t& rootToWorld, int nTransformCount, matrix3x4_t* pWorldTransforms, const uint32* pBoneRequestBitMask)
{
	matrix3x4_t mJointToParent; // 632
	CTransform* pParentSpaceTransforms; // 633
	const char   __FUNCTION__; // 55755
	{
		int i; // 634
		{
			int nParentBone; // 639
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 641
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 642
			}
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 642
			_mm_cvtss_f32(__m128 __A); // 1553
			GetWSIMD<>(fltx4 a); // 98
			CTransform::GetScale(); // 362
			{
				int i; // 325
				{
					int j; // 327
				}
			}
			matrix3x4_t::ScaleUpper3x3Matrix(
						float flScale);  // 365
			CTransform::ToMatrix(); // 208
			TransformMatrix(const CTransform& in,
					matrix3x4_t& out);  // 644
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 636
			CStrongHandle<InfoForResourceTypeCModel>::operator->(); // 639
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 641
		}
	}
	CStrongHandle<InfoForResourceTypeCModel>::operator==(
			const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 598
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 598
	CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 601
	CModel::GetAnimationStateData<(
							void* pBase);  // 602
	CAnimationState::GetAnimationData<()0>(const CAnimationState* this); // 633
	matrix3x4_t::matrix3x4_t(); // 632
} /* size: 0, variables: 3, inline expansions: 8 (0 bytes) */

// <0091B3E9> modellib/animationophistory.cpp:627
// variables: 9
// function calls: 18
void CAnimationState::GetBonesInWorldSpace(const matrix3x4_t& rootToWorld, int nTransformCount, matrix3x4_t* pWorldTransforms, const uint32* pBoneRequestBitMask)
{
	matrix3x4_t mJointToParent; // 632
	CTransform* pParentSpaceTransforms; // 633
	const char   __FUNCTION__; // 30480
	{
		int i; // 634
		{
			int nParentBone; // 639
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 641
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 642
			}
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 642
			_mm_cvtss_f32(__m128 __A); // 1553
			GetWSIMD<>(fltx4 a); // 98
			CTransform::GetScale(); // 362
			{
				int i; // 325
				{
					int j; // 327
				}
			}
			matrix3x4_t::ScaleUpper3x3Matrix(
						float flScale);  // 365
			CTransform::ToMatrix(); // 208
			TransformMatrix(const CTransform& in,
					matrix3x4_t& out);  // 644
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 636
			CStrongHandle<InfoForResourceTypeCModel>::operator->(); // 639
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 641
		}
	}
	CStrongHandle<InfoForResourceTypeCModel>::operator==(
			const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 598
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 598
	CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 601
	CModel::GetAnimationStateData<(
							void* pBase);  // 602
	CAnimationState::GetAnimationData<()0>(const CAnimationState* this); // 633
	matrix3x4_t::matrix3x4_t(); // 632
} /* size: 0, variables: 3, inline expansions: 8 (49 bytes) */

// <0499FE35> modellib/animationophistory.cpp:652
// variables: 7
// function calls: 26
void CAnimationState::GetBonesInWorldSpace(const CTransform& rootToWorld, int nTransformCount, CTransform* pWorldTransforms, const uint32* pBoneRequestBitMask)
{
	CTransform mJointToParent; // 657
	CTransform* pParentSpaceTransforms; // 658
	const char   __FUNCTION__; // 48232
	{
		int i; // 659
		{
			int nParentBone; // 664
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 666
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 667
			}
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 667
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					const CTransform  &);  // 669
			QuaternionAligned::operator fltx4(); // 471
			VectorAligned::operator fltx4(); // 471
			CTransform::operator*(
					const CTransform& rhs);  // 670
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					CTransform &);  // 670
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 661
			CStrongHandle<InfoForResourceTypeCModel>::operator->(); // 664
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 666
			QuaternionAligned::operator fltx4(); // 471
			VectorAligned::operator fltx4(); // 471
			CTransform::operator*(
					const CTransform& rhs);  // 670
		}
	}
	CStrongHandle<InfoForResourceTypeCModel>::operator==(
			const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 598
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 598
	CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 601
	CModel::GetAnimationStateData<(
							void* pBase);  // 602
	CAnimationState::GetAnimationData<()0>(const CAnimationState* this); // 658
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 657
} /* size: 0, variables: 3, inline expansions: 10 (45 bytes) */

// <01CE4CA3> modellib/animationophistory.cpp:652
// variables: 7
// function calls: 26
void CAnimationState::GetBonesInWorldSpace(const CTransform& rootToWorld, int nTransformCount, CTransform* pWorldTransforms, const uint32* pBoneRequestBitMask)
{
	CTransform mJointToParent; // 657
	CTransform* pParentSpaceTransforms; // 658
	const char   __FUNCTION__; // 55755
	{
		int i; // 659
		{
			int nParentBone; // 664
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 666
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 667
			}
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 667
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					const CTransform  &);  // 669
			QuaternionAligned::operator fltx4(); // 471
			VectorAligned::operator fltx4(); // 471
			CTransform::operator*(
					const CTransform& rhs);  // 670
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					CTransform &);  // 670
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 661
			CStrongHandle<InfoForResourceTypeCModel>::operator->(); // 664
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 666
			QuaternionAligned::operator fltx4(); // 471
			VectorAligned::operator fltx4(); // 471
			CTransform::operator*(
					const CTransform& rhs);  // 670
		}
	}
	CStrongHandle<InfoForResourceTypeCModel>::operator==(
			const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 598
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 598
	CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 601
	CModel::GetAnimationStateData<(
							void* pBase);  // 602
	CAnimationState::GetAnimationData<()0>(const CAnimationState* this); // 658
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 657
} /* size: 0, variables: 3, inline expansions: 10 (45 bytes) */

// <0091AC78> modellib/animationophistory.cpp:652
// variables: 7
// function calls: 26
void CAnimationState::GetBonesInWorldSpace(const CTransform& rootToWorld, int nTransformCount, CTransform* pWorldTransforms, const uint32* pBoneRequestBitMask)
{
	CTransform mJointToParent; // 657
	CTransform* pParentSpaceTransforms; // 658
	const char   __FUNCTION__; // 30480
	{
		int i; // 659
		{
			int nParentBone; // 664
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 666
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 667
			}
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 667
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					const CTransform  &);  // 669
			QuaternionAligned::operator fltx4(); // 471
			VectorAligned::operator fltx4(); // 471
			CTransform::operator*(
					const CTransform& rhs);  // 670
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					CTransform &);  // 670
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 661
			CStrongHandle<InfoForResourceTypeCModel>::operator->(); // 664
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 666
			QuaternionAligned::operator fltx4(); // 471
			VectorAligned::operator fltx4(); // 471
			CTransform::operator*(
					const CTransform& rhs);  // 670
		}
	}
	CStrongHandle<InfoForResourceTypeCModel>::operator==(
			const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 598
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 598
	CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 601
	CModel::GetAnimationStateData<(
							void* pBase);  // 602
	CAnimationState::GetAnimationData<()0>(const CAnimationState* this); // 658
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 657
} /* size: 0, variables: 3, inline expansions: 10 (0 bytes) */

// <0499E410> modellib/animationophistory.cpp:677
// variables: 9
// function calls: 109
void CAnimationState::SetBonesFromWorldSpace(const CTransform& rootToWorld, int nTransformCount, const CTransform* pWorldTransforms)
{
	CTransform* pParentTransforms; // 688
	CTransform mJointToParent; // 690
	CVarBitVec computedInverseTransform; // 691
	CUtlVectorFixedGrowable<CTransform, 128> pWorldToParentTransforms; // 692
	const char   __FUNCTION__; // 48253
	{
		int i; // 697
		{
			int nParentBone; // 699
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 700
			}
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 1471
			CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1470
			{
			}
			CVarBitVecBase<short unsigned int, 32>::Base(); // 1471
			CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(
				int bitNum);  // 701
			CUtlMemory<CTransform, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::operator[](
					int i);  // 706
			QuaternionAligned::operator fltx4(); // 471
			VectorAligned::operator fltx4(); // 471
			QuaternionAligned::operator fltx4(); // 471
			VectorAligned::operator fltx4(); // 471
			CTransform::operator*(
					const CTransform& rhs);  // 706
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					CTransform &);  // 706
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					const CTransform  &);  // 708
			Bitvec_Set(uint32* pBits,
					int nBitNum);  // 575
			CAnimationState::MarkBoneReadable(
					int nBone);  // 715
			CStrongHandle<InfoForResourceTypeCModel>::operator->(); // 699
			CUtlMemory<CTransform, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::operator[](
					int i);  // 703
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					CTransform &);  // 703
			CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1479
			{
			}
			CVarBitVecBase<short unsigned int, 32>::Base(); // 1480
			Bitvec_Set(uint32* pBits,
					int nBitNum);  // 1480
			CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Set(
				int bitNum);  // 704
		}
	}
	CalcNumIntsForBits(int numBits); // 592
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 342
	BitVec_ClearAll(uint32* pDst,
			int nDWords);  // 592
	CAnimationState::MarkAllBonesUnreadable(); // 681
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 598
	CStrongHandle<InfoForResourceTypeCModel>::operator==(
			const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 598
	CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 601
	CModel::GetAnimationStateData<(
							void* pBase);  // 602
	CAnimationState::GetAnimationData<()0>(const CAnimationState* this); // 688
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 690
	CalcNumIntsForBits(int numBits); // 1292
	CVarBitVecBase<short unsigned int, 32>::AllocInts(
			int numInts);  // 2546
	CVarBitVecBase<short unsigned int, 32>::AllocInts(
			int numInts);  // 1294
	CVarBitVecBase<short unsigned int, 32>::CVarBitVecBase(
			int numBits);  // 1419
	CVarBitVecBase<short unsigned int, 32>::GetNumDWords(); // 1970
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1970
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::ClearAll(); // 1427
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::CBitVecT(
		int numBits);  // 1215
	CVarBitVecT<short unsigned int, 32>::CVarBitVecT(
			int numBits);  // 1224
	CVarBitVec::CVarBitVec(
			int nBitCount);  // 691
	CUtlMemory<CTransform, int>::CUtlMemory(
			CTransform* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CTransform, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CTransform, int>::CUtlMemoryFixedGrowable_Base(
					CTransform* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<128, CTransform, 16>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<128, CTransform>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<128, CTransform, 16>::Base(); // 231
	CUtlMemoryFixedGrowable<CTransform, 128, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CTransform, 128>::CUtlVectorFixedGrowable(
				int growSize);  // 692
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CTransform, int>::Grow(
		int num);  // 806
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
	}
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::SetCount(
		int count);  // 693
	CUtlMemory<CTransform, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::operator[](
			int i);  // 694
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			CTransform &);  // 694
	CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1479
	{
	}
	CVarBitVecBase<short unsigned int, 32>::Base(); // 1480
	Bitvec_Set(uint32* pBits,
			int nBitNum);  // 1480
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Set(
		int bitNum);  // 695
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<128, CTransform, 16>::Base(); // 237
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 577
	CUtlMemory<CTransform, int>::ConvertToExternalMemory(
				CTransform* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CTransform, int>::Purge_FixedGrowable(
				CTransform* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CTransform, int>::Purge_FixedGrowable(
				CTransform* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<CTransform, 128, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<CTransform, int>::Base(); // 112
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::Base(); // 368
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::Purge(); // 560
	ValidateAlignment<CTransform>(void); // 508
	CUtlMemory<CTransform, int>::Purge(); // 903
	CUtlMemory<CTransform, int>::Purge(); // 510
	CUtlMemory<CTransform, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CTransform, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CTransform, 128, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CTransform, 128>::~CUtlVectorFixedGrowable(); // 719
	CVarBitVecBase<short unsigned int, 32>::FreeInts(); // 1342
	CVarBitVecBase<short unsigned int, 32>::~CVarBitVecBase(); // 914
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::~CBitVecT(); // 1207
	CVarBitVecT<short unsigned int, 32>::~CVarBitVecT(); // 1220
	CVarBitVec::~CVarBitVec(); // 719
} /* size: 0, variables: 5, inline expansions: 80 (3145 bytes) */

// <01CE327E> modellib/animationophistory.cpp:677
// variables: 9
// function calls: 109
void CAnimationState::SetBonesFromWorldSpace(const CTransform& rootToWorld, int nTransformCount, const CTransform* pWorldTransforms)
{
	CTransform* pParentTransforms; // 688
	CTransform mJointToParent; // 690
	CVarBitVec computedInverseTransform; // 691
	CUtlVectorFixedGrowable<CTransform, 128> pWorldToParentTransforms; // 692
	const char   __FUNCTION__; // 55776
	{
		int i; // 697
		{
			int nParentBone; // 699
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 700
			}
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 1471
			CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1470
			{
			}
			CVarBitVecBase<short unsigned int, 32>::Base(); // 1471
			CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(
				int bitNum);  // 701
			CUtlMemory<CTransform, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::operator[](
					int i);  // 706
			QuaternionAligned::operator fltx4(); // 471
			VectorAligned::operator fltx4(); // 471
			QuaternionAligned::operator fltx4(); // 471
			VectorAligned::operator fltx4(); // 471
			CTransform::operator*(
					const CTransform& rhs);  // 706
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					CTransform &);  // 706
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					const CTransform  &);  // 708
			Bitvec_Set(uint32* pBits,
					int nBitNum);  // 575
			CAnimationState::MarkBoneReadable(
					int nBone);  // 715
			CStrongHandle<InfoForResourceTypeCModel>::operator->(); // 699
			CUtlMemory<CTransform, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::operator[](
					int i);  // 703
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					CTransform &);  // 703
			CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1479
			{
			}
			CVarBitVecBase<short unsigned int, 32>::Base(); // 1480
			Bitvec_Set(uint32* pBits,
					int nBitNum);  // 1480
			CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Set(
				int bitNum);  // 704
		}
	}
	CalcNumIntsForBits(int numBits); // 592
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 342
	BitVec_ClearAll(uint32* pDst,
			int nDWords);  // 592
	CAnimationState::MarkAllBonesUnreadable(); // 681
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 598
	CStrongHandle<InfoForResourceTypeCModel>::operator==(
			const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 598
	CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 601
	CModel::GetAnimationStateData<(
							void* pBase);  // 602
	CAnimationState::GetAnimationData<()0>(const CAnimationState* this); // 688
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 690
	CalcNumIntsForBits(int numBits); // 1292
	CVarBitVecBase<short unsigned int, 32>::AllocInts(
			int numInts);  // 2546
	CVarBitVecBase<short unsigned int, 32>::AllocInts(
			int numInts);  // 1294
	CVarBitVecBase<short unsigned int, 32>::CVarBitVecBase(
			int numBits);  // 1419
	CVarBitVecBase<short unsigned int, 32>::GetNumDWords(); // 1970
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1970
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::ClearAll(); // 1427
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::CBitVecT(
		int numBits);  // 1215
	CVarBitVecT<short unsigned int, 32>::CVarBitVecT(
			int numBits);  // 1224
	CVarBitVec::CVarBitVec(
			int nBitCount);  // 691
	CUtlMemory<CTransform, int>::CUtlMemory(
			CTransform* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CTransform, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CTransform, int>::CUtlMemoryFixedGrowable_Base(
					CTransform* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<128, CTransform, 16>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<128, CTransform>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<128, CTransform, 16>::Base(); // 231
	CUtlMemoryFixedGrowable<CTransform, 128, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CTransform, 128>::CUtlVectorFixedGrowable(
				int growSize);  // 692
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CTransform, int>::Grow(
		int num);  // 806
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
	}
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::SetCount(
		int count);  // 693
	CUtlMemory<CTransform, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::operator[](
			int i);  // 694
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			CTransform &);  // 694
	CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1479
	{
	}
	CVarBitVecBase<short unsigned int, 32>::Base(); // 1480
	Bitvec_Set(uint32* pBits,
			int nBitNum);  // 1480
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Set(
		int bitNum);  // 695
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<128, CTransform, 16>::Base(); // 237
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 577
	CUtlMemory<CTransform, int>::ConvertToExternalMemory(
				CTransform* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CTransform, int>::Purge_FixedGrowable(
				CTransform* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CTransform, int>::Purge_FixedGrowable(
				CTransform* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<CTransform, 128, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<CTransform, int>::Base(); // 112
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::Base(); // 368
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::Purge(); // 560
	ValidateAlignment<CTransform>(void); // 508
	CUtlMemory<CTransform, int>::Purge(); // 903
	CUtlMemory<CTransform, int>::Purge(); // 510
	CUtlMemory<CTransform, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CTransform, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CTransform, 128, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CTransform, 128>::~CUtlVectorFixedGrowable(); // 719
	CVarBitVecBase<short unsigned int, 32>::FreeInts(); // 1342
	CVarBitVecBase<short unsigned int, 32>::~CVarBitVecBase(); // 914
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::~CBitVecT(); // 1207
	CVarBitVecT<short unsigned int, 32>::~CVarBitVecT(); // 1220
	CVarBitVec::~CVarBitVec(); // 719
} /* size: 0, variables: 5, inline expansions: 80 (3145 bytes) */

// <00919253> modellib/animationophistory.cpp:677
// variables: 9
// function calls: 109
void CAnimationState::SetBonesFromWorldSpace(const CTransform& rootToWorld, int nTransformCount, const CTransform* pWorldTransforms)
{
	CTransform* pParentTransforms; // 688
	CTransform mJointToParent; // 690
	CVarBitVec computedInverseTransform; // 691
	CUtlVectorFixedGrowable<CTransform, 128> pWorldToParentTransforms; // 692
	const char   __FUNCTION__; // 30501
	{
		int i; // 697
		{
			int nParentBone; // 699
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 700
			}
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 1471
			CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1470
			{
			}
			CVarBitVecBase<short unsigned int, 32>::Base(); // 1471
			CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(
				int bitNum);  // 701
			CUtlMemory<CTransform, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::operator[](
					int i);  // 706
			QuaternionAligned::operator fltx4(); // 471
			VectorAligned::operator fltx4(); // 471
			QuaternionAligned::operator fltx4(); // 471
			VectorAligned::operator fltx4(); // 471
			CTransform::operator*(
					const CTransform& rhs);  // 706
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					CTransform &);  // 706
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					const CTransform  &);  // 708
			Bitvec_Set(uint32* pBits,
					int nBitNum);  // 575
			CAnimationState::MarkBoneReadable(
					int nBone);  // 715
			CStrongHandle<InfoForResourceTypeCModel>::operator->(); // 699
			CUtlMemory<CTransform, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::operator[](
					int i);  // 703
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					CTransform &);  // 703
			CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1479
			{
			}
			CVarBitVecBase<short unsigned int, 32>::Base(); // 1480
			Bitvec_Set(uint32* pBits,
					int nBitNum);  // 1480
			CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Set(
				int bitNum);  // 704
		}
	}
	CalcNumIntsForBits(int numBits); // 592
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 342
	BitVec_ClearAll(uint32* pDst,
			int nDWords);  // 592
	CAnimationState::MarkAllBonesUnreadable(); // 681
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 598
	CStrongHandle<InfoForResourceTypeCModel>::operator==(
			const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 598
	CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 601
	CModel::GetAnimationStateData<(
							void* pBase);  // 602
	CAnimationState::GetAnimationData<()0>(const CAnimationState* this); // 688
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 690
	CalcNumIntsForBits(int numBits); // 1292
	CVarBitVecBase<short unsigned int, 32>::AllocInts(
			int numInts);  // 2546
	CVarBitVecBase<short unsigned int, 32>::AllocInts(
			int numInts);  // 1294
	CVarBitVecBase<short unsigned int, 32>::CVarBitVecBase(
			int numBits);  // 1419
	CVarBitVecBase<short unsigned int, 32>::GetNumDWords(); // 1970
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1970
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::ClearAll(); // 1427
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::CBitVecT(
		int numBits);  // 1215
	CVarBitVecT<short unsigned int, 32>::CVarBitVecT(
			int numBits);  // 1224
	CVarBitVec::CVarBitVec(
			int nBitCount);  // 691
	CUtlMemory<CTransform, int>::CUtlMemory(
			CTransform* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CTransform, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CTransform, int>::CUtlMemoryFixedGrowable_Base(
					CTransform* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<128, CTransform, 16>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<128, CTransform>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<128, CTransform, 16>::Base(); // 231
	CUtlMemoryFixedGrowable<CTransform, 128, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CTransform, 128>::CUtlVectorFixedGrowable(
				int growSize);  // 692
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CTransform, int>::Grow(
		int num);  // 806
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
	}
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::SetCount(
		int count);  // 693
	CUtlMemory<CTransform, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::operator[](
			int i);  // 694
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			CTransform &);  // 694
	CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1479
	{
	}
	CVarBitVecBase<short unsigned int, 32>::Base(); // 1480
	Bitvec_Set(uint32* pBits,
			int nBitNum);  // 1480
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Set(
		int bitNum);  // 695
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<128, CTransform, 16>::Base(); // 237
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 577
	CUtlMemory<CTransform, int>::ConvertToExternalMemory(
				CTransform* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CTransform, int>::Purge_FixedGrowable(
				CTransform* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CTransform, int>::Purge_FixedGrowable(
				CTransform* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<CTransform, 128, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<CTransform, int>::Base(); // 112
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::Base(); // 368
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::Purge(); // 560
	ValidateAlignment<CTransform>(void); // 508
	CUtlMemory<CTransform, int>::Purge(); // 903
	CUtlMemory<CTransform, int>::Purge(); // 510
	CUtlMemory<CTransform, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CTransform, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CTransform, 128, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CTransform, 128>::~CUtlVectorFixedGrowable(); // 719
	CVarBitVecBase<short unsigned int, 32>::FreeInts(); // 1342
	CVarBitVecBase<short unsigned int, 32>::~CVarBitVecBase(); // 914
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::~CBitVecT(); // 1207
	CVarBitVecT<short unsigned int, 32>::~CVarBitVecT(); // 1220
	CVarBitVec::~CVarBitVec(); // 719
} /* size: 0, variables: 5, inline expansions: 80 (3145 bytes) */

// <0499E257> modellib/animationophistory.cpp:722
// variables: 2
// function calls: 3
void CAnimationState::SetBonesFromParentSpace(int nTransformCount, const CTransform* pParentTransforms, const uint32* pReadableBones)
{
	const char   __FUNCTION__; // 48274
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 724
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 729
	CalcNumIntsForBits(int numBits); // 730
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 730
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <01CE30C5> modellib/animationophistory.cpp:722
// variables: 2
// function calls: 3
void CAnimationState::SetBonesFromParentSpace(int nTransformCount, const CTransform* pParentTransforms, const uint32* pReadableBones)
{
	const char   __FUNCTION__; // 55797
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 724
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 729
	CalcNumIntsForBits(int numBits); // 730
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 730
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <0091909A> modellib/animationophistory.cpp:722
// variables: 2
// function calls: 3
void CAnimationState::SetBonesFromParentSpace(int nTransformCount, const CTransform* pParentTransforms, const uint32* pReadableBones)
{
	const char   __FUNCTION__; // 30522
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 724
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 729
	CalcNumIntsForBits(int numBits); // 730
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 730
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <0499D0CA> modellib/animationophistory.cpp:736
// variables: 14
// function calls: 69
void CAnimationState::LerpFrom(const CAnimationState* pState1, const CAnimationState* pState2, float t)
{
	const char   __FUNCTION__; // 48085
	int nFlexControllerCount; // 744
	int nBoneCount; // 756
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 738
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 740
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 741
	}
	{
		const float* pCurWeights; // 747
		const float* pPrevWeights; // 748
		float* pDestWeights; // 749
		{
			int i; // 750
			Lerp<float>(float flPercent,
					const float& A,
					const float& B);  // 752
		}
		CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 598
		CStrongHandle<InfoForResourceTypeCModel>::operator==(
				const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 598
		CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 601
		CModel::GetAnimationStateData<(
								void* pBase);  // 602
		CAnimationState::GetAnimationData<()1>(const CAnimationState* this); // 747
		CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 598
		CStrongHandle<InfoForResourceTypeCModel>::operator==(
				const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 598
		CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 601
		CModel::GetAnimationStateData<(
								void* pBase);  // 602
		CAnimationState::GetAnimationData<()1>(const CAnimationState* this); // 748
		CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 598
		CStrongHandle<InfoForResourceTypeCModel>::operator==(
				const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 598
		CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 601
		CModel::GetAnimationStateData<(
								void* pBase);  // 602
		CAnimationState::GetAnimationData<()1>(const CAnimationState* this); // 749
	}
	{
		const CTransform* pCurBones; // 761
		const CTransform* pPrevBones; // 762
		CTransform* pDestBones; // 763
		{
			int j; // 764
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					CTransform &);  // 766
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 548
			CAnimationState::IsBoneReadable(
					int nBone);  // 768
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 548
			CAnimationState::IsBoneReadable(
					int nBone);  // 768
			Bitvec_Set(uint32* pBits,
					int nBitNum);  // 770
		}
		CalcNumIntsForBits(int numBits); // 592
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 342
		BitVec_ClearAll(uint32* pDst,
				int nDWords);  // 592
		CAnimationState::MarkAllBonesUnreadable(); // 759
		CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 598
		CStrongHandle<InfoForResourceTypeCModel>::operator==(
				const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 598
		CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 601
		CModel::GetAnimationStateData<(
								void* pBase);  // 602
		CAnimationState::GetAnimationData<()0>(const CAnimationState* this); // 761
		CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 598
		CStrongHandle<InfoForResourceTypeCModel>::operator==(
				const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 598
		CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 601
		CModel::GetAnimationStateData<(
								void* pBase);  // 602
		CAnimationState::GetAnimationData<()0>(const CAnimationState* this); // 762
		CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 598
		CStrongHandle<InfoForResourceTypeCModel>::operator==(
				const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 598
		CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 601
		CModel::GetAnimationStateData<(
								void* pBase);  // 602
		CAnimationState::GetAnimationData<()0>(const CAnimationState* this); // 763
	}
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCModel>::operator CWeakHandle<InfoForResourceTypeCModel>(); // 314
	CAnimationState::GetModel(); // 740
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCModel>::operator CWeakHandle<InfoForResourceTypeCModel>(); // 314
	CAnimationState::GetModel(); // 740
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCModel>::operator CWeakHandle<InfoForResourceTypeCModel>(); // 314
	CAnimationState::GetModel(); // 741
	CStrongHandle<InfoForResourceTypeCModel>::operator==(
			const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 741
} /* size: 0, variables: 3, inline expansions: 13 (0 bytes) */

// <01CE1F38> modellib/animationophistory.cpp:736
// variables: 14
// function calls: 69
void CAnimationState::LerpFrom(const CAnimationState* pState1, const CAnimationState* pState2, float t)
{
	const char   __FUNCTION__; // 55608
	int nFlexControllerCount; // 744
	int nBoneCount; // 756
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 738
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 740
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 741
	}
	{
		const float* pCurWeights; // 747
		const float* pPrevWeights; // 748
		float* pDestWeights; // 749
		{
			int i; // 750
			Lerp<float>(float flPercent,
					const float& A,
					const float& B);  // 752
		}
		CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 598
		CStrongHandle<InfoForResourceTypeCModel>::operator==(
				const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 598
		CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 601
		CModel::GetAnimationStateData<(
								void* pBase);  // 602
		CAnimationState::GetAnimationData<()1>(const CAnimationState* this); // 747
		CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 598
		CStrongHandle<InfoForResourceTypeCModel>::operator==(
				const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 598
		CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 601
		CModel::GetAnimationStateData<(
								void* pBase);  // 602
		CAnimationState::GetAnimationData<()1>(const CAnimationState* this); // 748
		CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 598
		CStrongHandle<InfoForResourceTypeCModel>::operator==(
				const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 598
		CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 601
		CModel::GetAnimationStateData<(
								void* pBase);  // 602
		CAnimationState::GetAnimationData<()1>(const CAnimationState* this); // 749
	}
	{
		const CTransform* pCurBones; // 761
		const CTransform* pPrevBones; // 762
		CTransform* pDestBones; // 763
		{
			int j; // 764
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					CTransform &);  // 766
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 548
			CAnimationState::IsBoneReadable(
					int nBone);  // 768
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 548
			CAnimationState::IsBoneReadable(
					int nBone);  // 768
			Bitvec_Set(uint32* pBits,
					int nBitNum);  // 770
		}
		CalcNumIntsForBits(int numBits); // 592
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 342
		BitVec_ClearAll(uint32* pDst,
				int nDWords);  // 592
		CAnimationState::MarkAllBonesUnreadable(); // 759
		CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 598
		CStrongHandle<InfoForResourceTypeCModel>::operator==(
				const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 598
		CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 601
		CModel::GetAnimationStateData<(
								void* pBase);  // 602
		CAnimationState::GetAnimationData<()0>(const CAnimationState* this); // 761
		CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 598
		CStrongHandle<InfoForResourceTypeCModel>::operator==(
				const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 598
		CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 601
		CModel::GetAnimationStateData<(
								void* pBase);  // 602
		CAnimationState::GetAnimationData<()0>(const CAnimationState* this); // 762
		CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 598
		CStrongHandle<InfoForResourceTypeCModel>::operator==(
				const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 598
		CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 601
		CModel::GetAnimationStateData<(
								void* pBase);  // 602
		CAnimationState::GetAnimationData<()0>(const CAnimationState* this); // 763
	}
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCModel>::operator CWeakHandle<InfoForResourceTypeCModel>(); // 314
	CAnimationState::GetModel(); // 740
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCModel>::operator CWeakHandle<InfoForResourceTypeCModel>(); // 314
	CAnimationState::GetModel(); // 740
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCModel>::operator CWeakHandle<InfoForResourceTypeCModel>(); // 314
	CAnimationState::GetModel(); // 741
	CStrongHandle<InfoForResourceTypeCModel>::operator==(
			const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 741
} /* size: 0, variables: 3, inline expansions: 13 (0 bytes) */

// <00917F0D> modellib/animationophistory.cpp:736
// variables: 14
// function calls: 69
void CAnimationState::LerpFrom(const CAnimationState* pState1, const CAnimationState* pState2, float t)
{
	const char   __FUNCTION__; // 30333
	int nFlexControllerCount; // 744
	int nBoneCount; // 756
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 738
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 740
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 741
	}
	{
		const float* pCurWeights; // 747
		const float* pPrevWeights; // 748
		float* pDestWeights; // 749
		{
			int i; // 750
			Lerp<float>(float flPercent,
					const float& A,
					const float& B);  // 752
		}
		CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 598
		CStrongHandle<InfoForResourceTypeCModel>::operator==(
				const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 598
		CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 601
		CModel::GetAnimationStateData<(
								void* pBase);  // 602
		CAnimationState::GetAnimationData<()1>(const CAnimationState* this); // 747
		CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 598
		CStrongHandle<InfoForResourceTypeCModel>::operator==(
				const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 598
		CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 601
		CModel::GetAnimationStateData<(
								void* pBase);  // 602
		CAnimationState::GetAnimationData<()1>(const CAnimationState* this); // 748
		CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 598
		CStrongHandle<InfoForResourceTypeCModel>::operator==(
				const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 598
		CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 601
		CModel::GetAnimationStateData<(
								void* pBase);  // 602
		CAnimationState::GetAnimationData<()1>(const CAnimationState* this); // 749
	}
	{
		const CTransform* pCurBones; // 761
		const CTransform* pPrevBones; // 762
		CTransform* pDestBones; // 763
		{
			int j; // 764
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					CTransform &);  // 766
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 548
			CAnimationState::IsBoneReadable(
					int nBone);  // 768
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 548
			CAnimationState::IsBoneReadable(
					int nBone);  // 768
			Bitvec_Set(uint32* pBits,
					int nBitNum);  // 770
		}
		CalcNumIntsForBits(int numBits); // 592
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 342
		BitVec_ClearAll(uint32* pDst,
				int nDWords);  // 592
		CAnimationState::MarkAllBonesUnreadable(); // 759
		CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 598
		CStrongHandle<InfoForResourceTypeCModel>::operator==(
				const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 598
		CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 601
		CModel::GetAnimationStateData<(
								void* pBase);  // 602
		CAnimationState::GetAnimationData<()0>(const CAnimationState* this); // 761
		CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 598
		CStrongHandle<InfoForResourceTypeCModel>::operator==(
				const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 598
		CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 601
		CModel::GetAnimationStateData<(
								void* pBase);  // 602
		CAnimationState::GetAnimationData<()0>(const CAnimationState* this); // 762
		CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 598
		CStrongHandle<InfoForResourceTypeCModel>::operator==(
				const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 598
		CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 601
		CModel::GetAnimationStateData<(
								void* pBase);  // 602
		CAnimationState::GetAnimationData<()0>(const CAnimationState* this); // 763
	}
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCModel>::operator CWeakHandle<InfoForResourceTypeCModel>(); // 314
	CAnimationState::GetModel(); // 740
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCModel>::operator CWeakHandle<InfoForResourceTypeCModel>(); // 314
	CAnimationState::GetModel(); // 740
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCModel>::operator CWeakHandle<InfoForResourceTypeCModel>(); // 314
	CAnimationState::GetModel(); // 741
	CStrongHandle<InfoForResourceTypeCModel>::operator==(
			const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 741
} /* size: 0, variables: 3, inline expansions: 13 (0 bytes) */

// <0499CEA4> modellib/animationophistory.cpp:777
// variables: 2
// function calls: 6
void CAnimationState::TransferStateTo(CAnimationState& state)
{
	const char   __FUNCTION__; // 48169
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 785
	}
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 604
	CStrongHandle<InfoForResourceTypeCModel>::Init(
		const CStrongHandle<InfoForResourceTypeCModel>& src);  // 666
	CStrongHandle<InfoForResourceTypeCModel>::operator=(
			const CStrongHandle<InfoForResourceTypeCModel>& src);  // 779
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 784
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

// <01CE1D12> modellib/animationophistory.cpp:777
// variables: 2
// function calls: 6
void CAnimationState::TransferStateTo(CAnimationState& state)
{
	const char   __FUNCTION__; // 55692
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 785
	}
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 604
	CStrongHandle<InfoForResourceTypeCModel>::Init(
		const CStrongHandle<InfoForResourceTypeCModel>& src);  // 666
	CStrongHandle<InfoForResourceTypeCModel>::operator=(
			const CStrongHandle<InfoForResourceTypeCModel>& src);  // 779
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 784
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

// <00917CE7> modellib/animationophistory.cpp:777
// variables: 2
// function calls: 6
void CAnimationState::TransferStateTo(CAnimationState& state)
{
	const char   __FUNCTION__; // 30417
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 785
	}
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 604
	CStrongHandle<InfoForResourceTypeCModel>::Init(
		const CStrongHandle<InfoForResourceTypeCModel>& src);  // 666
	CStrongHandle<InfoForResourceTypeCModel>::operator=(
			const CStrongHandle<InfoForResourceTypeCModel>& src);  // 779
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 784
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

// <0499CAC2> modellib/animationophistory.cpp:791
// variables: 6
// function calls: 15
int GetDebugBoneIndex(const CAnimationState* val)
{
	const char   __FUNCTION__; // 48211
	const char* pSearch; // 797
	int nBoneCount; // 801
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 793
	}
	{
		int i; // 802
		{
			const char* pBoneName; // 804
			CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
			CStrongHandle<InfoForResourceTypeCModel>::operator CWeakHandle<InfoForResourceTypeCModel>(); // 314
			CAnimationState::GetModel(); // 804
			CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 804
		}
	}
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCModel>::operator CWeakHandle<InfoForResourceTypeCModel>(); // 314
	CAnimationState::GetModel(); // 797
	CWeakHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 797
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCModel>::operator CWeakHandle<InfoForResourceTypeCModel>(); // 314
	CAnimationState::GetModel(); // 801
	CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 801
} /* size: 0, variables: 3, inline expansions: 10 (0 bytes) */

// <01CE1930> modellib/animationophistory.cpp:791
// variables: 6
// function calls: 15
int GetDebugBoneIndex(const CAnimationState* val)
{
	const char   __FUNCTION__; // 55734
	const char* pSearch; // 797
	int nBoneCount; // 801
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 793
	}
	{
		int i; // 802
		{
			const char* pBoneName; // 804
			CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
			CStrongHandle<InfoForResourceTypeCModel>::operator CWeakHandle<InfoForResourceTypeCModel>(); // 314
			CAnimationState::GetModel(); // 804
			CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 804
		}
	}
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCModel>::operator CWeakHandle<InfoForResourceTypeCModel>(); // 314
	CAnimationState::GetModel(); // 797
	CWeakHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 797
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCModel>::operator CWeakHandle<InfoForResourceTypeCModel>(); // 314
	CAnimationState::GetModel(); // 801
	CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 801
} /* size: 0, variables: 3, inline expansions: 10 (0 bytes) */

// <00917905> modellib/animationophistory.cpp:791
// variables: 6
// function calls: 15
int GetDebugBoneIndex(const CAnimationState* val)
{
	const char   __FUNCTION__; // 30459
	const char* pSearch; // 797
	int nBoneCount; // 801
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 793
	}
	{
		int i; // 802
		{
			const char* pBoneName; // 804
			CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
			CStrongHandle<InfoForResourceTypeCModel>::operator CWeakHandle<InfoForResourceTypeCModel>(); // 314
			CAnimationState::GetModel(); // 804
			CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 804
		}
	}
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCModel>::operator CWeakHandle<InfoForResourceTypeCModel>(); // 314
	CAnimationState::GetModel(); // 797
	CWeakHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 797
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCModel>::operator CWeakHandle<InfoForResourceTypeCModel>(); // 314
	CAnimationState::GetModel(); // 801
	CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 801
} /* size: 0, variables: 3, inline expansions: 10 (0 bytes) */

// <0499C0B1> modellib/animationophistory.cpp:811
// variables: 5
// function calls: 44
void CAnimationState::GetDebugString()
{
	CUtlString out; // 813
	int nBone; // 814
	const CTransform* pCurBones; // 815
	{
		const char* pBoneName; // 818
		QAngle boneAng; // 819
		CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
		CStrongHandle<InfoForResourceTypeCModel>::operator CWeakHandle<InfoForResourceTypeCModel>(); // 314
		CAnimationState::GetModel(); // 818
		CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 818
		QAngle::QAngle(); // 355
		QuaternionAligned::w(); // 41
		Quaternion::Quaternion(
				vec_t ix,
				vec_t iy,
				vec_t iz,
				vec_t iw);  // 41
		QuaternionAligned::operator Quaternion(); // 356
		CTransform::ToQAngle(); // 819
		VectorAligned::operator fltx4(); // 71
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 71
		CTransform::GetOrigin(); // 820
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 820
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 71
		CTransform::GetOrigin(); // 820
		_mm_cvtss_f32(__m128 __A); // 1515
		GetYSIMD<>(fltx4 a); // 75
		VectorAligned::y(); // 820
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 71
		CTransform::GetOrigin(); // 820
		_mm_cvtss_f32(__m128 __A); // 1496
		GetXSIMD<>(fltx4 a); // 74
		VectorAligned::x(); // 820
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 83
		CFmtStrN<256>::operator char const*(); // 820
	}
	CUtlString::CUtlString(); // 813
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 598
	CStrongHandle<InfoForResourceTypeCModel>::operator==(
			const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 598
	CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 601
	CModel::GetAnimationStateData<(
							void* pBase);  // 602
	CAnimationState::GetAnimationData<()0>(const CAnimationState* this); // 815
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 83
	CFmtStrN<256>::operator char const*(); // 824
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 824
} /* size: 0, variables: 3, inline expansions: 15 (0 bytes) */

// <0499B561> modellib/animationophistory.cpp:829
// variables: 8
// function calls: 50
void CAnimationState::GetDebugSpeedString(float flPrevTime, float flNextTime, const CAnimationState* pPrevVal)
{
	CUtlString out; // 831
	int nBone; // 832
	const CTransform* pPrevBones; // 833
	const CTransform* pCurBones; // 834
	const Vector  vPrevPosTmp; // 836
	const Vector  vCurPosTmp; // 837
	float speed; // 838
	CUtlString::CUtlString(); // 831
	CStrongHandle<InfoForResourceTypeCModel>::operator==(
			const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 598
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 598
	CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 601
	CModel::GetAnimationStateData<(
							void* pBase);  // 602
	CAnimationState::GetAnimationData<()0>(const CAnimationState* this); // 833
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 598
	CStrongHandle<InfoForResourceTypeCModel>::operator==(
			const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 598
	CModel::GetAnimationStateData<(
							void* pBase);  // 602
	CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 601
	CAnimationState::GetAnimationData<()0>(const CAnimationState* this); // 834
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	_mm_cvtss_f32(__m128 __A); // 1515
	GetYSIMD<>(fltx4 a); // 75
	VectorAligned::y(); // 40
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	VectorAligned::x(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 836
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	_mm_cvtss_f32(__m128 __A); // 1515
	GetYSIMD<>(fltx4 a); // 75
	VectorAligned::y(); // 40
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	VectorAligned::x(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 837
	{
		float dt; // 68
		Vector::Vector(); // 1305
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1306
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 1307
		Vector::DistTo(
			const Vector& vOther);  // 35
		CalcDistance(const Vector& a,
				const Vector& b);  // 45
		CalcDistance(const Vector& a,
				const Vector& b);  // 71
	}
	Compute(float flPrevTime,
		const Vector* pPrevValue,
		float flNextTime,
		const Vector* pNextValue);  // 63
	Compute(float flPrevTime,
		const Vector* pPrevValue,
		float flNextTime,
		const Vector* pNextValue);  // 838
} /* size: 0, variables: 7, inline expansions: 39 (0 bytes) */

// <0499ADD6> modellib/animationophistory.cpp:864
// variables: 2
// function calls: 10
void DecodeAnimation(CAnimationState* pAnimState, float flRealTime, const uint32* pBonesToSetUp, IAnimationGraphInstance* pAnimGraph, int nLod, const uint32* pBoneRequestBitMask, uint32 nAnimationDecodeDescFlags)
{
	CAnimationDecodeContext ctx; // 866
	HAnimationDecodeDesc hDesc; // 870
	CAnimationDecodeContext::CAnimationDecodeContext(); // 866
	CAnimationDecodeContext::Init(
		AnimationProcessingType_t processingType,
		CUtlScratchMemoryPool* pMemStack);  // 867
	CWeakHandle<InfoForResourceTypeCModel>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCModel>::operator CWeakHandle<InfoForResourceTypeCModel>(); // 314
	CAnimationState::GetModel(); // 870
	CAnimationDecodeContext::SetAnimationDecodeRealTimeBase(
					float flRealTimeBase);  // 868
	CAnimationDecodeContext::Shutdown(); // 178
	CAnimationDecodeContext::~CAnimationDecodeContext(); // 875
} /* size: 0, variables: 2, inline expansions: 10 (0 bytes) */

// <0499A79E> modellib/animationophistory.cpp:897
// variables: 2
// function calls: 13
void BlendOverrideTransforms(CAnimationState* pAnimState, int nOverrideTransformCount, const CTransform* pOverrideTransforms, const float* pOverrideTransformWeights, const uint32* pBoneRequestBitMask)
{
	int nNumTransforms; // 900
	CTransform* pTransforms; // 901
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 608
	CStrongHandle<InfoForResourceTypeCModel>::operator==(
			const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 608
	CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 611
	CAnimationState::GetAnimationDataCount<()0>(const CAnimationState* this); // 900
	CStrongHandle<InfoForResourceTypeCModel>::operator==(
			const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 598
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 598
	CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 601
	CModel::GetAnimationStateData<(
							void* pBase);  // 602
	CAnimationState::GetAnimationData<()0>(const CAnimationState* this); // 901
} /* size: 0, variables: 2, inline expansions: 13 (0 bytes) */

