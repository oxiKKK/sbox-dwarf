
//
// animgraph/moverupdatenode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 3
//	class: 1
//	struct: 1
//

// <0191E54F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moverupdatenode.h:12
void CMoverInstanceData::CMoverInstanceData()
{
} /* size: 0 */

// <0191E533> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moverupdatenode.h:12
inline void CMoverInstanceData::CMoverInstanceData()
{
} /* size: 0 */

// <018D80DF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moverupdatenode.h:12
// member functions: 2
// member variables: 5
// static member variable: 1
// struct size: 44
struct CMoverInstanceData {
	static struct datamap_t m_DataMap; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moverupdatenode.h:14 */
	datamap_t* GetBaseMap(void);
	CDampedValue m_dampedValue; /* 0 12 */
	Vector m_vMovement; /* 12 12 */
	Vector m_vVelocityWS; /* 24 12 */
	CRotation m_rotation; /* 36 4 */
	CRotation m_targetOrientation; /* 40 4 */
	void CMoverInstanceData(CMoverInstanceData* );
};

// <01912724> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moverupdatenode.h:23
// member functions: 24
// member variables: 10
// vtable entries: 9
// class size: 72
class CMoverUpdateNode : public CUnaryUpdateNode {
public:
	/* class CUnaryUpdateNode <ancestor>; */ /* 0 16 */
	void CMoverUpdateNode(CMoverUpdateNode* , CMoverUpdateNode& );
	void CMoverUpdateNode(CMoverUpdateNode* , const CMoverUpdateNode& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moverupdatenode.cpp:19 */
	void CMoverUpdateNode(CMoverUpdateNode* , CAnimGraphInitContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moverupdatenode.cpp:26 */
	virtual void Update(const CMoverUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moverupdatenode.cpp:54 */
	virtual PoseHandle GetPoseHandle(const CMoverUpdateNode* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moverupdatenode.cpp:67 */
	virtual CMotionTransform GetTotalMovement(const CMoverUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moverupdatenode.cpp:80 */
	virtual CMotionTransform GetRemainingMovement(const CMoverUpdateNode* , CAnimGraphUpdateContext& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moverupdatenode.cpp:127 */
	virtual void Reset(const CMoverUpdateNode* , CAnimGraphUpdateContext& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moverupdatenode.cpp:136 */
	virtual void OnSave(const CMoverUpdateNode* , const CAnimGraphUpdateContext& , ISave* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moverupdatenode.cpp:143 */
	virtual void OnRestore(const CMoverUpdateNode* , CAnimGraphUpdateContext& , IRestore* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moverupdatenode.cpp:150 */
	virtual CRootMotion CalculateRootMotion(const CMoverUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moverupdatenode.cpp:203 */
	virtual void CalculateFootMotion(const CMoverUpdateNode* , CAnimGraphUpdateContext& , const CMotionTransform& , CStrideStatus& );
	CPackedHandle<CMoverInstanceData> m_hInstanceData; /* 16 4 */
	CAnimInputDamping m_damping; /* 24 0 */
	AnimValueSource m_facingTarget; /* 56 4 */
	float m_flTurnToFaceOffset; /* 60 4 */
	bool m_bAdditive; /* 64 1 */
	bool m_bApplyMovement; /* 65 1 */
	bool m_bOrientMovement; /* 66 1 */
	bool m_bApplyRotation; /* 67 1 */
	CAnimParamHandle m_facingTargetParam; /* 68 2 */
	void CMoverUpdateNode(class CMoverUpdateNode *, class CMoverUpdateNode &); /* linkage=_ZN16CMoverUpdateNodeC4EOS_ */
	void CMoverUpdateNode(class CMoverUpdateNode *, const class CMoverUpdateNode  &); /* linkage=_ZN16CMoverUpdateNodeC4ERKS_ */
	void CMoverUpdateNode(class CMoverUpdateNode *, class CAnimGraphInitContext &); /* linkage=_ZN16CMoverUpdateNodeC4ER21CAnimGraphInitContext */
	virtual void Update(const class CMoverUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK16CMoverUpdateNode6UpdateER23CAnimGraphUpdateContext */
	virtual PoseHandle GetPoseHandle(const class CMoverUpdateNode  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK16CMoverUpdateNode13GetPoseHandleERK23CAnimGraphUpdateContext */
	virtual class CMotionTransform GetTotalMovement(const class CMoverUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK16CMoverUpdateNode16GetTotalMovementER23CAnimGraphUpdateContext */
	virtual class CMotionTransform GetRemainingMovement(const class CMoverUpdateNode  *, class CAnimGraphUpdateContext &, float); /* linkage=_ZNK16CMoverUpdateNode20GetRemainingMovementER23CAnimGraphUpdateContextf */
	virtual void Reset(const class CMoverUpdateNode  *, class CAnimGraphUpdateContext &, float); /* linkage=_ZNK16CMoverUpdateNode5ResetER23CAnimGraphUpdateContextf */
	virtual void OnSave(const class CMoverUpdateNode  *, const class CAnimGraphUpdateContext  &, class ISave *); /* linkage=_ZNK16CMoverUpdateNode6OnSaveERK23CAnimGraphUpdateContextP5ISave */
	virtual void OnRestore(const class CMoverUpdateNode  *, class CAnimGraphUpdateContext &, class IRestore *); /* linkage=_ZNK16CMoverUpdateNode9OnRestoreER23CAnimGraphUpdateContextP8IRestore */
	virtual class CRootMotion CalculateRootMotion(const class CMoverUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK16CMoverUpdateNode19CalculateRootMotionER23CAnimGraphUpdateContext */
	virtual void CalculateFootMotion(const class CMoverUpdateNode  *, class CAnimGraphUpdateContext &, const class CMotionTransform  &, class CStrideStatus &); /* linkage=_ZNK16CMoverUpdateNode19CalculateFootMotionER23CAnimGraphUpdateContextRK16CMotionTransformR13CStrideStatus */
};

// <01125905> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moverupdatenode.h:27
void CMoverUpdateNode::CMoverUpdateNode(CAnimGraphInitContext& initContext)
{
} /* size: 0 */

