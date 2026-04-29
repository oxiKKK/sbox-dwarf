
//
// public/animationsystem/isequenceanimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 5
//	class: 1
//

// <0116BB45> ../public/animationsystem/isequenceanimnode.h:14
void ISequenceAnimNode::ISequenceAnimNode()
{
} /* size: 0 */

// <0116BB29> ../public/animationsystem/isequenceanimnode.h:14
inline void ISequenceAnimNode::ISequenceAnimNode()
{
} /* size: 0 */

// <005C552F> ../public/animationsystem/isequenceanimnode.h:14
inline void ISequenceAnimNode::operator=(const ISequenceAnimNode &)
{
} /* size: 0 */

// <0111E88C> ../public/animationsystem/isequenceanimnode.h:14
// member functions: 24
// member variable: 1
// static member variable: 1
// vtable entries: 6
// class size: 8
class ISequenceAnimNode : public IAnimTagSpanContainer {
public:
	/* class IAnimTagSpanContainer <ancestor>; */ /* 0 0 */
	void ISequenceAnimNode(ISequenceAnimNode* , ISequenceAnimNode& );
	void ISequenceAnimNode(ISequenceAnimNode* , const ISequenceAnimNode& );
	void ISequenceAnimNode(ISequenceAnimNode* );
	void ~ISequenceAnimNode(ISequenceAnimNode* );
private:
	static class CClassInfoT<ISequenceAnimNode> m_classInfoISequenceAnimNode; /* 0 0 */
	/* ../public/animationsystem/isequenceanimnode.h:16 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnode.cpp:13 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnode.cpp:13 */
	virtual const CClassInfo& GetTypeInfo(const ISequenceAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnode.cpp:13 */
	virtual void* CastToBase(ISequenceAnimNode* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnode.cpp:13 */
	virtual const void* CastToBase(const ISequenceAnimNode* , ClassID);
	/* ../public/animationsystem/isequenceanimnode.h:18 */
	virtual const CUtlString& GetSequenceName(const ISequenceAnimNode* );
	/* ../public/animationsystem/isequenceanimnode.h:19 */
	virtual void SetSequenceName(ISequenceAnimNode* , const CUtlString& );
	/* ../public/animationsystem/isequenceanimnode.h:20 */
	virtual bool IsLooping(const ISequenceAnimNode* );
	void ISequenceAnimNode(class ISequenceAnimNode *, class ISequenceAnimNode &); /* linkage=_ZN17ISequenceAnimNodeC4EOS_ */
	void ISequenceAnimNode(class ISequenceAnimNode *, const class ISequenceAnimNode  &); /* linkage=_ZN17ISequenceAnimNodeC4ERKS_ */
	void ISequenceAnimNode(class ISequenceAnimNode *); /* linkage=_ZN17ISequenceAnimNodeC4Ev */
	void ~ISequenceAnimNode(class ISequenceAnimNode *); /* linkage=_ZN17ISequenceAnimNodeD4Ev */
	const class ClassID  MyTypeID(void); /* linkage=_ZN17ISequenceAnimNode8MyTypeIDEv */
	/* <1198322> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnode.cpp:13 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN17ISequenceAnimNode10MyTypeInfoEv */
	virtual const class CClassInfo  & GetTypeInfo(const class ISequenceAnimNode  *); /* linkage=_ZNK17ISequenceAnimNode11GetTypeInfoEv */
	virtual void * CastToBase(class ISequenceAnimNode *, class ClassID); /* linkage=_ZN17ISequenceAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class ISequenceAnimNode  *, class ClassID); /* linkage=_ZNK17ISequenceAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual const class CUtlString  & GetSequenceName(const class ISequenceAnimNode  *); /* linkage=_ZNK17ISequenceAnimNode15GetSequenceNameEv */
	virtual void SetSequenceName(class ISequenceAnimNode *, const class CUtlString  &); /* linkage=_ZN17ISequenceAnimNode15SetSequenceNameERK10CUtlString */
	virtual bool IsLooping(const class ISequenceAnimNode  *); /* linkage=_ZNK17ISequenceAnimNode9IsLoopingEv */
};

// <01A759EE> ../public/animationsystem/isequenceanimnode.h:16
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 16
	const char   __PRETTY_FUNCTION__; // 23035
} /* size: 0, variables: 2 */

// <0116C7BB> ../public/animationsystem/isequenceanimnode.h:16
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 16
	const char   __PRETTY_FUNCTION__; // 44363
} /* size: 0, variables: 2 */

