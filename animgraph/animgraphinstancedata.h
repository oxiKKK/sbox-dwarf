
//
// animgraph/animgraphinstancedata.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 47
//	class: 1
//	structs: 3
//

// <0158331D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:24
void PerTickSettings_t::PerTickSettings_t()
{
} /* size: 0 */

// <01583301> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:24
inline void PerTickSettings_t::PerTickSettings_t()
{
} /* size: 0 */

// <00DA3E05> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:24
// member function: 1
// member variables: 10
// static member variable: 1
// struct size: 112
struct PerTickSettings_t {
	static struct datamap_t m_DataMap; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:26 */
	datamap_t* GetBaseMap(void);
	CTransform m_localToWorld __attribute__((__aligned__(16))); /* 0 32 */
	CTransform m_prevLocalToWorld __attribute__((__aligned__(16))); /* 32 32 */
	CRootMotion m_rootMotion; /* 64 28 */
	int m_updateID; /* 92 4 */
	float m_flLastTimeStep; /* 96 4 */
	float m_flPrevAnimTime; /* 100 4 */
	float m_flNextAnimTime; /* 104 4 */
	bool m_bAwaken; /* 108 1 */
	bool m_bTeleported; /* 109 1 */
	bool m_bIsEditor; /* 110 1 */
} __attribute__((__aligned__(16)));

// <01516899> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:24
// member functions: 2
// member variables: 10
// static member variable: 1
// struct size: 112
struct PerTickSettings_t {
	static struct datamap_t m_DataMap; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:26 */
	datamap_t* GetBaseMap(void);
	CTransform m_localToWorld __attribute__((__aligned__(16))); /* 0 32 */
	CTransform m_prevLocalToWorld __attribute__((__aligned__(16))); /* 32 32 */
	CRootMotion m_rootMotion; /* 64 28 */
	int m_updateID; /* 92 4 */
	float m_flLastTimeStep; /* 96 4 */
	float m_flPrevAnimTime; /* 100 4 */
	float m_flNextAnimTime; /* 104 4 */
	bool m_bAwaken; /* 108 1 */
	bool m_bTeleported; /* 109 1 */
	bool m_bIsEditor; /* 110 1 */
	void PerTickSettings_t(PerTickSettings_t* );
} __attribute__((__aligned__(16)));

// <0191DCBE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:50
void TagSpan_t::TagSpan_t()
{
} /* size: 0 */

// <0191DCA2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:50
inline void TagSpan_t::TagSpan_t()
{
} /* size: 0 */

// <0015E2BF> animgraph/animgraphinstancedata.h:50
// member variables: 3
// struct size: 12
struct TagSpan_t {
	int m_tagIndex; /* 0 4 */
	float m_startCycle; /* 4 4 */
	float m_endCycle; /* 8 4 */
};

// <015BE1B2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:62
void CAnimGraphInstanceData::CAnimGraphInstanceData(const CAnimGraphInstanceData &)
{
} /* size: 0 */

// <015BE191> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:62
inline void CAnimGraphInstanceData::CAnimGraphInstanceData(const CAnimGraphInstanceData &)
{
} /* size: 0 */

// <0156AD06> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:62
// function call: 1
void CAnimGraphInstanceData::~CAnimGraphInstanceData()
{
	CPackedDataT<true>::~CPackedDataT(); // 62
} /* size: 24, inline expansions: 1 (9 bytes) */

// <0156ABC8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:62
// function calls: 5
void CAnimGraphInstanceData::~CAnimGraphInstanceData()
{
	CPackedDataT<true>::~CPackedDataT(); // 62
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 19
	IAnimGraphInstanceData::~IAnimGraphInstanceData(); // 62
	CAnimGraphInstanceData::~CAnimGraphInstanceData(); // 62
} /* size: 54, inline expansions: 5 (29 bytes) */

// <0156ABAC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:62
inline void CAnimGraphInstanceData::~CAnimGraphInstanceData()
{
} /* size: 0 */

// <01525914> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:62
// member functions: 82
// member variables: 6
// vtable entries: 2
// class size: 48
class CAnimGraphInstanceData : public IAnimGraphInstanceData {
public:
	/* class IAnimGraphInstanceData <ancestor>; */ /* 0 16 */
	void CAnimGraphInstanceData(CAnimGraphInstanceData* , CAnimGraphInstanceData& );
	void CAnimGraphInstanceData(CAnimGraphInstanceData* , const CAnimGraphInstanceData& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:28 */
	void CAnimGraphInstanceData(CAnimGraphInstanceData* , const CAnimParameterList& , const CAnimTagManager& , const CAnimParamIdMap& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:42 */
	virtual IAnimGraphInstanceDataPtr Clone(const CAnimGraphInstanceData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:108 */
	virtual float GetAnimTime(const CAnimGraphInstanceData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:48 */
	CSaveablePackedData& GetData(CAnimGraphInstanceData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:54 */
	const CSaveablePackedData& GetData(const CAnimGraphInstanceData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:60 */
	CAnimUpdateParameterList* GetParameterList(CAnimGraphInstanceData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:66 */
	const CAnimUpdateParameterList* GetParameterList(const CAnimGraphInstanceData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:72 */
	CAnimVariant GetParameter(const CAnimGraphInstanceData* , const CAnimParamHandle& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:78 */
	void SetParameter(CAnimGraphInstanceData* , const CAnimParamHandle& , const CAnimVariant& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:84 */
	CAnimUpdateTagList* GetTagList(CAnimGraphInstanceData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:90 */
	const CAnimUpdateTagList* GetTagList(const CAnimGraphInstanceData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:96 */
	int GetUpdateID(const CAnimGraphInstanceData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:102 */
	void IncrementUpdateID(CAnimGraphInstanceData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:114 */
	void SetAnimTime(CAnimGraphInstanceData* , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:120 */
	float GetPrevAnimTime(const CAnimGraphInstanceData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:126 */
	void SetPrevAnimTime(CAnimGraphInstanceData* , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:132 */
	float GetLastTimeStep(const CAnimGraphInstanceData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:138 */
	void UpdateLastTimeStep(CAnimGraphInstanceData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:146 */
	bool HasAwakenFromDormant(const CAnimGraphInstanceData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:152 */
	void SetHasAwakenFromDormant(CAnimGraphInstanceData* , bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:158 */
	bool HasTeleported(const CAnimGraphInstanceData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:164 */
	void SetHasTeleported(CAnimGraphInstanceData* , bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:170 */
	bool IsEditor(const CAnimGraphInstanceData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:175 */
	void SetEditor(CAnimGraphInstanceData* , bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:181 */
	const CTransform& GetLocalToWorldTransform(const CAnimGraphInstanceData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:187 */
	void SetLocalToWorldTransform(CAnimGraphInstanceData* , const CTransform& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:193 */
	const CTransform& GetPreviousLocalToWorldTransform(const CAnimGraphInstanceData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:199 */
	void SetPreviousLocalToWorldTransform(CAnimGraphInstanceData* , const CTransform& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:205 */
	const CRootMotion& GetRootMotion(const CAnimGraphInstanceData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:211 */
	void SetRootMotion(CAnimGraphInstanceData* , const CRootMotion& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:217 */
	void CreateTraceRequestList(CAnimGraphInstanceData* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:223 */
	CTraceRequestList& GetTraceRequestList(CAnimGraphInstanceData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:229 */
	const CTraceRequestList& GetTraceRequestList(const CAnimGraphInstanceData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:235 */
	void Save(const CAnimGraphInstanceData* , ISave* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:242 */
	void Restore(CAnimGraphInstanceData* , IRestore* );
private:
	CSaveablePackedData m_data; /* 16 16 */
	CPackedHandle<CAnimUpdateParameterList> m_hParamList; /* 32 4 */
	CPackedHandle<CAnimUpdateTagList> m_hTagList; /* 36 4 */
	CPackedHandle<PerTickSettings_t> m_hPerTickSettings; /* 40 4 */
	CPackedHandle<CTraceRequestList> m_hTraceRequestList; /* 44 4 */
	virtual void ~CAnimGraphInstanceData(CAnimGraphInstanceData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:77 */
	CAnimPath* operator[]<CAnimPath>(CAnimGraphInstanceData* , const CPackedHandle<CAnimPath>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:77 */
	MovementData* operator[]<MovementData>(CAnimGraphInstanceData* , const CPackedHandle<MovementData>& );
	virtual IAnimGraphInstanceDataPtr Clone(const class CAnimGraphInstanceData  *); /* linkage=_ZNK22CAnimGraphInstanceData5CloneEv */
	virtual inline void ~CAnimGraphInstanceData(class CAnimGraphInstanceData *); /* linkage=_ZN22CAnimGraphInstanceDataD4Ev */
	/* <15d2bfc> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:48 */
	CSaveablePackedData & GetData(class CAnimGraphInstanceData *); /* linkage=_ZN22CAnimGraphInstanceData7GetDataEv */
	void CreateTraceRequestList(class CAnimGraphInstanceData *, int); /* linkage=_ZN22CAnimGraphInstanceData22CreateTraceRequestListEi */
	void CAnimGraphInstanceData(class CAnimGraphInstanceData *, const class CAnimParameterList  &, const class CAnimTagManager  &, const class CAnimParamIdMap  &); /* linkage=_ZN22CAnimGraphInstanceDataC4ERK18CAnimParameterListRK15CAnimTagManagerRK15CAnimParamIdMap */
	void Restore(class CAnimGraphInstanceData *, class IRestore *); /* linkage=_ZN22CAnimGraphInstanceData7RestoreEP8IRestore */
	void Save(const class CAnimGraphInstanceData  *, class ISave *); /* linkage=_ZNK22CAnimGraphInstanceData4SaveEP5ISave */
	/* <15d2cc3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:96 */
	int GetUpdateID(const class CAnimGraphInstanceData  *); /* linkage=_ZNK22CAnimGraphInstanceData11GetUpdateIDEv */
	/* <15cfb84> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:108 */
	virtual float GetAnimTime(const class CAnimGraphInstanceData  *); /* linkage=_ZNK22CAnimGraphInstanceData11GetAnimTimeEv */
	void SetEditor(class CAnimGraphInstanceData *, bool); /* linkage=_ZN22CAnimGraphInstanceData9SetEditorEb */
	/* <15d33bf> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:223 */
	class CTraceRequestList & GetTraceRequestList(class CAnimGraphInstanceData *); /* linkage=_ZN22CAnimGraphInstanceData19GetTraceRequestListEv */
	void SetLocalToWorldTransform(class CAnimGraphInstanceData *, const class CTransform  &); /* linkage=_ZN22CAnimGraphInstanceData24SetLocalToWorldTransformERK10CTransform */
	void SetRootMotion(class CAnimGraphInstanceData *, const class CRootMotion  &); /* linkage=_ZN22CAnimGraphInstanceData13SetRootMotionERK11CRootMotion */
	/* <15d3321> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:205 */
	const class CRootMotion  & GetRootMotion(const class CAnimGraphInstanceData  *); /* linkage=_ZNK22CAnimGraphInstanceData13GetRootMotionEv */
	void SetPreviousLocalToWorldTransform(class CAnimGraphInstanceData *, const class CTransform  &); /* linkage=_ZN22CAnimGraphInstanceData32SetPreviousLocalToWorldTransformERK10CTransform */
	/* <15d3283> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:193 */
	const class CTransform  & GetPreviousLocalToWorldTransform(const class CAnimGraphInstanceData  *); /* linkage=_ZNK22CAnimGraphInstanceData32GetPreviousLocalToWorldTransformEv */
	const class CTransform  & GetLocalToWorldTransform(const class CAnimGraphInstanceData  *); /* linkage=_ZNK22CAnimGraphInstanceData24GetLocalToWorldTransformEv */
	class CStateMachineInstanceData * operator[]<CStateMachineInstanceData>(class CAnimGraphInstanceData *, const class CPackedHandle<CStateMachineInstanceData>  &); /* linkage=_ZN22CAnimGraphInstanceDataixI25CStateMachineInstanceDataEEPT_RK13CPackedHandleIS2_E */
	void CAnimGraphInstanceData(class CAnimGraphInstanceData *, const class CAnimGraphInstanceData  &); /* linkage=_ZN22CAnimGraphInstanceDataC4ERKS_ */
	void CAnimGraphInstanceData(class CAnimGraphInstanceData *, class CAnimGraphInstanceData &); /* linkage=_ZN22CAnimGraphInstanceDataC4EOS_ */
	const CSaveablePackedData  & GetData(const class CAnimGraphInstanceData  *); /* linkage=_ZNK22CAnimGraphInstanceData7GetDataEv */
	class CAnimUpdateParameterList * GetParameterList(class CAnimGraphInstanceData *); /* linkage=_ZN22CAnimGraphInstanceData16GetParameterListEv */
	const class CAnimUpdateParameterList  * GetParameterList(const class CAnimGraphInstanceData  *); /* linkage=_ZNK22CAnimGraphInstanceData16GetParameterListEv */
	/* <15d58f4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:72 */
	class CAnimVariant GetParameter(const class CAnimGraphInstanceData  *, const class CAnimParamHandle  &); /* linkage=_ZNK22CAnimGraphInstanceData12GetParameterERK16CAnimParamHandle */
	/* <15d5aee> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:78 */
	void SetParameter(class CAnimGraphInstanceData *, const class CAnimParamHandle  &, const class CAnimVariant  &); /* linkage=_ZN22CAnimGraphInstanceData12SetParameterERK16CAnimParamHandleRK12CAnimVariant */
	/* <15d2c25> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:84 */
	class CAnimUpdateTagList * GetTagList(class CAnimGraphInstanceData *); /* linkage=_ZN22CAnimGraphInstanceData10GetTagListEv */
	const class CAnimUpdateTagList  * GetTagList(const class CAnimGraphInstanceData  *); /* linkage=_ZNK22CAnimGraphInstanceData10GetTagListEv */
	/* <15d2d61> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:102 */
	void IncrementUpdateID(class CAnimGraphInstanceData *); /* linkage=_ZN22CAnimGraphInstanceData17IncrementUpdateIDEv */
	/* <15d2dff> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:114 */
	void SetAnimTime(class CAnimGraphInstanceData *, float); /* linkage=_ZN22CAnimGraphInstanceData11SetAnimTimeEf */
	/* <15d2eb6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:120 */
	float GetPrevAnimTime(const class CAnimGraphInstanceData  *); /* linkage=_ZNK22CAnimGraphInstanceData15GetPrevAnimTimeEv */
	/* <15d2f54> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:126 */
	void SetPrevAnimTime(class CAnimGraphInstanceData *, float); /* linkage=_ZN22CAnimGraphInstanceData15SetPrevAnimTimeEf */
	/* <15d300b> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:132 */
	float GetLastTimeStep(const class CAnimGraphInstanceData  *); /* linkage=_ZNK22CAnimGraphInstanceData15GetLastTimeStepEv */
	void UpdateLastTimeStep(class CAnimGraphInstanceData *); /* linkage=_ZN22CAnimGraphInstanceData18UpdateLastTimeStepEv */
	/* <15d30a9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:146 */
	bool HasAwakenFromDormant(const class CAnimGraphInstanceData  *); /* linkage=_ZNK22CAnimGraphInstanceData20HasAwakenFromDormantEv */
	void SetHasAwakenFromDormant(class CAnimGraphInstanceData *, bool); /* linkage=_ZN22CAnimGraphInstanceData23SetHasAwakenFromDormantEb */
	/* <15d3147> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:158 */
	bool HasTeleported(const class CAnimGraphInstanceData  *); /* linkage=_ZNK22CAnimGraphInstanceData13HasTeleportedEv */
	void SetHasTeleported(class CAnimGraphInstanceData *, bool); /* linkage=_ZN22CAnimGraphInstanceData16SetHasTeleportedEb */
	/* <15d31e5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.cpp:170 */
	bool IsEditor(const class CAnimGraphInstanceData  *); /* linkage=_ZNK22CAnimGraphInstanceData8IsEditorEv */
	const class CTraceRequestList  & GetTraceRequestList(const class CAnimGraphInstanceData  *); /* linkage=_ZNK22CAnimGraphInstanceData19GetTraceRequestListEv */
	virtual void ~CAnimGraphInstanceData(class CAnimGraphInstanceData *); /* linkage=_ZN22CAnimGraphInstanceDataD4Ev */
	class CAnimPath * operator[]<CAnimPath>(class CAnimGraphInstanceData *, const class CPackedHandle<CAnimPath>  &); /* linkage=_ZN22CAnimGraphInstanceDataixI9CAnimPathEEPT_RK13CPackedHandleIS2_E */
	class MovementData * operator[]<MovementData>(class CAnimGraphInstanceData *, const class CPackedHandle<MovementData>  &); /* linkage=_ZN22CAnimGraphInstanceDataixI12MovementDataEEPT_RK13CPackedHandleIS2_E */
};

// <00DF4B0A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:65
void CAnimGraphInstanceData::CAnimGraphInstanceData(const CAnimParameterList& paramList, const CAnimTagManager& tagMgr, const CAnimParamIdMap& paramMap)
{
} /* size: 0 */

// <0191BC81> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:77
inline void CAnimGraphInstanceData::operator[]<CLeanMatrixInstanceData>(const CPackedHandle<CLeanMatrixInstanceData>& handle)
{
} /* size: 0 */

// <0191BC25> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:77
inline void CAnimGraphInstanceData::operator[]<LookAtOpInstanceSettings_t>(const CPackedHandle<LookAtOpInstanceSettings_t>& handle)
{
} /* size: 0 */

// <0191BBF9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:77
inline void CAnimGraphInstanceData::operator[]<CLookAtInstanceData>(const CPackedHandle<CLookAtInstanceData>& handle)
{
} /* size: 0 */

// <0191BB18> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:77
inline void CAnimGraphInstanceData::operator[]<MotionMatchingInstanceData>(const CPackedHandle<MotionMatchingInstanceData>& handle)
{
} /* size: 0 */

// <0191BA0B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:77
inline void CAnimGraphInstanceData::operator[]<CMoverInstanceData>(const CPackedHandle<CMoverInstanceData>& handle)
{
} /* size: 0 */

// <0191B7ED> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:77
inline void CAnimGraphInstanceData::operator[]<SelectorInstanceData_t>(const CPackedHandle<SelectorInstanceData_t>& handle)
{
} /* size: 0 */

// <0191B72E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:77
inline void CAnimGraphInstanceData::operator[]<CSequenceInstanceData>(const CPackedHandle<CSequenceInstanceData>& handle)
{
} /* size: 0 */

// <0191B702> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:77
inline void operator[]<unsigned CAnimGraphInstanceData::char>(const CPackedHandle<unsigned char>& handle)
{
} /* size: 0 */

// <0191ABBB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:77
inline void CAnimGraphInstanceData::operator[]<SolveIKChainPoseOpInstanceSettings_t>(const CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>& handle)
{
} /* size: 0 */

// <0191A7CE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:77
inline void CAnimGraphInstanceData::operator[]<CStateMachineInstanceData>(const CPackedHandle<CStateMachineInstanceData>& handle)
{
} /* size: 0 */

// <0191A725> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:77
inline void CAnimGraphInstanceData::operator[]<CStopAtGoalInstanceData>(const CPackedHandle<CStopAtGoalInstanceData>& handle)
{
} /* size: 0 */

// <0191A6F9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:77
inline void CAnimGraphInstanceData::operator[]<CTurnHelperInstanceData>(const CPackedHandle<CTurnHelperInstanceData>& handle)
{
} /* size: 0 */

// <017ECDAE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:77
inline void CAnimGraphInstanceData::operator[]<AimMatrixOpInstanceSettings_t>(const CPackedHandle<AimMatrixOpInstanceSettings_t>& handle)
{
} /* size: 0 */

// <017ECD82> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:77
inline void CAnimGraphInstanceData::operator[]<CAimMatrixInstanceData>(const CPackedHandle<CAimMatrixInstanceData>& handle)
{
} /* size: 0 */

// <017ECD56> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:77
inline void CAnimGraphInstanceData::operator[]<NodeInfo_t>(const CPackedHandle<NodeInfo_t>& handle)
{
} /* size: 0 */

// <017ECCA5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:77
inline void CAnimGraphInstanceData::operator[]<CBlend2DInstanceData>(const CPackedHandle<CBlend2DInstanceData>& handle)
{
} /* size: 0 */

// <017ECB2F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:77
inline void CAnimGraphInstanceData::operator[]<CBlendNodeInstanceData>(const CPackedHandle<CBlendNodeInstanceData>& handle)
{
} /* size: 0 */

// <017EC9F3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:77
inline void CAnimGraphInstanceData::operator[]<CChoiceInstanceData>(const CPackedHandle<CChoiceInstanceData>& handle)
{
} /* size: 0 */

// <017EC9A2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:77
inline void CAnimGraphInstanceData::operator[]<CChoreoInstanceData>(const CPackedHandle<CChoreoInstanceData>& handle)
{
} /* size: 0 */

// <017EC976> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:77
inline void CAnimGraphInstanceData::operator[]<CDirectionalBlendInstanceData>(const CPackedHandle<CDirectionalBlendInstanceData>& handle)
{
} /* size: 0 */

// <017EC94A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:77
inline void CAnimGraphInstanceData::operator[]<CDirectPlaybackInstanceData>(const CPackedHandle<CDirectPlaybackInstanceData>& handle)
{
} /* size: 0 */

// <017EC8C9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:77
inline void CAnimGraphInstanceData::operator[]<CFollowPathInstanceData>(const CPackedHandle<CFollowPathInstanceData>& handle)
{
} /* size: 0 */

// <017EC0F5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:77
inline void CAnimGraphInstanceData::operator[]<FootLockPoseOpInstanceSettings>(const CPackedHandle<FootLockPoseOpInstanceSettings>& handle)
{
} /* size: 0 */

// <017EC0C9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:77
inline void CAnimGraphInstanceData::operator[]<CFootLockUpdateNodeInstanceData>(const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle)
{
} /* size: 0 */

// <017EBF46> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:77
inline void operator[]<CRelativeArray<LastFootMotionStatus> CAnimGraphInstanceData::>(const CPackedHandle<CRelativeArray<LastFootMotionStatus> >& handle)
{
} /* size: 0 */

// <017EBECF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:77
inline void CAnimGraphInstanceData::operator[]<HitReactInstanceSettings_t>(const CPackedHandle<HitReactInstanceSettings_t>& handle)
{
} /* size: 0 */

// <017EBEA3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:77
inline void CAnimGraphInstanceData::operator[]<CHitReactInstanceData>(const CPackedHandle<CHitReactInstanceData>& handle)
{
} /* size: 0 */

// <017EBE09> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:77
inline void CAnimGraphInstanceData::operator[]<InputStreamUpdateData_t>(const CPackedHandle<InputStreamUpdateData_t>& handle)
{
} /* size: 0 */

// <017EBDDD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:77
inline void CAnimGraphInstanceData::operator[]<InputStreamPoseOpData>(const CPackedHandle<InputStreamPoseOpData>& handle)
{
} /* size: 0 */

// <017EBD98> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:77
inline void CAnimGraphInstanceData::operator[]<JiggleNodeInstanceData_t>(const CPackedHandle<JiggleNodeInstanceData_t>& handle)
{
} /* size: 0 */

// <017EBD6C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:77
inline void CAnimGraphInstanceData::operator[]<JiggleBoneStatusList_t>(const CPackedHandle<JiggleBoneStatusList_t>& handle)
{
} /* size: 0 */

// <01721BC9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:77
inline void CAnimGraphInstanceData::operator[]<DiffBlendInstanceData>(const CPackedHandle<DiffBlendInstanceData>& handle)
{
} /* size: 0 */

// <01677667> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:77
inline void CAnimGraphInstanceData::operator[]<DampedPathMotorInstanceData_t>(const CPackedHandle<DampedPathMotorInstanceData_t>& handle)
{
} /* size: 0 */

// <0167763B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:77
inline void CAnimGraphInstanceData::operator[]<PathMotorInstanceData_t>(const CPackedHandle<PathMotorInstanceData_t>& handle)
{
} /* size: 0 */

// <01677566> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:77
inline void CAnimGraphInstanceData::operator[]<PlayerInputMotorInstanceData_t>(const CPackedHandle<PlayerInputMotorInstanceData_t>& handle)
{
} /* size: 0 */

// <0157BC41> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:77
inline void CAnimGraphInstanceData::operator[]<MovementData>(const CPackedHandle<MovementData>& handle)
{
} /* size: 0 */

// <0157BC15> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancedata.h:77
inline void CAnimGraphInstanceData::operator[]<CAnimPath>(const CPackedHandle<CAnimPath>& handle)
{
} /* size: 0 */

