
//
// public/sbox/inetruntime.h
//
//	referenced by: libengine2.so
//
//	functions: 2
//	class: 1
//

// <015953FD> ../public/sbox/inetruntime.h:5
void INetRuntime::INetRuntime()
{
} /* size: 0 */

// <015953E1> ../public/sbox/inetruntime.h:5
inline void INetRuntime::INetRuntime()
{
} /* size: 0 */

// <014F7FA2> ../public/sbox/inetruntime.h:5
// member functions: 12
// member variable: 1
// vtable entries: 2
// class size: 8
class INetRuntime : public IAppSystem {
public:
	/* class IAppSystem <ancestor>; */ /* 0 8 */
	void INetRuntime(INetRuntime* , INetRuntime& );
	void INetRuntime(INetRuntime* , const INetRuntime& );
	void INetRuntime(INetRuntime* );
	void ~INetRuntime(INetRuntime* );
	/* ../public/sbox/inetruntime.h:9 */
	virtual int RegisterHandle(INetRuntime* , uint, void* );
	/* ../public/sbox/inetruntime.h:10 */
	virtual void FreeHandle(INetRuntime* , int);
	void INetRuntime(class INetRuntime *, class INetRuntime &); /* linkage=_ZN11INetRuntimeC4EOS_ */
	void INetRuntime(class INetRuntime *, const class INetRuntime  &); /* linkage=_ZN11INetRuntimeC4ERKS_ */
	void INetRuntime(class INetRuntime *); /* linkage=_ZN11INetRuntimeC4Ev */
	void ~INetRuntime(class INetRuntime *); /* linkage=_ZN11INetRuntimeD4Ev */
	virtual int RegisterHandle(class INetRuntime *, uint, void *); /* linkage=_ZN11INetRuntime14RegisterHandleEjPv */
	virtual void FreeHandle(class INetRuntime *, int); /* linkage=_ZN11INetRuntime10FreeHandleEi */
};

