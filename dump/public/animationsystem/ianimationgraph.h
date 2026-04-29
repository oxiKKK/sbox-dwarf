
//
// public/animationsystem/ianimationgraph.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 14
//	classes: 3
//

// <00E7C645> ../public/animationsystem/ianimationgraph.h:30
void IAnimationGraph::IAnimationGraph()
{
} /* size: 0 */

// <00E7C629> ../public/animationsystem/ianimationgraph.h:30
inline void IAnimationGraph::IAnimationGraph()
{
} /* size: 0 */

// <00E7C612> ../public/animationsystem/ianimationgraph.h:30
void IAnimationGraph::~IAnimationGraph()
{
} /* size: 0 */

// <00E7C5DF> ../public/animationsystem/ianimationgraph.h:30
inline void IAnimationGraph::~IAnimationGraph()
{
} /* size: 0 */

// <00D7403D> ../public/animationsystem/ianimationgraph.h:30
// member functions: 36
// member variable: 1
// static member variable: 1
// vtable entries: 10
// class size: 8
class IAnimationGraph : public Object {
public:
	/* class Object <ancestor>; */ /* 0 0 */
	void IAnimationGraph(IAnimationGraph* , IAnimationGraph& );
	void IAnimationGraph(IAnimationGraph* , const IAnimationGraph& );
	void IAnimationGraph(IAnimationGraph* );
	IAnimationGraph& operator=(IAnimationGraph* , IAnimationGraph& );
	IAnimationGraph& operator=(IAnimationGraph* , const IAnimationGraph& );
private:
	static class CClassInfoT<IAnimationGraph> m_classInfoIAnimationGraph; /* 0 0 */
	/* ../public/animationsystem/ianimationgraph.h:32 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:19 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:19 */
	virtual const CClassInfo& GetTypeInfo(const IAnimationGraph* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:19 */
	virtual void* CastToBase(IAnimationGraph* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:19 */
	virtual const void* CastToBase(const IAnimationGraph* , ClassID);
	/* ../public/animationsystem/ianimationgraph.h:36 */
	virtual const IAnimParameterList* GetParameterList(const IAnimationGraph* );
	/* ../public/animationsystem/ianimationgraph.h:39 */
	virtual const IAnimTagManager* GetTagManager(const IAnimationGraph* );
	/* ../public/animationsystem/ianimationgraph.h:42 */
	virtual const IAnimMovementManager* GetMovementManager(const IAnimationGraph* );
	/* ../public/animationsystem/ianimationgraph.h:45 */
	virtual const IAnimGraphSettingsManager* GetSettingsManager(const IAnimationGraph* );
	/* ../public/animationsystem/ianimationgraph.h:48 */
	virtual const IAnimNodeManager* GetNodeManager(const IAnimationGraph* );
	/* ../public/animationsystem/ianimationgraph.h:51 */
	virtual IAnimGraphModelBindingPtr CreateModelBinding(const IAnimationGraph* , const CModel* );
	/* ../public/animationsystem/ianimationgraph.h:54 */
	virtual const char* GetResourceName(const IAnimationGraph* );
	virtual void ~IAnimationGraph(IAnimationGraph* );
	virtual const void  * CastToBase(const class IAnimationGraph  *, class ClassID); /* linkage=_ZNK15IAnimationGraph10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class IAnimationGraph *, class ClassID); /* linkage=_ZN15IAnimationGraph10CastToBaseEN10Reflection7ClassIDE */
	virtual const class CClassInfo  & GetTypeInfo(const class IAnimationGraph  *); /* linkage=_ZNK15IAnimationGraph11GetTypeInfoEv */
	virtual void ~IAnimationGraph(class IAnimationGraph *); /* linkage=_ZN15IAnimationGraphD4Ev */
	void IAnimationGraph(class IAnimationGraph *, class IAnimationGraph &); /* linkage=_ZN15IAnimationGraphC4EOS_ */
	void IAnimationGraph(class IAnimationGraph *, const class IAnimationGraph  &); /* linkage=_ZN15IAnimationGraphC4ERKS_ */
	void IAnimationGraph(class IAnimationGraph *); /* linkage=_ZN15IAnimationGraphC4Ev */
	class IAnimationGraph & operator=(class IAnimationGraph *, class IAnimationGraph &); /* linkage=_ZN15IAnimationGraphaSEOS_ */
	class IAnimationGraph & operator=(class IAnimationGraph *, const class IAnimationGraph  &); /* linkage=_ZN15IAnimationGraphaSERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN15IAnimationGraph8MyTypeIDEv */
	/* <e8e46f> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:19 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN15IAnimationGraph10MyTypeInfoEv */
	virtual const class IAnimParameterList  * GetParameterList(const class IAnimationGraph  *); /* linkage=_ZNK15IAnimationGraph16GetParameterListEv */
	virtual const class IAnimTagManager  * GetTagManager(const class IAnimationGraph  *); /* linkage=_ZNK15IAnimationGraph13GetTagManagerEv */
	virtual const class IAnimMovementManager  * GetMovementManager(const class IAnimationGraph  *); /* linkage=_ZNK15IAnimationGraph18GetMovementManagerEv */
	virtual const class IAnimGraphSettingsManager  * GetSettingsManager(const class IAnimationGraph  *); /* linkage=_ZNK15IAnimationGraph18GetSettingsManagerEv */
	virtual const class IAnimNodeManager  * GetNodeManager(const class IAnimationGraph  *); /* linkage=_ZNK15IAnimationGraph14GetNodeManagerEv */
	virtual IAnimGraphModelBindingPtr CreateModelBinding(const class IAnimationGraph  *, const class CModel  *); /* linkage=_ZNK15IAnimationGraph18CreateModelBindingEPK6CModel */
	virtual const char  * GetResourceName(const class IAnimationGraph  *); /* linkage=_ZNK15IAnimationGraph15GetResourceNameEv */
};

// <00E86563> ../public/animationsystem/ianimationgraph.h:32
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 32
	const char   __PRETTY_FUNCTION__; // 11466
} /* size: 0, variables: 2 */

// <00E4F0AE> ../public/animationsystem/ianimationgraph.h:60
void IAnimationSubGraph::IAnimationSubGraph()
{
} /* size: 0 */

// <00E4F092> ../public/animationsystem/ianimationgraph.h:60
inline void IAnimationSubGraph::IAnimationSubGraph()
{
} /* size: 0 */

// <00E4F07B> ../public/animationsystem/ianimationgraph.h:60
void IAnimationSubGraph::~IAnimationSubGraph()
{
} /* size: 0 */

// <00E4F048> ../public/animationsystem/ianimationgraph.h:60
inline void IAnimationSubGraph::~IAnimationSubGraph()
{
} /* size: 0 */

// <00D74A8A> ../public/animationsystem/ianimationgraph.h:60
// member functions: 26
// member variable: 1
// static member variable: 1
// vtable entries: 5
// class size: 8
class IAnimationSubGraph : public Object {
public:
	/* class Object <ancestor>; */ /* 0 0 */
	void IAnimationSubGraph(IAnimationSubGraph* , IAnimationSubGraph& );
	void IAnimationSubGraph(IAnimationSubGraph* , const IAnimationSubGraph& );
	void IAnimationSubGraph(IAnimationSubGraph* );
	IAnimationSubGraph& operator=(IAnimationSubGraph* , IAnimationSubGraph& );
	IAnimationSubGraph& operator=(IAnimationSubGraph* , const IAnimationSubGraph& );
private:
	static class CClassInfoT<IAnimationSubGraph> m_classInfoIAnimationSubGraph; /* 0 0 */
	/* ../public/animationsystem/ianimationgraph.h:62 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.cpp:17 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.cpp:17 */
	virtual const CClassInfo& GetTypeInfo(const IAnimationSubGraph* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.cpp:17 */
	virtual void* CastToBase(IAnimationSubGraph* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.cpp:17 */
	virtual const void* CastToBase(const IAnimationSubGraph* , ClassID);
	/* ../public/animationsystem/ianimationgraph.h:65 */
	virtual IAnimNodeManager* GetNodeManager(IAnimationSubGraph* );
	/* ../public/animationsystem/ianimationgraph.h:66 */
	virtual const IAnimNodeManager* GetNodeManager(const IAnimationSubGraph* );
	virtual void ~IAnimationSubGraph(IAnimationSubGraph* );
	virtual const void  * CastToBase(const class IAnimationSubGraph  *, class ClassID); /* linkage=_ZNK18IAnimationSubGraph10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class IAnimationSubGraph *, class ClassID); /* linkage=_ZN18IAnimationSubGraph10CastToBaseEN10Reflection7ClassIDE */
	virtual const class CClassInfo  & GetTypeInfo(const class IAnimationSubGraph  *); /* linkage=_ZNK18IAnimationSubGraph11GetTypeInfoEv */
	virtual void ~IAnimationSubGraph(class IAnimationSubGraph *); /* linkage=_ZN18IAnimationSubGraphD4Ev */
	void IAnimationSubGraph(class IAnimationSubGraph *, class IAnimationSubGraph &); /* linkage=_ZN18IAnimationSubGraphC4EOS_ */
	void IAnimationSubGraph(class IAnimationSubGraph *, const class IAnimationSubGraph  &); /* linkage=_ZN18IAnimationSubGraphC4ERKS_ */
	void IAnimationSubGraph(class IAnimationSubGraph *); /* linkage=_ZN18IAnimationSubGraphC4Ev */
	class IAnimationSubGraph & operator=(class IAnimationSubGraph *, class IAnimationSubGraph &); /* linkage=_ZN18IAnimationSubGraphaSEOS_ */
	class IAnimationSubGraph & operator=(class IAnimationSubGraph *, const class IAnimationSubGraph  &); /* linkage=_ZN18IAnimationSubGraphaSERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN18IAnimationSubGraph8MyTypeIDEv */
	/* <e8f066> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.cpp:17 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN18IAnimationSubGraph10MyTypeInfoEv */
	virtual class IAnimNodeManager * GetNodeManager(class IAnimationSubGraph *); /* linkage=_ZN18IAnimationSubGraph14GetNodeManagerEv */
	virtual const class IAnimNodeManager  * GetNodeManager(const class IAnimationSubGraph  *); /* linkage=_ZNK18IAnimationSubGraph14GetNodeManagerEv */
};

// <00E86531> ../public/animationsystem/ianimationgraph.h:62
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 62
	const char   __PRETTY_FUNCTION__; // 11547
} /* size: 0, variables: 2 */

// <00E7C5C8> ../public/animationsystem/ianimationgraph.h:72
void IAnimationGraphBuilder::IAnimationGraphBuilder()
{
} /* size: 0 */

// <00E7C5AC> ../public/animationsystem/ianimationgraph.h:72
inline void IAnimationGraphBuilder::IAnimationGraphBuilder()
{
} /* size: 0 */

// <00E7C595> ../public/animationsystem/ianimationgraph.h:72
void IAnimationGraphBuilder::~IAnimationGraphBuilder()
{
} /* size: 0 */

// <00E7C562> ../public/animationsystem/ianimationgraph.h:72
inline void IAnimationGraphBuilder::~IAnimationGraphBuilder()
{
} /* size: 0 */

// <00DE553E> ../public/animationsystem/ianimationgraph.h:72
// member functions: 90
// member variable: 1
// static member variable: 1
// vtable entries: 37
// class size: 8
class IAnimationGraphBuilder : public IAnimationGraph {
public:
	/* class IAnimationGraph <ancestor>; */ /* 0 8 */
	void IAnimationGraphBuilder(IAnimationGraphBuilder* , IAnimationGraphBuilder& );
	void IAnimationGraphBuilder(IAnimationGraphBuilder* , const IAnimationGraphBuilder& );
	void IAnimationGraphBuilder(IAnimationGraphBuilder* );
	IAnimationGraphBuilder& operator=(IAnimationGraphBuilder* , IAnimationGraphBuilder& );
	IAnimationGraphBuilder& operator=(IAnimationGraphBuilder* , const IAnimationGraphBuilder& );
private:
	static class CClassInfoT<IAnimationGraphBuilder> m_classInfoIAnimationGraphBuilder; /* 0 0 */
	/* ../public/animationsystem/ianimationgraph.h:74 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:22 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:22 */
	virtual const CClassInfo& GetTypeInfo(const IAnimationGraphBuilder* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:22 */
	virtual void* CastToBase(IAnimationGraphBuilder* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:22 */
	virtual const void* CastToBase(const IAnimationGraphBuilder* , ClassID);
	/* ../public/animationsystem/ianimationgraph.h:78 */
	virtual IAnimNode* GetNode(IAnimationGraphBuilder* , const AnimNodeLocation_t& );
	/* ../public/animationsystem/ianimationgraph.h:81 */
	virtual CClassInfoList GetNodeTypes(const IAnimationGraphBuilder* , bool);
	/* ../public/animationsystem/ianimationgraph.h:84 */
	virtual IAnimParameterList* GetParameterList(IAnimationGraphBuilder* );
	/* ../public/animationsystem/ianimationgraph.h:87 */
	virtual IAnimTagManager* GetTagManager(IAnimationGraphBuilder* );
	/* ../public/animationsystem/ianimationgraph.h:90 */
	virtual IAnimMovementManager* GetMovementManager(IAnimationGraphBuilder* );
	/* ../public/animationsystem/ianimationgraph.h:93 */
	virtual IAnimGraphSettingsManager* GetSettingsManager(IAnimationGraphBuilder* );
	/* ../public/animationsystem/ianimationgraph.h:96 */
	virtual IAnimNodeManager* GetNodeManager(IAnimationGraphBuilder* );
	/* ../public/animationsystem/ianimationgraph.h:99 */
	virtual IAnimClipPropertiesManager* GetClipPropertiesManager(IAnimationGraphBuilder* );
	/* ../public/animationsystem/ianimationgraph.h:102 */
	virtual ISubGraphManager* GetSubGraphManager(IAnimationGraphBuilder* );
	/* ../public/animationsystem/ianimationgraph.h:105 */
	virtual const ISubGraphManager* GetSubGraphManager(const IAnimationGraphBuilder* );
	/* ../public/animationsystem/ianimationgraph.h:108 */
	virtual IActivityValueList* GetActivityParamValuesList(IAnimationGraphBuilder* );
	/* ../public/animationsystem/ianimationgraph.h:109 */
	virtual const IActivityValueList* GetActivityParamValuesList(const IAnimationGraphBuilder* );
	/* ../public/animationsystem/ianimationgraph.h:112 */
	virtual const CUtlString& GetPreviewModel(const IAnimationGraphBuilder* );
	/* ../public/animationsystem/ianimationgraph.h:113 */
	virtual void SetPreviewModel(IAnimationGraphBuilder* , const CUtlString& );
	/* ../public/animationsystem/ianimationgraph.h:115 */
	virtual int GetBoneMergeModelCount(const IAnimationGraphBuilder* );
	/* ../public/animationsystem/ianimationgraph.h:116 */
	virtual const CUtlString& GetBoneMergeModel(const IAnimationGraphBuilder* , int);
	/* ../public/animationsystem/ianimationgraph.h:117 */
	virtual bool IsBoneMergeModelEnabled(const IAnimationGraphBuilder* , int);
	/* ../public/animationsystem/ianimationgraph.h:118 */
	virtual void EnableBoneMergeModel(IAnimationGraphBuilder* , int, bool);
	/* ../public/animationsystem/ianimationgraph.h:119 */
	virtual void SetBoneMergeModel(IAnimationGraphBuilder* , int, const CUtlString& );
	/* ../public/animationsystem/ianimationgraph.h:120 */
	virtual void AddBoneMergeModel(IAnimationGraphBuilder* , const CUtlString& );
	/* ../public/animationsystem/ianimationgraph.h:121 */
	virtual void RemoveBoneMergeModel(IAnimationGraphBuilder* , int);
	/* ../public/animationsystem/ianimationgraph.h:124 */
	virtual void AddLogListener(IAnimationGraphBuilder* , IAnimGraphLogListener* );
	/* ../public/animationsystem/ianimationgraph.h:125 */
	virtual void RemoveLogListener(IAnimationGraphBuilder* , IAnimGraphLogListener* );
	/* ../public/animationsystem/ianimationgraph.h:127 */
	virtual float GetAlignmentGridSize(IAnimationGraphBuilder* );
	/* ../public/animationsystem/ianimationgraph.h:129 */
	virtual void InitContext(IAnimationGraphBuilder* );
	/* ../public/animationsystem/ianimationgraph.h:131 */
	virtual void Bake(IAnimationGraphBuilder* );
	/* ../public/animationsystem/ianimationgraph.h:133 */
	virtual float GetCameraFov(const IAnimationGraphBuilder* );
	/* ../public/animationsystem/ianimationgraph.h:134 */
	virtual void SetCameraFov(IAnimationGraphBuilder* , float);
	/* ../public/animationsystem/ianimationgraph.h:136 */
	virtual const char* GetCameraLockBoneName(const IAnimationGraphBuilder* );
	/* ../public/animationsystem/ianimationgraph.h:137 */
	virtual void SetCameraLockBoneName(IAnimationGraphBuilder* , const char* );
	/* ../public/animationsystem/ianimationgraph.h:139 */
	virtual bool GetCameraLock(const IAnimationGraphBuilder* );
	/* ../public/animationsystem/ianimationgraph.h:140 */
	virtual void SetCameraLock(IAnimationGraphBuilder* , bool);
	/* ../public/animationsystem/ianimationgraph.h:142 */
	virtual bool GetCameraViewModel(const IAnimationGraphBuilder* );
	/* ../public/animationsystem/ianimationgraph.h:143 */
	virtual void SetCameraViewModel(IAnimationGraphBuilder* , bool);
	virtual void ~IAnimationGraphBuilder(IAnimationGraphBuilder* );
	virtual const void  * CastToBase(const class IAnimationGraphBuilder  *, class ClassID); /* linkage=_ZNK22IAnimationGraphBuilder10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class IAnimationGraphBuilder *, class ClassID); /* linkage=_ZN22IAnimationGraphBuilder10CastToBaseEN10Reflection7ClassIDE */
	virtual const class CClassInfo  & GetTypeInfo(const class IAnimationGraphBuilder  *); /* linkage=_ZNK22IAnimationGraphBuilder11GetTypeInfoEv */
	virtual void ~IAnimationGraphBuilder(class IAnimationGraphBuilder *); /* linkage=_ZN22IAnimationGraphBuilderD4Ev */
	void IAnimationGraphBuilder(class IAnimationGraphBuilder *, class IAnimationGraphBuilder &); /* linkage=_ZN22IAnimationGraphBuilderC4EOS_ */
	void IAnimationGraphBuilder(class IAnimationGraphBuilder *, const class IAnimationGraphBuilder  &); /* linkage=_ZN22IAnimationGraphBuilderC4ERKS_ */
	void IAnimationGraphBuilder(class IAnimationGraphBuilder *); /* linkage=_ZN22IAnimationGraphBuilderC4Ev */
	class IAnimationGraphBuilder & operator=(class IAnimationGraphBuilder *, class IAnimationGraphBuilder &); /* linkage=_ZN22IAnimationGraphBuilderaSEOS_ */
	class IAnimationGraphBuilder & operator=(class IAnimationGraphBuilder *, const class IAnimationGraphBuilder  &); /* linkage=_ZN22IAnimationGraphBuilderaSERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN22IAnimationGraphBuilder8MyTypeIDEv */
	/* <e8e48d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:22 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN22IAnimationGraphBuilder10MyTypeInfoEv */
	virtual class IAnimNode * GetNode(class IAnimationGraphBuilder *, const class AnimNodeLocation_t  &); /* linkage=_ZN22IAnimationGraphBuilder7GetNodeERK18AnimNodeLocation_t */
	virtual CClassInfoList GetNodeTypes(const class IAnimationGraphBuilder  *, bool); /* linkage=_ZNK22IAnimationGraphBuilder12GetNodeTypesEb */
	virtual class IAnimParameterList * GetParameterList(class IAnimationGraphBuilder *); /* linkage=_ZN22IAnimationGraphBuilder16GetParameterListEv */
	virtual class IAnimTagManager * GetTagManager(class IAnimationGraphBuilder *); /* linkage=_ZN22IAnimationGraphBuilder13GetTagManagerEv */
	virtual class IAnimMovementManager * GetMovementManager(class IAnimationGraphBuilder *); /* linkage=_ZN22IAnimationGraphBuilder18GetMovementManagerEv */
	virtual class IAnimGraphSettingsManager * GetSettingsManager(class IAnimationGraphBuilder *); /* linkage=_ZN22IAnimationGraphBuilder18GetSettingsManagerEv */
	virtual class IAnimNodeManager * GetNodeManager(class IAnimationGraphBuilder *); /* linkage=_ZN22IAnimationGraphBuilder14GetNodeManagerEv */
	virtual class IAnimClipPropertiesManager * GetClipPropertiesManager(class IAnimationGraphBuilder *); /* linkage=_ZN22IAnimationGraphBuilder24GetClipPropertiesManagerEv */
	virtual class ISubGraphManager * GetSubGraphManager(class IAnimationGraphBuilder *); /* linkage=_ZN22IAnimationGraphBuilder18GetSubGraphManagerEv */
	virtual const class ISubGraphManager  * GetSubGraphManager(const class IAnimationGraphBuilder  *); /* linkage=_ZNK22IAnimationGraphBuilder18GetSubGraphManagerEv */
	virtual class IActivityValueList * GetActivityParamValuesList(class IAnimationGraphBuilder *); /* linkage=_ZN22IAnimationGraphBuilder26GetActivityParamValuesListEv */
	virtual const class IActivityValueList  * GetActivityParamValuesList(const class IAnimationGraphBuilder  *); /* linkage=_ZNK22IAnimationGraphBuilder26GetActivityParamValuesListEv */
	virtual const class CUtlString  & GetPreviewModel(const class IAnimationGraphBuilder  *); /* linkage=_ZNK22IAnimationGraphBuilder15GetPreviewModelEv */
	virtual void SetPreviewModel(class IAnimationGraphBuilder *, const class CUtlString  &); /* linkage=_ZN22IAnimationGraphBuilder15SetPreviewModelERK10CUtlString */
	virtual int GetBoneMergeModelCount(const class IAnimationGraphBuilder  *); /* linkage=_ZNK22IAnimationGraphBuilder22GetBoneMergeModelCountEv */
	virtual const class CUtlString  & GetBoneMergeModel(const class IAnimationGraphBuilder  *, int); /* linkage=_ZNK22IAnimationGraphBuilder17GetBoneMergeModelEi */
	virtual bool IsBoneMergeModelEnabled(const class IAnimationGraphBuilder  *, int); /* linkage=_ZNK22IAnimationGraphBuilder23IsBoneMergeModelEnabledEi */
	virtual void EnableBoneMergeModel(class IAnimationGraphBuilder *, int, bool); /* linkage=_ZN22IAnimationGraphBuilder20EnableBoneMergeModelEib */
	virtual void SetBoneMergeModel(class IAnimationGraphBuilder *, int, const class CUtlString  &); /* linkage=_ZN22IAnimationGraphBuilder17SetBoneMergeModelEiRK10CUtlString */
	virtual void AddBoneMergeModel(class IAnimationGraphBuilder *, const class CUtlString  &); /* linkage=_ZN22IAnimationGraphBuilder17AddBoneMergeModelERK10CUtlString */
	virtual void RemoveBoneMergeModel(class IAnimationGraphBuilder *, int); /* linkage=_ZN22IAnimationGraphBuilder20RemoveBoneMergeModelEi */
	virtual void AddLogListener(class IAnimationGraphBuilder *, class IAnimGraphLogListener *); /* linkage=_ZN22IAnimationGraphBuilder14AddLogListenerEP21IAnimGraphLogListener */
	virtual void RemoveLogListener(class IAnimationGraphBuilder *, class IAnimGraphLogListener *); /* linkage=_ZN22IAnimationGraphBuilder17RemoveLogListenerEP21IAnimGraphLogListener */
	virtual float GetAlignmentGridSize(class IAnimationGraphBuilder *); /* linkage=_ZN22IAnimationGraphBuilder20GetAlignmentGridSizeEv */
	virtual void InitContext(class IAnimationGraphBuilder *); /* linkage=_ZN22IAnimationGraphBuilder11InitContextEv */
	virtual void Bake(class IAnimationGraphBuilder *); /* linkage=_ZN22IAnimationGraphBuilder4BakeEv */
	virtual float GetCameraFov(const class IAnimationGraphBuilder  *); /* linkage=_ZNK22IAnimationGraphBuilder12GetCameraFovEv */
	virtual void SetCameraFov(class IAnimationGraphBuilder *, float); /* linkage=_ZN22IAnimationGraphBuilder12SetCameraFovEf */
	virtual const char  * GetCameraLockBoneName(const class IAnimationGraphBuilder  *); /* linkage=_ZNK22IAnimationGraphBuilder21GetCameraLockBoneNameEv */
	virtual void SetCameraLockBoneName(class IAnimationGraphBuilder *, const char  *); /* linkage=_ZN22IAnimationGraphBuilder21SetCameraLockBoneNameEPKc */
	virtual bool GetCameraLock(const class IAnimationGraphBuilder  *); /* linkage=_ZNK22IAnimationGraphBuilder13GetCameraLockEv */
	virtual void SetCameraLock(class IAnimationGraphBuilder *, bool); /* linkage=_ZN22IAnimationGraphBuilder13SetCameraLockEb */
	virtual bool GetCameraViewModel(const class IAnimationGraphBuilder  *); /* linkage=_ZNK22IAnimationGraphBuilder18GetCameraViewModelEv */
	virtual void SetCameraViewModel(class IAnimationGraphBuilder *, bool); /* linkage=_ZN22IAnimationGraphBuilder18SetCameraViewModelEb */
};

