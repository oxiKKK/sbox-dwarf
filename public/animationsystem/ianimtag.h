
//
// public/animationsystem/ianimtag.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <0131B484> ../public/animationsystem/ianimtag.h:12
void IAnimTag::IAnimTag()
{
} /* size: 0 */

// <0131B468> ../public/animationsystem/ianimtag.h:12
inline void IAnimTag::IAnimTag()
{
} /* size: 0 */

// <0131B451> ../public/animationsystem/ianimtag.h:12
void IAnimTag::~IAnimTag()
{
} /* size: 0 */

// <0131B41E> ../public/animationsystem/ianimtag.h:12
inline void IAnimTag::~IAnimTag()
{
} /* size: 0 */

// <0067882D> ../public/animationsystem/ianimtag.h:12
inline void IAnimTag::operator=(const IAnimTag &)
{
} /* size: 0 */

// <012EDE43> ../public/animationsystem/ianimtag.h:12
// member functions: 25
// member variable: 1
// static member variable: 1
// vtable entries: 6
// class size: 8
class IAnimTag : public Object {
public:
	/* class Object <ancestor>; */ /* 0 0 */
	void IAnimTag(IAnimTag* , IAnimTag& );
	void IAnimTag(IAnimTag* , const IAnimTag& );
	void IAnimTag(IAnimTag* );
private:
	static class CClassInfoT<IAnimTag> m_classInfoIAnimTag; /* 0 0 */
	/* ../public/animationsystem/ianimtag.h:14 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagbase.cpp:9 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagbase.cpp:9 */
	virtual const CClassInfo& GetTypeInfo(const IAnimTag* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagbase.cpp:9 */
	virtual void* CastToBase(IAnimTag* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagbase.cpp:9 */
	virtual const void* CastToBase(const IAnimTag* , ClassID);
	/* ../public/animationsystem/ianimtag.h:17 */
	virtual AnimTagID GetID(const IAnimTag* );
	/* ../public/animationsystem/ianimtag.h:19 */
	virtual const CUtlString& GetName(const IAnimTag* );
	/* ../public/animationsystem/ianimtag.h:20 */
	virtual void SetName(IAnimTag* , const CUtlString& );
	virtual void ~IAnimTag(IAnimTag* );
	virtual const void  * CastToBase(const class IAnimTag  *, class ClassID); /* linkage=_ZNK8IAnimTag10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class IAnimTag *, class ClassID); /* linkage=_ZN8IAnimTag10CastToBaseEN10Reflection7ClassIDE */
	virtual const class CClassInfo  & GetTypeInfo(const class IAnimTag  *); /* linkage=_ZNK8IAnimTag11GetTypeInfoEv */
	virtual void ~IAnimTag(class IAnimTag *); /* linkage=_ZN8IAnimTagD4Ev */
	class IAnimTag & operator=(class IAnimTag *, const class IAnimTag  &); /* linkage=_ZN8IAnimTagaSERKS_ */
	void IAnimTag(class IAnimTag *, class IAnimTag &); /* linkage=_ZN8IAnimTagC4EOS_ */
	void IAnimTag(class IAnimTag *, const class IAnimTag  &); /* linkage=_ZN8IAnimTagC4ERKS_ */
	void IAnimTag(class IAnimTag *); /* linkage=_ZN8IAnimTagC4Ev */
	const class ClassID  MyTypeID(void); /* linkage=_ZN8IAnimTag8MyTypeIDEv */
	/* <131f47c> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagbase.cpp:9 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN8IAnimTag10MyTypeInfoEv */
	virtual class AnimTagID GetID(const class IAnimTag  *); /* linkage=_ZNK8IAnimTag5GetIDEv */
	virtual const class CUtlString  & GetName(const class IAnimTag  *); /* linkage=_ZNK8IAnimTag7GetNameEv */
	virtual void SetName(class IAnimTag *, const class CUtlString  &); /* linkage=_ZN8IAnimTag7SetNameERK10CUtlString */
};

// <0131DBF3> ../public/animationsystem/ianimtag.h:14
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 14
	const char   __PRETTY_FUNCTION__; // 22461
} /* size: 0, variables: 2 */

