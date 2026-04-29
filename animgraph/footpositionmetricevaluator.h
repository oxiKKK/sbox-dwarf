
//
// animgraph/footpositionmetricevaluator.h
//
//	referenced by: libanimationsystem.so
//
//	function: 1
//	class: 1
//

// <016359D3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetricevaluator.h:9
// member functions: 16
// member variables: 3
// vtable entries: 3
// class size: 40
class CFootPositionMetricEvaluator : public CMotionMetricEvaluator {
public:
	/* class CMotionMetricEvaluator <ancestor>; */ /* 0 32 */
	void CFootPositionMetricEvaluator(CFootPositionMetricEvaluator* , CFootPositionMetricEvaluator& );
	void CFootPositionMetricEvaluator(CFootPositionMetricEvaluator* , const CFootPositionMetricEvaluator& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetricevaluator.cpp:29 */
	void CFootPositionMetricEvaluator(CFootPositionMetricEvaluator* , CPackedData& , const CUtlVector<int, CUtlMemory<int, int> >& , bool, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetricevaluator.cpp:37 */
	virtual CUtlString GetUIName(const CFootPositionMetricEvaluator* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetricevaluator.cpp:43 */
	virtual void CalculateSequenceValues(const CFootPositionMetricEvaluator* , const CModel* , CMotionMetricInitContext* , HSequence, float, bool, float, float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetricevaluator.cpp:86 */
	virtual bool CalculateGoalValues(const CFootPositionMetricEvaluator* , const CAnimGraphUpdateContext& , HSequence, float, bool, float, float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetricevaluator.cpp:118 */
	int GetFootCount(const CFootPositionMetricEvaluator* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetricevaluator.cpp:124 */
	int GetFootIndex(const CFootPositionMetricEvaluator* , int);
private:
	CRelativeArray<int> m_footIndices; /* 28 8 */
	bool m_bIgnoreSlope; /* 36 1 */
	void CFootPositionMetricEvaluator(class CFootPositionMetricEvaluator *, class CFootPositionMetricEvaluator &); /* linkage=_ZN28CFootPositionMetricEvaluatorC4EOS_ */
	void CFootPositionMetricEvaluator(class CFootPositionMetricEvaluator *, const class CFootPositionMetricEvaluator  &); /* linkage=_ZN28CFootPositionMetricEvaluatorC4ERKS_ */
	void CFootPositionMetricEvaluator(class CFootPositionMetricEvaluator *, CPackedData &, const class CUtlVector<int, CUtlMemory<int, int> >  &, bool, float); /* linkage=_ZN28CFootPositionMetricEvaluatorC4ER12CPackedDataTILb0EERK10CUtlVectorIi10CUtlMemoryIiiEEbf */
	virtual class CUtlString GetUIName(const class CFootPositionMetricEvaluator  *); /* linkage=_ZNK28CFootPositionMetricEvaluator9GetUINameEv */
	virtual void CalculateSequenceValues(const class CFootPositionMetricEvaluator  *, const class CModel  *, class CMotionMetricInitContext *, class HSequence, float, bool, float, float *); /* linkage=_ZNK28CFootPositionMetricEvaluator23CalculateSequenceValuesEPK6CModelP24CMotionMetricInitContext9HSequencefbfPf */
	virtual bool CalculateGoalValues(const class CFootPositionMetricEvaluator  *, const class CAnimGraphUpdateContext  &, class HSequence, float, bool, float, float *); /* linkage=_ZNK28CFootPositionMetricEvaluator19CalculateGoalValuesERK23CAnimGraphUpdateContext9HSequencefbfPf */
	int GetFootCount(const class CFootPositionMetricEvaluator  *); /* linkage=_ZNK28CFootPositionMetricEvaluator12GetFootCountEv */
	int GetFootIndex(const class CFootPositionMetricEvaluator  *, int); /* linkage=_ZNK28CFootPositionMetricEvaluator12GetFootIndexEi */
};

// <013D1239> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetricevaluator.h:12
void CFootPositionMetricEvaluator::CFootPositionMetricEvaluator(CPackedData& packedData, const CUtlVector<int, CUtlMemory<int, int> >& footIndices, bool bIgnoreSlope, float flWeight)
{
} /* size: 0 */

