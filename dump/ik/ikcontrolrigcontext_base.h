
//
// ik/ikcontrolrigcontext_base.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 3
//	class: 1
//

// <0013F256> ik/ikcontrolrigcontext_base.h:9
// member functions: 66
// member variables: 4
// vtable entries: 18
// class size: 1,360
class CIKControlRigContext_Base : public IIKControlRigContext {
public:
	/* class IIKControlRigContext <ancestor>; */ /* 0 8 */
	void CIKControlRigContext_Base(CIKControlRigContext_Base* , const CIKControlRigContext_Base& );
	/* ik/ikcontrolrigcontext_base.cpp:33 */
	void CIKControlRigContext_Base(CIKControlRigContext_Base* , const CIKControlRigDescription_Base* );
	/* ik/ikcontrolrigcontext_base.cpp:54 */
	virtual void Init(CIKControlRigContext_Base* , CIKInterpolationState& , InterpolatedVarPhase_t, HModel& );
	/* ik/ikcontrolrigcontext_base.cpp:259 */
	virtual void Update(const CIKControlRigContext_Base* , CIKInterpolationState& , const CIKUpdateInputState& , CIKUpdateOutputState& );
	/* ik/ikcontrolrigcontext_base.cpp:83 */
	virtual void Teardown(CIKControlRigContext_Base* , CIKInterpolationState& , InterpolatedVarPhase_t);
	/* ik/ikcontrolrigcontext_base.cpp:192 */
	virtual void Invalidate(const CIKControlRigContext_Base* , CIKInterpolationState& , InterpolatedVarPhase_t);
	/* ik/ikcontrolrigcontext_base.cpp:210 */
	virtual void OnTeleported(const CIKControlRigContext_Base* , CIKInterpolationState& , InterpolatedVarPhase_t);
	/* ik/ikcontrolrigcontext_base.cpp:108 */
	virtual float GetMasterBlendAmount(const CIKControlRigContext_Base* , const CIKInterpolationState& );
	/* ik/ikcontrolrigcontext_base.cpp:407 */
	virtual void SetMasterBlendAmount(const CIKControlRigContext_Base* , CIKInterpolationState& , InterpolatedVarPhase_t, float);
	/* ik/ikcontrolrigcontext_base.cpp:118 */
	virtual void RestoreMasterBlendAmountToDefault(const CIKControlRigContext_Base* , CIKInterpolationState& , InterpolatedVarPhase_t);
	/* ik/ikcontrolrigcontext_base.cpp:95 */
	virtual void SetChainBlendAmount(const CIKControlRigContext_Base* , CIKInterpolationState& , InterpolatedVarPhase_t, const CUtlSymbolLarge& , float);
	/* ik/ikcontrolrigcontext_base.cpp:229 */
	virtual bool IsChainEnabled(const CIKControlRigContext_Base* , int);
	/* ik/ikcontrolrigcontext_base.cpp:241 */
	virtual void SetChainEnabled(CIKControlRigContext_Base* , InterpolatedVarPhase_t, int, bool);
	/* ik/ikcontrolrigcontext_base.cpp:215 */
	virtual bool AreAnyChainsEnabled(const CIKControlRigContext_Base* );
	/* ik/ikcontrolrigcontext_base.cpp:176 */
	virtual bool SetIKLockRotationAlpha(const CIKControlRigContext_Base* , CIKInterpolationState& , InterpolatedVarPhase_t, const CUtlSymbolLarge& , float);
	/* ik/ikcontrolrigcontext_base.cpp:413 */
	virtual void SetFreezeTiltNormal(const CIKControlRigContext_Base* , CIKInterpolationState& , InterpolatedVarPhase_t, bool);
	/* ik/ikcontrolrigcontext_base.h:46 */
	virtual CUtlVector<CTraceRequest*, CUtlMemory<CTraceRequest*, int> >& GetIKTraceRequests(CIKControlRigContext_Base* );
	/* ik/ikcontrolrigcontext_base.cpp:254 */
	virtual float GetAbsOriginDropHeight(const CIKControlRigContext_Base* );
	/* ik/ikcontrolrigcontext_base.cpp:439 */
	virtual void OnPostIKSolved(const CIKControlRigContext_Base* , CIKInterpolationState& , const CIKUpdateInputState& , const CIKUpdateOutputState& , const CUtlVector<CTraceRequest*, CUtlMemory<CTraceRequest*, int> >& );
	/* ik/ikcontrolrigcontext_base.cpp:38 */
	virtual void ~CIKControlRigContext_Base(CIKControlRigContext_Base* );
	/* ik/ikcontrolrigcontext_base.cpp:43 */
	virtual int GetTiltBoneIndex(const CIKControlRigContext_Base* );
private:
	/* ik/ikcontrolrigcontext_base.cpp:48 */
	void SetTiltNormalGoal(const CIKControlRigContext_Base* , CIKInterpolationState& , InterpolatedVarPhase_t, const Vector& );
	/* ik/ikcontrolrigcontext_base.cpp:273 */
	void UpdateRigPreSolve(const CIKControlRigContext_Base* , CIKInterpolationState& , const CIKUpdateInputState& , CSpaceAgnosticBoneAccessor& );
	/* ik/ikcontrolrigcontext_base.cpp:309 */
	void UpdateChainsAndSolve(const CIKControlRigContext_Base* , CIKInterpolationState& , const CIKUpdateInputState& , CIKUpdateOutputState& );
	/* ik/ikcontrolrigcontext_base.cpp:395 */
	void UpdateRigPostSolve(const CIKControlRigContext_Base* , CIKInterpolationState& , const CIKUpdateInputState& , const CIKUpdateOutputState& );
	/* ik/ikcontrolrigcontext_base.cpp:427 */
	const Vector& GetTiltNormal(const CIKControlRigContext_Base* , const CIKInterpolationState& );
	/* ik/ikcontrolrigcontext_base.h:65 */
	const Vector& GetTiltNormalGoal(const CIKControlRigContext_Base* , const CIKInterpolationState& );
	/* ik/ikcontrolrigcontext_base.cpp:164 */
	int GetChainIndex(const CIKControlRigContext_Base* , const CUtlSymbolLarge& );
	/* ik/ikcontrolrigcontext_base.cpp:123 */
	void GetChainContextAndInterpolationState(const CIKControlRigContext_Base* , CIKInterpolationState& , InterpolatedVarPhase_t, CUtlSymbolLarge, const CIKChainContext* & , CIKChainInterpolationState* & );
	/* ik/ikcontrolrigcontext_base.cpp:136 */
	void GetChainContextAndInterpolationState(const CIKControlRigContext_Base* , CIKInterpolationState& , InterpolatedVarPhase_t, int, const CIKChainContext* & , CIKChainInterpolationState* & );
	/* ik/ikcontrolrigcontext_base.cpp:152 */
	void GetChainContextAndInterpolationState(const CIKControlRigContext_Base* , const CIKInterpolationState& , int, const CIKChainContext* & , const CIKChainInterpolationState* & );
	/* ik/ikcontrolrigcontext_base.h:74 */
	const CIKChainContext* GetChainContext(const CIKControlRigContext_Base* , CUtlSymbolLarge);
	/* ik/ikcontrolrigcontext_base.h:75 */
	const CIKChainContext& GetChainContext(const CIKControlRigContext_Base* , int);
	/* ik/ikcontrolrigcontext_base.h:80 */
	typedef struct CUtlVectorFixedGrowable<CIKChainContext, 16> CIKChainContextVector;
	CIKChainContextVector m_ChainContextsByChainIndex __attribute__((__aligned__(8))); /* 8 1312 */
	const class CIKControlRigDescription_Base * m_pDescription; /* 1320 8 */
	CUtlVector<CTraceRequest*, CUtlMemory<CTraceRequest*, int> > m_IKTraceRequests; /* 1328 32 */
	void CIKControlRigContext_Base(class CIKControlRigContext_Base *, const class CIKControlRigContext_Base  &); /* linkage=_ZN25CIKControlRigContext_BaseC4ERKS_ */
	void CIKControlRigContext_Base(class CIKControlRigContext_Base *, const class CIKControlRigDescription_Base  *); /* linkage=_ZN25CIKControlRigContext_BaseC4EPK29CIKControlRigDescription_Base */
	virtual void Init(class CIKControlRigContext_Base *, class CIKInterpolationState &, enum InterpolatedVarPhase_t, HModel &); /* linkage=_ZN25CIKControlRigContext_Base4InitER21CIKInterpolationState22InterpolatedVarPhase_tR11CWeakHandleI25InfoForResourceTypeCModelE */
	virtual void Update(const class CIKControlRigContext_Base  *, class CIKInterpolationState &, const class CIKUpdateInputState  &, class CIKUpdateOutputState &); /* linkage=_ZNK25CIKControlRigContext_Base6UpdateER21CIKInterpolationStateRK19CIKUpdateInputStateR20CIKUpdateOutputState */
	virtual void Teardown(class CIKControlRigContext_Base *, class CIKInterpolationState &, enum InterpolatedVarPhase_t); /* linkage=_ZN25CIKControlRigContext_Base8TeardownER21CIKInterpolationState22InterpolatedVarPhase_t */
	virtual void Invalidate(const class CIKControlRigContext_Base  *, class CIKInterpolationState &, enum InterpolatedVarPhase_t); /* linkage=_ZNK25CIKControlRigContext_Base10InvalidateER21CIKInterpolationState22InterpolatedVarPhase_t */
	virtual void OnTeleported(const class CIKControlRigContext_Base  *, class CIKInterpolationState &, enum InterpolatedVarPhase_t); /* linkage=_ZNK25CIKControlRigContext_Base12OnTeleportedER21CIKInterpolationState22InterpolatedVarPhase_t */
	/* <14fdea> ik/ikcontrolrigcontext_base.cpp:108 */
	virtual float GetMasterBlendAmount(const class CIKControlRigContext_Base  *, const class CIKInterpolationState  &); /* linkage=_ZNK25CIKControlRigContext_Base20GetMasterBlendAmountERK21CIKInterpolationState */
	/* <150066> ik/ikcontrolrigcontext_base.cpp:407 */
	virtual void SetMasterBlendAmount(const class CIKControlRigContext_Base  *, class CIKInterpolationState &, enum InterpolatedVarPhase_t, float); /* linkage=_ZNK25CIKControlRigContext_Base20SetMasterBlendAmountER21CIKInterpolationState22InterpolatedVarPhase_tf */
	virtual void RestoreMasterBlendAmountToDefault(const class CIKControlRigContext_Base  *, class CIKInterpolationState &, enum InterpolatedVarPhase_t); /* linkage=_ZNK25CIKControlRigContext_Base33RestoreMasterBlendAmountToDefaultER21CIKInterpolationState22InterpolatedVarPhase_t */
	virtual void SetChainBlendAmount(const class CIKControlRigContext_Base  *, class CIKInterpolationState &, enum InterpolatedVarPhase_t, const class CUtlSymbolLarge  &, float); /* linkage=_ZNK25CIKControlRigContext_Base19SetChainBlendAmountER21CIKInterpolationState22InterpolatedVarPhase_tRK15CUtlSymbolLargef */
	/* <14fee2> ik/ikcontrolrigcontext_base.cpp:229 */
	virtual bool IsChainEnabled(const class CIKControlRigContext_Base  *, int); /* linkage=_ZNK25CIKControlRigContext_Base14IsChainEnabledEi */
	/* <15028a> ik/ikcontrolrigcontext_base.cpp:241 */
	virtual void SetChainEnabled(class CIKControlRigContext_Base *, enum InterpolatedVarPhase_t, int, bool); /* linkage=_ZN25CIKControlRigContext_Base15SetChainEnabledE22InterpolatedVarPhase_tib */
	virtual bool AreAnyChainsEnabled(const class CIKControlRigContext_Base  *); /* linkage=_ZNK25CIKControlRigContext_Base19AreAnyChainsEnabledEv */
	virtual bool SetIKLockRotationAlpha(const class CIKControlRigContext_Base  *, class CIKInterpolationState &, enum InterpolatedVarPhase_t, const class CUtlSymbolLarge  &, float); /* linkage=_ZNK25CIKControlRigContext_Base22SetIKLockRotationAlphaER21CIKInterpolationState22InterpolatedVarPhase_tRK15CUtlSymbolLargef */
	/* <15012b> ik/ikcontrolrigcontext_base.cpp:413 */
	virtual void SetFreezeTiltNormal(const class CIKControlRigContext_Base  *, class CIKInterpolationState &, enum InterpolatedVarPhase_t, bool); /* linkage=_ZNK25CIKControlRigContext_Base19SetFreezeTiltNormalER21CIKInterpolationState22InterpolatedVarPhase_tb */
	virtual class CUtlVector<CTraceRequest*, CUtlMemory<CTraceRequest*, int> > & GetIKTraceRequests(class CIKControlRigContext_Base *); /* linkage=_ZN25CIKControlRigContext_Base18GetIKTraceRequestsEv */
	virtual float GetAbsOriginDropHeight(const class CIKControlRigContext_Base  *); /* linkage=_ZNK25CIKControlRigContext_Base22GetAbsOriginDropHeightEv */
	/* <14fe3e> ik/ikcontrolrigcontext_base.cpp:439 */
	virtual void OnPostIKSolved(const class CIKControlRigContext_Base  *, class CIKInterpolationState &, const class CIKUpdateInputState  &, const class CIKUpdateOutputState  &, const class CUtlVector<CTraceRequest*, CUtlMemory<CTraceRequest*, int> >  &); /* linkage=_ZNK25CIKControlRigContext_Base14OnPostIKSolvedER21CIKInterpolationStateRK19CIKUpdateInputStateRK20CIKUpdateOutputStateRK10CUtlVectorIP13CTraceRequest10CUtlMemoryISA_iEE */
	virtual void ~CIKControlRigContext_Base(class CIKControlRigContext_Base *); /* linkage=_ZN25CIKControlRigContext_BaseD4Ev */
	/* <14fdbb> ik/ikcontrolrigcontext_base.cpp:43 */
	virtual int GetTiltBoneIndex(const class CIKControlRigContext_Base  *); /* linkage=_ZNK25CIKControlRigContext_Base16GetTiltBoneIndexEv */
	/* <15155e> ik/ikcontrolrigcontext_base.cpp:48 */
	void SetTiltNormalGoal(const class CIKControlRigContext_Base  *, class CIKInterpolationState &, enum InterpolatedVarPhase_t, const class Vector  &); /* linkage=_ZNK25CIKControlRigContext_Base17SetTiltNormalGoalER21CIKInterpolationState22InterpolatedVarPhase_tRK6Vector */
	/* <151f4a> ik/ikcontrolrigcontext_base.cpp:273 */
	void UpdateRigPreSolve(const class CIKControlRigContext_Base  *, class CIKInterpolationState &, const class CIKUpdateInputState  &, class CSpaceAgnosticBoneAccessor &); /* linkage=_ZNK25CIKControlRigContext_Base17UpdateRigPreSolveER21CIKInterpolationStateRK19CIKUpdateInputStateR26CSpaceAgnosticBoneAccessor */
	void UpdateChainsAndSolve(const class CIKControlRigContext_Base  *, class CIKInterpolationState &, const class CIKUpdateInputState  &, class CIKUpdateOutputState &); /* linkage=_ZNK25CIKControlRigContext_Base20UpdateChainsAndSolveER21CIKInterpolationStateRK19CIKUpdateInputStateR20CIKUpdateOutputState */
	/* <151fcc> ik/ikcontrolrigcontext_base.cpp:395 */
	void UpdateRigPostSolve(const class CIKControlRigContext_Base  *, class CIKInterpolationState &, const class CIKUpdateInputState  &, const class CIKUpdateOutputState  &); /* linkage=_ZNK25CIKControlRigContext_Base18UpdateRigPostSolveER21CIKInterpolationStateRK19CIKUpdateInputStateRK20CIKUpdateOutputState */
	/* <1520cf> ik/ikcontrolrigcontext_base.cpp:427 */
	const class Vector  & GetTiltNormal(const class CIKControlRigContext_Base  *, const class CIKInterpolationState  &); /* linkage=_ZNK25CIKControlRigContext_Base13GetTiltNormalERK21CIKInterpolationState */
	const class Vector  & GetTiltNormalGoal(const class CIKControlRigContext_Base  *, const class CIKInterpolationState  &); /* linkage=_ZNK25CIKControlRigContext_Base17GetTiltNormalGoalERK21CIKInterpolationState */
	/* <151e18> ik/ikcontrolrigcontext_base.cpp:164 */
	int GetChainIndex(const class CIKControlRigContext_Base  *, const class CUtlSymbolLarge  &); /* linkage=_ZNK25CIKControlRigContext_Base13GetChainIndexERK15CUtlSymbolLarge */
	/* <151663> ik/ikcontrolrigcontext_base.cpp:123 */
	void GetChainContextAndInterpolationState(const class CIKControlRigContext_Base  *, class CIKInterpolationState &, enum InterpolatedVarPhase_t, class CUtlSymbolLarge, const class CIKChainContext  * &, class CIKChainInterpolationState * &); /* linkage=_ZNK25CIKControlRigContext_Base36GetChainContextAndInterpolationStateER21CIKInterpolationState22InterpolatedVarPhase_t15CUtlSymbolLargeRPK15CIKChainContextRP26CIKChainInterpolationState */
	/* <151a7d> ik/ikcontrolrigcontext_base.cpp:136 */
	void GetChainContextAndInterpolationState(const class CIKControlRigContext_Base  *, class CIKInterpolationState &, enum InterpolatedVarPhase_t, int, const class CIKChainContext  * &, class CIKChainInterpolationState * &); /* linkage=_ZNK25CIKControlRigContext_Base36GetChainContextAndInterpolationStateER21CIKInterpolationState22InterpolatedVarPhase_tiRPK15CIKChainContextRP26CIKChainInterpolationState */
	/* <151c9a> ik/ikcontrolrigcontext_base.cpp:152 */
	void GetChainContextAndInterpolationState(const class CIKControlRigContext_Base  *, const class CIKInterpolationState  &, int, const class CIKChainContext  * &, const class CIKChainInterpolationState  * &); /* linkage=_ZNK25CIKControlRigContext_Base36GetChainContextAndInterpolationStateERK21CIKInterpolationStateiRPK15CIKChainContextRPK26CIKChainInterpolationState */
	const class CIKChainContext  * GetChainContext(const class CIKControlRigContext_Base  *, class CUtlSymbolLarge); /* linkage=_ZNK25CIKControlRigContext_Base15GetChainContextE15CUtlSymbolLarge */
	const class CIKChainContext  & GetChainContext(const class CIKControlRigContext_Base  *, int); /* linkage=_ZNK25CIKControlRigContext_Base15GetChainContextEi */
} __attribute__((__aligned__(8)));

// <000E6846> ik/ikcontrolrigcontext_base.h:12
void CIKControlRigContext_Base::CIKControlRigContext_Base(const CIKControlRigDescription_Base* pDescription)
{
} /* size: 0 */

// <0014EFA6> ik/ikcontrolrigcontext_base.h:46
void CIKControlRigContext_Base::GetIKTraceRequests()
{
} /* size: 12 */

// <0014EF81> ik/ikcontrolrigcontext_base.h:65
inline void CIKControlRigContext_Base::GetTiltNormalGoal(const CIKInterpolationState& interpolationState)
{
} /* size: 0 */

