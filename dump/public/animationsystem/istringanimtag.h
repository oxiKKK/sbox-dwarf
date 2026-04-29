
//
// public/animationsystem/istringanimtag.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 4
//	class: 1
//

// <0130F805> ../public/animationsystem/istringanimtag.h:13
void IStringAnimTag::IStringAnimTag()
{
} /* size: 0 */

// <0130F7E9> ../public/animationsystem/istringanimtag.h:13
inline void IStringAnimTag::IStringAnimTag()
{
} /* size: 0 */

// <00678116> ../public/animationsystem/istringanimtag.h:13
inline void IStringAnimTag::operator=(const IStringAnimTag &)
{
} /* size: 0 */

// <012FC20B> ../public/animationsystem/istringanimtag.h:13
// member functions: 18
// member variable: 1
// static member variable: 1
// vtable entries: 3
// class size: 8
class IStringAnimTag {
	void IStringAnimTag(IStringAnimTag* , IStringAnimTag& );
	void IStringAnimTag(IStringAnimTag* , const IStringAnimTag& );
	void IStringAnimTag(IStringAnimTag* );
	void ~IStringAnimTag(IStringAnimTag* );
	int ()(void) * * _vptr.IStringAnimTag; /* 0 8 */
private:
	static class CClassInfoT<IStringAnimTag> m_classInfoIStringAnimTag; /* 0 0 */
	/* ../public/animationsystem/istringanimtag.h:15 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stringanimtag.cpp:8 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stringanimtag.cpp:8 */
	virtual const CClassInfo& GetTypeInfo(const IStringAnimTag* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stringanimtag.cpp:8 */
	virtual void* CastToBase(IStringAnimTag* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stringanimtag.cpp:8 */
	virtual const void* CastToBase(const IStringAnimTag* , ClassID);
	void IStringAnimTag(class IStringAnimTag *, class IStringAnimTag &); /* linkage=_ZN14IStringAnimTagC4EOS_ */
	void IStringAnimTag(class IStringAnimTag *, const class IStringAnimTag  &); /* linkage=_ZN14IStringAnimTagC4ERKS_ */
	void IStringAnimTag(class IStringAnimTag *); /* linkage=_ZN14IStringAnimTagC4Ev */
	void ~IStringAnimTag(class IStringAnimTag *); /* linkage=_ZN14IStringAnimTagD4Ev */
	const class ClassID  MyTypeID(void); /* linkage=_ZN14IStringAnimTag8MyTypeIDEv */
	/* <131f83a> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stringanimtag.cpp:8 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN14IStringAnimTag10MyTypeInfoEv */
	virtual const class CClassInfo  & GetTypeInfo(const class IStringAnimTag  *); /* linkage=_ZNK14IStringAnimTag11GetTypeInfoEv */
	virtual void * CastToBase(class IStringAnimTag *, class ClassID); /* linkage=_ZN14IStringAnimTag10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class IStringAnimTag  *, class ClassID); /* linkage=_ZNK14IStringAnimTag10CastToBaseEN10Reflection7ClassIDE */
};

// <01310DCA> ../public/animationsystem/istringanimtag.h:15
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 15
	const char   __PRETTY_FUNCTION__; // 22608
} /* size: 0, variables: 2 */

