
//
// animgraph/currentvelocitymetricevaluator.h
//
//	referenced by: libanimationsystem.so
//
//	function: 1
//	class: 1
//

// <01636020> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetricevaluator.h:9
// member functions: 16
// member variable: 1
// vtable entries: 4
// class size: 32
class CCurrentVelocityMetricEvaluator : public CMotionMetricEvaluator {
public:
	/* class CMotionMetricEvaluator <ancestor>; */ /* 0 32 */
	void CCurrentVelocityMetricEvaluator(CCurrentVelocityMetricEvaluator* , CCurrentVelocityMetricEvaluator& );
	void CCurrentVelocityMetricEvaluator(CCurrentVelocityMetricEvaluator* , const CCurrentVelocityMetricEvaluator& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetricevaluator.cpp:8 */
	void CCurrentVelocityMetricEvaluator(CCurrentVelocityMetricEvaluator* , CPackedData& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetricevaluator.cpp:16 */
	virtual CUtlString GetUIName(const CCurrentVelocityMetricEvaluator* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetricevaluator.cpp:22 */
	virtual void CalculateSequenceValues(const CCurrentVelocityMetricEvaluator* , const CModel* , CMotionMetricInitContext* , HSequence, float, bool, float, float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetricevaluator.cpp:30 */
	virtual bool CalculateGoalValues(const CCurrentVelocityMetricEvaluator* , const CAnimGraphUpdateContext& , HSequence, float, bool, float, float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetricevaluator.cpp:40 */
	virtual bool CalculateCurrentValues(const CCurrentVelocityMetricEvaluator* , const CAnimGraphUpdateContext& , const DistanceScalingSettings& , HSequence, float, float* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetricevaluator.cpp:50 */
	Vector CalcVelocityAtCycleMS(const CCurrentVelocityMetricEvaluator* , const CModel* , HSequence, float);
	void CCurrentVelocityMetricEvaluator(class CCurrentVelocityMetricEvaluator *, class CCurrentVelocityMetricEvaluator &); /* linkage=_ZN31CCurrentVelocityMetricEvaluatorC4EOS_ */
	void CCurrentVelocityMetricEvaluator(class CCurrentVelocityMetricEvaluator *, const class CCurrentVelocityMetricEvaluator  &); /* linkage=_ZN31CCurrentVelocityMetricEvaluatorC4ERKS_ */
	void CCurrentVelocityMetricEvaluator(class CCurrentVelocityMetricEvaluator *, CPackedData &, float); /* linkage=_ZN31CCurrentVelocityMetricEvaluatorC4ER12CPackedDataTILb0EEf */
	virtual class CUtlString GetUIName(const class CCurrentVelocityMetricEvaluator  *); /* linkage=_ZNK31CCurrentVelocityMetricEvaluator9GetUINameEv */
	virtual void CalculateSequenceValues(const class CCurrentVelocityMetricEvaluator  *, const class CModel  *, class CMotionMetricInitContext *, class HSequence, float, bool, float, float *); /* linkage=_ZNK31CCurrentVelocityMetricEvaluator23CalculateSequenceValuesEPK6CModelP24CMotionMetricInitContext9HSequencefbfPf */
	virtual bool CalculateGoalValues(const class CCurrentVelocityMetricEvaluator  *, const class CAnimGraphUpdateContext  &, class HSequence, float, bool, float, float *); /* linkage=_ZNK31CCurrentVelocityMetricEvaluator19CalculateGoalValuesERK23CAnimGraphUpdateContext9HSequencefbfPf */
	virtual bool CalculateCurrentValues(const class CCurrentVelocityMetricEvaluator  *, const class CAnimGraphUpdateContext  &, const class DistanceScalingSettings  &, class HSequence, float, float *); /* linkage=_ZNK31CCurrentVelocityMetricEvaluator22CalculateCurrentValuesERK23CAnimGraphUpdateContextRK23DistanceScalingSettings9HSequencefPf */
	class Vector CalcVelocityAtCycleMS(const class CCurrentVelocityMetricEvaluator  *, const class CModel  *, class HSequence, float); /* linkage=_ZNK31CCurrentVelocityMetricEvaluator21CalcVelocityAtCycleMSEPK6CModel9HSequencef */
};

// <013D14A5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetricevaluator.h:12
void CCurrentVelocityMetricEvaluator::CCurrentVelocityMetricEvaluator(CPackedData& packedData, float flWeight)
{
} /* size: 0 */

