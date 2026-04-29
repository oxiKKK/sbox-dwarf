
//
// animgraph/leanmatrixupdatenode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 3
//	class: 1
//	struct: 1
//

// <0191F181> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixupdatenode.h:28
void CLeanMatrixInstanceData::CLeanMatrixInstanceData()
{
} /* size: 0 */

// <0191F165> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixupdatenode.h:28
inline void CLeanMatrixInstanceData::CLeanMatrixInstanceData()
{
} /* size: 0 */

// <018D3AE9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixupdatenode.h:28
// member functions: 2
// member variables: 3
// static member variable: 1
// struct size: 28
struct CLeanMatrixInstanceData {
	static struct datamap_t m_DataMap; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixupdatenode.h:30 */
	datamap_t* GetBaseMap(void);
	CDampedValue m_flValueY; /* 0 12 */
	CDampedValue m_flValueX; /* 12 12 */
	PoseHandle m_hPose; /* 24 1 */
	void CLeanMatrixInstanceData(CLeanMatrixInstanceData* );
};

// <01913761> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixupdatenode.h:38
// member functions: 20
// member variables: 12
// vtable entries: 6
// class size: 168
class CLeanMatrixUpdateNode : public CLeafUpdateNode {
public:
	/* class CLeafUpdateNode <ancestor>; */ /* 0 0 */
	void CLeanMatrixUpdateNode(CLeanMatrixUpdateNode* , CLeanMatrixUpdateNode& );
	void CLeanMatrixUpdateNode(CLeanMatrixUpdateNode* , const CLeanMatrixUpdateNode& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixupdatenode.cpp:16 */
	void CLeanMatrixUpdateNode(CLeanMatrixUpdateNode* , CAnimGraphInitContext& , HSequence);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixupdatenode.cpp:35 */
	virtual void Update(const CLeanMatrixUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixupdatenode.cpp:46 */
	virtual void CreatePoseOp(const CLeanMatrixUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixupdatenode.cpp:107 */
	virtual PoseHandle GetPoseHandle(const CLeanMatrixUpdateNode* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixupdatenode.cpp:113 */
	virtual void Reset(const CLeanMatrixUpdateNode* , CAnimGraphUpdateContext& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixupdatenode.cpp:128 */
	virtual void OnSave(const CLeanMatrixUpdateNode* , const CAnimGraphUpdateContext& , ISave* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixupdatenode.cpp:135 */
	virtual void OnRestore(const CLeanMatrixUpdateNode* , CAnimGraphUpdateContext& , IRestore* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixupdatenode.cpp:142 */
	void CalculateTargetXY(const CLeanMatrixUpdateNode* , CAnimGraphUpdateContext& , float& , float& );
	CPackedHandle<CLeanMatrixInstanceData> m_hInstanceData; /* 12 4 */
	int m_frameCorners[3][3]; /* 16 36 */
	StaticPoseCacheHandle m_poses[9]; /* 52 36 */
	CAnimInputDamping m_damping; /* 88 0 */
	AnimVectorSource m_blendSource; /* 120 4 */
	CAnimParamHandle m_paramIndex; /* 124 2 */
	Vector m_verticalAxis; /* 128 12 */
	Vector m_horizontalAxis; /* 140 12 */
	HSequence m_hSequence; /* 152 4 */
	float m_flMaxValue; /* 156 4 */
	int m_nSequenceMaxFrame; /* 160 4 */
	void CLeanMatrixUpdateNode(class CLeanMatrixUpdateNode *, class CLeanMatrixUpdateNode &); /* linkage=_ZN21CLeanMatrixUpdateNodeC4EOS_ */
	void CLeanMatrixUpdateNode(class CLeanMatrixUpdateNode *, const class CLeanMatrixUpdateNode  &); /* linkage=_ZN21CLeanMatrixUpdateNodeC4ERKS_ */
	void CLeanMatrixUpdateNode(class CLeanMatrixUpdateNode *, class CAnimGraphInitContext &, class HSequence); /* linkage=_ZN21CLeanMatrixUpdateNodeC4ER21CAnimGraphInitContext9HSequence */
	virtual void Update(const class CLeanMatrixUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK21CLeanMatrixUpdateNode6UpdateER23CAnimGraphUpdateContext */
	virtual void CreatePoseOp(const class CLeanMatrixUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK21CLeanMatrixUpdateNode12CreatePoseOpER23CAnimGraphUpdateContext */
	virtual PoseHandle GetPoseHandle(const class CLeanMatrixUpdateNode  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK21CLeanMatrixUpdateNode13GetPoseHandleERK23CAnimGraphUpdateContext */
	virtual void Reset(const class CLeanMatrixUpdateNode  *, class CAnimGraphUpdateContext &, float); /* linkage=_ZNK21CLeanMatrixUpdateNode5ResetER23CAnimGraphUpdateContextf */
	virtual void OnSave(const class CLeanMatrixUpdateNode  *, const class CAnimGraphUpdateContext  &, class ISave *); /* linkage=_ZNK21CLeanMatrixUpdateNode6OnSaveERK23CAnimGraphUpdateContextP5ISave */
	virtual void OnRestore(const class CLeanMatrixUpdateNode  *, class CAnimGraphUpdateContext &, class IRestore *); /* linkage=_ZNK21CLeanMatrixUpdateNode9OnRestoreER23CAnimGraphUpdateContextP8IRestore */
	void CalculateTargetXY(const class CLeanMatrixUpdateNode  *, class CAnimGraphUpdateContext &, float &, float &); /* linkage=_ZNK21CLeanMatrixUpdateNode17CalculateTargetXYER23CAnimGraphUpdateContextRfS2_ */
};

// <01125BA5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixupdatenode.h:42
void CLeanMatrixUpdateNode::CLeanMatrixUpdateNode(CAnimGraphInitContext& initContext, HSequence hSeq)
{
} /* size: 0 */

