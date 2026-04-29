
//
// public/animationsystem/animtaglistenerhelper.h
//
//	referenced by: libengine2.so
//				   libmeshsystem.so
//
//	functions: 9
//	class: 1
//

// <00123F78> ../public/animationsystem/animtaglistenerhelper.h:13
// member functions: 12
// member variables: 3
// vtable entry: 1
// class size: 40
class CAnimTagListenerHelper<IEventAnimTag> : public IAnimTagListener {
public:
	/* class IAnimTagListener <ancestor>; */ /* 0 8 */
	void CAnimTagListenerHelper(CAnimTagListenerHelper<IEventAnimTag>* , const CAnimTagListenerHelper<IEventAnimTag>& );
	/* ../public/animationsystem/animtaglistenerhelper.h:16 */
	void CAnimTagListenerHelper(CAnimTagListenerHelper<IEventAnimTag>* );
	/* ../public/animationsystem/animtaglistenerhelper.h:18 */
	virtual void ~CAnimTagListenerHelper(CAnimTagListenerHelper<IEventAnimTag>* );
	/* ../public/animationsystem/animtaglistenerhelper.h:20 */
	void Register(CAnimTagListenerHelper<IEventAnimTag>* , IAnimTagManagerInstance* , CUtlDelegate<void(const IEventAnimTag*, const AnimTagStatusContext&)>);
	/* ../public/animationsystem/animtaglistenerhelper.h:32 */
	void Unregister(CAnimTagListenerHelper<IEventAnimTag>* );
	/* ../public/animationsystem/animtaglistenerhelper.h:38 */
	virtual void OnAnimTagEvent(CAnimTagListenerHelper<IEventAnimTag>* , const IAnimTag* , const AnimTagStatusContext& );
private:
	CUtlDelegate<void(const IEventAnimTag*, const AnimTagStatusContext&)> m_delegate; /* 8 24 */
	CReceiptPtr m_unregisterReceipt; /* 32 8 */
	void CAnimTagListenerHelper(class CAnimTagListenerHelper<IEventAnimTag> *, const class CAnimTagListenerHelper<IEventAnimTag>  &); /* linkage=_ZN22CAnimTagListenerHelperI13IEventAnimTagEC4ERKS1_ */
	void CAnimTagListenerHelper(class CAnimTagListenerHelper<IEventAnimTag> *); /* linkage=_ZN22CAnimTagListenerHelperI13IEventAnimTagEC4Ev */
	virtual void ~CAnimTagListenerHelper(class CAnimTagListenerHelper<IEventAnimTag> *); /* linkage=_ZN22CAnimTagListenerHelperI13IEventAnimTagED4Ev */
	void Register(class CAnimTagListenerHelper<IEventAnimTag> *, class IAnimTagManagerInstance *, class CUtlDelegate<void(const IEventAnimTag*, const AnimTagStatusContext&)>); /* linkage=_ZN22CAnimTagListenerHelperI13IEventAnimTagE8RegisterEP23IAnimTagManagerInstance12CUtlDelegateIFvPKS0_RK20AnimTagStatusContextEE */
	void Unregister(class CAnimTagListenerHelper<IEventAnimTag> *); /* linkage=_ZN22CAnimTagListenerHelperI13IEventAnimTagE10UnregisterEv */
	virtual void OnAnimTagEvent(class CAnimTagListenerHelper<IEventAnimTag> *, const class IAnimTag  *, const class AnimTagStatusContext  &); /* linkage=_ZN22CAnimTagListenerHelperI13IEventAnimTagE14OnAnimTagEventEPK8IAnimTagRK20AnimTagStatusContext */
};

// <03E8A9A4> ../public/animationsystem/animtaglistenerhelper.h:16
void CAnimTagListenerHelper<IEventAnimTag>::CAnimTagListenerHelper()
{
} /* size: 0 */

// <03E8A98B> ../public/animationsystem/animtaglistenerhelper.h:16
inline void CAnimTagListenerHelper<IEventAnimTag>::CAnimTagListenerHelper()
{
} /* size: 0 */

// <0657D668> ../public/animationsystem/animtaglistenerhelper.h:18
// function calls: 8
void CAnimTagListenerHelper<IEventAnimTag>::~CAnimTagListenerHelper()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CReceipt>(CReceipt* pObj); // 370
	CSmartPtr<CReceipt, CRefCountAccessor>::operator=(
			CReceipt* pObj);  // 34
	CAnimTagListenerHelper<IEventAnimTag>::Unregister(); // 18
} /* size: 41, inline expansions: 8 (123 bytes) */

// <0657D40E> ../public/animationsystem/animtaglistenerhelper.h:18
// function calls: 11
void CAnimTagListenerHelper<IEventAnimTag>::~CAnimTagListenerHelper()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CReceipt>(CReceipt* pObj); // 370
	CSmartPtr<CReceipt, CRefCountAccessor>::operator=(
			CReceipt* pObj);  // 34
	CAnimTagListenerHelper<IEventAnimTag>::Unregister(); // 18
	CSmartPtr<CReceipt, CRefCountAccessor>::~CSmartPtr(); // 18
	IAnimTagListener::~IAnimTagListener(); // 18
	CAnimTagListenerHelper<IEventAnimTag>::~CAnimTagListenerHelper(); // 18
} /* size: 85, inline expansions: 11 (187 bytes) */

// <0657D3F5> ../public/animationsystem/animtaglistenerhelper.h:18
inline void CAnimTagListenerHelper<IEventAnimTag>::~CAnimTagListenerHelper()
{
} /* size: 0 */

// <0127A7E4> ../public/animationsystem/animtaglistenerhelper.h:20
inline void CAnimTagListenerHelper<IEventAnimTag>::Register(IAnimTagManagerInstance* tagManager, CUtlDelegate<void(const IEventAnimTag*, const AnimTagStatusContext&)> delegate)
{
} /* size: 0 */

// <0657D35F> ../public/animationsystem/animtaglistenerhelper.h:32
inline void CAnimTagListenerHelper<IEventAnimTag>::Unregister()
{
} /* size: 0 */

// <0657A0F3> ../public/animationsystem/animtaglistenerhelper.h:38
// variable: 1
// function calls: 5
void CAnimTagListenerHelper<IEventAnimTag>::OnAnimTagEvent(const IAnimTag* tag, const AnimTagStatusContext& context)
{
	{
		const IEventAnimTag* derivedTag; // 42
		ClosurePtr<void (detail::GenericClass::::GetClosureThis()(const IEventAnimTag*, const AnimTagStatusContext&), void (*)(const this); // 1277
		ClosurePtr<void (detail::GenericClass::::GetClosureMemPtr()(const IEventAnimTag*, const AnimTagStatusContext&), void (*)(const this); // 1277
		FastDelegate2<const IEventAnimTag::operator(
				const IEventAnimTag* p1,
				const AnimTagStatusContext& p2);  // 45
	}
	CUtlAbstractDelegate::operator!(); // 1307
	FastDelegate2<const IEventAnimTag::IsEmpty(); // 40
} /* size: 96, inline expansions: 2 (30 bytes) */

// <0125B89A> ../public/animationsystem/animtaglistenerhelper.h:38
// variable: 1
// function calls: 7
void CAnimTagListenerHelper<IEventAnimTag>::OnAnimTagEvent(const IAnimTag* tag, const AnimTagStatusContext& context)
{
	{
		const IEventAnimTag* derivedTag; // 42
		MyTypeID(void); // 170
		reflection_cast<const IEventAnimTag, const IAnimTag*>(const IAnimTag* obj); // 42
		ClosurePtr<void (detail::GenericClass::::GetClosureThis()(const IEventAnimTag*, const AnimTagStatusContext&), void (*)(const this); // 1277
		ClosurePtr<void (detail::GenericClass::::GetClosureMemPtr()(const IEventAnimTag*, const AnimTagStatusContext&), void (*)(const this); // 1277
		FastDelegate2<const IEventAnimTag::operator(
				const IEventAnimTag* p1,
				const AnimTagStatusContext& p2);  // 45
	}
	CUtlAbstractDelegate::operator!(); // 1307
	FastDelegate2<const IEventAnimTag::IsEmpty(); // 40
} /* size: 0, inline expansions: 2 (0 bytes) */

