
//
// animgraph/stepsremainingmetricevaluator.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 5
//

// <0163B832> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stepsremainingmetricevaluator.cpp:8
// variable: 1
// function calls: 10
void CStepsRemainingMetricEvaluator::CStepsRemainingMetricEvaluator(CPackedData& packedData, const CUtlVector<int, CUtlMemory<int, int> >& footIndices, float flMinStepsRemaining)
{
	CRelativeOffset<int>::CRelativeOffset(); // 84
	CRelativeArray<int>::CRelativeArray(); // 10
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 12
	{
		uint32 i; // 206
	}
	CPackedDataT<false>::AddArray<int>(
			const int* pSrcArray,
			uint32 count,
			CPackedHandle<int>* handleOut);  // 12
	CUtlMemory<int, int>::Base(); // 113
	CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 12
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 12
	{
	}
	CRelativeOffset<int>::SetOffset(
			const int* targetPtr);  // 20
	CRelativeOffset<int>::operator=(
			const int* targetPtr);  // 115
	CRelativeArray<int>::SetArray(
		const int* targetArray,
		int32 count);  // 12
} /* size: 0, inline expansions: 10 (257 bytes) */

// <0163B7F5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stepsremainingmetricevaluator.cpp:8
void CStepsRemainingMetricEvaluator::CStepsRemainingMetricEvaluator(CPackedData& packedData, const CUtlVector<int, CUtlMemory<int, int> >& footIndices, float flMinStepsRemaining)
{
} /* size: 0 */

// <0163B76E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stepsremainingmetricevaluator.cpp:16
// function call: 1
void CStepsRemainingMetricEvaluator::GetUIName()
{
	CUtlString::CUtlString(
			const char* pString);  // 18
} /* size: 44, inline expansions: 1 (19 bytes) */

// <0163B6D7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stepsremainingmetricevaluator.cpp:22
void CStepsRemainingMetricEvaluator::CalculateFilterValues(const CAnimGraphUpdateContext& context, float* pMinValuesOut, float* pMaxValuesOut)
{
} /* size: 53 */

// <0163AFCB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stepsremainingmetricevaluator.cpp:31
// variables: 12
// function calls: 19
void CStepsRemainingMetricEvaluator::CalculateSequenceValues(const CModel* pModel, CMotionMetricInitContext* pContext, HSequence hSequence, float flCycle, bool bLoop, float flPredictionTime, float* pVectorDataOut)
{
	const ISequence* pSequence; // 33
	float flFootCyclesRemaining; // 35
	{
		int iFoot; // 37
		{
			int nFootIndex; // 39
			{
				const CFootMotion* pFootMotion; // 42
				{
					int iCycle; // 49
					{
						const CFootCycleDefinition& cycleDefinition; // 51
						CCycleBase::operator<(
								float rhs);  // 143
						CFootCycleDefinition::IsStationary(); // 52
						CCycleBase::operator==(
								float rhs);  // 146
						CFootCycleDefinition::IsEndCycle(); // 52
					}
				}
				{
					const int  nFootCycleIndex; // 60
					{
						const CFootCycleDefinition& cycleDefinition; // 64
						const CFootCycle  footCycle; // 65
						CCycleBase::CCycleBase(
								float flCycle);  // 125
						CAnimCycle::CAnimCycle(
								float flCycle);  // 65
						CCycleBase::operator<(
								float rhs);  // 143
						CFootCycleDefinition::IsStationary(); // 67
						CCycleBase::operator<(
								const CCycleBase& rhs);  // 70
					}
					{
						int iCycle; // 78
						{
							const CFootCycleDefinition& cycleDefinition; // 80
							CCycleBase::operator<(
									float rhs);  // 143
							CFootCycleDefinition::IsStationary(); // 81
							CCycleBase::operator==(
									float rhs);  // 146
							CFootCycleDefinition::IsEndCycle(); // 81
						}
					}
					CCycleBase::CCycleBase(
							float flCycle);  // 125
					CAnimCycle::CAnimCycle(
							float flCycle);  // 60
				}
			}
			CRelativeOffset<int>::IsValid(); // 35
			CRelativeOffset<int>::Get(); // 97
			CRelativeArray<int>::operator[](
					int index);  // 39
		}
		CRelativeArray<int>::Count(); // 37
	}
} /* size: 578, variables: 2 */

