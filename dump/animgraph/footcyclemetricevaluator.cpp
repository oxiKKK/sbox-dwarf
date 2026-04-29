
//
// animgraph/footcyclemetricevaluator.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 10
//

// <01647E90> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetricevaluator.cpp:10
// variable: 1
// function calls: 11
void CFootCycleMetricEvaluator::CFootCycleMetricEvaluator(CPackedData& packedData, const CUtlVector<int, CUtlMemory<int, int> >& footIndices, float flWeight)
{
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 11
	CRelativeOffset<int>::CRelativeOffset(); // 84
	CRelativeArray<int>::CRelativeArray(); // 11
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 13
	CUtlMemory<int, int>::Base(); // 113
	CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 13
	{
		uint32 i; // 206
	}
	CPackedDataT<false>::AddArray<int>(
			const int* pSrcArray,
			uint32 count,
			CPackedHandle<int>* handleOut);  // 13
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 13
	{
	}
	CRelativeOffset<int>::SetOffset(
			const int* targetPtr);  // 20
	CRelativeOffset<int>::operator=(
			const int* targetPtr);  // 115
	CRelativeArray<int>::SetArray(
		const int* targetArray,
		int32 count);  // 13
} /* size: 0, inline expansions: 11 (269 bytes) */

// <01647E53> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetricevaluator.cpp:10
void CFootCycleMetricEvaluator::CFootCycleMetricEvaluator(CPackedData& packedData, const CUtlVector<int, CUtlMemory<int, int> >& footIndices, float flWeight)
{
} /* size: 0 */

// <01647DCC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetricevaluator.cpp:17
// function call: 1
void CFootCycleMetricEvaluator::GetUIName()
{
	CUtlString::CUtlString(
			const char* pString);  // 19
} /* size: 44, inline expansions: 1 (19 bytes) */

// <01647CCA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetricevaluator.cpp:23
// variable: 1
void CFootCycleMetricEvaluator::CalculateSequenceValues(const CModel* pModel, CMotionMetricInitContext* pContext, HSequence hSequence, float flCycle, bool bLoop, float flPredictionTime, float* pDataOut)
{
	Vector2D* pVectorDataOut; // 25
} /* size: 14, variables: 1 */

// <0164C960> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetricevaluator.cpp:31
// variables: 4
// function calls: 12
void CFootCycleMetricEvaluator::CalculateGoalValues(const CAnimGraphUpdateContext& context, HSequence hSequence, float flCurrentCycle, bool bLoop, float flPredictionTime, float* pDataOut)
{
	Vector2D* pVectorDataOut; // 33
	HSequence::operator==(
			const HSequence& other);  // 36
	{
		int iFoot; // 45
		CRelativeArray<int>::Count(); // 45
		{
			int nFootIndex; // 47
			{
				CFootTrajectory trajectory; // 50
				Vector2D::Vector2D(
					const Vector2D& vOther);  // 118
				CFootCycleMetricEvaluator::ProgressionToMetric(
							float flProgression);  // 52
				Vector2D::operator=(
						const Vector2D& vOther);  // 52
			}
			Vector2D::Vector2D(
				const Vector2D& vOther);  // 118
			CFootCycleMetricEvaluator::ProgressionToMetric(
						float flProgression);  // 56
			Vector2D::operator=(
					const Vector2D& vOther);  // 56
			CRelativeOffset<int>::IsValid(); // 35
			CRelativeOffset<int>::Get(); // 97
			CRelativeArray<int>::operator[](
					int index);  // 47
		}
	}
	CFootCycleMetricEvaluator::CalculateGoalValues(
				const CAnimGraphUpdateContext& context,
				HSequence hSequence,
				float flCurrentCycle,
				bool bLoop,
				float flPredictionTime,
				float* pDataOut);  // 31
} /* size: 295, variables: 1, inline expansions: 2 (147 bytes) */

// <01647C33> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetricevaluator.cpp:31
// variables: 4
void CFootCycleMetricEvaluator::CalculateGoalValues(const CAnimGraphUpdateContext& context, HSequence hSequence, float flCurrentCycle, bool bLoop, float flPredictionTime, float* pDataOut)
{
	Vector2D* pVectorDataOut; // 33
	{
		int iFoot; // 45
		{
			int nFootIndex; // 47
			{
				CFootTrajectory trajectory; // 50
			}
		}
	}
} /* size: 0, variables: 1 */

// <01647B4A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetricevaluator.cpp:65
// variable: 1
void CFootCycleMetricEvaluator::CalculateCurrentValues(const CAnimGraphUpdateContext& context, const DistanceScalingSettings& distanceScale, HSequence hSequence, float flCycle, float* pDataOut)
{
	Vector2D* pVectorDataOut; // 67
} /* size: 77, variables: 1 */

// <016473F4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetricevaluator.cpp:73
// variables: 8
// function calls: 23
void CFootCycleMetricEvaluator::CalcFootCycle(const CModel* pModel, HSequence hSequence, float flCycle, Vector2D* pVectorDataOut)
{
	{
		int iFoot; // 75
		CRelativeArray<int>::Count(); // 75
		Vector2D::Vector2D(
			const Vector2D& vOther);  // 118
		CFootCycleMetricEvaluator::ProgressionToMetric(
					float flProgression);  // 77
		Vector2D::operator=(
				const Vector2D& vOther);  // 77
	}
	{
		const ISequence* pSequence; // 82
		{
			int iFoot; // 84
			{
				int nFootIndex; // 86
				{
					const CFootMotion* pFootMotion; // 89
					{
						const int  nFootCycleIndex; // 92
						{
							const CFootCycle  footCycle; // 95
							{
								const CFootTrajectory& trajectory; // 105
								CCycleBase::GetValue(); // 126
								CCycleBase::CCycleBase(
										float flCycle);  // 126
								CFootCycle::CFootCycle(
										const CFootCycle& rhs);  // 105
								Vector2D::Vector2D(
									const Vector2D& vOther);  // 118
								CFootCycleMetricEvaluator::ProgressionToMetric(
											float flProgression);  // 106
								Vector2D::operator=(
										const Vector2D& vOther);  // 106
							}
							Vector2D::Vector2D(
								const Vector2D& vOther);  // 118
							CFootCycleMetricEvaluator::ProgressionToMetric(
										float flProgression);  // 101
							Vector2D::operator=(
									const Vector2D& vOther);  // 101
							CCycleBase::operator==(
									float rhs);  // 99
							CCycleBase::CCycleBase(
									float flCycle);  // 125
							CAnimCycle::CAnimCycle(
									float flCycle);  // 95
						}
						CCycleBase::CCycleBase(
								float flCycle);  // 125
						CAnimCycle::CAnimCycle(
								float flCycle);  // 92
					}
				}
				CRelativeOffset<int>::IsValid(); // 35
				CRelativeOffset<int>::Get(); // 97
				CRelativeArray<int>::operator[](
						int index);  // 86
			}
			CRelativeArray<int>::Count(); // 84
		}
	}
	HSequence::operator==(
			const HSequence& other);  // 80
} /* size: 496, inline expansions: 1 (0 bytes) */

// <0164CD9C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetricevaluator.cpp:116
// function call: 1
void CFootCycleMetricEvaluator::ProgressionToMetric(float flProgression)
{
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 118
} /* size: 0, inline expansions: 1 (0 bytes) */

// <016473CF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetricevaluator.cpp:116
void CFootCycleMetricEvaluator::ProgressionToMetric(float flProgression)
{
} /* size: 0 */

