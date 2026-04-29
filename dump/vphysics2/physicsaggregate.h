
//
// vphysics2/physicsaggregate.h
//
//	referenced by: libengine2.so
//
//	functions: 4
//	class: 1
//

// <00D07590> vphysics2/physicsaggregate.h:9
// member functions: 106
// member variables: 8
// vtable entries: 43
// class size: 112
class CPhysAggregateInstance : public IPhysAggregateInstance {
public:
	/* class IPhysAggregateInstance <ancestor>; */ /* 0 16 */
	void CPhysAggregateInstance(CPhysAggregateInstance* , const CPhysAggregateInstance& );
	/* vphysics2/physicsaggregate.cpp:16 */
	void CPhysAggregateInstance(CPhysAggregateInstance* , CPhysicsWorld* );
	/* vphysics2/physicsaggregate.cpp:24 */
	void CPhysAggregateInstance(CPhysAggregateInstance* , CPhysicsWorld* , const CPhysAggregateData* , const CTransform& , uint64, VPhysicsMotionType_t);
	/* vphysics2/physicsaggregate.cpp:41 */
	virtual void ~CPhysAggregateInstance(CPhysAggregateInstance* );
	/* vphysics2/physicsaggregate.cpp:1015 */
	virtual void SetVelocity(CPhysAggregateInstance* , const Vector& );
	/* vphysics2/physicsaggregate.cpp:1023 */
	virtual void AddVelocity(CPhysAggregateInstance* , const Vector& );
	/* vphysics2/physicsaggregate.cpp:1031 */
	virtual void SetAngularVelocity(CPhysAggregateInstance* , const Vector& );
	/* vphysics2/physicsaggregate.cpp:1039 */
	virtual void AddAngularVelocity(CPhysAggregateInstance* , const Vector& );
	/* vphysics2/physicsaggregate.cpp:1047 */
	virtual void SetDebugName(CPhysAggregateInstance* , const char* );
	/* vphysics2/physicsaggregate.cpp:292 */
	virtual int GetBodyCount(const CPhysAggregateInstance* );
	/* vphysics2/physicsaggregate.cpp:297 */
	virtual const PartDesc_t AddPart(CPhysAggregateInstance* );
	/* vphysics2/physicsaggregate.cpp:302 */
	const PartDesc_t AddPart(CPhysAggregateInstance* , IPhysicsBody* );
	/* vphysics2/physicsaggregate.cpp:315 */
	virtual void RemoveBody(CPhysAggregateInstance* , int);
	/* vphysics2/physicsaggregate.cpp:391 */
	virtual CTransform GetBodyTransform(const CPhysAggregateInstance* , int);
	/* vphysics2/physicsaggregate.cpp:396 */
	virtual void SetBodyTransform(CPhysAggregateInstance* , CUtlStringToken, const CTransform& );
	/* vphysics2/physicsaggregate.cpp:324 */
	virtual const char* GetBodyName(const CPhysAggregateInstance* , int);
	/* vphysics2/physicsaggregate.cpp:336 */
	virtual uint32 GetBodyNameHash(const CPhysAggregateInstance* , int);
	/* vphysics2/physicsaggregate.cpp:348 */
	virtual IPhysicsBody* GetBodyByNameHash(const CPhysAggregateInstance* , uint32);
	/* vphysics2/physicsaggregate.cpp:372 */
	virtual int GetBodyIndex(const CPhysAggregateInstance* , IPhysicsBody* );
	/* vphysics2/physicsaggregate.cpp:385 */
	virtual IPhysicsBody* FindBodyByName(const CPhysAggregateInstance* , const char* );
	/* vphysics2/physicsaggregate.cpp:423 */
	virtual void SetCollisionAttributes(CPhysAggregateInstance* , const RnCollisionAttr_t& );
	/* vphysics2/physicsaggregate.cpp:958 */
	virtual uint SetMotionType(CPhysAggregateInstance* , VPhysicsMotionType_t);
	/* vphysics2/physicsaggregate.cpp:411 */
	virtual void GetRootTransform(const CPhysAggregateInstance* , CTransform* );
	/* vphysics2/physicsaggregate.cpp:891 */
	virtual uint GetTransformStates(CPhysAggregateInstance* );
	/* vphysics2/physicsaggregate.cpp:913 */
	virtual void EnableAutoSleeping(CPhysAggregateInstance* );
	/* vphysics2/physicsaggregate.cpp:921 */
	virtual void DisableAutoSleeping(CPhysAggregateInstance* );
	/* vphysics2/physicsaggregate.cpp:929 */
	virtual void WakeUp(CPhysAggregateInstance* );
	/* vphysics2/physicsaggregate.cpp:937 */
	virtual void PutToSleep(CPhysAggregateInstance* );
	/* vphysics2/physicsaggregate.cpp:945 */
	virtual bool IsAsleep(const CPhysAggregateInstance* );
	/* vphysics2/physicsaggregate.cpp:1069 */
	virtual void GetBbox(const CPhysAggregateInstance* , AABB_t* );
	/* vphysics2/physicsaggregate.cpp:1082 */
	virtual Vector GetOrigin(const CPhysAggregateInstance* );
	/* vphysics2/physicsaggregate.cpp:48 */
	virtual void Clear(CPhysAggregateInstance* );
	/* vphysics2/physicsaggregate.cpp:64 */
	virtual bool IsEmpty(const CPhysAggregateInstance* );
	/* vphysics2/physicsaggregate.cpp:465 */
	virtual float GetTotalMass(const CPhysAggregateInstance* );
	/* vphysics2/physicsaggregate.cpp:479 */
	virtual void SetTotalMass(CPhysAggregateInstance* , float);
	/* vphysics2/physicsaggregate.cpp:1091 */
	virtual const CPhysAggregateData* GetData(const CPhysAggregateInstance* );
	/* vphysics2/physicsaggregate.cpp:518 */
	virtual IPhysicsBody* GetBodyHandle(CPhysAggregateInstance* , int);
	/* vphysics2/physicsaggregate.cpp:523 */
	virtual const IPhysicsBody* GetBodyHandle(const CPhysAggregateInstance* , int);
	/* vphysics2/physicsaggregate.cpp:538 */
	virtual int GetJointCount(const CPhysAggregateInstance* );
	/* vphysics2/physicsaggregate.cpp:528 */
	virtual IPhysicsJoint* GetJointHandle(CPhysAggregateInstance* , int);
	/* vphysics2/physicsaggregate.cpp:533 */
	virtual const IPhysicsJoint* GetJointHandle(const CPhysAggregateInstance* , int);
	/* vphysics2/physicsaggregate.cpp:543 */
	virtual void RemoveJoint(CPhysAggregateInstance* , IPhysicsJoint* );
	/* vphysics2/physicsaggregate.cpp:560 */
	virtual void SetLinearDamping(CPhysAggregateInstance* , float);
	/* vphysics2/physicsaggregate.cpp:568 */
	virtual void SetAngularDamping(CPhysAggregateInstance* , float);
	/* vphysics2/physicsaggregate.cpp:69 */
	virtual bool SetSurfaceProperties(CPhysAggregateInstance* , CUtlStringToken);
	/* vphysics2/physicsaggregate.cpp:89 */
	virtual Vector GetMassCenter(const CPhysAggregateInstance* );
	/* vphysics2/physicsaggregate.cpp:108 */
	virtual IPhysicsWorld* GetWorld(const CPhysAggregateInstance* );
	/* vphysics2/physicsaggregate.cpp:1096 */
	virtual const CManagedHandle* GetManagedHandle(const CPhysAggregateInstance* );
private:
	/* vphysics2/physicsaggregate.cpp:250 */
	void BuildBodies(CPhysAggregateInstance* , const CTransform& , VPhysicsMotionType_t);
	/* vphysics2/physicsaggregate.cpp:589 */
	void BuildConstraints(CPhysAggregateInstance* );
	/* vphysics2/physicsaggregate.cpp:692 */
	void BuildJoints(CPhysAggregateInstance* );
	/* vphysics2/physicsaggregate.cpp:431 */
	void SetCollisionAttributesFromResource(CPhysAggregateInstance* );
	/* vphysics2/physicsaggregate.cpp:677 */
	IPhysicsBody* ResolveInternalBodyIndex(const CPhysAggregateInstance* , uint16, bool);
	CPhysicsWorld * m_pWorld; /* 16 8 */
	CSmartPtr<const CPhysAggregateData, CRefCountAccessor> m_pData; /* 24 8 */
	int m_nAggIndexInWorld; /* 32 4 */
	CUtlVector<IPhysicsBody*, CUtlMemory<IPhysicsBody*, int> > m_Bodies; /* 40 32 */
	CUtlVector<IPhysicsJoint*, CUtlMemory<IPhysicsJoint*, int> > m_Joints; /* 72 32 */
	CManagedHandle m_ManagedHandle; /* 104 4 */
	float m_flScale; /* 108 4 */
	void CPhysAggregateInstance(class CPhysAggregateInstance *, class CPhysicsWorld *); /* linkage=_ZN22CPhysAggregateInstanceC4EP13CPhysicsWorld */
	void CPhysAggregateInstance(class CPhysAggregateInstance *, class CPhysicsWorld *, const class CPhysAggregateData  *, const class CTransform  &, uint64, enum VPhysicsMotionType_t); /* linkage=_ZN22CPhysAggregateInstanceC4EP13CPhysicsWorldPK18CPhysAggregateDataRK10CTransformy20VPhysicsMotionType_t */
	void CPhysAggregateInstance(class CPhysAggregateInstance *, const class CPhysAggregateInstance  &); /* linkage=_ZN22CPhysAggregateInstanceC4ERKS_ */
	virtual void ~CPhysAggregateInstance(class CPhysAggregateInstance *); /* linkage=_ZN22CPhysAggregateInstanceD4Ev */
	virtual void SetVelocity(class CPhysAggregateInstance *, const class Vector  &); /* linkage=_ZN22CPhysAggregateInstance11SetVelocityERK6Vector */
	virtual void AddVelocity(class CPhysAggregateInstance *, const class Vector  &); /* linkage=_ZN22CPhysAggregateInstance11AddVelocityERK6Vector */
	virtual void SetAngularVelocity(class CPhysAggregateInstance *, const class Vector  &); /* linkage=_ZN22CPhysAggregateInstance18SetAngularVelocityERK6Vector */
	virtual void AddAngularVelocity(class CPhysAggregateInstance *, const class Vector  &); /* linkage=_ZN22CPhysAggregateInstance18AddAngularVelocityERK6Vector */
	virtual void SetDebugName(class CPhysAggregateInstance *, const char  *); /* linkage=_ZN22CPhysAggregateInstance12SetDebugNameEPKc */
	virtual int GetBodyCount(const class CPhysAggregateInstance  *); /* linkage=_ZNK22CPhysAggregateInstance12GetBodyCountEv */
	virtual const class PartDesc_t  AddPart(class CPhysAggregateInstance *); /* linkage=_ZN22CPhysAggregateInstance7AddPartEv */
	const class PartDesc_t  AddPart(class CPhysAggregateInstance *, class IPhysicsBody *); /* linkage=_ZN22CPhysAggregateInstance7AddPartEP12IPhysicsBody */
	/* <d1e013> vphysics2/physicsaggregate.cpp:315 */
	virtual void RemoveBody(class CPhysAggregateInstance *, int); /* linkage=_ZN22CPhysAggregateInstance10RemoveBodyEi */
	virtual class CTransform GetBodyTransform(const class CPhysAggregateInstance  *, int); /* linkage=_ZNK22CPhysAggregateInstance16GetBodyTransformEi */
	virtual void SetBodyTransform(class CPhysAggregateInstance *, class CUtlStringToken, const class CTransform  &); /* linkage=_ZN22CPhysAggregateInstance16SetBodyTransformE15CUtlStringTokenRK10CTransform */
	virtual const char  * GetBodyName(const class CPhysAggregateInstance  *, int); /* linkage=_ZNK22CPhysAggregateInstance11GetBodyNameEi */
	/* <d1eb30> vphysics2/physicsaggregate.cpp:336 */
	virtual uint32 GetBodyNameHash(const class CPhysAggregateInstance  *, int); /* linkage=_ZNK22CPhysAggregateInstance15GetBodyNameHashEi */
	virtual class IPhysicsBody * GetBodyByNameHash(const class CPhysAggregateInstance  *, uint32); /* linkage=_ZNK22CPhysAggregateInstance17GetBodyByNameHashEj */
	virtual int GetBodyIndex(const class CPhysAggregateInstance  *, class IPhysicsBody *); /* linkage=_ZNK22CPhysAggregateInstance12GetBodyIndexEP12IPhysicsBody */
	virtual class IPhysicsBody * FindBodyByName(const class CPhysAggregateInstance  *, const char  *); /* linkage=_ZNK22CPhysAggregateInstance14FindBodyByNameEPKc */
	virtual void SetCollisionAttributes(class CPhysAggregateInstance *, const class RnCollisionAttr_t  &); /* linkage=_ZN22CPhysAggregateInstance22SetCollisionAttributesERK17RnCollisionAttr_t */
	virtual uint SetMotionType(class CPhysAggregateInstance *, enum VPhysicsMotionType_t); /* linkage=_ZN22CPhysAggregateInstance13SetMotionTypeE20VPhysicsMotionType_t */
	/* <d1d925> vphysics2/physicsaggregate.cpp:411 */
	virtual void GetRootTransform(const class CPhysAggregateInstance  *, class CTransform *); /* linkage=_ZNK22CPhysAggregateInstance16GetRootTransformEP10CTransform */
	/* <d1d735> vphysics2/physicsaggregate.cpp:891 */
	virtual uint GetTransformStates(class CPhysAggregateInstance *); /* linkage=_ZN22CPhysAggregateInstance18GetTransformStatesEv */
	virtual void EnableAutoSleeping(class CPhysAggregateInstance *); /* linkage=_ZN22CPhysAggregateInstance18EnableAutoSleepingEv */
	virtual void DisableAutoSleeping(class CPhysAggregateInstance *); /* linkage=_ZN22CPhysAggregateInstance19DisableAutoSleepingEv */
	virtual void WakeUp(class CPhysAggregateInstance *); /* linkage=_ZN22CPhysAggregateInstance6WakeUpEv */
	virtual void PutToSleep(class CPhysAggregateInstance *); /* linkage=_ZN22CPhysAggregateInstance10PutToSleepEv */
	virtual bool IsAsleep(const class CPhysAggregateInstance  *); /* linkage=_ZNK22CPhysAggregateInstance8IsAsleepEv */
	/* <d1dc0f> vphysics2/physicsaggregate.cpp:1069 */
	virtual void GetBbox(const class CPhysAggregateInstance  *, class AABB_t *); /* linkage=_ZNK22CPhysAggregateInstance7GetBboxEP6AABB_t */
	/* <d1defe> vphysics2/physicsaggregate.cpp:1082 */
	virtual class Vector GetOrigin(const class CPhysAggregateInstance  *); /* linkage=_ZNK22CPhysAggregateInstance9GetOriginEv */
	virtual void Clear(class CPhysAggregateInstance *); /* linkage=_ZN22CPhysAggregateInstance5ClearEv */
	virtual bool IsEmpty(const class CPhysAggregateInstance  *); /* linkage=_ZNK22CPhysAggregateInstance7IsEmptyEv */
	virtual float GetTotalMass(const class CPhysAggregateInstance  *); /* linkage=_ZNK22CPhysAggregateInstance12GetTotalMassEv */
	/* <d1e388> vphysics2/physicsaggregate.cpp:479 */
	virtual void SetTotalMass(class CPhysAggregateInstance *, float); /* linkage=_ZN22CPhysAggregateInstance12SetTotalMassEf */
	virtual const class CPhysAggregateData  * GetData(const class CPhysAggregateInstance  *); /* linkage=_ZNK22CPhysAggregateInstance7GetDataEv */
	virtual class IPhysicsBody * GetBodyHandle(class CPhysAggregateInstance *, int); /* linkage=_ZN22CPhysAggregateInstance13GetBodyHandleEi */
	virtual const class IPhysicsBody  * GetBodyHandle(const class CPhysAggregateInstance  *, int); /* linkage=_ZNK22CPhysAggregateInstance13GetBodyHandleEi */
	virtual int GetJointCount(const class CPhysAggregateInstance  *); /* linkage=_ZNK22CPhysAggregateInstance13GetJointCountEv */
	virtual class IPhysicsJoint * GetJointHandle(class CPhysAggregateInstance *, int); /* linkage=_ZN22CPhysAggregateInstance14GetJointHandleEi */
	virtual const class IPhysicsJoint  * GetJointHandle(const class CPhysAggregateInstance  *, int); /* linkage=_ZNK22CPhysAggregateInstance14GetJointHandleEi */
	/* <d1d604> vphysics2/physicsaggregate.cpp:543 */
	virtual void RemoveJoint(class CPhysAggregateInstance *, class IPhysicsJoint *); /* linkage=_ZN22CPhysAggregateInstance11RemoveJointEP13IPhysicsJoint */
	virtual void SetLinearDamping(class CPhysAggregateInstance *, float); /* linkage=_ZN22CPhysAggregateInstance16SetLinearDampingEf */
	virtual void SetAngularDamping(class CPhysAggregateInstance *, float); /* linkage=_ZN22CPhysAggregateInstance17SetAngularDampingEf */
	virtual bool SetSurfaceProperties(class CPhysAggregateInstance *, class CUtlStringToken); /* linkage=_ZN22CPhysAggregateInstance20SetSurfacePropertiesE15CUtlStringToken */
	virtual class Vector GetMassCenter(const class CPhysAggregateInstance  *); /* linkage=_ZNK22CPhysAggregateInstance13GetMassCenterEv */
	virtual class IPhysicsWorld * GetWorld(const class CPhysAggregateInstance  *); /* linkage=_ZNK22CPhysAggregateInstance8GetWorldEv */
	virtual const class CManagedHandle  * GetManagedHandle(const class CPhysAggregateInstance  *); /* linkage=_ZNK22CPhysAggregateInstance16GetManagedHandleEv */
	void BuildBodies(class CPhysAggregateInstance *, const class CTransform  &, enum VPhysicsMotionType_t); /* linkage=_ZN22CPhysAggregateInstance11BuildBodiesERK10CTransform20VPhysicsMotionType_t */
	void BuildConstraints(class CPhysAggregateInstance *); /* linkage=_ZN22CPhysAggregateInstance16BuildConstraintsEv */
	void BuildJoints(class CPhysAggregateInstance *); /* linkage=_ZN22CPhysAggregateInstance11BuildJointsEv */
	void SetCollisionAttributesFromResource(class CPhysAggregateInstance *); /* linkage=_ZN22CPhysAggregateInstance34SetCollisionAttributesFromResourceEv */
	/* <d1ed2a> vphysics2/physicsaggregate.cpp:677 */
	class IPhysicsBody * ResolveInternalBodyIndex(const class CPhysAggregateInstance  *, uint16, bool); /* linkage=_ZNK22CPhysAggregateInstance24ResolveInternalBodyIndexEtb */
};

// <00B0AB86> vphysics2/physicsaggregate.h:13
void CPhysAggregateInstance::CPhysAggregateInstance(CPhysicsWorld* pWorld)
{
} /* size: 0 */

// <00B0ABAE> vphysics2/physicsaggregate.h:14
void CPhysAggregateInstance::CPhysAggregateInstance(CPhysicsWorld* pWorld, const CPhysAggregateData* pAggregateData, const CTransform& tmStart, uint64 nGameSceneNodeHandle, VPhysicsMotionType_t nMotionType)
{
} /* size: 0 */

// <00B4AA14> vphysics2/physicsaggregate.h:89
inline void GetIndex(const CPhysAggregateInstance* pAgg)
{
} /* size: 0 */

// <00B4A9F0> vphysics2/physicsaggregate.h:94
inline void SetIndex(CPhysAggregateInstance* pAgg, int nIndex)
{
} /* size: 0 */

