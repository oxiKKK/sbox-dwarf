
//
// animgraph/bonepositionmetricevaluator.h
//
//	referenced by: libanimationsystem.so
//
//	function: 1
//	class: 1
//

// <01636320> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonepositionmetricevaluator.h:9
// member functions: 10
// member variables: 2
// vtable entries: 2
// class size: 32
class CBonePositionMetricEvaluator : public CMotionMetricEvaluator {
public:
	/* class CMotionMetricEvaluator <ancestor>; */ /* 0 32 */
	void CBonePositionMetricEvaluator(CBonePositionMetricEvaluator* , CBonePositionMetricEvaluator& );
	void CBonePositionMetricEvaluator(CBonePositionMetricEvaluator* , const CBonePositionMetricEvaluator& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonepositionmetricevaluator.cpp:8 */
	void CBonePositionMetricEvaluator(CBonePositionMetricEvaluator* , CPackedData& , int, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonepositionmetricevaluator.cpp:16 */
	virtual CUtlString GetUIName(const CBonePositionMetricEvaluator* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonepositionmetricevaluator.cpp:22 */
	virtual void CalculateSequenceValues(const CBonePositionMetricEvaluator* , const CModel* , CMotionMetricInitContext* , HSequence, float, bool, float, float* );
private:
	int m_nBoneIndex; /* 28 4 */
	void CBonePositionMetricEvaluator(class CBonePositionMetricEvaluator *, class CBonePositionMetricEvaluator &); /* linkage=_ZN28CBonePositionMetricEvaluatorC4EOS_ */
	void CBonePositionMetricEvaluator(class CBonePositionMetricEvaluator *, const class CBonePositionMetricEvaluator  &); /* linkage=_ZN28CBonePositionMetricEvaluatorC4ERKS_ */
	void CBonePositionMetricEvaluator(class CBonePositionMetricEvaluator *, CPackedData &, int, float); /* linkage=_ZN28CBonePositionMetricEvaluatorC4ER12CPackedDataTILb0EEif */
	virtual class CUtlString GetUIName(const class CBonePositionMetricEvaluator  *); /* linkage=_ZNK28CBonePositionMetricEvaluator9GetUINameEv */
	/* <164bfa0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonepositionmetricevaluator.cpp:22 */
	virtual void CalculateSequenceValues(const class CBonePositionMetricEvaluator  *, const class CModel  *, class CMotionMetricInitContext *, class HSequence, float, bool, float, float *); /* linkage=_ZNK28CBonePositionMetricEvaluator23CalculateSequenceValuesEPK6CModelP24CMotionMetricInitContext9HSequencefbfPf */
};

// <013D15A7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonepositionmetricevaluator.h:12
void CBonePositionMetricEvaluator::CBonePositionMetricEvaluator(CPackedData& packedData, int nBoneIndex, float flWeight)
{
} /* size: 0 */

