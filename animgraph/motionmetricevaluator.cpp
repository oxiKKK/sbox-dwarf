
//
// animgraph/motionmetricevaluator.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 20
//

// <0163FA42> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.cpp:8
// variables: 2
// function calls: 12
void CMotionMetricEvaluator::CMotionMetricEvaluator(CPackedData& packedData, int nDimensionCount, float flWeight)
{
	{
		{
		}
	}
	{
		CRelativeOffset<float>::CRelativeOffset(); // 84
		CRelativeArray<float>::CRelativeArray(); // 9
		{
		}
		{
			uint32 i; // 183
		}
		CPackedDataT<false>::AddArray<float, float>(
					uint32 count,
					CPackedHandle<float>* handleOut,
					float& param1);  // 13
		{
		}
		CRelativeOffset<float>::SetOffset(
				const float* targetPtr);  // 20
		CRelativeOffset<float>::operator=(
				const float* targetPtr);  // 115
		CRelativeArray<float>::SetArray(
			const float* targetArray,
			int32 count);  // 13
		{
			uint32 i; // 183
		}
		CPackedDataT<false>::AddArray<float, float>(
					uint32 count,
					CPackedHandle<float>* handleOut,
					float& param1);  // 14
		{
		}
		CRelativeOffset<float>::SetOffset(
				const float* targetPtr);  // 20
		CRelativeOffset<float>::operator=(
				const float* targetPtr);  // 115
		CRelativeArray<float>::SetArray(
			const float* targetArray,
			int32 count);  // 14
		CRelativeOffset<float>::CRelativeOffset(); // 84
		CRelativeArray<float>::CRelativeArray(); // 9
	}
} /* size: 0 */

// <0163F9E2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.cpp:8
// variables: 2
void CMotionMetricEvaluator::CMotionMetricEvaluator(CPackedData& packedData, int nDimensionCount, float flWeight)
{
	const char   __FUNCTION__; // 31123
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 11
	}
} /* size: 0, variables: 1 */

// <0164CE2E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.cpp:18
// function call: 1
void CMotionMetricEvaluator::GetDimensionCount()
{
	CRelativeArray<float>::Count(); // 20
} /* size: 8, inline expansions: 1 (0 bytes) */

// <0163F9C9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.cpp:18
void CMotionMetricEvaluator::GetDimensionCount()
{
} /* size: 0 */

// <0163F8A4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.cpp:24
// function calls: 3
void CMotionMetricEvaluator::GetMean(int nDimension)
{
	{
	}
	CRelativeOffset<float>::IsValid(); // 35
	CRelativeOffset<float>::Get(); // 97
	CRelativeArray<float>::operator[](
			int index);  // 26
} /* size: 0, inline expansions: 3 (122 bytes) */

// <0163F76B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.cpp:30
// function calls: 3
void CMotionMetricEvaluator::SetMean(int nDimension, float flMean)
{
	{
	}
	CRelativeOffset<float>::IsValid(); // 30
	CRelativeOffset<float>::Get(); // 90
	CRelativeArray<float>::operator[](
			int index);  // 32
} /* size: 0, inline expansions: 3 (132 bytes) */

// <0163F646> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.cpp:36
// function calls: 3
void CMotionMetricEvaluator::GetStandardDeviation(int nDimension)
{
	{
	}
	CRelativeOffset<float>::IsValid(); // 35
	CRelativeOffset<float>::Get(); // 97
	CRelativeArray<float>::operator[](
			int index);  // 38
} /* size: 0, inline expansions: 3 (122 bytes) */

// <0163F50D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.cpp:42
// function calls: 3
void CMotionMetricEvaluator::SetStandardDeviation(int nDimension, float flSigma)
{
	{
	}
	CRelativeOffset<float>::IsValid(); // 30
	CRelativeOffset<float>::Get(); // 90
	CRelativeArray<float>::operator[](
			int index);  // 44
} /* size: 0, inline expansions: 3 (132 bytes) */

// <0163F4DF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.cpp:48
void CMotionMetricEvaluator::GetWeight()
{
} /* size: 10 */

// <0163F4A3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.cpp:54
void CMotionMetricEvaluator::SetWeight(float flWeight)
{
} /* size: 0 */

// <0164CE89> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.cpp:60
// function calls: 9
void CMotionMetricEvaluator::NormalizeMetric(int nDimension, float flOriginalMetricValue)
{
	{
	}
	CRelativeOffset<float>::IsValid(); // 35
	CRelativeOffset<float>::Get(); // 97
	CRelativeArray<float>::operator[](
			int index);  // 62
	{
	}
	CRelativeOffset<float>::IsValid(); // 35
	CRelativeOffset<float>::Get(); // 97
	CRelativeArray<float>::operator[](
			int index);  // 64
	{
	}
	CRelativeOffset<float>::IsValid(); // 35
	CRelativeOffset<float>::Get(); // 97
	CRelativeArray<float>::operator[](
			int index);  // 64
} /* size: 0, inline expansions: 9 (441 bytes) */

// <0163F472> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.cpp:60
void CMotionMetricEvaluator::NormalizeMetric(int nDimension, float flOriginalMetricValue)
{
} /* size: 0 */

// <0164D129> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.cpp:73
// function calls: 6
void CMotionMetricEvaluator::UnNormalizeMetric(int nDimension, float flNormalizedMetricValue)
{
	{
	}
	CRelativeOffset<float>::IsValid(); // 35
	CRelativeOffset<float>::Get(); // 97
	CRelativeArray<float>::operator[](
			int index);  // 75
	{
	}
	CRelativeOffset<float>::IsValid(); // 35
	CRelativeOffset<float>::Get(); // 97
	CRelativeArray<float>::operator[](
			int index);  // 75
} /* size: 0, inline expansions: 6 (0 bytes) */

// <0163F441> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.cpp:73
void CMotionMetricEvaluator::UnNormalizeMetric(int nDimension, float flNormalizedMetricValue)
{
} /* size: 0 */

// <0163F1C8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.cpp:79
// variable: 1
// function calls: 9
void CMotionMetricEvaluator::UnNormalizeVectorValues(float* pVectorDataOut)
{
	{
		int i; // 81
		CRelativeArray<float>::Count(); // 20
		CMotionMetricEvaluator::GetDimensionCount(); // 81
		CRelativeOffset<float>::IsValid(); // 35
		CRelativeOffset<float>::Get(); // 97
		{
		}
		CRelativeArray<float>::operator[](
				int index);  // 75
		{
		}
		CRelativeOffset<float>::IsValid(); // 35
		CRelativeOffset<float>::Get(); // 97
		CRelativeArray<float>::operator[](
				int index);  // 75
		CMotionMetricEvaluator::UnNormalizeMetric(
					int nDimension,
					float flNormalizedMetricValue);  // 83
	}
} /* size: 0 */

// <0163F01A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.cpp:88
// variable: 1
// function calls: 3
void CMotionMetricEvaluator::GetSequenceVectorValues(const CModel* pModel, CMotionMetricInitContext& context, HSequence hSequence, float flCycle, bool bLoop, float flPredictionTime, float* pVectorDataOut)
{
	{
		int i; // 96
		CRelativeArray<float>::Count(); // 20
		CMotionMetricEvaluator::GetDimensionCount(); // 96
	}
	HSequence::operator==(
			const HSequence& other);  // 90
} /* size: 89, inline expansions: 1 (0 bytes) */

// <0163EF10> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.cpp:104
void CMotionMetricEvaluator::GetNormalizedGoalVectorValues(const CAnimGraphUpdateContext& context, HSequence hSequence, float flCurrentCycle, bool bLoop, float flPredictionTime, float* pVectorDataOut)
{
} /* size: 65 */

// <0163EE26> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.cpp:113
void CMotionMetricEvaluator::GetNormalizedCurrentVectorValues(const CAnimGraphUpdateContext& context, const DistanceScalingSettings& distanceScale, HSequence hSequence, float flCycle, float* pVectorDataOut)
{
} /* size: 57 */

// <0163EC61> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.cpp:122
// variables: 3
// function calls: 2
void CMotionMetricEvaluator::GetMotionCorrection(const CAnimGraphUpdateContext& context, const float* pClipVectorDataNormalized, const float* pGoalVectorDataNormalized)
{
	float goalValues; // 124
	float clipValues; // 125
	{
		int i; // 127
		CRelativeArray<float>::Count(); // 20
		CMotionMetricEvaluator::GetDimensionCount(); // 127
	}
} /* size: 216, variables: 2 */

// <0163E92C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricevaluator.cpp:140
// variable: 1
// function calls: 12
void CMotionMetricEvaluator::NormalizeVectorValues(float* pVectorDataOut)
{
	{
		int i; // 142
		CRelativeArray<float>::Count(); // 20
		CMotionMetricEvaluator::GetDimensionCount(); // 142
		CRelativeOffset<float>::IsValid(); // 35
		CRelativeOffset<float>::Get(); // 97
		{
		}
		CRelativeArray<float>::operator[](
				int index);  // 62
		{
		}
		CRelativeOffset<float>::IsValid(); // 35
		CRelativeOffset<float>::Get(); // 97
		CRelativeArray<float>::operator[](
				int index);  // 64
		{
		}
		CRelativeOffset<float>::IsValid(); // 35
		CRelativeOffset<float>::Get(); // 97
		CRelativeArray<float>::operator[](
				int index);  // 64
		CMotionMetricEvaluator::NormalizeMetric(
				int nDimension,
				float flOriginalMetricValue);  // 144
	}
} /* size: 0 */

