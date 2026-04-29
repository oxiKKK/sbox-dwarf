
//
// public/animationsystem/ianimmotor.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <014702DE> ../public/animationsystem/ianimmotor.h:15
void IAnimMotor::IAnimMotor()
{
} /* size: 0 */

// <014702C2> ../public/animationsystem/ianimmotor.h:15
inline void IAnimMotor::IAnimMotor()
{
} /* size: 0 */

// <014702AB> ../public/animationsystem/ianimmotor.h:15
void IAnimMotor::~IAnimMotor()
{
} /* size: 0 */

// <01470278> ../public/animationsystem/ianimmotor.h:15
inline void IAnimMotor::~IAnimMotor()
{
} /* size: 0 */

// <00758899> ../public/animationsystem/ianimmotor.h:15
inline void IAnimMotor::operator=(const IAnimMotor &)
{
} /* size: 0 */

// <0144D422> ../public/animationsystem/ianimmotor.h:15
// member functions: 25
// member variable: 1
// static member variable: 1
// vtable entries: 6
// class size: 8
class IAnimMotor : public Object {
public:
	/* class Object <ancestor>; */ /* 0 0 */
	void IAnimMotor(IAnimMotor* , IAnimMotor& );
	void IAnimMotor(IAnimMotor* , const IAnimMotor& );
	void IAnimMotor(IAnimMotor* );
private:
	static class CClassInfoT<IAnimMotor> m_classInfoIAnimMotor; /* 0 0 */
	/* ../public/animationsystem/ianimmotor.h:17 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorbase.cpp:8 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorbase.cpp:8 */
	virtual const CClassInfo& GetTypeInfo(const IAnimMotor* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorbase.cpp:8 */
	virtual void* CastToBase(IAnimMotor* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorbase.cpp:8 */
	virtual const void* CastToBase(const IAnimMotor* , ClassID);
	/* ../public/animationsystem/ianimmotor.h:20 */
	virtual const CUtlString& GetName(const IAnimMotor* );
	/* ../public/animationsystem/ianimmotor.h:23 */
	virtual void SetName(IAnimMotor* , const CUtlString& );
	/* ../public/animationsystem/ianimmotor.h:26 */
	virtual bool IsDefault(const IAnimMotor* );
	virtual void ~IAnimMotor(IAnimMotor* );
	virtual const void  * CastToBase(const class IAnimMotor  *, class ClassID); /* linkage=_ZNK10IAnimMotor10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class IAnimMotor *, class ClassID); /* linkage=_ZN10IAnimMotor10CastToBaseEN10Reflection7ClassIDE */
	virtual const class CClassInfo  & GetTypeInfo(const class IAnimMotor  *); /* linkage=_ZNK10IAnimMotor11GetTypeInfoEv */
	virtual void ~IAnimMotor(class IAnimMotor *); /* linkage=_ZN10IAnimMotorD4Ev */
	class IAnimMotor & operator=(class IAnimMotor *, const class IAnimMotor  &); /* linkage=_ZN10IAnimMotoraSERKS_ */
	void IAnimMotor(class IAnimMotor *, class IAnimMotor &); /* linkage=_ZN10IAnimMotorC4EOS_ */
	void IAnimMotor(class IAnimMotor *, const class IAnimMotor  &); /* linkage=_ZN10IAnimMotorC4ERKS_ */
	void IAnimMotor(class IAnimMotor *); /* linkage=_ZN10IAnimMotorC4Ev */
	const class ClassID  MyTypeID(void); /* linkage=_ZN10IAnimMotor8MyTypeIDEv */
	/* <147256a> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorbase.cpp:8 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN10IAnimMotor10MyTypeInfoEv */
	virtual const class CUtlString  & GetName(const class IAnimMotor  *); /* linkage=_ZNK10IAnimMotor7GetNameEv */
	virtual void SetName(class IAnimMotor *, const class CUtlString  &); /* linkage=_ZN10IAnimMotor7SetNameERK10CUtlString */
	virtual bool IsDefault(const class IAnimMotor  *); /* linkage=_ZNK10IAnimMotor9IsDefaultEv */
};

// <0147137F> ../public/animationsystem/ianimmotor.h:17
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 17
	const char   __PRETTY_FUNCTION__; // 8531
} /* size: 0, variables: 2 */

