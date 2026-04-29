
//
// helpersequence.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 3
//	class: 1
//

// <00C0681E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.h:14
// member functions: 50
// member variables: 3
// vtable entries: 19
// class size: 56
class CHelperSequence : public CEmptySequence {
public:
	/* class CEmptySequence <ancestor>; */ /* 0 16 */
	void CHelperSequence(CHelperSequence* , const CHelperSequence& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:28 */
	void CHelperSequence(CHelperSequence* , const CAnimContainer* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.h:18 */
	virtual void ~CHelperSequence(CHelperSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:36 */
	virtual int NumEvents(const CHelperSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:45 */
	virtual const AnimEvent_t* GetEvent(const CHelperSequence* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:53 */
	virtual bool GetBounds(const CHelperSequence* , Vector* , Vector* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:91 */
	virtual void SetEventIndex(const CHelperSequence* , int, int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:101 */
	virtual void AddEventTypeFlags(const CHelperSequence* , int, int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:111 */
	virtual void RemoveEventTypeFlags(const CHelperSequence* , int, int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:121 */
	virtual int MaxFrame(const CHelperSequence* , const float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:139 */
	virtual float FPS(const CHelperSequence* , const float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:155 */
	virtual float CPS(const CHelperSequence* , const float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:175 */
	virtual float Duration(const CHelperSequence* , const float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:191 */
	virtual float MovementAndDuration(const CHelperSequence* , float, float, const float* , Vector& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:222 */
	virtual float TotalMovementAndDuration(const CHelperSequence* , const float* , Vector& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:233 */
	virtual bool Movement(const CHelperSequence* , float, float, const float* , Vector& , QAngle& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:271 */
	virtual CMotionTransform Movement(const CHelperSequence* , float, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:286 */
	virtual bool Velocity(const CHelperSequence* , float, const float* , Vector& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:312 */
	virtual Vector RelativeVelocity(const CHelperSequence* , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:332 */
	virtual float FindDistance(const CHelperSequence* , const float* , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:350 */
	virtual int LookupPoseSetting(const CHelperSequence* , const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:671 */
	virtual void PostInit(CHelperSequence* );
protected:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:369 */
	void TranslateEvent(AnimEvent_t* , const CAnimAnimEvent* );
	CUtlVector<AnimEvent_t, CUtlMemory<AnimEvent_t, int> > m_animEventArray; /* 16 32 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:675 */
	void GetBoneToWorlds(const CHelperSequence* , float, CTransform* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:688 */
	void InitializeSequenceKeyValues(CHelperSequence* , const CSeqS1SeqDesc* );
	const class CAnimContainer * m_pAnimContainer; /* 48 8 */
	void CHelperSequence(class CHelperSequence *, const class CHelperSequence  &); /* linkage=_ZN15CHelperSequenceC4ERKS_ */
	void CHelperSequence(class CHelperSequence *, const class CAnimContainer  *); /* linkage=_ZN15CHelperSequenceC4EPK14CAnimContainer */
	virtual void ~CHelperSequence(class CHelperSequence *); /* linkage=_ZN15CHelperSequenceD4Ev */
	virtual int NumEvents(const class CHelperSequence  *); /* linkage=_ZNK15CHelperSequence9NumEventsEv */
	virtual const class AnimEvent_t  * GetEvent(const class CHelperSequence  *, int); /* linkage=_ZNK15CHelperSequence8GetEventEi */
	virtual bool GetBounds(const class CHelperSequence  *, class Vector *, class Vector *); /* linkage=_ZNK15CHelperSequence9GetBoundsEP6VectorS1_ */
	virtual void SetEventIndex(const class CHelperSequence  *, int, int); /* linkage=_ZNK15CHelperSequence13SetEventIndexEii */
	virtual void AddEventTypeFlags(const class CHelperSequence  *, int, int); /* linkage=_ZNK15CHelperSequence17AddEventTypeFlagsEii */
	virtual void RemoveEventTypeFlags(const class CHelperSequence  *, int, int); /* linkage=_ZNK15CHelperSequence20RemoveEventTypeFlagsEii */
	virtual int MaxFrame(const class CHelperSequence  *, const float  *); /* linkage=_ZNK15CHelperSequence8MaxFrameEPKf */
	virtual float FPS(const class CHelperSequence  *, const float  *); /* linkage=_ZNK15CHelperSequence3FPSEPKf */
	virtual float CPS(const class CHelperSequence  *, const float  *); /* linkage=_ZNK15CHelperSequence3CPSEPKf */
	virtual float Duration(const class CHelperSequence  *, const float  *); /* linkage=_ZNK15CHelperSequence8DurationEPKf */
	virtual float MovementAndDuration(const class CHelperSequence  *, float, float, const float  *, class Vector &); /* linkage=_ZNK15CHelperSequence19MovementAndDurationEffPKfR6Vector */
	/* <d2a3e2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:222 */
	virtual float TotalMovementAndDuration(const class CHelperSequence  *, const float  *, class Vector &); /* linkage=_ZNK15CHelperSequence24TotalMovementAndDurationEPKfR6Vector */
	virtual bool Movement(const class CHelperSequence  *, float, float, const float  *, class Vector &, class QAngle &); /* linkage=_ZNK15CHelperSequence8MovementEffPKfR6VectorR6QAngle */
	/* <d2788b> _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:271 */
	virtual class CMotionTransform Movement(const class CHelperSequence  *, float, float); /* linkage=_ZNK15CHelperSequence8MovementEff */
	virtual bool Velocity(const class CHelperSequence  *, float, const float  *, class Vector &); /* linkage=_ZNK15CHelperSequence8VelocityEfPKfR6Vector */
	virtual class Vector RelativeVelocity(const class CHelperSequence  *, float); /* linkage=_ZNK15CHelperSequence16RelativeVelocityEf */
	virtual float FindDistance(const class CHelperSequence  *, const float  *, float); /* linkage=_ZNK15CHelperSequence12FindDistanceEPKff */
	virtual int LookupPoseSetting(const class CHelperSequence  *, const char  *); /* linkage=_ZNK15CHelperSequence17LookupPoseSettingEPKc */
	virtual void PostInit(class CHelperSequence *); /* linkage=_ZN15CHelperSequence8PostInitEv */
	void TranslateEvent(class AnimEvent_t *, const class CAnimAnimEvent  *); /* linkage=_ZN15CHelperSequence14TranslateEventEP11AnimEvent_tPK14CAnimAnimEvent */
	void GetBoneToWorlds(const class CHelperSequence  *, float, class CTransform *); /* linkage=_ZNK15CHelperSequence15GetBoneToWorldsEfP10CTransform */
	/* <d32073> _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.cpp:688 */
	void InitializeSequenceKeyValues(class CHelperSequence *, const class CSeqS1SeqDesc  *); /* linkage=_ZN15CHelperSequence27InitializeSequenceKeyValuesEPK13CSeqS1SeqDesc */
};

// <00CE51AD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.h:18
// variable: 1
// function calls: 12
void CHelperSequence::~CHelperSequence()
{
	{
		int i; // 1721
		CUtlMemory<AnimEvent_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<AnimEvent_t, CUtlMemory<AnimEvent_t, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 56
		AnimEvent_t::~AnimEvent_t(); // 1526
		Destruct<AnimEvent_t>(AnimEvent_t* pMemory); // 1723
	}
	CUtlVectorBase<AnimEvent_t, CUtlMemory<AnimEvent_t, int> >::RemoveAll(); // 1798
	CUtlMemory<AnimEvent_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<AnimEvent_t, int>::Purge(); // 903
	CUtlMemory<AnimEvent_t, int>::Purge(); // 1799
	CUtlVectorBase<AnimEvent_t, CUtlMemory<AnimEvent_t, int> >::Purge(); // 560
	CUtlVectorBase<AnimEvent_t, CUtlMemory<AnimEvent_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<AnimEvent_t, CUtlMemory<AnimEvent_t, int> >::~CUtlVector(); // 18
} /* size: 169, inline expansions: 7 (517 bytes) */

// <00CE4DC8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.h:18
// variable: 1
// function calls: 19
void CHelperSequence::~CHelperSequence()
{
	{
		int i; // 1721
		CUtlMemory<AnimEvent_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<AnimEvent_t, CUtlMemory<AnimEvent_t, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 56
		AnimEvent_t::~AnimEvent_t(); // 1526
		Destruct<AnimEvent_t>(AnimEvent_t* pMemory); // 1723
	}
	CUtlVectorBase<AnimEvent_t, CUtlMemory<AnimEvent_t, int> >::RemoveAll(); // 1798
	CUtlMemory<AnimEvent_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<AnimEvent_t, int>::Purge(); // 903
	CUtlMemory<AnimEvent_t, int>::Purge(); // 1799
	CUtlVectorBase<AnimEvent_t, CUtlMemory<AnimEvent_t, int> >::Purge(); // 560
	ValidateAlignment<AnimEvent_t>(void); // 508
	CUtlMemory<AnimEvent_t, int>::Purge(); // 510
	CUtlMemory<AnimEvent_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<AnimEvent_t, CUtlMemory<AnimEvent_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<AnimEvent_t, CUtlMemory<AnimEvent_t, int> >::~CUtlVector(); // 18
	IBaseSequence::~IBaseSequence(); // 128
	ISequence::~ISequence(); // 18
	CEmptySequence::~CEmptySequence(); // 18
	CHelperSequence::~CHelperSequence(); // 18
} /* size: 166, inline expansions: 14 (609 bytes) */

// <00CE4DAF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../helpersequence.h:18
inline void CHelperSequence::~CHelperSequence()
{
} /* size: 0 */

