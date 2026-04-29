
//
// public/animationsystem/ianimmotorinstance.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	classes: 2
//

// <01190D94> ../public/animationsystem/ianimmotorinstance.h:20
inline void Get(ISchemaSystemTypeScope* pTypeScope)
{
} /* size: 0 */

// <001F33A1> ../public/animationsystem/ianimmotorinstance.h:20
// member functions: 2
// class size: 1
class CSchemaTypeOf<FacingMode> {
	/* ../public/animationsystem/ianimmotorinstance.h:20 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
	/* ../public/animationsystem/ianimmotorinstance.h:20 */
	const char* GetEnumName(void);
};

// <0146F685> ../public/animationsystem/ianimmotorinstance.h:28
void IAnimMotorInstance::IAnimMotorInstance()
{
} /* size: 0 */

// <0146F669> ../public/animationsystem/ianimmotorinstance.h:28
inline void IAnimMotorInstance::IAnimMotorInstance()
{
} /* size: 0 */

// <0146F652> ../public/animationsystem/ianimmotorinstance.h:28
void IAnimMotorInstance::~IAnimMotorInstance()
{
} /* size: 0 */

// <0146F61F> ../public/animationsystem/ianimmotorinstance.h:28
inline void IAnimMotorInstance::~IAnimMotorInstance()
{
} /* size: 0 */

// <014511E4> ../public/animationsystem/ianimmotorinstance.h:28
// member functions: 22
// member variable: 1
// static member variable: 1
// vtable entries: 5
// class size: 8
class IAnimMotorInstance : public Object {
public:
	/* class Object <ancestor>; */ /* 0 0 */
	void IAnimMotorInstance(IAnimMotorInstance* , IAnimMotorInstance& );
	void IAnimMotorInstance(IAnimMotorInstance* , const IAnimMotorInstance& );
	void IAnimMotorInstance(IAnimMotorInstance* );
private:
	static class CClassInfoT<IAnimMotorInstance> m_classInfoIAnimMotorInstance; /* 0 0 */
	/* ../public/animationsystem/ianimmotorinstance.h:30 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorinstance.cpp:8 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorinstance.cpp:8 */
	virtual const CClassInfo& GetTypeInfo(const IAnimMotorInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorinstance.cpp:8 */
	virtual void* CastToBase(IAnimMotorInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorinstance.cpp:8 */
	virtual const void* CastToBase(const IAnimMotorInstance* , ClassID);
	/* ../public/animationsystem/ianimmotorinstance.h:33 */
	virtual const CUtlString& GetName(const IAnimMotorInstance* );
	/* ../public/animationsystem/ianimmotorinstance.h:36 */
	virtual bool IsDefault(const IAnimMotorInstance* );
	virtual void ~IAnimMotorInstance(IAnimMotorInstance* );
	void IAnimMotorInstance(class IAnimMotorInstance *, class IAnimMotorInstance &); /* linkage=_ZN18IAnimMotorInstanceC4EOS_ */
	void IAnimMotorInstance(class IAnimMotorInstance *, const class IAnimMotorInstance  &); /* linkage=_ZN18IAnimMotorInstanceC4ERKS_ */
	void IAnimMotorInstance(class IAnimMotorInstance *); /* linkage=_ZN18IAnimMotorInstanceC4Ev */
	const class ClassID  MyTypeID(void); /* linkage=_ZN18IAnimMotorInstance8MyTypeIDEv */
	/* <14725d7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorinstance.cpp:8 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN18IAnimMotorInstance10MyTypeInfoEv */
	virtual const class CClassInfo  & GetTypeInfo(const class IAnimMotorInstance  *); /* linkage=_ZNK18IAnimMotorInstance11GetTypeInfoEv */
	virtual void * CastToBase(class IAnimMotorInstance *, class ClassID); /* linkage=_ZN18IAnimMotorInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class IAnimMotorInstance  *, class ClassID); /* linkage=_ZNK18IAnimMotorInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual const class CUtlString  & GetName(const class IAnimMotorInstance  *); /* linkage=_ZNK18IAnimMotorInstance7GetNameEv */
	virtual bool IsDefault(const class IAnimMotorInstance  *); /* linkage=_ZNK18IAnimMotorInstance9IsDefaultEv */
	virtual void ~IAnimMotorInstance(class IAnimMotorInstance *); /* linkage=_ZN18IAnimMotorInstanceD4Ev */
};

// <0146FF2F> ../public/animationsystem/ianimmotorinstance.h:30
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 30
	const char   __PRETTY_FUNCTION__; // 8717
} /* size: 0, variables: 2 */

