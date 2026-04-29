
//
// public/animationsystem/imotionmetricinstance.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 5
//	class: 1
//

// <014061E2> ../public/animationsystem/imotionmetricinstance.h:12
void IMotionMetricInstance::~IMotionMetricInstance()
{
} /* size: 0 */

// <014061AF> ../public/animationsystem/imotionmetricinstance.h:12
inline void IMotionMetricInstance::~IMotionMetricInstance()
{
} /* size: 0 */

// <013FAFC4> ../public/animationsystem/imotionmetricinstance.h:12
void IMotionMetricInstance::IMotionMetricInstance()
{
} /* size: 0 */

// <013FAFA8> ../public/animationsystem/imotionmetricinstance.h:12
inline void IMotionMetricInstance::IMotionMetricInstance()
{
} /* size: 0 */

// <013CE217> ../public/animationsystem/imotionmetricinstance.h:12
// member functions: 28
// member variable: 1
// static member variable: 1
// vtable entries: 8
// class size: 8
class IMotionMetricInstance : public Object {
public:
	/* class Object <ancestor>; */ /* 0 0 */
	void IMotionMetricInstance(IMotionMetricInstance* , IMotionMetricInstance& );
	void IMotionMetricInstance(IMotionMetricInstance* , const IMotionMetricInstance& );
	void IMotionMetricInstance(IMotionMetricInstance* );
private:
	static class CClassInfoT<IMotionMetricInstance> m_classInfoIMotionMetricInstance; /* 0 0 */
	/* ../public/animationsystem/imotionmetricinstance.h:14 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.cpp:8 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.cpp:8 */
	virtual const CClassInfo& GetTypeInfo(const IMotionMetricInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.cpp:8 */
	virtual void* CastToBase(IMotionMetricInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.cpp:8 */
	virtual const void* CastToBase(const IMotionMetricInstance* , ClassID);
	/* ../public/animationsystem/imotionmetricinstance.h:18 */
	virtual CUtlString GetName(const IMotionMetricInstance* );
	/* ../public/animationsystem/imotionmetricinstance.h:21 */
	virtual int GetDimensionCount(const IMotionMetricInstance* );
	/* ../public/animationsystem/imotionmetricinstance.h:24 */
	virtual float GetWeight(const IMotionMetricInstance* );
	/* ../public/animationsystem/imotionmetricinstance.h:28 */
	virtual float GetMean(const IMotionMetricInstance* , int);
	/* ../public/animationsystem/imotionmetricinstance.h:32 */
	virtual float GetStandardDeviation(const IMotionMetricInstance* , int);
	virtual void ~IMotionMetricInstance(IMotionMetricInstance* );
	void IMotionMetricInstance(class IMotionMetricInstance *, class IMotionMetricInstance &); /* linkage=_ZN21IMotionMetricInstanceC4EOS_ */
	void IMotionMetricInstance(class IMotionMetricInstance *, const class IMotionMetricInstance  &); /* linkage=_ZN21IMotionMetricInstanceC4ERKS_ */
	void IMotionMetricInstance(class IMotionMetricInstance *); /* linkage=_ZN21IMotionMetricInstanceC4Ev */
	const class ClassID  MyTypeID(void); /* linkage=_ZN21IMotionMetricInstance8MyTypeIDEv */
	/* <140ee67> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.cpp:8 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN21IMotionMetricInstance10MyTypeInfoEv */
	virtual const class CClassInfo  & GetTypeInfo(const class IMotionMetricInstance  *); /* linkage=_ZNK21IMotionMetricInstance11GetTypeInfoEv */
	virtual void * CastToBase(class IMotionMetricInstance *, class ClassID); /* linkage=_ZN21IMotionMetricInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class IMotionMetricInstance  *, class ClassID); /* linkage=_ZNK21IMotionMetricInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual class CUtlString GetName(const class IMotionMetricInstance  *); /* linkage=_ZNK21IMotionMetricInstance7GetNameEv */
	virtual int GetDimensionCount(const class IMotionMetricInstance  *); /* linkage=_ZNK21IMotionMetricInstance17GetDimensionCountEv */
	virtual float GetWeight(const class IMotionMetricInstance  *); /* linkage=_ZNK21IMotionMetricInstance9GetWeightEv */
	virtual float GetMean(const class IMotionMetricInstance  *, int); /* linkage=_ZNK21IMotionMetricInstance7GetMeanEi */
	virtual float GetStandardDeviation(const class IMotionMetricInstance  *, int); /* linkage=_ZNK21IMotionMetricInstance20GetStandardDeviationEi */
	virtual void ~IMotionMetricInstance(class IMotionMetricInstance *); /* linkage=_ZN21IMotionMetricInstanceD4Ev */
};

// <0140A9A1> ../public/animationsystem/imotionmetricinstance.h:14
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 14
	const char   __PRETTY_FUNCTION__; // 46942
} /* size: 0, variables: 2 */

