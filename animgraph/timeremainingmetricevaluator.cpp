
//
// animgraph/timeremainingmetricevaluator.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 5
//

// <0163AF1F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetricevaluator.cpp:9
void CTimeRemainingMetricEvaluator::CTimeRemainingMetricEvaluator(CPackedData& packedData, float flWeight, bool bMatchByTimeRemaining, float flMaxTimeRemaining, bool bFilterByTimeRemaining, float flMinTimeRemaining)
{
} /* size: 95 */

// <0163AE37> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetricevaluator.cpp:20
// function call: 1
void CTimeRemainingMetricEvaluator::GetUIName()
{
	CUtlString::CUtlString(
			const char* pString);  // 22
} /* size: 44, inline expansions: 1 (19 bytes) */

// <0163ADDF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetricevaluator.cpp:26
void CTimeRemainingMetricEvaluator::CalculateFilterValues(const CAnimGraphUpdateContext& context, float* pMinValuesOut, float* pMaxValuesOut)
{
} /* size: 14 */

// <0163ACBA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetricevaluator.cpp:32
// variables: 3
void CTimeRemainingMetricEvaluator::CalculateSequenceValues(const CModel* pModel, CMotionMetricInitContext* pContext, HSequence hSequence, float flCycle, bool bLoop, float flPredictionTime, float* pVectorDataOut)
{
	const ISequence* pSequence; // 34
	const float  flDuration; // 36
	float flStartTime; // 38
} /* size: 103, variables: 3 */

// <0163AC32> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetricevaluator.cpp:56
void CTimeRemainingMetricEvaluator::CalculateGoalValues(const CAnimGraphUpdateContext& context, HSequence hSequence, float flCurrentCycle, bool bLoop, float flPredictionTime, float* pVectorDataOut)
{
} /* size: 20 */

