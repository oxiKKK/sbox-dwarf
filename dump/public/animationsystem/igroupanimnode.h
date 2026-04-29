
//
// public/animationsystem/igroupanimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <0118E0B8> ../public/animationsystem/igroupanimnode.h:7
void IGroupAnimNode::IGroupAnimNode()
{
} /* size: 0 */

// <0118E09C> ../public/animationsystem/igroupanimnode.h:7
inline void IGroupAnimNode::IGroupAnimNode()
{
} /* size: 0 */

// <004CF22B> ../public/animationsystem/igroupanimnode.h:7
inline void IGroupAnimNode::operator=(const IGroupAnimNode &)
{
} /* size: 0 */

// <010F857E> ../public/animationsystem/igroupanimnode.h:7
// member functions: 30
// member variable: 1
// static member variable: 1
// vtable entries: 9
// class size: 8
class IGroupAnimNode {
	void IGroupAnimNode(IGroupAnimNode* , IGroupAnimNode& );
	void IGroupAnimNode(IGroupAnimNode* , const IGroupAnimNode& );
	void IGroupAnimNode(IGroupAnimNode* );
	void ~IGroupAnimNode(IGroupAnimNode* );
	int ()(void) * * _vptr.IGroupAnimNode; /* 0 8 */
private:
	static class CClassInfoT<IGroupAnimNode> m_classInfoIGroupAnimNode; /* 0 0 */
	/* ../public/animationsystem/igroupanimnode.h:9 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:12 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:12 */
	virtual const CClassInfo& GetTypeInfo(const IGroupAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:12 */
	virtual void* CastToBase(IGroupAnimNode* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:12 */
	virtual const void* CastToBase(const IGroupAnimNode* , ClassID);
	/* ../public/animationsystem/igroupanimnode.h:12 */
	virtual IAnimNodeManager* GetNodeManager(IGroupAnimNode* );
	/* ../public/animationsystem/igroupanimnode.h:14 */
	virtual void SetInputNodeID(IGroupAnimNode* , AnimNodeID);
	/* ../public/animationsystem/igroupanimnode.h:15 */
	virtual void SetOutputNodeID(IGroupAnimNode* , AnimNodeID);
	/* ../public/animationsystem/igroupanimnode.h:17 */
	virtual AnimNodeID GetInputNodeID(const IGroupAnimNode* );
	/* ../public/animationsystem/igroupanimnode.h:18 */
	virtual AnimNodeID GetOutputNodeID(const IGroupAnimNode* );
	/* ../public/animationsystem/igroupanimnode.h:20 */
	virtual void AddProxyItems(IGroupAnimNode* );
	const class ClassID  MyTypeID(void); /* linkage=_ZN14IGroupAnimNode8MyTypeIDEv */
	void IGroupAnimNode(class IGroupAnimNode *, class IGroupAnimNode &); /* linkage=_ZN14IGroupAnimNodeC4EOS_ */
	void IGroupAnimNode(class IGroupAnimNode *, const class IGroupAnimNode  &); /* linkage=_ZN14IGroupAnimNodeC4ERKS_ */
	void IGroupAnimNode(class IGroupAnimNode *); /* linkage=_ZN14IGroupAnimNodeC4Ev */
	void ~IGroupAnimNode(class IGroupAnimNode *); /* linkage=_ZN14IGroupAnimNodeD4Ev */
	/* <11980dd> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:12 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN14IGroupAnimNode10MyTypeInfoEv */
	virtual const class CClassInfo  & GetTypeInfo(const class IGroupAnimNode  *); /* linkage=_ZNK14IGroupAnimNode11GetTypeInfoEv */
	virtual void * CastToBase(class IGroupAnimNode *, class ClassID); /* linkage=_ZN14IGroupAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class IGroupAnimNode  *, class ClassID); /* linkage=_ZNK14IGroupAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual class IAnimNodeManager * GetNodeManager(class IGroupAnimNode *); /* linkage=_ZN14IGroupAnimNode14GetNodeManagerEv */
	virtual void SetInputNodeID(class IGroupAnimNode *, class AnimNodeID); /* linkage=_ZN14IGroupAnimNode14SetInputNodeIDE10AnimNodeID */
	virtual void SetOutputNodeID(class IGroupAnimNode *, class AnimNodeID); /* linkage=_ZN14IGroupAnimNode15SetOutputNodeIDE10AnimNodeID */
	virtual class AnimNodeID GetInputNodeID(const class IGroupAnimNode  *); /* linkage=_ZNK14IGroupAnimNode14GetInputNodeIDEv */
	virtual class AnimNodeID GetOutputNodeID(const class IGroupAnimNode  *); /* linkage=_ZNK14IGroupAnimNode15GetOutputNodeIDEv */
	virtual void AddProxyItems(class IGroupAnimNode *); /* linkage=_ZN14IGroupAnimNode13AddProxyItemsEv */
};

// <0118EB9B> ../public/animationsystem/igroupanimnode.h:9
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 9
	const char   __PRETTY_FUNCTION__; // 44282
} /* size: 0, variables: 2 */

// <00F8A8B0> ../public/animationsystem/igroupanimnode.h:9
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 9
	const char   __PRETTY_FUNCTION__; // 38760
} /* size: 0, variables: 2 */

// <00E7DAD5> ../public/animationsystem/igroupanimnode.h:9
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 9
	const char   __PRETTY_FUNCTION__; // 11439
} /* size: 0, variables: 2 */

