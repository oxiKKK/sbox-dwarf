
//
// animgraph/lookatupdatenode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 3
//	class: 1
//	struct: 1
//

// <0191EF23> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatupdatenode.h:14
void CLookAtInstanceData::CLookAtInstanceData()
{
} /* size: 0 */

// <0191EF07> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatupdatenode.h:14
inline void CLookAtInstanceData::CLookAtInstanceData()
{
} /* size: 0 */

// <018D4C58> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatupdatenode.h:14
// member function: 1
// member variables: 2
// struct size: 2
struct CLookAtInstanceData {
	uint8 m_resetCount; /* 0 1 */
	PoseHandle m_hPoseHandle; /* 1 1 */
	void CLookAtInstanceData(CLookAtInstanceData* );
};

// <01913593> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatupdatenode.h:22
// member functions: 14
// member variables: 9
// vtable entries: 4
// class size: 40
class CLookAtUpdateNode : public CUnaryUpdateNode {
public:
	/* class CUnaryUpdateNode <ancestor>; */ /* 0 16 */
	void CLookAtUpdateNode(CLookAtUpdateNode* , CLookAtUpdateNode& );
	void CLookAtUpdateNode(CLookAtUpdateNode* , const CLookAtUpdateNode& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatupdatenode.cpp:8 */
	void CLookAtUpdateNode(CLookAtUpdateNode* , CAnimGraphInitContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatupdatenode.cpp:17 */
	virtual void Update(const CLookAtUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatupdatenode.cpp:26 */
	virtual void CreatePoseOp(const CLookAtUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatupdatenode.cpp:48 */
	virtual PoseHandle GetPoseHandle(const CLookAtUpdateNode* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatupdatenode.cpp:55 */
	virtual void Reset(const CLookAtUpdateNode* , CAnimGraphUpdateContext& , float);
	CPackedHandle<LookAtOpFixedSettings_t> m_hOpFixedSettings; /* 16 4 */
	CPackedHandle<LookAtOpInstanceSettings_t> m_hOpInstanceSettings; /* 20 4 */
	CPackedHandle<CLookAtInstanceData> m_hInstData; /* 24 4 */
	AnimVectorSource m_target; /* 28 4 */
	CAnimParamHandle m_paramIndex; /* 32 2 */
	CAnimParamHandle m_weightParamIndex; /* 34 2 */
	bool m_bResetChild; /* 36 1 */
	bool m_bLockWhenWaning; /* 37 1 */
	void CLookAtUpdateNode(class CLookAtUpdateNode *, class CLookAtUpdateNode &); /* linkage=_ZN17CLookAtUpdateNodeC4EOS_ */
	void CLookAtUpdateNode(class CLookAtUpdateNode *, const class CLookAtUpdateNode  &); /* linkage=_ZN17CLookAtUpdateNodeC4ERKS_ */
	void CLookAtUpdateNode(class CLookAtUpdateNode *, class CAnimGraphInitContext &); /* linkage=_ZN17CLookAtUpdateNodeC4ER21CAnimGraphInitContext */
	virtual void Update(const class CLookAtUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK17CLookAtUpdateNode6UpdateER23CAnimGraphUpdateContext */
	virtual void CreatePoseOp(const class CLookAtUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK17CLookAtUpdateNode12CreatePoseOpER23CAnimGraphUpdateContext */
	virtual PoseHandle GetPoseHandle(const class CLookAtUpdateNode  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK17CLookAtUpdateNode13GetPoseHandleERK23CAnimGraphUpdateContext */
	virtual void Reset(const class CLookAtUpdateNode  *, class CAnimGraphUpdateContext &, float); /* linkage=_ZNK17CLookAtUpdateNode5ResetER23CAnimGraphUpdateContextf */
};

// <01125AFD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatupdatenode.h:26
void CLookAtUpdateNode::CLookAtUpdateNode(CAnimGraphInitContext& initContext)
{
} /* size: 0 */

