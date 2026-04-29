
//
// animgraph/aimmatrixupdatenode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 3
//	class: 1
//	struct: 1
//

// <017F0708> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/aimmatrixupdatenode.h:14
void CAimMatrixInstanceData::CAimMatrixInstanceData()
{
} /* size: 0 */

// <017F06EC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/aimmatrixupdatenode.h:14
inline void CAimMatrixInstanceData::CAimMatrixInstanceData()
{
} /* size: 0 */

// <017D464A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/aimmatrixupdatenode.h:14
// member function: 1
// member variables: 2
// struct size: 2
struct CAimMatrixInstanceData {
	uint8 m_resetCount; /* 0 1 */
	PoseHandle m_hPoseHandle; /* 1 1 */
	void CAimMatrixInstanceData(CAimMatrixInstanceData* );
};

// <017E6894> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/aimmatrixupdatenode.h:21
// member functions: 14
// member variables: 9
// vtable entries: 4
// class size: 48
class CAimMatrixUpdateNode : public CUnaryUpdateNode {
public:
	/* class CUnaryUpdateNode <ancestor>; */ /* 0 0 */
	void CAimMatrixUpdateNode(CAimMatrixUpdateNode* , CAimMatrixUpdateNode& );
	void CAimMatrixUpdateNode(CAimMatrixUpdateNode* , const CAimMatrixUpdateNode& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/aimmatrixupdatenode.cpp:9 */
	void CAimMatrixUpdateNode(CAimMatrixUpdateNode* , CAnimGraphInitContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/aimmatrixupdatenode.cpp:18 */
	virtual void Update(const CAimMatrixUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/aimmatrixupdatenode.cpp:27 */
	virtual void CreatePoseOp(const CAimMatrixUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/aimmatrixupdatenode.cpp:52 */
	virtual PoseHandle GetPoseHandle(const CAimMatrixUpdateNode* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/aimmatrixupdatenode.cpp:59 */
	virtual void Reset(const CAimMatrixUpdateNode* , CAnimGraphUpdateContext& , float);
	CPackedHandle<AimMatrixOpFixedSettings_t> m_hOpFixedSettings; /* 16 4 */
	CPackedHandle<AimMatrixOpInstanceSettings_t> m_hOpInstanceSettings; /* 20 4 */
	CPackedHandle<CAimMatrixInstanceData> m_hInstData; /* 24 4 */
	AnimVectorSource m_target; /* 28 4 */
	CAnimParamHandle m_paramIndex; /* 32 2 */
	HSequence m_hSequence; /* 36 4 */
	bool m_bResetChild; /* 40 1 */
	bool m_bLockWhenWaning; /* 41 1 */
	void CAimMatrixUpdateNode(class CAimMatrixUpdateNode *, class CAimMatrixUpdateNode &); /* linkage=_ZN20CAimMatrixUpdateNodeC4EOS_ */
	void CAimMatrixUpdateNode(class CAimMatrixUpdateNode *, const class CAimMatrixUpdateNode  &); /* linkage=_ZN20CAimMatrixUpdateNodeC4ERKS_ */
	void CAimMatrixUpdateNode(class CAimMatrixUpdateNode *, class CAnimGraphInitContext &); /* linkage=_ZN20CAimMatrixUpdateNodeC4ER21CAnimGraphInitContext */
	virtual void Update(const class CAimMatrixUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK20CAimMatrixUpdateNode6UpdateER23CAnimGraphUpdateContext */
	virtual void CreatePoseOp(const class CAimMatrixUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK20CAimMatrixUpdateNode12CreatePoseOpER23CAnimGraphUpdateContext */
	virtual PoseHandle GetPoseHandle(const class CAimMatrixUpdateNode  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK20CAimMatrixUpdateNode13GetPoseHandleERK23CAnimGraphUpdateContext */
	virtual void Reset(const class CAimMatrixUpdateNode  *, class CAnimGraphUpdateContext &, float); /* linkage=_ZNK20CAimMatrixUpdateNode5ResetER23CAnimGraphUpdateContextf */
};

// <0103854D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/aimmatrixupdatenode.h:25
void CAimMatrixUpdateNode::CAimMatrixUpdateNode(CAnimGraphInitContext& initContext)
{
} /* size: 0 */

