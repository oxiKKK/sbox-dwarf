
//
// public/animationsystem/imotionmetric.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <0140A846> ../public/animationsystem/imotionmetric.h:24
void IMotionMetric::~IMotionMetric()
{
} /* size: 0 */

// <0140A813> ../public/animationsystem/imotionmetric.h:24
inline void IMotionMetric::~IMotionMetric()
{
} /* size: 0 */

// <014027AC> ../public/animationsystem/imotionmetric.h:24
void IMotionMetric::IMotionMetric()
{
} /* size: 0 */

// <01402790> ../public/animationsystem/imotionmetric.h:24
inline void IMotionMetric::IMotionMetric()
{
} /* size: 0 */

// <00718184> ../public/animationsystem/imotionmetric.h:24
inline void IMotionMetric::operator=(const IMotionMetric &)
{
} /* size: 0 */

// <013B1420> ../public/animationsystem/imotionmetric.h:24
// member functions: 29
// member variable: 1
// static member variable: 1
// vtable entries: 8
// class size: 8
class IMotionMetric : public Object {
public:
	/* class Object <ancestor>; */ /* 0 0 */
	void IMotionMetric(IMotionMetric* , IMotionMetric& );
	void IMotionMetric(IMotionMetric* , const IMotionMetric& );
	void IMotionMetric(IMotionMetric* );
private:
	static class CClassInfoT<IMotionMetric> m_classInfoIMotionMetric; /* 0 0 */
	/* ../public/animationsystem/imotionmetric.h:26 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricbase.cpp:8 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricbase.cpp:8 */
	virtual const CClassInfo& GetTypeInfo(const IMotionMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricbase.cpp:8 */
	virtual void* CastToBase(IMotionMetric* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricbase.cpp:8 */
	virtual const void* CastToBase(const IMotionMetric* , ClassID);
	/* ../public/animationsystem/imotionmetric.h:30 */
	virtual CUtlString GetUIName(const IMotionMetric* );
	/* ../public/animationsystem/imotionmetric.h:33 */
	virtual int GetDimensionCount(const IMotionMetric* );
	/* ../public/animationsystem/imotionmetric.h:36 */
	virtual MotionMetricCategory GetCategory(const IMotionMetric* );
	/* ../public/animationsystem/imotionmetric.h:39 */
	virtual float GetWeight(const IMotionMetric* );
	/* ../public/animationsystem/imotionmetric.h:40 */
	virtual void SetWeight(IMotionMetric* , float);
	virtual void ~IMotionMetric(IMotionMetric* );
	virtual const void  * CastToBase(const class IMotionMetric  *, class ClassID); /* linkage=_ZNK13IMotionMetric10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class IMotionMetric *, class ClassID); /* linkage=_ZN13IMotionMetric10CastToBaseEN10Reflection7ClassIDE */
	virtual const class CClassInfo  & GetTypeInfo(const class IMotionMetric  *); /* linkage=_ZNK13IMotionMetric11GetTypeInfoEv */
	class IMotionMetric & operator=(class IMotionMetric *, const class IMotionMetric  &); /* linkage=_ZN13IMotionMetricaSERKS_ */
	virtual void ~IMotionMetric(class IMotionMetric *); /* linkage=_ZN13IMotionMetricD4Ev */
	void IMotionMetric(class IMotionMetric *, class IMotionMetric &); /* linkage=_ZN13IMotionMetricC4EOS_ */
	void IMotionMetric(class IMotionMetric *, const class IMotionMetric  &); /* linkage=_ZN13IMotionMetricC4ERKS_ */
	void IMotionMetric(class IMotionMetric *); /* linkage=_ZN13IMotionMetricC4Ev */
	const class ClassID  MyTypeID(void); /* linkage=_ZN13IMotionMetric8MyTypeIDEv */
	/* <140edd7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricbase.cpp:8 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN13IMotionMetric10MyTypeInfoEv */
	virtual class CUtlString GetUIName(const class IMotionMetric  *); /* linkage=_ZNK13IMotionMetric9GetUINameEv */
	virtual int GetDimensionCount(const class IMotionMetric  *); /* linkage=_ZNK13IMotionMetric17GetDimensionCountEv */
	virtual enum MotionMetricCategory GetCategory(const class IMotionMetric  *); /* linkage=_ZNK13IMotionMetric11GetCategoryEv */
	virtual float GetWeight(const class IMotionMetric  *); /* linkage=_ZNK13IMotionMetric9GetWeightEv */
	virtual void SetWeight(class IMotionMetric *, float); /* linkage=_ZN13IMotionMetric9SetWeightEf */
};

// <0140B445> ../public/animationsystem/imotionmetric.h:26
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 26
	const char   __PRETTY_FUNCTION__; // 46741
} /* size: 0, variables: 2 */

