
//
// animationsystem.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 3
//	class: 1
//

// <00B26AC3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.h:15
// member functions: 144
// member variables: 5
// vtable entries: 66
// class size: 32,968
class CAnimationSystem : public CTier3AppSystem<IAnimationSystem, 0> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.h:125 */
	struct AnimDecodeDump_t {
		bool m_bRequested; /* 0 1 */
		bool m_bClearOnNext; /* 1 1 */
		float64 m_flRequestTime; /* 8 8 */
		/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.h:131 */
		void Reset(AnimDecodeDump_t* );
		/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.h:138 */
		void Start(AnimDecodeDump_t* );
		/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.h:145 */
		bool IsActive(const AnimDecodeDump_t* );
		/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.h:151 */
		bool IsTimedOut(const AnimDecodeDump_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class CTier3AppSystem<IAnimationSystem, 0> <ancestor>; */ /* 0 48 */
	void CAnimationSystem(CAnimationSystem* , const CAnimationSystem& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:242 */
	virtual InitReturnVal_t Init(CAnimationSystem* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:260 */
	virtual void Shutdown(CAnimationSystem* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:223 */
	virtual const AppSystemInfo_t* GetDependencies(CAnimationSystem* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:232 */
	virtual void* QueryInterface(CAnimationSystem* , const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:68 */
	virtual CAnimContainer* CreateAnimContainer(CAnimationSystem* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:74 */
	virtual void DeleteAnimContainer(CAnimationSystem* , CModel* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:325 */
	virtual void BatchAnimationDecode(CAnimationSystem* , CAnimationDecodeContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:563 */
	virtual void DetermineAnimEventOccurrences(CAnimationSystem* , int, const AnimEventDetectDesc_t* , AnimationEventOccurrences_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:770 */
	virtual void PerformBoneMerge(CAnimationSystem* , HModel, int, const bone_merge_list_t* , const CTransform* , CTransform& , int, CTransform* , CTransform* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:786 */
	virtual void PerformBoneMergePreseveRootTransform(CAnimationSystem* , HModel, int, const bone_merge_list_t* , const CTransform* , const CTransform& , int, CTransform* , CTransform* , const uint32* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:754 */
	virtual bool ComputeBoneMergeRootTransform(CAnimationSystem* , int, const bone_merge_list_t* , const CTransform* , const CTransform& , CTransform* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:726 */
	virtual bool ComputeRootToBoneMergeBoneTransform(CAnimationSystem* , HModel, int, const bone_merge_list_t* , int, const CTransform* , CTransform* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:675 */
	virtual bool SolveIK(const CAnimationSystem* , CTransform& , CTransform& , CTransform& , Vector& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:660 */
	virtual void SetMovementPoseParams(const CAnimationSystem* , const CModel* , HSequence, float* , const Vector& , int, int, int, int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:665 */
	virtual float ComputeSequenceCyclesPerSecond(const CAnimationSystem* , const CModel* , HSequence, const float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:670 */
	virtual int ComputeSequenceMaxFrame(const CAnimationSystem* , const CModel* , HSequence, const float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:685 */
	virtual bool ComputeSequenceMovement(const CAnimationSystem* , const CModel* , HSequence, float, float, const float* , Vector* , QAngle* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:690 */
	virtual float ComputeSequenceDuration(const CAnimationSystem* , const CModel* , HSequence, const float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:695 */
	virtual float ComputeSequenceMovementAndDuration(const CAnimationSystem* , const CModel* , HSequence, float, float, const float* , Vector* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:700 */
	virtual float ComputeSequenceTotalMovementAndDuration(const CAnimationSystem* , const CModel* , HSequence, const float* , Vector* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:705 */
	virtual bool ComputeSequenceVelocity(const CAnimationSystem* , const CModel* , HSequence, float, const float* , Vector& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:710 */
	virtual float FindSequenceDistance(const CAnimationSystem* , const CModel* , HSequence, const float* , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:715 */
	virtual int ComputeAnimationMaxFrame(const CAnimationSystem* , const CModel* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:720 */
	virtual bool ComputeAnimationMovement(const CAnimationSystem* , const CModel* , int, float, float, Vector* , QAngle* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:874 */
	virtual const char* GetInterpolationSpewDebugBoneName(const CAnimationSystem* , const CModel* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:310 */
	virtual void SetEntityIndexToDebug(CAnimationSystem* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:315 */
	virtual int GetEntityIndexToDebug(const CAnimationSystem* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../activitylist.cpp:86 */
	virtual bool ActivityList_RegisterSharedActivity(CAnimationSystem* , const char* , Activity);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../activitylist.cpp:131 */
	virtual Activity ActivityList_RegisterPrivateActivity(CAnimationSystem* , const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../activitylist.cpp:165 */
	virtual Activity ActivityList_IndexForName(const CAnimationSystem* , const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../activitylist.cpp:181 */
	virtual const char* ActivityList_NameForIndex(const CAnimationSystem* , Activity);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../activitylist.cpp:259 */
	virtual int ActivityList_HighestIndex(const CAnimationSystem* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../activitylist.cpp:192 */
	virtual void ActivityList_LoadActivityRemapFile(CAnimationSystem* , const char* , const char* , CUtlVector<CActivityRemap, CUtlMemory<CActivityRemap, int> >& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:885 */
	virtual bool SaveAnimationGraphToFile(CAnimationSystem* , const IAnimationGraphBuilder* , const CUtlString& , CUtlString* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:891 */
	virtual IAnimationGraphBuilder* LoadAnimationGraphFromFile(CAnimationSystem* , const CUtlString& , CUtlString* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:897 */
	virtual bool SaveAnimationGraphToBuffer(CAnimationSystem* , const IAnimationGraphBuilder* , CUtlBuffer& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:906 */
	virtual IAnimationGraphBuilder* LoadAnimationGraphFromBuffer(CAnimationSystem* , const CUtlBuffer& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:916 */
	virtual IAnimationGraphBuilder* CreateNewAnimationGraph(CAnimationSystem* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:922 */
	virtual bool SaveSubGraphToFile(CAnimationSystem* , const IAnimationSubGraph* , const CUtlString& , CUtlString* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:928 */
	virtual IAnimationSubGraph* LoadSubGraphFromFile(CAnimationSystem* , const CUtlString& , CUtlString* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:934 */
	virtual bool SaveSubGraphToBuffer(CAnimationSystem* , const IAnimationSubGraph* , CUtlBuffer& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:943 */
	virtual IAnimationSubGraph* LoadSubGraphFromBuffer(CAnimationSystem* , const CUtlBuffer& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:953 */
	virtual IAnimationSubGraph* CreateNewSubGraph(CAnimationSystem* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:959 */
	virtual IAnimGraphDebugReplayPtr CreateAnimGraphReplay(CAnimationSystem* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:966 */
	virtual IAnimGraphDebugReplayPtr LoadAnimGraphReplayFromFile(CAnimationSystem* , const CUtlString& , CUtlString* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:972 */
	virtual bool SaveAnimGraphReplayToFile(CAnimationSystem* , IAnimGraphDebugReplayConstPtr, const CUtlString& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:978 */
	virtual int CompressHandSkeleton(const CAnimationSystem* , AnimVRHand_t, const CTransform* , int, void* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:984 */
	virtual bool DecompressHandSkeleton(const CAnimationSystem* , AnimVRHand_t, const void* , int, CTransform* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:680 */
	virtual IAnimationGraphVisualizerRegistry* GetAnimationGraphVisualizerRegistry(CAnimationSystem* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:990 */
	virtual void FrameUpdate(CAnimationSystem* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:1033 */
	virtual CAnimationGroupResource* CreateAnimationGroupFromV0Data(CAnimationSystem* , CConvertOldDiskCtx& , CAnimationGroup* , const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:1043 */
	virtual CAnimationGroupResource* CreateAnimationGroupFromEmbeddedBlocks(CAnimationSystem* , const EmbeddedAnimInfo_t& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:1145 */
	virtual CAnimationGroupResource* CloneAnimGroup(CAnimationSystem* , CAnimationGroupResource* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:1154 */
	virtual void ReleaseAnimGroup(CAnimationSystem* , CAnimationGroupResource* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:88 */
	virtual IIKControlRigContext* CreateIKControlRig(CAnimationSystem* , const IIKControlRigDescription* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:93 */
	virtual void DeleteIKControlRig(CAnimationSystem* , IIKControlRigContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:83 */
	virtual CUtlSymbolLarge MakeIKString(const CAnimationSystem* , const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:1176 */
	virtual int NumGlobalFlexControllers(const CAnimationSystem* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:1181 */
	virtual const char* GetGlobalFlexControllerName(const CAnimationSystem* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:1189 */
	virtual LocalFlexController_t FindOrAddGlobalFlexController(CAnimationSystem* , const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../eventlist.cpp:84 */
	virtual AnimEventIndex_t EventList_RegisterPrivateEvent(CAnimationSystem* , const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../eventlist.cpp:108 */
	virtual AnimEventIndex_t EventList_IndexForName(CAnimationSystem* , const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../eventlist.cpp:124 */
	virtual const char* EventList_NameForIndex(CAnimationSystem* , AnimEventIndex_t);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../eventlist.cpp:79 */
	virtual int EventList_GetEventType(CAnimationSystem* , AnimEventIndex_t);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../eventlist.cpp:134 */
	virtual AnimEventIndex_t EventList_HighestIndex(CAnimationSystem* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:203 */
	void CAnimationSystem(CAnimationSystem* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:208 */
	virtual void ~CAnimationSystem(CAnimationSystem* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:1162 */
	void InitAnimEventOptionsFromLegacyStr(CAnimationSystem* , const char* , const char* , KeyValues3* );
private:
	AnimDecodeDump_t m_AnimDecodeDumpRequested[5]; /* 48 80 */
	bool m_bCheckDumpDoneSignal; /* 128 1 */
	int m_nEntityIndexToDebug; /* 132 4 */
	CUtlVectorMT<CUtlVectorFixed<CUtlString, 4096>, CThreadFastMutex> m_LocalToGlobalFlexController __attribute__((__aligned__(8))); /* 136 32832 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:1074 */
	virtual CAnimationGroupResource* CreateRuntimeAnimationGroup(CAnimationSystem* , const CModelSkeletonBuilder& , const CAnimationGroupBuilder& );
	void CAnimationSystem(class CAnimationSystem *, const class CAnimationSystem  &); /* linkage=_ZN16CAnimationSystemC4ERKS_ */
	virtual enum InitReturnVal_t Init(class CAnimationSystem *); /* linkage=_ZN16CAnimationSystem4InitEv */
	virtual void Shutdown(class CAnimationSystem *); /* linkage=_ZN16CAnimationSystem8ShutdownEv */
	virtual const class AppSystemInfo_t  * GetDependencies(class CAnimationSystem *); /* linkage=_ZN16CAnimationSystem15GetDependenciesEv */
	virtual void * QueryInterface(class CAnimationSystem *, const char  *); /* linkage=_ZN16CAnimationSystem14QueryInterfaceEPKc */
	virtual class CAnimContainer * CreateAnimContainer(class CAnimationSystem *); /* linkage=_ZN16CAnimationSystem19CreateAnimContainerEv */
	/* <d3a645> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:74 */
	virtual void DeleteAnimContainer(class CAnimationSystem *, class CModel *); /* linkage=_ZN16CAnimationSystem19DeleteAnimContainerEP6CModel */
	virtual void BatchAnimationDecode(class CAnimationSystem *, class CAnimationDecodeContext *); /* linkage=_ZN16CAnimationSystem20BatchAnimationDecodeEP23CAnimationDecodeContext */
	virtual void DetermineAnimEventOccurrences(class CAnimationSystem *, int, const class AnimEventDetectDesc_t  *, class AnimationEventOccurrences_t *); /* linkage=_ZN16CAnimationSystem29DetermineAnimEventOccurrencesEiPK21AnimEventDetectDesc_tP27AnimationEventOccurrences_t */
	virtual void PerformBoneMerge(class CAnimationSystem *, HModel, int, const class bone_merge_list_t  *, const class CTransform  *, class CTransform &, int, class CTransform *, class CTransform *); /* linkage=_ZN16CAnimationSystem16PerformBoneMergeE11CWeakHandleI25InfoForResourceTypeCModelEiPK17bone_merge_list_tPK10CTransformRS6_iPS6_SA_ */
	virtual void PerformBoneMergePreseveRootTransform(class CAnimationSystem *, HModel, int, const class bone_merge_list_t  *, const class CTransform  *, const class CTransform  &, int, class CTransform *, class CTransform *, const uint32  *); /* linkage=_ZN16CAnimationSystem36PerformBoneMergePreseveRootTransformE11CWeakHandleI25InfoForResourceTypeCModelEiPK17bone_merge_list_tPK10CTransformRS7_iPS6_SA_PKj */
	/* <d2fc33> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:754 */
	virtual bool ComputeBoneMergeRootTransform(class CAnimationSystem *, int, const class bone_merge_list_t  *, const class CTransform  *, const class CTransform  &, class CTransform *); /* linkage=_ZN16CAnimationSystem29ComputeBoneMergeRootTransformEiPK17bone_merge_list_tPK10CTransformRS4_PS3_ */
	virtual bool ComputeRootToBoneMergeBoneTransform(class CAnimationSystem *, HModel, int, const class bone_merge_list_t  *, int, const class CTransform  *, class CTransform *); /* linkage=_ZN16CAnimationSystem35ComputeRootToBoneMergeBoneTransformE11CWeakHandleI25InfoForResourceTypeCModelEiPK17bone_merge_list_tiPK10CTransformPS6_ */
	virtual bool SolveIK(const class CAnimationSystem  *, class CTransform &, class CTransform &, class CTransform &, class Vector &); /* linkage=_ZNK16CAnimationSystem7SolveIKER10CTransformS1_S1_R6Vector */
	virtual void SetMovementPoseParams(const class CAnimationSystem  *, const class CModel  *, class HSequence, float *, const class Vector  &, int, int, int, int); /* linkage=_ZNK16CAnimationSystem21SetMovementPoseParamsEPK6CModel9HSequencePfRK6Vectoriiii */
	/* <d275e6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:665 */
	virtual float ComputeSequenceCyclesPerSecond(const class CAnimationSystem  *, const class CModel  *, class HSequence, const float  *); /* linkage=_ZNK16CAnimationSystem30ComputeSequenceCyclesPerSecondEPK6CModel9HSequencePKf */
	virtual int ComputeSequenceMaxFrame(const class CAnimationSystem  *, const class CModel  *, class HSequence, const float  *); /* linkage=_ZNK16CAnimationSystem23ComputeSequenceMaxFrameEPK6CModel9HSequencePKf */
	/* <d2766a> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:685 */
	virtual bool ComputeSequenceMovement(const class CAnimationSystem  *, const class CModel  *, class HSequence, float, float, const float  *, class Vector *, class QAngle *); /* linkage=_ZNK16CAnimationSystem23ComputeSequenceMovementEPK6CModel9HSequenceffPKfP6VectorP6QAngle */
	virtual float ComputeSequenceDuration(const class CAnimationSystem  *, const class CModel  *, class HSequence, const float  *); /* linkage=_ZNK16CAnimationSystem23ComputeSequenceDurationEPK6CModel9HSequencePKf */
	virtual float ComputeSequenceMovementAndDuration(const class CAnimationSystem  *, const class CModel  *, class HSequence, float, float, const float  *, class Vector *); /* linkage=_ZNK16CAnimationSystem34ComputeSequenceMovementAndDurationEPK6CModel9HSequenceffPKfP6Vector */
	virtual float ComputeSequenceTotalMovementAndDuration(const class CAnimationSystem  *, const class CModel  *, class HSequence, const float  *, class Vector *); /* linkage=_ZNK16CAnimationSystem39ComputeSequenceTotalMovementAndDurationEPK6CModel9HSequencePKfP6Vector */
	virtual bool ComputeSequenceVelocity(const class CAnimationSystem  *, const class CModel  *, class HSequence, float, const float  *, class Vector &); /* linkage=_ZNK16CAnimationSystem23ComputeSequenceVelocityEPK6CModel9HSequencefPKfR6Vector */
	virtual float FindSequenceDistance(const class CAnimationSystem  *, const class CModel  *, class HSequence, const float  *, float); /* linkage=_ZNK16CAnimationSystem20FindSequenceDistanceEPK6CModel9HSequencePKff */
	virtual int ComputeAnimationMaxFrame(const class CAnimationSystem  *, const class CModel  *, int); /* linkage=_ZNK16CAnimationSystem24ComputeAnimationMaxFrameEPK6CModeli */
	virtual bool ComputeAnimationMovement(const class CAnimationSystem  *, const class CModel  *, int, float, float, class Vector *, class QAngle *); /* linkage=_ZNK16CAnimationSystem24ComputeAnimationMovementEPK6CModeliffP6VectorP6QAngle */
	virtual const char  * GetInterpolationSpewDebugBoneName(const class CAnimationSystem  *, const class CModel  *); /* linkage=_ZNK16CAnimationSystem33GetInterpolationSpewDebugBoneNameEPK6CModel */
	virtual void SetEntityIndexToDebug(class CAnimationSystem *, int); /* linkage=_ZN16CAnimationSystem21SetEntityIndexToDebugEi */
	/* <d2708b> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:315 */
	virtual int GetEntityIndexToDebug(const class CAnimationSystem  *); /* linkage=_ZNK16CAnimationSystem21GetEntityIndexToDebugEv */
	virtual bool ActivityList_RegisterSharedActivity(class CAnimationSystem *, const char  *, Activity); /* linkage=_ZN16CAnimationSystem35ActivityList_RegisterSharedActivityEPKci */
	/* <d30f35> _vpc_/unity_animationsystem/linuxsteamrt64/../../../activitylist.cpp:131 */
	virtual Activity ActivityList_RegisterPrivateActivity(class CAnimationSystem *, const char  *); /* linkage=_ZN16CAnimationSystem36ActivityList_RegisterPrivateActivityEPKc */
	/* <d2b931> _vpc_/unity_animationsystem/linuxsteamrt64/../../../activitylist.cpp:165 */
	virtual Activity ActivityList_IndexForName(const class CAnimationSystem  *, const char  *); /* linkage=_ZNK16CAnimationSystem25ActivityList_IndexForNameEPKc */
	/* <d2a90a> _vpc_/unity_animationsystem/linuxsteamrt64/../../../activitylist.cpp:181 */
	virtual const char  * ActivityList_NameForIndex(const class CAnimationSystem  *, Activity); /* linkage=_ZNK16CAnimationSystem25ActivityList_NameForIndexEi */
	virtual int ActivityList_HighestIndex(const class CAnimationSystem  *); /* linkage=_ZNK16CAnimationSystem25ActivityList_HighestIndexEv */
	/* <d3a92a> _vpc_/unity_animationsystem/linuxsteamrt64/../../../activitylist.cpp:192 */
	virtual void ActivityList_LoadActivityRemapFile(class CAnimationSystem *, const char  *, const char  *, class CUtlVector<CActivityRemap, CUtlMemory<CActivityRemap, int> > &); /* linkage=_ZN16CAnimationSystem34ActivityList_LoadActivityRemapFileEPKcS1_R10CUtlVectorI14CActivityRemap10CUtlMemoryIS3_iEE */
	virtual bool SaveAnimationGraphToFile(class CAnimationSystem *, const class IAnimationGraphBuilder  *, const class CUtlString  &, class CUtlString *); /* linkage=_ZN16CAnimationSystem24SaveAnimationGraphToFileEPK22IAnimationGraphBuilderRK10CUtlStringPS3_ */
	virtual class IAnimationGraphBuilder * LoadAnimationGraphFromFile(class CAnimationSystem *, const class CUtlString  &, class CUtlString *); /* linkage=_ZN16CAnimationSystem26LoadAnimationGraphFromFileERK10CUtlStringPS0_ */
	virtual bool SaveAnimationGraphToBuffer(class CAnimationSystem *, const class IAnimationGraphBuilder  *, class CUtlBuffer &); /* linkage=_ZN16CAnimationSystem26SaveAnimationGraphToBufferEPK22IAnimationGraphBuilderR10CUtlBuffer */
	virtual class IAnimationGraphBuilder * LoadAnimationGraphFromBuffer(class CAnimationSystem *, const class CUtlBuffer  &); /* linkage=_ZN16CAnimationSystem28LoadAnimationGraphFromBufferERK10CUtlBuffer */
	virtual class IAnimationGraphBuilder * CreateNewAnimationGraph(class CAnimationSystem *); /* linkage=_ZN16CAnimationSystem23CreateNewAnimationGraphEv */
	virtual bool SaveSubGraphToFile(class CAnimationSystem *, const class IAnimationSubGraph  *, const class CUtlString  &, class CUtlString *); /* linkage=_ZN16CAnimationSystem18SaveSubGraphToFileEPK18IAnimationSubGraphRK10CUtlStringPS3_ */
	virtual class IAnimationSubGraph * LoadSubGraphFromFile(class CAnimationSystem *, const class CUtlString  &, class CUtlString *); /* linkage=_ZN16CAnimationSystem20LoadSubGraphFromFileERK10CUtlStringPS0_ */
	virtual bool SaveSubGraphToBuffer(class CAnimationSystem *, const class IAnimationSubGraph  *, class CUtlBuffer &); /* linkage=_ZN16CAnimationSystem20SaveSubGraphToBufferEPK18IAnimationSubGraphR10CUtlBuffer */
	virtual class IAnimationSubGraph * LoadSubGraphFromBuffer(class CAnimationSystem *, const class CUtlBuffer  &); /* linkage=_ZN16CAnimationSystem22LoadSubGraphFromBufferERK10CUtlBuffer */
	virtual class IAnimationSubGraph * CreateNewSubGraph(class CAnimationSystem *); /* linkage=_ZN16CAnimationSystem17CreateNewSubGraphEv */
	virtual IAnimGraphDebugReplayPtr CreateAnimGraphReplay(class CAnimationSystem *); /* linkage=_ZN16CAnimationSystem21CreateAnimGraphReplayEv */
	virtual IAnimGraphDebugReplayPtr LoadAnimGraphReplayFromFile(class CAnimationSystem *, const class CUtlString  &, class CUtlString *); /* linkage=_ZN16CAnimationSystem27LoadAnimGraphReplayFromFileERK10CUtlStringPS0_ */
	virtual bool SaveAnimGraphReplayToFile(class CAnimationSystem *, IAnimGraphDebugReplayConstPtr, const class CUtlString  &); /* linkage=_ZN16CAnimationSystem25SaveAnimGraphReplayToFileE9CSmartPtrIK21IAnimGraphDebugReplay17CRefCountAccessorERK10CUtlString */
	virtual int CompressHandSkeleton(const class CAnimationSystem  *, enum AnimVRHand_t, const class CTransform  *, int, void *, int); /* linkage=_ZNK16CAnimationSystem20CompressHandSkeletonE12AnimVRHand_tPK10CTransformiPvi */
	virtual bool DecompressHandSkeleton(const class CAnimationSystem  *, enum AnimVRHand_t, const void  *, int, class CTransform *, int); /* linkage=_ZNK16CAnimationSystem22DecompressHandSkeletonE12AnimVRHand_tPKviP10CTransformi */
	virtual class IAnimationGraphVisualizerRegistry * GetAnimationGraphVisualizerRegistry(class CAnimationSystem *); /* linkage=_ZN16CAnimationSystem35GetAnimationGraphVisualizerRegistryEv */
	virtual void FrameUpdate(class CAnimationSystem *); /* linkage=_ZN16CAnimationSystem11FrameUpdateEv */
	virtual class CAnimationGroupResource * CreateAnimationGroupFromV0Data(class CAnimationSystem *, class CConvertOldDiskCtx &, class CAnimationGroup *, const char  *); /* linkage=_ZN16CAnimationSystem30CreateAnimationGroupFromV0DataER18CConvertOldDiskCtxP15CAnimationGroupPKc */
	virtual class CAnimationGroupResource * CreateAnimationGroupFromEmbeddedBlocks(class CAnimationSystem *, const class EmbeddedAnimInfo_t  &); /* linkage=_ZN16CAnimationSystem38CreateAnimationGroupFromEmbeddedBlocksERK18EmbeddedAnimInfo_t */
	virtual class CAnimationGroupResource * CloneAnimGroup(class CAnimationSystem *, class CAnimationGroupResource *); /* linkage=_ZN16CAnimationSystem14CloneAnimGroupEP23CAnimationGroupResource */
	virtual void ReleaseAnimGroup(class CAnimationSystem *, class CAnimationGroupResource *); /* linkage=_ZN16CAnimationSystem16ReleaseAnimGroupEP23CAnimationGroupResource */
	virtual class IIKControlRigContext * CreateIKControlRig(class CAnimationSystem *, const class IIKControlRigDescription  *); /* linkage=_ZN16CAnimationSystem18CreateIKControlRigEPK24IIKControlRigDescription */
	virtual void DeleteIKControlRig(class CAnimationSystem *, class IIKControlRigContext *); /* linkage=_ZN16CAnimationSystem18DeleteIKControlRigEP20IIKControlRigContext */
	virtual class CUtlSymbolLarge MakeIKString(const class CAnimationSystem  *, const char  *); /* linkage=_ZNK16CAnimationSystem12MakeIKStringEPKc */
	virtual int NumGlobalFlexControllers(const class CAnimationSystem  *); /* linkage=_ZNK16CAnimationSystem24NumGlobalFlexControllersEv */
	virtual const char  * GetGlobalFlexControllerName(const class CAnimationSystem  *, int); /* linkage=_ZNK16CAnimationSystem27GetGlobalFlexControllerNameEi */
	/* <d28611> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:1189 */
	virtual enum LocalFlexController_t FindOrAddGlobalFlexController(class CAnimationSystem *, const char  *); /* linkage=_ZN16CAnimationSystem29FindOrAddGlobalFlexControllerEPKc */
	/* <d28aab> _vpc_/unity_animationsystem/linuxsteamrt64/../../../eventlist.cpp:84 */
	virtual class AnimEventIndex_t EventList_RegisterPrivateEvent(class CAnimationSystem *, const char  *); /* linkage=_ZN16CAnimationSystem30EventList_RegisterPrivateEventEPKc */
	virtual class AnimEventIndex_t EventList_IndexForName(class CAnimationSystem *, const char  *); /* linkage=_ZN16CAnimationSystem22EventList_IndexForNameEPKc */
	virtual const char  * EventList_NameForIndex(class CAnimationSystem *, class AnimEventIndex_t); /* linkage=_ZN16CAnimationSystem22EventList_NameForIndexE16AnimEventIndex_t */
	virtual int EventList_GetEventType(class CAnimationSystem *, class AnimEventIndex_t); /* linkage=_ZN16CAnimationSystem22EventList_GetEventTypeE16AnimEventIndex_t */
	virtual class AnimEventIndex_t EventList_HighestIndex(class CAnimationSystem *); /* linkage=_ZN16CAnimationSystem22EventList_HighestIndexEv */
	void CAnimationSystem(class CAnimationSystem *); /* linkage=_ZN16CAnimationSystemC4Ev */
	virtual void ~CAnimationSystem(class CAnimationSystem *); /* linkage=_ZN16CAnimationSystemD4Ev */
	void InitAnimEventOptionsFromLegacyStr(class CAnimationSystem *, const char  *, const char  *, class KeyValues3 *); /* linkage=_ZN16CAnimationSystem33InitAnimEventOptionsFromLegacyStrEPKcS1_P10KeyValues3 */
	virtual class CAnimationGroupResource * CreateRuntimeAnimationGroup(class CAnimationSystem *, const class CModelSkeletonBuilder  &, const class CAnimationGroupBuilder  &); /* linkage=_ZN16CAnimationSystem27CreateRuntimeAnimationGroupERK21CModelSkeletonBuilderRK22CAnimationGroupBuilder */
} __attribute__((__aligned__(8)));

// <00D213F3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.h:131
inline void AnimDecodeDump_t::Reset()
{
} /* size: 0 */

// <00D213DA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.h:145
inline void AnimDecodeDump_t::IsActive()
{
} /* size: 0 */

// <00D213B5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.h:151
// variable: 1
inline void AnimDecodeDump_t::IsTimedOut()
{
	float64 elapsed; // 153
} /* size: 0, variables: 1 */

