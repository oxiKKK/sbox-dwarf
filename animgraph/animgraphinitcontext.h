
//
// animgraph/animgraphinitcontext.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 5
//	class: 1
//

// <00E420CC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinitcontext.h:19
void CAnimGraphInitContext::CAnimGraphInitContext()
{
} /* size: 0 */

// <00E420B0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinitcontext.h:19
inline void CAnimGraphInitContext::CAnimGraphInitContext()
{
} /* size: 0 */

// <00E42099> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinitcontext.h:19
void CAnimGraphInitContext::~CAnimGraphInitContext()
{
} /* size: 0 */

// <00E4207D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinitcontext.h:19
inline void CAnimGraphInitContext::~CAnimGraphInitContext()
{
} /* size: 0 */

// <00DE8111> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinitcontext.h:19
// member functions: 28
// member variables: 2
// vtable entries: 9
// class size: 48
class CAnimGraphInitContext {
	void CAnimGraphInitContext(CAnimGraphInitContext* , CAnimGraphInitContext& );
	void CAnimGraphInitContext(CAnimGraphInitContext* , const CAnimGraphInitContext& );
	void CAnimGraphInitContext(CAnimGraphInitContext* );
	void ~CAnimGraphInitContext(CAnimGraphInitContext* );
	int ()(void) * * _vptr.CAnimGraphInitContext; /* 0 8 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinitcontext.h:22 */
	virtual const CModel& GetModel(const CAnimGraphInitContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinitcontext.h:24 */
	virtual CPackedData& GetFixedData(CAnimGraphInitContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinitcontext.h:25 */
	virtual CSaveablePackedData& GetInstanceData(CAnimGraphInitContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinitcontext.h:26 */
	virtual CStaticPoseCache& GetStaticPoseCache(CAnimGraphInitContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinitcontext.h:28 */
	virtual CAnimParamHandle GetHandleForParameter(const CAnimGraphInitContext* , AnimParamID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinitcontext.h:29 */
	virtual const CAnimParameterBase* GetParameter(const CAnimGraphInitContext* , AnimParamID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinitcontext.h:31 */
	virtual int GetIndexOfTag(const CAnimGraphInitContext* , AnimTagID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinitcontext.h:33 */
	virtual CAnimUpdateNodeBase* GetUpdateNode(const CAnimGraphInitContext* , AnimNodeID, AnimOutputID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinitcontext.h:35 */
	virtual TraceRequestID AllocTraceRequest(CAnimGraphInitContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinitcontext.h:37 */
	const AnimNodeLocation_t& GetNodeLocation(const CAnimGraphInitContext* );
protected:
	AnimNodeLocation_t m_initNodeLocation; /* 8 40 */
	void CAnimGraphInitContext(class CAnimGraphInitContext *, class CAnimGraphInitContext &); /* linkage=_ZN21CAnimGraphInitContextC4EOS_ */
	void CAnimGraphInitContext(class CAnimGraphInitContext *, const class CAnimGraphInitContext  &); /* linkage=_ZN21CAnimGraphInitContextC4ERKS_ */
	void CAnimGraphInitContext(class CAnimGraphInitContext *); /* linkage=_ZN21CAnimGraphInitContextC4Ev */
	void ~CAnimGraphInitContext(class CAnimGraphInitContext *); /* linkage=_ZN21CAnimGraphInitContextD4Ev */
	virtual const class CModel  & GetModel(const class CAnimGraphInitContext  *); /* linkage=_ZNK21CAnimGraphInitContext8GetModelEv */
	virtual CPackedData & GetFixedData(class CAnimGraphInitContext *); /* linkage=_ZN21CAnimGraphInitContext12GetFixedDataEv */
	virtual CSaveablePackedData & GetInstanceData(class CAnimGraphInitContext *); /* linkage=_ZN21CAnimGraphInitContext15GetInstanceDataEv */
	virtual class CStaticPoseCache & GetStaticPoseCache(class CAnimGraphInitContext *); /* linkage=_ZN21CAnimGraphInitContext18GetStaticPoseCacheEv */
	virtual class CAnimParamHandle GetHandleForParameter(const class CAnimGraphInitContext  *, class AnimParamID); /* linkage=_ZNK21CAnimGraphInitContext21GetHandleForParameterE11AnimParamID */
	virtual const class CAnimParameterBase  * GetParameter(const class CAnimGraphInitContext  *, class AnimParamID); /* linkage=_ZNK21CAnimGraphInitContext12GetParameterE11AnimParamID */
	virtual int GetIndexOfTag(const class CAnimGraphInitContext  *, class AnimTagID); /* linkage=_ZNK21CAnimGraphInitContext13GetIndexOfTagE9AnimTagID */
	virtual class CAnimUpdateNodeBase * GetUpdateNode(const class CAnimGraphInitContext  *, class AnimNodeID, class AnimOutputID); /* linkage=_ZNK21CAnimGraphInitContext13GetUpdateNodeE10AnimNodeID12AnimOutputID */
	virtual class TraceRequestID AllocTraceRequest(class CAnimGraphInitContext *); /* linkage=_ZN21CAnimGraphInitContext17AllocTraceRequestEv */
	const class AnimNodeLocation_t  & GetNodeLocation(const class CAnimGraphInitContext  *); /* linkage=_ZNK21CAnimGraphInitContext15GetNodeLocationEv */
};

// <0108E089> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinitcontext.h:37
inline void CAnimGraphInitContext::GetNodeLocation()
{
} /* size: 0 */

