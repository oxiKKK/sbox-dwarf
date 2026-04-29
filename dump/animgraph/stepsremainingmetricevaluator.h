
//
// animgraph/stepsremainingmetricevaluator.h
//
//	referenced by: libanimationsystem.so
//
//	function: 1
//	class: 1
//

// <016351B6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stepsremainingmetricevaluator.h:9
// member functions: 12
// member variables: 3
// vtable entries: 3
// class size: 40
class CStepsRemainingMetricEvaluator : public CMotionMetricEvaluator {
public:
	/* class CMotionMetricEvaluator <ancestor>; */ /* 0 32 */
	void CStepsRemainingMetricEvaluator(CStepsRemainingMetricEvaluator* , CStepsRemainingMetricEvaluator& );
	void CStepsRemainingMetricEvaluator(CStepsRemainingMetricEvaluator* , const CStepsRemainingMetricEvaluator& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stepsremainingmetricevaluator.cpp:8 */
	void CStepsRemainingMetricEvaluator(CStepsRemainingMetricEvaluator* , CPackedData& , const CUtlVector<int, CUtlMemory<int, int> >& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stepsremainingmetricevaluator.cpp:16 */
	virtual CUtlString GetUIName(const CStepsRemainingMetricEvaluator* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stepsremainingmetricevaluator.cpp:22 */
	virtual void CalculateFilterValues(const CStepsRemainingMetricEvaluator* , const CAnimGraphUpdateContext& , float* , float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stepsremainingmetricevaluator.cpp:31 */
	virtual void CalculateSequenceValues(const CStepsRemainingMetricEvaluator* , const CModel* , CMotionMetricInitContext* , HSequence, float, bool, float, float* );
private:
	CRelativeArray<int> m_footIndices; /* 28 8 */
	float m_flMinStepsRemaining; /* 36 4 */
	void CStepsRemainingMetricEvaluator(class CStepsRemainingMetricEvaluator *, class CStepsRemainingMetricEvaluator &); /* linkage=_ZN30CStepsRemainingMetricEvaluatorC4EOS_ */
	void CStepsRemainingMetricEvaluator(class CStepsRemainingMetricEvaluator *, const class CStepsRemainingMetricEvaluator  &); /* linkage=_ZN30CStepsRemainingMetricEvaluatorC4ERKS_ */
	void CStepsRemainingMetricEvaluator(class CStepsRemainingMetricEvaluator *, CPackedData &, const class CUtlVector<int, CUtlMemory<int, int> >  &, float); /* linkage=_ZN30CStepsRemainingMetricEvaluatorC4ER12CPackedDataTILb0EERK10CUtlVectorIi10CUtlMemoryIiiEEf */
	virtual class CUtlString GetUIName(const class CStepsRemainingMetricEvaluator  *); /* linkage=_ZNK30CStepsRemainingMetricEvaluator9GetUINameEv */
	virtual void CalculateFilterValues(const class CStepsRemainingMetricEvaluator  *, const class CAnimGraphUpdateContext  &, float *, float *); /* linkage=_ZNK30CStepsRemainingMetricEvaluator21CalculateFilterValuesERK23CAnimGraphUpdateContextPfS3_ */
	virtual void CalculateSequenceValues(const class CStepsRemainingMetricEvaluator  *, const class CModel  *, class CMotionMetricInitContext *, class HSequence, float, bool, float, float *); /* linkage=_ZNK30CStepsRemainingMetricEvaluator23CalculateSequenceValuesEPK6CModelP24CMotionMetricInitContext9HSequencefbfPf */
};

// <013D0FEA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stepsremainingmetricevaluator.h:12
void CStepsRemainingMetricEvaluator::CStepsRemainingMetricEvaluator(CPackedData& packedData, const CUtlVector<int, CUtlMemory<int, int> >& footIndices, float flMinStepsRemaining)
{
} /* size: 0 */

