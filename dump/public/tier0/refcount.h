
//
// public/tier0/refcount.h
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
//	functions: 86
//	classes: 19
//

// <001DEE71> ../public/tier0/refcount.h:20
void IRefCounted::IRefCounted()
{
} /* size: 0 */

// <001DEE55> ../public/tier0/refcount.h:20
inline void IRefCounted::IRefCounted()
{
} /* size: 0 */

// <0000CB5D> ../public/tier0/refcount.h:20
// member functions: 12
// member variable: 1
// vtable entries: 2
// class size: 8
class IRefCounted {
	IRefCounted& operator=(IRefCounted* , const IRefCounted& );
	void IRefCounted(IRefCounted* , const IRefCounted& );
	void IRefCounted(IRefCounted* );
	int ()(void) * * _vptr.IRefCounted; /* 0 8 */
	/* ../public/tier0/refcount.h:23 */
	virtual void ~IRefCounted(IRefCounted* );
	/* ../public/tier0/refcount.h:24 */
	virtual int AddRef(IRefCounted* );
	/* ../public/tier0/refcount.h:25 */
	virtual int Release(IRefCounted* );
	void IRefCounted(class IRefCounted *, const class IRefCounted  &); /* linkage=_ZN11IRefCountedC4ERKS_ */
	void IRefCounted(class IRefCounted *); /* linkage=_ZN11IRefCountedC4Ev */
	virtual void ~IRefCounted(class IRefCounted *); /* linkage=_ZN11IRefCountedD4Ev */
	virtual int AddRef(class IRefCounted *); /* linkage=_ZN11IRefCounted6AddRefEv */
	virtual int Release(class IRefCounted *); /* linkage=_ZN11IRefCounted7ReleaseEv */
	class IRefCounted & operator=(class IRefCounted *, const class IRefCounted  &); /* linkage=_ZN11IRefCountedaSERKS_ */
};

// <00F1AF13> ../public/tier0/refcount.h:20
// member functions: 11
// member variable: 1
// vtable entries: 2
// class size: 8
class IRefCounted {
	void IRefCounted(IRefCounted* , const IRefCounted& );
	void IRefCounted(IRefCounted* );
	int ()(void) * * _vptr.IRefCounted; /* 0 8 */
	/* ../public/tier0/refcount.h:23 */
	virtual void ~IRefCounted(IRefCounted* );
	/* ../public/tier0/refcount.h:24 */
	virtual int AddRef(IRefCounted* );
	/* ../public/tier0/refcount.h:25 */
	virtual int Release(IRefCounted* );
	void IRefCounted(class IRefCounted *, const class IRefCounted  &); /* linkage=_ZN11IRefCountedC4ERKS_ */
	void IRefCounted(class IRefCounted *); /* linkage=_ZN11IRefCountedC4Ev */
	virtual void ~IRefCounted(class IRefCounted *); /* linkage=_ZN11IRefCountedD4Ev */
	virtual int AddRef(class IRefCounted *); /* linkage=_ZN11IRefCounted6AddRefEv */
	virtual int Release(class IRefCounted *); /* linkage=_ZN11IRefCounted7ReleaseEv */
	class IRefCounted & operator=(class IRefCounted *, const class IRefCounted  &); /* linkage=_ZN11IRefCountedaSERKS_ */
};

// <058F0FA8> ../../public/tier0/refcount.h:20
// member functions: 12
// member variable: 1
// vtable entries: 2
// class size: 8
class IRefCounted {
	IRefCounted& operator=(IRefCounted* , const IRefCounted& );
	void IRefCounted(IRefCounted* , const IRefCounted& );
	void IRefCounted(IRefCounted* );
	int ()(void) * * _vptr.IRefCounted; /* 0 8 */
	/* ../../public/tier0/refcount.h:23 */
	virtual void ~IRefCounted(IRefCounted* );
	/* ../../public/tier0/refcount.h:24 */
	virtual int AddRef(IRefCounted* );
	/* ../../public/tier0/refcount.h:25 */
	virtual int Release(IRefCounted* );
	void IRefCounted(class IRefCounted *, const class IRefCounted  &); /* linkage=_ZN11IRefCountedC4ERKS_ */
	void IRefCounted(class IRefCounted *); /* linkage=_ZN11IRefCountedC4Ev */
	virtual void ~IRefCounted(class IRefCounted *); /* linkage=_ZN11IRefCountedD4Ev */
	virtual int AddRef(class IRefCounted *); /* linkage=_ZN11IRefCounted6AddRefEv */
	virtual int Release(class IRefCounted *); /* linkage=_ZN11IRefCounted7ReleaseEv */
	class IRefCounted & operator=(class IRefCounted *, const class IRefCounted  &); /* linkage=_ZN11IRefCountedaSERKS_ */
};

// <03EAC176> ../public/tier0/refcount.h:23
void IRefCounted::~IRefCounted()
{
} /* size: 0 */

// <03EAC146> ../public/tier0/refcount.h:23
inline void IRefCounted::~IRefCounted()
{
} /* size: 0 */

// <0000BB5E> ../public/tier0/refcount.h:155
// member functions: 2
// class size: 1
class CRefMT {
	/* ../public/tier0/refcount.h:158 */
	int Increment(int* );
	/* ../public/tier0/refcount.h:159 */
	int Decrement(int* );
};

// <06583374> ../public/tier0/refcount.h:158
inline void Increment(int* p)
{
} /* size: 0 */

// <0658335E> ../public/tier0/refcount.h:159
inline void Decrement(int* p)
{
} /* size: 0 */

// <009FED80> ../public/tier0/refcount.h:175
inline void CRefCountServiceBase<true, CRefMT>::operator=(const CRefCountServiceBase<true, CRefMT> &)
{
} /* size: 0 */

// <0000BBA1> ../public/tier0/refcount.h:175
// member functions: 16
// member variables: 2
// vtable entry: 1
// class size: 16
class CRefCountServiceBase<true, CRefMT> {
	CRefCountServiceBase<true, CRefMT>& operator=(CRefCountServiceBase<true, CRefMT>* , const CRefCountServiceBase<true, CRefMT>& );
	void CRefCountServiceBase(CRefCountServiceBase<true, CRefMT>* , const CRefCountServiceBase<true, CRefMT>& );
	int ()(void) * * _vptr.CRefCountServiceBase; /* 0 8 */
protected:
	/* ../public/tier0/refcount.h:178 */
	void CRefCountServiceBase(CRefCountServiceBase<true, CRefMT>* );
	/* ../public/tier0/refcount.h:183 */
	virtual void ~CRefCountServiceBase(CRefCountServiceBase<true, CRefMT>* );
	/* ../public/tier0/refcount.h:187 */
	virtual bool OnFinalRelease(CRefCountServiceBase<true, CRefMT>* );
	/* ../public/tier0/refcount.h:192 */
	int GetRefCount(const CRefCountServiceBase<true, CRefMT>* );
	/* ../public/tier0/refcount.h:197 */
	int DoAddRef(CRefCountServiceBase<true, CRefMT>* );
	/* ../public/tier0/refcount.h:202 */
	int DoRelease(CRefCountServiceBase<true, CRefMT>* );
private:
	int m_iRefs; /* 8 4 */
	void CRefCountServiceBase(class CRefCountServiceBase<true, CRefMT> *, const class CRefCountServiceBase<true, CRefMT>  &); /* linkage=_ZN20CRefCountServiceBaseILb1E6CRefMTEC4ERKS1_ */
	void CRefCountServiceBase(class CRefCountServiceBase<true, CRefMT> *); /* linkage=_ZN20CRefCountServiceBaseILb1E6CRefMTEC4Ev */
	virtual void ~CRefCountServiceBase(class CRefCountServiceBase<true, CRefMT> *); /* linkage=_ZN20CRefCountServiceBaseILb1E6CRefMTED4Ev */
	/* <5508137> ../public/tier0/refcount.h:187 */
	virtual bool OnFinalRelease(class CRefCountServiceBase<true, CRefMT> *); /* linkage=_ZN20CRefCountServiceBaseILb1E6CRefMTE14OnFinalReleaseEv */
	int GetRefCount(const class CRefCountServiceBase<true, CRefMT>  *); /* linkage=_ZNK20CRefCountServiceBaseILb1E6CRefMTE11GetRefCountEv */
	int DoAddRef(class CRefCountServiceBase<true, CRefMT> *); /* linkage=_ZN20CRefCountServiceBaseILb1E6CRefMTE8DoAddRefEv */
	int DoRelease(class CRefCountServiceBase<true, CRefMT> *); /* linkage=_ZN20CRefCountServiceBaseILb1E6CRefMTE9DoReleaseEv */
	class CRefCountServiceBase<true, CRefMT> & operator=(class CRefCountServiceBase<true, CRefMT> *, const class CRefCountServiceBase<true, CRefMT>  &); /* linkage=_ZN20CRefCountServiceBaseILb1E6CRefMTEaSERKS1_ */
};

// <052C3D29> ../public/tier0/refcount.h:175
// member functions: 15
// member variables: 2
// vtable entry: 1
// class size: 16
class CRefCountServiceBase<true, CRefMT> {
	void CRefCountServiceBase(CRefCountServiceBase<true, CRefMT>* , const CRefCountServiceBase<true, CRefMT>& );
	int ()(void) * * _vptr.CRefCountServiceBase; /* 0 8 */
protected:
	/* ../public/tier0/refcount.h:178 */
	void CRefCountServiceBase(CRefCountServiceBase<true, CRefMT>* );
	/* ../public/tier0/refcount.h:183 */
	virtual void ~CRefCountServiceBase(CRefCountServiceBase<true, CRefMT>* );
	/* ../public/tier0/refcount.h:187 */
	virtual bool OnFinalRelease(CRefCountServiceBase<true, CRefMT>* );
	/* ../public/tier0/refcount.h:192 */
	int GetRefCount(const CRefCountServiceBase<true, CRefMT>* );
	/* ../public/tier0/refcount.h:197 */
	int DoAddRef(CRefCountServiceBase<true, CRefMT>* );
	/* ../public/tier0/refcount.h:202 */
	int DoRelease(CRefCountServiceBase<true, CRefMT>* );
private:
	int m_iRefs; /* 8 4 */
	void CRefCountServiceBase(class CRefCountServiceBase<true, CRefMT> *, const class CRefCountServiceBase<true, CRefMT>  &); /* linkage=_ZN20CRefCountServiceBaseILb1E6CRefMTEC4ERKS1_ */
	void CRefCountServiceBase(class CRefCountServiceBase<true, CRefMT> *); /* linkage=_ZN20CRefCountServiceBaseILb1E6CRefMTEC4Ev */
	virtual void ~CRefCountServiceBase(class CRefCountServiceBase<true, CRefMT> *); /* linkage=_ZN20CRefCountServiceBaseILb1E6CRefMTED4Ev */
	/* <5508137> ../public/tier0/refcount.h:187 */
	virtual bool OnFinalRelease(class CRefCountServiceBase<true, CRefMT> *); /* linkage=_ZN20CRefCountServiceBaseILb1E6CRefMTE14OnFinalReleaseEv */
	int GetRefCount(const class CRefCountServiceBase<true, CRefMT>  *); /* linkage=_ZNK20CRefCountServiceBaseILb1E6CRefMTE11GetRefCountEv */
	int DoAddRef(class CRefCountServiceBase<true, CRefMT> *); /* linkage=_ZN20CRefCountServiceBaseILb1E6CRefMTE8DoAddRefEv */
	int DoRelease(class CRefCountServiceBase<true, CRefMT> *); /* linkage=_ZN20CRefCountServiceBaseILb1E6CRefMTE9DoReleaseEv */
	class CRefCountServiceBase<true, CRefMT> & operator=(class CRefCountServiceBase<true, CRefMT> *, const class CRefCountServiceBase<true, CRefMT>  &); /* linkage=_ZN20CRefCountServiceBaseILb1E6CRefMTEaSERKS1_ */
};

// <0589F4C3> ../../public/tier0/refcount.h:175
// member functions: 16
// member variables: 2
// vtable entry: 1
// class size: 16
class CRefCountServiceBase<true, CRefMT> {
	void CRefCountServiceBase(CRefCountServiceBase<true, CRefMT>* , const CRefCountServiceBase<true, CRefMT>& );
	CRefCountServiceBase<true, CRefMT>& operator=(CRefCountServiceBase<true, CRefMT>* , const CRefCountServiceBase<true, CRefMT>& );
	int ()(void) * * _vptr.CRefCountServiceBase; /* 0 8 */
protected:
	/* ../../public/tier0/refcount.h:178 */
	void CRefCountServiceBase(CRefCountServiceBase<true, CRefMT>* );
	/* ../../public/tier0/refcount.h:183 */
	virtual void ~CRefCountServiceBase(CRefCountServiceBase<true, CRefMT>* );
	/* ../../public/tier0/refcount.h:187 */
	virtual bool OnFinalRelease(CRefCountServiceBase<true, CRefMT>* );
	/* ../../public/tier0/refcount.h:192 */
	int GetRefCount(const CRefCountServiceBase<true, CRefMT>* );
	/* ../../public/tier0/refcount.h:197 */
	int DoAddRef(CRefCountServiceBase<true, CRefMT>* );
	/* ../../public/tier0/refcount.h:202 */
	int DoRelease(CRefCountServiceBase<true, CRefMT>* );
private:
	int m_iRefs; /* 8 4 */
	void CRefCountServiceBase(class CRefCountServiceBase<true, CRefMT> *, const class CRefCountServiceBase<true, CRefMT>  &); /* linkage=_ZN20CRefCountServiceBaseILb1E6CRefMTEC4ERKS1_ */
	void CRefCountServiceBase(class CRefCountServiceBase<true, CRefMT> *); /* linkage=_ZN20CRefCountServiceBaseILb1E6CRefMTEC4Ev */
	virtual void ~CRefCountServiceBase(class CRefCountServiceBase<true, CRefMT> *); /* linkage=_ZN20CRefCountServiceBaseILb1E6CRefMTED4Ev */
	/* <5508137> ../public/tier0/refcount.h:187 */
	virtual bool OnFinalRelease(class CRefCountServiceBase<true, CRefMT> *); /* linkage=_ZN20CRefCountServiceBaseILb1E6CRefMTE14OnFinalReleaseEv */
	int GetRefCount(const class CRefCountServiceBase<true, CRefMT>  *); /* linkage=_ZNK20CRefCountServiceBaseILb1E6CRefMTE11GetRefCountEv */
	int DoAddRef(class CRefCountServiceBase<true, CRefMT> *); /* linkage=_ZN20CRefCountServiceBaseILb1E6CRefMTE8DoAddRefEv */
	int DoRelease(class CRefCountServiceBase<true, CRefMT> *); /* linkage=_ZN20CRefCountServiceBaseILb1E6CRefMTE9DoReleaseEv */
	class CRefCountServiceBase<true, CRefMT> & operator=(class CRefCountServiceBase<true, CRefMT> *, const class CRefCountServiceBase<true, CRefMT>  &); /* linkage=_ZN20CRefCountServiceBaseILb1E6CRefMTEaSERKS1_ */
};

// <0042C054> ../public/tier0/refcount.h:175
// member functions: 14
// member variables: 2
// vtable entry: 1
// class size: 16
class CRefCountServiceBase<true, CRefMT> {
	int ()(void) * * _vptr.CRefCountServiceBase; /* 0 8 */
protected:
	/* ../public/tier0/refcount.h:178 */
	void CRefCountServiceBase(CRefCountServiceBase<true, CRefMT>* );
	/* ../public/tier0/refcount.h:183 */
	virtual void ~CRefCountServiceBase(CRefCountServiceBase<true, CRefMT>* );
	/* ../public/tier0/refcount.h:187 */
	virtual bool OnFinalRelease(CRefCountServiceBase<true, CRefMT>* );
	/* ../public/tier0/refcount.h:192 */
	int GetRefCount(const CRefCountServiceBase<true, CRefMT>* );
	/* ../public/tier0/refcount.h:197 */
	int DoAddRef(CRefCountServiceBase<true, CRefMT>* );
	/* ../public/tier0/refcount.h:202 */
	int DoRelease(CRefCountServiceBase<true, CRefMT>* );
private:
	int m_iRefs; /* 8 4 */
	void CRefCountServiceBase(class CRefCountServiceBase<true, CRefMT> *, const class CRefCountServiceBase<true, CRefMT>  &); /* linkage=_ZN20CRefCountServiceBaseILb1E6CRefMTEC4ERKS1_ */
	void CRefCountServiceBase(class CRefCountServiceBase<true, CRefMT> *); /* linkage=_ZN20CRefCountServiceBaseILb1E6CRefMTEC4Ev */
	virtual void ~CRefCountServiceBase(class CRefCountServiceBase<true, CRefMT> *); /* linkage=_ZN20CRefCountServiceBaseILb1E6CRefMTED4Ev */
	/* <5508137> ../public/tier0/refcount.h:187 */
	virtual bool OnFinalRelease(class CRefCountServiceBase<true, CRefMT> *); /* linkage=_ZN20CRefCountServiceBaseILb1E6CRefMTE14OnFinalReleaseEv */
	int GetRefCount(const class CRefCountServiceBase<true, CRefMT>  *); /* linkage=_ZNK20CRefCountServiceBaseILb1E6CRefMTE11GetRefCountEv */
	int DoAddRef(class CRefCountServiceBase<true, CRefMT> *); /* linkage=_ZN20CRefCountServiceBaseILb1E6CRefMTE8DoAddRefEv */
	int DoRelease(class CRefCountServiceBase<true, CRefMT> *); /* linkage=_ZN20CRefCountServiceBaseILb1E6CRefMTE9DoReleaseEv */
	class CRefCountServiceBase<true, CRefMT> & operator=(class CRefCountServiceBase<true, CRefMT> *, const class CRefCountServiceBase<true, CRefMT>  &); /* linkage=_ZN20CRefCountServiceBaseILb1E6CRefMTEaSERKS1_ */
};

// <054DD03A> ../public/tier0/refcount.h:178
void CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase()
{
} /* size: 0 */

// <054DD021> ../public/tier0/refcount.h:178
inline void CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase()
{
} /* size: 0 */

// <054DD00A> ../public/tier0/refcount.h:183
void CRefCountServiceBase<true, CRefMT>::~CRefCountServiceBase()
{
} /* size: 0 */

// <054DCFDA> ../public/tier0/refcount.h:183
inline void CRefCountServiceBase<true, CRefMT>::~CRefCountServiceBase()
{
} /* size: 0 */

// <031D9F51> ../public/tier0/refcount.h:183
// function call: 1
void CRefCountServiceBase<true, CRefMT>::~CRefCountServiceBase()
{
	CRefCountServiceBase<true, CRefMT>::~CRefCountServiceBase(); // 185
} /* size: 14, inline expansions: 1 (0 bytes) */

// <05508137> ../public/tier0/refcount.h:187
void CRefCountServiceBase<true, CRefMT>::OnFinalRelease()
{
} /* size: 10 */

// <054D3D7B> ../public/tier0/refcount.h:187
inline void CRefCountServiceBase<true, CRefMT>::OnFinalRelease()
{
} /* size: 0 */

// <010070A9> ../public/tier0/refcount.h:192
inline void CRefCountServiceBase<true, CRefMT>::GetRefCount()
{
} /* size: 0 */

// <054D5BEB> ../public/tier0/refcount.h:197
inline void CRefCountServiceBase<true, CRefMT>::DoAddRef()
{
} /* size: 0 */

// <054D5C04> ../public/tier0/refcount.h:202
// variable: 1
inline void CRefCountServiceBase<true, CRefMT>::DoRelease()
{
	int result; // 204
} /* size: 0, variables: 1 */

// <015BE3A2> ../public/tier0/refcount.h:271
void CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(const CMutableRefCountBase<true, CRefMT> &)
{
} /* size: 0 */

// <015BE380> ../public/tier0/refcount.h:271
inline void CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(const CMutableRefCountBase<true, CRefMT> &)
{
} /* size: 0 */

// <008B04C7> ../public/tier0/refcount.h:271
inline void CMutableRefCountBase<true, CRefMT>::operator=(const CMutableRefCountBase<true, CRefMT> &)
{
} /* size: 0 */

// <000953D8> ../public/tier0/refcount.h:271
// member functions: 13
// member variables: 2
// class size: 16
class CMutableRefCountBase<true, CRefMT> {
	void CMutableRefCountBase(CMutableRefCountBase<true, CRefMT>* , const CMutableRefCountBase<true, CRefMT>& );
	int ()(void) * * _vptr.CMutableRefCountBase; /* 0 8 */
protected:
	/* ../public/tier0/refcount.h:274 */
	void CMutableRefCountBase(CMutableRefCountBase<true, CRefMT>* );
	/* ../public/tier0/refcount.h:279 */
	virtual void ~CMutableRefCountBase(CMutableRefCountBase<true, CRefMT>* );
	/* ../public/tier0/refcount.h:283 */
	int GetRefCount(const CMutableRefCountBase<true, CRefMT>* );
	/* ../public/tier0/refcount.h:288 */
	int DoAddRef(const CMutableRefCountBase<true, CRefMT>* );
	/* ../public/tier0/refcount.h:293 */
	int DoRelease(const CMutableRefCountBase<true, CRefMT>* );
private:
	int m_iRefs; /* 8 4 */
	void CMutableRefCountBase(class CMutableRefCountBase<true, CRefMT> *, const class CMutableRefCountBase<true, CRefMT>  &); /* linkage=_ZN20CMutableRefCountBaseILb1E6CRefMTEC4ERKS1_ */
	void CMutableRefCountBase(class CMutableRefCountBase<true, CRefMT> *); /* linkage=_ZN20CMutableRefCountBaseILb1E6CRefMTEC4Ev */
	virtual void ~CMutableRefCountBase(class CMutableRefCountBase<true, CRefMT> *); /* linkage=_ZN20CMutableRefCountBaseILb1E6CRefMTED4Ev */
	int GetRefCount(const class CMutableRefCountBase<true, CRefMT>  *); /* linkage=_ZNK20CMutableRefCountBaseILb1E6CRefMTE11GetRefCountEv */
	int DoAddRef(const class CMutableRefCountBase<true, CRefMT>  *); /* linkage=_ZNK20CMutableRefCountBaseILb1E6CRefMTE8DoAddRefEv */
	int DoRelease(const class CMutableRefCountBase<true, CRefMT>  *); /* linkage=_ZNK20CMutableRefCountBaseILb1E6CRefMTE9DoReleaseEv */
	class CMutableRefCountBase<true, CRefMT> & operator=(class CMutableRefCountBase<true, CRefMT> *, const class CMutableRefCountBase<true, CRefMT>  &); /* linkage=_ZN20CMutableRefCountBaseILb1E6CRefMTEaSERKS1_ */
};

// <0018AEFC> ../public/tier0/refcount.h:271
// member functions: 14
// member variables: 2
// class size: 16
class CMutableRefCountBase<true, CRefMT> {
	CMutableRefCountBase<true, CRefMT>& operator=(CMutableRefCountBase<true, CRefMT>* , const CMutableRefCountBase<true, CRefMT>& );
	void CMutableRefCountBase(CMutableRefCountBase<true, CRefMT>* , const CMutableRefCountBase<true, CRefMT>& );
	int ()(void) * * _vptr.CMutableRefCountBase; /* 0 8 */
protected:
	/* ../public/tier0/refcount.h:274 */
	void CMutableRefCountBase(CMutableRefCountBase<true, CRefMT>* );
	/* ../public/tier0/refcount.h:279 */
	virtual void ~CMutableRefCountBase(CMutableRefCountBase<true, CRefMT>* );
	/* ../public/tier0/refcount.h:283 */
	int GetRefCount(const CMutableRefCountBase<true, CRefMT>* );
	/* ../public/tier0/refcount.h:288 */
	int DoAddRef(const CMutableRefCountBase<true, CRefMT>* );
	/* ../public/tier0/refcount.h:293 */
	int DoRelease(const CMutableRefCountBase<true, CRefMT>* );
private:
	int m_iRefs; /* 8 4 */
	void CMutableRefCountBase(class CMutableRefCountBase<true, CRefMT> *, const class CMutableRefCountBase<true, CRefMT>  &); /* linkage=_ZN20CMutableRefCountBaseILb1E6CRefMTEC4ERKS1_ */
	void CMutableRefCountBase(class CMutableRefCountBase<true, CRefMT> *); /* linkage=_ZN20CMutableRefCountBaseILb1E6CRefMTEC4Ev */
	virtual void ~CMutableRefCountBase(class CMutableRefCountBase<true, CRefMT> *); /* linkage=_ZN20CMutableRefCountBaseILb1E6CRefMTED4Ev */
	int GetRefCount(const class CMutableRefCountBase<true, CRefMT>  *); /* linkage=_ZNK20CMutableRefCountBaseILb1E6CRefMTE11GetRefCountEv */
	int DoAddRef(const class CMutableRefCountBase<true, CRefMT>  *); /* linkage=_ZNK20CMutableRefCountBaseILb1E6CRefMTE8DoAddRefEv */
	int DoRelease(const class CMutableRefCountBase<true, CRefMT>  *); /* linkage=_ZNK20CMutableRefCountBaseILb1E6CRefMTE9DoReleaseEv */
	class CMutableRefCountBase<true, CRefMT> & operator=(class CMutableRefCountBase<true, CRefMT> *, const class CMutableRefCountBase<true, CRefMT>  &); /* linkage=_ZN20CMutableRefCountBaseILb1E6CRefMTEaSERKS1_ */
};

// <023301B4> ../public/tier0/refcount.h:274
void CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase()
{
} /* size: 0 */

// <0233019B> ../public/tier0/refcount.h:274
inline void CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase()
{
} /* size: 0 */

// <0657DAFC> ../public/tier0/refcount.h:279
void CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase()
{
} /* size: 0 */

// <0657DACC> ../public/tier0/refcount.h:279
inline void CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase()
{
} /* size: 0 */

// <0126D6CF> ../public/tier0/refcount.h:283
inline void CMutableRefCountBase<true, CRefMT>::GetRefCount()
{
} /* size: 0 */

// <0657A735> ../public/tier0/refcount.h:288
inline void CMutableRefCountBase<true, CRefMT>::DoAddRef()
{
} /* size: 0 */

// <0657A7EF> ../public/tier0/refcount.h:293
// variable: 1
inline void CMutableRefCountBase<true, CRefMT>::DoRelease()
{
	int result; // 295
} /* size: 0, variables: 1 */

// <0119609F> ../public/tier0/refcount.h:293
// variable: 1
// function calls: 3
void CMutableRefCountBase<true, CRefMT>::DoRelease()
{
	int result; // 295
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
} /* size: 17, variables: 1, inline expansions: 3 (19 bytes) */

// <0550750C> ../public/tier0/refcount.h:325
void CRefCounted<CRefCountServiceBase<true, CRefMT> >::CRefCounted()
{
} /* size: 0 */

// <055074EF> ../public/tier0/refcount.h:325
inline void CRefCounted<CRefCountServiceBase<true, CRefMT> >::CRefCounted()
{
} /* size: 0 */

// <009FED5E> ../public/tier0/refcount.h:325
inline void CRefCounted<CRefCountServiceBase<true, CRefMT> >::operator=(const CRefCounted<CRefCountServiceBase<true, CRefMT> > &)
{
} /* size: 0 */

// <000954F0> ../public/tier0/refcount.h:325
// member functions: 12
// member variable: 1
// class size: 16
class CRefCounted<CRefCountServiceBase<true, CRefMT> > : public CRefCountServiceBase<true, CRefMT> {
public:
	/* class CRefCountServiceBase<true, CRefMT> <ancestor>; */ /* 0 16 */
	void CRefCounted(CRefCounted<CRefCountServiceBase<true, CRefMT> >* , const CRefCounted<CRefCountServiceBase<true, CRefMT> >& );
	void CRefCounted(CRefCounted<CRefCountServiceBase<true, CRefMT> >* );
	CRefCounted<CRefCountServiceBase<true, CRefMT> >& operator=(CRefCounted<CRefCountServiceBase<true, CRefMT> >* , const CRefCounted<CRefCountServiceBase<true, CRefMT> >& );
	/* ../public/tier0/refcount.h:328 */
	virtual void ~CRefCounted(CRefCounted<CRefCountServiceBase<true, CRefMT> >* );
	/* ../public/tier0/refcount.h:329 */
	int AddRef(CRefCounted<CRefCountServiceBase<true, CRefMT> >* );
	/* ../public/tier0/refcount.h:330 */
	int Release(CRefCounted<CRefCountServiceBase<true, CRefMT> >* );
	void CRefCounted(class CRefCounted<CRefCountServiceBase<true, CRefMT> > *, const class CRefCounted<CRefCountServiceBase<true, CRefMT> >  &); /* linkage=_ZN11CRefCountedI20CRefCountServiceBaseILb1E6CRefMTEEC4ERKS3_ */
	void CRefCounted(class CRefCounted<CRefCountServiceBase<true, CRefMT> > *); /* linkage=_ZN11CRefCountedI20CRefCountServiceBaseILb1E6CRefMTEEC4Ev */
	virtual void ~CRefCounted(class CRefCounted<CRefCountServiceBase<true, CRefMT> > *); /* linkage=_ZN11CRefCountedI20CRefCountServiceBaseILb1E6CRefMTEED4Ev */
	int AddRef(class CRefCounted<CRefCountServiceBase<true, CRefMT> > *); /* linkage=_ZN11CRefCountedI20CRefCountServiceBaseILb1E6CRefMTEE6AddRefEv */
	int Release(class CRefCounted<CRefCountServiceBase<true, CRefMT> > *); /* linkage=_ZN11CRefCountedI20CRefCountServiceBaseILb1E6CRefMTEE7ReleaseEv */
	class CRefCounted<CRefCountServiceBase<true, CRefMT> > & operator=(class CRefCounted<CRefCountServiceBase<true, CRefMT> > *, const class CRefCounted<CRefCountServiceBase<true, CRefMT> >  &); /* linkage=_ZN11CRefCountedI20CRefCountServiceBaseILb1E6CRefMTEEaSERKS3_ */
};

// <003FB713> ../public/tier0/refcount.h:325
// member functions: 11
// member variable: 1
// class size: 16
class CRefCounted<CRefCountServiceBase<true, CRefMT> > : public CRefCountServiceBase<true, CRefMT> {
public:
	/* class CRefCountServiceBase<true, CRefMT> <ancestor>; */ /* 0 16 */
	void CRefCounted(CRefCounted<CRefCountServiceBase<true, CRefMT> >* , const CRefCounted<CRefCountServiceBase<true, CRefMT> >& );
	void CRefCounted(CRefCounted<CRefCountServiceBase<true, CRefMT> >* );
	/* ../public/tier0/refcount.h:328 */
	virtual void ~CRefCounted(CRefCounted<CRefCountServiceBase<true, CRefMT> >* );
	/* ../public/tier0/refcount.h:329 */
	int AddRef(CRefCounted<CRefCountServiceBase<true, CRefMT> >* );
	/* ../public/tier0/refcount.h:330 */
	int Release(CRefCounted<CRefCountServiceBase<true, CRefMT> >* );
	void CRefCounted(class CRefCounted<CRefCountServiceBase<true, CRefMT> > *, const class CRefCounted<CRefCountServiceBase<true, CRefMT> >  &); /* linkage=_ZN11CRefCountedI20CRefCountServiceBaseILb1E6CRefMTEEC4ERKS3_ */
	void CRefCounted(class CRefCounted<CRefCountServiceBase<true, CRefMT> > *); /* linkage=_ZN11CRefCountedI20CRefCountServiceBaseILb1E6CRefMTEEC4Ev */
	virtual void ~CRefCounted(class CRefCounted<CRefCountServiceBase<true, CRefMT> > *); /* linkage=_ZN11CRefCountedI20CRefCountServiceBaseILb1E6CRefMTEED4Ev */
	int AddRef(class CRefCounted<CRefCountServiceBase<true, CRefMT> > *); /* linkage=_ZN11CRefCountedI20CRefCountServiceBaseILb1E6CRefMTEE6AddRefEv */
	int Release(class CRefCounted<CRefCountServiceBase<true, CRefMT> > *); /* linkage=_ZN11CRefCountedI20CRefCountServiceBaseILb1E6CRefMTEE7ReleaseEv */
	class CRefCounted<CRefCountServiceBase<true, CRefMT> > & operator=(class CRefCounted<CRefCountServiceBase<true, CRefMT> > *, const class CRefCounted<CRefCountServiceBase<true, CRefMT> >  &); /* linkage=_ZN11CRefCountedI20CRefCountServiceBaseILb1E6CRefMTEEaSERKS3_ */
};

// <054DCFC3> ../public/tier0/refcount.h:328
void CRefCounted<CRefCountServiceBase<true, CRefMT> >::~CRefCounted()
{
} /* size: 0 */

// <054DCF93> ../public/tier0/refcount.h:328
inline void CRefCounted<CRefCountServiceBase<true, CRefMT> >::~CRefCounted()
{
} /* size: 0 */

// <054D99F9> ../public/tier0/refcount.h:329
inline void CRefCounted<CRefCountServiceBase<true, CRefMT> >::AddRef()
{
} /* size: 0 */

// <054D9A12> ../public/tier0/refcount.h:330
inline void CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release()
{
} /* size: 0 */

// <02335069> ../public/tier0/refcount.h:339
void CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted()
{
} /* size: 0 */

// <0233504C> ../public/tier0/refcount.h:339
inline void CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted()
{
} /* size: 0 */

// <015BE364> ../public/tier0/refcount.h:339
void CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(const CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > &)
{
} /* size: 0 */

// <015BE342> ../public/tier0/refcount.h:339
inline void CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(const CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > &)
{
} /* size: 0 */

// <008B04A4> ../public/tier0/refcount.h:339
inline void CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::operator=(const CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > &)
{
} /* size: 0 */

// <000955E3> ../public/tier0/refcount.h:339
// member functions: 11
// member variable: 1
// class size: 16
class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > : public CMutableRefCountBase<true, CRefMT> {
public:
	/* class CMutableRefCountBase<true, CRefMT> <ancestor>; */ /* 0 16 */
	void CMutableRefCounted(CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >* , const CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >& );
	void CMutableRefCounted(CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >* );
	/* ../public/tier0/refcount.h:342 */
	virtual void ~CMutableRefCounted(CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >* );
	/* ../public/tier0/refcount.h:343 */
	int AddRef(const CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >* );
	/* ../public/tier0/refcount.h:344 */
	int Release(const CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >* );
	void CMutableRefCounted(class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > *, const class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >  &); /* linkage=_ZN18CMutableRefCountedI20CMutableRefCountBaseILb1E6CRefMTEEC4ERKS3_ */
	void CMutableRefCounted(class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > *); /* linkage=_ZN18CMutableRefCountedI20CMutableRefCountBaseILb1E6CRefMTEEC4Ev */
	virtual void ~CMutableRefCounted(class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > *); /* linkage=_ZN18CMutableRefCountedI20CMutableRefCountBaseILb1E6CRefMTEED4Ev */
	int AddRef(const class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >  *); /* linkage=_ZNK18CMutableRefCountedI20CMutableRefCountBaseILb1E6CRefMTEE6AddRefEv */
	int Release(const class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >  *); /* linkage=_ZNK18CMutableRefCountedI20CMutableRefCountBaseILb1E6CRefMTEE7ReleaseEv */
	class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > & operator=(class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > *, const class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >  &); /* linkage=_ZN18CMutableRefCountedI20CMutableRefCountBaseILb1E6CRefMTEEaSERKS3_ */
};

// <0018B12A> ../public/tier0/refcount.h:339
// member functions: 12
// member variable: 1
// class size: 16
class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > : public CMutableRefCountBase<true, CRefMT> {
public:
	/* class CMutableRefCountBase<true, CRefMT> <ancestor>; */ /* 0 16 */
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >& operator=(CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >* , const CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >& );
	void CMutableRefCounted(CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >* , const CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >& );
	void CMutableRefCounted(CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >* );
	/* ../public/tier0/refcount.h:342 */
	virtual void ~CMutableRefCounted(CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >* );
	/* ../public/tier0/refcount.h:343 */
	int AddRef(const CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >* );
	/* ../public/tier0/refcount.h:344 */
	int Release(const CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >* );
	void CMutableRefCounted(class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > *, const class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >  &); /* linkage=_ZN18CMutableRefCountedI20CMutableRefCountBaseILb1E6CRefMTEEC4ERKS3_ */
	void CMutableRefCounted(class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > *); /* linkage=_ZN18CMutableRefCountedI20CMutableRefCountBaseILb1E6CRefMTEEC4Ev */
	virtual void ~CMutableRefCounted(class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > *); /* linkage=_ZN18CMutableRefCountedI20CMutableRefCountBaseILb1E6CRefMTEED4Ev */
	int AddRef(const class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >  *); /* linkage=_ZNK18CMutableRefCountedI20CMutableRefCountBaseILb1E6CRefMTEE6AddRefEv */
	int Release(const class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >  *); /* linkage=_ZNK18CMutableRefCountedI20CMutableRefCountBaseILb1E6CRefMTEE7ReleaseEv */
	class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > & operator=(class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > *, const class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >  &); /* linkage=_ZN18CMutableRefCountedI20CMutableRefCountBaseILb1E6CRefMTEEaSERKS3_ */
};

// <0657DAB5> ../public/tier0/refcount.h:342
void CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted()
{
} /* size: 0 */

// <0657DA85> ../public/tier0/refcount.h:342
inline void CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted()
{
} /* size: 0 */

// <0657B3B1> ../public/tier0/refcount.h:343
inline void CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef()
{
} /* size: 0 */

// <0657B46C> ../public/tier0/refcount.h:344
inline void CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release()
{
} /* size: 0 */

// <001DEAC5> ../public/tier0/refcount.h:351
void CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> >::CRefCounted1()
{
} /* size: 0 */

// <001DEAA8> ../public/tier0/refcount.h:351
inline void CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> >::CRefCounted1()
{
} /* size: 0 */

// <001DC9C7> ../public/tier0/refcount.h:351
void CRefCounted1<IThreadPool, CRefCountServiceBase<true, CRefMT> >::CRefCounted1()
{
} /* size: 0 */

// <001DC9AA> ../public/tier0/refcount.h:351
inline void CRefCounted1<IThreadPool, CRefCountServiceBase<true, CRefMT> >::CRefCounted1()
{
} /* size: 0 */

// <0041365B> ../public/tier0/refcount.h:351
void CRefCounted1<IMeshRayTrace, CRefCountServiceBase<true, CRefMT> >::CRefCounted1()
{
} /* size: 0 */

// <0041363E> ../public/tier0/refcount.h:351
inline void CRefCounted1<IMeshRayTrace, CRefCountServiceBase<true, CRefMT> >::CRefCounted1()
{
} /* size: 0 */

// <0034ABDB> ../public/tier0/refcount.h:351
void CRefCounted1<CFunctorData, CRefCountServiceBase<true, CRefMT> >::CRefCounted1()
{
} /* size: 0 */

// <0034ABBE> ../public/tier0/refcount.h:351
inline void CRefCounted1<CFunctorData, CRefCountServiceBase<true, CRefMT> >::CRefCounted1()
{
} /* size: 0 */

// <0000D088> ../public/tier0/refcount.h:351
// member functions: 10
// member variables: 2
// vtable entries: 2
// class size: 24
class CRefCounted1<CFunctorCallback, CRefCountServiceBase<true, CRefMT> > : public CFunctorCallback, public CRefCountServiceBase<true, CRefMT> {
public:
	/* class CFunctorCallback <ancestor>; */ /* 0 8 */
	/* class CRefCountServiceBase<true, CRefMT> <ancestor>; */ /* 8 16 */
	void CRefCounted1(CRefCounted1<CFunctorCallback, CRefCountServiceBase<true, CRefMT> >* , const CRefCounted1<CFunctorCallback, CRefCountServiceBase<true, CRefMT> >& );
	void CRefCounted1(CRefCounted1<CFunctorCallback, CRefCountServiceBase<true, CRefMT> >* );
	/* ../public/tier0/refcount.h:355 */
	virtual void ~CRefCounted1(CRefCounted1<CFunctorCallback, CRefCountServiceBase<true, CRefMT> >* );
	/* ../public/tier0/refcount.h:356 */
	virtual int AddRef(CRefCounted1<CFunctorCallback, CRefCountServiceBase<true, CRefMT> >* );
	/* ../public/tier0/refcount.h:357 */
	virtual int Release(CRefCounted1<CFunctorCallback, CRefCountServiceBase<true, CRefMT> >* );
	void CRefCounted1(class CRefCounted1<CFunctorCallback, CRefCountServiceBase<true, CRefMT> > *, const class CRefCounted1<CFunctorCallback, CRefCountServiceBase<true, CRefMT> >  &); /* linkage=_ZN12CRefCounted1I16CFunctorCallback20CRefCountServiceBaseILb1E6CRefMTEEC4ERKS4_ */
	void CRefCounted1(class CRefCounted1<CFunctorCallback, CRefCountServiceBase<true, CRefMT> > *); /* linkage=_ZN12CRefCounted1I16CFunctorCallback20CRefCountServiceBaseILb1E6CRefMTEEC4Ev */
	virtual void ~CRefCounted1(class CRefCounted1<CFunctorCallback, CRefCountServiceBase<true, CRefMT> > *); /* linkage=_ZN12CRefCounted1I16CFunctorCallback20CRefCountServiceBaseILb1E6CRefMTEED4Ev */
	/* <132827> ../public/tier0/refcount.h:356 */
	virtual int AddRef(class CRefCounted1<CFunctorCallback, CRefCountServiceBase<true, CRefMT> > *); /* linkage=_ZN12CRefCounted1I16CFunctorCallback20CRefCountServiceBaseILb1E6CRefMTEE6AddRefEv */
	/* <132e32> ../public/tier0/refcount.h:357 */
	virtual int Release(class CRefCounted1<CFunctorCallback, CRefCountServiceBase<true, CRefMT> > *); /* linkage=_ZN12CRefCounted1I16CFunctorCallback20CRefCountServiceBaseILb1E6CRefMTEE7ReleaseEv */
};

// <0009FAE2> ../public/tier0/refcount.h:351
// member functions: 10
// member variables: 2
// vtable entries: 2
// class size: 24
class CRefCounted1<CFunctorData, CRefCountServiceBase<true, CRefMT> > : public CFunctorData, public CRefCountServiceBase<true, CRefMT> {
public:
	/* class CFunctorData <ancestor>; */ /* 0 8 */
	/* class CRefCountServiceBase<true, CRefMT> <ancestor>; */ /* 8 16 */
	void CRefCounted1(CRefCounted1<CFunctorData, CRefCountServiceBase<true, CRefMT> >* , const CRefCounted1<CFunctorData, CRefCountServiceBase<true, CRefMT> >& );
	void CRefCounted1(CRefCounted1<CFunctorData, CRefCountServiceBase<true, CRefMT> >* );
	/* ../public/tier0/refcount.h:355 */
	virtual void ~CRefCounted1(CRefCounted1<CFunctorData, CRefCountServiceBase<true, CRefMT> >* );
	/* ../public/tier0/refcount.h:356 */
	virtual int AddRef(CRefCounted1<CFunctorData, CRefCountServiceBase<true, CRefMT> >* );
	/* ../public/tier0/refcount.h:357 */
	virtual int Release(CRefCounted1<CFunctorData, CRefCountServiceBase<true, CRefMT> >* );
	void CRefCounted1(class CRefCounted1<CFunctorData, CRefCountServiceBase<true, CRefMT> > *, const class CRefCounted1<CFunctorData, CRefCountServiceBase<true, CRefMT> >  &); /* linkage=_ZN12CRefCounted1I12CFunctorData20CRefCountServiceBaseILb1E6CRefMTEEC4ERKS4_ */
	void CRefCounted1(class CRefCounted1<CFunctorData, CRefCountServiceBase<true, CRefMT> > *); /* linkage=_ZN12CRefCounted1I12CFunctorData20CRefCountServiceBaseILb1E6CRefMTEEC4Ev */
	virtual void ~CRefCounted1(class CRefCounted1<CFunctorData, CRefCountServiceBase<true, CRefMT> > *); /* linkage=_ZN12CRefCounted1I12CFunctorData20CRefCountServiceBaseILb1E6CRefMTEED4Ev */
	/* <1328e1> ../public/tier0/refcount.h:356 */
	virtual int AddRef(class CRefCounted1<CFunctorData, CRefCountServiceBase<true, CRefMT> > *); /* linkage=_ZN12CRefCounted1I12CFunctorData20CRefCountServiceBaseILb1E6CRefMTEE6AddRefEv */
	/* <132f37> ../public/tier0/refcount.h:357 */
	virtual int Release(class CRefCounted1<CFunctorData, CRefCountServiceBase<true, CRefMT> > *); /* linkage=_ZN12CRefCounted1I12CFunctorData20CRefCountServiceBaseILb1E6CRefMTEE7ReleaseEv */
};

// <00125C38> ../public/tier0/refcount.h:351
// member functions: 12
// member variables: 2
// vtable entries: 2
// class size: 24
class CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> > : public IRefCounted, public CRefCountServiceBase<true, CRefMT> {
public:
	/* class IRefCounted <ancestor>; */ /* 0 8 */
	/* class CRefCountServiceBase<true, CRefMT> <ancestor>; */ /* 8 16 */
	void CRefCounted1(CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> >* , const CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> >& );
	void CRefCounted1(CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> >* );
	CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> >& operator=(CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> >* , const CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> >& );
	/* ../public/tier0/refcount.h:355 */
	virtual void ~CRefCounted1(CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> >* );
	/* ../public/tier0/refcount.h:356 */
	virtual int AddRef(CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> >* );
	/* ../public/tier0/refcount.h:357 */
	virtual int Release(CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> >* );
	void CRefCounted1(class CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> > *, const class CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> >  &); /* linkage=_ZN12CRefCounted1I11IRefCounted20CRefCountServiceBaseILb1E6CRefMTEEC4ERKS4_ */
	void CRefCounted1(class CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> > *); /* linkage=_ZN12CRefCounted1I11IRefCounted20CRefCountServiceBaseILb1E6CRefMTEEC4Ev */
	class CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> > & operator=(class CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> > *, const class CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> >  &); /* linkage=_ZN12CRefCounted1I11IRefCounted20CRefCountServiceBaseILb1E6CRefMTEEaSERKS4_ */
	virtual void ~CRefCounted1(class CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> > *); /* linkage=_ZN12CRefCounted1I11IRefCounted20CRefCountServiceBaseILb1E6CRefMTEED4Ev */
	/* <1dfb01> ../public/tier0/refcount.h:356 */
	virtual int AddRef(class CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> > *); /* linkage=_ZN12CRefCounted1I11IRefCounted20CRefCountServiceBaseILb1E6CRefMTEE6AddRefEv */
	/* <40de81> ../public/tier0/refcount.h:357 */
	virtual int Release(class CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> > *); /* linkage=_ZN12CRefCounted1I11IRefCounted20CRefCountServiceBaseILb1E6CRefMTEE7ReleaseEv */
};

// <001C676B> ../public/tier0/refcount.h:351
// member functions: 10
// member variables: 2
// vtable entries: 2
// class size: 24
class CRefCounted1<IThreadPool, CRefCountServiceBase<true, CRefMT> > : public IThreadPool, public CRefCountServiceBase<true, CRefMT> {
public:
	/* class IThreadPool <ancestor>; */ /* 0 8 */
	/* class CRefCountServiceBase<true, CRefMT> <ancestor>; */ /* 8 16 */
	void CRefCounted1(CRefCounted1<IThreadPool, CRefCountServiceBase<true, CRefMT> >* , const CRefCounted1<IThreadPool, CRefCountServiceBase<true, CRefMT> >& );
	void CRefCounted1(CRefCounted1<IThreadPool, CRefCountServiceBase<true, CRefMT> >* );
	/* ../public/tier0/refcount.h:355 */
	virtual void ~CRefCounted1(CRefCounted1<IThreadPool, CRefCountServiceBase<true, CRefMT> >* );
	/* ../public/tier0/refcount.h:356 */
	virtual int AddRef(CRefCounted1<IThreadPool, CRefCountServiceBase<true, CRefMT> >* );
	/* ../public/tier0/refcount.h:357 */
	virtual int Release(CRefCounted1<IThreadPool, CRefCountServiceBase<true, CRefMT> >* );
	void CRefCounted1(class CRefCounted1<IThreadPool, CRefCountServiceBase<true, CRefMT> > *, const class CRefCounted1<IThreadPool, CRefCountServiceBase<true, CRefMT> >  &); /* linkage=_ZN12CRefCounted1I11IThreadPool20CRefCountServiceBaseILb1E6CRefMTEEC4ERKS4_ */
	void CRefCounted1(class CRefCounted1<IThreadPool, CRefCountServiceBase<true, CRefMT> > *); /* linkage=_ZN12CRefCounted1I11IThreadPool20CRefCountServiceBaseILb1E6CRefMTEEC4Ev */
	virtual void ~CRefCounted1(class CRefCounted1<IThreadPool, CRefCountServiceBase<true, CRefMT> > *); /* linkage=_ZN12CRefCounted1I11IThreadPool20CRefCountServiceBaseILb1E6CRefMTEED4Ev */
	virtual int AddRef(class CRefCounted1<IThreadPool, CRefCountServiceBase<true, CRefMT> > *); /* linkage=_ZN12CRefCounted1I11IThreadPool20CRefCountServiceBaseILb1E6CRefMTEE6AddRefEv */
	/* <1e1300> ../public/tier0/refcount.h:357 */
	virtual int Release(class CRefCounted1<IThreadPool, CRefCountServiceBase<true, CRefMT> > *); /* linkage=_ZN12CRefCounted1I11IThreadPool20CRefCountServiceBaseILb1E6CRefMTEE7ReleaseEv */
};

// <003FB779> ../public/tier0/refcount.h:351
// member functions: 10
// member variables: 2
// vtable entries: 2
// class size: 24
class CRefCounted1<IMeshRayTrace, CRefCountServiceBase<true, CRefMT> > : public IMeshRayTrace, public CRefCountServiceBase<true, CRefMT> {
public:
	/* class IMeshRayTrace <ancestor>; */ /* 0 8 */
	/* class CRefCountServiceBase<true, CRefMT> <ancestor>; */ /* 8 16 */
	void CRefCounted1(CRefCounted1<IMeshRayTrace, CRefCountServiceBase<true, CRefMT> >* , const CRefCounted1<IMeshRayTrace, CRefCountServiceBase<true, CRefMT> >& );
	void CRefCounted1(CRefCounted1<IMeshRayTrace, CRefCountServiceBase<true, CRefMT> >* );
	/* ../public/tier0/refcount.h:355 */
	virtual void ~CRefCounted1(CRefCounted1<IMeshRayTrace, CRefCountServiceBase<true, CRefMT> >* );
	/* ../public/tier0/refcount.h:356 */
	virtual int AddRef(CRefCounted1<IMeshRayTrace, CRefCountServiceBase<true, CRefMT> >* );
	/* ../public/tier0/refcount.h:357 */
	virtual int Release(CRefCounted1<IMeshRayTrace, CRefCountServiceBase<true, CRefMT> >* );
	void CRefCounted1(class CRefCounted1<IMeshRayTrace, CRefCountServiceBase<true, CRefMT> > *, const class CRefCounted1<IMeshRayTrace, CRefCountServiceBase<true, CRefMT> >  &); /* linkage=_ZN12CRefCounted1I13IMeshRayTrace20CRefCountServiceBaseILb1E6CRefMTEEC4ERKS4_ */
	void CRefCounted1(class CRefCounted1<IMeshRayTrace, CRefCountServiceBase<true, CRefMT> > *); /* linkage=_ZN12CRefCounted1I13IMeshRayTrace20CRefCountServiceBaseILb1E6CRefMTEEC4Ev */
	virtual void ~CRefCounted1(class CRefCounted1<IMeshRayTrace, CRefCountServiceBase<true, CRefMT> > *); /* linkage=_ZN12CRefCounted1I13IMeshRayTrace20CRefCountServiceBaseILb1E6CRefMTEED4Ev */
	/* <4178e4> ../public/tier0/refcount.h:356 */
	virtual int AddRef(class CRefCounted1<IMeshRayTrace, CRefCountServiceBase<true, CRefMT> > *); /* linkage=_ZN12CRefCounted1I13IMeshRayTrace20CRefCountServiceBaseILb1E6CRefMTEE6AddRefEv */
	virtual int Release(class CRefCounted1<IMeshRayTrace, CRefCountServiceBase<true, CRefMT> > *); /* linkage=_ZN12CRefCounted1I13IMeshRayTrace20CRefCountServiceBaseILb1E6CRefMTEE7ReleaseEv */
};

// <03E8D382> ../public/tier0/refcount.h:355
void CRefCounted1<CFunctorData, CRefCountServiceBase<true, CRefMT> >::~CRefCounted1()
{
} /* size: 0 */

// <03E8D352> ../public/tier0/refcount.h:355
inline void CRefCounted1<CFunctorData, CRefCountServiceBase<true, CRefMT> >::~CRefCounted1()
{
} /* size: 0 */

// <03E8D33B> ../public/tier0/refcount.h:355
void CRefCounted1<CFunctorCallback, CRefCountServiceBase<true, CRefMT> >::~CRefCounted1()
{
} /* size: 0 */

// <03E8D30B> ../public/tier0/refcount.h:355
inline void CRefCounted1<CFunctorCallback, CRefCountServiceBase<true, CRefMT> >::~CRefCounted1()
{
} /* size: 0 */

// <03E8D2F4> ../public/tier0/refcount.h:355
void CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> >::~CRefCounted1()
{
} /* size: 0 */

// <03E8D2C4> ../public/tier0/refcount.h:355
inline void CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> >::~CRefCounted1()
{
} /* size: 0 */

// <001CD33D> ../public/tier0/refcount.h:355
void CRefCounted1<IThreadPool, CRefCountServiceBase<true, CRefMT> >::~CRefCounted1()
{
} /* size: 0 */

// <001CD30D> ../public/tier0/refcount.h:355
inline void CRefCounted1<IThreadPool, CRefCountServiceBase<true, CRefMT> >::~CRefCounted1()
{
} /* size: 0 */

// <0040AE81> ../public/tier0/refcount.h:355
void CRefCounted1<IMeshRayTrace, CRefCountServiceBase<true, CRefMT> >::~CRefCounted1()
{
} /* size: 0 */

// <0040AE51> ../public/tier0/refcount.h:355
inline void CRefCounted1<IMeshRayTrace, CRefCountServiceBase<true, CRefMT> >::~CRefCounted1()
{
} /* size: 0 */

// <03E7582E> ../public/tier0/refcount.h:356
void CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> >::AddRef()
{
} /* size: 0 */

// <03E75816> ../public/tier0/refcount.h:356
void CRefCounted1<CFunctorCallback, CRefCountServiceBase<true, CRefMT> >::AddRef()
{
} /* size: 0 */

// <03E757E6> ../public/tier0/refcount.h:356
void CRefCounted1<CFunctorData, CRefCountServiceBase<true, CRefMT> >::AddRef()
{
} /* size: 0 */

// <001DFB01> ../public/tier0/refcount.h:356
// function calls: 3
void CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> >::AddRef()
{
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 199
	CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 356
} /* size: 18, inline expansions: 3 (39 bytes) */

// <001CC83F> ../public/tier0/refcount.h:356
inline void CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> >::AddRef()
{
} /* size: 0 */

// <001C8449> ../public/tier0/refcount.h:356
// function calls: 3
void CRefCounted1<IThreadPool, CRefCountServiceBase<true, CRefMT> >::AddRef()
{
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 199
	CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 356
} /* size: 18, inline expansions: 3 (39 bytes) */

// <001328E1> ../public/tier0/refcount.h:356
// function calls: 3
void CRefCounted1<CFunctorData, CRefCountServiceBase<true, CRefMT> >::AddRef()
{
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 199
	CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 356
} /* size: 18, inline expansions: 3 (39 bytes) */

// <00132827> ../public/tier0/refcount.h:356
// function calls: 3
void CRefCounted1<CFunctorCallback, CRefCountServiceBase<true, CRefMT> >::AddRef()
{
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 199
	CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 356
} /* size: 18, inline expansions: 3 (39 bytes) */

// <001269B3> ../public/tier0/refcount.h:356
inline void CRefCounted1<CFunctorCallback, CRefCountServiceBase<true, CRefMT> >::AddRef()
{
} /* size: 0 */

// <00126968> ../public/tier0/refcount.h:356
inline void CRefCounted1<CFunctorData, CRefCountServiceBase<true, CRefMT> >::AddRef()
{
} /* size: 0 */

// <004178E4> ../public/tier0/refcount.h:356
// function calls: 3
void CRefCounted1<IMeshRayTrace, CRefCountServiceBase<true, CRefMT> >::AddRef()
{
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 199
	CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 356
} /* size: 18, inline expansions: 3 (39 bytes) */

// <003FD643> ../public/tier0/refcount.h:356
inline void CRefCounted1<IMeshRayTrace, CRefCountServiceBase<true, CRefMT> >::AddRef()
{
} /* size: 0 */

// <03E8D2AC> ../public/tier0/refcount.h:357
void CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> >::Release()
{
} /* size: 0 */

// <03E757FE> ../public/tier0/refcount.h:357
void CRefCounted1<CFunctorCallback, CRefCountServiceBase<true, CRefMT> >::Release()
{
} /* size: 0 */

// <03E757CE> ../public/tier0/refcount.h:357
void CRefCounted1<CFunctorData, CRefCountServiceBase<true, CRefMT> >::Release()
{
} /* size: 0 */

// <0040DE81> ../public/tier0/refcount.h:357
// function calls: 4
void CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> >::Release()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 357
} /* size: 125, inline expansions: 4 (117 bytes) */

// <0040A008> ../public/tier0/refcount.h:357
inline void CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> >::Release()
{
} /* size: 0 */

// <001E1300> ../public/tier0/refcount.h:357
// function calls: 4
void CRefCounted1<IThreadPool, CRefCountServiceBase<true, CRefMT> >::Release()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 357
} /* size: 125, inline expansions: 4 (117 bytes) */

// <001C8430> ../public/tier0/refcount.h:357
inline void CRefCounted1<IThreadPool, CRefCountServiceBase<true, CRefMT> >::Release()
{
} /* size: 0 */

// <00132F37> ../public/tier0/refcount.h:357
// function calls: 4
void CRefCounted1<CFunctorData, CRefCountServiceBase<true, CRefMT> >::Release()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 357
} /* size: 125, inline expansions: 4 (117 bytes) */

// <00132E32> ../public/tier0/refcount.h:357
// function calls: 4
void CRefCounted1<CFunctorCallback, CRefCountServiceBase<true, CRefMT> >::Release()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 357
} /* size: 125, inline expansions: 4 (117 bytes) */

// <0012699A> ../public/tier0/refcount.h:357
inline void CRefCounted1<CFunctorCallback, CRefCountServiceBase<true, CRefMT> >::Release()
{
} /* size: 0 */

// <0012694F> ../public/tier0/refcount.h:357
inline void CRefCounted1<CFunctorData, CRefCountServiceBase<true, CRefMT> >::Release()
{
} /* size: 0 */

// <003FD539> ../public/tier0/refcount.h:357
// function calls: 4
void CRefCounted1<IMeshRayTrace, CRefCountServiceBase<true, CRefMT> >::Release()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 357
} /* size: 125, inline expansions: 4 (117 bytes) */

