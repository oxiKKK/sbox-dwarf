
//
// public/vphysx/vphysx_interface.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 16
//	classes: 5
//

// <00A9EFE8> ../public/vphysx/vphysx_interface.h:45
// member functions: 103
// member variables: 2
// vtable entries: 47
// class size: 16
class IPhysAggregateInstance {
	/* ../public/vphysx/vphysx_interface.h:48 */
	struct PartDesc_t {
		/* ../public/vphysx/vphysx_interface.h:50 */
		void PartDesc_t(PartDesc_t* );
		IPhysicsBody * m_hBody; /* 0 8 */
		int m_nIndex; /* 8 4 */
		/* ../public/vphysx/vphysx_interface.h:59 */
		IPhysicsBody* operator IPhysicsBody*(const PartDesc_t* );
		/* ../public/vphysx/vphysx_interface.h:60 */
		int operator int(const PartDesc_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	void IPhysAggregateInstance(IPhysAggregateInstance* , const IPhysAggregateInstance& );
	int ()(void) * * _vptr.IPhysAggregateInstance; /* 0 8 */
	/* ../public/vphysx/vphysx_interface.h:63 */
	void IPhysAggregateInstance(IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:64 */
	virtual void ~IPhysAggregateInstance(IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:66 */
	virtual void SetVelocity(IPhysAggregateInstance* , const Vector& );
	/* ../public/vphysx/vphysx_interface.h:67 */
	virtual void AddVelocity(IPhysAggregateInstance* , const Vector& );
	/* ../public/vphysx/vphysx_interface.h:69 */
	virtual void SetAngularVelocity(IPhysAggregateInstance* , const Vector& );
	/* ../public/vphysx/vphysx_interface.h:70 */
	virtual void AddAngularVelocity(IPhysAggregateInstance* , const Vector& );
	/* ../public/vphysx/vphysx_interface.h:72 */
	virtual int GetBodyCount(const IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:73 */
	virtual IPhysicsBody* GetBodyHandle(IPhysAggregateInstance* , int);
	/* ../public/vphysx/vphysx_interface.h:74 */
	virtual const IPhysicsBody* GetBodyHandle(const IPhysAggregateInstance* , int);
	/* ../public/vphysx/vphysx_interface.h:75 */
	virtual CTransform GetBodyTransform(const IPhysAggregateInstance* , int);
	/* ../public/vphysx/vphysx_interface.h:76 */
	virtual void SetBodyTransform(IPhysAggregateInstance* , CUtlStringToken, const CTransform& );
	/* ../public/vphysx/vphysx_interface.h:78 */
	virtual int GetJointCount(const IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:79 */
	virtual IPhysicsJoint* GetJointHandle(IPhysAggregateInstance* , int);
	/* ../public/vphysx/vphysx_interface.h:80 */
	virtual const IPhysicsJoint* GetJointHandle(const IPhysAggregateInstance* , int);
	/* ../public/vphysx/vphysx_interface.h:81 */
	virtual void RemoveJoint(IPhysAggregateInstance* , IPhysicsJoint* );
	/* ../public/vphysx/vphysx_interface.h:83 */
	virtual void Clear(IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:84 */
	virtual bool IsEmpty(const IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:86 */
	virtual const PartDesc_t AddPart(IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:87 */
	virtual void RemoveBody(IPhysAggregateInstance* , int);
	/* ../public/vphysx/vphysx_interface.h:89 */
	virtual const char* GetBodyName(const IPhysAggregateInstance* , int);
	/* ../public/vphysx/vphysx_interface.h:90 */
	virtual uint32 GetBodyNameHash(const IPhysAggregateInstance* , int);
	/* ../public/vphysx/vphysx_interface.h:91 */
	virtual IPhysicsBody* GetBodyByNameHash(const IPhysAggregateInstance* , uint32);
	/* ../public/vphysx/vphysx_interface.h:92 */
	virtual int GetBodyIndex(const IPhysAggregateInstance* , IPhysicsBody* );
	/* ../public/vphysx/vphysx_interface.h:95 */
	virtual IPhysicsBody* FindBodyByName(const IPhysAggregateInstance* , const char* );
	/* ../public/vphysx/vphysx_interface.h:97 */
	virtual void DisableNonDynamicJoints(IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:98 */
	virtual void SetCollisionAttributes(IPhysAggregateInstance* , const RnCollisionAttr_t& );
	/* ../public/vphysx/vphysx_interface.h:104 */
	virtual uint SetMotionType(IPhysAggregateInstance* , VPhysicsMotionType_t);
	/* ../public/vphysx/vphysx_interface.h:107 */
	virtual uint GetTransformStates(IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:109 */
	virtual void EnableAutoSleeping(IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:110 */
	virtual void DisableAutoSleeping(IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:112 */
	virtual void WakeUp(IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:113 */
	virtual void PutToSleep(IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:114 */
	virtual bool IsAsleep(const IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:116 */
	virtual void SetDebugName(IPhysAggregateInstance* , const char* );
	/* ../public/vphysx/vphysx_interface.h:117 */
	virtual void GetRootTransform(const IPhysAggregateInstance* , CTransform* );
	/* ../public/vphysx/vphysx_interface.h:119 */
	virtual const CPhysAggregateData* GetData(const IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:121 */
	virtual void GetBbox(const IPhysAggregateInstance* , AABB_t* );
	/* ../public/vphysx/vphysx_interface.h:123 */
	virtual Vector GetOrigin(const IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:125 */
	virtual void Dump(const IPhysAggregateInstance* , IFileSystem* );
	/* ../public/vphysx/vphysx_interface.h:126 */
	virtual void SetJointFriction(IPhysAggregateInstance* , float);
	/* ../public/vphysx/vphysx_interface.h:127 */
	virtual void Own(IPhysAggregateInstance* , CMemoryChain* );
	/* ../public/vphysx/vphysx_interface.h:129 */
	virtual float GetTotalMass(const IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:130 */
	virtual void SetTotalMass(IPhysAggregateInstance* , float);
	/* ../public/vphysx/vphysx_interface.h:132 */
	virtual void SetLinearDamping(IPhysAggregateInstance* , float);
	/* ../public/vphysx/vphysx_interface.h:133 */
	virtual void SetAngularDamping(IPhysAggregateInstance* , float);
	/* ../public/vphysx/vphysx_interface.h:135 */
	virtual bool SetSurfaceProperties(IPhysAggregateInstance* , CUtlStringToken);
	/* ../public/vphysx/vphysx_interface.h:137 */
	virtual Vector GetMassCenter(const IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:139 */
	virtual IPhysicsWorld* GetWorld(const IPhysAggregateInstance* );
	bool m_bIsAxisAligned; /* 8 1 */
	/* ../public/vphysx/vphysx_interface.h:146 */
	virtual const CManagedHandle* GetManagedHandle(const IPhysAggregateInstance* );
	void IPhysAggregateInstance(class IPhysAggregateInstance *, const class IPhysAggregateInstance  &); /* linkage=_ZN22IPhysAggregateInstanceC4ERKS_ */
	void IPhysAggregateInstance(class IPhysAggregateInstance *); /* linkage=_ZN22IPhysAggregateInstanceC4Ev */
	virtual void ~IPhysAggregateInstance(class IPhysAggregateInstance *); /* linkage=_ZN22IPhysAggregateInstanceD4Ev */
	virtual void SetVelocity(class IPhysAggregateInstance *, const class Vector  &); /* linkage=_ZN22IPhysAggregateInstance11SetVelocityERK6Vector */
	virtual void AddVelocity(class IPhysAggregateInstance *, const class Vector  &); /* linkage=_ZN22IPhysAggregateInstance11AddVelocityERK6Vector */
	virtual void SetAngularVelocity(class IPhysAggregateInstance *, const class Vector  &); /* linkage=_ZN22IPhysAggregateInstance18SetAngularVelocityERK6Vector */
	virtual void AddAngularVelocity(class IPhysAggregateInstance *, const class Vector  &); /* linkage=_ZN22IPhysAggregateInstance18AddAngularVelocityERK6Vector */
	virtual int GetBodyCount(const class IPhysAggregateInstance  *); /* linkage=_ZNK22IPhysAggregateInstance12GetBodyCountEv */
	/* <1356c2b> ../public/vphysx/vphysx_interface.h:73 */
	virtual class IPhysicsBody * GetBodyHandle(class IPhysAggregateInstance *, int); /* linkage=_ZN22IPhysAggregateInstance13GetBodyHandleEi */
	virtual const class IPhysicsBody  * GetBodyHandle(const class IPhysAggregateInstance  *, int); /* linkage=_ZNK22IPhysAggregateInstance13GetBodyHandleEi */
	virtual class CTransform GetBodyTransform(const class IPhysAggregateInstance  *, int); /* linkage=_ZNK22IPhysAggregateInstance16GetBodyTransformEi */
	virtual void SetBodyTransform(class IPhysAggregateInstance *, class CUtlStringToken, const class CTransform  &); /* linkage=_ZN22IPhysAggregateInstance16SetBodyTransformE15CUtlStringTokenRK10CTransform */
	virtual int GetJointCount(const class IPhysAggregateInstance  *); /* linkage=_ZNK22IPhysAggregateInstance13GetJointCountEv */
	virtual class IPhysicsJoint * GetJointHandle(class IPhysAggregateInstance *, int); /* linkage=_ZN22IPhysAggregateInstance14GetJointHandleEi */
	virtual const class IPhysicsJoint  * GetJointHandle(const class IPhysAggregateInstance  *, int); /* linkage=_ZNK22IPhysAggregateInstance14GetJointHandleEi */
	virtual void RemoveJoint(class IPhysAggregateInstance *, class IPhysicsJoint *); /* linkage=_ZN22IPhysAggregateInstance11RemoveJointEP13IPhysicsJoint */
	virtual void Clear(class IPhysAggregateInstance *); /* linkage=_ZN22IPhysAggregateInstance5ClearEv */
	virtual bool IsEmpty(const class IPhysAggregateInstance  *); /* linkage=_ZNK22IPhysAggregateInstance7IsEmptyEv */
	virtual const class PartDesc_t  AddPart(class IPhysAggregateInstance *); /* linkage=_ZN22IPhysAggregateInstance7AddPartEv */
	virtual void RemoveBody(class IPhysAggregateInstance *, int); /* linkage=_ZN22IPhysAggregateInstance10RemoveBodyEi */
	virtual const char  * GetBodyName(const class IPhysAggregateInstance  *, int); /* linkage=_ZNK22IPhysAggregateInstance11GetBodyNameEi */
	virtual uint32 GetBodyNameHash(const class IPhysAggregateInstance  *, int); /* linkage=_ZNK22IPhysAggregateInstance15GetBodyNameHashEi */
	virtual class IPhysicsBody * GetBodyByNameHash(const class IPhysAggregateInstance  *, uint32); /* linkage=_ZNK22IPhysAggregateInstance17GetBodyByNameHashEj */
	virtual int GetBodyIndex(const class IPhysAggregateInstance  *, class IPhysicsBody *); /* linkage=_ZNK22IPhysAggregateInstance12GetBodyIndexEP12IPhysicsBody */
	virtual class IPhysicsBody * FindBodyByName(const class IPhysAggregateInstance  *, const char  *); /* linkage=_ZNK22IPhysAggregateInstance14FindBodyByNameEPKc */
	virtual void DisableNonDynamicJoints(class IPhysAggregateInstance *); /* linkage=_ZN22IPhysAggregateInstance23DisableNonDynamicJointsEv */
	virtual void SetCollisionAttributes(class IPhysAggregateInstance *, const class RnCollisionAttr_t  &); /* linkage=_ZN22IPhysAggregateInstance22SetCollisionAttributesERK17RnCollisionAttr_t */
	virtual uint SetMotionType(class IPhysAggregateInstance *, enum VPhysicsMotionType_t); /* linkage=_ZN22IPhysAggregateInstance13SetMotionTypeE20VPhysicsMotionType_t */
	virtual uint GetTransformStates(class IPhysAggregateInstance *); /* linkage=_ZN22IPhysAggregateInstance18GetTransformStatesEv */
	virtual void EnableAutoSleeping(class IPhysAggregateInstance *); /* linkage=_ZN22IPhysAggregateInstance18EnableAutoSleepingEv */
	virtual void DisableAutoSleeping(class IPhysAggregateInstance *); /* linkage=_ZN22IPhysAggregateInstance19DisableAutoSleepingEv */
	virtual void WakeUp(class IPhysAggregateInstance *); /* linkage=_ZN22IPhysAggregateInstance6WakeUpEv */
	virtual void PutToSleep(class IPhysAggregateInstance *); /* linkage=_ZN22IPhysAggregateInstance10PutToSleepEv */
	virtual bool IsAsleep(const class IPhysAggregateInstance  *); /* linkage=_ZNK22IPhysAggregateInstance8IsAsleepEv */
	virtual void SetDebugName(class IPhysAggregateInstance *, const char  *); /* linkage=_ZN22IPhysAggregateInstance12SetDebugNameEPKc */
	virtual void GetRootTransform(const class IPhysAggregateInstance  *, class CTransform *); /* linkage=_ZNK22IPhysAggregateInstance16GetRootTransformEP10CTransform */
	virtual const class CPhysAggregateData  * GetData(const class IPhysAggregateInstance  *); /* linkage=_ZNK22IPhysAggregateInstance7GetDataEv */
	virtual void GetBbox(const class IPhysAggregateInstance  *, class AABB_t *); /* linkage=_ZNK22IPhysAggregateInstance7GetBboxEP6AABB_t */
	virtual class Vector GetOrigin(const class IPhysAggregateInstance  *); /* linkage=_ZNK22IPhysAggregateInstance9GetOriginEv */
	virtual void Dump(const class IPhysAggregateInstance  *, class IFileSystem *); /* linkage=_ZNK22IPhysAggregateInstance4DumpEP11IFileSystem */
	virtual void SetJointFriction(class IPhysAggregateInstance *, float); /* linkage=_ZN22IPhysAggregateInstance16SetJointFrictionEf */
	virtual void Own(class IPhysAggregateInstance *, class CMemoryChain *); /* linkage=_ZN22IPhysAggregateInstance3OwnEP12CMemoryChain */
	virtual float GetTotalMass(const class IPhysAggregateInstance  *); /* linkage=_ZNK22IPhysAggregateInstance12GetTotalMassEv */
	virtual void SetTotalMass(class IPhysAggregateInstance *, float); /* linkage=_ZN22IPhysAggregateInstance12SetTotalMassEf */
	virtual void SetLinearDamping(class IPhysAggregateInstance *, float); /* linkage=_ZN22IPhysAggregateInstance16SetLinearDampingEf */
	virtual void SetAngularDamping(class IPhysAggregateInstance *, float); /* linkage=_ZN22IPhysAggregateInstance17SetAngularDampingEf */
	virtual bool SetSurfaceProperties(class IPhysAggregateInstance *, class CUtlStringToken); /* linkage=_ZN22IPhysAggregateInstance20SetSurfacePropertiesE15CUtlStringToken */
	virtual class Vector GetMassCenter(const class IPhysAggregateInstance  *); /* linkage=_ZNK22IPhysAggregateInstance13GetMassCenterEv */
	virtual class IPhysicsWorld * GetWorld(const class IPhysAggregateInstance  *); /* linkage=_ZNK22IPhysAggregateInstance8GetWorldEv */
	virtual const class CManagedHandle  * GetManagedHandle(const class IPhysAggregateInstance  *); /* linkage=_ZNK22IPhysAggregateInstance16GetManagedHandleEv */
};

// <00CF34FE> ../public/vphysx/vphysx_interface.h:45
// member functions: 103
// member variables: 2
// vtable entries: 47
// class size: 16
class IPhysAggregateInstance {
	/* ../public/vphysx/vphysx_interface.h:48 */
	struct PartDesc_t {
		/* ../public/vphysx/vphysx_interface.h:50 */
		void PartDesc_t(PartDesc_t* );
		IPhysicsBody * m_hBody; /* 0 8 */
		int m_nIndex; /* 8 4 */
		/* ../public/vphysx/vphysx_interface.h:59 */
		IPhysicsBody* operator IPhysicsBody*(const PartDesc_t* );
		/* ../public/vphysx/vphysx_interface.h:60 */
		int operator int(const PartDesc_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/vphysx/vphysx_interface.h:106 */
	enum FlagEnum_t {
		FLAG_DYNAMIC = 1,
		FLAG_KINEMATIC = 2,
	};
	void IPhysAggregateInstance(IPhysAggregateInstance* , const IPhysAggregateInstance& );
	int ()(void) * * _vptr.IPhysAggregateInstance; /* 0 8 */
	/* ../public/vphysx/vphysx_interface.h:63 */
	void IPhysAggregateInstance(IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:64 */
	virtual void ~IPhysAggregateInstance(IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:66 */
	virtual void SetVelocity(IPhysAggregateInstance* , const Vector& );
	/* ../public/vphysx/vphysx_interface.h:67 */
	virtual void AddVelocity(IPhysAggregateInstance* , const Vector& );
	/* ../public/vphysx/vphysx_interface.h:69 */
	virtual void SetAngularVelocity(IPhysAggregateInstance* , const Vector& );
	/* ../public/vphysx/vphysx_interface.h:70 */
	virtual void AddAngularVelocity(IPhysAggregateInstance* , const Vector& );
	/* ../public/vphysx/vphysx_interface.h:72 */
	virtual int GetBodyCount(const IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:73 */
	virtual IPhysicsBody* GetBodyHandle(IPhysAggregateInstance* , int);
	/* ../public/vphysx/vphysx_interface.h:74 */
	virtual const IPhysicsBody* GetBodyHandle(const IPhysAggregateInstance* , int);
	/* ../public/vphysx/vphysx_interface.h:75 */
	virtual CTransform GetBodyTransform(const IPhysAggregateInstance* , int);
	/* ../public/vphysx/vphysx_interface.h:76 */
	virtual void SetBodyTransform(IPhysAggregateInstance* , CUtlStringToken, const CTransform& );
	/* ../public/vphysx/vphysx_interface.h:78 */
	virtual int GetJointCount(const IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:79 */
	virtual IPhysicsJoint* GetJointHandle(IPhysAggregateInstance* , int);
	/* ../public/vphysx/vphysx_interface.h:80 */
	virtual const IPhysicsJoint* GetJointHandle(const IPhysAggregateInstance* , int);
	/* ../public/vphysx/vphysx_interface.h:81 */
	virtual void RemoveJoint(IPhysAggregateInstance* , IPhysicsJoint* );
	/* ../public/vphysx/vphysx_interface.h:83 */
	virtual void Clear(IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:84 */
	virtual bool IsEmpty(const IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:86 */
	virtual const PartDesc_t AddPart(IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:87 */
	virtual void RemoveBody(IPhysAggregateInstance* , int);
	/* ../public/vphysx/vphysx_interface.h:89 */
	virtual const char* GetBodyName(const IPhysAggregateInstance* , int);
	/* ../public/vphysx/vphysx_interface.h:90 */
	virtual uint32 GetBodyNameHash(const IPhysAggregateInstance* , int);
	/* ../public/vphysx/vphysx_interface.h:91 */
	virtual IPhysicsBody* GetBodyByNameHash(const IPhysAggregateInstance* , uint32);
	/* ../public/vphysx/vphysx_interface.h:92 */
	virtual int GetBodyIndex(const IPhysAggregateInstance* , IPhysicsBody* );
	/* ../public/vphysx/vphysx_interface.h:95 */
	virtual IPhysicsBody* FindBodyByName(const IPhysAggregateInstance* , const char* );
	/* ../public/vphysx/vphysx_interface.h:97 */
	virtual void DisableNonDynamicJoints(IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:98 */
	virtual void SetCollisionAttributes(IPhysAggregateInstance* , const RnCollisionAttr_t& );
	/* ../public/vphysx/vphysx_interface.h:104 */
	virtual uint SetMotionType(IPhysAggregateInstance* , VPhysicsMotionType_t);
	/* ../public/vphysx/vphysx_interface.h:107 */
	virtual uint GetTransformStates(IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:109 */
	virtual void EnableAutoSleeping(IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:110 */
	virtual void DisableAutoSleeping(IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:112 */
	virtual void WakeUp(IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:113 */
	virtual void PutToSleep(IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:114 */
	virtual bool IsAsleep(const IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:116 */
	virtual void SetDebugName(IPhysAggregateInstance* , const char* );
	/* ../public/vphysx/vphysx_interface.h:117 */
	virtual void GetRootTransform(const IPhysAggregateInstance* , CTransform* );
	/* ../public/vphysx/vphysx_interface.h:119 */
	virtual const CPhysAggregateData* GetData(const IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:121 */
	virtual void GetBbox(const IPhysAggregateInstance* , AABB_t* );
	/* ../public/vphysx/vphysx_interface.h:123 */
	virtual Vector GetOrigin(const IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:125 */
	virtual void Dump(const IPhysAggregateInstance* , IFileSystem* );
	/* ../public/vphysx/vphysx_interface.h:126 */
	virtual void SetJointFriction(IPhysAggregateInstance* , float);
	/* ../public/vphysx/vphysx_interface.h:127 */
	virtual void Own(IPhysAggregateInstance* , CMemoryChain* );
	/* ../public/vphysx/vphysx_interface.h:129 */
	virtual float GetTotalMass(const IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:130 */
	virtual void SetTotalMass(IPhysAggregateInstance* , float);
	/* ../public/vphysx/vphysx_interface.h:132 */
	virtual void SetLinearDamping(IPhysAggregateInstance* , float);
	/* ../public/vphysx/vphysx_interface.h:133 */
	virtual void SetAngularDamping(IPhysAggregateInstance* , float);
	/* ../public/vphysx/vphysx_interface.h:135 */
	virtual bool SetSurfaceProperties(IPhysAggregateInstance* , CUtlStringToken);
	/* ../public/vphysx/vphysx_interface.h:137 */
	virtual Vector GetMassCenter(const IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:139 */
	virtual IPhysicsWorld* GetWorld(const IPhysAggregateInstance* );
	bool m_bIsAxisAligned; /* 8 1 */
	/* ../public/vphysx/vphysx_interface.h:146 */
	virtual const CManagedHandle* GetManagedHandle(const IPhysAggregateInstance* );
	void IPhysAggregateInstance(class IPhysAggregateInstance *, const class IPhysAggregateInstance  &); /* linkage=_ZN22IPhysAggregateInstanceC4ERKS_ */
	void IPhysAggregateInstance(class IPhysAggregateInstance *); /* linkage=_ZN22IPhysAggregateInstanceC4Ev */
	virtual void ~IPhysAggregateInstance(class IPhysAggregateInstance *); /* linkage=_ZN22IPhysAggregateInstanceD4Ev */
	virtual void SetVelocity(class IPhysAggregateInstance *, const class Vector  &); /* linkage=_ZN22IPhysAggregateInstance11SetVelocityERK6Vector */
	virtual void AddVelocity(class IPhysAggregateInstance *, const class Vector  &); /* linkage=_ZN22IPhysAggregateInstance11AddVelocityERK6Vector */
	virtual void SetAngularVelocity(class IPhysAggregateInstance *, const class Vector  &); /* linkage=_ZN22IPhysAggregateInstance18SetAngularVelocityERK6Vector */
	virtual void AddAngularVelocity(class IPhysAggregateInstance *, const class Vector  &); /* linkage=_ZN22IPhysAggregateInstance18AddAngularVelocityERK6Vector */
	virtual int GetBodyCount(const class IPhysAggregateInstance  *); /* linkage=_ZNK22IPhysAggregateInstance12GetBodyCountEv */
	/* <1356c2b> ../public/vphysx/vphysx_interface.h:73 */
	virtual class IPhysicsBody * GetBodyHandle(class IPhysAggregateInstance *, int); /* linkage=_ZN22IPhysAggregateInstance13GetBodyHandleEi */
	virtual const class IPhysicsBody  * GetBodyHandle(const class IPhysAggregateInstance  *, int); /* linkage=_ZNK22IPhysAggregateInstance13GetBodyHandleEi */
	virtual class CTransform GetBodyTransform(const class IPhysAggregateInstance  *, int); /* linkage=_ZNK22IPhysAggregateInstance16GetBodyTransformEi */
	virtual void SetBodyTransform(class IPhysAggregateInstance *, class CUtlStringToken, const class CTransform  &); /* linkage=_ZN22IPhysAggregateInstance16SetBodyTransformE15CUtlStringTokenRK10CTransform */
	virtual int GetJointCount(const class IPhysAggregateInstance  *); /* linkage=_ZNK22IPhysAggregateInstance13GetJointCountEv */
	virtual class IPhysicsJoint * GetJointHandle(class IPhysAggregateInstance *, int); /* linkage=_ZN22IPhysAggregateInstance14GetJointHandleEi */
	virtual const class IPhysicsJoint  * GetJointHandle(const class IPhysAggregateInstance  *, int); /* linkage=_ZNK22IPhysAggregateInstance14GetJointHandleEi */
	virtual void RemoveJoint(class IPhysAggregateInstance *, class IPhysicsJoint *); /* linkage=_ZN22IPhysAggregateInstance11RemoveJointEP13IPhysicsJoint */
	virtual void Clear(class IPhysAggregateInstance *); /* linkage=_ZN22IPhysAggregateInstance5ClearEv */
	virtual bool IsEmpty(const class IPhysAggregateInstance  *); /* linkage=_ZNK22IPhysAggregateInstance7IsEmptyEv */
	virtual const class PartDesc_t  AddPart(class IPhysAggregateInstance *); /* linkage=_ZN22IPhysAggregateInstance7AddPartEv */
	virtual void RemoveBody(class IPhysAggregateInstance *, int); /* linkage=_ZN22IPhysAggregateInstance10RemoveBodyEi */
	virtual const char  * GetBodyName(const class IPhysAggregateInstance  *, int); /* linkage=_ZNK22IPhysAggregateInstance11GetBodyNameEi */
	virtual uint32 GetBodyNameHash(const class IPhysAggregateInstance  *, int); /* linkage=_ZNK22IPhysAggregateInstance15GetBodyNameHashEi */
	virtual class IPhysicsBody * GetBodyByNameHash(const class IPhysAggregateInstance  *, uint32); /* linkage=_ZNK22IPhysAggregateInstance17GetBodyByNameHashEj */
	virtual int GetBodyIndex(const class IPhysAggregateInstance  *, class IPhysicsBody *); /* linkage=_ZNK22IPhysAggregateInstance12GetBodyIndexEP12IPhysicsBody */
	virtual class IPhysicsBody * FindBodyByName(const class IPhysAggregateInstance  *, const char  *); /* linkage=_ZNK22IPhysAggregateInstance14FindBodyByNameEPKc */
	virtual void DisableNonDynamicJoints(class IPhysAggregateInstance *); /* linkage=_ZN22IPhysAggregateInstance23DisableNonDynamicJointsEv */
	virtual void SetCollisionAttributes(class IPhysAggregateInstance *, const class RnCollisionAttr_t  &); /* linkage=_ZN22IPhysAggregateInstance22SetCollisionAttributesERK17RnCollisionAttr_t */
	virtual uint SetMotionType(class IPhysAggregateInstance *, enum VPhysicsMotionType_t); /* linkage=_ZN22IPhysAggregateInstance13SetMotionTypeE20VPhysicsMotionType_t */
	virtual uint GetTransformStates(class IPhysAggregateInstance *); /* linkage=_ZN22IPhysAggregateInstance18GetTransformStatesEv */
	virtual void EnableAutoSleeping(class IPhysAggregateInstance *); /* linkage=_ZN22IPhysAggregateInstance18EnableAutoSleepingEv */
	virtual void DisableAutoSleeping(class IPhysAggregateInstance *); /* linkage=_ZN22IPhysAggregateInstance19DisableAutoSleepingEv */
	virtual void WakeUp(class IPhysAggregateInstance *); /* linkage=_ZN22IPhysAggregateInstance6WakeUpEv */
	virtual void PutToSleep(class IPhysAggregateInstance *); /* linkage=_ZN22IPhysAggregateInstance10PutToSleepEv */
	virtual bool IsAsleep(const class IPhysAggregateInstance  *); /* linkage=_ZNK22IPhysAggregateInstance8IsAsleepEv */
	virtual void SetDebugName(class IPhysAggregateInstance *, const char  *); /* linkage=_ZN22IPhysAggregateInstance12SetDebugNameEPKc */
	virtual void GetRootTransform(const class IPhysAggregateInstance  *, class CTransform *); /* linkage=_ZNK22IPhysAggregateInstance16GetRootTransformEP10CTransform */
	virtual const class CPhysAggregateData  * GetData(const class IPhysAggregateInstance  *); /* linkage=_ZNK22IPhysAggregateInstance7GetDataEv */
	virtual void GetBbox(const class IPhysAggregateInstance  *, class AABB_t *); /* linkage=_ZNK22IPhysAggregateInstance7GetBboxEP6AABB_t */
	virtual class Vector GetOrigin(const class IPhysAggregateInstance  *); /* linkage=_ZNK22IPhysAggregateInstance9GetOriginEv */
	virtual void Dump(const class IPhysAggregateInstance  *, class IFileSystem *); /* linkage=_ZNK22IPhysAggregateInstance4DumpEP11IFileSystem */
	virtual void SetJointFriction(class IPhysAggregateInstance *, float); /* linkage=_ZN22IPhysAggregateInstance16SetJointFrictionEf */
	virtual void Own(class IPhysAggregateInstance *, class CMemoryChain *); /* linkage=_ZN22IPhysAggregateInstance3OwnEP12CMemoryChain */
	virtual float GetTotalMass(const class IPhysAggregateInstance  *); /* linkage=_ZNK22IPhysAggregateInstance12GetTotalMassEv */
	virtual void SetTotalMass(class IPhysAggregateInstance *, float); /* linkage=_ZN22IPhysAggregateInstance12SetTotalMassEf */
	virtual void SetLinearDamping(class IPhysAggregateInstance *, float); /* linkage=_ZN22IPhysAggregateInstance16SetLinearDampingEf */
	virtual void SetAngularDamping(class IPhysAggregateInstance *, float); /* linkage=_ZN22IPhysAggregateInstance17SetAngularDampingEf */
	virtual bool SetSurfaceProperties(class IPhysAggregateInstance *, class CUtlStringToken); /* linkage=_ZN22IPhysAggregateInstance20SetSurfacePropertiesE15CUtlStringToken */
	virtual class Vector GetMassCenter(const class IPhysAggregateInstance  *); /* linkage=_ZNK22IPhysAggregateInstance13GetMassCenterEv */
	virtual class IPhysicsWorld * GetWorld(const class IPhysAggregateInstance  *); /* linkage=_ZNK22IPhysAggregateInstance8GetWorldEv */
	virtual const class CManagedHandle  * GetManagedHandle(const class IPhysAggregateInstance  *); /* linkage=_ZNK22IPhysAggregateInstance16GetManagedHandleEv */
};

// <0119B93A> ../public/vphysx/vphysx_interface.h:45
// member functions: 102
// member variables: 2
// vtable entries: 47
// class size: 16
class IPhysAggregateInstance {
	/* ../public/vphysx/vphysx_interface.h:48 */
	struct PartDesc_t {
		/* ../public/vphysx/vphysx_interface.h:50 */
		void PartDesc_t(PartDesc_t* );
		IPhysicsBody * m_hBody; /* 0 8 */
		int m_nIndex; /* 8 4 */
		/* ../public/vphysx/vphysx_interface.h:59 */
		IPhysicsBody* operator IPhysicsBody*(const PartDesc_t* );
		/* ../public/vphysx/vphysx_interface.h:60 */
		int operator int(const PartDesc_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	int ()(void) * * _vptr.IPhysAggregateInstance; /* 0 8 */
	/* ../public/vphysx/vphysx_interface.h:63 */
	void IPhysAggregateInstance(IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:64 */
	virtual void ~IPhysAggregateInstance(IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:66 */
	virtual void SetVelocity(IPhysAggregateInstance* , const Vector& );
	/* ../public/vphysx/vphysx_interface.h:67 */
	virtual void AddVelocity(IPhysAggregateInstance* , const Vector& );
	/* ../public/vphysx/vphysx_interface.h:69 */
	virtual void SetAngularVelocity(IPhysAggregateInstance* , const Vector& );
	/* ../public/vphysx/vphysx_interface.h:70 */
	virtual void AddAngularVelocity(IPhysAggregateInstance* , const Vector& );
	/* ../public/vphysx/vphysx_interface.h:72 */
	virtual int GetBodyCount(const IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:73 */
	virtual IPhysicsBody* GetBodyHandle(IPhysAggregateInstance* , int);
	/* ../public/vphysx/vphysx_interface.h:74 */
	virtual const IPhysicsBody* GetBodyHandle(const IPhysAggregateInstance* , int);
	/* ../public/vphysx/vphysx_interface.h:75 */
	virtual CTransform GetBodyTransform(const IPhysAggregateInstance* , int);
	/* ../public/vphysx/vphysx_interface.h:76 */
	virtual void SetBodyTransform(IPhysAggregateInstance* , CUtlStringToken, const CTransform& );
	/* ../public/vphysx/vphysx_interface.h:78 */
	virtual int GetJointCount(const IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:79 */
	virtual IPhysicsJoint* GetJointHandle(IPhysAggregateInstance* , int);
	/* ../public/vphysx/vphysx_interface.h:80 */
	virtual const IPhysicsJoint* GetJointHandle(const IPhysAggregateInstance* , int);
	/* ../public/vphysx/vphysx_interface.h:81 */
	virtual void RemoveJoint(IPhysAggregateInstance* , IPhysicsJoint* );
	/* ../public/vphysx/vphysx_interface.h:83 */
	virtual void Clear(IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:84 */
	virtual bool IsEmpty(const IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:86 */
	virtual const PartDesc_t AddPart(IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:87 */
	virtual void RemoveBody(IPhysAggregateInstance* , int);
	/* ../public/vphysx/vphysx_interface.h:89 */
	virtual const char* GetBodyName(const IPhysAggregateInstance* , int);
	/* ../public/vphysx/vphysx_interface.h:90 */
	virtual uint32 GetBodyNameHash(const IPhysAggregateInstance* , int);
	/* ../public/vphysx/vphysx_interface.h:91 */
	virtual IPhysicsBody* GetBodyByNameHash(const IPhysAggregateInstance* , uint32);
	/* ../public/vphysx/vphysx_interface.h:92 */
	virtual int GetBodyIndex(const IPhysAggregateInstance* , IPhysicsBody* );
	/* ../public/vphysx/vphysx_interface.h:95 */
	virtual IPhysicsBody* FindBodyByName(const IPhysAggregateInstance* , const char* );
	/* ../public/vphysx/vphysx_interface.h:97 */
	virtual void DisableNonDynamicJoints(IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:98 */
	virtual void SetCollisionAttributes(IPhysAggregateInstance* , const RnCollisionAttr_t& );
	/* ../public/vphysx/vphysx_interface.h:104 */
	virtual uint SetMotionType(IPhysAggregateInstance* , VPhysicsMotionType_t);
	/* ../public/vphysx/vphysx_interface.h:107 */
	virtual uint GetTransformStates(IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:109 */
	virtual void EnableAutoSleeping(IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:110 */
	virtual void DisableAutoSleeping(IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:112 */
	virtual void WakeUp(IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:113 */
	virtual void PutToSleep(IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:114 */
	virtual bool IsAsleep(const IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:116 */
	virtual void SetDebugName(IPhysAggregateInstance* , const char* );
	/* ../public/vphysx/vphysx_interface.h:117 */
	virtual void GetRootTransform(const IPhysAggregateInstance* , CTransform* );
	/* ../public/vphysx/vphysx_interface.h:119 */
	virtual const CPhysAggregateData* GetData(const IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:121 */
	virtual void GetBbox(const IPhysAggregateInstance* , AABB_t* );
	/* ../public/vphysx/vphysx_interface.h:123 */
	virtual Vector GetOrigin(const IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:125 */
	virtual void Dump(const IPhysAggregateInstance* , IFileSystem* );
	/* ../public/vphysx/vphysx_interface.h:126 */
	virtual void SetJointFriction(IPhysAggregateInstance* , float);
	/* ../public/vphysx/vphysx_interface.h:127 */
	virtual void Own(IPhysAggregateInstance* , CMemoryChain* );
	/* ../public/vphysx/vphysx_interface.h:129 */
	virtual float GetTotalMass(const IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:130 */
	virtual void SetTotalMass(IPhysAggregateInstance* , float);
	/* ../public/vphysx/vphysx_interface.h:132 */
	virtual void SetLinearDamping(IPhysAggregateInstance* , float);
	/* ../public/vphysx/vphysx_interface.h:133 */
	virtual void SetAngularDamping(IPhysAggregateInstance* , float);
	/* ../public/vphysx/vphysx_interface.h:135 */
	virtual bool SetSurfaceProperties(IPhysAggregateInstance* , CUtlStringToken);
	/* ../public/vphysx/vphysx_interface.h:137 */
	virtual Vector GetMassCenter(const IPhysAggregateInstance* );
	/* ../public/vphysx/vphysx_interface.h:139 */
	virtual IPhysicsWorld* GetWorld(const IPhysAggregateInstance* );
	bool m_bIsAxisAligned; /* 8 1 */
	/* ../public/vphysx/vphysx_interface.h:146 */
	virtual const CManagedHandle* GetManagedHandle(const IPhysAggregateInstance* );
	void IPhysAggregateInstance(class IPhysAggregateInstance *, const class IPhysAggregateInstance  &); /* linkage=_ZN22IPhysAggregateInstanceC4ERKS_ */
	void IPhysAggregateInstance(class IPhysAggregateInstance *); /* linkage=_ZN22IPhysAggregateInstanceC4Ev */
	virtual void ~IPhysAggregateInstance(class IPhysAggregateInstance *); /* linkage=_ZN22IPhysAggregateInstanceD4Ev */
	virtual void SetVelocity(class IPhysAggregateInstance *, const class Vector  &); /* linkage=_ZN22IPhysAggregateInstance11SetVelocityERK6Vector */
	virtual void AddVelocity(class IPhysAggregateInstance *, const class Vector  &); /* linkage=_ZN22IPhysAggregateInstance11AddVelocityERK6Vector */
	virtual void SetAngularVelocity(class IPhysAggregateInstance *, const class Vector  &); /* linkage=_ZN22IPhysAggregateInstance18SetAngularVelocityERK6Vector */
	virtual void AddAngularVelocity(class IPhysAggregateInstance *, const class Vector  &); /* linkage=_ZN22IPhysAggregateInstance18AddAngularVelocityERK6Vector */
	virtual int GetBodyCount(const class IPhysAggregateInstance  *); /* linkage=_ZNK22IPhysAggregateInstance12GetBodyCountEv */
	/* <1356c2b> ../public/vphysx/vphysx_interface.h:73 */
	virtual class IPhysicsBody * GetBodyHandle(class IPhysAggregateInstance *, int); /* linkage=_ZN22IPhysAggregateInstance13GetBodyHandleEi */
	virtual const class IPhysicsBody  * GetBodyHandle(const class IPhysAggregateInstance  *, int); /* linkage=_ZNK22IPhysAggregateInstance13GetBodyHandleEi */
	virtual class CTransform GetBodyTransform(const class IPhysAggregateInstance  *, int); /* linkage=_ZNK22IPhysAggregateInstance16GetBodyTransformEi */
	virtual void SetBodyTransform(class IPhysAggregateInstance *, class CUtlStringToken, const class CTransform  &); /* linkage=_ZN22IPhysAggregateInstance16SetBodyTransformE15CUtlStringTokenRK10CTransform */
	virtual int GetJointCount(const class IPhysAggregateInstance  *); /* linkage=_ZNK22IPhysAggregateInstance13GetJointCountEv */
	virtual class IPhysicsJoint * GetJointHandle(class IPhysAggregateInstance *, int); /* linkage=_ZN22IPhysAggregateInstance14GetJointHandleEi */
	virtual const class IPhysicsJoint  * GetJointHandle(const class IPhysAggregateInstance  *, int); /* linkage=_ZNK22IPhysAggregateInstance14GetJointHandleEi */
	virtual void RemoveJoint(class IPhysAggregateInstance *, class IPhysicsJoint *); /* linkage=_ZN22IPhysAggregateInstance11RemoveJointEP13IPhysicsJoint */
	virtual void Clear(class IPhysAggregateInstance *); /* linkage=_ZN22IPhysAggregateInstance5ClearEv */
	virtual bool IsEmpty(const class IPhysAggregateInstance  *); /* linkage=_ZNK22IPhysAggregateInstance7IsEmptyEv */
	virtual const class PartDesc_t  AddPart(class IPhysAggregateInstance *); /* linkage=_ZN22IPhysAggregateInstance7AddPartEv */
	virtual void RemoveBody(class IPhysAggregateInstance *, int); /* linkage=_ZN22IPhysAggregateInstance10RemoveBodyEi */
	virtual const char  * GetBodyName(const class IPhysAggregateInstance  *, int); /* linkage=_ZNK22IPhysAggregateInstance11GetBodyNameEi */
	virtual uint32 GetBodyNameHash(const class IPhysAggregateInstance  *, int); /* linkage=_ZNK22IPhysAggregateInstance15GetBodyNameHashEi */
	virtual class IPhysicsBody * GetBodyByNameHash(const class IPhysAggregateInstance  *, uint32); /* linkage=_ZNK22IPhysAggregateInstance17GetBodyByNameHashEj */
	virtual int GetBodyIndex(const class IPhysAggregateInstance  *, class IPhysicsBody *); /* linkage=_ZNK22IPhysAggregateInstance12GetBodyIndexEP12IPhysicsBody */
	virtual class IPhysicsBody * FindBodyByName(const class IPhysAggregateInstance  *, const char  *); /* linkage=_ZNK22IPhysAggregateInstance14FindBodyByNameEPKc */
	virtual void DisableNonDynamicJoints(class IPhysAggregateInstance *); /* linkage=_ZN22IPhysAggregateInstance23DisableNonDynamicJointsEv */
	virtual void SetCollisionAttributes(class IPhysAggregateInstance *, const class RnCollisionAttr_t  &); /* linkage=_ZN22IPhysAggregateInstance22SetCollisionAttributesERK17RnCollisionAttr_t */
	virtual uint SetMotionType(class IPhysAggregateInstance *, enum VPhysicsMotionType_t); /* linkage=_ZN22IPhysAggregateInstance13SetMotionTypeE20VPhysicsMotionType_t */
	virtual uint GetTransformStates(class IPhysAggregateInstance *); /* linkage=_ZN22IPhysAggregateInstance18GetTransformStatesEv */
	virtual void EnableAutoSleeping(class IPhysAggregateInstance *); /* linkage=_ZN22IPhysAggregateInstance18EnableAutoSleepingEv */
	virtual void DisableAutoSleeping(class IPhysAggregateInstance *); /* linkage=_ZN22IPhysAggregateInstance19DisableAutoSleepingEv */
	virtual void WakeUp(class IPhysAggregateInstance *); /* linkage=_ZN22IPhysAggregateInstance6WakeUpEv */
	virtual void PutToSleep(class IPhysAggregateInstance *); /* linkage=_ZN22IPhysAggregateInstance10PutToSleepEv */
	virtual bool IsAsleep(const class IPhysAggregateInstance  *); /* linkage=_ZNK22IPhysAggregateInstance8IsAsleepEv */
	virtual void SetDebugName(class IPhysAggregateInstance *, const char  *); /* linkage=_ZN22IPhysAggregateInstance12SetDebugNameEPKc */
	virtual void GetRootTransform(const class IPhysAggregateInstance  *, class CTransform *); /* linkage=_ZNK22IPhysAggregateInstance16GetRootTransformEP10CTransform */
	virtual const class CPhysAggregateData  * GetData(const class IPhysAggregateInstance  *); /* linkage=_ZNK22IPhysAggregateInstance7GetDataEv */
	virtual void GetBbox(const class IPhysAggregateInstance  *, class AABB_t *); /* linkage=_ZNK22IPhysAggregateInstance7GetBboxEP6AABB_t */
	virtual class Vector GetOrigin(const class IPhysAggregateInstance  *); /* linkage=_ZNK22IPhysAggregateInstance9GetOriginEv */
	virtual void Dump(const class IPhysAggregateInstance  *, class IFileSystem *); /* linkage=_ZNK22IPhysAggregateInstance4DumpEP11IFileSystem */
	virtual void SetJointFriction(class IPhysAggregateInstance *, float); /* linkage=_ZN22IPhysAggregateInstance16SetJointFrictionEf */
	virtual void Own(class IPhysAggregateInstance *, class CMemoryChain *); /* linkage=_ZN22IPhysAggregateInstance3OwnEP12CMemoryChain */
	virtual float GetTotalMass(const class IPhysAggregateInstance  *); /* linkage=_ZNK22IPhysAggregateInstance12GetTotalMassEv */
	virtual void SetTotalMass(class IPhysAggregateInstance *, float); /* linkage=_ZN22IPhysAggregateInstance12SetTotalMassEf */
	virtual void SetLinearDamping(class IPhysAggregateInstance *, float); /* linkage=_ZN22IPhysAggregateInstance16SetLinearDampingEf */
	virtual void SetAngularDamping(class IPhysAggregateInstance *, float); /* linkage=_ZN22IPhysAggregateInstance17SetAngularDampingEf */
	virtual bool SetSurfaceProperties(class IPhysAggregateInstance *, class CUtlStringToken); /* linkage=_ZN22IPhysAggregateInstance20SetSurfacePropertiesE15CUtlStringToken */
	virtual class Vector GetMassCenter(const class IPhysAggregateInstance  *); /* linkage=_ZNK22IPhysAggregateInstance13GetMassCenterEv */
	virtual class IPhysicsWorld * GetWorld(const class IPhysAggregateInstance  *); /* linkage=_ZNK22IPhysAggregateInstance8GetWorldEv */
	virtual const class CManagedHandle  * GetManagedHandle(const class IPhysAggregateInstance  *); /* linkage=_ZNK22IPhysAggregateInstance16GetManagedHandleEv */
};

// <00D1C115> ../public/vphysx/vphysx_interface.h:50
void PartDesc_t::PartDesc_t()
{
} /* size: 0 */

// <00D1C0FC> ../public/vphysx/vphysx_interface.h:50
inline void PartDesc_t::PartDesc_t()
{
} /* size: 0 */

// <00D1C0E5> ../public/vphysx/vphysx_interface.h:63
void IPhysAggregateInstance::IPhysAggregateInstance()
{
} /* size: 0 */

// <00D1C0CC> ../public/vphysx/vphysx_interface.h:63
inline void IPhysAggregateInstance::IPhysAggregateInstance()
{
} /* size: 0 */

// <00D1C0B5> ../public/vphysx/vphysx_interface.h:64
void IPhysAggregateInstance::~IPhysAggregateInstance()
{
} /* size: 0 */

// <00D1C085> ../public/vphysx/vphysx_interface.h:64
inline void IPhysAggregateInstance::~IPhysAggregateInstance()
{
} /* size: 0 */

// <01356C2B> ../public/vphysx/vphysx_interface.h:73
void IPhysAggregateInstance::GetBodyHandle(int nIndex)
{
} /* size: 7 */

// <0134965E> ../public/vphysx/vphysx_interface.h:73
inline void IPhysAggregateInstance::GetBodyHandle(int nIndex)
{
} /* size: 0 */

// <00D1C00D> ../public/vphysx/vphysx_interface.h:97
void IPhysAggregateInstance::DisableNonDynamicJoints()
{
} /* size: 5 */

// <00D1BFD0> ../public/vphysx/vphysx_interface.h:125
void IPhysAggregateInstance::Dump(IFileSystem* pFileSystem)
{
} /* size: 5 */

// <00D1BF93> ../public/vphysx/vphysx_interface.h:126
void IPhysAggregateInstance::SetJointFriction(float flFactor)
{
} /* size: 5 */

// <00D1BF56> ../public/vphysx/vphysx_interface.h:127
void IPhysAggregateInstance::Own(CMemoryChain* pMemory)
{
} /* size: 5 */

// <00D74E58> ../public/vphysx/vphysx_interface.h:151
void IPhysSurfacePropertyController::IPhysSurfacePropertyController()
{
} /* size: 0 */

// <00D74E3B> ../public/vphysx/vphysx_interface.h:151
inline void IPhysSurfacePropertyController::IPhysSurfacePropertyController()
{
} /* size: 0 */

// <009D45CB> ../public/vphysx/vphysx_interface.h:151
// member functions: 20
// member variable: 1
// vtable entries: 7
// class size: 8
class IPhysSurfacePropertyController {
	void IPhysSurfacePropertyController(IPhysSurfacePropertyController* , const IPhysSurfacePropertyController& );
	void IPhysSurfacePropertyController(IPhysSurfacePropertyController* );
	int ()(void) * * _vptr.IPhysSurfacePropertyController; /* 0 8 */
	/* ../public/vphysx/vphysx_interface.h:155 */
	virtual void ~IPhysSurfacePropertyController(IPhysSurfacePropertyController* );
	/* ../public/vphysx/vphysx_interface.h:156 */
	virtual const CPhysSurfaceProperties* FindSurfaceProperties(const IPhysSurfacePropertyController* , CUtlStringToken, bool* );
	/* ../public/vphysx/vphysx_interface.h:157 */
	virtual int GetSurfacePropCount(const IPhysSurfacePropertyController* );
	/* ../public/vphysx/vphysx_interface.h:158 */
	virtual const CPhysSurfaceProperties* GetSurfaceProperty(const IPhysSurfacePropertyController* , int);
	/* ../public/vphysx/vphysx_interface.h:159 */
	virtual void GetSurfacePropertiesNames(const IPhysSurfacePropertyController* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* , bool);
	/* ../public/vphysx/vphysx_interface.h:160 */
	virtual const CPhysSurfaceProperties* GetDefaultSurfaceProperties(const IPhysSurfacePropertyController* );
	/* ../public/vphysx/vphysx_interface.h:161 */
	virtual void InitializeRnMaterialFromSurfaceProperty(const IPhysSurfacePropertyController* , const CPhysSurfaceProperties* , RnMaterial_t* );
	/* ../public/vphysx/vphysx_interface.h:162 */
	virtual CPhysSurfaceProperties* AddProperty(IPhysSurfacePropertyController* , CUtlString, CUtlString, CUtlString);
	void IPhysSurfacePropertyController(class IPhysSurfacePropertyController *, const class IPhysSurfacePropertyController  &); /* linkage=_ZN30IPhysSurfacePropertyControllerC4ERKS_ */
	void IPhysSurfacePropertyController(class IPhysSurfacePropertyController *); /* linkage=_ZN30IPhysSurfacePropertyControllerC4Ev */
	virtual void ~IPhysSurfacePropertyController(class IPhysSurfacePropertyController *); /* linkage=_ZN30IPhysSurfacePropertyControllerD4Ev */
	virtual const class CPhysSurfaceProperties  * FindSurfaceProperties(const class IPhysSurfacePropertyController  *, class CUtlStringToken, bool *); /* linkage=_ZNK30IPhysSurfacePropertyController21FindSurfacePropertiesE15CUtlStringTokenPb */
	virtual int GetSurfacePropCount(const class IPhysSurfacePropertyController  *); /* linkage=_ZNK30IPhysSurfacePropertyController19GetSurfacePropCountEv */
	virtual const class CPhysSurfaceProperties  * GetSurfaceProperty(const class IPhysSurfacePropertyController  *, int); /* linkage=_ZNK30IPhysSurfacePropertyController18GetSurfacePropertyEi */
	virtual void GetSurfacePropertiesNames(const class IPhysSurfacePropertyController  *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, bool); /* linkage=_ZNK30IPhysSurfacePropertyController25GetSurfacePropertiesNamesEP10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEES5_b */
	virtual const class CPhysSurfaceProperties  * GetDefaultSurfaceProperties(const class IPhysSurfacePropertyController  *); /* linkage=_ZNK30IPhysSurfacePropertyController27GetDefaultSurfacePropertiesEv */
	virtual void InitializeRnMaterialFromSurfaceProperty(const class IPhysSurfacePropertyController  *, const class CPhysSurfaceProperties  *, class RnMaterial_t *); /* linkage=_ZNK30IPhysSurfacePropertyController39InitializeRnMaterialFromSurfacePropertyEPK22CPhysSurfacePropertiesP12RnMaterial_t */
	virtual class CPhysSurfaceProperties * AddProperty(class IPhysSurfacePropertyController *, class CUtlString, class CUtlString, class CUtlString); /* linkage=_ZN30IPhysSurfacePropertyController11AddPropertyE10CUtlStringS0_S0_ */
};

// <030E4C02> ../public/vphysx/vphysx_interface.h:151
// member functions: 18
// member variable: 1
// vtable entries: 7
// class size: 8
class IPhysSurfacePropertyController {
	int ()(void) * * _vptr.IPhysSurfacePropertyController; /* 0 8 */
	/* ../public/vphysx/vphysx_interface.h:155 */
	virtual void ~IPhysSurfacePropertyController(IPhysSurfacePropertyController* );
	/* ../public/vphysx/vphysx_interface.h:156 */
	virtual const CPhysSurfaceProperties* FindSurfaceProperties(const IPhysSurfacePropertyController* , CUtlStringToken, bool* );
	/* ../public/vphysx/vphysx_interface.h:157 */
	virtual int GetSurfacePropCount(const IPhysSurfacePropertyController* );
	/* ../public/vphysx/vphysx_interface.h:158 */
	virtual const CPhysSurfaceProperties* GetSurfaceProperty(const IPhysSurfacePropertyController* , int);
	/* ../public/vphysx/vphysx_interface.h:159 */
	virtual void GetSurfacePropertiesNames(const IPhysSurfacePropertyController* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* , bool);
	/* ../public/vphysx/vphysx_interface.h:160 */
	virtual const CPhysSurfaceProperties* GetDefaultSurfaceProperties(const IPhysSurfacePropertyController* );
	/* ../public/vphysx/vphysx_interface.h:161 */
	virtual void InitializeRnMaterialFromSurfaceProperty(const IPhysSurfacePropertyController* , const CPhysSurfaceProperties* , RnMaterial_t* );
	/* ../public/vphysx/vphysx_interface.h:162 */
	virtual CPhysSurfaceProperties* AddProperty(IPhysSurfacePropertyController* , CUtlString, CUtlString, CUtlString);
	void IPhysSurfacePropertyController(class IPhysSurfacePropertyController *, const class IPhysSurfacePropertyController  &); /* linkage=_ZN30IPhysSurfacePropertyControllerC4ERKS_ */
	void IPhysSurfacePropertyController(class IPhysSurfacePropertyController *); /* linkage=_ZN30IPhysSurfacePropertyControllerC4Ev */
	virtual void ~IPhysSurfacePropertyController(class IPhysSurfacePropertyController *); /* linkage=_ZN30IPhysSurfacePropertyControllerD4Ev */
	virtual const class CPhysSurfaceProperties  * FindSurfaceProperties(const class IPhysSurfacePropertyController  *, class CUtlStringToken, bool *); /* linkage=_ZNK30IPhysSurfacePropertyController21FindSurfacePropertiesE15CUtlStringTokenPb */
	virtual int GetSurfacePropCount(const class IPhysSurfacePropertyController  *); /* linkage=_ZNK30IPhysSurfacePropertyController19GetSurfacePropCountEv */
	virtual const class CPhysSurfaceProperties  * GetSurfaceProperty(const class IPhysSurfacePropertyController  *, int); /* linkage=_ZNK30IPhysSurfacePropertyController18GetSurfacePropertyEi */
	virtual void GetSurfacePropertiesNames(const class IPhysSurfacePropertyController  *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, bool); /* linkage=_ZNK30IPhysSurfacePropertyController25GetSurfacePropertiesNamesEP10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEES5_b */
	virtual const class CPhysSurfaceProperties  * GetDefaultSurfaceProperties(const class IPhysSurfacePropertyController  *); /* linkage=_ZNK30IPhysSurfacePropertyController27GetDefaultSurfacePropertiesEv */
	virtual void InitializeRnMaterialFromSurfaceProperty(const class IPhysSurfacePropertyController  *, const class CPhysSurfaceProperties  *, class RnMaterial_t *); /* linkage=_ZNK30IPhysSurfacePropertyController39InitializeRnMaterialFromSurfacePropertyEPK22CPhysSurfacePropertiesP12RnMaterial_t */
	virtual class CPhysSurfaceProperties * AddProperty(class IPhysSurfacePropertyController *, class CUtlString, class CUtlString, class CUtlString); /* linkage=_ZN30IPhysSurfacePropertyController11AddPropertyE10CUtlStringS0_S0_ */
};

// <00D750D2> ../public/vphysx/vphysx_interface.h:155
void IPhysSurfacePropertyController::~IPhysSurfacePropertyController()
{
} /* size: 0 */

// <00D750A2> ../public/vphysx/vphysx_interface.h:155
inline void IPhysSurfacePropertyController::~IPhysSurfacePropertyController()
{
} /* size: 0 */

