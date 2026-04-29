
//
// animgraph/blend2dupdatenode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 5
//	class: 1
//	structs: 2
//

// <017F03B7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.h:26
void BlendItem_t::BlendItem_t()
{
} /* size: 0 */

// <017F039B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.h:26
inline void BlendItem_t::BlendItem_t()
{
} /* size: 0 */

// <0100B8AF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.h:26
// member variables: 4
// struct size: 24
struct BlendItem_t {
	CRelativeArray<TagSpan_t> m_tags; /* 0 8 */
	HSequence m_hSequence; /* 8 4 */
	Vector2D m_vPos; /* 12 8 */
	float m_flDuration; /* 20 4 */
};

// <017F042E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.h:38
void CBlend2DInstanceData::CBlend2DInstanceData()
{
} /* size: 0 */

// <017F0412> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.h:38
inline void CBlend2DInstanceData::CBlend2DInstanceData()
{
} /* size: 0 */

// <017D5390> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.h:38
// member functions: 2
// member variables: 11
// static member variable: 1
// struct size: 104
struct CBlend2DInstanceData {
	static struct datamap_t m_DataMap; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.h:40 */
	datamap_t* GetBaseMap(void);
	Vector2D m_vTargetValue; /* 0 8 */
	CDampedVector2 m_dampedValue; /* 8 20 */
	Blend2DWeights_t m_currentWeights; /* 28 52 */
	float m_flCycle; /* 80 4 */
	float m_flPrevCycle; /* 84 4 */
	float m_flPlaybackRate; /* 88 4 */
	float m_flCycleZeroTime; /* 92 4 */
	float m_resetCycleValue; /* 96 4 */
	bool m_bManualMode; /* 100 1 */
	PoseHandle m_hPose; /* 101 1 */
	uint8 m_resetCount; /* 102 1 */
	void CBlend2DInstanceData(CBlend2DInstanceData* );
};

// <017E6240> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.h:63
// member functions: 60
// member variables: 13
// vtable entries: 14
// class size: 88
class CBlend2DUpdateNode : public CLeafUpdateNode {
public:
	/* class CLeafUpdateNode <ancestor>; */ /* 0 16 */
	void CBlend2DUpdateNode(CBlend2DUpdateNode* , CBlend2DUpdateNode& );
	void CBlend2DUpdateNode(CBlend2DUpdateNode* , const CBlend2DUpdateNode& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:19 */
	void CBlend2DUpdateNode(CBlend2DUpdateNode* , CAnimGraphInitContext& , int, Blend2DMode);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:30 */
	virtual void Update(const CBlend2DUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:100 */
	virtual void CreatePoseOp(const CBlend2DUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:157 */
	virtual PoseHandle GetPoseHandle(const CBlend2DUpdateNode* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:164 */
	virtual float GetCycle(const CBlend2DUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:170 */
	virtual float GetDuration(const CBlend2DUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:199 */
	virtual CMotionTransform GetTotalMovement(const CBlend2DUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:229 */
	virtual CMotionTransform GetRemainingMovement(const CBlend2DUpdateNode* , CAnimGraphUpdateContext& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:261 */
	virtual void Reset(const CBlend2DUpdateNode* , CAnimGraphUpdateContext& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:301 */
	virtual bool IsFinished(const CBlend2DUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:309 */
	virtual float GetTimeTillFinished(const CBlend2DUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:324 */
	virtual void OnSave(const CBlend2DUpdateNode* , const CAnimGraphUpdateContext& , ISave* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:331 */
	virtual void OnRestore(const CBlend2DUpdateNode* , CAnimGraphUpdateContext& , IRestore* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:338 */
	bool IsManualModeEnabled(const CBlend2DUpdateNode* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:344 */
	void SetManualModeEnable(const CBlend2DUpdateNode* , CAnimGraphUpdateContext& , bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:350 */
	Vector2D GetTargetBlendValue(const CBlend2DUpdateNode* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:356 */
	void SetTargetBlendValue(const CBlend2DUpdateNode* , CAnimGraphUpdateContext& , const Vector2D& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:362 */
	Vector2D GetCurrentBlendValue(const CBlend2DUpdateNode* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:368 */
	void SetCycle(const CBlend2DUpdateNode* , CAnimGraphUpdateContext& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:374 */
	void SetPlaybackRate(const CBlend2DUpdateNode* , CAnimGraphUpdateContext& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:380 */
	const Blend2DWeights_t& GetWeights(const CBlend2DUpdateNode* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:492 */
	BlendItem_t& SetSequence(CBlend2DUpdateNode* , int, const Vector2D& , HSequence, float);
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:386 */
	virtual CRootMotion CalculateRootMotion(const CBlend2DUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:426 */
	virtual void CalculateFootMotion(const CBlend2DUpdateNode* , CAnimGraphUpdateContext& , const CMotionTransform& , CStrideStatus& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:502 */
	void UpdateWeights(const CBlend2DUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:526 */
	Blend2DWeights_t CalcBlendWeights(const CBlend2DUpdateNode* , CAnimGraphUpdateContext& , const Vector2D& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:606 */
	float CalcInfluenceGeneral(const CBlend2DUpdateNode* , const Vector2D& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.cpp:637 */
	float CalcInfluenceDirectional(const CBlend2DUpdateNode* , const Vector2D& , int);
	CPackedHandle<CBlend2DInstanceData> m_hInstanceData; /* 12 4 */
	CRelativeArray<BlendItem_t> m_items; /* 16 8 */
	CAnimInputDamping m_damping; /* 24 0 */
	AnimValueSource m_blendSourceX; /* 56 4 */
	CAnimParamHandle m_paramX; /* 60 2 */
	AnimValueSource m_blendSourceY; /* 64 4 */
	CAnimParamHandle m_paramY; /* 68 2 */
	Blend2DMode m_eBlendMode; /* 72 4 */
	float m_playbackSpeed; /* 76 4 */
	bool m_bLoop; /* 80 1 */
	bool m_bLockBlendOnReset; /* 81 1 */
	bool m_bLockWhenWaning; /* 82 1 */
	void CBlend2DUpdateNode(class CBlend2DUpdateNode *, class CBlend2DUpdateNode &); /* linkage=_ZN18CBlend2DUpdateNodeC4EOS_ */
	void CBlend2DUpdateNode(class CBlend2DUpdateNode *, const class CBlend2DUpdateNode  &); /* linkage=_ZN18CBlend2DUpdateNodeC4ERKS_ */
	void CBlend2DUpdateNode(class CBlend2DUpdateNode *, class CAnimGraphInitContext &, int, enum Blend2DMode); /* linkage=_ZN18CBlend2DUpdateNodeC4ER21CAnimGraphInitContexti11Blend2DMode */
	virtual void Update(const class CBlend2DUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK18CBlend2DUpdateNode6UpdateER23CAnimGraphUpdateContext */
	virtual void CreatePoseOp(const class CBlend2DUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK18CBlend2DUpdateNode12CreatePoseOpER23CAnimGraphUpdateContext */
	virtual PoseHandle GetPoseHandle(const class CBlend2DUpdateNode  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK18CBlend2DUpdateNode13GetPoseHandleERK23CAnimGraphUpdateContext */
	virtual float GetCycle(const class CBlend2DUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK18CBlend2DUpdateNode8GetCycleER23CAnimGraphUpdateContext */
	virtual float GetDuration(const class CBlend2DUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK18CBlend2DUpdateNode11GetDurationER23CAnimGraphUpdateContext */
	virtual class CMotionTransform GetTotalMovement(const class CBlend2DUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK18CBlend2DUpdateNode16GetTotalMovementER23CAnimGraphUpdateContext */
	virtual class CMotionTransform GetRemainingMovement(const class CBlend2DUpdateNode  *, class CAnimGraphUpdateContext &, float); /* linkage=_ZNK18CBlend2DUpdateNode20GetRemainingMovementER23CAnimGraphUpdateContextf */
	virtual void Reset(const class CBlend2DUpdateNode  *, class CAnimGraphUpdateContext &, float); /* linkage=_ZNK18CBlend2DUpdateNode5ResetER23CAnimGraphUpdateContextf */
	virtual bool IsFinished(const class CBlend2DUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK18CBlend2DUpdateNode10IsFinishedER23CAnimGraphUpdateContext */
	virtual float GetTimeTillFinished(const class CBlend2DUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK18CBlend2DUpdateNode19GetTimeTillFinishedER23CAnimGraphUpdateContext */
	virtual void OnSave(const class CBlend2DUpdateNode  *, const class CAnimGraphUpdateContext  &, class ISave *); /* linkage=_ZNK18CBlend2DUpdateNode6OnSaveERK23CAnimGraphUpdateContextP5ISave */
	virtual void OnRestore(const class CBlend2DUpdateNode  *, class CAnimGraphUpdateContext &, class IRestore *); /* linkage=_ZNK18CBlend2DUpdateNode9OnRestoreER23CAnimGraphUpdateContextP8IRestore */
	bool IsManualModeEnabled(const class CBlend2DUpdateNode  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK18CBlend2DUpdateNode19IsManualModeEnabledERK23CAnimGraphUpdateContext */
	void SetManualModeEnable(const class CBlend2DUpdateNode  *, class CAnimGraphUpdateContext &, bool); /* linkage=_ZNK18CBlend2DUpdateNode19SetManualModeEnableER23CAnimGraphUpdateContextb */
	class Vector2D GetTargetBlendValue(const class CBlend2DUpdateNode  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK18CBlend2DUpdateNode19GetTargetBlendValueERK23CAnimGraphUpdateContext */
	void SetTargetBlendValue(const class CBlend2DUpdateNode  *, class CAnimGraphUpdateContext &, const class Vector2D  &); /* linkage=_ZNK18CBlend2DUpdateNode19SetTargetBlendValueER23CAnimGraphUpdateContextRK8Vector2D */
	class Vector2D GetCurrentBlendValue(const class CBlend2DUpdateNode  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK18CBlend2DUpdateNode20GetCurrentBlendValueERK23CAnimGraphUpdateContext */
	void SetCycle(const class CBlend2DUpdateNode  *, class CAnimGraphUpdateContext &, float); /* linkage=_ZNK18CBlend2DUpdateNode8SetCycleER23CAnimGraphUpdateContextf */
	void SetPlaybackRate(const class CBlend2DUpdateNode  *, class CAnimGraphUpdateContext &, float); /* linkage=_ZNK18CBlend2DUpdateNode15SetPlaybackRateER23CAnimGraphUpdateContextf */
	const class Blend2DWeights_t  & GetWeights(const class CBlend2DUpdateNode  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK18CBlend2DUpdateNode10GetWeightsERK23CAnimGraphUpdateContext */
	class BlendItem_t & SetSequence(class CBlend2DUpdateNode *, int, const class Vector2D  &, class HSequence, float); /* linkage=_ZN18CBlend2DUpdateNode11SetSequenceEiRK8Vector2D9HSequencef */
	virtual class CRootMotion CalculateRootMotion(const class CBlend2DUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK18CBlend2DUpdateNode19CalculateRootMotionER23CAnimGraphUpdateContext */
	virtual void CalculateFootMotion(const class CBlend2DUpdateNode  *, class CAnimGraphUpdateContext &, const class CMotionTransform  &, class CStrideStatus &); /* linkage=_ZNK18CBlend2DUpdateNode19CalculateFootMotionER23CAnimGraphUpdateContextRK16CMotionTransformR13CStrideStatus */
	void UpdateWeights(const class CBlend2DUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK18CBlend2DUpdateNode13UpdateWeightsER23CAnimGraphUpdateContext */
	class Blend2DWeights_t CalcBlendWeights(const class CBlend2DUpdateNode  *, class CAnimGraphUpdateContext &, const class Vector2D  &); /* linkage=_ZNK18CBlend2DUpdateNode16CalcBlendWeightsER23CAnimGraphUpdateContextRK8Vector2D */
	float CalcInfluenceGeneral(const class CBlend2DUpdateNode  *, const class Vector2D  &, int); /* linkage=_ZNK18CBlend2DUpdateNode20CalcInfluenceGeneralERK8Vector2Di */
	float CalcInfluenceDirectional(const class CBlend2DUpdateNode  *, const class Vector2D  &, int); /* linkage=_ZNK18CBlend2DUpdateNode24CalcInfluenceDirectionalERK8Vector2Di */
};

// <010382F6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2dupdatenode.h:67
void CBlend2DUpdateNode::CBlend2DUpdateNode(CAnimGraphInitContext& initContext, int nItemCount, Blend2DMode eMode)
{
} /* size: 0 */

