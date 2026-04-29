
//
// animgraph/hitreactupdatenode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 3
//	class: 1
//	struct: 1
//

// <017ED9C5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactupdatenode.h:14
void CHitReactInstanceData::CHitReactInstanceData()
{
} /* size: 0 */

// <017ED9A9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactupdatenode.h:14
inline void CHitReactInstanceData::CHitReactInstanceData()
{
} /* size: 0 */

// <017E0363> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactupdatenode.h:14
// member function: 1
// member variables: 4
// struct size: 4
struct CHitReactInstanceData {
	uint8 m_resetCount; /* 0 1 */
	uint8 m_hitCount; /* 1 1 */
	uint8 m_localHitCount; /* 2 1 */
	PoseHandle m_hPoseHandle; /* 3 1 */
	void CHitReactInstanceData(CHitReactInstanceData* );
};

// <017E2E8D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactupdatenode.h:24
// member functions: 16
// member variables: 11
// vtable entries: 4
// class size: 48
class CHitReactUpdateNode : public CUnaryUpdateNode {
public:
	/* class CUnaryUpdateNode <ancestor>; */ /* 0 0 */
	void CHitReactUpdateNode(CHitReactUpdateNode* , CHitReactUpdateNode& );
	void CHitReactUpdateNode(CHitReactUpdateNode* , const CHitReactUpdateNode& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactupdatenode.cpp:12 */
	void CHitReactUpdateNode(CHitReactUpdateNode* , CAnimGraphInitContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactupdatenode.cpp:22 */
	virtual void Update(const CHitReactUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactupdatenode.cpp:99 */
	virtual void CreatePoseOp(const CHitReactUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactupdatenode.cpp:115 */
	virtual PoseHandle GetPoseHandle(const CHitReactUpdateNode* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactupdatenode.cpp:122 */
	virtual void Reset(const CHitReactUpdateNode* , CAnimGraphUpdateContext& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactupdatenode.cpp:151 */
	bool CheckSettingsValid(const CHitReactUpdateNode* );
	CPackedHandle<HitReactFixedSettings_t> m_hOpFixedSettings; /* 16 4 */
	CPackedHandle<HitReactInstanceSettings_t> m_hOpInstanceSettings; /* 20 4 */
	CPackedHandle<CHitReactInstanceData> m_hInstData; /* 24 4 */
	CAnimParamHandle m_triggerParam; /* 28 2 */
	CAnimParamHandle m_hitBoneParam; /* 30 2 */
	CAnimParamHandle m_hitOffsetParam; /* 32 2 */
	CAnimParamHandle m_hitDirectionParam; /* 34 2 */
	CAnimParamHandle m_hitStrengthParam; /* 36 2 */
	float m_flMinDelayBetweenHits; /* 40 4 */
	bool m_bResetChild; /* 44 1 */
	void CHitReactUpdateNode(class CHitReactUpdateNode *, class CHitReactUpdateNode &); /* linkage=_ZN19CHitReactUpdateNodeC4EOS_ */
	void CHitReactUpdateNode(class CHitReactUpdateNode *, const class CHitReactUpdateNode  &); /* linkage=_ZN19CHitReactUpdateNodeC4ERKS_ */
	void CHitReactUpdateNode(class CHitReactUpdateNode *, class CAnimGraphInitContext &); /* linkage=_ZN19CHitReactUpdateNodeC4ER21CAnimGraphInitContext */
	/* <1868112> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactupdatenode.cpp:22 */
	virtual void Update(const class CHitReactUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK19CHitReactUpdateNode6UpdateER23CAnimGraphUpdateContext */
	virtual void CreatePoseOp(const class CHitReactUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK19CHitReactUpdateNode12CreatePoseOpER23CAnimGraphUpdateContext */
	virtual PoseHandle GetPoseHandle(const class CHitReactUpdateNode  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK19CHitReactUpdateNode13GetPoseHandleERK23CAnimGraphUpdateContext */
	virtual void Reset(const class CHitReactUpdateNode  *, class CAnimGraphUpdateContext &, float); /* linkage=_ZNK19CHitReactUpdateNode5ResetER23CAnimGraphUpdateContextf */
	/* <1877313> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactupdatenode.cpp:151 */
	bool CheckSettingsValid(const class CHitReactUpdateNode  *); /* linkage=_ZNK19CHitReactUpdateNode18CheckSettingsValidEv */
};

// <01125DB0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactupdatenode.h:28
void CHitReactUpdateNode::CHitReactUpdateNode(CAnimGraphInitContext& initContext)
{
} /* size: 0 */

