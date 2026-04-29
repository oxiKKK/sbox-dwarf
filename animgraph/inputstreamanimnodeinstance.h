
//
// animgraph/inputstreamanimnodeinstance.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <0113DD23> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnodeinstance.h:14
// function calls: 16
void CInputStreamAnimNodeInstance::~CInputStreamAnimNodeInstance()
{
	IInputStreamAnimNodeInstance::~IInputStreamAnimNodeInstance(); // 14
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
} /* size: 114, inline expansions: 16 (327 bytes) */

// <0113D8CD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnodeinstance.h:14
// function calls: 21
void CInputStreamAnimNodeInstance::~CInputStreamAnimNodeInstance()
{
	IInputStreamAnimNodeInstance::~IInputStreamAnimNodeInstance(); // 14
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
	CInputStreamAnimNodeInstance::~CInputStreamAnimNodeInstance(); // 14
} /* size: 118, inline expansions: 21 (339 bytes) */

// <0113D8B1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnodeinstance.h:14
inline void CInputStreamAnimNodeInstance::~CInputStreamAnimNodeInstance()
{
} /* size: 0 */

// <010F9845> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnodeinstance.h:14
// member functions: 22
// member variables: 2
// static member variable: 1
// vtable entries: 5
// class size: 56
class CInputStreamAnimNodeInstance : public CAnimNodeInstanceBase, public IInputStreamAnimNodeInstance {
public:
	/* class CAnimNodeInstanceBase <ancestor>; */ /* 0 0 */
	/* class IInputStreamAnimNodeInstance <ancestor>; */ /* 48 8 */
	void CInputStreamAnimNodeInstance(CInputStreamAnimNodeInstance* , CInputStreamAnimNodeInstance& );
	void CInputStreamAnimNodeInstance(CInputStreamAnimNodeInstance* , const CInputStreamAnimNodeInstance& );
private:
	static class CClassInfoT<CInputStreamAnimNodeInstance> m_classInfoCInputStreamAnimNodeInstance; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnodeinstance.h:16 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnodeinstance.cpp:12 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnodeinstance.cpp:12 */
	virtual const CClassInfo& GetTypeInfo(const CInputStreamAnimNodeInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnodeinstance.cpp:12 */
	virtual void* CastToBase(CInputStreamAnimNodeInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnodeinstance.cpp:12 */
	virtual const void* CastToBase(const CInputStreamAnimNodeInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnodeinstance.cpp:17 */
	void CInputStreamAnimNodeInstance(CInputStreamAnimNodeInstance* , const CAnimNodeBaseConstPtr& , const CAnimUpdateNodeBase* , const CAnimGraphUpdateContextPtr& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnodeinstance.cpp:24 */
	virtual int GetBoneCount(const CInputStreamAnimNodeInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnodeinstance.cpp:38 */
	virtual void SetTransforms(CInputStreamAnimNodeInstance* , const CTransform* , int, BoneTransformSpace_t);
	virtual void ~CInputStreamAnimNodeInstance(CInputStreamAnimNodeInstance* );
	void CInputStreamAnimNodeInstance(class CInputStreamAnimNodeInstance *, class CInputStreamAnimNodeInstance &); /* linkage=_ZN28CInputStreamAnimNodeInstanceC4EOS_ */
	void CInputStreamAnimNodeInstance(class CInputStreamAnimNodeInstance *, const class CInputStreamAnimNodeInstance  &); /* linkage=_ZN28CInputStreamAnimNodeInstanceC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN28CInputStreamAnimNodeInstance8MyTypeIDEv */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN28CInputStreamAnimNodeInstance10MyTypeInfoEv */
	/* <119328f> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnodeinstance.cpp:12 */
	virtual const class CClassInfo  & GetTypeInfo(const class CInputStreamAnimNodeInstance  *); /* linkage=_ZNK28CInputStreamAnimNodeInstance11GetTypeInfoEv */
	virtual void * CastToBase(class CInputStreamAnimNodeInstance *, class ClassID); /* linkage=_ZN28CInputStreamAnimNodeInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class CInputStreamAnimNodeInstance  *, class ClassID); /* linkage=_ZNK28CInputStreamAnimNodeInstance10CastToBaseEN10Reflection7ClassIDE */
	void CInputStreamAnimNodeInstance(class CInputStreamAnimNodeInstance *, const CAnimNodeBaseConstPtr  &, const class CAnimUpdateNodeBase  *, const CAnimGraphUpdateContextPtr  &); /* linkage=_ZN28CInputStreamAnimNodeInstanceC4ERK9CSmartPtrIK13CAnimNodeBase17CRefCountAccessorEPK19CAnimUpdateNodeBaseRKS0_I23CAnimGraphUpdateContextS3_E */
	/* <1194000> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnodeinstance.cpp:24 */
	virtual int GetBoneCount(const class CInputStreamAnimNodeInstance  *); /* linkage=_ZNK28CInputStreamAnimNodeInstance12GetBoneCountEv */
	/* <119407e> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnodeinstance.cpp:38 */
	virtual void SetTransforms(class CInputStreamAnimNodeInstance *, const class CTransform  *, int, enum BoneTransformSpace_t); /* linkage=_ZN28CInputStreamAnimNodeInstance13SetTransformsEPK10CTransformi20BoneTransformSpace_t */
	virtual void ~CInputStreamAnimNodeInstance(class CInputStreamAnimNodeInstance *); /* linkage=_ZN28CInputStreamAnimNodeInstanceD4Ev */
};

// <01181DD1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnodeinstance.h:16
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 16
	const char   __PRETTY_FUNCTION__; // 44645
} /* size: 0, variables: 2 */

// <00F913A8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnodeinstance.h:16
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 16
	const char   __PRETTY_FUNCTION__; // 39133
} /* size: 0, variables: 2 */

// <00F34A5A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnodeinstance.h:18
void CInputStreamAnimNodeInstance::CInputStreamAnimNodeInstance(const CAnimNodeBaseConstPtr& pSrcNode, const CAnimUpdateNodeBase* pUpdateNode, const CAnimGraphUpdateContextPtr& pContext)
{
} /* size: 0 */

