
//
// animgraph/futurefacingmetricevaluator.h
//
//	referenced by: libanimationsystem.so
//
//	function: 1
//	class: 1
//

// <0163579E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetricevaluator.h:9
// member functions: 20
// member variables: 2
// vtable entries: 4
// class size: 32
class CFutureFacingMetricEvaluator : public CMotionMetricEvaluator {
public:
	/* class CMotionMetricEvaluator <ancestor>; */ /* 0 32 */
	void CFutureFacingMetricEvaluator(CFutureFacingMetricEvaluator* , CFutureFacingMetricEvaluator& );
	void CFutureFacingMetricEvaluator(CFutureFacingMetricEvaluator* , const CFutureFacingMetricEvaluator& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetricevaluator.cpp:10 */
	void CFutureFacingMetricEvaluator(CFutureFacingMetricEvaluator* , CPackedData& , float, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetricevaluator.cpp:18 */
	virtual CUtlString GetUIName(const CFutureFacingMetricEvaluator* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetricevaluator.cpp:24 */
	virtual void CalculateSequenceValues(const CFutureFacingMetricEvaluator* , const CModel* , CMotionMetricInitContext* , HSequence, float, bool, float, float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetricevaluator.cpp:48 */
	virtual bool CalculateGoalValues(const CFutureFacingMetricEvaluator* , const CAnimGraphUpdateContext& , HSequence, float, bool, float, float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetricevaluator.cpp:70 */
	virtual MotionCorrection CalculateMotionCorrection(const CFutureFacingMetricEvaluator* , const CAnimGraphUpdateContext& , const float* , const float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetricevaluator.cpp:130 */
	Vector GetGoalPositionMS(const CFutureFacingMetricEvaluator* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetricevaluator.cpp:146 */
	Vector GetClipPositionMS(const CFutureFacingMetricEvaluator* , const CAnimGraphUpdateContext& , HSequence, float, bool);
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetricevaluator.cpp:88 */
	Vector CalcFutureFacingMS(const CFutureFacingMetricEvaluator* , const CAnimGraphUpdateContext& , const CMotionTransform& );
	float m_flDistance; /* 28 4 */
	void CFutureFacingMetricEvaluator(class CFutureFacingMetricEvaluator *, class CFutureFacingMetricEvaluator &); /* linkage=_ZN28CFutureFacingMetricEvaluatorC4EOS_ */
	void CFutureFacingMetricEvaluator(class CFutureFacingMetricEvaluator *, const class CFutureFacingMetricEvaluator  &); /* linkage=_ZN28CFutureFacingMetricEvaluatorC4ERKS_ */
	void CFutureFacingMetricEvaluator(class CFutureFacingMetricEvaluator *, CPackedData &, float, float); /* linkage=_ZN28CFutureFacingMetricEvaluatorC4ER12CPackedDataTILb0EEff */
	virtual class CUtlString GetUIName(const class CFutureFacingMetricEvaluator  *); /* linkage=_ZNK28CFutureFacingMetricEvaluator9GetUINameEv */
	virtual void CalculateSequenceValues(const class CFutureFacingMetricEvaluator  *, const class CModel  *, class CMotionMetricInitContext *, class HSequence, float, bool, float, float *); /* linkage=_ZNK28CFutureFacingMetricEvaluator23CalculateSequenceValuesEPK6CModelP24CMotionMetricInitContext9HSequencefbfPf */
	virtual bool CalculateGoalValues(const class CFutureFacingMetricEvaluator  *, const class CAnimGraphUpdateContext  &, class HSequence, float, bool, float, float *); /* linkage=_ZNK28CFutureFacingMetricEvaluator19CalculateGoalValuesERK23CAnimGraphUpdateContext9HSequencefbfPf */
	virtual class MotionCorrection CalculateMotionCorrection(const class CFutureFacingMetricEvaluator  *, const class CAnimGraphUpdateContext  &, const float  *, const float  *); /* linkage=_ZNK28CFutureFacingMetricEvaluator25CalculateMotionCorrectionERK23CAnimGraphUpdateContextPKfS4_ */
	class Vector GetGoalPositionMS(const class CFutureFacingMetricEvaluator  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK28CFutureFacingMetricEvaluator17GetGoalPositionMSERK23CAnimGraphUpdateContext */
	class Vector GetClipPositionMS(const class CFutureFacingMetricEvaluator  *, const class CAnimGraphUpdateContext  &, class HSequence, float, bool); /* linkage=_ZNK28CFutureFacingMetricEvaluator17GetClipPositionMSERK23CAnimGraphUpdateContext9HSequencefb */
	class Vector CalcFutureFacingMS(const class CFutureFacingMetricEvaluator  *, const class CAnimGraphUpdateContext  &, const class CMotionTransform  &); /* linkage=_ZNK28CFutureFacingMetricEvaluator18CalcFutureFacingMSERK23CAnimGraphUpdateContextRK16CMotionTransform */
};

// <013D11EE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetricevaluator.h:12
void CFutureFacingMetricEvaluator::CFutureFacingMetricEvaluator(CPackedData& packedData, float flDistance, float flWeight)
{
} /* size: 0 */

