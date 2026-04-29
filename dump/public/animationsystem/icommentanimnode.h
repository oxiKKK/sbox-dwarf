
//
// public/animationsystem/icommentanimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 4
//	class: 1
//

// <0107261D> ../public/animationsystem/icommentanimnode.h:13
void ICommentAnimNode::ICommentAnimNode()
{
} /* size: 0 */

// <01072601> ../public/animationsystem/icommentanimnode.h:13
inline void ICommentAnimNode::ICommentAnimNode()
{
} /* size: 0 */

// <004EE4E7> ../public/animationsystem/icommentanimnode.h:13
inline void ICommentAnimNode::operator=(const ICommentAnimNode &)
{
} /* size: 0 */

// <01013E08> ../public/animationsystem/icommentanimnode.h:13
// member functions: 30
// member variable: 1
// static member variable: 1
// vtable entries: 9
// class size: 8
class ICommentAnimNode {
	void ICommentAnimNode(ICommentAnimNode* , ICommentAnimNode& );
	void ICommentAnimNode(ICommentAnimNode* , const ICommentAnimNode& );
	void ICommentAnimNode(ICommentAnimNode* );
	void ~ICommentAnimNode(ICommentAnimNode* );
	int ()(void) * * _vptr.ICommentAnimNode; /* 0 8 */
private:
	static class CClassInfoT<ICommentAnimNode> m_classInfoICommentAnimNode; /* 0 0 */
	/* ../public/animationsystem/icommentanimnode.h:15 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:8 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:8 */
	virtual const CClassInfo& GetTypeInfo(const ICommentAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:8 */
	virtual void* CastToBase(ICommentAnimNode* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:8 */
	virtual const void* CastToBase(const ICommentAnimNode* , ClassID);
	/* ../public/animationsystem/icommentanimnode.h:18 */
	virtual const CUtlString& GetCommentText(const ICommentAnimNode* );
	/* ../public/animationsystem/icommentanimnode.h:19 */
	virtual void SetCommentText(ICommentAnimNode* , const CUtlString& );
	/* ../public/animationsystem/icommentanimnode.h:23 */
	virtual const Vector2D& GetNodeSize(const ICommentAnimNode* );
	/* ../public/animationsystem/icommentanimnode.h:24 */
	virtual void SetNodeSize(ICommentAnimNode* , const Vector2D& );
	/* ../public/animationsystem/icommentanimnode.h:27 */
	virtual const Color& GetColor(const ICommentAnimNode* );
	/* ../public/animationsystem/icommentanimnode.h:28 */
	virtual void SetColor(ICommentAnimNode* , const Color& );
	void ICommentAnimNode(class ICommentAnimNode *, class ICommentAnimNode &); /* linkage=_ZN16ICommentAnimNodeC4EOS_ */
	void ICommentAnimNode(class ICommentAnimNode *, const class ICommentAnimNode  &); /* linkage=_ZN16ICommentAnimNodeC4ERKS_ */
	void ICommentAnimNode(class ICommentAnimNode *); /* linkage=_ZN16ICommentAnimNodeC4Ev */
	void ~ICommentAnimNode(class ICommentAnimNode *); /* linkage=_ZN16ICommentAnimNodeD4Ev */
	const class ClassID  MyTypeID(void); /* linkage=_ZN16ICommentAnimNode8MyTypeIDEv */
	/* <109552d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:8 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN16ICommentAnimNode10MyTypeInfoEv */
	virtual const class CClassInfo  & GetTypeInfo(const class ICommentAnimNode  *); /* linkage=_ZNK16ICommentAnimNode11GetTypeInfoEv */
	virtual void * CastToBase(class ICommentAnimNode *, class ClassID); /* linkage=_ZN16ICommentAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class ICommentAnimNode  *, class ClassID); /* linkage=_ZNK16ICommentAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual const class CUtlString  & GetCommentText(const class ICommentAnimNode  *); /* linkage=_ZNK16ICommentAnimNode14GetCommentTextEv */
	virtual void SetCommentText(class ICommentAnimNode *, const class CUtlString  &); /* linkage=_ZN16ICommentAnimNode14SetCommentTextERK10CUtlString */
	virtual const class Vector2D  & GetNodeSize(const class ICommentAnimNode  *); /* linkage=_ZNK16ICommentAnimNode11GetNodeSizeEv */
	virtual void SetNodeSize(class ICommentAnimNode *, const class Vector2D  &); /* linkage=_ZN16ICommentAnimNode11SetNodeSizeERK8Vector2D */
	virtual const class Color  & GetColor(const class ICommentAnimNode  *); /* linkage=_ZNK16ICommentAnimNode8GetColorEv */
	virtual void SetColor(class ICommentAnimNode *, const class Color  &); /* linkage=_ZN16ICommentAnimNode8SetColorERK5Color */
};

// <01072E3F> ../public/animationsystem/icommentanimnode.h:15
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 15
	const char   __PRETTY_FUNCTION__; // 21083
} /* size: 0, variables: 2 */

