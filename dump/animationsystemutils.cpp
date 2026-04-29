
//
// animationsystemutils.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 71
//	classes: 2
//

// <00BE7BC3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:28
// member functions: 15
// member variables: 5
// class size: 192
class CSimpleSequenceTransitioner<CAnimationHelper> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:31 */
	enum {
		MAX_TRANSITIONING_SEQUENCES = 4,
		INVALID_LAYER_ORDER = 15,
	};
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:36 */
	struct TransitioningLayer_t {
		CAnimationDecodeOp m_op; /* 0 16 */
		float m_flStartAnimTime; /* 16 4 */
		float m_flStartWeight; /* 20 4 */
		float m_flAnimTime; /* 24 4 */
		int m_nOrder; /* 28 4 */
		float m_flPlaybackRate; /* 32 4 */
		float m_flFadeOutDuration; /* 36 4 */
		void TransitioningLayer_t(TransitioningLayer_t* );
	};
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:54 */
	void CSimpleSequenceTransitioner(CSimpleSequenceTransitioner<CAnimationHelper>* , CAnimationHelper* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:249 */
	void AnimationFrameAdvance(CSimpleSequenceTransitioner<CAnimationHelper>* , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:299 */
	int GetDecodeOperations(CSimpleSequenceTransitioner<CAnimationHelper>* , int, CAnimationDecodeOp* , CUtlVector<CSimpleSequenceTransitioner<CAnimationHelper>::TransitioningLaterMetaInfo_t, CUtlMemory<CSimpleSequenceTransit);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:346 */
	void Reset(CSimpleSequenceTransitioner<CAnimationHelper>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:220 */
	void ForcePreviousSequenceIntoTransitionLayer(CSimpleSequenceTransitioner<CAnimationHelper>* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:92 */
	void AddCurrentSequenceToTransition(CSimpleSequenceTransitioner<CAnimationHelper>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:75 */
	void FinishTransitioningLayer(CSimpleSequenceTransitioner<CAnimationHelper>* , int);
	CAnimationDecodeOp m_currentOp; /* 0 16 */
	float m_flCurrentPlaybackRate; /* 16 4 */
	float m_flCurrentAnimTime; /* 20 4 */
	TransitioningLayer_t m_transitioningLayers[4]; /* 24 160 */
	CAnimationHelper * m_pOwner; /* 184 8 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:47 */
	struct TransitioningLaterMetaInfo_t {
		float m_flPlaybackRate; /* 0 4 */
		float m_flStartTime; /* 4 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	void CSimpleSequenceTransitioner(class CSimpleSequenceTransitioner<CAnimationHelper> *, class CAnimationHelper *); /* linkage=_ZN27CSimpleSequenceTransitionerI16CAnimationHelperEC4EPS0_ */
	void AnimationFrameAdvance(class CSimpleSequenceTransitioner<CAnimationHelper> *, float); /* linkage=_ZN27CSimpleSequenceTransitionerI16CAnimationHelperE21AnimationFrameAdvanceEf */
	int GetDecodeOperations(class CSimpleSequenceTransitioner<CAnimationHelper> *, int, class CAnimationDecodeOp *, class CUtlVector<CSimpleSequenceTransitioner<CAnimationHelper>::TransitioningLaterMetaInfo_t, CUtlMemory<CSimpleSequenceTransit); /* linkage=_ZN27CSimpleSequenceTransitionerI16CAnimationHelperE19GetDecodeOperationsEiP18CAnimationDecodeOpP10CUtlVectorINS1_28TransitioningLaterMetaInfo_tE10CUtlMemoryIS5_iEE */
	void Reset(class CSimpleSequenceTransitioner<CAnimationHelper> *); /* linkage=_ZN27CSimpleSequenceTransitionerI16CAnimationHelperE5ResetEv */
	void ForcePreviousSequenceIntoTransitionLayer(class CSimpleSequenceTransitioner<CAnimationHelper> *); /* linkage=_ZN27CSimpleSequenceTransitionerI16CAnimationHelperE40ForcePreviousSequenceIntoTransitionLayerEv */
	void AddCurrentSequenceToTransition(class CSimpleSequenceTransitioner<CAnimationHelper> *); /* linkage=_ZN27CSimpleSequenceTransitionerI16CAnimationHelperE30AddCurrentSequenceToTransitionEv */
	void FinishTransitioningLayer(class CSimpleSequenceTransitioner<CAnimationHelper> *, int); /* linkage=_ZN27CSimpleSequenceTransitionerI16CAnimationHelperE24FinishTransitioningLayerEi */
};

// <00C73316> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:36
void TransitioningLayer_t::TransitioningLayer_t()
{
} /* size: 0 */

// <00C732FA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:36
inline void TransitioningLayer_t::TransitioningLayer_t()
{
} /* size: 0 */

// <00C732D3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:54
void CSimpleSequenceTransitioner<CAnimationHelper>::CSimpleSequenceTransitioner(CAnimationHelper* pOwner)
{
} /* size: 0 */

// <00C732AE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:54
inline void CSimpleSequenceTransitioner<CAnimationHelper>::CSimpleSequenceTransitioner(CAnimationHelper* pOwner)
{
} /* size: 0 */

// <00C5E5EC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:75
// variables: 3
void CSimpleSequenceTransitioner<CAnimationHelper>::FinishTransitioningLayer(int nLayerIndex)
{
	TransitioningLayer_t& replaceLayer; // 78
	{
		int i; // 79
		{
			TransitioningLayer_t& fixlayer; // 81
		}
	}
} /* size: 0, variables: 1 */

// <00C5EA88> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:92
// variables: 25
// function calls: 9
void CSimpleSequenceTransitioner<CAnimationHelper>::AddCurrentSequenceToTransition()
{
	const char   __FUNCTION__; // 22460
	const CModel* pModel; // 97
	int nIndex; // 129
	int nBestIndex; // 130
	float flBestEndTime; // 131
	float flAnimTime; // 157
	const ISequence* pSeqDesc; // 159
	TransitioningLayer_t& layer; // 160
	bool bWatch; // 190
	int pLayerIndices; // 203
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 98
	}
	{
		const ISequence* pNewSeqDesc; // 105
		CUtlMemory<CAnimationDecodeOp, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::operator[](
				int i);  // 105
		{
			int i; // 350
		}
		CSimpleSequenceTransitioner<CAnimationHelper>::Reset(); // 109
	}
	{
		int i; // 119
		{
			TransitioningLayer_t& layer; // 121
		}
	}
	{
		int i; // 132
		{
			TransitioningLayer_t& layer; // 134
			float flTestTime; // 142
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 152
	}
	{
		int i; // 204
	}
	{
		int i; // 208
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 212
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
		}
	}
	HSequence::operator==(
			const HSequence& other);  // 94
	CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 440
	CAnimationHelper::GetModelPtr(); // 97
	CUtlMemory<CAnimationDecodeOp, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::operator[](
			int i);  // 103
	{
		int i; // 79
		{
			TransitioningLayer_t& fixlayer; // 81
		}
	}
	CSimpleSequenceTransitioner<CAnimationHelper>::FinishTransitioningLayer(
				int nLayerIndex);  // 154
} /* size: 740, variables: 10, inline expansions: 6 (116 bytes) */

// <00C730A0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:220
void CSimpleSequenceTransitioner<CAnimationHelper>::ForcePreviousSequenceIntoTransitionLayer()
{
} /* size: 0 */

// <00CF108B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:229
float ClampCycle(float flCycle, bool bIsLooping)
{
} /* size: 0 */

// <00C729CB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:249
// variables: 8
// function calls: 15
void CSimpleSequenceTransitioner<CAnimationHelper>::AnimationFrameAdvance(float dtParam)
{
	float flNextAnimTime; // 251
	{
		int i; // 265
		{
			TransitioningLayer_t& layer; // 267
			float dtLocal; // 281
			float flCycle; // 283
			float flWeight; // 289
			CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 429
			CUtlMemory<float, int>::Base(); // 113
			CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 429
			CAnimationSystem::ComputeSequenceCyclesPerSecond(
							const CModel* pModel,
							HSequence hSequence,
							const float* poseParameter);  // 429
			CAnimationHelper::GetSequenceCycleRate(
						HSequence hSequence);  // 283
			CStrongHandle<InfoForResourceTypeCModel>::operator->(); // 435
			CAnimationHelper::IsSequenceLooping(
						HSequence hSequence);  // 284
			clamp<float, float>(const float& val,
						const float& minVal,
						const float& maxVal);  // 242
			ClampCycle(float flCycle,
					bool bIsLooping);  // 284
			{
				int i; // 79
				{
					TransitioningLayer_t& fixlayer; // 81
				}
			}
			CSimpleSequenceTransitioner<CAnimationHelper>::FinishTransitioningLayer(
						int nLayerIndex);  // 274
		}
	}
	CUtlMemory<CAnimationDecodeOp, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::operator[](
			int i);  // 255
	HSequence::operator==(
			const HSequence& other);  // 255
	CUtlMemory<CAnimationDecodeOp, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::operator[](
			int i);  // 262
} /* size: 584, variables: 1, inline expansions: 5 (12 bytes) */

// <00C7272A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:299
// variables: 12
void CSimpleSequenceTransitioner<CAnimationHelper>::GetDecodeOperations(int nMaxOps, CAnimationDecodeOp* pOps, CUtlVector<CSimpleSequenceTransitioner<CAnimationHelper>::TransitioningLaterMetaInfo_t, CUtlMemory<CSimpleSequenceTransit pOptionalMetaInfo)
{
	const char   __FUNCTION__; // 22168
	int pLayerIndices; // 301
	int nOpCount; // 307
	{
		int i; // 302
	}
	{
		int i; // 308
		{
			TransitioningLayer_t& layer; // 310
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 314
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 315
			}
		}
	}
	{
		int i; // 319
		{
			TransitioningLayer_t& layer; // 324
			CAnimationDecodeOp& op; // 326
			{
				TransitioningLaterMetaInfo_t& info; // 333
			}
		}
	}
} /* size: 0, variables: 3 */

// <00C7310F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:346
// variable: 1
void CSimpleSequenceTransitioner<CAnimationHelper>::Reset()
{
	{
		int i; // 350
	}
} /* size: 0 */

// <00BE7E0F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:364
// member functions: 82
// member variables: 19
// vtable entries: 32
// class size: 544
class CAnimationHelper : public IAnimationHelper {
public:
	/* class IAnimationHelper <ancestor>; */ /* 0 8 */
	void CAnimationHelper(CAnimationHelper* , const CAnimationHelper& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:478 */
	void CAnimationHelper(CAnimationHelper* , HModel, void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:484 */
	virtual void ~CAnimationHelper(CAnimationHelper* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:563 */
	virtual void SetModel(CAnimationHelper* , HModel);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:371 */
	virtual HModel GetModel(const CAnimationHelper* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:373 */
	virtual void SetModelContext(CAnimationHelper* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:375 */
	virtual int GetPoseParameterCount(const CAnimationHelper* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:376 */
	virtual float* GetPoseParameters(CAnimationHelper* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:378 */
	virtual int GetSequenceCount(const CAnimationHelper* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:601 */
	virtual void SetSequence(CAnimationHelper* , HSequence);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:617 */
	virtual void SetSequence(CAnimationHelper* , int, HSequence, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:633 */
	virtual void SetSequences(CAnimationHelper* , int, CAnimationDecodeOp* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:382 */
	virtual CAnimationDecodeOp& GetSequence(CAnimationHelper* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:384 */
	virtual void SetSequenceMovementType(CAnimationHelper* , SequenceMovementType_t);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:385 */
	virtual SequenceMovementType_t GetSequenceMovementType(const CAnimationHelper* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:387 */
	virtual void SetAutoplayEnabled(CAnimationHelper* , bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:388 */
	virtual bool GetAutoplayEnabled(const CAnimationHelper* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:667 */
	virtual void JumpToFrame(CAnimationHelper* , int, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:977 */
	virtual void Update(CAnimationHelper* , matrix3x4a_t& , float, const PhysicsBonesOverlay_t* , const BoneMergeOverlay_t* , int, AnimationEventOccurrences_t* , bool, CTransform* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:396 */
	virtual CAnimationState& GetAnimationState(CAnimationHelper* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:547 */
	virtual void SetBlendSequenceTransitions(CAnimationHelper* , bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:558 */
	virtual bool IsBlendingSequenceTransitions(const CAnimationHelper* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:646 */
	virtual void ResetSequenceTransitioner(CAnimationHelper* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:651 */
	virtual const IAnimationGraphInstancePtr& GetAnimationGraphInstance(const CAnimationHelper* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:656 */
	virtual IAnimationGraphInstancePtr& GetAnimationGraphInstanceForModify(CAnimationHelper* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:661 */
	virtual void SetAnimationGraphInstance(CAnimationHelper* , const IAnimationGraphInstancePtr& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:530 */
	virtual void AddSequenceFinishedCallback(CAnimationHelper* , IAnimationHelperSequenceFinishedCallback* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:540 */
	virtual void RemoveSequenceFinisheCallback(CAnimationHelper* , IAnimationHelperSequenceFinishedCallback* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:489 */
	virtual void SetLoopBehavior(CAnimationHelper* , AnimationHelperLoopBehavior_t);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:494 */
	virtual AnimationHelperLoopBehavior_t GetLoopBehavior(const CAnimationHelper* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:499 */
	virtual void RestartAnimations(CAnimationHelper* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:515 */
	virtual void ResetTransformsToBindPose(CAnimationHelper* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:520 */
	virtual const matrix3x4_t& GetAnimGraphLocalToWorldMatrix(const CAnimationHelper* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:525 */
	virtual void SetAnimGraphLocalToWorldMatrix(CAnimationHelper* , const matrix3x4_t& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:1171 */
	virtual const CTransform& GetRootMotion(const CAnimationHelper* );
protected:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:709 */
	void FrameAdvance(CAnimationHelper* , matrix3x4a_t& , float, AnimationEventOccurrences_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:901 */
	bool UpdatePhysicsBones(CAnimationHelper* , const PhysicsBonesOverlay_t* , const CTransform& , int, CTransform* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:427 */
	float GetSequenceCycleRate(const CAnimationHelper* , HSequence);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:433 */
	bool IsSequenceLooping(const CAnimationHelper* , HSequence);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:438 */
	const CModel* GetModelPtr(const CAnimationHelper* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:443 */
	const char* GetSequenceName(const CAnimationHelper* , HSequence);
	HModelStrong m_hModel; /* 8 8 */
	CUtlVector<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> > m_pAnimOperations; /* 16 32 */
	CUtlVector<float, CUtlMemory<float, int> > m_flPoseParameters; /* 48 32 */
	CAnimationState m_animationState __attribute__((__aligned__(16))); /* 80 48 */
	float m_flAccumulatedTime; /* 128 4 */
	void * m_pModelContext; /* 136 8 */
	SequenceMovementType_t m_moveType; /* 144 4 */
	bool m_bUseSequenceTransitioner; /* 148 1 */
	bool m_bUseSequenceFinishCallbacks; /* 149 1 */
	AnimationHelperLoopBehavior_t m_nLoopBehavior; /* 152 4 */
	bool m_bAutoplayEnabled; /* 156 1 */
	CSimpleSequenceTransitioner<CAnimationHelper> m_SequenceTransitioner; /* 160 192 */
	CUtlVector<IAnimationHelperSequenceFinishedCallback*, CUtlMemory<IAnimationHelperSequenceFinishedCallback*, int> > m_Callbacks; /* 352 32 */
	IAnimationGraphInstancePtr m_pAnimGraphInstance; /* 384 8 */
	matrix3x4_t m_AnimGraphLocalToWorldMtx; /* 392 48 */
	CUtlVector<short int, CUtlMemory<short int, int> > m_Body2BoneMap; /* 440 32 */
	CUtlVector<short int, CUtlMemory<short int, int> > m_Bone2BodyMap; /* 472 32 */
	CTransform m_rootMotion __attribute__((__aligned__(16))); /* 512 32 */
	void CAnimationHelper(class CAnimationHelper *, const class CAnimationHelper  &); /* linkage=_ZN16CAnimationHelperC4ERKS_ */
	void CAnimationHelper(class CAnimationHelper *, HModel, void *); /* linkage=_ZN16CAnimationHelperC4E11CWeakHandleI25InfoForResourceTypeCModelEPv */
	virtual void ~CAnimationHelper(class CAnimationHelper *); /* linkage=_ZN16CAnimationHelperD4Ev */
	virtual void SetModel(class CAnimationHelper *, HModel); /* linkage=_ZN16CAnimationHelper8SetModelE11CWeakHandleI25InfoForResourceTypeCModelE */
	virtual HModel GetModel(const class CAnimationHelper  *); /* linkage=_ZNK16CAnimationHelper8GetModelEv */
	virtual void SetModelContext(class CAnimationHelper *, void *); /* linkage=_ZN16CAnimationHelper15SetModelContextEPv */
	virtual int GetPoseParameterCount(const class CAnimationHelper  *); /* linkage=_ZNK16CAnimationHelper21GetPoseParameterCountEv */
	virtual float * GetPoseParameters(class CAnimationHelper *); /* linkage=_ZN16CAnimationHelper17GetPoseParametersEv */
	virtual int GetSequenceCount(const class CAnimationHelper  *); /* linkage=_ZNK16CAnimationHelper16GetSequenceCountEv */
	virtual void SetSequence(class CAnimationHelper *, class HSequence); /* linkage=_ZN16CAnimationHelper11SetSequenceE9HSequence */
	virtual void SetSequence(class CAnimationHelper *, int, class HSequence, float); /* linkage=_ZN16CAnimationHelper11SetSequenceEi9HSequencef */
	virtual void SetSequences(class CAnimationHelper *, int, class CAnimationDecodeOp *); /* linkage=_ZN16CAnimationHelper12SetSequencesEiP18CAnimationDecodeOp */
	virtual class CAnimationDecodeOp & GetSequence(class CAnimationHelper *, int); /* linkage=_ZN16CAnimationHelper11GetSequenceEi */
	virtual void SetSequenceMovementType(class CAnimationHelper *, enum SequenceMovementType_t); /* linkage=_ZN16CAnimationHelper23SetSequenceMovementTypeE22SequenceMovementType_t */
	virtual enum SequenceMovementType_t GetSequenceMovementType(const class CAnimationHelper  *); /* linkage=_ZNK16CAnimationHelper23GetSequenceMovementTypeEv */
	virtual void SetAutoplayEnabled(class CAnimationHelper *, bool); /* linkage=_ZN16CAnimationHelper18SetAutoplayEnabledEb */
	virtual bool GetAutoplayEnabled(const class CAnimationHelper  *); /* linkage=_ZNK16CAnimationHelper18GetAutoplayEnabledEv */
	virtual void JumpToFrame(class CAnimationHelper *, int, float); /* linkage=_ZN16CAnimationHelper11JumpToFrameEif */
	virtual void Update(class CAnimationHelper *, class matrix3x4a_t &, float, const class PhysicsBonesOverlay_t  *, const class BoneMergeOverlay_t  *, int, class AnimationEventOccurrences_t *, bool, class CTransform *); /* linkage=_ZN16CAnimationHelper6UpdateER12matrix3x4a_tfPK21PhysicsBonesOverlay_tPK18BoneMergeOverlay_tiP27AnimationEventOccurrences_tbP10CTransform */
	virtual class CAnimationState & GetAnimationState(class CAnimationHelper *); /* linkage=_ZN16CAnimationHelper17GetAnimationStateEv */
	/* <d27f9f> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:547 */
	virtual void SetBlendSequenceTransitions(class CAnimationHelper *, bool); /* linkage=_ZN16CAnimationHelper27SetBlendSequenceTransitionsEb */
	/* <d270b5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:558 */
	virtual bool IsBlendingSequenceTransitions(const class CAnimationHelper  *); /* linkage=_ZNK16CAnimationHelper29IsBlendingSequenceTransitionsEv */
	virtual void ResetSequenceTransitioner(class CAnimationHelper *); /* linkage=_ZN16CAnimationHelper25ResetSequenceTransitionerEv */
	virtual const IAnimationGraphInstancePtr  & GetAnimationGraphInstance(const class CAnimationHelper  *); /* linkage=_ZNK16CAnimationHelper25GetAnimationGraphInstanceEv */
	virtual IAnimationGraphInstancePtr & GetAnimationGraphInstanceForModify(class CAnimationHelper *); /* linkage=_ZN16CAnimationHelper34GetAnimationGraphInstanceForModifyEv */
	virtual void SetAnimationGraphInstance(class CAnimationHelper *, const IAnimationGraphInstancePtr  &); /* linkage=_ZN16CAnimationHelper25SetAnimationGraphInstanceERK9CSmartPtrI23IAnimationGraphInstance17CRefCountAccessorE */
	virtual void AddSequenceFinishedCallback(class CAnimationHelper *, class IAnimationHelperSequenceFinishedCallback *); /* linkage=_ZN16CAnimationHelper27AddSequenceFinishedCallbackEP40IAnimationHelperSequenceFinishedCallback */
	virtual void RemoveSequenceFinisheCallback(class CAnimationHelper *, class IAnimationHelperSequenceFinishedCallback *); /* linkage=_ZN16CAnimationHelper29RemoveSequenceFinisheCallbackEP40IAnimationHelperSequenceFinishedCallback */
	virtual void SetLoopBehavior(class CAnimationHelper *, enum AnimationHelperLoopBehavior_t); /* linkage=_ZN16CAnimationHelper15SetLoopBehaviorE29AnimationHelperLoopBehavior_t */
	virtual enum AnimationHelperLoopBehavior_t GetLoopBehavior(const class CAnimationHelper  *); /* linkage=_ZNK16CAnimationHelper15GetLoopBehaviorEv */
	virtual void RestartAnimations(class CAnimationHelper *); /* linkage=_ZN16CAnimationHelper17RestartAnimationsEv */
	virtual void ResetTransformsToBindPose(class CAnimationHelper *); /* linkage=_ZN16CAnimationHelper25ResetTransformsToBindPoseEv */
	virtual const class matrix3x4_t  & GetAnimGraphLocalToWorldMatrix(const class CAnimationHelper  *); /* linkage=_ZNK16CAnimationHelper30GetAnimGraphLocalToWorldMatrixEv */
	virtual void SetAnimGraphLocalToWorldMatrix(class CAnimationHelper *, const class matrix3x4_t  &); /* linkage=_ZN16CAnimationHelper30SetAnimGraphLocalToWorldMatrixERK11matrix3x4_t */
	virtual const class CTransform  & GetRootMotion(const class CAnimationHelper  *); /* linkage=_ZNK16CAnimationHelper13GetRootMotionEv */
	void FrameAdvance(class CAnimationHelper *, class matrix3x4a_t &, float, class AnimationEventOccurrences_t *); /* linkage=_ZN16CAnimationHelper12FrameAdvanceER12matrix3x4a_tfP27AnimationEventOccurrences_t */
	/* <d31156> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:901 */
	bool UpdatePhysicsBones(class CAnimationHelper *, const class PhysicsBonesOverlay_t  *, const class CTransform  &, int, class CTransform *); /* linkage=_ZN16CAnimationHelper18UpdatePhysicsBonesEPK21PhysicsBonesOverlay_tRK10CTransformiPS3_ */
	float GetSequenceCycleRate(const class CAnimationHelper  *, class HSequence); /* linkage=_ZNK16CAnimationHelper20GetSequenceCycleRateE9HSequence */
	bool IsSequenceLooping(const class CAnimationHelper  *, class HSequence); /* linkage=_ZNK16CAnimationHelper17IsSequenceLoopingE9HSequence */
	const class CModel  * GetModelPtr(const class CAnimationHelper  *); /* linkage=_ZNK16CAnimationHelper11GetModelPtrEv */
	const char  * GetSequenceName(const class CAnimationHelper  *, class HSequence); /* linkage=_ZNK16CAnimationHelper15GetSequenceNameE9HSequence */
} __attribute__((__aligned__(16)));

// <00CF0FA9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:371
// function calls: 4
void CAnimationHelper::GetModel()
{
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCModel>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCModel>::operator CWeakHandle<InfoForResourceTypeCModel>(); // 371
} /* size: 15, inline expansions: 4 (13 bytes) */

// <00CF0F6B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:373
void CAnimationHelper::SetModelContext(void* pModelContext)
{
} /* size: 12 */

// <00CF0F0C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:375
// function call: 1
void CAnimationHelper::GetPoseParameterCount()
{
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 375
} /* size: 8, inline expansions: 1 (0 bytes) */

// <00CF0E7D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:376
// function calls: 2
void CAnimationHelper::GetPoseParameters()
{
	CUtlMemory<float, int>::Base(); // 112
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 376
} /* size: 9, inline expansions: 2 (0 bytes) */

// <00CF0E1E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:378
// function call: 1
void CAnimationHelper::GetSequenceCount()
{
	CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::Count(); // 378
} /* size: 8, inline expansions: 1 (0 bytes) */

// <00CF0D66> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:382
// function calls: 2
void CAnimationHelper::GetSequence(int i)
{
	CUtlMemory<CAnimationDecodeOp, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::operator[](
			int i);  // 382
} /* size: 16, inline expansions: 2 (22 bytes) */

// <00CF0D28> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:384
void CAnimationHelper::SetSequenceMovementType(SequenceMovementType_t moveType)
{
} /* size: 11 */

// <00CF0CFA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:385
void CAnimationHelper::GetSequenceMovementType()
{
} /* size: 11 */

// <00CF0CBC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:387
void CAnimationHelper::SetAutoplayEnabled(bool bAutoPlayEnabled)
{
} /* size: 12 */

// <00CF0C8E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:388
void CAnimationHelper::GetAutoplayEnabled()
{
} /* size: 12 */

// <00CF0C60> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:396
void CAnimationHelper::GetAnimationState()
{
} /* size: 9 */

// <00CF0C2D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:427
// variable: 1
inline void CAnimationHelper::GetSequenceCycleRate(HSequence hSequence)
{
	float flCyclesPerSecond; // 429
} /* size: 0, variables: 1 */

// <00CF0C07> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:433
inline void CAnimationHelper::IsSequenceLooping(HSequence hSequence)
{
} /* size: 0 */

// <00CF0BEE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:438
inline void CAnimationHelper::GetModelPtr()
{
} /* size: 0 */

// <00CF0BC9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:443
void CAnimationHelper::GetSequenceName(HSequence hSequence)
{
} /* size: 0 */

// <00CF0358> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:478
// function calls: 38
void CAnimationHelper::CAnimationHelper(HModel hModel, void* pModelContext)
{
	CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::ResetDbgInfo(); // 530
	CUtlMemory<CAnimationDecodeOp, int>::ValidateGrowSize(); // 475
	CUtlMemory<CAnimationDecodeOp, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::CUtlVector(); // 479
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 479
	IAnimationHelper::IAnimationHelper(); // 479
	CStrongHandle<InfoForResourceTypeCModel>::CStrongHandle(); // 479
	CAnimationDecodeOp::CAnimationDecodeOp(); // 54
	CAnimationDecodeOp::CAnimationDecodeOp(); // 36
	TransitioningLayer_t::TransitioningLayer_t(); // 54
	CSimpleSequenceTransitioner<CAnimationHelper>::CSimpleSequenceTransitioner(
					CAnimationHelper* pOwner);  // 479
	CUtlMemory<IAnimationHelperSequenceFinishedCallback::ValidateGrowSize(); // 475
	CUtlMemory<IAnimationHelperSequenceFinishedCallback::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<IAnimationHelperSequenceFinishedCallback::ResetDbgInfo(); // 530
	CUtlVectorBase<IAnimationHelperSequenceFinishedCallback::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<IAnimationHelperSequenceFinishedCallback::CUtlVector(); // 479
	CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::CSmartPtr(); // 479
	matrix3x4_t::matrix3x4_t(); // 479
	CUtlMemory<short int, int>::ValidateGrowSize(); // 475
	CUtlMemory<short int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<short int, CUtlMemory<short int, int> >::CUtlVector(); // 479
	CUtlMemory<short int, int>::ValidateGrowSize(); // 475
	CUtlMemory<short int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<short int, CUtlMemory<short int, int> >::CUtlVector(); // 479
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 479
	CWeakHandle<InfoForResourceTypeCModel>::Init(
		const CWeakHandle<InfoForResourceTypeCModel>& src);  // 273
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 481
} /* size: 466, inline expansions: 38 (639 bytes) */

// <00CF0325> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:478
void CAnimationHelper::CAnimationHelper(HModel hModel, void* pModelContext)
{
} /* size: 0 */

// <00CEF7BD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:484
// function calls: 58
void CAnimationHelper::~CAnimationHelper()
{
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::RemoveAll(); // 1798
	CUtlMemory<short int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<short int, int>::Purge(); // 903
	CUtlMemory<short int, int>::Purge(); // 1799
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Purge(); // 560
	ValidateAlignment<short int>(void); // 508
	CUtlMemory<short int, int>::Purge(); // 510
	CUtlMemory<short int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<short int, CUtlMemory<short int, int> >::~CUtlVector(); // 487
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::RemoveAll(); // 1798
	CUtlMemory<short int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<short int, int>::Purge(); // 903
	CUtlMemory<short int, int>::Purge(); // 1799
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Purge(); // 560
	ValidateAlignment<short int>(void); // 508
	CUtlMemory<short int, int>::Purge(); // 510
	CUtlMemory<short int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<short int, CUtlMemory<short int, int> >::~CUtlVector(); // 487
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<IAnimationGraphInstance>(IAnimationGraphInstance* pObj); // 344
	CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::~CSmartPtr(); // 487
	CUtlVectorBase<IAnimationHelperSequenceFinishedCallback::RemoveAll(); // 1798
	CUtlMemory<IAnimationHelperSequenceFinishedCallback::IsExternallyAllocated(); // 905
	CUtlMemory<IAnimationHelperSequenceFinishedCallback::Purge(); // 903
	CUtlMemory<IAnimationHelperSequenceFinishedCallback::Purge(); // 1799
	CUtlVectorBase<IAnimationHelperSequenceFinishedCallback::Purge(); // 560
	ValidateAlignment<IAnimationHelperSequenceFinishedCallback*>(void); // 508
	CUtlMemory<IAnimationHelperSequenceFinishedCallback::Purge(); // 510
	CUtlMemory<IAnimationHelperSequenceFinishedCallback::~CUtlMemory(); // 562
	CUtlVectorBase<IAnimationHelperSequenceFinishedCallback::~CUtlVectorBase(); // 410
	CUtlVector<IAnimationHelperSequenceFinishedCallback::~CUtlVector(); // 487
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 487
	CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimationDecodeOp, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationDecodeOp, int>::Purge(); // 903
	CUtlMemory<CAnimationDecodeOp, int>::Purge(); // 1799
	CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::Purge(); // 560
	ValidateAlignment<CAnimationDecodeOp>(void); // 508
	CUtlMemory<CAnimationDecodeOp, int>::Purge(); // 510
	CUtlMemory<CAnimationDecodeOp, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::~CUtlVector(); // 487
	CStrongHandle<InfoForResourceTypeCModel>::~CStrongHandle(); // 487
} /* size: 263, inline expansions: 58 (889 bytes) */

// <00CEF700> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:489
void CAnimationHelper::SetLoopBehavior(AnimationHelperLoopBehavior_t nLoop)
{
} /* size: 11 */

// <00CEF6D2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:494
void CAnimationHelper::GetLoopBehavior()
{
} /* size: 11 */

// <00CEF592> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:499
// variables: 3
// function calls: 3
void CAnimationHelper::RestartAnimations()
{
	int nCount; // 501
	{
		int i; // 502
		{
			CAnimationDecodeOp& op; // 504
			CUtlMemory<CAnimationDecodeOp, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::operator[](
					int i);  // 504
		}
	}
	CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::Count(); // 501
} /* size: 54, variables: 1, inline expansions: 1 (4 bytes) */

// <00CEF546> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:515
void CAnimationHelper::ResetTransformsToBindPose()
{
} /* size: 13 */

// <00CEF518> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:520
void CAnimationHelper::GetAnimGraphLocalToWorldMatrix()
{
} /* size: 12 */

// <00CEF4DA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:525
void CAnimationHelper::SetAnimGraphLocalToWorldMatrix(const matrix3x4_t& mAnimGraphLocalToWorld)
{
} /* size: 70 */

// <00CEF0EE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:530
// variable: 1
// function calls: 16
void CAnimationHelper::AddSequenceFinishedCallback(IAnimationHelperSequenceFinishedCallback* pCallbacks)
{
	{
		int i; // 1531
		CUtlVectorBase<IAnimationHelperSequenceFinishedCallback::Count(); // 1531
		CUtlMemory<IAnimationHelperSequenceFinishedCallback::operator[](
				int i);  // 609
		CUtlVectorBase<IAnimationHelperSequenceFinishedCallback::Element(
			int i);  // 1533
	}
	CUtlVectorBase<IAnimationHelperSequenceFinishedCallback::Find(
		IAnimationHelperSequenceFinishedCallback* const& src);  // 532
	CUtlVectorBase<IAnimationHelperSequenceFinishedCallback::Count(); // 537
	CUtlMemory<IAnimationHelperSequenceFinishedCallback::NumAllocated(); // 1196
	CUtlMemory<IAnimationHelperSequenceFinishedCallback::operator[](
			int i);  // 602
	CUtlVectorBase<IAnimationHelperSequenceFinishedCallback::Element(
		int i);  // 1201
	CopyConstruct<IAnimationHelperSequenceFinishedCallback*>(IAnimationHelperSequenceFinishedCallback** pMemory,
								IAnimationHelperSequenceFinishedCallback* const& src);  // 1201
	CUtlMemory<IAnimationHelperSequenceFinishedCallback::IsGrowable(); // 823
	CUtlMemory<IAnimationHelperSequenceFinishedCallback::IsExternallyAllocated(); // 859
	CUtlMemory<IAnimationHelperSequenceFinishedCallback::IsExternallyAllocated(); // 861
	CUtlMemory<IAnimationHelperSequenceFinishedCallback::Grow(
		int num);  // 806
	CUtlVectorBase<IAnimationHelperSequenceFinishedCallback::ResetDbgInfo(); // 824
	CUtlVectorBase<IAnimationHelperSequenceFinishedCallback::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<IAnimationHelperSequenceFinishedCallback::AddToTail(
			IAnimationHelperSequenceFinishedCallback* const& src);  // 534
} /* size: 411, inline expansions: 13 (925 bytes) */

// <00CEEDEB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:540
// variable: 1
// function calls: 13
void CAnimationHelper::RemoveSequenceFinisheCallback(IAnimationHelperSequenceFinishedCallback* pCallbacks)
{
	{
		int i; // 1531
		CUtlVectorBase<IAnimationHelperSequenceFinishedCallback::Count(); // 1531
		CUtlMemory<IAnimationHelperSequenceFinishedCallback::operator[](
				int i);  // 609
		CUtlVectorBase<IAnimationHelperSequenceFinishedCallback::Element(
			int i);  // 1533
	}
	CUtlVectorBase<IAnimationHelperSequenceFinishedCallback::Find(
		IAnimationHelperSequenceFinishedCallback* const& src);  // 1617
	CUtlMemory<IAnimationHelperSequenceFinishedCallback::operator[](
			int i);  // 602
	CUtlVectorBase<IAnimationHelperSequenceFinishedCallback::Element(
		int i);  // 1114
	CUtlMemory<IAnimationHelperSequenceFinishedCallback::operator[](
			int i);  // 602
	CUtlVectorBase<IAnimationHelperSequenceFinishedCallback::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<IAnimationHelperSequenceFinishedCallback::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<IAnimationHelperSequenceFinishedCallback::Remove(
		int elem);  // 1620
	CUtlVectorBase<IAnimationHelperSequenceFinishedCallback::FindAndRemove(
			IAnimationHelperSequenceFinishedCallback* const& src);  // 542
} /* size: 148, inline expansions: 10 (319 bytes) */

// <00D27F9F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:547
// variables: 2
// function calls: 2
void CAnimationHelper::SetBlendSequenceTransitions(bool bBlendTransitions)
{
	bool bChanged; // 549
	{
		int i; // 350
	}
	CSimpleSequenceTransitioner<CAnimationHelper>::Reset(); // 554
	CAnimationHelper::SetBlendSequenceTransitions(
					bool bBlendTransitions);  // 547
} /* size: 83, variables: 1, inline expansions: 2 (100 bytes) */

// <00CEEDB8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:547
// variable: 1
void CAnimationHelper::SetBlendSequenceTransitions(bool bBlendTransitions)
{
	bool bChanged; // 549
} /* size: 0, variables: 1 */

// <00D270B5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:558
void CAnimationHelper::IsBlendingSequenceTransitions()
{
} /* size: 12 */

// <00CEE6A3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:563
// variables: 5
// function calls: 27
void CAnimationHelper::SetModel(HModel hModel)
{
	{
		int nPoseParameterCount; // 575
		{
			int i; // 577
			CStrongHandle<InfoForResourceTypeCModel>::operator->(); // 579
			CUtlMemory<float, int>::operator[](
					int i);  // 588
			CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
					int i);  // 579
		}
	}
	{
		const CModel* pModel; // 591
		{
			const CPhysAggregateData* pAggregateData; // 593
			{
				const CModelSkeleton* pSkeleton; // 595
			}
			CPhysAggregateDataHandle::Get(); // 400
			CModel::GetPhysicsContainer(); // 593
		}
		CStrongHandle<InfoForResourceTypeCModel>::GetData(); // 591
	}
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 570
	CStrongHandle<InfoForResourceTypeCModel>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CWeakHandle<InfoForResourceTypeCModel>::GetBinding(); // 673
	CStrongHandle<InfoForResourceTypeCModel>::operator=(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 565
	CWeakHandle<InfoForResourceTypeCModel>::Init(
		const CWeakHandle<InfoForResourceTypeCModel>& src);  // 273
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 567
	CStrongHandle<InfoForResourceTypeCModel>::GetData(); // 573
	matrix3x4_t::SetToIdentity(); // 585
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::RemoveAll(); // 1798
	CUtlMemory<short int, int>::Purge(); // 903
	CUtlMemory<short int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<short int, int>::Purge(); // 1799
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Purge(); // 588
	CUtlMemory<short int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<short int, int>::Purge(); // 903
	CUtlMemory<short int, int>::Purge(); // 1799
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::RemoveAll(); // 1798
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Purge(); // 589
} /* size: 534, inline expansions: 21 (577 bytes) */

// <00CEE251> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:601
// function calls: 20
void CAnimationHelper::SetSequence(HSequence hSequence)
{
	CAnimationHelper::IsBlendingSequenceTransitions(); // 603
	CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::Count(); // 603
	CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::RemoveAll(); // 609
	CUtlMemory<CAnimationDecodeOp, int>::NumAllocated(); // 1143
	CUtlMemory<CAnimationDecodeOp, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::Element(
		int i);  // 1148
	CAnimationDecodeOp::CAnimationDecodeOp(); // 1479
	Construct<CAnimationDecodeOp>(CAnimationDecodeOp* pMemory); // 1148
	CUtlMemory<CAnimationDecodeOp, int>::Base(); // 112
	CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::Base(); // 368
	CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::AddToTail(); // 610
	CUtlMemory<CAnimationDecodeOp, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::operator[](
			int i);  // 612
	CUtlMemory<CAnimationDecodeOp, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::operator[](
			int i);  // 613
	CUtlMemory<CAnimationDecodeOp, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::operator[](
			int i);  // 614
	CSimpleSequenceTransitioner<CAnimationHelper>::ForcePreviousSequenceIntoTransitionLayer(); // 606
} /* size: 223, inline expansions: 20 (252 bytes) */

// <00CEDCDA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:617
// variable: 1
// function calls: 24
void CAnimationHelper::SetSequence(int nIndex, HSequence hSequence, float flWeight)
{
	CAnimationHelper::IsBlendingSequenceTransitions(); // 620
	CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::Count(); // 621
	CUtlMemory<CAnimationDecodeOp, int>::NumAllocated(); // 782
	CUtlMemory<CAnimationDecodeOp, int>::Base(); // 112
	CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::Base(); // 368
	CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
		CUtlMemory<CAnimationDecodeOp, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::Element(
			int i);  // 1453
		CAnimationDecodeOp::CAnimationDecodeOp(); // 1479
		Construct<CAnimationDecodeOp>(CAnimationDecodeOp* pMemory); // 1453
	}
	CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::AddMultipleToTail(
				int num);  // 1071
	CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::Count(); // 1069
	CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::EnsureCount(
			int num);  // 627
	CUtlMemory<CAnimationDecodeOp, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::operator[](
			int i);  // 628
	CSimpleSequenceTransitioner<CAnimationHelper>::ForcePreviousSequenceIntoTransitionLayer(); // 624
	CUtlMemory<CAnimationDecodeOp, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::operator[](
			int i);  // 629
	CUtlMemory<CAnimationDecodeOp, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::operator[](
			int i);  // 630
} /* size: 449, inline expansions: 20 (1021 bytes) */

// <00CED77A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:633
// variable: 1
// function calls: 23
void CAnimationHelper::SetSequences(int nSequences, CAnimationDecodeOp* pSequences)
{
	CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlMemory<CAnimationDecodeOp, int>::NumAllocated(); // 782
	CUtlMemory<CAnimationDecodeOp, int>::Base(); // 112
	CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::Base(); // 368
	CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
		CUtlMemory<CAnimationDecodeOp, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::Element(
			int i);  // 1453
		CAnimationDecodeOp::CAnimationDecodeOp(); // 1479
		Construct<CAnimationDecodeOp>(CAnimationDecodeOp* pMemory); // 1453
	}
	CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::SetCount(
		int count);  // 1341
	CUtlMemory<CAnimationDecodeOp, int>::Base(); // 112
	CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::Base(); // 102
	CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::begin(); // 1344
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<CAnimationDecodeOp>(const CAnimationDecodeOp* pFrom,
						const CAnimationDecodeOp* pFromEnd,
						CAnimationDecodeOp* pTo);  // 173
	UtlTraitsCopyRange<CAnimationDecodeOp>(const CAnimationDecodeOp* pFrom,
						const CAnimationDecodeOp* pFromEnd,
						CAnimationDecodeOp* pTo);  // 1344
	CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::CopyArray(
			const CAnimationDecodeOp* pArray,
			int size);  // 643
} /* size: 299, inline expansions: 19 (1378 bytes) */

// <00CED6F8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:646
// variable: 1
// function call: 1
void CAnimationHelper::ResetSequenceTransitioner()
{
	{
		int i; // 350
	}
	CSimpleSequenceTransitioner<CAnimationHelper>::Reset(); // 648
} /* size: 55, inline expansions: 1 (50 bytes) */

// <00CED6CA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:651
void CAnimationHelper::GetAnimationGraphInstance()
{
} /* size: 12 */

// <00CED6B2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:656
void CAnimationHelper::GetAnimationGraphInstanceForModify()
{
} /* size: 0 */

// <00CED3AA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:661
// function calls: 14
void CAnimationHelper::SetAnimationGraphInstance(const IAnimationGraphInstancePtr& pAnimGraphInstance)
{
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<IAnimationGraphInstance>(IAnimationGraphInstance* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<IAnimationGraphInstance>(IAnimationGraphInstance* pObj); // 370
	CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::operator=(
			IAnimationGraphInstance* pObj);  // 406
	CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::operator=(
			const CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>& other);  // 663
	matrix3x4_t::SetToIdentity(); // 664
} /* size: 131, inline expansions: 14 (339 bytes) */

// <00CED1E4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:667
// variables: 6
// function calls: 4
void CAnimationHelper::JumpToFrame(int nIndex, float flFrameNumber)
{
	const CModel* pModel; // 669
	CAnimationDecodeOp& op; // 676
	HSequence hSequence; // 677
	const ISequence* pSequence; // 678
	{
		int nFinalFrame; // 681
		{
			float flCycle; // 684
		}
	}
	CStrongHandle<InfoForResourceTypeCModel>::GetData(); // 669
	CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::Count(); // 673
	CUtlMemory<CAnimationDecodeOp, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::operator[](
			int i);  // 676
} /* size: 145, variables: 4, inline expansions: 4 (40 bytes) */

// <00CED1B2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:694
// variable: 1
float LoopCycle(float flCycle)
{
	float flLoopedCycle; // 696
} /* size: 0, variables: 1 */

// <00C4C5FD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:709
// variables: 26
// function calls: 133
void CAnimationHelper::FrameAdvance(matrix3x4a_t& rootToWorld, float dt, AnimationEventOccurrences_t* pArrAnimationEvents)
{
	const CModel* pModel; // 711
	const char   __FUNCTION__; // 21979
	CUtlVector<AnimEventDetectDesc_t, CUtlMemory<AnimEventDetectDesc_t, int> > animEventDetectDescs; // 718
	Vector vMovement; // 720
	QAngle vAngles; // 721
	float flScale; // 722
	bool bUpdateRoot; // 723
	int opCount; // 729
	CUtlVector<CAnimationHelper::FrameAdvance(matrix3x4a_t&, float, AnimationEventOccurrences_t*)::notify_t, CUtlMemory<CAnimationHelper::FrameAdvance(matrix3x4a_t&, float, AnimationEventOccurrences_t*)::notify_t, int> > notify; // 736
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 712
	}
	{
		int i; // 741
		{
			float flPreviousCycle; // 747
			float flCyclesPerSecond; // 750
			float flCycle; // 751
			const ISequence* pSequence; // 753
			bool bSequenceLoops; // 757
			bool bLoopBecauseLoopingSequence; // 768
			{
				notify_t* pNotify; // 761
				CUtlMemory<CAnimationHelper::FrameAdvance(matrix3x4a_t&, float, AnimationEventOccurrences_t::operator[](
						int i);  // 602
				CUtlVectorBase<CAnimationHelper::FrameAdvance(matrix3x4a_t&, float, AnimationEventOccurrences_t::Element(
					int i);  // 1148
				HSequence::HSequence(); // 730
				notify_t::notify_t(); // 1479
				Construct<CAnimationHelper::FrameAdvance(matrix3x4a_t&, float, AnimationEventOccurrences_t*)::notify_t>(notify_t* pMemory); // 1148
				CUtlMemory<CAnimationHelper::FrameAdvance(matrix3x4a_t&, float, AnimationEventOccurrences_t::Grow(
					int num);  // 806
				CUtlVectorBase<CAnimationHelper::FrameAdvance(matrix3x4a_t&, float, AnimationEventOccurrences_t::GrowMemory(
						int num);  // 1145
				CUtlVectorBase<CAnimationHelper::FrameAdvance(matrix3x4a_t&, float, AnimationEventOccurrences_t::AddToTail()::notify_t, CUtlMe this); // 1156
				CUtlVectorBase<CAnimationHelper::FrameAdvance(matrix3x4a_t&, float, AnimationEventOccurrences_t::AddToTailGetPtr()::notify_t, CUtlMe this); // 761
				CUtlMemory<CAnimationDecodeOp, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::operator[](
						int i);  // 763
			}
			{
				bool bLetSequenceEnd; // 781
				LoopCycle(float flCycle); // 694
				LoopCycle(float flCycle); // 790
				clamp<float, float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 786
				CUtlMemory<CAnimationDecodeOp, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::operator[](
						int i);  // 786
				CUtlMemory<CAnimationDecodeOp, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::operator[](
						int i);  // 790
			}
			{
				Vector vLocalMovement; // 801
				QAngle vLocalAngles; // 802
				float flPrevCycle; // 804
				Vector::Vector(); // 801
				QAngle::QAngle(); // 802
				CUtlMemory<CAnimationDecodeOp, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::operator[](
						int i);  // 813
				CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 826
				CUtlMemory<float, int>::Base(); // 112
				CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 828
				CAnimationSystem::ComputeSequenceMovement(
							const CModel* pModel,
							HSequence hSequence,
							float flPrevCycle,
							float flNextCycle,
							const float* pPoseParameter,
							Vector* pVecPos,
							QAngle* pAngles);  // 826
				CUtlMemory<CAnimationDecodeOp, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::operator[](
						int i);  // 831
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::Vector(); // 1443
				Vector::operator-(
						const Vector& v);  // 262
				Vector::Vector(); // 1450
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::operator*(
						float fl);  // 262
				Vector::Vector(); // 1436
				VectorAdd(const Vector& a,
						const Vector& b,
						Vector& c);  // 1437
				Vector::operator+(
						const Vector& v);  // 262
				Lerp<Vector>(float flPercent,
						const Vector& A,
						const Vector& B);  // 831
				Vector::operator=(
						const Vector& vOther);  // 831
				QAngle::operator==(
						const QAngle& src);  // 1073
				Quaternion::Quaternion(); // 1076
				Quaternion::Quaternion(); // 1076
				Quaternion::Quaternion(); // 1082
				QAngle::QAngle(); // 1088
				Lerp<QAngle>(float flPercent,
						const QAngle& q1,
						const QAngle& q2);  // 832
				QAngle::operator=(
						const QAngle& vOther);  // 832
			}
			{
				AnimEventDetectDesc_t& desc; // 839
				CUtlMemory<AnimEventDetectDesc_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<AnimEventDetectDesc_t, CUtlMemory<AnimEventDetectDesc_t, int> >::Element(
					int i);  // 1148
				CAnimationDecodeOp::CAnimationDecodeOp(); // 87
				CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 87
				AnimEventDetectDesc_t::AnimEventDetectDesc_t(); // 1479
				Construct<AnimEventDetectDesc_t>(AnimEventDetectDesc_t* pMemory); // 1148
				CUtlMemory<AnimEventDetectDesc_t, int>::Grow(
					int num);  // 806
				CUtlVectorBase<AnimEventDetectDesc_t, CUtlMemory<AnimEventDetectDesc_t, int> >::GrowMemory(
						int num);  // 1145
				CUtlVectorBase<AnimEventDetectDesc_t, CUtlMemory<AnimEventDetectDesc_t, int> >::AddToTail(); // 839
				CUtlMemory<CAnimationDecodeOp, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::operator[](
						int i);  // 841
				CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
				CStrongHandle<InfoForResourceTypeCModel>::operator CWeakHandle<InfoForResourceTypeCModel>(); // 842
				CWeakHandle<InfoForResourceTypeCModel>::Init(
					const CWeakHandle<InfoForResourceTypeCModel>& src);  // 331
				CWeakHandle<InfoForResourceTypeCModel>::operator=(
						const CWeakHandle<InfoForResourceTypeCModel>& src);  // 842
				CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 844
				CUtlMemory<float, int>::Base(); // 112
				CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 845
				CUtlMemory<CAnimationDecodeOp, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::operator[](
						int i);  // 846
				CUtlMemory<CAnimationDecodeOp, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::operator[](
						int i);  // 847
			}
			CUtlMemory<CAnimationDecodeOp, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::operator[](
					int i);  // 744
			CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 750
			CUtlMemory<float, int>::Base(); // 112
			CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 750
			CAnimationSystem::ComputeSequenceCyclesPerSecond(
							const CModel* pModel,
							HSequence hSequence,
							const float* poseParameter);  // 750
			CUtlMemory<CAnimationDecodeOp, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::operator[](
					int i);  // 753
			LoopCycle(float flCycle); // 772
			CUtlMemory<CAnimationDecodeOp, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::operator[](
					int i);  // 795
		}
	}
	{
		int i; // 868
		{
			const notify_t& n; // 870
			{
				int j; // 871
				CUtlVectorBase<IAnimationHelperSequenceFinishedCallback::Count(); // 871
				CUtlMemory<IAnimationHelperSequenceFinishedCallback::operator[](
						int i);  // 588
				CUtlVectorBase<IAnimationHelperSequenceFinishedCallback::operator[](
						int i);  // 873
			}
			CUtlMemory<CAnimationHelper::FrameAdvance(matrix3x4a_t&, float, AnimationEventOccurrences_t::operator[](
					int i);  // 588
			CUtlVectorBase<CAnimationHelper::FrameAdvance(matrix3x4a_t&, float, AnimationEventOccurrences_t::operator[](
					int i);  // 870
		}
	}
	CStrongHandle<InfoForResourceTypeCModel>::GetData(); // 711
	CUtlMemory<AnimEventDetectDesc_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<AnimEventDetectDesc_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<AnimEventDetectDesc_t, CUtlMemory<AnimEventDetectDesc_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<AnimEventDetectDesc_t, CUtlMemory<AnimEventDetectDesc_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<AnimEventDetectDesc_t, CUtlMemory<AnimEventDetectDesc_t, int> >::CUtlVector(); // 718
	CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::Count(); // 729
	CUtlMemory<CAnimationHelper::FrameAdvance(matrix3x4a_t&, float, AnimationEventOccurrences_t::ValidateGrowSize()::notify_t, int>* this); // 475
	CUtlMemory<CAnimationHelper::FrameAdvance(matrix3x4a_t&, float, AnimationEventOccurrences_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CAnimationHelper::FrameAdvance(matrix3x4a_t&, float, AnimationEventOccurrences_t::ResetDbgInfo()::notify_t, CUtlMe this); // 530
	CUtlVectorBase<CAnimationHelper::FrameAdvance(matrix3x4a_t&, float, AnimationEventOccurrences_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CAnimationHelper::FrameAdvance(matrix3x4a_t&, float, AnimationEventOccurrences_t::CUtlVector()::notify_t, CUtlMemory this); // 736
	VectorAligned::VectorAligned(); // 34
	RadianEuler::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 2535
	RadianEuler::RadianEuler(
			const QAngle& angles);  // 2530
	Quaternion::Quaternion(
			const QAngle& angles);  // 34
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 30
	QuaternionAligned::QuaternionAligned(
				const Quaternion& rhs);  // 34
	{
		fltx4 retVal; // 186
		_mm_set_ps(const float  __Z,
				const float  __Y,
				const float  __X,
				const float  __W);  // 187
	}
	Set4Floats<>(float p0,
			float p1,
			float p2,
			float p3);  // 111
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 34
	CTransform::CTransform(
			const Vector& v,
			const QAngle& a,
			float flScale);  // 861
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			CTransform &);  // 861
	CAnimationHelper::IsBlendingSequenceTransitions(); // 863
	CUtlMemory<CAnimationHelper::FrameAdvance(matrix3x4a_t&, float, AnimationEventOccurrences_t::Purge()::notify_t, int>* this); // 903
	CUtlMemory<CAnimationHelper::FrameAdvance(matrix3x4a_t&, float, AnimationEventOccurrences_t::Purge()::notify_t, int>* this); // 1799
	CUtlVectorBase<CAnimationHelper::FrameAdvance(matrix3x4a_t&, float, AnimationEventOccurrences_t::Purge()::notify_t, CUtlMe this); // 560
	ValidateAlignment<CAnimationHelper::FrameAdvance(matrix3x4a_t&, float, AnimationEventOccurrences_t*)::notify_t>(void); // 508
	CUtlMemory<CAnimationHelper::FrameAdvance(matrix3x4a_t&, float, AnimationEventOccurrences_t::Purge()::notify_t, int>* this); // 510
	CUtlMemory<CAnimationHelper::FrameAdvance(matrix3x4a_t&, float, AnimationEventOccurrences_t::~CUtlMemory()::notify_t, int>* this); // 562
	CUtlVectorBase<CAnimationHelper::FrameAdvance(matrix3x4a_t&, float, AnimationEventOccurrences_t::~CUtlVectorBase()::notify_t, CUtlMe this); // 410
	CUtlVector<CAnimationHelper::FrameAdvance(matrix3x4a_t&, float, AnimationEventOccurrences_t::~CUtlVector()::notify_t, CUtlMemory this); // 876
	CUtlMemory<AnimEventDetectDesc_t, int>::Purge(); // 903
	CUtlMemory<AnimEventDetectDesc_t, int>::Purge(); // 1799
	CUtlVectorBase<AnimEventDetectDesc_t, CUtlMemory<AnimEventDetectDesc_t, int> >::Purge(); // 560
	ValidateAlignment<AnimEventDetectDesc_t>(void); // 508
	CUtlMemory<AnimEventDetectDesc_t, int>::Purge(); // 510
	CUtlMemory<AnimEventDetectDesc_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<AnimEventDetectDesc_t, CUtlMemory<AnimEventDetectDesc_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<AnimEventDetectDesc_t, CUtlMemory<AnimEventDetectDesc_t, int> >::~CUtlVector(); // 876
	CUtlMemory<CAnimationHelper::FrameAdvance(matrix3x4a_t&, float, AnimationEventOccurrences_t::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<CAnimationHelper::FrameAdvance(matrix3x4a_t&, float, AnimationEventOccurrences_t::EnsureCapacity(
			int num);  // 739
	Vector::Vector(); // 1261
	Vector::LargestComponentValue(); // 1263
	MatrixAngles(const matrix3x4_t& mat,
			QAngle& angles,
			Vector& position,
			float& flScale);  // 726
} /* size: 0, variables: 9, inline expansions: 46 (1233 bytes) */

// <00CED0F2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:878
// variables: 3
bool HasRigidBodyTransforms(const PhysicsBonesOverlay_t* pPhysicsOverlay, const CUtlVector<short int, CUtlMemory<short int, int> >& rBone2BodyMap)
{
	{
		int nBoneCount; // 882
		{
			int nIndex; // 883
			{
				int nBone; // 885
			}
		}
	}
} /* size: 0 */

// <00D31156> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:901
// variables: 4
void CAnimationHelper::UpdatePhysicsBones(const PhysicsBonesOverlay_t* pPhysicsOverlay, const CTransform& mRootToWorld, int nTransformCount, CTransform* pWorldTransforms)
{
	const CModel* pModel; // 908
	CVarBitVec boneBitList; // 923
	bool bHasRigidTransforms; // 935
	CTransform* pParentSpaceTransforms; // 936
} /* size: 0, variables: 4 */

// <00D2CE77> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:901
// variables: 15
// function calls: 56
void CAnimationHelper::UpdatePhysicsBones(const PhysicsBonesOverlay_t* pPhysicsOverlay, const CTransform& mRootToWorld, int nTransformCount, CTransform* pWorldTransforms)
{
	const CModel* pModel; // 908
	CVarBitVec boneBitList; // 923
	bool bHasRigidTransforms; // 935
	CTransform* pParentSpaceTransforms; // 936
	CStrongHandle<InfoForResourceTypeCModel>::GetData(); // 908
	CalcNumIntsForBits(int numBits); // 1292
	CVarBitVecBase<short unsigned int, 32>::AllocInts(
			int numInts);  // 2546
	CVarBitVecBase<short unsigned int, 32>::AllocInts(
			int numInts);  // 1294
	CVarBitVecBase<short unsigned int, 32>::CVarBitVecBase(
			int numBits);  // 1419
	CVarBitVecBase<short unsigned int, 32>::GetNumDWords(); // 1970
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1970
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::ClearAll(); // 1427
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::CBitVecT(
		int numBits);  // 1215
	CVarBitVecT<short unsigned int, 32>::CVarBitVecT(
			int numBits);  // 1224
	CVarBitVec::CVarBitVec(
			int nBitCount);  // 923
	{
		uint nBone; // 925
		{
			int nMasterSkeletonBoneIndex; // 927
			Bitvec_Set(uint32* pBits,
					int nBitNum);  // 1480
			CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1479
			{
			}
			CVarBitVecBase<short unsigned int, 32>::Base(); // 1480
			CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Set(
				int bitNum);  // 931
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					const CTransform  &);  // 930
		}
	}
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 135
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::IsEmpty(); // 880
	{
		int nBoneCount; // 882
		{
			int nIndex; // 883
			{
				int nBone; // 885
				CUtlMemory<short int, int>::operator[](
						int i);  // 595
				CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
						int i);  // 890
			}
		}
	}
	HasRigidBodyTransforms(const PhysicsBonesOverlay_t* pPhysicsOverlay,
				const CUtlVector<short int, CUtlMemory<short int, int> >& rBone2BodyMap);  // 935
	CStrongHandle<InfoForResourceTypeCModel>::operator==(
			const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 598
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 598
	CModel::GetAnimationStateData<(
							void* pBase);  // 602
	CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 601
	CAnimationState::GetAnimationData<()0>(const CAnimationState* this); // 936
	{
		int nBone; // 938
		{
			CTransform mParentSpaceMatrix; // 966
			int nParentBone; // 968
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 1471
			CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1470
			{
			}
			CVarBitVecBase<short unsigned int, 32>::Base(); // 1471
			CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(
				int bitNum);  // 940
			CUtlMemory<short int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
					int i);  // 948
			{
				const CModelSkeleton* pSkeleton; // 950
				CTransform mBoneTransform; // 952
				int nParent; // 954
				QuaternionAligned::operator fltx4(); // 471
				VectorAligned::operator fltx4(); // 471
				CTransform::operator*(
						const CTransform& rhs);  // 957
				VectorAligned::operator=(
						const VectorAligned& src);  // 26
				QuaternionAligned::operator=(
						const QuaternionAligned& vOther);  // 26
				CTransform::operator=(
						CTransform &);  // 957
				VectorAligned::operator=(
						const VectorAligned& src);  // 26
				QuaternionAligned::operator=(
						const QuaternionAligned& vOther);  // 26
				CTransform::operator=(
						const CTransform  &);  // 960
			}
			CStrongHandle<InfoForResourceTypeCModel>::operator->(); // 968
			ConcatTransforms(const CTransform  in1,
					const CTransform  in2);  // 969
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					CTransform &);  // 969
		}
	}
	CVarBitVecBase<short unsigned int, 32>::FreeInts(); // 1342
	CVarBitVecBase<short unsigned int, 32>::~CVarBitVecBase(); // 914
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::~CBitVecT(); // 1207
	CVarBitVecT<short unsigned int, 32>::~CVarBitVecT(); // 1220
	CVarBitVec::~CVarBitVec(); // 975
} /* size: 0, variables: 4, inline expansions: 27 (1083 bytes) */

// <00CECFC7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:901
// variables: 12
void CAnimationHelper::UpdatePhysicsBones(const PhysicsBonesOverlay_t* pPhysicsOverlay, const CTransform& mRootToWorld, int nTransformCount, CTransform* pWorldTransforms)
{
	const CModel* pModel; // 908
	CVarBitVec boneBitList; // 923
	bool bHasRigidTransforms; // 935
	CTransform* pParentSpaceTransforms; // 936
	{
		uint nBone; // 925
		{
			int nMasterSkeletonBoneIndex; // 927
		}
	}
	{
		int nBone; // 938
		{
			CTransform mParentSpaceMatrix; // 966
			int nParentBone; // 968
			{
				const CModelSkeleton* pSkeleton; // 950
				CTransform mBoneTransform; // 952
				int nParent; // 954
			}
		}
	}
} /* size: 0, variables: 4 */

// <00CE990F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:977
// variables: 31
// function calls: 203
void CAnimationHelper::Update(matrix3x4a_t& mRootToWorld, float flDeltaTime, const PhysicsBonesOverlay_t* pPhysicsOverlay, const BoneMergeOverlay_t* pBoneMergeOverlay, int nLod, AnimationEventOccurrences_t* pArrAnimationEvents, bool bApplyRootMotionToPhysics, CTransform* pAnimationTransforms)
{
	const int  nTransformCount; // 986
	const char   __FUNCTION__; // 21817
	CUtlVectorFixedGrowable<CTransform, 128> pWorldTransforms; // 1110
	CTransform xformRootToWorld; // 1117
	CTransform mPhysicsRootTransform; // 1118
	{
		CTransform* pParentTransforms; // 989
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 990
		}
		CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 598
		CStrongHandle<InfoForResourceTypeCModel>::operator==(
				const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 598
		CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 601
		CModel::GetAnimationStateData<(
								void* pBase);  // 602
		CAnimationState::GetAnimationData<()0>(const CAnimationState* this); // 989
		CStrongHandle<InfoForResourceTypeCModel>::operator->(); // 993
	}
	{
		CAnimationDecodeContext ctx; // 999
		HAnimationDecodeDesc hDesc; // 1002
		uint32 nAnimationDecodeDescFlags; // 1004
		{
			matrix3x4_t deltaMtx; // 1021
			{
				CMotionTransform rootMotion; // 1025
				CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::operator->(); // 1025
				matrix3x4_t::matrix3x4_t(); // 1019
				operator*(const matrix3x4_t& in1,
						const matrix3x4_t& in2);  // 1027
			}
			matrix3x4_t::matrix3x4_t(); // 1021
			CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::operator->(); // 1063
			matrix3x4_t::matrix3x4_t(); // 753
			Vector::LargestComponentValue(); // 755
			MatrixPosition(const matrix3x4_t& matrix,
					Vector& position);  // 757
			MatrixQuaternion(const matrix3x4_t& mat,
					Quaternion& q,
					Vector& o,
					float& flScale);  // 308
			Quaternion::Quaternion(); // 305
			Vector::Vector(); // 306
			QuaternionAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z,
				vec_t W);  // 217
			QuaternionAligned::operator=(
					const Quaternion& vOther);  // 309
			{
				fltx4 retVal; // 186
				_mm_set_ps(const float  __Z,
						const float  __Y,
						const float  __X,
						const float  __W);  // 187
			}
			Set4Floats<>(float p0,
					float p1,
					float p2,
					float p3);  // 111
			VectorAligned::operator=(
					fltx4 src);  // 111
			CTransform::SetPositionAndScale(
						const Vector& v0,
						float flScale);  // 310
			CTransform::InitFromMatrix(
					const matrix3x4_t& xform);  // 530
			VectorAligned::VectorAligned(); // 31
			QuaternionAligned::QuaternionAligned(); // 31
			CTransform::CTransform(); // 529
			matrix3x4_t::ToCTransform(); // 1063
			ThreadInterlockedDecrement(volatile int32* p); // 690
			{
				CRefCountedMemPoolObject<CAnimPose>* nonConstThisPtr; // 698
				CUtlMemory<CAnimPose::NumAllocated(); // 228
				CUtlMemory<CAnimPose::Base(); // 97
				CUtlStack<CAnimPose::ResetDbgInfo(); // 233
				CUtlStack<CAnimPose::GrowStack(); // 267
				CUtlMemory<CAnimPose::operator[](
						int i);  // 155
				CUtlStack<CAnimPose::Element(
					int i);  // 268
				CopyConstruct<CAnimPose*>(CAnimPose** pMemory,
								CAnimPose* const& src);  // 268
				CUtlStack<CAnimPose::Push(
					CAnimPose* const& src);  // 604
				CEnduringClassMemoryPool<CAnimPose>::Free(
					CAnimPose* pObject);  // 699
			}
			CRefCountedMemPoolObject<CAnimPose>::Release(); // 688
			CRefCountedMemPoolObject<CAnimPose>::Release(); // 27
			Release<const CAnimPose>(const CAnimPose* pObj); // 344
			CSmartPtr<const CAnimPose, CRefCountAccessor>::~CSmartPtr(); // 1063
			matrix3x4_t::matrix3x4_t(); // 1019
			operator*(const matrix3x4_t& in1,
					const matrix3x4_t& in2);  // 1070
			matrix3x4_t::Base(); // 291
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 291
			matrix3x4a_t::operator=(
					const matrix3x4_t& src);  // 1070
		}
		{
			CAnimationDecodeOp op; // 1083
			CAnimationDecodeOp* pOps; // 1084
			int nOpCount; // 1085
			{
				int i; // 1089
				CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::Count(); // 1089
				CUtlMemory<CAnimationDecodeOp, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >::operator[](
						int i);  // 1091
			}
			CAnimationDecodeOp::CAnimationDecodeOp(); // 1083
			CAnimationHelper::IsBlendingSequenceTransitions(); // 1095
			CUtlMemory<float, int>::Base(); // 112
			CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 1100
			CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 1100
			CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
			CWeakHandle<InfoForResourceTypeCModel>::InitUntypedUnchecked(
						ResourceHandle_t hUntypedResource);  // 227
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
			CStrongHandle<InfoForResourceTypeCModel>::operator CWeakHandle<InfoForResourceTypeCModel>(); // 314
			CAnimationState::GetModel(); // 1100
			{
				int i; // 302
			}
			{
				int i; // 308
				{
					TransitioningLayer_t& layer; // 310
					{
					}
					{
					}
				}
			}
			{
				int i; // 319
				{
					TransitioningLayer_t& layer; // 324
					CAnimationDecodeOp& op; // 326
				}
			}
			CSimpleSequenceTransitioner<CAnimationHelper>::GetDecodeOperations(
						int nMaxOps,
						CAnimationDecodeOp* pOps,
						CUtlVector<CSimpleSequenceTransitioner<CAnimationHelper>::TransitioningLaterMetaInfo_t, CUtlMemory<CSimpleSequenceTransit pOptionalMetaInfo);  // 1097
		}
		CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::operator!=(
				const IAnimationGraphInstance* pOther);  // 1011
		matrix3x4_t::matrix3x4_t(); // 753
		Vector::LargestComponentValue(); // 755
		MatrixPosition(const matrix3x4_t& matrix,
				Vector& position);  // 757
		MatrixQuaternion(const matrix3x4_t& mat,
				Quaternion& q,
				Vector& o,
				float& flScale);  // 308
		Quaternion::Quaternion(); // 305
		Vector::Vector(); // 306
		QuaternionAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z,
			vec_t W);  // 217
		QuaternionAligned::operator=(
				const Quaternion& vOther);  // 309
		{
			fltx4 retVal; // 186
			_mm_set_ps(const float  __Z,
					const float  __Y,
					const float  __X,
					const float  __W);  // 187
		}
		Set4Floats<>(float p0,
				float p1,
				float p2,
				float p3);  // 111
		VectorAligned::operator=(
				fltx4 src);  // 111
		CTransform::SetPositionAndScale(
					const Vector& v0,
					float flScale);  // 310
		CTransform::InitFromMatrix(
				const matrix3x4_t& xform);  // 530
		VectorAligned::VectorAligned(); // 31
		QuaternionAligned::QuaternionAligned(); // 31
		CTransform::CTransform(); // 529
		matrix3x4_t::ToCTransform(); // 1015
		CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::operator->(); // 1016
		CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::operator->(); // 1076
		CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
		CWeakHandle<InfoForResourceTypeCModel>::InitUntypedUnchecked(
					ResourceHandle_t hUntypedResource);  // 227
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
		CStrongHandle<InfoForResourceTypeCModel>::operator CWeakHandle<InfoForResourceTypeCModel>(); // 314
		CAnimationState::GetModel(); // 1077
		CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::Get(); // 1077
	}
	{
		float* pflFlexControllers; // 1134
		const BoneConstraintResult_t  eBoneConstraintResult; // 1141
		CStrongHandle<InfoForResourceTypeCModel>::operator->(); // 1136
		CStrongHandle<InfoForResourceTypeCModel>::operator->(); // 1141
		CUtlMemory<CTransform, int>::Base(); // 112
		CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::Base(); // 1141
		operator&(BoneConstraintResult_t a,
				BoneConstraintResult_t b);  // 1143
		CUtlMemory<CTransform, int>::Base(); // 112
		CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::Base(); // 1145
		CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 598
		CStrongHandle<InfoForResourceTypeCModel>::operator==(
				const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 598
		CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 601
		CModel::GetAnimationStateData<(
								void* pBase);  // 602
		CAnimationState::GetAnimationData<()1>(const CAnimationState* this); // 1138
	}
	{
		int i; // 1160
		CUtlMemory<CTransform, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::operator[](
				int i);  // 1162
		CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::Count(); // 1160
		VectorAligned::operator=(
				const VectorAligned& src);  // 26
		QuaternionAligned::operator=(
				const QuaternionAligned& vOther);  // 26
		CTransform::operator=(
				const CTransform  &);  // 1162
	}
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 608
	CStrongHandle<InfoForResourceTypeCModel>::operator==(
			const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 608
	CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 611
	CAnimationState::GetAnimationDataCount<()0>(const CAnimationState* this); // 986
	CUtlMemory<CTransform, int>::CUtlMemory(
			CTransform* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CTransform, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CTransform, int>::CUtlMemoryFixedGrowable_Base(
					CTransform* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<128, CTransform, 16>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<128, CTransform>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<128, CTransform, 16>::Base(); // 231
	CUtlMemoryFixedGrowable<CTransform, 128, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CTransform, 128>::CUtlVectorFixedGrowable(
				int growSize);  // 1110
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlMemory<CTransform, int>::Base(); // 112
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::Base(); // 368
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::SetCount(
		int count);  // 1111
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 529
	Quaternion::Quaternion(); // 305
	Vector::Vector(); // 306
	matrix3x4_t::matrix3x4_t(); // 753
	Vector::LargestComponentValue(); // 755
	MatrixPosition(const matrix3x4_t& matrix,
			Vector& position);  // 757
	MatrixQuaternion(const matrix3x4_t& mat,
			Quaternion& q,
			Vector& o,
			float& flScale);  // 308
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 217
	QuaternionAligned::operator=(
			const Quaternion& vOther);  // 309
	{
		fltx4 retVal; // 186
		_mm_set_ps(const float  __Z,
				const float  __Y,
				const float  __X,
				const float  __W);  // 187
	}
	Set4Floats<>(float p0,
			float p1,
			float p2,
			float p3);  // 111
	VectorAligned::operator=(
			fltx4 src);  // 111
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 310
	CTransform::InitFromMatrix(
			const matrix3x4_t& xform);  // 530
	matrix3x4_t::ToCTransform(); // 1117
	CUtlMemory<CTransform, int>::Base(); // 112
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::Base(); // 1121
	CUtlMemory<CTransform, int>::Base(); // 112
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::Base(); // 1129
	CAnimationHelper::UpdatePhysicsBones(
				const PhysicsBonesOverlay_t* pPhysicsOverlay,
				const CTransform& mRootToWorld,
				int nTransformCount,
				CTransform* pWorldTransforms);  // 1129
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 1132
	ConVar::GetInt(); // 1132
	CUtlMemory<CTransform, int>::Base(); // 112
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::Base(); // 1153
	CStrongHandle<InfoForResourceTypeCModel>::operator==(
			const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 598
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 598
	CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 601
	CModel::GetAnimationStateData<(
							void* pBase);  // 602
	CAnimationState::GetAnimationData<()0>(const CAnimationState* this); // 1153
	CStrongHandle<InfoForResourceTypeCModel>::operator->(); // 1153
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCModel>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCModel>::operator CWeakHandle<InfoForResourceTypeCModel>(); // 1153
	_mm_cvtss_f32(__m128 __A); // 1553
	GetWSIMD<>(fltx4 a); // 98
	VectorAligned::operator fltx4(); // 98
	CTransform::GetScale(); // 362
	{
		int i; // 325
		{
			int j; // 327
		}
	}
	matrix3x4_t::ScaleUpper3x3Matrix(
				float flScale);  // 365
	CTransform::ToMatrix(); // 1167
	matrix3x4_t::Base(); // 291
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 291
	matrix3x4a_t::operator=(
			const matrix3x4_t& src);  // 1167
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<128, CTransform, 16>::Base(); // 237
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 577
	CUtlMemory<CTransform, int>::ConvertToExternalMemory(
				CTransform* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CTransform, int>::Purge_FixedGrowable(
				CTransform* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CTransform, int>::Purge_FixedGrowable(
				CTransform* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<CTransform, 128, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<CTransform, int>::Base(); // 112
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::Base(); // 368
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::Purge(); // 560
	ValidateAlignment<CTransform>(void); // 508
	CUtlMemory<CTransform, int>::Purge(); // 903
	CUtlMemory<CTransform, int>::Purge(); // 510
	CUtlMemory<CTransform, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CTransform, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CTransform, 128, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 128, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CTransform, 128>::~CUtlVectorFixedGrowable(); // 1169
} /* size: 0, variables: 5, inline expansions: 92 (2617 bytes) */

// <00CE98E1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:1171
void CAnimationHelper::GetRootMotion()
{
} /* size: 12 */

// <00CE98BF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:1189
void* __CreateCAnimationSystemUtilsIAnimationSystemUtils_interface(void)
{
} /* size: 12 */

// <00CE9735> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:1195
// function calls: 3
void CAnimationSystemUtils::CAnimationSystemUtils()
{
	IAnimationSystemUtils::IAnimationSystemUtils(); // 1196
	CTSListBase::CTSListBase(); // 337
	CTSPool<CThreadLocalAnimationDecodeCache>::CTSPool(); // 1196
} /* size: 57, inline expansions: 3 (56 bytes) */

// <00CE971C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:1195
void CAnimationSystemUtils::CAnimationSystemUtils()
{
} /* size: 0 */

// <00CE94AE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:1200
// function calls: 9
void CAnimationSystemUtils::~CAnimationSystemUtils()
{
	CThreadEvent::~CThreadEvent(); // 2177
	CThreadEvent::~CThreadEvent(); // 2177
	CThreadRWLock_FastRead::~CThreadRWLock_FastRead(); // 1202
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 244
	ThreadPause(void); // 230
	CTSListBase::Detach(); // 135
	CTSListBase::~CTSListBase(); // 351
	CTSPool<CThreadLocalAnimationDecodeCache>::~CTSPool(); // 1202
} /* size: 180, inline expansions: 9 (356 bytes) */

// <00CE91FA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:1200
// function calls: 10
void CAnimationSystemUtils::~CAnimationSystemUtils()
{
	CThreadEvent::~CThreadEvent(); // 2177
	CThreadEvent::~CThreadEvent(); // 2177
	CThreadRWLock_FastRead::~CThreadRWLock_FastRead(); // 1202
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 244
	ThreadPause(void); // 230
	CTSListBase::Detach(); // 135
	CTSListBase::~CTSListBase(); // 351
	CTSPool<CThreadLocalAnimationDecodeCache>::~CTSPool(); // 1202
	CAnimationSystemUtils::~CAnimationSystemUtils(); // 1202
} /* size: 202, inline expansions: 10 (538 bytes) */

// <00CE91E1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:1200
void CAnimationSystemUtils::~CAnimationSystemUtils()
{
} /* size: 0 */

// <00CE8C1F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:1208
// variables: 4
// function calls: 22
void CAnimationSystemUtils::Init()
{
	const CPUInformation& cpuInfo; // 1210
	const int  nLogicalProcessors; // 1211
	{
		int i; // 1213
		{
			CThreadLocalAnimationDecodeCache* pCache; // 1215
			ThreadInterlockedAssignIf128(volatile int128* pDest,
							const int128& value,
							const int128& comparand);  // 478
			ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
								const InterlockedPointerX2SizedInt_t& value,
								const InterlockedPointerX2SizedInt_t& comperand);  // 203
			ThreadPause(void); // 208
			CTSListBase::Pop(); // 376
			{
			}
			AlignedByteArrayExplicit_t<256, CAnimationDecodeCacheEntry_t, 16>::AlignedByteArrayExplicit_t(); // 1597
			AlignedByteArray_t<256, CAnimationDecodeCacheEntry_t>::AlignedByteArray_t(); // 228
			CUtlMemory<CAnimationDecodeCacheEntry_t, int>::CUtlMemory(
					CAnimationDecodeCacheEntry_t* pMemory,
					int numElements,
					bool bGrowable,
					uint32 nGrowable_GrowSize);  // 197
			CUtlMemory<CAnimationDecodeCacheEntry_t, int>::EnsureCapacity(
					int num);  // 199
			CUtlMemoryFixedGrowable_Base<CAnimationDecodeCacheEntry_t, int>::CUtlMemoryFixedGrowable_Base(
							CAnimationDecodeCacheEntry_t* pFixedMemory,
							int nFixedElements,
							int nGrowSize,
							int nInitAllocationCount);  // 228
			AlignedByteArrayExplicit_t<256, CAnimationDecodeCacheEntry_t, 16>::Base(); // 231
			CUtlMemoryFixedGrowable<CAnimationDecodeCacheEntry_t, 256, int>::CUtlMemoryFixedGrowable(
						int nGrowSize,
						int nInitSize);  // 527
			CUtlVectorBase<CAnimationDecodeCacheEntry_t, CUtlMemoryFixedGrowable<CAnimationDecodeCacheEntry_t, 256, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<CAnimationDecodeCacheEntry_t, CUtlMemoryFixedGrowable<CAnimationDecodeCacheEntry_t, 256, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 484
			CUtlVectorFixedGrowable<CAnimationDecodeCacheEntry_t, 256>::CUtlVectorFixedGrowable(
						int growSize);  // 22
			CThreadLocalAnimationDecodeCache::CThreadLocalAnimationDecodeCache(); // 341
			simpleTSPoolStruct_t::simpleTSPoolStruct_t(); // 382
			CTSPool<CThreadLocalAnimationDecodeCache>::GetObject(); // 1215
			ThreadPause(void); // 173
			ThreadInterlockedAssignIf128(volatile int128* pDest,
							const int128& value,
							const int128& comparand);  // 478
			ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
								const InterlockedPointerX2SizedInt_t& value,
								const InterlockedPointerX2SizedInt_t& comperand);  // 168
			CTSListBase::Push(
				TSLNodeBase_t* pNode);  // 371
			CTSPool<CThreadLocalAnimationDecodeCache>::PutObject(
					CThreadLocalAnimationDecodeCache* pInfo);  // 1216
		}
	}
} /* size: 388, variables: 2 */

// <00D33197> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:1222
void CAnimationSystemUtils::Shutdown()
{
} /* size: 0 */

// <00CE8AFE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:1232
// function calls: 2
void CAnimationSystemUtils::CreateAnimationHelper(HModel hModel, void* pModelContext)
{
	CWeakHandle<InfoForResourceTypeCModel>::Init(
		const CWeakHandle<InfoForResourceTypeCModel>& src);  // 273
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 1234
} /* size: 100, inline expansions: 2 (14 bytes) */

// <00CE8A46> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:1237
// function call: 1
void CAnimationSystemUtils::DestroyAnimationHelper(IAnimationHelper* pHelper)
{
	CAnimationHelper::~CAnimationHelper(); // 1239
} /* size: 85, inline expansions: 1 (37 bytes) */

// <00CE85AD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:1242
// variables: 3
// function calls: 13
void CAnimationSystemUtils::MaintainDecodeCaches()
{
	CachePoolNode* pDetached; // 1250
	CachePoolNode* pNode; // 1251
	{
		CachePoolNode* pNext; // 1254
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 371
		CTSPool<CThreadLocalAnimationDecodeCache>::PutObject(
				CThreadLocalAnimationDecodeCache* pInfo);  // 1256
	}
	CInterlockedIntT<int, 4>::GetRaw(); // 3180
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<unsigned int, 4>::AtomicAdd(
			unsigned int add);  // 3189
	CThreadRWLock_FastRead::LockForWrite(
			const char* pFileName,
			int nLineNumber);  // 1244
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 244
	ThreadPause(void); // 230
	CTSListBase::Detach(); // 1250
} /* size: 427, variables: 2, inline expansions: 8 (326 bytes) */

// <00CE80C6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:1263
// function calls: 20
void CAnimationSystemUtils::GetThreadLocalDecodeCache()
{
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 3093
	CThreadRWLock_FastRead::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 1265
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 376
	CUtlMemory<CAnimationDecodeCacheEntry_t, int>::CUtlMemory(
			CAnimationDecodeCacheEntry_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CAnimationDecodeCacheEntry_t, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CAnimationDecodeCacheEntry_t, int>::CUtlMemoryFixedGrowable_Base(
					CAnimationDecodeCacheEntry_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	{
	}
	AlignedByteArrayExplicit_t<256, CAnimationDecodeCacheEntry_t, 16>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<256, CAnimationDecodeCacheEntry_t>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<256, CAnimationDecodeCacheEntry_t, 16>::Base(); // 231
	CUtlMemoryFixedGrowable<CAnimationDecodeCacheEntry_t, 256, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<CAnimationDecodeCacheEntry_t, CUtlMemoryFixedGrowable<CAnimationDecodeCacheEntry_t, 256, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CAnimationDecodeCacheEntry_t, CUtlMemoryFixedGrowable<CAnimationDecodeCacheEntry_t, 256, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CAnimationDecodeCacheEntry_t, 256>::CUtlVectorFixedGrowable(
				int growSize);  // 22
	CThreadLocalAnimationDecodeCache::CThreadLocalAnimationDecodeCache(); // 341
	simpleTSPoolStruct_t::simpleTSPoolStruct_t(); // 382
	CTSPool<CThreadLocalAnimationDecodeCache>::GetObject(); // 1266
} /* size: 278, inline expansions: 20 (679 bytes) */

// <00D2A6A5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:1269
// function calls: 9
void CAnimationSystemUtils::ReturnThreadLocalDecodeCache(CThreadLocalAnimationDecodeCache* pCache)
{
	ThreadPause(void); // 173
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 168
	CTSListBase::Push(
		TSLNodeBase_t* pNode);  // 371
	CTSPool<CThreadLocalAnimationDecodeCache>::PutObject(
			CThreadLocalAnimationDecodeCache* pInfo);  // 1274
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
	CThreadRWLock_FastRead::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 1276
	CAnimationSystemUtils::ReturnThreadLocalDecodeCache(
					CThreadLocalAnimationDecodeCache* pCache);  // 1269
} /* size: 161, inline expansions: 9 (306 bytes) */

// <00CE80A0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:1269
void CAnimationSystemUtils::ReturnThreadLocalDecodeCache(CThreadLocalAnimationDecodeCache* pCache)
{
} /* size: 0 */

