
//
// blendtreesequence.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 3
//	class: 1
//

// <00C08DA7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.h:15
// member functions: 56
// member variables: 6
// vtable entries: 25
// class size: 120
class CBlendTreeSequence : public CHelperSequence {
public:
	/* class CHelperSequence <ancestor>; */ /* 0 56 */
	void CBlendTreeSequence(CBlendTreeSequence* , const CBlendTreeSequence& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:23 */
	void CBlendTreeSequence(CBlendTreeSequence* , const CAnimContainer* , HSequence, const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.h:19 */
	virtual void ~CBlendTreeSequence(CBlendTreeSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:32 */
	virtual const char* GetName(const CBlendTreeSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:37 */
	virtual const CModel* GetModel(const CBlendTreeSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:42 */
	virtual bool IsLooping(const CBlendTreeSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:47 */
	virtual bool IsSnapped(const CBlendTreeSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:52 */
	virtual bool IsMulti(const CBlendTreeSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:57 */
	virtual bool IsDelta(const CBlendTreeSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:62 */
	virtual bool IsHidden(const CBlendTreeSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:67 */
	virtual bool IsAutoplay(const CBlendTreeSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:72 */
	virtual bool IsAnimation(const CBlendTreeSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:77 */
	virtual bool IsFrameCacheable(const CBlendTreeSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:83 */
	virtual bool GetBounds(const CBlendTreeSequence* , Vector* , Vector* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:90 */
	virtual bool GetAllAnimations(const CBlendTreeSequence* , AnimRefVector_t& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:95 */
	virtual bool GetAllSequences(const CBlendTreeSequence* , CUtlVector<HSequence, CUtlMemory<HSequence, int> >& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:100 */
	virtual void DoAnimation(const CBlendTreeSequence* , CAnimationBucket& , float, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:105 */
	virtual float GetFadeInTime(const CBlendTreeSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:110 */
	virtual float GetFadeOutTime(const CBlendTreeSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:115 */
	virtual HSequence GetNextSequence(const CBlendTreeSequence* , HSequence, int* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:120 */
	virtual bool IsFlagSet(const CBlendTreeSequence* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:125 */
	virtual void SetFlag(const CBlendTreeSequence* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:130 */
	virtual void ClearFlag(const CBlendTreeSequence* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:135 */
	virtual void BuildBlendlist(const CBlendTreeSequence* , CAnimationBlendList* , const float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:141 */
	virtual int NumPoseSettings(const CBlendTreeSequence* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:147 */
	virtual const char* GetPoseSettingName(const CBlendTreeSequence* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:158 */
	virtual float GetPoseSettingValue(const CBlendTreeSequence* , int);
protected:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:164 */
	virtual void PostInit(CBlendTreeSequence* );
	HSequence m_hSequence; /* 56 4 */
	CUtlString m_sName; /* 64 8 */
	uint32 m_nFlags; /* 72 4 */
	CSeqSeqDescFlag m_flags; /* 76 11 */
	CUtlVector<CSeqPoseSetting, CUtlMemory<CSeqPoseSetting, int> > m_poseSettingArray; /* 88 32 */
	void CBlendTreeSequence(class CBlendTreeSequence *, const class CBlendTreeSequence  &); /* linkage=_ZN18CBlendTreeSequenceC4ERKS_ */
	void CBlendTreeSequence(class CBlendTreeSequence *, const class CAnimContainer  *, class HSequence, const char  *); /* linkage=_ZN18CBlendTreeSequenceC4EPK14CAnimContainer9HSequencePKc */
	virtual void ~CBlendTreeSequence(class CBlendTreeSequence *); /* linkage=_ZN18CBlendTreeSequenceD4Ev */
	virtual const char  * GetName(const class CBlendTreeSequence  *); /* linkage=_ZNK18CBlendTreeSequence7GetNameEv */
	virtual const class CModel  * GetModel(const class CBlendTreeSequence  *); /* linkage=_ZNK18CBlendTreeSequence8GetModelEv */
	virtual bool IsLooping(const class CBlendTreeSequence  *); /* linkage=_ZNK18CBlendTreeSequence9IsLoopingEv */
	virtual bool IsSnapped(const class CBlendTreeSequence  *); /* linkage=_ZNK18CBlendTreeSequence9IsSnappedEv */
	virtual bool IsMulti(const class CBlendTreeSequence  *); /* linkage=_ZNK18CBlendTreeSequence7IsMultiEv */
	virtual bool IsDelta(const class CBlendTreeSequence  *); /* linkage=_ZNK18CBlendTreeSequence7IsDeltaEv */
	virtual bool IsHidden(const class CBlendTreeSequence  *); /* linkage=_ZNK18CBlendTreeSequence8IsHiddenEv */
	virtual bool IsAutoplay(const class CBlendTreeSequence  *); /* linkage=_ZNK18CBlendTreeSequence10IsAutoplayEv */
	virtual bool IsAnimation(const class CBlendTreeSequence  *); /* linkage=_ZNK18CBlendTreeSequence11IsAnimationEv */
	virtual bool IsFrameCacheable(const class CBlendTreeSequence  *); /* linkage=_ZNK18CBlendTreeSequence16IsFrameCacheableEv */
	virtual bool GetBounds(const class CBlendTreeSequence  *, class Vector *, class Vector *); /* linkage=_ZNK18CBlendTreeSequence9GetBoundsEP6VectorS1_ */
	virtual bool GetAllAnimations(const class CBlendTreeSequence  *, AnimRefVector_t &); /* linkage=_ZNK18CBlendTreeSequence16GetAllAnimationsER23CUtlVectorFixedGrowableIiLm16EE */
	virtual bool GetAllSequences(const class CBlendTreeSequence  *, class CUtlVector<HSequence, CUtlMemory<HSequence, int> > &); /* linkage=_ZNK18CBlendTreeSequence15GetAllSequencesER10CUtlVectorI9HSequence10CUtlMemoryIS1_iEE */
	virtual void DoAnimation(const class CBlendTreeSequence  *, class CAnimationBucket &, float, float); /* linkage=_ZNK18CBlendTreeSequence11DoAnimationER16CAnimationBucketff */
	virtual float GetFadeInTime(const class CBlendTreeSequence  *); /* linkage=_ZNK18CBlendTreeSequence13GetFadeInTimeEv */
	virtual float GetFadeOutTime(const class CBlendTreeSequence  *); /* linkage=_ZNK18CBlendTreeSequence14GetFadeOutTimeEv */
	virtual class HSequence GetNextSequence(const class CBlendTreeSequence  *, class HSequence, int *); /* linkage=_ZNK18CBlendTreeSequence15GetNextSequenceE9HSequencePi */
	virtual bool IsFlagSet(const class CBlendTreeSequence  *, int); /* linkage=_ZNK18CBlendTreeSequence9IsFlagSetEi */
	virtual void SetFlag(const class CBlendTreeSequence  *, int); /* linkage=_ZNK18CBlendTreeSequence7SetFlagEi */
	virtual void ClearFlag(const class CBlendTreeSequence  *, int); /* linkage=_ZNK18CBlendTreeSequence9ClearFlagEi */
	virtual void BuildBlendlist(const class CBlendTreeSequence  *, class CAnimationBlendList *, const float  *); /* linkage=_ZNK18CBlendTreeSequence14BuildBlendlistEP19CAnimationBlendListPKf */
	virtual int NumPoseSettings(const class CBlendTreeSequence  *); /* linkage=_ZNK18CBlendTreeSequence15NumPoseSettingsEv */
	/* <d2cce2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.cpp:147 */
	virtual const char  * GetPoseSettingName(const class CBlendTreeSequence  *, int); /* linkage=_ZNK18CBlendTreeSequence18GetPoseSettingNameEi */
	virtual float GetPoseSettingValue(const class CBlendTreeSequence  *, int); /* linkage=_ZNK18CBlendTreeSequence19GetPoseSettingValueEi */
	virtual void PostInit(class CBlendTreeSequence *); /* linkage=_ZN18CBlendTreeSequence8PostInitEv */
};

// <00CB5F21> _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.h:19
// variables: 2
// function calls: 31
void CBlendTreeSequence::~CBlendTreeSequence()
{
	{
		int i; // 1721
		CUtlMemory<CSeqPoseSetting, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CSeqPoseSetting, CUtlMemory<CSeqPoseSetting, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 325
		CBufferString::~CBufferString(); // 325
		CBufferString::~CBufferString(); // 325
		CSeqPoseSetting::~CSeqPoseSetting(); // 1526
		Destruct<CSeqPoseSetting>(CSeqPoseSetting* pMemory); // 1723
	}
	CUtlVectorBase<CSeqPoseSetting, CUtlMemory<CSeqPoseSetting, int> >::RemoveAll(); // 1798
	CUtlMemory<CSeqPoseSetting, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSeqPoseSetting, int>::Purge(); // 903
	CUtlMemory<CSeqPoseSetting, int>::Purge(); // 1799
	CUtlVectorBase<CSeqPoseSetting, CUtlMemory<CSeqPoseSetting, int> >::Purge(); // 560
	ValidateAlignment<CSeqPoseSetting>(void); // 508
	CUtlMemory<CSeqPoseSetting, int>::Purge(); // 510
	CUtlMemory<CSeqPoseSetting, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CSeqPoseSetting, CUtlMemory<CSeqPoseSetting, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CSeqPoseSetting, CUtlMemory<CSeqPoseSetting, int> >::~CUtlVector(); // 19
	CUtlString::~CUtlString(); // 19
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
	CHelperSequence::~CHelperSequence(); // 19
} /* size: 0, inline expansions: 19 (0 bytes) */

// <00CB5753> _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.h:19
// variables: 2
// function calls: 38
void CBlendTreeSequence::~CBlendTreeSequence()
{
	{
		int i; // 1721
		CUtlMemory<CSeqPoseSetting, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CSeqPoseSetting, CUtlMemory<CSeqPoseSetting, int> >::Element(
			int i);  // 1723
		CBufferString::~CBufferString(); // 325
		CBufferString::~CBufferString(); // 325
		CBufferString::~CBufferString(); // 325
		CSeqPoseSetting::~CSeqPoseSetting(); // 1526
		Destruct<CSeqPoseSetting>(CSeqPoseSetting* pMemory); // 1723
	}
	CUtlVectorBase<CSeqPoseSetting, CUtlMemory<CSeqPoseSetting, int> >::RemoveAll(); // 1798
	CUtlMemory<CSeqPoseSetting, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSeqPoseSetting, int>::Purge(); // 903
	CUtlMemory<CSeqPoseSetting, int>::Purge(); // 1799
	CUtlVectorBase<CSeqPoseSetting, CUtlMemory<CSeqPoseSetting, int> >::Purge(); // 560
	ValidateAlignment<CSeqPoseSetting>(void); // 508
	CUtlMemory<CSeqPoseSetting, int>::Purge(); // 510
	CUtlMemory<CSeqPoseSetting, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CSeqPoseSetting, CUtlMemory<CSeqPoseSetting, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CSeqPoseSetting, CUtlMemory<CSeqPoseSetting, int> >::~CUtlVector(); // 19
	CUtlString::~CUtlString(); // 19
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
	CHelperSequence::~CHelperSequence(); // 19
	CBlendTreeSequence::~CBlendTreeSequence(); // 19
} /* size: 0, inline expansions: 26 (0 bytes) */

// <00CB573A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../blendtreesequence.h:19
inline void CBlendTreeSequence::~CBlendTreeSequence()
{
} /* size: 0 */

