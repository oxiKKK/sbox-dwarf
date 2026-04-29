
//
// public/animationsystem/iselectoranimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 4
//	class: 1
//

// <0116EA4D> ../public/animationsystem/iselectoranimnode.h:14
void ISelectorAnimNode::ISelectorAnimNode()
{
} /* size: 0 */

// <0116EA31> ../public/animationsystem/iselectoranimnode.h:14
inline void ISelectorAnimNode::ISelectorAnimNode()
{
} /* size: 0 */

// <005CE5B4> ../public/animationsystem/iselectoranimnode.h:14
inline void ISelectorAnimNode::operator=(const ISelectorAnimNode &)
{
} /* size: 0 */

// <0111DE32> ../public/animationsystem/iselectoranimnode.h:14
// member functions: 32
// member variable: 1
// static member variable: 1
// vtable entries: 10
// class size: 8
class ISelectorAnimNode {
	void ISelectorAnimNode(ISelectorAnimNode* , ISelectorAnimNode& );
	void ISelectorAnimNode(ISelectorAnimNode* , const ISelectorAnimNode& );
	void ISelectorAnimNode(ISelectorAnimNode* );
	void ~ISelectorAnimNode(ISelectorAnimNode* );
	int ()(void) * * _vptr.ISelectorAnimNode; /* 0 8 */
private:
	static class CClassInfoT<ISelectorAnimNode> m_classInfoISelectorAnimNode; /* 0 0 */
	/* ../public/animationsystem/iselectoranimnode.h:16 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:10 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:10 */
	virtual const CClassInfo& GetTypeInfo(const ISelectorAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:10 */
	virtual void* CastToBase(ISelectorAnimNode* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:10 */
	virtual const void* CastToBase(const ISelectorAnimNode* , ClassID);
	/* ../public/animationsystem/iselectoranimnode.h:19 */
	virtual int GetOptionCount(const ISelectorAnimNode* );
	/* ../public/animationsystem/iselectoranimnode.h:22 */
	virtual AnimParamID GetParamID(const ISelectorAnimNode* );
	/* ../public/animationsystem/iselectoranimnode.h:25 */
	virtual AnimTagID GetTagID(const ISelectorAnimNode* , int);
	/* ../public/animationsystem/iselectoranimnode.h:26 */
	virtual void SetTagID(ISelectorAnimNode* , int, AnimTagID);
	/* ../public/animationsystem/iselectoranimnode.h:29 */
	virtual const CBlendCurve& GetBlendCurve(const ISelectorAnimNode* );
	/* ../public/animationsystem/iselectoranimnode.h:30 */
	virtual void SetBlendCurve(ISelectorAnimNode* , const CBlendCurve& );
	/* ../public/animationsystem/iselectoranimnode.h:35 */
	virtual void RefreshInputs(ISelectorAnimNode* );
	void ISelectorAnimNode(class ISelectorAnimNode *, class ISelectorAnimNode &); /* linkage=_ZN17ISelectorAnimNodeC4EOS_ */
	void ISelectorAnimNode(class ISelectorAnimNode *, const class ISelectorAnimNode  &); /* linkage=_ZN17ISelectorAnimNodeC4ERKS_ */
	void ISelectorAnimNode(class ISelectorAnimNode *); /* linkage=_ZN17ISelectorAnimNodeC4Ev */
	void ~ISelectorAnimNode(class ISelectorAnimNode *); /* linkage=_ZN17ISelectorAnimNodeD4Ev */
	const class ClassID  MyTypeID(void); /* linkage=_ZN17ISelectorAnimNode8MyTypeIDEv */
	/* <11982e6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:10 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN17ISelectorAnimNode10MyTypeInfoEv */
	virtual const class CClassInfo  & GetTypeInfo(const class ISelectorAnimNode  *); /* linkage=_ZNK17ISelectorAnimNode11GetTypeInfoEv */
	virtual void * CastToBase(class ISelectorAnimNode *, class ClassID); /* linkage=_ZN17ISelectorAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class ISelectorAnimNode  *, class ClassID); /* linkage=_ZNK17ISelectorAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual int GetOptionCount(const class ISelectorAnimNode  *); /* linkage=_ZNK17ISelectorAnimNode14GetOptionCountEv */
	virtual class AnimParamID GetParamID(const class ISelectorAnimNode  *); /* linkage=_ZNK17ISelectorAnimNode10GetParamIDEv */
	virtual class AnimTagID GetTagID(const class ISelectorAnimNode  *, int); /* linkage=_ZNK17ISelectorAnimNode8GetTagIDEi */
	virtual void SetTagID(class ISelectorAnimNode *, int, class AnimTagID); /* linkage=_ZN17ISelectorAnimNode8SetTagIDEi9AnimTagID */
	virtual const class CBlendCurve  & GetBlendCurve(const class ISelectorAnimNode  *); /* linkage=_ZNK17ISelectorAnimNode13GetBlendCurveEv */
	virtual void SetBlendCurve(class ISelectorAnimNode *, const class CBlendCurve  &); /* linkage=_ZN17ISelectorAnimNode13SetBlendCurveERK11CBlendCurve */
	virtual void RefreshInputs(class ISelectorAnimNode *); /* linkage=_ZN17ISelectorAnimNode13RefreshInputsEv */
};

// <0116F2D1> ../public/animationsystem/iselectoranimnode.h:16
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 16
	const char   __PRETTY_FUNCTION__; // 44363
} /* size: 0, variables: 2 */

