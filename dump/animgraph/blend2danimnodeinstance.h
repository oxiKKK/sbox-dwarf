
//
// animgraph/blend2danimnodeinstance.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <0104C289> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.h:12
// function calls: 15
void CBlend2DAnimNodeInstance::~CBlend2DAnimNodeInstance()
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

// <0104BE5B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.h:12
// function calls: 20
void CBlend2DAnimNodeInstance::~CBlend2DAnimNodeInstance()
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
	CBlend2DAnimNodeInstance::~CBlend2DAnimNodeInstance(); // 12
} /* size: 121, inline expansions: 20 (334 bytes) */

// <0104BE3F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.h:12
inline void CBlend2DAnimNodeInstance::~CBlend2DAnimNodeInstance()
{
} /* size: 0 */

// <0100C12D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.h:12
// member functions: 34
// member variables: 2
// static member variable: 1
// vtable entries: 11
// class size: 56
class CBlend2DAnimNodeInstance : public CAnimNodeInstanceBase, public IBlend2DAnimNodeInstance {
public:
	/* class CAnimNodeInstanceBase <ancestor>; */ /* 0 48 */
	/* class IBlend2DAnimNodeInstance <ancestor>; */ /* 48 8 */
	void CBlend2DAnimNodeInstance(CBlend2DAnimNodeInstance* , CBlend2DAnimNodeInstance& );
	void CBlend2DAnimNodeInstance(CBlend2DAnimNodeInstance* , const CBlend2DAnimNodeInstance& );
private:
	static class CClassInfoT<CBlend2DAnimNodeInstance> m_classInfoCBlend2DAnimNodeInstance; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.h:14 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.cpp:11 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.cpp:11 */
	virtual const CClassInfo& GetTypeInfo(const CBlend2DAnimNodeInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.cpp:11 */
	virtual void* CastToBase(CBlend2DAnimNodeInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.cpp:11 */
	virtual const void* CastToBase(const CBlend2DAnimNodeInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.cpp:16 */
	void CBlend2DAnimNodeInstance(CBlend2DAnimNodeInstance* , const CAnimNodeBaseConstPtr& , const CAnimUpdateNodeBase* , const CAnimGraphUpdateContextPtr& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.cpp:23 */
	virtual bool IsManualModeEnabled(const CBlend2DAnimNodeInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.cpp:30 */
	virtual void SetManualModeEnable(CBlend2DAnimNodeInstance* , bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.cpp:37 */
	virtual Vector2D GetTargetBlendValue(const CBlend2DAnimNodeInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.cpp:44 */
	virtual void SetTargetBlendValue(CBlend2DAnimNodeInstance* , const Vector2D& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.cpp:51 */
	virtual Vector2D GetCurrentBlendValue(const CBlend2DAnimNodeInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.cpp:58 */
	virtual void SetCycle(CBlend2DAnimNodeInstance* , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.cpp:65 */
	virtual void SetPlaybackRate(CBlend2DAnimNodeInstance* , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.cpp:72 */
	virtual const Blend2DWeights_t& GetWeights(const CBlend2DAnimNodeInstance* );
	virtual void ~CBlend2DAnimNodeInstance(CBlend2DAnimNodeInstance* );
	void CBlend2DAnimNodeInstance(class CBlend2DAnimNodeInstance *, class CBlend2DAnimNodeInstance &); /* linkage=_ZN24CBlend2DAnimNodeInstanceC4EOS_ */
	void CBlend2DAnimNodeInstance(class CBlend2DAnimNodeInstance *, const class CBlend2DAnimNodeInstance  &); /* linkage=_ZN24CBlend2DAnimNodeInstanceC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN24CBlend2DAnimNodeInstance8MyTypeIDEv */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN24CBlend2DAnimNodeInstance10MyTypeInfoEv */
	/* <1090475> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.cpp:11 */
	virtual const class CClassInfo  & GetTypeInfo(const class CBlend2DAnimNodeInstance  *); /* linkage=_ZNK24CBlend2DAnimNodeInstance11GetTypeInfoEv */
	virtual void * CastToBase(class CBlend2DAnimNodeInstance *, class ClassID); /* linkage=_ZN24CBlend2DAnimNodeInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class CBlend2DAnimNodeInstance  *, class ClassID); /* linkage=_ZNK24CBlend2DAnimNodeInstance10CastToBaseEN10Reflection7ClassIDE */
	void CBlend2DAnimNodeInstance(class CBlend2DAnimNodeInstance *, const CAnimNodeBaseConstPtr  &, const class CAnimUpdateNodeBase  *, const CAnimGraphUpdateContextPtr  &); /* linkage=_ZN24CBlend2DAnimNodeInstanceC4ERK9CSmartPtrIK13CAnimNodeBase17CRefCountAccessorEPK19CAnimUpdateNodeBaseRKS0_I23CAnimGraphUpdateContextS3_E */
	/* <1090e0e> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.cpp:23 */
	virtual bool IsManualModeEnabled(const class CBlend2DAnimNodeInstance  *); /* linkage=_ZNK24CBlend2DAnimNodeInstance19IsManualModeEnabledEv */
	/* <1090e8c> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.cpp:30 */
	virtual void SetManualModeEnable(class CBlend2DAnimNodeInstance *, bool); /* linkage=_ZN24CBlend2DAnimNodeInstance19SetManualModeEnableEb */
	/* <1090f22> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.cpp:37 */
	virtual class Vector2D GetTargetBlendValue(const class CBlend2DAnimNodeInstance  *); /* linkage=_ZNK24CBlend2DAnimNodeInstance19GetTargetBlendValueEv */
	/* <1090fb9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.cpp:44 */
	virtual void SetTargetBlendValue(class CBlend2DAnimNodeInstance *, const class Vector2D  &); /* linkage=_ZN24CBlend2DAnimNodeInstance19SetTargetBlendValueERK8Vector2D */
	/* <109104c> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.cpp:51 */
	virtual class Vector2D GetCurrentBlendValue(const class CBlend2DAnimNodeInstance  *); /* linkage=_ZNK24CBlend2DAnimNodeInstance20GetCurrentBlendValueEv */
	/* <10910e3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.cpp:58 */
	virtual void SetCycle(class CBlend2DAnimNodeInstance *, float); /* linkage=_ZN24CBlend2DAnimNodeInstance8SetCycleEf */
	/* <1091178> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.cpp:65 */
	virtual void SetPlaybackRate(class CBlend2DAnimNodeInstance *, float); /* linkage=_ZN24CBlend2DAnimNodeInstance15SetPlaybackRateEf */
	/* <109120d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.cpp:72 */
	virtual const class Blend2DWeights_t  & GetWeights(const class CBlend2DAnimNodeInstance  *); /* linkage=_ZNK24CBlend2DAnimNodeInstance10GetWeightsEv */
	virtual void ~CBlend2DAnimNodeInstance(class CBlend2DAnimNodeInstance *); /* linkage=_ZN24CBlend2DAnimNodeInstanceD4Ev */
};

// <0107EEC4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.h:14
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 14
	const char   __PRETTY_FUNCTION__; // 21289
} /* size: 0, variables: 2 */

// <00F91377> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.h:14
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 14
	const char   __PRETTY_FUNCTION__; // 39030
} /* size: 0, variables: 2 */

// <00F34B02> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.h:16
void CBlend2DAnimNodeInstance::CBlend2DAnimNodeInstance(const CAnimNodeBaseConstPtr& pSrcNode, const CAnimUpdateNodeBase* pUpdateNode, const CAnimGraphUpdateContextPtr& pContext)
{
} /* size: 0 */

