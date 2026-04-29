
//
// public/animationsystem/imotionmatchinganimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 4
//	class: 1
//

// <0117D26B> ../public/animationsystem/imotionmatchinganimnode.h:17
void IMotionMatchingAnimNode::IMotionMatchingAnimNode()
{
} /* size: 0 */

// <0117D24F> ../public/animationsystem/imotionmatchinganimnode.h:17
inline void IMotionMatchingAnimNode::IMotionMatchingAnimNode()
{
} /* size: 0 */

// <005DA65A> ../public/animationsystem/imotionmatchinganimnode.h:17
inline void IMotionMatchingAnimNode::operator=(const IMotionMatchingAnimNode &)
{
} /* size: 0 */

// <01111AA9> ../public/animationsystem/imotionmatchinganimnode.h:17
// member functions: 46
// member variable: 1
// static member variable: 1
// vtable entries: 17
// class size: 8
class IMotionMatchingAnimNode {
	void IMotionMatchingAnimNode(IMotionMatchingAnimNode* , IMotionMatchingAnimNode& );
	void IMotionMatchingAnimNode(IMotionMatchingAnimNode* , const IMotionMatchingAnimNode& );
	void IMotionMatchingAnimNode(IMotionMatchingAnimNode* );
	void ~IMotionMatchingAnimNode(IMotionMatchingAnimNode* );
	int ()(void) * * _vptr.IMotionMatchingAnimNode; /* 0 8 */
private:
	static class CClassInfoT<IMotionMatchingAnimNode> m_classInfoIMotionMatchingAnimNode; /* 0 0 */
	/* ../public/animationsystem/imotionmatchinganimnode.h:19 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnode.cpp:10 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnode.cpp:10 */
	virtual const CClassInfo& GetTypeInfo(const IMotionMatchingAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnode.cpp:10 */
	virtual void* CastToBase(IMotionMatchingAnimNode* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnode.cpp:10 */
	virtual const void* CastToBase(const IMotionMatchingAnimNode* , ClassID);
	/* ../public/animationsystem/imotionmatchinganimnode.h:22 */
	virtual float GetPredictionTime(const IMotionMatchingAnimNode* );
	/* ../public/animationsystem/imotionmatchinganimnode.h:27 */
	virtual int GetClipGroupCount(const IMotionMatchingAnimNode* );
	/* ../public/animationsystem/imotionmatchinganimnode.h:30 */
	virtual IMotionClipGroup* GetClipGroup(IMotionMatchingAnimNode* , int);
	/* ../public/animationsystem/imotionmatchinganimnode.h:31 */
	virtual const IMotionClipGroup* GetClipGroup(const IMotionMatchingAnimNode* , int);
	/* ../public/animationsystem/imotionmatchinganimnode.h:34 */
	virtual IMotionClipGroup* AddClipGroup(IMotionMatchingAnimNode* );
	/* ../public/animationsystem/imotionmatchinganimnode.h:37 */
	virtual void RemoveClipGroup(IMotionMatchingAnimNode* , int);
	/* ../public/animationsystem/imotionmatchinganimnode.h:40 */
	virtual void RemoveClipGroup(IMotionMatchingAnimNode* , IMotionClipGroup* );
	/* ../public/animationsystem/imotionmatchinganimnode.h:45 */
	virtual CClassInfoList GetMetricTypes(const IMotionMatchingAnimNode* );
	/* ../public/animationsystem/imotionmatchinganimnode.h:48 */
	virtual int GetMetricCount(const IMotionMatchingAnimNode* );
	/* ../public/animationsystem/imotionmatchinganimnode.h:51 */
	virtual IMotionMetric* GetMetric(IMotionMatchingAnimNode* , int);
	/* ../public/animationsystem/imotionmatchinganimnode.h:52 */
	virtual const IMotionMetric* GetMetric(const IMotionMatchingAnimNode* , int);
	/* ../public/animationsystem/imotionmatchinganimnode.h:55 */
	virtual IMotionMetric* AddMetric(IMotionMatchingAnimNode* , const char* );
	/* ../public/animationsystem/imotionmatchinganimnode.h:58 */
	virtual void RemoveMetric(IMotionMatchingAnimNode* , int);
	/* ../public/animationsystem/imotionmatchinganimnode.h:61 */
	virtual void RemoveMetric(IMotionMatchingAnimNode* , IMotionMetric* );
	void IMotionMatchingAnimNode(class IMotionMatchingAnimNode *, class IMotionMatchingAnimNode &); /* linkage=_ZN23IMotionMatchingAnimNodeC4EOS_ */
	void IMotionMatchingAnimNode(class IMotionMatchingAnimNode *, const class IMotionMatchingAnimNode  &); /* linkage=_ZN23IMotionMatchingAnimNodeC4ERKS_ */
	void IMotionMatchingAnimNode(class IMotionMatchingAnimNode *); /* linkage=_ZN23IMotionMatchingAnimNodeC4Ev */
	void ~IMotionMatchingAnimNode(class IMotionMatchingAnimNode *); /* linkage=_ZN23IMotionMatchingAnimNodeD4Ev */
	const class ClassID  MyTypeID(void); /* linkage=_ZN23IMotionMatchingAnimNode8MyTypeIDEv */
	/* <1198209> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnode.cpp:10 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN23IMotionMatchingAnimNode10MyTypeInfoEv */
	virtual const class CClassInfo  & GetTypeInfo(const class IMotionMatchingAnimNode  *); /* linkage=_ZNK23IMotionMatchingAnimNode11GetTypeInfoEv */
	virtual void * CastToBase(class IMotionMatchingAnimNode *, class ClassID); /* linkage=_ZN23IMotionMatchingAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class IMotionMatchingAnimNode  *, class ClassID); /* linkage=_ZNK23IMotionMatchingAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual float GetPredictionTime(const class IMotionMatchingAnimNode  *); /* linkage=_ZNK23IMotionMatchingAnimNode17GetPredictionTimeEv */
	virtual int GetClipGroupCount(const class IMotionMatchingAnimNode  *); /* linkage=_ZNK23IMotionMatchingAnimNode17GetClipGroupCountEv */
	virtual class IMotionClipGroup * GetClipGroup(class IMotionMatchingAnimNode *, int); /* linkage=_ZN23IMotionMatchingAnimNode12GetClipGroupEi */
	virtual const class IMotionClipGroup  * GetClipGroup(const class IMotionMatchingAnimNode  *, int); /* linkage=_ZNK23IMotionMatchingAnimNode12GetClipGroupEi */
	virtual class IMotionClipGroup * AddClipGroup(class IMotionMatchingAnimNode *); /* linkage=_ZN23IMotionMatchingAnimNode12AddClipGroupEv */
	virtual void RemoveClipGroup(class IMotionMatchingAnimNode *, int); /* linkage=_ZN23IMotionMatchingAnimNode15RemoveClipGroupEi */
	virtual void RemoveClipGroup(class IMotionMatchingAnimNode *, class IMotionClipGroup *); /* linkage=_ZN23IMotionMatchingAnimNode15RemoveClipGroupEP16IMotionClipGroup */
	virtual CClassInfoList GetMetricTypes(const class IMotionMatchingAnimNode  *); /* linkage=_ZNK23IMotionMatchingAnimNode14GetMetricTypesEv */
	virtual int GetMetricCount(const class IMotionMatchingAnimNode  *); /* linkage=_ZNK23IMotionMatchingAnimNode14GetMetricCountEv */
	virtual class IMotionMetric * GetMetric(class IMotionMatchingAnimNode *, int); /* linkage=_ZN23IMotionMatchingAnimNode9GetMetricEi */
	virtual const class IMotionMetric  * GetMetric(const class IMotionMatchingAnimNode  *, int); /* linkage=_ZNK23IMotionMatchingAnimNode9GetMetricEi */
	virtual class IMotionMetric * AddMetric(class IMotionMatchingAnimNode *, const char  *); /* linkage=_ZN23IMotionMatchingAnimNode9AddMetricEPKc */
	virtual void RemoveMetric(class IMotionMatchingAnimNode *, int); /* linkage=_ZN23IMotionMatchingAnimNode12RemoveMetricEi */
	virtual void RemoveMetric(class IMotionMatchingAnimNode *, class IMotionMetric *); /* linkage=_ZN23IMotionMatchingAnimNode12RemoveMetricEP13IMotionMetric */
};

// <0117DB80> ../public/animationsystem/imotionmatchinganimnode.h:19
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 19
	const char   __PRETTY_FUNCTION__; // 44520
} /* size: 0, variables: 2 */

