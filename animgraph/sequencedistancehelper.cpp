
//
// animgraph/sequencedistancehelper.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 9
//

// <00F658CC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequencedistancehelper.cpp:9
// function calls: 7
void CSequenceDistanceHelper::CSequenceDistanceHelper()
{
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 9
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 9
} /* size: 0, inline expansions: 7 (0 bytes) */

// <00F658B3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequencedistancehelper.cpp:9
void CSequenceDistanceHelper::CSequenceDistanceHelper()
{
} /* size: 0 */

// <00F6523F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequencedistancehelper.cpp:15
// variables: 18
// function calls: 25
void CSequenceDistanceHelper::CSequenceDistanceHelper(const ISequence* pSequence)
{
	{
		Vector vTotalMovement; // 19
		float flDuration; // 20
		{
			const int  nFrameCount; // 24
			const int  nFrameMax; // 25
			float flLastCycle; // 29
			{
				int iFrame; // 31
				{
					float flCycle; // 33
					Vector vDeltaMovement; // 35
					QAngle vDeltaRotation; // 36
				}
			}
		}
	}
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 15
	{
		Vector vTotalMovement; // 19
		float flDuration; // 20
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 19
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 22
		{
			const int  nFrameCount; // 24
			const int  nFrameMax; // 25
			float flLastCycle; // 29
			IBaseSequence::NumFrames(
					const float* poseParameters);  // 24
			{
				int iFrame; // 31
				{
					float flCycle; // 33
					Vector vDeltaMovement; // 35
					QAngle vDeltaRotation; // 36
					Vector::Vector(); // 35
					QAngle::QAngle(); // 36
					_mm_load_ss(const float* __P); // 21
					_mm_sqrt_ss(__m128 __A); // 21
					_mm_cvtss_f32(__m128 __A); // 21
					FastSqrt(float x); // 1249
					VectorLength(const Vector& v); // 1256
					Vector::Length(); // 39
					CUtlMemory<float, int>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
							int i);  // 39
				}
			}
		}
	}
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 15
} /* size: 469, inline expansions: 7 (94 bytes) */

// <00F651A6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequencedistancehelper.cpp:15
// variables: 9
void CSequenceDistanceHelper::CSequenceDistanceHelper(const ISequence* pSequence)
{
	{
		Vector vTotalMovement; // 19
		float flDuration; // 20
		{
			const int  nFrameCount; // 24
			const int  nFrameMax; // 25
			float flLastCycle; // 29
			{
				int iFrame; // 31
				{
					float flCycle; // 33
					Vector vDeltaMovement; // 35
					QAngle vDeltaRotation; // 36
				}
			}
		}
	}
} /* size: 0 */

// <00F65037> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequencedistancehelper.cpp:48
// variables: 2
// function calls: 2
void CSequenceDistanceHelper::FindCycleForDistance(float flCycle, float flTargetDistance, bool bLoop)
{
	const char   __FUNCTION__; // 37857
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 50
	}
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 135
	CUtlVectorBase<float, CUtlMemory<float, int> >::IsEmpty(); // 52
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <00F64FEF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequencedistancehelper.cpp:65
// variables: 2
int GetClosestFrameForCycle(float flCycle, int nFrameMax)
{
	float flCycleNormalized; // 67
	float flCycleFrame; // 68
} /* size: 0, variables: 2 */

// <00F64B4E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequencedistancehelper.cpp:73
// variables: 15
// function calls: 12
void CSequenceDistanceHelper::FindDistanceBetweenCycles(float flStartCycle, float flEndCycle)
{
	float flDirection; // 81
	const int  nFrameMax; // 96
	const float  flStartCycleFrame; // 98
	const float  flEndCycleFrame; // 99
	float flAccumulatedDistance; // 101
	int nStartLowFrame; // 103
	int nStartHighFrame; // 104
	int nEndLowFrame; // 112
	int nEndHighFrame; // 113
	{
		float flShift; // 91
	}
	{
		int endFrame; // 108
		GetClosestFrameForCycle(float flCycle,
					int nFrameMax);  // 108
		CUtlMemory<float, int>::operator[](
				int i);  // 595
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
				int i);  // 109
		Lerp<float>(float flPercent,
				const float& A,
				const float& B);  // 109
	}
	{
		int endFrame; // 117
		GetClosestFrameForCycle(float flCycle,
					int nFrameMax);  // 117
		CUtlMemory<float, int>::operator[](
				int i);  // 595
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
				int i);  // 118
		Lerp<float>(float flPercent,
				const float& A,
				const float& B);  // 118
	}
	{
		int iFrame; // 121
		{
			float flCurrentCycle; // 123
			int nCycleFrame; // 126
			GetClosestFrameForCycle(float flCycle,
						int nFrameMax);  // 126
			CUtlMemory<float, int>::operator[](
					int i);  // 595
			CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
					int i);  // 128
		}
	}
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 75
} /* size: 800, variables: 9, inline expansions: 1 (3 bytes) */

// <00F647D8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequencedistancehelper.cpp:135
// variables: 11
// function calls: 9
void CSequenceDistanceHelper::FindCycleForDistanceForward(float flCycle, float flTargetDistance, bool bLoop)
{
	const int  nFrameMax; // 137
	float flCycleFrame; // 139
	int nLowFrame; // 140
	int nHighFrame; // 141
	float flAccumulatedDistance; // 143
	float flLastAccumulatedDistance; // 149
	float flLastCycle; // 150
	float flCurrentCycle; // 151
	{
		int iFrame; // 153
		{
			int nCycleFrame; // 160
			GetClosestFrameForCycle(float flCycle,
						int nFrameMax);  // 160
			CUtlMemory<float, int>::operator[](
					int i);  // 595
			CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
					int i);  // 162
		}
	}
	{
		float flLerpValue; // 184
		Lerp<float>(float flPercent,
				const float& A,
				const float& B);  // 185
	}
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 137
	CUtlMemory<float, int>::operator[](
			int i);  // 595
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
			int i);  // 146
	Lerp<float>(float flPercent,
			const float& A,
			const float& B);  // 146
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 167
} /* size: 592, variables: 8, inline expansions: 5 (83 bytes) */

// <00F64427> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequencedistancehelper.cpp:190
// variables: 13
// function calls: 9
void CSequenceDistanceHelper::FindCycleForDistanceBackward(float flCycle, float flTargetDistance, bool bLoop)
{
	const char   __FUNCTION__; // 38063
	const int  nFrameMax; // 194
	float flCycleFrame; // 196
	int nLowFrame; // 197
	int nHighFrame; // 198
	float flAccumulatedDistance; // 200
	float flLastAccumulatedDistance; // 206
	float flLastCycle; // 207
	float flCurrentCycle; // 208
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 192
	}
	{
		int iFrame; // 210
		{
			int nLastCycleFrame; // 218
			GetClosestFrameForCycle(float flCycle,
						int nFrameMax);  // 218
			CUtlMemory<float, int>::operator[](
					int i);  // 595
			CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
					int i);  // 220
		}
	}
	{
		float flLerpValue; // 242
		Lerp<float>(float flPercent,
				const float& A,
				const float& B);  // 243
	}
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 194
	CUtlMemory<float, int>::operator[](
			int i);  // 595
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
			int i);  // 203
	Lerp<float>(float flPercent,
			const float& A,
			const float& B);  // 203
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 225
} /* size: 0, variables: 9, inline expansions: 5 (83 bytes) */

