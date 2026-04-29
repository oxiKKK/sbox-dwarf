
//
// animgraph/pathmetricevaluator.h
//
//	referenced by: libanimationsystem.so
//
//	function: 1
//	class: 1
//

// <01635329> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricevaluator.h:9
// member functions: 18
// member variables: 5
// vtable entries: 4
// class size: 48
class CPathMetricEvaluator : public CMotionMetricEvaluator {
public:
	/* class CMotionMetricEvaluator <ancestor>; */ /* 0 32 */
	void CPathMetricEvaluator(CPathMetricEvaluator* , CPathMetricEvaluator& );
	void CPathMetricEvaluator(CPathMetricEvaluator* , const CPathMetricEvaluator& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricevaluator.cpp:10 */
	void CPathMetricEvaluator(CPathMetricEvaluator* , CPackedData& , float, const CUtlVector<float, CUtlMemory<float, int> >& , bool, float, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricevaluator.cpp:27 */
	virtual CUtlString GetUIName(const CPathMetricEvaluator* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricevaluator.cpp:33 */
	virtual void CalculateSequenceValues(const CPathMetricEvaluator* , const CModel* , CMotionMetricInitContext* , HSequence, float, bool, float, float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricevaluator.cpp:100 */
	virtual bool CalculateGoalValues(const CPathMetricEvaluator* , const CAnimGraphUpdateContext& , HSequence, float, bool, float, float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricevaluator.cpp:124 */
	virtual bool CalculateCurrentValues(const CPathMetricEvaluator* , const CAnimGraphUpdateContext& , const DistanceScalingSettings& , HSequence, float, float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricevaluator.cpp:151 */
	int GetSampleCount(const CPathMetricEvaluator* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricevaluator.cpp:157 */
	float GetSampleTime(const CPathMetricEvaluator* , int);
private:
	CRelativeArray<float> m_pathTimeSamples; /* 28 8 */
	float m_flDistance; /* 36 4 */
	bool m_bExtrapolateMovement; /* 40 1 */
	float m_flMinExtrapolationSpeed; /* 44 4 */
	void CPathMetricEvaluator(class CPathMetricEvaluator *, class CPathMetricEvaluator &); /* linkage=_ZN20CPathMetricEvaluatorC4EOS_ */
	void CPathMetricEvaluator(class CPathMetricEvaluator *, const class CPathMetricEvaluator  &); /* linkage=_ZN20CPathMetricEvaluatorC4ERKS_ */
	void CPathMetricEvaluator(class CPathMetricEvaluator *, CPackedData &, float, const class CUtlVector<float, CUtlMemory<float, int> >  &, bool, float, float); /* linkage=_ZN20CPathMetricEvaluatorC4ER12CPackedDataTILb0EEfRK10CUtlVectorIf10CUtlMemoryIfiEEbff */
	virtual class CUtlString GetUIName(const class CPathMetricEvaluator  *); /* linkage=_ZNK20CPathMetricEvaluator9GetUINameEv */
	virtual void CalculateSequenceValues(const class CPathMetricEvaluator  *, const class CModel  *, class CMotionMetricInitContext *, class HSequence, float, bool, float, float *); /* linkage=_ZNK20CPathMetricEvaluator23CalculateSequenceValuesEPK6CModelP24CMotionMetricInitContext9HSequencefbfPf */
	virtual bool CalculateGoalValues(const class CPathMetricEvaluator  *, const class CAnimGraphUpdateContext  &, class HSequence, float, bool, float, float *); /* linkage=_ZNK20CPathMetricEvaluator19CalculateGoalValuesERK23CAnimGraphUpdateContext9HSequencefbfPf */
	/* <164d2e5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricevaluator.cpp:124 */
	virtual bool CalculateCurrentValues(const class CPathMetricEvaluator  *, const class CAnimGraphUpdateContext  &, const class DistanceScalingSettings  &, class HSequence, float, float *); /* linkage=_ZNK20CPathMetricEvaluator22CalculateCurrentValuesERK23CAnimGraphUpdateContextRK23DistanceScalingSettings9HSequencefPf */
	int GetSampleCount(const class CPathMetricEvaluator  *); /* linkage=_ZNK20CPathMetricEvaluator14GetSampleCountEv */
	float GetSampleTime(const class CPathMetricEvaluator  *, int); /* linkage=_ZNK20CPathMetricEvaluator13GetSampleTimeEi */
};

// <013D1035> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricevaluator.h:12
void CPathMetricEvaluator::CPathMetricEvaluator(CPackedData& packedData, float flDistance, const CUtlVector<float, CUtlMemory<float, int> >& pathSamples, bool bExtrapolateMovement, float flMinExtrapolationSpeed, float flWeight)
{
} /* size: 0 */

