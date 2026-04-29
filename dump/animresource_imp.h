
//
// animresource_imp.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 9
//	class: 1
//

// <00BEDCF4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.h:11
// member functions: 80
// member variables: 6
// vtable entries: 12
// class size: 1,384
class CAnimContainer_Imp : public CAnimContainer {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.h:93 */
	struct AnimationGroupImp_t {
		CUtlVector<int, CUtlMemory<int, int> > m_localBone; /* 0 32 */
		CUtlVector<int, CUtlMemory<int, int> > m_masterBone; /* 32 32 */
		void ~AnimationGroupImp_t(AnimationGroupImp_t* );
		void AnimationGroupImp_t(AnimationGroupImp_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class CAnimContainer <ancestor>; */ /* 0 1232 */
	void CAnimContainer_Imp(CAnimContainer_Imp* , const CAnimContainer_Imp& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:278 */
	virtual bool AppendAnimations(CAnimContainer_Imp* , const CModel* , const CAnimationGroupResource** , int);
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.h:20 */
	virtual CAnimTable* GetAnimTable(CAnimContainer_Imp* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.h:23 */
	virtual CSequenceTable* GetSequenceTable(CAnimContainer_Imp* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.h:25 */
	virtual CISequenceVector& GetISequenceVector(CAnimContainer_Imp* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.h:26 */
	virtual const CISequenceVector& GetISequenceVector(const CAnimContainer_Imp* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:395 */
	int EstimateHashSize(CAnimContainer_Imp* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:433 */
	bool BuildAnimGroupList(CAnimContainer_Imp* , const CModel* , const CAnimationGroupResource* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:455 */
	bool AppendAnimGroup(CAnimContainer_Imp* , const CModel* , int, const CAnimationGroupResource* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:492 */
	int AppendSeqGroup(CAnimContainer_Imp* , const CModel* , int, const CSequenceGroupResource* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:1049 */
	void AppendGroupAnimations(CAnimContainer_Imp* , int, const CAnimationGroup* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:521 */
	void AppendDataChannels(CAnimContainer_Imp* , const CModel* , int, const CAnimKeyData* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:916 */
	void AppendUserData(CAnimContainer_Imp* , const CAnimationGroup* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:1103 */
	void LinkAnimationGroupBonesToMasterSkeleton(CAnimContainer_Imp* , int, const CAnimationGroup* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:1676 */
	void AppendSequences(CAnimContainer_Imp* , const CModel* , int, const CSequenceGroupData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:1761 */
	void AppendPoseParameters(CAnimContainer_Imp* , int, const CSequenceGroupData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:1817 */
	void AppendBoneMasks(CAnimContainer_Imp* , const CModel* , int, const CSequenceGroupData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2048 */
	void CreateSequencesForAnimations(CAnimContainer_Imp* , const CModel* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2108 */
	void CreateSequencesFromScript(CAnimContainer_Imp* , const CModel* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2118 */
	void CreateAutoplayList(CAnimContainer_Imp* , const CModel* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2136 */
	void ResolveLocalReferences(CAnimContainer_Imp* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2191 */
	void PostInitAllSequences(CAnimContainer_Imp* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2392 */
	virtual void PostInitOther(CAnimContainer_Imp* , HSequence);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2408 */
	void BuildTransitionGraph(CAnimContainer_Imp* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:726 */
	void LinkDataChannelsToMasterSkeleton(CAnimContainer_Imp* , const CModel* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:876 */
	void LinkDataChannelsToMasterMorphControllers(CAnimContainer_Imp* , const CModel* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:962 */
	void LinkDataChannelsToUserData(CAnimContainer_Imp* , const CModel* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:1381 */
	void AddChannelElementRequestMask(CAnimContainer_Imp* , ChannelElementMap_t* , uint8);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:1156 */
	void BuildLODs(CAnimContainer_Imp* , const CModel* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:1393 */
	void LinkWeightlistsToMasterDataChannels(CAnimContainer_Imp* , const CModel* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2441 */
	virtual bool GetBounds(CAnimContainer_Imp* , int, Vector* , Vector* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2534 */
	virtual int FindOrAddNode(CAnimContainer_Imp* , const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2543 */
	virtual const char* GetNodeName(const CAnimContainer_Imp* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2552 */
	virtual int GetNodeTransition(const CAnimContainer_Imp* , int, int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2557 */
	virtual HAnimationGraph GetAnimationGraph(const CAnimContainer_Imp* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2562 */
	virtual void SetAnimationGraph(CAnimContainer_Imp* , HAnimationGraph);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:49 */
	void CAnimContainer_Imp(CAnimContainer_Imp* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:58 */
	virtual void ~CAnimContainer_Imp(CAnimContainer_Imp* );
	CThreadMutex m_BoundsMutex; /* 1232 72 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2570 */
	const AnimationGroupImp_t* GetAnimGroupImp(const CAnimContainer_Imp* , int);
	CUtlVector<CAnimContainer_Imp::AnimationGroupImp_t, CUtlMemory<CAnimContainer_Imp::AnimationGroupImp_t, int> > m_pLocalArray; /* 1304 32 */
	CUtlVector<ISequence*, CUtlMemory<ISequence*, int> > m_pISequenceArray; /* 1336 32 */
	CSequenceTable * m_pSequenceTable; /* 1368 8 */
	CAnimTable * m_pAnimTable; /* 1376 8 */
	void CAnimContainer_Imp(class CAnimContainer_Imp *, const class CAnimContainer_Imp  &); /* linkage=_ZN18CAnimContainer_ImpC4ERKS_ */
	virtual bool AppendAnimations(class CAnimContainer_Imp *, const class CModel  *, const class CAnimationGroupResource  * *, int); /* linkage=_ZN18CAnimContainer_Imp16AppendAnimationsEPK6CModelPPK23CAnimationGroupResourcei */
	/* <d270df> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.h:20 */
	virtual CAnimTable * GetAnimTable(class CAnimContainer_Imp *); /* linkage=_ZN18CAnimContainer_Imp12GetAnimTableEv */
	virtual CSequenceTable * GetSequenceTable(class CAnimContainer_Imp *); /* linkage=_ZN18CAnimContainer_Imp16GetSequenceTableEv */
	virtual CISequenceVector & GetISequenceVector(class CAnimContainer_Imp *); /* linkage=_ZN18CAnimContainer_Imp18GetISequenceVectorEv */
	/* <d27109> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.h:26 */
	virtual const CISequenceVector  & GetISequenceVector(const class CAnimContainer_Imp  *); /* linkage=_ZNK18CAnimContainer_Imp18GetISequenceVectorEv */
	int EstimateHashSize(class CAnimContainer_Imp *); /* linkage=_ZN18CAnimContainer_Imp16EstimateHashSizeEv */
	/* <d35bc1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:433 */
	bool BuildAnimGroupList(class CAnimContainer_Imp *, const class CModel  *, const class CAnimationGroupResource  *, int); /* linkage=_ZN18CAnimContainer_Imp18BuildAnimGroupListEPK6CModelPK23CAnimationGroupResourcei */
	/* <d3a5df> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:455 */
	bool AppendAnimGroup(class CAnimContainer_Imp *, const class CModel  *, int, const class CAnimationGroupResource  *); /* linkage=_ZN18CAnimContainer_Imp15AppendAnimGroupEPK6CModeliPK23CAnimationGroupResource */
	int AppendSeqGroup(class CAnimContainer_Imp *, const class CModel  *, int, const class CSequenceGroupResource  *, int); /* linkage=_ZN18CAnimContainer_Imp14AppendSeqGroupEPK6CModeliPK22CSequenceGroupResourcei */
	void AppendGroupAnimations(class CAnimContainer_Imp *, int, const class CAnimationGroup  *, int); /* linkage=_ZN18CAnimContainer_Imp21AppendGroupAnimationsEiPK15CAnimationGroupi */
	void AppendDataChannels(class CAnimContainer_Imp *, const class CModel  *, int, const class CAnimKeyData  *, int); /* linkage=_ZN18CAnimContainer_Imp18AppendDataChannelsEPK6CModeliPK12CAnimKeyDatai */
	void AppendUserData(class CAnimContainer_Imp *, const class CAnimationGroup  *); /* linkage=_ZN18CAnimContainer_Imp14AppendUserDataEPK15CAnimationGroup */
	void LinkAnimationGroupBonesToMasterSkeleton(class CAnimContainer_Imp *, int, const class CAnimationGroup  *); /* linkage=_ZN18CAnimContainer_Imp39LinkAnimationGroupBonesToMasterSkeletonEiPK15CAnimationGroup */
	void AppendSequences(class CAnimContainer_Imp *, const class CModel  *, int, const class CSequenceGroupData  *); /* linkage=_ZN18CAnimContainer_Imp15AppendSequencesEPK6CModeliPK18CSequenceGroupData */
	void AppendPoseParameters(class CAnimContainer_Imp *, int, const class CSequenceGroupData  *); /* linkage=_ZN18CAnimContainer_Imp20AppendPoseParametersEiPK18CSequenceGroupData */
	void AppendBoneMasks(class CAnimContainer_Imp *, const class CModel  *, int, const class CSequenceGroupData  *); /* linkage=_ZN18CAnimContainer_Imp15AppendBoneMasksEPK6CModeliPK18CSequenceGroupData */
	void CreateSequencesForAnimations(class CAnimContainer_Imp *, const class CModel  *); /* linkage=_ZN18CAnimContainer_Imp28CreateSequencesForAnimationsEPK6CModel */
	/* <d31871> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2108 */
	void CreateSequencesFromScript(class CAnimContainer_Imp *, const class CModel  *); /* linkage=_ZN18CAnimContainer_Imp25CreateSequencesFromScriptEPK6CModel */
	void CreateAutoplayList(class CAnimContainer_Imp *, const class CModel  *); /* linkage=_ZN18CAnimContainer_Imp18CreateAutoplayListEPK6CModel */
	void ResolveLocalReferences(class CAnimContainer_Imp *); /* linkage=_ZN18CAnimContainer_Imp22ResolveLocalReferencesEv */
	void PostInitAllSequences(class CAnimContainer_Imp *); /* linkage=_ZN18CAnimContainer_Imp20PostInitAllSequencesEv */
	virtual void PostInitOther(class CAnimContainer_Imp *, class HSequence); /* linkage=_ZN18CAnimContainer_Imp13PostInitOtherE9HSequence */
	void BuildTransitionGraph(class CAnimContainer_Imp *); /* linkage=_ZN18CAnimContainer_Imp20BuildTransitionGraphEv */
	void LinkDataChannelsToMasterSkeleton(class CAnimContainer_Imp *, const class CModel  *); /* linkage=_ZN18CAnimContainer_Imp32LinkDataChannelsToMasterSkeletonEPK6CModel */
	/* <d331f4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:876 */
	void LinkDataChannelsToMasterMorphControllers(class CAnimContainer_Imp *, const class CModel  *); /* linkage=_ZN18CAnimContainer_Imp40LinkDataChannelsToMasterMorphControllersEPK6CModel */
	void LinkDataChannelsToUserData(class CAnimContainer_Imp *, const class CModel  *); /* linkage=_ZN18CAnimContainer_Imp26LinkDataChannelsToUserDataEPK6CModel */
	/* <d31761> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:1381 */
	void AddChannelElementRequestMask(class CAnimContainer_Imp *, class ChannelElementMap_t *, uint8); /* linkage=_ZN18CAnimContainer_Imp28AddChannelElementRequestMaskEP19ChannelElementMap_th */
	void BuildLODs(class CAnimContainer_Imp *, const class CModel  *); /* linkage=_ZN18CAnimContainer_Imp9BuildLODsEPK6CModel */
	void LinkWeightlistsToMasterDataChannels(class CAnimContainer_Imp *, const class CModel  *); /* linkage=_ZN18CAnimContainer_Imp35LinkWeightlistsToMasterDataChannelsEPK6CModel */
	/* <d34de3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2441 */
	virtual bool GetBounds(class CAnimContainer_Imp *, int, class Vector *, class Vector *); /* linkage=_ZN18CAnimContainer_Imp9GetBoundsEiP6VectorS1_ */
	virtual int FindOrAddNode(class CAnimContainer_Imp *, const char  *); /* linkage=_ZN18CAnimContainer_Imp13FindOrAddNodeEPKc */
	virtual const char  * GetNodeName(const class CAnimContainer_Imp  *, int); /* linkage=_ZNK18CAnimContainer_Imp11GetNodeNameEi */
	virtual int GetNodeTransition(const class CAnimContainer_Imp  *, int, int); /* linkage=_ZNK18CAnimContainer_Imp17GetNodeTransitionEii */
	virtual HAnimationGraph GetAnimationGraph(const class CAnimContainer_Imp  *); /* linkage=_ZNK18CAnimContainer_Imp17GetAnimationGraphEv */
	virtual void SetAnimationGraph(class CAnimContainer_Imp *, HAnimationGraph); /* linkage=_ZN18CAnimContainer_Imp17SetAnimationGraphE11CWeakHandleI34InfoForResourceTypeIAnimationGraphE */
	void CAnimContainer_Imp(class CAnimContainer_Imp *); /* linkage=_ZN18CAnimContainer_ImpC4Ev */
	virtual void ~CAnimContainer_Imp(class CAnimContainer_Imp *); /* linkage=_ZN18CAnimContainer_ImpD4Ev */
	const class AnimationGroupImp_t  * GetAnimGroupImp(const class CAnimContainer_Imp  *, int); /* linkage=_ZNK18CAnimContainer_Imp15GetAnimGroupImpEi */
};

// <00D270DF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.h:20
void CAnimContainer_Imp::GetAnimTable()
{
} /* size: 12 */

// <00CE6B49> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.h:20
inline void CAnimContainer_Imp::GetAnimTable()
{
} /* size: 0 */

// <00CE6B1B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.h:23
void CAnimContainer_Imp::GetSequenceTable()
{
} /* size: 12 */

// <00D27109> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.h:26
void CAnimContainer_Imp::GetISequenceVector()
{
} /* size: 12 */

// <00CE6AD4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.h:26
inline void CAnimContainer_Imp::GetISequenceVector()
{
} /* size: 0 */

// <00C5CCAE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.h:93
void AnimationGroupImp_t::AnimationGroupImp_t()
{
} /* size: 0 */

// <00C5CC92> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.h:93
inline void AnimationGroupImp_t::AnimationGroupImp_t()
{
} /* size: 0 */

// <00C37E8F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.h:93
void AnimationGroupImp_t::~AnimationGroupImp_t()
{
} /* size: 0 */

// <00C37E73> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.h:93
inline void AnimationGroupImp_t::~AnimationGroupImp_t()
{
} /* size: 0 */

