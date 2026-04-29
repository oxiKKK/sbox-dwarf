
//
// public/tier0/stackannotationvariablehandler.h
//
//	referenced by: libtier0.so
//
//	functions: 2
//	class: 1
//

// <004910B5> ../public/tier0/stackannotationvariablehandler.h:23
void IAnnotationPackager::IAnnotationPackager()
{
} /* size: 0 */

// <00491098> ../public/tier0/stackannotationvariablehandler.h:23
inline void IAnnotationPackager::IAnnotationPackager()
{
} /* size: 0 */

// <0048627B> ../public/tier0/stackannotationvariablehandler.h:23
// member functions: 20
// member variable: 1
// vtable entries: 6
// class size: 8
class IAnnotationPackager {
	void ~IAnnotationPackager(IAnnotationPackager* );
	void IAnnotationPackager(IAnnotationPackager* , IAnnotationPackager& );
	void IAnnotationPackager(IAnnotationPackager* , const IAnnotationPackager& );
	void IAnnotationPackager(IAnnotationPackager* );
	int ()(void) * * _vptr.IAnnotationPackager; /* 0 8 */
	/* ../public/tier0/stackannotationvariablehandler.h:26 */
	virtual void String(IAnnotationPackager* , const char* );
	/* ../public/tier0/stackannotationvariablehandler.h:27 */
	virtual void String(IAnnotationPackager* , HAnnotationOverrideContext_t, const char* );
	/* ../public/tier0/stackannotationvariablehandler.h:29 */
	virtual void FmtString(IAnnotationPackager* , const char* , ...);
	/* ../public/tier0/stackannotationvariablehandler.h:30 */
	virtual void FmtString(IAnnotationPackager* , HAnnotationOverrideContext_t, const char* , ...);
	/* ../public/tier0/stackannotationvariablehandler.h:33 */
	virtual size_t GetOverrideContextSize(IAnnotationPackager* );
	/* ../public/tier0/stackannotationvariablehandler.h:38 */
	virtual HAnnotationOverrideContext_t CreateOverrideContext(IAnnotationPackager* , void* , const void* , bool);
	void ~IAnnotationPackager(class IAnnotationPackager *); /* linkage=_ZN19IAnnotationPackagerD4Ev */
	void IAnnotationPackager(class IAnnotationPackager *, class IAnnotationPackager &); /* linkage=_ZN19IAnnotationPackagerC4EOS_ */
	void IAnnotationPackager(class IAnnotationPackager *, const class IAnnotationPackager  &); /* linkage=_ZN19IAnnotationPackagerC4ERKS_ */
	void IAnnotationPackager(class IAnnotationPackager *); /* linkage=_ZN19IAnnotationPackagerC4Ev */
	virtual void String(class IAnnotationPackager *, const char  *); /* linkage=_ZN19IAnnotationPackager6StringEPKc */
	virtual void String(class IAnnotationPackager *, HAnnotationOverrideContext_t, const char  *); /* linkage=_ZN19IAnnotationPackager6StringEP32HAnnotationOverrideContextGuts_tPKc */
	virtual void FmtString(class IAnnotationPackager *, const char  *, ...); /* linkage=_ZN19IAnnotationPackager9FmtStringEPKcz */
	virtual void FmtString(class IAnnotationPackager *, HAnnotationOverrideContext_t, const char  *, ...); /* linkage=_ZN19IAnnotationPackager9FmtStringEP32HAnnotationOverrideContextGuts_tPKcz */
	virtual size_t GetOverrideContextSize(class IAnnotationPackager *); /* linkage=_ZN19IAnnotationPackager22GetOverrideContextSizeEv */
	virtual HAnnotationOverrideContext_t CreateOverrideContext(class IAnnotationPackager *, void *, const void  *, bool); /* linkage=_ZN19IAnnotationPackager21CreateOverrideContextEPvPKvb */
};

