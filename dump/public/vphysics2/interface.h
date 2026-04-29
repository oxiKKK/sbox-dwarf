
//
// public/vphysics2/interface.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 37
//	classes: 3
//	structs: 9
//

// <0096F6FA> ../public/vphysics2/interface.h:70
// member variables: 5
// struct size: 40
struct EmbeddedPhysicsInfo_t {
	ResourceHandle_t m_hRootResource; /* 0 8 */
	ResourceId_t m_RootResourceId; /* 8 8 */
	IRD_RegisterResourceDataUtils * m_pResourceRegisterUtils; /* 16 8 */
	const char * m_pModelName; /* 24 8 */
	CEmbeddedIntrospectedOrKV3BlockHelper<VPhysXAggregateData_t> * m_pBlockHandler; /* 32 8 */
};

// <0096F932> ../public/vphysics2/interface.h:90
// member functions: 24
// member variable: 1
// class size: 8
class CPhysAggregateDataHandle {
	/* ../public/vphysics2/interface.h:93 */
	void CPhysAggregateDataHandle(CPhysAggregateDataHandle* );
	/* ../public/vphysics2/interface.h:97 */
	void CPhysAggregateDataHandle(CPhysAggregateDataHandle* , const CPhysAggregateDataHandle& );
	/* ../public/vphysics2/interface.h:102 */
	void CPhysAggregateDataHandle(CPhysAggregateDataHandle* , CPhysAggregateDataHandle& );
	/* ../public/vphysics2/interface.h:108 */
	void CPhysAggregateDataHandle(CPhysAggregateDataHandle* , CPhysAggregateData* );
	/* ../public/vphysics2/interface.h:113 */
	void ~CPhysAggregateDataHandle(CPhysAggregateDataHandle* );
	/* ../public/vphysics2/interface.h:118 */
	void Set(CPhysAggregateDataHandle* , CPhysAggregateData* );
	/* ../public/vphysics2/interface.h:119 */
	void Clear(CPhysAggregateDataHandle* );
	/* ../public/vphysics2/interface.h:121 */
	CPhysAggregateData* Get(const CPhysAggregateDataHandle* );
	/* ../public/vphysics2/interface.h:126 */
	bool operator bool(const CPhysAggregateDataHandle* );
	/* ../public/vphysics2/interface.h:131 */
	bool IsValid(const CPhysAggregateDataHandle* );
	/* ../public/vphysics2/interface.h:136 */
	CPhysAggregateData* operator->(const CPhysAggregateDataHandle* );
	/* ../public/vphysics2/interface.h:141 */
	CPhysAggregateDataHandle& operator=(CPhysAggregateDataHandle* , const CPhysAggregateDataHandle& );
private:
	CPhysAggregateData * m_pData; /* 0 8 */
	void CPhysAggregateDataHandle(class CPhysAggregateDataHandle *); /* linkage=_ZN24CPhysAggregateDataHandleC4Ev */
	void CPhysAggregateDataHandle(class CPhysAggregateDataHandle *, const class CPhysAggregateDataHandle  &); /* linkage=_ZN24CPhysAggregateDataHandleC4ERKS_ */
	void CPhysAggregateDataHandle(class CPhysAggregateDataHandle *, class CPhysAggregateDataHandle &); /* linkage=_ZN24CPhysAggregateDataHandleC4EOS_ */
	void CPhysAggregateDataHandle(class CPhysAggregateDataHandle *, class CPhysAggregateData *); /* linkage=_ZN24CPhysAggregateDataHandleC4EP18CPhysAggregateData */
	void ~CPhysAggregateDataHandle(class CPhysAggregateDataHandle *); /* linkage=_ZN24CPhysAggregateDataHandleD4Ev */
	void Set(class CPhysAggregateDataHandle *, class CPhysAggregateData *); /* linkage=_ZN24CPhysAggregateDataHandle3SetEP18CPhysAggregateData */
	void Clear(class CPhysAggregateDataHandle *); /* linkage=_ZN24CPhysAggregateDataHandle5ClearEv */
	class CPhysAggregateData * Get(const class CPhysAggregateDataHandle  *); /* linkage=_ZNK24CPhysAggregateDataHandle3GetEv */
	bool operator bool(const class CPhysAggregateDataHandle  *); /* linkage=_ZNK24CPhysAggregateDataHandlecvbEv */
	bool IsValid(const class CPhysAggregateDataHandle  *); /* linkage=_ZNK24CPhysAggregateDataHandle7IsValidEv */
	class CPhysAggregateData * operator->(const class CPhysAggregateDataHandle  *); /* linkage=_ZNK24CPhysAggregateDataHandleptEv */
	class CPhysAggregateDataHandle & operator=(class CPhysAggregateDataHandle *, const class CPhysAggregateDataHandle  &); /* linkage=_ZN24CPhysAggregateDataHandleaSERKS_ */
};

// <064E0E3C> ../public/vphysics2/interface.h:93
void CPhysAggregateDataHandle::CPhysAggregateDataHandle()
{
} /* size: 0 */

// <064E0E23> ../public/vphysics2/interface.h:93
inline void CPhysAggregateDataHandle::CPhysAggregateDataHandle()
{
} /* size: 0 */

// <04AE3547> ../public/vphysics2/interface.h:97
void CPhysAggregateDataHandle::CPhysAggregateDataHandle(const CPhysAggregateDataHandle& rhs)
{
} /* size: 0 */

// <04AE3522> ../public/vphysics2/interface.h:97
inline void CPhysAggregateDataHandle::CPhysAggregateDataHandle(const CPhysAggregateDataHandle& rhs)
{
} /* size: 0 */

// <00A1870C> ../public/vphysics2/interface.h:102
void CPhysAggregateDataHandle::CPhysAggregateDataHandle(CPhysAggregateDataHandle& rhs)
{
} /* size: 0 */

// <00A186E7> ../public/vphysics2/interface.h:102
inline void CPhysAggregateDataHandle::CPhysAggregateDataHandle(CPhysAggregateDataHandle& rhs)
{
} /* size: 0 */

// <064E0E07> ../public/vphysics2/interface.h:108
void CPhysAggregateDataHandle::CPhysAggregateDataHandle(CPhysAggregateData* pData)
{
} /* size: 0 */

// <064E0DE2> ../public/vphysics2/interface.h:108
inline void CPhysAggregateDataHandle::CPhysAggregateDataHandle(CPhysAggregateData* pData)
{
} /* size: 0 */

// <04BDE35C> ../public/vphysics2/interface.h:113
void CPhysAggregateDataHandle::~CPhysAggregateDataHandle()
{
} /* size: 0 */

// <04BDE343> ../public/vphysics2/interface.h:113
inline void CPhysAggregateDataHandle::~CPhysAggregateDataHandle()
{
} /* size: 0 */

// <064E0DC9> ../public/vphysics2/interface.h:121
inline void CPhysAggregateDataHandle::Get()
{
} /* size: 0 */

// <00373EF0> ../public/vphysics2/interface.h:126
inline void operator CPhysAggregateDataHandle::bool()
{
} /* size: 0 */

// <04BDE311> ../public/vphysics2/interface.h:131
inline void CPhysAggregateDataHandle::IsValid()
{
} /* size: 0 */

// <01873A60> ../public/vphysics2/interface.h:136
inline void CPhysAggregateDataHandle::operator->()
{
} /* size: 0 */

// <04E48EE4> ../public/vphysics2/interface.h:141
inline void CPhysAggregateDataHandle::operator=(const CPhysAggregateDataHandle& rhs)
{
} /* size: 0 */

// <009F4CDE> ../public/vphysics2/interface.h:154
void IPhysicsSystem::IPhysicsSystem()
{
} /* size: 0 */

// <009F4CC2> ../public/vphysics2/interface.h:154
inline void IPhysicsSystem::IPhysicsSystem()
{
} /* size: 0 */

// <0090162D> ../public/vphysics2/interface.h:154
// member functions: 58
// member variable: 1
// vtable entries: 26
// class size: 8
class IPhysicsSystem : public IAppSystem {
public:
	/* class IAppSystem <ancestor>; */ /* 0 8 */
	void IPhysicsSystem(IPhysicsSystem* , const IPhysicsSystem& );
	void IPhysicsSystem(IPhysicsSystem* );
	/* ../public/vphysics2/interface.h:157 */
	virtual void ~IPhysicsSystem(IPhysicsSystem* );
	/* ../public/vphysics2/interface.h:159 */
	virtual IPhysicsWorld* CreateWorld(IPhysicsSystem* );
	/* ../public/vphysics2/interface.h:160 */
	virtual void DestroyWorld(IPhysicsSystem* , IPhysicsWorld* );
	/* ../public/vphysics2/interface.h:161 */
	virtual int NumWorlds(IPhysicsSystem* );
	/* ../public/vphysics2/interface.h:162 */
	virtual IPhysicsWorld* GetWorld(IPhysicsSystem* , int);
	/* ../public/vphysics2/interface.h:164 */
	virtual const IPhysSurfacePropertyController* GetSurfacePropertyController(const IPhysicsSystem* );
	/* ../public/vphysics2/interface.h:166 */
	virtual void CastShapeAgainstShape(const IPhysicsSystem* , PhysicsTrace_t& , const Vector& , const Vector& , const Vector* , int, float, const Vector* , int, float);
	/* ../public/vphysics2/interface.h:168 */
	virtual RnHull_t* HullCreateBox(IPhysicsSystem* , const Vector& , const Vector& , RnHull_t* );
	/* ../public/vphysics2/interface.h:169 */
	virtual RnHull_t* HullCreate(IPhysicsSystem* , int, const Vector* , RnHull_t* , RnHullSimplificationParams_t* );
	/* ../public/vphysics2/interface.h:170 */
	virtual void HullDestroy(IPhysicsSystem* , RnHull_t* );
	/* ../public/vphysics2/interface.h:171 */
	virtual void HullClone(IPhysicsSystem* , RnHull_t* , const RnHull_t& );
	/* ../public/vphysics2/interface.h:173 */
	virtual RnMesh_t* MeshCreate(IPhysicsSystem* , int, const uint* , const uint8* , int, const Vector* , RnMesh_t* , float);
	/* ../public/vphysics2/interface.h:174 */
	virtual void MeshDestroy(IPhysicsSystem* , RnMesh_t* );
	/* ../public/vphysics2/interface.h:175 */
	virtual void MeshClone(IPhysicsSystem* , RnMesh_t* , const RnMesh_t& );
	/* ../public/vphysics2/interface.h:177 */
	virtual void AddDataReference(IPhysicsSystem* , CPhysAggregateData* );
	/* ../public/vphysics2/interface.h:178 */
	virtual void ReleaseDataReference(IPhysicsSystem* , CPhysAggregateData* );
	/* ../public/vphysics2/interface.h:180 */
	virtual CPhysAggregateDataHandle CreateAggregateDataFromDiskData(IPhysicsSystem* , VPhysXAggregateData_t* );
	/* ../public/vphysics2/interface.h:181 */
	virtual CPhysAggregateDataHandle CreateAggregateDataFromEmbeddedDiskData(IPhysicsSystem* , const EmbeddedPhysicsInfo_t& );
	/* ../public/vphysics2/interface.h:183 */
	virtual void StepSimulation(IPhysicsSystem* , IPhysicsWorld** , int, float, int);
	/* ../public/vphysics2/interface.h:185 */
	virtual RnMassProperties_t ComputeMass(IPhysicsSystem* , const RnSphere_t* , const RnMaterial_t& );
	/* ../public/vphysics2/interface.h:186 */
	virtual RnMassProperties_t ComputeMass(IPhysicsSystem* , const RnCapsule_t* , const RnMaterial_t& );
	/* ../public/vphysics2/interface.h:187 */
	virtual RnMassProperties_t ComputeMass(IPhysicsSystem* , int, const Vector* , const RnMaterial_t& );
	/* ../public/vphysics2/interface.h:189 */
	virtual bool CreateDebugSceneObject(IPhysicsSystem* , const DebugSceneObjectParams_t& , SceneObjectBuffers_t* );
	/* ../public/vphysics2/interface.h:190 */
	virtual void DestroyDebugSceneObject(IPhysicsSystem* , CSceneAnimatableObject* );
	/* ../public/vphysics2/interface.h:191 */
	virtual IPhysIntersectionController* CreateIntersectionController(IPhysicsSystem* );
	/* ../public/vphysics2/interface.h:193 */
	virtual bool CastHeightField(IPhysicsSystem* , Vector& , const Vector& , const Vector& , uint16_t* , int, int, float, float);
	/* ../public/vphysics2/interface.h:195 */
	virtual void UpdateSurfaceProperties(IPhysicsSystem* , const CPhysSurfaceProperties* );
	void IPhysicsSystem(class IPhysicsSystem *, const class IPhysicsSystem  &); /* linkage=_ZN14IPhysicsSystemC4ERKS_ */
	void IPhysicsSystem(class IPhysicsSystem *); /* linkage=_ZN14IPhysicsSystemC4Ev */
	virtual void ~IPhysicsSystem(class IPhysicsSystem *); /* linkage=_ZN14IPhysicsSystemD4Ev */
	virtual class IPhysicsWorld * CreateWorld(class IPhysicsSystem *); /* linkage=_ZN14IPhysicsSystem11CreateWorldEv */
	virtual void DestroyWorld(class IPhysicsSystem *, class IPhysicsWorld *); /* linkage=_ZN14IPhysicsSystem12DestroyWorldEP13IPhysicsWorld */
	virtual int NumWorlds(class IPhysicsSystem *); /* linkage=_ZN14IPhysicsSystem9NumWorldsEv */
	virtual class IPhysicsWorld * GetWorld(class IPhysicsSystem *, int); /* linkage=_ZN14IPhysicsSystem8GetWorldEi */
	virtual const class IPhysSurfacePropertyController  * GetSurfacePropertyController(const class IPhysicsSystem  *); /* linkage=_ZNK14IPhysicsSystem28GetSurfacePropertyControllerEv */
	virtual void CastShapeAgainstShape(const class IPhysicsSystem  *, class PhysicsTrace_t &, const class Vector  &, const class Vector  &, const class Vector  *, int, float, const class Vector  *, int, float); /* linkage=_ZNK14IPhysicsSystem21CastShapeAgainstShapeER14PhysicsTrace_tRK6VectorS4_PS3_ifS5_if */
	virtual class RnHull_t * HullCreateBox(class IPhysicsSystem *, const class Vector  &, const class Vector  &, class RnHull_t *); /* linkage=_ZN14IPhysicsSystem13HullCreateBoxERK6VectorS2_P8RnHull_t */
	virtual class RnHull_t * HullCreate(class IPhysicsSystem *, int, const class Vector  *, class RnHull_t *, class RnHullSimplificationParams_t *); /* linkage=_ZN14IPhysicsSystem10HullCreateEiPK6VectorP8RnHull_tP28RnHullSimplificationParams_t */
	virtual void HullDestroy(class IPhysicsSystem *, class RnHull_t *); /* linkage=_ZN14IPhysicsSystem11HullDestroyEP8RnHull_t */
	virtual void HullClone(class IPhysicsSystem *, class RnHull_t *, const class RnHull_t  &); /* linkage=_ZN14IPhysicsSystem9HullCloneEP8RnHull_tRKS0_ */
	virtual class RnMesh_t * MeshCreate(class IPhysicsSystem *, int, const uint  *, const uint8  *, int, const class Vector  *, class RnMesh_t *, float); /* linkage=_ZN14IPhysicsSystem10MeshCreateEiPKjPKhiPK6VectorP8RnMesh_tf */
	virtual void MeshDestroy(class IPhysicsSystem *, class RnMesh_t *); /* linkage=_ZN14IPhysicsSystem11MeshDestroyEP8RnMesh_t */
	virtual void MeshClone(class IPhysicsSystem *, class RnMesh_t *, const class RnMesh_t  &); /* linkage=_ZN14IPhysicsSystem9MeshCloneEP8RnMesh_tRKS0_ */
	virtual void AddDataReference(class IPhysicsSystem *, class CPhysAggregateData *); /* linkage=_ZN14IPhysicsSystem16AddDataReferenceEP18CPhysAggregateData */
	virtual void ReleaseDataReference(class IPhysicsSystem *, class CPhysAggregateData *); /* linkage=_ZN14IPhysicsSystem20ReleaseDataReferenceEP18CPhysAggregateData */
	virtual class CPhysAggregateDataHandle CreateAggregateDataFromDiskData(class IPhysicsSystem *, class VPhysXAggregateData_t *); /* linkage=_ZN14IPhysicsSystem31CreateAggregateDataFromDiskDataEP21VPhysXAggregateData_t */
	virtual class CPhysAggregateDataHandle CreateAggregateDataFromEmbeddedDiskData(class IPhysicsSystem *, const class EmbeddedPhysicsInfo_t  &); /* linkage=_ZN14IPhysicsSystem39CreateAggregateDataFromEmbeddedDiskDataERK21EmbeddedPhysicsInfo_t */
	virtual void StepSimulation(class IPhysicsSystem *, class IPhysicsWorld * *, int, float, int); /* linkage=_ZN14IPhysicsSystem14StepSimulationEPP13IPhysicsWorldifi */
	virtual class RnMassProperties_t ComputeMass(class IPhysicsSystem *, const class RnSphere_t  *, const class RnMaterial_t  &); /* linkage=_ZN14IPhysicsSystem11ComputeMassEPK10RnSphere_tRK12RnMaterial_t */
	virtual class RnMassProperties_t ComputeMass(class IPhysicsSystem *, const class RnCapsule_t  *, const class RnMaterial_t  &); /* linkage=_ZN14IPhysicsSystem11ComputeMassEPK11RnCapsule_tRK12RnMaterial_t */
	virtual class RnMassProperties_t ComputeMass(class IPhysicsSystem *, int, const class Vector  *, const class RnMaterial_t  &); /* linkage=_ZN14IPhysicsSystem11ComputeMassEiPK6VectorRK12RnMaterial_t */
	virtual bool CreateDebugSceneObject(class IPhysicsSystem *, const class DebugSceneObjectParams_t  &, class SceneObjectBuffers_t *); /* linkage=_ZN14IPhysicsSystem22CreateDebugSceneObjectERK24DebugSceneObjectParams_tP20SceneObjectBuffers_t */
	virtual void DestroyDebugSceneObject(class IPhysicsSystem *, class CSceneAnimatableObject *); /* linkage=_ZN14IPhysicsSystem23DestroyDebugSceneObjectEP22CSceneAnimatableObject */
	virtual class IPhysIntersectionController * CreateIntersectionController(class IPhysicsSystem *); /* linkage=_ZN14IPhysicsSystem28CreateIntersectionControllerEv */
	virtual bool CastHeightField(class IPhysicsSystem *, class Vector &, const class Vector  &, const class Vector  &, uint16_t *, int, int, float, float); /* linkage=_ZN14IPhysicsSystem15CastHeightFieldER6VectorRKS0_S3_Ptiiff */
	virtual void UpdateSurfaceProperties(class IPhysicsSystem *, const class CPhysSurfaceProperties  *); /* linkage=_ZN14IPhysicsSystem23UpdateSurfacePropertiesEPK22CPhysSurfaceProperties */
};

// <00A07F9A> ../public/vphysics2/interface.h:157
void IPhysicsSystem::~IPhysicsSystem()
{
} /* size: 0 */

// <00A07F6A> ../public/vphysics2/interface.h:157
inline void IPhysicsSystem::~IPhysicsSystem()
{
} /* size: 0 */

// <064E0DA1> ../public/vphysics2/interface.h:203
inline void CPhysAggregateDataHandle::Set(CPhysAggregateData* pData)
{
} /* size: 0 */

// <064E0D85> ../public/vphysics2/interface.h:213
inline void CPhysAggregateDataHandle::Clear()
{
} /* size: 0 */

// <00A9F8DA> ../public/vphysics2/interface.h:223
// member variables: 3
// struct size: 24
struct PhysicsIntersectionHalf {
	IPhysicsShape * m_pShape; /* 0 8 */
	IPhysicsBody * m_hBody; /* 8 8 */
	int32 m_SurfaceIndex; /* 16 4 */
};

// <00B1F4E6> ../public/vphysics2/interface.h:231
void VPhysIntersectionNotification_t::VPhysIntersectionNotification_t()
{
} /* size: 0 */

// <00B1F4CA> ../public/vphysics2/interface.h:231
inline void VPhysIntersectionNotification_t::VPhysIntersectionNotification_t()
{
} /* size: 0 */

// <00A9F915> ../public/vphysics2/interface.h:231
// member function: 1
// member variables: 7
// struct size: 104
struct VPhysIntersectionNotification_t {
	uint32 m_Reason; /* 0 4 */
	PhysicsIntersectionHalf m_BodyInfo[2]; /* 8 48 */
	Vector ContactPoint; /* 56 12 */
	Vector ContactSpeed; /* 68 12 */
	Vector SurfaceNormal; /* 80 12 */
	float ContactNormalSpeed; /* 92 4 */
	float Impulse; /* 96 4 */
	void VPhysIntersectionNotification_t(VPhysIntersectionNotification_t* );
};

// <00B31371> ../public/vphysics2/interface.h:246
void DrawStringArgs_t::DrawStringArgs_t()
{
} /* size: 0 */

// <00B31355> ../public/vphysics2/interface.h:246
inline void DrawStringArgs_t::DrawStringArgs_t()
{
} /* size: 0 */

// <00A9F9B4> ../public/vphysics2/interface.h:246
// member function: 1
// member variables: 3
// struct size: 40
struct DrawStringArgs_t {
	Vector Position; /* 0 12 */
	const char * Name; /* 16 8 */
	Vector4D Color; /* 24 16 */
	void DrawStringArgs_t(DrawStringArgs_t* );
};

// <00B30EC0> ../public/vphysics2/interface.h:253
void DrawSegmentArgs_t::DrawSegmentArgs_t()
{
} /* size: 0 */

// <00B30EA4> ../public/vphysics2/interface.h:253
inline void DrawSegmentArgs_t::DrawSegmentArgs_t()
{
} /* size: 0 */

// <00A9FA07> ../public/vphysics2/interface.h:253
// member function: 1
// member variables: 3
// struct size: 40
struct DrawSegmentArgs_t {
	Vector P1; /* 0 12 */
	Vector P2; /* 12 12 */
	Vector4D Color; /* 24 16 */
	void DrawSegmentArgs_t(DrawSegmentArgs_t* );
};

// <00B309B5> ../public/vphysics2/interface.h:260
void DrawPointArgs_t::DrawPointArgs_t()
{
} /* size: 0 */

// <00B30998> ../public/vphysics2/interface.h:260
inline void DrawPointArgs_t::DrawPointArgs_t()
{
} /* size: 0 */

// <00A9FA5B> ../public/vphysics2/interface.h:260
// member function: 1
// member variables: 3
// struct size: 32
struct DrawPointArgs_t {
	Vector Position; /* 0 12 */
	float Size; /* 12 4 */
	Vector4D Color; /* 16 16 */
	void DrawPointArgs_t(DrawPointArgs_t* );
};

// <00B30560> ../public/vphysics2/interface.h:267
void DrawBoundsArgs_t::DrawBoundsArgs_t()
{
} /* size: 0 */

// <00B30543> ../public/vphysics2/interface.h:267
inline void DrawBoundsArgs_t::DrawBoundsArgs_t()
{
} /* size: 0 */

// <00A9FAB2> ../public/vphysics2/interface.h:267
// member function: 1
// member variables: 2
// struct size: 40
struct DrawBoundsArgs_t {
	AABB_t Box; /* 0 24 */
	Vector4D Color; /* 24 16 */
	void DrawBoundsArgs_t(DrawBoundsArgs_t* );
};

// <00B2FED3> ../public/vphysics2/interface.h:273
void DrawTransformArgs_t::DrawTransformArgs_t()
{
} /* size: 0 */

// <00B2FEB6> ../public/vphysics2/interface.h:273
inline void DrawTransformArgs_t::DrawTransformArgs_t()
{
} /* size: 0 */

// <00A9FAFA> ../public/vphysics2/interface.h:273
// member function: 1
// member variables: 2
// struct size: 28
struct DrawTransformArgs_t {
	Vector Position; /* 0 12 */
	Quaternion Rotation; /* 12 16 */
	void DrawTransformArgs_t(DrawTransformArgs_t* );
};

// <00A9FB41> ../public/vphysics2/interface.h:279
// member variables: 5
// struct size: 40
struct DebugDrawArgs_t {
	DrawStringArgs_t * String; /* 0 8 */
	DrawSegmentArgs_t * Segment; /* 8 8 */
	DrawPointArgs_t * Point; /* 16 8 */
	DrawBoundsArgs_t * Bounds; /* 24 8 */
	DrawTransformArgs_t * Transform; /* 32 8 */
};

// <00B2F420> ../public/vphysics2/interface.h:291
void IPhysicsWorld::IPhysicsWorld()
{
} /* size: 0 */

// <00B2F403> ../public/vphysics2/interface.h:291
inline void IPhysicsWorld::IPhysicsWorld()
{
} /* size: 0 */

// <00AF46CE> ../public/vphysics2/interface.h:291
// member functions: 124
// member variable: 1
// vtable entries: 59
// class size: 8
class IPhysicsWorld {
	void IPhysicsWorld(IPhysicsWorld* , const IPhysicsWorld& );
	void IPhysicsWorld(IPhysicsWorld* );
	int ()(void) * * _vptr.IPhysicsWorld; /* 0 8 */
	/* ../public/vphysics2/interface.h:295 */
	virtual void ~IPhysicsWorld(IPhysicsWorld* );
	/* ../public/vphysics2/interface.h:297 */
	virtual int GetAggregateCount(const IPhysicsWorld* );
	/* ../public/vphysics2/interface.h:298 */
	virtual IPhysAggregateInstance* GetAggregate(IPhysicsWorld* , int);
	/* ../public/vphysics2/interface.h:299 */
	virtual IPhysAggregateInstance* CreateAggregateInstance(IPhysicsWorld* , const CPhysAggregateData* , const CTransform& , uint64, VPhysicsMotionType_t);
	/* ../public/vphysics2/interface.h:300 */
	virtual IPhysAggregateInstance* CreateAggregateInstance(IPhysicsWorld* );
	/* ../public/vphysics2/interface.h:301 */
	virtual void DestroyAggregateInstance(IPhysicsWorld* , IPhysAggregateInstance* );
	/* ../public/vphysics2/interface.h:303 */
	virtual void ProcessIntersections(IPhysicsWorld* , ProcessIntersectionsDelegate_t);
	/* ../public/vphysics2/interface.h:305 */
	virtual void StepSimulation(IPhysicsWorld* , float, int);
	/* ../public/vphysics2/interface.h:306 */
	virtual void Draw(IPhysicsWorld* );
	/* ../public/vphysics2/interface.h:307 */
	virtual void Draw(IPhysicsWorld* , DebugDrawDelegate_t);
	/* ../public/vphysics2/interface.h:309 */
	virtual void SetGravity(IPhysicsWorld* , const Vector& );
	/* ../public/vphysics2/interface.h:310 */
	virtual Vector GetGravity(const IPhysicsWorld* );
	/* ../public/vphysics2/interface.h:312 */
	virtual void SetSimulation(IPhysicsWorld* , PhysicsSimulation_t);
	/* ../public/vphysics2/interface.h:313 */
	virtual PhysicsSimulation_t GetSimulation(const IPhysicsWorld* );
	/* ../public/vphysics2/interface.h:315 */
	virtual void EnableSleeping(IPhysicsWorld* );
	/* ../public/vphysics2/interface.h:316 */
	virtual void DisableSleeping(IPhysicsWorld* );
	/* ../public/vphysics2/interface.h:317 */
	virtual bool IsSleepingEnabled(const IPhysicsWorld* );
	/* ../public/vphysics2/interface.h:319 */
	virtual void SetMaximumLinearSpeed(IPhysicsWorld* , float);
	/* ../public/vphysics2/interface.h:321 */
	virtual IPhysicsBody* AddBody(IPhysicsWorld* );
	/* ../public/vphysics2/interface.h:322 */
	virtual void RemoveBody(IPhysicsWorld* , IPhysicsBody* );
	/* ../public/vphysics2/interface.h:324 */
	virtual IPhysicsJoint* AddSphericalJoint(IPhysicsWorld* , const PhysicsSphericalJointDesc_t& );
	/* ../public/vphysics2/interface.h:325 */
	virtual IPhysicsJoint* AddRevoluteJoint(IPhysicsWorld* , const PhysicsRevoluteJointDesc_t& );
	/* ../public/vphysics2/interface.h:326 */
	virtual IPhysicsJoint* AddPrismaticJoint(IPhysicsWorld* , const PhysicsPrismaticJointDesc_t& );
	/* ../public/vphysics2/interface.h:327 */
	virtual IPhysicsJoint* AddConicalJoint(IPhysicsWorld* , const PhysicsConicalJointDesc_t& );
	/* ../public/vphysics2/interface.h:328 */
	virtual IPhysicsJoint* AddWeldJoint(IPhysicsWorld* , const PhysicsWeldJointDesc_t& );
	/* ../public/vphysics2/interface.h:329 */
	virtual IPhysicsJoint* AddMouseJoint(IPhysicsWorld* , const PhysicsMouseJointDesc_t& );
	/* ../public/vphysics2/interface.h:330 */
	virtual void RemoveJoint(IPhysicsWorld* , IPhysicsJoint* );
	/* ../public/vphysics2/interface.h:332 */
	virtual void CastRaySingle(const IPhysicsWorld* , PhysicsTrace_t& , const Vector& , const Vector& , const RnQueryAttr_t& );
	/* ../public/vphysics2/interface.h:333 */
	virtual void CastSphereSingle(const IPhysicsWorld* , PhysicsTrace_t& , const Vector& , const Vector& , float, const RnQueryAttr_t& );
	/* ../public/vphysics2/interface.h:334 */
	virtual void CastBoxSingle(const IPhysicsWorld* , PhysicsTrace_t& , const Vector& , const Vector& , const Quaternion& , const Vector& , const RnQueryAttr_t& );
	/* ../public/vphysics2/interface.h:335 */
	virtual void CastShapeSingle(const IPhysicsWorld* , PhysicsTrace_t& , const Vector* , int, float, const Vector& , const RnQueryAttr_t& );
	/* ../public/vphysics2/interface.h:336 */
	virtual void CastBody(const IPhysicsWorld* , PhysicsTrace_t& , IPhysicsBody* , const Vector& , const Vector& , const Quaternion& , const RnQueryAttr_t& );
	/* ../public/vphysics2/interface.h:337 */
	virtual void CastCylinderSingle(const IPhysicsWorld* , PhysicsTrace_t& , const Vector* , float, const Vector& , const Vector& , const Quaternion& , const RnQueryAttr_t& );
	/* ../public/vphysics2/interface.h:339 */
	virtual void CastRayMultiple(const IPhysicsWorld* , CTraceVector& , const Vector& , const Vector& , const RnQueryAttr_t& );
	/* ../public/vphysics2/interface.h:340 */
	virtual void CastSphereMultiple(const IPhysicsWorld* , CTraceVector& , const Vector& , const Vector& , float, const RnQueryAttr_t& );
	/* ../public/vphysics2/interface.h:341 */
	virtual void CastBoxMultiple(const IPhysicsWorld* , CTraceVector& , const Vector& , const Vector& , const Quaternion& , const Vector& , const RnQueryAttr_t& );
	/* ../public/vphysics2/interface.h:342 */
	virtual void CastShapeMultiple(const IPhysicsWorld* , CTraceVector& , const Vector* , int, float, const Vector& , const RnQueryAttr_t& );
	/* ../public/vphysics2/interface.h:343 */
	virtual void CastBodyMultiple(const IPhysicsWorld* , CTraceVector& , IPhysicsBody* , const Vector& , const Vector& , const Quaternion& , const RnQueryAttr_t& );
	/* ../public/vphysics2/interface.h:344 */
	virtual void CastCylinderMultiple(const IPhysicsWorld* , CTraceVector& , const Vector* , float, const Vector& , const Vector& , const Quaternion& , const RnQueryAttr_t& );
	/* ../public/vphysics2/interface.h:346 */
	virtual void Query(const IPhysicsWorld* , CQueryResult& , const Vector& , float, const RnQueryAttr_t& );
	/* ../public/vphysics2/interface.h:347 */
	virtual void Query(const IPhysicsWorld* , CQueryResult& , const AABB_t& , const RnQueryAttr_t& );
	/* ../public/vphysics2/interface.h:348 */
	virtual void Query(const IPhysicsWorld* , CQueryResult& , const Vector* , int, const RnQueryAttr_t& );
	/* ../public/vphysics2/interface.h:350 */
	virtual void SetDebugScene(IPhysicsWorld* , ISceneWorld* );
	/* ../public/vphysics2/interface.h:351 */
	virtual ISceneWorld* GetDebugScene(const IPhysicsWorld* );
	/* ../public/vphysics2/interface.h:353 */
	virtual void SetDebugName(IPhysicsWorld* , const char* );
	/* ../public/vphysics2/interface.h:354 */
	virtual const char* GetDebugName(const IPhysicsWorld* );
	/* ../public/vphysics2/interface.h:356 */
	virtual void SetWorldReferenceBody(IPhysicsWorld* , IPhysicsBody* );
	/* ../public/vphysics2/interface.h:357 */
	virtual IPhysicsBody* GetWorldReferenceBody(const IPhysicsWorld* );
	/* ../public/vphysics2/interface.h:359 */
	virtual IPhysicsJoint* AddWeldJoint(IPhysicsWorld* , IPhysicsBody* , IPhysicsBody* , CTransformUnaligned, CTransformUnaligned);
	/* ../public/vphysics2/interface.h:360 */
	virtual IPhysicsJoint* AddSpringJoint(IPhysicsWorld* , IPhysicsBody* , IPhysicsBody* , CTransformUnaligned, CTransformUnaligned);
	/* ../public/vphysics2/interface.h:361 */
	virtual IPhysicsJoint* AddRevoluteJoint(IPhysicsWorld* , IPhysicsBody* , IPhysicsBody* , CTransformUnaligned, CTransformUnaligned);
	/* ../public/vphysics2/interface.h:362 */
	virtual IPhysicsJoint* AddPrismaticJoint(IPhysicsWorld* , IPhysicsBody* , IPhysicsBody* , CTransformUnaligned, CTransformUnaligned);
	/* ../public/vphysics2/interface.h:363 */
	virtual IPhysicsJoint* AddSphericalJoint(IPhysicsWorld* , IPhysicsBody* , IPhysicsBody* , CTransformUnaligned, CTransformUnaligned);
	/* ../public/vphysics2/interface.h:364 */
	virtual IPhysicsJoint* AddMotorJoint(IPhysicsWorld* , IPhysicsBody* , IPhysicsBody* , CTransformUnaligned, CTransformUnaligned);
	/* ../public/vphysics2/interface.h:365 */
	virtual IPhysicsJoint* AddWheelJoint(IPhysicsWorld* , IPhysicsBody* , IPhysicsBody* , CTransformUnaligned, CTransformUnaligned);
	/* ../public/vphysics2/interface.h:366 */
	virtual IPhysicsJoint* AddParallelJoint(IPhysicsWorld* , IPhysicsBody* , IPhysicsBody* , CTransformUnaligned, CTransformUnaligned);
	/* ../public/vphysics2/interface.h:367 */
	virtual IPhysicsJoint* AddFilterJoint(IPhysicsWorld* , IPhysicsBody* , IPhysicsBody* );
	/* ../public/vphysics2/interface.h:369 */
	virtual void SetCollisionRulesFromJson(IPhysicsWorld* , const char* );
	/* ../public/vphysics2/interface.h:371 */
	virtual IPhysIntersectionController* GetIntersectionController(IPhysicsWorld* );
	/* ../public/vphysics2/interface.h:373 */
	virtual CManagedHandle* GetManagedHandle(IPhysicsWorld* );
	void IPhysicsWorld(class IPhysicsWorld *, const class IPhysicsWorld  &); /* linkage=_ZN13IPhysicsWorldC4ERKS_ */
	void IPhysicsWorld(class IPhysicsWorld *); /* linkage=_ZN13IPhysicsWorldC4Ev */
	virtual void ~IPhysicsWorld(class IPhysicsWorld *); /* linkage=_ZN13IPhysicsWorldD4Ev */
	virtual int GetAggregateCount(const class IPhysicsWorld  *); /* linkage=_ZNK13IPhysicsWorld17GetAggregateCountEv */
	virtual class IPhysAggregateInstance * GetAggregate(class IPhysicsWorld *, int); /* linkage=_ZN13IPhysicsWorld12GetAggregateEi */
	virtual class IPhysAggregateInstance * CreateAggregateInstance(class IPhysicsWorld *, const class CPhysAggregateData  *, const class CTransform  &, uint64, enum VPhysicsMotionType_t); /* linkage=_ZN13IPhysicsWorld23CreateAggregateInstanceEPK18CPhysAggregateDataRK10CTransformy20VPhysicsMotionType_t */
	virtual class IPhysAggregateInstance * CreateAggregateInstance(class IPhysicsWorld *); /* linkage=_ZN13IPhysicsWorld23CreateAggregateInstanceEv */
	virtual void DestroyAggregateInstance(class IPhysicsWorld *, class IPhysAggregateInstance *); /* linkage=_ZN13IPhysicsWorld24DestroyAggregateInstanceEP22IPhysAggregateInstance */
	virtual void ProcessIntersections(class IPhysicsWorld *, ProcessIntersectionsDelegate_t); /* linkage=_ZN13IPhysicsWorld20ProcessIntersectionsE12CUtlDelegateIFvP31VPhysIntersectionNotification_tEE */
	virtual void StepSimulation(class IPhysicsWorld *, float, int); /* linkage=_ZN13IPhysicsWorld14StepSimulationEfi */
	virtual void Draw(class IPhysicsWorld *); /* linkage=_ZN13IPhysicsWorld4DrawEv */
	virtual void Draw(class IPhysicsWorld *, DebugDrawDelegate_t); /* linkage=_ZN13IPhysicsWorld4DrawE12CUtlDelegateIFvP15DebugDrawArgs_tEE */
	virtual void SetGravity(class IPhysicsWorld *, const class Vector  &); /* linkage=_ZN13IPhysicsWorld10SetGravityERK6Vector */
	virtual class Vector GetGravity(const class IPhysicsWorld  *); /* linkage=_ZNK13IPhysicsWorld10GetGravityEv */
	virtual void SetSimulation(class IPhysicsWorld *, enum PhysicsSimulation_t); /* linkage=_ZN13IPhysicsWorld13SetSimulationE19PhysicsSimulation_t */
	virtual enum PhysicsSimulation_t GetSimulation(const class IPhysicsWorld  *); /* linkage=_ZNK13IPhysicsWorld13GetSimulationEv */
	virtual void EnableSleeping(class IPhysicsWorld *); /* linkage=_ZN13IPhysicsWorld14EnableSleepingEv */
	virtual void DisableSleeping(class IPhysicsWorld *); /* linkage=_ZN13IPhysicsWorld15DisableSleepingEv */
	virtual bool IsSleepingEnabled(const class IPhysicsWorld  *); /* linkage=_ZNK13IPhysicsWorld17IsSleepingEnabledEv */
	virtual void SetMaximumLinearSpeed(class IPhysicsWorld *, float); /* linkage=_ZN13IPhysicsWorld21SetMaximumLinearSpeedEf */
	virtual class IPhysicsBody * AddBody(class IPhysicsWorld *); /* linkage=_ZN13IPhysicsWorld7AddBodyEv */
	virtual void RemoveBody(class IPhysicsWorld *, class IPhysicsBody *); /* linkage=_ZN13IPhysicsWorld10RemoveBodyEP12IPhysicsBody */
	virtual class IPhysicsJoint * AddSphericalJoint(class IPhysicsWorld *, const class PhysicsSphericalJointDesc_t  &); /* linkage=_ZN13IPhysicsWorld17AddSphericalJointERK27PhysicsSphericalJointDesc_t */
	virtual class IPhysicsJoint * AddRevoluteJoint(class IPhysicsWorld *, const class PhysicsRevoluteJointDesc_t  &); /* linkage=_ZN13IPhysicsWorld16AddRevoluteJointERK26PhysicsRevoluteJointDesc_t */
	virtual class IPhysicsJoint * AddPrismaticJoint(class IPhysicsWorld *, const class PhysicsPrismaticJointDesc_t  &); /* linkage=_ZN13IPhysicsWorld17AddPrismaticJointERK27PhysicsPrismaticJointDesc_t */
	virtual class IPhysicsJoint * AddConicalJoint(class IPhysicsWorld *, const class PhysicsConicalJointDesc_t  &); /* linkage=_ZN13IPhysicsWorld15AddConicalJointERK25PhysicsConicalJointDesc_t */
	virtual class IPhysicsJoint * AddWeldJoint(class IPhysicsWorld *, const class PhysicsWeldJointDesc_t  &); /* linkage=_ZN13IPhysicsWorld12AddWeldJointERK22PhysicsWeldJointDesc_t */
	virtual class IPhysicsJoint * AddMouseJoint(class IPhysicsWorld *, const class PhysicsMouseJointDesc_t  &); /* linkage=_ZN13IPhysicsWorld13AddMouseJointERK23PhysicsMouseJointDesc_t */
	virtual void RemoveJoint(class IPhysicsWorld *, class IPhysicsJoint *); /* linkage=_ZN13IPhysicsWorld11RemoveJointEP13IPhysicsJoint */
	virtual void CastRaySingle(const class IPhysicsWorld  *, class PhysicsTrace_t &, const class Vector  &, const class Vector  &, const class RnQueryAttr_t  &); /* linkage=_ZNK13IPhysicsWorld13CastRaySingleER14PhysicsTrace_tRK6VectorS4_RK13RnQueryAttr_t */
	virtual void CastSphereSingle(const class IPhysicsWorld  *, class PhysicsTrace_t &, const class Vector  &, const class Vector  &, float, const class RnQueryAttr_t  &); /* linkage=_ZNK13IPhysicsWorld16CastSphereSingleER14PhysicsTrace_tRK6VectorS4_fRK13RnQueryAttr_t */
	virtual void CastBoxSingle(const class IPhysicsWorld  *, class PhysicsTrace_t &, const class Vector  &, const class Vector  &, const class Quaternion  &, const class Vector  &, const class RnQueryAttr_t  &); /* linkage=_ZNK13IPhysicsWorld13CastBoxSingleER14PhysicsTrace_tRK6VectorS4_RK10QuaternionS4_RK13RnQueryAttr_t */
	virtual void CastShapeSingle(const class IPhysicsWorld  *, class PhysicsTrace_t &, const class Vector  *, int, float, const class Vector  &, const class RnQueryAttr_t  &); /* linkage=_ZNK13IPhysicsWorld15CastShapeSingleER14PhysicsTrace_tPK6VectorifRS3_RK13RnQueryAttr_t */
	virtual void CastBody(const class IPhysicsWorld  *, class PhysicsTrace_t &, class IPhysicsBody *, const class Vector  &, const class Vector  &, const class Quaternion  &, const class RnQueryAttr_t  &); /* linkage=_ZNK13IPhysicsWorld8CastBodyER14PhysicsTrace_tP12IPhysicsBodyRK6VectorS6_RK10QuaternionRK13RnQueryAttr_t */
	virtual void CastCylinderSingle(const class IPhysicsWorld  *, class PhysicsTrace_t &, const class Vector  *, float, const class Vector  &, const class Vector  &, const class Quaternion  &, const class RnQueryAttr_t  &); /* linkage=_ZNK13IPhysicsWorld18CastCylinderSingleER14PhysicsTrace_tPK6VectorfRS3_S5_RK10QuaternionRK13RnQueryAttr_t */
	virtual void CastRayMultiple(const class IPhysicsWorld  *, CTraceVector &, const class Vector  &, const class Vector  &, const class RnQueryAttr_t  &); /* linkage=_ZNK13IPhysicsWorld15CastRayMultipleER23CUtlVectorFixedGrowableI14PhysicsTrace_tLm128EERK6VectorS6_RK13RnQueryAttr_t */
	virtual void CastSphereMultiple(const class IPhysicsWorld  *, CTraceVector &, const class Vector  &, const class Vector  &, float, const class RnQueryAttr_t  &); /* linkage=_ZNK13IPhysicsWorld18CastSphereMultipleER23CUtlVectorFixedGrowableI14PhysicsTrace_tLm128EERK6VectorS6_fRK13RnQueryAttr_t */
	virtual void CastBoxMultiple(const class IPhysicsWorld  *, CTraceVector &, const class Vector  &, const class Vector  &, const class Quaternion  &, const class Vector  &, const class RnQueryAttr_t  &); /* linkage=_ZNK13IPhysicsWorld15CastBoxMultipleER23CUtlVectorFixedGrowableI14PhysicsTrace_tLm128EERK6VectorS6_RK10QuaternionS6_RK13RnQueryAttr_t */
	virtual void CastShapeMultiple(const class IPhysicsWorld  *, CTraceVector &, const class Vector  *, int, float, const class Vector  &, const class RnQueryAttr_t  &); /* linkage=_ZNK13IPhysicsWorld17CastShapeMultipleER23CUtlVectorFixedGrowableI14PhysicsTrace_tLm128EEPK6VectorifRS5_RK13RnQueryAttr_t */
	virtual void CastBodyMultiple(const class IPhysicsWorld  *, CTraceVector &, class IPhysicsBody *, const class Vector  &, const class Vector  &, const class Quaternion  &, const class RnQueryAttr_t  &); /* linkage=_ZNK13IPhysicsWorld16CastBodyMultipleER23CUtlVectorFixedGrowableI14PhysicsTrace_tLm128EEP12IPhysicsBodyRK6VectorS8_RK10QuaternionRK13RnQueryAttr_t */
	virtual void CastCylinderMultiple(const class IPhysicsWorld  *, CTraceVector &, const class Vector  *, float, const class Vector  &, const class Vector  &, const class Quaternion  &, const class RnQueryAttr_t  &); /* linkage=_ZNK13IPhysicsWorld20CastCylinderMultipleER23CUtlVectorFixedGrowableI14PhysicsTrace_tLm128EEPK6VectorfRS5_S7_RK10QuaternionRK13RnQueryAttr_t */
	virtual void Query(const class IPhysicsWorld  *, CQueryResult &, const class Vector  &, float, const class RnQueryAttr_t  &); /* linkage=_ZNK13IPhysicsWorld5QueryER23CUtlVectorFixedGrowableIP13IPhysicsShapeLm128EERK6VectorfRK13RnQueryAttr_t */
	virtual void Query(const class IPhysicsWorld  *, CQueryResult &, const class AABB_t  &, const class RnQueryAttr_t  &); /* linkage=_ZNK13IPhysicsWorld5QueryER23CUtlVectorFixedGrowableIP13IPhysicsShapeLm128EERK6AABB_tRK13RnQueryAttr_t */
	virtual void Query(const class IPhysicsWorld  *, CQueryResult &, const class Vector  *, int, const class RnQueryAttr_t  &); /* linkage=_ZNK13IPhysicsWorld5QueryER23CUtlVectorFixedGrowableIP13IPhysicsShapeLm128EEPK6VectoriRK13RnQueryAttr_t */
	virtual void SetDebugScene(class IPhysicsWorld *, class ISceneWorld *); /* linkage=_ZN13IPhysicsWorld13SetDebugSceneEP11ISceneWorld */
	virtual class ISceneWorld * GetDebugScene(const class IPhysicsWorld  *); /* linkage=_ZNK13IPhysicsWorld13GetDebugSceneEv */
	virtual void SetDebugName(class IPhysicsWorld *, const char  *); /* linkage=_ZN13IPhysicsWorld12SetDebugNameEPKc */
	virtual const char  * GetDebugName(const class IPhysicsWorld  *); /* linkage=_ZNK13IPhysicsWorld12GetDebugNameEv */
	virtual void SetWorldReferenceBody(class IPhysicsWorld *, class IPhysicsBody *); /* linkage=_ZN13IPhysicsWorld21SetWorldReferenceBodyEP12IPhysicsBody */
	virtual class IPhysicsBody * GetWorldReferenceBody(const class IPhysicsWorld  *); /* linkage=_ZNK13IPhysicsWorld21GetWorldReferenceBodyEv */
	virtual class IPhysicsJoint * AddWeldJoint(class IPhysicsWorld *, class IPhysicsBody *, class IPhysicsBody *, class CTransformUnaligned, class CTransformUnaligned); /* linkage=_ZN13IPhysicsWorld12AddWeldJointEP12IPhysicsBodyS1_19CTransformUnalignedS2_ */
	virtual class IPhysicsJoint * AddSpringJoint(class IPhysicsWorld *, class IPhysicsBody *, class IPhysicsBody *, class CTransformUnaligned, class CTransformUnaligned); /* linkage=_ZN13IPhysicsWorld14AddSpringJointEP12IPhysicsBodyS1_19CTransformUnalignedS2_ */
	virtual class IPhysicsJoint * AddRevoluteJoint(class IPhysicsWorld *, class IPhysicsBody *, class IPhysicsBody *, class CTransformUnaligned, class CTransformUnaligned); /* linkage=_ZN13IPhysicsWorld16AddRevoluteJointEP12IPhysicsBodyS1_19CTransformUnalignedS2_ */
	virtual class IPhysicsJoint * AddPrismaticJoint(class IPhysicsWorld *, class IPhysicsBody *, class IPhysicsBody *, class CTransformUnaligned, class CTransformUnaligned); /* linkage=_ZN13IPhysicsWorld17AddPrismaticJointEP12IPhysicsBodyS1_19CTransformUnalignedS2_ */
	virtual class IPhysicsJoint * AddSphericalJoint(class IPhysicsWorld *, class IPhysicsBody *, class IPhysicsBody *, class CTransformUnaligned, class CTransformUnaligned); /* linkage=_ZN13IPhysicsWorld17AddSphericalJointEP12IPhysicsBodyS1_19CTransformUnalignedS2_ */
	virtual class IPhysicsJoint * AddMotorJoint(class IPhysicsWorld *, class IPhysicsBody *, class IPhysicsBody *, class CTransformUnaligned, class CTransformUnaligned); /* linkage=_ZN13IPhysicsWorld13AddMotorJointEP12IPhysicsBodyS1_19CTransformUnalignedS2_ */
	virtual class IPhysicsJoint * AddWheelJoint(class IPhysicsWorld *, class IPhysicsBody *, class IPhysicsBody *, class CTransformUnaligned, class CTransformUnaligned); /* linkage=_ZN13IPhysicsWorld13AddWheelJointEP12IPhysicsBodyS1_19CTransformUnalignedS2_ */
	virtual class IPhysicsJoint * AddParallelJoint(class IPhysicsWorld *, class IPhysicsBody *, class IPhysicsBody *, class CTransformUnaligned, class CTransformUnaligned); /* linkage=_ZN13IPhysicsWorld16AddParallelJointEP12IPhysicsBodyS1_19CTransformUnalignedS2_ */
	virtual class IPhysicsJoint * AddFilterJoint(class IPhysicsWorld *, class IPhysicsBody *, class IPhysicsBody *); /* linkage=_ZN13IPhysicsWorld14AddFilterJointEP12IPhysicsBodyS1_ */
	virtual void SetCollisionRulesFromJson(class IPhysicsWorld *, const char  *); /* linkage=_ZN13IPhysicsWorld25SetCollisionRulesFromJsonEPKc */
	virtual class IPhysIntersectionController * GetIntersectionController(class IPhysicsWorld *); /* linkage=_ZN13IPhysicsWorld25GetIntersectionControllerEv */
	virtual class CManagedHandle * GetManagedHandle(class IPhysicsWorld *); /* linkage=_ZN13IPhysicsWorld16GetManagedHandleEv */
};

// <00B2F3EC> ../public/vphysics2/interface.h:295
void IPhysicsWorld::~IPhysicsWorld()
{
} /* size: 0 */

// <00B2F3BC> ../public/vphysics2/interface.h:295
inline void IPhysicsWorld::~IPhysicsWorld()
{
} /* size: 0 */

