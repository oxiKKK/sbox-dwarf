
//
// public/vphysics2/iphysicsshape.h
//
//	referenced by: libengine2.so
//
//	functions: 4
//	class: 1
//

// <00CB2257> ../public/vphysics2/iphysicsshape.h:17
void IPhysicsShape::IPhysicsShape()
{
} /* size: 0 */

// <00CB223A> ../public/vphysics2/iphysicsshape.h:17
inline void IPhysicsShape::IPhysicsShape()
{
} /* size: 0 */

// <00B92381> ../public/vphysics2/iphysicsshape.h:17
// member functions: 94
// member variable: 1
// vtable entries: 44
// class size: 8
class IPhysicsShape {
	void IPhysicsShape(IPhysicsShape* , const IPhysicsShape& );
	void IPhysicsShape(IPhysicsShape* );
	int ()(void) * * _vptr.IPhysicsShape; /* 0 8 */
	/* ../public/vphysics2/iphysicsshape.h:20 */
	virtual void ~IPhysicsShape(IPhysicsShape* );
	/* ../public/vphysics2/iphysicsshape.h:22 */
	virtual IPhysicsBody* GetBody(const IPhysicsShape* );
	/* ../public/vphysics2/iphysicsshape.h:24 */
	virtual PhysicsShapeType_t GetType(const IPhysicsShape* );
	/* ../public/vphysics2/iphysicsshape.h:25 */
	virtual RnSphere_t AsSphere(const IPhysicsShape* );
	/* ../public/vphysics2/iphysicsshape.h:26 */
	virtual RnCapsule_t AsCapsule(const IPhysicsShape* );
	/* ../public/vphysics2/iphysicsshape.h:28 */
	virtual void SetMaterial(IPhysicsShape* , const RnMaterial_t& );
	/* ../public/vphysics2/iphysicsshape.h:29 */
	virtual void SetSurfaceIndex(IPhysicsShape* , int, int);
	/* ../public/vphysics2/iphysicsshape.h:30 */
	virtual bool SetMaterialIndex(IPhysicsShape* , CUtlStringToken);
	/* ../public/vphysics2/iphysicsshape.h:31 */
	virtual int GetSurfaceIndex(const IPhysicsShape* );
	/* ../public/vphysics2/iphysicsshape.h:32 */
	virtual const RnMaterial_t& GetMaterial(const IPhysicsShape* );
	/* ../public/vphysics2/iphysicsshape.h:34 */
	virtual void SetCollisionAttributes(IPhysicsShape* , const RnCollisionAttr_t& );
	/* ../public/vphysics2/iphysicsshape.h:35 */
	virtual const RnCollisionAttr_t& GetCollisionAttributes(const IPhysicsShape* );
	/* ../public/vphysics2/iphysicsshape.h:37 */
	virtual void AddCollisionFunctionMask(IPhysicsShape* , uint8);
	/* ../public/vphysics2/iphysicsshape.h:38 */
	virtual void RemoveCollisionFunctionMask(IPhysicsShape* , uint8);
	/* ../public/vphysics2/iphysicsshape.h:40 */
	virtual AABB_t BuildBounds(const IPhysicsShape* );
	/* ../public/vphysics2/iphysicsshape.h:41 */
	virtual AABB_t BuildBounds(const IPhysicsShape* , const matrix3x4_t& );
	/* ../public/vphysics2/iphysicsshape.h:42 */
	virtual void ComputeMass(const IPhysicsShape* , float& , Vector& );
	/* ../public/vphysics2/iphysicsshape.h:44 */
	virtual void SetDebugName(IPhysicsShape* , const char* );
	/* ../public/vphysics2/iphysicsshape.h:45 */
	virtual const char* GetDebugName(const IPhysicsShape* );
	/* ../public/vphysics2/iphysicsshape.h:47 */
	virtual const CManagedHandle* GetManagedHandle(const IPhysicsShape* );
	/* ../public/vphysics2/iphysicsshape.h:48 */
	virtual void UpdateMeshShape(IPhysicsShape* , int, const Vector* , int, const uint32* );
	/* ../public/vphysics2/iphysicsshape.h:49 */
	virtual void UpdateHeightShape(IPhysicsShape* , uint16_t* , uint8_t* , int, int, int, int, float, float);
	/* ../public/vphysics2/iphysicsshape.h:50 */
	virtual void UpdateSphereShape(IPhysicsShape* , const Vector& , float);
	/* ../public/vphysics2/iphysicsshape.h:51 */
	virtual void UpdateCapsuleShape(IPhysicsShape* , const Vector& , const Vector& , float);
	/* ../public/vphysics2/iphysicsshape.h:52 */
	virtual void UpdateHullShape(IPhysicsShape* , const Vector& , const Quaternion& , int, const Vector* );
	/* ../public/vphysics2/iphysicsshape.h:54 */
	virtual bool HasTag(IPhysicsShape* , uint);
	/* ../public/vphysics2/iphysicsshape.h:55 */
	virtual bool AddTag(IPhysicsShape* , uint);
	/* ../public/vphysics2/iphysicsshape.h:56 */
	virtual bool RemoveTag(IPhysicsShape* , uint);
	/* ../public/vphysics2/iphysicsshape.h:57 */
	virtual bool ClearTags(IPhysicsShape* );
	/* ../public/vphysics2/iphysicsshape.h:59 */
	virtual void GetTriangulation(const IPhysicsShape* , CUtlVector<Vector, CUtlMemory<Vector, int> >* , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >* );
	/* ../public/vphysics2/iphysicsshape.h:60 */
	virtual void GetTriangulationForNavmesh(const IPhysicsShape* , CUtlVector<Vector, CUtlMemory<Vector, int> >* , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >* , const AABB_t& );
	/* ../public/vphysics2/iphysicsshape.h:61 */
	virtual void GetOutline(const IPhysicsShape* , CUtlVector<Vector, CUtlMemory<Vector, int> >* );
	/* ../public/vphysics2/iphysicsshape.h:63 */
	virtual void SetTrigger(IPhysicsShape* , bool);
	/* ../public/vphysics2/iphysicsshape.h:64 */
	virtual bool IsTrigger(const IPhysicsShape* );
	/* ../public/vphysics2/iphysicsshape.h:66 */
	virtual void SetIgnoreTraces(IPhysicsShape* , bool);
	/* ../public/vphysics2/iphysicsshape.h:67 */
	virtual void SetHasNoMass(IPhysicsShape* , bool);
	/* ../public/vphysics2/iphysicsshape.h:69 */
	virtual void UpdateBoxShape(IPhysicsShape* , const Vector& , const Quaternion& , const Vector& );
	/* ../public/vphysics2/iphysicsshape.h:71 */
	virtual void SetFriction(IPhysicsShape* , float);
	/* ../public/vphysics2/iphysicsshape.h:72 */
	virtual float GetFriction(IPhysicsShape* );
	/* ../public/vphysics2/iphysicsshape.h:74 */
	virtual void SetElasticity(IPhysicsShape* , float);
	/* ../public/vphysics2/iphysicsshape.h:75 */
	virtual void SetRollingResistance(IPhysicsShape* , float);
	/* ../public/vphysics2/iphysicsshape.h:77 */
	virtual void SetLocalVelocity(IPhysicsShape* , const Vector& );
	/* ../public/vphysics2/iphysicsshape.h:78 */
	virtual Vector GetLocalVelocity(IPhysicsShape* );
	/* ../public/vphysics2/iphysicsshape.h:80 */
	virtual bool IsTouching(const IPhysicsShape* , IPhysicsShape* , bool);
	/* ../public/vphysics2/iphysicsshape.h:82 */
	virtual void ResetProxy(IPhysicsShape* );
	void IPhysicsShape(class IPhysicsShape *, const class IPhysicsShape  &); /* linkage=_ZN13IPhysicsShapeC4ERKS_ */
	void IPhysicsShape(class IPhysicsShape *); /* linkage=_ZN13IPhysicsShapeC4Ev */
	virtual void ~IPhysicsShape(class IPhysicsShape *); /* linkage=_ZN13IPhysicsShapeD4Ev */
	virtual class IPhysicsBody * GetBody(const class IPhysicsShape  *); /* linkage=_ZNK13IPhysicsShape7GetBodyEv */
	virtual enum PhysicsShapeType_t GetType(const class IPhysicsShape  *); /* linkage=_ZNK13IPhysicsShape7GetTypeEv */
	virtual class RnSphere_t AsSphere(const class IPhysicsShape  *); /* linkage=_ZNK13IPhysicsShape8AsSphereEv */
	virtual class RnCapsule_t AsCapsule(const class IPhysicsShape  *); /* linkage=_ZNK13IPhysicsShape9AsCapsuleEv */
	virtual void SetMaterial(class IPhysicsShape *, const class RnMaterial_t  &); /* linkage=_ZN13IPhysicsShape11SetMaterialERK12RnMaterial_t */
	virtual void SetSurfaceIndex(class IPhysicsShape *, int, int); /* linkage=_ZN13IPhysicsShape15SetSurfaceIndexEii */
	virtual bool SetMaterialIndex(class IPhysicsShape *, class CUtlStringToken); /* linkage=_ZN13IPhysicsShape16SetMaterialIndexE15CUtlStringToken */
	virtual int GetSurfaceIndex(const class IPhysicsShape  *); /* linkage=_ZNK13IPhysicsShape15GetSurfaceIndexEv */
	virtual const class RnMaterial_t  & GetMaterial(const class IPhysicsShape  *); /* linkage=_ZNK13IPhysicsShape11GetMaterialEv */
	virtual void SetCollisionAttributes(class IPhysicsShape *, const class RnCollisionAttr_t  &); /* linkage=_ZN13IPhysicsShape22SetCollisionAttributesERK17RnCollisionAttr_t */
	virtual const class RnCollisionAttr_t  & GetCollisionAttributes(const class IPhysicsShape  *); /* linkage=_ZNK13IPhysicsShape22GetCollisionAttributesEv */
	virtual void AddCollisionFunctionMask(class IPhysicsShape *, uint8); /* linkage=_ZN13IPhysicsShape24AddCollisionFunctionMaskEh */
	virtual void RemoveCollisionFunctionMask(class IPhysicsShape *, uint8); /* linkage=_ZN13IPhysicsShape27RemoveCollisionFunctionMaskEh */
	virtual class AABB_t BuildBounds(const class IPhysicsShape  *); /* linkage=_ZNK13IPhysicsShape11BuildBoundsEv */
	virtual class AABB_t BuildBounds(const class IPhysicsShape  *, const class matrix3x4_t  &); /* linkage=_ZNK13IPhysicsShape11BuildBoundsERK11matrix3x4_t */
	virtual void ComputeMass(const class IPhysicsShape  *, float &, class Vector &); /* linkage=_ZNK13IPhysicsShape11ComputeMassERfR6Vector */
	virtual void SetDebugName(class IPhysicsShape *, const char  *); /* linkage=_ZN13IPhysicsShape12SetDebugNameEPKc */
	virtual const char  * GetDebugName(const class IPhysicsShape  *); /* linkage=_ZNK13IPhysicsShape12GetDebugNameEv */
	virtual const class CManagedHandle  * GetManagedHandle(const class IPhysicsShape  *); /* linkage=_ZNK13IPhysicsShape16GetManagedHandleEv */
	virtual void UpdateMeshShape(class IPhysicsShape *, int, const class Vector  *, int, const uint32  *); /* linkage=_ZN13IPhysicsShape15UpdateMeshShapeEiPK6VectoriPKj */
	virtual void UpdateHeightShape(class IPhysicsShape *, uint16_t *, uint8_t *, int, int, int, int, float, float); /* linkage=_ZN13IPhysicsShape17UpdateHeightShapeEPtPhiiiiff */
	virtual void UpdateSphereShape(class IPhysicsShape *, const class Vector  &, float); /* linkage=_ZN13IPhysicsShape17UpdateSphereShapeERK6Vectorf */
	virtual void UpdateCapsuleShape(class IPhysicsShape *, const class Vector  &, const class Vector  &, float); /* linkage=_ZN13IPhysicsShape18UpdateCapsuleShapeERK6VectorS2_f */
	virtual void UpdateHullShape(class IPhysicsShape *, const class Vector  &, const class Quaternion  &, int, const class Vector  *); /* linkage=_ZN13IPhysicsShape15UpdateHullShapeERK6VectorRK10QuaternioniPS1_ */
	virtual bool HasTag(class IPhysicsShape *, uint); /* linkage=_ZN13IPhysicsShape6HasTagEj */
	virtual bool AddTag(class IPhysicsShape *, uint); /* linkage=_ZN13IPhysicsShape6AddTagEj */
	virtual bool RemoveTag(class IPhysicsShape *, uint); /* linkage=_ZN13IPhysicsShape9RemoveTagEj */
	virtual bool ClearTags(class IPhysicsShape *); /* linkage=_ZN13IPhysicsShape9ClearTagsEv */
	virtual void GetTriangulation(const class IPhysicsShape  *, class CUtlVector<Vector, CUtlMemory<Vector, int> > *, class CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > *); /* linkage=_ZNK13IPhysicsShape16GetTriangulationEP10CUtlVectorI6Vector10CUtlMemoryIS1_iEEPS0_IjS2_IjiEE */
	virtual void GetTriangulationForNavmesh(const class IPhysicsShape  *, class CUtlVector<Vector, CUtlMemory<Vector, int> > *, class CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > *, const class AABB_t  &); /* linkage=_ZNK13IPhysicsShape26GetTriangulationForNavmeshEP10CUtlVectorI6Vector10CUtlMemoryIS1_iEEPS0_IjS2_IjiEERK6AABB_t */
	virtual void GetOutline(const class IPhysicsShape  *, class CUtlVector<Vector, CUtlMemory<Vector, int> > *); /* linkage=_ZNK13IPhysicsShape10GetOutlineEP10CUtlVectorI6Vector10CUtlMemoryIS1_iEE */
	virtual void SetTrigger(class IPhysicsShape *, bool); /* linkage=_ZN13IPhysicsShape10SetTriggerEb */
	virtual bool IsTrigger(const class IPhysicsShape  *); /* linkage=_ZNK13IPhysicsShape9IsTriggerEv */
	virtual void SetIgnoreTraces(class IPhysicsShape *, bool); /* linkage=_ZN13IPhysicsShape15SetIgnoreTracesEb */
	virtual void SetHasNoMass(class IPhysicsShape *, bool); /* linkage=_ZN13IPhysicsShape12SetHasNoMassEb */
	virtual void UpdateBoxShape(class IPhysicsShape *, const class Vector  &, const class Quaternion  &, const class Vector  &); /* linkage=_ZN13IPhysicsShape14UpdateBoxShapeERK6VectorRK10QuaternionS2_ */
	virtual void SetFriction(class IPhysicsShape *, float); /* linkage=_ZN13IPhysicsShape11SetFrictionEf */
	virtual float GetFriction(class IPhysicsShape *); /* linkage=_ZN13IPhysicsShape11GetFrictionEv */
	virtual void SetElasticity(class IPhysicsShape *, float); /* linkage=_ZN13IPhysicsShape13SetElasticityEf */
	virtual void SetRollingResistance(class IPhysicsShape *, float); /* linkage=_ZN13IPhysicsShape20SetRollingResistanceEf */
	virtual void SetLocalVelocity(class IPhysicsShape *, const class Vector  &); /* linkage=_ZN13IPhysicsShape16SetLocalVelocityERK6Vector */
	virtual class Vector GetLocalVelocity(class IPhysicsShape *); /* linkage=_ZN13IPhysicsShape16GetLocalVelocityEv */
	virtual bool IsTouching(const class IPhysicsShape  *, class IPhysicsShape *, bool); /* linkage=_ZNK13IPhysicsShape10IsTouchingEPS_b */
	virtual void ResetProxy(class IPhysicsShape *); /* linkage=_ZN13IPhysicsShape10ResetProxyEv */
};

// <00CB2223> ../public/vphysics2/iphysicsshape.h:20
void IPhysicsShape::~IPhysicsShape()
{
} /* size: 0 */

// <00CB21F3> ../public/vphysics2/iphysicsshape.h:20
inline void IPhysicsShape::~IPhysicsShape()
{
} /* size: 0 */

