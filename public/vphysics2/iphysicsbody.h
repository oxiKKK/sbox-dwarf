
//
// public/vphysics2/iphysicsbody.h
//
//	referenced by: libengine2.so
//
//	functions: 4
//	class: 1
//

// <00BB0753> ../public/vphysics2/iphysicsbody.h:21
void IPhysicsBody::IPhysicsBody()
{
} /* size: 0 */

// <00BB0736> ../public/vphysics2/iphysicsbody.h:21
inline void IPhysicsBody::IPhysicsBody()
{
} /* size: 0 */

// <00A9D6BD> ../public/vphysics2/iphysicsbody.h:21
// member functions: 212
// member variable: 1
// vtable entries: 103
// class size: 8
class IPhysicsBody {
	void IPhysicsBody(IPhysicsBody* , const IPhysicsBody& );
	void IPhysicsBody(IPhysicsBody* );
	int ()(void) * * _vptr.IPhysicsBody; /* 0 8 */
	/* ../public/vphysics2/iphysicsbody.h:24 */
	virtual void ~IPhysicsBody(IPhysicsBody* );
	/* ../public/vphysics2/iphysicsbody.h:26 */
	virtual IPhysicsWorld* GetWorld(const IPhysicsBody* );
	/* ../public/vphysics2/iphysicsbody.h:28 */
	virtual void SetType(IPhysicsBody* , PhysicsBodyType_t);
	/* ../public/vphysics2/iphysicsbody.h:29 */
	virtual PhysicsBodyType_t GetType(const IPhysicsBody* );
	/* ../public/vphysics2/iphysicsbody.h:31 */
	virtual int GetShapeCount(const IPhysicsBody* );
	/* ../public/vphysics2/iphysicsbody.h:32 */
	virtual IPhysicsShape* GetShape(IPhysicsBody* , int);
	/* ../public/vphysics2/iphysicsbody.h:33 */
	virtual const IPhysicsShape* GetShape(const IPhysicsBody* , int);
	/* ../public/vphysics2/iphysicsbody.h:35 */
	virtual IPhysicsShape* AddSphereShape(IPhysicsBody* , const Vector& , float);
	/* ../public/vphysics2/iphysicsbody.h:36 */
	virtual IPhysicsShape* AddCapsuleShape(IPhysicsBody* , const Vector& , const Vector& , float);
	/* ../public/vphysics2/iphysicsbody.h:37 */
	virtual IPhysicsShape* AddHullShape(IPhysicsBody* , const RnHull_t* , float);
	/* ../public/vphysics2/iphysicsbody.h:38 */
	virtual IPhysicsShape* AddBoxShape(IPhysicsBody* , const Vector& , const Vector& );
	/* ../public/vphysics2/iphysicsbody.h:39 */
	virtual IPhysicsShape* AddBoxShape(IPhysicsBody* , const Vector& , const Quaternion& , const Vector& );
	/* ../public/vphysics2/iphysicsbody.h:40 */
	virtual IPhysicsShape* AddHullShape(IPhysicsBody* , const Vector& , const Quaternion& , int, const Vector* );
	/* ../public/vphysics2/iphysicsbody.h:41 */
	virtual IPhysicsShape* AddHullShape(IPhysicsBody* , RnHull_t* , const CTransformUnaligned& );
	/* ../public/vphysics2/iphysicsbody.h:42 */
	virtual IPhysicsShape* AddHullShape(IPhysicsBody* , RnMesh_t* , const CTransformUnaligned& );
	/* ../public/vphysics2/iphysicsbody.h:43 */
	virtual IPhysicsShape* AddMeshShape(IPhysicsBody* , int, const Vector* , int, const uint32* , int);
	/* ../public/vphysics2/iphysicsbody.h:44 */
	virtual IPhysicsShape* AddMeshShape(IPhysicsBody* , const RnMesh_t* , const Vector& , int);
	/* ../public/vphysics2/iphysicsbody.h:45 */
	virtual IPhysicsShape* AddMeshShape(IPhysicsBody* , RnMesh_t* , const CTransformUnaligned& , int);
	/* ../public/vphysics2/iphysicsbody.h:46 */
	virtual IPhysicsShape* AddHeightFieldShape(IPhysicsBody* , uint16_t* , uint8_t* , int, int, float, float, int);
	/* ../public/vphysics2/iphysicsbody.h:48 */
	virtual void RemoveShape(IPhysicsBody* , IPhysicsShape* );
	/* ../public/vphysics2/iphysicsbody.h:49 */
	virtual void PurgeShapes(IPhysicsBody* );
	/* ../public/vphysics2/iphysicsbody.h:51 */
	virtual AABB_t BuildBounds(const IPhysicsBody* );
	/* ../public/vphysics2/iphysicsbody.h:52 */
	virtual AABB_t BuildBounds(const IPhysicsBody* , const matrix3x4_t& );
	/* ../public/vphysics2/iphysicsbody.h:54 */
	virtual void SetGravityScale(IPhysicsBody* , float);
	/* ../public/vphysics2/iphysicsbody.h:55 */
	virtual float GetGravityScale(const IPhysicsBody* );
	/* ../public/vphysics2/iphysicsbody.h:57 */
	virtual void EnableGravity(IPhysicsBody* , bool);
	/* ../public/vphysics2/iphysicsbody.h:58 */
	virtual bool IsGravityEnabled(const IPhysicsBody* );
	/* ../public/vphysics2/iphysicsbody.h:59 */
	virtual bool IsGravityDisabled(const IPhysicsBody* );
	/* ../public/vphysics2/iphysicsbody.h:61 */
	virtual void SetMass(IPhysicsBody* , float);
	/* ../public/vphysics2/iphysicsbody.h:62 */
	virtual float GetMass(const IPhysicsBody* );
	/* ../public/vphysics2/iphysicsbody.h:64 */
	virtual Quaternion GetLocalInertiaOrientation(const IPhysicsBody* );
	/* ../public/vphysics2/iphysicsbody.h:65 */
	virtual void ScaleInertia(IPhysicsBody* , float);
	/* ../public/vphysics2/iphysicsbody.h:67 */
	virtual Vector GetMassCenter(const IPhysicsBody* );
	/* ../public/vphysics2/iphysicsbody.h:68 */
	virtual Vector GetLocalMassCenter(const IPhysicsBody* );
	/* ../public/vphysics2/iphysicsbody.h:69 */
	virtual void SetLocalMassCenter(IPhysicsBody* , const Vector& );
	/* ../public/vphysics2/iphysicsbody.h:70 */
	virtual void SetOverrideMassCenter(IPhysicsBody* , bool);
	/* ../public/vphysics2/iphysicsbody.h:71 */
	virtual bool GetOverrideMassCenter(IPhysicsBody* );
	/* ../public/vphysics2/iphysicsbody.h:73 */
	virtual void BuildMass(IPhysicsBody* );
	/* ../public/vphysics2/iphysicsbody.h:75 */
	virtual void SetPosition(IPhysicsBody* , const Vector& );
	/* ../public/vphysics2/iphysicsbody.h:76 */
	virtual Vector GetPosition(const IPhysicsBody* );
	/* ../public/vphysics2/iphysicsbody.h:77 */
	virtual void SetOrientation(IPhysicsBody* , const Quaternion& );
	/* ../public/vphysics2/iphysicsbody.h:78 */
	virtual Quaternion GetOrientation(const IPhysicsBody* );
	/* ../public/vphysics2/iphysicsbody.h:80 */
	virtual void SetTransform(IPhysicsBody* , const Vector& , const Quaternion& );
	/* ../public/vphysics2/iphysicsbody.h:81 */
	virtual void SetTransform(IPhysicsBody* , const CTransform& );
	/* ../public/vphysics2/iphysicsbody.h:82 */
	virtual CTransform GetTransform(const IPhysicsBody* );
	/* ../public/vphysics2/iphysicsbody.h:84 */
	virtual void SetLinearVelocity(IPhysicsBody* , const Vector& );
	/* ../public/vphysics2/iphysicsbody.h:85 */
	virtual void AddLinearVelocity(IPhysicsBody* , const Vector& );
	/* ../public/vphysics2/iphysicsbody.h:86 */
	virtual Vector GetLinearVelocity(const IPhysicsBody* );
	/* ../public/vphysics2/iphysicsbody.h:87 */
	virtual Vector GetVelocityAtPoint(const IPhysicsBody* , const Vector& );
	/* ../public/vphysics2/iphysicsbody.h:89 */
	virtual void SetAngularVelocity(IPhysicsBody* , const Vector& );
	/* ../public/vphysics2/iphysicsbody.h:90 */
	virtual void AddAngularVelocity(IPhysicsBody* , const Vector& );
	/* ../public/vphysics2/iphysicsbody.h:91 */
	virtual Vector GetAngularVelocity(const IPhysicsBody* );
	/* ../public/vphysics2/iphysicsbody.h:93 */
	virtual void SetLinearDamping(IPhysicsBody* , float);
	/* ../public/vphysics2/iphysicsbody.h:94 */
	virtual float GetLinearDamping(const IPhysicsBody* );
	/* ../public/vphysics2/iphysicsbody.h:95 */
	virtual void SetAngularDamping(IPhysicsBody* , float);
	/* ../public/vphysics2/iphysicsbody.h:96 */
	virtual float GetAngularDamping(const IPhysicsBody* );
	/* ../public/vphysics2/iphysicsbody.h:98 */
	virtual void ApplyLinearImpulse(IPhysicsBody* , const Vector& );
	/* ../public/vphysics2/iphysicsbody.h:99 */
	virtual void ApplyLinearImpulseAtWorldSpace(IPhysicsBody* , const Vector& , const Vector& );
	/* ../public/vphysics2/iphysicsbody.h:100 */
	virtual void ApplyAngularImpulse(IPhysicsBody* , const Vector& );
	/* ../public/vphysics2/iphysicsbody.h:102 */
	virtual void ApplyForce(IPhysicsBody* , const Vector& );
	/* ../public/vphysics2/iphysicsbody.h:103 */
	virtual void ApplyForceAt(IPhysicsBody* , const Vector& , const Vector& );
	/* ../public/vphysics2/iphysicsbody.h:104 */
	virtual void ApplyTorque(IPhysicsBody* , const Vector& );
	/* ../public/vphysics2/iphysicsbody.h:106 */
	virtual void ClearForces(IPhysicsBody* );
	/* ../public/vphysics2/iphysicsbody.h:107 */
	virtual void ClearTorque(IPhysicsBody* );
	/* ../public/vphysics2/iphysicsbody.h:109 */
	virtual void Enable(IPhysicsBody* );
	/* ../public/vphysics2/iphysicsbody.h:110 */
	virtual void Disable(IPhysicsBody* );
	/* ../public/vphysics2/iphysicsbody.h:111 */
	virtual bool IsEnabled(const IPhysicsBody* );
	/* ../public/vphysics2/iphysicsbody.h:113 */
	virtual void EnableAutoSleeping(IPhysicsBody* );
	/* ../public/vphysics2/iphysicsbody.h:114 */
	virtual void DisableAutoSleeping(IPhysicsBody* );
	/* ../public/vphysics2/iphysicsbody.h:115 */
	virtual bool IsAutoSleepingEnabled(const IPhysicsBody* );
	/* ../public/vphysics2/iphysicsbody.h:117 */
	virtual void Sleep(IPhysicsBody* );
	/* ../public/vphysics2/iphysicsbody.h:118 */
	virtual void Wake(IPhysicsBody* );
	/* ../public/vphysics2/iphysicsbody.h:119 */
	virtual bool IsSleeping(const IPhysicsBody* );
	/* ../public/vphysics2/iphysicsbody.h:121 */
	virtual Vector TransformPointToLocal(const IPhysicsBody* , const Vector& );
	/* ../public/vphysics2/iphysicsbody.h:122 */
	virtual Vector TransformPointToWorld(const IPhysicsBody* , const Vector& );
	/* ../public/vphysics2/iphysicsbody.h:124 */
	virtual void EnableTouchEvents(IPhysicsBody* );
	/* ../public/vphysics2/iphysicsbody.h:125 */
	virtual void DisableTouchEvents(IPhysicsBody* );
	/* ../public/vphysics2/iphysicsbody.h:126 */
	virtual bool IsTouchEventEnabled(const IPhysicsBody* );
	/* ../public/vphysics2/iphysicsbody.h:128 */
	virtual void SetMaterialIndex(IPhysicsBody* , CUtlStringToken);
	/* ../public/vphysics2/iphysicsbody.h:130 */
	virtual void SetCollisionAttributes(IPhysicsBody* , const RnCollisionAttr_t& );
	/* ../public/vphysics2/iphysicsbody.h:132 */
	virtual const char* GetDebugName(const IPhysicsBody* );
	/* ../public/vphysics2/iphysicsbody.h:134 */
	virtual void SetAggregateInstance(IPhysicsBody* , void* );
	/* ../public/vphysics2/iphysicsbody.h:135 */
	virtual void* GetAggregateInstance(const IPhysicsBody* );
	/* ../public/vphysics2/iphysicsbody.h:137 */
	virtual Vector GetClosestPoint(const IPhysicsBody* , const Vector& );
	/* ../public/vphysics2/iphysicsbody.h:139 */
	virtual void SetDebugName(IPhysicsBody* , const char* );
	/* ../public/vphysics2/iphysicsbody.h:141 */
	virtual const char* GetName(const IPhysicsBody* );
	/* ../public/vphysics2/iphysicsbody.h:143 */
	virtual Vector GetVelocity(const IPhysicsBody* );
	/* ../public/vphysics2/iphysicsbody.h:145 */
	virtual void SetTargetTransform(IPhysicsBody* , const Vector& , const Quaternion& , float);
	/* ../public/vphysics2/iphysicsbody.h:147 */
	virtual const CManagedHandle* GetManagedHandle(const IPhysicsBody* );
	/* ../public/vphysics2/iphysicsbody.h:148 */
	virtual float GetDensity(IPhysicsBody* );
	/* ../public/vphysics2/iphysicsbody.h:150 */
	virtual void UpdateSurfaceProperties(IPhysicsBody* , const CPhysSurfaceProperties* );
	/* ../public/vphysics2/iphysicsbody.h:152 */
	virtual bool CheckOverlap(IPhysicsBody* , IPhysicsBody* , const CTransform& );
	/* ../public/vphysics2/iphysicsbody.h:154 */
	virtual Vector GetLocalInertiaVector(const IPhysicsBody* );
	/* ../public/vphysics2/iphysicsbody.h:155 */
	virtual void SetLocalInertia(IPhysicsBody* , const Vector& , const Quaternion& );
	/* ../public/vphysics2/iphysicsbody.h:156 */
	virtual void ResetLocalInertia(IPhysicsBody* );
	/* ../public/vphysics2/iphysicsbody.h:158 */
	virtual void SetMaterial(IPhysicsBody* , const RnMaterial_t& );
	/* ../public/vphysics2/iphysicsbody.h:160 */
	virtual void SetMotionLocks(IPhysicsBody* , bool, bool, bool, bool, bool, bool);
	/* ../public/vphysics2/iphysicsbody.h:162 */
	virtual bool IsTouching(const IPhysicsBody* , IPhysicsBody* , bool);
	/* ../public/vphysics2/iphysicsbody.h:163 */
	virtual bool IsTouching(const IPhysicsBody* , IPhysicsShape* , bool);
	/* ../public/vphysics2/iphysicsbody.h:165 */
	virtual void SetTrigger(IPhysicsBody* , bool);
	/* ../public/vphysics2/iphysicsbody.h:167 */
	virtual void ResetProxy(IPhysicsBody* );
	/* ../public/vphysics2/iphysicsbody.h:169 */
	virtual void SetBullet(IPhysicsBody* , bool);
	/* ../public/vphysics2/iphysicsbody.h:171 */
	virtual bool ApplyBuoyancyImpulse(IPhysicsBody* , const Vector& , const Vector& , float, float, float, const Vector& , const Vector& , float);
	/* ../public/vphysics2/iphysicsbody.h:172 */
	virtual bool GetSubmergedVolume(const IPhysicsBody* , const Vector& , const Vector& , float* , float* , Vector* );
	void IPhysicsBody(class IPhysicsBody *, const class IPhysicsBody  &); /* linkage=_ZN12IPhysicsBodyC4ERKS_ */
	void IPhysicsBody(class IPhysicsBody *); /* linkage=_ZN12IPhysicsBodyC4Ev */
	virtual void ~IPhysicsBody(class IPhysicsBody *); /* linkage=_ZN12IPhysicsBodyD4Ev */
	virtual class IPhysicsWorld * GetWorld(const class IPhysicsBody  *); /* linkage=_ZNK12IPhysicsBody8GetWorldEv */
	virtual void SetType(class IPhysicsBody *, enum PhysicsBodyType_t); /* linkage=_ZN12IPhysicsBody7SetTypeE17PhysicsBodyType_t */
	virtual enum PhysicsBodyType_t GetType(const class IPhysicsBody  *); /* linkage=_ZNK12IPhysicsBody7GetTypeEv */
	virtual int GetShapeCount(const class IPhysicsBody  *); /* linkage=_ZNK12IPhysicsBody13GetShapeCountEv */
	virtual class IPhysicsShape * GetShape(class IPhysicsBody *, int); /* linkage=_ZN12IPhysicsBody8GetShapeEi */
	virtual const class IPhysicsShape  * GetShape(const class IPhysicsBody  *, int); /* linkage=_ZNK12IPhysicsBody8GetShapeEi */
	virtual class IPhysicsShape * AddSphereShape(class IPhysicsBody *, const class Vector  &, float); /* linkage=_ZN12IPhysicsBody14AddSphereShapeERK6Vectorf */
	virtual class IPhysicsShape * AddCapsuleShape(class IPhysicsBody *, const class Vector  &, const class Vector  &, float); /* linkage=_ZN12IPhysicsBody15AddCapsuleShapeERK6VectorS2_f */
	virtual class IPhysicsShape * AddHullShape(class IPhysicsBody *, const class RnHull_t  *, float); /* linkage=_ZN12IPhysicsBody12AddHullShapeEPK8RnHull_tf */
	virtual class IPhysicsShape * AddBoxShape(class IPhysicsBody *, const class Vector  &, const class Vector  &); /* linkage=_ZN12IPhysicsBody11AddBoxShapeERK6VectorS2_ */
	virtual class IPhysicsShape * AddBoxShape(class IPhysicsBody *, const class Vector  &, const class Quaternion  &, const class Vector  &); /* linkage=_ZN12IPhysicsBody11AddBoxShapeERK6VectorRK10QuaternionS2_ */
	virtual class IPhysicsShape * AddHullShape(class IPhysicsBody *, const class Vector  &, const class Quaternion  &, int, const class Vector  *); /* linkage=_ZN12IPhysicsBody12AddHullShapeERK6VectorRK10QuaternioniPS1_ */
	virtual class IPhysicsShape * AddHullShape(class IPhysicsBody *, class RnHull_t *, const class CTransformUnaligned  &); /* linkage=_ZN12IPhysicsBody12AddHullShapeEP8RnHull_tRK19CTransformUnaligned */
	virtual class IPhysicsShape * AddHullShape(class IPhysicsBody *, class RnMesh_t *, const class CTransformUnaligned  &); /* linkage=_ZN12IPhysicsBody12AddHullShapeEP8RnMesh_tRK19CTransformUnaligned */
	virtual class IPhysicsShape * AddMeshShape(class IPhysicsBody *, int, const class Vector  *, int, const uint32  *, int); /* linkage=_ZN12IPhysicsBody12AddMeshShapeEiPK6VectoriPKji */
	virtual class IPhysicsShape * AddMeshShape(class IPhysicsBody *, const class RnMesh_t  *, const class Vector  &, int); /* linkage=_ZN12IPhysicsBody12AddMeshShapeEPK8RnMesh_tRK6Vectori */
	virtual class IPhysicsShape * AddMeshShape(class IPhysicsBody *, class RnMesh_t *, const class CTransformUnaligned  &, int); /* linkage=_ZN12IPhysicsBody12AddMeshShapeEP8RnMesh_tRK19CTransformUnalignedi */
	virtual class IPhysicsShape * AddHeightFieldShape(class IPhysicsBody *, uint16_t *, uint8_t *, int, int, float, float, int); /* linkage=_ZN12IPhysicsBody19AddHeightFieldShapeEPtPhiiffi */
	virtual void RemoveShape(class IPhysicsBody *, class IPhysicsShape *); /* linkage=_ZN12IPhysicsBody11RemoveShapeEP13IPhysicsShape */
	virtual void PurgeShapes(class IPhysicsBody *); /* linkage=_ZN12IPhysicsBody11PurgeShapesEv */
	virtual class AABB_t BuildBounds(const class IPhysicsBody  *); /* linkage=_ZNK12IPhysicsBody11BuildBoundsEv */
	virtual class AABB_t BuildBounds(const class IPhysicsBody  *, const class matrix3x4_t  &); /* linkage=_ZNK12IPhysicsBody11BuildBoundsERK11matrix3x4_t */
	virtual void SetGravityScale(class IPhysicsBody *, float); /* linkage=_ZN12IPhysicsBody15SetGravityScaleEf */
	virtual float GetGravityScale(const class IPhysicsBody  *); /* linkage=_ZNK12IPhysicsBody15GetGravityScaleEv */
	virtual void EnableGravity(class IPhysicsBody *, bool); /* linkage=_ZN12IPhysicsBody13EnableGravityEb */
	virtual bool IsGravityEnabled(const class IPhysicsBody  *); /* linkage=_ZNK12IPhysicsBody16IsGravityEnabledEv */
	virtual bool IsGravityDisabled(const class IPhysicsBody  *); /* linkage=_ZNK12IPhysicsBody17IsGravityDisabledEv */
	virtual void SetMass(class IPhysicsBody *, float); /* linkage=_ZN12IPhysicsBody7SetMassEf */
	virtual float GetMass(const class IPhysicsBody  *); /* linkage=_ZNK12IPhysicsBody7GetMassEv */
	virtual class Quaternion GetLocalInertiaOrientation(const class IPhysicsBody  *); /* linkage=_ZNK12IPhysicsBody26GetLocalInertiaOrientationEv */
	virtual void ScaleInertia(class IPhysicsBody *, float); /* linkage=_ZN12IPhysicsBody12ScaleInertiaEf */
	virtual class Vector GetMassCenter(const class IPhysicsBody  *); /* linkage=_ZNK12IPhysicsBody13GetMassCenterEv */
	virtual class Vector GetLocalMassCenter(const class IPhysicsBody  *); /* linkage=_ZNK12IPhysicsBody18GetLocalMassCenterEv */
	virtual void SetLocalMassCenter(class IPhysicsBody *, const class Vector  &); /* linkage=_ZN12IPhysicsBody18SetLocalMassCenterERK6Vector */
	virtual void SetOverrideMassCenter(class IPhysicsBody *, bool); /* linkage=_ZN12IPhysicsBody21SetOverrideMassCenterEb */
	virtual bool GetOverrideMassCenter(class IPhysicsBody *); /* linkage=_ZN12IPhysicsBody21GetOverrideMassCenterEv */
	virtual void BuildMass(class IPhysicsBody *); /* linkage=_ZN12IPhysicsBody9BuildMassEv */
	virtual void SetPosition(class IPhysicsBody *, const class Vector  &); /* linkage=_ZN12IPhysicsBody11SetPositionERK6Vector */
	virtual class Vector GetPosition(const class IPhysicsBody  *); /* linkage=_ZNK12IPhysicsBody11GetPositionEv */
	virtual void SetOrientation(class IPhysicsBody *, const class Quaternion  &); /* linkage=_ZN12IPhysicsBody14SetOrientationERK10Quaternion */
	virtual class Quaternion GetOrientation(const class IPhysicsBody  *); /* linkage=_ZNK12IPhysicsBody14GetOrientationEv */
	virtual void SetTransform(class IPhysicsBody *, const class Vector  &, const class Quaternion  &); /* linkage=_ZN12IPhysicsBody12SetTransformERK6VectorRK10Quaternion */
	virtual void SetTransform(class IPhysicsBody *, const class CTransform  &); /* linkage=_ZN12IPhysicsBody12SetTransformERK10CTransform */
	virtual class CTransform GetTransform(const class IPhysicsBody  *); /* linkage=_ZNK12IPhysicsBody12GetTransformEv */
	virtual void SetLinearVelocity(class IPhysicsBody *, const class Vector  &); /* linkage=_ZN12IPhysicsBody17SetLinearVelocityERK6Vector */
	virtual void AddLinearVelocity(class IPhysicsBody *, const class Vector  &); /* linkage=_ZN12IPhysicsBody17AddLinearVelocityERK6Vector */
	virtual class Vector GetLinearVelocity(const class IPhysicsBody  *); /* linkage=_ZNK12IPhysicsBody17GetLinearVelocityEv */
	virtual class Vector GetVelocityAtPoint(const class IPhysicsBody  *, const class Vector  &); /* linkage=_ZNK12IPhysicsBody18GetVelocityAtPointERK6Vector */
	virtual void SetAngularVelocity(class IPhysicsBody *, const class Vector  &); /* linkage=_ZN12IPhysicsBody18SetAngularVelocityERK6Vector */
	virtual void AddAngularVelocity(class IPhysicsBody *, const class Vector  &); /* linkage=_ZN12IPhysicsBody18AddAngularVelocityERK6Vector */
	virtual class Vector GetAngularVelocity(const class IPhysicsBody  *); /* linkage=_ZNK12IPhysicsBody18GetAngularVelocityEv */
	virtual void SetLinearDamping(class IPhysicsBody *, float); /* linkage=_ZN12IPhysicsBody16SetLinearDampingEf */
	virtual float GetLinearDamping(const class IPhysicsBody  *); /* linkage=_ZNK12IPhysicsBody16GetLinearDampingEv */
	virtual void SetAngularDamping(class IPhysicsBody *, float); /* linkage=_ZN12IPhysicsBody17SetAngularDampingEf */
	virtual float GetAngularDamping(const class IPhysicsBody  *); /* linkage=_ZNK12IPhysicsBody17GetAngularDampingEv */
	virtual void ApplyLinearImpulse(class IPhysicsBody *, const class Vector  &); /* linkage=_ZN12IPhysicsBody18ApplyLinearImpulseERK6Vector */
	virtual void ApplyLinearImpulseAtWorldSpace(class IPhysicsBody *, const class Vector  &, const class Vector  &); /* linkage=_ZN12IPhysicsBody30ApplyLinearImpulseAtWorldSpaceERK6VectorS2_ */
	virtual void ApplyAngularImpulse(class IPhysicsBody *, const class Vector  &); /* linkage=_ZN12IPhysicsBody19ApplyAngularImpulseERK6Vector */
	virtual void ApplyForce(class IPhysicsBody *, const class Vector  &); /* linkage=_ZN12IPhysicsBody10ApplyForceERK6Vector */
	virtual void ApplyForceAt(class IPhysicsBody *, const class Vector  &, const class Vector  &); /* linkage=_ZN12IPhysicsBody12ApplyForceAtERK6VectorS2_ */
	virtual void ApplyTorque(class IPhysicsBody *, const class Vector  &); /* linkage=_ZN12IPhysicsBody11ApplyTorqueERK6Vector */
	virtual void ClearForces(class IPhysicsBody *); /* linkage=_ZN12IPhysicsBody11ClearForcesEv */
	virtual void ClearTorque(class IPhysicsBody *); /* linkage=_ZN12IPhysicsBody11ClearTorqueEv */
	virtual void Enable(class IPhysicsBody *); /* linkage=_ZN12IPhysicsBody6EnableEv */
	virtual void Disable(class IPhysicsBody *); /* linkage=_ZN12IPhysicsBody7DisableEv */
	virtual bool IsEnabled(const class IPhysicsBody  *); /* linkage=_ZNK12IPhysicsBody9IsEnabledEv */
	virtual void EnableAutoSleeping(class IPhysicsBody *); /* linkage=_ZN12IPhysicsBody18EnableAutoSleepingEv */
	virtual void DisableAutoSleeping(class IPhysicsBody *); /* linkage=_ZN12IPhysicsBody19DisableAutoSleepingEv */
	virtual bool IsAutoSleepingEnabled(const class IPhysicsBody  *); /* linkage=_ZNK12IPhysicsBody21IsAutoSleepingEnabledEv */
	virtual void Sleep(class IPhysicsBody *); /* linkage=_ZN12IPhysicsBody5SleepEv */
	virtual void Wake(class IPhysicsBody *); /* linkage=_ZN12IPhysicsBody4WakeEv */
	virtual bool IsSleeping(const class IPhysicsBody  *); /* linkage=_ZNK12IPhysicsBody10IsSleepingEv */
	virtual class Vector TransformPointToLocal(const class IPhysicsBody  *, const class Vector  &); /* linkage=_ZNK12IPhysicsBody21TransformPointToLocalERK6Vector */
	virtual class Vector TransformPointToWorld(const class IPhysicsBody  *, const class Vector  &); /* linkage=_ZNK12IPhysicsBody21TransformPointToWorldERK6Vector */
	virtual void EnableTouchEvents(class IPhysicsBody *); /* linkage=_ZN12IPhysicsBody17EnableTouchEventsEv */
	virtual void DisableTouchEvents(class IPhysicsBody *); /* linkage=_ZN12IPhysicsBody18DisableTouchEventsEv */
	virtual bool IsTouchEventEnabled(const class IPhysicsBody  *); /* linkage=_ZNK12IPhysicsBody19IsTouchEventEnabledEv */
	virtual void SetMaterialIndex(class IPhysicsBody *, class CUtlStringToken); /* linkage=_ZN12IPhysicsBody16SetMaterialIndexE15CUtlStringToken */
	virtual void SetCollisionAttributes(class IPhysicsBody *, const class RnCollisionAttr_t  &); /* linkage=_ZN12IPhysicsBody22SetCollisionAttributesERK17RnCollisionAttr_t */
	virtual const char  * GetDebugName(const class IPhysicsBody  *); /* linkage=_ZNK12IPhysicsBody12GetDebugNameEv */
	virtual void SetAggregateInstance(class IPhysicsBody *, void *); /* linkage=_ZN12IPhysicsBody20SetAggregateInstanceEPv */
	virtual void * GetAggregateInstance(const class IPhysicsBody  *); /* linkage=_ZNK12IPhysicsBody20GetAggregateInstanceEv */
	virtual class Vector GetClosestPoint(const class IPhysicsBody  *, const class Vector  &); /* linkage=_ZNK12IPhysicsBody15GetClosestPointERK6Vector */
	virtual void SetDebugName(class IPhysicsBody *, const char  *); /* linkage=_ZN12IPhysicsBody12SetDebugNameEPKc */
	virtual const char  * GetName(const class IPhysicsBody  *); /* linkage=_ZNK12IPhysicsBody7GetNameEv */
	virtual class Vector GetVelocity(const class IPhysicsBody  *); /* linkage=_ZNK12IPhysicsBody11GetVelocityEv */
	virtual void SetTargetTransform(class IPhysicsBody *, const class Vector  &, const class Quaternion  &, float); /* linkage=_ZN12IPhysicsBody18SetTargetTransformERK6VectorRK10Quaternionf */
	virtual const class CManagedHandle  * GetManagedHandle(const class IPhysicsBody  *); /* linkage=_ZNK12IPhysicsBody16GetManagedHandleEv */
	virtual float GetDensity(class IPhysicsBody *); /* linkage=_ZN12IPhysicsBody10GetDensityEv */
	virtual void UpdateSurfaceProperties(class IPhysicsBody *, const class CPhysSurfaceProperties  *); /* linkage=_ZN12IPhysicsBody23UpdateSurfacePropertiesEPK22CPhysSurfaceProperties */
	virtual bool CheckOverlap(class IPhysicsBody *, class IPhysicsBody *, const class CTransform  &); /* linkage=_ZN12IPhysicsBody12CheckOverlapEPS_RK10CTransform */
	virtual class Vector GetLocalInertiaVector(const class IPhysicsBody  *); /* linkage=_ZNK12IPhysicsBody21GetLocalInertiaVectorEv */
	virtual void SetLocalInertia(class IPhysicsBody *, const class Vector  &, const class Quaternion  &); /* linkage=_ZN12IPhysicsBody15SetLocalInertiaERK6VectorRK10Quaternion */
	virtual void ResetLocalInertia(class IPhysicsBody *); /* linkage=_ZN12IPhysicsBody17ResetLocalInertiaEv */
	virtual void SetMaterial(class IPhysicsBody *, const class RnMaterial_t  &); /* linkage=_ZN12IPhysicsBody11SetMaterialERK12RnMaterial_t */
	virtual void SetMotionLocks(class IPhysicsBody *, bool, bool, bool, bool, bool, bool); /* linkage=_ZN12IPhysicsBody14SetMotionLocksEbbbbbb */
	virtual bool IsTouching(const class IPhysicsBody  *, class IPhysicsBody *, bool); /* linkage=_ZNK12IPhysicsBody10IsTouchingEPS_b */
	virtual bool IsTouching(const class IPhysicsBody  *, class IPhysicsShape *, bool); /* linkage=_ZNK12IPhysicsBody10IsTouchingEP13IPhysicsShapeb */
	virtual void SetTrigger(class IPhysicsBody *, bool); /* linkage=_ZN12IPhysicsBody10SetTriggerEb */
	virtual void ResetProxy(class IPhysicsBody *); /* linkage=_ZN12IPhysicsBody10ResetProxyEv */
	virtual void SetBullet(class IPhysicsBody *, bool); /* linkage=_ZN12IPhysicsBody9SetBulletEb */
	virtual bool ApplyBuoyancyImpulse(class IPhysicsBody *, const class Vector  &, const class Vector  &, float, float, float, const class Vector  &, const class Vector  &, float); /* linkage=_ZN12IPhysicsBody20ApplyBuoyancyImpulseERK6VectorS2_fffS2_S2_f */
	virtual bool GetSubmergedVolume(const class IPhysicsBody  *, const class Vector  &, const class Vector  &, float *, float *, class Vector *); /* linkage=_ZNK12IPhysicsBody18GetSubmergedVolumeERK6VectorS2_PfS3_PS0_ */
};

// <00BB071F> ../public/vphysics2/iphysicsbody.h:24
void IPhysicsBody::~IPhysicsBody()
{
} /* size: 0 */

// <00BB06EF> ../public/vphysics2/iphysicsbody.h:24
inline void IPhysicsBody::~IPhysicsBody()
{
} /* size: 0 */

