
//
// animgraph/motionmatchingupdatenode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 3
//	class: 1
//	structs: 2
//

// <0196D5CD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.h:20
void ClipSegment::ClipSegment()
{
} /* size: 0 */

// <0196D5B1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.h:20
inline void ClipSegment::ClipSegment()
{
} /* size: 0 */

// <018D70C0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.h:20
// member functions: 4
// member variables: 7
// static member variable: 1
// struct size: 36
struct ClipSegment {
	static struct datamap_t m_DataMap; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.h:22 */
	datamap_t* GetBaseMap(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.h:24 */
	ClipIndex GetClipIndex(const ClipSegment* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.h:25 */
	void SetClipIndex(ClipSegment* , ClipIndex);
	ClipSampleInfo m_sampleInfo; /* 0 12 */
	float m_flCycleZeroTime; /* 12 4 */
	float m_flStartTime; /* 16 4 */
	float m_flEndTime; /* 20 4 */
	float m_flWeight; /* 24 4 */
private:
	int m_nGroupIndex; /* 28 4 */
	int m_nClipIndex; /* 32 4 */
	void ClipSegment(ClipSegment* );
};

// <018D71CE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.h:49
// member functions: 8
// member variables: 8
// static member variable: 1
// struct size: 212
struct MotionMatchingInstanceData {
	static struct datamap_t m_DataMap; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.h:51 */
	datamap_t* GetBaseMap(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.h:53 */
	void MotionMatchingInstanceData(MotionMatchingInstanceData* , CSaveablePackedData& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.h:55 */
	int GetNextSegmentIndex(const MotionMatchingInstanceData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.h:56 */
	int GetPrevSegmentIndex(const MotionMatchingInstanceData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.h:58 */
	ClipSegment& GetCurrentSegment(MotionMatchingInstanceData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.h:59 */
	const ClipSegment& GetCurrentSegment(const MotionMatchingInstanceData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.h:61 */
	ClipSegment& GetPrevSegment(MotionMatchingInstanceData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.h:62 */
	const ClipSegment& GetPrevSegment(const MotionMatchingInstanceData* );
	ClipSegment m_activeSegments[4]; /* 0 144 */
	int m_currentSegmentIndex; /* 144 4 */
	int m_lastSegmentIndex; /* 148 4 */
	float m_flSegmentStartTime; /* 152 4 */
	Vector m_vTransitionVelocityDeltaWS; /* 156 12 */
	DistanceScalingSettings m_distanceScaling; /* 168 16 */
	MotionCorrection m_motionCorrection; /* 184 24 */
	PoseHandle m_hPose; /* 208 1 */
};

// <019129F8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.h:79
// member functions: 114
// member variables: 26
// vtable entries: 14
// class size: 160
class CMotionMatchingUpdateNode : public CLeafUpdateNode {
public:
	/* class CLeafUpdateNode <ancestor>; */ /* 0 0 */
	void CMotionMatchingUpdateNode(CMotionMatchingUpdateNode* , CMotionMatchingUpdateNode& );
	void CMotionMatchingUpdateNode(CMotionMatchingUpdateNode* , const CMotionMatchingUpdateNode& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:117 */
	void CMotionMatchingUpdateNode(CMotionMatchingUpdateNode* , CAnimGraphInitContext& , int, int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:132 */
	virtual void Update(const CMotionMatchingUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:147 */
	virtual void CreatePoseOp(const CMotionMatchingUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:204 */
	virtual PoseHandle GetPoseHandle(const CMotionMatchingUpdateNode* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:211 */
	virtual float GetCycle(const CMotionMatchingUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:228 */
	virtual float GetDuration(const CMotionMatchingUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:246 */
	virtual CMotionTransform GetTotalMovement(const CMotionMatchingUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:269 */
	virtual CMotionTransform GetRemainingMovement(const CMotionMatchingUpdateNode* , CAnimGraphUpdateContext& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:306 */
	virtual void Reset(const CMotionMatchingUpdateNode* , CAnimGraphUpdateContext& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:331 */
	virtual bool IsFinished(const CMotionMatchingUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:337 */
	virtual float GetTimeTillFinished(const CMotionMatchingUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:343 */
	virtual void OnSave(const CMotionMatchingUpdateNode* , const CAnimGraphUpdateContext& , ISave* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:350 */
	virtual void OnRestore(const CMotionMatchingUpdateNode* , CAnimGraphUpdateContext& , IRestore* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:420 */
	int GetClipGroupCount(const CMotionMatchingUpdateNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:426 */
	int GetClipCount(const CMotionMatchingUpdateNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:432 */
	int GetClipEntryPointCount(const CMotionMatchingUpdateNode* , ClipIndex);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:438 */
	float GetClipEntryPointCycle(const CMotionMatchingUpdateNode* , ClipIndex, int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:444 */
	ClipIndex GetCurrentClipIndex(const CMotionMatchingUpdateNode* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:458 */
	int GetCurrentEntryPointIndex(const CMotionMatchingUpdateNode* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:474 */
	HSequence GetCurrentClipSequence(const CMotionMatchingUpdateNode* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:489 */
	float GetCurrentClipEntryPointCycle(const CMotionMatchingUpdateNode* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:504 */
	float GetCurrentClipCycle(const CMotionMatchingUpdateNode* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:522 */
	bool GetCurrentClipLoop(const CMotionMatchingUpdateNode* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:538 */
	bool IsGroupEnabled(const CMotionMatchingUpdateNode* , const CAnimGraphUpdateContext& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:557 */
	int GetMetricCount(const CMotionMatchingUpdateNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:563 */
	int GetMetricDimensionCount(const CMotionMatchingUpdateNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:569 */
	CUtlString GetMetricName(const CMotionMatchingUpdateNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:575 */
	float GetWeight(const CMotionMatchingUpdateNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:581 */
	float GetMean(const CMotionMatchingUpdateNode* , int, int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:587 */
	float GetStandardDeviation(const CMotionMatchingUpdateNode* , int, int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:593 */
	float CalculateScore(const CMotionMatchingUpdateNode* , CAnimGraphUpdateContext& , ClipIndex, int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:610 */
	void GetGoalValues(const CMotionMatchingUpdateNode* , CAnimGraphUpdateContext& , int, bool, CUtlVector<float, CUtlMemory<float, int> >& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:637 */
	void GetCurrentValues(const CMotionMatchingUpdateNode* , CAnimGraphUpdateContext& , int, bool, CUtlVector<float, CUtlMemory<float, int> >& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:664 */
	void GetClipValues(const CMotionMatchingUpdateNode* , CAnimGraphUpdateContext& , int, ClipIndex, int, bool, CUtlVector<float, CUtlMemory<float, int> >& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:688 */
	const CMotionMetricEvaluator* GetMetricEvaluator(const CMotionMatchingUpdateNode* , int);
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:694 */
	void UpdateBlendWeights(const CMotionMatchingUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:770 */
	virtual CRootMotion CalculateRootMotion(const CMotionMatchingUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:357 */
	virtual void CalculateFootMotion(const CMotionMatchingUpdateNode* , CAnimGraphUpdateContext& , const CMotionTransform& , CStrideStatus& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:829 */
	void UpdateCurrentClip(const CMotionMatchingUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:924 */
	void UpdateDistanceScaling(const CMotionMatchingUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:967 */
	void CalculateWeightVector(const CMotionMatchingUpdateNode* , CAnimGraphUpdateContext& , float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:980 */
	void CalculateGoalVector(const CMotionMatchingUpdateNode* , CAnimGraphUpdateContext& , float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:1030 */
	void CalculateCurrentVector(const CMotionMatchingUpdateNode* , const CAnimGraphUpdateContext& , float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:1061 */
	void CalculateFilterVectors(const CMotionMatchingUpdateNode* , const CAnimGraphUpdateContext& , float* , float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:1114 */
	float CalculateCurrentCost(const CMotionMatchingUpdateNode* , CAnimGraphUpdateContext& , const float* , const float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:1166 */
	ClipSampleInfo FindBestMatch(const CMotionMatchingUpdateNode* , const CAnimGraphUpdateContext& , const float* , const float* , const float* , const float* , float& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:1215 */
	ClipSampleInfo FindBestMatchSIMD(const CMotionMatchingUpdateNode* , const CAnimGraphUpdateContext& , const float* , const float* , const float* , const float* , float& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:1283 */
	float CalculateCost(const CMotionMatchingUpdateNode* , const float* , const float* , const float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:1298 */
	void CalculateInterpolatedValues(const CMotionMatchingUpdateNode* , ClipIndex, float, float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:1347 */
	void CalcFootStatusForSegment(const CMotionMatchingUpdateNode* , CAnimGraphUpdateContext& , const CMotionTransform& , const ClipSegment& , CStrideStatus& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:1381 */
	void CalcLastTransitionValues(const CMotionMatchingUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:1401 */
	void CalcStartTransitionValues(const CMotionMatchingUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:1431 */
	MotionCorrection CalcMotionCorrection(const CMotionMatchingUpdateNode* , CAnimGraphUpdateContext& , const float* , const float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:1468 */
	void AccumulateTags(const CMotionMatchingUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:1494 */
	bool ShouldPerformNewSearch(const CMotionMatchingUpdateNode* , CAnimGraphUpdateContext& );
	CMotionDataSet m_dataSet; /* 12 12 */
	CRelativeObjectArray<const CMotionMetricEvaluator> m_metrics; /* 24 8 */
	CPackedHandle<MotionMatchingInstanceData> m_hInstanceData; /* 32 4 */
	CPackedHandle<DiffBlendInstanceData> m_hDiffBlendInstData; /* 36 4 */
	bool m_bSearchAtInterval; /* 40 1 */
	float m_flSearchInterval; /* 44 4 */
	bool m_bSearchOnSteps; /* 48 1 */
	bool m_bForceSearchWhenTagsChange; /* 49 1 */
	bool m_bSearchWhenClipEnds; /* 50 1 */
	bool m_bSearchWhenGoalChanges; /* 51 1 */
	CBlendCurve m_blendCurve; /* 52 16 */
	float m_flPredictionTime; /* 68 4 */
	float m_flSampleRate; /* 72 4 */
	float m_flBlendTime; /* 76 4 */
	bool m_bLockClipWhenWaning; /* 80 1 */
	float m_flSelectionThreshold; /* 84 4 */
	bool m_bGoalAssist; /* 88 1 */
	float m_flGoalAssistDistance; /* 92 4 */
	float m_flGoalAssistTolerance; /* 96 4 */
	CAnimInputDamping m_distanceScale_Damping; /* 104 0 */
	float m_flDistanceScale_OuterRadius; /* 136 4 */
	float m_flDistanceScale_InnerRadius; /* 140 4 */
	float m_flDistanceScale_MaxScale; /* 144 4 */
	float m_flDistanceScale_MinScale; /* 148 4 */
	bool m_bEnableDistanceScaling; /* 152 1 */
	void CMotionMatchingUpdateNode(class CMotionMatchingUpdateNode *, class CMotionMatchingUpdateNode &); /* linkage=_ZN25CMotionMatchingUpdateNodeC4EOS_ */
	void CMotionMatchingUpdateNode(class CMotionMatchingUpdateNode *, const class CMotionMatchingUpdateNode  &); /* linkage=_ZN25CMotionMatchingUpdateNodeC4ERKS_ */
	void CMotionMatchingUpdateNode(class CMotionMatchingUpdateNode *, class CAnimGraphInitContext &, int, int); /* linkage=_ZN25CMotionMatchingUpdateNodeC4ER21CAnimGraphInitContextii */
	virtual void Update(const class CMotionMatchingUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK25CMotionMatchingUpdateNode6UpdateER23CAnimGraphUpdateContext */
	virtual void CreatePoseOp(const class CMotionMatchingUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK25CMotionMatchingUpdateNode12CreatePoseOpER23CAnimGraphUpdateContext */
	virtual PoseHandle GetPoseHandle(const class CMotionMatchingUpdateNode  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK25CMotionMatchingUpdateNode13GetPoseHandleERK23CAnimGraphUpdateContext */
	virtual float GetCycle(const class CMotionMatchingUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK25CMotionMatchingUpdateNode8GetCycleER23CAnimGraphUpdateContext */
	virtual float GetDuration(const class CMotionMatchingUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK25CMotionMatchingUpdateNode11GetDurationER23CAnimGraphUpdateContext */
	virtual class CMotionTransform GetTotalMovement(const class CMotionMatchingUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK25CMotionMatchingUpdateNode16GetTotalMovementER23CAnimGraphUpdateContext */
	virtual class CMotionTransform GetRemainingMovement(const class CMotionMatchingUpdateNode  *, class CAnimGraphUpdateContext &, float); /* linkage=_ZNK25CMotionMatchingUpdateNode20GetRemainingMovementER23CAnimGraphUpdateContextf */
	virtual void Reset(const class CMotionMatchingUpdateNode  *, class CAnimGraphUpdateContext &, float); /* linkage=_ZNK25CMotionMatchingUpdateNode5ResetER23CAnimGraphUpdateContextf */
	virtual bool IsFinished(const class CMotionMatchingUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK25CMotionMatchingUpdateNode10IsFinishedER23CAnimGraphUpdateContext */
	virtual float GetTimeTillFinished(const class CMotionMatchingUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK25CMotionMatchingUpdateNode19GetTimeTillFinishedER23CAnimGraphUpdateContext */
	virtual void OnSave(const class CMotionMatchingUpdateNode  *, const class CAnimGraphUpdateContext  &, class ISave *); /* linkage=_ZNK25CMotionMatchingUpdateNode6OnSaveERK23CAnimGraphUpdateContextP5ISave */
	virtual void OnRestore(const class CMotionMatchingUpdateNode  *, class CAnimGraphUpdateContext &, class IRestore *); /* linkage=_ZNK25CMotionMatchingUpdateNode9OnRestoreER23CAnimGraphUpdateContextP8IRestore */
	int GetClipGroupCount(const class CMotionMatchingUpdateNode  *); /* linkage=_ZNK25CMotionMatchingUpdateNode17GetClipGroupCountEv */
	int GetClipCount(const class CMotionMatchingUpdateNode  *, int); /* linkage=_ZNK25CMotionMatchingUpdateNode12GetClipCountEi */
	int GetClipEntryPointCount(const class CMotionMatchingUpdateNode  *, class ClipIndex); /* linkage=_ZNK25CMotionMatchingUpdateNode22GetClipEntryPointCountE9ClipIndex */
	float GetClipEntryPointCycle(const class CMotionMatchingUpdateNode  *, class ClipIndex, int); /* linkage=_ZNK25CMotionMatchingUpdateNode22GetClipEntryPointCycleE9ClipIndexi */
	class ClipIndex GetCurrentClipIndex(const class CMotionMatchingUpdateNode  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK25CMotionMatchingUpdateNode19GetCurrentClipIndexERK23CAnimGraphUpdateContext */
	int GetCurrentEntryPointIndex(const class CMotionMatchingUpdateNode  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK25CMotionMatchingUpdateNode25GetCurrentEntryPointIndexERK23CAnimGraphUpdateContext */
	class HSequence GetCurrentClipSequence(const class CMotionMatchingUpdateNode  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK25CMotionMatchingUpdateNode22GetCurrentClipSequenceERK23CAnimGraphUpdateContext */
	float GetCurrentClipEntryPointCycle(const class CMotionMatchingUpdateNode  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK25CMotionMatchingUpdateNode29GetCurrentClipEntryPointCycleERK23CAnimGraphUpdateContext */
	float GetCurrentClipCycle(const class CMotionMatchingUpdateNode  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK25CMotionMatchingUpdateNode19GetCurrentClipCycleERK23CAnimGraphUpdateContext */
	bool GetCurrentClipLoop(const class CMotionMatchingUpdateNode  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK25CMotionMatchingUpdateNode18GetCurrentClipLoopERK23CAnimGraphUpdateContext */
	bool IsGroupEnabled(const class CMotionMatchingUpdateNode  *, const class CAnimGraphUpdateContext  &, int); /* linkage=_ZNK25CMotionMatchingUpdateNode14IsGroupEnabledERK23CAnimGraphUpdateContexti */
	int GetMetricCount(const class CMotionMatchingUpdateNode  *); /* linkage=_ZNK25CMotionMatchingUpdateNode14GetMetricCountEv */
	int GetMetricDimensionCount(const class CMotionMatchingUpdateNode  *, int); /* linkage=_ZNK25CMotionMatchingUpdateNode23GetMetricDimensionCountEi */
	class CUtlString GetMetricName(const class CMotionMatchingUpdateNode  *, int); /* linkage=_ZNK25CMotionMatchingUpdateNode13GetMetricNameEi */
	float GetWeight(const class CMotionMatchingUpdateNode  *, int); /* linkage=_ZNK25CMotionMatchingUpdateNode9GetWeightEi */
	float GetMean(const class CMotionMatchingUpdateNode  *, int, int); /* linkage=_ZNK25CMotionMatchingUpdateNode7GetMeanEii */
	float GetStandardDeviation(const class CMotionMatchingUpdateNode  *, int, int); /* linkage=_ZNK25CMotionMatchingUpdateNode20GetStandardDeviationEii */
	float CalculateScore(const class CMotionMatchingUpdateNode  *, class CAnimGraphUpdateContext &, class ClipIndex, int); /* linkage=_ZNK25CMotionMatchingUpdateNode14CalculateScoreER23CAnimGraphUpdateContext9ClipIndexi */
	void GetGoalValues(const class CMotionMatchingUpdateNode  *, class CAnimGraphUpdateContext &, int, bool, class CUtlVector<float, CUtlMemory<float, int> > &); /* linkage=_ZNK25CMotionMatchingUpdateNode13GetGoalValuesER23CAnimGraphUpdateContextibR10CUtlVectorIf10CUtlMemoryIfiEE */
	void GetCurrentValues(const class CMotionMatchingUpdateNode  *, class CAnimGraphUpdateContext &, int, bool, class CUtlVector<float, CUtlMemory<float, int> > &); /* linkage=_ZNK25CMotionMatchingUpdateNode16GetCurrentValuesER23CAnimGraphUpdateContextibR10CUtlVectorIf10CUtlMemoryIfiEE */
	void GetClipValues(const class CMotionMatchingUpdateNode  *, class CAnimGraphUpdateContext &, int, class ClipIndex, int, bool, class CUtlVector<float, CUtlMemory<float, int> > &); /* linkage=_ZNK25CMotionMatchingUpdateNode13GetClipValuesER23CAnimGraphUpdateContexti9ClipIndexibR10CUtlVectorIf10CUtlMemoryIfiEE */
	const class CMotionMetricEvaluator  * GetMetricEvaluator(const class CMotionMatchingUpdateNode  *, int); /* linkage=_ZNK25CMotionMatchingUpdateNode18GetMetricEvaluatorEi */
	void UpdateBlendWeights(const class CMotionMatchingUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK25CMotionMatchingUpdateNode18UpdateBlendWeightsER23CAnimGraphUpdateContext */
	virtual class CRootMotion CalculateRootMotion(const class CMotionMatchingUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK25CMotionMatchingUpdateNode19CalculateRootMotionER23CAnimGraphUpdateContext */
	virtual void CalculateFootMotion(const class CMotionMatchingUpdateNode  *, class CAnimGraphUpdateContext &, const class CMotionTransform  &, class CStrideStatus &); /* linkage=_ZNK25CMotionMatchingUpdateNode19CalculateFootMotionER23CAnimGraphUpdateContextRK16CMotionTransformR13CStrideStatus */
	/* <19770ca> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:829 */
	void UpdateCurrentClip(const class CMotionMatchingUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK25CMotionMatchingUpdateNode17UpdateCurrentClipER23CAnimGraphUpdateContext */
	void UpdateDistanceScaling(const class CMotionMatchingUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK25CMotionMatchingUpdateNode21UpdateDistanceScalingER23CAnimGraphUpdateContext */
	void CalculateWeightVector(const class CMotionMatchingUpdateNode  *, class CAnimGraphUpdateContext &, float *); /* linkage=_ZNK25CMotionMatchingUpdateNode21CalculateWeightVectorER23CAnimGraphUpdateContextPf */
	void CalculateGoalVector(const class CMotionMatchingUpdateNode  *, class CAnimGraphUpdateContext &, float *); /* linkage=_ZNK25CMotionMatchingUpdateNode19CalculateGoalVectorER23CAnimGraphUpdateContextPf */
	void CalculateCurrentVector(const class CMotionMatchingUpdateNode  *, const class CAnimGraphUpdateContext  &, float *); /* linkage=_ZNK25CMotionMatchingUpdateNode22CalculateCurrentVectorERK23CAnimGraphUpdateContextPf */
	void CalculateFilterVectors(const class CMotionMatchingUpdateNode  *, const class CAnimGraphUpdateContext  &, float *, float *); /* linkage=_ZNK25CMotionMatchingUpdateNode22CalculateFilterVectorsERK23CAnimGraphUpdateContextPfS3_ */
	float CalculateCurrentCost(const class CMotionMatchingUpdateNode  *, class CAnimGraphUpdateContext &, const float  *, const float  *); /* linkage=_ZNK25CMotionMatchingUpdateNode20CalculateCurrentCostER23CAnimGraphUpdateContextPKfS3_ */
	class ClipSampleInfo FindBestMatch(const class CMotionMatchingUpdateNode  *, const class CAnimGraphUpdateContext  &, const float  *, const float  *, const float  *, const float  *, float &); /* linkage=_ZNK25CMotionMatchingUpdateNode13FindBestMatchERK23CAnimGraphUpdateContextPKfS4_S4_S4_Rf */
	class ClipSampleInfo FindBestMatchSIMD(const class CMotionMatchingUpdateNode  *, const class CAnimGraphUpdateContext  &, const float  *, const float  *, const float  *, const float  *, float &); /* linkage=_ZNK25CMotionMatchingUpdateNode17FindBestMatchSIMDERK23CAnimGraphUpdateContextPKfS4_S4_S4_Rf */
	/* <19767c3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.cpp:1283 */
	float CalculateCost(const class CMotionMatchingUpdateNode  *, const float  *, const float  *, const float  *); /* linkage=_ZNK25CMotionMatchingUpdateNode13CalculateCostEPKfS1_S1_ */
	void CalculateInterpolatedValues(const class CMotionMatchingUpdateNode  *, class ClipIndex, float, float *); /* linkage=_ZNK25CMotionMatchingUpdateNode27CalculateInterpolatedValuesE9ClipIndexfPf */
	void CalcFootStatusForSegment(const class CMotionMatchingUpdateNode  *, class CAnimGraphUpdateContext &, const class CMotionTransform  &, const class ClipSegment  &, class CStrideStatus &); /* linkage=_ZNK25CMotionMatchingUpdateNode24CalcFootStatusForSegmentER23CAnimGraphUpdateContextRK16CMotionTransformRK11ClipSegmentR13CStrideStatus */
	void CalcLastTransitionValues(const class CMotionMatchingUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK25CMotionMatchingUpdateNode24CalcLastTransitionValuesER23CAnimGraphUpdateContext */
	void CalcStartTransitionValues(const class CMotionMatchingUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK25CMotionMatchingUpdateNode25CalcStartTransitionValuesER23CAnimGraphUpdateContext */
	class MotionCorrection CalcMotionCorrection(const class CMotionMatchingUpdateNode  *, class CAnimGraphUpdateContext &, const float  *, const float  *); /* linkage=_ZNK25CMotionMatchingUpdateNode20CalcMotionCorrectionER23CAnimGraphUpdateContextPKfS3_ */
	void AccumulateTags(const class CMotionMatchingUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK25CMotionMatchingUpdateNode14AccumulateTagsER23CAnimGraphUpdateContext */
	bool ShouldPerformNewSearch(const class CMotionMatchingUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK25CMotionMatchingUpdateNode22ShouldPerformNewSearchER23CAnimGraphUpdateContext */
};

// <011259FE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchingupdatenode.h:83
void CMotionMatchingUpdateNode::CMotionMatchingUpdateNode(CAnimGraphInitContext& initContext, int nClipGroupCount, int nMetricCount)
{
} /* size: 0 */

