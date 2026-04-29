
//
// animgraph/distanceremainingmetricevaluator.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 7
//

// <016487DA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetricevaluator.cpp:8
void CDistanceRemainingMetricEvaluator::CDistanceRemainingMetricEvaluator(CPackedData& packedData, float flWeight, bool bFilterFixedMinDistance, float flMaxDistance, float flMinDistance, bool bFilterGoalDistance, float flStartGoalFilterDistance, bool bFilterGoalOvershoot, float flMaxGoalOvershoot)
{
} /* size: 96 */

// <016486CC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetricevaluator.cpp:22
// function call: 1
void CDistanceRemainingMetricEvaluator::GetUIName()
{
	CUtlString::CUtlString(
			const char* pString);  // 24
} /* size: 44, inline expansions: 1 (19 bytes) */

// <0164BE28> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetricevaluator.cpp:28
// variable: 1
// function calls: 2
void CDistanceRemainingMetricEvaluator::CalculateFilterValues(const CAnimGraphUpdateContext& context, float* pMinValuesOut, float* pMaxValuesOut)
{
	{
		float flGoalDistance; // 37
		CAnimParamHandle::CAnimParamHandle(); // 37
	}
	CDistanceRemainingMetricEvaluator::CalculateFilterValues(
				const CAnimGraphUpdateContext& context,
				float* pMinValuesOut,
				float* pMaxValuesOut);  // 28
} /* size: 231, inline expansions: 1 (85 bytes) */

// <01648681> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetricevaluator.cpp:28
// variable: 1
void CDistanceRemainingMetricEvaluator::CalculateFilterValues(const CAnimGraphUpdateContext& context, float* pMinValuesOut, float* pMaxValuesOut)
{
	{
		float flGoalDistance; // 37
	}
} /* size: 0 */

// <0164841C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetricevaluator.cpp:51
// variables: 7
// function calls: 2
void CDistanceRemainingMetricEvaluator::CalculateSequenceValues(const CModel* pModel, CMotionMetricInitContext* pContext, HSequence hSequence, float flCycle, bool bLoop, float flPredictionTime, float* pVectorDataOut)
{
	const CSequenceDistanceHelper* pSequenceHelper; // 53
	{
		const ISequence* pSequence; // 56
		Vector vTotalMovement; // 58
		const float  flDuration; // 59
		{
			float flStartTime; // 68
			float flEndTime; // 69
			float flEndCycle; // 75
		}
		Vector::Vector(); // 58
		Vector::LengthSqr(); // 62
	}
} /* size: 327, variables: 1 */

// <016482CC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetricevaluator.cpp:87
// function calls: 2
void CDistanceRemainingMetricEvaluator::CalculateGoalValues(const CAnimGraphUpdateContext& context, HSequence hSequence, float flCurrentCycle, bool bLoop, float flPredictionTime, float* pVectorDataOut)
{
	CAnimParamHandle::CAnimParamHandle(); // 89
	CAnimParamHandle::CAnimParamHandle(); // 89
} /* size: 157, inline expansions: 2 (18 bytes) */

// <016481BC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetricevaluator.cpp:95
// variable: 1
// function call: 1
void CDistanceRemainingMetricEvaluator::CalculateCurrentValues(const CAnimGraphUpdateContext& context, const DistanceScalingSettings& distanceScale, HSequence hSequence, float flCycle, float* pVectorDataOut)
{
	{
		float flAdjustedTranslation; // 101
		Lerp<float>(float flPercent,
				const float& A,
				const float& B);  // 102
	}
} /* size: 108 */

