
//
// public/animationsystem/ianimtagmanagerinstance.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 9
//	classes: 4
//

// <000F6CB9> ../public/animationsystem/ianimtagmanagerinstance.h:19
// member functions: 2
// member variables: 2
// class size: 8
class AnimTagStatusContext {
	/* ../public/animationsystem/ianimtagmanagerinstance.h:23 */
	void AnimTagStatusContext(AnimTagStatusContext* , const AnimTagStatus& , float);
	AnimTagStatus m_TagStatus; /* 0 4 */
	float m_flAnimTime; /* 4 4 */
	void AnimTagStatusContext(class AnimTagStatusContext *, const enum AnimTagStatus  &, float); /* linkage=_ZN20AnimTagStatusContextC4ERK13AnimTagStatusf */
};

// <015CDA1F> ../public/animationsystem/ianimtagmanagerinstance.h:23
void AnimTagStatusContext::AnimTagStatusContext(const AnimTagStatus& status, float flAnimTime)
{
} /* size: 0 */

// <015CD9EE> ../public/animationsystem/ianimtagmanagerinstance.h:23
inline void AnimTagStatusContext::AnimTagStatusContext(const AnimTagStatus& status, float flAnimTime)
{
} /* size: 0 */

// <03E8A9D7> ../public/animationsystem/ianimtagmanagerinstance.h:36
void IAnimTagListener::IAnimTagListener()
{
} /* size: 0 */

// <03E8A9BB> ../public/animationsystem/ianimtagmanagerinstance.h:36
inline void IAnimTagListener::IAnimTagListener()
{
} /* size: 0 */

// <0012409A> ../public/animationsystem/ianimtagmanagerinstance.h:36
// member functions: 8
// member variable: 1
// vtable entry: 1
// class size: 8
class IAnimTagListener {
	void IAnimTagListener(IAnimTagListener* , const IAnimTagListener& );
	void IAnimTagListener(IAnimTagListener* );
	int ()(void) * * _vptr.IAnimTagListener; /* 0 8 */
	/* ../public/animationsystem/ianimtagmanagerinstance.h:39 */
	virtual void ~IAnimTagListener(IAnimTagListener* );
	/* ../public/animationsystem/ianimtagmanagerinstance.h:40 */
	virtual void OnAnimTagEvent(IAnimTagListener* , const IAnimTag* , const AnimTagStatusContext& );
	void IAnimTagListener(class IAnimTagListener *, const class IAnimTagListener  &); /* linkage=_ZN16IAnimTagListenerC4ERKS_ */
	void IAnimTagListener(class IAnimTagListener *); /* linkage=_ZN16IAnimTagListenerC4Ev */
	virtual void ~IAnimTagListener(class IAnimTagListener *); /* linkage=_ZN16IAnimTagListenerD4Ev */
	virtual void OnAnimTagEvent(class IAnimTagListener *, const class IAnimTag  *, const class AnimTagStatusContext  &); /* linkage=_ZN16IAnimTagListener14OnAnimTagEventEPK8IAnimTagRK20AnimTagStatusContext */
};

// <012F6AE3> ../public/animationsystem/ianimtagmanagerinstance.h:36
// member functions: 6
// member variable: 1
// vtable entry: 1
// class size: 8
class IAnimTagListener {
	int ()(void) * * _vptr.IAnimTagListener; /* 0 8 */
	/* ../public/animationsystem/ianimtagmanagerinstance.h:39 */
	virtual void ~IAnimTagListener(IAnimTagListener* );
	/* ../public/animationsystem/ianimtagmanagerinstance.h:40 */
	virtual void OnAnimTagEvent(IAnimTagListener* , const IAnimTag* , const AnimTagStatusContext& );
	void IAnimTagListener(class IAnimTagListener *, const class IAnimTagListener  &); /* linkage=_ZN16IAnimTagListenerC4ERKS_ */
	void IAnimTagListener(class IAnimTagListener *); /* linkage=_ZN16IAnimTagListenerC4Ev */
	virtual void ~IAnimTagListener(class IAnimTagListener *); /* linkage=_ZN16IAnimTagListenerD4Ev */
	virtual void OnAnimTagEvent(class IAnimTagListener *, const class IAnimTag  *, const class AnimTagStatusContext  &); /* linkage=_ZN16IAnimTagListener14OnAnimTagEventEPK8IAnimTagRK20AnimTagStatusContext */
};

// <065817A9> ../public/animationsystem/ianimtagmanagerinstance.h:39
void IAnimTagListener::~IAnimTagListener()
{
} /* size: 0 */

// <06581779> ../public/animationsystem/ianimtagmanagerinstance.h:39
inline void IAnimTagListener::~IAnimTagListener()
{
} /* size: 0 */

// <013174F5> ../public/animationsystem/ianimtagmanagerinstance.h:46
void IAnimTagManagerInstance::IAnimTagManagerInstance()
{
} /* size: 0 */

// <013174D9> ../public/animationsystem/ianimtagmanagerinstance.h:46
inline void IAnimTagManagerInstance::IAnimTagManagerInstance()
{
} /* size: 0 */

// <012FCE0C> ../public/animationsystem/ianimtagmanagerinstance.h:46
// member functions: 19
// member variable: 1
// vtable entries: 5
// class size: 8
class IAnimTagManagerInstance {
	void IAnimTagManagerInstance(IAnimTagManagerInstance* , IAnimTagManagerInstance& );
	void IAnimTagManagerInstance(IAnimTagManagerInstance* , const IAnimTagManagerInstance& );
	void IAnimTagManagerInstance(IAnimTagManagerInstance* );
	void ~IAnimTagManagerInstance(IAnimTagManagerInstance* );
	int ()(void) * * _vptr.IAnimTagManagerInstance; /* 0 8 */
	/* ../public/animationsystem/ianimtagmanagerinstance.h:50 */
	virtual int GetTagCount(const IAnimTagManagerInstance* );
	/* ../public/animationsystem/ianimtagmanagerinstance.h:53 */
	virtual const IAnimTag* GetTag(const IAnimTagManagerInstance* , int);
	/* ../public/animationsystem/ianimtagmanagerinstance.h:56 */
	virtual bool IsTagActive(const IAnimTagManagerInstance* , int);
	/* ../public/animationsystem/ianimtagmanagerinstance.h:60 */
	virtual void ForceEndActiveTags(IAnimTagManagerInstance* );
protected:
	/* ../public/animationsystem/ianimtagmanagerinstance.h:66 */
	virtual CReceiptPtr RegisterListener(IAnimTagManagerInstance* , ClassID, IAnimTagListener* );
	CReceiptPtr RegisterListener<IEventAnimTag>(class IAnimTagManagerInstance *, class IAnimTagListener *); /* linkage=_ZN23IAnimTagManagerInstance16RegisterListenerI13IEventAnimTagEE9CSmartPtrI8CReceipt17CRefCountAccessorEP16IAnimTagListener */
	void IAnimTagManagerInstance(class IAnimTagManagerInstance *, class IAnimTagManagerInstance &); /* linkage=_ZN23IAnimTagManagerInstanceC4EOS_ */
	void IAnimTagManagerInstance(class IAnimTagManagerInstance *, const class IAnimTagManagerInstance  &); /* linkage=_ZN23IAnimTagManagerInstanceC4ERKS_ */
	void IAnimTagManagerInstance(class IAnimTagManagerInstance *); /* linkage=_ZN23IAnimTagManagerInstanceC4Ev */
	void ~IAnimTagManagerInstance(class IAnimTagManagerInstance *); /* linkage=_ZN23IAnimTagManagerInstanceD4Ev */
	virtual int GetTagCount(const class IAnimTagManagerInstance  *); /* linkage=_ZNK23IAnimTagManagerInstance11GetTagCountEv */
	virtual const class IAnimTag  * GetTag(const class IAnimTagManagerInstance  *, int); /* linkage=_ZNK23IAnimTagManagerInstance6GetTagEi */
	virtual bool IsTagActive(const class IAnimTagManagerInstance  *, int); /* linkage=_ZNK23IAnimTagManagerInstance11IsTagActiveEi */
	virtual void ForceEndActiveTags(class IAnimTagManagerInstance *); /* linkage=_ZN23IAnimTagManagerInstance18ForceEndActiveTagsEv */
	virtual CReceiptPtr RegisterListener(class IAnimTagManagerInstance *, class ClassID, class IAnimTagListener *); /* linkage=_ZN23IAnimTagManagerInstance16RegisterListenerEN10Reflection7ClassIDEP16IAnimTagListener */
};

// <0126C9C4> ../public/animationsystem/ianimtagmanagerinstance.h:63
inline void IAnimTagManagerInstance::RegisterListener<IEventAnimTag>(IAnimTagListener* listener)
{
} /* size: 0 */

