
//
// animgraph/choiceupdatenode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 3
//	class: 1
//	struct: 1
//

// <017EFA61> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.h:41
void CChoiceInstanceData::CChoiceInstanceData()
{
} /* size: 0 */

// <017EFA45> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.h:41
inline void CChoiceInstanceData::CChoiceInstanceData()
{
} /* size: 0 */

// <017D63F8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.h:41
// member functions: 2
// member variables: 7
// static member variable: 1
// struct size: 36
struct CChoiceInstanceData {
	static struct datamap_t m_DataMap; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.h:43 */
	datamap_t* GetBaseMap(void);
	float m_poseWeights[2]; /* 0 8 */
	CRelativeArray<bool> m_chosenFlags; /* 8 8 */
	int m_currentChoice; /* 16 4 */
	int m_previousChoice; /* 20 4 */
	float m_flClipStartTime; /* 24 4 */
	float m_choicePreviousCycle; /* 28 4 */
	PoseHandle m_hPose; /* 32 1 */
	void CChoiceInstanceData(CChoiceInstanceData* );
};

// <017E502C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.h:69
// member functions: 52
// member variables: 12
// vtable entries: 19
// class size: 64
class CChoiceUpdateNode : public CAnimUpdateNodeBase {
public:
	/* class CAnimUpdateNodeBase <ancestor>; */ /* 0 16 */
	void CChoiceUpdateNode(CChoiceUpdateNode* , CChoiceUpdateNode& );
	void CChoiceUpdateNode(CChoiceUpdateNode* , const CChoiceUpdateNode& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:19 */
	void CChoiceUpdateNode(CChoiceUpdateNode* , CAnimGraphInitContext& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:40 */
	virtual int GetChildCount(const CChoiceUpdateNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:46 */
	virtual const CAnimUpdateNodeBase* GetChild(const CChoiceUpdateNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:59 */
	virtual bool IsChildActive(const CChoiceUpdateNode* , CAnimGraphUpdateContext& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:74 */
	virtual bool IsChildWaning(const CChoiceUpdateNode* , CAnimGraphUpdateContext& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:80 */
	virtual void Update(const CChoiceUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:146 */
	virtual void EnqueueChildren(const CChoiceUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:164 */
	virtual void CreatePoseOp(const CChoiceUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:210 */
	virtual PoseHandle GetPoseHandle(const CChoiceUpdateNode* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:217 */
	virtual float GetCycle(const CChoiceUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:231 */
	virtual float GetDuration(const CChoiceUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:245 */
	virtual CMotionTransform GetTotalMovement(const CChoiceUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:259 */
	virtual CMotionTransform GetRemainingMovement(const CChoiceUpdateNode* , CAnimGraphUpdateContext& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:273 */
	virtual void Reset(const CChoiceUpdateNode* , CAnimGraphUpdateContext& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:303 */
	virtual bool IsFinished(const CChoiceUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:317 */
	virtual float GetTimeTillFinished(const CChoiceUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:334 */
	virtual void OnSave(const CChoiceUpdateNode* , const CAnimGraphUpdateContext& , ISave* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:341 */
	virtual void OnRestore(const CChoiceUpdateNode* , CAnimGraphUpdateContext& , IRestore* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:358 */
	virtual CRootMotion CalculateRootMotion(const CChoiceUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:394 */
	virtual void CalculateFootMotion(const CChoiceUpdateNode* , CAnimGraphUpdateContext& , const CMotionTransform& , CStrideStatus& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:422 */
	void ChooseNewChild(const CChoiceUpdateNode* , CAnimGraphUpdateContext& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:493 */
	int GetCurrentChoice(const CChoiceUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:499 */
	int PickWeightedRandom(const CChoiceUpdateNode* , CAnimGraphUpdateContext& , bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:525 */
	int PickIterateRandom(const CChoiceUpdateNode* , CAnimGraphUpdateContext& );
	CRelativeObjectArray<const CAnimUpdateNodeBase> m_children; /* 12 8 */
	CRelativeArray<float> m_weights; /* 20 8 */
	CRelativeArray<float> m_blendTimes; /* 28 8 */
	ChoiceMethod m_choiceMethod; /* 36 4 */
	ChoiceChangeMethod m_choiceChangeMethod; /* 40 4 */
	ChoiceBlendMethod m_blendMethod; /* 44 4 */
	float m_blendTime; /* 48 4 */
	bool m_bCrossFade; /* 52 1 */
	bool m_bResetChosen; /* 53 1 */
	bool m_bDontResetSameSelection; /* 54 1 */
	CPackedHandle<CChoiceInstanceData> m_runtimeVars; /* 56 4 */
	void CChoiceUpdateNode(class CChoiceUpdateNode *, class CChoiceUpdateNode &); /* linkage=_ZN17CChoiceUpdateNodeC4EOS_ */
	void CChoiceUpdateNode(class CChoiceUpdateNode *, const class CChoiceUpdateNode  &); /* linkage=_ZN17CChoiceUpdateNodeC4ERKS_ */
	void CChoiceUpdateNode(class CChoiceUpdateNode *, class CAnimGraphInitContext &, int); /* linkage=_ZN17CChoiceUpdateNodeC4ER21CAnimGraphInitContexti */
	virtual int GetChildCount(const class CChoiceUpdateNode  *); /* linkage=_ZNK17CChoiceUpdateNode13GetChildCountEv */
	virtual const class CAnimUpdateNodeBase  * GetChild(const class CChoiceUpdateNode  *, int); /* linkage=_ZNK17CChoiceUpdateNode8GetChildEi */
	virtual bool IsChildActive(const class CChoiceUpdateNode  *, class CAnimGraphUpdateContext &, int); /* linkage=_ZNK17CChoiceUpdateNode13IsChildActiveER23CAnimGraphUpdateContexti */
	virtual bool IsChildWaning(const class CChoiceUpdateNode  *, class CAnimGraphUpdateContext &, int); /* linkage=_ZNK17CChoiceUpdateNode13IsChildWaningER23CAnimGraphUpdateContexti */
	virtual void Update(const class CChoiceUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK17CChoiceUpdateNode6UpdateER23CAnimGraphUpdateContext */
	virtual void EnqueueChildren(const class CChoiceUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK17CChoiceUpdateNode15EnqueueChildrenER23CAnimGraphUpdateContext */
	virtual void CreatePoseOp(const class CChoiceUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK17CChoiceUpdateNode12CreatePoseOpER23CAnimGraphUpdateContext */
	virtual PoseHandle GetPoseHandle(const class CChoiceUpdateNode  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK17CChoiceUpdateNode13GetPoseHandleERK23CAnimGraphUpdateContext */
	virtual float GetCycle(const class CChoiceUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK17CChoiceUpdateNode8GetCycleER23CAnimGraphUpdateContext */
	virtual float GetDuration(const class CChoiceUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK17CChoiceUpdateNode11GetDurationER23CAnimGraphUpdateContext */
	virtual class CMotionTransform GetTotalMovement(const class CChoiceUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK17CChoiceUpdateNode16GetTotalMovementER23CAnimGraphUpdateContext */
	virtual class CMotionTransform GetRemainingMovement(const class CChoiceUpdateNode  *, class CAnimGraphUpdateContext &, float); /* linkage=_ZNK17CChoiceUpdateNode20GetRemainingMovementER23CAnimGraphUpdateContextf */
	virtual void Reset(const class CChoiceUpdateNode  *, class CAnimGraphUpdateContext &, float); /* linkage=_ZNK17CChoiceUpdateNode5ResetER23CAnimGraphUpdateContextf */
	virtual bool IsFinished(const class CChoiceUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK17CChoiceUpdateNode10IsFinishedER23CAnimGraphUpdateContext */
	virtual float GetTimeTillFinished(const class CChoiceUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK17CChoiceUpdateNode19GetTimeTillFinishedER23CAnimGraphUpdateContext */
	virtual void OnSave(const class CChoiceUpdateNode  *, const class CAnimGraphUpdateContext  &, class ISave *); /* linkage=_ZNK17CChoiceUpdateNode6OnSaveERK23CAnimGraphUpdateContextP5ISave */
	virtual void OnRestore(const class CChoiceUpdateNode  *, class CAnimGraphUpdateContext &, class IRestore *); /* linkage=_ZNK17CChoiceUpdateNode9OnRestoreER23CAnimGraphUpdateContextP8IRestore */
	virtual class CRootMotion CalculateRootMotion(const class CChoiceUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK17CChoiceUpdateNode19CalculateRootMotionER23CAnimGraphUpdateContext */
	virtual void CalculateFootMotion(const class CChoiceUpdateNode  *, class CAnimGraphUpdateContext &, const class CMotionTransform  &, class CStrideStatus &); /* linkage=_ZNK17CChoiceUpdateNode19CalculateFootMotionER23CAnimGraphUpdateContextRK16CMotionTransformR13CStrideStatus */
	/* <186b1dd> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:422 */
	void ChooseNewChild(const class CChoiceUpdateNode  *, class CAnimGraphUpdateContext &, float); /* linkage=_ZNK17CChoiceUpdateNode14ChooseNewChildER23CAnimGraphUpdateContextf */
	/* <186a3c8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:493 */
	int GetCurrentChoice(const class CChoiceUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK17CChoiceUpdateNode16GetCurrentChoiceER23CAnimGraphUpdateContext */
	int PickWeightedRandom(const class CChoiceUpdateNode  *, class CAnimGraphUpdateContext &, bool); /* linkage=_ZNK17CChoiceUpdateNode18PickWeightedRandomER23CAnimGraphUpdateContextb */
	int PickIterateRandom(const class CChoiceUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK17CChoiceUpdateNode17PickIterateRandomER23CAnimGraphUpdateContext */
};

// <01037DDE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.h:73
void CChoiceUpdateNode::CChoiceUpdateNode(CAnimGraphInitContext& initContext, int childCount)
{
} /* size: 0 */

