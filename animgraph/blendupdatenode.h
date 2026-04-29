
//
// animgraph/blendupdatenode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 9
//	class: 1
//	structs: 2
//

// <017D5AED> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.h:28
// member function: 1
// member variables: 2
// struct size: 16
struct BlendWeights {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.h:30 */
	void BlendWeights(BlendWeights* );
	int m_indices[2]; /* 0 8 */
	float m_weights[2]; /* 8 8 */
};

// <017F00C6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.h:39
void CBlendNodeInstanceData::CBlendNodeInstanceData()
{
} /* size: 0 */

// <017F00AA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.h:39
inline void CBlendNodeInstanceData::CBlendNodeInstanceData()
{
} /* size: 0 */

// <017D5B56> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.h:39
// member functions: 2
// member variables: 7
// static member variable: 1
// struct size: 36
struct CBlendNodeInstanceData {
	static struct datamap_t m_DataMap; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.h:41 */
	datamap_t* GetBaseMap(void);
	CDampedValue m_dampedValue; /* 0 12 */
	float m_flCycle; /* 12 4 */
	float m_flCycleZeroTime; /* 16 4 */
	float m_flPlaybackRate; /* 20 4 */
	float m_flBlendValue; /* 24 4 */
	float m_flDuration; /* 28 4 */
	PoseHandle m_hPose; /* 32 1 */
	void CBlendNodeInstanceData(CBlendNodeInstanceData* );
};

// <017E5AFC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.h:55
// member functions: 76
// member variables: 13
// vtable entries: 19
// class size: 88
class CBlendUpdateNode : public CAnimUpdateNodeBase {
public:
	/* class CAnimUpdateNodeBase <ancestor>; */ /* 0 16 */
	void CBlendUpdateNode(CBlendUpdateNode* , CBlendUpdateNode& );
	void CBlendUpdateNode(CBlendUpdateNode* , const CBlendUpdateNode& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:30 */
	void CBlendUpdateNode(CBlendUpdateNode* , CAnimGraphInitContext& , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:50 */
	virtual int GetChildCount(const CBlendUpdateNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:56 */
	virtual const CAnimUpdateNodeBase* GetChild(const CBlendUpdateNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:69 */
	virtual bool IsChildActive(const CBlendUpdateNode* , CAnimGraphUpdateContext& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:86 */
	virtual bool IsChildWaning(const CBlendUpdateNode* , CAnimGraphUpdateContext& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:92 */
	virtual void Update(const CBlendUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:157 */
	virtual void EnqueueChildren(const CBlendUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:187 */
	virtual void CreatePoseOp(const CBlendUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:270 */
	virtual PoseHandle GetPoseHandle(const CBlendUpdateNode* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:277 */
	virtual float GetCycle(const CBlendUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:283 */
	virtual float GetDuration(const CBlendUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:289 */
	virtual CMotionTransform GetTotalMovement(const CBlendUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:322 */
	virtual CMotionTransform GetRemainingMovement(const CBlendUpdateNode* , CAnimGraphUpdateContext& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:357 */
	virtual void Reset(const CBlendUpdateNode* , CAnimGraphUpdateContext& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:412 */
	virtual bool IsFinished(const CBlendUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:436 */
	virtual float GetTimeTillFinished(const CBlendUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:467 */
	virtual void OnSave(const CBlendUpdateNode* , const CAnimGraphUpdateContext& , ISave* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:474 */
	virtual void OnRestore(const CBlendUpdateNode* , CAnimGraphUpdateContext& , IRestore* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.h:81 */
	void SetBlendSource(CBlendUpdateNode* , AnimValueSource);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.h:82 */
	void SetParameterIndex(CBlendUpdateNode* , const CAnimParamHandle& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.h:83 */
	void SetLockOnReset(CBlendUpdateNode* , bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:558 */
	void SetChild(CBlendUpdateNode* , int, const CAnimUpdateNodeBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:564 */
	void SetTargetValue(CBlendUpdateNode* , int, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:570 */
	void SetSortedIndex(CBlendUpdateNode* , int, uint8);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:576 */
	void SetDamping(CBlendUpdateNode* , const CAnimInputDamping& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:582 */
	void SetSync(CBlendUpdateNode* , bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.h:89 */
	void SetBlendKeyType(CBlendUpdateNode* , BlendKeyType);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.h:90 */
	void SetLoop(CBlendUpdateNode* , bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.h:91 */
	void SetLockWhenWaning(CBlendUpdateNode* , bool);
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:481 */
	virtual CRootMotion CalculateRootMotion(const CBlendUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:517 */
	virtual void CalculateFootMotion(const CBlendUpdateNode* , CAnimGraphUpdateContext& , const CMotionTransform& , CStrideStatus& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:588 */
	void UpdateBlendValue(const CBlendUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:630 */
	float CalcBlendValue(const CBlendUpdateNode* , CAnimGraphUpdateContext& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:687 */
	float GetKeyValue(const CBlendUpdateNode* , CAnimGraphUpdateContext& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:746 */
	BlendWeights CalcWeightsFromBlendValue(const CBlendUpdateNode* , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:768 */
	void UpdateDuration(const CBlendUpdateNode* , CAnimGraphUpdateContext& );
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> > m_children; /* 12 8 */
	CRelativeArray<unsigned char> m_sortedOrder; /* 20 8 */
	CRelativeArray<float> m_targetValues; /* 28 8 */
	CPackedHandle<CBlendNodeInstanceData> m_hInstanceData; /* 36 4 */
	AnimValueSource m_blendValueSource; /* 40 4 */
	CAnimParamHandle m_paramIndex; /* 44 2 */
	CAnimInputDamping m_damping; /* 48 0 */
	BlendKeyType m_blendKeyType; /* 80 4 */
	bool m_bLockBlendOnReset; /* 84 1 */
	bool m_bSyncCycles; /* 85 1 */
	bool m_bLoop; /* 86 1 */
	bool m_bLockWhenWaning; /* 87 1 */
	void CBlendUpdateNode(class CBlendUpdateNode *, class CAnimGraphInitContext &, uint32); /* linkage=_ZN16CBlendUpdateNodeC4ER21CAnimGraphInitContextj */
	void SetSortedIndex(class CBlendUpdateNode *, int, uint8); /* linkage=_ZN16CBlendUpdateNode14SetSortedIndexEih */
	void SetChild(class CBlendUpdateNode *, int, const class CAnimUpdateNodeBase  *); /* linkage=_ZN16CBlendUpdateNode8SetChildEiPK19CAnimUpdateNodeBase */
	void SetTargetValue(class CBlendUpdateNode *, int, float); /* linkage=_ZN16CBlendUpdateNode14SetTargetValueEif */
	void SetSync(class CBlendUpdateNode *, bool); /* linkage=_ZN16CBlendUpdateNode7SetSyncEb */
	void SetDamping(class CBlendUpdateNode *, const class CAnimInputDamping  &); /* linkage=_ZN16CBlendUpdateNode10SetDampingERK17CAnimInputDamping */
	void SetLockWhenWaning(class CBlendUpdateNode *, bool); /* linkage=_ZN16CBlendUpdateNode17SetLockWhenWaningEb */
	void SetLoop(class CBlendUpdateNode *, bool); /* linkage=_ZN16CBlendUpdateNode7SetLoopEb */
	void SetBlendKeyType(class CBlendUpdateNode *, enum BlendKeyType); /* linkage=_ZN16CBlendUpdateNode15SetBlendKeyTypeE12BlendKeyType */
	void SetLockOnReset(class CBlendUpdateNode *, bool); /* linkage=_ZN16CBlendUpdateNode14SetLockOnResetEb */
	void SetParameterIndex(class CBlendUpdateNode *, const class CAnimParamHandle  &); /* linkage=_ZN16CBlendUpdateNode17SetParameterIndexERK16CAnimParamHandle */
	void SetBlendSource(class CBlendUpdateNode *, enum AnimValueSource); /* linkage=_ZN16CBlendUpdateNode14SetBlendSourceE15AnimValueSource */
	void CBlendUpdateNode(class CBlendUpdateNode *, class CBlendUpdateNode &); /* linkage=_ZN16CBlendUpdateNodeC4EOS_ */
	void CBlendUpdateNode(class CBlendUpdateNode *, const class CBlendUpdateNode  &); /* linkage=_ZN16CBlendUpdateNodeC4ERKS_ */
	virtual int GetChildCount(const class CBlendUpdateNode  *); /* linkage=_ZNK16CBlendUpdateNode13GetChildCountEv */
	virtual const class CAnimUpdateNodeBase  * GetChild(const class CBlendUpdateNode  *, int); /* linkage=_ZNK16CBlendUpdateNode8GetChildEi */
	virtual bool IsChildActive(const class CBlendUpdateNode  *, class CAnimGraphUpdateContext &, int); /* linkage=_ZNK16CBlendUpdateNode13IsChildActiveER23CAnimGraphUpdateContexti */
	virtual bool IsChildWaning(const class CBlendUpdateNode  *, class CAnimGraphUpdateContext &, int); /* linkage=_ZNK16CBlendUpdateNode13IsChildWaningER23CAnimGraphUpdateContexti */
	/* <1869d46> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:92 */
	virtual void Update(const class CBlendUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK16CBlendUpdateNode6UpdateER23CAnimGraphUpdateContext */
	virtual void EnqueueChildren(const class CBlendUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK16CBlendUpdateNode15EnqueueChildrenER23CAnimGraphUpdateContext */
	virtual void CreatePoseOp(const class CBlendUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK16CBlendUpdateNode12CreatePoseOpER23CAnimGraphUpdateContext */
	virtual PoseHandle GetPoseHandle(const class CBlendUpdateNode  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK16CBlendUpdateNode13GetPoseHandleERK23CAnimGraphUpdateContext */
	virtual float GetCycle(const class CBlendUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK16CBlendUpdateNode8GetCycleER23CAnimGraphUpdateContext */
	/* <18667d5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:283 */
	virtual float GetDuration(const class CBlendUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK16CBlendUpdateNode11GetDurationER23CAnimGraphUpdateContext */
	virtual class CMotionTransform GetTotalMovement(const class CBlendUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK16CBlendUpdateNode16GetTotalMovementER23CAnimGraphUpdateContext */
	virtual class CMotionTransform GetRemainingMovement(const class CBlendUpdateNode  *, class CAnimGraphUpdateContext &, float); /* linkage=_ZNK16CBlendUpdateNode20GetRemainingMovementER23CAnimGraphUpdateContextf */
	virtual void Reset(const class CBlendUpdateNode  *, class CAnimGraphUpdateContext &, float); /* linkage=_ZNK16CBlendUpdateNode5ResetER23CAnimGraphUpdateContextf */
	virtual bool IsFinished(const class CBlendUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK16CBlendUpdateNode10IsFinishedER23CAnimGraphUpdateContext */
	virtual float GetTimeTillFinished(const class CBlendUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK16CBlendUpdateNode19GetTimeTillFinishedER23CAnimGraphUpdateContext */
	virtual void OnSave(const class CBlendUpdateNode  *, const class CAnimGraphUpdateContext  &, class ISave *); /* linkage=_ZNK16CBlendUpdateNode6OnSaveERK23CAnimGraphUpdateContextP5ISave */
	virtual void OnRestore(const class CBlendUpdateNode  *, class CAnimGraphUpdateContext &, class IRestore *); /* linkage=_ZNK16CBlendUpdateNode9OnRestoreER23CAnimGraphUpdateContextP8IRestore */
	virtual class CRootMotion CalculateRootMotion(const class CBlendUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK16CBlendUpdateNode19CalculateRootMotionER23CAnimGraphUpdateContext */
	virtual void CalculateFootMotion(const class CBlendUpdateNode  *, class CAnimGraphUpdateContext &, const class CMotionTransform  &, class CStrideStatus &); /* linkage=_ZNK16CBlendUpdateNode19CalculateFootMotionER23CAnimGraphUpdateContextRK16CMotionTransformR13CStrideStatus */
	void UpdateBlendValue(const class CBlendUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK16CBlendUpdateNode16UpdateBlendValueER23CAnimGraphUpdateContext */
	/* <1869c96> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.cpp:630 */
	float CalcBlendValue(const class CBlendUpdateNode  *, class CAnimGraphUpdateContext &, float); /* linkage=_ZNK16CBlendUpdateNode14CalcBlendValueER23CAnimGraphUpdateContextf */
	float GetKeyValue(const class CBlendUpdateNode  *, class CAnimGraphUpdateContext &, int); /* linkage=_ZNK16CBlendUpdateNode11GetKeyValueER23CAnimGraphUpdateContexti */
	class BlendWeights CalcWeightsFromBlendValue(const class CBlendUpdateNode  *, float); /* linkage=_ZNK16CBlendUpdateNode25CalcWeightsFromBlendValueEf */
	void UpdateDuration(const class CBlendUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK16CBlendUpdateNode14UpdateDurationER23CAnimGraphUpdateContext */
};

// <0103807C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.h:59
void CBlendUpdateNode::CBlendUpdateNode(CAnimGraphInitContext& initContext, uint32 childCount)
{
} /* size: 0 */

// <0107D71F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.h:81
inline void CBlendUpdateNode::SetBlendSource(AnimValueSource src)
{
} /* size: 0 */

// <0107D6FA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.h:82
inline void CBlendUpdateNode::SetParameterIndex(const CAnimParamHandle& index)
{
} /* size: 0 */

// <0107D6D5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.h:83
inline void CBlendUpdateNode::SetLockOnReset(bool bResetLock)
{
} /* size: 0 */

// <0107D6B0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.h:89
inline void CBlendUpdateNode::SetBlendKeyType(BlendKeyType type)
{
} /* size: 0 */

// <0107D68B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.h:90
inline void CBlendUpdateNode::SetLoop(bool bLoop)
{
} /* size: 0 */

// <0107D666> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendupdatenode.h:91
inline void CBlendUpdateNode::SetLockWhenWaning(bool bLock)
{
} /* size: 0 */

