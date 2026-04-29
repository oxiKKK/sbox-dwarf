
//
// public/animationsystem/isequence.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 15
//	classes: 3
//	structs: 3
//

// <04A89475> ../public/animationsystem/isequence.h:34
// member function: 1
// member variables: 5
// class size: 40
class CSequenceAssetInfo {
	/* ../public/animationsystem/isequence.h:37 */
	void CSequenceAssetInfo(CSequenceAssetInfo* );
	CUtlString m_sAssetName; /* 0 8 */
	SequenceAssetType_t m_nAssetType; /* 8 4 */
	CUtlString m_sSearchName; /* 16 8 */
	CUtlString m_sSourceFile; /* 24 8 */
	int m_nLineNumber; /* 32 4 */
};

// <00C41192> ../public/animationsystem/isequence.h:56
void AnimEvent_t::~AnimEvent_t()
{
} /* size: 0 */

// <00C41176> ../public/animationsystem/isequence.h:56
inline void AnimEvent_t::~AnimEvent_t()
{
} /* size: 0 */

// <000F915D> ../public/animationsystem/isequence.h:56
// member functions: 2
// member variables: 6
// struct size: 40
struct AnimEvent_t {
	float m_flFrame; /* 0 4 */
	float cycle; /* 4 4 */
	int event; /* 8 4 */
	int type; /* 12 4 */
	KeyValues3 m_EventData; /* 16 16 */
	CUtlString m_eventName; /* 32 8 */
	/* ../public/animationsystem/isequence.h:66 */
	const char* GetEventName(const AnimEvent_t* );
	/* ../public/animationsystem/isequence.h:68 */
	void AnimEvent_t(AnimEvent_t* );
};

// <00B217B5> ../public/animationsystem/isequence.h:56
// member functions: 3
// member variables: 6
// struct size: 40
struct AnimEvent_t {
	float m_flFrame; /* 0 4 */
	float cycle; /* 4 4 */
	int event; /* 8 4 */
	int type; /* 12 4 */
	KeyValues3 m_EventData; /* 16 16 */
	CUtlString m_eventName; /* 32 8 */
	/* ../public/animationsystem/isequence.h:66 */
	const char* GetEventName(const AnimEvent_t* );
	/* ../public/animationsystem/isequence.h:68 */
	void AnimEvent_t(AnimEvent_t* );
	void ~AnimEvent_t(AnimEvent_t* );
};

// <04D7C380> ../public/animationsystem/isequence.h:66
inline void AnimEvent_t::GetEventName()
{
} /* size: 0 */

// <00D19154> ../public/animationsystem/isequence.h:68
void AnimEvent_t::AnimEvent_t()
{
} /* size: 0 */

// <00D1913B> ../public/animationsystem/isequence.h:68
inline void AnimEvent_t::AnimEvent_t()
{
} /* size: 0 */

// <04A69FD0> ../public/animationsystem/isequence.h:74
// member variables: 6
// struct size: 24
struct PoseParamDesc_t {
	float m_start; /* 0 4 */
	float m_end; /* 4 4 */
	float m_loop; /* 8 4 */
	bool m_bLooping; /* 12 1 */
	int m_nIndex; /* 16 4 */
	unsigned int m_handle; /* 20 4 */
};

// <04AC0357> ../public/animationsystem/isequence.h:91
void IBaseSequence::IBaseSequence()
{
} /* size: 0 */

// <04AC033B> ../public/animationsystem/isequence.h:91
inline void IBaseSequence::IBaseSequence()
{
} /* size: 0 */

// <04AA2CA6> ../public/animationsystem/isequence.h:91
// member functions: 18
// member variable: 1
// vtable entries: 4
// class size: 8
class IBaseSequence {
	void IBaseSequence(IBaseSequence* , const IBaseSequence& );
	void IBaseSequence(IBaseSequence* );
	int ()(void) * * _vptr.IBaseSequence; /* 0 8 */
	/* ../public/animationsystem/isequence.h:94 */
	virtual void ~IBaseSequence(IBaseSequence* );
	/* ../public/animationsystem/isequence.h:96 */
	virtual bool IsFrameCacheable(const IBaseSequence* );
	/* ../public/animationsystem/isequence.h:97 */
	virtual int MaxFrame(const IBaseSequence* , const float* );
	/* ../public/animationsystem/isequence.h:99 */
	virtual void DoAnimation(const IBaseSequence* , CAnimationBucket& , float, float);
	/* ../public/animationsystem/isequence.h:101 */
	virtual void BuildBlendlist(const IBaseSequence* , CAnimationBlendList* , const float* );
	/* ../public/animationsystem/isequence.h:104 */
	int NumFrames(const IBaseSequence* , const float* );
	/* ../public/animationsystem/isequence.h:109 */
	float CalculateCycleForFrame(const IBaseSequence* , float, const float* );
	void IBaseSequence(class IBaseSequence *, const class IBaseSequence  &); /* linkage=_ZN13IBaseSequenceC4ERKS_ */
	void IBaseSequence(class IBaseSequence *); /* linkage=_ZN13IBaseSequenceC4Ev */
	virtual void ~IBaseSequence(class IBaseSequence *); /* linkage=_ZN13IBaseSequenceD4Ev */
	virtual bool IsFrameCacheable(const class IBaseSequence  *); /* linkage=_ZNK13IBaseSequence16IsFrameCacheableEv */
	virtual int MaxFrame(const class IBaseSequence  *, const float  *); /* linkage=_ZNK13IBaseSequence8MaxFrameEPKf */
	virtual void DoAnimation(const class IBaseSequence  *, class CAnimationBucket &, float, float); /* linkage=_ZNK13IBaseSequence11DoAnimationER16CAnimationBucketff */
	virtual void BuildBlendlist(const class IBaseSequence  *, class CAnimationBlendList *, const float  *); /* linkage=_ZNK13IBaseSequence14BuildBlendlistEP19CAnimationBlendListPKf */
	int NumFrames(const class IBaseSequence  *, const float  *); /* linkage=_ZNK13IBaseSequence9NumFramesEPKf */
	float CalculateCycleForFrame(const class IBaseSequence  *, float, const float  *); /* linkage=_ZNK13IBaseSequence22CalculateCycleForFrameEfPKf */
};

// <04AC0324> ../public/animationsystem/isequence.h:94
void IBaseSequence::~IBaseSequence()
{
} /* size: 0 */

// <04AC02F4> ../public/animationsystem/isequence.h:94
inline void IBaseSequence::~IBaseSequence()
{
} /* size: 0 */

// <0325A9CD> ../public/animationsystem/isequence.h:104
inline void IBaseSequence::NumFrames(const float* poseParameters)
{
} /* size: 0 */

// <03B99916> ../public/animationsystem/isequence.h:109
// variable: 1
inline void IBaseSequence::CalculateCycleForFrame(float flFrame, const float* poseParameters)
{
	int nMaxFrame; // 111
} /* size: 0, variables: 1 */

// <04AC02DD> ../public/animationsystem/isequence.h:125
void ISequence::ISequence()
{
} /* size: 0 */

// <04AC02C1> ../public/animationsystem/isequence.h:125
inline void ISequence::ISequence()
{
} /* size: 0 */

// <04A9554B> ../public/animationsystem/isequence.h:125
// member functions: 118
// member variable: 1
// vtable entries: 56
// class size: 8
class ISequence : public IBaseSequence {
public:
	/* class IBaseSequence <ancestor>; */ /* 0 8 */
	void ISequence(ISequence* , const ISequence& );
	void ISequence(ISequence* );
	/* ../public/animationsystem/isequence.h:128 */
	virtual void ~ISequence(ISequence* );
	/* ../public/animationsystem/isequence.h:130 */
	virtual const char* GetName(const ISequence* );
	/* ../public/animationsystem/isequence.h:131 */
	virtual const CModel* GetModel(const ISequence* );
	/* ../public/animationsystem/isequence.h:133 */
	virtual bool IsLooping(const ISequence* );
	/* ../public/animationsystem/isequence.h:134 */
	virtual bool IsMulti(const ISequence* );
	/* ../public/animationsystem/isequence.h:135 */
	virtual bool IsDelta(const ISequence* );
	/* ../public/animationsystem/isequence.h:136 */
	virtual bool IsHidden(const ISequence* );
	/* ../public/animationsystem/isequence.h:137 */
	virtual bool IsAutoplay(const ISequence* );
	/* ../public/animationsystem/isequence.h:138 */
	virtual bool IsSnapped(const ISequence* );
	/* ../public/animationsystem/isequence.h:139 */
	virtual bool IsAnimation(const ISequence* );
	/* ../public/animationsystem/isequence.h:140 */
	virtual bool IsRealTime(const ISequence* );
	/* ../public/animationsystem/isequence.h:141 */
	virtual bool IsModelDoc(const ISequence* );
	/* ../public/animationsystem/isequence.h:143 */
	virtual const KeyValues3* GetSequenceKeyValues(const ISequence* );
	/* ../public/animationsystem/isequence.h:145 */
	virtual int NumEvents(const ISequence* );
	/* ../public/animationsystem/isequence.h:146 */
	virtual const AnimEvent_t* GetEvent(const ISequence* , int);
	/* ../public/animationsystem/isequence.h:148 */
	virtual bool GetBounds(const ISequence* , Vector* , Vector* );
	/* ../public/animationsystem/isequence.h:150 */
	virtual bool GetAllAnimations(const ISequence* , AnimRefVector_t& );
	/* ../public/animationsystem/isequence.h:152 */
	virtual bool GetAllSequences(const ISequence* , CUtlVector<HSequence, CUtlMemory<HSequence, int> >& );
	/* ../public/animationsystem/isequence.h:154 */
	virtual int NumActivities(const ISequence* );
	/* ../public/animationsystem/isequence.h:155 */
	virtual const char* GetActivityName(const ISequence* , int);
	/* ../public/animationsystem/isequence.h:156 */
	virtual float GetActivityWeight(const ISequence* , int);
	/* ../public/animationsystem/isequence.h:157 */
	virtual Activity GetActivityType(const ISequence* , int);
	/* ../public/animationsystem/isequence.h:158 */
	virtual void SetActivityType(const ISequence* , Activity);
	/* ../public/animationsystem/isequence.h:159 */
	virtual void SetActivityType(const ISequence* , int, Activity);
	/* ../public/animationsystem/isequence.h:161 */
	virtual int NumPoseParameters(const ISequence* );
	/* ../public/animationsystem/isequence.h:162 */
	virtual int GetPoseParameter(const ISequence* , int);
	/* ../public/animationsystem/isequence.h:164 */
	virtual int NumPoseSettings(const ISequence* );
	/* ../public/animationsystem/isequence.h:165 */
	virtual const char* GetPoseSettingName(const ISequence* , int);
	/* ../public/animationsystem/isequence.h:166 */
	virtual float GetPoseSettingValue(const ISequence* , int);
	/* ../public/animationsystem/isequence.h:168 */
	virtual bool IsFlagSet(const ISequence* , int);
	/* ../public/animationsystem/isequence.h:169 */
	virtual void SetFlag(const ISequence* , int);
	/* ../public/animationsystem/isequence.h:170 */
	virtual void ClearFlag(const ISequence* , int);
	/* ../public/animationsystem/isequence.h:172 */
	virtual float GetFadeInTime(const ISequence* );
	/* ../public/animationsystem/isequence.h:173 */
	virtual float GetFadeOutTime(const ISequence* );
	/* ../public/animationsystem/isequence.h:175 */
	virtual HSequence GetNextSequence(const ISequence* , HSequence, int* );
	/* ../public/animationsystem/isequence.h:177 */
	virtual int GetNodeFlags(const ISequence* );
	/* ../public/animationsystem/isequence.h:179 */
	virtual int EntryNode(const ISequence* );
	/* ../public/animationsystem/isequence.h:180 */
	virtual int ExitNode(const ISequence* );
	/* ../public/animationsystem/isequence.h:181 */
	virtual void SetEntryNode(ISequence* , int);
	/* ../public/animationsystem/isequence.h:182 */
	virtual void SetExitNode(ISequence* , int);
	/* ../public/animationsystem/isequence.h:184 */
	virtual void SetEventIndex(const ISequence* , int, int);
	/* ../public/animationsystem/isequence.h:185 */
	virtual void AddEventTypeFlags(const ISequence* , int, int);
	/* ../public/animationsystem/isequence.h:186 */
	virtual void RemoveEventTypeFlags(const ISequence* , int, int);
	/* ../public/animationsystem/isequence.h:189 */
	virtual float FPS(const ISequence* , const float* );
	/* ../public/animationsystem/isequence.h:190 */
	virtual float CPS(const ISequence* , const float* );
	/* ../public/animationsystem/isequence.h:191 */
	virtual float Duration(const ISequence* , const float* );
	/* ../public/animationsystem/isequence.h:193 */
	virtual float MovementAndDuration(const ISequence* , float, float, const float* , Vector& );
	/* ../public/animationsystem/isequence.h:194 */
	virtual float TotalMovementAndDuration(const ISequence* , const float* , Vector& );
	/* ../public/animationsystem/isequence.h:196 */
	virtual bool Movement(const ISequence* , float, float, const float* , Vector& , QAngle& );
	/* ../public/animationsystem/isequence.h:197 */
	virtual CMotionTransform Movement(const ISequence* , float, float);
	/* ../public/animationsystem/isequence.h:198 */
	virtual bool Velocity(const ISequence* , float, const float* , Vector& );
	/* ../public/animationsystem/isequence.h:202 */
	virtual Vector RelativeVelocity(const ISequence* , float);
	/* ../public/animationsystem/isequence.h:204 */
	virtual float FindDistance(const ISequence* , const float* , float);
	/* ../public/animationsystem/isequence.h:206 */
	virtual int LookupPoseSetting(const ISequence* , const char* );
	/* ../public/animationsystem/isequence.h:214 */
	virtual int GetFootMotionCount(const ISequence* );
	/* ../public/animationsystem/isequence.h:217 */
	virtual const CFootMotion* GetFootMotion(const ISequence* , int);
	/* ../public/animationsystem/isequence.h:219 */
	virtual bool GetAssetInfo(const ISequence* , CSequenceAssetInfo& );
	void ISequence(class ISequence *, const class ISequence  &); /* linkage=_ZN9ISequenceC4ERKS_ */
	void ISequence(class ISequence *); /* linkage=_ZN9ISequenceC4Ev */
	virtual void ~ISequence(class ISequence *); /* linkage=_ZN9ISequenceD4Ev */
	virtual const char  * GetName(const class ISequence  *); /* linkage=_ZNK9ISequence7GetNameEv */
	virtual const class CModel  * GetModel(const class ISequence  *); /* linkage=_ZNK9ISequence8GetModelEv */
	virtual bool IsLooping(const class ISequence  *); /* linkage=_ZNK9ISequence9IsLoopingEv */
	virtual bool IsMulti(const class ISequence  *); /* linkage=_ZNK9ISequence7IsMultiEv */
	virtual bool IsDelta(const class ISequence  *); /* linkage=_ZNK9ISequence7IsDeltaEv */
	virtual bool IsHidden(const class ISequence  *); /* linkage=_ZNK9ISequence8IsHiddenEv */
	virtual bool IsAutoplay(const class ISequence  *); /* linkage=_ZNK9ISequence10IsAutoplayEv */
	virtual bool IsSnapped(const class ISequence  *); /* linkage=_ZNK9ISequence9IsSnappedEv */
	virtual bool IsAnimation(const class ISequence  *); /* linkage=_ZNK9ISequence11IsAnimationEv */
	virtual bool IsRealTime(const class ISequence  *); /* linkage=_ZNK9ISequence10IsRealTimeEv */
	virtual bool IsModelDoc(const class ISequence  *); /* linkage=_ZNK9ISequence10IsModelDocEv */
	virtual const class KeyValues3  * GetSequenceKeyValues(const class ISequence  *); /* linkage=_ZNK9ISequence20GetSequenceKeyValuesEv */
	virtual int NumEvents(const class ISequence  *); /* linkage=_ZNK9ISequence9NumEventsEv */
	virtual const class AnimEvent_t  * GetEvent(const class ISequence  *, int); /* linkage=_ZNK9ISequence8GetEventEi */
	virtual bool GetBounds(const class ISequence  *, class Vector *, class Vector *); /* linkage=_ZNK9ISequence9GetBoundsEP6VectorS1_ */
	virtual bool GetAllAnimations(const class ISequence  *, AnimRefVector_t &); /* linkage=_ZNK9ISequence16GetAllAnimationsER23CUtlVectorFixedGrowableIiLm16EE */
	virtual bool GetAllSequences(const class ISequence  *, class CUtlVector<HSequence, CUtlMemory<HSequence, int> > &); /* linkage=_ZNK9ISequence15GetAllSequencesER10CUtlVectorI9HSequence10CUtlMemoryIS1_iEE */
	virtual int NumActivities(const class ISequence  *); /* linkage=_ZNK9ISequence13NumActivitiesEv */
	virtual const char  * GetActivityName(const class ISequence  *, int); /* linkage=_ZNK9ISequence15GetActivityNameEi */
	virtual float GetActivityWeight(const class ISequence  *, int); /* linkage=_ZNK9ISequence17GetActivityWeightEi */
	virtual Activity GetActivityType(const class ISequence  *, int); /* linkage=_ZNK9ISequence15GetActivityTypeEi */
	virtual void SetActivityType(const class ISequence  *, Activity); /* linkage=_ZNK9ISequence15SetActivityTypeEi */
	virtual void SetActivityType(const class ISequence  *, int, Activity); /* linkage=_ZNK9ISequence15SetActivityTypeEii */
	virtual int NumPoseParameters(const class ISequence  *); /* linkage=_ZNK9ISequence17NumPoseParametersEv */
	virtual int GetPoseParameter(const class ISequence  *, int); /* linkage=_ZNK9ISequence16GetPoseParameterEi */
	virtual int NumPoseSettings(const class ISequence  *); /* linkage=_ZNK9ISequence15NumPoseSettingsEv */
	virtual const char  * GetPoseSettingName(const class ISequence  *, int); /* linkage=_ZNK9ISequence18GetPoseSettingNameEi */
	virtual float GetPoseSettingValue(const class ISequence  *, int); /* linkage=_ZNK9ISequence19GetPoseSettingValueEi */
	virtual bool IsFlagSet(const class ISequence  *, int); /* linkage=_ZNK9ISequence9IsFlagSetEi */
	virtual void SetFlag(const class ISequence  *, int); /* linkage=_ZNK9ISequence7SetFlagEi */
	virtual void ClearFlag(const class ISequence  *, int); /* linkage=_ZNK9ISequence9ClearFlagEi */
	virtual float GetFadeInTime(const class ISequence  *); /* linkage=_ZNK9ISequence13GetFadeInTimeEv */
	virtual float GetFadeOutTime(const class ISequence  *); /* linkage=_ZNK9ISequence14GetFadeOutTimeEv */
	virtual class HSequence GetNextSequence(const class ISequence  *, class HSequence, int *); /* linkage=_ZNK9ISequence15GetNextSequenceE9HSequencePi */
	virtual int GetNodeFlags(const class ISequence  *); /* linkage=_ZNK9ISequence12GetNodeFlagsEv */
	virtual int EntryNode(const class ISequence  *); /* linkage=_ZNK9ISequence9EntryNodeEv */
	virtual int ExitNode(const class ISequence  *); /* linkage=_ZNK9ISequence8ExitNodeEv */
	virtual void SetEntryNode(class ISequence *, int); /* linkage=_ZN9ISequence12SetEntryNodeEi */
	virtual void SetExitNode(class ISequence *, int); /* linkage=_ZN9ISequence11SetExitNodeEi */
	virtual void SetEventIndex(const class ISequence  *, int, int); /* linkage=_ZNK9ISequence13SetEventIndexEii */
	virtual void AddEventTypeFlags(const class ISequence  *, int, int); /* linkage=_ZNK9ISequence17AddEventTypeFlagsEii */
	virtual void RemoveEventTypeFlags(const class ISequence  *, int, int); /* linkage=_ZNK9ISequence20RemoveEventTypeFlagsEii */
	virtual float FPS(const class ISequence  *, const float  *); /* linkage=_ZNK9ISequence3FPSEPKf */
	virtual float CPS(const class ISequence  *, const float  *); /* linkage=_ZNK9ISequence3CPSEPKf */
	virtual float Duration(const class ISequence  *, const float  *); /* linkage=_ZNK9ISequence8DurationEPKf */
	virtual float MovementAndDuration(const class ISequence  *, float, float, const float  *, class Vector &); /* linkage=_ZNK9ISequence19MovementAndDurationEffPKfR6Vector */
	virtual float TotalMovementAndDuration(const class ISequence  *, const float  *, class Vector &); /* linkage=_ZNK9ISequence24TotalMovementAndDurationEPKfR6Vector */
	virtual bool Movement(const class ISequence  *, float, float, const float  *, class Vector &, class QAngle &); /* linkage=_ZNK9ISequence8MovementEffPKfR6VectorR6QAngle */
	virtual class CMotionTransform Movement(const class ISequence  *, float, float); /* linkage=_ZNK9ISequence8MovementEff */
	virtual bool Velocity(const class ISequence  *, float, const float  *, class Vector &); /* linkage=_ZNK9ISequence8VelocityEfPKfR6Vector */
	virtual class Vector RelativeVelocity(const class ISequence  *, float); /* linkage=_ZNK9ISequence16RelativeVelocityEf */
	virtual float FindDistance(const class ISequence  *, const float  *, float); /* linkage=_ZNK9ISequence12FindDistanceEPKff */
	virtual int LookupPoseSetting(const class ISequence  *, const char  *); /* linkage=_ZNK9ISequence17LookupPoseSettingEPKc */
	virtual int GetFootMotionCount(const class ISequence  *); /* linkage=_ZNK9ISequence18GetFootMotionCountEv */
	virtual const class CFootMotion  * GetFootMotion(const class ISequence  *, int); /* linkage=_ZNK9ISequence13GetFootMotionEi */
	virtual bool GetAssetInfo(const class ISequence  *, class CSequenceAssetInfo &); /* linkage=_ZNK9ISequence12GetAssetInfoER18CSequenceAssetInfo */
};

// <04AC02AA> ../public/animationsystem/isequence.h:128
void ISequence::~ISequence()
{
} /* size: 0 */

// <04AC027A> ../public/animationsystem/isequence.h:128
inline void ISequence::~ISequence()
{
} /* size: 0 */

