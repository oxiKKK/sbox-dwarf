
//
// public/tier0/managedhandle.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libtier0.so
//
//	functions: 20
//	classes: 3
//

// <040B33BD> ../public/tier0/managedhandle.h:8
void CManagedHandle::CManagedHandle()
{
} /* size: 0 */

// <040B33A0> ../public/tier0/managedhandle.h:8
inline void CManagedHandle::CManagedHandle()
{
} /* size: 0 */

// <000C4A25> ../public/tier0/managedhandle.h:8
// member functions: 11
// member variable: 1
// class size: 4
class CManagedHandle {
	/* ../public/tier0/managedhandle.h:11 */
	void ~CManagedHandle(CManagedHandle* );
	/* ../public/tier0/managedhandle.h:16 */
	void Allocate(CManagedHandle* , const CUtlStringToken& , void* );
	/* ../public/tier0/managedhandle.h:17 */
	void Free(CManagedHandle* );
	/* ../public/tier0/managedhandle.h:19 */
	int GetValue(const CManagedHandle* );
	/* ../public/tier0/managedhandle.h:24 */
	int IsValid(const CManagedHandle* );
private:
	int m_iHandle; /* 0 4 */
	void ~CManagedHandle(class CManagedHandle *); /* linkage=_ZN14CManagedHandleD4Ev */
	void Allocate(class CManagedHandle *, const class CUtlStringToken  &, void *); /* linkage=_ZN14CManagedHandle8AllocateERK15CUtlStringTokenPv */
	void Free(class CManagedHandle *); /* linkage=_ZN14CManagedHandle4FreeEv */
	int GetValue(const class CManagedHandle  *); /* linkage=_ZNK14CManagedHandle8GetValueEv */
	int IsValid(const class CManagedHandle  *); /* linkage=_ZNK14CManagedHandle7IsValidEv */
	void CManagedHandle(class CManagedHandle *); /* linkage=_ZN14CManagedHandleC4Ev */
};

// <00A7C282> ../public/tier0/managedhandle.h:8
// member functions: 12
// member variable: 1
// class size: 4
class CManagedHandle {
	/* ../public/tier0/managedhandle.h:11 */
	void ~CManagedHandle(CManagedHandle* );
	/* ../public/tier0/managedhandle.h:16 */
	void Allocate(CManagedHandle* , const CUtlStringToken& , void* );
	/* ../public/tier0/managedhandle.h:17 */
	void Free(CManagedHandle* );
	/* ../public/tier0/managedhandle.h:19 */
	int GetValue(const CManagedHandle* );
	/* ../public/tier0/managedhandle.h:24 */
	int IsValid(const CManagedHandle* );
private:
	int m_iHandle; /* 0 4 */
	void CManagedHandle(CManagedHandle* );
	void ~CManagedHandle(class CManagedHandle *); /* linkage=_ZN14CManagedHandleD4Ev */
	void Allocate(class CManagedHandle *, const class CUtlStringToken  &, void *); /* linkage=_ZN14CManagedHandle8AllocateERK15CUtlStringTokenPv */
	void Free(class CManagedHandle *); /* linkage=_ZN14CManagedHandle4FreeEv */
	int GetValue(const class CManagedHandle  *); /* linkage=_ZNK14CManagedHandle8GetValueEv */
	int IsValid(const class CManagedHandle  *); /* linkage=_ZNK14CManagedHandle7IsValidEv */
	void CManagedHandle(class CManagedHandle *); /* linkage=_ZN14CManagedHandleC4Ev */
};

// <058C18D5> ../../public/tier0/managedhandle.h:8
// member functions: 11
// member variable: 1
// class size: 4
class CManagedHandle {
	/* ../../public/tier0/managedhandle.h:11 */
	void ~CManagedHandle(CManagedHandle* );
	/* ../../public/tier0/managedhandle.h:16 */
	void Allocate(CManagedHandle* , const CUtlStringToken& , void* );
	/* ../../public/tier0/managedhandle.h:17 */
	void Free(CManagedHandle* );
	/* ../../public/tier0/managedhandle.h:19 */
	int GetValue(const CManagedHandle* );
	/* ../../public/tier0/managedhandle.h:24 */
	int IsValid(const CManagedHandle* );
private:
	int m_iHandle; /* 0 4 */
	void ~CManagedHandle(class CManagedHandle *); /* linkage=_ZN14CManagedHandleD4Ev */
	void Allocate(class CManagedHandle *, const class CUtlStringToken  &, void *); /* linkage=_ZN14CManagedHandle8AllocateERK15CUtlStringTokenPv */
	void Free(class CManagedHandle *); /* linkage=_ZN14CManagedHandle4FreeEv */
	int GetValue(const class CManagedHandle  *); /* linkage=_ZNK14CManagedHandle8GetValueEv */
	int IsValid(const class CManagedHandle  *); /* linkage=_ZNK14CManagedHandle7IsValidEv */
	void CManagedHandle(class CManagedHandle *); /* linkage=_ZN14CManagedHandleC4Ev */
};

// <06E2A391> ../../public/tier0/managedhandle.h:11
void CManagedHandle::~CManagedHandle()
{
} /* size: 0 */

// <06E2A378> ../../public/tier0/managedhandle.h:11
inline void CManagedHandle::~CManagedHandle()
{
} /* size: 0 */

// <0634FE81> ../public/tier0/managedhandle.h:19
inline void CManagedHandle::GetValue()
{
} /* size: 0 */

// <01279883> ../public/tier0/managedhandle.h:39
inline int GetManagedHandle<IPhysicsJoint*>(IPhysicsJoint* c)
{
} /* size: 0 */

// <0127985A> ../public/tier0/managedhandle.h:39
inline int GetManagedHandle<IPhysicsBody*>(IPhysicsBody* c)
{
} /* size: 0 */

// <01279831> ../public/tier0/managedhandle.h:39
inline int GetManagedHandle<CSceneLightObject*>(CSceneLightObject* c)
{
} /* size: 0 */

// <01279808> ../public/tier0/managedhandle.h:39
inline int GetManagedHandle<CManagedSceneObject*>(CManagedSceneObject* c)
{
} /* size: 0 */

// <012797DF> ../public/tier0/managedhandle.h:39
inline int GetManagedHandle<CSceneObject*>(CSceneObject* c)
{
} /* size: 0 */

// <01279756> ../public/tier0/managedhandle.h:39
inline int GetManagedHandle<CAudioStreamManaged*>(CAudioStreamManaged* c)
{
} /* size: 0 */

// <0127972D> ../public/tier0/managedhandle.h:39
inline int GetManagedHandle<ISceneWorld*>(ISceneWorld* c)
{
} /* size: 0 */

// <01279682> ../public/tier0/managedhandle.h:39
inline int GetManagedHandle<CDynamicSceneObject*>(CDynamicSceneObject* c)
{
} /* size: 0 */

// <012792AB> ../public/tier0/managedhandle.h:39
inline int GetManagedHandle<IPhysicsShape*>(IPhysicsShape* c)
{
} /* size: 0 */

// <01278692> ../public/tier0/managedhandle.h:39
inline int GetManagedHandle<IPhysicsWorld*>(IPhysicsWorld* c)
{
} /* size: 0 */

// <01278459> ../public/tier0/managedhandle.h:39
inline int GetManagedHandle<CSceneSkyBoxObject*>(CSceneSkyBoxObject* c)
{
} /* size: 0 */

// <01278430> ../public/tier0/managedhandle.h:39
inline int GetManagedHandle<CDecalSceneObject*>(CDecalSceneObject* c)
{
} /* size: 0 */

// <01278333> ../public/tier0/managedhandle.h:39
inline int GetManagedHandle<CEnvMapSceneObject*>(CEnvMapSceneObject* c)
{
} /* size: 0 */

// <012782D9> ../public/tier0/managedhandle.h:39
inline int GetManagedHandle<CSceneLightProbeVolumeObject*>(CSceneLightProbeVolumeObject* c)
{
} /* size: 0 */

// <01277DDF> ../public/tier0/managedhandle.h:39
inline int GetManagedHandle<IPhysAggregateInstance*>(IPhysAggregateInstance* c)
{
} /* size: 0 */

