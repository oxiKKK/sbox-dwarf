
//
// public/animationsystem/ianimparameterlist.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 9
//	classes: 4
//

// <00793A63> ../public/animationsystem/ianimparameterlist.h:30
inline void Get(ISchemaSystemTypeScope* pTypeScope)
{
} /* size: 0 */

// <001F32D3> ../public/animationsystem/ianimparameterlist.h:30
// member functions: 2
// class size: 1
class CSchemaTypeOf<AnimParamButton_t> {
	/* ../public/animationsystem/ianimparameterlist.h:30 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
	/* ../public/animationsystem/ianimparameterlist.h:30 */
	const char* GetEnumName(void);
};

// <014C2BCA> ../public/animationsystem/ianimparameterlist.h:35
void IAnimParameter::IAnimParameter()
{
} /* size: 0 */

// <014C2BAE> ../public/animationsystem/ianimparameterlist.h:35
inline void IAnimParameter::IAnimParameter()
{
} /* size: 0 */

// <014C2B97> ../public/animationsystem/ianimparameterlist.h:35
void IAnimParameter::~IAnimParameter()
{
} /* size: 0 */

// <014C2B64> ../public/animationsystem/ianimparameterlist.h:35
inline void IAnimParameter::~IAnimParameter()
{
} /* size: 0 */

// <00790B8E> ../public/animationsystem/ianimparameterlist.h:35
inline void IAnimParameter::operator=(const IAnimParameter &)
{
} /* size: 0 */

// <014A840A> ../public/animationsystem/ianimparameterlist.h:35
// member functions: 41
// member variable: 1
// static member variable: 1
// vtable entries: 14
// class size: 8
class IAnimParameter : public Object {
public:
	/* class Object <ancestor>; */ /* 0 0 */
	void IAnimParameter(IAnimParameter* , IAnimParameter& );
	void IAnimParameter(IAnimParameter* , const IAnimParameter& );
	void IAnimParameter(IAnimParameter* );
private:
	static class CClassInfoT<IAnimParameter> m_classInfoIAnimParameter; /* 0 0 */
	/* ../public/animationsystem/ianimparameterlist.h:37 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.cpp:9 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.cpp:9 */
	virtual const CClassInfo& GetTypeInfo(const IAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.cpp:9 */
	virtual void* CastToBase(IAnimParameter* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.cpp:9 */
	virtual const void* CastToBase(const IAnimParameter* , ClassID);
	/* ../public/animationsystem/ianimparameterlist.h:39 */
	virtual const CUtlString& GetName(const IAnimParameter* );
	/* ../public/animationsystem/ianimparameterlist.h:42 */
	virtual AnimParamID GetParameterID(const IAnimParameter* );
	/* ../public/animationsystem/ianimparameterlist.h:45 */
	virtual AnimParamType_t GetParameterType(const IAnimParameter* );
	/* ../public/animationsystem/ianimparameterlist.h:48 */
	virtual CAnimVariant GetDefaultValue(const IAnimParameter* );
	/* ../public/animationsystem/ianimparameterlist.h:51 */
	virtual void SetDefaultValue(IAnimParameter* , CAnimVariant);
	/* ../public/animationsystem/ianimparameterlist.h:54 */
	virtual CAnimVariant GetMinValue(const IAnimParameter* );
	/* ../public/animationsystem/ianimparameterlist.h:57 */
	virtual CAnimVariant GetMaxValue(const IAnimParameter* );
	/* ../public/animationsystem/ianimparameterlist.h:62 */
	virtual bool ShouldUseMostRecentValue(const IAnimParameter* );
	/* ../public/animationsystem/ianimparameterlist.h:66 */
	virtual bool IsAutoReset(const IAnimParameter* );
	/* ../public/animationsystem/ianimparameterlist.h:69 */
	virtual AnimParamButton_t GetPreviewButton(const IAnimParameter* );
	/* ../public/animationsystem/ianimparameterlist.h:72 */
	virtual void CopyProperties(IAnimParameter* , IAnimParameter* );
	virtual void ~IAnimParameter(IAnimParameter* );
	virtual const void  * CastToBase(const class IAnimParameter  *, class ClassID); /* linkage=_ZNK14IAnimParameter10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class IAnimParameter *, class ClassID); /* linkage=_ZN14IAnimParameter10CastToBaseEN10Reflection7ClassIDE */
	virtual const class CClassInfo  & GetTypeInfo(const class IAnimParameter  *); /* linkage=_ZNK14IAnimParameter11GetTypeInfoEv */
	virtual void ~IAnimParameter(class IAnimParameter *); /* linkage=_ZN14IAnimParameterD4Ev */
	class IAnimParameter & operator=(class IAnimParameter *, const class IAnimParameter  &); /* linkage=_ZN14IAnimParameteraSERKS_ */
	void IAnimParameter(class IAnimParameter *, class IAnimParameter &); /* linkage=_ZN14IAnimParameterC4EOS_ */
	void IAnimParameter(class IAnimParameter *, const class IAnimParameter  &); /* linkage=_ZN14IAnimParameterC4ERKS_ */
	void IAnimParameter(class IAnimParameter *); /* linkage=_ZN14IAnimParameterC4Ev */
	const class ClassID  MyTypeID(void); /* linkage=_ZN14IAnimParameter8MyTypeIDEv */
	/* <14c53f6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.cpp:9 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN14IAnimParameter10MyTypeInfoEv */
	virtual const class CUtlString  & GetName(const class IAnimParameter  *); /* linkage=_ZNK14IAnimParameter7GetNameEv */
	virtual class AnimParamID GetParameterID(const class IAnimParameter  *); /* linkage=_ZNK14IAnimParameter14GetParameterIDEv */
	virtual enum AnimParamType_t GetParameterType(const class IAnimParameter  *); /* linkage=_ZNK14IAnimParameter16GetParameterTypeEv */
	virtual class CAnimVariant GetDefaultValue(const class IAnimParameter  *); /* linkage=_ZNK14IAnimParameter15GetDefaultValueEv */
	virtual void SetDefaultValue(class IAnimParameter *, class CAnimVariant); /* linkage=_ZN14IAnimParameter15SetDefaultValueE12CAnimVariant */
	virtual class CAnimVariant GetMinValue(const class IAnimParameter  *); /* linkage=_ZNK14IAnimParameter11GetMinValueEv */
	virtual class CAnimVariant GetMaxValue(const class IAnimParameter  *); /* linkage=_ZNK14IAnimParameter11GetMaxValueEv */
	virtual bool ShouldUseMostRecentValue(const class IAnimParameter  *); /* linkage=_ZNK14IAnimParameter24ShouldUseMostRecentValueEv */
	virtual bool IsAutoReset(const class IAnimParameter  *); /* linkage=_ZNK14IAnimParameter11IsAutoResetEv */
	virtual enum AnimParamButton_t GetPreviewButton(const class IAnimParameter  *); /* linkage=_ZNK14IAnimParameter16GetPreviewButtonEv */
	virtual void CopyProperties(class IAnimParameter *, class IAnimParameter *); /* linkage=_ZN14IAnimParameter14CopyPropertiesEPS_ */
};

// <014C3B79> ../public/animationsystem/ianimparameterlist.h:37
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 37
	const char   __PRETTY_FUNCTION__; // 18538
} /* size: 0, variables: 2 */

// <00F80354> ../public/animationsystem/ianimparameterlist.h:79
void IAnimParameterList::IAnimParameterList()
{
} /* size: 0 */

// <00F80338> ../public/animationsystem/ianimparameterlist.h:79
inline void IAnimParameterList::IAnimParameterList()
{
} /* size: 0 */

// <00403C3C> ../public/animationsystem/ianimparameterlist.h:79
// member functions: 33
// member variable: 1
// vtable entries: 12
// class size: 8
class IAnimParameterList {
	void ~IAnimParameterList(IAnimParameterList* );
	IAnimParameterList& operator=(IAnimParameterList* , IAnimParameterList& );
	IAnimParameterList& operator=(IAnimParameterList* , const IAnimParameterList& );
	int ()(void) * * _vptr.IAnimParameterList; /* 0 8 */
	/* ../public/animationsystem/ianimparameterlist.h:83 */
	virtual int Count(const IAnimParameterList* );
	/* ../public/animationsystem/ianimparameterlist.h:86 */
	virtual IAnimParameter* GetParameter(IAnimParameterList* , int);
	/* ../public/animationsystem/ianimparameterlist.h:87 */
	virtual const IAnimParameter* GetParameter(const IAnimParameterList* , int);
	/* ../public/animationsystem/ianimparameterlist.h:90 */
	virtual AnimParamID GetParameterID(const IAnimParameterList* , int);
	/* ../public/animationsystem/ianimparameterlist.h:93 */
	virtual IAnimParameter* GetParameter(IAnimParameterList* , const CUtlString& );
	/* ../public/animationsystem/ianimparameterlist.h:94 */
	virtual const IAnimParameter* GetParameter(const IAnimParameterList* , const CUtlString& );
	/* ../public/animationsystem/ianimparameterlist.h:96 */
	virtual IAnimParameter* GetParameter(IAnimParameterList* , AnimParamID);
	/* ../public/animationsystem/ianimparameterlist.h:97 */
	virtual const IAnimParameter* GetParameter(const IAnimParameterList* , AnimParamID);
	/* ../public/animationsystem/ianimparameterlist.h:99 */
	virtual IAnimParameter* AddParameter(IAnimParameterList* , const char* );
	/* ../public/animationsystem/ianimparameterlist.h:100 */
	virtual void RemoveParameter(IAnimParameterList* , IAnimParameter* );
	/* ../public/animationsystem/ianimparameterlist.h:101 */
	virtual void RenameParameter(IAnimParameterList* , IAnimParameter* , const CUtlString& );
	/* ../public/animationsystem/ianimparameterlist.h:104 */
	virtual CClassInfoList GetParameterTypes(const IAnimParameterList* );
	void IAnimParameterList(class IAnimParameterList *, class IAnimParameterList &); /* linkage=_ZN18IAnimParameterListC4EOS_ */
	void IAnimParameterList(class IAnimParameterList *, const class IAnimParameterList  &); /* linkage=_ZN18IAnimParameterListC4ERKS_ */
	void IAnimParameterList(class IAnimParameterList *); /* linkage=_ZN18IAnimParameterListC4Ev */
	void ~IAnimParameterList(class IAnimParameterList *); /* linkage=_ZN18IAnimParameterListD4Ev */
	class IAnimParameterList & operator=(class IAnimParameterList *, class IAnimParameterList &); /* linkage=_ZN18IAnimParameterListaSEOS_ */
	class IAnimParameterList & operator=(class IAnimParameterList *, const class IAnimParameterList  &); /* linkage=_ZN18IAnimParameterListaSERKS_ */
	virtual int Count(const class IAnimParameterList  *); /* linkage=_ZNK18IAnimParameterList5CountEv */
	virtual class IAnimParameter * GetParameter(class IAnimParameterList *, int); /* linkage=_ZN18IAnimParameterList12GetParameterEi */
	virtual const class IAnimParameter  * GetParameter(const class IAnimParameterList  *, int); /* linkage=_ZNK18IAnimParameterList12GetParameterEi */
	virtual class AnimParamID GetParameterID(const class IAnimParameterList  *, int); /* linkage=_ZNK18IAnimParameterList14GetParameterIDEi */
	virtual class IAnimParameter * GetParameter(class IAnimParameterList *, const class CUtlString  &); /* linkage=_ZN18IAnimParameterList12GetParameterERK10CUtlString */
	virtual const class IAnimParameter  * GetParameter(const class IAnimParameterList  *, const class CUtlString  &); /* linkage=_ZNK18IAnimParameterList12GetParameterERK10CUtlString */
	virtual class IAnimParameter * GetParameter(class IAnimParameterList *, class AnimParamID); /* linkage=_ZN18IAnimParameterList12GetParameterE11AnimParamID */
	virtual const class IAnimParameter  * GetParameter(const class IAnimParameterList  *, class AnimParamID); /* linkage=_ZNK18IAnimParameterList12GetParameterE11AnimParamID */
	virtual class IAnimParameter * AddParameter(class IAnimParameterList *, const char  *); /* linkage=_ZN18IAnimParameterList12AddParameterEPKc */
	virtual void RemoveParameter(class IAnimParameterList *, class IAnimParameter *); /* linkage=_ZN18IAnimParameterList15RemoveParameterEP14IAnimParameter */
	virtual void RenameParameter(class IAnimParameterList *, class IAnimParameter *, const class CUtlString  &); /* linkage=_ZN18IAnimParameterList15RenameParameterEP14IAnimParameterRK10CUtlString */
	virtual CClassInfoList GetParameterTypes(const class IAnimParameterList  *); /* linkage=_ZNK18IAnimParameterList17GetParameterTypesEv */
};

// <00F32329> ../public/animationsystem/ianimparameterlist.h:79
// member functions: 36
// member variable: 1
// vtable entries: 12
// class size: 8
class IAnimParameterList {
	void IAnimParameterList(IAnimParameterList* , IAnimParameterList& );
	void IAnimParameterList(IAnimParameterList* , const IAnimParameterList& );
	void IAnimParameterList(IAnimParameterList* );
	void ~IAnimParameterList(IAnimParameterList* );
	IAnimParameterList& operator=(IAnimParameterList* , IAnimParameterList& );
	IAnimParameterList& operator=(IAnimParameterList* , const IAnimParameterList& );
	int ()(void) * * _vptr.IAnimParameterList; /* 0 8 */
	/* ../public/animationsystem/ianimparameterlist.h:83 */
	virtual int Count(const IAnimParameterList* );
	/* ../public/animationsystem/ianimparameterlist.h:86 */
	virtual IAnimParameter* GetParameter(IAnimParameterList* , int);
	/* ../public/animationsystem/ianimparameterlist.h:87 */
	virtual const IAnimParameter* GetParameter(const IAnimParameterList* , int);
	/* ../public/animationsystem/ianimparameterlist.h:90 */
	virtual AnimParamID GetParameterID(const IAnimParameterList* , int);
	/* ../public/animationsystem/ianimparameterlist.h:93 */
	virtual IAnimParameter* GetParameter(IAnimParameterList* , const CUtlString& );
	/* ../public/animationsystem/ianimparameterlist.h:94 */
	virtual const IAnimParameter* GetParameter(const IAnimParameterList* , const CUtlString& );
	/* ../public/animationsystem/ianimparameterlist.h:96 */
	virtual IAnimParameter* GetParameter(IAnimParameterList* , AnimParamID);
	/* ../public/animationsystem/ianimparameterlist.h:97 */
	virtual const IAnimParameter* GetParameter(const IAnimParameterList* , AnimParamID);
	/* ../public/animationsystem/ianimparameterlist.h:99 */
	virtual IAnimParameter* AddParameter(IAnimParameterList* , const char* );
	/* ../public/animationsystem/ianimparameterlist.h:100 */
	virtual void RemoveParameter(IAnimParameterList* , IAnimParameter* );
	/* ../public/animationsystem/ianimparameterlist.h:101 */
	virtual void RenameParameter(IAnimParameterList* , IAnimParameter* , const CUtlString& );
	/* ../public/animationsystem/ianimparameterlist.h:104 */
	virtual CClassInfoList GetParameterTypes(const IAnimParameterList* );
	void IAnimParameterList(class IAnimParameterList *, class IAnimParameterList &); /* linkage=_ZN18IAnimParameterListC4EOS_ */
	void IAnimParameterList(class IAnimParameterList *, const class IAnimParameterList  &); /* linkage=_ZN18IAnimParameterListC4ERKS_ */
	void IAnimParameterList(class IAnimParameterList *); /* linkage=_ZN18IAnimParameterListC4Ev */
	void ~IAnimParameterList(class IAnimParameterList *); /* linkage=_ZN18IAnimParameterListD4Ev */
	class IAnimParameterList & operator=(class IAnimParameterList *, class IAnimParameterList &); /* linkage=_ZN18IAnimParameterListaSEOS_ */
	class IAnimParameterList & operator=(class IAnimParameterList *, const class IAnimParameterList  &); /* linkage=_ZN18IAnimParameterListaSERKS_ */
	virtual int Count(const class IAnimParameterList  *); /* linkage=_ZNK18IAnimParameterList5CountEv */
	virtual class IAnimParameter * GetParameter(class IAnimParameterList *, int); /* linkage=_ZN18IAnimParameterList12GetParameterEi */
	virtual const class IAnimParameter  * GetParameter(const class IAnimParameterList  *, int); /* linkage=_ZNK18IAnimParameterList12GetParameterEi */
	virtual class AnimParamID GetParameterID(const class IAnimParameterList  *, int); /* linkage=_ZNK18IAnimParameterList14GetParameterIDEi */
	virtual class IAnimParameter * GetParameter(class IAnimParameterList *, const class CUtlString  &); /* linkage=_ZN18IAnimParameterList12GetParameterERK10CUtlString */
	virtual const class IAnimParameter  * GetParameter(const class IAnimParameterList  *, const class CUtlString  &); /* linkage=_ZNK18IAnimParameterList12GetParameterERK10CUtlString */
	virtual class IAnimParameter * GetParameter(class IAnimParameterList *, class AnimParamID); /* linkage=_ZN18IAnimParameterList12GetParameterE11AnimParamID */
	virtual const class IAnimParameter  * GetParameter(const class IAnimParameterList  *, class AnimParamID); /* linkage=_ZNK18IAnimParameterList12GetParameterE11AnimParamID */
	virtual class IAnimParameter * AddParameter(class IAnimParameterList *, const char  *); /* linkage=_ZN18IAnimParameterList12AddParameterEPKc */
	virtual void RemoveParameter(class IAnimParameterList *, class IAnimParameter *); /* linkage=_ZN18IAnimParameterList15RemoveParameterEP14IAnimParameter */
	virtual void RenameParameter(class IAnimParameterList *, class IAnimParameter *, const class CUtlString  &); /* linkage=_ZN18IAnimParameterList15RenameParameterEP14IAnimParameterRK10CUtlString */
	virtual CClassInfoList GetParameterTypes(const class IAnimParameterList  *); /* linkage=_ZNK18IAnimParameterList17GetParameterTypesEv */
};

