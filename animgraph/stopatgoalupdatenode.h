
//
// animgraph/stopatgoalupdatenode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 3
//	class: 1
//	struct: 1
//

// <0191C5B5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalupdatenode.h:11
void CStopAtGoalInstanceData::CStopAtGoalInstanceData()
{
} /* size: 0 */

// <0191C599> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalupdatenode.h:11
inline void CStopAtGoalInstanceData::CStopAtGoalInstanceData()
{
} /* size: 0 */

// <0190E0C5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalupdatenode.h:11
// member functions: 2
// member variables: 2
// static member variable: 1
// struct size: 16
struct CStopAtGoalInstanceData {
	static struct datamap_t m_DataMap; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalupdatenode.h:13 */
	datamap_t* GetBaseMap(void);
	CDampedValue m_flMotionScale; /* 0 12 */
	float m_flBlendAmount; /* 12 4 */
	void CStopAtGoalInstanceData(CStopAtGoalInstanceData* );
};

// <019101F2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalupdatenode.h:23
// member functions: 16
// member variables: 7
// vtable entries: 5
// class size: 72
class CStopAtGoalUpdateNode : public CUnaryUpdateNode {
public:
	/* class CUnaryUpdateNode <ancestor>; */ /* 0 16 */
	void CStopAtGoalUpdateNode(CStopAtGoalUpdateNode* , CStopAtGoalUpdateNode& );
	void CStopAtGoalUpdateNode(CStopAtGoalUpdateNode* , const CStopAtGoalUpdateNode& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalupdatenode.cpp:9 */
	void CStopAtGoalUpdateNode(CStopAtGoalUpdateNode* , CAnimGraphInitContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalupdatenode.cpp:16 */
	virtual void PostUpdate(const CStopAtGoalUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalupdatenode.cpp:56 */
	virtual PoseHandle GetPoseHandle(const CStopAtGoalUpdateNode* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalupdatenode.cpp:69 */
	virtual void Reset(const CStopAtGoalUpdateNode* , CAnimGraphUpdateContext& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalupdatenode.cpp:80 */
	virtual void CalculateFootMotion(const CStopAtGoalUpdateNode* , CAnimGraphUpdateContext& , const CMotionTransform& , CStrideStatus& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalupdatenode.cpp:102 */
	virtual CRootMotion CalculateRootMotion(const CStopAtGoalUpdateNode* , CAnimGraphUpdateContext& );
	CPackedHandle<CStopAtGoalInstanceData> m_hInstanceData; /* 16 4 */
	float m_flOuterRadius; /* 20 4 */
	float m_flInnerRadius; /* 24 4 */
	float m_flMaxScale; /* 28 4 */
	float m_flMinScale; /* 32 4 */
	CAnimInputDamping m_damping; /* 40 0 */
	void CStopAtGoalUpdateNode(class CStopAtGoalUpdateNode *, class CStopAtGoalUpdateNode &); /* linkage=_ZN21CStopAtGoalUpdateNodeC4EOS_ */
	void CStopAtGoalUpdateNode(class CStopAtGoalUpdateNode *, const class CStopAtGoalUpdateNode  &); /* linkage=_ZN21CStopAtGoalUpdateNodeC4ERKS_ */
	void CStopAtGoalUpdateNode(class CStopAtGoalUpdateNode *, class CAnimGraphInitContext &); /* linkage=_ZN21CStopAtGoalUpdateNodeC4ER21CAnimGraphInitContext */
	virtual void PostUpdate(const class CStopAtGoalUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK21CStopAtGoalUpdateNode10PostUpdateER23CAnimGraphUpdateContext */
	virtual PoseHandle GetPoseHandle(const class CStopAtGoalUpdateNode  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK21CStopAtGoalUpdateNode13GetPoseHandleERK23CAnimGraphUpdateContext */
	virtual void Reset(const class CStopAtGoalUpdateNode  *, class CAnimGraphUpdateContext &, float); /* linkage=_ZNK21CStopAtGoalUpdateNode5ResetER23CAnimGraphUpdateContextf */
	virtual void CalculateFootMotion(const class CStopAtGoalUpdateNode  *, class CAnimGraphUpdateContext &, const class CMotionTransform  &, class CStrideStatus &); /* linkage=_ZNK21CStopAtGoalUpdateNode19CalculateFootMotionER23CAnimGraphUpdateContextRK16CMotionTransformR13CStrideStatus */
	virtual class CRootMotion CalculateRootMotion(const class CStopAtGoalUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK21CStopAtGoalUpdateNode19CalculateRootMotionER23CAnimGraphUpdateContext */
};

// <01244D05> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalupdatenode.h:27
void CStopAtGoalUpdateNode::CStopAtGoalUpdateNode(CAnimGraphInitContext& initContext)
{
} /* size: 0 */

