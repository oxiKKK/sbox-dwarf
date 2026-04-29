
//
// animgraph/animupdatenodebase.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 13
//	class: 1
//	struct: 1
//

// <01535BCD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.h:14
// member function: 1
// member variables: 4
// struct size: 8
struct NodeInfo_t {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.h:16 */
	void NodeInfo_t(NodeInfo_t* );
	int m_lastUpdateID; /* 0 4 */
	uint16 m_lastResetID; /* 4 2 */
	byte m_postUpdatePending:1; /* 6: 0 1 */
	byte m_waning:1; /* 6: 1 1 */
};

// <01863403> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.h:16
void NodeInfo_t::NodeInfo_t()
{
} /* size: 0 */

// <018633EA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.h:16
inline void NodeInfo_t::NodeInfo_t()
{
} /* size: 0 */

// <017D2E93> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.h:34
// member functions: 70
// member variables: 2
// vtable entries: 21
// class size: 16
class CAnimUpdateNodeBase {
	void ~CAnimUpdateNodeBase(CAnimUpdateNodeBase* );
	void CAnimUpdateNodeBase(CAnimUpdateNodeBase* , CAnimUpdateNodeBase& );
	void CAnimUpdateNodeBase(CAnimUpdateNodeBase* , const CAnimUpdateNodeBase& );
	int ()(void) * * _vptr.CAnimUpdateNodeBase; /* 0 8 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.cpp:8 */
	void CAnimUpdateNodeBase(CAnimUpdateNodeBase* , CAnimGraphInitContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.h:40 */
	virtual int GetChildCount(const CAnimUpdateNodeBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.h:43 */
	virtual const CAnimUpdateNodeBase* GetChild(const CAnimUpdateNodeBase* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.h:46 */
	virtual bool IsChildActive(const CAnimUpdateNodeBase* , CAnimGraphUpdateContext& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.h:49 */
	virtual bool IsChildWaning(const CAnimUpdateNodeBase* , CAnimGraphUpdateContext& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.h:52 */
	virtual void Update(const CAnimUpdateNodeBase* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.h:56 */
	virtual void EnqueueChildren(const CAnimUpdateNodeBase* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.h:60 */
	virtual void PostUpdate(const CAnimUpdateNodeBase* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.h:64 */
	virtual void CreatePoseOp(const CAnimUpdateNodeBase* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.h:68 */
	virtual PoseHandle GetPoseHandle(const CAnimUpdateNodeBase* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.h:71 */
	virtual float GetCycle(const CAnimUpdateNodeBase* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.h:74 */
	virtual float GetDuration(const CAnimUpdateNodeBase* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.h:77 */
	virtual CMotionTransform GetTotalMovement(const CAnimUpdateNodeBase* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.h:81 */
	virtual CMotionTransform GetRemainingMovement(const CAnimUpdateNodeBase* , CAnimGraphUpdateContext& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.cpp:52 */
	virtual void Reset(const CAnimUpdateNodeBase* , CAnimGraphUpdateContext& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.cpp:58 */
	bool IsReset(const CAnimUpdateNodeBase* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.h:89 */
	virtual bool IsFinished(const CAnimUpdateNodeBase* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.h:93 */
	virtual float GetTimeTillFinished(const CAnimUpdateNodeBase* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.h:96 */
	virtual void OnSave(const CAnimUpdateNodeBase* , const CAnimGraphUpdateContext& , ISave* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.h:97 */
	virtual void OnRestore(const CAnimUpdateNodeBase* , CAnimGraphUpdateContext& , IRestore* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.cpp:14 */
	CRootMotion GetRootMotion(const CAnimUpdateNodeBase* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.cpp:35 */
	void GetFootMotion(const CAnimUpdateNodeBase* , CAnimGraphUpdateContext& , const CMotionTransform& , CStrideStatus& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.cpp:64 */
	int GetLastUpdateID(const CAnimUpdateNodeBase* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.cpp:70 */
	void SetLastUpdateID(const CAnimUpdateNodeBase* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.cpp:76 */
	bool IsPostUpdatePending(const CAnimUpdateNodeBase* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.cpp:82 */
	void SetPostUpdatePending(const CAnimUpdateNodeBase* , CAnimGraphUpdateContext& , bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.cpp:88 */
	bool IsWaning(const CAnimUpdateNodeBase* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.cpp:94 */
	void SetWaning(const CAnimUpdateNodeBase* , CAnimGraphUpdateContext& , bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.h:117 */
	virtual void CollectVisualizations(const CAnimUpdateNodeBase* , const CAnimGraphUpdateContext& , IAnimationGraphVisualizationManager* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.cpp:100 */
	NodeInfo_t& GetNodeInfo(const CAnimUpdateNodeBase* , CAnimGraphUpdateContext& );
protected:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.cpp:106 */
	virtual CRootMotion CalculateRootMotion(const CAnimUpdateNodeBase* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.cpp:112 */
	virtual void CalculateFootMotion(const CAnimUpdateNodeBase* , CAnimGraphUpdateContext& , const CMotionTransform& , CStrideStatus& );
private:
	CPackedHandle<NodeInfo_t> m_hInfo; /* 8 4 */
	class CRootMotion GetRootMotion(const class CAnimUpdateNodeBase  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK19CAnimUpdateNodeBase13GetRootMotionER23CAnimGraphUpdateContext */
	/* <18698da> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.cpp:76 */
	bool IsPostUpdatePending(const class CAnimUpdateNodeBase  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK19CAnimUpdateNodeBase19IsPostUpdatePendingERK23CAnimGraphUpdateContext */
	void GetFootMotion(const class CAnimUpdateNodeBase  *, class CAnimGraphUpdateContext &, const class CMotionTransform  &, class CStrideStatus &); /* linkage=_ZNK19CAnimUpdateNodeBase13GetFootMotionER23CAnimGraphUpdateContextRK16CMotionTransformR13CStrideStatus */
	/* <18695bc> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.cpp:58 */
	bool IsReset(const class CAnimUpdateNodeBase  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK19CAnimUpdateNodeBase7IsResetERK23CAnimGraphUpdateContext */
	bool IsWaning(const class CAnimUpdateNodeBase  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK19CAnimUpdateNodeBase8IsWaningERK23CAnimGraphUpdateContext */
	/* <1869751> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.cpp:64 */
	int GetLastUpdateID(const class CAnimUpdateNodeBase  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK19CAnimUpdateNodeBase15GetLastUpdateIDERK23CAnimGraphUpdateContext */
	class NodeInfo_t & GetNodeInfo(const class CAnimUpdateNodeBase  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK19CAnimUpdateNodeBase11GetNodeInfoER23CAnimGraphUpdateContext */
	/* <15cf9b9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.h:64 */
	virtual void CreatePoseOp(const class CAnimUpdateNodeBase  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK19CAnimUpdateNodeBase12CreatePoseOpER23CAnimGraphUpdateContext */
	/* <15cf989> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.h:60 */
	virtual void PostUpdate(const class CAnimUpdateNodeBase  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK19CAnimUpdateNodeBase10PostUpdateER23CAnimGraphUpdateContext */
	/* <15cf959> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.h:52 */
	virtual void Update(const class CAnimUpdateNodeBase  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK19CAnimUpdateNodeBase6UpdateER23CAnimGraphUpdateContext */
	void ~CAnimUpdateNodeBase(class CAnimUpdateNodeBase *); /* linkage=_ZN19CAnimUpdateNodeBaseD4Ev */
	void CAnimUpdateNodeBase(class CAnimUpdateNodeBase *, class CAnimUpdateNodeBase &); /* linkage=_ZN19CAnimUpdateNodeBaseC4EOS_ */
	void CAnimUpdateNodeBase(class CAnimUpdateNodeBase *, const class CAnimUpdateNodeBase  &); /* linkage=_ZN19CAnimUpdateNodeBaseC4ERKS_ */
	void CAnimUpdateNodeBase(class CAnimUpdateNodeBase *, class CAnimGraphInitContext &); /* linkage=_ZN19CAnimUpdateNodeBaseC4ER21CAnimGraphInitContext */
	virtual int GetChildCount(const class CAnimUpdateNodeBase  *); /* linkage=_ZNK19CAnimUpdateNodeBase13GetChildCountEv */
	virtual const class CAnimUpdateNodeBase  * GetChild(const class CAnimUpdateNodeBase  *, int); /* linkage=_ZNK19CAnimUpdateNodeBase8GetChildEi */
	virtual bool IsChildActive(const class CAnimUpdateNodeBase  *, class CAnimGraphUpdateContext &, int); /* linkage=_ZNK19CAnimUpdateNodeBase13IsChildActiveER23CAnimGraphUpdateContexti */
	virtual bool IsChildWaning(const class CAnimUpdateNodeBase  *, class CAnimGraphUpdateContext &, int); /* linkage=_ZNK19CAnimUpdateNodeBase13IsChildWaningER23CAnimGraphUpdateContexti */
	virtual void EnqueueChildren(const class CAnimUpdateNodeBase  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK19CAnimUpdateNodeBase15EnqueueChildrenER23CAnimGraphUpdateContext */
	virtual PoseHandle GetPoseHandle(const class CAnimUpdateNodeBase  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK19CAnimUpdateNodeBase13GetPoseHandleERK23CAnimGraphUpdateContext */
	virtual float GetCycle(const class CAnimUpdateNodeBase  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK19CAnimUpdateNodeBase8GetCycleER23CAnimGraphUpdateContext */
	virtual float GetDuration(const class CAnimUpdateNodeBase  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK19CAnimUpdateNodeBase11GetDurationER23CAnimGraphUpdateContext */
	virtual class CMotionTransform GetTotalMovement(const class CAnimUpdateNodeBase  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK19CAnimUpdateNodeBase16GetTotalMovementER23CAnimGraphUpdateContext */
	virtual class CMotionTransform GetRemainingMovement(const class CAnimUpdateNodeBase  *, class CAnimGraphUpdateContext &, float); /* linkage=_ZNK19CAnimUpdateNodeBase20GetRemainingMovementER23CAnimGraphUpdateContextf */
	/* <1866627> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.cpp:52 */
	virtual void Reset(const class CAnimUpdateNodeBase  *, class CAnimGraphUpdateContext &, float); /* linkage=_ZNK19CAnimUpdateNodeBase5ResetER23CAnimGraphUpdateContextf */
	virtual bool IsFinished(const class CAnimUpdateNodeBase  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK19CAnimUpdateNodeBase10IsFinishedER23CAnimGraphUpdateContext */
	virtual float GetTimeTillFinished(const class CAnimUpdateNodeBase  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK19CAnimUpdateNodeBase19GetTimeTillFinishedER23CAnimGraphUpdateContext */
	virtual void OnSave(const class CAnimUpdateNodeBase  *, const class CAnimGraphUpdateContext  &, class ISave *); /* linkage=_ZNK19CAnimUpdateNodeBase6OnSaveERK23CAnimGraphUpdateContextP5ISave */
	virtual void OnRestore(const class CAnimUpdateNodeBase  *, class CAnimGraphUpdateContext &, class IRestore *); /* linkage=_ZNK19CAnimUpdateNodeBase9OnRestoreER23CAnimGraphUpdateContextP8IRestore */
	void SetLastUpdateID(const class CAnimUpdateNodeBase  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK19CAnimUpdateNodeBase15SetLastUpdateIDER23CAnimGraphUpdateContext */
	void SetPostUpdatePending(const class CAnimUpdateNodeBase  *, class CAnimGraphUpdateContext &, bool); /* linkage=_ZNK19CAnimUpdateNodeBase20SetPostUpdatePendingER23CAnimGraphUpdateContextb */
	void SetWaning(const class CAnimUpdateNodeBase  *, class CAnimGraphUpdateContext &, bool); /* linkage=_ZNK19CAnimUpdateNodeBase9SetWaningER23CAnimGraphUpdateContextb */
	/* <e89ddc> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.h:117 */
	virtual void CollectVisualizations(const class CAnimUpdateNodeBase  *, const class CAnimGraphUpdateContext  &, class IAnimationGraphVisualizationManager *); /* linkage=_ZNK19CAnimUpdateNodeBase21CollectVisualizationsERK23CAnimGraphUpdateContextP35IAnimationGraphVisualizationManager */
	virtual class CRootMotion CalculateRootMotion(const class CAnimUpdateNodeBase  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK19CAnimUpdateNodeBase19CalculateRootMotionER23CAnimGraphUpdateContext */
	/* <1866b13> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.cpp:112 */
	virtual void CalculateFootMotion(const class CAnimUpdateNodeBase  *, class CAnimGraphUpdateContext &, const class CMotionTransform  &, class CStrideStatus &); /* linkage=_ZNK19CAnimUpdateNodeBase19CalculateFootMotionER23CAnimGraphUpdateContextRK16CMotionTransformR13CStrideStatus */
};

// <019146A4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.h:37
void CAnimUpdateNodeBase::CAnimUpdateNodeBase(CAnimGraphInitContext& initContext)
{
} /* size: 0 */

// <01970F25> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.h:52
void CAnimUpdateNodeBase::Update(CAnimGraphUpdateContext& context)
{
} /* size: 5 */

// <015CD4CB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.h:52
inline void CAnimUpdateNodeBase::Update(CAnimGraphUpdateContext& context)
{
} /* size: 0 */

// <01970EE8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.h:60
void CAnimUpdateNodeBase::PostUpdate(CAnimGraphUpdateContext& context)
{
} /* size: 5 */

// <015CD4A6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.h:60
inline void CAnimUpdateNodeBase::PostUpdate(CAnimGraphUpdateContext& context)
{
} /* size: 0 */

// <01970EAB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.h:64
void CAnimUpdateNodeBase::CreatePoseOp(CAnimGraphUpdateContext& context)
{
} /* size: 5 */

// <015CD481> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.h:64
inline void CAnimUpdateNodeBase::CreatePoseOp(CAnimGraphUpdateContext& context)
{
} /* size: 0 */

// <01970E5F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.h:96
void CAnimUpdateNodeBase::OnSave(const CAnimGraphUpdateContext& context, ISave* pSave)
{
} /* size: 5 */

// <01970E13> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.h:97
void CAnimUpdateNodeBase::OnRestore(CAnimGraphUpdateContext& context, IRestore* pRestore)
{
} /* size: 5 */

// <01970DC7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.h:117
void CAnimUpdateNodeBase::CollectVisualizations(const CAnimGraphUpdateContext& context, IAnimationGraphVisualizationManager* pVisualizationManager)
{
} /* size: 5 */

// <00E8126D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.h:117
inline void CAnimUpdateNodeBase::CollectVisualizations(const CAnimGraphUpdateContext& context, IAnimationGraphVisualizationManager* pVisualizationManager)
{
} /* size: 0 */

