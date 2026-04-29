
//
// public/animationsystem/isubgraphanimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <01285DA3> ../public/animationsystem/isubgraphanimnode.h:9
void ISubGraphAnimNode::ISubGraphAnimNode()
{
} /* size: 0 */

// <01285D87> ../public/animationsystem/isubgraphanimnode.h:9
inline void ISubGraphAnimNode::ISubGraphAnimNode()
{
} /* size: 0 */

// <005ABF8B> ../public/animationsystem/isubgraphanimnode.h:9
inline void ISubGraphAnimNode::operator=(const ISubGraphAnimNode &)
{
} /* size: 0 */

// <0123B244> ../public/animationsystem/isubgraphanimnode.h:9
// member functions: 32
// member variable: 1
// static member variable: 1
// vtable entries: 10
// class size: 8
class ISubGraphAnimNode {
	void ISubGraphAnimNode(ISubGraphAnimNode* , ISubGraphAnimNode& );
	void ISubGraphAnimNode(ISubGraphAnimNode* , const ISubGraphAnimNode& );
	void ISubGraphAnimNode(ISubGraphAnimNode* );
	void ~ISubGraphAnimNode(ISubGraphAnimNode* );
	int ()(void) * * _vptr.ISubGraphAnimNode; /* 0 8 */
private:
	static class CClassInfoT<ISubGraphAnimNode> m_classInfoISubGraphAnimNode; /* 0 0 */
	/* ../public/animationsystem/isubgraphanimnode.h:11 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:13 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:13 */
	virtual const CClassInfo& GetTypeInfo(const ISubGraphAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:13 */
	virtual void* CastToBase(ISubGraphAnimNode* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:13 */
	virtual const void* CastToBase(const ISubGraphAnimNode* , ClassID);
	/* ../public/animationsystem/isubgraphanimnode.h:14 */
	virtual IAnimNodeManager* GetNodeManager(ISubGraphAnimNode* );
	/* ../public/animationsystem/isubgraphanimnode.h:16 */
	virtual void SetInputNodeID(ISubGraphAnimNode* , AnimNodeID);
	/* ../public/animationsystem/isubgraphanimnode.h:17 */
	virtual void SetOutputNodeID(ISubGraphAnimNode* , AnimNodeID);
	/* ../public/animationsystem/isubgraphanimnode.h:19 */
	virtual AnimNodeID GetInputNodeID(const ISubGraphAnimNode* );
	/* ../public/animationsystem/isubgraphanimnode.h:20 */
	virtual AnimNodeID GetOutputNodeID(const ISubGraphAnimNode* );
	/* ../public/animationsystem/isubgraphanimnode.h:22 */
	virtual IAnimationSubGraph* CreateNewSubGraph(ISubGraphAnimNode* , const char* );
	/* ../public/animationsystem/isubgraphanimnode.h:24 */
	virtual IAnimationSubGraph* GetSubGraph(ISubGraphAnimNode* );
	const class ClassID  MyTypeID(void); /* linkage=_ZN17ISubGraphAnimNode8MyTypeIDEv */
	void ISubGraphAnimNode(class ISubGraphAnimNode *, class ISubGraphAnimNode &); /* linkage=_ZN17ISubGraphAnimNodeC4EOS_ */
	void ISubGraphAnimNode(class ISubGraphAnimNode *, const class ISubGraphAnimNode  &); /* linkage=_ZN17ISubGraphAnimNodeC4ERKS_ */
	void ISubGraphAnimNode(class ISubGraphAnimNode *); /* linkage=_ZN17ISubGraphAnimNodeC4Ev */
	void ~ISubGraphAnimNode(class ISubGraphAnimNode *); /* linkage=_ZN17ISubGraphAnimNodeD4Ev */
	/* <129f43d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:13 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN17ISubGraphAnimNode10MyTypeInfoEv */
	virtual const class CClassInfo  & GetTypeInfo(const class ISubGraphAnimNode  *); /* linkage=_ZNK17ISubGraphAnimNode11GetTypeInfoEv */
	virtual void * CastToBase(class ISubGraphAnimNode *, class ClassID); /* linkage=_ZN17ISubGraphAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class ISubGraphAnimNode  *, class ClassID); /* linkage=_ZNK17ISubGraphAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual class IAnimNodeManager * GetNodeManager(class ISubGraphAnimNode *); /* linkage=_ZN17ISubGraphAnimNode14GetNodeManagerEv */
	virtual void SetInputNodeID(class ISubGraphAnimNode *, class AnimNodeID); /* linkage=_ZN17ISubGraphAnimNode14SetInputNodeIDE10AnimNodeID */
	virtual void SetOutputNodeID(class ISubGraphAnimNode *, class AnimNodeID); /* linkage=_ZN17ISubGraphAnimNode15SetOutputNodeIDE10AnimNodeID */
	virtual class AnimNodeID GetInputNodeID(const class ISubGraphAnimNode  *); /* linkage=_ZNK17ISubGraphAnimNode14GetInputNodeIDEv */
	virtual class AnimNodeID GetOutputNodeID(const class ISubGraphAnimNode  *); /* linkage=_ZNK17ISubGraphAnimNode15GetOutputNodeIDEv */
	virtual class IAnimationSubGraph * CreateNewSubGraph(class ISubGraphAnimNode *, const char  *); /* linkage=_ZN17ISubGraphAnimNode17CreateNewSubGraphEPKc */
	virtual class IAnimationSubGraph * GetSubGraph(class ISubGraphAnimNode *); /* linkage=_ZN17ISubGraphAnimNode11GetSubGraphEv */
};

// <01286747> ../public/animationsystem/isubgraphanimnode.h:11
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 11
	const char   __PRETTY_FUNCTION__; // 11033
} /* size: 0, variables: 2 */

// <00F8A8E1> ../public/animationsystem/isubgraphanimnode.h:11
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 11
	const char   __PRETTY_FUNCTION__; // 38841
} /* size: 0, variables: 2 */

// <00E7DB07> ../public/animationsystem/isubgraphanimnode.h:11
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 11
	const char   __PRETTY_FUNCTION__; // 11520
} /* size: 0, variables: 2 */

