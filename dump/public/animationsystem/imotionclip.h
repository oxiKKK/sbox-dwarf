
//
// public/animationsystem/imotionclip.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <01354C7E> ../public/animationsystem/imotionclip.h:14
void IMotionClip::IMotionClip()
{
} /* size: 0 */

// <01354C62> ../public/animationsystem/imotionclip.h:14
inline void IMotionClip::IMotionClip()
{
} /* size: 0 */

// <01354C4B> ../public/animationsystem/imotionclip.h:14
void IMotionClip::~IMotionClip()
{
} /* size: 0 */

// <01354C18> ../public/animationsystem/imotionclip.h:14
inline void IMotionClip::~IMotionClip()
{
} /* size: 0 */

// <006B672F> ../public/animationsystem/imotionclip.h:14
inline void IMotionClip::operator=(const IMotionClip &)
{
} /* size: 0 */

// <01348A2C> ../public/animationsystem/imotionclip.h:14
// member functions: 25
// member variables: 2
// static member variable: 1
// vtable entries: 6
// class size: 16
class IMotionClip : public Object, public IAnimTagSpanContainer {
public:
	/* class Object <ancestor>; */ /* 0 0 */
	/* class IAnimTagSpanContainer <ancestor>; */ /* 8 0 */
	void IMotionClip(IMotionClip* , IMotionClip& );
	void IMotionClip(IMotionClip* , const IMotionClip& );
	void IMotionClip(IMotionClip* );
private:
	static class CClassInfoT<IMotionClip> m_classInfoIMotionClip; /* 0 0 */
	/* ../public/animationsystem/imotionclip.h:16 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclip.cpp:9 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclip.cpp:9 */
	virtual const CClassInfo& GetTypeInfo(const IMotionClip* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclip.cpp:9 */
	virtual void* CastToBase(IMotionClip* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclip.cpp:9 */
	virtual const void* CastToBase(const IMotionClip* , ClassID);
	/* ../public/animationsystem/imotionclip.h:18 */
	virtual const CUtlString& GetSequenceName(const IMotionClip* );
	/* ../public/animationsystem/imotionclip.h:19 */
	virtual void SetSequenceName(IMotionClip* , const CUtlString& );
	/* ../public/animationsystem/imotionclip.h:20 */
	virtual bool IsLooping(const IMotionClip* );
	virtual void ~IMotionClip(IMotionClip* );
	virtual const void  * CastToBase(const class IMotionClip  *, class ClassID); /* linkage=_ZNK11IMotionClip10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class IMotionClip *, class ClassID); /* linkage=_ZN11IMotionClip10CastToBaseEN10Reflection7ClassIDE */
	/* <1356646> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclip.cpp:9 */
	virtual const class CClassInfo  & GetTypeInfo(const class IMotionClip  *); /* linkage=_ZNK11IMotionClip11GetTypeInfoEv */
	virtual void ~IMotionClip(class IMotionClip *); /* linkage=_ZN11IMotionClipD4Ev */
	class IMotionClip & operator=(class IMotionClip *, const class IMotionClip  &); /* linkage=_ZN11IMotionClipaSERKS_ */
	void IMotionClip(class IMotionClip *, class IMotionClip &); /* linkage=_ZN11IMotionClipC4EOS_ */
	void IMotionClip(class IMotionClip *, const class IMotionClip  &); /* linkage=_ZN11IMotionClipC4ERKS_ */
	void IMotionClip(class IMotionClip *); /* linkage=_ZN11IMotionClipC4Ev */
	const class ClassID  MyTypeID(void); /* linkage=_ZN11IMotionClip8MyTypeIDEv */
	/* <1356d66> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclip.cpp:9 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN11IMotionClip10MyTypeInfoEv */
	virtual const class CUtlString  & GetSequenceName(const class IMotionClip  *); /* linkage=_ZNK11IMotionClip15GetSequenceNameEv */
	virtual void SetSequenceName(class IMotionClip *, const class CUtlString  &); /* linkage=_ZN11IMotionClip15SetSequenceNameERK10CUtlString */
	virtual bool IsLooping(const class IMotionClip  *); /* linkage=_ZNK11IMotionClip9IsLoopingEv */
};

// <01355F27> ../public/animationsystem/imotionclip.h:16
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 16
	const char   __PRETTY_FUNCTION__; // 48772
} /* size: 0, variables: 2 */

