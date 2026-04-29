
//
// public/tier0/functors.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libtier0.so
//				   libvfx_vulkan.so
//
//	functions: 29
//	classes: 6
//

// <0040D71B> ../public/tier0/functors.h:368
void CNoRefFunctor::AddRef()
{
} /* size: 0 */

// <0040D703> ../public/tier0/functors.h:369
void CNoRefFunctor::Release()
{
} /* size: 0 */

// <03EAC065> ../public/tier0/functors.h:380
void CFunctorData::~CFunctorData()
{
} /* size: 0 */

// <03EAC031> ../public/tier0/functors.h:380
inline void CFunctorData::~CFunctorData()
{
} /* size: 0 */

// <0034AC5A> ../public/tier0/functors.h:380
void CFunctorData::CFunctorData()
{
} /* size: 0 */

// <0034AC3D> ../public/tier0/functors.h:380
inline void CFunctorData::CFunctorData()
{
} /* size: 0 */

// <0000CE9E> ../public/tier0/functors.h:380
// member functions: 8
// member variable: 1
// class size: 8
class CFunctorData : public IRefCounted {
public:
	/* class IRefCounted <ancestor>; */ /* 0 8 */
	void CFunctorData(CFunctorData* , CFunctorData& );
	void CFunctorData(CFunctorData* , const CFunctorData& );
	void CFunctorData(CFunctorData* );
	virtual void ~CFunctorData(CFunctorData* );
	void CFunctorData(class CFunctorData *, class CFunctorData &); /* linkage=_ZN12CFunctorDataC4EOS_ */
	void CFunctorData(class CFunctorData *, const class CFunctorData  &); /* linkage=_ZN12CFunctorDataC4ERKS_ */
	void CFunctorData(class CFunctorData *); /* linkage=_ZN12CFunctorDataC4Ev */
	virtual void ~CFunctorData(class CFunctorData *); /* linkage=_ZN12CFunctorDataD4Ev */
};

// <03EAC01A> ../public/tier0/functors.h:388
void CFunctorCallback::~CFunctorCallback()
{
} /* size: 0 */

// <03EABFE6> ../public/tier0/functors.h:388
inline void CFunctorCallback::~CFunctorCallback()
{
} /* size: 0 */

// <0000CF42> ../public/tier0/functors.h:388
// member functions: 16
// member variable: 1
// vtable entries: 4
// class size: 8
class CFunctorCallback : public IRefCounted {
public:
	/* class IRefCounted <ancestor>; */ /* 0 8 */
	void CFunctorCallback(CFunctorCallback* , CFunctorCallback& );
	void CFunctorCallback(CFunctorCallback* , const CFunctorCallback& );
	void CFunctorCallback(CFunctorCallback* );
	/* ../public/tier0/functors.h:391 */
	virtual bool IsEqual(const CFunctorCallback* , CFunctorCallback* );
	/* ../public/tier0/functors.h:392 */
	virtual void operator()(CFunctorCallback* , CFunctorData* );
	/* ../public/tier0/functors.h:396 */
	virtual const char* GetImplClassName(const CFunctorCallback* );
	/* ../public/tier0/functors.h:397 */
	virtual const void* GetTarget(const CFunctorCallback* );
	virtual void ~CFunctorCallback(CFunctorCallback* );
	void CFunctorCallback(class CFunctorCallback *, class CFunctorCallback &); /* linkage=_ZN16CFunctorCallbackC4EOS_ */
	void CFunctorCallback(class CFunctorCallback *, const class CFunctorCallback  &); /* linkage=_ZN16CFunctorCallbackC4ERKS_ */
	void CFunctorCallback(class CFunctorCallback *); /* linkage=_ZN16CFunctorCallbackC4Ev */
	virtual bool IsEqual(const class CFunctorCallback  *, class CFunctorCallback *); /* linkage=_ZNK16CFunctorCallback7IsEqualEPS_ */
	virtual void operator()(class CFunctorCallback *, class CFunctorData *); /* linkage=_ZN16CFunctorCallbackclEP12CFunctorData */
	virtual const char  * GetImplClassName(const class CFunctorCallback  *); /* linkage=_ZNK16CFunctorCallback16GetImplClassNameEv */
	virtual const void  * GetTarget(const class CFunctorCallback  *); /* linkage=_ZNK16CFunctorCallback9GetTargetEv */
	virtual void ~CFunctorCallback(class CFunctorCallback *); /* linkage=_ZN16CFunctorCallbackD4Ev */
};

// <03EABFCF> ../public/tier0/functors.h:560
void CFunctorCallbackBase::~CFunctorCallbackBase()
{
} /* size: 0 */

// <03EABF9B> ../public/tier0/functors.h:560
inline void CFunctorCallbackBase::~CFunctorCallbackBase()
{
} /* size: 0 */

// <0000CDC1> ../public/tier0/functors.h:560
// member functions: 10
// member variable: 1
// vtable entry: 1
// class size: 24
class CFunctorCallbackBase : public CRefCounted1<CFunctorCallback, CRefCountServiceBase<true, CRefMT> > {
public:
	/* class CRefCounted1<CFunctorCallback, CRefCountServiceBase<true, CRefMT> > <ancestor>; */ /* 0 24 */
	void CFunctorCallbackBase(CFunctorCallbackBase* , CFunctorCallbackBase& );
	void CFunctorCallbackBase(CFunctorCallbackBase* , const CFunctorCallbackBase& );
	void CFunctorCallbackBase(CFunctorCallbackBase* );
protected:
	/* ../public/tier0/functors.h:563 */
	virtual void ValidateFunctorData(CFunctorCallbackBase* , CFunctorData* );
	virtual void ~CFunctorCallbackBase(CFunctorCallbackBase* );
	void CFunctorCallbackBase(class CFunctorCallbackBase *, class CFunctorCallbackBase &); /* linkage=_ZN20CFunctorCallbackBaseC4EOS_ */
	void CFunctorCallbackBase(class CFunctorCallbackBase *, const class CFunctorCallbackBase  &); /* linkage=_ZN20CFunctorCallbackBaseC4ERKS_ */
	void CFunctorCallbackBase(class CFunctorCallbackBase *); /* linkage=_ZN20CFunctorCallbackBaseC4Ev */
	/* <13277c> ../public/tier0/functors.h:563 */
	virtual void ValidateFunctorData(class CFunctorCallbackBase *, class CFunctorData *); /* linkage=_ZN20CFunctorCallbackBase19ValidateFunctorDataEP12CFunctorData */
	virtual void ~CFunctorCallbackBase(class CFunctorCallbackBase *); /* linkage=_ZN20CFunctorCallbackBaseD4Ev */
};

// <03EAC07C> ../public/tier0/functors.h:563
void CFunctorCallbackBase::ValidateFunctorData(CFunctorData* pData)
{
} /* size: 0 */

// <001322C2> ../public/tier0/functors.h:563
inline void CFunctorCallbackBase::ValidateFunctorData(CFunctorData* pData)
{
} /* size: 0 */

// <03E75A1B> ../public/tier0/functors.h:598
void CFunctorData0::~CFunctorData0()
{
} /* size: 0 */

// <03E759E7> ../public/tier0/functors.h:598
inline void CFunctorData0::~CFunctorData0()
{
} /* size: 0 */

// <003459CF> ../public/tier0/functors.h:598
// function calls: 4
void CFunctorData0::~CFunctorData0()
{
	CRefCountServiceBase<true, CRefMT>::~CRefCountServiceBase(); // 355
	IRefCounted::~IRefCounted(); // 380
	CFunctorData::~CFunctorData(); // 355
	CRefCounted1<CFunctorData, CRefCountServiceBase<true, CRefMT> >::~CRefCounted1(); // 598
} /* size: 5, inline expansions: 4 (0 bytes) */

// <00345882> ../public/tier0/functors.h:598
// function calls: 5
void CFunctorData0::~CFunctorData0()
{
	CRefCountServiceBase<true, CRefMT>::~CRefCountServiceBase(); // 355
	IRefCounted::~IRefCounted(); // 380
	CFunctorData::~CFunctorData(); // 355
	CRefCounted1<CFunctorData, CRefCountServiceBase<true, CRefMT> >::~CRefCounted1(); // 598
	CFunctorData0::~CFunctorData0(); // 598
} /* size: 14, inline expansions: 5 (0 bytes) */

// <0012622B> ../public/tier0/functors.h:598
// member functions: 8
// member variable: 1
// class size: 24
class CFunctorData0 : public CRefCounted1<CFunctorData, CRefCountServiceBase<true, CRefMT> > {
public:
	/* class CRefCounted1<CFunctorData, CRefCountServiceBase<true, CRefMT> > <ancestor>; */ /* 0 24 */
	void CFunctorData0(CFunctorData0* , CFunctorData0& );
	void CFunctorData0(CFunctorData0* , const CFunctorData0& );
	/* ../public/tier0/functors.h:601 */
	void CFunctorData0(CFunctorData0* );
	virtual void ~CFunctorData0(CFunctorData0* );
	void CFunctorData0(class CFunctorData0 *, class CFunctorData0 &); /* linkage=_ZN13CFunctorData0C4EOS_ */
	void CFunctorData0(class CFunctorData0 *, const class CFunctorData0  &); /* linkage=_ZN13CFunctorData0C4ERKS_ */
	void CFunctorData0(class CFunctorData0 *); /* linkage=_ZN13CFunctorData0C4Ev */
	virtual void ~CFunctorData0(class CFunctorData0 *); /* linkage=_ZN13CFunctorData0D4Ev */
};

// <0034ABA7> ../public/tier0/functors.h:601
void CFunctorData0::CFunctorData0()
{
} /* size: 0 */

// <0034AB8E> ../public/tier0/functors.h:601
inline void CFunctorData0::CFunctorData0()
{
} /* size: 0 */

// <03E75A66> ../public/tier0/functors.h:630
void CFunctorCallback0::~CFunctorCallback0()
{
} /* size: 0 */

// <03E75A32> ../public/tier0/functors.h:630
inline void CFunctorCallback0::~CFunctorCallback0()
{
} /* size: 0 */

// <0000CC53> ../public/tier0/functors.h:630
// member functions: 17
// member variables: 2
// vtable entries: 4
// class size: 32
class CFunctorCallback0 : public CFunctorCallbackBase {
public:
	/* class CFunctorCallbackBase <ancestor>; */ /* 0 24 */
	void CFunctorCallback0(CFunctorCallback0* , CFunctorCallback0& );
	void CFunctorCallback0(CFunctorCallback0* , const CFunctorCallback0& );
	/* ../public/tier0/functors.h:634 */
	void CFunctorCallback0(CFunctorCallback0* , Callback_t);
	/* ../public/tier0/functors.h:632 */
	typedef void (*Callback_t)(void);
	/* ../public/tier0/functors.h:635 */
	virtual void operator()(CFunctorCallback0* , CFunctorData* );
	/* ../public/tier0/functors.h:643 */
	virtual bool IsEqual(const CFunctorCallback0* , CFunctorCallback* );
	/* ../public/tier0/functors.h:649 */
	virtual const char* GetImplClassName(const CFunctorCallback0* );
	/* ../public/tier0/functors.h:650 */
	virtual const void* GetTarget(const CFunctorCallback0* );
private:
	Callback_t m_pfnProxied; /* 24 8 */
	virtual void ~CFunctorCallback0(CFunctorCallback0* );
	void CFunctorCallback0(class CFunctorCallback0 *, class CFunctorCallback0 &); /* linkage=_ZN17CFunctorCallback0C4EOS_ */
	void CFunctorCallback0(class CFunctorCallback0 *, const class CFunctorCallback0  &); /* linkage=_ZN17CFunctorCallback0C4ERKS_ */
	void CFunctorCallback0(class CFunctorCallback0 *, Callback_t); /* linkage=_ZN17CFunctorCallback0C4EPFvvE */
	/* <132a0a> ../public/tier0/functors.h:635 */
	virtual void operator()(class CFunctorCallback0 *, class CFunctorData *); /* linkage=_ZN17CFunctorCallback0clEP12CFunctorData */
	/* <13299b> ../public/tier0/functors.h:643 */
	virtual bool IsEqual(const class CFunctorCallback0  *, class CFunctorCallback *); /* linkage=_ZNK17CFunctorCallback07IsEqualEP16CFunctorCallback */
	/* <1327ac> ../public/tier0/functors.h:649 */
	virtual const char  * GetImplClassName(const class CFunctorCallback0  *); /* linkage=_ZNK17CFunctorCallback016GetImplClassNameEv */
	/* <1327d5> ../public/tier0/functors.h:650 */
	virtual const void  * GetTarget(const class CFunctorCallback0  *); /* linkage=_ZNK17CFunctorCallback09GetTargetEv */
	virtual void ~CFunctorCallback0(class CFunctorCallback0 *); /* linkage=_ZN17CFunctorCallback0D4Ev */
};

// <058F109F> ../../public/tier0/functors.h:630
// member functions: 17
// member variables: 2
// vtable entries: 4
// class size: 32
class CFunctorCallback0 : public CFunctorCallbackBase {
public:
	/* class CFunctorCallbackBase <ancestor>; */ /* 0 24 */
	void CFunctorCallback0(CFunctorCallback0* , CFunctorCallback0& );
	void CFunctorCallback0(CFunctorCallback0* , const CFunctorCallback0& );
	/* ../../public/tier0/functors.h:634 */
	void CFunctorCallback0(CFunctorCallback0* , Callback_t);
	/* ../../public/tier0/functors.h:632 */
	typedef void (*Callback_t)(void);
	/* ../../public/tier0/functors.h:635 */
	virtual void operator()(CFunctorCallback0* , CFunctorData* );
	/* ../../public/tier0/functors.h:643 */
	virtual bool IsEqual(const CFunctorCallback0* , CFunctorCallback* );
	/* ../../public/tier0/functors.h:649 */
	virtual const char* GetImplClassName(const CFunctorCallback0* );
	/* ../../public/tier0/functors.h:650 */
	virtual const void* GetTarget(const CFunctorCallback0* );
private:
	Callback_t m_pfnProxied; /* 24 8 */
	virtual void ~CFunctorCallback0(CFunctorCallback0* );
	void CFunctorCallback0(class CFunctorCallback0 *, class CFunctorCallback0 &); /* linkage=_ZN17CFunctorCallback0C4EOS_ */
	void CFunctorCallback0(class CFunctorCallback0 *, const class CFunctorCallback0  &); /* linkage=_ZN17CFunctorCallback0C4ERKS_ */
	void CFunctorCallback0(class CFunctorCallback0 *, Callback_t); /* linkage=_ZN17CFunctorCallback0C4EPFvvE */
	/* <132a0a> ../public/tier0/functors.h:635 */
	virtual void operator()(class CFunctorCallback0 *, class CFunctorData *); /* linkage=_ZN17CFunctorCallback0clEP12CFunctorData */
	/* <13299b> ../public/tier0/functors.h:643 */
	virtual bool IsEqual(const class CFunctorCallback0  *, class CFunctorCallback *); /* linkage=_ZNK17CFunctorCallback07IsEqualEP16CFunctorCallback */
	/* <1327ac> ../public/tier0/functors.h:649 */
	virtual const char  * GetImplClassName(const class CFunctorCallback0  *); /* linkage=_ZNK17CFunctorCallback016GetImplClassNameEv */
	/* <1327d5> ../public/tier0/functors.h:650 */
	virtual const void  * GetTarget(const class CFunctorCallback0  *); /* linkage=_ZNK17CFunctorCallback09GetTargetEv */
	virtual void ~CFunctorCallback0(class CFunctorCallback0 *); /* linkage=_ZN17CFunctorCallback0D4Ev */
};

// <03EABF76> ../public/tier0/functors.h:635
void CFunctorCallback0::operator(CFunctorData* pFunctorDataBase)
{
} /* size: 0 */

// <001321BB> ../public/tier0/functors.h:635
inline void CFunctorCallback0::operator(CFunctorData* pFunctorDataBase)
{
} /* size: 0 */

// <03EABF51> ../public/tier0/functors.h:643
void CFunctorCallback0::IsEqual(CFunctorCallback* pSrc)
{
} /* size: 0 */

// <00132195> ../public/tier0/functors.h:643
inline void CFunctorCallback0::IsEqual(CFunctorCallback* pSrc)
{
} /* size: 0 */

// <03EABF39> ../public/tier0/functors.h:649
void CFunctorCallback0::GetImplClassName()
{
} /* size: 0 */

// <0013217C> ../public/tier0/functors.h:649
inline void CFunctorCallback0::GetImplClassName()
{
} /* size: 0 */

// <03EABF1C> ../public/tier0/functors.h:650
const void* CFunctorCallback0::GetTarget()
{
} /* size: 0 */

// <0013215E> ../public/tier0/functors.h:650
inline const void* CFunctorCallback0::GetTarget()
{
} /* size: 0 */

// <000C087F> ../public/tier0/functors.h:821
inline CFunctorData* CreateFunctorData(void)
{
} /* size: 0 */

