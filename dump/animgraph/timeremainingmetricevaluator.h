
//
// animgraph/timeremainingmetricevaluator.h
//
//	referenced by: libanimationsystem.so
//
//	function: 1
//	class: 1
//

// <01634B03> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetricevaluator.h:9
// member functions: 14
// member variables: 5
// vtable entries: 4
// class size: 48
class CTimeRemainingMetricEvaluator : public CMotionMetricEvaluator {
public:
	/* class CMotionMetricEvaluator <ancestor>; */ /* 0 32 */
	void CTimeRemainingMetricEvaluator(CTimeRemainingMetricEvaluator* , CTimeRemainingMetricEvaluator& );
	void CTimeRemainingMetricEvaluator(CTimeRemainingMetricEvaluator* , const CTimeRemainingMetricEvaluator& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetricevaluator.cpp:9 */
	void CTimeRemainingMetricEvaluator(CTimeRemainingMetricEvaluator* , CPackedData& , float, bool, float, bool, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetricevaluator.cpp:20 */
	virtual CUtlString GetUIName(const CTimeRemainingMetricEvaluator* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetricevaluator.cpp:26 */
	virtual void CalculateFilterValues(const CTimeRemainingMetricEvaluator* , const CAnimGraphUpdateContext& , float* , float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetricevaluator.cpp:32 */
	virtual void CalculateSequenceValues(const CTimeRemainingMetricEvaluator* , const CModel* , CMotionMetricInitContext* , HSequence, float, bool, float, float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetricevaluator.cpp:56 */
	virtual bool CalculateGoalValues(const CTimeRemainingMetricEvaluator* , const CAnimGraphUpdateContext& , HSequence, float, bool, float, float* );
private:
	bool m_bMatchByTimeRemaining; /* 28 1 */
	float m_flMaxTimeRemaining; /* 32 4 */
	bool m_bFilterByTimeRemaining; /* 36 1 */
	float m_flMinTimeRemaining; /* 40 4 */
	void CTimeRemainingMetricEvaluator(class CTimeRemainingMetricEvaluator *, class CTimeRemainingMetricEvaluator &); /* linkage=_ZN29CTimeRemainingMetricEvaluatorC4EOS_ */
	void CTimeRemainingMetricEvaluator(class CTimeRemainingMetricEvaluator *, const class CTimeRemainingMetricEvaluator  &); /* linkage=_ZN29CTimeRemainingMetricEvaluatorC4ERKS_ */
	void CTimeRemainingMetricEvaluator(class CTimeRemainingMetricEvaluator *, CPackedData &, float, bool, float, bool, float); /* linkage=_ZN29CTimeRemainingMetricEvaluatorC4ER12CPackedDataTILb0EEfbfbf */
	virtual class CUtlString GetUIName(const class CTimeRemainingMetricEvaluator  *); /* linkage=_ZNK29CTimeRemainingMetricEvaluator9GetUINameEv */
	virtual void CalculateFilterValues(const class CTimeRemainingMetricEvaluator  *, const class CAnimGraphUpdateContext  &, float *, float *); /* linkage=_ZNK29CTimeRemainingMetricEvaluator21CalculateFilterValuesERK23CAnimGraphUpdateContextPfS3_ */
	virtual void CalculateSequenceValues(const class CTimeRemainingMetricEvaluator  *, const class CModel  *, class CMotionMetricInitContext *, class HSequence, float, bool, float, float *); /* linkage=_ZNK29CTimeRemainingMetricEvaluator23CalculateSequenceValuesEPK6CModelP24CMotionMetricInitContext9HSequencefbfPf */
	virtual bool CalculateGoalValues(const class CTimeRemainingMetricEvaluator  *, const class CAnimGraphUpdateContext  &, class HSequence, float, bool, float, float *); /* linkage=_ZNK29CTimeRemainingMetricEvaluator19CalculateGoalValuesERK23CAnimGraphUpdateContext9HSequencefbfPf */
};

// <013D0F45> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetricevaluator.h:12
void CTimeRemainingMetricEvaluator::CTimeRemainingMetricEvaluator(CPackedData& packedData, float flWeight, bool bMatchByTimeRemaining, float flMaxTimeRemaining, bool bFilterByTimeRemaining, float flMinTimeRemaining)
{
} /* size: 0 */

