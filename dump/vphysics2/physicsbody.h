
//
// vphysics2/physicsbody.h
//
//	referenced by: libengine2.so
//
//	functions: 2
//	class: 1
//

// <00B92BCF> vphysics2/physicsbody.h:12
// member functions: 218
// member variables: 17
// vtable entries: 103
// class size: 232
class CPhysicsBody : public IPhysicsBody {
public:
	/* class IPhysicsBody <ancestor>; */ /* 0 8 */
	void CPhysicsBody(CPhysicsBody* , const CPhysicsBody& );
	/* vphysics2/physicsbody.cpp:13 */
	void CPhysicsBody(CPhysicsBody* , b3BodyId);
	/* vphysics2/physicsbody.cpp:24 */
	virtual void ~CPhysicsBody(CPhysicsBody* );
	/* vphysics2/physicsbody.cpp:29 */
	virtual void SetType(CPhysicsBody* , PhysicsBodyType_t);
	/* vphysics2/physicsbody.cpp:56 */
	virtual PhysicsBodyType_t GetType(const CPhysicsBody* );
	/* vphysics2/physicsbody.cpp:67 */
	virtual IPhysicsWorld* GetWorld(const CPhysicsBody* );
	/* vphysics2/physicsbody.cpp:72 */
	virtual int GetShapeCount(const CPhysicsBody* );
	/* vphysics2/physicsbody.cpp:77 */
	virtual IPhysicsShape* GetShape(CPhysicsBody* , int);
	/* vphysics2/physicsbody.cpp:85 */
	virtual const IPhysicsShape* GetShape(const CPhysicsBody* , int);
	/* vphysics2/physicsbody.cpp:748 */
	virtual IPhysicsShape* AddSphereShape(CPhysicsBody* , const Vector& , float);
	/* vphysics2/physicsbody.cpp:759 */
	virtual IPhysicsShape* AddCapsuleShape(CPhysicsBody* , const Vector& , const Vector& , float);
	/* vphysics2/physicsbody.cpp:770 */
	virtual IPhysicsShape* AddBoxShape(CPhysicsBody* , const Vector& , const Vector& );
	/* vphysics2/physicsbody.cpp:853 */
	virtual IPhysicsShape* AddBoxShape(CPhysicsBody* , const Vector& , const Quaternion& , const Vector& );
	/* vphysics2/physicsbody.cpp:782 */
	virtual IPhysicsShape* AddHullShape(CPhysicsBody* , const RnHull_t* , float);
	/* vphysics2/physicsbody.cpp:883 */
	virtual IPhysicsShape* AddHullShape(CPhysicsBody* , const Vector& , const Quaternion& , int, const Vector* );
	/* vphysics2/physicsbody.cpp:911 */
	virtual IPhysicsShape* AddHullShape(CPhysicsBody* , RnHull_t* , const CTransformUnaligned& );
	/* vphysics2/physicsbody.cpp:956 */
	virtual IPhysicsShape* AddHullShape(CPhysicsBody* , RnMesh_t* , const CTransformUnaligned& );
	/* vphysics2/physicsbody.cpp:1071 */
	virtual IPhysicsShape* AddMeshShape(CPhysicsBody* , int, const Vector* , int, const uint32* , int);
	/* vphysics2/physicsbody.cpp:991 */
	virtual IPhysicsShape* AddMeshShape(CPhysicsBody* , const RnMesh_t* , const Vector& , int);
	/* vphysics2/physicsbody.cpp:1116 */
	virtual IPhysicsShape* AddMeshShape(CPhysicsBody* , RnMesh_t* , const CTransformUnaligned& , int);
	/* vphysics2/physicsbody.cpp:1203 */
	virtual IPhysicsShape* AddHeightFieldShape(CPhysicsBody* , uint16_t* , uint8_t* , int, int, float, float, int);
	/* vphysics2/physicsbody.cpp:93 */
	virtual void RemoveShape(CPhysicsBody* , IPhysicsShape* );
	/* vphysics2/physicsbody.cpp:109 */
	virtual void PurgeShapes(CPhysicsBody* );
	/* vphysics2/physicsbody.cpp:122 */
	virtual AABB_t BuildBounds(const CPhysicsBody* );
	/* vphysics2/physicsbody.cpp:135 */
	virtual AABB_t BuildBounds(const CPhysicsBody* , const matrix3x4_t& );
	/* vphysics2/physicsbody.cpp:148 */
	virtual void SetGravityScale(CPhysicsBody* , float);
	/* vphysics2/physicsbody.cpp:160 */
	virtual float GetGravityScale(const CPhysicsBody* );
	/* vphysics2/physicsbody.cpp:165 */
	virtual void EnableGravity(CPhysicsBody* , bool);
	/* vphysics2/physicsbody.cpp:171 */
	virtual bool IsGravityEnabled(const CPhysicsBody* );
	/* vphysics2/physicsbody.cpp:176 */
	virtual bool IsGravityDisabled(const CPhysicsBody* );
	/* vphysics2/physicsbody.cpp:181 */
	virtual void SetMass(CPhysicsBody* , float);
	/* vphysics2/physicsbody.cpp:193 */
	virtual float GetMass(const CPhysicsBody* );
	/* vphysics2/physicsbody.cpp:210 */
	virtual Quaternion GetLocalInertiaOrientation(const CPhysicsBody* );
	/* vphysics2/physicsbody.cpp:198 */
	virtual void ScaleInertia(CPhysicsBody* , float);
	/* vphysics2/physicsbody.cpp:259 */
	virtual Vector GetMassCenter(const CPhysicsBody* );
	/* vphysics2/physicsbody.cpp:270 */
	virtual Vector GetLocalMassCenter(const CPhysicsBody* );
	/* vphysics2/physicsbody.cpp:281 */
	virtual void SetLocalMassCenter(CPhysicsBody* , const Vector& );
	/* vphysics2/physicsbody.cpp:297 */
	virtual void SetOverrideMassCenter(CPhysicsBody* , bool);
	/* vphysics2/physicsbody.cpp:307 */
	virtual bool GetOverrideMassCenter(CPhysicsBody* );
	/* vphysics2/physicsbody.cpp:312 */
	virtual void BuildMass(CPhysicsBody* );
	/* vphysics2/physicsbody.cpp:366 */
	virtual void SetPosition(CPhysicsBody* , const Vector& );
	/* vphysics2/physicsbody.cpp:379 */
	virtual Vector GetPosition(const CPhysicsBody* );
	/* vphysics2/physicsbody.cpp:384 */
	virtual void SetOrientation(CPhysicsBody* , const Quaternion& );
	/* vphysics2/physicsbody.cpp:403 */
	virtual Quaternion GetOrientation(const CPhysicsBody* );
	/* vphysics2/physicsbody.cpp:408 */
	virtual void SetTransform(CPhysicsBody* , const Vector& , const Quaternion& );
	/* vphysics2/physicsbody.cpp:428 */
	virtual void SetTransform(CPhysicsBody* , const CTransform& );
	/* vphysics2/physicsbody.cpp:433 */
	virtual CTransform GetTransform(const CPhysicsBody* );
	/* vphysics2/physicsbody.cpp:455 */
	virtual void SetLinearVelocity(CPhysicsBody* , const Vector& );
	/* vphysics2/physicsbody.cpp:463 */
	virtual void AddLinearVelocity(CPhysicsBody* , const Vector& );
	/* vphysics2/physicsbody.cpp:471 */
	virtual Vector GetLinearVelocity(const CPhysicsBody* );
	/* vphysics2/physicsbody.cpp:476 */
	virtual Vector GetVelocityAtPoint(const CPhysicsBody* , const Vector& );
	/* vphysics2/physicsbody.cpp:484 */
	virtual void SetAngularVelocity(CPhysicsBody* , const Vector& );
	/* vphysics2/physicsbody.cpp:492 */
	virtual void AddAngularVelocity(CPhysicsBody* , const Vector& );
	/* vphysics2/physicsbody.cpp:500 */
	virtual Vector GetAngularVelocity(const CPhysicsBody* );
	/* vphysics2/physicsbody.cpp:505 */
	virtual void SetLinearDamping(CPhysicsBody* , float);
	/* vphysics2/physicsbody.cpp:512 */
	virtual float GetLinearDamping(const CPhysicsBody* );
	/* vphysics2/physicsbody.cpp:517 */
	virtual void SetAngularDamping(CPhysicsBody* , float);
	/* vphysics2/physicsbody.cpp:524 */
	virtual float GetAngularDamping(const CPhysicsBody* );
	/* vphysics2/physicsbody.cpp:529 */
	virtual void ApplyLinearImpulse(CPhysicsBody* , const Vector& );
	/* vphysics2/physicsbody.cpp:537 */
	virtual void ApplyLinearImpulseAtWorldSpace(CPhysicsBody* , const Vector& , const Vector& );
	/* vphysics2/physicsbody.cpp:548 */
	virtual void ApplyAngularImpulse(CPhysicsBody* , const Vector& );
	/* vphysics2/physicsbody.cpp:556 */
	virtual void ApplyForce(CPhysicsBody* , const Vector& );
	/* vphysics2/physicsbody.cpp:564 */
	virtual void ApplyForceAt(CPhysicsBody* , const Vector& , const Vector& );
	/* vphysics2/physicsbody.cpp:575 */
	virtual void ApplyTorque(CPhysicsBody* , const Vector& );
	/* vphysics2/physicsbody.cpp:583 */
	virtual void ClearForces(CPhysicsBody* );
	/* vphysics2/physicsbody.cpp:588 */
	virtual void ClearTorque(CPhysicsBody* );
	/* vphysics2/physicsbody.cpp:1371 */
	virtual void Enable(CPhysicsBody* );
	/* vphysics2/physicsbody.cpp:1376 */
	virtual void Disable(CPhysicsBody* );
	/* vphysics2/physicsbody.cpp:1381 */
	virtual bool IsEnabled(const CPhysicsBody* );
	/* vphysics2/physicsbody.cpp:593 */
	virtual void EnableAutoSleeping(CPhysicsBody* );
	/* vphysics2/physicsbody.cpp:598 */
	virtual void DisableAutoSleeping(CPhysicsBody* );
	/* vphysics2/physicsbody.cpp:603 */
	virtual bool IsAutoSleepingEnabled(const CPhysicsBody* );
	/* vphysics2/physicsbody.cpp:608 */
	virtual void Sleep(CPhysicsBody* );
	/* vphysics2/physicsbody.cpp:613 */
	virtual void Wake(CPhysicsBody* );
	/* vphysics2/physicsbody.cpp:635 */
	virtual bool IsSleeping(const CPhysicsBody* );
	/* vphysics2/physicsbody.cpp:640 */
	virtual Vector TransformPointToLocal(const CPhysicsBody* , const Vector& );
	/* vphysics2/physicsbody.cpp:648 */
	virtual Vector TransformPointToWorld(const CPhysicsBody* , const Vector& );
	/* vphysics2/physicsbody.cpp:1344 */
	virtual void EnableTouchEvents(CPhysicsBody* );
	/* vphysics2/physicsbody.cpp:1352 */
	virtual void DisableTouchEvents(CPhysicsBody* );
	/* vphysics2/physicsbody.cpp:1360 */
	virtual bool IsTouchEventEnabled(const CPhysicsBody* );
	/* vphysics2/physicsbody.cpp:664 */
	virtual void SetMaterialIndex(CPhysicsBody* , CUtlStringToken);
	/* vphysics2/physicsbody.cpp:676 */
	virtual void SetCollisionAttributes(CPhysicsBody* , const RnCollisionAttr_t& );
	/* vphysics2/physicsbody.cpp:689 */
	virtual void SetDebugName(CPhysicsBody* , const char* );
	/* vphysics2/physicsbody.cpp:684 */
	virtual const char* GetDebugName(const CPhysicsBody* );
	/* vphysics2/physicsbody.cpp:699 */
	virtual void SetAggregateInstance(CPhysicsBody* , void* );
	/* vphysics2/physicsbody.cpp:704 */
	virtual void* GetAggregateInstance(const CPhysicsBody* );
	/* vphysics2/physicsbody.cpp:709 */
	virtual Vector GetClosestPoint(const CPhysicsBody* , const Vector& );
	/* vphysics2/physicsbody.cpp:694 */
	virtual const char* GetName(const CPhysicsBody* );
	/* vphysics2/physicsbody.cpp:719 */
	virtual Vector GetVelocity(const CPhysicsBody* );
	/* vphysics2/physicsbody.cpp:1386 */
	virtual void SetTargetTransform(CPhysicsBody* , const Vector& , const Quaternion& , float);
	/* vphysics2/physicsbody.cpp:724 */
	virtual float GetDensity(CPhysicsBody* );
	/* vphysics2/physicsbody.cpp:438 */
	virtual void UpdateSurfaceProperties(CPhysicsBody* , const CPhysSurfaceProperties* );
	/* vphysics2/physicsbody.cpp:1268 */
	virtual bool CheckOverlap(CPhysicsBody* , IPhysicsBody* , const CTransform& );
	/* vphysics2/physicsbody.cpp:216 */
	virtual Vector GetLocalInertiaVector(const CPhysicsBody* );
	/* vphysics2/physicsbody.cpp:223 */
	virtual void SetLocalInertia(CPhysicsBody* , const Vector& , const Quaternion& );
	/* vphysics2/physicsbody.cpp:248 */
	virtual void ResetLocalInertia(CPhysicsBody* );
	/* vphysics2/physicsbody.cpp:656 */
	virtual void SetMaterial(CPhysicsBody* , const RnMaterial_t& );
	/* vphysics2/physicsbody.cpp:1609 */
	virtual const CManagedHandle* GetManagedHandle(const CPhysicsBody* );
	/* vphysics2/physicsbody.cpp:1404 */
	virtual void SetMotionLocks(CPhysicsBody* , bool, bool, bool, bool, bool, bool);
	/* vphysics2/physicsbody.cpp:1420 */
	virtual bool IsTouching(const CPhysicsBody* , IPhysicsBody* , bool);
	/* vphysics2/physicsbody.cpp:1461 */
	virtual bool IsTouching(const CPhysicsBody* , IPhysicsShape* , bool);
	/* vphysics2/physicsbody.cpp:1521 */
	virtual void SetTrigger(CPhysicsBody* , bool);
	/* vphysics2/physicsbody.cpp:1526 */
	virtual void ResetProxy(CPhysicsBody* );
	/* vphysics2/physicsbody.cpp:1604 */
	virtual void SetBullet(CPhysicsBody* , bool);
	/* vphysics2/physicsbody.cpp:1573 */
	virtual bool ApplyBuoyancyImpulse(CPhysicsBody* , const Vector& , const Vector& , float, float, float, const Vector& , const Vector& , float);
	/* vphysics2/physicsbody.cpp:1534 */
	virtual bool GetSubmergedVolume(const CPhysicsBody* , const Vector& , const Vector& , float* , float* , Vector* );
	/* vphysics2/physicsbody.cpp:621 */
	void WakeConnected(CPhysicsBody* );
	/* vphysics2/physicsbody.cpp:1410 */
	void OnAddShape(CPhysicsBody* , CPhysicsShape* );
private:
	/* vphysics2/physicsbody.cpp:323 */
	void UpdateMass(CPhysicsBody* );
	b3BodyId m_id; /* 8 8 */
	CManagedHandle m_ManagedHandle; /* 16 4 */
	CUtlString m_debugName; /* 24 8 */
	void * m_pAggregate; /* 32 8 */
	CUtlVectorFixedGrowable<CPhysicsShape*, 1> m_Shapes __attribute__((__aligned__(8))); /* 40 40 */
	bool m_bEnableGravity; /* 80 1 */
	float m_flGravityScale; /* 84 4 */
	bool m_bOverrideInertia; /* 88 1 */
	matrix3x4_t m_mInertia; /* 92 48 */
	b3MassData m_massData; /* 140 52 */
	float m_flInertiaScale; /* 192 4 */
	float m_flMassOverride; /* 196 4 */
	Vector m_vLocalMassCenterOffset; /* 200 12 */
	bool m_bOverrideMassCenter; /* 212 1 */
	Vector m_vLocalMassCenter; /* 216 12 */
	bool m_bTrigger; /* 228 1 */
	void CPhysicsBody(class CPhysicsBody *, b3BodyId); /* linkage=_ZN12CPhysicsBodyC4E8b3BodyId */
	void CPhysicsBody(class CPhysicsBody *, const class CPhysicsBody  &); /* linkage=_ZN12CPhysicsBodyC4ERKS_ */
	virtual void ~CPhysicsBody(class CPhysicsBody *); /* linkage=_ZN12CPhysicsBodyD4Ev */
	virtual void SetType(class CPhysicsBody *, enum PhysicsBodyType_t); /* linkage=_ZN12CPhysicsBody7SetTypeE17PhysicsBodyType_t */
	/* <bb22ed> vphysics2/physicsbody.cpp:56 */
	virtual enum PhysicsBodyType_t GetType(const class CPhysicsBody  *); /* linkage=_ZNK12CPhysicsBody7GetTypeEv */
	virtual class IPhysicsWorld * GetWorld(const class CPhysicsBody  *); /* linkage=_ZNK12CPhysicsBody8GetWorldEv */
	/* <bb2292> vphysics2/physicsbody.cpp:72 */
	virtual int GetShapeCount(const class CPhysicsBody  *); /* linkage=_ZNK12CPhysicsBody13GetShapeCountEv */
	virtual class IPhysicsShape * GetShape(class CPhysicsBody *, int); /* linkage=_ZN12CPhysicsBody8GetShapeEi */
	virtual const class IPhysicsShape  * GetShape(const class CPhysicsBody  *, int); /* linkage=_ZNK12CPhysicsBody8GetShapeEi */
	virtual class IPhysicsShape * AddSphereShape(class CPhysicsBody *, const class Vector  &, float); /* linkage=_ZN12CPhysicsBody14AddSphereShapeERK6Vectorf */
	virtual class IPhysicsShape * AddCapsuleShape(class CPhysicsBody *, const class Vector  &, const class Vector  &, float); /* linkage=_ZN12CPhysicsBody15AddCapsuleShapeERK6VectorS2_f */
	virtual class IPhysicsShape * AddBoxShape(class CPhysicsBody *, const class Vector  &, const class Vector  &); /* linkage=_ZN12CPhysicsBody11AddBoxShapeERK6VectorS2_ */
	virtual class IPhysicsShape * AddBoxShape(class CPhysicsBody *, const class Vector  &, const class Quaternion  &, const class Vector  &); /* linkage=_ZN12CPhysicsBody11AddBoxShapeERK6VectorRK10QuaternionS2_ */
	virtual class IPhysicsShape * AddHullShape(class CPhysicsBody *, const class RnHull_t  *, float); /* linkage=_ZN12CPhysicsBody12AddHullShapeEPK8RnHull_tf */
	virtual class IPhysicsShape * AddHullShape(class CPhysicsBody *, const class Vector  &, const class Quaternion  &, int, const class Vector  *); /* linkage=_ZN12CPhysicsBody12AddHullShapeERK6VectorRK10QuaternioniPS1_ */
	virtual class IPhysicsShape * AddHullShape(class CPhysicsBody *, class RnHull_t *, const class CTransformUnaligned  &); /* linkage=_ZN12CPhysicsBody12AddHullShapeEP8RnHull_tRK19CTransformUnaligned */
	virtual class IPhysicsShape * AddHullShape(class CPhysicsBody *, class RnMesh_t *, const class CTransformUnaligned  &); /* linkage=_ZN12CPhysicsBody12AddHullShapeEP8RnMesh_tRK19CTransformUnaligned */
	/* <bb3c79> vphysics2/physicsbody.cpp:1071 */
	virtual class IPhysicsShape * AddMeshShape(class CPhysicsBody *, int, const class Vector  *, int, const uint32  *, int); /* linkage=_ZN12CPhysicsBody12AddMeshShapeEiPK6VectoriPKji */
	virtual class IPhysicsShape * AddMeshShape(class CPhysicsBody *, const class RnMesh_t  *, const class Vector  &, int); /* linkage=_ZN12CPhysicsBody12AddMeshShapeEPK8RnMesh_tRK6Vectori */
	virtual class IPhysicsShape * AddMeshShape(class CPhysicsBody *, class RnMesh_t *, const class CTransformUnaligned  &, int); /* linkage=_ZN12CPhysicsBody12AddMeshShapeEP8RnMesh_tRK19CTransformUnalignedi */
	virtual class IPhysicsShape * AddHeightFieldShape(class CPhysicsBody *, uint16_t *, uint8_t *, int, int, float, float, int); /* linkage=_ZN12CPhysicsBody19AddHeightFieldShapeEPtPhiiffi */
	/* <bb2949> vphysics2/physicsbody.cpp:93 */
	virtual void RemoveShape(class CPhysicsBody *, class IPhysicsShape *); /* linkage=_ZN12CPhysicsBody11RemoveShapeEP13IPhysicsShape */
	virtual void PurgeShapes(class CPhysicsBody *); /* linkage=_ZN12CPhysicsBody11PurgeShapesEv */
	virtual class AABB_t BuildBounds(const class CPhysicsBody  *); /* linkage=_ZNK12CPhysicsBody11BuildBoundsEv */
	virtual class AABB_t BuildBounds(const class CPhysicsBody  *, const class matrix3x4_t  &); /* linkage=_ZNK12CPhysicsBody11BuildBoundsERK11matrix3x4_t */
	/* <bb28b2> vphysics2/physicsbody.cpp:148 */
	virtual void SetGravityScale(class CPhysicsBody *, float); /* linkage=_ZN12CPhysicsBody15SetGravityScaleEf */
	virtual float GetGravityScale(const class CPhysicsBody  *); /* linkage=_ZNK12CPhysicsBody15GetGravityScaleEv */
	virtual void EnableGravity(class CPhysicsBody *, bool); /* linkage=_ZN12CPhysicsBody13EnableGravityEb */
	virtual bool IsGravityEnabled(const class CPhysicsBody  *); /* linkage=_ZNK12CPhysicsBody16IsGravityEnabledEv */
	virtual bool IsGravityDisabled(const class CPhysicsBody  *); /* linkage=_ZNK12CPhysicsBody17IsGravityDisabledEv */
	/* <bb390e> vphysics2/physicsbody.cpp:181 */
	virtual void SetMass(class CPhysicsBody *, float); /* linkage=_ZN12CPhysicsBody7SetMassEf */
	/* <bb232a> vphysics2/physicsbody.cpp:193 */
	virtual float GetMass(const class CPhysicsBody  *); /* linkage=_ZNK12CPhysicsBody7GetMassEv */
	virtual class Quaternion GetLocalInertiaOrientation(const class CPhysicsBody  *); /* linkage=_ZNK12CPhysicsBody26GetLocalInertiaOrientationEv */
	/* <bb3a41> vphysics2/physicsbody.cpp:198 */
	virtual void ScaleInertia(class CPhysicsBody *, float); /* linkage=_ZN12CPhysicsBody12ScaleInertiaEf */
	virtual class Vector GetMassCenter(const class CPhysicsBody  *); /* linkage=_ZNK12CPhysicsBody13GetMassCenterEv */
	virtual class Vector GetLocalMassCenter(const class CPhysicsBody  *); /* linkage=_ZNK12CPhysicsBody18GetLocalMassCenterEv */
	virtual void SetLocalMassCenter(class CPhysicsBody *, const class Vector  &); /* linkage=_ZN12CPhysicsBody18SetLocalMassCenterERK6Vector */
	virtual void SetOverrideMassCenter(class CPhysicsBody *, bool); /* linkage=_ZN12CPhysicsBody21SetOverrideMassCenterEb */
	virtual bool GetOverrideMassCenter(class CPhysicsBody *); /* linkage=_ZN12CPhysicsBody21GetOverrideMassCenterEv */
	/* <bb3b56> vphysics2/physicsbody.cpp:312 */
	virtual void BuildMass(class CPhysicsBody *); /* linkage=_ZN12CPhysicsBody9BuildMassEv */
	/* <bb2db7> vphysics2/physicsbody.cpp:366 */
	virtual void SetPosition(class CPhysicsBody *, const class Vector  &); /* linkage=_ZN12CPhysicsBody11SetPositionERK6Vector */
	/* <bb2436> vphysics2/physicsbody.cpp:379 */
	virtual class Vector GetPosition(const class CPhysicsBody  *); /* linkage=_ZNK12CPhysicsBody11GetPositionEv */
	/* <bb32dd> vphysics2/physicsbody.cpp:384 */
	virtual void SetOrientation(class CPhysicsBody *, const class Quaternion  &); /* linkage=_ZN12CPhysicsBody14SetOrientationERK10Quaternion */
	/* <bb2368> vphysics2/physicsbody.cpp:403 */
	virtual class Quaternion GetOrientation(const class CPhysicsBody  *); /* linkage=_ZNK12CPhysicsBody14GetOrientationEv */
	virtual void SetTransform(class CPhysicsBody *, const class Vector  &, const class Quaternion  &); /* linkage=_ZN12CPhysicsBody12SetTransformERK6VectorRK10Quaternion */
	virtual void SetTransform(class CPhysicsBody *, const class CTransform  &); /* linkage=_ZN12CPhysicsBody12SetTransformERK10CTransform */
	/* <bb24f7> vphysics2/physicsbody.cpp:433 */
	virtual class CTransform GetTransform(const class CPhysicsBody  *); /* linkage=_ZNK12CPhysicsBody12GetTransformEv */
	virtual void SetLinearVelocity(class CPhysicsBody *, const class Vector  &); /* linkage=_ZN12CPhysicsBody17SetLinearVelocityERK6Vector */
	virtual void AddLinearVelocity(class CPhysicsBody *, const class Vector  &); /* linkage=_ZN12CPhysicsBody17AddLinearVelocityERK6Vector */
	virtual class Vector GetLinearVelocity(const class CPhysicsBody  *); /* linkage=_ZNK12CPhysicsBody17GetLinearVelocityEv */
	virtual class Vector GetVelocityAtPoint(const class CPhysicsBody  *, const class Vector  &); /* linkage=_ZNK12CPhysicsBody18GetVelocityAtPointERK6Vector */
	virtual void SetAngularVelocity(class CPhysicsBody *, const class Vector  &); /* linkage=_ZN12CPhysicsBody18SetAngularVelocityERK6Vector */
	virtual void AddAngularVelocity(class CPhysicsBody *, const class Vector  &); /* linkage=_ZN12CPhysicsBody18AddAngularVelocityERK6Vector */
	virtual class Vector GetAngularVelocity(const class CPhysicsBody  *); /* linkage=_ZNK12CPhysicsBody18GetAngularVelocityEv */
	virtual void SetLinearDamping(class CPhysicsBody *, float); /* linkage=_ZN12CPhysicsBody16SetLinearDampingEf */
	virtual float GetLinearDamping(const class CPhysicsBody  *); /* linkage=_ZNK12CPhysicsBody16GetLinearDampingEv */
	virtual void SetAngularDamping(class CPhysicsBody *, float); /* linkage=_ZN12CPhysicsBody17SetAngularDampingEf */
	virtual float GetAngularDamping(const class CPhysicsBody  *); /* linkage=_ZNK12CPhysicsBody17GetAngularDampingEv */
	virtual void ApplyLinearImpulse(class CPhysicsBody *, const class Vector  &); /* linkage=_ZN12CPhysicsBody18ApplyLinearImpulseERK6Vector */
	virtual void ApplyLinearImpulseAtWorldSpace(class CPhysicsBody *, const class Vector  &, const class Vector  &); /* linkage=_ZN12CPhysicsBody30ApplyLinearImpulseAtWorldSpaceERK6VectorS2_ */
	virtual void ApplyAngularImpulse(class CPhysicsBody *, const class Vector  &); /* linkage=_ZN12CPhysicsBody19ApplyAngularImpulseERK6Vector */
	virtual void ApplyForce(class CPhysicsBody *, const class Vector  &); /* linkage=_ZN12CPhysicsBody10ApplyForceERK6Vector */
	virtual void ApplyForceAt(class CPhysicsBody *, const class Vector  &, const class Vector  &); /* linkage=_ZN12CPhysicsBody12ApplyForceAtERK6VectorS2_ */
	virtual void ApplyTorque(class CPhysicsBody *, const class Vector  &); /* linkage=_ZN12CPhysicsBody11ApplyTorqueERK6Vector */
	virtual void ClearForces(class CPhysicsBody *); /* linkage=_ZN12CPhysicsBody11ClearForcesEv */
	virtual void ClearTorque(class CPhysicsBody *); /* linkage=_ZN12CPhysicsBody11ClearTorqueEv */
	virtual void Enable(class CPhysicsBody *); /* linkage=_ZN12CPhysicsBody6EnableEv */
	virtual void Disable(class CPhysicsBody *); /* linkage=_ZN12CPhysicsBody7DisableEv */
	virtual bool IsEnabled(const class CPhysicsBody  *); /* linkage=_ZNK12CPhysicsBody9IsEnabledEv */
	virtual void EnableAutoSleeping(class CPhysicsBody *); /* linkage=_ZN12CPhysicsBody18EnableAutoSleepingEv */
	virtual void DisableAutoSleeping(class CPhysicsBody *); /* linkage=_ZN12CPhysicsBody19DisableAutoSleepingEv */
	virtual bool IsAutoSleepingEnabled(const class CPhysicsBody  *); /* linkage=_ZNK12CPhysicsBody21IsAutoSleepingEnabledEv */
	virtual void Sleep(class CPhysicsBody *); /* linkage=_ZN12CPhysicsBody5SleepEv */
	/* <bb2d0b> vphysics2/physicsbody.cpp:613 */
	virtual void Wake(class CPhysicsBody *); /* linkage=_ZN12CPhysicsBody4WakeEv */
	virtual bool IsSleeping(const class CPhysicsBody  *); /* linkage=_ZNK12CPhysicsBody10IsSleepingEv */
	virtual class Vector TransformPointToLocal(const class CPhysicsBody  *, const class Vector  &); /* linkage=_ZNK12CPhysicsBody21TransformPointToLocalERK6Vector */
	virtual class Vector TransformPointToWorld(const class CPhysicsBody  *, const class Vector  &); /* linkage=_ZNK12CPhysicsBody21TransformPointToWorldERK6Vector */
	virtual void EnableTouchEvents(class CPhysicsBody *); /* linkage=_ZN12CPhysicsBody17EnableTouchEventsEv */
	virtual void DisableTouchEvents(class CPhysicsBody *); /* linkage=_ZN12CPhysicsBody18DisableTouchEventsEv */
	virtual bool IsTouchEventEnabled(const class CPhysicsBody  *); /* linkage=_ZNK12CPhysicsBody19IsTouchEventEnabledEv */
	virtual void SetMaterialIndex(class CPhysicsBody *, class CUtlStringToken); /* linkage=_ZN12CPhysicsBody16SetMaterialIndexE15CUtlStringToken */
	virtual void SetCollisionAttributes(class CPhysicsBody *, const class RnCollisionAttr_t  &); /* linkage=_ZN12CPhysicsBody22SetCollisionAttributesERK17RnCollisionAttr_t */
	virtual void SetDebugName(class CPhysicsBody *, const char  *); /* linkage=_ZN12CPhysicsBody12SetDebugNameEPKc */
	virtual const char  * GetDebugName(const class CPhysicsBody  *); /* linkage=_ZNK12CPhysicsBody12GetDebugNameEv */
	virtual void SetAggregateInstance(class CPhysicsBody *, void *); /* linkage=_ZN12CPhysicsBody20SetAggregateInstanceEPv */
	virtual void * GetAggregateInstance(const class CPhysicsBody  *); /* linkage=_ZNK12CPhysicsBody20GetAggregateInstanceEv */
	virtual class Vector GetClosestPoint(const class CPhysicsBody  *, const class Vector  &); /* linkage=_ZNK12CPhysicsBody15GetClosestPointERK6Vector */
	virtual const char  * GetName(const class CPhysicsBody  *); /* linkage=_ZNK12CPhysicsBody7GetNameEv */
	virtual class Vector GetVelocity(const class CPhysicsBody  *); /* linkage=_ZNK12CPhysicsBody11GetVelocityEv */
	virtual void SetTargetTransform(class CPhysicsBody *, const class Vector  &, const class Quaternion  &, float); /* linkage=_ZN12CPhysicsBody18SetTargetTransformERK6VectorRK10Quaternionf */
	virtual float GetDensity(class CPhysicsBody *); /* linkage=_ZN12CPhysicsBody10GetDensityEv */
	virtual void UpdateSurfaceProperties(class CPhysicsBody *, const class CPhysSurfaceProperties  *); /* linkage=_ZN12CPhysicsBody23UpdateSurfacePropertiesEPK22CPhysSurfaceProperties */
	virtual bool CheckOverlap(class CPhysicsBody *, class IPhysicsBody *, const class CTransform  &); /* linkage=_ZN12CPhysicsBody12CheckOverlapEP12IPhysicsBodyRK10CTransform */
	virtual class Vector GetLocalInertiaVector(const class CPhysicsBody  *); /* linkage=_ZNK12CPhysicsBody21GetLocalInertiaVectorEv */
	virtual void SetLocalInertia(class CPhysicsBody *, const class Vector  &, const class Quaternion  &); /* linkage=_ZN12CPhysicsBody15SetLocalInertiaERK6VectorRK10Quaternion */
	/* <bb3ae0> vphysics2/physicsbody.cpp:248 */
	virtual void ResetLocalInertia(class CPhysicsBody *); /* linkage=_ZN12CPhysicsBody17ResetLocalInertiaEv */
	virtual void SetMaterial(class CPhysicsBody *, const class RnMaterial_t  &); /* linkage=_ZN12CPhysicsBody11SetMaterialERK12RnMaterial_t */
	virtual const class CManagedHandle  * GetManagedHandle(const class CPhysicsBody  *); /* linkage=_ZNK12CPhysicsBody16GetManagedHandleEv */
	virtual void SetMotionLocks(class CPhysicsBody *, bool, bool, bool, bool, bool, bool); /* linkage=_ZN12CPhysicsBody14SetMotionLocksEbbbbbb */
	virtual bool IsTouching(const class CPhysicsBody  *, class IPhysicsBody *, bool); /* linkage=_ZNK12CPhysicsBody10IsTouchingEP12IPhysicsBodyb */
	virtual bool IsTouching(const class CPhysicsBody  *, class IPhysicsShape *, bool); /* linkage=_ZNK12CPhysicsBody10IsTouchingEP13IPhysicsShapeb */
	virtual void SetTrigger(class CPhysicsBody *, bool); /* linkage=_ZN12CPhysicsBody10SetTriggerEb */
	virtual void ResetProxy(class CPhysicsBody *); /* linkage=_ZN12CPhysicsBody10ResetProxyEv */
	virtual void SetBullet(class CPhysicsBody *, bool); /* linkage=_ZN12CPhysicsBody9SetBulletEb */
	virtual bool ApplyBuoyancyImpulse(class CPhysicsBody *, const class Vector  &, const class Vector  &, float, float, float, const class Vector  &, const class Vector  &, float); /* linkage=_ZN12CPhysicsBody20ApplyBuoyancyImpulseERK6VectorS2_fffS2_S2_f */
	virtual bool GetSubmergedVolume(const class CPhysicsBody  *, const class Vector  &, const class Vector  &, float *, float *, class Vector *); /* linkage=_ZNK12CPhysicsBody18GetSubmergedVolumeERK6VectorS2_PfS3_PS0_ */
	void WakeConnected(class CPhysicsBody *); /* linkage=_ZN12CPhysicsBody13WakeConnectedEv */
	void OnAddShape(class CPhysicsBody *, class CPhysicsShape *); /* linkage=_ZN12CPhysicsBody10OnAddShapeEP13CPhysicsShape */
	void UpdateMass(class CPhysicsBody *); /* linkage=_ZN12CPhysicsBody10UpdateMassEv */
} __attribute__((__aligned__(8)));

// <00B0AEA6> vphysics2/physicsbody.h:16
void CPhysicsBody::CPhysicsBody(b3BodyId id)
{
} /* size: 0 */

// <00B0A90F> vphysics2/physicsbody.h:199
CPhysicsBody* AsBody(b3BodyId)
{
} /* size: 0 */

