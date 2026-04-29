
//
// public/animationsystem/ik/iikcontrolrigcontext.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 4
//	class: 1
//

// <00148AA0> ../public/animationsystem/ik/iikcontrolrigcontext.h:19
void IIKControlRigContext::IIKControlRigContext()
{
} /* size: 0 */

// <00148A83> ../public/animationsystem/ik/iikcontrolrigcontext.h:19
inline void IIKControlRigContext::IIKControlRigContext()
{
} /* size: 0 */

// <000E5F69> ../public/animationsystem/ik/iikcontrolrigcontext.h:19
// member functions: 38
// member variable: 1
// vtable entries: 16
// class size: 8
class IIKControlRigContext {
	void IIKControlRigContext(IIKControlRigContext* , const IIKControlRigContext& );
	void IIKControlRigContext(IIKControlRigContext* );
	int ()(void) * * _vptr.IIKControlRigContext; /* 0 8 */
	/* ../public/animationsystem/ik/iikcontrolrigcontext.h:22 */
	virtual void ~IIKControlRigContext(IIKControlRigContext* );
	/* ../public/animationsystem/ik/iikcontrolrigcontext.h:25 */
	virtual void Init(IIKControlRigContext* , CIKInterpolationState& , InterpolatedVarPhase_t, HModel& );
	/* ../public/animationsystem/ik/iikcontrolrigcontext.h:26 */
	virtual void Update(const IIKControlRigContext* , CIKInterpolationState& , const CIKUpdateInputState& , CIKUpdateOutputState& );
	/* ../public/animationsystem/ik/iikcontrolrigcontext.h:27 */
	virtual void Teardown(IIKControlRigContext* , CIKInterpolationState& , InterpolatedVarPhase_t);
	/* ../public/animationsystem/ik/iikcontrolrigcontext.h:31 */
	virtual void Invalidate(const IIKControlRigContext* , CIKInterpolationState& , InterpolatedVarPhase_t);
	/* ../public/animationsystem/ik/iikcontrolrigcontext.h:32 */
	virtual void OnTeleported(const IIKControlRigContext* , CIKInterpolationState& , InterpolatedVarPhase_t);
	/* ../public/animationsystem/ik/iikcontrolrigcontext.h:35 */
	virtual float GetMasterBlendAmount(const IIKControlRigContext* , const CIKInterpolationState& );
	/* ../public/animationsystem/ik/iikcontrolrigcontext.h:36 */
	virtual void SetMasterBlendAmount(const IIKControlRigContext* , CIKInterpolationState& , InterpolatedVarPhase_t, float);
	/* ../public/animationsystem/ik/iikcontrolrigcontext.h:37 */
	virtual void RestoreMasterBlendAmountToDefault(const IIKControlRigContext* , CIKInterpolationState& , InterpolatedVarPhase_t);
	/* ../public/animationsystem/ik/iikcontrolrigcontext.h:39 */
	virtual void SetChainBlendAmount(const IIKControlRigContext* , CIKInterpolationState& , InterpolatedVarPhase_t, const CUtlSymbolLarge& , float);
	/* ../public/animationsystem/ik/iikcontrolrigcontext.h:42 */
	virtual bool IsChainEnabled(const IIKControlRigContext* , int);
	/* ../public/animationsystem/ik/iikcontrolrigcontext.h:43 */
	virtual void SetChainEnabled(IIKControlRigContext* , InterpolatedVarPhase_t, int, bool);
	/* ../public/animationsystem/ik/iikcontrolrigcontext.h:45 */
	virtual bool AreAnyChainsEnabled(const IIKControlRigContext* );
	/* ../public/animationsystem/ik/iikcontrolrigcontext.h:48 */
	virtual bool SetIKLockRotationAlpha(const IIKControlRigContext* , CIKInterpolationState& , InterpolatedVarPhase_t, const CUtlSymbolLarge& , float);
	/* ../public/animationsystem/ik/iikcontrolrigcontext.h:51 */
	virtual void SetFreezeTiltNormal(const IIKControlRigContext* , CIKInterpolationState& , InterpolatedVarPhase_t, bool);
	/* ../public/animationsystem/ik/iikcontrolrigcontext.h:54 */
	virtual CUtlVector<CTraceRequest*, CUtlMemory<CTraceRequest*, int> >& GetIKTraceRequests(IIKControlRigContext* );
	/* ../public/animationsystem/ik/iikcontrolrigcontext.h:56 */
	virtual float GetAbsOriginDropHeight(const IIKControlRigContext* );
	void IIKControlRigContext(class IIKControlRigContext *, const class IIKControlRigContext  &); /* linkage=_ZN20IIKControlRigContextC4ERKS_ */
	void IIKControlRigContext(class IIKControlRigContext *); /* linkage=_ZN20IIKControlRigContextC4Ev */
	virtual void ~IIKControlRigContext(class IIKControlRigContext *); /* linkage=_ZN20IIKControlRigContextD4Ev */
	virtual void Init(class IIKControlRigContext *, class CIKInterpolationState &, enum InterpolatedVarPhase_t, HModel &); /* linkage=_ZN20IIKControlRigContext4InitER21CIKInterpolationState22InterpolatedVarPhase_tR11CWeakHandleI25InfoForResourceTypeCModelE */
	virtual void Update(const class IIKControlRigContext  *, class CIKInterpolationState &, const class CIKUpdateInputState  &, class CIKUpdateOutputState &); /* linkage=_ZNK20IIKControlRigContext6UpdateER21CIKInterpolationStateRK19CIKUpdateInputStateR20CIKUpdateOutputState */
	virtual void Teardown(class IIKControlRigContext *, class CIKInterpolationState &, enum InterpolatedVarPhase_t); /* linkage=_ZN20IIKControlRigContext8TeardownER21CIKInterpolationState22InterpolatedVarPhase_t */
	virtual void Invalidate(const class IIKControlRigContext  *, class CIKInterpolationState &, enum InterpolatedVarPhase_t); /* linkage=_ZNK20IIKControlRigContext10InvalidateER21CIKInterpolationState22InterpolatedVarPhase_t */
	virtual void OnTeleported(const class IIKControlRigContext  *, class CIKInterpolationState &, enum InterpolatedVarPhase_t); /* linkage=_ZNK20IIKControlRigContext12OnTeleportedER21CIKInterpolationState22InterpolatedVarPhase_t */
	virtual float GetMasterBlendAmount(const class IIKControlRigContext  *, const class CIKInterpolationState  &); /* linkage=_ZNK20IIKControlRigContext20GetMasterBlendAmountERK21CIKInterpolationState */
	virtual void SetMasterBlendAmount(const class IIKControlRigContext  *, class CIKInterpolationState &, enum InterpolatedVarPhase_t, float); /* linkage=_ZNK20IIKControlRigContext20SetMasterBlendAmountER21CIKInterpolationState22InterpolatedVarPhase_tf */
	virtual void RestoreMasterBlendAmountToDefault(const class IIKControlRigContext  *, class CIKInterpolationState &, enum InterpolatedVarPhase_t); /* linkage=_ZNK20IIKControlRigContext33RestoreMasterBlendAmountToDefaultER21CIKInterpolationState22InterpolatedVarPhase_t */
	virtual void SetChainBlendAmount(const class IIKControlRigContext  *, class CIKInterpolationState &, enum InterpolatedVarPhase_t, const class CUtlSymbolLarge  &, float); /* linkage=_ZNK20IIKControlRigContext19SetChainBlendAmountER21CIKInterpolationState22InterpolatedVarPhase_tRK15CUtlSymbolLargef */
	virtual bool IsChainEnabled(const class IIKControlRigContext  *, int); /* linkage=_ZNK20IIKControlRigContext14IsChainEnabledEi */
	virtual void SetChainEnabled(class IIKControlRigContext *, enum InterpolatedVarPhase_t, int, bool); /* linkage=_ZN20IIKControlRigContext15SetChainEnabledE22InterpolatedVarPhase_tib */
	virtual bool AreAnyChainsEnabled(const class IIKControlRigContext  *); /* linkage=_ZNK20IIKControlRigContext19AreAnyChainsEnabledEv */
	virtual bool SetIKLockRotationAlpha(const class IIKControlRigContext  *, class CIKInterpolationState &, enum InterpolatedVarPhase_t, const class CUtlSymbolLarge  &, float); /* linkage=_ZNK20IIKControlRigContext22SetIKLockRotationAlphaER21CIKInterpolationState22InterpolatedVarPhase_tRK15CUtlSymbolLargef */
	virtual void SetFreezeTiltNormal(const class IIKControlRigContext  *, class CIKInterpolationState &, enum InterpolatedVarPhase_t, bool); /* linkage=_ZNK20IIKControlRigContext19SetFreezeTiltNormalER21CIKInterpolationState22InterpolatedVarPhase_tb */
	virtual class CUtlVector<CTraceRequest*, CUtlMemory<CTraceRequest*, int> > & GetIKTraceRequests(class IIKControlRigContext *); /* linkage=_ZN20IIKControlRigContext18GetIKTraceRequestsEv */
	virtual float GetAbsOriginDropHeight(const class IIKControlRigContext  *); /* linkage=_ZNK20IIKControlRigContext22GetAbsOriginDropHeightEv */
};

// <0014F05D> ../public/animationsystem/ik/iikcontrolrigcontext.h:22
void IIKControlRigContext::~IIKControlRigContext()
{
} /* size: 0 */

// <0014F02D> ../public/animationsystem/ik/iikcontrolrigcontext.h:22
inline void IIKControlRigContext::~IIKControlRigContext()
{
} /* size: 0 */

