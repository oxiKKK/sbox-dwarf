
//
// animgraph/directionalblendupdatenode.h
//
//	referenced by: libanimationsystem.so
//
//	function: 1
//	class: 1
//	struct: 1
//

// <017D75A2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendupdatenode.h:30
// member functions: 2
// member variables: 10
// static member variable: 1
// struct size: 56
struct CDirectionalBlendInstanceData {
	static struct datamap_t m_DataMap; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendupdatenode.h:32 */
	datamap_t* GetBaseMap(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendupdatenode.h:34 */
	void CDirectionalBlendInstanceData(CDirectionalBlendInstanceData* );
	CDampedValue m_dampedValue; /* 0 12 */
	int m_currentIndices[2]; /* 12 8 */
	float m_poseWeights[2]; /* 20 8 */
	float m_flCycle; /* 28 4 */
	float m_flPrevCycle; /* 32 4 */
	float m_flPlaybackRate; /* 36 4 */
	float m_flCycleZeroTime; /* 40 4 */
	float m_resetCycleValue; /* 44 4 */
	float m_resetCount; /* 48 4 */
	PoseHandle m_hPose; /* 52 1 */
};

// <017E4604> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendupdatenode.h:51
// member functions: 38
// member variables: 10
// vtable entries: 14
// class size: 104
class CDirectionalBlendUpdateNode : public CLeafUpdateNode {
public:
	/* class CLeafUpdateNode <ancestor>; */ /* 0 16 */
	void CDirectionalBlendUpdateNode(CDirectionalBlendUpdateNode* , CDirectionalBlendUpdateNode& );
	void CDirectionalBlendUpdateNode(CDirectionalBlendUpdateNode* , const CDirectionalBlendUpdateNode& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendupdatenode.cpp:46 */
	void CDirectionalBlendUpdateNode(CDirectionalBlendUpdateNode* , CAnimGraphInitContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendupdatenode.cpp:54 */
	virtual void Update(const CDirectionalBlendUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendupdatenode.cpp:143 */
	virtual void CreatePoseOp(const CDirectionalBlendUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendupdatenode.cpp:170 */
	virtual PoseHandle GetPoseHandle(const CDirectionalBlendUpdateNode* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendupdatenode.cpp:177 */
	virtual float GetCycle(const CDirectionalBlendUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendupdatenode.cpp:183 */
	virtual float GetDuration(const CDirectionalBlendUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendupdatenode.cpp:196 */
	virtual CMotionTransform GetTotalMovement(const CDirectionalBlendUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendupdatenode.cpp:231 */
	virtual CMotionTransform GetRemainingMovement(const CDirectionalBlendUpdateNode* , CAnimGraphUpdateContext& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendupdatenode.cpp:268 */
	virtual void Reset(const CDirectionalBlendUpdateNode* , CAnimGraphUpdateContext& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendupdatenode.cpp:314 */
	virtual bool IsFinished(const CDirectionalBlendUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendupdatenode.cpp:322 */
	virtual float GetTimeTillFinished(const CDirectionalBlendUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendupdatenode.cpp:337 */
	virtual void OnSave(const CDirectionalBlendUpdateNode* , const CAnimGraphUpdateContext& , ISave* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendupdatenode.cpp:344 */
	virtual void OnRestore(const CDirectionalBlendUpdateNode* , CAnimGraphUpdateContext& , IRestore* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendupdatenode.cpp:351 */
	virtual CRootMotion CalculateRootMotion(const CDirectionalBlendUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendupdatenode.cpp:394 */
	virtual void CalculateFootMotion(const CDirectionalBlendUpdateNode* , CAnimGraphUpdateContext& , const CMotionTransform& , CStrideStatus& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendupdatenode.cpp:436 */
	void UpdateWeights(const CDirectionalBlendUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendupdatenode.cpp:466 */
	BlendWeights CalcBlendWeights(const CDirectionalBlendUpdateNode* , CAnimGraphUpdateContext& , float);
	CPackedHandle<CDirectionalBlendInstanceData> m_hInstanceData; /* 12 4 */
	HSequence m_hSequences[8]; /* 16 32 */
	CAnimInputDamping m_damping; /* 48 0 */
	AnimValueSource m_blendValueSource; /* 80 4 */
	CAnimParamHandle m_paramIndex; /* 84 2 */
	float m_playbackSpeed; /* 88 4 */
	float m_duration; /* 92 4 */
	bool m_bLoop; /* 96 1 */
	bool m_bLockBlendOnReset; /* 97 1 */
	void CDirectionalBlendUpdateNode(class CDirectionalBlendUpdateNode *, class CDirectionalBlendUpdateNode &); /* linkage=_ZN27CDirectionalBlendUpdateNodeC4EOS_ */
	void CDirectionalBlendUpdateNode(class CDirectionalBlendUpdateNode *, const class CDirectionalBlendUpdateNode  &); /* linkage=_ZN27CDirectionalBlendUpdateNodeC4ERKS_ */
	void CDirectionalBlendUpdateNode(class CDirectionalBlendUpdateNode *, class CAnimGraphInitContext &); /* linkage=_ZN27CDirectionalBlendUpdateNodeC4ER21CAnimGraphInitContext */
	virtual void Update(const class CDirectionalBlendUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK27CDirectionalBlendUpdateNode6UpdateER23CAnimGraphUpdateContext */
	virtual void CreatePoseOp(const class CDirectionalBlendUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK27CDirectionalBlendUpdateNode12CreatePoseOpER23CAnimGraphUpdateContext */
	virtual PoseHandle GetPoseHandle(const class CDirectionalBlendUpdateNode  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK27CDirectionalBlendUpdateNode13GetPoseHandleERK23CAnimGraphUpdateContext */
	virtual float GetCycle(const class CDirectionalBlendUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK27CDirectionalBlendUpdateNode8GetCycleER23CAnimGraphUpdateContext */
	/* <1866108> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendupdatenode.cpp:183 */
	virtual float GetDuration(const class CDirectionalBlendUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK27CDirectionalBlendUpdateNode11GetDurationER23CAnimGraphUpdateContext */
	virtual class CMotionTransform GetTotalMovement(const class CDirectionalBlendUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK27CDirectionalBlendUpdateNode16GetTotalMovementER23CAnimGraphUpdateContext */
	virtual class CMotionTransform GetRemainingMovement(const class CDirectionalBlendUpdateNode  *, class CAnimGraphUpdateContext &, float); /* linkage=_ZNK27CDirectionalBlendUpdateNode20GetRemainingMovementER23CAnimGraphUpdateContextf */
	virtual void Reset(const class CDirectionalBlendUpdateNode  *, class CAnimGraphUpdateContext &, float); /* linkage=_ZNK27CDirectionalBlendUpdateNode5ResetER23CAnimGraphUpdateContextf */
	virtual bool IsFinished(const class CDirectionalBlendUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK27CDirectionalBlendUpdateNode10IsFinishedER23CAnimGraphUpdateContext */
	virtual float GetTimeTillFinished(const class CDirectionalBlendUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK27CDirectionalBlendUpdateNode19GetTimeTillFinishedER23CAnimGraphUpdateContext */
	virtual void OnSave(const class CDirectionalBlendUpdateNode  *, const class CAnimGraphUpdateContext  &, class ISave *); /* linkage=_ZNK27CDirectionalBlendUpdateNode6OnSaveERK23CAnimGraphUpdateContextP5ISave */
	virtual void OnRestore(const class CDirectionalBlendUpdateNode  *, class CAnimGraphUpdateContext &, class IRestore *); /* linkage=_ZNK27CDirectionalBlendUpdateNode9OnRestoreER23CAnimGraphUpdateContextP8IRestore */
	virtual class CRootMotion CalculateRootMotion(const class CDirectionalBlendUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK27CDirectionalBlendUpdateNode19CalculateRootMotionER23CAnimGraphUpdateContext */
	virtual void CalculateFootMotion(const class CDirectionalBlendUpdateNode  *, class CAnimGraphUpdateContext &, const class CMotionTransform  &, class CStrideStatus &); /* linkage=_ZNK27CDirectionalBlendUpdateNode19CalculateFootMotionER23CAnimGraphUpdateContextRK16CMotionTransformR13CStrideStatus */
	void UpdateWeights(const class CDirectionalBlendUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK27CDirectionalBlendUpdateNode13UpdateWeightsER23CAnimGraphUpdateContext */
	class BlendWeights CalcBlendWeights(const class CDirectionalBlendUpdateNode  *, class CAnimGraphUpdateContext &, float); /* linkage=_ZNK27CDirectionalBlendUpdateNode16CalcBlendWeightsER23CAnimGraphUpdateContextf */
};

// <01037CE2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendupdatenode.h:55
void CDirectionalBlendUpdateNode::CDirectionalBlendUpdateNode(CAnimGraphInitContext& initContext)
{
} /* size: 0 */

