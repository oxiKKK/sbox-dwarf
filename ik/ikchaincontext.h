
//
// ik/ikchaincontext.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 8
//	classes: 3
//

// <00142960> ik/ikchaincontext.h:24
void CIKChainContext::~CIKChainContext()
{
} /* size: 0 */

// <00142943> ik/ikchaincontext.h:24
inline void CIKChainContext::~CIKChainContext()
{
} /* size: 0 */

// <0008562F> ik/ikchaincontext.h:24
// member functions: 59
// member variables: 4
// class size: 80
class CIKChainContext {
	/* ik/ikchaincontext.h:27 */
	void CIKChainContext(CIKChainContext* );
	/* ik/ikchaincontext.h:29 */
	const CIKChainDescription* GetDescription(const CIKChainContext* );
	/* ik/ikchaincontext.h:30 */
	const CUtlSymbolLarge& GetName(const CIKChainContext* );
	/* ik/ikchaincontext.h:32 */
	void Invalidate(const CIKChainContext* , InterpolatedVarPhase_t, CIKChainInterpolationState* );
	/* ik/ikchaincontext.h:34 */
	bool GetIsEnabled(const CIKChainContext* );
	/* ik/ikchaincontext.h:35 */
	void SetIsEnabled(CIKChainContext* , bool);
	/* ik/ikchaincontext.h:36 */
	void Init(CIKChainContext* , InterpolatedVarPhase_t, const CIKChainDescription* , const CModel* , CIKChainInterpolationState* );
	/* ik/ikchaincontext.h:38 */
	void UpdateInterpolationState_PreSolve(const CIKChainContext* , CIKChainInterpolationState& , const CIKUpdateInputState& , const CSpaceAgnosticBoneAccessor& , const Vector& , const Quaternion& , int, Vector, CTraceRequest& , float);
	/* ik/ikchaincontext.h:40 */
	bool Solve(const CIKChainContext* , const CIKChainInterpolationState& , const CIKUpdateInputState& , CIKUpdateOutputState& , const CTraceRequest& , const Quaternion& , int, float, CTransform& );
	/* ik/ikchaincontext.h:42 */
	void UpdateInterpolationState_PostSolve(const CIKChainContext* , CIKChainInterpolationState& , const CIKUpdateInputState& , const CSpaceAgnosticBoneAccessor& , const CTraceRequest& , const CTransform& );
private:
	/* ik/ikchaincontext.h:45 */
	void UpdateLock(const CIKChainContext* , CIKChainInterpolationState& , const CTransform& , const CSpaceAgnosticBoneAccessor& );
	/* ik/ikchaincontext.h:47 */
	int GetNumRuleContexts(const CIKChainContext* );
	/* ik/ikchaincontext.h:49 */
	void GetRuleContextAndInterpolationState(const CIKChainContext* , CIKChainInterpolationState& , int, const IIKRuleContext* & , CIKChainRuleInterpolationState* & );
	/* ik/ikchaincontext.h:50 */
	bool SetLockState(const CIKChainContext* , CIKChainInterpolationState& , IKChainLockState, bool);
	/* ik/ikchaincontext.h:52 */
	void SetForceUnlockedState(const CIKChainContext* , CIKChainInterpolationState& , float);
	/* ik/ikchaincontext.h:55 */
	CTransform GetLockableBoneTransform(const CIKChainContext* , const CIKChainInterpolationState& , const CSpaceAgnosticBoneAccessor& , const CTransform& );
	/* ik/ikchaincontext.h:57 */
	void SetLockTransform(const CIKChainContext* , CIKChainInterpolationState& , const CTransform& );
	/* ik/ikchaincontext.h:59 */
	bool DoesChainProvideAbsOriginZ(const CIKChainContext* );
	/* ik/ikchaincontext.h:62 */
	void UpdateInterpolationState_PreSolve_CalculateResult(const CIKChainContext* , CIKChainInterpolationState& , const CIKUpdateInputState& , const CSpaceAgnosticBoneAccessor& , const CTraceRequest& , const Quaternion& , int, float);
	/* ik/ikchaincontext.h:72 */
	void UpdateInterpolationState_PreSolve_ConditionallyApplyLocks(const CIKChainContext* , CIKChainInterpolationState& , const CIKUpdateInputState& , const CSpaceAgnosticBoneAccessor& , CTransform& , const Vector& , float);
	/* ik/ikchaincontext.h:73 */
	void UpdateInterpolationState_PreSolve_CalculateHipDrop(const CIKChainContext* , CIKChainInterpolationState& );
	/* ik/ikchaincontext.h:76 */
	CTransform CalculateResult(const CIKChainContext* , const CIKChainInterpolationState& , const CIKUpdateInputState& , CIKUpdateOutputState& , const CTraceRequest& , Quaternion, int, float);
	/* ik/ikchaincontext.h:86 */
	void CalculateResult_MergedTarget(const CIKChainContext* , const CIKChainInterpolationState& , const CSpaceAgnosticBoneAccessor& , Quaternion, int, float, InterpolatedVarPhase_t, CTransform& );
	/* ik/ikchaincontext.h:87 */
	void CalculateResult_ConditionallyApplyLocks(const CIKChainContext* , const CIKChainInterpolationState& , const CIKUpdateInputState& , CIKUpdateOutputState& , CTransform& , const Vector& , float);
	/* ik/ikchaincontext.h:88 */
	void CalculateResult_CalculateHipDrop(const CIKChainContext* , const CIKChainInterpolationState& , CIKUpdateOutputState& );
	/* ik/ikchaincontext.h:90 */
	CTransform CalculateTargetFromLock(const CIKChainContext* , const CIKChainInterpolationState& , const CTransform& , const CTransform& );
	/* ik/ikchaincontext.h:92 */
	void DebugDrawLocks(const CIKChainContext* , const CIKChainInterpolationState& , const CIKUpdateInputState& , CIKUpdateOutputState& , const CTransform& , const CTransform& , const Vector& , float);
	/* ik/ikchaincontext.h:94 */
	bool ShouldBreakLockPreSolve(const CIKChainContext* , const CIKUpdateInputState& , const CSpaceAgnosticBoneAccessor& , const CTransform& , const Vector& , const CTransform& );
	/* ik/ikchaincontext.h:95 */
	bool ShouldBreakLockPostSolve(const CIKChainContext* , const CIKUpdateInputState& , const CSpaceAgnosticBoneAccessor& , const Vector& );
	/* ik/ikchaincontext.h:97 */
	typedef struct CUtlVectorFixedGrowable<IIKRuleContext*, 3> CUtlRuleContextVector;
	CUtlRuleContextVector m_RuleContextsByRuleIndex __attribute__((__aligned__(8))); /* 0 56 */
	const class CIKChainDescription * m_pDescription; /* 56 8 */
	CUtlSymbolLarge m_Name; /* 64 8 */
	bool m_bIsEnabled; /* 72 1 */
	void CIKChainContext(class CIKChainContext *); /* linkage=_ZN15CIKChainContextC4Ev */
	const class CIKChainDescription  * GetDescription(const class CIKChainContext  *); /* linkage=_ZNK15CIKChainContext14GetDescriptionEv */
	const class CUtlSymbolLarge  & GetName(const class CIKChainContext  *); /* linkage=_ZNK15CIKChainContext7GetNameEv */
	/* <99bcc> ik/ikchaincontext.cpp:445 */
	void Invalidate(const class CIKChainContext  *, enum InterpolatedVarPhase_t, class CIKChainInterpolationState *); /* linkage=_ZNK15CIKChainContext10InvalidateE22InterpolatedVarPhase_tP26CIKChainInterpolationState */
	bool GetIsEnabled(const class CIKChainContext  *); /* linkage=_ZNK15CIKChainContext12GetIsEnabledEv */
	void SetIsEnabled(class CIKChainContext *, bool); /* linkage=_ZN15CIKChainContext12SetIsEnabledEb */
	void Init(class CIKChainContext *, enum InterpolatedVarPhase_t, const class CIKChainDescription  *, const class CModel  *, class CIKChainInterpolationState *); /* linkage=_ZN15CIKChainContext4InitE22InterpolatedVarPhase_tPK19CIKChainDescriptionPK6CModelP26CIKChainInterpolationState */
	void UpdateInterpolationState_PreSolve(const class CIKChainContext  *, class CIKChainInterpolationState &, const class CIKUpdateInputState  &, const class CSpaceAgnosticBoneAccessor  &, const class Vector  &, const class Quaternion  &, int, class Vector, class CTraceRequest &, float); /* linkage=_ZNK15CIKChainContext33UpdateInterpolationState_PreSolveER26CIKChainInterpolationStateRK19CIKUpdateInputStateRK26CSpaceAgnosticBoneAccessorRK6VectorRK10QuaternioniS8_R13CTraceRequestf */
	bool Solve(const class CIKChainContext  *, const class CIKChainInterpolationState  &, const class CIKUpdateInputState  &, class CIKUpdateOutputState &, const class CTraceRequest  &, const class Quaternion  &, int, float, class CTransform &); /* linkage=_ZNK15CIKChainContext5SolveERK26CIKChainInterpolationStateRK19CIKUpdateInputStateR20CIKUpdateOutputStateRK13CTraceRequestRK10QuaternionifR10CTransform */
	void UpdateInterpolationState_PostSolve(const class CIKChainContext  *, class CIKChainInterpolationState &, const class CIKUpdateInputState  &, const class CSpaceAgnosticBoneAccessor  &, const class CTraceRequest  &, const class CTransform  &); /* linkage=_ZNK15CIKChainContext34UpdateInterpolationState_PostSolveER26CIKChainInterpolationStateRK19CIKUpdateInputStateRK26CSpaceAgnosticBoneAccessorRK13CTraceRequestRK10CTransform */
	void UpdateLock(const class CIKChainContext  *, class CIKChainInterpolationState &, const class CTransform  &, const class CSpaceAgnosticBoneAccessor  &); /* linkage=_ZNK15CIKChainContext10UpdateLockER26CIKChainInterpolationStateRK10CTransformRK26CSpaceAgnosticBoneAccessor */
	int GetNumRuleContexts(const class CIKChainContext  *); /* linkage=_ZNK15CIKChainContext18GetNumRuleContextsEv */
	/* <99c3c> ik/ikchaincontext.cpp:531 */
	void GetRuleContextAndInterpolationState(const class CIKChainContext  *, class CIKChainInterpolationState &, int, const class IIKRuleContext  * &, class CIKChainRuleInterpolationState * &); /* linkage=_ZNK15CIKChainContext35GetRuleContextAndInterpolationStateER26CIKChainInterpolationStateiRPK14IIKRuleContextRP30CIKChainRuleInterpolationState */
	bool SetLockState(const class CIKChainContext  *, class CIKChainInterpolationState &, enum IKChainLockState, bool); /* linkage=_ZNK15CIKChainContext12SetLockStateER26CIKChainInterpolationState16IKChainLockStateb */
	/* <99a4b> ik/ikchaincontext.cpp:428 */
	void SetForceUnlockedState(const class CIKChainContext  *, class CIKChainInterpolationState &, float); /* linkage=_ZNK15CIKChainContext21SetForceUnlockedStateER26CIKChainInterpolationStatef */
	class CTransform GetLockableBoneTransform(const class CIKChainContext  *, const class CIKChainInterpolationState  &, const class CSpaceAgnosticBoneAccessor  &, const class CTransform  &); /* linkage=_ZNK15CIKChainContext24GetLockableBoneTransformERK26CIKChainInterpolationStateRK26CSpaceAgnosticBoneAccessorRK10CTransform */
	/* <99abb> ik/ikchaincontext.cpp:436 */
	void SetLockTransform(const class CIKChainContext  *, class CIKChainInterpolationState &, const class CTransform  &); /* linkage=_ZNK15CIKChainContext16SetLockTransformER26CIKChainInterpolationStateRK10CTransform */
	/* <992b4> ik/ikchaincontext.cpp:49 */
	bool DoesChainProvideAbsOriginZ(const class CIKChainContext  *); /* linkage=_ZNK15CIKChainContext26DoesChainProvideAbsOriginZEv */
	void UpdateInterpolationState_PreSolve_CalculateResult(const class CIKChainContext  *, class CIKChainInterpolationState &, const class CIKUpdateInputState  &, const class CSpaceAgnosticBoneAccessor  &, const class CTraceRequest  &, const class Quaternion  &, int, float); /* linkage=_ZNK15CIKChainContext49UpdateInterpolationState_PreSolve_CalculateResultER26CIKChainInterpolationStateRK19CIKUpdateInputStateRK26CSpaceAgnosticBoneAccessorRK13CTraceRequestRK10Quaternionif */
	void UpdateInterpolationState_PreSolve_ConditionallyApplyLocks(const class CIKChainContext  *, class CIKChainInterpolationState &, const class CIKUpdateInputState  &, const class CSpaceAgnosticBoneAccessor  &, class CTransform &, const class Vector  &, float); /* linkage=_ZNK15CIKChainContext57UpdateInterpolationState_PreSolve_ConditionallyApplyLocksER26CIKChainInterpolationStateRK19CIKUpdateInputStateRK26CSpaceAgnosticBoneAccessorR10CTransformRK6Vectorf */
	/* <9947b> ik/ikchaincontext.cpp:145 */
	void UpdateInterpolationState_PreSolve_CalculateHipDrop(const class CIKChainContext  *, class CIKChainInterpolationState &); /* linkage=_ZNK15CIKChainContext50UpdateInterpolationState_PreSolve_CalculateHipDropER26CIKChainInterpolationState */
	class CTransform CalculateResult(const class CIKChainContext  *, const class CIKChainInterpolationState  &, const class CIKUpdateInputState  &, class CIKUpdateOutputState &, const class CTraceRequest  &, class Quaternion, int, float); /* linkage=_ZNK15CIKChainContext15CalculateResultERK26CIKChainInterpolationStateRK19CIKUpdateInputStateR20CIKUpdateOutputStateRK13CTraceRequest10Quaternionif */
	void CalculateResult_MergedTarget(const class CIKChainContext  *, const class CIKChainInterpolationState  &, const class CSpaceAgnosticBoneAccessor  &, class Quaternion, int, float, enum InterpolatedVarPhase_t, class CTransform &); /* linkage=_ZNK15CIKChainContext28CalculateResult_MergedTargetERK26CIKChainInterpolationStateRK26CSpaceAgnosticBoneAccessor10Quaternionif22InterpolatedVarPhase_tR10CTransform */
	void CalculateResult_ConditionallyApplyLocks(const class CIKChainContext  *, const class CIKChainInterpolationState  &, const class CIKUpdateInputState  &, class CIKUpdateOutputState &, class CTransform &, const class Vector  &, float); /* linkage=_ZNK15CIKChainContext39CalculateResult_ConditionallyApplyLocksERK26CIKChainInterpolationStateRK19CIKUpdateInputStateR20CIKUpdateOutputStateR10CTransformRK6Vectorf */
	/* <997a3> ik/ikchaincontext.cpp:168 */
	void CalculateResult_CalculateHipDrop(const class CIKChainContext  *, const class CIKChainInterpolationState  &, class CIKUpdateOutputState &); /* linkage=_ZNK15CIKChainContext32CalculateResult_CalculateHipDropERK26CIKChainInterpolationStateR20CIKUpdateOutputState */
	class CTransform CalculateTargetFromLock(const class CIKChainContext  *, const class CIKChainInterpolationState  &, const class CTransform  &, const class CTransform  &); /* linkage=_ZNK15CIKChainContext23CalculateTargetFromLockERK26CIKChainInterpolationStateRK10CTransformS5_ */
	void DebugDrawLocks(const class CIKChainContext  *, const class CIKChainInterpolationState  &, const class CIKUpdateInputState  &, class CIKUpdateOutputState &, const class CTransform  &, const class CTransform  &, const class Vector  &, float); /* linkage=_ZNK15CIKChainContext14DebugDrawLocksERK26CIKChainInterpolationStateRK19CIKUpdateInputStateR20CIKUpdateOutputStateRK10CTransformSA_RK6Vectorf */
	/* <997db> ik/ikchaincontext.cpp:325 */
	bool ShouldBreakLockPreSolve(const class CIKChainContext  *, const class CIKUpdateInputState  &, const class CSpaceAgnosticBoneAccessor  &, const class CTransform  &, const class Vector  &, const class CTransform  &); /* linkage=_ZNK15CIKChainContext23ShouldBreakLockPreSolveERK19CIKUpdateInputStateRK26CSpaceAgnosticBoneAccessorRK10CTransformRK6VectorS8_ */
	/* <9993c> ik/ikchaincontext.cpp:334 */
	bool ShouldBreakLockPostSolve(const class CIKChainContext  *, const class CIKUpdateInputState  &, const class CSpaceAgnosticBoneAccessor  &, const class Vector  &); /* linkage=_ZNK15CIKChainContext24ShouldBreakLockPostSolveERK19CIKUpdateInputStateRK26CSpaceAgnosticBoneAccessorRK6Vector */
	void ~CIKChainContext(class CIKChainContext *); /* linkage=_ZN15CIKChainContextD4Ev */
} __attribute__((__aligned__(8)));

// <001333F3> ik/ikchaincontext.h:24
// member functions: 60
// member variables: 4
// class size: 80
class CIKChainContext {
	/* ik/ikchaincontext.h:27 */
	void CIKChainContext(CIKChainContext* );
	/* ik/ikchaincontext.h:29 */
	const CIKChainDescription* GetDescription(const CIKChainContext* );
	/* ik/ikchaincontext.h:30 */
	const CUtlSymbolLarge& GetName(const CIKChainContext* );
	/* ik/ikchaincontext.h:32 */
	void Invalidate(const CIKChainContext* , InterpolatedVarPhase_t, CIKChainInterpolationState* );
	/* ik/ikchaincontext.h:34 */
	bool GetIsEnabled(const CIKChainContext* );
	/* ik/ikchaincontext.h:35 */
	void SetIsEnabled(CIKChainContext* , bool);
	/* ik/ikchaincontext.h:36 */
	void Init(CIKChainContext* , InterpolatedVarPhase_t, const CIKChainDescription* , const CModel* , CIKChainInterpolationState* );
	/* ik/ikchaincontext.h:38 */
	void UpdateInterpolationState_PreSolve(const CIKChainContext* , CIKChainInterpolationState& , const CIKUpdateInputState& , const CSpaceAgnosticBoneAccessor& , const Vector& , const Quaternion& , int, Vector, CTraceRequest& , float);
	/* ik/ikchaincontext.h:40 */
	bool Solve(const CIKChainContext* , const CIKChainInterpolationState& , const CIKUpdateInputState& , CIKUpdateOutputState& , const CTraceRequest& , const Quaternion& , int, float, CTransform& );
	/* ik/ikchaincontext.h:42 */
	void UpdateInterpolationState_PostSolve(const CIKChainContext* , CIKChainInterpolationState& , const CIKUpdateInputState& , const CSpaceAgnosticBoneAccessor& , const CTraceRequest& , const CTransform& );
private:
	/* ik/ikchaincontext.h:45 */
	void UpdateLock(const CIKChainContext* , CIKChainInterpolationState& , const CTransform& , const CSpaceAgnosticBoneAccessor& );
	/* ik/ikchaincontext.h:47 */
	int GetNumRuleContexts(const CIKChainContext* );
	/* ik/ikchaincontext.h:49 */
	void GetRuleContextAndInterpolationState(const CIKChainContext* , CIKChainInterpolationState& , int, const IIKRuleContext* & , CIKChainRuleInterpolationState* & );
	/* ik/ikchaincontext.h:50 */
	bool SetLockState(const CIKChainContext* , CIKChainInterpolationState& , IKChainLockState, bool);
	/* ik/ikchaincontext.h:52 */
	void SetForceUnlockedState(const CIKChainContext* , CIKChainInterpolationState& , float);
	/* ik/ikchaincontext.h:55 */
	CTransform GetLockableBoneTransform(const CIKChainContext* , const CIKChainInterpolationState& , const CSpaceAgnosticBoneAccessor& , const CTransform& );
	/* ik/ikchaincontext.h:57 */
	void SetLockTransform(const CIKChainContext* , CIKChainInterpolationState& , const CTransform& );
	/* ik/ikchaincontext.h:59 */
	bool DoesChainProvideAbsOriginZ(const CIKChainContext* );
	/* ik/ikchaincontext.h:62 */
	void UpdateInterpolationState_PreSolve_CalculateResult(const CIKChainContext* , CIKChainInterpolationState& , const CIKUpdateInputState& , const CSpaceAgnosticBoneAccessor& , const CTraceRequest& , const Quaternion& , int, float);
	/* ik/ikchaincontext.h:72 */
	void UpdateInterpolationState_PreSolve_ConditionallyApplyLocks(const CIKChainContext* , CIKChainInterpolationState& , const CIKUpdateInputState& , const CSpaceAgnosticBoneAccessor& , CTransform& , const Vector& , float);
	/* ik/ikchaincontext.h:73 */
	void UpdateInterpolationState_PreSolve_CalculateHipDrop(const CIKChainContext* , CIKChainInterpolationState& );
	/* ik/ikchaincontext.h:76 */
	CTransform CalculateResult(const CIKChainContext* , const CIKChainInterpolationState& , const CIKUpdateInputState& , CIKUpdateOutputState& , const CTraceRequest& , Quaternion, int, float);
	/* ik/ikchaincontext.h:86 */
	void CalculateResult_MergedTarget(const CIKChainContext* , const CIKChainInterpolationState& , const CSpaceAgnosticBoneAccessor& , Quaternion, int, float, InterpolatedVarPhase_t, CTransform& );
	/* ik/ikchaincontext.h:87 */
	void CalculateResult_ConditionallyApplyLocks(const CIKChainContext* , const CIKChainInterpolationState& , const CIKUpdateInputState& , CIKUpdateOutputState& , CTransform& , const Vector& , float);
	/* ik/ikchaincontext.h:88 */
	void CalculateResult_CalculateHipDrop(const CIKChainContext* , const CIKChainInterpolationState& , CIKUpdateOutputState& );
	/* ik/ikchaincontext.h:90 */
	CTransform CalculateTargetFromLock(const CIKChainContext* , const CIKChainInterpolationState& , const CTransform& , const CTransform& );
	/* ik/ikchaincontext.h:92 */
	void DebugDrawLocks(const CIKChainContext* , const CIKChainInterpolationState& , const CIKUpdateInputState& , CIKUpdateOutputState& , const CTransform& , const CTransform& , const Vector& , float);
	/* ik/ikchaincontext.h:94 */
	bool ShouldBreakLockPreSolve(const CIKChainContext* , const CIKUpdateInputState& , const CSpaceAgnosticBoneAccessor& , const CTransform& , const Vector& , const CTransform& );
	/* ik/ikchaincontext.h:95 */
	bool ShouldBreakLockPostSolve(const CIKChainContext* , const CIKUpdateInputState& , const CSpaceAgnosticBoneAccessor& , const Vector& );
	/* ik/ikchaincontext.h:97 */
	typedef struct CUtlVectorFixedGrowable<IIKRuleContext*, 3> CUtlRuleContextVector;
	CUtlRuleContextVector m_RuleContextsByRuleIndex __attribute__((__aligned__(8))); /* 0 56 */
	const class CIKChainDescription * m_pDescription; /* 56 8 */
	CUtlSymbolLarge m_Name; /* 64 8 */
	bool m_bIsEnabled; /* 72 1 */
	void ~CIKChainContext(CIKChainContext* );
	void CIKChainContext(class CIKChainContext *); /* linkage=_ZN15CIKChainContextC4Ev */
	const class CIKChainDescription  * GetDescription(const class CIKChainContext  *); /* linkage=_ZNK15CIKChainContext14GetDescriptionEv */
	const class CUtlSymbolLarge  & GetName(const class CIKChainContext  *); /* linkage=_ZNK15CIKChainContext7GetNameEv */
	/* <99bcc> ik/ikchaincontext.cpp:445 */
	void Invalidate(const class CIKChainContext  *, enum InterpolatedVarPhase_t, class CIKChainInterpolationState *); /* linkage=_ZNK15CIKChainContext10InvalidateE22InterpolatedVarPhase_tP26CIKChainInterpolationState */
	bool GetIsEnabled(const class CIKChainContext  *); /* linkage=_ZNK15CIKChainContext12GetIsEnabledEv */
	void SetIsEnabled(class CIKChainContext *, bool); /* linkage=_ZN15CIKChainContext12SetIsEnabledEb */
	void Init(class CIKChainContext *, enum InterpolatedVarPhase_t, const class CIKChainDescription  *, const class CModel  *, class CIKChainInterpolationState *); /* linkage=_ZN15CIKChainContext4InitE22InterpolatedVarPhase_tPK19CIKChainDescriptionPK6CModelP26CIKChainInterpolationState */
	void UpdateInterpolationState_PreSolve(const class CIKChainContext  *, class CIKChainInterpolationState &, const class CIKUpdateInputState  &, const class CSpaceAgnosticBoneAccessor  &, const class Vector  &, const class Quaternion  &, int, class Vector, class CTraceRequest &, float); /* linkage=_ZNK15CIKChainContext33UpdateInterpolationState_PreSolveER26CIKChainInterpolationStateRK19CIKUpdateInputStateRK26CSpaceAgnosticBoneAccessorRK6VectorRK10QuaternioniS8_R13CTraceRequestf */
	bool Solve(const class CIKChainContext  *, const class CIKChainInterpolationState  &, const class CIKUpdateInputState  &, class CIKUpdateOutputState &, const class CTraceRequest  &, const class Quaternion  &, int, float, class CTransform &); /* linkage=_ZNK15CIKChainContext5SolveERK26CIKChainInterpolationStateRK19CIKUpdateInputStateR20CIKUpdateOutputStateRK13CTraceRequestRK10QuaternionifR10CTransform */
	void UpdateInterpolationState_PostSolve(const class CIKChainContext  *, class CIKChainInterpolationState &, const class CIKUpdateInputState  &, const class CSpaceAgnosticBoneAccessor  &, const class CTraceRequest  &, const class CTransform  &); /* linkage=_ZNK15CIKChainContext34UpdateInterpolationState_PostSolveER26CIKChainInterpolationStateRK19CIKUpdateInputStateRK26CSpaceAgnosticBoneAccessorRK13CTraceRequestRK10CTransform */
	void UpdateLock(const class CIKChainContext  *, class CIKChainInterpolationState &, const class CTransform  &, const class CSpaceAgnosticBoneAccessor  &); /* linkage=_ZNK15CIKChainContext10UpdateLockER26CIKChainInterpolationStateRK10CTransformRK26CSpaceAgnosticBoneAccessor */
	int GetNumRuleContexts(const class CIKChainContext  *); /* linkage=_ZNK15CIKChainContext18GetNumRuleContextsEv */
	/* <99c3c> ik/ikchaincontext.cpp:531 */
	void GetRuleContextAndInterpolationState(const class CIKChainContext  *, class CIKChainInterpolationState &, int, const class IIKRuleContext  * &, class CIKChainRuleInterpolationState * &); /* linkage=_ZNK15CIKChainContext35GetRuleContextAndInterpolationStateER26CIKChainInterpolationStateiRPK14IIKRuleContextRP30CIKChainRuleInterpolationState */
	bool SetLockState(const class CIKChainContext  *, class CIKChainInterpolationState &, enum IKChainLockState, bool); /* linkage=_ZNK15CIKChainContext12SetLockStateER26CIKChainInterpolationState16IKChainLockStateb */
	/* <99a4b> ik/ikchaincontext.cpp:428 */
	void SetForceUnlockedState(const class CIKChainContext  *, class CIKChainInterpolationState &, float); /* linkage=_ZNK15CIKChainContext21SetForceUnlockedStateER26CIKChainInterpolationStatef */
	class CTransform GetLockableBoneTransform(const class CIKChainContext  *, const class CIKChainInterpolationState  &, const class CSpaceAgnosticBoneAccessor  &, const class CTransform  &); /* linkage=_ZNK15CIKChainContext24GetLockableBoneTransformERK26CIKChainInterpolationStateRK26CSpaceAgnosticBoneAccessorRK10CTransform */
	/* <99abb> ik/ikchaincontext.cpp:436 */
	void SetLockTransform(const class CIKChainContext  *, class CIKChainInterpolationState &, const class CTransform  &); /* linkage=_ZNK15CIKChainContext16SetLockTransformER26CIKChainInterpolationStateRK10CTransform */
	/* <992b4> ik/ikchaincontext.cpp:49 */
	bool DoesChainProvideAbsOriginZ(const class CIKChainContext  *); /* linkage=_ZNK15CIKChainContext26DoesChainProvideAbsOriginZEv */
	void UpdateInterpolationState_PreSolve_CalculateResult(const class CIKChainContext  *, class CIKChainInterpolationState &, const class CIKUpdateInputState  &, const class CSpaceAgnosticBoneAccessor  &, const class CTraceRequest  &, const class Quaternion  &, int, float); /* linkage=_ZNK15CIKChainContext49UpdateInterpolationState_PreSolve_CalculateResultER26CIKChainInterpolationStateRK19CIKUpdateInputStateRK26CSpaceAgnosticBoneAccessorRK13CTraceRequestRK10Quaternionif */
	void UpdateInterpolationState_PreSolve_ConditionallyApplyLocks(const class CIKChainContext  *, class CIKChainInterpolationState &, const class CIKUpdateInputState  &, const class CSpaceAgnosticBoneAccessor  &, class CTransform &, const class Vector  &, float); /* linkage=_ZNK15CIKChainContext57UpdateInterpolationState_PreSolve_ConditionallyApplyLocksER26CIKChainInterpolationStateRK19CIKUpdateInputStateRK26CSpaceAgnosticBoneAccessorR10CTransformRK6Vectorf */
	/* <9947b> ik/ikchaincontext.cpp:145 */
	void UpdateInterpolationState_PreSolve_CalculateHipDrop(const class CIKChainContext  *, class CIKChainInterpolationState &); /* linkage=_ZNK15CIKChainContext50UpdateInterpolationState_PreSolve_CalculateHipDropER26CIKChainInterpolationState */
	class CTransform CalculateResult(const class CIKChainContext  *, const class CIKChainInterpolationState  &, const class CIKUpdateInputState  &, class CIKUpdateOutputState &, const class CTraceRequest  &, class Quaternion, int, float); /* linkage=_ZNK15CIKChainContext15CalculateResultERK26CIKChainInterpolationStateRK19CIKUpdateInputStateR20CIKUpdateOutputStateRK13CTraceRequest10Quaternionif */
	void CalculateResult_MergedTarget(const class CIKChainContext  *, const class CIKChainInterpolationState  &, const class CSpaceAgnosticBoneAccessor  &, class Quaternion, int, float, enum InterpolatedVarPhase_t, class CTransform &); /* linkage=_ZNK15CIKChainContext28CalculateResult_MergedTargetERK26CIKChainInterpolationStateRK26CSpaceAgnosticBoneAccessor10Quaternionif22InterpolatedVarPhase_tR10CTransform */
	void CalculateResult_ConditionallyApplyLocks(const class CIKChainContext  *, const class CIKChainInterpolationState  &, const class CIKUpdateInputState  &, class CIKUpdateOutputState &, class CTransform &, const class Vector  &, float); /* linkage=_ZNK15CIKChainContext39CalculateResult_ConditionallyApplyLocksERK26CIKChainInterpolationStateRK19CIKUpdateInputStateR20CIKUpdateOutputStateR10CTransformRK6Vectorf */
	/* <997a3> ik/ikchaincontext.cpp:168 */
	void CalculateResult_CalculateHipDrop(const class CIKChainContext  *, const class CIKChainInterpolationState  &, class CIKUpdateOutputState &); /* linkage=_ZNK15CIKChainContext32CalculateResult_CalculateHipDropERK26CIKChainInterpolationStateR20CIKUpdateOutputState */
	class CTransform CalculateTargetFromLock(const class CIKChainContext  *, const class CIKChainInterpolationState  &, const class CTransform  &, const class CTransform  &); /* linkage=_ZNK15CIKChainContext23CalculateTargetFromLockERK26CIKChainInterpolationStateRK10CTransformS5_ */
	void DebugDrawLocks(const class CIKChainContext  *, const class CIKChainInterpolationState  &, const class CIKUpdateInputState  &, class CIKUpdateOutputState &, const class CTransform  &, const class CTransform  &, const class Vector  &, float); /* linkage=_ZNK15CIKChainContext14DebugDrawLocksERK26CIKChainInterpolationStateRK19CIKUpdateInputStateR20CIKUpdateOutputStateRK10CTransformSA_RK6Vectorf */
	/* <997db> ik/ikchaincontext.cpp:325 */
	bool ShouldBreakLockPreSolve(const class CIKChainContext  *, const class CIKUpdateInputState  &, const class CSpaceAgnosticBoneAccessor  &, const class CTransform  &, const class Vector  &, const class CTransform  &); /* linkage=_ZNK15CIKChainContext23ShouldBreakLockPreSolveERK19CIKUpdateInputStateRK26CSpaceAgnosticBoneAccessorRK10CTransformRK6VectorS8_ */
	/* <9993c> ik/ikchaincontext.cpp:334 */
	bool ShouldBreakLockPostSolve(const class CIKChainContext  *, const class CIKUpdateInputState  &, const class CSpaceAgnosticBoneAccessor  &, const class Vector  &); /* linkage=_ZNK15CIKChainContext24ShouldBreakLockPostSolveERK19CIKUpdateInputStateRK26CSpaceAgnosticBoneAccessorRK6Vector */
	void ~CIKChainContext(class CIKChainContext *); /* linkage=_ZN15CIKChainContextD4Ev */
} __attribute__((__aligned__(8)));

// <01AC98AF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikchaincontext.h:24
// member functions: 59
// member variables: 4
// class size: 80
class CIKChainContext {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikchaincontext.h:27 */
	void CIKChainContext(CIKChainContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikchaincontext.h:29 */
	const CIKChainDescription* GetDescription(const CIKChainContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikchaincontext.h:30 */
	const CUtlSymbolLarge& GetName(const CIKChainContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikchaincontext.h:32 */
	void Invalidate(const CIKChainContext* , InterpolatedVarPhase_t, CIKChainInterpolationState* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikchaincontext.h:34 */
	bool GetIsEnabled(const CIKChainContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikchaincontext.h:35 */
	void SetIsEnabled(CIKChainContext* , bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikchaincontext.h:36 */
	void Init(CIKChainContext* , InterpolatedVarPhase_t, const CIKChainDescription* , const CModel* , CIKChainInterpolationState* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikchaincontext.h:38 */
	void UpdateInterpolationState_PreSolve(const CIKChainContext* , CIKChainInterpolationState& , const CIKUpdateInputState& , const CSpaceAgnosticBoneAccessor& , const Vector& , const Quaternion& , int, Vector, CTraceRequest& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikchaincontext.h:40 */
	bool Solve(const CIKChainContext* , const CIKChainInterpolationState& , const CIKUpdateInputState& , CIKUpdateOutputState& , const CTraceRequest& , const Quaternion& , int, float, CTransform& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikchaincontext.h:42 */
	void UpdateInterpolationState_PostSolve(const CIKChainContext* , CIKChainInterpolationState& , const CIKUpdateInputState& , const CSpaceAgnosticBoneAccessor& , const CTraceRequest& , const CTransform& );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikchaincontext.h:45 */
	void UpdateLock(const CIKChainContext* , CIKChainInterpolationState& , const CTransform& , const CSpaceAgnosticBoneAccessor& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikchaincontext.h:47 */
	int GetNumRuleContexts(const CIKChainContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikchaincontext.h:49 */
	void GetRuleContextAndInterpolationState(const CIKChainContext* , CIKChainInterpolationState& , int, const IIKRuleContext* & , CIKChainRuleInterpolationState* & );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikchaincontext.h:50 */
	bool SetLockState(const CIKChainContext* , CIKChainInterpolationState& , IKChainLockState, bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikchaincontext.h:52 */
	void SetForceUnlockedState(const CIKChainContext* , CIKChainInterpolationState& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikchaincontext.h:55 */
	CTransform GetLockableBoneTransform(const CIKChainContext* , const CIKChainInterpolationState& , const CSpaceAgnosticBoneAccessor& , const CTransform& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikchaincontext.h:57 */
	void SetLockTransform(const CIKChainContext* , CIKChainInterpolationState& , const CTransform& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikchaincontext.h:59 */
	bool DoesChainProvideAbsOriginZ(const CIKChainContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikchaincontext.h:62 */
	void UpdateInterpolationState_PreSolve_CalculateResult(const CIKChainContext* , CIKChainInterpolationState& , const CIKUpdateInputState& , const CSpaceAgnosticBoneAccessor& , const CTraceRequest& , const Quaternion& , int, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikchaincontext.h:72 */
	void UpdateInterpolationState_PreSolve_ConditionallyApplyLocks(const CIKChainContext* , CIKChainInterpolationState& , const CIKUpdateInputState& , const CSpaceAgnosticBoneAccessor& , CTransform& , const Vector& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikchaincontext.h:73 */
	void UpdateInterpolationState_PreSolve_CalculateHipDrop(const CIKChainContext* , CIKChainInterpolationState& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikchaincontext.h:76 */
	CTransform CalculateResult(const CIKChainContext* , const CIKChainInterpolationState& , const CIKUpdateInputState& , CIKUpdateOutputState& , const CTraceRequest& , Quaternion, int, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikchaincontext.h:86 */
	void CalculateResult_MergedTarget(const CIKChainContext* , const CIKChainInterpolationState& , const CSpaceAgnosticBoneAccessor& , Quaternion, int, float, InterpolatedVarPhase_t, CTransform& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikchaincontext.h:87 */
	void CalculateResult_ConditionallyApplyLocks(const CIKChainContext* , const CIKChainInterpolationState& , const CIKUpdateInputState& , CIKUpdateOutputState& , CTransform& , const Vector& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikchaincontext.h:88 */
	void CalculateResult_CalculateHipDrop(const CIKChainContext* , const CIKChainInterpolationState& , CIKUpdateOutputState& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikchaincontext.h:90 */
	CTransform CalculateTargetFromLock(const CIKChainContext* , const CIKChainInterpolationState& , const CTransform& , const CTransform& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikchaincontext.h:92 */
	void DebugDrawLocks(const CIKChainContext* , const CIKChainInterpolationState& , const CIKUpdateInputState& , CIKUpdateOutputState& , const CTransform& , const CTransform& , const Vector& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikchaincontext.h:94 */
	bool ShouldBreakLockPreSolve(const CIKChainContext* , const CIKUpdateInputState& , const CSpaceAgnosticBoneAccessor& , const CTransform& , const Vector& , const CTransform& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikchaincontext.h:95 */
	bool ShouldBreakLockPostSolve(const CIKChainContext* , const CIKUpdateInputState& , const CSpaceAgnosticBoneAccessor& , const Vector& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikchaincontext.h:97 */
	typedef struct CUtlVectorFixedGrowable<IIKRuleContext*, 3> CUtlRuleContextVector;
	CUtlRuleContextVector m_RuleContextsByRuleIndex __attribute__((__aligned__(8))); /* 0 56 */
	const class CIKChainDescription * m_pDescription; /* 56 8 */
	CUtlSymbolLarge m_Name; /* 64 8 */
	bool m_bIsEnabled; /* 72 1 */
	void CIKChainContext(class CIKChainContext *); /* linkage=_ZN15CIKChainContextC4Ev */
	const class CIKChainDescription  * GetDescription(const class CIKChainContext  *); /* linkage=_ZNK15CIKChainContext14GetDescriptionEv */
	const class CUtlSymbolLarge  & GetName(const class CIKChainContext  *); /* linkage=_ZNK15CIKChainContext7GetNameEv */
	/* <99bcc> ik/ikchaincontext.cpp:445 */
	void Invalidate(const class CIKChainContext  *, enum InterpolatedVarPhase_t, class CIKChainInterpolationState *); /* linkage=_ZNK15CIKChainContext10InvalidateE22InterpolatedVarPhase_tP26CIKChainInterpolationState */
	bool GetIsEnabled(const class CIKChainContext  *); /* linkage=_ZNK15CIKChainContext12GetIsEnabledEv */
	void SetIsEnabled(class CIKChainContext *, bool); /* linkage=_ZN15CIKChainContext12SetIsEnabledEb */
	void Init(class CIKChainContext *, enum InterpolatedVarPhase_t, const class CIKChainDescription  *, const class CModel  *, class CIKChainInterpolationState *); /* linkage=_ZN15CIKChainContext4InitE22InterpolatedVarPhase_tPK19CIKChainDescriptionPK6CModelP26CIKChainInterpolationState */
	void UpdateInterpolationState_PreSolve(const class CIKChainContext  *, class CIKChainInterpolationState &, const class CIKUpdateInputState  &, const class CSpaceAgnosticBoneAccessor  &, const class Vector  &, const class Quaternion  &, int, class Vector, class CTraceRequest &, float); /* linkage=_ZNK15CIKChainContext33UpdateInterpolationState_PreSolveER26CIKChainInterpolationStateRK19CIKUpdateInputStateRK26CSpaceAgnosticBoneAccessorRK6VectorRK10QuaternioniS8_R13CTraceRequestf */
	bool Solve(const class CIKChainContext  *, const class CIKChainInterpolationState  &, const class CIKUpdateInputState  &, class CIKUpdateOutputState &, const class CTraceRequest  &, const class Quaternion  &, int, float, class CTransform &); /* linkage=_ZNK15CIKChainContext5SolveERK26CIKChainInterpolationStateRK19CIKUpdateInputStateR20CIKUpdateOutputStateRK13CTraceRequestRK10QuaternionifR10CTransform */
	void UpdateInterpolationState_PostSolve(const class CIKChainContext  *, class CIKChainInterpolationState &, const class CIKUpdateInputState  &, const class CSpaceAgnosticBoneAccessor  &, const class CTraceRequest  &, const class CTransform  &); /* linkage=_ZNK15CIKChainContext34UpdateInterpolationState_PostSolveER26CIKChainInterpolationStateRK19CIKUpdateInputStateRK26CSpaceAgnosticBoneAccessorRK13CTraceRequestRK10CTransform */
	void UpdateLock(const class CIKChainContext  *, class CIKChainInterpolationState &, const class CTransform  &, const class CSpaceAgnosticBoneAccessor  &); /* linkage=_ZNK15CIKChainContext10UpdateLockER26CIKChainInterpolationStateRK10CTransformRK26CSpaceAgnosticBoneAccessor */
	int GetNumRuleContexts(const class CIKChainContext  *); /* linkage=_ZNK15CIKChainContext18GetNumRuleContextsEv */
	/* <99c3c> ik/ikchaincontext.cpp:531 */
	void GetRuleContextAndInterpolationState(const class CIKChainContext  *, class CIKChainInterpolationState &, int, const class IIKRuleContext  * &, class CIKChainRuleInterpolationState * &); /* linkage=_ZNK15CIKChainContext35GetRuleContextAndInterpolationStateER26CIKChainInterpolationStateiRPK14IIKRuleContextRP30CIKChainRuleInterpolationState */
	bool SetLockState(const class CIKChainContext  *, class CIKChainInterpolationState &, enum IKChainLockState, bool); /* linkage=_ZNK15CIKChainContext12SetLockStateER26CIKChainInterpolationState16IKChainLockStateb */
	/* <99a4b> ik/ikchaincontext.cpp:428 */
	void SetForceUnlockedState(const class CIKChainContext  *, class CIKChainInterpolationState &, float); /* linkage=_ZNK15CIKChainContext21SetForceUnlockedStateER26CIKChainInterpolationStatef */
	class CTransform GetLockableBoneTransform(const class CIKChainContext  *, const class CIKChainInterpolationState  &, const class CSpaceAgnosticBoneAccessor  &, const class CTransform  &); /* linkage=_ZNK15CIKChainContext24GetLockableBoneTransformERK26CIKChainInterpolationStateRK26CSpaceAgnosticBoneAccessorRK10CTransform */
	/* <99abb> ik/ikchaincontext.cpp:436 */
	void SetLockTransform(const class CIKChainContext  *, class CIKChainInterpolationState &, const class CTransform  &); /* linkage=_ZNK15CIKChainContext16SetLockTransformER26CIKChainInterpolationStateRK10CTransform */
	/* <992b4> ik/ikchaincontext.cpp:49 */
	bool DoesChainProvideAbsOriginZ(const class CIKChainContext  *); /* linkage=_ZNK15CIKChainContext26DoesChainProvideAbsOriginZEv */
	void UpdateInterpolationState_PreSolve_CalculateResult(const class CIKChainContext  *, class CIKChainInterpolationState &, const class CIKUpdateInputState  &, const class CSpaceAgnosticBoneAccessor  &, const class CTraceRequest  &, const class Quaternion  &, int, float); /* linkage=_ZNK15CIKChainContext49UpdateInterpolationState_PreSolve_CalculateResultER26CIKChainInterpolationStateRK19CIKUpdateInputStateRK26CSpaceAgnosticBoneAccessorRK13CTraceRequestRK10Quaternionif */
	void UpdateInterpolationState_PreSolve_ConditionallyApplyLocks(const class CIKChainContext  *, class CIKChainInterpolationState &, const class CIKUpdateInputState  &, const class CSpaceAgnosticBoneAccessor  &, class CTransform &, const class Vector  &, float); /* linkage=_ZNK15CIKChainContext57UpdateInterpolationState_PreSolve_ConditionallyApplyLocksER26CIKChainInterpolationStateRK19CIKUpdateInputStateRK26CSpaceAgnosticBoneAccessorR10CTransformRK6Vectorf */
	/* <9947b> ik/ikchaincontext.cpp:145 */
	void UpdateInterpolationState_PreSolve_CalculateHipDrop(const class CIKChainContext  *, class CIKChainInterpolationState &); /* linkage=_ZNK15CIKChainContext50UpdateInterpolationState_PreSolve_CalculateHipDropER26CIKChainInterpolationState */
	class CTransform CalculateResult(const class CIKChainContext  *, const class CIKChainInterpolationState  &, const class CIKUpdateInputState  &, class CIKUpdateOutputState &, const class CTraceRequest  &, class Quaternion, int, float); /* linkage=_ZNK15CIKChainContext15CalculateResultERK26CIKChainInterpolationStateRK19CIKUpdateInputStateR20CIKUpdateOutputStateRK13CTraceRequest10Quaternionif */
	void CalculateResult_MergedTarget(const class CIKChainContext  *, const class CIKChainInterpolationState  &, const class CSpaceAgnosticBoneAccessor  &, class Quaternion, int, float, enum InterpolatedVarPhase_t, class CTransform &); /* linkage=_ZNK15CIKChainContext28CalculateResult_MergedTargetERK26CIKChainInterpolationStateRK26CSpaceAgnosticBoneAccessor10Quaternionif22InterpolatedVarPhase_tR10CTransform */
	void CalculateResult_ConditionallyApplyLocks(const class CIKChainContext  *, const class CIKChainInterpolationState  &, const class CIKUpdateInputState  &, class CIKUpdateOutputState &, class CTransform &, const class Vector  &, float); /* linkage=_ZNK15CIKChainContext39CalculateResult_ConditionallyApplyLocksERK26CIKChainInterpolationStateRK19CIKUpdateInputStateR20CIKUpdateOutputStateR10CTransformRK6Vectorf */
	/* <997a3> ik/ikchaincontext.cpp:168 */
	void CalculateResult_CalculateHipDrop(const class CIKChainContext  *, const class CIKChainInterpolationState  &, class CIKUpdateOutputState &); /* linkage=_ZNK15CIKChainContext32CalculateResult_CalculateHipDropERK26CIKChainInterpolationStateR20CIKUpdateOutputState */
	class CTransform CalculateTargetFromLock(const class CIKChainContext  *, const class CIKChainInterpolationState  &, const class CTransform  &, const class CTransform  &); /* linkage=_ZNK15CIKChainContext23CalculateTargetFromLockERK26CIKChainInterpolationStateRK10CTransformS5_ */
	void DebugDrawLocks(const class CIKChainContext  *, const class CIKChainInterpolationState  &, const class CIKUpdateInputState  &, class CIKUpdateOutputState &, const class CTransform  &, const class CTransform  &, const class Vector  &, float); /* linkage=_ZNK15CIKChainContext14DebugDrawLocksERK26CIKChainInterpolationStateRK19CIKUpdateInputStateR20CIKUpdateOutputStateRK10CTransformSA_RK6Vectorf */
	/* <997db> ik/ikchaincontext.cpp:325 */
	bool ShouldBreakLockPreSolve(const class CIKChainContext  *, const class CIKUpdateInputState  &, const class CSpaceAgnosticBoneAccessor  &, const class CTransform  &, const class Vector  &, const class CTransform  &); /* linkage=_ZNK15CIKChainContext23ShouldBreakLockPreSolveERK19CIKUpdateInputStateRK26CSpaceAgnosticBoneAccessorRK10CTransformRK6VectorS8_ */
	/* <9993c> ik/ikchaincontext.cpp:334 */
	bool ShouldBreakLockPostSolve(const class CIKChainContext  *, const class CIKUpdateInputState  &, const class CSpaceAgnosticBoneAccessor  &, const class Vector  &); /* linkage=_ZNK15CIKChainContext24ShouldBreakLockPostSolveERK19CIKUpdateInputStateRK26CSpaceAgnosticBoneAccessorRK6Vector */
	void ~CIKChainContext(class CIKChainContext *); /* linkage=_ZN15CIKChainContextD4Ev */
} __attribute__((__aligned__(8)));

// <001405B0> ik/ikchaincontext.h:27
void CIKChainContext::CIKChainContext()
{
} /* size: 0 */

// <01B3198C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikchaincontext.h:29
inline void CIKChainContext::GetDescription()
{
} /* size: 0 */

// <0014F014> ik/ikchaincontext.h:30
inline void CIKChainContext::GetName()
{
} /* size: 0 */

// <0014EFFB> ik/ikchaincontext.h:34
inline void CIKChainContext::GetIsEnabled()
{
} /* size: 0 */

// <0014EFD6> ik/ikchaincontext.h:35
inline void CIKChainContext::SetIsEnabled(bool bValue)
{
} /* size: 0 */

// <00092DD5> ik/ikchaincontext.h:47
inline void CIKChainContext::GetNumRuleContexts()
{
} /* size: 0 */

