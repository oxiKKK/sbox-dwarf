
//
// ./sbox/managedsceneobject.h
//
//	referenced by: libengine2.so
//
//	functions: 4
//	class: 1
//

// <032FA614> ./sbox/managedsceneobject.h:9
void CManagedSceneObject::~CManagedSceneObject()
{
} /* size: 0 */

// <032FA5DF> ./sbox/managedsceneobject.h:9
inline void CManagedSceneObject::~CManagedSceneObject()
{
} /* size: 0 */

// <01F43BAF> ./sbox/managedsceneobject.h:9
// member functions: 12
// member variables: 2
// vtable entry: 1
// class size: 240
class CManagedSceneObject : public CSceneObject {
public:
	/* class CSceneObject <ancestor>; */ /* 0 240 */
	void CManagedSceneObject(CManagedSceneObject* , CManagedSceneObject& );
	void CManagedSceneObject(CManagedSceneObject* , const CManagedSceneObject& );
	void CManagedSceneObject(CManagedSceneObject* );
	/* ./sbox/managedsceneobject.h:13 */
	CManagedSceneObject* Create(ISceneWorld* );
	/* ./sbox/managedsceneobject.h:16 */
	virtual void InitManagedHandle(CManagedSceneObject* );
	bool ExecuteOnMainThread; /* 225 1 */
	virtual void ~CManagedSceneObject(CManagedSceneObject* );
	void CManagedSceneObject(class CManagedSceneObject *, class CManagedSceneObject &); /* linkage=_ZN19CManagedSceneObjectC4EOS_ */
	void CManagedSceneObject(class CManagedSceneObject *, const class CManagedSceneObject  &); /* linkage=_ZN19CManagedSceneObjectC4ERKS_ */
	void CManagedSceneObject(class CManagedSceneObject *); /* linkage=_ZN19CManagedSceneObjectC4Ev */
	class CManagedSceneObject * Create(class ISceneWorld *); /* linkage=_ZN19CManagedSceneObject6CreateEP11ISceneWorld */
	virtual void InitManagedHandle(class CManagedSceneObject *); /* linkage=_ZN19CManagedSceneObject17InitManagedHandleEv */
	virtual void ~CManagedSceneObject(class CManagedSceneObject *); /* linkage=_ZN19CManagedSceneObjectD4Ev */
} __attribute__((__aligned__(16)));

// <0330AA27> ./sbox/managedsceneobject.h:16
void CManagedSceneObject::InitManagedHandle()
{
} /* size: 0 */

// <02F193B5> ./sbox/managedsceneobject.h:27
void CManagedRendererDesc::GetTypeName()
{
} /* size: 0 */

