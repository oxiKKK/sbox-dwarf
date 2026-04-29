
//
// animgraph/followpathupdatenode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 3
//	class: 1
//	struct: 1
//

// <017EF37C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathupdatenode.h:12
void CFollowPathInstanceData::CFollowPathInstanceData()
{
} /* size: 0 */

// <017EF360> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathupdatenode.h:12
inline void CFollowPathInstanceData::CFollowPathInstanceData()
{
} /* size: 0 */

// <017D8277> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathupdatenode.h:12
// member functions: 2
// member variables: 6
// static member variable: 1
// struct size: 36
struct CFollowPathInstanceData {
	static struct datamap_t m_DataMap; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathupdatenode.h:14 */
	datamap_t* GetBaseMap(void);
	CRelativeArray<CMotionTransform> m_xLastPredictedTransformsDeltas; /* 0 8 */
	CDampedValue m_dampedTurnValue; /* 8 12 */
	float m_flTurnAmount; /* 20 4 */
	float m_flPredictionScale; /* 24 4 */
	float m_flLastPathTime; /* 28 4 */
	PoseHandle m_hPose; /* 32 1 */
	void CFollowPathInstanceData(CFollowPathInstanceData* );
};

// <017E3D98> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathupdatenode.h:27
// member functions: 22
// member variables: 15
// vtable entries: 8
// class size: 96
class CFollowPathUpdateNode : public CUnaryUpdateNode {
public:
	/* class CUnaryUpdateNode <ancestor>; */ /* 0 0 */
	void CFollowPathUpdateNode(CFollowPathUpdateNode* , CFollowPathUpdateNode& );
	void CFollowPathUpdateNode(CFollowPathUpdateNode* , const CFollowPathUpdateNode& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathupdatenode.cpp:24 */
	void CFollowPathUpdateNode(CFollowPathUpdateNode* , CAnimGraphInitContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathupdatenode.cpp:34 */
	virtual void Update(const CFollowPathUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathupdatenode.cpp:61 */
	virtual void PostUpdate(const CFollowPathUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathupdatenode.cpp:140 */
	virtual PoseHandle GetPoseHandle(const CFollowPathUpdateNode* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathupdatenode.cpp:153 */
	virtual void Reset(const CFollowPathUpdateNode* , CAnimGraphUpdateContext& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathupdatenode.cpp:165 */
	virtual void OnSave(const CFollowPathUpdateNode* , const CAnimGraphUpdateContext& , ISave* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathupdatenode.cpp:172 */
	virtual void OnRestore(const CFollowPathUpdateNode* , CAnimGraphUpdateContext& , IRestore* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathupdatenode.cpp:179 */
	virtual CRootMotion CalculateRootMotion(const CFollowPathUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathupdatenode.cpp:233 */
	virtual void CalculateFootMotion(const CFollowPathUpdateNode* , CAnimGraphUpdateContext& , const CMotionTransform& , CStrideStatus& );
	CPackedHandle<CFollowPathInstanceData> m_hInstanceData; /* 16 4 */
	float m_flBlendOutTime; /* 20 4 */
	bool m_bBlockNonPathMovement; /* 24 1 */
	bool m_bStopFeetAtGoal; /* 25 1 */
	bool m_bScaleSpeed; /* 26 1 */
	float m_flScale; /* 28 4 */
	float m_flMinAngle; /* 32 4 */
	float m_flMaxAngle; /* 36 4 */
	float m_flSpeedScaleBlending; /* 40 4 */
	CAnimInputDamping m_turnDamping; /* 48 0 */
	AnimValueSource m_facingTarget; /* 80 4 */
	CAnimParamHandle m_hParam; /* 84 2 */
	float m_flTurnToFaceOffset; /* 88 4 */
	bool m_bTurnToFace; /* 92 1 */
	void CFollowPathUpdateNode(class CFollowPathUpdateNode *, class CFollowPathUpdateNode &); /* linkage=_ZN21CFollowPathUpdateNodeC4EOS_ */
	void CFollowPathUpdateNode(class CFollowPathUpdateNode *, const class CFollowPathUpdateNode  &); /* linkage=_ZN21CFollowPathUpdateNodeC4ERKS_ */
	void CFollowPathUpdateNode(class CFollowPathUpdateNode *, class CAnimGraphInitContext &); /* linkage=_ZN21CFollowPathUpdateNodeC4ER21CAnimGraphInitContext */
	virtual void Update(const class CFollowPathUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK21CFollowPathUpdateNode6UpdateER23CAnimGraphUpdateContext */
	virtual void PostUpdate(const class CFollowPathUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK21CFollowPathUpdateNode10PostUpdateER23CAnimGraphUpdateContext */
	virtual PoseHandle GetPoseHandle(const class CFollowPathUpdateNode  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK21CFollowPathUpdateNode13GetPoseHandleERK23CAnimGraphUpdateContext */
	virtual void Reset(const class CFollowPathUpdateNode  *, class CAnimGraphUpdateContext &, float); /* linkage=_ZNK21CFollowPathUpdateNode5ResetER23CAnimGraphUpdateContextf */
	virtual void OnSave(const class CFollowPathUpdateNode  *, const class CAnimGraphUpdateContext  &, class ISave *); /* linkage=_ZNK21CFollowPathUpdateNode6OnSaveERK23CAnimGraphUpdateContextP5ISave */
	virtual void OnRestore(const class CFollowPathUpdateNode  *, class CAnimGraphUpdateContext &, class IRestore *); /* linkage=_ZNK21CFollowPathUpdateNode9OnRestoreER23CAnimGraphUpdateContextP8IRestore */
	virtual class CRootMotion CalculateRootMotion(const class CFollowPathUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK21CFollowPathUpdateNode19CalculateRootMotionER23CAnimGraphUpdateContext */
	virtual void CalculateFootMotion(const class CFollowPathUpdateNode  *, class CAnimGraphUpdateContext &, const class CMotionTransform  &, class CStrideStatus &); /* linkage=_ZNK21CFollowPathUpdateNode19CalculateFootMotionER23CAnimGraphUpdateContextRK16CMotionTransformR13CStrideStatus */
};

// <01037A82> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathupdatenode.h:31
void CFollowPathUpdateNode::CFollowPathUpdateNode(CAnimGraphInitContext& initContext)
{
} /* size: 0 */

