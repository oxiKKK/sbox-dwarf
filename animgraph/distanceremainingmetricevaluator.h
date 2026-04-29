
//
// animgraph/distanceremainingmetricevaluator.h
//
//	referenced by: libanimationsystem.so
//
//	function: 1
//	class: 1
//

// <01635DB6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetricevaluator.h:13
// member functions: 16
// member variables: 8
// vtable entries: 5
// class size: 48
class CDistanceRemainingMetricEvaluator : public CMotionMetricEvaluator {
public:
	/* class CMotionMetricEvaluator <ancestor>; */ /* 0 32 */
	void CDistanceRemainingMetricEvaluator(CDistanceRemainingMetricEvaluator* , CDistanceRemainingMetricEvaluator& );
	void CDistanceRemainingMetricEvaluator(CDistanceRemainingMetricEvaluator* , const CDistanceRemainingMetricEvaluator& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetricevaluator.cpp:8 */
	void CDistanceRemainingMetricEvaluator(CDistanceRemainingMetricEvaluator* , CPackedData& , float, bool, float, float, bool, float, bool, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetricevaluator.cpp:22 */
	virtual CUtlString GetUIName(const CDistanceRemainingMetricEvaluator* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetricevaluator.cpp:28 */
	virtual void CalculateFilterValues(const CDistanceRemainingMetricEvaluator* , const CAnimGraphUpdateContext& , float* , float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetricevaluator.cpp:51 */
	virtual void CalculateSequenceValues(const CDistanceRemainingMetricEvaluator* , const CModel* , CMotionMetricInitContext* , HSequence, float, bool, float, float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetricevaluator.cpp:87 */
	virtual bool CalculateGoalValues(const CDistanceRemainingMetricEvaluator* , const CAnimGraphUpdateContext& , HSequence, float, bool, float, float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetricevaluator.cpp:95 */
	virtual bool CalculateCurrentValues(const CDistanceRemainingMetricEvaluator* , const CAnimGraphUpdateContext& , const DistanceScalingSettings& , HSequence, float, float* );
private:
	float m_flMaxDistance; /* 28 4 */
	float m_flMinDistance; /* 32 4 */
	float m_flStartGoalFilterDistance; /* 36 4 */
	float m_flMaxGoalOvershootScale; /* 40 4 */
	bool m_bFilterFixedMinDistance; /* 44 1 */
	bool m_bFilterGoalDistance; /* 45 1 */
	bool m_bFilterGoalOvershoot; /* 46 1 */
	void CDistanceRemainingMetricEvaluator(class CDistanceRemainingMetricEvaluator *, class CDistanceRemainingMetricEvaluator &); /* linkage=_ZN33CDistanceRemainingMetricEvaluatorC4EOS_ */
	void CDistanceRemainingMetricEvaluator(class CDistanceRemainingMetricEvaluator *, const class CDistanceRemainingMetricEvaluator  &); /* linkage=_ZN33CDistanceRemainingMetricEvaluatorC4ERKS_ */
	void CDistanceRemainingMetricEvaluator(class CDistanceRemainingMetricEvaluator *, CPackedData &, float, bool, float, float, bool, float, bool, float); /* linkage=_ZN33CDistanceRemainingMetricEvaluatorC4ER12CPackedDataTILb0EEfbffbfbf */
	virtual class CUtlString GetUIName(const class CDistanceRemainingMetricEvaluator  *); /* linkage=_ZNK33CDistanceRemainingMetricEvaluator9GetUINameEv */
	/* <164be28> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetricevaluator.cpp:28 */
	virtual void CalculateFilterValues(const class CDistanceRemainingMetricEvaluator  *, const class CAnimGraphUpdateContext  &, float *, float *); /* linkage=_ZNK33CDistanceRemainingMetricEvaluator21CalculateFilterValuesERK23CAnimGraphUpdateContextPfS3_ */
	virtual void CalculateSequenceValues(const class CDistanceRemainingMetricEvaluator  *, const class CModel  *, class CMotionMetricInitContext *, class HSequence, float, bool, float, float *); /* linkage=_ZNK33CDistanceRemainingMetricEvaluator23CalculateSequenceValuesEPK6CModelP24CMotionMetricInitContext9HSequencefbfPf */
	virtual bool CalculateGoalValues(const class CDistanceRemainingMetricEvaluator  *, const class CAnimGraphUpdateContext  &, class HSequence, float, bool, float, float *); /* linkage=_ZNK33CDistanceRemainingMetricEvaluator19CalculateGoalValuesERK23CAnimGraphUpdateContext9HSequencefbfPf */
	virtual bool CalculateCurrentValues(const class CDistanceRemainingMetricEvaluator  *, const class CAnimGraphUpdateContext  &, const class DistanceScalingSettings  &, class HSequence, float, float *); /* linkage=_ZNK33CDistanceRemainingMetricEvaluator22CalculateCurrentValuesERK23CAnimGraphUpdateContextRK23DistanceScalingSettings9HSequencefPf */
};

// <013D13E0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetricevaluator.h:16
void CDistanceRemainingMetricEvaluator::CDistanceRemainingMetricEvaluator(CPackedData& packedData, float flWeight, bool bFilterFixedMinDistance, float flMaxDistance, float flMinDistance, bool bFilterGoalDistance, float flStartGoalFilterDistance, bool bFilterGoalOvershoot, float flMaxGoalOvershoot)
{
} /* size: 0 */

