
//
// public/animationsystem/ienumanimparameter.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//
//	functions: 7
//	class: 1
//

// <014C0E4D> ../public/animationsystem/ienumanimparameter.h:10
void IEnumAnimParameter::IEnumAnimParameter()
{
} /* size: 0 */

// <014C0E31> ../public/animationsystem/ienumanimparameter.h:10
inline void IEnumAnimParameter::IEnumAnimParameter()
{
} /* size: 0 */

// <0078FD0F> ../public/animationsystem/ienumanimparameter.h:10
inline void IEnumAnimParameter::operator=(const IEnumAnimParameter &)
{
} /* size: 0 */

// <014AAF31> ../public/animationsystem/ienumanimparameter.h:10
// member functions: 20
// member variable: 1
// static member variable: 1
// vtable entries: 4
// class size: 8
class IEnumAnimParameter {
	void IEnumAnimParameter(IEnumAnimParameter* , IEnumAnimParameter& );
	void IEnumAnimParameter(IEnumAnimParameter* , const IEnumAnimParameter& );
	void IEnumAnimParameter(IEnumAnimParameter* );
	void ~IEnumAnimParameter(IEnumAnimParameter* );
	int ()(void) * * _vptr.IEnumAnimParameter; /* 0 8 */
private:
	static class CClassInfoT<IEnumAnimParameter> m_classInfoIEnumAnimParameter; /* 0 0 */
	/* ../public/animationsystem/ienumanimparameter.h:12 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.cpp:8 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.cpp:8 */
	virtual const CClassInfo& GetTypeInfo(const IEnumAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.cpp:8 */
	virtual void* CastToBase(IEnumAnimParameter* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.cpp:8 */
	virtual const void* CastToBase(const IEnumAnimParameter* , ClassID);
	/* ../public/animationsystem/ienumanimparameter.h:16 */
	virtual const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& GetOptionNames(const IEnumAnimParameter* );
	const class ClassID  MyTypeID(void); /* linkage=_ZN18IEnumAnimParameter8MyTypeIDEv */
	void IEnumAnimParameter(class IEnumAnimParameter *, class IEnumAnimParameter &); /* linkage=_ZN18IEnumAnimParameterC4EOS_ */
	void IEnumAnimParameter(class IEnumAnimParameter *, const class IEnumAnimParameter  &); /* linkage=_ZN18IEnumAnimParameterC4ERKS_ */
	void IEnumAnimParameter(class IEnumAnimParameter *); /* linkage=_ZN18IEnumAnimParameterC4Ev */
	void ~IEnumAnimParameter(class IEnumAnimParameter *); /* linkage=_ZN18IEnumAnimParameterD4Ev */
	/* <14c5450> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.cpp:8 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN18IEnumAnimParameter10MyTypeInfoEv */
	virtual const class CClassInfo  & GetTypeInfo(const class IEnumAnimParameter  *); /* linkage=_ZNK18IEnumAnimParameter11GetTypeInfoEv */
	virtual void * CastToBase(class IEnumAnimParameter *, class ClassID); /* linkage=_ZN18IEnumAnimParameter10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class IEnumAnimParameter  *, class ClassID); /* linkage=_ZNK18IEnumAnimParameter10CastToBaseEN10Reflection7ClassIDE */
	virtual const class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >  & GetOptionNames(const class IEnumAnimParameter  *); /* linkage=_ZNK18IEnumAnimParameter14GetOptionNamesEv */
};

// <01323864> ../public/animationsystem/ienumanimparameter.h:12
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 12
	const char   __PRETTY_FUNCTION__; // 48142
} /* size: 0, variables: 2 */

// <01A72764> ../public/animationsystem/ienumanimparameter.h:12
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 12
	const char   __PRETTY_FUNCTION__; // 23062
} /* size: 0, variables: 2 */

// <014C166F> ../public/animationsystem/ienumanimparameter.h:12
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 12
	const char   __PRETTY_FUNCTION__; // 18641
} /* size: 0, variables: 2 */

// <00F7BB65> ../public/animationsystem/ienumanimparameter.h:12
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 12
	const char   __PRETTY_FUNCTION__; // 38868
} /* size: 0, variables: 2 */

