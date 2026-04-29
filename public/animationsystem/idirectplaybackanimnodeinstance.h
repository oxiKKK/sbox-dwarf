
//
// public/animationsystem/idirectplaybackanimnodeinstance.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//
//	functions: 4
//	class: 1
//

// <0106F5F8> ../public/animationsystem/idirectplaybackanimnodeinstance.h:13
void IDirectPlaybackAnimNodeInstance::IDirectPlaybackAnimNodeInstance()
{
} /* size: 0 */

// <0106F5DC> ../public/animationsystem/idirectplaybackanimnodeinstance.h:13
inline void IDirectPlaybackAnimNodeInstance::IDirectPlaybackAnimNodeInstance()
{
} /* size: 0 */

// <0101521D> ../public/animationsystem/idirectplaybackanimnodeinstance.h:13
// member functions: 30
// member variable: 1
// static member variable: 1
// vtable entries: 9
// class size: 8
class IDirectPlaybackAnimNodeInstance {
	void IDirectPlaybackAnimNodeInstance(IDirectPlaybackAnimNodeInstance* , IDirectPlaybackAnimNodeInstance& );
	void IDirectPlaybackAnimNodeInstance(IDirectPlaybackAnimNodeInstance* , const IDirectPlaybackAnimNodeInstance& );
	void IDirectPlaybackAnimNodeInstance(IDirectPlaybackAnimNodeInstance* );
	void ~IDirectPlaybackAnimNodeInstance(IDirectPlaybackAnimNodeInstance* );
	int ()(void) * * _vptr.IDirectPlaybackAnimNodeInstance; /* 0 8 */
private:
	static class CClassInfoT<IDirectPlaybackAnimNodeInstance> m_classInfoIDirectPlaybackAnimNodeInstance; /* 0 0 */
	/* ../public/animationsystem/idirectplaybackanimnodeinstance.h:15 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnodeinstance.cpp:8 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnodeinstance.cpp:8 */
	virtual const CClassInfo& GetTypeInfo(const IDirectPlaybackAnimNodeInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnodeinstance.cpp:8 */
	virtual void* CastToBase(IDirectPlaybackAnimNodeInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnodeinstance.cpp:8 */
	virtual const void* CastToBase(const IDirectPlaybackAnimNodeInstance* , ClassID);
	/* ../public/animationsystem/idirectplaybackanimnodeinstance.h:21 */
	virtual void PlaySequence(IDirectPlaybackAnimNodeInstance* , HSequence);
	/* ../public/animationsystem/idirectplaybackanimnodeinstance.h:25 */
	virtual void PlaySequence(IDirectPlaybackAnimNodeInstance* , HSequence, const Vector& , float, float);
	/* ../public/animationsystem/idirectplaybackanimnodeinstance.h:29 */
	virtual void SetSequenceStartTime(IDirectPlaybackAnimNodeInstance* , float);
	/* ../public/animationsystem/idirectplaybackanimnodeinstance.h:32 */
	virtual float GetSequenceCycle(const IDirectPlaybackAnimNodeInstance* );
	/* ../public/animationsystem/idirectplaybackanimnodeinstance.h:35 */
	virtual void CancelSequence(IDirectPlaybackAnimNodeInstance* );
	/* ../public/animationsystem/idirectplaybackanimnodeinstance.h:38 */
	virtual HSequence GetCurrentSequence(const IDirectPlaybackAnimNodeInstance* );
	void IDirectPlaybackAnimNodeInstance(class IDirectPlaybackAnimNodeInstance *, class IDirectPlaybackAnimNodeInstance &); /* linkage=_ZN31IDirectPlaybackAnimNodeInstanceC4EOS_ */
	void IDirectPlaybackAnimNodeInstance(class IDirectPlaybackAnimNodeInstance *, const class IDirectPlaybackAnimNodeInstance  &); /* linkage=_ZN31IDirectPlaybackAnimNodeInstanceC4ERKS_ */
	void IDirectPlaybackAnimNodeInstance(class IDirectPlaybackAnimNodeInstance *); /* linkage=_ZN31IDirectPlaybackAnimNodeInstanceC4Ev */
	void ~IDirectPlaybackAnimNodeInstance(class IDirectPlaybackAnimNodeInstance *); /* linkage=_ZN31IDirectPlaybackAnimNodeInstanceD4Ev */
	const class ClassID  MyTypeID(void); /* linkage=_ZN31IDirectPlaybackAnimNodeInstance8MyTypeIDEv */
	/* <10955c3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnodeinstance.cpp:8 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN31IDirectPlaybackAnimNodeInstance10MyTypeInfoEv */
	virtual const class CClassInfo  & GetTypeInfo(const class IDirectPlaybackAnimNodeInstance  *); /* linkage=_ZNK31IDirectPlaybackAnimNodeInstance11GetTypeInfoEv */
	virtual void * CastToBase(class IDirectPlaybackAnimNodeInstance *, class ClassID); /* linkage=_ZN31IDirectPlaybackAnimNodeInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class IDirectPlaybackAnimNodeInstance  *, class ClassID); /* linkage=_ZNK31IDirectPlaybackAnimNodeInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual void PlaySequence(class IDirectPlaybackAnimNodeInstance *, class HSequence); /* linkage=_ZN31IDirectPlaybackAnimNodeInstance12PlaySequenceE9HSequence */
	virtual void PlaySequence(class IDirectPlaybackAnimNodeInstance *, class HSequence, const class Vector  &, float, float); /* linkage=_ZN31IDirectPlaybackAnimNodeInstance12PlaySequenceE9HSequenceRK6Vectorff */
	virtual void SetSequenceStartTime(class IDirectPlaybackAnimNodeInstance *, float); /* linkage=_ZN31IDirectPlaybackAnimNodeInstance20SetSequenceStartTimeEf */
	virtual float GetSequenceCycle(const class IDirectPlaybackAnimNodeInstance  *); /* linkage=_ZNK31IDirectPlaybackAnimNodeInstance16GetSequenceCycleEv */
	virtual void CancelSequence(class IDirectPlaybackAnimNodeInstance *); /* linkage=_ZN31IDirectPlaybackAnimNodeInstance14CancelSequenceEv */
	virtual class HSequence GetCurrentSequence(const class IDirectPlaybackAnimNodeInstance  *); /* linkage=_ZNK31IDirectPlaybackAnimNodeInstance18GetCurrentSequenceEv */
};

// <013359FD> ../public/animationsystem/idirectplaybackanimnodeinstance.h:15
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 15
	const char   __PRETTY_FUNCTION__; // 48433
} /* size: 0, variables: 2 */

// <01070730> ../public/animationsystem/idirectplaybackanimnodeinstance.h:15
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 15
	const char   __PRETTY_FUNCTION__; // 21453
} /* size: 0, variables: 2 */

