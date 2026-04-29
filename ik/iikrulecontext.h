
//
// ik/iikrulecontext.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	classes: 5
//

// <00077A7A> ik/iikrulecontext.h:16
// member functions: 2
// member variables: 11
// class size: 88
class CIKRuleContextUpdateTargetInput {
	/* ik/iikrulecontext.h:19 */
	void CIKRuleContextUpdateTargetInput(CIKRuleContextUpdateTargetInput* , const CIKChainDescription* , const Vector& , const Quaternion& , int, const Vector& , CTraceRequest& , const CIKChainRuleInterpolationState* , const CSpaceAgnosticBoneAccessor& , const CIKUpdateInputState& , const CTransform& , float);
	const class CIKChainDescription * m_pChainDescription; /* 0 8 */
	const class Quaternion & m_qWsTilt; /* 8 8 */
	const class Vector & m_vWsTiltNormal; /* 16 8 */
	const class Vector & m_vWsAverageFootPosition; /* 24 8 */
	const int m_nTiltBoneIndex; /* 32 4 */
	const class CIKChainRuleInterpolationState * m_pInterpolationState; /* 40 8 */
	const class CIKUpdateInputState & m_IKInputState; /* 48 8 */
	const class CSpaceAgnosticBoneAccessor & m_BoneAccessor; /* 56 8 */
	const class CTransform & m_xWsAnimationOnlyTarget; /* 64 8 */
	CTraceRequest & m_TraceHelper; /* 72 8 */
	const float m_flDeltaTime; /* 80 4 */
	void CIKRuleContextUpdateTargetInput(class CIKRuleContextUpdateTargetInput *, const class CIKChainDescription  *, const class Vector  &, const class Quaternion  &, int, const class Vector  &, class CTraceRequest &, const class CIKChainRuleInterpolationState  *, const class CSpaceAgnosticBoneAccessor  &, const class CIKUpdateInputState  &, const class CTransform  &, float); /* linkage=_ZN31CIKRuleContextUpdateTargetInputC4EPK19CIKChainDescriptionRK6VectorRK10QuaternioniS5_R13CTraceRequestPK30CIKChainRuleInterpolationStateRK26CSpaceAgnosticBoneAccessorRK19CIKUpdateInputStateRK10CTransformf */
};

// <01B8D761> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/iikrulecontext.h:16
// member functions: 2
// member variables: 11
// class size: 88
class CIKRuleContextUpdateTargetInput {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/iikrulecontext.h:19 */
	void CIKRuleContextUpdateTargetInput(CIKRuleContextUpdateTargetInput* , const CIKChainDescription* , const Vector& , const Quaternion& , int, const Vector& , CTraceRequest& , const CIKChainRuleInterpolationState* , const CSpaceAgnosticBoneAccessor& , const CIKUpdateInputState& , const CTransform& , float);
	const class CIKChainDescription * m_pChainDescription; /* 0 8 */
	const class Quaternion & m_qWsTilt; /* 8 8 */
	const class Vector & m_vWsTiltNormal; /* 16 8 */
	const class Vector & m_vWsAverageFootPosition; /* 24 8 */
	const int m_nTiltBoneIndex; /* 32 4 */
	const class CIKChainRuleInterpolationState * m_pInterpolationState; /* 40 8 */
	const class CIKUpdateInputState & m_IKInputState; /* 48 8 */
	const class CSpaceAgnosticBoneAccessor & m_BoneAccessor; /* 56 8 */
	const class CTransform & m_xWsAnimationOnlyTarget; /* 64 8 */
	CTraceRequest & m_TraceHelper; /* 72 8 */
	const float m_flDeltaTime; /* 80 4 */
	void CIKRuleContextUpdateTargetInput(class CIKRuleContextUpdateTargetInput *, const class CIKChainDescription  *, const class Vector  &, const class Quaternion  &, int, const class Vector  &, class CTraceRequest &, const class CIKChainRuleInterpolationState  *, const class CSpaceAgnosticBoneAccessor  &, const class CIKUpdateInputState  &, const class CTransform  &, float); /* linkage=_ZN31CIKRuleContextUpdateTargetInputC4EPK19CIKChainDescriptionRK6VectorRK10QuaternioniS5_R13CTraceRequestPK30CIKChainRuleInterpolationStateRK26CSpaceAgnosticBoneAccessorRK19CIKUpdateInputStateRK10CTransformf */
};

// <000931CB> ik/iikrulecontext.h:19
void CIKRuleContextUpdateTargetInput::CIKRuleContextUpdateTargetInput(const CIKChainDescription* pChainDescription, const Vector& vWsTiltNormal, const Quaternion& qWsTilt, int nTiltBoneIndex, const Vector& vWsAverageFootPosition, CTraceRequest& traceHelper, const CIKChainRuleInterpolationState* pInterpolationState, const CSpaceAgnosticBoneAccessor& boneAccessor, const CIKUpdateInputState& ikInputState, const CTransform& xWsAnimationOnlyTarget, const float flDeltaTime)
{
} /* size: 0 */

// <0009312E> ik/iikrulecontext.h:19
inline void CIKRuleContextUpdateTargetInput::CIKRuleContextUpdateTargetInput(const CIKChainDescription* pChainDescription, const Vector& vWsTiltNormal, const Quaternion& qWsTilt, int nTiltBoneIndex, const Vector& vWsAverageFootPosition, CTraceRequest& traceHelper, const CIKChainRuleInterpolationState* pInterpolationState, const CSpaceAgnosticBoneAccessor& boneAccessor, const CIKUpdateInputState& ikInputState, const CTransform& xWsAnimationOnlyTarget, const float flDeltaTime)
{
} /* size: 0 */

// <00078124> ik/iikrulecontext.h:59
// member functions: 2
// member variables: 8
// class size: 64
class CIKRuleContextCalculateTargetInput {
	/* ik/iikrulecontext.h:62 */
	void CIKRuleContextCalculateTargetInput(CIKRuleContextCalculateTargetInput* , const CIKChainDescription* , const Quaternion& , int, const CTransform& , const CIKChainRuleInterpolationState* , const CSpaceAgnosticBoneAccessor& , float, InterpolatedVarPhase_t);
	const class CTransform & m_xWsAnimationOnlyTarget; /* 0 8 */
	const class CIKChainRuleInterpolationState * m_pInterpolationState; /* 8 8 */
	const class CSpaceAgnosticBoneAccessor & m_BoneAccessor; /* 16 8 */
	const float m_flCurrentTime; /* 24 4 */
	const class CIKChainDescription * m_pChainDescription; /* 32 8 */
	const int m_nTiltBoneIndex; /* 40 4 */
	const class Quaternion & m_qWsTilt; /* 48 8 */
	const enum InterpolatedVarPhase_t m_CurrentPhase; /* 56 4 */
	void CIKRuleContextCalculateTargetInput(class CIKRuleContextCalculateTargetInput *, const class CIKChainDescription  *, const class Quaternion  &, int, const class CTransform  &, const class CIKChainRuleInterpolationState  *, const class CSpaceAgnosticBoneAccessor  &, float, enum InterpolatedVarPhase_t); /* linkage=_ZN34CIKRuleContextCalculateTargetInputC4EPK19CIKChainDescriptionRK10QuaternioniRK10CTransformPK30CIKChainRuleInterpolationStateRK26CSpaceAgnosticBoneAccessorf22InterpolatedVarPhase_t */
};

// <01B8DF99> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/iikrulecontext.h:59
// member functions: 2
// member variables: 8
// class size: 64
class CIKRuleContextCalculateTargetInput {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/iikrulecontext.h:62 */
	void CIKRuleContextCalculateTargetInput(CIKRuleContextCalculateTargetInput* , const CIKChainDescription* , const Quaternion& , int, const CTransform& , const CIKChainRuleInterpolationState* , const CSpaceAgnosticBoneAccessor& , float, InterpolatedVarPhase_t);
	const class CTransform & m_xWsAnimationOnlyTarget; /* 0 8 */
	const class CIKChainRuleInterpolationState * m_pInterpolationState; /* 8 8 */
	const class CSpaceAgnosticBoneAccessor & m_BoneAccessor; /* 16 8 */
	const float m_flCurrentTime; /* 24 4 */
	const class CIKChainDescription * m_pChainDescription; /* 32 8 */
	const int m_nTiltBoneIndex; /* 40 4 */
	const class Quaternion & m_qWsTilt; /* 48 8 */
	const enum InterpolatedVarPhase_t m_CurrentPhase; /* 56 4 */
	void CIKRuleContextCalculateTargetInput(class CIKRuleContextCalculateTargetInput *, const class CIKChainDescription  *, const class Quaternion  &, int, const class CTransform  &, const class CIKChainRuleInterpolationState  *, const class CSpaceAgnosticBoneAccessor  &, float, enum InterpolatedVarPhase_t); /* linkage=_ZN34CIKRuleContextCalculateTargetInputC4EPK19CIKChainDescriptionRK10QuaternioniRK10CTransformPK30CIKChainRuleInterpolationStateRK26CSpaceAgnosticBoneAccessorf22InterpolatedVarPhase_t */
};

// <000930EF> ik/iikrulecontext.h:62
void CIKRuleContextCalculateTargetInput::CIKRuleContextCalculateTargetInput(const CIKChainDescription* pChainDescription, const Quaternion& qWsTilt, int nTiltBoneIndex, const CTransform& xWsAnimationOnlyTarget, const CIKChainRuleInterpolationState* pInterpolationState, const CSpaceAgnosticBoneAccessor& boneAccessor, float flCurrentTime, InterpolatedVarPhase_t phase)
{
} /* size: 0 */

// <00093076> ik/iikrulecontext.h:62
inline void CIKRuleContextCalculateTargetInput::CIKRuleContextCalculateTargetInput(const CIKChainDescription* pChainDescription, const Quaternion& qWsTilt, int nTiltBoneIndex, const CTransform& xWsAnimationOnlyTarget, const CIKChainRuleInterpolationState* pInterpolationState, const CSpaceAgnosticBoneAccessor& boneAccessor, float flCurrentTime, InterpolatedVarPhase_t phase)
{
} /* size: 0 */

// <01BB13EA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/iikrulecontext.h:93
void IIKRuleContext::IIKRuleContext()
{
} /* size: 0 */

// <01BB13CD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/iikrulecontext.h:93
inline void IIKRuleContext::IIKRuleContext()
{
} /* size: 0 */

// <01BA0540> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/iikrulecontext.h:93
// member functions: 18
// member variable: 1
// vtable entries: 5
// class size: 8
class IIKRuleContext {
	void ~IIKRuleContext(IIKRuleContext* );
	void IIKRuleContext(IIKRuleContext* , IIKRuleContext& );
	void IIKRuleContext(IIKRuleContext* , const IIKRuleContext& );
	void IIKRuleContext(IIKRuleContext* );
	int ()(void) * * _vptr.IIKRuleContext; /* 0 8 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/iikrulecontext.h:96 */
	virtual const CUtlSymbolLarge& GetName(const IIKRuleContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/iikrulecontext.h:99 */
	virtual CTransform CalculateTargetTransform(const IIKRuleContext* , const CIKRuleContextCalculateTargetInput& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/iikrulecontext.h:102 */
	virtual void UpdateInterpolationState(const IIKRuleContext* , const CIKRuleContextUpdateTargetInput& , CIKChainRuleInterpolationState* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/iikrulecontext.h:105 */
	virtual bool DoesRuleProvideAbsOriginZ(const IIKRuleContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/iikrulecontext.h:108 */
	virtual float GetRequestedAbsOriginZ(const IIKRuleContext* , const CIKChainRuleInterpolationState& );
	void ~IIKRuleContext(class IIKRuleContext *); /* linkage=_ZN14IIKRuleContextD4Ev */
	void IIKRuleContext(class IIKRuleContext *, class IIKRuleContext &); /* linkage=_ZN14IIKRuleContextC4EOS_ */
	void IIKRuleContext(class IIKRuleContext *, const class IIKRuleContext  &); /* linkage=_ZN14IIKRuleContextC4ERKS_ */
	void IIKRuleContext(class IIKRuleContext *); /* linkage=_ZN14IIKRuleContextC4Ev */
	virtual const class CUtlSymbolLarge  & GetName(const class IIKRuleContext  *); /* linkage=_ZNK14IIKRuleContext7GetNameEv */
	virtual class CTransform CalculateTargetTransform(const class IIKRuleContext  *, const class CIKRuleContextCalculateTargetInput  &); /* linkage=_ZNK14IIKRuleContext24CalculateTargetTransformERK34CIKRuleContextCalculateTargetInput */
	virtual void UpdateInterpolationState(const class IIKRuleContext  *, const class CIKRuleContextUpdateTargetInput  &, class CIKChainRuleInterpolationState *); /* linkage=_ZNK14IIKRuleContext24UpdateInterpolationStateERK31CIKRuleContextUpdateTargetInputP30CIKChainRuleInterpolationState */
	virtual bool DoesRuleProvideAbsOriginZ(const class IIKRuleContext  *); /* linkage=_ZNK14IIKRuleContext25DoesRuleProvideAbsOriginZEv */
	virtual float GetRequestedAbsOriginZ(const class IIKRuleContext  *, const class CIKChainRuleInterpolationState  &); /* linkage=_ZNK14IIKRuleContext22GetRequestedAbsOriginZERK30CIKChainRuleInterpolationState */
};

