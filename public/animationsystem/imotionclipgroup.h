
//
// public/animationsystem/imotionclipgroup.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <01352987> ../public/animationsystem/imotionclipgroup.h:17
void IMotionClipGroup::IMotionClipGroup()
{
} /* size: 0 */

// <0135296B> ../public/animationsystem/imotionclipgroup.h:17
inline void IMotionClipGroup::IMotionClipGroup()
{
} /* size: 0 */

// <01352954> ../public/animationsystem/imotionclipgroup.h:17
void IMotionClipGroup::~IMotionClipGroup()
{
} /* size: 0 */

// <01352921> ../public/animationsystem/imotionclipgroup.h:17
inline void IMotionClipGroup::~IMotionClipGroup()
{
} /* size: 0 */

// <006B3A82> ../public/animationsystem/imotionclipgroup.h:17
inline void IMotionClipGroup::operator=(const IMotionClipGroup &)
{
} /* size: 0 */

// <0134A918> ../public/animationsystem/imotionclipgroup.h:17
// member functions: 39
// member variable: 1
// static member variable: 1
// vtable entries: 13
// class size: 8
class IMotionClipGroup : public Object {
public:
	/* class Object <ancestor>; */ /* 0 0 */
	void IMotionClipGroup(IMotionClipGroup* , IMotionClipGroup& );
	void IMotionClipGroup(IMotionClipGroup* , const IMotionClipGroup& );
	void IMotionClipGroup(IMotionClipGroup* );
private:
	static class CClassInfoT<IMotionClipGroup> m_classInfoIMotionClipGroup; /* 0 0 */
	/* ../public/animationsystem/imotionclipgroup.h:19 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.cpp:10 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.cpp:10 */
	virtual const CClassInfo& GetTypeInfo(const IMotionClipGroup* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.cpp:10 */
	virtual void* CastToBase(IMotionClipGroup* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.cpp:10 */
	virtual const void* CastToBase(const IMotionClipGroup* , ClassID);
	/* ../public/animationsystem/imotionclipgroup.h:22 */
	virtual const CUtlString& GetName(const IMotionClipGroup* );
	/* ../public/animationsystem/imotionclipgroup.h:23 */
	virtual void SetName(IMotionClipGroup* , const CUtlString& );
	/* ../public/animationsystem/imotionclipgroup.h:27 */
	virtual IAnimTag* GetTag(IMotionClipGroup* );
	/* ../public/animationsystem/imotionclipgroup.h:28 */
	virtual const IAnimTag* GetTag(const IMotionClipGroup* );
	/* ../public/animationsystem/imotionclipgroup.h:31 */
	virtual int GetClipCount(const IMotionClipGroup* );
	/* ../public/animationsystem/imotionclipgroup.h:34 */
	virtual IMotionClip* GetClip(IMotionClipGroup* , int);
	/* ../public/animationsystem/imotionclipgroup.h:35 */
	virtual const IMotionClip* GetClip(const IMotionClipGroup* , int);
	/* ../public/animationsystem/imotionclipgroup.h:38 */
	virtual IMotionClip* AddClip(IMotionClipGroup* );
	/* ../public/animationsystem/imotionclipgroup.h:41 */
	virtual void RemoveClip(IMotionClipGroup* , int);
	/* ../public/animationsystem/imotionclipgroup.h:44 */
	virtual void RemoveClip(IMotionClipGroup* , IMotionClip* );
	virtual void ~IMotionClipGroup(IMotionClipGroup* );
	virtual const void  * CastToBase(const class IMotionClipGroup  *, class ClassID); /* linkage=_ZNK16IMotionClipGroup10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class IMotionClipGroup *, class ClassID); /* linkage=_ZN16IMotionClipGroup10CastToBaseEN10Reflection7ClassIDE */
	virtual const class CClassInfo  & GetTypeInfo(const class IMotionClipGroup  *); /* linkage=_ZNK16IMotionClipGroup11GetTypeInfoEv */
	virtual void ~IMotionClipGroup(class IMotionClipGroup *); /* linkage=_ZN16IMotionClipGroupD4Ev */
	class IMotionClipGroup & operator=(class IMotionClipGroup *, const class IMotionClipGroup  &); /* linkage=_ZN16IMotionClipGroupaSERKS_ */
	void IMotionClipGroup(class IMotionClipGroup *, class IMotionClipGroup &); /* linkage=_ZN16IMotionClipGroupC4EOS_ */
	void IMotionClipGroup(class IMotionClipGroup *, const class IMotionClipGroup  &); /* linkage=_ZN16IMotionClipGroupC4ERKS_ */
	void IMotionClipGroup(class IMotionClipGroup *); /* linkage=_ZN16IMotionClipGroupC4Ev */
	const class ClassID  MyTypeID(void); /* linkage=_ZN16IMotionClipGroup8MyTypeIDEv */
	/* <1356d84> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.cpp:10 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN16IMotionClipGroup10MyTypeInfoEv */
	virtual const class CUtlString  & GetName(const class IMotionClipGroup  *); /* linkage=_ZNK16IMotionClipGroup7GetNameEv */
	virtual void SetName(class IMotionClipGroup *, const class CUtlString  &); /* linkage=_ZN16IMotionClipGroup7SetNameERK10CUtlString */
	virtual class IAnimTag * GetTag(class IMotionClipGroup *); /* linkage=_ZN16IMotionClipGroup6GetTagEv */
	virtual const class IAnimTag  * GetTag(const class IMotionClipGroup  *); /* linkage=_ZNK16IMotionClipGroup6GetTagEv */
	virtual int GetClipCount(const class IMotionClipGroup  *); /* linkage=_ZNK16IMotionClipGroup12GetClipCountEv */
	virtual class IMotionClip * GetClip(class IMotionClipGroup *, int); /* linkage=_ZN16IMotionClipGroup7GetClipEi */
	virtual const class IMotionClip  * GetClip(const class IMotionClipGroup  *, int); /* linkage=_ZNK16IMotionClipGroup7GetClipEi */
	virtual class IMotionClip * AddClip(class IMotionClipGroup *); /* linkage=_ZN16IMotionClipGroup7AddClipEv */
	virtual void RemoveClip(class IMotionClipGroup *, int); /* linkage=_ZN16IMotionClipGroup10RemoveClipEi */
	virtual void RemoveClip(class IMotionClipGroup *, class IMotionClip *); /* linkage=_ZN16IMotionClipGroup10RemoveClipEP11IMotionClip */
};

// <013537C2> ../public/animationsystem/imotionclipgroup.h:19
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 19
	const char   __PRETTY_FUNCTION__; // 48892
} /* size: 0, variables: 2 */

