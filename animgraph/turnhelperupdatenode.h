
//
// animgraph/turnhelperupdatenode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 3
//	class: 1
//	struct: 1
//

// <0191C4E2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperupdatenode.h:11
void CTurnHelperInstanceData::CTurnHelperInstanceData()
{
} /* size: 0 */

// <0191C4C6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperupdatenode.h:11
inline void CTurnHelperInstanceData::CTurnHelperInstanceData()
{
} /* size: 0 */

// <0190E36D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperupdatenode.h:11
// member functions: 2
// member variables: 3
// static member variable: 1
// struct size: 12
struct CTurnHelperInstanceData {
	static struct datamap_t m_DataMap; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperupdatenode.h:13 */
	datamap_t* GetBaseMap(void);
	float m_turnAmount; /* 0 4 */
	float m_turnStartTime; /* 4 4 */
	float m_duration; /* 8 4 */
	void CTurnHelperInstanceData(CTurnHelperInstanceData* );
};

// <0190FA66> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperupdatenode.h:21
// member functions: 32
// member variables: 9
// vtable entries: 12
// class size: 48
class CTurnHelperUpdateNode : public CUnaryUpdateNode {
public:
	/* class CUnaryUpdateNode <ancestor>; */ /* 0 16 */
	void CTurnHelperUpdateNode(CTurnHelperUpdateNode* , CTurnHelperUpdateNode& );
	void CTurnHelperUpdateNode(CTurnHelperUpdateNode* , const CTurnHelperUpdateNode& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperupdatenode.cpp:17 */
	void CTurnHelperUpdateNode(CTurnHelperUpdateNode* , CAnimGraphInitContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperupdatenode.cpp:24 */
	virtual void PostUpdate(const CTurnHelperUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperupdatenode.cpp:46 */
	virtual PoseHandle GetPoseHandle(const CTurnHelperUpdateNode* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperupdatenode.cpp:59 */
	virtual float GetCycle(const CTurnHelperUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperupdatenode.cpp:80 */
	virtual float GetDuration(const CTurnHelperUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperupdatenode.cpp:93 */
	virtual CMotionTransform GetTotalMovement(const CTurnHelperUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperupdatenode.cpp:107 */
	virtual CMotionTransform GetRemainingMovement(const CTurnHelperUpdateNode* , CAnimGraphUpdateContext& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperupdatenode.cpp:125 */
	virtual void Reset(const CTurnHelperUpdateNode* , CAnimGraphUpdateContext& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperupdatenode.cpp:151 */
	virtual bool IsFinished(const CTurnHelperUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperupdatenode.cpp:168 */
	virtual void OnSave(const CTurnHelperUpdateNode* , const CAnimGraphUpdateContext& , ISave* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperupdatenode.cpp:175 */
	virtual void OnRestore(const CTurnHelperUpdateNode* , CAnimGraphUpdateContext& , IRestore* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperupdatenode.cpp:182 */
	virtual CRootMotion CalculateRootMotion(const CTurnHelperUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperupdatenode.cpp:198 */
	virtual void CalculateFootMotion(const CTurnHelperUpdateNode* , CAnimGraphUpdateContext& , const CMotionTransform& , CStrideStatus& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperupdatenode.cpp:221 */
	float CalcTurnAmount(const CTurnHelperUpdateNode* , CAnimGraphUpdateContext& , float, float);
	CPackedHandle<CTurnHelperInstanceData> m_hInstanceData; /* 16 4 */
	AnimValueSource m_facingTarget; /* 20 4 */
	float m_turnStartTimeOffset; /* 24 4 */
	float m_turnDuration; /* 28 4 */
	bool m_bMatchChildDuration; /* 32 1 */
	float m_manualTurnOffset; /* 36 4 */
	bool m_bUseManualTurnOffset; /* 40 1 */
	CAnimParamHandle m_facingTargetParam; /* 41 2 */
	void CTurnHelperUpdateNode(class CTurnHelperUpdateNode *, class CTurnHelperUpdateNode &); /* linkage=_ZN21CTurnHelperUpdateNodeC4EOS_ */
	void CTurnHelperUpdateNode(class CTurnHelperUpdateNode *, const class CTurnHelperUpdateNode  &); /* linkage=_ZN21CTurnHelperUpdateNodeC4ERKS_ */
	void CTurnHelperUpdateNode(class CTurnHelperUpdateNode *, class CAnimGraphInitContext &); /* linkage=_ZN21CTurnHelperUpdateNodeC4ER21CAnimGraphInitContext */
	virtual void PostUpdate(const class CTurnHelperUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK21CTurnHelperUpdateNode10PostUpdateER23CAnimGraphUpdateContext */
	virtual PoseHandle GetPoseHandle(const class CTurnHelperUpdateNode  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK21CTurnHelperUpdateNode13GetPoseHandleERK23CAnimGraphUpdateContext */
	/* <1974794> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperupdatenode.cpp:59 */
	virtual float GetCycle(const class CTurnHelperUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK21CTurnHelperUpdateNode8GetCycleER23CAnimGraphUpdateContext */
	virtual float GetDuration(const class CTurnHelperUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK21CTurnHelperUpdateNode11GetDurationER23CAnimGraphUpdateContext */
	virtual class CMotionTransform GetTotalMovement(const class CTurnHelperUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK21CTurnHelperUpdateNode16GetTotalMovementER23CAnimGraphUpdateContext */
	virtual class CMotionTransform GetRemainingMovement(const class CTurnHelperUpdateNode  *, class CAnimGraphUpdateContext &, float); /* linkage=_ZNK21CTurnHelperUpdateNode20GetRemainingMovementER23CAnimGraphUpdateContextf */
	virtual void Reset(const class CTurnHelperUpdateNode  *, class CAnimGraphUpdateContext &, float); /* linkage=_ZNK21CTurnHelperUpdateNode5ResetER23CAnimGraphUpdateContextf */
	virtual bool IsFinished(const class CTurnHelperUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK21CTurnHelperUpdateNode10IsFinishedER23CAnimGraphUpdateContext */
	virtual void OnSave(const class CTurnHelperUpdateNode  *, const class CAnimGraphUpdateContext  &, class ISave *); /* linkage=_ZNK21CTurnHelperUpdateNode6OnSaveERK23CAnimGraphUpdateContextP5ISave */
	virtual void OnRestore(const class CTurnHelperUpdateNode  *, class CAnimGraphUpdateContext &, class IRestore *); /* linkage=_ZNK21CTurnHelperUpdateNode9OnRestoreER23CAnimGraphUpdateContextP8IRestore */
	virtual class CRootMotion CalculateRootMotion(const class CTurnHelperUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK21CTurnHelperUpdateNode19CalculateRootMotionER23CAnimGraphUpdateContext */
	/* <1977837> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperupdatenode.cpp:198 */
	virtual void CalculateFootMotion(const class CTurnHelperUpdateNode  *, class CAnimGraphUpdateContext &, const class CMotionTransform  &, class CStrideStatus &); /* linkage=_ZNK21CTurnHelperUpdateNode19CalculateFootMotionER23CAnimGraphUpdateContextRK16CMotionTransformR13CStrideStatus */
	float CalcTurnAmount(const class CTurnHelperUpdateNode  *, class CAnimGraphUpdateContext &, float, float); /* linkage=_ZNK21CTurnHelperUpdateNode14CalcTurnAmountER23CAnimGraphUpdateContextff */
};

// <01244B3A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperupdatenode.h:25
void CTurnHelperUpdateNode::CTurnHelperUpdateNode(CAnimGraphInitContext& initContext)
{
} /* size: 0 */

