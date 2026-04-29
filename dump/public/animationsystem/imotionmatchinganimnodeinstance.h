
//
// public/animationsystem/imotionmatchinganimnodeinstance.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 9
//	class: 1
//	struct: 1
//

// <0015D6AD> ../public/animationsystem/imotionmatchinganimnodeinstance.h:15
// member functions: 7
// member variables: 2
// static member variables: 2
// struct size: 4
struct ClipIndex {
	static struct datamap_t m_DataMap; /* 0 0 */
	/* ../public/animationsystem/imotionmatchinganimnodeinstance.h:17 */
	datamap_t* GetBaseMap(void);
	static const uint16 kInvalidIndex = 65535; /* 0 0 */
	uint16 m_groupIndex; /* 0 2 */
	uint16 m_clipIndex; /* 2 2 */
	/* ../public/animationsystem/imotionmatchinganimnodeinstance.h:24 */
	void ClipIndex(ClipIndex* );
	/* ../public/animationsystem/imotionmatchinganimnodeinstance.h:25 */
	void ClipIndex(ClipIndex* , uint16, uint16);
	/* ../public/animationsystem/imotionmatchinganimnodeinstance.h:27 */
	bool IsValid(const ClipIndex* );
	/* ../public/animationsystem/imotionmatchinganimnodeinstance.h:31 */
	void Set(ClipIndex* , uint16, uint16);
	/* ../public/animationsystem/imotionmatchinganimnodeinstance.h:36 */
	bool operator==(const ClipIndex* , ClipIndex);
	/* ../public/animationsystem/imotionmatchinganimnodeinstance.h:40 */
	bool operator!=(const ClipIndex* , ClipIndex);
};

// <0196DCC5> ../public/animationsystem/imotionmatchinganimnodeinstance.h:24
void ClipIndex::ClipIndex()
{
} /* size: 0 */

// <0196DCAC> ../public/animationsystem/imotionmatchinganimnodeinstance.h:24
inline void ClipIndex::ClipIndex()
{
} /* size: 0 */

// <0196DC8B> ../public/animationsystem/imotionmatchinganimnodeinstance.h:25
void ClipIndex::ClipIndex(uint16 nGroupIndex, uint16 nClipIndex)
{
} /* size: 0 */

// <0196DC5A> ../public/animationsystem/imotionmatchinganimnodeinstance.h:25
inline void ClipIndex::ClipIndex(uint16 nGroupIndex, uint16 nClipIndex)
{
} /* size: 0 */

// <0196DC41> ../public/animationsystem/imotionmatchinganimnodeinstance.h:27
inline void ClipIndex::IsValid()
{
} /* size: 0 */

// <0117DAEF> ../public/animationsystem/imotionmatchinganimnodeinstance.h:31
inline void ClipIndex::Set(uint16 nGroupIndex, uint16 nClipIndex)
{
} /* size: 0 */

// <011729FA> ../public/animationsystem/imotionmatchinganimnodeinstance.h:49
void IMotionMatchingAnimNodeInstance::IMotionMatchingAnimNodeInstance()
{
} /* size: 0 */

// <011729DE> ../public/animationsystem/imotionmatchinganimnodeinstance.h:49
inline void IMotionMatchingAnimNodeInstance::IMotionMatchingAnimNodeInstance()
{
} /* size: 0 */

// <011188AC> ../public/animationsystem/imotionmatchinganimnodeinstance.h:49
// member functions: 54
// member variable: 1
// static member variable: 1
// vtable entries: 21
// class size: 8
class IMotionMatchingAnimNodeInstance {
	void IMotionMatchingAnimNodeInstance(IMotionMatchingAnimNodeInstance* , IMotionMatchingAnimNodeInstance& );
	void IMotionMatchingAnimNodeInstance(IMotionMatchingAnimNodeInstance* , const IMotionMatchingAnimNodeInstance& );
	void IMotionMatchingAnimNodeInstance(IMotionMatchingAnimNodeInstance* );
	void ~IMotionMatchingAnimNodeInstance(IMotionMatchingAnimNodeInstance* );
	int ()(void) * * _vptr.IMotionMatchingAnimNodeInstance; /* 0 8 */
private:
	static class CClassInfoT<IMotionMatchingAnimNodeInstance> m_classInfoIMotionMatchingAnimNodeInstance; /* 0 0 */
	/* ../public/animationsystem/imotionmatchinganimnodeinstance.h:51 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnodeinstance.cpp:9 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnodeinstance.cpp:9 */
	virtual const CClassInfo& GetTypeInfo(const IMotionMatchingAnimNodeInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnodeinstance.cpp:9 */
	virtual void* CastToBase(IMotionMatchingAnimNodeInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnodeinstance.cpp:9 */
	virtual const void* CastToBase(const IMotionMatchingAnimNodeInstance* , ClassID);
	/* ../public/animationsystem/imotionmatchinganimnodeinstance.h:54 */
	virtual int GetClipGroupCount(const IMotionMatchingAnimNodeInstance* );
	/* ../public/animationsystem/imotionmatchinganimnodeinstance.h:57 */
	virtual int GetClipCount(const IMotionMatchingAnimNodeInstance* , int);
	/* ../public/animationsystem/imotionmatchinganimnodeinstance.h:60 */
	virtual int GetClipEntryPointCount(const IMotionMatchingAnimNodeInstance* , ClipIndex);
	/* ../public/animationsystem/imotionmatchinganimnodeinstance.h:62 */
	virtual float GetClipEntryPointCycle(const IMotionMatchingAnimNodeInstance* , ClipIndex, int);
	/* ../public/animationsystem/imotionmatchinganimnodeinstance.h:65 */
	virtual ClipIndex GetCurrentClipIndex(const IMotionMatchingAnimNodeInstance* );
	/* ../public/animationsystem/imotionmatchinganimnodeinstance.h:68 */
	virtual int GetCurrentEntryPointIndex(const IMotionMatchingAnimNodeInstance* );
	/* ../public/animationsystem/imotionmatchinganimnodeinstance.h:71 */
	virtual HSequence GetCurrentClipSequence(const IMotionMatchingAnimNodeInstance* );
	/* ../public/animationsystem/imotionmatchinganimnodeinstance.h:74 */
	virtual float GetCurrentClipEntryPointCycle(const IMotionMatchingAnimNodeInstance* );
	/* ../public/animationsystem/imotionmatchinganimnodeinstance.h:77 */
	virtual float GetCurrentClipCycle(const IMotionMatchingAnimNodeInstance* );
	/* ../public/animationsystem/imotionmatchinganimnodeinstance.h:80 */
	virtual bool GetCurrentClipLoop(const IMotionMatchingAnimNodeInstance* );
	/* ../public/animationsystem/imotionmatchinganimnodeinstance.h:83 */
	virtual bool IsGroupEnabled(const IMotionMatchingAnimNodeInstance* , int);
	/* ../public/animationsystem/imotionmatchinganimnodeinstance.h:86 */
	virtual int GetMetricCount(const IMotionMatchingAnimNodeInstance* );
	/* ../public/animationsystem/imotionmatchinganimnodeinstance.h:89 */
	virtual IMotionMetricInstance* GetMetricInstance(IMotionMatchingAnimNodeInstance* , int);
	/* ../public/animationsystem/imotionmatchinganimnodeinstance.h:90 */
	virtual const IMotionMetricInstance* GetMetricInstance(const IMotionMatchingAnimNodeInstance* , int);
	/* ../public/animationsystem/imotionmatchinganimnodeinstance.h:93 */
	virtual float CalculateScore(const IMotionMatchingAnimNodeInstance* , ClipIndex, int);
	/* ../public/animationsystem/imotionmatchinganimnodeinstance.h:96 */
	virtual void GetGoalValues(const IMotionMatchingAnimNodeInstance* , int, bool, CUtlVector<float, CUtlMemory<float, int> >& );
	/* ../public/animationsystem/imotionmatchinganimnodeinstance.h:99 */
	virtual void GetCurrentValues(const IMotionMatchingAnimNodeInstance* , int, bool, CUtlVector<float, CUtlMemory<float, int> >& );
	/* ../public/animationsystem/imotionmatchinganimnodeinstance.h:102 */
	virtual void GetClipValues(const IMotionMatchingAnimNodeInstance* , int, ClipIndex, int, bool, CUtlVector<float, CUtlMemory<float, int> >& );
	void IMotionMatchingAnimNodeInstance(class IMotionMatchingAnimNodeInstance *, class IMotionMatchingAnimNodeInstance &); /* linkage=_ZN31IMotionMatchingAnimNodeInstanceC4EOS_ */
	void IMotionMatchingAnimNodeInstance(class IMotionMatchingAnimNodeInstance *, const class IMotionMatchingAnimNodeInstance  &); /* linkage=_ZN31IMotionMatchingAnimNodeInstanceC4ERKS_ */
	void IMotionMatchingAnimNodeInstance(class IMotionMatchingAnimNodeInstance *); /* linkage=_ZN31IMotionMatchingAnimNodeInstanceC4Ev */
	void ~IMotionMatchingAnimNodeInstance(class IMotionMatchingAnimNodeInstance *); /* linkage=_ZN31IMotionMatchingAnimNodeInstanceD4Ev */
	const class ClassID  MyTypeID(void); /* linkage=_ZN31IMotionMatchingAnimNodeInstance8MyTypeIDEv */
	/* <1198245> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnodeinstance.cpp:9 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN31IMotionMatchingAnimNodeInstance10MyTypeInfoEv */
	virtual const class CClassInfo  & GetTypeInfo(const class IMotionMatchingAnimNodeInstance  *); /* linkage=_ZNK31IMotionMatchingAnimNodeInstance11GetTypeInfoEv */
	virtual void * CastToBase(class IMotionMatchingAnimNodeInstance *, class ClassID); /* linkage=_ZN31IMotionMatchingAnimNodeInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class IMotionMatchingAnimNodeInstance  *, class ClassID); /* linkage=_ZNK31IMotionMatchingAnimNodeInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual int GetClipGroupCount(const class IMotionMatchingAnimNodeInstance  *); /* linkage=_ZNK31IMotionMatchingAnimNodeInstance17GetClipGroupCountEv */
	virtual int GetClipCount(const class IMotionMatchingAnimNodeInstance  *, int); /* linkage=_ZNK31IMotionMatchingAnimNodeInstance12GetClipCountEi */
	virtual int GetClipEntryPointCount(const class IMotionMatchingAnimNodeInstance  *, class ClipIndex); /* linkage=_ZNK31IMotionMatchingAnimNodeInstance22GetClipEntryPointCountE9ClipIndex */
	virtual float GetClipEntryPointCycle(const class IMotionMatchingAnimNodeInstance  *, class ClipIndex, int); /* linkage=_ZNK31IMotionMatchingAnimNodeInstance22GetClipEntryPointCycleE9ClipIndexi */
	virtual class ClipIndex GetCurrentClipIndex(const class IMotionMatchingAnimNodeInstance  *); /* linkage=_ZNK31IMotionMatchingAnimNodeInstance19GetCurrentClipIndexEv */
	virtual int GetCurrentEntryPointIndex(const class IMotionMatchingAnimNodeInstance  *); /* linkage=_ZNK31IMotionMatchingAnimNodeInstance25GetCurrentEntryPointIndexEv */
	virtual class HSequence GetCurrentClipSequence(const class IMotionMatchingAnimNodeInstance  *); /* linkage=_ZNK31IMotionMatchingAnimNodeInstance22GetCurrentClipSequenceEv */
	virtual float GetCurrentClipEntryPointCycle(const class IMotionMatchingAnimNodeInstance  *); /* linkage=_ZNK31IMotionMatchingAnimNodeInstance29GetCurrentClipEntryPointCycleEv */
	virtual float GetCurrentClipCycle(const class IMotionMatchingAnimNodeInstance  *); /* linkage=_ZNK31IMotionMatchingAnimNodeInstance19GetCurrentClipCycleEv */
	virtual bool GetCurrentClipLoop(const class IMotionMatchingAnimNodeInstance  *); /* linkage=_ZNK31IMotionMatchingAnimNodeInstance18GetCurrentClipLoopEv */
	virtual bool IsGroupEnabled(const class IMotionMatchingAnimNodeInstance  *, int); /* linkage=_ZNK31IMotionMatchingAnimNodeInstance14IsGroupEnabledEi */
	virtual int GetMetricCount(const class IMotionMatchingAnimNodeInstance  *); /* linkage=_ZNK31IMotionMatchingAnimNodeInstance14GetMetricCountEv */
	virtual class IMotionMetricInstance * GetMetricInstance(class IMotionMatchingAnimNodeInstance *, int); /* linkage=_ZN31IMotionMatchingAnimNodeInstance17GetMetricInstanceEi */
	virtual const class IMotionMetricInstance  * GetMetricInstance(const class IMotionMatchingAnimNodeInstance  *, int); /* linkage=_ZNK31IMotionMatchingAnimNodeInstance17GetMetricInstanceEi */
	virtual float CalculateScore(const class IMotionMatchingAnimNodeInstance  *, class ClipIndex, int); /* linkage=_ZNK31IMotionMatchingAnimNodeInstance14CalculateScoreE9ClipIndexi */
	virtual void GetGoalValues(const class IMotionMatchingAnimNodeInstance  *, int, bool, class CUtlVector<float, CUtlMemory<float, int> > &); /* linkage=_ZNK31IMotionMatchingAnimNodeInstance13GetGoalValuesEibR10CUtlVectorIf10CUtlMemoryIfiEE */
	virtual void GetCurrentValues(const class IMotionMatchingAnimNodeInstance  *, int, bool, class CUtlVector<float, CUtlMemory<float, int> > &); /* linkage=_ZNK31IMotionMatchingAnimNodeInstance16GetCurrentValuesEibR10CUtlVectorIf10CUtlMemoryIfiEE */
	virtual void GetClipValues(const class IMotionMatchingAnimNodeInstance  *, int, class ClipIndex, int, bool, class CUtlVector<float, CUtlMemory<float, int> > &); /* linkage=_ZNK31IMotionMatchingAnimNodeInstance13GetClipValuesEi9ClipIndexibR10CUtlVectorIf10CUtlMemoryIfiEE */
};

// <0117DABE> ../public/animationsystem/imotionmatchinganimnodeinstance.h:51
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 51
	const char   __PRETTY_FUNCTION__; // 44716
} /* size: 0, variables: 2 */

