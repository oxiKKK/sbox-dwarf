
//
// public/animationsystem/ichoiceanimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 4
//	class: 1
//

// <0107788F> ../public/animationsystem/ichoiceanimnode.h:10
void IChoiceAnimNode::IChoiceAnimNode()
{
} /* size: 0 */

// <01077873> ../public/animationsystem/ichoiceanimnode.h:10
inline void IChoiceAnimNode::IChoiceAnimNode()
{
} /* size: 0 */

// <004F3CCD> ../public/animationsystem/ichoiceanimnode.h:10
inline void IChoiceAnimNode::operator=(const IChoiceAnimNode &)
{
} /* size: 0 */

// <010127D0> ../public/animationsystem/ichoiceanimnode.h:10
// member functions: 32
// member variable: 1
// static member variable: 1
// vtable entries: 10
// class size: 8
class IChoiceAnimNode {
	void IChoiceAnimNode(IChoiceAnimNode* , IChoiceAnimNode& );
	void IChoiceAnimNode(IChoiceAnimNode* , const IChoiceAnimNode& );
	void IChoiceAnimNode(IChoiceAnimNode* );
	void ~IChoiceAnimNode(IChoiceAnimNode* );
	int ()(void) * * _vptr.IChoiceAnimNode; /* 0 8 */
private:
	static class CClassInfoT<IChoiceAnimNode> m_classInfoIChoiceAnimNode; /* 0 0 */
	/* ../public/animationsystem/ichoiceanimnode.h:12 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceanimnode.cpp:12 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceanimnode.cpp:12 */
	virtual const CClassInfo& GetTypeInfo(const IChoiceAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceanimnode.cpp:12 */
	virtual void* CastToBase(IChoiceAnimNode* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceanimnode.cpp:12 */
	virtual const void* CastToBase(const IChoiceAnimNode* , ClassID);
	/* ../public/animationsystem/ichoiceanimnode.h:15 */
	virtual int AddChild(IChoiceAnimNode* );
	/* ../public/animationsystem/ichoiceanimnode.h:18 */
	virtual void RemoveChild(IChoiceAnimNode* , int);
	/* ../public/animationsystem/ichoiceanimnode.h:21 */
	virtual void SetChildName(IChoiceAnimNode* , int, const CUtlString& );
	/* ../public/animationsystem/ichoiceanimnode.h:24 */
	virtual void SetChild(IChoiceAnimNode* , int, IAnimNode* );
	/* ../public/animationsystem/ichoiceanimnode.h:27 */
	virtual float GetChildWeight(const IChoiceAnimNode* , int);
	/* ../public/animationsystem/ichoiceanimnode.h:30 */
	virtual void SetChildWeight(IChoiceAnimNode* , int, float);
	/* ../public/animationsystem/ichoiceanimnode.h:34 */
	virtual void MoveChildToIndex(IChoiceAnimNode* , int, int);
	void IChoiceAnimNode(class IChoiceAnimNode *, class IChoiceAnimNode &); /* linkage=_ZN15IChoiceAnimNodeC4EOS_ */
	void IChoiceAnimNode(class IChoiceAnimNode *, const class IChoiceAnimNode  &); /* linkage=_ZN15IChoiceAnimNodeC4ERKS_ */
	void IChoiceAnimNode(class IChoiceAnimNode *); /* linkage=_ZN15IChoiceAnimNodeC4Ev */
	void ~IChoiceAnimNode(class IChoiceAnimNode *); /* linkage=_ZN15IChoiceAnimNodeD4Ev */
	const class ClassID  MyTypeID(void); /* linkage=_ZN15IChoiceAnimNode8MyTypeIDEv */
	/* <109548c> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceanimnode.cpp:12 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN15IChoiceAnimNode10MyTypeInfoEv */
	virtual const class CClassInfo  & GetTypeInfo(const class IChoiceAnimNode  *); /* linkage=_ZNK15IChoiceAnimNode11GetTypeInfoEv */
	virtual void * CastToBase(class IChoiceAnimNode *, class ClassID); /* linkage=_ZN15IChoiceAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class IChoiceAnimNode  *, class ClassID); /* linkage=_ZNK15IChoiceAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual int AddChild(class IChoiceAnimNode *); /* linkage=_ZN15IChoiceAnimNode8AddChildEv */
	virtual void RemoveChild(class IChoiceAnimNode *, int); /* linkage=_ZN15IChoiceAnimNode11RemoveChildEi */
	virtual void SetChildName(class IChoiceAnimNode *, int, const class CUtlString  &); /* linkage=_ZN15IChoiceAnimNode12SetChildNameEiRK10CUtlString */
	virtual void SetChild(class IChoiceAnimNode *, int, class IAnimNode *); /* linkage=_ZN15IChoiceAnimNode8SetChildEiP9IAnimNode */
	virtual float GetChildWeight(const class IChoiceAnimNode  *, int); /* linkage=_ZNK15IChoiceAnimNode14GetChildWeightEi */
	virtual void SetChildWeight(class IChoiceAnimNode *, int, float); /* linkage=_ZN15IChoiceAnimNode14SetChildWeightEif */
	virtual void MoveChildToIndex(class IChoiceAnimNode *, int, int); /* linkage=_ZN15IChoiceAnimNode16MoveChildToIndexEii */
};

// <01078449> ../public/animationsystem/ichoiceanimnode.h:12
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 12
	const char   __PRETTY_FUNCTION__; // 21056
} /* size: 0, variables: 2 */

