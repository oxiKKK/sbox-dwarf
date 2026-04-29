
//
// public/animationsystem/emptysequence.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 74
//	class: 1
//

// <04AC0263> ../public/animationsystem/emptysequence.h:15
void CEmptySequence::CEmptySequence()
{
} /* size: 0 */

// <04AC0247> ../public/animationsystem/emptysequence.h:15
inline void CEmptySequence::CEmptySequence()
{
} /* size: 0 */

// <04A96E1A> ../public/animationsystem/emptysequence.h:15
// member functions: 128
// member variables: 2
// vtable entries: 60
// class size: 16
class CEmptySequence : public ISequence {
public:
	/* class ISequence <ancestor>; */ /* 0 8 */
	void CEmptySequence(CEmptySequence* , const CEmptySequence& );
	void CEmptySequence(CEmptySequence* );
	/* ../public/animationsystem/emptysequence.h:18 */
	virtual void ~CEmptySequence(CEmptySequence* );
	/* ../public/animationsystem/emptysequence.h:19 */
	virtual const char* GetName(const CEmptySequence* );
	/* ../public/animationsystem/emptysequence.h:20 */
	virtual const CModel* GetModel(const CEmptySequence* );
	/* ../public/animationsystem/emptysequence.h:21 */
	virtual bool IsLooping(const CEmptySequence* );
	/* ../public/animationsystem/emptysequence.h:22 */
	virtual bool IsMulti(const CEmptySequence* );
	/* ../public/animationsystem/emptysequence.h:23 */
	virtual bool IsDelta(const CEmptySequence* );
	/* ../public/animationsystem/emptysequence.h:24 */
	virtual bool IsHidden(const CEmptySequence* );
	/* ../public/animationsystem/emptysequence.h:25 */
	virtual bool IsAutoplay(const CEmptySequence* );
	/* ../public/animationsystem/emptysequence.h:26 */
	virtual bool IsSnapped(const CEmptySequence* );
	/* ../public/animationsystem/emptysequence.h:27 */
	virtual bool IsAnimation(const CEmptySequence* );
	/* ../public/animationsystem/emptysequence.h:28 */
	virtual bool IsFrameCacheable(const CEmptySequence* );
	/* ../public/animationsystem/emptysequence.h:29 */
	virtual bool IsRealTime(const CEmptySequence* );
	/* ../public/animationsystem/emptysequence.h:30 */
	virtual bool IsModelDoc(const CEmptySequence* );
	/* ../public/animationsystem/emptysequence.h:31 */
	virtual const KeyValues3* GetSequenceKeyValues(const CEmptySequence* );
	/* ../public/animationsystem/emptysequence.h:32 */
	virtual int NumEvents(const CEmptySequence* );
	/* ../public/animationsystem/emptysequence.h:33 */
	virtual const AnimEvent_t* GetEvent(const CEmptySequence* , int);
	/* ../public/animationsystem/emptysequence.h:34 */
	virtual bool GetBounds(const CEmptySequence* , Vector* , Vector* );
	/* ../public/animationsystem/emptysequence.h:35 */
	virtual bool GetAllAnimations(const CEmptySequence* , AnimRefVector_t& );
	/* ../public/animationsystem/emptysequence.h:36 */
	virtual bool GetAllSequences(const CEmptySequence* , CUtlVector<HSequence, CUtlMemory<HSequence, int> >& );
	/* ../public/animationsystem/emptysequence.h:37 */
	virtual int NumActivities(const CEmptySequence* );
	/* ../public/animationsystem/emptysequence.h:38 */
	virtual const char* GetActivityName(const CEmptySequence* , int);
	/* ../public/animationsystem/emptysequence.h:39 */
	virtual float GetActivityWeight(const CEmptySequence* , int);
	/* ../public/animationsystem/emptysequence.h:40 */
	virtual Activity GetActivityType(const CEmptySequence* , int);
	/* ../public/animationsystem/emptysequence.h:41 */
	virtual void SetActivityType(const CEmptySequence* , Activity);
	/* ../public/animationsystem/emptysequence.h:42 */
	virtual void SetActivityType(const CEmptySequence* , int, Activity);
	/* ../public/animationsystem/emptysequence.h:43 */
	virtual int NumPoseParameters(const CEmptySequence* );
	/* ../public/animationsystem/emptysequence.h:44 */
	virtual int GetPoseParameter(const CEmptySequence* , int);
	/* ../public/animationsystem/emptysequence.h:45 */
	virtual int NumPoseSettings(const CEmptySequence* );
	/* ../public/animationsystem/emptysequence.h:46 */
	virtual const char* GetPoseSettingName(const CEmptySequence* , int);
	/* ../public/animationsystem/emptysequence.h:47 */
	virtual float GetPoseSettingValue(const CEmptySequence* , int);
	/* ../public/animationsystem/emptysequence.h:48 */
	virtual void DoAnimation(const CEmptySequence* , CAnimationBucket& , float, float);
	/* ../public/animationsystem/emptysequence.h:49 */
	virtual bool IsFlagSet(const CEmptySequence* , int);
	/* ../public/animationsystem/emptysequence.h:50 */
	virtual void SetFlag(const CEmptySequence* , int);
	/* ../public/animationsystem/emptysequence.h:51 */
	virtual void ClearFlag(const CEmptySequence* , int);
	/* ../public/animationsystem/emptysequence.h:52 */
	virtual float GetFadeInTime(const CEmptySequence* );
	/* ../public/animationsystem/emptysequence.h:53 */
	virtual float GetFadeOutTime(const CEmptySequence* );
	/* ../public/animationsystem/emptysequence.h:54 */
	virtual HSequence GetNextSequence(const CEmptySequence* , HSequence, int* );
	/* ../public/animationsystem/emptysequence.h:55 */
	virtual int GetNodeFlags(const CEmptySequence* );
	/* ../public/animationsystem/emptysequence.h:56 */
	virtual int EntryNode(const CEmptySequence* );
	/* ../public/animationsystem/emptysequence.h:57 */
	virtual int ExitNode(const CEmptySequence* );
	/* ../public/animationsystem/emptysequence.h:58 */
	virtual void SetEntryNode(CEmptySequence* , int);
	/* ../public/animationsystem/emptysequence.h:59 */
	virtual void SetExitNode(CEmptySequence* , int);
	/* ../public/animationsystem/emptysequence.h:60 */
	virtual void SetEventIndex(const CEmptySequence* , int, int);
	/* ../public/animationsystem/emptysequence.h:61 */
	virtual void AddEventTypeFlags(const CEmptySequence* , int, int);
	/* ../public/animationsystem/emptysequence.h:62 */
	virtual void RemoveEventTypeFlags(const CEmptySequence* , int, int);
	/* ../public/animationsystem/emptysequence.h:63 */
	virtual void BuildBlendlist(const CEmptySequence* , CAnimationBlendList* , const float* );
	/* ../public/animationsystem/emptysequence.h:64 */
	virtual bool GetAssetInfo(const CEmptySequence* , CSequenceAssetInfo& );
	/* ../public/animationsystem/emptysequence.h:67 */
	virtual int MaxFrame(const CEmptySequence* , const float* );
	/* ../public/animationsystem/emptysequence.h:68 */
	virtual float FPS(const CEmptySequence* , const float* );
	/* ../public/animationsystem/emptysequence.h:69 */
	virtual float CPS(const CEmptySequence* , const float* );
	/* ../public/animationsystem/emptysequence.h:70 */
	virtual float Duration(const CEmptySequence* , const float* );
	/* ../public/animationsystem/emptysequence.h:72 */
	virtual float MovementAndDuration(const CEmptySequence* , float, float, const float* , Vector& );
	/* ../public/animationsystem/emptysequence.h:73 */
	virtual float TotalMovementAndDuration(const CEmptySequence* , const float* , Vector& );
	/* ../public/animationsystem/emptysequence.h:75 */
	virtual bool Movement(const CEmptySequence* , float, float, const float* , Vector& , QAngle& );
	/* ../public/animationsystem/emptysequence.h:76 */
	virtual CMotionTransform Movement(const CEmptySequence* , float, float);
	/* ../public/animationsystem/emptysequence.h:77 */
	virtual bool Velocity(const CEmptySequence* , float, const float* , Vector& );
	/* ../public/animationsystem/emptysequence.h:78 */
	virtual Vector RelativeVelocity(const CEmptySequence* , float);
	/* ../public/animationsystem/emptysequence.h:79 */
	virtual float FindDistance(const CEmptySequence* , const float* , float);
	/* ../public/animationsystem/emptysequence.h:81 */
	virtual int LookupPoseSetting(const CEmptySequence* , const char* );
	/* ../public/animationsystem/emptysequence.h:84 */
	virtual int GetFootMotionCount(const CEmptySequence* );
	/* ../public/animationsystem/emptysequence.h:85 */
	virtual const CFootMotion* GetFootMotion(const CEmptySequence* , int);
protected:
	/* ../public/animationsystem/emptysequence.h:88 */
	KeyValues3* StaticEmptyKeyValues(void);
	const class KeyValues3 * m_pSequenceKeyValues; /* 8 8 */
	void CEmptySequence(class CEmptySequence *, const class CEmptySequence  &); /* linkage=_ZN14CEmptySequenceC4ERKS_ */
	void CEmptySequence(class CEmptySequence *); /* linkage=_ZN14CEmptySequenceC4Ev */
	virtual void ~CEmptySequence(class CEmptySequence *); /* linkage=_ZN14CEmptySequenceD4Ev */
	/* <4ae5cf3> ../public/animationsystem/emptysequence.h:19 */
	virtual const char  * GetName(const class CEmptySequence  *); /* linkage=_ZNK14CEmptySequence7GetNameEv */
	virtual const class CModel  * GetModel(const class CEmptySequence  *); /* linkage=_ZNK14CEmptySequence8GetModelEv */
	/* <4ae5d1c> ../public/animationsystem/emptysequence.h:21 */
	virtual bool IsLooping(const class CEmptySequence  *); /* linkage=_ZNK14CEmptySequence9IsLoopingEv */
	virtual bool IsMulti(const class CEmptySequence  *); /* linkage=_ZNK14CEmptySequence7IsMultiEv */
	/* <4ae5d45> ../public/animationsystem/emptysequence.h:23 */
	virtual bool IsDelta(const class CEmptySequence  *); /* linkage=_ZNK14CEmptySequence7IsDeltaEv */
	virtual bool IsHidden(const class CEmptySequence  *); /* linkage=_ZNK14CEmptySequence8IsHiddenEv */
	virtual bool IsAutoplay(const class CEmptySequence  *); /* linkage=_ZNK14CEmptySequence10IsAutoplayEv */
	virtual bool IsSnapped(const class CEmptySequence  *); /* linkage=_ZNK14CEmptySequence9IsSnappedEv */
	virtual bool IsAnimation(const class CEmptySequence  *); /* linkage=_ZNK14CEmptySequence11IsAnimationEv */
	virtual bool IsFrameCacheable(const class CEmptySequence  *); /* linkage=_ZNK14CEmptySequence16IsFrameCacheableEv */
	virtual bool IsRealTime(const class CEmptySequence  *); /* linkage=_ZNK14CEmptySequence10IsRealTimeEv */
	virtual bool IsModelDoc(const class CEmptySequence  *); /* linkage=_ZNK14CEmptySequence10IsModelDocEv */
	/* <d27133> ../public/animationsystem/emptysequence.h:31 */
	virtual const class KeyValues3  * GetSequenceKeyValues(const class CEmptySequence  *); /* linkage=_ZNK14CEmptySequence20GetSequenceKeyValuesEv */
	virtual int NumEvents(const class CEmptySequence  *); /* linkage=_ZNK14CEmptySequence9NumEventsEv */
	virtual const class AnimEvent_t  * GetEvent(const class CEmptySequence  *, int); /* linkage=_ZNK14CEmptySequence8GetEventEi */
	/* <4ae5d6e> ../public/animationsystem/emptysequence.h:34 */
	virtual bool GetBounds(const class CEmptySequence  *, class Vector *, class Vector *); /* linkage=_ZNK14CEmptySequence9GetBoundsEP6VectorS1_ */
	virtual bool GetAllAnimations(const class CEmptySequence  *, AnimRefVector_t &); /* linkage=_ZNK14CEmptySequence16GetAllAnimationsER23CUtlVectorFixedGrowableIiLm16EE */
	virtual bool GetAllSequences(const class CEmptySequence  *, class CUtlVector<HSequence, CUtlMemory<HSequence, int> > &); /* linkage=_ZNK14CEmptySequence15GetAllSequencesER10CUtlVectorI9HSequence10CUtlMemoryIS1_iEE */
	virtual int NumActivities(const class CEmptySequence  *); /* linkage=_ZNK14CEmptySequence13NumActivitiesEv */
	/* <4ae5e07> ../public/animationsystem/emptysequence.h:38 */
	virtual const char  * GetActivityName(const class CEmptySequence  *, int); /* linkage=_ZNK14CEmptySequence15GetActivityNameEi */
	virtual float GetActivityWeight(const class CEmptySequence  *, int); /* linkage=_ZNK14CEmptySequence17GetActivityWeightEi */
	virtual Activity GetActivityType(const class CEmptySequence  *, int); /* linkage=_ZNK14CEmptySequence15GetActivityTypeEi */
	virtual void SetActivityType(const class CEmptySequence  *, Activity); /* linkage=_ZNK14CEmptySequence15SetActivityTypeEi */
	virtual void SetActivityType(const class CEmptySequence  *, int, Activity); /* linkage=_ZNK14CEmptySequence15SetActivityTypeEii */
	virtual int NumPoseParameters(const class CEmptySequence  *); /* linkage=_ZNK14CEmptySequence17NumPoseParametersEv */
	virtual int GetPoseParameter(const class CEmptySequence  *, int); /* linkage=_ZNK14CEmptySequence16GetPoseParameterEi */
	virtual int NumPoseSettings(const class CEmptySequence  *); /* linkage=_ZNK14CEmptySequence15NumPoseSettingsEv */
	virtual const char  * GetPoseSettingName(const class CEmptySequence  *, int); /* linkage=_ZNK14CEmptySequence18GetPoseSettingNameEi */
	virtual float GetPoseSettingValue(const class CEmptySequence  *, int); /* linkage=_ZNK14CEmptySequence19GetPoseSettingValueEi */
	virtual void DoAnimation(const class CEmptySequence  *, class CAnimationBucket &, float, float); /* linkage=_ZNK14CEmptySequence11DoAnimationER16CAnimationBucketff */
	virtual bool IsFlagSet(const class CEmptySequence  *, int); /* linkage=_ZNK14CEmptySequence9IsFlagSetEi */
	virtual void SetFlag(const class CEmptySequence  *, int); /* linkage=_ZNK14CEmptySequence7SetFlagEi */
	virtual void ClearFlag(const class CEmptySequence  *, int); /* linkage=_ZNK14CEmptySequence9ClearFlagEi */
	virtual float GetFadeInTime(const class CEmptySequence  *); /* linkage=_ZNK14CEmptySequence13GetFadeInTimeEv */
	virtual float GetFadeOutTime(const class CEmptySequence  *); /* linkage=_ZNK14CEmptySequence14GetFadeOutTimeEv */
	virtual class HSequence GetNextSequence(const class CEmptySequence  *, class HSequence, int *); /* linkage=_ZNK14CEmptySequence15GetNextSequenceE9HSequencePi */
	virtual int GetNodeFlags(const class CEmptySequence  *); /* linkage=_ZNK14CEmptySequence12GetNodeFlagsEv */
	/* <4ae5e37> ../public/animationsystem/emptysequence.h:56 */
	virtual int EntryNode(const class CEmptySequence  *); /* linkage=_ZNK14CEmptySequence9EntryNodeEv */
	/* <4ae5e60> ../public/animationsystem/emptysequence.h:57 */
	virtual int ExitNode(const class CEmptySequence  *); /* linkage=_ZNK14CEmptySequence8ExitNodeEv */
	virtual void SetEntryNode(class CEmptySequence *, int); /* linkage=_ZN14CEmptySequence12SetEntryNodeEi */
	virtual void SetExitNode(class CEmptySequence *, int); /* linkage=_ZN14CEmptySequence11SetExitNodeEi */
	virtual void SetEventIndex(const class CEmptySequence  *, int, int); /* linkage=_ZNK14CEmptySequence13SetEventIndexEii */
	virtual void AddEventTypeFlags(const class CEmptySequence  *, int, int); /* linkage=_ZNK14CEmptySequence17AddEventTypeFlagsEii */
	virtual void RemoveEventTypeFlags(const class CEmptySequence  *, int, int); /* linkage=_ZNK14CEmptySequence20RemoveEventTypeFlagsEii */
	virtual void BuildBlendlist(const class CEmptySequence  *, class CAnimationBlendList *, const float  *); /* linkage=_ZNK14CEmptySequence14BuildBlendlistEP19CAnimationBlendListPKf */
	virtual bool GetAssetInfo(const class CEmptySequence  *, class CSequenceAssetInfo &); /* linkage=_ZNK14CEmptySequence12GetAssetInfoER18CSequenceAssetInfo */
	virtual int MaxFrame(const class CEmptySequence  *, const float  *); /* linkage=_ZNK14CEmptySequence8MaxFrameEPKf */
	virtual float FPS(const class CEmptySequence  *, const float  *); /* linkage=_ZNK14CEmptySequence3FPSEPKf */
	virtual float CPS(const class CEmptySequence  *, const float  *); /* linkage=_ZNK14CEmptySequence3CPSEPKf */
	virtual float Duration(const class CEmptySequence  *, const float  *); /* linkage=_ZNK14CEmptySequence8DurationEPKf */
	virtual float MovementAndDuration(const class CEmptySequence  *, float, float, const float  *, class Vector &); /* linkage=_ZNK14CEmptySequence19MovementAndDurationEffPKfR6Vector */
	virtual float TotalMovementAndDuration(const class CEmptySequence  *, const float  *, class Vector &); /* linkage=_ZNK14CEmptySequence24TotalMovementAndDurationEPKfR6Vector */
	virtual bool Movement(const class CEmptySequence  *, float, float, const float  *, class Vector &, class QAngle &); /* linkage=_ZNK14CEmptySequence8MovementEffPKfR6VectorR6QAngle */
	virtual class CMotionTransform Movement(const class CEmptySequence  *, float, float); /* linkage=_ZNK14CEmptySequence8MovementEff */
	virtual bool Velocity(const class CEmptySequence  *, float, const float  *, class Vector &); /* linkage=_ZNK14CEmptySequence8VelocityEfPKfR6Vector */
	virtual class Vector RelativeVelocity(const class CEmptySequence  *, float); /* linkage=_ZNK14CEmptySequence16RelativeVelocityEf */
	virtual float FindDistance(const class CEmptySequence  *, const float  *, float); /* linkage=_ZNK14CEmptySequence12FindDistanceEPKff */
	virtual int LookupPoseSetting(const class CEmptySequence  *, const char  *); /* linkage=_ZNK14CEmptySequence17LookupPoseSettingEPKc */
	virtual int GetFootMotionCount(const class CEmptySequence  *); /* linkage=_ZNK14CEmptySequence18GetFootMotionCountEv */
	virtual const class CFootMotion  * GetFootMotion(const class CEmptySequence  *, int); /* linkage=_ZNK14CEmptySequence13GetFootMotionEi */
	class KeyValues3 * StaticEmptyKeyValues(void); /* linkage=_ZN14CEmptySequence20StaticEmptyKeyValuesEv */
};

// <04AA3D67> ../public/animationsystem/emptysequence.h:18
// function calls: 2
void CEmptySequence::~CEmptySequence()
{
	IBaseSequence::~IBaseSequence(); // 128
	ISequence::~ISequence(); // 18
} /* size: 5, inline expansions: 2 (0 bytes) */

// <04AA3C84> ../public/animationsystem/emptysequence.h:18
// function calls: 3
void CEmptySequence::~CEmptySequence()
{
	IBaseSequence::~IBaseSequence(); // 128
	ISequence::~ISequence(); // 18
	CEmptySequence::~CEmptySequence(); // 18
} /* size: 14, inline expansions: 3 (0 bytes) */

// <04AA3C6B> ../public/animationsystem/emptysequence.h:18
inline void CEmptySequence::~CEmptySequence()
{
} /* size: 0 */

// <04AE5CF3> ../public/animationsystem/emptysequence.h:19
void CEmptySequence::GetName()
{
} /* size: 12 */

// <04AE06D4> ../public/animationsystem/emptysequence.h:19
inline void CEmptySequence::GetName()
{
} /* size: 0 */

// <04AE06A6> ../public/animationsystem/emptysequence.h:20
void CEmptySequence::GetModel()
{
} /* size: 7 */

// <04AE5D1C> ../public/animationsystem/emptysequence.h:21
void CEmptySequence::IsLooping()
{
} /* size: 7 */

// <04AE068D> ../public/animationsystem/emptysequence.h:21
inline void CEmptySequence::IsLooping()
{
} /* size: 0 */

// <04AE065F> ../public/animationsystem/emptysequence.h:22
void CEmptySequence::IsMulti()
{
} /* size: 7 */

// <04AE5D45> ../public/animationsystem/emptysequence.h:23
void CEmptySequence::IsDelta()
{
} /* size: 7 */

// <04AE0646> ../public/animationsystem/emptysequence.h:23
inline void CEmptySequence::IsDelta()
{
} /* size: 0 */

// <04AE0618> ../public/animationsystem/emptysequence.h:24
void CEmptySequence::IsHidden()
{
} /* size: 7 */

// <04AE05EA> ../public/animationsystem/emptysequence.h:25
void CEmptySequence::IsAutoplay()
{
} /* size: 7 */

// <04AE05BC> ../public/animationsystem/emptysequence.h:26
void CEmptySequence::IsSnapped()
{
} /* size: 7 */

// <04AE058E> ../public/animationsystem/emptysequence.h:27
void CEmptySequence::IsAnimation()
{
} /* size: 7 */

// <04AE0560> ../public/animationsystem/emptysequence.h:28
void CEmptySequence::IsFrameCacheable()
{
} /* size: 7 */

// <04AE0532> ../public/animationsystem/emptysequence.h:29
void CEmptySequence::IsRealTime()
{
} /* size: 7 */

// <04AE0504> ../public/animationsystem/emptysequence.h:30
void CEmptySequence::IsModelDoc()
{
} /* size: 7 */

// <04AE04D6> ../public/animationsystem/emptysequence.h:31
void CEmptySequence::GetSequenceKeyValues()
{
} /* size: 9 */

// <00CE6893> ../public/animationsystem/emptysequence.h:31
inline void CEmptySequence::GetSequenceKeyValues()
{
} /* size: 0 */

// <04AE04A8> ../public/animationsystem/emptysequence.h:32
void CEmptySequence::NumEvents()
{
} /* size: 7 */

// <04AE046C> ../public/animationsystem/emptysequence.h:33
void CEmptySequence::GetEvent(int index)
{
} /* size: 7 */

// <04AE5D6E> ../public/animationsystem/emptysequence.h:34
// function calls: 2
void CEmptySequence::GetBounds(Vector* pVecMins, Vector* pVecMaxs)
{
	Vector::operator=(
			const Vector& vOther);  // 34
	Vector::operator=(
			const Vector& vOther);  // 34
} /* size: 66, inline expansions: 2 (59 bytes) */

// <04AE043B> ../public/animationsystem/emptysequence.h:34
inline void CEmptySequence::GetBounds(Vector* pVecMins, Vector* pVecMaxs)
{
} /* size: 0 */

// <04AE03FF> ../public/animationsystem/emptysequence.h:35
void CEmptySequence::GetAllAnimations(AnimRefVector_t& animRef)
{
} /* size: 7 */

// <04AE03C3> ../public/animationsystem/emptysequence.h:36
void CEmptySequence::GetAllSequences(CUtlVector<HSequence, CUtlMemory<HSequence, int> >& seqRef)
{
} /* size: 7 */

// <04AE0395> ../public/animationsystem/emptysequence.h:37
void CEmptySequence::NumActivities()
{
} /* size: 7 */

// <04AE5E07> ../public/animationsystem/emptysequence.h:38
void CEmptySequence::GetActivityName(int index)
{
} /* size: 12 */

// <04AE0370> ../public/animationsystem/emptysequence.h:38
inline void CEmptySequence::GetActivityName(int index)
{
} /* size: 0 */

// <04AE0334> ../public/animationsystem/emptysequence.h:39
void CEmptySequence::GetActivityWeight(int index)
{
} /* size: 9 */

// <04AE02F8> ../public/animationsystem/emptysequence.h:40
void CEmptySequence::GetActivityType(int index)
{
} /* size: 10 */

// <04AE02BC> ../public/animationsystem/emptysequence.h:41
void CEmptySequence::SetActivityType(Activity iActivity)
{
} /* size: 5 */

// <04AE0272> ../public/animationsystem/emptysequence.h:42
void CEmptySequence::SetActivityType(int index, Activity iActivity)
{
} /* size: 5 */

// <04AE0244> ../public/animationsystem/emptysequence.h:43
void CEmptySequence::NumPoseParameters()
{
} /* size: 7 */

// <04AE0208> ../public/animationsystem/emptysequence.h:44
void CEmptySequence::GetPoseParameter(int index)
{
} /* size: 7 */

// <04AE01DA> ../public/animationsystem/emptysequence.h:45
void CEmptySequence::NumPoseSettings()
{
} /* size: 7 */

// <04AE019E> ../public/animationsystem/emptysequence.h:46
void CEmptySequence::GetPoseSettingName(int index)
{
} /* size: 7 */

// <04AE0162> ../public/animationsystem/emptysequence.h:47
void CEmptySequence::GetPoseSettingValue(int index)
{
} /* size: 9 */

// <04AE010A> ../public/animationsystem/emptysequence.h:48
void CEmptySequence::DoAnimation(CAnimationBucket& baseResult, float flCycle, float flWeight)
{
} /* size: 5 */

// <04AE00CE> ../public/animationsystem/emptysequence.h:49
void CEmptySequence::IsFlagSet(int nFlagMask)
{
} /* size: 7 */

// <04AE0092> ../public/animationsystem/emptysequence.h:50
void CEmptySequence::SetFlag(int nFlagMask)
{
} /* size: 5 */

// <04AE0056> ../public/animationsystem/emptysequence.h:51
void CEmptySequence::ClearFlag(int nFlagMask)
{
} /* size: 5 */

// <04AE0028> ../public/animationsystem/emptysequence.h:52
void CEmptySequence::GetFadeInTime()
{
} /* size: 9 */

// <04ADFFFA> ../public/animationsystem/emptysequence.h:53
void CEmptySequence::GetFadeOutTime()
{
} /* size: 9 */

// <04ADFFB0> ../public/animationsystem/emptysequence.h:54
void CEmptySequence::GetNextSequence(HSequence hDestinationSequence, int* pDir)
{
} /* size: 7 */

// <04ADFF82> ../public/animationsystem/emptysequence.h:55
void CEmptySequence::GetNodeFlags()
{
} /* size: 7 */

// <04AE5E37> ../public/animationsystem/emptysequence.h:56
void CEmptySequence::EntryNode()
{
} /* size: 7 */

// <04ADFF69> ../public/animationsystem/emptysequence.h:56
inline void CEmptySequence::EntryNode()
{
} /* size: 0 */

// <04AE5E60> ../public/animationsystem/emptysequence.h:57
void CEmptySequence::ExitNode()
{
} /* size: 7 */

// <04ADFF50> ../public/animationsystem/emptysequence.h:57
inline void CEmptySequence::ExitNode()
{
} /* size: 0 */

// <04ADFF1A> ../public/animationsystem/emptysequence.h:58
void CEmptySequence::SetEntryNode(int)
{
} /* size: 5 */

// <04ADFEE4> ../public/animationsystem/emptysequence.h:59
void CEmptySequence::SetExitNode(int)
{
} /* size: 5 */

// <04ADFE9A> ../public/animationsystem/emptysequence.h:60
void CEmptySequence::SetEventIndex(int nEvent, int nIndex)
{
} /* size: 5 */

// <04ADFE50> ../public/animationsystem/emptysequence.h:61
void CEmptySequence::AddEventTypeFlags(int nEvent, int nTypeFlags)
{
} /* size: 5 */

// <04ADFE06> ../public/animationsystem/emptysequence.h:62
void CEmptySequence::RemoveEventTypeFlags(int nEvent, int nTypeFlags)
{
} /* size: 5 */

// <04ADFDBC> ../public/animationsystem/emptysequence.h:63
void CEmptySequence::BuildBlendlist(CAnimationBlendList* pBlendList, const float* flPoseParameterArray)
{
} /* size: 5 */

// <04ADFD80> ../public/animationsystem/emptysequence.h:64
void CEmptySequence::GetAssetInfo(CSequenceAssetInfo& info)
{
} /* size: 7 */

// <04ADFD44> ../public/animationsystem/emptysequence.h:67
void CEmptySequence::MaxFrame(const float* poseParameter)
{
} /* size: 7 */

// <04ADFD08> ../public/animationsystem/emptysequence.h:68
void CEmptySequence::FPS(const float* poseParameter)
{
} /* size: 13 */

// <04ADFCCC> ../public/animationsystem/emptysequence.h:69
void CEmptySequence::CPS(const float* poseParameter)
{
} /* size: 13 */

// <04ADFC90> ../public/animationsystem/emptysequence.h:70
void CEmptySequence::Duration(const float* poseParameter)
{
} /* size: 9 */

// <04ADFBD9> ../public/animationsystem/emptysequence.h:72
// function call: 1
void CEmptySequence::MovementAndDuration(float flCycleFrom, float flCycleTo, const float* poseParameter, Vector& deltaPos)
{
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 72
} /* size: 23, inline expansions: 1 (14 bytes) */

// <04ADFB44> ../public/animationsystem/emptysequence.h:73
// function call: 1
void CEmptySequence::TotalMovementAndDuration(const float* poseParameter, Vector& deltaPos)
{
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 73
} /* size: 23, inline expansions: 1 (14 bytes) */

// <04ADFA2A> ../public/animationsystem/emptysequence.h:75
// function calls: 2
void CEmptySequence::Movement(float flCycleFrom, float flCycleTo, const float* poseParameter, Vector& deltaMovement, QAngle& deltaAngle)
{
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 75
	QAngle::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 75
} /* size: 35, inline expansions: 2 (28 bytes) */

// <04ADF8BE> ../public/animationsystem/emptysequence.h:76
// function calls: 3
void CEmptySequence::Movement(float flCycleFrom, float flCycleTo)
{
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 76
} /* size: 86, inline expansions: 3 (111 bytes) */

// <04ADF81B> ../public/animationsystem/emptysequence.h:77
// function call: 1
void CEmptySequence::Velocity(float flCycle, const float* poseParameter, Vector& vecVelocity)
{
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 77
} /* size: 21, inline expansions: 1 (14 bytes) */

// <04ADF7D8> ../public/animationsystem/emptysequence.h:78
void CEmptySequence::RelativeVelocity(float flCycle)
{
} /* size: 37 */

// <04ADF788> ../public/animationsystem/emptysequence.h:79
void CEmptySequence::FindDistance(const float* poseParameter, float flDist)
{
} /* size: 9 */

// <04ADF74C> ../public/animationsystem/emptysequence.h:81
void CEmptySequence::LookupPoseSetting(const char* pPoseName)
{
} /* size: 10 */

// <04ADF71E> ../public/animationsystem/emptysequence.h:84
void CEmptySequence::GetFootMotionCount()
{
} /* size: 7 */

// <04ADF6E2> ../public/animationsystem/emptysequence.h:85
void CEmptySequence::GetFootMotion(int nFootIndex)
{
} /* size: 7 */

// <04ADF6BB> ../public/animationsystem/emptysequence.h:88
// variable: 1
inline void StaticEmptyKeyValues(void)
{
	KeyValues3 s_KV3; // 88
} /* size: 0, variables: 1 */

