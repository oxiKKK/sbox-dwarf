
//
// animgraph/animtagmanagerinstance.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 4
//	class: 1
//

// <0130461F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagmanagerinstance.h:17
// function calls: 20
void CAnimTagManagerInstance::~CAnimTagManagerInstance()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphUpdateContextBuilder>(CAnimGraphUpdateContextBuilder* pObj); // 344
	CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>::~CSmartPtr(); // 17
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CAnimTagManager>(const CAnimTagManager* pObj); // 344
	CSmartPtr<const CAnimTagManager, CRefCountAccessor>::~CSmartPtr(); // 17
	ValidateAlignment<CUtlHashtableEntry<Reflection::ClassID, CUtlVector<IAnimTagListener*> > >(void); // 508
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CUtlVector<IAnimTagListener::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CUtlVector<IAnimTagListener::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CUtlVector<IAnimTagListener::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CUtlVector<IAnimTagListener::~CUtlMemory(); // 188
	CUtlHashtable<Reflection::ClassID, CUtlVector<IAnimTagListener::~CUtlHashtable(); // 17
} /* size: 142, inline expansions: 20 (287 bytes) */

// <0130414E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagmanagerinstance.h:17
// function calls: 23
void CAnimTagManagerInstance::~CAnimTagManagerInstance()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphUpdateContextBuilder>(CAnimGraphUpdateContextBuilder* pObj); // 344
	CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>::~CSmartPtr(); // 17
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CAnimTagManager>(const CAnimTagManager* pObj); // 344
	CSmartPtr<const CAnimTagManager, CRefCountAccessor>::~CSmartPtr(); // 17
	ValidateAlignment<CUtlHashtableEntry<Reflection::ClassID, CUtlVector<IAnimTagListener*> > >(void); // 508
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CUtlVector<IAnimTagListener::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CUtlVector<IAnimTagListener::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CUtlVector<IAnimTagListener::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CUtlVector<IAnimTagListener::~CUtlMemory(); // 188
	CUtlHashtable<Reflection::ClassID, CUtlVector<IAnimTagListener::~CUtlHashtable(); // 17
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 17
	CAnimTagManagerInstance::~CAnimTagManagerInstance(); // 17
} /* size: 142, inline expansions: 23 (367 bytes) */

// <01304132> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagmanagerinstance.h:17
inline void CAnimTagManagerInstance::~CAnimTagManagerInstance()
{
} /* size: 0 */

// <012F97B6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagmanagerinstance.h:17
// member functions: 28
// member variables: 5
// vtable entries: 5
// class size: 72
class CAnimTagManagerInstance : public IAnimTagManagerInstance, public CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > {
public:
	/* class IAnimTagManagerInstance <ancestor>; */ /* 0 8 */
	/* class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > <ancestor>; */ /* 8 16 */
	void CAnimTagManagerInstance(CAnimTagManagerInstance* , CAnimTagManagerInstance& );
	void CAnimTagManagerInstance(CAnimTagManagerInstance* , const CAnimTagManagerInstance& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagmanagerinstance.cpp:10 */
	void CAnimTagManagerInstance(CAnimTagManagerInstance* , const CAnimTagManagerConstPtr& , const CAnimGraphUpdateContextBuilderPtr& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagmanagerinstance.cpp:18 */
	virtual int GetTagCount(const CAnimTagManagerInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagmanagerinstance.cpp:24 */
	virtual const IAnimTag* GetTag(const CAnimTagManagerInstance* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagmanagerinstance.cpp:55 */
	virtual bool IsTagActive(const CAnimTagManagerInstance* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagmanagerinstance.cpp:65 */
	virtual void ForceEndActiveTags(CAnimTagManagerInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagmanagerinstance.cpp:30 */
	virtual CReceiptPtr RegisterListener(CAnimTagManagerInstance* , ClassID, IAnimTagListener* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagmanagerinstance.cpp:78 */
	const IAnimTag* GetTag(const CAnimTagManagerInstance* , AnimTagID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagmanagerinstance.cpp:84 */
	void SendTagEvent(const CAnimTagManagerInstance* , int, const AnimTagStatusContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagmanagerinstance.cpp:109 */
	void UnregisterListener(CAnimTagManagerInstance* , ClassID, IAnimTagListener* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagmanagerinstance.cpp:122 */
	void Save(const CAnimTagManagerInstance* , ISave* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagmanagerinstance.cpp:129 */
	void Restore(CAnimTagManagerInstance* , IRestore* );
private:
	CUtlHashtable<Reflection::ClassID, CUtlVector<IAnimTagListener*, CUtlMemory<IAnimTagListener*, int> >, DefaultHashFunctor<Reflection::ClassID>, DefaultEqualFunctor<Reflection::ClassID>, undefined_t, CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CUtlVector<IAnimTagListener*, CUtlMemory<IAnimTagListener*, int> > >, int> > m_listeners; /* 24 32 */
	CAnimTagManagerConstPtr m_pSourceTagMgr; /* 56 8 */
	CAnimGraphUpdateContextBuilderPtr m_pUpdateContext; /* 64 8 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagmanagerinstance.h:53 */
	typedef struct CUtlVector<IAnimTagListener*, CUtlMemory<IAnimTagListener*, int> > ListenerList;
	/* tag__fprintf: const_type tag not supported! */;
	virtual void ~CAnimTagManagerInstance(CAnimTagManagerInstance* );
	void CAnimTagManagerInstance(class CAnimTagManagerInstance *, const CAnimTagManagerConstPtr  &, const CAnimGraphUpdateContextBuilderPtr  &); /* linkage=_ZN23CAnimTagManagerInstanceC4ERK9CSmartPtrIK15CAnimTagManager17CRefCountAccessorERKS0_I30CAnimGraphUpdateContextBuilderS3_E */
	void CAnimTagManagerInstance(class CAnimTagManagerInstance *, class CAnimTagManagerInstance &); /* linkage=_ZN23CAnimTagManagerInstanceC4EOS_ */
	void CAnimTagManagerInstance(class CAnimTagManagerInstance *, const class CAnimTagManagerInstance  &); /* linkage=_ZN23CAnimTagManagerInstanceC4ERKS_ */
	virtual int GetTagCount(const class CAnimTagManagerInstance  *); /* linkage=_ZNK23CAnimTagManagerInstance11GetTagCountEv */
	virtual const class IAnimTag  * GetTag(const class CAnimTagManagerInstance  *, int); /* linkage=_ZNK23CAnimTagManagerInstance6GetTagEi */
	virtual bool IsTagActive(const class CAnimTagManagerInstance  *, int); /* linkage=_ZNK23CAnimTagManagerInstance11IsTagActiveEi */
	virtual void ForceEndActiveTags(class CAnimTagManagerInstance *); /* linkage=_ZN23CAnimTagManagerInstance18ForceEndActiveTagsEv */
	virtual CReceiptPtr RegisterListener(class CAnimTagManagerInstance *, class ClassID, class IAnimTagListener *); /* linkage=_ZN23CAnimTagManagerInstance16RegisterListenerEN10Reflection7ClassIDEP16IAnimTagListener */
	const class IAnimTag  * GetTag(const class CAnimTagManagerInstance  *, class AnimTagID); /* linkage=_ZNK23CAnimTagManagerInstance6GetTagE9AnimTagID */
	void SendTagEvent(const class CAnimTagManagerInstance  *, int, const class AnimTagStatusContext  &); /* linkage=_ZNK23CAnimTagManagerInstance12SendTagEventEiRK20AnimTagStatusContext */
	void UnregisterListener(class CAnimTagManagerInstance *, class ClassID, class IAnimTagListener *); /* linkage=_ZN23CAnimTagManagerInstance18UnregisterListenerEN10Reflection7ClassIDEP16IAnimTagListener */
	void Save(const class CAnimTagManagerInstance  *, class ISave *); /* linkage=_ZNK23CAnimTagManagerInstance4SaveEP5ISave */
	void Restore(class CAnimTagManagerInstance *, class IRestore *); /* linkage=_ZN23CAnimTagManagerInstance7RestoreEP8IRestore */
	virtual void ~CAnimTagManagerInstance(class CAnimTagManagerInstance *); /* linkage=_ZN23CAnimTagManagerInstanceD4Ev */
};

// <00DF4FDE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagmanagerinstance.h:20
void CAnimTagManagerInstance::CAnimTagManagerInstance(const CAnimTagManagerConstPtr& sourceTagMgr, const CAnimGraphUpdateContextBuilderPtr& pUpdateContext)
{
} /* size: 0 */

