
//
// public/animationsystem/ianimgraphsettingsgroup.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <019FB4E8> ../public/animationsystem/ianimgraphsettingsgroup.h:12
void IAnimGraphSettingsGroup::~IAnimGraphSettingsGroup()
{
} /* size: 0 */

// <019FB4B5> ../public/animationsystem/ianimgraphsettingsgroup.h:12
inline void IAnimGraphSettingsGroup::~IAnimGraphSettingsGroup()
{
} /* size: 0 */

// <00E80FA6> ../public/animationsystem/ianimgraphsettingsgroup.h:12
void IAnimGraphSettingsGroup::IAnimGraphSettingsGroup()
{
} /* size: 0 */

// <00E80F8A> ../public/animationsystem/ianimgraphsettingsgroup.h:12
inline void IAnimGraphSettingsGroup::IAnimGraphSettingsGroup()
{
} /* size: 0 */

// <0043398B> ../public/animationsystem/ianimgraphsettingsgroup.h:12
inline void IAnimGraphSettingsGroup::operator=(const IAnimGraphSettingsGroup &)
{
} /* size: 0 */

// <00DEFE53> ../public/animationsystem/ianimgraphsettingsgroup.h:12
// member functions: 20
// member variable: 1
// static member variable: 1
// vtable entries: 4
// class size: 8
class IAnimGraphSettingsGroup : public Object {
public:
	/* class Object <ancestor>; */ /* 0 0 */
	void IAnimGraphSettingsGroup(IAnimGraphSettingsGroup* , IAnimGraphSettingsGroup& );
	void IAnimGraphSettingsGroup(IAnimGraphSettingsGroup* , const IAnimGraphSettingsGroup& );
	void IAnimGraphSettingsGroup(IAnimGraphSettingsGroup* );
private:
	static class CClassInfoT<IAnimGraphSettingsGroup> m_classInfoIAnimGraphSettingsGroup; /* 0 0 */
	/* ../public/animationsystem/ianimgraphsettingsgroup.h:14 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphsettingsgroup.cpp:8 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphsettingsgroup.cpp:8 */
	virtual const CClassInfo& GetTypeInfo(const IAnimGraphSettingsGroup* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphsettingsgroup.cpp:8 */
	virtual void* CastToBase(IAnimGraphSettingsGroup* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphsettingsgroup.cpp:8 */
	virtual const void* CastToBase(const IAnimGraphSettingsGroup* , ClassID);
	/* ../public/animationsystem/ianimgraphsettingsgroup.h:18 */
	virtual const CUtlString& GetName(const IAnimGraphSettingsGroup* );
	virtual void ~IAnimGraphSettingsGroup(IAnimGraphSettingsGroup* );
	virtual const void  * CastToBase(const class IAnimGraphSettingsGroup  *, class ClassID); /* linkage=_ZNK23IAnimGraphSettingsGroup10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class IAnimGraphSettingsGroup *, class ClassID); /* linkage=_ZN23IAnimGraphSettingsGroup10CastToBaseEN10Reflection7ClassIDE */
	virtual const class CClassInfo  & GetTypeInfo(const class IAnimGraphSettingsGroup  *); /* linkage=_ZNK23IAnimGraphSettingsGroup11GetTypeInfoEv */
	virtual void ~IAnimGraphSettingsGroup(class IAnimGraphSettingsGroup *); /* linkage=_ZN23IAnimGraphSettingsGroupD4Ev */
	void IAnimGraphSettingsGroup(class IAnimGraphSettingsGroup *, class IAnimGraphSettingsGroup &); /* linkage=_ZN23IAnimGraphSettingsGroupC4EOS_ */
	void IAnimGraphSettingsGroup(class IAnimGraphSettingsGroup *, const class IAnimGraphSettingsGroup  &); /* linkage=_ZN23IAnimGraphSettingsGroupC4ERKS_ */
	void IAnimGraphSettingsGroup(class IAnimGraphSettingsGroup *); /* linkage=_ZN23IAnimGraphSettingsGroupC4Ev */
	const class ClassID  MyTypeID(void); /* linkage=_ZN23IAnimGraphSettingsGroup8MyTypeIDEv */
	/* <e902a4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphsettingsgroup.cpp:8 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN23IAnimGraphSettingsGroup10MyTypeInfoEv */
	virtual const class CUtlString  & GetName(const class IAnimGraphSettingsGroup  *); /* linkage=_ZNK23IAnimGraphSettingsGroup7GetNameEv */
};

// <00E81061> ../public/animationsystem/ianimgraphsettingsgroup.h:14
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 14
	const char   __PRETTY_FUNCTION__; // 11667
} /* size: 0, variables: 2 */

