
//
// animgraph/footcyclemetricevaluator.h
//
//	referenced by: libanimationsystem.so
//
//	function: 1
//	class: 1
//

// <01635BA5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetricevaluator.h:9
// member functions: 18
// member variables: 2
// vtable entries: 4
// class size: 40
class CFootCycleMetricEvaluator : public CMotionMetricEvaluator {
public:
	/* class CMotionMetricEvaluator <ancestor>; */ /* 0 32 */
	void CFootCycleMetricEvaluator(CFootCycleMetricEvaluator* , CFootCycleMetricEvaluator& );
	void CFootCycleMetricEvaluator(CFootCycleMetricEvaluator* , const CFootCycleMetricEvaluator& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetricevaluator.cpp:10 */
	void CFootCycleMetricEvaluator(CFootCycleMetricEvaluator* , CPackedData& , const CUtlVector<int, CUtlMemory<int, int> >& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetricevaluator.cpp:17 */
	virtual CUtlString GetUIName(const CFootCycleMetricEvaluator* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetricevaluator.cpp:23 */
	virtual void CalculateSequenceValues(const CFootCycleMetricEvaluator* , const CModel* , CMotionMetricInitContext* , HSequence, float, bool, float, float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetricevaluator.cpp:31 */
	virtual bool CalculateGoalValues(const CFootCycleMetricEvaluator* , const CAnimGraphUpdateContext& , HSequence, float, bool, float, float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetricevaluator.cpp:65 */
	virtual bool CalculateCurrentValues(const CFootCycleMetricEvaluator* , const CAnimGraphUpdateContext& , const DistanceScalingSettings& , HSequence, float, float* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetricevaluator.cpp:73 */
	void CalcFootCycle(const CFootCycleMetricEvaluator* , const CModel* , HSequence, float, Vector2D* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetricevaluator.cpp:116 */
	Vector2D ProgressionToMetric(const CFootCycleMetricEvaluator* , float);
	CRelativeArray<int> m_footIndices; /* 28 8 */
	void CFootCycleMetricEvaluator(class CFootCycleMetricEvaluator *, class CFootCycleMetricEvaluator &); /* linkage=_ZN25CFootCycleMetricEvaluatorC4EOS_ */
	void CFootCycleMetricEvaluator(class CFootCycleMetricEvaluator *, const class CFootCycleMetricEvaluator  &); /* linkage=_ZN25CFootCycleMetricEvaluatorC4ERKS_ */
	void CFootCycleMetricEvaluator(class CFootCycleMetricEvaluator *, CPackedData &, const class CUtlVector<int, CUtlMemory<int, int> >  &, float); /* linkage=_ZN25CFootCycleMetricEvaluatorC4ER12CPackedDataTILb0EERK10CUtlVectorIi10CUtlMemoryIiiEEf */
	virtual class CUtlString GetUIName(const class CFootCycleMetricEvaluator  *); /* linkage=_ZNK25CFootCycleMetricEvaluator9GetUINameEv */
	virtual void CalculateSequenceValues(const class CFootCycleMetricEvaluator  *, const class CModel  *, class CMotionMetricInitContext *, class HSequence, float, bool, float, float *); /* linkage=_ZNK25CFootCycleMetricEvaluator23CalculateSequenceValuesEPK6CModelP24CMotionMetricInitContext9HSequencefbfPf */
	/* <164c960> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetricevaluator.cpp:31 */
	virtual bool CalculateGoalValues(const class CFootCycleMetricEvaluator  *, const class CAnimGraphUpdateContext  &, class HSequence, float, bool, float, float *); /* linkage=_ZNK25CFootCycleMetricEvaluator19CalculateGoalValuesERK23CAnimGraphUpdateContext9HSequencefbfPf */
	virtual bool CalculateCurrentValues(const class CFootCycleMetricEvaluator  *, const class CAnimGraphUpdateContext  &, const class DistanceScalingSettings  &, class HSequence, float, float *); /* linkage=_ZNK25CFootCycleMetricEvaluator22CalculateCurrentValuesERK23CAnimGraphUpdateContextRK23DistanceScalingSettings9HSequencefPf */
	void CalcFootCycle(const class CFootCycleMetricEvaluator  *, const class CModel  *, class HSequence, float, class Vector2D *); /* linkage=_ZNK25CFootCycleMetricEvaluator13CalcFootCycleEPK6CModel9HSequencefP8Vector2D */
	/* <164cd9c> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetricevaluator.cpp:116 */
	class Vector2D ProgressionToMetric(const class CFootCycleMetricEvaluator  *, float); /* linkage=_ZNK25CFootCycleMetricEvaluator19ProgressionToMetricEf */
};

// <013D12DB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetricevaluator.h:12
void CFootCycleMetricEvaluator::CFootCycleMetricEvaluator(CPackedData& packedData, const CUtlVector<int, CUtlMemory<int, int> >& footIndices, float flWeight)
{
} /* size: 0 */

