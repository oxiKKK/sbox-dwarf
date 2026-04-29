
//
// public/engine2/iprerequisite_registry.h
//
//	referenced by: libengine2.so
//
//	functions: 2
//	class: 1
//

// <0024BA6F> ../public/engine2/iprerequisite_registry.h:13
void IPrerequisiteRegistry::IPrerequisiteRegistry()
{
} /* size: 0 */

// <0024BA53> ../public/engine2/iprerequisite_registry.h:13
inline void IPrerequisiteRegistry::IPrerequisiteRegistry()
{
} /* size: 0 */

// <00225531> ../public/engine2/iprerequisite_registry.h:13
// member functions: 16
// member variable: 1
// vtable entries: 2
// class size: 8
class IPrerequisiteRegistry {
	IPrerequisiteRegistry& operator=(IPrerequisiteRegistry* , IPrerequisiteRegistry& );
	IPrerequisiteRegistry& operator=(IPrerequisiteRegistry* , const IPrerequisiteRegistry& );
	void IPrerequisiteRegistry(IPrerequisiteRegistry* , IPrerequisiteRegistry& );
	void IPrerequisiteRegistry(IPrerequisiteRegistry* , const IPrerequisiteRegistry& );
	void IPrerequisiteRegistry(IPrerequisiteRegistry* );
	void ~IPrerequisiteRegistry(IPrerequisiteRegistry* );
	int ()(void) * * _vptr.IPrerequisiteRegistry; /* 0 8 */
	/* ../public/engine2/iprerequisite_registry.h:17 */
	virtual void AddPrerequisite(IPrerequisiteRegistry* , IPrerequisite* );
	/* ../public/engine2/iprerequisite_registry.h:18 */
	virtual void RemovePrerequisite(IPrerequisiteRegistry* , IPrerequisite* );
	class IPrerequisiteRegistry & operator=(class IPrerequisiteRegistry *, class IPrerequisiteRegistry &); /* linkage=_ZN21IPrerequisiteRegistryaSEOS_ */
	class IPrerequisiteRegistry & operator=(class IPrerequisiteRegistry *, const class IPrerequisiteRegistry  &); /* linkage=_ZN21IPrerequisiteRegistryaSERKS_ */
	void IPrerequisiteRegistry(class IPrerequisiteRegistry *, class IPrerequisiteRegistry &); /* linkage=_ZN21IPrerequisiteRegistryC4EOS_ */
	void IPrerequisiteRegistry(class IPrerequisiteRegistry *, const class IPrerequisiteRegistry  &); /* linkage=_ZN21IPrerequisiteRegistryC4ERKS_ */
	void IPrerequisiteRegistry(class IPrerequisiteRegistry *); /* linkage=_ZN21IPrerequisiteRegistryC4Ev */
	void ~IPrerequisiteRegistry(class IPrerequisiteRegistry *); /* linkage=_ZN21IPrerequisiteRegistryD4Ev */
	virtual void AddPrerequisite(class IPrerequisiteRegistry *, class IPrerequisite *); /* linkage=_ZN21IPrerequisiteRegistry15AddPrerequisiteEP13IPrerequisite */
	virtual void RemovePrerequisite(class IPrerequisiteRegistry *, class IPrerequisite *); /* linkage=_ZN21IPrerequisiteRegistry18RemovePrerequisiteEP13IPrerequisite */
};

