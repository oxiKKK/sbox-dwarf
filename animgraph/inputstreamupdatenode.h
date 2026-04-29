
//
// animgraph/inputstreamupdatenode.h
//
//	referenced by: libanimationsystem.so
//
//	function: 1
//	class: 1
//	struct: 1
//

// <017E0B89> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamupdatenode.h:14
// member function: 1
// member variables: 3
// struct size: 16
struct InputStreamUpdateData_t {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamupdatenode.h:16 */
	void InputStreamUpdateData_t(InputStreamUpdateData_t* , CSaveablePackedData& , int);
	CRelativeArray<CTransform> m_transforms; /* 0 8 */
	BoneTransformSpace_t m_eTransformSpace; /* 8 4 */
	PoseHandle m_poseHandle; /* 12 1 */
};

// <017E2CF0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamupdatenode.h:28
// member functions: 16
// member variables: 3
// vtable entries: 3
// class size: 24
class CInputStreamUpdateNode : public CLeafUpdateNode {
public:
	/* class CLeafUpdateNode <ancestor>; */ /* 0 16 */
	void CInputStreamUpdateNode(CInputStreamUpdateNode* , CInputStreamUpdateNode& );
	void CInputStreamUpdateNode(CInputStreamUpdateNode* , const CInputStreamUpdateNode& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamupdatenode.cpp:22 */
	void CInputStreamUpdateNode(CInputStreamUpdateNode* , CAnimGraphInitContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamupdatenode.cpp:33 */
	virtual void Update(const CInputStreamUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamupdatenode.cpp:62 */
	virtual void CreatePoseOp(const CInputStreamUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamupdatenode.cpp:72 */
	virtual PoseHandle GetPoseHandle(const CInputStreamUpdateNode* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamupdatenode.cpp:80 */
	int GetBoneCount(const CInputStreamUpdateNode* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamupdatenode.cpp:88 */
	void SetTransforms(const CInputStreamUpdateNode* , CAnimGraphUpdateContext& , const CTransform* , int, BoneTransformSpace_t);
private:
	CPackedHandle<InputStreamUpdateData_t> m_hInstData; /* 12 4 */
	CPackedHandle<InputStreamPoseOpData> m_hPoseOpData; /* 16 4 */
	void CInputStreamUpdateNode(class CInputStreamUpdateNode *, class CInputStreamUpdateNode &); /* linkage=_ZN22CInputStreamUpdateNodeC4EOS_ */
	void CInputStreamUpdateNode(class CInputStreamUpdateNode *, const class CInputStreamUpdateNode  &); /* linkage=_ZN22CInputStreamUpdateNodeC4ERKS_ */
	void CInputStreamUpdateNode(class CInputStreamUpdateNode *, class CAnimGraphInitContext &); /* linkage=_ZN22CInputStreamUpdateNodeC4ER21CAnimGraphInitContext */
	virtual void Update(const class CInputStreamUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK22CInputStreamUpdateNode6UpdateER23CAnimGraphUpdateContext */
	virtual void CreatePoseOp(const class CInputStreamUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK22CInputStreamUpdateNode12CreatePoseOpER23CAnimGraphUpdateContext */
	virtual PoseHandle GetPoseHandle(const class CInputStreamUpdateNode  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK22CInputStreamUpdateNode13GetPoseHandleERK23CAnimGraphUpdateContext */
	int GetBoneCount(const class CInputStreamUpdateNode  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK22CInputStreamUpdateNode12GetBoneCountERK23CAnimGraphUpdateContext */
	void SetTransforms(const class CInputStreamUpdateNode  *, class CAnimGraphUpdateContext &, const class CTransform  *, int, enum BoneTransformSpace_t); /* linkage=_ZNK22CInputStreamUpdateNode13SetTransformsER23CAnimGraphUpdateContextPK10CTransformi20BoneTransformSpace_t */
};

// <01125D50> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamupdatenode.h:32
void CInputStreamUpdateNode::CInputStreamUpdateNode(CAnimGraphInitContext& initContext)
{
} /* size: 0 */

