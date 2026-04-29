
//
// public/animationsystem/ipathmetricinstance.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 3
//	class: 1
//

// <013F9C19> ../public/animationsystem/ipathmetricinstance.h:12
void IPathMetricInstance::IPathMetricInstance()
{
} /* size: 0 */

// <013F9BFD> ../public/animationsystem/ipathmetricinstance.h:12
inline void IPathMetricInstance::IPathMetricInstance()
{
} /* size: 0 */

// <013CE843> ../public/animationsystem/ipathmetricinstance.h:12
// member functions: 22
// member variable: 1
// static member variable: 1
// vtable entries: 5
// class size: 8
class IPathMetricInstance {
	void IPathMetricInstance(IPathMetricInstance* , IPathMetricInstance& );
	void IPathMetricInstance(IPathMetricInstance* , const IPathMetricInstance& );
	void IPathMetricInstance(IPathMetricInstance* );
	void ~IPathMetricInstance(IPathMetricInstance* );
	int ()(void) * * _vptr.IPathMetricInstance; /* 0 8 */
private:
	static class CClassInfoT<IPathMetricInstance> m_classInfoIPathMetricInstance; /* 0 0 */
	/* ../public/animationsystem/ipathmetricinstance.h:14 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricinstance.cpp:10 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricinstance.cpp:10 */
	virtual const CClassInfo& GetTypeInfo(const IPathMetricInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricinstance.cpp:10 */
	virtual void* CastToBase(IPathMetricInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricinstance.cpp:10 */
	virtual const void* CastToBase(const IPathMetricInstance* , ClassID);
	/* ../public/animationsystem/ipathmetricinstance.h:17 */
	virtual int GetSampleCount(const IPathMetricInstance* );
	/* ../public/animationsystem/ipathmetricinstance.h:20 */
	virtual float GetSampleTime(const IPathMetricInstance* , int);
	void IPathMetricInstance(class IPathMetricInstance *, class IPathMetricInstance &); /* linkage=_ZN19IPathMetricInstanceC4EOS_ */
	void IPathMetricInstance(class IPathMetricInstance *, const class IPathMetricInstance  &); /* linkage=_ZN19IPathMetricInstanceC4ERKS_ */
	void IPathMetricInstance(class IPathMetricInstance *); /* linkage=_ZN19IPathMetricInstanceC4Ev */
	void ~IPathMetricInstance(class IPathMetricInstance *); /* linkage=_ZN19IPathMetricInstanceD4Ev */
	const class ClassID  MyTypeID(void); /* linkage=_ZN19IPathMetricInstance8MyTypeIDEv */
	/* <140f056> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricinstance.cpp:10 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN19IPathMetricInstance10MyTypeInfoEv */
	virtual const class CClassInfo  & GetTypeInfo(const class IPathMetricInstance  *); /* linkage=_ZNK19IPathMetricInstance11GetTypeInfoEv */
	virtual void * CastToBase(class IPathMetricInstance *, class ClassID); /* linkage=_ZN19IPathMetricInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class IPathMetricInstance  *, class ClassID); /* linkage=_ZNK19IPathMetricInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual int GetSampleCount(const class IPathMetricInstance  *); /* linkage=_ZNK19IPathMetricInstance14GetSampleCountEv */
	virtual float GetSampleTime(const class IPathMetricInstance  *, int); /* linkage=_ZNK19IPathMetricInstance13GetSampleTimeEi */
};

// <013FA3CA> ../public/animationsystem/ipathmetricinstance.h:14
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 14
	const char   __PRETTY_FUNCTION__; // 46888
} /* size: 0, variables: 2 */

