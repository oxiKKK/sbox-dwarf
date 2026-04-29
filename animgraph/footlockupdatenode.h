
//
// animgraph/footlockupdatenode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 18
//	classes: 5
//	structs: 6
//

// <017EE4DC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:22
void TraceSettings_t::TraceSettings_t()
{
} /* size: 0 */

// <017EE4C0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:22
inline void TraceSettings_t::TraceSettings_t()
{
} /* size: 0 */

// <010171C1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:22
// member variables: 2
// struct size: 8
struct TraceSettings_t {
	float m_flTraceHeight; /* 0 4 */
	float m_flTraceRadius; /* 4 4 */
};

// <01818574> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:33
inline void CFootprint::operator=(const CFootprint &)
{
} /* size: 0 */

// <017F6EC9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:33
void CFootprint::CFootprint(const CFootprint &)
{
} /* size: 0 */

// <017F6EA8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:33
inline void CFootprint::CFootprint(const CFootprint &)
{
} /* size: 0 */

// <010171F1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:33
// member functions: 22
// member variables: 4
// class size: 64
class CFootprint {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:36 */
	void CFootprint(CFootprint* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:39 */
	const CMotionTransform& GetEntityTransform(const CFootprint* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:40 */
	void SetEntityTransform(CFootprint* , const CMotionTransform& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:41 */
	void NormalizeEntityTransform(CFootprint* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:44 */
	const VectorAligned& GetPositionWS(const CFootprint* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:45 */
	void SetPositionWS(CFootprint* , const VectorAligned& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:48 */
	float GetDirectionMS(const CFootprint* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:49 */
	void SetDirectionMS(CFootprint* , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:52 */
	const VectorAligned& GetNormalWS(const CFootprint* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:53 */
	void SetNormalWS(CFootprint* , const VectorAligned& );
private:
	CMotionTransform m_xLocalToWorld; /* 0 16 */
	VectorAligned m_vPositionWS __attribute__((__aligned__(16))); /* 16 16 */
	VectorAligned m_vNormalWS __attribute__((__aligned__(16))); /* 32 16 */
	float m_flDirectionMS; /* 48 4 */
	void CFootprint(class CFootprint *); /* linkage=_ZN10CFootprintC4Ev */
	/* <186d512> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:72 */
	const class CMotionTransform  & GetEntityTransform(const class CFootprint  *); /* linkage=_ZNK10CFootprint18GetEntityTransformEv */
	void SetEntityTransform(class CFootprint *, const class CMotionTransform  &); /* linkage=_ZN10CFootprint18SetEntityTransformERK16CMotionTransform */
	/* <186d53b> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:85 */
	void NormalizeEntityTransform(class CFootprint *); /* linkage=_ZN10CFootprint24NormalizeEntityTransformEv */
	/* <186d583> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:91 */
	const class VectorAligned  & GetPositionWS(const class CFootprint  *); /* linkage=_ZNK10CFootprint13GetPositionWSEv */
	void SetPositionWS(class CFootprint *, const class VectorAligned  &); /* linkage=_ZN10CFootprint13SetPositionWSERK13VectorAligned */
	/* <186d5ac> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:104 */
	float GetDirectionMS(const class CFootprint  *); /* linkage=_ZNK10CFootprint14GetDirectionMSEv */
	/* <186d5d5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:110 */
	void SetDirectionMS(class CFootprint *, float); /* linkage=_ZN10CFootprint14SetDirectionMSEf */
	/* <186d686> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:117 */
	const class VectorAligned  & GetNormalWS(const class CFootprint  *); /* linkage=_ZNK10CFootprint11GetNormalWSEv */
	void SetNormalWS(class CFootprint *, const class VectorAligned  &); /* linkage=_ZN10CFootprint11SetNormalWSERK13VectorAligned */
	void CFootprint(class CFootprint *, const class CFootprint  &); /* linkage=_ZN10CFootprintC4ERKS_ */
	class CFootprint & operator=(class CFootprint *, const class CFootprint  &); /* linkage=_ZN10CFootprintaSERKS_ */
} __attribute__((__aligned__(16)));

// <017D9992> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:33
// member functions: 24
// member variables: 4
// class size: 64
class CFootprint {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:36 */
	void CFootprint(CFootprint* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:39 */
	const CMotionTransform& GetEntityTransform(const CFootprint* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:40 */
	void SetEntityTransform(CFootprint* , const CMotionTransform& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:41 */
	void NormalizeEntityTransform(CFootprint* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:44 */
	const VectorAligned& GetPositionWS(const CFootprint* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:45 */
	void SetPositionWS(CFootprint* , const VectorAligned& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:48 */
	float GetDirectionMS(const CFootprint* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:49 */
	void SetDirectionMS(CFootprint* , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:52 */
	const VectorAligned& GetNormalWS(const CFootprint* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:53 */
	void SetNormalWS(CFootprint* , const VectorAligned& );
private:
	CMotionTransform m_xLocalToWorld; /* 0 16 */
	VectorAligned m_vPositionWS __attribute__((__aligned__(16))); /* 16 16 */
	VectorAligned m_vNormalWS __attribute__((__aligned__(16))); /* 32 16 */
	float m_flDirectionMS; /* 48 4 */
	void CFootprint(CFootprint* , const CFootprint& );
	CFootprint& operator=(CFootprint* , const CFootprint& );
	void CFootprint(class CFootprint *); /* linkage=_ZN10CFootprintC4Ev */
	/* <186d512> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:72 */
	const class CMotionTransform  & GetEntityTransform(const class CFootprint  *); /* linkage=_ZNK10CFootprint18GetEntityTransformEv */
	void SetEntityTransform(class CFootprint *, const class CMotionTransform  &); /* linkage=_ZN10CFootprint18SetEntityTransformERK16CMotionTransform */
	/* <186d53b> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:85 */
	void NormalizeEntityTransform(class CFootprint *); /* linkage=_ZN10CFootprint24NormalizeEntityTransformEv */
	/* <186d583> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:91 */
	const class VectorAligned  & GetPositionWS(const class CFootprint  *); /* linkage=_ZNK10CFootprint13GetPositionWSEv */
	void SetPositionWS(class CFootprint *, const class VectorAligned  &); /* linkage=_ZN10CFootprint13SetPositionWSERK13VectorAligned */
	/* <186d5ac> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:104 */
	float GetDirectionMS(const class CFootprint  *); /* linkage=_ZNK10CFootprint14GetDirectionMSEv */
	/* <186d5d5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:110 */
	void SetDirectionMS(class CFootprint *, float); /* linkage=_ZN10CFootprint14SetDirectionMSEf */
	/* <186d686> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:117 */
	const class VectorAligned  & GetNormalWS(const class CFootprint  *); /* linkage=_ZNK10CFootprint11GetNormalWSEv */
	void SetNormalWS(class CFootprint *, const class VectorAligned  &); /* linkage=_ZN10CFootprint11SetNormalWSERK13VectorAligned */
	void CFootprint(class CFootprint *, const class CFootprint  &); /* linkage=_ZN10CFootprintC4ERKS_ */
	class CFootprint & operator=(class CFootprint *, const class CFootprint  &); /* linkage=_ZN10CFootprintaSERKS_ */
} __attribute__((__aligned__(16)));

// <017EE49E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:65
void FootFixedSettings::FootFixedSettings()
{
} /* size: 0 */

// <017EE482> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:65
inline void FootFixedSettings::FootFixedSettings()
{
} /* size: 0 */

// <010173AD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:65
// member functions: 2
// member variables: 9
// struct size: 64
struct FootFixedSettings {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:67 */
	void TraceFootPrint(const FootFixedSettings* , CFootprint& , const CAnimGraphUpdateContext& , bool, bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:69 */
	CTraceResult TracePoint(const FootFixedSettings* , CFootprint& , const CAnimGraphUpdateContext& , Vector, const Vector& , bool);
	TraceSettings_t m_traceSettings; /* 0 8 */
	VectorAligned m_vFootBaseBindPosePositionMS __attribute__((__aligned__(16))); /* 16 16 */
	float m_flFootBaseLength; /* 32 4 */
	float m_flMaxRotationLeft; /* 36 4 */
	float m_flMaxRotationRight; /* 40 4 */
	bool m_bEnableTracing; /* 44 1 */
	float m_flTraceAngleBlend; /* 48 4 */
	int m_nDisableTagIndex; /* 52 4 */
	int m_nFootIndex; /* 56 4 */
} __attribute__((__aligned__(16)));

// <017D9B88> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:65
// member functions: 3
// member variables: 9
// struct size: 64
struct FootFixedSettings {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:67 */
	void TraceFootPrint(const FootFixedSettings* , CFootprint& , const CAnimGraphUpdateContext& , bool, bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:69 */
	CTraceResult TracePoint(const FootFixedSettings* , CFootprint& , const CAnimGraphUpdateContext& , Vector, const Vector& , bool);
	TraceSettings_t m_traceSettings; /* 0 8 */
	VectorAligned m_vFootBaseBindPosePositionMS __attribute__((__aligned__(16))); /* 16 16 */
	float m_flFootBaseLength; /* 32 4 */
	float m_flMaxRotationLeft; /* 36 4 */
	float m_flMaxRotationRight; /* 40 4 */
	bool m_bEnableTracing; /* 44 1 */
	float m_flTraceAngleBlend; /* 48 4 */
	int m_nDisableTagIndex; /* 52 4 */
	int m_nFootIndex; /* 56 4 */
	void FootFixedSettings(FootFixedSettings* );
} __attribute__((__aligned__(16)));

// <017EE6EA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:101
void FootInstanceSettings::FootInstanceSettings()
{
} /* size: 0 */

// <017EE6CE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:101
inline void FootInstanceSettings::FootInstanceSettings()
{
} /* size: 0 */

// <010174CE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:101
// member functions: 3
// member variables: 19
// struct size: 416
struct FootInstanceSettings {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:103 */
	void DebugDraw(const FootInstanceSettings* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:105 */
	CMotionTransform ResetRotations(FootInstanceSettings* , const CAnimGraphUpdateContext& , const CFootMotionStatus& , const CMotionTransform& , const FootFixedSettings& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:106 */
	void CalcPredictedFootprint(FootInstanceSettings* , const CAnimGraphUpdateContext& , const CFootMotionStatus& , const CMotionTransform& , const FootFixedSettings& );
	CFootprint m_predictedFootprint __attribute__((__aligned__(16))); /* 0 64 */
	CFootprint m_nextFootprint __attribute__((__aligned__(16))); /* 64 64 */
	CFootprint m_prevFootprint __attribute__((__aligned__(16))); /* 128 64 */
	CMotionTransform m_footRelativeTransform; /* 192 16 */
	CriticallyDampedFloat m_dampedPredictedPositionZWS; /* 208 24 */
	CriticallyDampedNormal m_dampedPredictedNormalWS; /* 232 56 */
	VectorAligned m_vMidpointPositionMS __attribute__((__aligned__(16))); /* 288 16 */
	VectorAligned m_vToStrideStartPosMS __attribute__((__aligned__(16))); /* 304 16 */
	float m_flMaxExtent; /* 320 4 */
	CFootTrajectory m_trajectory; /* 324 20 */
	FootMotionStage m_eMotionStage; /* 344 4 */
	CFootTrajectory m_nextTrajectory; /* 348 20 */
	float m_lastTime; /* 368 4 */
	float m_nextTime; /* 372 4 */
	VectorAligned m_vTrajectoryBlendOffsetWS __attribute__((__aligned__(16))); /* 384 16 */
	float m_flDirectionBlendOffsetWS; /* 400 4 */
	float m_flTrajectoryBlendStartTime; /* 404 4 */
	bool m_bIsLocked; /* 408 1 */
	bool m_bParked; /* 409 1 */
} __attribute__((__aligned__(16)));

// <017D9CB8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:101
// member functions: 4
// member variables: 19
// struct size: 416
struct FootInstanceSettings {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:103 */
	void DebugDraw(const FootInstanceSettings* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:105 */
	CMotionTransform ResetRotations(FootInstanceSettings* , const CAnimGraphUpdateContext& , const CFootMotionStatus& , const CMotionTransform& , const FootFixedSettings& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:106 */
	void CalcPredictedFootprint(FootInstanceSettings* , const CAnimGraphUpdateContext& , const CFootMotionStatus& , const CMotionTransform& , const FootFixedSettings& );
	CFootprint m_predictedFootprint __attribute__((__aligned__(16))); /* 0 64 */
	CFootprint m_nextFootprint __attribute__((__aligned__(16))); /* 64 64 */
	CFootprint m_prevFootprint __attribute__((__aligned__(16))); /* 128 64 */
	CMotionTransform m_footRelativeTransform; /* 192 16 */
	CriticallyDampedFloat m_dampedPredictedPositionZWS; /* 208 24 */
	CriticallyDampedNormal m_dampedPredictedNormalWS; /* 232 56 */
	VectorAligned m_vMidpointPositionMS __attribute__((__aligned__(16))); /* 288 16 */
	VectorAligned m_vToStrideStartPosMS __attribute__((__aligned__(16))); /* 304 16 */
	float m_flMaxExtent; /* 320 4 */
	CFootTrajectory m_trajectory; /* 324 20 */
	FootMotionStage m_eMotionStage; /* 344 4 */
	CFootTrajectory m_nextTrajectory; /* 348 20 */
	float m_lastTime; /* 368 4 */
	float m_nextTime; /* 372 4 */
	VectorAligned m_vTrajectoryBlendOffsetWS __attribute__((__aligned__(16))); /* 384 16 */
	float m_flDirectionBlendOffsetWS; /* 400 4 */
	float m_flTrajectoryBlendStartTime; /* 404 4 */
	bool m_bIsLocked; /* 408 1 */
	bool m_bParked; /* 409 1 */
	void FootInstanceSettings(FootInstanceSettings* );
} __attribute__((__aligned__(16)));

// <01017B8D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:138
// member function: 1
// member variables: 9
// struct size: 144
struct CFootLockUpdateNodeInstanceData {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:140 */
	void CFootLockUpdateNodeInstanceData(CFootLockUpdateNodeInstanceData* , CAnimGraphInitContext& , int);
	CRelativeArray<FootInstanceSettings> m_feet; /* 0 8 */
	uint8 m_resetCount; /* 8 1 */
	PoseHandle m_hPoseHandle; /* 9 1 */
	bool m_bResetPending; /* 10 1 */
	CriticallyDampedFloat m_TiltPitchSpring; /* 12 24 */
	CriticallyDampedFloat m_TiltRollSpring; /* 36 24 */
	VectorAligned m_vHipShiftOffsetWS __attribute__((__aligned__(16))); /* 64 16 */
	CDampedVectorAligned m_dampedHipShiftOffset __attribute__((__aligned__(16))); /* 80 48 */
	CDampedValue m_dampedRootHeight; /* 128 12 */
} __attribute__((__aligned__(16)));

// <017E31ED> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:158
// member functions: 84
// member variables: 21
// vtable entries: 5
// class size: 144
class CFootLockUpdateNode : public CUnaryUpdateNode {
public:
	/* class CUnaryUpdateNode <ancestor>; */ /* 0 0 */
	void CFootLockUpdateNode(CFootLockUpdateNode* , CFootLockUpdateNode& );
	void CFootLockUpdateNode(CFootLockUpdateNode* , const CFootLockUpdateNode& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:394 */
	void CFootLockUpdateNode(CFootLockUpdateNode* , CAnimGraphInitContext& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:1067 */
	VectorAligned CalculateFootBaseOffset(float, float, float, const VectorAligned& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:433 */
	virtual void PostUpdate(const CFootLockUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:652 */
	virtual void CreatePoseOp(const CFootLockUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:699 */
	virtual PoseHandle GetPoseHandle(const CFootLockUpdateNode* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:706 */
	virtual void Reset(const CFootLockUpdateNode* , CAnimGraphUpdateContext& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:740 */
	int GetFootCount(const CFootLockUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:746 */
	const VectorAligned& GetCurrentFootPosition(const CFootLockUpdateNode* , CAnimGraphUpdateContext& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:752 */
	const VectorAligned& GetCurrentFootDirection(const CFootLockUpdateNode* , CAnimGraphUpdateContext& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:758 */
	VectorAligned EstimateNewFootPosition(const CFootLockUpdateNode* , CAnimGraphUpdateContext& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:779 */
	VectorAligned EstimateNewFootPositionFlattened(const CFootLockUpdateNode* , CAnimGraphUpdateContext& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:840 */
	const VectorAligned& GetNextFootPosition(const CFootLockUpdateNode* , CAnimGraphUpdateContext& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:846 */
	VectorAligned GetNextFootDirection(const CFootLockUpdateNode* , CAnimGraphUpdateContext& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:861 */
	const VectorAligned& GetPrevFootPosition(const CFootLockUpdateNode* , CAnimGraphUpdateContext& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:867 */
	VectorAligned GetPrevFootDirection(const CFootLockUpdateNode* , CAnimGraphUpdateContext& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:882 */
	CTransform GetPrevFootTransform(const CFootLockUpdateNode* , CAnimGraphUpdateContext& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:889 */
	VectorAligned GetMidpointFootPosition(const CFootLockUpdateNode* , CAnimGraphUpdateContext& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:896 */
	float GetFootProgression(const CFootLockUpdateNode* , CAnimGraphUpdateContext& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:902 */
	FootMotionStage GetFootMotionStage(const CFootLockUpdateNode* , CAnimGraphUpdateContext& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:908 */
	FootLockStatus GetFootLockStatus(const CFootLockUpdateNode* , CAnimGraphUpdateContext& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:924 */
	Vector GetTiltVector(const CFootLockUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:937 */
	CFootTrajectory GetCurrentFootTrajectory(const CFootLockUpdateNode* , CAnimGraphUpdateContext& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:943 */
	CFootTrajectory EstimateNewFootTrajectory(const CFootLockUpdateNode* , CAnimGraphUpdateContext& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:404 */
	virtual void CollectVisualizations(const CFootLockUpdateNode* , const CAnimGraphUpdateContext& , IAnimationGraphVisualizationManager* );
protected:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:961 */
	VectorAligned CalcFootBasePositionWS(const CFootLockUpdateNode* , const CAnimGraphUpdateContext& , const CFootTrajectory& , const CMotionTransform& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:1079 */
	void CalculateTilt(const CFootLockUpdateNode* , CAnimGraphUpdateContext& , const CMotionTransform& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:1153 */
	void ParkToStancePos(const CFootLockUpdateNode* , CAnimGraphUpdateContext& , int, CMotionTransform& , const CFootMotionStatus& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:1228 */
	void ResetFoot(const CFootLockUpdateNode* , CAnimGraphUpdateContext& , int, CMotionTransform& , const CFootMotionStatus& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:1288 */
	void ResetToNewProgression(const CFootLockUpdateNode* , CAnimGraphUpdateContext& , int, CMotionTransform& , const CFootMotionStatus& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:1460 */
	void ModulateStepHeight(const CFootLockUpdateNode* , CFootTrajectory& , float, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:1490 */
	VectorAligned CalcStrideCurveOffset(const CFootLockUpdateNode* , const VectorAligned& , const FootInstanceSettings& , const CFootTrajectory& , const CMotionTransform& , const VectorAligned& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:1544 */
	float CalcInterpolatedFootDirectionWS(const CFootLockUpdateNode* , const CAnimGraphUpdateContext& , int, const CFootTrajectory& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:1568 */
	VectorAligned CalcFootBaseFromOrientationWS(const CFootLockUpdateNode* , const CAnimGraphUpdateContext& , int, const CFootTrajectory& , const CMotionTransform& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:1606 */
	VectorAligned CalcFootBaseNormalWS(const CFootLockUpdateNode* , const CAnimGraphUpdateContext& , const FootInstanceSettings& , const CFootTrajectory& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:1618 */
	bool IsNewCycleStart(const CFootLockUpdateNode* , const FootInstanceSettings& , const CFootMotionStatus& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:1626 */
	void UpdateHipShift(const CFootLockUpdateNode* , CAnimGraphUpdateContext& , const CStrideStatus& , const CMotionTransform& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:1704 */
	void CalculateBlendOffsets(const CFootLockUpdateNode* , CAnimGraphUpdateContext& , int, const VectorAligned& , float, const CMotionTransform& , const CFootTrajectory& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:1735 */
	void UpdateRootDamping(const CFootLockUpdateNode* , CAnimGraphUpdateContext& , const CMotionTransform& );
	CPackedHandle<FootLockPoseOpFixedSettings> m_hOpFixedSettings; /* 16 4 */
	CPackedHandle<FootLockPoseOpInstanceSettings> m_hOpInstanceSettings; /* 20 4 */
	CPackedHandle<CFootLockUpdateNodeInstanceData> m_hInstData; /* 24 4 */
	CRelativeArray<FootFixedSettings> m_footSettings; /* 28 8 */
	CAnimInputDamping m_hipShiftDamping; /* 40 0 */
	CAnimInputDamping m_rootHeightDamping; /* 72 0 */
	float m_flStrideCurveScale; /* 104 4 */
	float m_flStrideCurveLimitScale; /* 108 4 */
	float m_flStepHeightIncreaseScale; /* 112 4 */
	float m_flStepHeightDecreaseScale; /* 116 4 */
	float m_flHipShiftScale; /* 120 4 */
	float m_flBlendTime; /* 124 4 */
	float m_flMaxRootHeightOffset; /* 128 4 */
	float m_flMinRootHeightOffset; /* 132 4 */
	bool m_bApplyFootRotationLimits; /* 136 1 */
	bool m_bApplyHipShift; /* 137 1 */
	bool m_bModulateStepHeight; /* 138 1 */
	bool m_bResetChild; /* 139 1 */
	bool m_bEnableVerticalCurvedPaths; /* 140 1 */
	bool m_bEnableRootHeightDamping; /* 141 1 */
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:1221 */
	void SnapDampedPredictions(const CFootLockUpdateNode* , FootInstanceSettings& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:418 */
	CStrideStatus CalculateFootMotionList(const CFootLockUpdateNode* , CAnimGraphUpdateContext& , const CMotionTransform& );
	void CFootLockUpdateNode(class CFootLockUpdateNode *, class CFootLockUpdateNode &); /* linkage=_ZN19CFootLockUpdateNodeC4EOS_ */
	void CFootLockUpdateNode(class CFootLockUpdateNode *, const class CFootLockUpdateNode  &); /* linkage=_ZN19CFootLockUpdateNodeC4ERKS_ */
	void CFootLockUpdateNode(class CFootLockUpdateNode *, class CAnimGraphInitContext &, int); /* linkage=_ZN19CFootLockUpdateNodeC4ER21CAnimGraphInitContexti */
	/* <1876a92> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:1067 */
	class VectorAligned CalculateFootBaseOffset(float, float, float, const class VectorAligned  &); /* linkage=_ZN19CFootLockUpdateNode23CalculateFootBaseOffsetEfffRK13VectorAligned */
	virtual void PostUpdate(const class CFootLockUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK19CFootLockUpdateNode10PostUpdateER23CAnimGraphUpdateContext */
	virtual void CreatePoseOp(const class CFootLockUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK19CFootLockUpdateNode12CreatePoseOpER23CAnimGraphUpdateContext */
	virtual PoseHandle GetPoseHandle(const class CFootLockUpdateNode  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK19CFootLockUpdateNode13GetPoseHandleERK23CAnimGraphUpdateContext */
	virtual void Reset(const class CFootLockUpdateNode  *, class CAnimGraphUpdateContext &, float); /* linkage=_ZNK19CFootLockUpdateNode5ResetER23CAnimGraphUpdateContextf */
	int GetFootCount(const class CFootLockUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK19CFootLockUpdateNode12GetFootCountER23CAnimGraphUpdateContext */
	/* <18760b8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:746 */
	const class VectorAligned  & GetCurrentFootPosition(const class CFootLockUpdateNode  *, class CAnimGraphUpdateContext &, int); /* linkage=_ZNK19CFootLockUpdateNode22GetCurrentFootPositionER23CAnimGraphUpdateContexti */
	const class VectorAligned  & GetCurrentFootDirection(const class CFootLockUpdateNode  *, class CAnimGraphUpdateContext &, int); /* linkage=_ZNK19CFootLockUpdateNode23GetCurrentFootDirectionER23CAnimGraphUpdateContexti */
	class VectorAligned EstimateNewFootPosition(const class CFootLockUpdateNode  *, class CAnimGraphUpdateContext &, int); /* linkage=_ZNK19CFootLockUpdateNode23EstimateNewFootPositionER23CAnimGraphUpdateContexti */
	class VectorAligned EstimateNewFootPositionFlattened(const class CFootLockUpdateNode  *, class CAnimGraphUpdateContext &, int); /* linkage=_ZNK19CFootLockUpdateNode32EstimateNewFootPositionFlattenedER23CAnimGraphUpdateContexti */
	/* <18762a0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:840 */
	const class VectorAligned  & GetNextFootPosition(const class CFootLockUpdateNode  *, class CAnimGraphUpdateContext &, int); /* linkage=_ZNK19CFootLockUpdateNode19GetNextFootPositionER23CAnimGraphUpdateContexti */
	class VectorAligned GetNextFootDirection(const class CFootLockUpdateNode  *, class CAnimGraphUpdateContext &, int); /* linkage=_ZNK19CFootLockUpdateNode20GetNextFootDirectionER23CAnimGraphUpdateContexti */
	/* <18764b1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:861 */
	const class VectorAligned  & GetPrevFootPosition(const class CFootLockUpdateNode  *, class CAnimGraphUpdateContext &, int); /* linkage=_ZNK19CFootLockUpdateNode19GetPrevFootPositionER23CAnimGraphUpdateContexti */
	class VectorAligned GetPrevFootDirection(const class CFootLockUpdateNode  *, class CAnimGraphUpdateContext &, int); /* linkage=_ZNK19CFootLockUpdateNode20GetPrevFootDirectionER23CAnimGraphUpdateContexti */
	class CTransform GetPrevFootTransform(const class CFootLockUpdateNode  *, class CAnimGraphUpdateContext &, int); /* linkage=_ZNK19CFootLockUpdateNode20GetPrevFootTransformER23CAnimGraphUpdateContexti */
	class VectorAligned GetMidpointFootPosition(const class CFootLockUpdateNode  *, class CAnimGraphUpdateContext &, int); /* linkage=_ZNK19CFootLockUpdateNode23GetMidpointFootPositionER23CAnimGraphUpdateContexti */
	float GetFootProgression(const class CFootLockUpdateNode  *, class CAnimGraphUpdateContext &, int); /* linkage=_ZNK19CFootLockUpdateNode18GetFootProgressionER23CAnimGraphUpdateContexti */
	/* <18766c2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:902 */
	enum FootMotionStage GetFootMotionStage(const class CFootLockUpdateNode  *, class CAnimGraphUpdateContext &, int); /* linkage=_ZNK19CFootLockUpdateNode18GetFootMotionStageER23CAnimGraphUpdateContexti */
	enum FootLockStatus GetFootLockStatus(const class CFootLockUpdateNode  *, class CAnimGraphUpdateContext &, int); /* linkage=_ZNK19CFootLockUpdateNode17GetFootLockStatusER23CAnimGraphUpdateContexti */
	class Vector GetTiltVector(const class CFootLockUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK19CFootLockUpdateNode13GetTiltVectorER23CAnimGraphUpdateContext */
	/* <18768aa> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:937 */
	class CFootTrajectory GetCurrentFootTrajectory(const class CFootLockUpdateNode  *, class CAnimGraphUpdateContext &, int); /* linkage=_ZNK19CFootLockUpdateNode24GetCurrentFootTrajectoryER23CAnimGraphUpdateContexti */
	class CFootTrajectory EstimateNewFootTrajectory(const class CFootLockUpdateNode  *, class CAnimGraphUpdateContext &, int); /* linkage=_ZNK19CFootLockUpdateNode25EstimateNewFootTrajectoryER23CAnimGraphUpdateContexti */
	virtual void CollectVisualizations(const class CFootLockUpdateNode  *, const class CAnimGraphUpdateContext  &, class IAnimationGraphVisualizationManager *); /* linkage=_ZNK19CFootLockUpdateNode21CollectVisualizationsERK23CAnimGraphUpdateContextP35IAnimationGraphVisualizationManager */
	class VectorAligned CalcFootBasePositionWS(const class CFootLockUpdateNode  *, const class CAnimGraphUpdateContext  &, const class CFootTrajectory  &, const class CMotionTransform  &, int); /* linkage=_ZNK19CFootLockUpdateNode22CalcFootBasePositionWSERK23CAnimGraphUpdateContextRK15CFootTrajectoryRK16CMotionTransformi */
	/* <187cc8a> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:1079 */
	void CalculateTilt(const class CFootLockUpdateNode  *, class CAnimGraphUpdateContext &, const class CMotionTransform  &); /* linkage=_ZNK19CFootLockUpdateNode13CalculateTiltER23CAnimGraphUpdateContextRK16CMotionTransform */
	void ParkToStancePos(const class CFootLockUpdateNode  *, class CAnimGraphUpdateContext &, int, class CMotionTransform &, const class CFootMotionStatus  &); /* linkage=_ZNK19CFootLockUpdateNode15ParkToStancePosER23CAnimGraphUpdateContextiR16CMotionTransformRK17CFootMotionStatus */
	void ResetFoot(const class CFootLockUpdateNode  *, class CAnimGraphUpdateContext &, int, class CMotionTransform &, const class CFootMotionStatus  &); /* linkage=_ZNK19CFootLockUpdateNode9ResetFootER23CAnimGraphUpdateContextiR16CMotionTransformRK17CFootMotionStatus */
	void ResetToNewProgression(const class CFootLockUpdateNode  *, class CAnimGraphUpdateContext &, int, class CMotionTransform &, const class CFootMotionStatus  &); /* linkage=_ZNK19CFootLockUpdateNode21ResetToNewProgressionER23CAnimGraphUpdateContextiR16CMotionTransformRK17CFootMotionStatus */
	/* <18771a8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:1460 */
	void ModulateStepHeight(const class CFootLockUpdateNode  *, class CFootTrajectory &, float, float); /* linkage=_ZNK19CFootLockUpdateNode18ModulateStepHeightER15CFootTrajectoryff */
	class VectorAligned CalcStrideCurveOffset(const class CFootLockUpdateNode  *, const class VectorAligned  &, const class FootInstanceSettings  &, const class CFootTrajectory  &, const class CMotionTransform  &, const class VectorAligned  &); /* linkage=_ZNK19CFootLockUpdateNode21CalcStrideCurveOffsetERK13VectorAlignedRK20FootInstanceSettingsRK15CFootTrajectoryRK16CMotionTransformS2_ */
	float CalcInterpolatedFootDirectionWS(const class CFootLockUpdateNode  *, const class CAnimGraphUpdateContext  &, int, const class CFootTrajectory  &); /* linkage=_ZNK19CFootLockUpdateNode31CalcInterpolatedFootDirectionWSERK23CAnimGraphUpdateContextiRK15CFootTrajectory */
	class VectorAligned CalcFootBaseFromOrientationWS(const class CFootLockUpdateNode  *, const class CAnimGraphUpdateContext  &, int, const class CFootTrajectory  &, const class CMotionTransform  &); /* linkage=_ZNK19CFootLockUpdateNode29CalcFootBaseFromOrientationWSERK23CAnimGraphUpdateContextiRK15CFootTrajectoryRK16CMotionTransform */
	class VectorAligned CalcFootBaseNormalWS(const class CFootLockUpdateNode  *, const class CAnimGraphUpdateContext  &, const class FootInstanceSettings  &, const class CFootTrajectory  &); /* linkage=_ZNK19CFootLockUpdateNode20CalcFootBaseNormalWSERK23CAnimGraphUpdateContextRK20FootInstanceSettingsRK15CFootTrajectory */
	/* <187722e> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:1618 */
	bool IsNewCycleStart(const class CFootLockUpdateNode  *, const class FootInstanceSettings  &, const class CFootMotionStatus  &); /* linkage=_ZNK19CFootLockUpdateNode15IsNewCycleStartERK20FootInstanceSettingsRK17CFootMotionStatus */
	/* <1878a0a> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:1626 */
	void UpdateHipShift(const class CFootLockUpdateNode  *, class CAnimGraphUpdateContext &, const class CStrideStatus  &, const class CMotionTransform  &); /* linkage=_ZNK19CFootLockUpdateNode14UpdateHipShiftER23CAnimGraphUpdateContextRK13CStrideStatusRK16CMotionTransform */
	void CalculateBlendOffsets(const class CFootLockUpdateNode  *, class CAnimGraphUpdateContext &, int, const class VectorAligned  &, float, const class CMotionTransform  &, const class CFootTrajectory  &); /* linkage=_ZNK19CFootLockUpdateNode21CalculateBlendOffsetsER23CAnimGraphUpdateContextiRK13VectorAlignedfRK16CMotionTransformRK15CFootTrajectory */
	void UpdateRootDamping(const class CFootLockUpdateNode  *, class CAnimGraphUpdateContext &, const class CMotionTransform  &); /* linkage=_ZNK19CFootLockUpdateNode17UpdateRootDampingER23CAnimGraphUpdateContextRK16CMotionTransform */
	/* <1876e5c> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:1221 */
	void SnapDampedPredictions(const class CFootLockUpdateNode  *, class FootInstanceSettings &); /* linkage=_ZNK19CFootLockUpdateNode21SnapDampedPredictionsER20FootInstanceSettings */
	/* <1875f51> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:418 */
	class CStrideStatus CalculateFootMotionList(const class CFootLockUpdateNode  *, class CAnimGraphUpdateContext &, const class CMotionTransform  &); /* linkage=_ZNK19CFootLockUpdateNode23CalculateFootMotionListER23CAnimGraphUpdateContextRK16CMotionTransform */
};

// <01037993> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:162
void CFootLockUpdateNode::CFootLockUpdateNode(CAnimGraphInitContext& initContext, int nLockableFootCount)
{
} /* size: 0 */

// <01823189> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:264
inline void Get(ISchemaSystemTypeScope* pTypeScope)
{
} /* size: 0 */

// <017DAA18> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:264
// member functions: 2
// class size: 1
class CSchemaTypeOf<FootLockSubVisualization> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:264 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:264 */
	const char* GetEnumName(void);
};

// <017EAA4C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:265
// function calls: 7
void CFootLockAnimationGraphVisualizerInfo::~CFootLockAnimationGraphVisualizerInfo()
{
	ValidateAlignment<CUtlHashtableEntry<int, empty_t> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtabl this); // 10
	IAnimationGraphVisualizerInfo::~IAnimationGraphVisualizerInfo(); // 265
} /* size: 70, inline expansions: 7 (131 bytes) */

// <017EA894> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:265
// function calls: 8
void CFootLockAnimationGraphVisualizerInfo::~CFootLockAnimationGraphVisualizerInfo()
{
	ValidateAlignment<CUtlHashtableEntry<int, empty_t> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtabl this); // 10
	IAnimationGraphVisualizerInfo::~IAnimationGraphVisualizerInfo(); // 265
	CFootLockAnimationGraphVisualizerInfo::~CFootLockAnimationGraphVisualizerInfo(); // 265
} /* size: 77, inline expansions: 8 (174 bytes) */

// <017EA877> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:265
inline void CFootLockAnimationGraphVisualizerInfo::~CFootLockAnimationGraphVisualizerInfo()
{
} /* size: 0 */

// <01715AC8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:265
// member functions: 12
// member variable: 1
// vtable entries: 2
// class size: 40
class CFootLockAnimationGraphVisualizerInfo : public IAnimationGraphVisualizerInfo {
public:
	/* class IAnimationGraphVisualizerInfo <ancestor>; */ /* 0 40 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:268 */
	CFootLockAnimationGraphVisualizerInfo* Get(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:270 */
	void CFootLockAnimationGraphVisualizerInfo(CFootLockAnimationGraphVisualizerInfo* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:275 */
	virtual const char* GetName(const CFootLockAnimationGraphVisualizerInfo* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:280 */
	virtual void GetSubVisualizerNamesAndValues(const CFootLockAnimationGraphVisualizerInfo* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& , CUtlVector<long long int, CUtlMemory<long long int, int> >& );
	virtual void ~CFootLockAnimationGraphVisualizerInfo(CFootLockAnimationGraphVisualizerInfo* );
	void CFootLockAnimationGraphVisualizerInfo(class CFootLockAnimationGraphVisualizerInfo *, class CFootLockAnimationGraphVisualizerInfo &); /* linkage=_ZN37CFootLockAnimationGraphVisualizerInfoC4EOS_ */
	void CFootLockAnimationGraphVisualizerInfo(class CFootLockAnimationGraphVisualizerInfo *, const class CFootLockAnimationGraphVisualizerInfo  &); /* linkage=_ZN37CFootLockAnimationGraphVisualizerInfoC4ERKS_ */
	class CFootLockAnimationGraphVisualizerInfo * Get(void); /* linkage=_ZN37CFootLockAnimationGraphVisualizerInfo3GetEv */
	void CFootLockAnimationGraphVisualizerInfo(class CFootLockAnimationGraphVisualizerInfo *); /* linkage=_ZN37CFootLockAnimationGraphVisualizerInfoC4Ev */
	virtual const char  * GetName(const class CFootLockAnimationGraphVisualizerInfo  *); /* linkage=_ZNK37CFootLockAnimationGraphVisualizerInfo7GetNameEv */
	virtual void GetSubVisualizerNamesAndValues(const class CFootLockAnimationGraphVisualizerInfo  *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &, class CUtlVector<long long int, CUtlMemory<long long int, int> > &); /* linkage=_ZNK37CFootLockAnimationGraphVisualizerInfo30GetSubVisualizerNamesAndValuesER10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEERS0_IxS2_IxiEE */
	virtual void ~CFootLockAnimationGraphVisualizerInfo(class CFootLockAnimationGraphVisualizerInfo *); /* linkage=_ZN37CFootLockAnimationGraphVisualizerInfoD4Ev */
};

// <01823172> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:270
void CFootLockAnimationGraphVisualizerInfo::CFootLockAnimationGraphVisualizerInfo()
{
} /* size: 0 */

// <01823159> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:270
inline void CFootLockAnimationGraphVisualizerInfo::CFootLockAnimationGraphVisualizerInfo()
{
} /* size: 0 */

// <0182312B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:275
void CFootLockAnimationGraphVisualizerInfo::GetName()
{
} /* size: 12 */

// <018230AF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.h:280
void CFootLockAnimationGraphVisualizerInfo::GetSubVisualizerNamesAndValues(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& names, CUtlVector<long long int, CUtlMemory<long long int, int> >& values)
{
} /* size: 15 */

