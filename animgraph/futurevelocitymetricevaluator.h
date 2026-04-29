
//
// animgraph/futurevelocitymetricevaluator.h
//
//	referenced by: libanimationsystem.so
//
//	function: 1
//	class: 1
//

// <0163556D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetricevaluator.h:9
// member functions: 18
// member variables: 5
// vtable entries: 3
// class size: 48
class CFutureVelocityMetricEvaluator : public CMotionMetricEvaluator {
public:
	/* class CMotionMetricEvaluator <ancestor>; */ /* 0 32 */
	void CFutureVelocityMetricEvaluator(CFutureVelocityMetricEvaluator* , CFutureVelocityMetricEvaluator& );
	void CFutureVelocityMetricEvaluator(CFutureVelocityMetricEvaluator* , const CFutureVelocityMetricEvaluator& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetricevaluator.cpp:10 */
	void CFutureVelocityMetricEvaluator(CFutureVelocityMetricEvaluator* , CPackedData& , float, float, bool, float, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetricevaluator.cpp:21 */
	virtual CUtlString GetUIName(const CFutureVelocityMetricEvaluator* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetricevaluator.cpp:27 */
	virtual void CalculateSequenceValues(const CFutureVelocityMetricEvaluator* , const CModel* , CMotionMetricInitContext* , HSequence, float, bool, float, float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetricevaluator.cpp:64 */
	virtual bool CalculateGoalValues(const CFutureVelocityMetricEvaluator* , const CAnimGraphUpdateContext& , HSequence, float, bool, float, float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetricevaluator.cpp:106 */
	Vector GetGoalPositionMS(const CFutureVelocityMetricEvaluator* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetricevaluator.cpp:122 */
	Vector GetClipPositionMS(const CFutureVelocityMetricEvaluator* , const CAnimGraphUpdateContext& , HSequence, float, bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetricevaluator.cpp:143 */
	bool IsDirectionless(const CFutureVelocityMetricEvaluator* );
private:
	float m_flDistance; /* 28 4 */
	float m_flStoppingDistance; /* 32 4 */
	float m_flTargetSpeed; /* 36 4 */
	bool m_bIgnoreDirection; /* 40 1 */
	void CFutureVelocityMetricEvaluator(class CFutureVelocityMetricEvaluator *, class CFutureVelocityMetricEvaluator &); /* linkage=_ZN30CFutureVelocityMetricEvaluatorC4EOS_ */
	void CFutureVelocityMetricEvaluator(class CFutureVelocityMetricEvaluator *, const class CFutureVelocityMetricEvaluator  &); /* linkage=_ZN30CFutureVelocityMetricEvaluatorC4ERKS_ */
	void CFutureVelocityMetricEvaluator(class CFutureVelocityMetricEvaluator *, CPackedData &, float, float, bool, float, float); /* linkage=_ZN30CFutureVelocityMetricEvaluatorC4ER12CPackedDataTILb0EEffbff */
	virtual class CUtlString GetUIName(const class CFutureVelocityMetricEvaluator  *); /* linkage=_ZNK30CFutureVelocityMetricEvaluator9GetUINameEv */
	virtual void CalculateSequenceValues(const class CFutureVelocityMetricEvaluator  *, const class CModel  *, class CMotionMetricInitContext *, class HSequence, float, bool, float, float *); /* linkage=_ZNK30CFutureVelocityMetricEvaluator23CalculateSequenceValuesEPK6CModelP24CMotionMetricInitContext9HSequencefbfPf */
	virtual bool CalculateGoalValues(const class CFutureVelocityMetricEvaluator  *, const class CAnimGraphUpdateContext  &, class HSequence, float, bool, float, float *); /* linkage=_ZNK30CFutureVelocityMetricEvaluator19CalculateGoalValuesERK23CAnimGraphUpdateContext9HSequencefbfPf */
	class Vector GetGoalPositionMS(const class CFutureVelocityMetricEvaluator  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK30CFutureVelocityMetricEvaluator17GetGoalPositionMSERK23CAnimGraphUpdateContext */
	class Vector GetClipPositionMS(const class CFutureVelocityMetricEvaluator  *, const class CAnimGraphUpdateContext  &, class HSequence, float, bool); /* linkage=_ZNK30CFutureVelocityMetricEvaluator17GetClipPositionMSERK23CAnimGraphUpdateContext9HSequencefb */
	bool IsDirectionless(const class CFutureVelocityMetricEvaluator  *); /* linkage=_ZNK30CFutureVelocityMetricEvaluator15IsDirectionlessEv */
};

// <013D117F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetricevaluator.h:12
void CFutureVelocityMetricEvaluator::CFutureVelocityMetricEvaluator(CPackedData& packedData, float flDistance, float flStoppingDistance, bool bIgnoreDirection, float flTargetSpeed, float flWeight)
{
} /* size: 0 */

