
//
// animgraph/footlockanimnodeinstance.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <0105284C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.h:14
// function calls: 15
void CFootLockAnimNodeInstance::~CFootLockAnimNodeInstance()
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
	CAnimNodeInstanceBase::~CAnimNodeInstanceBase(); // 14
} /* size: 122, inline expansions: 15 (349 bytes) */

// <0105241E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.h:14
// function calls: 20
void CFootLockAnimNodeInstance::~CFootLockAnimNodeInstance()
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
	CAnimNodeInstanceBase::~CAnimNodeInstanceBase(); // 14
	CFootLockAnimNodeInstance::~CFootLockAnimNodeInstance(); // 14
} /* size: 121, inline expansions: 20 (334 bytes) */

// <01052402> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.h:14
inline void CFootLockAnimNodeInstance::~CFootLockAnimNodeInstance()
{
} /* size: 0 */

// <010346F9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.h:14
// member functions: 44
// member variables: 2
// static member variable: 1
// vtable entries: 15
// class size: 56
class CFootLockAnimNodeInstance : public CAnimNodeInstanceBase, public IFootLockAnimNodeInstance {
public:
	/* class CAnimNodeInstanceBase <ancestor>; */ /* 0 48 */
	/* class IFootLockAnimNodeInstance <ancestor>; */ /* 48 8 */
	void CFootLockAnimNodeInstance(CFootLockAnimNodeInstance* , CFootLockAnimNodeInstance& );
	void CFootLockAnimNodeInstance(CFootLockAnimNodeInstance* , const CFootLockAnimNodeInstance& );
private:
	static class CClassInfoT<CFootLockAnimNodeInstance> m_classInfoCFootLockAnimNodeInstance; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.h:16 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:10 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:10 */
	virtual const CClassInfo& GetTypeInfo(const CFootLockAnimNodeInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:10 */
	virtual void* CastToBase(CFootLockAnimNodeInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:10 */
	virtual const void* CastToBase(const CFootLockAnimNodeInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:14 */
	void CFootLockAnimNodeInstance(CFootLockAnimNodeInstance* , const CAnimNodeBaseConstPtr& , const CAnimUpdateNodeBase* , const CAnimGraphUpdateContextPtr& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:21 */
	virtual int GetFootCount(const CFootLockAnimNodeInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:28 */
	virtual const VectorAligned& GetCurrentFootPosition(const CFootLockAnimNodeInstance* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:34 */
	virtual const VectorAligned& GetCurrentFootDirection(const CFootLockAnimNodeInstance* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:40 */
	virtual const VectorAligned& GetNextFootPosition(const CFootLockAnimNodeInstance* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:46 */
	virtual VectorAligned GetNextFootDirection(const CFootLockAnimNodeInstance* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:52 */
	virtual const VectorAligned& GetPrevFootPosition(const CFootLockAnimNodeInstance* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:58 */
	virtual VectorAligned GetPrevFootDirection(const CFootLockAnimNodeInstance* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:64 */
	virtual VectorAligned GetMidpointFootPosition(const CFootLockAnimNodeInstance* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:70 */
	virtual float GetFootProgression(const CFootLockAnimNodeInstance* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:76 */
	virtual FootMotionStage GetFootMotionStage(const CFootLockAnimNodeInstance* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:82 */
	virtual FootLockStatus GetFootLockStatus(const CFootLockAnimNodeInstance* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:93 */
	virtual Vector GetTiltVector(const CFootLockAnimNodeInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:88 */
	const CFootLockUpdateNode* GetUpdateNode(const CFootLockAnimNodeInstance* );
	virtual void ~CFootLockAnimNodeInstance(CFootLockAnimNodeInstance* );
	void CFootLockAnimNodeInstance(class CFootLockAnimNodeInstance *, class CFootLockAnimNodeInstance &); /* linkage=_ZN25CFootLockAnimNodeInstanceC4EOS_ */
	void CFootLockAnimNodeInstance(class CFootLockAnimNodeInstance *, const class CFootLockAnimNodeInstance  &); /* linkage=_ZN25CFootLockAnimNodeInstanceC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN25CFootLockAnimNodeInstance8MyTypeIDEv */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN25CFootLockAnimNodeInstance10MyTypeInfoEv */
	/* <10909ca> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:10 */
	virtual const class CClassInfo  & GetTypeInfo(const class CFootLockAnimNodeInstance  *); /* linkage=_ZNK25CFootLockAnimNodeInstance11GetTypeInfoEv */
	virtual void * CastToBase(class CFootLockAnimNodeInstance *, class ClassID); /* linkage=_ZN25CFootLockAnimNodeInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class CFootLockAnimNodeInstance  *, class ClassID); /* linkage=_ZNK25CFootLockAnimNodeInstance10CastToBaseEN10Reflection7ClassIDE */
	void CFootLockAnimNodeInstance(class CFootLockAnimNodeInstance *, const CAnimNodeBaseConstPtr  &, const class CAnimUpdateNodeBase  *, const CAnimGraphUpdateContextPtr  &); /* linkage=_ZN25CFootLockAnimNodeInstanceC4ERK9CSmartPtrIK13CAnimNodeBase17CRefCountAccessorEPK19CAnimUpdateNodeBaseRKS0_I23CAnimGraphUpdateContextS3_E */
	/* <1092056> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:21 */
	virtual int GetFootCount(const class CFootLockAnimNodeInstance  *); /* linkage=_ZNK25CFootLockAnimNodeInstance12GetFootCountEv */
	/* <10920fb> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:28 */
	virtual const class VectorAligned  & GetCurrentFootPosition(const class CFootLockAnimNodeInstance  *, int); /* linkage=_ZNK25CFootLockAnimNodeInstance22GetCurrentFootPositionEi */
	/* <10921b5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:34 */
	virtual const class VectorAligned  & GetCurrentFootDirection(const class CFootLockAnimNodeInstance  *, int); /* linkage=_ZNK25CFootLockAnimNodeInstance23GetCurrentFootDirectionEi */
	/* <109226f> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:40 */
	virtual const class VectorAligned  & GetNextFootPosition(const class CFootLockAnimNodeInstance  *, int); /* linkage=_ZNK25CFootLockAnimNodeInstance19GetNextFootPositionEi */
	/* <1092329> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:46 */
	virtual class VectorAligned GetNextFootDirection(const class CFootLockAnimNodeInstance  *, int); /* linkage=_ZNK25CFootLockAnimNodeInstance20GetNextFootDirectionEi */
	/* <10923e3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:52 */
	virtual const class VectorAligned  & GetPrevFootPosition(const class CFootLockAnimNodeInstance  *, int); /* linkage=_ZNK25CFootLockAnimNodeInstance19GetPrevFootPositionEi */
	/* <109249d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:58 */
	virtual class VectorAligned GetPrevFootDirection(const class CFootLockAnimNodeInstance  *, int); /* linkage=_ZNK25CFootLockAnimNodeInstance20GetPrevFootDirectionEi */
	/* <1092557> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:64 */
	virtual class VectorAligned GetMidpointFootPosition(const class CFootLockAnimNodeInstance  *, int); /* linkage=_ZNK25CFootLockAnimNodeInstance23GetMidpointFootPositionEi */
	/* <1092611> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:70 */
	virtual float GetFootProgression(const class CFootLockAnimNodeInstance  *, int); /* linkage=_ZNK25CFootLockAnimNodeInstance18GetFootProgressionEi */
	/* <10926cb> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:76 */
	virtual enum FootMotionStage GetFootMotionStage(const class CFootLockAnimNodeInstance  *, int); /* linkage=_ZNK25CFootLockAnimNodeInstance18GetFootMotionStageEi */
	/* <1092785> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:82 */
	virtual enum FootLockStatus GetFootLockStatus(const class CFootLockAnimNodeInstance  *, int); /* linkage=_ZNK25CFootLockAnimNodeInstance17GetFootLockStatusEi */
	/* <109283f> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:93 */
	virtual class Vector GetTiltVector(const class CFootLockAnimNodeInstance  *); /* linkage=_ZNK25CFootLockAnimNodeInstance13GetTiltVectorEv */
	/* <1095659> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:88 */
	const class CFootLockUpdateNode  * GetUpdateNode(const class CFootLockAnimNodeInstance  *); /* linkage=_ZNK25CFootLockAnimNodeInstance13GetUpdateNodeEv */
	virtual void ~CFootLockAnimNodeInstance(class CFootLockAnimNodeInstance *); /* linkage=_ZN25CFootLockAnimNodeInstanceD4Ev */
};

// <01066EDB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.h:16
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 16
	const char   __PRETTY_FUNCTION__; // 21316
} /* size: 0, variables: 2 */

// <00F9143B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.h:16
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 16
	const char   __PRETTY_FUNCTION__; // 39057
} /* size: 0, variables: 2 */

// <00F34862> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.h:18
void CFootLockAnimNodeInstance::CFootLockAnimNodeInstance(const CAnimNodeBaseConstPtr& pSrcNode, const CAnimUpdateNodeBase* pUpdateNode, const CAnimGraphUpdateContextPtr& pContext)
{
} /* size: 0 */

