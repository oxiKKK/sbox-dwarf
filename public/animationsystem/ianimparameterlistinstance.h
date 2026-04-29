
//
// public/animationsystem/ianimparameterlistinstance.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 12
//	classes: 3
//

// <00F79FF8> ../public/animationsystem/ianimparameterlistinstance.h:14
void IAnimParameterInstance::IAnimParameterInstance()
{
} /* size: 0 */

// <00F79FDC> ../public/animationsystem/ianimparameterlistinstance.h:14
inline void IAnimParameterInstance::IAnimParameterInstance()
{
} /* size: 0 */

// <00F79FC5> ../public/animationsystem/ianimparameterlistinstance.h:14
void IAnimParameterInstance::~IAnimParameterInstance()
{
} /* size: 0 */

// <00F79F92> ../public/animationsystem/ianimparameterlistinstance.h:14
inline void IAnimParameterInstance::~IAnimParameterInstance()
{
} /* size: 0 */

// <00F28852> ../public/animationsystem/ianimparameterlistinstance.h:14
// member functions: 42
// member variable: 1
// static member variable: 1
// vtable entries: 15
// class size: 8
class IAnimParameterInstance : public Object {
public:
	/* class Object <ancestor>; */ /* 0 0 */
	void IAnimParameterInstance(IAnimParameterInstance* , IAnimParameterInstance& );
	void IAnimParameterInstance(IAnimParameterInstance* , const IAnimParameterInstance& );
	void IAnimParameterInstance(IAnimParameterInstance* );
private:
	static class CClassInfoT<IAnimParameterInstance> m_classInfoIAnimParameterInstance; /* 0 0 */
	/* ../public/animationsystem/ianimparameterlistinstance.h:16 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:11 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:11 */
	virtual const CClassInfo& GetTypeInfo(const IAnimParameterInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:11 */
	virtual void* CastToBase(IAnimParameterInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:11 */
	virtual const void* CastToBase(const IAnimParameterInstance* , ClassID);
	/* ../public/animationsystem/ianimparameterlistinstance.h:19 */
	virtual CAnimVariant GetValue(const IAnimParameterInstance* );
	/* ../public/animationsystem/ianimparameterlistinstance.h:22 */
	virtual void SetValue(IAnimParameterInstance* , const CAnimVariant& );
	/* ../public/animationsystem/ianimparameterlistinstance.h:25 */
	virtual const CUtlString& GetName(const IAnimParameterInstance* );
	/* ../public/animationsystem/ianimparameterlistinstance.h:28 */
	virtual AnimParamID GetParameterID(const IAnimParameterInstance* );
	/* ../public/animationsystem/ianimparameterlistinstance.h:31 */
	virtual const CClassInfo* GetSourceTypeInfo(const IAnimParameterInstance* );
	/* ../public/animationsystem/ianimparameterlistinstance.h:34 */
	virtual AnimParamType_t GetParameterType(const IAnimParameterInstance* );
	/* ../public/animationsystem/ianimparameterlistinstance.h:37 */
	virtual CAnimVariant GetDefaultValue(const IAnimParameterInstance* );
	/* ../public/animationsystem/ianimparameterlistinstance.h:40 */
	virtual CAnimVariant GetMinValue(const IAnimParameterInstance* );
	/* ../public/animationsystem/ianimparameterlistinstance.h:43 */
	virtual CAnimVariant GetMaxValue(const IAnimParameterInstance* );
	/* ../public/animationsystem/ianimparameterlistinstance.h:48 */
	virtual bool ShouldUseMostRecentValue(const IAnimParameterInstance* );
	/* ../public/animationsystem/ianimparameterlistinstance.h:52 */
	virtual bool IsAutoReset(const IAnimParameterInstance* );
	/* ../public/animationsystem/ianimparameterlistinstance.h:55 */
	virtual AnimParamButton_t GetPreviewButton(const IAnimParameterInstance* );
	virtual void ~IAnimParameterInstance(IAnimParameterInstance* );
	void IAnimParameterInstance(class IAnimParameterInstance *, class IAnimParameterInstance &); /* linkage=_ZN22IAnimParameterInstanceC4EOS_ */
	void IAnimParameterInstance(class IAnimParameterInstance *, const class IAnimParameterInstance  &); /* linkage=_ZN22IAnimParameterInstanceC4ERKS_ */
	void IAnimParameterInstance(class IAnimParameterInstance *); /* linkage=_ZN22IAnimParameterInstanceC4Ev */
	const class ClassID  MyTypeID(void); /* linkage=_ZN22IAnimParameterInstance8MyTypeIDEv */
	/* <f9e3bb> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:11 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN22IAnimParameterInstance10MyTypeInfoEv */
	virtual const class CClassInfo  & GetTypeInfo(const class IAnimParameterInstance  *); /* linkage=_ZNK22IAnimParameterInstance11GetTypeInfoEv */
	virtual void * CastToBase(class IAnimParameterInstance *, class ClassID); /* linkage=_ZN22IAnimParameterInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class IAnimParameterInstance  *, class ClassID); /* linkage=_ZNK22IAnimParameterInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual class CAnimVariant GetValue(const class IAnimParameterInstance  *); /* linkage=_ZNK22IAnimParameterInstance8GetValueEv */
	virtual void SetValue(class IAnimParameterInstance *, const class CAnimVariant  &); /* linkage=_ZN22IAnimParameterInstance8SetValueERK12CAnimVariant */
	virtual const class CUtlString  & GetName(const class IAnimParameterInstance  *); /* linkage=_ZNK22IAnimParameterInstance7GetNameEv */
	virtual class AnimParamID GetParameterID(const class IAnimParameterInstance  *); /* linkage=_ZNK22IAnimParameterInstance14GetParameterIDEv */
	virtual const class CClassInfo  * GetSourceTypeInfo(const class IAnimParameterInstance  *); /* linkage=_ZNK22IAnimParameterInstance17GetSourceTypeInfoEv */
	virtual enum AnimParamType_t GetParameterType(const class IAnimParameterInstance  *); /* linkage=_ZNK22IAnimParameterInstance16GetParameterTypeEv */
	virtual class CAnimVariant GetDefaultValue(const class IAnimParameterInstance  *); /* linkage=_ZNK22IAnimParameterInstance15GetDefaultValueEv */
	virtual class CAnimVariant GetMinValue(const class IAnimParameterInstance  *); /* linkage=_ZNK22IAnimParameterInstance11GetMinValueEv */
	virtual class CAnimVariant GetMaxValue(const class IAnimParameterInstance  *); /* linkage=_ZNK22IAnimParameterInstance11GetMaxValueEv */
	virtual bool ShouldUseMostRecentValue(const class IAnimParameterInstance  *); /* linkage=_ZNK22IAnimParameterInstance24ShouldUseMostRecentValueEv */
	virtual bool IsAutoReset(const class IAnimParameterInstance  *); /* linkage=_ZNK22IAnimParameterInstance11IsAutoResetEv */
	virtual enum AnimParamButton_t GetPreviewButton(const class IAnimParameterInstance  *); /* linkage=_ZNK22IAnimParameterInstance16GetPreviewButtonEv */
	virtual void ~IAnimParameterInstance(class IAnimParameterInstance *); /* linkage=_ZN22IAnimParameterInstanceD4Ev */
};

// <00F966E2> ../public/animationsystem/ianimparameterlistinstance.h:16
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 16
	const char   __PRETTY_FUNCTION__; // 38976
} /* size: 0, variables: 2 */

// <00F78E02> ../public/animationsystem/ianimparameterlistinstance.h:59
void IEnumAnimParameterInstance::IEnumAnimParameterInstance()
{
} /* size: 0 */

// <00F78DE6> ../public/animationsystem/ianimparameterlistinstance.h:59
inline void IEnumAnimParameterInstance::IEnumAnimParameterInstance()
{
} /* size: 0 */

// <00F78DCF> ../public/animationsystem/ianimparameterlistinstance.h:59
void IEnumAnimParameterInstance::~IEnumAnimParameterInstance()
{
} /* size: 0 */

// <00F78D9C> ../public/animationsystem/ianimparameterlistinstance.h:59
inline void IEnumAnimParameterInstance::~IEnumAnimParameterInstance()
{
} /* size: 0 */

// <00F28BA5> ../public/animationsystem/ianimparameterlistinstance.h:59
// member functions: 20
// member variable: 1
// static member variable: 1
// vtable entries: 4
// class size: 8
class IEnumAnimParameterInstance : public Object {
public:
	/* class Object <ancestor>; */ /* 0 0 */
	void IEnumAnimParameterInstance(IEnumAnimParameterInstance* , IEnumAnimParameterInstance& );
	void IEnumAnimParameterInstance(IEnumAnimParameterInstance* , const IEnumAnimParameterInstance& );
	void IEnumAnimParameterInstance(IEnumAnimParameterInstance* );
private:
	static class CClassInfoT<IEnumAnimParameterInstance> m_classInfoIEnumAnimParameterInstance; /* 0 0 */
	/* ../public/animationsystem/ianimparameterlistinstance.h:61 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:14 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:14 */
	virtual const CClassInfo& GetTypeInfo(const IEnumAnimParameterInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:14 */
	virtual void* CastToBase(IEnumAnimParameterInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:14 */
	virtual const void* CastToBase(const IEnumAnimParameterInstance* , ClassID);
	/* ../public/animationsystem/ianimparameterlistinstance.h:64 */
	virtual const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& GetOptionNames(const IEnumAnimParameterInstance* );
	virtual void ~IEnumAnimParameterInstance(IEnumAnimParameterInstance* );
	void IEnumAnimParameterInstance(class IEnumAnimParameterInstance *, class IEnumAnimParameterInstance &); /* linkage=_ZN26IEnumAnimParameterInstanceC4EOS_ */
	void IEnumAnimParameterInstance(class IEnumAnimParameterInstance *, const class IEnumAnimParameterInstance  &); /* linkage=_ZN26IEnumAnimParameterInstanceC4ERKS_ */
	void IEnumAnimParameterInstance(class IEnumAnimParameterInstance *); /* linkage=_ZN26IEnumAnimParameterInstanceC4Ev */
	const class ClassID  MyTypeID(void); /* linkage=_ZN26IEnumAnimParameterInstance8MyTypeIDEv */
	/* <f9e3d9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:14 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN26IEnumAnimParameterInstance10MyTypeInfoEv */
	virtual const class CClassInfo  & GetTypeInfo(const class IEnumAnimParameterInstance  *); /* linkage=_ZNK26IEnumAnimParameterInstance11GetTypeInfoEv */
	virtual void * CastToBase(class IEnumAnimParameterInstance *, class ClassID); /* linkage=_ZN26IEnumAnimParameterInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class IEnumAnimParameterInstance  *, class ClassID); /* linkage=_ZNK26IEnumAnimParameterInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual const class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >  & GetOptionNames(const class IEnumAnimParameterInstance  *); /* linkage=_ZNK26IEnumAnimParameterInstance14GetOptionNamesEv */
	virtual void ~IEnumAnimParameterInstance(class IEnumAnimParameterInstance *); /* linkage=_ZN26IEnumAnimParameterInstanceD4Ev */
};

// <00F966B1> ../public/animationsystem/ianimparameterlistinstance.h:61
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 61
	const char   __PRETTY_FUNCTION__; // 39084
} /* size: 0, variables: 2 */

// <00F78545> ../public/animationsystem/ianimparameterlistinstance.h:69
void IAnimParameterListInstance::IAnimParameterListInstance()
{
} /* size: 0 */

// <00F78529> ../public/animationsystem/ianimparameterlistinstance.h:69
inline void IAnimParameterListInstance::IAnimParameterListInstance()
{
} /* size: 0 */

// <00F30A2D> ../public/animationsystem/ianimparameterlistinstance.h:69
// member functions: 26
// member variable: 1
// vtable entries: 9
// class size: 8
class IAnimParameterListInstance {
	void IAnimParameterListInstance(IAnimParameterListInstance* , IAnimParameterListInstance& );
	void IAnimParameterListInstance(IAnimParameterListInstance* , const IAnimParameterListInstance& );
	void IAnimParameterListInstance(IAnimParameterListInstance* );
	void ~IAnimParameterListInstance(IAnimParameterListInstance* );
	int ()(void) * * _vptr.IAnimParameterListInstance; /* 0 8 */
	/* ../public/animationsystem/ianimparameterlistinstance.h:73 */
	virtual int Count(const IAnimParameterListInstance* );
	/* ../public/animationsystem/ianimparameterlistinstance.h:76 */
	virtual IAnimParameterInstance* GetParameter(IAnimParameterListInstance* , int);
	/* ../public/animationsystem/ianimparameterlistinstance.h:77 */
	virtual const IAnimParameterInstance* GetParameter(const IAnimParameterListInstance* , int);
	/* ../public/animationsystem/ianimparameterlistinstance.h:80 */
	virtual IAnimParameterInstance* GetParameter(IAnimParameterListInstance* , AnimParamID);
	/* ../public/animationsystem/ianimparameterlistinstance.h:81 */
	virtual const IAnimParameterInstance* GetParameter(const IAnimParameterListInstance* , AnimParamID);
	/* ../public/animationsystem/ianimparameterlistinstance.h:84 */
	virtual IAnimParameterInstance* GetParameter(IAnimParameterListInstance* , const CUtlString& );
	/* ../public/animationsystem/ianimparameterlistinstance.h:85 */
	virtual const IAnimParameterInstance* GetParameter(const IAnimParameterListInstance* , const CUtlString& );
	/* ../public/animationsystem/ianimparameterlistinstance.h:87 */
	virtual void Save(const IAnimParameterListInstance* , KeyValues3* );
	/* ../public/animationsystem/ianimparameterlistinstance.h:88 */
	virtual void Restore(IAnimParameterListInstance* , const KeyValues3* );
	void IAnimParameterListInstance(class IAnimParameterListInstance *, class IAnimParameterListInstance &); /* linkage=_ZN26IAnimParameterListInstanceC4EOS_ */
	void IAnimParameterListInstance(class IAnimParameterListInstance *, const class IAnimParameterListInstance  &); /* linkage=_ZN26IAnimParameterListInstanceC4ERKS_ */
	void IAnimParameterListInstance(class IAnimParameterListInstance *); /* linkage=_ZN26IAnimParameterListInstanceC4Ev */
	void ~IAnimParameterListInstance(class IAnimParameterListInstance *); /* linkage=_ZN26IAnimParameterListInstanceD4Ev */
	virtual int Count(const class IAnimParameterListInstance  *); /* linkage=_ZNK26IAnimParameterListInstance5CountEv */
	virtual class IAnimParameterInstance * GetParameter(class IAnimParameterListInstance *, int); /* linkage=_ZN26IAnimParameterListInstance12GetParameterEi */
	virtual const class IAnimParameterInstance  * GetParameter(const class IAnimParameterListInstance  *, int); /* linkage=_ZNK26IAnimParameterListInstance12GetParameterEi */
	virtual class IAnimParameterInstance * GetParameter(class IAnimParameterListInstance *, class AnimParamID); /* linkage=_ZN26IAnimParameterListInstance12GetParameterE11AnimParamID */
	virtual const class IAnimParameterInstance  * GetParameter(const class IAnimParameterListInstance  *, class AnimParamID); /* linkage=_ZNK26IAnimParameterListInstance12GetParameterE11AnimParamID */
	virtual class IAnimParameterInstance * GetParameter(class IAnimParameterListInstance *, const class CUtlString  &); /* linkage=_ZN26IAnimParameterListInstance12GetParameterERK10CUtlString */
	virtual const class IAnimParameterInstance  * GetParameter(const class IAnimParameterListInstance  *, const class CUtlString  &); /* linkage=_ZNK26IAnimParameterListInstance12GetParameterERK10CUtlString */
	virtual void Save(const class IAnimParameterListInstance  *, class KeyValues3 *); /* linkage=_ZNK26IAnimParameterListInstance4SaveEP10KeyValues3 */
	virtual void Restore(class IAnimParameterListInstance *, const class KeyValues3  *); /* linkage=_ZN26IAnimParameterListInstance7RestoreEPK10KeyValues3 */
};

