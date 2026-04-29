
//
// public/tier0/interpolatedvar.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//
//	function: 1
//	classes: 4
//	struct: 1
//

// <041035E2> ../public/tier0/interpolatedvar.h:135
// member variables: 2
// struct size: 16
struct CInterpolationPrefixString {
	CUtlString m_sPrefix; /* 0 8 */
	Color m_SpewColor; /* 8 4 */
};

// <0014F1F0> ../public/tier0/interpolatedvar.h:151
inline const char* GetInterpolatedVarPhaseName(InterpolatedVarPhase_t ivPhase)
{
} /* size: 0 */

// <0410360E> ../public/tier0/interpolatedvar.h:171
// member functions: 6
// member variables: 2
// static member variables: 2
// class size: 8
class CInterpolationContext {
	/* ../public/tier0/interpolatedvar.h:174 */
	void CInterpolationContext(CInterpolationContext* );
	/* ../public/tier0/interpolatedvar.h:183 */
	void ~CInterpolationContext(CInterpolationContext* );
	/* ../public/tier0/interpolatedvar.h:190 */
	void EnableExtrapolation(bool);
	/* ../public/tier0/interpolatedvar.h:195 */
	bool IsExtrapolationAllowed(void);
	/* ../public/tier0/interpolatedvar.h:200 */
	void SetLastServerTick(int);
	/* ../public/tier0/interpolatedvar.h:205 */
	int GetLastServerTick(void);
private:
	bool m_bOldAllowExtrapolation; /* 0 1 */
	int m_nOldLastServerTick; /* 4 4 */
	static bool s_bAllowExtrapolation; /* 0 0 */
	static int s_nLastServerTick; /* 0 0 */
};

// <058C3C8A> ../../public/tier0/interpolatedvar.h:171
// member functions: 6
// member variables: 2
// static member variables: 2
// class size: 8
class CInterpolationContext {
	/* ../../public/tier0/interpolatedvar.h:174 */
	void CInterpolationContext(CInterpolationContext* );
	/* ../../public/tier0/interpolatedvar.h:183 */
	void ~CInterpolationContext(CInterpolationContext* );
	/* ../../public/tier0/interpolatedvar.h:190 */
	void EnableExtrapolation(bool);
	/* ../../public/tier0/interpolatedvar.h:195 */
	bool IsExtrapolationAllowed(void);
	/* ../../public/tier0/interpolatedvar.h:200 */
	void SetLastServerTick(int);
	/* ../../public/tier0/interpolatedvar.h:205 */
	int GetLastServerTick(void);
private:
	bool m_bOldAllowExtrapolation; /* 0 1 */
	int m_nOldLastServerTick; /* 4 4 */
	static bool s_bAllowExtrapolation; /* 0 0 */
	static int s_nLastServerTick; /* 0 0 */
};

// <04103730> ../public/tier0/interpolatedvar.h:529
// member functions: 61
// member variable: 1
// static member variable: 1
// vtable entries: 52
// class size: 8
class IInterpolatedVar {
	int ()(void) * * _vptr.IInterpolatedVar; /* 0 8 */
	/* ../public/tier0/interpolatedvar.h:532 */
	virtual void ~IInterpolatedVar(IInterpolatedVar* );
	/* ../public/tier0/interpolatedvar.h:534 */
	virtual void Setup(IInterpolatedVar* , void* , int);
	/* ../public/tier0/interpolatedvar.h:535 */
	virtual void SetInterpolationAmount(IInterpolatedVar* , InterpolatedVarPhase_t, float, int);
	/* ../public/tier0/interpolatedvar.h:536 */
	virtual float GetInterpolationAmount(const IInterpolatedVar* , InterpolatedVarPhase_t);
	/* ../public/tier0/interpolatedvar.h:643 */
	void SetTickInterval(float);
	/* ../public/tier0/interpolatedvar.h:648 */
	float GetTickInterval(void);
	/* ../public/tier0/interpolatedvar.h:541 */
	virtual void RestoreLastSimulationValue(IInterpolatedVar* , InterpolatedVarPhase_t);
	/* ../public/tier0/interpolatedvar.h:654 */
	bool NoteChanged(IInterpolatedVar* , InterpolatedVarPhase_t, int);
	/* ../public/tier0/interpolatedvar.h:659 */
	bool LatchChanged(IInterpolatedVar* , InterpolatedVarPhase_t, const void* , int);
	/* ../public/tier0/interpolatedvar.h:547 */
	virtual void Reset(IInterpolatedVar* );
	/* ../public/tier0/interpolatedvar.h:550 */
	virtual InterpolationResult_t Interpolate(IInterpolatedVar* , InterpolatedVarPhase_t, float, InterpolationBehavior_t, uint32);
	/* ../public/tier0/interpolatedvar.h:551 */
	virtual bool ValueChangesAfterThisTime(const IInterpolatedVar* , InterpolatedVarPhase_t, float, InterpolationBehavior_t);
	/* ../public/tier0/interpolatedvar.h:553 */
	virtual int GetFlags(const IInterpolatedVar* );
	/* ../public/tier0/interpolatedvar.h:554 */
	virtual bool HasFlag(const IInterpolatedVar* , int);
	/* ../public/tier0/interpolatedvar.h:555 */
	virtual void AddFlags(IInterpolatedVar* , int);
	/* ../public/tier0/interpolatedvar.h:556 */
	virtual void RemoveFlags(IInterpolatedVar* , int);
	/* ../public/tier0/interpolatedvar.h:557 */
	virtual void SetInWrappedVarLatchList(IInterpolatedVar* , InterpolatedVarPhase_t, bool);
	/* ../public/tier0/interpolatedvar.h:558 */
	virtual bool IsInWrappedVarLatchList(const IInterpolatedVar* , InterpolatedVarPhase_t);
	/* ../public/tier0/interpolatedvar.h:559 */
	virtual void Copy(IInterpolatedVar* , IInterpolatedVar* );
	/* ../public/tier0/interpolatedvar.h:560 */
	virtual CUtlString GetDebugName(const IInterpolatedVar* , int);
	/* ../public/tier0/interpolatedvar.h:561 */
	virtual CUtlString GetDebugBaseName(const IInterpolatedVar* );
	/* ../public/tier0/interpolatedvar.h:562 */
	virtual void SetDebug(IInterpolatedVar* , bool, int);
	/* ../public/tier0/interpolatedvar.h:563 */
	virtual bool GetDebug(const IInterpolatedVar* , InterpolatedVarPhase_t);
	/* ../public/tier0/interpolatedvar.h:564 */
	virtual CUtlString GetDebugValue(const IInterpolatedVar* );
	/* ../public/tier0/interpolatedvar.h:566 */
	virtual void SetAutoSpew(IInterpolatedVar* , bool, int);
	/* ../public/tier0/interpolatedvar.h:567 */
	virtual bool GetAutoSpew(const IInterpolatedVar* , InterpolatedVarPhase_t);
	/* ../public/tier0/interpolatedvar.h:568 */
	virtual void SetSpewIndex(IInterpolatedVar* , int);
	/* ../public/tier0/interpolatedvar.h:569 */
	virtual void SetDebugPhase(IInterpolatedVar* , InterpolatedVarPhase_t);
	/* ../public/tier0/interpolatedvar.h:570 */
	virtual void SetArrayIndexNameHelperDelegate(IInterpolatedVar* , const CUtlDelegate<CUtlString(int)>& );
	/* ../public/tier0/interpolatedvar.h:571 */
	virtual void SpewInterpolatedVar(const IInterpolatedVar* , InterpolatedVarPhase_t, float, InterpolationBehavior_t, InterpolatedVarSpewFlags_t, int);
	/* ../public/tier0/interpolatedvar.h:572 */
	virtual int GetMaxCount(const IInterpolatedVar* );
	/* ../public/tier0/interpolatedvar.h:573 */
	virtual CEntityIndex GetEntityIndex(const IInterpolatedVar* );
	/* ../public/tier0/interpolatedvar.h:579 */
	virtual void SetInterpolatedVarContains(IInterpolatedVar* , InterpolatedVarPhase_t);
	/* ../public/tier0/interpolatedvar.h:580 */
	virtual InterpolatedVarPhase_t GetInterpolatedVarContains(const IInterpolatedVar* );
	/* ../public/tier0/interpolatedvar.h:581 */
	virtual void SetNeedsToInterpolate(IInterpolatedVar* , InterpolatedVarPhase_t, bool);
	/* ../public/tier0/interpolatedvar.h:582 */
	virtual bool GetNeedsToInterpolate(const IInterpolatedVar* , InterpolatedVarPhase_t);
	/* ../public/tier0/interpolatedvar.h:583 */
	virtual bool HasBeenSetup(const IInterpolatedVar* );
	/* ../public/tier0/interpolatedvar.h:584 */
	virtual bool DoesCurrentValueMatchInterpolatedValue(const IInterpolatedVar* , InterpolatedVarPhase_t, float, InterpolationBehavior_t);
	/* ../public/tier0/interpolatedvar.h:587 */
	virtual bool CheckIfInterpolationTimeIsBeforeFullInterpolationInterval(const IInterpolatedVar* , InterpolatedVarPhase_t, float);
	/* ../public/tier0/interpolatedvar.h:593 */
	virtual int GetInterpolatedVarSize(const IInterpolatedVar* );
	/* ../public/tier0/interpolatedvar.h:594 */
	virtual int ReadCurrentValue(const IInterpolatedVar* , void* );
	/* ../public/tier0/interpolatedvar.h:595 */
	virtual int WriteCurrentValue(IInterpolatedVar* , void* );
	/* ../public/tier0/interpolatedvar.h:596 */
	virtual bool IsProcedural(const IInterpolatedVar* );
	/* ../public/tier0/interpolatedvar.h:597 */
	virtual bool HasProceduralDelegates(const IInterpolatedVar* );
	/* ../public/tier0/interpolatedvar.h:598 */
	virtual void SetVarTypeBit(IInterpolatedVar* , int);
	/* ../public/tier0/interpolatedvar.h:599 */
	virtual int GetVarTypeBit(const IInterpolatedVar* );
	/* ../public/tier0/interpolatedvar.h:602 */
	virtual int GetExpectedLatchInterval(const IInterpolatedVar* , InterpolatedVarPhase_t);
	/* ../public/tier0/interpolatedvar.h:604 */
	virtual void SetEntityIndex(IInterpolatedVar* , CEntityIndex);
	/* ../public/tier0/interpolatedvar.h:605 */
	virtual void SetInterpolationTimeType(IInterpolatedVar* , bool, InterpolatedVarInterpolationTimeType_t);
	/* ../public/tier0/interpolatedvar.h:606 */
	virtual InterpolatedVarInterpolationTimeType_t GetInterpolationTimeType(const IInterpolatedVar* );
	/* ../public/tier0/interpolatedvar.h:607 */
	virtual bool IsClientAuthoritative(const IInterpolatedVar* );
	/* ../public/tier0/interpolatedvar.h:609 */
	virtual void ComputePrefixString(const IInterpolatedVar* , const char* , InterpolatedVarPhase_t, CInterpolationPrefixString& );
	/* ../public/tier0/interpolatedvar.h:610 */
	virtual void PrefixSpewMsg(const IInterpolatedVar* , const char* , InterpolatedVarPhase_t, const char* );
	/* ../public/tier0/interpolatedvar.h:612 */
	virtual float ComputeInterpolationFrac(const IInterpolatedVar* , InterpolatedVarPhase_t, float, InterpolationBehavior_t);
	/* ../public/tier0/interpolatedvar.h:614 */
	virtual int GetValueFixedWidth(const IInterpolatedVar* );
	/* ../public/tier0/interpolatedvar.h:633 */
	int GetLastPotentialChangeTick(InterpolatedVarPhase_t, InterpolatedVarInterpolationTimeType_t);
	/* ../public/tier0/interpolatedvar.h:638 */
	void SetLastPotentialChangeTick(InterpolatedVarPhase_t, InterpolatedVarInterpolationTimeType_t, int);
private:
	/* ../public/tier0/interpolatedvar.h:621 */
	virtual bool NoteChangedTick(IInterpolatedVar* , InterpolatedVarPhase_t, int);
	/* ../public/tier0/interpolatedvar.h:622 */
	virtual bool LatchChangedTick(IInterpolatedVar* , InterpolatedVarPhase_t, const void* , int);
	/* ../public/tier0/interpolatedvar.h:625 */
	bool NoteChanged(IInterpolatedVar* , InterpolatedVarPhase_t, float);
	/* ../public/tier0/interpolatedvar.h:626 */
	bool LatchChangedTick(IInterpolatedVar* , InterpolatedVarPhase_t, const void* , float);
	static int sm_pLastPotentialChangeTick[2][2]; /* 0 0 */
};

// <058C3DAC> ../../public/tier0/interpolatedvar.h:529
// member functions: 61
// member variable: 1
// static member variable: 1
// vtable entries: 52
// class size: 8
class IInterpolatedVar {
	int ()(void) * * _vptr.IInterpolatedVar; /* 0 8 */
	/* ../../public/tier0/interpolatedvar.h:532 */
	virtual void ~IInterpolatedVar(IInterpolatedVar* );
	/* ../../public/tier0/interpolatedvar.h:534 */
	virtual void Setup(IInterpolatedVar* , void* , int);
	/* ../../public/tier0/interpolatedvar.h:535 */
	virtual void SetInterpolationAmount(IInterpolatedVar* , InterpolatedVarPhase_t, float, int);
	/* ../../public/tier0/interpolatedvar.h:536 */
	virtual float GetInterpolationAmount(const IInterpolatedVar* , InterpolatedVarPhase_t);
	/* ../../public/tier0/interpolatedvar.h:643 */
	void SetTickInterval(float);
	/* ../../public/tier0/interpolatedvar.h:648 */
	float GetTickInterval(void);
	/* ../../public/tier0/interpolatedvar.h:541 */
	virtual void RestoreLastSimulationValue(IInterpolatedVar* , InterpolatedVarPhase_t);
	/* ../../public/tier0/interpolatedvar.h:654 */
	bool NoteChanged(IInterpolatedVar* , InterpolatedVarPhase_t, int);
	/* ../../public/tier0/interpolatedvar.h:659 */
	bool LatchChanged(IInterpolatedVar* , InterpolatedVarPhase_t, const void* , int);
	/* ../../public/tier0/interpolatedvar.h:547 */
	virtual void Reset(IInterpolatedVar* );
	/* ../../public/tier0/interpolatedvar.h:550 */
	virtual InterpolationResult_t Interpolate(IInterpolatedVar* , InterpolatedVarPhase_t, float, InterpolationBehavior_t, uint32);
	/* ../../public/tier0/interpolatedvar.h:551 */
	virtual bool ValueChangesAfterThisTime(const IInterpolatedVar* , InterpolatedVarPhase_t, float, InterpolationBehavior_t);
	/* ../../public/tier0/interpolatedvar.h:553 */
	virtual int GetFlags(const IInterpolatedVar* );
	/* ../../public/tier0/interpolatedvar.h:554 */
	virtual bool HasFlag(const IInterpolatedVar* , int);
	/* ../../public/tier0/interpolatedvar.h:555 */
	virtual void AddFlags(IInterpolatedVar* , int);
	/* ../../public/tier0/interpolatedvar.h:556 */
	virtual void RemoveFlags(IInterpolatedVar* , int);
	/* ../../public/tier0/interpolatedvar.h:557 */
	virtual void SetInWrappedVarLatchList(IInterpolatedVar* , InterpolatedVarPhase_t, bool);
	/* ../../public/tier0/interpolatedvar.h:558 */
	virtual bool IsInWrappedVarLatchList(const IInterpolatedVar* , InterpolatedVarPhase_t);
	/* ../../public/tier0/interpolatedvar.h:559 */
	virtual void Copy(IInterpolatedVar* , IInterpolatedVar* );
	/* ../../public/tier0/interpolatedvar.h:560 */
	virtual CUtlString GetDebugName(const IInterpolatedVar* , int);
	/* ../../public/tier0/interpolatedvar.h:561 */
	virtual CUtlString GetDebugBaseName(const IInterpolatedVar* );
	/* ../../public/tier0/interpolatedvar.h:562 */
	virtual void SetDebug(IInterpolatedVar* , bool, int);
	/* ../../public/tier0/interpolatedvar.h:563 */
	virtual bool GetDebug(const IInterpolatedVar* , InterpolatedVarPhase_t);
	/* ../../public/tier0/interpolatedvar.h:564 */
	virtual CUtlString GetDebugValue(const IInterpolatedVar* );
	/* ../../public/tier0/interpolatedvar.h:566 */
	virtual void SetAutoSpew(IInterpolatedVar* , bool, int);
	/* ../../public/tier0/interpolatedvar.h:567 */
	virtual bool GetAutoSpew(const IInterpolatedVar* , InterpolatedVarPhase_t);
	/* ../../public/tier0/interpolatedvar.h:568 */
	virtual void SetSpewIndex(IInterpolatedVar* , int);
	/* ../../public/tier0/interpolatedvar.h:569 */
	virtual void SetDebugPhase(IInterpolatedVar* , InterpolatedVarPhase_t);
	/* ../../public/tier0/interpolatedvar.h:570 */
	virtual void SetArrayIndexNameHelperDelegate(IInterpolatedVar* , const CUtlDelegate<CUtlString(int)>& );
	/* ../../public/tier0/interpolatedvar.h:571 */
	virtual void SpewInterpolatedVar(const IInterpolatedVar* , InterpolatedVarPhase_t, float, InterpolationBehavior_t, InterpolatedVarSpewFlags_t, int);
	/* ../../public/tier0/interpolatedvar.h:572 */
	virtual int GetMaxCount(const IInterpolatedVar* );
	/* ../../public/tier0/interpolatedvar.h:573 */
	virtual CEntityIndex GetEntityIndex(const IInterpolatedVar* );
	/* ../../public/tier0/interpolatedvar.h:579 */
	virtual void SetInterpolatedVarContains(IInterpolatedVar* , InterpolatedVarPhase_t);
	/* ../../public/tier0/interpolatedvar.h:580 */
	virtual InterpolatedVarPhase_t GetInterpolatedVarContains(const IInterpolatedVar* );
	/* ../../public/tier0/interpolatedvar.h:581 */
	virtual void SetNeedsToInterpolate(IInterpolatedVar* , InterpolatedVarPhase_t, bool);
	/* ../../public/tier0/interpolatedvar.h:582 */
	virtual bool GetNeedsToInterpolate(const IInterpolatedVar* , InterpolatedVarPhase_t);
	/* ../../public/tier0/interpolatedvar.h:583 */
	virtual bool HasBeenSetup(const IInterpolatedVar* );
	/* ../../public/tier0/interpolatedvar.h:584 */
	virtual bool DoesCurrentValueMatchInterpolatedValue(const IInterpolatedVar* , InterpolatedVarPhase_t, float, InterpolationBehavior_t);
	/* ../../public/tier0/interpolatedvar.h:587 */
	virtual bool CheckIfInterpolationTimeIsBeforeFullInterpolationInterval(const IInterpolatedVar* , InterpolatedVarPhase_t, float);
	/* ../../public/tier0/interpolatedvar.h:593 */
	virtual int GetInterpolatedVarSize(const IInterpolatedVar* );
	/* ../../public/tier0/interpolatedvar.h:594 */
	virtual int ReadCurrentValue(const IInterpolatedVar* , void* );
	/* ../../public/tier0/interpolatedvar.h:595 */
	virtual int WriteCurrentValue(IInterpolatedVar* , void* );
	/* ../../public/tier0/interpolatedvar.h:596 */
	virtual bool IsProcedural(const IInterpolatedVar* );
	/* ../../public/tier0/interpolatedvar.h:597 */
	virtual bool HasProceduralDelegates(const IInterpolatedVar* );
	/* ../../public/tier0/interpolatedvar.h:598 */
	virtual void SetVarTypeBit(IInterpolatedVar* , int);
	/* ../../public/tier0/interpolatedvar.h:599 */
	virtual int GetVarTypeBit(const IInterpolatedVar* );
	/* ../../public/tier0/interpolatedvar.h:602 */
	virtual int GetExpectedLatchInterval(const IInterpolatedVar* , InterpolatedVarPhase_t);
	/* ../../public/tier0/interpolatedvar.h:604 */
	virtual void SetEntityIndex(IInterpolatedVar* , CEntityIndex);
	/* ../../public/tier0/interpolatedvar.h:605 */
	virtual void SetInterpolationTimeType(IInterpolatedVar* , bool, InterpolatedVarInterpolationTimeType_t);
	/* ../../public/tier0/interpolatedvar.h:606 */
	virtual InterpolatedVarInterpolationTimeType_t GetInterpolationTimeType(const IInterpolatedVar* );
	/* ../../public/tier0/interpolatedvar.h:607 */
	virtual bool IsClientAuthoritative(const IInterpolatedVar* );
	/* ../../public/tier0/interpolatedvar.h:609 */
	virtual void ComputePrefixString(const IInterpolatedVar* , const char* , InterpolatedVarPhase_t, CInterpolationPrefixString& );
	/* ../../public/tier0/interpolatedvar.h:610 */
	virtual void PrefixSpewMsg(const IInterpolatedVar* , const char* , InterpolatedVarPhase_t, const char* );
	/* ../../public/tier0/interpolatedvar.h:612 */
	virtual float ComputeInterpolationFrac(const IInterpolatedVar* , InterpolatedVarPhase_t, float, InterpolationBehavior_t);
	/* ../../public/tier0/interpolatedvar.h:614 */
	virtual int GetValueFixedWidth(const IInterpolatedVar* );
	/* ../../public/tier0/interpolatedvar.h:633 */
	int GetLastPotentialChangeTick(InterpolatedVarPhase_t, InterpolatedVarInterpolationTimeType_t);
	/* ../../public/tier0/interpolatedvar.h:638 */
	void SetLastPotentialChangeTick(InterpolatedVarPhase_t, InterpolatedVarInterpolationTimeType_t, int);
private:
	/* ../../public/tier0/interpolatedvar.h:621 */
	virtual bool NoteChangedTick(IInterpolatedVar* , InterpolatedVarPhase_t, int);
	/* ../../public/tier0/interpolatedvar.h:622 */
	virtual bool LatchChangedTick(IInterpolatedVar* , InterpolatedVarPhase_t, const void* , int);
	/* ../../public/tier0/interpolatedvar.h:625 */
	bool NoteChanged(IInterpolatedVar* , InterpolatedVarPhase_t, float);
	/* ../../public/tier0/interpolatedvar.h:626 */
	bool LatchChangedTick(IInterpolatedVar* , InterpolatedVarPhase_t, const void* , float);
	static int sm_pLastPotentialChangeTick[2][2]; /* 0 0 */
};

