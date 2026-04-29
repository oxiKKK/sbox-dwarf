
//
// vphysics2/physicsshape.h
//
//	referenced by: libengine2.so
//
//	functions: 2
//	class: 1
//

// <00CA5AE8> vphysics2/physicsshape.h:13
// member functions: 102
// member variables: 15
// vtable entries: 44
// class size: 192
class CPhysicsShape : public IPhysicsShape {
public:
	/* class IPhysicsShape <ancestor>; */ /* 0 8 */
	void CPhysicsShape(CPhysicsShape* , const CPhysicsShape& );
	/* vphysics2/physicsshape.cpp:12 */
	void CPhysicsShape(CPhysicsShape* , b3ShapeId);
	/* vphysics2/physicsshape.cpp:30 */
	virtual void ~CPhysicsShape(CPhysicsShape* );
	/* vphysics2/physicsshape.cpp:49 */
	virtual IPhysicsBody* GetBody(const CPhysicsShape* );
	/* vphysics2/physicsshape.cpp:54 */
	virtual PhysicsShapeType_t GetType(const CPhysicsShape* );
	/* vphysics2/physicsshape.cpp:976 */
	virtual RnSphere_t AsSphere(const CPhysicsShape* );
	/* vphysics2/physicsshape.cpp:989 */
	virtual RnCapsule_t AsCapsule(const CPhysicsShape* );
	/* vphysics2/physicsshape.cpp:67 */
	virtual void SetMaterial(CPhysicsShape* , const RnMaterial_t& );
	/* vphysics2/physicsshape.cpp:89 */
	virtual void SetSurfaceIndex(CPhysicsShape* , int, int);
	/* vphysics2/physicsshape.cpp:119 */
	virtual bool SetMaterialIndex(CPhysicsShape* , CUtlStringToken);
	/* vphysics2/physicsshape.cpp:133 */
	virtual int GetSurfaceIndex(const CPhysicsShape* );
	/* vphysics2/physicsshape.cpp:114 */
	virtual const RnMaterial_t& GetMaterial(const CPhysicsShape* );
	/* vphysics2/physicsshape.cpp:138 */
	virtual void SetCollisionAttributes(CPhysicsShape* , const RnCollisionAttr_t& );
	/* vphysics2/physicsshape.cpp:157 */
	virtual const RnCollisionAttr_t& GetCollisionAttributes(const CPhysicsShape* );
	/* vphysics2/physicsshape.cpp:162 */
	virtual void AddCollisionFunctionMask(CPhysicsShape* , uint8);
	/* vphysics2/physicsshape.cpp:170 */
	virtual void RemoveCollisionFunctionMask(CPhysicsShape* , uint8);
	/* vphysics2/physicsshape.cpp:246 */
	virtual AABB_t BuildBounds(const CPhysicsShape* );
	/* vphysics2/physicsshape.cpp:251 */
	virtual AABB_t BuildBounds(const CPhysicsShape* , const matrix3x4_t& );
	/* vphysics2/physicsshape.cpp:293 */
	virtual void ComputeMass(const CPhysicsShape* , float& , Vector& );
	/* vphysics2/physicsshape.cpp:323 */
	virtual void SetDebugName(CPhysicsShape* , const char* );
	/* vphysics2/physicsshape.cpp:328 */
	virtual const char* GetDebugName(const CPhysicsShape* );
	/* vphysics2/physicsshape.cpp:391 */
	virtual void UpdateMeshShape(CPhysicsShape* , int, const Vector* , int, const uint32* );
	/* vphysics2/physicsshape.cpp:421 */
	virtual void UpdateHeightShape(CPhysicsShape* , uint16_t* , uint8_t* , int, int, int, int, float, float);
	/* vphysics2/physicsshape.cpp:467 */
	virtual void UpdateSphereShape(CPhysicsShape* , const Vector& , float);
	/* vphysics2/physicsshape.cpp:478 */
	virtual void UpdateCapsuleShape(CPhysicsShape* , const Vector& , const Vector& , float);
	/* vphysics2/physicsshape.cpp:486 */
	virtual void UpdateHullShape(CPhysicsShape* , const Vector& , const Quaternion& , int, const Vector* );
	/* vphysics2/physicsshape.cpp:333 */
	virtual bool HasTag(CPhysicsShape* , uint);
	/* vphysics2/physicsshape.cpp:338 */
	virtual bool AddTag(CPhysicsShape* , uint);
	/* vphysics2/physicsshape.cpp:352 */
	virtual bool RemoveTag(CPhysicsShape* , uint);
	/* vphysics2/physicsshape.cpp:366 */
	virtual bool ClearTags(CPhysicsShape* );
	/* vphysics2/physicsshape.cpp:511 */
	virtual void GetTriangulation(const CPhysicsShape* , CUtlVector<Vector, CUtlMemory<Vector, int> >* , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >* );
	/* vphysics2/physicsshape.cpp:930 */
	virtual void GetTriangulationForNavmesh(const CPhysicsShape* , CUtlVector<Vector, CUtlMemory<Vector, int> >* , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >* , const AABB_t& );
	/* vphysics2/physicsshape.cpp:802 */
	virtual void GetOutline(const CPhysicsShape* , CUtlVector<Vector, CUtlMemory<Vector, int> >* );
	/* vphysics2/physicsshape.cpp:1377 */
	virtual const CManagedHandle* GetManagedHandle(const CPhysicsShape* );
	/* vphysics2/physicsshape.cpp:178 */
	void EnableTouchEvents(CPhysicsShape* );
	/* vphysics2/physicsshape.cpp:183 */
	void DisableTouchEvents(CPhysicsShape* );
	/* vphysics2/physicsshape.cpp:188 */
	bool IsTouchEventEnabled(const CPhysicsShape* );
	/* vphysics2/physicsshape.cpp:193 */
	virtual void SetTrigger(CPhysicsShape* , bool);
	/* vphysics2/physicsshape.cpp:241 */
	virtual bool IsTrigger(const CPhysicsShape* );
	/* vphysics2/physicsshape.cpp:233 */
	virtual void SetIgnoreTraces(CPhysicsShape* , bool);
	/* vphysics2/physicsshape.cpp:217 */
	virtual void SetHasNoMass(CPhysicsShape* , bool);
	/* vphysics2/physicsshape.cpp:379 */
	virtual void UpdateBoxShape(CPhysicsShape* , const Vector& , const Quaternion& , const Vector& );
	/* vphysics2/physicsshape.cpp:1003 */
	virtual void SetFriction(CPhysicsShape* , float);
	/* vphysics2/physicsshape.cpp:1011 */
	virtual float GetFriction(CPhysicsShape* );
	/* vphysics2/physicsshape.cpp:1016 */
	virtual void SetElasticity(CPhysicsShape* , float);
	/* vphysics2/physicsshape.cpp:1024 */
	virtual void SetRollingResistance(CPhysicsShape* , float);
	/* vphysics2/physicsshape.cpp:1032 */
	virtual void SetLocalVelocity(CPhysicsShape* , const Vector& );
	/* vphysics2/physicsshape.cpp:1056 */
	virtual Vector GetLocalVelocity(CPhysicsShape* );
	/* vphysics2/physicsshape.cpp:1061 */
	virtual bool IsTouching(const CPhysicsShape* , IPhysicsShape* , bool);
	/* vphysics2/physicsshape.cpp:1078 */
	virtual void ResetProxy(CPhysicsShape* );
private:
	/* vphysics2/physicsshape.cpp:1317 */
	void GetSubmergedVolume(const CPhysicsShape* , const CTransform& , const VPlane& , float* , float* , Vector* );
	b3ShapeId m_id; /* 8 8 */
	CManagedHandle m_ManagedHandle; /* 16 4 */
	CUtlString m_debugName; /* 24 8 */
	CPhysicsBody * m_pBody; /* 32 8 */
	RnMaterial_t m_material; /* 40 32 */
	int m_nSurfaceIndex; /* 72 4 */
	float m_flFriction; /* 76 4 */
	float m_flElasticity; /* 80 4 */
	float m_flRollingResistance; /* 84 4 */
	bool m_bHasNoMass; /* 88 1 */
	Vector m_vLocalVelocity; /* 92 12 */
	RnCollisionAttr_t m_CollisionAttributes; /* 104 72 */
	b3MeshData * m_pMeshData; /* 176 8 */
	b3HeightField * m_pHeightField; /* 184 8 */
	void GetSubmergedVolume(const class CPhysicsShape  *, const class CTransform  &, const class VPlane  &, float *, float *, class Vector *); /* linkage=_ZNK13CPhysicsShape18GetSubmergedVolumeERK10CTransformRK6VPlanePfS6_P6Vector */
	bool IsTouchEventEnabled(const class CPhysicsShape  *); /* linkage=_ZNK13CPhysicsShape19IsTouchEventEnabledEv */
	void DisableTouchEvents(class CPhysicsShape *); /* linkage=_ZN13CPhysicsShape18DisableTouchEventsEv */
	void EnableTouchEvents(class CPhysicsShape *); /* linkage=_ZN13CPhysicsShape17EnableTouchEventsEv */
	void CPhysicsShape(class CPhysicsShape *, b3ShapeId); /* linkage=_ZN13CPhysicsShapeC4E9b3ShapeId */
	void CPhysicsShape(class CPhysicsShape *, const class CPhysicsShape  &); /* linkage=_ZN13CPhysicsShapeC4ERKS_ */
	virtual void ~CPhysicsShape(class CPhysicsShape *); /* linkage=_ZN13CPhysicsShapeD4Ev */
	virtual class IPhysicsBody * GetBody(const class CPhysicsShape  *); /* linkage=_ZNK13CPhysicsShape7GetBodyEv */
	/* <cb405e> vphysics2/physicsshape.cpp:54 */
	virtual enum PhysicsShapeType_t GetType(const class CPhysicsShape  *); /* linkage=_ZNK13CPhysicsShape7GetTypeEv */
	virtual class RnSphere_t AsSphere(const class CPhysicsShape  *); /* linkage=_ZNK13CPhysicsShape8AsSphereEv */
	virtual class RnCapsule_t AsCapsule(const class CPhysicsShape  *); /* linkage=_ZNK13CPhysicsShape9AsCapsuleEv */
	virtual void SetMaterial(class CPhysicsShape *, const class RnMaterial_t  &); /* linkage=_ZN13CPhysicsShape11SetMaterialERK12RnMaterial_t */
	virtual void SetSurfaceIndex(class CPhysicsShape *, int, int); /* linkage=_ZN13CPhysicsShape15SetSurfaceIndexEii */
	virtual bool SetMaterialIndex(class CPhysicsShape *, class CUtlStringToken); /* linkage=_ZN13CPhysicsShape16SetMaterialIndexE15CUtlStringToken */
	virtual int GetSurfaceIndex(const class CPhysicsShape  *); /* linkage=_ZNK13CPhysicsShape15GetSurfaceIndexEv */
	virtual const class RnMaterial_t  & GetMaterial(const class CPhysicsShape  *); /* linkage=_ZNK13CPhysicsShape11GetMaterialEv */
	virtual void SetCollisionAttributes(class CPhysicsShape *, const class RnCollisionAttr_t  &); /* linkage=_ZN13CPhysicsShape22SetCollisionAttributesERK17RnCollisionAttr_t */
	virtual const class RnCollisionAttr_t  & GetCollisionAttributes(const class CPhysicsShape  *); /* linkage=_ZNK13CPhysicsShape22GetCollisionAttributesEv */
	/* <cb4773> vphysics2/physicsshape.cpp:162 */
	virtual void AddCollisionFunctionMask(class CPhysicsShape *, uint8); /* linkage=_ZN13CPhysicsShape24AddCollisionFunctionMaskEh */
	/* <cb4886> vphysics2/physicsshape.cpp:170 */
	virtual void RemoveCollisionFunctionMask(class CPhysicsShape *, uint8); /* linkage=_ZN13CPhysicsShape27RemoveCollisionFunctionMaskEh */
	virtual class AABB_t BuildBounds(const class CPhysicsShape  *); /* linkage=_ZNK13CPhysicsShape11BuildBoundsEv */
	virtual class AABB_t BuildBounds(const class CPhysicsShape  *, const class matrix3x4_t  &); /* linkage=_ZNK13CPhysicsShape11BuildBoundsERK11matrix3x4_t */
	virtual void ComputeMass(const class CPhysicsShape  *, float &, class Vector &); /* linkage=_ZNK13CPhysicsShape11ComputeMassERfR6Vector */
	virtual void SetDebugName(class CPhysicsShape *, const char  *); /* linkage=_ZN13CPhysicsShape12SetDebugNameEPKc */
	virtual const char  * GetDebugName(const class CPhysicsShape  *); /* linkage=_ZNK13CPhysicsShape12GetDebugNameEv */
	virtual void UpdateMeshShape(class CPhysicsShape *, int, const class Vector  *, int, const uint32  *); /* linkage=_ZN13CPhysicsShape15UpdateMeshShapeEiPK6VectoriPKj */
	/* <cb5185> vphysics2/physicsshape.cpp:421 */
	virtual void UpdateHeightShape(class CPhysicsShape *, uint16_t *, uint8_t *, int, int, int, int, float, float); /* linkage=_ZN13CPhysicsShape17UpdateHeightShapeEPtPhiiiiff */
	/* <cb418b> vphysics2/physicsshape.cpp:467 */
	virtual void UpdateSphereShape(class CPhysicsShape *, const class Vector  &, float); /* linkage=_ZN13CPhysicsShape17UpdateSphereShapeERK6Vectorf */
	virtual void UpdateCapsuleShape(class CPhysicsShape *, const class Vector  &, const class Vector  &, float); /* linkage=_ZN13CPhysicsShape18UpdateCapsuleShapeERK6VectorS2_f */
	virtual void UpdateHullShape(class CPhysicsShape *, const class Vector  &, const class Quaternion  &, int, const class Vector  *); /* linkage=_ZN13CPhysicsShape15UpdateHullShapeERK6VectorRK10QuaternioniPS1_ */
	/* <cb3fc5> vphysics2/physicsshape.cpp:333 */
	virtual bool HasTag(class CPhysicsShape *, uint); /* linkage=_ZN13CPhysicsShape6HasTagEj */
	/* <cb4999> vphysics2/physicsshape.cpp:338 */
	virtual bool AddTag(class CPhysicsShape *, uint); /* linkage=_ZN13CPhysicsShape6AddTagEj */
	/* <cb4ba0> vphysics2/physicsshape.cpp:352 */
	virtual bool RemoveTag(class CPhysicsShape *, uint); /* linkage=_ZN13CPhysicsShape9RemoveTagEj */
	/* <cb463b> vphysics2/physicsshape.cpp:366 */
	virtual bool ClearTags(class CPhysicsShape *); /* linkage=_ZN13CPhysicsShape9ClearTagsEv */
	/* <cba86d> vphysics2/physicsshape.cpp:511 */
	virtual void GetTriangulation(const class CPhysicsShape  *, class CUtlVector<Vector, CUtlMemory<Vector, int> > *, class CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > *); /* linkage=_ZNK13CPhysicsShape16GetTriangulationEP10CUtlVectorI6Vector10CUtlMemoryIS1_iEEPS0_IjS2_IjiEE */
	virtual void GetTriangulationForNavmesh(const class CPhysicsShape  *, class CUtlVector<Vector, CUtlMemory<Vector, int> > *, class CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > *, const class AABB_t  &); /* linkage=_ZNK13CPhysicsShape26GetTriangulationForNavmeshEP10CUtlVectorI6Vector10CUtlMemoryIS1_iEEPS0_IjS2_IjiEERK6AABB_t */
	/* <cb5449> vphysics2/physicsshape.cpp:802 */
	virtual void GetOutline(const class CPhysicsShape  *, class CUtlVector<Vector, CUtlMemory<Vector, int> > *); /* linkage=_ZNK13CPhysicsShape10GetOutlineEP10CUtlVectorI6Vector10CUtlMemoryIS1_iEE */
	virtual const class CManagedHandle  * GetManagedHandle(const class CPhysicsShape  *); /* linkage=_ZNK13CPhysicsShape16GetManagedHandleEv */
	/* <cb4da9> vphysics2/physicsshape.cpp:193 */
	virtual void SetTrigger(class CPhysicsShape *, bool); /* linkage=_ZN13CPhysicsShape10SetTriggerEb */
	virtual bool IsTrigger(const class CPhysicsShape  *); /* linkage=_ZNK13CPhysicsShape9IsTriggerEv */
	virtual void SetIgnoreTraces(class CPhysicsShape *, bool); /* linkage=_ZN13CPhysicsShape15SetIgnoreTracesEb */
	/* <cb409c> vphysics2/physicsshape.cpp:217 */
	virtual void SetHasNoMass(class CPhysicsShape *, bool); /* linkage=_ZN13CPhysicsShape12SetHasNoMassEb */
	/* <cb50bd> vphysics2/physicsshape.cpp:379 */
	virtual void UpdateBoxShape(class CPhysicsShape *, const class Vector  &, const class Quaternion  &, const class Vector  &); /* linkage=_ZN13CPhysicsShape14UpdateBoxShapeERK6VectorRK10QuaternionS2_ */
	virtual void SetFriction(class CPhysicsShape *, float); /* linkage=_ZN13CPhysicsShape11SetFrictionEf */
	virtual float GetFriction(class CPhysicsShape *); /* linkage=_ZN13CPhysicsShape11GetFrictionEv */
	virtual void SetElasticity(class CPhysicsShape *, float); /* linkage=_ZN13CPhysicsShape13SetElasticityEf */
	virtual void SetRollingResistance(class CPhysicsShape *, float); /* linkage=_ZN13CPhysicsShape20SetRollingResistanceEf */
	virtual void SetLocalVelocity(class CPhysicsShape *, const class Vector  &); /* linkage=_ZN13CPhysicsShape16SetLocalVelocityERK6Vector */
	virtual class Vector GetLocalVelocity(class CPhysicsShape *); /* linkage=_ZN13CPhysicsShape16GetLocalVelocityEv */
	/* <cb4354> vphysics2/physicsshape.cpp:1061 */
	virtual bool IsTouching(const class CPhysicsShape  *, class IPhysicsShape *, bool); /* linkage=_ZNK13CPhysicsShape10IsTouchingEP13IPhysicsShapeb */
	virtual void ResetProxy(class CPhysicsShape *); /* linkage=_ZN13CPhysicsShape10ResetProxyEv */
};

// <00B99999> vphysics2/physicsshape.h:17
void CPhysicsShape::CPhysicsShape(b3ShapeId id)
{
} /* size: 0 */

// <00B0B2B2> vphysics2/physicsshape.h:117
CPhysicsShape* AsShape(b3ShapeId)
{
} /* size: 0 */

