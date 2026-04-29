
//
// animgraph/bonevelocitymetricevaluator.h
//
//	referenced by: libanimationsystem.so
//
//	function: 1
//	class: 1
//

// <016361F1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonevelocitymetricevaluator.h:9
// member functions: 10
// member variables: 2
// vtable entries: 2
// class size: 32
class CBoneVelocityMetricEvaluator : public CMotionMetricEvaluator {
public:
	/* class CMotionMetricEvaluator <ancestor>; */ /* 0 32 */
	void CBoneVelocityMetricEvaluator(CBoneVelocityMetricEvaluator* , CBoneVelocityMetricEvaluator& );
	void CBoneVelocityMetricEvaluator(CBoneVelocityMetricEvaluator* , const CBoneVelocityMetricEvaluator& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonevelocitymetricevaluator.cpp:12 */
	void CBoneVelocityMetricEvaluator(CBoneVelocityMetricEvaluator* , CPackedData& , int, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonevelocitymetricevaluator.cpp:20 */
	virtual CUtlString GetUIName(const CBoneVelocityMetricEvaluator* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonevelocitymetricevaluator.cpp:26 */
	virtual void CalculateSequenceValues(const CBoneVelocityMetricEvaluator* , const CModel* , CMotionMetricInitContext* , HSequence, float, bool, float, float* );
private:
	int m_nBoneIndex; /* 28 4 */
	void CBoneVelocityMetricEvaluator(class CBoneVelocityMetricEvaluator *, class CBoneVelocityMetricEvaluator &); /* linkage=_ZN28CBoneVelocityMetricEvaluatorC4EOS_ */
	void CBoneVelocityMetricEvaluator(class CBoneVelocityMetricEvaluator *, const class CBoneVelocityMetricEvaluator  &); /* linkage=_ZN28CBoneVelocityMetricEvaluatorC4ERKS_ */
	void CBoneVelocityMetricEvaluator(class CBoneVelocityMetricEvaluator *, CPackedData &, int, float); /* linkage=_ZN28CBoneVelocityMetricEvaluatorC4ER12CPackedDataTILb0EEif */
	virtual class CUtlString GetUIName(const class CBoneVelocityMetricEvaluator  *); /* linkage=_ZNK28CBoneVelocityMetricEvaluator9GetUINameEv */
	virtual void CalculateSequenceValues(const class CBoneVelocityMetricEvaluator  *, const class CModel  *, class CMotionMetricInitContext *, class HSequence, float, bool, float, float *); /* linkage=_ZNK28CBoneVelocityMetricEvaluator23CalculateSequenceValuesEPK6CModelP24CMotionMetricInitContext9HSequencefbfPf */
};

// <013D151F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonevelocitymetricevaluator.h:12
void CBoneVelocityMetricEvaluator::CBoneVelocityMetricEvaluator(CPackedData& packedData, int nBoneIndex, float flWeight)
{
} /* size: 0 */

