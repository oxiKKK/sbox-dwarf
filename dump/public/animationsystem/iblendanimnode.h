
//
// public/animationsystem/iblendanimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 4
//	class: 1
//

// <0107CA57> ../public/animationsystem/iblendanimnode.h:10
void IBlendAnimNode::IBlendAnimNode()
{
} /* size: 0 */

// <0107CA3B> ../public/animationsystem/iblendanimnode.h:10
inline void IBlendAnimNode::IBlendAnimNode()
{
} /* size: 0 */

// <004FE5B5> ../public/animationsystem/iblendanimnode.h:10
inline void IBlendAnimNode::operator=(const IBlendAnimNode &)
{
} /* size: 0 */

// <0100E8C1> ../public/animationsystem/iblendanimnode.h:10
// member functions: 30
// member variable: 1
// static member variable: 1
// vtable entries: 9
// class size: 8
class IBlendAnimNode {
	void IBlendAnimNode(IBlendAnimNode* , IBlendAnimNode& );
	void IBlendAnimNode(IBlendAnimNode* , const IBlendAnimNode& );
	void IBlendAnimNode(IBlendAnimNode* );
	void ~IBlendAnimNode(IBlendAnimNode* );
	int ()(void) * * _vptr.IBlendAnimNode; /* 0 8 */
private:
	static class CClassInfoT<IBlendAnimNode> m_classInfoIBlendAnimNode; /* 0 0 */
	/* ../public/animationsystem/iblendanimnode.h:12 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:13 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:13 */
	virtual const CClassInfo& GetTypeInfo(const IBlendAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:13 */
	virtual void* CastToBase(IBlendAnimNode* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:13 */
	virtual const void* CastToBase(const IBlendAnimNode* , ClassID);
	/* ../public/animationsystem/iblendanimnode.h:15 */
	virtual int AddChild(IBlendAnimNode* );
	/* ../public/animationsystem/iblendanimnode.h:18 */
	virtual void RemoveChild(IBlendAnimNode* , int);
	/* ../public/animationsystem/iblendanimnode.h:21 */
	virtual void SetChildName(IBlendAnimNode* , int, const CUtlString& );
	/* ../public/animationsystem/iblendanimnode.h:24 */
	virtual void SetChild(IBlendAnimNode* , int, IAnimNode* );
	/* ../public/animationsystem/iblendanimnode.h:27 */
	virtual float GetChildBlendValue(const IBlendAnimNode* , int);
	/* ../public/animationsystem/iblendanimnode.h:30 */
	virtual void SetChildBlendValue(IBlendAnimNode* , int, float);
	void IBlendAnimNode(class IBlendAnimNode *, class IBlendAnimNode &); /* linkage=_ZN14IBlendAnimNodeC4EOS_ */
	void IBlendAnimNode(class IBlendAnimNode *, const class IBlendAnimNode  &); /* linkage=_ZN14IBlendAnimNodeC4ERKS_ */
	void IBlendAnimNode(class IBlendAnimNode *); /* linkage=_ZN14IBlendAnimNodeC4Ev */
	void ~IBlendAnimNode(class IBlendAnimNode *); /* linkage=_ZN14IBlendAnimNodeD4Ev */
	const class ClassID  MyTypeID(void); /* linkage=_ZN14IBlendAnimNode8MyTypeIDEv */
	/* <1095432> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:13 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN14IBlendAnimNode10MyTypeInfoEv */
	virtual const class CClassInfo  & GetTypeInfo(const class IBlendAnimNode  *); /* linkage=_ZNK14IBlendAnimNode11GetTypeInfoEv */
	virtual void * CastToBase(class IBlendAnimNode *, class ClassID); /* linkage=_ZN14IBlendAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class IBlendAnimNode  *, class ClassID); /* linkage=_ZNK14IBlendAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual int AddChild(class IBlendAnimNode *); /* linkage=_ZN14IBlendAnimNode8AddChildEv */
	virtual void RemoveChild(class IBlendAnimNode *, int); /* linkage=_ZN14IBlendAnimNode11RemoveChildEi */
	virtual void SetChildName(class IBlendAnimNode *, int, const class CUtlString  &); /* linkage=_ZN14IBlendAnimNode12SetChildNameEiRK10CUtlString */
	virtual void SetChild(class IBlendAnimNode *, int, class IAnimNode *); /* linkage=_ZN14IBlendAnimNode8SetChildEiP9IAnimNode */
	virtual float GetChildBlendValue(const class IBlendAnimNode  *, int); /* linkage=_ZNK14IBlendAnimNode18GetChildBlendValueEi */
	virtual void SetChildBlendValue(class IBlendAnimNode *, int, float); /* linkage=_ZN14IBlendAnimNode18SetChildBlendValueEif */
};

// <0107D744> ../public/animationsystem/iblendanimnode.h:12
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 12
	const char   __PRETTY_FUNCTION__; // 21029
} /* size: 0, variables: 2 */

