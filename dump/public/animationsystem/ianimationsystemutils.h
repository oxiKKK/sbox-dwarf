
//
// public/animationsystem/ianimationsystemutils.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 8
//	classes: 3
//	structs: 2
//

// <0010FA52> ../public/animationsystem/ianimationsystemutils.h:23
// member functions: 2
// member variables: 3
// struct size: 24
struct PhysicsBonesOverlay_t {
	/* ../public/animationsystem/ianimationsystemutils.h:25 */
	void PhysicsBonesOverlay_t(PhysicsBonesOverlay_t* );
	uint nBoneCount; /* 0 4 */
	uint16 * pModelBoneIndices; /* 8 8 */
	CTransform * pModelBonesWorld; /* 16 8 */
	/* ../public/animationsystem/ianimationsystemutils.h:31 */
	int Contains(const PhysicsBonesOverlay_t* , int);
};

// <0133D534> ../public/animationsystem/ianimationsystemutils.h:25
void PhysicsBonesOverlay_t::PhysicsBonesOverlay_t()
{
} /* size: 0 */

// <0133D51B> ../public/animationsystem/ianimationsystemutils.h:25
inline void PhysicsBonesOverlay_t::PhysicsBonesOverlay_t()
{
} /* size: 0 */

// <0010FAE5> ../public/animationsystem/ianimationsystemutils.h:45
// member functions: 2
// member variables: 3
// struct size: 24
struct BoneMergeOverlay_t {
	/* ../public/animationsystem/ianimationsystemutils.h:47 */
	void BoneMergeOverlay_t(BoneMergeOverlay_t* );
	/* ../public/animationsystem/ianimationsystemutils.h:48 */
	void BoneMergeOverlay_t(BoneMergeOverlay_t* , int, const bone_merge_list_t* , const CTransform* );
	int m_nBoneMergeCount; /* 0 4 */
	const class bone_merge_list_t * m_pBoneMerge; /* 8 8 */
	const class CTransform * m_pWorldSpaceMasterTransforms; /* 16 8 */
};

// <00CF0BB2> ../public/animationsystem/ianimationsystemutils.h:82
void IAnimationHelper::IAnimationHelper()
{
} /* size: 0 */

// <00CF0B96> ../public/animationsystem/ianimationsystemutils.h:82
inline void IAnimationHelper::IAnimationHelper()
{
} /* size: 0 */

// <00123973> ../public/animationsystem/ianimationsystemutils.h:82
// member functions: 68
// member variable: 1
// vtable entries: 32
// class size: 8
class IAnimationHelper {
	int ()(void) * * _vptr.IAnimationHelper; /* 0 8 */
	/* ../public/animationsystem/ianimationsystemutils.h:85 */
	virtual void SetModel(IAnimationHelper* , HModel);
	/* ../public/animationsystem/ianimationsystemutils.h:86 */
	virtual HModel GetModel(const IAnimationHelper* );
	/* ../public/animationsystem/ianimationsystemutils.h:88 */
	virtual void SetModelContext(IAnimationHelper* , void* );
	/* ../public/animationsystem/ianimationsystemutils.h:90 */
	virtual int GetPoseParameterCount(const IAnimationHelper* );
	/* ../public/animationsystem/ianimationsystemutils.h:91 */
	virtual float* GetPoseParameters(IAnimationHelper* );
	/* ../public/animationsystem/ianimationsystemutils.h:93 */
	virtual int GetSequenceCount(const IAnimationHelper* );
	/* ../public/animationsystem/ianimationsystemutils.h:94 */
	virtual void SetSequence(IAnimationHelper* , HSequence);
	/* ../public/animationsystem/ianimationsystemutils.h:95 */
	virtual void SetSequence(IAnimationHelper* , int, HSequence, float);
	/* ../public/animationsystem/ianimationsystemutils.h:96 */
	virtual void SetSequences(IAnimationHelper* , int, CAnimationDecodeOp* );
	/* ../public/animationsystem/ianimationsystemutils.h:97 */
	virtual CAnimationDecodeOp& GetSequence(IAnimationHelper* , int);
	/* ../public/animationsystem/ianimationsystemutils.h:99 */
	virtual void SetSequenceMovementType(IAnimationHelper* , SequenceMovementType_t);
	/* ../public/animationsystem/ianimationsystemutils.h:100 */
	virtual SequenceMovementType_t GetSequenceMovementType(const IAnimationHelper* );
	/* ../public/animationsystem/ianimationsystemutils.h:102 */
	virtual void SetAutoplayEnabled(IAnimationHelper* , bool);
	/* ../public/animationsystem/ianimationsystemutils.h:103 */
	virtual bool GetAutoplayEnabled(const IAnimationHelper* );
	/* ../public/animationsystem/ianimationsystemutils.h:105 */
	virtual void JumpToFrame(IAnimationHelper* , int, float);
	/* ../public/animationsystem/ianimationsystemutils.h:107 */
	virtual void Update(IAnimationHelper* , matrix3x4a_t& , float, const PhysicsBonesOverlay_t* , const BoneMergeOverlay_t* , int, AnimationEventOccurrences_t* , bool, CTransform* );
	/* ../public/animationsystem/ianimationsystemutils.h:111 */
	virtual CAnimationState& GetAnimationState(IAnimationHelper* );
	/* ../public/animationsystem/ianimationsystemutils.h:113 */
	virtual void SetBlendSequenceTransitions(IAnimationHelper* , bool);
	/* ../public/animationsystem/ianimationsystemutils.h:114 */
	virtual bool IsBlendingSequenceTransitions(const IAnimationHelper* );
	/* ../public/animationsystem/ianimationsystemutils.h:115 */
	virtual void ResetSequenceTransitioner(IAnimationHelper* );
	/* ../public/animationsystem/ianimationsystemutils.h:117 */
	virtual const IAnimationGraphInstancePtr& GetAnimationGraphInstance(const IAnimationHelper* );
	/* ../public/animationsystem/ianimationsystemutils.h:118 */
	virtual IAnimationGraphInstancePtr& GetAnimationGraphInstanceForModify(IAnimationHelper* );
	/* ../public/animationsystem/ianimationsystemutils.h:119 */
	virtual void SetAnimationGraphInstance(IAnimationHelper* , const IAnimationGraphInstancePtr& );
	/* ../public/animationsystem/ianimationsystemutils.h:121 */
	virtual void AddSequenceFinishedCallback(IAnimationHelper* , IAnimationHelperSequenceFinishedCallback* );
	/* ../public/animationsystem/ianimationsystemutils.h:122 */
	virtual void RemoveSequenceFinisheCallback(IAnimationHelper* , IAnimationHelperSequenceFinishedCallback* );
	/* ../public/animationsystem/ianimationsystemutils.h:124 */
	virtual void RestartAnimations(IAnimationHelper* );
	/* ../public/animationsystem/ianimationsystemutils.h:126 */
	virtual void ResetTransformsToBindPose(IAnimationHelper* );
	/* ../public/animationsystem/ianimationsystemutils.h:128 */
	virtual const matrix3x4_t& GetAnimGraphLocalToWorldMatrix(const IAnimationHelper* );
	/* ../public/animationsystem/ianimationsystemutils.h:129 */
	virtual void SetAnimGraphLocalToWorldMatrix(IAnimationHelper* , const matrix3x4_t& );
	/* ../public/animationsystem/ianimationsystemutils.h:132 */
	virtual void SetLoopBehavior(IAnimationHelper* , AnimationHelperLoopBehavior_t);
	/* ../public/animationsystem/ianimationsystemutils.h:133 */
	virtual AnimationHelperLoopBehavior_t GetLoopBehavior(const IAnimationHelper* );
	/* ../public/animationsystem/ianimationsystemutils.h:135 */
	virtual const CTransform& GetRootMotion(const IAnimationHelper* );
protected:
	/* ../public/animationsystem/ianimationsystemutils.h:139 */
	virtual void ~IAnimationHelper(IAnimationHelper* );
	void IAnimationHelper(class IAnimationHelper *, const class IAnimationHelper  &); /* linkage=_ZN16IAnimationHelperC4ERKS_ */
	void IAnimationHelper(class IAnimationHelper *); /* linkage=_ZN16IAnimationHelperC4Ev */
	virtual void SetModel(class IAnimationHelper *, HModel); /* linkage=_ZN16IAnimationHelper8SetModelE11CWeakHandleI25InfoForResourceTypeCModelE */
	virtual HModel GetModel(const class IAnimationHelper  *); /* linkage=_ZNK16IAnimationHelper8GetModelEv */
	virtual void SetModelContext(class IAnimationHelper *, void *); /* linkage=_ZN16IAnimationHelper15SetModelContextEPv */
	virtual int GetPoseParameterCount(const class IAnimationHelper  *); /* linkage=_ZNK16IAnimationHelper21GetPoseParameterCountEv */
	virtual float * GetPoseParameters(class IAnimationHelper *); /* linkage=_ZN16IAnimationHelper17GetPoseParametersEv */
	virtual int GetSequenceCount(const class IAnimationHelper  *); /* linkage=_ZNK16IAnimationHelper16GetSequenceCountEv */
	virtual void SetSequence(class IAnimationHelper *, class HSequence); /* linkage=_ZN16IAnimationHelper11SetSequenceE9HSequence */
	virtual void SetSequence(class IAnimationHelper *, int, class HSequence, float); /* linkage=_ZN16IAnimationHelper11SetSequenceEi9HSequencef */
	virtual void SetSequences(class IAnimationHelper *, int, class CAnimationDecodeOp *); /* linkage=_ZN16IAnimationHelper12SetSequencesEiP18CAnimationDecodeOp */
	virtual class CAnimationDecodeOp & GetSequence(class IAnimationHelper *, int); /* linkage=_ZN16IAnimationHelper11GetSequenceEi */
	virtual void SetSequenceMovementType(class IAnimationHelper *, enum SequenceMovementType_t); /* linkage=_ZN16IAnimationHelper23SetSequenceMovementTypeE22SequenceMovementType_t */
	virtual enum SequenceMovementType_t GetSequenceMovementType(const class IAnimationHelper  *); /* linkage=_ZNK16IAnimationHelper23GetSequenceMovementTypeEv */
	virtual void SetAutoplayEnabled(class IAnimationHelper *, bool); /* linkage=_ZN16IAnimationHelper18SetAutoplayEnabledEb */
	virtual bool GetAutoplayEnabled(const class IAnimationHelper  *); /* linkage=_ZNK16IAnimationHelper18GetAutoplayEnabledEv */
	virtual void JumpToFrame(class IAnimationHelper *, int, float); /* linkage=_ZN16IAnimationHelper11JumpToFrameEif */
	virtual void Update(class IAnimationHelper *, class matrix3x4a_t &, float, const class PhysicsBonesOverlay_t  *, const class BoneMergeOverlay_t  *, int, class AnimationEventOccurrences_t *, bool, class CTransform *); /* linkage=_ZN16IAnimationHelper6UpdateER12matrix3x4a_tfPK21PhysicsBonesOverlay_tPK18BoneMergeOverlay_tiP27AnimationEventOccurrences_tbP10CTransform */
	virtual class CAnimationState & GetAnimationState(class IAnimationHelper *); /* linkage=_ZN16IAnimationHelper17GetAnimationStateEv */
	virtual void SetBlendSequenceTransitions(class IAnimationHelper *, bool); /* linkage=_ZN16IAnimationHelper27SetBlendSequenceTransitionsEb */
	virtual bool IsBlendingSequenceTransitions(const class IAnimationHelper  *); /* linkage=_ZNK16IAnimationHelper29IsBlendingSequenceTransitionsEv */
	virtual void ResetSequenceTransitioner(class IAnimationHelper *); /* linkage=_ZN16IAnimationHelper25ResetSequenceTransitionerEv */
	virtual const IAnimationGraphInstancePtr  & GetAnimationGraphInstance(const class IAnimationHelper  *); /* linkage=_ZNK16IAnimationHelper25GetAnimationGraphInstanceEv */
	virtual IAnimationGraphInstancePtr & GetAnimationGraphInstanceForModify(class IAnimationHelper *); /* linkage=_ZN16IAnimationHelper34GetAnimationGraphInstanceForModifyEv */
	virtual void SetAnimationGraphInstance(class IAnimationHelper *, const IAnimationGraphInstancePtr  &); /* linkage=_ZN16IAnimationHelper25SetAnimationGraphInstanceERK9CSmartPtrI23IAnimationGraphInstance17CRefCountAccessorE */
	virtual void AddSequenceFinishedCallback(class IAnimationHelper *, class IAnimationHelperSequenceFinishedCallback *); /* linkage=_ZN16IAnimationHelper27AddSequenceFinishedCallbackEP40IAnimationHelperSequenceFinishedCallback */
	virtual void RemoveSequenceFinisheCallback(class IAnimationHelper *, class IAnimationHelperSequenceFinishedCallback *); /* linkage=_ZN16IAnimationHelper29RemoveSequenceFinisheCallbackEP40IAnimationHelperSequenceFinishedCallback */
	virtual void RestartAnimations(class IAnimationHelper *); /* linkage=_ZN16IAnimationHelper17RestartAnimationsEv */
	virtual void ResetTransformsToBindPose(class IAnimationHelper *); /* linkage=_ZN16IAnimationHelper25ResetTransformsToBindPoseEv */
	virtual const class matrix3x4_t  & GetAnimGraphLocalToWorldMatrix(const class IAnimationHelper  *); /* linkage=_ZNK16IAnimationHelper30GetAnimGraphLocalToWorldMatrixEv */
	virtual void SetAnimGraphLocalToWorldMatrix(class IAnimationHelper *, const class matrix3x4_t  &); /* linkage=_ZN16IAnimationHelper30SetAnimGraphLocalToWorldMatrixERK11matrix3x4_t */
	virtual void SetLoopBehavior(class IAnimationHelper *, enum AnimationHelperLoopBehavior_t); /* linkage=_ZN16IAnimationHelper15SetLoopBehaviorE29AnimationHelperLoopBehavior_t */
	virtual enum AnimationHelperLoopBehavior_t GetLoopBehavior(const class IAnimationHelper  *); /* linkage=_ZNK16IAnimationHelper15GetLoopBehaviorEv */
	virtual const class CTransform  & GetRootMotion(const class IAnimationHelper  *); /* linkage=_ZNK16IAnimationHelper13GetRootMotionEv */
	virtual void ~IAnimationHelper(class IAnimationHelper *); /* linkage=_ZN16IAnimationHelperD4Ev */
};

// <00C099FE> ../public/animationsystem/ianimationsystemutils.h:82
// member functions: 70
// member variable: 1
// vtable entries: 32
// class size: 8
class IAnimationHelper {
	void IAnimationHelper(IAnimationHelper* , const IAnimationHelper& );
	void IAnimationHelper(IAnimationHelper* );
	int ()(void) * * _vptr.IAnimationHelper; /* 0 8 */
	/* ../public/animationsystem/ianimationsystemutils.h:85 */
	virtual void SetModel(IAnimationHelper* , HModel);
	/* ../public/animationsystem/ianimationsystemutils.h:86 */
	virtual HModel GetModel(const IAnimationHelper* );
	/* ../public/animationsystem/ianimationsystemutils.h:88 */
	virtual void SetModelContext(IAnimationHelper* , void* );
	/* ../public/animationsystem/ianimationsystemutils.h:90 */
	virtual int GetPoseParameterCount(const IAnimationHelper* );
	/* ../public/animationsystem/ianimationsystemutils.h:91 */
	virtual float* GetPoseParameters(IAnimationHelper* );
	/* ../public/animationsystem/ianimationsystemutils.h:93 */
	virtual int GetSequenceCount(const IAnimationHelper* );
	/* ../public/animationsystem/ianimationsystemutils.h:94 */
	virtual void SetSequence(IAnimationHelper* , HSequence);
	/* ../public/animationsystem/ianimationsystemutils.h:95 */
	virtual void SetSequence(IAnimationHelper* , int, HSequence, float);
	/* ../public/animationsystem/ianimationsystemutils.h:96 */
	virtual void SetSequences(IAnimationHelper* , int, CAnimationDecodeOp* );
	/* ../public/animationsystem/ianimationsystemutils.h:97 */
	virtual CAnimationDecodeOp& GetSequence(IAnimationHelper* , int);
	/* ../public/animationsystem/ianimationsystemutils.h:99 */
	virtual void SetSequenceMovementType(IAnimationHelper* , SequenceMovementType_t);
	/* ../public/animationsystem/ianimationsystemutils.h:100 */
	virtual SequenceMovementType_t GetSequenceMovementType(const IAnimationHelper* );
	/* ../public/animationsystem/ianimationsystemutils.h:102 */
	virtual void SetAutoplayEnabled(IAnimationHelper* , bool);
	/* ../public/animationsystem/ianimationsystemutils.h:103 */
	virtual bool GetAutoplayEnabled(const IAnimationHelper* );
	/* ../public/animationsystem/ianimationsystemutils.h:105 */
	virtual void JumpToFrame(IAnimationHelper* , int, float);
	/* ../public/animationsystem/ianimationsystemutils.h:107 */
	virtual void Update(IAnimationHelper* , matrix3x4a_t& , float, const PhysicsBonesOverlay_t* , const BoneMergeOverlay_t* , int, AnimationEventOccurrences_t* , bool, CTransform* );
	/* ../public/animationsystem/ianimationsystemutils.h:111 */
	virtual CAnimationState& GetAnimationState(IAnimationHelper* );
	/* ../public/animationsystem/ianimationsystemutils.h:113 */
	virtual void SetBlendSequenceTransitions(IAnimationHelper* , bool);
	/* ../public/animationsystem/ianimationsystemutils.h:114 */
	virtual bool IsBlendingSequenceTransitions(const IAnimationHelper* );
	/* ../public/animationsystem/ianimationsystemutils.h:115 */
	virtual void ResetSequenceTransitioner(IAnimationHelper* );
	/* ../public/animationsystem/ianimationsystemutils.h:117 */
	virtual const IAnimationGraphInstancePtr& GetAnimationGraphInstance(const IAnimationHelper* );
	/* ../public/animationsystem/ianimationsystemutils.h:118 */
	virtual IAnimationGraphInstancePtr& GetAnimationGraphInstanceForModify(IAnimationHelper* );
	/* ../public/animationsystem/ianimationsystemutils.h:119 */
	virtual void SetAnimationGraphInstance(IAnimationHelper* , const IAnimationGraphInstancePtr& );
	/* ../public/animationsystem/ianimationsystemutils.h:121 */
	virtual void AddSequenceFinishedCallback(IAnimationHelper* , IAnimationHelperSequenceFinishedCallback* );
	/* ../public/animationsystem/ianimationsystemutils.h:122 */
	virtual void RemoveSequenceFinisheCallback(IAnimationHelper* , IAnimationHelperSequenceFinishedCallback* );
	/* ../public/animationsystem/ianimationsystemutils.h:124 */
	virtual void RestartAnimations(IAnimationHelper* );
	/* ../public/animationsystem/ianimationsystemutils.h:126 */
	virtual void ResetTransformsToBindPose(IAnimationHelper* );
	/* ../public/animationsystem/ianimationsystemutils.h:128 */
	virtual const matrix3x4_t& GetAnimGraphLocalToWorldMatrix(const IAnimationHelper* );
	/* ../public/animationsystem/ianimationsystemutils.h:129 */
	virtual void SetAnimGraphLocalToWorldMatrix(IAnimationHelper* , const matrix3x4_t& );
	/* ../public/animationsystem/ianimationsystemutils.h:132 */
	virtual void SetLoopBehavior(IAnimationHelper* , AnimationHelperLoopBehavior_t);
	/* ../public/animationsystem/ianimationsystemutils.h:133 */
	virtual AnimationHelperLoopBehavior_t GetLoopBehavior(const IAnimationHelper* );
	/* ../public/animationsystem/ianimationsystemutils.h:135 */
	virtual const CTransform& GetRootMotion(const IAnimationHelper* );
protected:
	/* ../public/animationsystem/ianimationsystemutils.h:139 */
	virtual void ~IAnimationHelper(IAnimationHelper* );
	void IAnimationHelper(class IAnimationHelper *, const class IAnimationHelper  &); /* linkage=_ZN16IAnimationHelperC4ERKS_ */
	void IAnimationHelper(class IAnimationHelper *); /* linkage=_ZN16IAnimationHelperC4Ev */
	virtual void SetModel(class IAnimationHelper *, HModel); /* linkage=_ZN16IAnimationHelper8SetModelE11CWeakHandleI25InfoForResourceTypeCModelE */
	virtual HModel GetModel(const class IAnimationHelper  *); /* linkage=_ZNK16IAnimationHelper8GetModelEv */
	virtual void SetModelContext(class IAnimationHelper *, void *); /* linkage=_ZN16IAnimationHelper15SetModelContextEPv */
	virtual int GetPoseParameterCount(const class IAnimationHelper  *); /* linkage=_ZNK16IAnimationHelper21GetPoseParameterCountEv */
	virtual float * GetPoseParameters(class IAnimationHelper *); /* linkage=_ZN16IAnimationHelper17GetPoseParametersEv */
	virtual int GetSequenceCount(const class IAnimationHelper  *); /* linkage=_ZNK16IAnimationHelper16GetSequenceCountEv */
	virtual void SetSequence(class IAnimationHelper *, class HSequence); /* linkage=_ZN16IAnimationHelper11SetSequenceE9HSequence */
	virtual void SetSequence(class IAnimationHelper *, int, class HSequence, float); /* linkage=_ZN16IAnimationHelper11SetSequenceEi9HSequencef */
	virtual void SetSequences(class IAnimationHelper *, int, class CAnimationDecodeOp *); /* linkage=_ZN16IAnimationHelper12SetSequencesEiP18CAnimationDecodeOp */
	virtual class CAnimationDecodeOp & GetSequence(class IAnimationHelper *, int); /* linkage=_ZN16IAnimationHelper11GetSequenceEi */
	virtual void SetSequenceMovementType(class IAnimationHelper *, enum SequenceMovementType_t); /* linkage=_ZN16IAnimationHelper23SetSequenceMovementTypeE22SequenceMovementType_t */
	virtual enum SequenceMovementType_t GetSequenceMovementType(const class IAnimationHelper  *); /* linkage=_ZNK16IAnimationHelper23GetSequenceMovementTypeEv */
	virtual void SetAutoplayEnabled(class IAnimationHelper *, bool); /* linkage=_ZN16IAnimationHelper18SetAutoplayEnabledEb */
	virtual bool GetAutoplayEnabled(const class IAnimationHelper  *); /* linkage=_ZNK16IAnimationHelper18GetAutoplayEnabledEv */
	virtual void JumpToFrame(class IAnimationHelper *, int, float); /* linkage=_ZN16IAnimationHelper11JumpToFrameEif */
	virtual void Update(class IAnimationHelper *, class matrix3x4a_t &, float, const class PhysicsBonesOverlay_t  *, const class BoneMergeOverlay_t  *, int, class AnimationEventOccurrences_t *, bool, class CTransform *); /* linkage=_ZN16IAnimationHelper6UpdateER12matrix3x4a_tfPK21PhysicsBonesOverlay_tPK18BoneMergeOverlay_tiP27AnimationEventOccurrences_tbP10CTransform */
	virtual class CAnimationState & GetAnimationState(class IAnimationHelper *); /* linkage=_ZN16IAnimationHelper17GetAnimationStateEv */
	virtual void SetBlendSequenceTransitions(class IAnimationHelper *, bool); /* linkage=_ZN16IAnimationHelper27SetBlendSequenceTransitionsEb */
	virtual bool IsBlendingSequenceTransitions(const class IAnimationHelper  *); /* linkage=_ZNK16IAnimationHelper29IsBlendingSequenceTransitionsEv */
	virtual void ResetSequenceTransitioner(class IAnimationHelper *); /* linkage=_ZN16IAnimationHelper25ResetSequenceTransitionerEv */
	virtual const IAnimationGraphInstancePtr  & GetAnimationGraphInstance(const class IAnimationHelper  *); /* linkage=_ZNK16IAnimationHelper25GetAnimationGraphInstanceEv */
	virtual IAnimationGraphInstancePtr & GetAnimationGraphInstanceForModify(class IAnimationHelper *); /* linkage=_ZN16IAnimationHelper34GetAnimationGraphInstanceForModifyEv */
	virtual void SetAnimationGraphInstance(class IAnimationHelper *, const IAnimationGraphInstancePtr  &); /* linkage=_ZN16IAnimationHelper25SetAnimationGraphInstanceERK9CSmartPtrI23IAnimationGraphInstance17CRefCountAccessorE */
	virtual void AddSequenceFinishedCallback(class IAnimationHelper *, class IAnimationHelperSequenceFinishedCallback *); /* linkage=_ZN16IAnimationHelper27AddSequenceFinishedCallbackEP40IAnimationHelperSequenceFinishedCallback */
	virtual void RemoveSequenceFinisheCallback(class IAnimationHelper *, class IAnimationHelperSequenceFinishedCallback *); /* linkage=_ZN16IAnimationHelper29RemoveSequenceFinisheCallbackEP40IAnimationHelperSequenceFinishedCallback */
	virtual void RestartAnimations(class IAnimationHelper *); /* linkage=_ZN16IAnimationHelper17RestartAnimationsEv */
	virtual void ResetTransformsToBindPose(class IAnimationHelper *); /* linkage=_ZN16IAnimationHelper25ResetTransformsToBindPoseEv */
	virtual const class matrix3x4_t  & GetAnimGraphLocalToWorldMatrix(const class IAnimationHelper  *); /* linkage=_ZNK16IAnimationHelper30GetAnimGraphLocalToWorldMatrixEv */
	virtual void SetAnimGraphLocalToWorldMatrix(class IAnimationHelper *, const class matrix3x4_t  &); /* linkage=_ZN16IAnimationHelper30SetAnimGraphLocalToWorldMatrixERK11matrix3x4_t */
	virtual void SetLoopBehavior(class IAnimationHelper *, enum AnimationHelperLoopBehavior_t); /* linkage=_ZN16IAnimationHelper15SetLoopBehaviorE29AnimationHelperLoopBehavior_t */
	virtual enum AnimationHelperLoopBehavior_t GetLoopBehavior(const class IAnimationHelper  *); /* linkage=_ZNK16IAnimationHelper15GetLoopBehaviorEv */
	virtual const class CTransform  & GetRootMotion(const class IAnimationHelper  *); /* linkage=_ZNK16IAnimationHelper13GetRootMotionEv */
	virtual void ~IAnimationHelper(class IAnimationHelper *); /* linkage=_ZN16IAnimationHelperD4Ev */
};

// <00D18ED4> ../public/animationsystem/ianimationsystemutils.h:139
void IAnimationHelper::~IAnimationHelper()
{
} /* size: 0 */

// <00D18EA4> ../public/animationsystem/ianimationsystemutils.h:139
inline void IAnimationHelper::~IAnimationHelper()
{
} /* size: 0 */

// <00CE98A8> ../public/animationsystem/ianimationsystemutils.h:147
void IAnimationSystemUtils::IAnimationSystemUtils()
{
} /* size: 0 */

// <00CE988C> ../public/animationsystem/ianimationsystemutils.h:147
inline void IAnimationSystemUtils::IAnimationSystemUtils()
{
} /* size: 0 */

// <00ADA1A9> ../public/animationsystem/ianimationsystemutils.h:147
// member functions: 18
// member variable: 1
// vtable entries: 5
// class size: 8
class IAnimationSystemUtils {
	void IAnimationSystemUtils(IAnimationSystemUtils* , IAnimationSystemUtils& );
	void IAnimationSystemUtils(IAnimationSystemUtils* , const IAnimationSystemUtils& );
	void IAnimationSystemUtils(IAnimationSystemUtils* );
	void ~IAnimationSystemUtils(IAnimationSystemUtils* );
	int ()(void) * * _vptr.IAnimationSystemUtils; /* 0 8 */
	/* ../public/animationsystem/ianimationsystemutils.h:150 */
	virtual IAnimationHelper* CreateAnimationHelper(IAnimationSystemUtils* , HModel, void* );
	/* ../public/animationsystem/ianimationsystemutils.h:151 */
	virtual void DestroyAnimationHelper(IAnimationSystemUtils* , IAnimationHelper* );
	/* ../public/animationsystem/ianimationsystemutils.h:153 */
	virtual void MaintainDecodeCaches(IAnimationSystemUtils* );
	/* ../public/animationsystem/ianimationsystemutils.h:154 */
	virtual CThreadLocalAnimationDecodeCache* GetThreadLocalDecodeCache(IAnimationSystemUtils* );
	/* ../public/animationsystem/ianimationsystemutils.h:155 */
	virtual void ReturnThreadLocalDecodeCache(IAnimationSystemUtils* , CThreadLocalAnimationDecodeCache* );
	void IAnimationSystemUtils(class IAnimationSystemUtils *, class IAnimationSystemUtils &); /* linkage=_ZN21IAnimationSystemUtilsC4EOS_ */
	void IAnimationSystemUtils(class IAnimationSystemUtils *, const class IAnimationSystemUtils  &); /* linkage=_ZN21IAnimationSystemUtilsC4ERKS_ */
	void IAnimationSystemUtils(class IAnimationSystemUtils *); /* linkage=_ZN21IAnimationSystemUtilsC4Ev */
	void ~IAnimationSystemUtils(class IAnimationSystemUtils *); /* linkage=_ZN21IAnimationSystemUtilsD4Ev */
	virtual class IAnimationHelper * CreateAnimationHelper(class IAnimationSystemUtils *, HModel, void *); /* linkage=_ZN21IAnimationSystemUtils21CreateAnimationHelperE11CWeakHandleI25InfoForResourceTypeCModelEPv */
	virtual void DestroyAnimationHelper(class IAnimationSystemUtils *, class IAnimationHelper *); /* linkage=_ZN21IAnimationSystemUtils22DestroyAnimationHelperEP16IAnimationHelper */
	virtual void MaintainDecodeCaches(class IAnimationSystemUtils *); /* linkage=_ZN21IAnimationSystemUtils20MaintainDecodeCachesEv */
	virtual class CThreadLocalAnimationDecodeCache * GetThreadLocalDecodeCache(class IAnimationSystemUtils *); /* linkage=_ZN21IAnimationSystemUtils25GetThreadLocalDecodeCacheEv */
	virtual void ReturnThreadLocalDecodeCache(class IAnimationSystemUtils *, class CThreadLocalAnimationDecodeCache *); /* linkage=_ZN21IAnimationSystemUtils28ReturnThreadLocalDecodeCacheEP32CThreadLocalAnimationDecodeCache */
};

