
//
// animgraph/selectorupdatenode.h
//
//	referenced by: libanimationsystem.so
//
//	function: 1
//	class: 1
//	struct: 1
//

// <018D82DE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.h:13
// member functions: 2
// member variables: 6
// static member variable: 1
// struct size: 28
struct SelectorInstanceData_t {
	static struct datamap_t m_DataMap; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.h:15 */
	datamap_t* GetBaseMap(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.h:17 */
	void SelectorInstanceData_t(SelectorInstanceData_t* , int, CSaveablePackedData& );
	CRelativeArray<float> m_weights; /* 0 8 */
	float m_currentIndexStartTime; /* 8 4 */
	int m_currentIndex; /* 12 4 */
	int m_previousIndex; /* 16 4 */
	int m_resetCount; /* 20 4 */
	PoseHandle m_hPose; /* 24 1 */
};

// <01911DD8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.h:45
// member functions: 58
// member variables: 12
// vtable entries: 19
// class size: 72
class CSelectorUpdateNode : public CAnimUpdateNodeBase {
public:
	/* class CAnimUpdateNodeBase <ancestor>; */ /* 0 0 */
	void CSelectorUpdateNode(CSelectorUpdateNode* , CSelectorUpdateNode& );
	void CSelectorUpdateNode(CSelectorUpdateNode* , const CSelectorUpdateNode& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:35 */
	void CSelectorUpdateNode(CSelectorUpdateNode* , CAnimGraphInitContext& , int, CAnimParamHandle, const CBlendCurve& , float, SelectorTagBehavior_t, bool, bool, int, int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:79 */
	virtual int GetChildCount(const CSelectorUpdateNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:85 */
	virtual const CAnimUpdateNodeBase* GetChild(const CSelectorUpdateNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:98 */
	virtual bool IsChildActive(const CSelectorUpdateNode* , CAnimGraphUpdateContext& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:112 */
	virtual bool IsChildWaning(const CSelectorUpdateNode* , CAnimGraphUpdateContext& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:124 */
	virtual void Update(const CSelectorUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:180 */
	virtual void EnqueueChildren(const CSelectorUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:205 */
	virtual void CreatePoseOp(const CSelectorUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:264 */
	virtual PoseHandle GetPoseHandle(const CSelectorUpdateNode* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:274 */
	virtual float GetCycle(const CSelectorUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:288 */
	virtual float GetDuration(const CSelectorUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:302 */
	virtual CMotionTransform GetTotalMovement(const CSelectorUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:316 */
	virtual CMotionTransform GetRemainingMovement(const CSelectorUpdateNode* , CAnimGraphUpdateContext& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:330 */
	virtual void Reset(const CSelectorUpdateNode* , CAnimGraphUpdateContext& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:359 */
	virtual bool IsFinished(const CSelectorUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:371 */
	virtual float GetTimeTillFinished(const CSelectorUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:383 */
	virtual void OnSave(const CSelectorUpdateNode* , const CAnimGraphUpdateContext& , ISave* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:390 */
	virtual void OnRestore(const CSelectorUpdateNode* , CAnimGraphUpdateContext& , IRestore* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:463 */
	void UpdateCurrentIndex(const CSelectorUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:493 */
	void UpdateBlendWeights(const CSelectorUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:587 */
	const CAnimUpdateNodeBase* GetCurrentChild(const CSelectorUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:599 */
	int CalculateCurrentIndex(const CSelectorUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:620 */
	void SetChild(CSelectorUpdateNode* , int, const CAnimUpdateNodeBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:626 */
	void SetTag(CSelectorUpdateNode* , int, int8);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:632 */
	void OnSelectionChanged(const CSelectorUpdateNode* , CAnimGraphUpdateContext& , int);
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:397 */
	virtual CRootMotion CalculateRootMotion(const CSelectorUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:425 */
	virtual void CalculateFootMotion(const CSelectorUpdateNode* , CAnimGraphUpdateContext& , const CMotionTransform& , CStrideStatus& );
	CRelativeArray<const CAnimUpdateNodeBase*> m_children; /* 12 8 */
	CRelativeArray<signed char> m_tags; /* 20 8 */
	CPackedHandle<SelectorInstanceData_t> m_hInstData; /* 28 4 */
	CBlendCurve m_blendCurve; /* 32 16 */
	float m_flBlendTime; /* 48 4 */
	CAnimParamHandle m_hParameter; /* 52 2 */
	SelectorTagBehavior_t m_eTagBehavior; /* 56 4 */
	bool m_bResetOnChange; /* 60 1 */
	bool m_bSyncCyclesOnChange; /* 61 1 */
	int m_nIntMinValue; /* 64 4 */
	int m_nIntMaxValue; /* 68 4 */
	void CSelectorUpdateNode(class CSelectorUpdateNode *, class CSelectorUpdateNode &); /* linkage=_ZN19CSelectorUpdateNodeC4EOS_ */
	void CSelectorUpdateNode(class CSelectorUpdateNode *, const class CSelectorUpdateNode  &); /* linkage=_ZN19CSelectorUpdateNodeC4ERKS_ */
	void CSelectorUpdateNode(class CSelectorUpdateNode *, class CAnimGraphInitContext &, int, class CAnimParamHandle, const class CBlendCurve  &, float, enum SelectorTagBehavior_t, bool, bool, int, int); /* linkage=_ZN19CSelectorUpdateNodeC4ER21CAnimGraphInitContexti16CAnimParamHandleRK11CBlendCurvef21SelectorTagBehavior_tbbii */
	virtual int GetChildCount(const class CSelectorUpdateNode  *); /* linkage=_ZNK19CSelectorUpdateNode13GetChildCountEv */
	/* <19762ad> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:85 */
	virtual const class CAnimUpdateNodeBase  * GetChild(const class CSelectorUpdateNode  *, int); /* linkage=_ZNK19CSelectorUpdateNode8GetChildEi */
	virtual bool IsChildActive(const class CSelectorUpdateNode  *, class CAnimGraphUpdateContext &, int); /* linkage=_ZNK19CSelectorUpdateNode13IsChildActiveER23CAnimGraphUpdateContexti */
	/* <197589b> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:112 */
	virtual bool IsChildWaning(const class CSelectorUpdateNode  *, class CAnimGraphUpdateContext &, int); /* linkage=_ZNK19CSelectorUpdateNode13IsChildWaningER23CAnimGraphUpdateContexti */
	virtual void Update(const class CSelectorUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK19CSelectorUpdateNode6UpdateER23CAnimGraphUpdateContext */
	virtual void EnqueueChildren(const class CSelectorUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK19CSelectorUpdateNode15EnqueueChildrenER23CAnimGraphUpdateContext */
	virtual void CreatePoseOp(const class CSelectorUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK19CSelectorUpdateNode12CreatePoseOpER23CAnimGraphUpdateContext */
	virtual PoseHandle GetPoseHandle(const class CSelectorUpdateNode  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK19CSelectorUpdateNode13GetPoseHandleERK23CAnimGraphUpdateContext */
	virtual float GetCycle(const class CSelectorUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK19CSelectorUpdateNode8GetCycleER23CAnimGraphUpdateContext */
	virtual float GetDuration(const class CSelectorUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK19CSelectorUpdateNode11GetDurationER23CAnimGraphUpdateContext */
	virtual class CMotionTransform GetTotalMovement(const class CSelectorUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK19CSelectorUpdateNode16GetTotalMovementER23CAnimGraphUpdateContext */
	virtual class CMotionTransform GetRemainingMovement(const class CSelectorUpdateNode  *, class CAnimGraphUpdateContext &, float); /* linkage=_ZNK19CSelectorUpdateNode20GetRemainingMovementER23CAnimGraphUpdateContextf */
	virtual void Reset(const class CSelectorUpdateNode  *, class CAnimGraphUpdateContext &, float); /* linkage=_ZNK19CSelectorUpdateNode5ResetER23CAnimGraphUpdateContextf */
	virtual bool IsFinished(const class CSelectorUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK19CSelectorUpdateNode10IsFinishedER23CAnimGraphUpdateContext */
	virtual float GetTimeTillFinished(const class CSelectorUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK19CSelectorUpdateNode19GetTimeTillFinishedER23CAnimGraphUpdateContext */
	virtual void OnSave(const class CSelectorUpdateNode  *, const class CAnimGraphUpdateContext  &, class ISave *); /* linkage=_ZNK19CSelectorUpdateNode6OnSaveERK23CAnimGraphUpdateContextP5ISave */
	virtual void OnRestore(const class CSelectorUpdateNode  *, class CAnimGraphUpdateContext &, class IRestore *); /* linkage=_ZNK19CSelectorUpdateNode9OnRestoreER23CAnimGraphUpdateContextP8IRestore */
	void UpdateCurrentIndex(const class CSelectorUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK19CSelectorUpdateNode18UpdateCurrentIndexER23CAnimGraphUpdateContext */
	void UpdateBlendWeights(const class CSelectorUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK19CSelectorUpdateNode18UpdateBlendWeightsER23CAnimGraphUpdateContext */
	const class CAnimUpdateNodeBase  * GetCurrentChild(const class CSelectorUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK19CSelectorUpdateNode15GetCurrentChildER23CAnimGraphUpdateContext */
	int CalculateCurrentIndex(const class CSelectorUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK19CSelectorUpdateNode21CalculateCurrentIndexER23CAnimGraphUpdateContext */
	void SetChild(class CSelectorUpdateNode *, int, const class CAnimUpdateNodeBase  *); /* linkage=_ZN19CSelectorUpdateNode8SetChildEiPK19CAnimUpdateNodeBase */
	void SetTag(class CSelectorUpdateNode *, int, int8); /* linkage=_ZN19CSelectorUpdateNode6SetTagEia */
	void OnSelectionChanged(const class CSelectorUpdateNode  *, class CAnimGraphUpdateContext &, int); /* linkage=_ZNK19CSelectorUpdateNode18OnSelectionChangedER23CAnimGraphUpdateContexti */
	virtual class CRootMotion CalculateRootMotion(const class CSelectorUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK19CSelectorUpdateNode19CalculateRootMotionER23CAnimGraphUpdateContext */
	virtual void CalculateFootMotion(const class CSelectorUpdateNode  *, class CAnimGraphUpdateContext &, const class CMotionTransform  &, class CStrideStatus &); /* linkage=_ZNK19CSelectorUpdateNode19CalculateFootMotionER23CAnimGraphUpdateContextRK16CMotionTransformR13CStrideStatus */
};

// <01125746> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.h:49
void CSelectorUpdateNode::CSelectorUpdateNode(CAnimGraphInitContext& initContext, int nChildCount, CAnimParamHandle hParameter, const CBlendCurve& blendCurve, float flBlendTime, SelectorTagBehavior_t tagBehavior, bool bResetOnChange, bool bSyncCyclesOnChange, int nIntMinValue, int nIntMaxValue)
{
} /* size: 0 */

