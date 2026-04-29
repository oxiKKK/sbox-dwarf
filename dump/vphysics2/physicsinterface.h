
//
// vphysics2/physicsinterface.h
//
//	referenced by: libengine2.so
//
//	functions: 3
//	class: 1
//

// <009E13BB> vphysics2/physicsinterface.h:10
// function calls: 21
void CPhysicsSystem::~CPhysicsSystem()
{
	CBaseIntrospectedToKV3TypeManager::~CBaseIntrospectedToKV3TypeManager(); // 113
	CTypesafeIntrospectedToKV3TypeManager<495958126710, VPhysXAggregateData_t>::~CTypesafeIntrospectedToKV3TypeManager(); // 51
	CPhysicsDataTypeManager::~CPhysicsDataTypeManager(); // 10
	CUtlVectorBase<CPhysicsWorld::RemoveAll(); // 1798
	CUtlMemory<CPhysicsWorld::IsExternallyAllocated(); // 905
	CUtlMemory<CPhysicsWorld::Purge(); // 903
	CUtlMemory<CPhysicsWorld::Purge(); // 1799
	CUtlVectorBase<CPhysicsWorld::Purge(); // 560
	ValidateAlignment<CPhysicsWorld*>(void); // 508
	CUtlMemory<CPhysicsWorld::Purge(); // 510
	CUtlMemory<CPhysicsWorld::~CUtlMemory(); // 562
	CUtlVectorBase<CPhysicsWorld::~CUtlVectorBase(); // 410
	CUtlVector<CPhysicsWorld::~CUtlVector(); // 10
	CUtlMemory<ResourceManifestDesc_t::IsExternallyAllocated(); // 905
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 903
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 1799
	CUtlVectorBase<ResourceManifestDesc_t::RemoveAll(); // 1798
	CUtlVectorBase<ResourceManifestDesc_t::Purge(); // 560
	CUtlVectorBase<ResourceManifestDesc_t::~CUtlVectorBase(); // 410
	CUtlVector<ResourceManifestDesc_t::~CUtlVector(); // 42
	CTier2AppSystem<IPhysicsSystem, 0>::~CTier2AppSystem(); // 10
} /* size: 118, inline expansions: 21 (314 bytes) */

// <009E0E08> vphysics2/physicsinterface.h:10
// function calls: 29
void CPhysicsSystem::~CPhysicsSystem()
{
	CBaseIntrospectedToKV3TypeManager::~CBaseIntrospectedToKV3TypeManager(); // 113
	CTypesafeIntrospectedToKV3TypeManager<495958126710, VPhysXAggregateData_t>::~CTypesafeIntrospectedToKV3TypeManager(); // 51
	CPhysicsDataTypeManager::~CPhysicsDataTypeManager(); // 10
	CUtlVectorBase<CPhysicsWorld::RemoveAll(); // 1798
	CUtlMemory<CPhysicsWorld::IsExternallyAllocated(); // 905
	CUtlMemory<CPhysicsWorld::Purge(); // 903
	CUtlMemory<CPhysicsWorld::Purge(); // 1799
	CUtlVectorBase<CPhysicsWorld::Purge(); // 560
	ValidateAlignment<CPhysicsWorld*>(void); // 508
	CUtlMemory<CPhysicsWorld::Purge(); // 510
	CUtlMemory<CPhysicsWorld::~CUtlMemory(); // 562
	CUtlVectorBase<CPhysicsWorld::~CUtlVectorBase(); // 410
	CUtlVector<CPhysicsWorld::~CUtlVector(); // 10
	CUtlMemory<ResourceManifestDesc_t::IsExternallyAllocated(); // 905
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 903
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 1799
	CUtlVectorBase<ResourceManifestDesc_t::RemoveAll(); // 1798
	CUtlVectorBase<ResourceManifestDesc_t::Purge(); // 560
	ValidateAlignment<ResourceManifestDesc_t*>(void); // 508
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 510
	CUtlMemory<ResourceManifestDesc_t::~CUtlMemory(); // 562
	CUtlVectorBase<ResourceManifestDesc_t::~CUtlVectorBase(); // 410
	CUtlVector<ResourceManifestDesc_t::~CUtlVector(); // 42
	IPhysicsSystem::~IPhysicsSystem(); // 120
	CBaseAppSystem<IPhysicsSystem>::~CBaseAppSystem(); // 171
	CTier0AppSystem<IPhysicsSystem, 0>::~CTier0AppSystem(); // 225
	CTier1AppSystem<IPhysicsSystem, 0>::~CTier1AppSystem(); // 42
	CTier2AppSystem<IPhysicsSystem, 0>::~CTier2AppSystem(); // 10
	CPhysicsSystem::~CPhysicsSystem(); // 10
} /* size: 124, inline expansions: 29 (398 bytes) */

// <009E0DEC> vphysics2/physicsinterface.h:10
inline void CPhysicsSystem::~CPhysicsSystem()
{
} /* size: 0 */

// <009834AC> vphysics2/physicsinterface.h:10
// member functions: 72
// member variables: 5
// vtable entries: 30
// class size: 192
class CPhysicsSystem : public CTier2AppSystem<IPhysicsSystem, 0> {
public:
	/* class CTier2AppSystem<IPhysicsSystem, 0> <ancestor>; */ /* 0 48 */
	void CPhysicsSystem(CPhysicsSystem* , CPhysicsSystem& );
	void CPhysicsSystem(CPhysicsSystem* , const CPhysicsSystem& );
	/* vphysics2/physicsinterface.cpp:27 */
	void CPhysicsSystem(CPhysicsSystem* );
	/* vphysics2/physicsinterface.cpp:38 */
	virtual const AppSystemInfo_t* GetDependencies(CPhysicsSystem* );
	/* vphysics2/physicsinterface.cpp:115 */
	virtual InitReturnVal_t Init(CPhysicsSystem* );
	/* vphysics2/physicsinterface.cpp:136 */
	virtual void PreShutdown(CPhysicsSystem* );
	/* vphysics2/physicsinterface.cpp:141 */
	virtual void Shutdown(CPhysicsSystem* );
	/* vphysics2/physicsinterface.cpp:154 */
	virtual IPhysicsWorld* CreateWorld(CPhysicsSystem* );
	/* vphysics2/physicsinterface.cpp:161 */
	virtual void DestroyWorld(CPhysicsSystem* , IPhysicsWorld* );
	/* vphysics2/physicsinterface.cpp:168 */
	virtual int NumWorlds(CPhysicsSystem* );
	/* vphysics2/physicsinterface.cpp:173 */
	virtual IPhysicsWorld* GetWorld(CPhysicsSystem* , int);
	/* vphysics2/physicsinterface.cpp:178 */
	virtual const IPhysSurfacePropertyController* GetSurfacePropertyController(const CPhysicsSystem* );
	/* vphysics2/physicsinterface.cpp:719 */
	virtual void CastShapeAgainstShape(const CPhysicsSystem* , PhysicsTrace_t& , const Vector& , const Vector& , const Vector* , int, float, const Vector* , int, float);
	/* vphysics2/physicsinterface.cpp:288 */
	virtual RnHull_t* HullCreateBox(CPhysicsSystem* , const Vector& , const Vector& , RnHull_t* );
	/* vphysics2/physicsinterface.cpp:518 */
	virtual RnHull_t* HullCreate(CPhysicsSystem* , int, const Vector* , RnHull_t* , RnHullSimplificationParams_t* );
	/* vphysics2/physicsinterface.cpp:534 */
	virtual void HullDestroy(CPhysicsSystem* , RnHull_t* );
	/* vphysics2/physicsinterface.cpp:542 */
	virtual void HullClone(CPhysicsSystem* , RnHull_t* , const RnHull_t& );
	/* vphysics2/physicsinterface.cpp:567 */
	virtual RnMesh_t* MeshCreate(CPhysicsSystem* , int, const uint* , const uint8* , int, const Vector* , RnMesh_t* , float);
	/* vphysics2/physicsinterface.cpp:559 */
	virtual void MeshDestroy(CPhysicsSystem* , RnMesh_t* );
	/* vphysics2/physicsinterface.cpp:612 */
	virtual void MeshClone(CPhysicsSystem* , RnMesh_t* , const RnMesh_t& );
	/* vphysics2/physicsinterface.cpp:183 */
	virtual void AddDataReference(CPhysicsSystem* , CPhysAggregateData* );
	/* vphysics2/physicsinterface.cpp:188 */
	virtual void ReleaseDataReference(CPhysicsSystem* , CPhysAggregateData* );
	/* vphysics2/physicsinterface.cpp:193 */
	virtual CPhysAggregateDataHandle CreateAggregateDataFromDiskData(CPhysicsSystem* , VPhysXAggregateData_t* );
	/* vphysics2/physicsinterface.cpp:233 */
	virtual CPhysAggregateDataHandle CreateAggregateDataFromEmbeddedDiskData(CPhysicsSystem* , const EmbeddedPhysicsInfo_t& );
	/* vphysics2/physicsinterface.cpp:248 */
	virtual void StepSimulation(CPhysicsSystem* , IPhysicsWorld** , int, float, int);
	/* vphysics2/physicsinterface.cpp:622 */
	virtual RnMassProperties_t ComputeMass(CPhysicsSystem* , const RnSphere_t* , const RnMaterial_t& );
	/* vphysics2/physicsinterface.cpp:654 */
	virtual RnMassProperties_t ComputeMass(CPhysicsSystem* , const RnCapsule_t* , const RnMaterial_t& );
	/* vphysics2/physicsinterface.cpp:704 */
	virtual RnMassProperties_t ComputeMass(CPhysicsSystem* , int, const Vector* , const RnMaterial_t& );
	/* vphysics2/physicsinterface.cpp:1119 */
	virtual bool CreateDebugSceneObject(CPhysicsSystem* , const DebugSceneObjectParams_t& , SceneObjectBuffers_t* );
	/* vphysics2/physicsinterface.cpp:1336 */
	virtual void DestroyDebugSceneObject(CPhysicsSystem* , CSceneAnimatableObject* );
	/* vphysics2/physicsinterface.cpp:1353 */
	virtual IPhysIntersectionController* CreateIntersectionController(CPhysicsSystem* );
	/* vphysics2/physicsinterface.cpp:257 */
	RnMaterial_t CreatePhysicsMaterial(CPhysicsSystem* , const CPhysSurfaceProperties* );
	/* vphysics2/physicsinterface.cpp:275 */
	bool GetPhysicsMaterial(CPhysicsSystem* , CUtlStringToken, RnMaterial_t& );
	/* vphysics2/physicsinterface.cpp:739 */
	virtual bool CastHeightField(CPhysicsSystem* , Vector& , const Vector& , const Vector& , uint16_t* , int, int, float, float);
	/* vphysics2/physicsinterface.cpp:779 */
	virtual void UpdateSurfaceProperties(CPhysicsSystem* , const CPhysSurfaceProperties* );
private:
	CUtlVector<CPhysicsWorld*, CUtlMemory<CPhysicsWorld*, int> > m_Worlds; /* 48 32 */
	CPhysicsDataTypeManager m_typeManagerPhysData; /* 80 0 */
	CPhysicsSurfacePropertyManager m_SurfacePropertyManager; /* 112 0 */
	bool m_bPhysDataTypeManagerInstalled; /* 184 1 */
	virtual void ~CPhysicsSystem(CPhysicsSystem* );
	void CPhysicsSystem(class CPhysicsSystem *, class CPhysicsSystem &); /* linkage=_ZN14CPhysicsSystemC4EOS_ */
	void CPhysicsSystem(class CPhysicsSystem *, const class CPhysicsSystem  &); /* linkage=_ZN14CPhysicsSystemC4ERKS_ */
	void CPhysicsSystem(class CPhysicsSystem *); /* linkage=_ZN14CPhysicsSystemC4Ev */
	virtual const class AppSystemInfo_t  * GetDependencies(class CPhysicsSystem *); /* linkage=_ZN14CPhysicsSystem15GetDependenciesEv */
	virtual enum InitReturnVal_t Init(class CPhysicsSystem *); /* linkage=_ZN14CPhysicsSystem4InitEv */
	virtual void PreShutdown(class CPhysicsSystem *); /* linkage=_ZN14CPhysicsSystem11PreShutdownEv */
	virtual void Shutdown(class CPhysicsSystem *); /* linkage=_ZN14CPhysicsSystem8ShutdownEv */
	virtual class IPhysicsWorld * CreateWorld(class CPhysicsSystem *); /* linkage=_ZN14CPhysicsSystem11CreateWorldEv */
	virtual void DestroyWorld(class CPhysicsSystem *, class IPhysicsWorld *); /* linkage=_ZN14CPhysicsSystem12DestroyWorldEP13IPhysicsWorld */
	virtual int NumWorlds(class CPhysicsSystem *); /* linkage=_ZN14CPhysicsSystem9NumWorldsEv */
	virtual class IPhysicsWorld * GetWorld(class CPhysicsSystem *, int); /* linkage=_ZN14CPhysicsSystem8GetWorldEi */
	/* <a1b783> vphysics2/physicsinterface.cpp:178 */
	virtual const class IPhysSurfacePropertyController  * GetSurfacePropertyController(const class CPhysicsSystem  *); /* linkage=_ZNK14CPhysicsSystem28GetSurfacePropertyControllerEv */
	virtual void CastShapeAgainstShape(const class CPhysicsSystem  *, class PhysicsTrace_t &, const class Vector  &, const class Vector  &, const class Vector  *, int, float, const class Vector  *, int, float); /* linkage=_ZNK14CPhysicsSystem21CastShapeAgainstShapeER14PhysicsTrace_tRK6VectorS4_PS3_ifS5_if */
	virtual class RnHull_t * HullCreateBox(class CPhysicsSystem *, const class Vector  &, const class Vector  &, class RnHull_t *); /* linkage=_ZN14CPhysicsSystem13HullCreateBoxERK6VectorS2_P8RnHull_t */
	virtual class RnHull_t * HullCreate(class CPhysicsSystem *, int, const class Vector  *, class RnHull_t *, class RnHullSimplificationParams_t *); /* linkage=_ZN14CPhysicsSystem10HullCreateEiPK6VectorP8RnHull_tP28RnHullSimplificationParams_t */
	/* <a1f2e5> vphysics2/physicsinterface.cpp:534 */
	virtual void HullDestroy(class CPhysicsSystem *, class RnHull_t *); /* linkage=_ZN14CPhysicsSystem11HullDestroyEP8RnHull_t */
	virtual void HullClone(class CPhysicsSystem *, class RnHull_t *, const class RnHull_t  &); /* linkage=_ZN14CPhysicsSystem9HullCloneEP8RnHull_tRKS0_ */
	virtual class RnMesh_t * MeshCreate(class CPhysicsSystem *, int, const uint  *, const uint8  *, int, const class Vector  *, class RnMesh_t *, float); /* linkage=_ZN14CPhysicsSystem10MeshCreateEiPKjPKhiPK6VectorP8RnMesh_tf */
	/* <a1fcd9> vphysics2/physicsinterface.cpp:559 */
	virtual void MeshDestroy(class CPhysicsSystem *, class RnMesh_t *); /* linkage=_ZN14CPhysicsSystem11MeshDestroyEP8RnMesh_t */
	virtual void MeshClone(class CPhysicsSystem *, class RnMesh_t *, const class RnMesh_t  &); /* linkage=_ZN14CPhysicsSystem9MeshCloneEP8RnMesh_tRKS0_ */
	/* <a1b898> vphysics2/physicsinterface.cpp:183 */
	virtual void AddDataReference(class CPhysicsSystem *, class CPhysAggregateData *); /* linkage=_ZN14CPhysicsSystem16AddDataReferenceEP18CPhysAggregateData */
	/* <a1b8ec> vphysics2/physicsinterface.cpp:188 */
	virtual void ReleaseDataReference(class CPhysicsSystem *, class CPhysAggregateData *); /* linkage=_ZN14CPhysicsSystem20ReleaseDataReferenceEP18CPhysAggregateData */
	virtual class CPhysAggregateDataHandle CreateAggregateDataFromDiskData(class CPhysicsSystem *, class VPhysXAggregateData_t *); /* linkage=_ZN14CPhysicsSystem31CreateAggregateDataFromDiskDataEP21VPhysXAggregateData_t */
	virtual class CPhysAggregateDataHandle CreateAggregateDataFromEmbeddedDiskData(class CPhysicsSystem *, const class EmbeddedPhysicsInfo_t  &); /* linkage=_ZN14CPhysicsSystem39CreateAggregateDataFromEmbeddedDiskDataERK21EmbeddedPhysicsInfo_t */
	virtual void StepSimulation(class CPhysicsSystem *, class IPhysicsWorld * *, int, float, int); /* linkage=_ZN14CPhysicsSystem14StepSimulationEPP13IPhysicsWorldifi */
	virtual class RnMassProperties_t ComputeMass(class CPhysicsSystem *, const class RnSphere_t  *, const class RnMaterial_t  &); /* linkage=_ZN14CPhysicsSystem11ComputeMassEPK10RnSphere_tRK12RnMaterial_t */
	virtual class RnMassProperties_t ComputeMass(class CPhysicsSystem *, const class RnCapsule_t  *, const class RnMaterial_t  &); /* linkage=_ZN14CPhysicsSystem11ComputeMassEPK11RnCapsule_tRK12RnMaterial_t */
	virtual class RnMassProperties_t ComputeMass(class CPhysicsSystem *, int, const class Vector  *, const class RnMaterial_t  &); /* linkage=_ZN14CPhysicsSystem11ComputeMassEiPK6VectorRK12RnMaterial_t */
	virtual bool CreateDebugSceneObject(class CPhysicsSystem *, const class DebugSceneObjectParams_t  &, class SceneObjectBuffers_t *); /* linkage=_ZN14CPhysicsSystem22CreateDebugSceneObjectERK24DebugSceneObjectParams_tP20SceneObjectBuffers_t */
	virtual void DestroyDebugSceneObject(class CPhysicsSystem *, class CSceneAnimatableObject *); /* linkage=_ZN14CPhysicsSystem23DestroyDebugSceneObjectEP22CSceneAnimatableObject */
	virtual class IPhysIntersectionController * CreateIntersectionController(class CPhysicsSystem *); /* linkage=_ZN14CPhysicsSystem28CreateIntersectionControllerEv */
	/* <a21755> vphysics2/physicsinterface.cpp:257 */
	class RnMaterial_t CreatePhysicsMaterial(class CPhysicsSystem *, const class CPhysSurfaceProperties  *); /* linkage=_ZN14CPhysicsSystem21CreatePhysicsMaterialEPK22CPhysSurfaceProperties */
	bool GetPhysicsMaterial(class CPhysicsSystem *, class CUtlStringToken, class RnMaterial_t &); /* linkage=_ZN14CPhysicsSystem18GetPhysicsMaterialE15CUtlStringTokenR12RnMaterial_t */
	virtual bool CastHeightField(class CPhysicsSystem *, class Vector &, const class Vector  &, const class Vector  &, uint16_t *, int, int, float, float); /* linkage=_ZN14CPhysicsSystem15CastHeightFieldER6VectorRKS0_S3_Ptiiff */
	virtual void UpdateSurfaceProperties(class CPhysicsSystem *, const class CPhysSurfaceProperties  *); /* linkage=_ZN14CPhysicsSystem23UpdateSurfacePropertiesEPK22CPhysSurfaceProperties */
	virtual void ~CPhysicsSystem(class CPhysicsSystem *); /* linkage=_ZN14CPhysicsSystemD4Ev */
};

