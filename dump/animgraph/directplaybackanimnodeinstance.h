
//
// animgraph/directplaybackanimnodeinstance.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <0105087B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnodeinstance.h:12
// function calls: 15
void CDirectPlaybackAnimNodeInstance::~CDirectPlaybackAnimNodeInstance()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphUpdateContext>(CAnimGraphUpdateContext* pObj); // 344
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::~CSmartPtr(); // 15
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CAnimNodeBase>(const CAnimNodeBase* pObj); // 344
	CSmartPtr<const CAnimNodeBase, CRefCountAccessor>::~CSmartPtr(); // 15
	CAnimNodeInstanceBase::~CAnimNodeInstanceBase(); // 12
} /* size: 122, inline expansions: 15 (349 bytes) */

// <0105044D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnodeinstance.h:12
// function calls: 20
void CDirectPlaybackAnimNodeInstance::~CDirectPlaybackAnimNodeInstance()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphUpdateContext>(CAnimGraphUpdateContext* pObj); // 344
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::~CSmartPtr(); // 15
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CAnimNodeBase>(const CAnimNodeBase* pObj); // 344
	CSmartPtr<const CAnimNodeBase, CRefCountAccessor>::~CSmartPtr(); // 15
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 15
	Object::~Object(); // 14
	IAnimNodeInstance::~IAnimNodeInstance(); // 15
	CAnimNodeInstanceBase::~CAnimNodeInstanceBase(); // 12
	CDirectPlaybackAnimNodeInstance::~CDirectPlaybackAnimNodeInstance(); // 12
} /* size: 121, inline expansions: 20 (334 bytes) */

// <01050431> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnodeinstance.h:12
inline void CDirectPlaybackAnimNodeInstance::~CDirectPlaybackAnimNodeInstance()
{
} /* size: 0 */

// <01015485> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnodeinstance.h:12
// member functions: 30
// member variables: 2
// static member variable: 1
// vtable entries: 9
// class size: 56
class CDirectPlaybackAnimNodeInstance : public CAnimNodeInstanceBase, public IDirectPlaybackAnimNodeInstance {
public:
	/* class CAnimNodeInstanceBase <ancestor>; */ /* 0 48 */
	/* class IDirectPlaybackAnimNodeInstance <ancestor>; */ /* 48 8 */
	void CDirectPlaybackAnimNodeInstance(CDirectPlaybackAnimNodeInstance* , CDirectPlaybackAnimNodeInstance& );
	void CDirectPlaybackAnimNodeInstance(CDirectPlaybackAnimNodeInstance* , const CDirectPlaybackAnimNodeInstance& );
private:
	static class CClassInfoT<CDirectPlaybackAnimNodeInstance> m_classInfoCDirectPlaybackAnimNodeInstance; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnodeinstance.h:14 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnodeinstance.cpp:10 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnodeinstance.cpp:10 */
	virtual const CClassInfo& GetTypeInfo(const CDirectPlaybackAnimNodeInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnodeinstance.cpp:10 */
	virtual void* CastToBase(CDirectPlaybackAnimNodeInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnodeinstance.cpp:10 */
	virtual const void* CastToBase(const CDirectPlaybackAnimNodeInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnodeinstance.cpp:15 */
	void CDirectPlaybackAnimNodeInstance(CDirectPlaybackAnimNodeInstance* , const CAnimNodeBaseConstPtr& , const CAnimUpdateNodeBase* , const CAnimGraphUpdateContextPtr& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnodeinstance.cpp:22 */
	virtual void PlaySequence(CDirectPlaybackAnimNodeInstance* , HSequence);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnodeinstance.cpp:32 */
	virtual void PlaySequence(CDirectPlaybackAnimNodeInstance* , HSequence, const Vector& , float, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnodeinstance.cpp:42 */
	virtual void SetSequenceStartTime(CDirectPlaybackAnimNodeInstance* , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnodeinstance.cpp:52 */
	virtual float GetSequenceCycle(const CDirectPlaybackAnimNodeInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnodeinstance.cpp:66 */
	virtual void CancelSequence(CDirectPlaybackAnimNodeInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnodeinstance.cpp:76 */
	virtual HSequence GetCurrentSequence(const CDirectPlaybackAnimNodeInstance* );
	virtual void ~CDirectPlaybackAnimNodeInstance(CDirectPlaybackAnimNodeInstance* );
	void CDirectPlaybackAnimNodeInstance(class CDirectPlaybackAnimNodeInstance *, class CDirectPlaybackAnimNodeInstance &); /* linkage=_ZN31CDirectPlaybackAnimNodeInstanceC4EOS_ */
	void CDirectPlaybackAnimNodeInstance(class CDirectPlaybackAnimNodeInstance *, const class CDirectPlaybackAnimNodeInstance  &); /* linkage=_ZN31CDirectPlaybackAnimNodeInstanceC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN31CDirectPlaybackAnimNodeInstance8MyTypeIDEv */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN31CDirectPlaybackAnimNodeInstance10MyTypeInfoEv */
	/* <1090926> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnodeinstance.cpp:10 */
	virtual const class CClassInfo  & GetTypeInfo(const class CDirectPlaybackAnimNodeInstance  *); /* linkage=_ZNK31CDirectPlaybackAnimNodeInstance11GetTypeInfoEv */
	virtual void * CastToBase(class CDirectPlaybackAnimNodeInstance *, class ClassID); /* linkage=_ZN31CDirectPlaybackAnimNodeInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class CDirectPlaybackAnimNodeInstance  *, class ClassID); /* linkage=_ZNK31CDirectPlaybackAnimNodeInstance10CastToBaseEN10Reflection7ClassIDE */
	void CDirectPlaybackAnimNodeInstance(class CDirectPlaybackAnimNodeInstance *, const CAnimNodeBaseConstPtr  &, const class CAnimUpdateNodeBase  *, const CAnimGraphUpdateContextPtr  &); /* linkage=_ZN31CDirectPlaybackAnimNodeInstanceC4ERK9CSmartPtrIK13CAnimNodeBase17CRefCountAccessorEPK19CAnimUpdateNodeBaseRKS0_I23CAnimGraphUpdateContextS3_E */
	/* <1091cd0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnodeinstance.cpp:22 */
	virtual void PlaySequence(class CDirectPlaybackAnimNodeInstance *, class HSequence); /* linkage=_ZN31CDirectPlaybackAnimNodeInstance12PlaySequenceE9HSequence */
	/* <1091de0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnodeinstance.cpp:32 */
	virtual void PlaySequence(class CDirectPlaybackAnimNodeInstance *, class HSequence, const class Vector  &, float, float); /* linkage=_ZN31CDirectPlaybackAnimNodeInstance12PlaySequenceE9HSequenceRK6Vectorff */
	/* <1091eac> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnodeinstance.cpp:42 */
	virtual void SetSequenceStartTime(class CDirectPlaybackAnimNodeInstance *, float); /* linkage=_ZN31CDirectPlaybackAnimNodeInstance20SetSequenceStartTimeEf */
	/* <1091f41> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnodeinstance.cpp:52 */
	virtual float GetSequenceCycle(const class CDirectPlaybackAnimNodeInstance  *); /* linkage=_ZNK31CDirectPlaybackAnimNodeInstance16GetSequenceCycleEv */
	/* <1091d5b> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnodeinstance.cpp:66 */
	virtual void CancelSequence(class CDirectPlaybackAnimNodeInstance *); /* linkage=_ZN31CDirectPlaybackAnimNodeInstance14CancelSequenceEv */
	/* <1091fca> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnodeinstance.cpp:76 */
	virtual class HSequence GetCurrentSequence(const class CDirectPlaybackAnimNodeInstance  *); /* linkage=_ZNK31CDirectPlaybackAnimNodeInstance18GetCurrentSequenceEv */
	virtual void ~CDirectPlaybackAnimNodeInstance(class CDirectPlaybackAnimNodeInstance *); /* linkage=_ZN31CDirectPlaybackAnimNodeInstanceD4Ev */
};

// <010706FF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnodeinstance.h:14
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 14
	const char   __PRETTY_FUNCTION__; // 21453
} /* size: 0, variables: 2 */

// <00F914CE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnodeinstance.h:14
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 14
	const char   __PRETTY_FUNCTION__; // 39209
} /* size: 0, variables: 2 */

// <00F3466A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnodeinstance.h:16
void CDirectPlaybackAnimNodeInstance::CDirectPlaybackAnimNodeInstance(const CAnimNodeBaseConstPtr& pSrcNode, const CAnimUpdateNodeBase* pUpdateNode, const CAnimGraphUpdateContextPtr& pContext)
{
} /* size: 0 */

