
//
// animgraph/jiggleboneupdatenode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 3
//	class: 1
//	struct: 1
//

// <017ED3F9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneupdatenode.h:11
void JiggleNodeInstanceData_t::JiggleNodeInstanceData_t()
{
} /* size: 0 */

// <017ED3DD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneupdatenode.h:11
inline void JiggleNodeInstanceData_t::JiggleNodeInstanceData_t()
{
} /* size: 0 */

// <017E1BA2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneupdatenode.h:11
// member function: 1
// member variables: 2
// struct size: 2
struct JiggleNodeInstanceData_t {
	uint8 m_resetCount; /* 0 1 */
	PoseHandle m_hPoseHandle; /* 1 1 */
	void JiggleNodeInstanceData_t(JiggleNodeInstanceData_t* );
};

// <017E28B2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneupdatenode.h:19
// member functions: 12
// member variables: 4
// vtable entries: 3
// class size: 32
class CJiggleBoneUpdateNode : public CUnaryUpdateNode {
public:
	/* class CUnaryUpdateNode <ancestor>; */ /* 0 0 */
	void CJiggleBoneUpdateNode(CJiggleBoneUpdateNode* , CJiggleBoneUpdateNode& );
	void CJiggleBoneUpdateNode(CJiggleBoneUpdateNode* , const CJiggleBoneUpdateNode& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneupdatenode.cpp:9 */
	void CJiggleBoneUpdateNode(CJiggleBoneUpdateNode* , CAnimGraphInitContext& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneupdatenode.cpp:18 */
	virtual void CreatePoseOp(const CJiggleBoneUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneupdatenode.cpp:31 */
	virtual PoseHandle GetPoseHandle(const CJiggleBoneUpdateNode* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneupdatenode.cpp:37 */
	virtual void Reset(const CJiggleBoneUpdateNode* , CAnimGraphUpdateContext& , float);
	CPackedHandle<JiggleNodeInstanceData_t> m_hInstData; /* 16 4 */
	CPackedHandle<JiggleBoneSettingsList_t> m_hOpFixedData; /* 20 4 */
	CPackedHandle<JiggleBoneStatusList_t> m_hOpInstData; /* 24 4 */
	void CJiggleBoneUpdateNode(class CJiggleBoneUpdateNode *, class CJiggleBoneUpdateNode &); /* linkage=_ZN21CJiggleBoneUpdateNodeC4EOS_ */
	void CJiggleBoneUpdateNode(class CJiggleBoneUpdateNode *, const class CJiggleBoneUpdateNode  &); /* linkage=_ZN21CJiggleBoneUpdateNodeC4ERKS_ */
	void CJiggleBoneUpdateNode(class CJiggleBoneUpdateNode *, class CAnimGraphInitContext &, int); /* linkage=_ZN21CJiggleBoneUpdateNodeC4ER21CAnimGraphInitContexti */
	virtual void CreatePoseOp(const class CJiggleBoneUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK21CJiggleBoneUpdateNode12CreatePoseOpER23CAnimGraphUpdateContext */
	virtual PoseHandle GetPoseHandle(const class CJiggleBoneUpdateNode  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK21CJiggleBoneUpdateNode13GetPoseHandleERK23CAnimGraphUpdateContext */
	virtual void Reset(const class CJiggleBoneUpdateNode  *, class CAnimGraphUpdateContext &, float); /* linkage=_ZNK21CJiggleBoneUpdateNode5ResetER23CAnimGraphUpdateContextf */
};

// <01125C3E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneupdatenode.h:23
void CJiggleBoneUpdateNode::CJiggleBoneUpdateNode(CAnimGraphInitContext& initContext, int nBoneCount)
{
} /* size: 0 */

