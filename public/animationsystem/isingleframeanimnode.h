
//
// public/animationsystem/isingleframeanimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 4
//	class: 1
//

// <0116799F> ../public/animationsystem/isingleframeanimnode.h:10
void ISingleFrameAnimNode::ISingleFrameAnimNode()
{
} /* size: 0 */

// <01167983> ../public/animationsystem/isingleframeanimnode.h:10
inline void ISingleFrameAnimNode::ISingleFrameAnimNode()
{
} /* size: 0 */

// <005C0FD7> ../public/animationsystem/isingleframeanimnode.h:10
inline void ISingleFrameAnimNode::operator=(const ISingleFrameAnimNode &)
{
} /* size: 0 */

// <0111FC4B> ../public/animationsystem/isingleframeanimnode.h:10
// member functions: 22
// member variable: 1
// static member variable: 1
// vtable entries: 5
// class size: 8
class ISingleFrameAnimNode : public IAnimTagSpanContainer {
public:
	/* class IAnimTagSpanContainer <ancestor>; */ /* 0 0 */
	void ISingleFrameAnimNode(ISingleFrameAnimNode* , ISingleFrameAnimNode& );
	void ISingleFrameAnimNode(ISingleFrameAnimNode* , const ISingleFrameAnimNode& );
	void ISingleFrameAnimNode(ISingleFrameAnimNode* );
	void ~ISingleFrameAnimNode(ISingleFrameAnimNode* );
private:
	static class CClassInfoT<ISingleFrameAnimNode> m_classInfoISingleFrameAnimNode; /* 0 0 */
	/* ../public/animationsystem/isingleframeanimnode.h:12 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeanimnode.cpp:9 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeanimnode.cpp:9 */
	virtual const CClassInfo& GetTypeInfo(const ISingleFrameAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeanimnode.cpp:9 */
	virtual void* CastToBase(ISingleFrameAnimNode* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeanimnode.cpp:9 */
	virtual const void* CastToBase(const ISingleFrameAnimNode* , ClassID);
	/* ../public/animationsystem/isingleframeanimnode.h:14 */
	virtual const CUtlString& GetSequenceName(const ISingleFrameAnimNode* );
	/* ../public/animationsystem/isingleframeanimnode.h:15 */
	virtual void SetSequenceName(ISingleFrameAnimNode* , const CUtlString& );
	void ISingleFrameAnimNode(class ISingleFrameAnimNode *, class ISingleFrameAnimNode &); /* linkage=_ZN20ISingleFrameAnimNodeC4EOS_ */
	void ISingleFrameAnimNode(class ISingleFrameAnimNode *, const class ISingleFrameAnimNode  &); /* linkage=_ZN20ISingleFrameAnimNodeC4ERKS_ */
	void ISingleFrameAnimNode(class ISingleFrameAnimNode *); /* linkage=_ZN20ISingleFrameAnimNodeC4Ev */
	void ~ISingleFrameAnimNode(class ISingleFrameAnimNode *); /* linkage=_ZN20ISingleFrameAnimNodeD4Ev */
	const class ClassID  MyTypeID(void); /* linkage=_ZN20ISingleFrameAnimNode8MyTypeIDEv */
	/* <11983b8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeanimnode.cpp:9 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN20ISingleFrameAnimNode10MyTypeInfoEv */
	virtual const class CClassInfo  & GetTypeInfo(const class ISingleFrameAnimNode  *); /* linkage=_ZNK20ISingleFrameAnimNode11GetTypeInfoEv */
	virtual void * CastToBase(class ISingleFrameAnimNode *, class ClassID); /* linkage=_ZN20ISingleFrameAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class ISingleFrameAnimNode  *, class ClassID); /* linkage=_ZNK20ISingleFrameAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual const class CUtlString  & GetSequenceName(const class ISingleFrameAnimNode  *); /* linkage=_ZNK20ISingleFrameAnimNode15GetSequenceNameEv */
	virtual void SetSequenceName(class ISingleFrameAnimNode *, const class CUtlString  &); /* linkage=_ZN20ISingleFrameAnimNode15SetSequenceNameERK10CUtlString */
};

// <011681C1> ../public/animationsystem/isingleframeanimnode.h:12
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 12
	const char   __PRETTY_FUNCTION__; // 44444
} /* size: 0, variables: 2 */

