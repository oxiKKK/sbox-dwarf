
//
// public/tier0/iutlstringtokensystem.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libtier0.so
//				   libvfx_vulkan.so
//
//	functions: 3
//	class: 1
//

// <005A74DC> ../public/tier0/iutlstringtokensystem.h:21
void IUtlStringTokenSystem::IUtlStringTokenSystem()
{
} /* size: 0 */

// <005A74C0> ../public/tier0/iutlstringtokensystem.h:21
inline void IUtlStringTokenSystem::IUtlStringTokenSystem()
{
} /* size: 0 */

// <0059139D> ../public/tier0/iutlstringtokensystem.h:21
// member functions: 12
// member variable: 1
// vtable entries: 2
// class size: 8
class IUtlStringTokenSystem : public IAppSystem {
public:
	/* class IAppSystem <ancestor>; */ /* 0 8 */
	void ~IUtlStringTokenSystem(IUtlStringTokenSystem* );
	void IUtlStringTokenSystem(IUtlStringTokenSystem* , IUtlStringTokenSystem& );
	void IUtlStringTokenSystem(IUtlStringTokenSystem* , const IUtlStringTokenSystem& );
	void IUtlStringTokenSystem(IUtlStringTokenSystem* );
	/* ../public/tier0/iutlstringtokensystem.h:25 */
	virtual const char* GetLikelyStringTokenName(IUtlStringTokenSystem* , uint32);
	/* ../public/tier0/iutlstringtokensystem.h:27 */
	virtual void OnAppSearchPathsKnown(IUtlStringTokenSystem* );
	void ~IUtlStringTokenSystem(class IUtlStringTokenSystem *); /* linkage=_ZN21IUtlStringTokenSystemD4Ev */
	void IUtlStringTokenSystem(class IUtlStringTokenSystem *, class IUtlStringTokenSystem &); /* linkage=_ZN21IUtlStringTokenSystemC4EOS_ */
	void IUtlStringTokenSystem(class IUtlStringTokenSystem *, const class IUtlStringTokenSystem  &); /* linkage=_ZN21IUtlStringTokenSystemC4ERKS_ */
	void IUtlStringTokenSystem(class IUtlStringTokenSystem *); /* linkage=_ZN21IUtlStringTokenSystemC4Ev */
	virtual const char  * GetLikelyStringTokenName(class IUtlStringTokenSystem *, uint32); /* linkage=_ZN21IUtlStringTokenSystem24GetLikelyStringTokenNameEj */
	virtual void OnAppSearchPathsKnown(class IUtlStringTokenSystem *); /* linkage=_ZN21IUtlStringTokenSystem21OnAppSearchPathsKnownEv */
};

// <0012817A> ../public/tier0/iutlstringtokensystem.h:31
void RegisterStringToken(uint32, const char *, const char *, bool)
{
} /* size: 0 */

