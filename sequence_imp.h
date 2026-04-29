
//
// sequence_imp.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 39
//	classes: 9
//

// <00C0807B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:23
// member functions: 16
// member variables: 6
// vtable entries: 5
// class size: 40
class CBindPoseSequence : public CEmptySequence {
public:
	/* class CEmptySequence <ancestor>; */ /* 0 16 */
	void CBindPoseSequence(CBindPoseSequence* , const CBindPoseSequence& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:26 */
	void CBindPoseSequence(CBindPoseSequence* , const CAnimContainer* , HSequence, int, int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:25 */
	virtual bool GetBounds(const CBindPoseSequence* , Vector* , Vector* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:37 */
	virtual void ~CBindPoseSequence(CBindPoseSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:38 */
	virtual const char* GetName(const CBindPoseSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:39 */
	virtual const CModel* GetModel(const CBindPoseSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:40 */
	virtual bool IsAnimation(const CBindPoseSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:41 */
	virtual bool IsFrameCacheable(const CBindPoseSequence* );
private:
	const class CModel * m_pModel; /* 16 8 */
	HSequence m_hSequence; /* 24 4 */
	int m_nGroup; /* 28 4 */
	int m_nIndex; /* 32 4 */
	uint32 m_nFlags; /* 36 4 */
	void CBindPoseSequence(class CBindPoseSequence *, const class CBindPoseSequence  &); /* linkage=_ZN17CBindPoseSequenceC4ERKS_ */
	void CBindPoseSequence(class CBindPoseSequence *, const class CAnimContainer  *, class HSequence, int, int); /* linkage=_ZN17CBindPoseSequenceC4EPK14CAnimContainer9HSequenceii */
	/* <d2a54b> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:25 */
	virtual bool GetBounds(const class CBindPoseSequence  *, class Vector *, class Vector *); /* linkage=_ZNK17CBindPoseSequence9GetBoundsEP6VectorS1_ */
	virtual void ~CBindPoseSequence(class CBindPoseSequence *); /* linkage=_ZN17CBindPoseSequenceD4Ev */
	/* <d2715d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:38 */
	virtual const char  * GetName(const class CBindPoseSequence  *); /* linkage=_ZNK17CBindPoseSequence7GetNameEv */
	/* <d27187> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:39 */
	virtual const class CModel  * GetModel(const class CBindPoseSequence  *); /* linkage=_ZNK17CBindPoseSequence8GetModelEv */
	virtual bool IsAnimation(const class CBindPoseSequence  *); /* linkage=_ZNK17CBindPoseSequence11IsAnimationEv */
	virtual bool IsFrameCacheable(const class CBindPoseSequence  *); /* linkage=_ZNK17CBindPoseSequence16IsFrameCacheableEv */
};

// <00CE571D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:26
void CBindPoseSequence::CBindPoseSequence(const CAnimContainer* pAnimContainer, HSequence hSequence, int nGroup, int nIndex)
{
} /* size: 0 */

// <00CE56D4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:26
inline void CBindPoseSequence::CBindPoseSequence(const CAnimContainer* pAnimContainer, HSequence hSequence, int nGroup, int nIndex)
{
} /* size: 0 */

// <00CE5616> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:37
// function calls: 3
void CBindPoseSequence::~CBindPoseSequence()
{
	IBaseSequence::~IBaseSequence(); // 128
	ISequence::~ISequence(); // 18
	CEmptySequence::~CEmptySequence(); // 37
} /* size: 5, inline expansions: 3 (0 bytes) */

// <00CE5502> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:37
// function calls: 4
void CBindPoseSequence::~CBindPoseSequence()
{
	IBaseSequence::~IBaseSequence(); // 128
	ISequence::~ISequence(); // 18
	CEmptySequence::~CEmptySequence(); // 37
	CBindPoseSequence::~CBindPoseSequence(); // 37
} /* size: 14, inline expansions: 4 (0 bytes) */

// <00CE54E9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:37
inline void CBindPoseSequence::~CBindPoseSequence()
{
} /* size: 0 */

// <00D2715D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:38
void CBindPoseSequence::GetName()
{
} /* size: 12 */

// <00CE54D0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:38
inline void CBindPoseSequence::GetName()
{
} /* size: 0 */

// <00D27187> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:39
void CBindPoseSequence::GetModel()
{
} /* size: 9 */

// <00CE54B7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:39
inline void CBindPoseSequence::GetModel()
{
} /* size: 0 */

// <00CE5489> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:40
void CBindPoseSequence::IsAnimation()
{
} /* size: 7 */

// <00CE545B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:41
void CBindPoseSequence::IsFrameCacheable()
{
} /* size: 10 */

// <00C075A3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:54
// member functions: 106
// member variables: 17
// vtable entries: 40
// class size: 192
class CSeqResourceS1Sequence : public CHelperSequence {
public:
	/* class CHelperSequence <ancestor>; */ /* 0 56 */
	void CSeqResourceS1Sequence(CSeqResourceS1Sequence* , const CSeqResourceS1Sequence& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:44 */
	void CSeqResourceS1Sequence(CSeqResourceS1Sequence* , const CAnimContainer* , HSequence, int, int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:59 */
	virtual void ~CSeqResourceS1Sequence(CSeqResourceS1Sequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:245 */
	virtual const char* GetName(const CSeqResourceS1Sequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:250 */
	virtual const CModel* GetModel(const CSeqResourceS1Sequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:255 */
	virtual bool IsLooping(const CSeqResourceS1Sequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:260 */
	virtual bool IsMulti(const CSeqResourceS1Sequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:265 */
	virtual bool IsDelta(const CSeqResourceS1Sequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:270 */
	virtual bool IsHidden(const CSeqResourceS1Sequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:275 */
	virtual bool IsAutoplay(const CSeqResourceS1Sequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:280 */
	virtual bool IsSnapped(const CSeqResourceS1Sequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:285 */
	virtual bool IsRealTime(const CSeqResourceS1Sequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:290 */
	virtual bool IsFrameCacheable(const CSeqResourceS1Sequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:300 */
	virtual bool GetAllAnimations(const CSeqResourceS1Sequence* , AnimRefVector_t& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:322 */
	virtual bool GetAllSequences(const CSeqResourceS1Sequence* , CUtlVector<HSequence, CUtlMemory<HSequence, int> >& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:350 */
	virtual int NumActivities(const CSeqResourceS1Sequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:356 */
	virtual const char* GetActivityName(const CSeqResourceS1Sequence* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:367 */
	virtual float GetActivityWeight(const CSeqResourceS1Sequence* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:378 */
	virtual Activity GetActivityType(const CSeqResourceS1Sequence* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:389 */
	virtual void SetActivityType(const CSeqResourceS1Sequence* , Activity);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:394 */
	virtual void SetActivityType(const CSeqResourceS1Sequence* , int, Activity);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:402 */
	virtual int NumPoseParameters(const CSeqResourceS1Sequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:444 */
	virtual int GetPoseParameter(const CSeqResourceS1Sequence* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:918 */
	virtual void DoAnimation(const CSeqResourceS1Sequence* , CAnimationBucket& , float, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:563 */
	virtual float GetFadeInTime(const CSeqResourceS1Sequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:568 */
	virtual float GetFadeOutTime(const CSeqResourceS1Sequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:573 */
	virtual HSequence GetNextSequence(const CSeqResourceS1Sequence* , HSequence, int* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:582 */
	virtual int GetNodeFlags(const CSeqResourceS1Sequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:548 */
	virtual bool IsFlagSet(const CSeqResourceS1Sequence* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:553 */
	virtual void SetFlag(const CSeqResourceS1Sequence* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:558 */
	virtual void ClearFlag(const CSeqResourceS1Sequence* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:587 */
	virtual int EntryNode(const CSeqResourceS1Sequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:592 */
	virtual int ExitNode(const CSeqResourceS1Sequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:597 */
	virtual void BuildBlendlist(const CSeqResourceS1Sequence* , CAnimationBlendList* , const float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:513 */
	virtual bool GetAssetInfo(const CSeqResourceS1Sequence* , CSequenceAssetInfo& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:642 */
	virtual int MaxFrame(const CSeqResourceS1Sequence* , const float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:665 */
	virtual float FPS(const CSeqResourceS1Sequence* , const float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:689 */
	virtual float CPS(const CSeqResourceS1Sequence* , const float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:744 */
	virtual float MovementAndDuration(const CSeqResourceS1Sequence* , float, float, const float* , Vector& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:787 */
	virtual float TotalMovementAndDuration(const CSeqResourceS1Sequence* , const float* , Vector& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:798 */
	virtual bool Movement(const CSeqResourceS1Sequence* , float, float, const float* , Vector& , QAngle& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:500 */
	const CSeqMultiFetch* pLocalFetch(const CSeqResourceS1Sequence* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1053 */
	bool GetLayerWeight(const CSeqResourceS1Sequence* , EBoneSetup* , const CSeqAutoLayer* , float& , float& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1058 */
	bool GetLayerWeight(const CSeqResourceS1Sequence* , const CModel* , const float* , const CSeqAutoLayer* , float& , float& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:106 */
	void AddToBlendlist(const CSeqResourceS1Sequence* , CAnimationBlendList* , int, float, int, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:838 */
	void Calc3WayBlendIndices(const CSeqResourceS1Sequence* , CAnimationBlendList* , int, int, float, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:505 */
	virtual const CSeqS1SeqDesc* pMySeqDesc(const CSeqResourceS1Sequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:524 */
	HSequence hRelativeSeq(const CSeqResourceS1Sequence* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:530 */
	int iRelativePose(const CSeqResourceS1Sequence* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:536 */
	int iRelativeWeightlist(const CSeqResourceS1Sequence* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:542 */
	int iRelativeBone(const CSeqResourceS1Sequence* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1127 */
	void LocalPoseParameter(const CSeqResourceS1Sequence* , const CModel* , const CSeqMultiFetch* , const float* , int& , float& , int& , float& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:62 */
	virtual void PostInit(CSeqResourceS1Sequence* );
	HSequence m_hSequence; /* 56 4 */
	int m_nGroup; /* 60 4 */
	int m_nIndex; /* 64 4 */
	uint32 m_nFlags; /* 68 4 */
	CUtlVector<float, CUtlMemory<float, int> > m_flCachedPoseKey0; /* 72 32 */
	CUtlVector<float, CUtlMemory<float, int> > m_flCachedPoseKey1; /* 104 32 */
	CUtlVector<CSeqIKLock, CUtlMemory<CSeqIKLock, int> > m_ikLockList; /* 136 32 */
	int m_nCachedMaxFrame; /* 168 4 */
	float m_flCachedFPS; /* 172 4 */
	float m_flCachedCPS; /* 176 4 */
	int m_nCycleDrivenByPoseParamIndex; /* 180 4 */
	bool m_bPoseParamInvariant; /* 184 1 */
	bool m_bRealTime; /* 185 1 */
	bool m_bWorldRelativeBlend; /* 186 1 */
	bool m_bLayersAffectingMovementAndDuration; /* 187 1 */
	bool m_bEmptyAnimWithNoffect; /* 188 1 */
	void CSeqResourceS1Sequence(class CSeqResourceS1Sequence *, const class CSeqResourceS1Sequence  &); /* linkage=_ZN22CSeqResourceS1SequenceC4ERKS_ */
	void CSeqResourceS1Sequence(class CSeqResourceS1Sequence *, const class CAnimContainer  *, class HSequence, int, int); /* linkage=_ZN22CSeqResourceS1SequenceC4EPK14CAnimContainer9HSequenceii */
	virtual void ~CSeqResourceS1Sequence(class CSeqResourceS1Sequence *); /* linkage=_ZN22CSeqResourceS1SequenceD4Ev */
	/* <d2bdc5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:245 */
	virtual const char  * GetName(const class CSeqResourceS1Sequence  *); /* linkage=_ZNK22CSeqResourceS1Sequence7GetNameEv */
	/* <d27205> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:250 */
	virtual const class CModel  * GetModel(const class CSeqResourceS1Sequence  *); /* linkage=_ZNK22CSeqResourceS1Sequence8GetModelEv */
	virtual bool IsLooping(const class CSeqResourceS1Sequence  *); /* linkage=_ZNK22CSeqResourceS1Sequence9IsLoopingEv */
	virtual bool IsMulti(const class CSeqResourceS1Sequence  *); /* linkage=_ZNK22CSeqResourceS1Sequence7IsMultiEv */
	virtual bool IsDelta(const class CSeqResourceS1Sequence  *); /* linkage=_ZNK22CSeqResourceS1Sequence7IsDeltaEv */
	virtual bool IsHidden(const class CSeqResourceS1Sequence  *); /* linkage=_ZNK22CSeqResourceS1Sequence8IsHiddenEv */
	virtual bool IsAutoplay(const class CSeqResourceS1Sequence  *); /* linkage=_ZNK22CSeqResourceS1Sequence10IsAutoplayEv */
	virtual bool IsSnapped(const class CSeqResourceS1Sequence  *); /* linkage=_ZNK22CSeqResourceS1Sequence9IsSnappedEv */
	virtual bool IsRealTime(const class CSeqResourceS1Sequence  *); /* linkage=_ZNK22CSeqResourceS1Sequence10IsRealTimeEv */
	virtual bool IsFrameCacheable(const class CSeqResourceS1Sequence  *); /* linkage=_ZNK22CSeqResourceS1Sequence16IsFrameCacheableEv */
	virtual bool GetAllAnimations(const class CSeqResourceS1Sequence  *, AnimRefVector_t &); /* linkage=_ZNK22CSeqResourceS1Sequence16GetAllAnimationsER23CUtlVectorFixedGrowableIiLm16EE */
	virtual bool GetAllSequences(const class CSeqResourceS1Sequence  *, class CUtlVector<HSequence, CUtlMemory<HSequence, int> > &); /* linkage=_ZNK22CSeqResourceS1Sequence15GetAllSequencesER10CUtlVectorI9HSequence10CUtlMemoryIS1_iEE */
	virtual int NumActivities(const class CSeqResourceS1Sequence  *); /* linkage=_ZNK22CSeqResourceS1Sequence13NumActivitiesEv */
	/* <d2e1aa> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:356 */
	virtual const char  * GetActivityName(const class CSeqResourceS1Sequence  *, int); /* linkage=_ZNK22CSeqResourceS1Sequence15GetActivityNameEi */
	/* <d28182> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:367 */
	virtual float GetActivityWeight(const class CSeqResourceS1Sequence  *, int); /* linkage=_ZNK22CSeqResourceS1Sequence17GetActivityWeightEi */
	/* <d282f3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:378 */
	virtual Activity GetActivityType(const class CSeqResourceS1Sequence  *, int); /* linkage=_ZNK22CSeqResourceS1Sequence15GetActivityTypeEi */
	virtual void SetActivityType(const class CSeqResourceS1Sequence  *, Activity); /* linkage=_ZNK22CSeqResourceS1Sequence15SetActivityTypeEi */
	/* <d2725f> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:394 */
	virtual void SetActivityType(const class CSeqResourceS1Sequence  *, int, Activity); /* linkage=_ZNK22CSeqResourceS1Sequence15SetActivityTypeEii */
	virtual int NumPoseParameters(const class CSeqResourceS1Sequence  *); /* linkage=_ZNK22CSeqResourceS1Sequence17NumPoseParametersEv */
	virtual int GetPoseParameter(const class CSeqResourceS1Sequence  *, int); /* linkage=_ZNK22CSeqResourceS1Sequence16GetPoseParameterEi */
	virtual void DoAnimation(const class CSeqResourceS1Sequence  *, class CAnimationBucket &, float, float); /* linkage=_ZNK22CSeqResourceS1Sequence11DoAnimationER16CAnimationBucketff */
	virtual float GetFadeInTime(const class CSeqResourceS1Sequence  *); /* linkage=_ZNK22CSeqResourceS1Sequence13GetFadeInTimeEv */
	virtual float GetFadeOutTime(const class CSeqResourceS1Sequence  *); /* linkage=_ZNK22CSeqResourceS1Sequence14GetFadeOutTimeEv */
	virtual class HSequence GetNextSequence(const class CSeqResourceS1Sequence  *, class HSequence, int *); /* linkage=_ZNK22CSeqResourceS1Sequence15GetNextSequenceE9HSequencePi */
	virtual int GetNodeFlags(const class CSeqResourceS1Sequence  *); /* linkage=_ZNK22CSeqResourceS1Sequence12GetNodeFlagsEv */
	virtual bool IsFlagSet(const class CSeqResourceS1Sequence  *, int); /* linkage=_ZNK22CSeqResourceS1Sequence9IsFlagSetEi */
	virtual void SetFlag(const class CSeqResourceS1Sequence  *, int); /* linkage=_ZNK22CSeqResourceS1Sequence7SetFlagEi */
	virtual void ClearFlag(const class CSeqResourceS1Sequence  *, int); /* linkage=_ZNK22CSeqResourceS1Sequence9ClearFlagEi */
	virtual int EntryNode(const class CSeqResourceS1Sequence  *); /* linkage=_ZNK22CSeqResourceS1Sequence9EntryNodeEv */
	virtual int ExitNode(const class CSeqResourceS1Sequence  *); /* linkage=_ZNK22CSeqResourceS1Sequence8ExitNodeEv */
	virtual void BuildBlendlist(const class CSeqResourceS1Sequence  *, class CAnimationBlendList *, const float  *); /* linkage=_ZNK22CSeqResourceS1Sequence14BuildBlendlistEP19CAnimationBlendListPKf */
	virtual bool GetAssetInfo(const class CSeqResourceS1Sequence  *, class CSequenceAssetInfo &); /* linkage=_ZNK22CSeqResourceS1Sequence12GetAssetInfoER18CSequenceAssetInfo */
	/* <d27c9c> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:642 */
	virtual int MaxFrame(const class CSeqResourceS1Sequence  *, const float  *); /* linkage=_ZNK22CSeqResourceS1Sequence8MaxFrameEPKf */
	/* <d27b1f> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:665 */
	virtual float FPS(const class CSeqResourceS1Sequence  *, const float  *); /* linkage=_ZNK22CSeqResourceS1Sequence3FPSEPKf */
	virtual float CPS(const class CSeqResourceS1Sequence  *, const float  *); /* linkage=_ZNK22CSeqResourceS1Sequence3CPSEPKf */
	virtual float MovementAndDuration(const class CSeqResourceS1Sequence  *, float, float, const float  *, class Vector &); /* linkage=_ZNK22CSeqResourceS1Sequence19MovementAndDurationEffPKfR6Vector */
	virtual float TotalMovementAndDuration(const class CSeqResourceS1Sequence  *, const float  *, class Vector &); /* linkage=_ZNK22CSeqResourceS1Sequence24TotalMovementAndDurationEPKfR6Vector */
	virtual bool Movement(const class CSeqResourceS1Sequence  *, float, float, const float  *, class Vector &, class QAngle &); /* linkage=_ZNK22CSeqResourceS1Sequence8MovementEffPKfR6VectorR6QAngle */
	/* <d323f6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:500 */
	const class CSeqMultiFetch  * pLocalFetch(const class CSeqResourceS1Sequence  *, int); /* linkage=_ZNK22CSeqResourceS1Sequence11pLocalFetchEi */
	/* <d3272d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1053 */
	bool GetLayerWeight(const class CSeqResourceS1Sequence  *, class EBoneSetup *, const class CSeqAutoLayer  *, float &, float &); /* linkage=_ZNK22CSeqResourceS1Sequence14GetLayerWeightEP10EBoneSetupPK13CSeqAutoLayerRfS5_ */
	bool GetLayerWeight(const class CSeqResourceS1Sequence  *, const class CModel  *, const float  *, const class CSeqAutoLayer  *, float &, float &); /* linkage=_ZNK22CSeqResourceS1Sequence14GetLayerWeightEPK6CModelPKfPK13CSeqAutoLayerRfS8_ */
	void AddToBlendlist(const class CSeqResourceS1Sequence  *, class CAnimationBlendList *, int, float, int, float); /* linkage=_ZNK22CSeqResourceS1Sequence14AddToBlendlistEP19CAnimationBlendListifif */
	void Calc3WayBlendIndices(const class CSeqResourceS1Sequence  *, class CAnimationBlendList *, int, int, float, float); /* linkage=_ZNK22CSeqResourceS1Sequence20Calc3WayBlendIndicesEP19CAnimationBlendListiiff */
	/* <d27742> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:505 */
	virtual const class CSeqS1SeqDesc  * pMySeqDesc(const class CSeqResourceS1Sequence  *); /* linkage=_ZNK22CSeqResourceS1Sequence10pMySeqDescEv */
	/* <d32445> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:524 */
	class HSequence hRelativeSeq(const class CSeqResourceS1Sequence  *, int); /* linkage=_ZNK22CSeqResourceS1Sequence12hRelativeSeqEi */
	/* <d324f5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:530 */
	int iRelativePose(const class CSeqResourceS1Sequence  *, int); /* linkage=_ZNK22CSeqResourceS1Sequence13iRelativePoseEi */
	/* <d325cd> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:536 */
	int iRelativeWeightlist(const class CSeqResourceS1Sequence  *, int); /* linkage=_ZNK22CSeqResourceS1Sequence19iRelativeWeightlistEi */
	/* <d3267d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:542 */
	int iRelativeBone(const class CSeqResourceS1Sequence  *, int); /* linkage=_ZNK22CSeqResourceS1Sequence13iRelativeBoneEi */
	void LocalPoseParameter(const class CSeqResourceS1Sequence  *, const class CModel  *, const class CSeqMultiFetch  *, const float  *, int &, float &, int &, float &); /* linkage=_ZNK22CSeqResourceS1Sequence18LocalPoseParameterEPK6CModelPK14CSeqMultiFetchPKfRiRfS8_S9_ */
	virtual void PostInit(class CSeqResourceS1Sequence *); /* linkage=_ZN22CSeqResourceS1Sequence8PostInitEv */
};

// <00CE4555> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:59
// variable: 1
// function calls: 43
void CSeqResourceS1Sequence::~CSeqResourceS1Sequence()
{
	CUtlMemory<CSeqIKLock, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSeqIKLock, int>::Purge(); // 903
	CUtlMemory<CSeqIKLock, int>::Purge(); // 1799
	CUtlVectorBase<CSeqIKLock, CUtlMemory<CSeqIKLock, int> >::RemoveAll(); // 1798
	CUtlVectorBase<CSeqIKLock, CUtlMemory<CSeqIKLock, int> >::Purge(); // 560
	ValidateAlignment<CSeqIKLock>(void); // 508
	CUtlMemory<CSeqIKLock, int>::Purge(); // 510
	CUtlMemory<CSeqIKLock, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CSeqIKLock, CUtlMemory<CSeqIKLock, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CSeqIKLock, CUtlMemory<CSeqIKLock, int> >::~CUtlVector(); // 59
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 59
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 59
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
	CHelperSequence::~CHelperSequence(); // 59
} /* size: 289, inline expansions: 38 (1136 bytes) */

// <00CE3BB8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:59
// variable: 1
// function calls: 50
void CSeqResourceS1Sequence::~CSeqResourceS1Sequence()
{
	CUtlMemory<CSeqIKLock, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSeqIKLock, int>::Purge(); // 903
	CUtlMemory<CSeqIKLock, int>::Purge(); // 1799
	CUtlVectorBase<CSeqIKLock, CUtlMemory<CSeqIKLock, int> >::RemoveAll(); // 1798
	CUtlVectorBase<CSeqIKLock, CUtlMemory<CSeqIKLock, int> >::Purge(); // 560
	ValidateAlignment<CSeqIKLock>(void); // 508
	CUtlMemory<CSeqIKLock, int>::Purge(); // 510
	CUtlMemory<CSeqIKLock, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CSeqIKLock, CUtlMemory<CSeqIKLock, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CSeqIKLock, CUtlMemory<CSeqIKLock, int> >::~CUtlVector(); // 59
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 59
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 59
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
	CHelperSequence::~CHelperSequence(); // 59
	CSeqResourceS1Sequence::~CSeqResourceS1Sequence(); // 59
} /* size: 286, inline expansions: 45 (1341 bytes) */

// <00CE3B9F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:59
inline void CSeqResourceS1Sequence::~CSeqResourceS1Sequence()
{
} /* size: 0 */

// <00C215C4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:150
// variable: 1
// function calls: 44
void CSeqResourceMultiSequence::~CSeqResourceMultiSequence()
{
	CUtlMemory<CSeqIKLock, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSeqIKLock, int>::Purge(); // 903
	CUtlMemory<CSeqIKLock, int>::Purge(); // 1799
	CUtlVectorBase<CSeqIKLock, CUtlMemory<CSeqIKLock, int> >::RemoveAll(); // 1798
	CUtlVectorBase<CSeqIKLock, CUtlMemory<CSeqIKLock, int> >::Purge(); // 560
	ValidateAlignment<CSeqIKLock>(void); // 508
	CUtlMemory<CSeqIKLock, int>::Purge(); // 510
	CUtlMemory<CSeqIKLock, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CSeqIKLock, CUtlMemory<CSeqIKLock, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CSeqIKLock, CUtlMemory<CSeqIKLock, int> >::~CUtlVector(); // 59
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 59
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 59
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
	CHelperSequence::~CHelperSequence(); // 59
	CSeqResourceS1Sequence::~CSeqResourceS1Sequence(); // 150
} /* size: 289, inline expansions: 39 (1390 bytes) */

// <00C20C03> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:150
// variable: 1
// function calls: 51
void CSeqResourceMultiSequence::~CSeqResourceMultiSequence()
{
	CUtlMemory<CSeqIKLock, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSeqIKLock, int>::Purge(); // 903
	CUtlMemory<CSeqIKLock, int>::Purge(); // 1799
	CUtlVectorBase<CSeqIKLock, CUtlMemory<CSeqIKLock, int> >::RemoveAll(); // 1798
	CUtlVectorBase<CSeqIKLock, CUtlMemory<CSeqIKLock, int> >::Purge(); // 560
	ValidateAlignment<CSeqIKLock>(void); // 508
	CUtlMemory<CSeqIKLock, int>::Purge(); // 510
	CUtlMemory<CSeqIKLock, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CSeqIKLock, CUtlMemory<CSeqIKLock, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CSeqIKLock, CUtlMemory<CSeqIKLock, int> >::~CUtlVector(); // 59
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 59
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 59
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
	CHelperSequence::~CHelperSequence(); // 59
	CSeqResourceS1Sequence::~CSeqResourceS1Sequence(); // 150
	CSeqResourceMultiSequence::~CSeqResourceMultiSequence(); // 150
} /* size: 286, inline expansions: 46 (1588 bytes) */

// <00C20BE7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:150
inline void CSeqResourceMultiSequence::~CSeqResourceMultiSequence()
{
} /* size: 0 */

// <00C074C8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:150
// member functions: 10
// member variable: 1
// vtable entry: 1
// class size: 192
class CSeqResourceMultiSequence : public CSeqResourceS1Sequence {
public:
	/* class CSeqResourceS1Sequence <ancestor>; */ /* 0 192 */
	void CSeqResourceMultiSequence(CSeqResourceMultiSequence* , CSeqResourceMultiSequence& );
	void CSeqResourceMultiSequence(CSeqResourceMultiSequence* , const CSeqResourceMultiSequence& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:153 */
	void CSeqResourceMultiSequence(CSeqResourceMultiSequence* , const CAnimContainer* , HSequence, int, int);
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1215 */
	virtual const CSeqS1SeqDesc* pMySeqDesc(const CSeqResourceMultiSequence* );
	virtual void ~CSeqResourceMultiSequence(CSeqResourceMultiSequence* );
	void CSeqResourceMultiSequence(class CSeqResourceMultiSequence *, class CSeqResourceMultiSequence &); /* linkage=_ZN25CSeqResourceMultiSequenceC4EOS_ */
	void CSeqResourceMultiSequence(class CSeqResourceMultiSequence *, const class CSeqResourceMultiSequence  &); /* linkage=_ZN25CSeqResourceMultiSequenceC4ERKS_ */
	void CSeqResourceMultiSequence(class CSeqResourceMultiSequence *, const class CAnimContainer  *, class HSequence, int, int); /* linkage=_ZN25CSeqResourceMultiSequenceC4EPK14CAnimContainer9HSequenceii */
	virtual const class CSeqS1SeqDesc  * pMySeqDesc(const class CSeqResourceMultiSequence  *); /* linkage=_ZNK25CSeqResourceMultiSequence10pMySeqDescEv */
	virtual void ~CSeqResourceMultiSequence(class CSeqResourceMultiSequence *); /* linkage=_ZN25CSeqResourceMultiSequenceD4Ev */
};

// <00CE3B74> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:153
void CSeqResourceMultiSequence::CSeqResourceMultiSequence(const CAnimContainer* pAnimContainer, HSequence hSequence, int nGroup, int nIndex)
{
} /* size: 0 */

// <00CE3B2B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:153
inline void CSeqResourceMultiSequence::CSeqResourceMultiSequence(const CAnimContainer* pAnimContainer, HSequence hSequence, int nGroup, int nIndex)
{
} /* size: 0 */

// <00C06D08> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:161
// member functions: 82
// member variables: 9
// vtable entries: 34
// class size: 120
class CSeqResourceCmdSequence : public CHelperSequence {
public:
	/* class CHelperSequence <ancestor>; */ /* 0 56 */
	void CSeqResourceCmdSequence(CSeqResourceCmdSequence* , const CSeqResourceCmdSequence& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1228 */
	void CSeqResourceCmdSequence(CSeqResourceCmdSequence* , const CAnimContainer* , HSequence, int, int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1423 */
	virtual void ~CSeqResourceCmdSequence(CSeqResourceCmdSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1428 */
	virtual const char* GetName(const CSeqResourceCmdSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1433 */
	virtual const CModel* GetModel(const CSeqResourceCmdSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1438 */
	virtual bool IsLooping(const CSeqResourceCmdSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1443 */
	virtual bool IsSnapped(const CSeqResourceCmdSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1448 */
	virtual bool IsMulti(const CSeqResourceCmdSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1453 */
	virtual bool IsDelta(const CSeqResourceCmdSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1458 */
	virtual bool IsHidden(const CSeqResourceCmdSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1463 */
	virtual bool IsAutoplay(const CSeqResourceCmdSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:176 */
	virtual bool IsAnimation(const CSeqResourceCmdSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:177 */
	virtual bool IsFrameCacheable(const CSeqResourceCmdSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1469 */
	virtual bool GetAllAnimations(const CSeqResourceCmdSequence* , AnimRefVector_t& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1498 */
	virtual bool GetAllSequences(const CSeqResourceCmdSequence* , CUtlVector<HSequence, CUtlMemory<HSequence, int> >& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1527 */
	virtual int NumActivities(const CSeqResourceCmdSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1533 */
	virtual const char* GetActivityName(const CSeqResourceCmdSequence* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1544 */
	virtual float GetActivityWeight(const CSeqResourceCmdSequence* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1555 */
	virtual Activity GetActivityType(const CSeqResourceCmdSequence* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1566 */
	virtual void SetActivityType(const CSeqResourceCmdSequence* , Activity);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1571 */
	virtual void SetActivityType(const CSeqResourceCmdSequence* , int, Activity);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1641 */
	virtual void DoAnimation(const CSeqResourceCmdSequence* , CAnimationBucket& , float, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1622 */
	virtual float GetFadeInTime(const CSeqResourceCmdSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1627 */
	virtual float GetFadeOutTime(const CSeqResourceCmdSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1632 */
	virtual HSequence GetNextSequence(const CSeqResourceCmdSequence* , HSequence, int* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1607 */
	virtual bool IsFlagSet(const CSeqResourceCmdSequence* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1612 */
	virtual void SetFlag(const CSeqResourceCmdSequence* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1617 */
	virtual void ClearFlag(const CSeqResourceCmdSequence* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1800 */
	virtual void BuildBlendlist(const CSeqResourceCmdSequence* , CAnimationBlendList* , const float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1809 */
	virtual bool GetAssetInfo(const CSeqResourceCmdSequence* , CSequenceAssetInfo& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1821 */
	virtual int MaxFrame(const CSeqResourceCmdSequence* , const float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1832 */
	virtual float FPS(const CSeqResourceCmdSequence* , const float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1842 */
	virtual float CPS(const CSeqResourceCmdSequence* , const float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1865 */
	virtual int NumPoseSettings(const CSeqResourceCmdSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1872 */
	virtual const char* GetPoseSettingName(const CSeqResourceCmdSequence* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1882 */
	virtual float GetPoseSettingValue(const CSeqResourceCmdSequence* , int);
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1240 */
	virtual void PostInit(CSeqResourceCmdSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1577 */
	const CSeqCmdSeqDesc* pMySeqDesc(const CSeqResourceCmdSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1585 */
	HSequence hRelativeSeq(const CSeqResourceCmdSequence* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1595 */
	int iRelativeWeightlist(const CSeqResourceCmdSequence* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1601 */
	int iRelativeBone(const CSeqResourceCmdSequence* , int);
	HSequence m_hSequence; /* 56 4 */
	int m_nBaseAnimation; /* 60 4 */
	HSequence m_hBaseSequence; /* 64 4 */
	HSequence m_hFrameRangeSequence; /* 68 4 */
	int m_nGroup; /* 72 4 */
	int m_nIndex; /* 76 4 */
	uint32 m_nFlags; /* 80 4 */
	CUtlVector<float, CUtlMemory<float, int> > m_flPoseSettings; /* 88 32 */
	void CSeqResourceCmdSequence(class CSeqResourceCmdSequence *, const class CSeqResourceCmdSequence  &); /* linkage=_ZN23CSeqResourceCmdSequenceC4ERKS_ */
	void CSeqResourceCmdSequence(class CSeqResourceCmdSequence *, const class CAnimContainer  *, class HSequence, int, int); /* linkage=_ZN23CSeqResourceCmdSequenceC4EPK14CAnimContainer9HSequenceii */
	virtual void ~CSeqResourceCmdSequence(class CSeqResourceCmdSequence *); /* linkage=_ZN23CSeqResourceCmdSequenceD4Ev */
	/* <d2feed> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1428 */
	virtual const char  * GetName(const class CSeqResourceCmdSequence  *); /* linkage=_ZNK23CSeqResourceCmdSequence7GetNameEv */
	/* <d27320> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1433 */
	virtual const class CModel  * GetModel(const class CSeqResourceCmdSequence  *); /* linkage=_ZNK23CSeqResourceCmdSequence8GetModelEv */
	virtual bool IsLooping(const class CSeqResourceCmdSequence  *); /* linkage=_ZNK23CSeqResourceCmdSequence9IsLoopingEv */
	virtual bool IsSnapped(const class CSeqResourceCmdSequence  *); /* linkage=_ZNK23CSeqResourceCmdSequence9IsSnappedEv */
	virtual bool IsMulti(const class CSeqResourceCmdSequence  *); /* linkage=_ZNK23CSeqResourceCmdSequence7IsMultiEv */
	virtual bool IsDelta(const class CSeqResourceCmdSequence  *); /* linkage=_ZNK23CSeqResourceCmdSequence7IsDeltaEv */
	virtual bool IsHidden(const class CSeqResourceCmdSequence  *); /* linkage=_ZNK23CSeqResourceCmdSequence8IsHiddenEv */
	virtual bool IsAutoplay(const class CSeqResourceCmdSequence  *); /* linkage=_ZNK23CSeqResourceCmdSequence10IsAutoplayEv */
	virtual bool IsAnimation(const class CSeqResourceCmdSequence  *); /* linkage=_ZNK23CSeqResourceCmdSequence11IsAnimationEv */
	virtual bool IsFrameCacheable(const class CSeqResourceCmdSequence  *); /* linkage=_ZNK23CSeqResourceCmdSequence16IsFrameCacheableEv */
	virtual bool GetAllAnimations(const class CSeqResourceCmdSequence  *, AnimRefVector_t &); /* linkage=_ZNK23CSeqResourceCmdSequence16GetAllAnimationsER23CUtlVectorFixedGrowableIiLm16EE */
	virtual bool GetAllSequences(const class CSeqResourceCmdSequence  *, class CUtlVector<HSequence, CUtlMemory<HSequence, int> > &); /* linkage=_ZNK23CSeqResourceCmdSequence15GetAllSequencesER10CUtlVectorI9HSequence10CUtlMemoryIS1_iEE */
	virtual int NumActivities(const class CSeqResourceCmdSequence  *); /* linkage=_ZNK23CSeqResourceCmdSequence13NumActivitiesEv */
	/* <d308bb> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1533 */
	virtual const char  * GetActivityName(const class CSeqResourceCmdSequence  *, int); /* linkage=_ZNK23CSeqResourceCmdSequence15GetActivityNameEi */
	/* <d303cc> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1544 */
	virtual float GetActivityWeight(const class CSeqResourceCmdSequence  *, int); /* linkage=_ZNK23CSeqResourceCmdSequence17GetActivityWeightEi */
	/* <d30123> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1555 */
	virtual Activity GetActivityType(const class CSeqResourceCmdSequence  *, int); /* linkage=_ZNK23CSeqResourceCmdSequence15GetActivityTypeEi */
	virtual void SetActivityType(const class CSeqResourceCmdSequence  *, Activity); /* linkage=_ZNK23CSeqResourceCmdSequence15SetActivityTypeEi */
	/* <d2fcf0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1571 */
	virtual void SetActivityType(const class CSeqResourceCmdSequence  *, int, Activity); /* linkage=_ZNK23CSeqResourceCmdSequence15SetActivityTypeEii */
	virtual void DoAnimation(const class CSeqResourceCmdSequence  *, class CAnimationBucket &, float, float); /* linkage=_ZNK23CSeqResourceCmdSequence11DoAnimationER16CAnimationBucketff */
	virtual float GetFadeInTime(const class CSeqResourceCmdSequence  *); /* linkage=_ZNK23CSeqResourceCmdSequence13GetFadeInTimeEv */
	virtual float GetFadeOutTime(const class CSeqResourceCmdSequence  *); /* linkage=_ZNK23CSeqResourceCmdSequence14GetFadeOutTimeEv */
	virtual class HSequence GetNextSequence(const class CSeqResourceCmdSequence  *, class HSequence, int *); /* linkage=_ZNK23CSeqResourceCmdSequence15GetNextSequenceE9HSequencePi */
	virtual bool IsFlagSet(const class CSeqResourceCmdSequence  *, int); /* linkage=_ZNK23CSeqResourceCmdSequence9IsFlagSetEi */
	virtual void SetFlag(const class CSeqResourceCmdSequence  *, int); /* linkage=_ZNK23CSeqResourceCmdSequence7SetFlagEi */
	virtual void ClearFlag(const class CSeqResourceCmdSequence  *, int); /* linkage=_ZNK23CSeqResourceCmdSequence9ClearFlagEi */
	/* <d279b3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1800 */
	virtual void BuildBlendlist(const class CSeqResourceCmdSequence  *, class CAnimationBlendList *, const float  *); /* linkage=_ZNK23CSeqResourceCmdSequence14BuildBlendlistEP19CAnimationBlendListPKf */
	virtual bool GetAssetInfo(const class CSeqResourceCmdSequence  *, class CSequenceAssetInfo &); /* linkage=_ZNK23CSeqResourceCmdSequence12GetAssetInfoER18CSequenceAssetInfo */
	/* <d30bfc> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1821 */
	virtual int MaxFrame(const class CSeqResourceCmdSequence  *, const float  *); /* linkage=_ZNK23CSeqResourceCmdSequence8MaxFrameEPKf */
	/* <d30675> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1832 */
	virtual float FPS(const class CSeqResourceCmdSequence  *, const float  *); /* linkage=_ZNK23CSeqResourceCmdSequence3FPSEPKf */
	virtual float CPS(const class CSeqResourceCmdSequence  *, const float  *); /* linkage=_ZNK23CSeqResourceCmdSequence3CPSEPKf */
	virtual int NumPoseSettings(const class CSeqResourceCmdSequence  *); /* linkage=_ZNK23CSeqResourceCmdSequence15NumPoseSettingsEv */
	virtual const char  * GetPoseSettingName(const class CSeqResourceCmdSequence  *, int); /* linkage=_ZNK23CSeqResourceCmdSequence18GetPoseSettingNameEi */
	/* <d28074> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1882 */
	virtual float GetPoseSettingValue(const class CSeqResourceCmdSequence  *, int); /* linkage=_ZNK23CSeqResourceCmdSequence19GetPoseSettingValueEi */
	virtual void PostInit(class CSeqResourceCmdSequence *); /* linkage=_ZN23CSeqResourceCmdSequence8PostInitEv */
	/* <d327e6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1577 */
	const class CSeqCmdSeqDesc  * pMySeqDesc(const class CSeqResourceCmdSequence  *); /* linkage=_ZNK23CSeqResourceCmdSequence10pMySeqDescEv */
	/* <d3292f> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1585 */
	class HSequence hRelativeSeq(const class CSeqResourceCmdSequence  *, int); /* linkage=_ZNK23CSeqResourceCmdSequence12hRelativeSeqEi */
	/* <d32a3b> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1595 */
	int iRelativeWeightlist(const class CSeqResourceCmdSequence  *, int); /* linkage=_ZNK23CSeqResourceCmdSequence19iRelativeWeightlistEi */
	/* <d32aeb> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1601 */
	int iRelativeBone(const class CSeqResourceCmdSequence  *, int); /* linkage=_ZNK23CSeqResourceCmdSequence13iRelativeBoneEi */
};

// <00CE3AFD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:176
void CSeqResourceCmdSequence::IsAnimation()
{
} /* size: 7 */

// <00CE3ACF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:177
void CSeqResourceCmdSequence::IsFrameCacheable()
{
} /* size: 10 */

// <00C05F2C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:227
// member functions: 88
// member variables: 16
// vtable entries: 41
// class size: 120
class CAnimResourceSequence : public CHelperSequence {
public:
	/* class CHelperSequence <ancestor>; */ /* 0 56 */
	void CAnimResourceSequence(CAnimResourceSequence* , const CAnimResourceSequence& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1896 */
	void CAnimResourceSequence(CAnimResourceSequence* , const CAnimContainer* , HSequence, int, const CSeqS1SeqDesc* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:232 */
	virtual void ~CAnimResourceSequence(CAnimResourceSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1948 */
	virtual const char* GetName(const CAnimResourceSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1953 */
	virtual const CModel* GetModel(const CAnimResourceSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1958 */
	virtual bool IsLooping(const CAnimResourceSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1963 */
	virtual bool IsSnapped(const CAnimResourceSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1971 */
	virtual bool IsMulti(const CAnimResourceSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1976 */
	virtual bool IsDelta(const CAnimResourceSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1981 */
	virtual bool IsHidden(const CAnimResourceSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1988 */
	virtual bool IsAutoplay(const CAnimResourceSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:242 */
	virtual bool IsAnimation(const CAnimResourceSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:243 */
	virtual bool IsFrameCacheable(const CAnimResourceSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1993 */
	virtual bool GetBounds(const CAnimResourceSequence* , Vector* , Vector* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1998 */
	virtual bool GetAllAnimations(const CAnimResourceSequence* , AnimRefVector_t& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2004 */
	virtual bool GetAllSequences(const CAnimResourceSequence* , CUtlVector<HSequence, CUtlMemory<HSequence, int> >& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2009 */
	virtual int NumActivities(const CAnimResourceSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2015 */
	virtual const char* GetActivityName(const CAnimResourceSequence* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2026 */
	virtual float GetActivityWeight(const CAnimResourceSequence* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2037 */
	virtual Activity GetActivityType(const CAnimResourceSequence* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2048 */
	virtual void SetActivityType(const CAnimResourceSequence* , Activity);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2053 */
	virtual void SetActivityType(const CAnimResourceSequence* , int, Activity);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2059 */
	virtual int NumPoseParameters(const CAnimResourceSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2064 */
	virtual int GetPoseParameter(const CAnimResourceSequence* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2069 */
	virtual void DoAnimation(const CAnimResourceSequence* , CAnimationBucket& , float, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2095 */
	virtual int GetNodeFlags(const CAnimResourceSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2100 */
	virtual bool IsFlagSet(const CAnimResourceSequence* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2105 */
	virtual void SetFlag(const CAnimResourceSequence* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2110 */
	virtual void ClearFlag(const CAnimResourceSequence* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2115 */
	virtual HSequence GetNextSequence(const CAnimResourceSequence* , HSequence, int* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2153 */
	virtual float GetFadeInTime(const CAnimResourceSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2158 */
	virtual float GetFadeOutTime(const CAnimResourceSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2124 */
	virtual int EntryNode(const CAnimResourceSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2129 */
	virtual int ExitNode(const CAnimResourceSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2138 */
	virtual void SetEntryNode(CAnimResourceSequence* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2147 */
	virtual void SetExitNode(CAnimResourceSequence* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2163 */
	virtual void BuildBlendlist(const CAnimResourceSequence* , CAnimationBlendList* , const float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2168 */
	virtual bool GetAssetInfo(const CAnimResourceSequence* , CSequenceAssetInfo& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2181 */
	virtual int MaxFrame(const CAnimResourceSequence* , const float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2186 */
	virtual float FPS(const CAnimResourceSequence* , const float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2191 */
	virtual float CPS(const CAnimResourceSequence* , const float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2196 */
	virtual float Duration(const CAnimResourceSequence* , const float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2201 */
	virtual float TotalMovementAndDuration(const CAnimResourceSequence* , const float* , Vector& );
protected:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2090 */
	virtual const CAnimDesc* pMyAnimDesc(const CAnimResourceSequence* );
	HSequence m_hSequence; /* 56 4 */
	int m_nAnimation; /* 60 4 */
	float m_flFadeInTime; /* 64 4 */
	float m_flFadeOutTime; /* 68 4 */
	int m_nCachedMaxFrame; /* 72 4 */
	float m_flCachedFPS; /* 76 4 */
	float m_flCachedCPS; /* 80 4 */
	float m_flCachedDuration; /* 84 4 */
	float m_flXYMovementScaleForMovementCache; /* 88 4 */
	Vector m_cachedTotalMovement; /* 92 12 */
	int m_nEntryNode; /* 104 4 */
	int m_nExitNode; /* 108 4 */
	uint32 m_nFlags; /* 112 4 */
	bool m_bCachedIsLooping:1; /* 116: 0 1 */
	bool m_bCachedIsDelta:1; /* 116: 1 1 */
	void CAnimResourceSequence(class CAnimResourceSequence *, const class CAnimResourceSequence  &); /* linkage=_ZN21CAnimResourceSequenceC4ERKS_ */
	void CAnimResourceSequence(class CAnimResourceSequence *, const class CAnimContainer  *, class HSequence, int, const class CSeqS1SeqDesc  *); /* linkage=_ZN21CAnimResourceSequenceC4EPK14CAnimContainer9HSequenceiPK13CSeqS1SeqDesc */
	virtual void ~CAnimResourceSequence(class CAnimResourceSequence *); /* linkage=_ZN21CAnimResourceSequenceD4Ev */
	/* <d2dd3a> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1948 */
	virtual const char  * GetName(const class CAnimResourceSequence  *); /* linkage=_ZNK21CAnimResourceSequence7GetNameEv */
	virtual const class CModel  * GetModel(const class CAnimResourceSequence  *); /* linkage=_ZNK21CAnimResourceSequence8GetModelEv */
	virtual bool IsLooping(const class CAnimResourceSequence  *); /* linkage=_ZNK21CAnimResourceSequence9IsLoopingEv */
	virtual bool IsSnapped(const class CAnimResourceSequence  *); /* linkage=_ZNK21CAnimResourceSequence9IsSnappedEv */
	virtual bool IsMulti(const class CAnimResourceSequence  *); /* linkage=_ZNK21CAnimResourceSequence7IsMultiEv */
	/* <d2737b> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:1976 */
	virtual bool IsDelta(const class CAnimResourceSequence  *); /* linkage=_ZNK21CAnimResourceSequence7IsDeltaEv */
	virtual bool IsHidden(const class CAnimResourceSequence  *); /* linkage=_ZNK21CAnimResourceSequence8IsHiddenEv */
	virtual bool IsAutoplay(const class CAnimResourceSequence  *); /* linkage=_ZNK21CAnimResourceSequence10IsAutoplayEv */
	virtual bool IsAnimation(const class CAnimResourceSequence  *); /* linkage=_ZNK21CAnimResourceSequence11IsAnimationEv */
	virtual bool IsFrameCacheable(const class CAnimResourceSequence  *); /* linkage=_ZNK21CAnimResourceSequence16IsFrameCacheableEv */
	virtual bool GetBounds(const class CAnimResourceSequence  *, class Vector *, class Vector *); /* linkage=_ZNK21CAnimResourceSequence9GetBoundsEP6VectorS1_ */
	virtual bool GetAllAnimations(const class CAnimResourceSequence  *, AnimRefVector_t &); /* linkage=_ZNK21CAnimResourceSequence16GetAllAnimationsER23CUtlVectorFixedGrowableIiLm16EE */
	virtual bool GetAllSequences(const class CAnimResourceSequence  *, class CUtlVector<HSequence, CUtlMemory<HSequence, int> > &); /* linkage=_ZNK21CAnimResourceSequence15GetAllSequencesER10CUtlVectorI9HSequence10CUtlMemoryIS1_iEE */
	virtual int NumActivities(const class CAnimResourceSequence  *); /* linkage=_ZNK21CAnimResourceSequence13NumActivitiesEv */
	/* <d2e7e2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2015 */
	virtual const char  * GetActivityName(const class CAnimResourceSequence  *, int); /* linkage=_ZNK21CAnimResourceSequence15GetActivityNameEi */
	/* <d2c7ff> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2026 */
	virtual float GetActivityWeight(const class CAnimResourceSequence  *, int); /* linkage=_ZNK21CAnimResourceSequence17GetActivityWeightEi */
	/* <d2c31c> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2037 */
	virtual Activity GetActivityType(const class CAnimResourceSequence  *, int); /* linkage=_ZNK21CAnimResourceSequence15GetActivityTypeEi */
	virtual void SetActivityType(const class CAnimResourceSequence  *, Activity); /* linkage=_ZNK21CAnimResourceSequence15SetActivityTypeEi */
	/* <d2becd> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2053 */
	virtual void SetActivityType(const class CAnimResourceSequence  *, int, Activity); /* linkage=_ZNK21CAnimResourceSequence15SetActivityTypeEii */
	virtual int NumPoseParameters(const class CAnimResourceSequence  *); /* linkage=_ZNK21CAnimResourceSequence17NumPoseParametersEv */
	virtual int GetPoseParameter(const class CAnimResourceSequence  *, int); /* linkage=_ZNK21CAnimResourceSequence16GetPoseParameterEi */
	/* <d3c6a1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2069 */
	virtual void DoAnimation(const class CAnimResourceSequence  *, class CAnimationBucket &, float, float); /* linkage=_ZNK21CAnimResourceSequence11DoAnimationER16CAnimationBucketff */
	virtual int GetNodeFlags(const class CAnimResourceSequence  *); /* linkage=_ZNK21CAnimResourceSequence12GetNodeFlagsEv */
	virtual bool IsFlagSet(const class CAnimResourceSequence  *, int); /* linkage=_ZNK21CAnimResourceSequence9IsFlagSetEi */
	virtual void SetFlag(const class CAnimResourceSequence  *, int); /* linkage=_ZNK21CAnimResourceSequence7SetFlagEi */
	virtual void ClearFlag(const class CAnimResourceSequence  *, int); /* linkage=_ZNK21CAnimResourceSequence9ClearFlagEi */
	virtual class HSequence GetNextSequence(const class CAnimResourceSequence  *, class HSequence, int *); /* linkage=_ZNK21CAnimResourceSequence15GetNextSequenceE9HSequencePi */
	/* <d273a5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2153 */
	virtual float GetFadeInTime(const class CAnimResourceSequence  *); /* linkage=_ZNK21CAnimResourceSequence13GetFadeInTimeEv */
	/* <d273cf> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2158 */
	virtual float GetFadeOutTime(const class CAnimResourceSequence  *); /* linkage=_ZNK21CAnimResourceSequence14GetFadeOutTimeEv */
	virtual int EntryNode(const class CAnimResourceSequence  *); /* linkage=_ZNK21CAnimResourceSequence9EntryNodeEv */
	virtual int ExitNode(const class CAnimResourceSequence  *); /* linkage=_ZNK21CAnimResourceSequence8ExitNodeEv */
	virtual void SetEntryNode(class CAnimResourceSequence *, int); /* linkage=_ZN21CAnimResourceSequence12SetEntryNodeEi */
	virtual void SetExitNode(class CAnimResourceSequence *, int); /* linkage=_ZN21CAnimResourceSequence11SetExitNodeEi */
	virtual void BuildBlendlist(const class CAnimResourceSequence  *, class CAnimationBlendList *, const float  *); /* linkage=_ZNK21CAnimResourceSequence14BuildBlendlistEP19CAnimationBlendListPKf */
	virtual bool GetAssetInfo(const class CAnimResourceSequence  *, class CSequenceAssetInfo &); /* linkage=_ZNK21CAnimResourceSequence12GetAssetInfoER18CSequenceAssetInfo */
	virtual int MaxFrame(const class CAnimResourceSequence  *, const float  *); /* linkage=_ZNK21CAnimResourceSequence8MaxFrameEPKf */
	virtual float FPS(const class CAnimResourceSequence  *, const float  *); /* linkage=_ZNK21CAnimResourceSequence3FPSEPKf */
	virtual float CPS(const class CAnimResourceSequence  *, const float  *); /* linkage=_ZNK21CAnimResourceSequence3CPSEPKf */
	virtual float Duration(const class CAnimResourceSequence  *, const float  *); /* linkage=_ZNK21CAnimResourceSequence8DurationEPKf */
	virtual float TotalMovementAndDuration(const class CAnimResourceSequence  *, const float  *, class Vector &); /* linkage=_ZNK21CAnimResourceSequence24TotalMovementAndDurationEPKfR6Vector */
	/* <d2ba4e> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2090 */
	virtual const class CAnimDesc  * pMyAnimDesc(const class CAnimResourceSequence  *); /* linkage=_ZNK21CAnimResourceSequence11pMyAnimDescEv */
};

// <00C918CF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:232
// variable: 1
// function calls: 13
void CAnimResourceSequence::~CAnimResourceSequence()
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
	CHelperSequence::~CHelperSequence(); // 232
} /* size: 169, inline expansions: 8 (651 bytes) */

// <00C914C6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:232
// variable: 1
// function calls: 20
void CAnimResourceSequence::~CAnimResourceSequence()
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
	CHelperSequence::~CHelperSequence(); // 232
	CAnimResourceSequence::~CAnimResourceSequence(); // 232
} /* size: 166, inline expansions: 15 (736 bytes) */

// <00C914AD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:232
inline void CAnimResourceSequence::~CAnimResourceSequence()
{
} /* size: 0 */

// <00CE3AA1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:242
void CAnimResourceSequence::IsAnimation()
{
} /* size: 10 */

// <00CE3A73> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:243
void CAnimResourceSequence::IsFrameCacheable()
{
} /* size: 10 */

// <00C90FA2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:311
// variable: 1
// function calls: 14
void CModelDocAnimResourceSeqBase::~CModelDocAnimResourceSeqBase()
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
	CHelperSequence::~CHelperSequence(); // 232
	CAnimResourceSequence::~CAnimResourceSequence(); // 311
} /* size: 0, inline expansions: 9 (0 bytes) */

// <00C90B73> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:311
// variable: 1
// function calls: 21
void CModelDocAnimResourceSeqBase::~CModelDocAnimResourceSeqBase()
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
	CHelperSequence::~CHelperSequence(); // 232
	CAnimResourceSequence::~CAnimResourceSequence(); // 311
	CModelDocAnimResourceSeqBase::~CModelDocAnimResourceSeqBase(); // 311
} /* size: 0, inline expansions: 16 (0 bytes) */

// <00C90B56> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:311
inline void CModelDocAnimResourceSeqBase::~CModelDocAnimResourceSeqBase()
{
} /* size: 0 */

// <00C0504F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:311
// member functions: 14
// member variables: 3
// vtable entries: 3
// class size: 136
class CModelDocAnimResourceSeqBase : public CAnimResourceSequence {
public:
	/* class CAnimResourceSequence <ancestor>; */ /* 0 120 */
	void CModelDocAnimResourceSeqBase(CModelDocAnimResourceSeqBase* , CModelDocAnimResourceSeqBase& );
	void CModelDocAnimResourceSeqBase(CModelDocAnimResourceSeqBase* , const CModelDocAnimResourceSeqBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:314 */
	virtual bool IsModelDoc(const CModelDocAnimResourceSeqBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2242 */
	virtual int GetFootMotionCount(const CModelDocAnimResourceSeqBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2250 */
	virtual const CFootMotion* GetFootMotion(const CModelDocAnimResourceSeqBase* , int);
protected:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2229 */
	void CModelDocAnimResourceSeqBase(CModelDocAnimResourceSeqBase* , const CAnimContainer* , HSequence, int, const CSeqS1SeqDesc* );
private:
	const class CFootMotion * m_pFootMotion; /* 120 8 */
	int m_nFootMotionCount; /* 128 4 */
	virtual void ~CModelDocAnimResourceSeqBase(CModelDocAnimResourceSeqBase* );
	void CModelDocAnimResourceSeqBase(class CModelDocAnimResourceSeqBase *, class CModelDocAnimResourceSeqBase &); /* linkage=_ZN28CModelDocAnimResourceSeqBaseC4EOS_ */
	void CModelDocAnimResourceSeqBase(class CModelDocAnimResourceSeqBase *, const class CModelDocAnimResourceSeqBase  &); /* linkage=_ZN28CModelDocAnimResourceSeqBaseC4ERKS_ */
	virtual bool IsModelDoc(const class CModelDocAnimResourceSeqBase  *); /* linkage=_ZNK28CModelDocAnimResourceSeqBase10IsModelDocEv */
	virtual int GetFootMotionCount(const class CModelDocAnimResourceSeqBase  *); /* linkage=_ZNK28CModelDocAnimResourceSeqBase18GetFootMotionCountEv */
	virtual const class CFootMotion  * GetFootMotion(const class CModelDocAnimResourceSeqBase  *, int); /* linkage=_ZNK28CModelDocAnimResourceSeqBase13GetFootMotionEi */
	void CModelDocAnimResourceSeqBase(class CModelDocAnimResourceSeqBase *, const class CAnimContainer  *, class HSequence, int, const class CSeqS1SeqDesc  *); /* linkage=_ZN28CModelDocAnimResourceSeqBaseC4EPK14CAnimContainer9HSequenceiPK13CSeqS1SeqDesc */
	virtual void ~CModelDocAnimResourceSeqBase(class CModelDocAnimResourceSeqBase *); /* linkage=_ZN28CModelDocAnimResourceSeqBaseD4Ev */
};

// <00CE3A45> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:314
void CModelDocAnimResourceSeqBase::IsModelDoc()
{
} /* size: 10 */

// <00C2227F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:331
// variable: 1
// function calls: 15
void CModelDocAnimResourceSeq::~CModelDocAnimResourceSeq()
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
	CHelperSequence::~CHelperSequence(); // 232
	CAnimResourceSequence::~CAnimResourceSequence(); // 311
	CModelDocAnimResourceSeqBase::~CModelDocAnimResourceSeqBase(); // 331
} /* size: 169, inline expansions: 10 (919 bytes) */

// <00C21E2B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:331
// variable: 1
// function calls: 22
void CModelDocAnimResourceSeq::~CModelDocAnimResourceSeq()
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
	CHelperSequence::~CHelperSequence(); // 232
	CAnimResourceSequence::~CAnimResourceSequence(); // 311
	CModelDocAnimResourceSeqBase::~CModelDocAnimResourceSeqBase(); // 331
	CModelDocAnimResourceSeq::~CModelDocAnimResourceSeq(); // 331
} /* size: 166, inline expansions: 17 (990 bytes) */

// <00C21E0E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:331
inline void CModelDocAnimResourceSeq::~CModelDocAnimResourceSeq()
{
} /* size: 0 */

// <00C05E25> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:331
// member functions: 10
// member variable: 1
// vtable entry: 1
// class size: 136
class CModelDocAnimResourceSeq : public CModelDocAnimResourceSeqBase {
public:
	/* class CModelDocAnimResourceSeqBase <ancestor>; */ /* 0 136 */
	void CModelDocAnimResourceSeq(CModelDocAnimResourceSeq* , CModelDocAnimResourceSeq& );
	void CModelDocAnimResourceSeq(CModelDocAnimResourceSeq* , const CModelDocAnimResourceSeq& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2265 */
	void CModelDocAnimResourceSeq(CModelDocAnimResourceSeq* , const CAnimContainer* , HSequence, int, const CSeqS1SeqDesc* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2272 */
	virtual void DoAnimation(const CModelDocAnimResourceSeq* , CAnimationBucket& , float, float);
	virtual void ~CModelDocAnimResourceSeq(CModelDocAnimResourceSeq* );
	void CModelDocAnimResourceSeq(class CModelDocAnimResourceSeq *, class CModelDocAnimResourceSeq &); /* linkage=_ZN24CModelDocAnimResourceSeqC4EOS_ */
	void CModelDocAnimResourceSeq(class CModelDocAnimResourceSeq *, const class CModelDocAnimResourceSeq  &); /* linkage=_ZN24CModelDocAnimResourceSeqC4ERKS_ */
	void CModelDocAnimResourceSeq(class CModelDocAnimResourceSeq *, const class CAnimContainer  *, class HSequence, int, const class CSeqS1SeqDesc  *); /* linkage=_ZN24CModelDocAnimResourceSeqC4EPK14CAnimContainer9HSequenceiPK13CSeqS1SeqDesc */
	/* <d3c840> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2272 */
	virtual void DoAnimation(const class CModelDocAnimResourceSeq  *, class CAnimationBucket &, float, float); /* linkage=_ZNK24CModelDocAnimResourceSeq11DoAnimationER16CAnimationBucketff */
	virtual void ~CModelDocAnimResourceSeq(class CModelDocAnimResourceSeq *); /* linkage=_ZN24CModelDocAnimResourceSeqD4Ev */
};

// <00C229D8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:343
// variable: 1
// function calls: 15
void CModelDocAnimResourceSeqDelta::~CModelDocAnimResourceSeqDelta()
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
	CHelperSequence::~CHelperSequence(); // 232
	CAnimResourceSequence::~CAnimResourceSequence(); // 311
	CModelDocAnimResourceSeqBase::~CModelDocAnimResourceSeqBase(); // 343
} /* size: 169, inline expansions: 10 (919 bytes) */

// <00C22584> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:343
// variable: 1
// function calls: 22
void CModelDocAnimResourceSeqDelta::~CModelDocAnimResourceSeqDelta()
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
	CHelperSequence::~CHelperSequence(); // 232
	CAnimResourceSequence::~CAnimResourceSequence(); // 311
	CModelDocAnimResourceSeqBase::~CModelDocAnimResourceSeqBase(); // 343
	CModelDocAnimResourceSeqDelta::~CModelDocAnimResourceSeqDelta(); // 343
} /* size: 166, inline expansions: 17 (990 bytes) */

// <00C22567> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:343
inline void CModelDocAnimResourceSeqDelta::~CModelDocAnimResourceSeqDelta()
{
} /* size: 0 */

// <00C05D1E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:343
// member functions: 10
// member variable: 1
// vtable entry: 1
// class size: 136
class CModelDocAnimResourceSeqDelta : public CModelDocAnimResourceSeqBase {
public:
	/* class CModelDocAnimResourceSeqBase <ancestor>; */ /* 0 136 */
	void CModelDocAnimResourceSeqDelta(CModelDocAnimResourceSeqDelta* , CModelDocAnimResourceSeqDelta& );
	void CModelDocAnimResourceSeqDelta(CModelDocAnimResourceSeqDelta* , const CModelDocAnimResourceSeqDelta& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2288 */
	void CModelDocAnimResourceSeqDelta(CModelDocAnimResourceSeqDelta* , const CAnimContainer* , HSequence, int, const CSeqS1SeqDesc* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2295 */
	virtual void DoAnimation(const CModelDocAnimResourceSeqDelta* , CAnimationBucket& , float, float);
	virtual void ~CModelDocAnimResourceSeqDelta(CModelDocAnimResourceSeqDelta* );
	void CModelDocAnimResourceSeqDelta(class CModelDocAnimResourceSeqDelta *, class CModelDocAnimResourceSeqDelta &); /* linkage=_ZN29CModelDocAnimResourceSeqDeltaC4EOS_ */
	void CModelDocAnimResourceSeqDelta(class CModelDocAnimResourceSeqDelta *, const class CModelDocAnimResourceSeqDelta  &); /* linkage=_ZN29CModelDocAnimResourceSeqDeltaC4ERKS_ */
	void CModelDocAnimResourceSeqDelta(class CModelDocAnimResourceSeqDelta *, const class CAnimContainer  *, class HSequence, int, const class CSeqS1SeqDesc  *); /* linkage=_ZN29CModelDocAnimResourceSeqDeltaC4EPK14CAnimContainer9HSequenceiPK13CSeqS1SeqDesc */
	virtual void DoAnimation(const class CModelDocAnimResourceSeqDelta  *, class CAnimationBucket &, float, float); /* linkage=_ZNK29CModelDocAnimResourceSeqDelta11DoAnimationER16CAnimationBucketff */
	virtual void ~CModelDocAnimResourceSeqDelta(class CModelDocAnimResourceSeqDelta *); /* linkage=_ZN29CModelDocAnimResourceSeqDeltaD4Ev */
};

// <00C23131> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:355
// variable: 1
// function calls: 15
void CModelDocAnimResourceSeqWorldSpace::~CModelDocAnimResourceSeqWorldSpace()
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
	CHelperSequence::~CHelperSequence(); // 232
	CAnimResourceSequence::~CAnimResourceSequence(); // 311
	CModelDocAnimResourceSeqBase::~CModelDocAnimResourceSeqBase(); // 355
} /* size: 169, inline expansions: 10 (919 bytes) */

// <00C22CDD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:355
// variable: 1
// function calls: 22
void CModelDocAnimResourceSeqWorldSpace::~CModelDocAnimResourceSeqWorldSpace()
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
	CHelperSequence::~CHelperSequence(); // 232
	CAnimResourceSequence::~CAnimResourceSequence(); // 311
	CModelDocAnimResourceSeqBase::~CModelDocAnimResourceSeqBase(); // 355
	CModelDocAnimResourceSeqWorldSpace::~CModelDocAnimResourceSeqWorldSpace(); // 355
} /* size: 166, inline expansions: 17 (990 bytes) */

// <00C22CC0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:355
inline void CModelDocAnimResourceSeqWorldSpace::~CModelDocAnimResourceSeqWorldSpace()
{
} /* size: 0 */

// <00C04F6A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.h:355
// member functions: 10
// member variable: 1
// vtable entry: 1
// class size: 136
class CModelDocAnimResourceSeqWorldSpace : public CModelDocAnimResourceSeqBase {
public:
	/* class CModelDocAnimResourceSeqBase <ancestor>; */ /* 0 136 */
	void CModelDocAnimResourceSeqWorldSpace(CModelDocAnimResourceSeqWorldSpace* , CModelDocAnimResourceSeqWorldSpace& );
	void CModelDocAnimResourceSeqWorldSpace(CModelDocAnimResourceSeqWorldSpace* , const CModelDocAnimResourceSeqWorldSpace& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2304 */
	void CModelDocAnimResourceSeqWorldSpace(CModelDocAnimResourceSeqWorldSpace* , const CAnimContainer* , HSequence, int, const CSeqS1SeqDesc* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequence_imp.cpp:2311 */
	virtual void DoAnimation(const CModelDocAnimResourceSeqWorldSpace* , CAnimationBucket& , float, float);
	virtual void ~CModelDocAnimResourceSeqWorldSpace(CModelDocAnimResourceSeqWorldSpace* );
	void CModelDocAnimResourceSeqWorldSpace(class CModelDocAnimResourceSeqWorldSpace *, class CModelDocAnimResourceSeqWorldSpace &); /* linkage=_ZN34CModelDocAnimResourceSeqWorldSpaceC4EOS_ */
	void CModelDocAnimResourceSeqWorldSpace(class CModelDocAnimResourceSeqWorldSpace *, const class CModelDocAnimResourceSeqWorldSpace  &); /* linkage=_ZN34CModelDocAnimResourceSeqWorldSpaceC4ERKS_ */
	void CModelDocAnimResourceSeqWorldSpace(class CModelDocAnimResourceSeqWorldSpace *, const class CAnimContainer  *, class HSequence, int, const class CSeqS1SeqDesc  *); /* linkage=_ZN34CModelDocAnimResourceSeqWorldSpaceC4EPK14CAnimContainer9HSequenceiPK13CSeqS1SeqDesc */
	virtual void DoAnimation(const class CModelDocAnimResourceSeqWorldSpace  *, class CAnimationBucket &, float, float); /* linkage=_ZNK34CModelDocAnimResourceSeqWorldSpace11DoAnimationER16CAnimationBucketff */
	virtual void ~CModelDocAnimResourceSeqWorldSpace(class CModelDocAnimResourceSeqWorldSpace *); /* linkage=_ZN34CModelDocAnimResourceSeqWorldSpaceD4Ev */
};

