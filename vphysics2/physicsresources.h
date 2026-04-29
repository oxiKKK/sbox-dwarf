
//
// vphysics2/physicsresources.h
//
//	referenced by: libengine2.so
//
//	functions: 8
//	classes: 2
//

// <00D647BA> vphysics2/physicsresources.h:13
// member functions: 26
// member variables: 4
// vtable entries: 7
// class size: 72
class CPhysicsSurfacePropertyManager : public IPhysSurfacePropertyController {
	/* vphysics2/physicsresources.h:35 */
	class CSurfacePropertiesPair {
		const class CPhysSurfaceProperties * m_pDescrition; /* 0 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class IPhysSurfacePropertyController <ancestor>; */ /* 0 8 */
	void CPhysicsSurfacePropertyManager(CPhysicsSurfacePropertyManager* , const CPhysicsSurfacePropertyManager& );
	/* vphysics2/physicsresources.cpp:8 */
	void CPhysicsSurfacePropertyManager(CPhysicsSurfacePropertyManager* );
	/* vphysics2/physicsresources.cpp:13 */
	virtual void ~CPhysicsSurfacePropertyManager(CPhysicsSurfacePropertyManager* );
	/* vphysics2/physicsresources.cpp:28 */
	virtual const CPhysSurfaceProperties* FindSurfaceProperties(const CPhysicsSurfacePropertyManager* , CUtlStringToken, bool* );
	/* vphysics2/physicsresources.cpp:18 */
	virtual int GetSurfacePropCount(const CPhysicsSurfacePropertyManager* );
	/* vphysics2/physicsresources.cpp:23 */
	virtual const CPhysSurfaceProperties* GetSurfaceProperty(const CPhysicsSurfacePropertyManager* , int);
	/* vphysics2/physicsresources.cpp:47 */
	virtual void GetSurfacePropertiesNames(const CPhysicsSurfacePropertyManager* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* , bool);
	/* vphysics2/physicsresources.h:24 */
	virtual const CPhysSurfaceProperties* GetDefaultSurfaceProperties(const CPhysicsSurfacePropertyManager* );
	/* vphysics2/physicsresources.cpp:65 */
	virtual void InitializeRnMaterialFromSurfaceProperty(const CPhysicsSurfacePropertyManager* , const CPhysSurfaceProperties* , RnMaterial_t* );
	/* vphysics2/physicsresources.cpp:75 */
	virtual CPhysSurfaceProperties* AddProperty(CPhysicsSurfacePropertyManager* , CUtlString, CUtlString, CUtlString);
	/* vphysics2/physicsresources.cpp:103 */
	void LoadSurfaceProperties(CPhysicsSurfacePropertyManager* );
	/* vphysics2/physicsresources.cpp:127 */
	void UnloadSurfaceProperties(CPhysicsSurfacePropertyManager* );
private:
	/* vphysics2/physicsresources.cpp:141 */
	int IndexOfHash(CPhysicsSurfacePropertyManager* , uint32);
	/* vphysics2/physicsresources.h:42 */
	typedef struct CUtlScalarHash<CPhysicsSurfacePropertyManager::CSurfacePropertiesPair, CPassthroughHash32> CSurfacePropertiesHash;
	CSurfacePropertiesHash m_surfacePropertiesDescription; /* 8 24 */
	const class CPhysSurfaceProperties * m_pDefaultSurfaceProperties; /* 32 8 */
	CUtlVector<CPhysSurfaceProperties*, CUtlMemory<CPhysSurfaceProperties*, int> > m_List; /* 40 32 */
	virtual void ~CPhysicsSurfacePropertyManager(class CPhysicsSurfacePropertyManager *); /* linkage=_ZN30CPhysicsSurfacePropertyManagerD4Ev */
	void UnloadSurfaceProperties(class CPhysicsSurfacePropertyManager *); /* linkage=_ZN30CPhysicsSurfacePropertyManager23UnloadSurfacePropertiesEv */
	void LoadSurfaceProperties(class CPhysicsSurfacePropertyManager *); /* linkage=_ZN30CPhysicsSurfacePropertyManager21LoadSurfacePropertiesEv */
	void CPhysicsSurfacePropertyManager(class CPhysicsSurfacePropertyManager *); /* linkage=_ZN30CPhysicsSurfacePropertyManagerC4Ev */
	/* <d76051> vphysics2/physicsresources.h:24 */
	virtual const class CPhysSurfaceProperties  * GetDefaultSurfaceProperties(const class CPhysicsSurfacePropertyManager  *); /* linkage=_ZNK30CPhysicsSurfacePropertyManager27GetDefaultSurfacePropertiesEv */
	void CPhysicsSurfacePropertyManager(class CPhysicsSurfacePropertyManager *, const class CPhysicsSurfacePropertyManager  &); /* linkage=_ZN30CPhysicsSurfacePropertyManagerC4ERKS_ */
	virtual const class CPhysSurfaceProperties  * FindSurfaceProperties(const class CPhysicsSurfacePropertyManager  *, class CUtlStringToken, bool *); /* linkage=_ZNK30CPhysicsSurfacePropertyManager21FindSurfacePropertiesE15CUtlStringTokenPb */
	virtual int GetSurfacePropCount(const class CPhysicsSurfacePropertyManager  *); /* linkage=_ZNK30CPhysicsSurfacePropertyManager19GetSurfacePropCountEv */
	virtual const class CPhysSurfaceProperties  * GetSurfaceProperty(const class CPhysicsSurfacePropertyManager  *, int); /* linkage=_ZNK30CPhysicsSurfacePropertyManager18GetSurfacePropertyEi */
	virtual void GetSurfacePropertiesNames(const class CPhysicsSurfacePropertyManager  *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, bool); /* linkage=_ZNK30CPhysicsSurfacePropertyManager25GetSurfacePropertiesNamesEP10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEES5_b */
	virtual void InitializeRnMaterialFromSurfaceProperty(const class CPhysicsSurfacePropertyManager  *, const class CPhysSurfaceProperties  *, class RnMaterial_t *); /* linkage=_ZNK30CPhysicsSurfacePropertyManager39InitializeRnMaterialFromSurfacePropertyEPK22CPhysSurfacePropertiesP12RnMaterial_t */
	virtual class CPhysSurfaceProperties * AddProperty(class CPhysicsSurfacePropertyManager *, class CUtlString, class CUtlString, class CUtlString); /* linkage=_ZN30CPhysicsSurfacePropertyManager11AddPropertyE10CUtlStringS0_S0_ */
	/* <d762d2> vphysics2/physicsresources.cpp:141 */
	int IndexOfHash(class CPhysicsSurfacePropertyManager *, uint32); /* linkage=_ZN30CPhysicsSurfacePropertyManager11IndexOfHashEj */
};

// <009DC8B4> vphysics2/physicsresources.h:17
void CPhysicsSurfacePropertyManager::CPhysicsSurfacePropertyManager()
{
} /* size: 0 */

// <009DBF05> vphysics2/physicsresources.h:18
void CPhysicsSurfacePropertyManager::~CPhysicsSurfacePropertyManager()
{
} /* size: 0 */

// <00D76051> vphysics2/physicsresources.h:24
void CPhysicsSurfacePropertyManager::GetDefaultSurfaceProperties()
{
} /* size: 9 */

// <00D74EE3> vphysics2/physicsresources.h:24
inline void CPhysicsSurfacePropertyManager::GetDefaultSurfaceProperties()
{
} /* size: 0 */

// <00A07DC3> vphysics2/physicsresources.h:51
void CPhysicsDataTypeManager::~CPhysicsDataTypeManager()
{
} /* size: 0 */

// <00A07DA7> vphysics2/physicsresources.h:51
inline void CPhysicsDataTypeManager::~CPhysicsDataTypeManager()
{
} /* size: 0 */

// <00D6A5E9> vphysics2/physicsresources.h:51
// member functions: 10
// member variable: 1
// vtable entries: 3
// class size: 32
class CPhysicsDataTypeManager : public CTypesafeIntrospectedToKV3TypeManager<495958126710, VPhysXAggregateData_t> {
public:
	/* class CTypesafeIntrospectedToKV3TypeManager<495958126710, VPhysXAggregateData_t> <ancestor>; */ /* 0 32 */
	void ~CPhysicsDataTypeManager(CPhysicsDataTypeManager* );
	/* vphysics2/physicsresources.h:55 */
	void CPhysicsDataTypeManager(CPhysicsDataTypeManager* );
	/* vphysics2/physicsresources.cpp:152 */
	virtual CPhysAggregateData* AllocateTypesafe(CPhysicsDataTypeManager* , VPhysXAggregateData_t* , IKV3ResourceAllocatorUtils* );
	/* vphysics2/physicsresources.cpp:160 */
	virtual void DeallocateTypesafe(CPhysicsDataTypeManager* , CPhysAggregateData* , IKV3ResourceDeallocatorUtils* );
	/* vphysics2/physicsresources.cpp:170 */
	virtual void OnReallocateTypesafe(CPhysicsDataTypeManager* , const CPhysAggregateData* , CPhysAggregateData* );
	virtual void OnReallocateTypesafe(class CPhysicsDataTypeManager *, const class CPhysAggregateData  *, class CPhysAggregateData *); /* linkage=_ZN23CPhysicsDataTypeManager20OnReallocateTypesafeEPK18CPhysAggregateDataPS0_ */
	/* <d76210> vphysics2/physicsresources.cpp:160 */
	virtual void DeallocateTypesafe(class CPhysicsDataTypeManager *, class CPhysAggregateData *, class IKV3ResourceDeallocatorUtils *); /* linkage=_ZN23CPhysicsDataTypeManager18DeallocateTypesafeEP18CPhysAggregateDataPN37CTypesafeIntrospectedToKV3TypeManagerILy495958126710E21VPhysXAggregateData_tE28IKV3ResourceDeallocatorUtilsE */
	/* <d76577> vphysics2/physicsresources.cpp:152 */
	virtual class CPhysAggregateData * AllocateTypesafe(class CPhysicsDataTypeManager *, class VPhysXAggregateData_t *, class IKV3ResourceAllocatorUtils *); /* linkage=_ZN23CPhysicsDataTypeManager16AllocateTypesafeEP21VPhysXAggregateData_tPN37CTypesafeIntrospectedToKV3TypeManagerILy495958126710ES0_E26IKV3ResourceAllocatorUtilsE */
	void ~CPhysicsDataTypeManager(class CPhysicsDataTypeManager *); /* linkage=_ZN23CPhysicsDataTypeManagerD4Ev */
	void CPhysicsDataTypeManager(class CPhysicsDataTypeManager *); /* linkage=_ZN23CPhysicsDataTypeManagerC4Ev */
};

// <00A17BA1> vphysics2/physicsresources.h:55
void CPhysicsDataTypeManager::CPhysicsDataTypeManager()
{
} /* size: 0 */

// <00A17B88> vphysics2/physicsresources.h:55
inline void CPhysicsDataTypeManager::CPhysicsDataTypeManager()
{
} /* size: 0 */

