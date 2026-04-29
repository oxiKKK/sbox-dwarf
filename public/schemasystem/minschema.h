
//
// public/schemasystem/minschema.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//
//	functions: 151
//	classes: 187
//

// <000F6C06> ../public/schemasystem/minschema.h:91
void ISchemaSystemTypeScope::ISchemaSystemTypeScope()
{
} /* size: 0 */

// <000F6BEA> ../public/schemasystem/minschema.h:91
inline void ISchemaSystemTypeScope::ISchemaSystemTypeScope()
{
} /* size: 0 */

// <00027760> ../public/schemasystem/minschema.h:91
// member functions: 78
// member variable: 1
// vtable entries: 35
// class size: 8
class ISchemaSystemTypeScope {
	void ISchemaSystemTypeScope(ISchemaSystemTypeScope* , ISchemaSystemTypeScope& );
	void ISchemaSystemTypeScope(ISchemaSystemTypeScope* , const ISchemaSystemTypeScope& );
	void ISchemaSystemTypeScope(ISchemaSystemTypeScope* );
	void ~ISchemaSystemTypeScope(ISchemaSystemTypeScope* );
	int ()(void) * * _vptr.ISchemaSystemTypeScope; /* 0 8 */
	/* ../public/schemasystem/minschema.h:95 */
	virtual CSchemaClassInfo* InstallSchemaClassBinding(ISchemaSystemTypeScope* , const char* , CSchemaClassInfo* );
	/* ../public/schemasystem/minschema.h:96 */
	virtual CSchemaEnumInfo* InstallSchemaEnumBinding(ISchemaSystemTypeScope* , const char* , CSchemaEnumInfo* );
	/* ../public/schemasystem/minschema.h:98 */
	virtual ClassIntrospectionHandle_t FindDeclaredClass(ISchemaSystemTypeScope* , const char* );
	/* ../public/schemasystem/minschema.h:99 */
	virtual EnumIntrospectionHandle_t FindDeclaredEnum(ISchemaSystemTypeScope* , const char* );
	/* ../public/schemasystem/minschema.h:101 */
	virtual CSchemaType* FindBuiltinTypeByName(ISchemaSystemTypeScope* , const char* );
	/* ../public/schemasystem/minschema.h:103 */
	virtual CSchemaType* Type_Builtin(ISchemaSystemTypeScope* , SchemaBuiltinType_t);
	/* ../public/schemasystem/minschema.h:104 */
	virtual CSchemaType* Type_Ptr(ISchemaSystemTypeScope* , CSchemaType* );
	/* ../public/schemasystem/minschema.h:105 */
	virtual CSchemaType* Type_Atomic(ISchemaSystemTypeScope* , const char* , uint16, uint8);
	/* ../public/schemasystem/minschema.h:106 */
	virtual CSchemaType* Type_Atomic_T(ISchemaSystemTypeScope* , const char* , uint16, uint8, CSchemaType* );
	/* ../public/schemasystem/minschema.h:107 */
	virtual CSchemaType* Type_Atomic_CollectionOfT(ISchemaSystemTypeScope* , const char* , uint16, uint8, uint16, CSchemaType* , ISchemaCollectionManipulator* );
	/* ../public/schemasystem/minschema.h:108 */
	virtual CSchemaType* Type_Atomic_TT(ISchemaSystemTypeScope* , const char* , uint16, uint8, CSchemaType* , CSchemaType* );
	/* ../public/schemasystem/minschema.h:109 */
	virtual CSchemaType* Type_Atomic_I(ISchemaSystemTypeScope* , const char* , uint16, uint8, int);
	/* ../public/schemasystem/minschema.h:110 */
	virtual CSchemaType* Type_DeclaredClass(ISchemaSystemTypeScope* , const char* );
	/* ../public/schemasystem/minschema.h:111 */
	virtual CSchemaType* Type_DeclaredEnum(ISchemaSystemTypeScope* , const char* );
	/* ../public/schemasystem/minschema.h:112 */
	virtual CSchemaType* Type_FixedArray(ISchemaSystemTypeScope* , CSchemaType* , int, uint16, uint8);
	/* ../public/schemasystem/minschema.h:113 */
	virtual CSchemaType* Type_Bitfield(ISchemaSystemTypeScope* , int);
	/* ../public/schemasystem/minschema.h:114 */
	virtual CSchemaType* Type_NoschemaType(ISchemaSystemTypeScope* );
	/* ../public/schemasystem/minschema.h:116 */
	virtual CSchemaType* FindType_Atomic(ISchemaSystemTypeScope* , SchemaClassId_t);
	/* ../public/schemasystem/minschema.h:117 */
	virtual CSchemaType* FindType_Atomic_T(ISchemaSystemTypeScope* , SchemaClassId_t, CSchemaType* );
	/* ../public/schemasystem/minschema.h:118 */
	virtual CSchemaType* FindType_Atomic_CollectionOfT(ISchemaSystemTypeScope* , SchemaClassId_t, CSchemaType* );
	/* ../public/schemasystem/minschema.h:119 */
	virtual CSchemaType* FindType_Atomic_TT(ISchemaSystemTypeScope* , SchemaClassId_t, CSchemaType* , CSchemaType* );
	/* ../public/schemasystem/minschema.h:120 */
	virtual CSchemaType* FindType_Atomic_I(ISchemaSystemTypeScope* , SchemaClassId_t, int);
	/* ../public/schemasystem/minschema.h:121 */
	virtual CSchemaType_DeclaredClass* FindType_DeclaredClass(ISchemaSystemTypeScope* , const char* );
	/* ../public/schemasystem/minschema.h:122 */
	virtual CSchemaType_DeclaredEnum* FindType_DeclaredEnum(ISchemaSystemTypeScope* , const char* );
	/* ../public/schemasystem/minschema.h:124 */
	virtual const CSchemaClassInfo* FindRawClassBinding(ISchemaSystemTypeScope* , const char* );
	/* ../public/schemasystem/minschema.h:125 */
	virtual const CSchemaClassInfo* FindRawClassBinding(ISchemaSystemTypeScope* , uint32);
	/* ../public/schemasystem/minschema.h:126 */
	virtual const CSchemaEnumInfo* FindRawEnumBinding(ISchemaSystemTypeScope* , const char* );
	/* ../public/schemasystem/minschema.h:127 */
	virtual const CSchemaEnumInfo* FindRawEnumBinding(ISchemaSystemTypeScope* , uint32);
	/* ../public/schemasystem/minschema.h:129 */
	virtual const char* GetScopeName(ISchemaSystemTypeScope* );
	/* ../public/schemasystem/minschema.h:130 */
	virtual bool IsGlobalScope(ISchemaSystemTypeScope* );
	/* ../public/schemasystem/minschema.h:132 */
	virtual void MarkClassAsRequiringGlobalPromotion(ISchemaSystemTypeScope* , ClassIntrospectionHandle_t);
	/* ../public/schemasystem/minschema.h:133 */
	virtual void MarkEnumAsRequiringGlobalPromotion(ISchemaSystemTypeScope* , EnumIntrospectionHandle_t);
	/* ../public/schemasystem/minschema.h:135 */
	virtual void ResolveAtomicInfoThreadsafe(ISchemaSystemTypeScope* , AtomicTypeIntrospectionHandle_t* , const char* , SchemaClassId_t);
	/* ../public/schemasystem/minschema.h:136 */
	virtual void ResolveEnumInfoThreadsafe(ISchemaSystemTypeScope* , EnumIntrospectionHandle_t* , const char* );
	/* ../public/schemasystem/minschema.h:137 */
	virtual void ResolveClassInfoThreadsafe(ISchemaSystemTypeScope* , ClassIntrospectionHandle_t* , const char* );
	void ISchemaSystemTypeScope(class ISchemaSystemTypeScope *, class ISchemaSystemTypeScope &); /* linkage=_ZN22ISchemaSystemTypeScopeC4EOS_ */
	void ISchemaSystemTypeScope(class ISchemaSystemTypeScope *, const class ISchemaSystemTypeScope  &); /* linkage=_ZN22ISchemaSystemTypeScopeC4ERKS_ */
	void ISchemaSystemTypeScope(class ISchemaSystemTypeScope *); /* linkage=_ZN22ISchemaSystemTypeScopeC4Ev */
	void ~ISchemaSystemTypeScope(class ISchemaSystemTypeScope *); /* linkage=_ZN22ISchemaSystemTypeScopeD4Ev */
	virtual class CSchemaClassInfo * InstallSchemaClassBinding(class ISchemaSystemTypeScope *, const char  *, class CSchemaClassInfo *); /* linkage=_ZN22ISchemaSystemTypeScope25InstallSchemaClassBindingEPKcP16CSchemaClassInfo */
	virtual class CSchemaEnumInfo * InstallSchemaEnumBinding(class ISchemaSystemTypeScope *, const char  *, class CSchemaEnumInfo *); /* linkage=_ZN22ISchemaSystemTypeScope24InstallSchemaEnumBindingEPKcP15CSchemaEnumInfo */
	virtual ClassIntrospectionHandle_t FindDeclaredClass(class ISchemaSystemTypeScope *, const char  *); /* linkage=_ZN22ISchemaSystemTypeScope17FindDeclaredClassEPKc */
	virtual EnumIntrospectionHandle_t FindDeclaredEnum(class ISchemaSystemTypeScope *, const char  *); /* linkage=_ZN22ISchemaSystemTypeScope16FindDeclaredEnumEPKc */
	virtual class CSchemaType * FindBuiltinTypeByName(class ISchemaSystemTypeScope *, const char  *); /* linkage=_ZN22ISchemaSystemTypeScope21FindBuiltinTypeByNameEPKc */
	virtual class CSchemaType * Type_Builtin(class ISchemaSystemTypeScope *, enum SchemaBuiltinType_t); /* linkage=_ZN22ISchemaSystemTypeScope12Type_BuiltinE19SchemaBuiltinType_t */
	virtual class CSchemaType * Type_Ptr(class ISchemaSystemTypeScope *, class CSchemaType *); /* linkage=_ZN22ISchemaSystemTypeScope8Type_PtrEP11CSchemaType */
	virtual class CSchemaType * Type_Atomic(class ISchemaSystemTypeScope *, const char  *, uint16, uint8); /* linkage=_ZN22ISchemaSystemTypeScope11Type_AtomicEPKcth */
	virtual class CSchemaType * Type_Atomic_T(class ISchemaSystemTypeScope *, const char  *, uint16, uint8, class CSchemaType *); /* linkage=_ZN22ISchemaSystemTypeScope13Type_Atomic_TEPKcthP11CSchemaType */
	virtual class CSchemaType * Type_Atomic_CollectionOfT(class ISchemaSystemTypeScope *, const char  *, uint16, uint8, uint16, class CSchemaType *, class ISchemaCollectionManipulator *); /* linkage=_ZN22ISchemaSystemTypeScope25Type_Atomic_CollectionOfTEPKcthtP11CSchemaTypeP28ISchemaCollectionManipulator */
	virtual class CSchemaType * Type_Atomic_TT(class ISchemaSystemTypeScope *, const char  *, uint16, uint8, class CSchemaType *, class CSchemaType *); /* linkage=_ZN22ISchemaSystemTypeScope14Type_Atomic_TTEPKcthP11CSchemaTypeS3_ */
	virtual class CSchemaType * Type_Atomic_I(class ISchemaSystemTypeScope *, const char  *, uint16, uint8, int); /* linkage=_ZN22ISchemaSystemTypeScope13Type_Atomic_IEPKcthi */
	virtual class CSchemaType * Type_DeclaredClass(class ISchemaSystemTypeScope *, const char  *); /* linkage=_ZN22ISchemaSystemTypeScope18Type_DeclaredClassEPKc */
	virtual class CSchemaType * Type_DeclaredEnum(class ISchemaSystemTypeScope *, const char  *); /* linkage=_ZN22ISchemaSystemTypeScope17Type_DeclaredEnumEPKc */
	virtual class CSchemaType * Type_FixedArray(class ISchemaSystemTypeScope *, class CSchemaType *, int, uint16, uint8); /* linkage=_ZN22ISchemaSystemTypeScope15Type_FixedArrayEP11CSchemaTypeith */
	virtual class CSchemaType * Type_Bitfield(class ISchemaSystemTypeScope *, int); /* linkage=_ZN22ISchemaSystemTypeScope13Type_BitfieldEi */
	virtual class CSchemaType * Type_NoschemaType(class ISchemaSystemTypeScope *); /* linkage=_ZN22ISchemaSystemTypeScope17Type_NoschemaTypeEv */
	virtual class CSchemaType * FindType_Atomic(class ISchemaSystemTypeScope *, SchemaClassId_t); /* linkage=_ZN22ISchemaSystemTypeScope15FindType_AtomicEj */
	virtual class CSchemaType * FindType_Atomic_T(class ISchemaSystemTypeScope *, SchemaClassId_t, class CSchemaType *); /* linkage=_ZN22ISchemaSystemTypeScope17FindType_Atomic_TEjP11CSchemaType */
	virtual class CSchemaType * FindType_Atomic_CollectionOfT(class ISchemaSystemTypeScope *, SchemaClassId_t, class CSchemaType *); /* linkage=_ZN22ISchemaSystemTypeScope29FindType_Atomic_CollectionOfTEjP11CSchemaType */
	virtual class CSchemaType * FindType_Atomic_TT(class ISchemaSystemTypeScope *, SchemaClassId_t, class CSchemaType *, class CSchemaType *); /* linkage=_ZN22ISchemaSystemTypeScope18FindType_Atomic_TTEjP11CSchemaTypeS1_ */
	virtual class CSchemaType * FindType_Atomic_I(class ISchemaSystemTypeScope *, SchemaClassId_t, int); /* linkage=_ZN22ISchemaSystemTypeScope17FindType_Atomic_IEji */
	virtual class CSchemaType_DeclaredClass * FindType_DeclaredClass(class ISchemaSystemTypeScope *, const char  *); /* linkage=_ZN22ISchemaSystemTypeScope22FindType_DeclaredClassEPKc */
	virtual class CSchemaType_DeclaredEnum * FindType_DeclaredEnum(class ISchemaSystemTypeScope *, const char  *); /* linkage=_ZN22ISchemaSystemTypeScope21FindType_DeclaredEnumEPKc */
	virtual const class CSchemaClassInfo  * FindRawClassBinding(class ISchemaSystemTypeScope *, const char  *); /* linkage=_ZN22ISchemaSystemTypeScope19FindRawClassBindingEPKc */
	virtual const class CSchemaClassInfo  * FindRawClassBinding(class ISchemaSystemTypeScope *, uint32); /* linkage=_ZN22ISchemaSystemTypeScope19FindRawClassBindingEj */
	virtual const class CSchemaEnumInfo  * FindRawEnumBinding(class ISchemaSystemTypeScope *, const char  *); /* linkage=_ZN22ISchemaSystemTypeScope18FindRawEnumBindingEPKc */
	virtual const class CSchemaEnumInfo  * FindRawEnumBinding(class ISchemaSystemTypeScope *, uint32); /* linkage=_ZN22ISchemaSystemTypeScope18FindRawEnumBindingEj */
	virtual const char  * GetScopeName(class ISchemaSystemTypeScope *); /* linkage=_ZN22ISchemaSystemTypeScope12GetScopeNameEv */
	virtual bool IsGlobalScope(class ISchemaSystemTypeScope *); /* linkage=_ZN22ISchemaSystemTypeScope13IsGlobalScopeEv */
	virtual void MarkClassAsRequiringGlobalPromotion(class ISchemaSystemTypeScope *, ClassIntrospectionHandle_t); /* linkage=_ZN22ISchemaSystemTypeScope35MarkClassAsRequiringGlobalPromotionEPK16CSchemaClassInfo */
	virtual void MarkEnumAsRequiringGlobalPromotion(class ISchemaSystemTypeScope *, EnumIntrospectionHandle_t); /* linkage=_ZN22ISchemaSystemTypeScope34MarkEnumAsRequiringGlobalPromotionEPK15CSchemaEnumInfo */
	virtual void ResolveAtomicInfoThreadsafe(class ISchemaSystemTypeScope *, AtomicTypeIntrospectionHandle_t *, const char  *, SchemaClassId_t); /* linkage=_ZN22ISchemaSystemTypeScope27ResolveAtomicInfoThreadsafeEPPK22SchemaAtomicTypeInfo_tPKcj */
	virtual void ResolveEnumInfoThreadsafe(class ISchemaSystemTypeScope *, EnumIntrospectionHandle_t *, const char  *); /* linkage=_ZN22ISchemaSystemTypeScope25ResolveEnumInfoThreadsafeEPPK15CSchemaEnumInfoPKc */
	virtual void ResolveClassInfoThreadsafe(class ISchemaSystemTypeScope *, ClassIntrospectionHandle_t *, const char  *); /* linkage=_ZN22ISchemaSystemTypeScope26ResolveClassInfoThreadsafeEPPK16CSchemaClassInfoPKc */
};

// <009D431A> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<VPhysXAggregateData_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <00E663F4> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<PermEntityLumpData_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <00F18092> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<World_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <010E5ACB> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<WorldNode_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0412FFE9> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<EngineLoopState_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04130BE4> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<InfoForResourceTypeCModel> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04130C15> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<InfoForResourceTypeIMaterial2> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <041338AD> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<InfoForResourceTypeCTextureBase> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <041A4035> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<EntityIOConnectionData_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <041A4066> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<EntityKeyValueData_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <041A4D45> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<InfoForResourceTypeCEntityLump> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0421E6B3> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CRenderBufferBinding> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0421E89D> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<BakedLightingInfo_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0421EB6A> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<SceneObject_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0421EB9B> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<ExtraVertexStreamOverride_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0421EBCC> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<MaterialOverride_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0421EBFD> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<InfoOverlayData_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0421EC2E> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<WorldNodeOnDiskBufferData_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0421EC5F> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<AggregateMeshInfo_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0421EC90> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<AggregateSceneObject_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0421ECC1> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<InfoForResourceTypeCRenderMesh> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0421F5EC> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<RenderInputLayoutField_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0422025C> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<AABB_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <042D83C0> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<WorldBuilderParams_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <042D8484> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<VoxelVisBlockOffset_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <042D8573> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<NodeData_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0437A631> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<AnimationDecodeDebugDumpElement_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F990AE> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<VPhysics2ShapeDef_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F99172> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<VPhysXConstraintParams_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F991A3> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<VPhysXRange_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F993BE> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CPhysSurfacePropertiesPhysics> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F99546> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<PermModelInfo_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F996FF> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<ModelSkeletonData_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F99761> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<SkeletonBoneBounds_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F99AD3> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CRenderSkeleton> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F99D81> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CAnimCycle> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F99DB2> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CFootCycle> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F99E45> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CFootCycleDefinition> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F99E76> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CFootTrajectories> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F9A6A6> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<RnSphereDesc_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F9A6D7> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<RnCapsuleDesc_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F9A708> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<RnHullDesc_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F9A739> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<RnMeshDesc_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F9A76A> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<RnSoftbodyParticle_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F9A79B> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<RnSoftbodySpring_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F9A7CC> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<RnSoftbodyCapsule_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F9A7FD> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<VPhysXBodyPart_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F9A82E> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<VPhysXConstraint2_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F9A85F> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<VPhysXJoint_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F9A890> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<VPhysXCollisionAttributes_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F9A8F2> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<ModelBoneFlexDriverControl_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F9A923> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<PermModelExtPart_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F9AA90> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<MaterialGroup_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F9AAC1> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<ModelBoneFlexDriver_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F9AB54> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CMaterialDrawDescriptor> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F9AB85> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CDrawCullingData> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F9ABB6> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CHitBox> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F9ABE7> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CHitBoxSet> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F9AC18> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CSceneObjectData> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F9AC7A> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CConstraintSlave> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F9ACAB> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CConstraintTarget> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F9ACDC> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CBoneConstraintPoseSpaceMorph::Input_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F9AD0D> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CBoneConstraintPoseSpaceBone::Input_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F9AD6F> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CMorphBundleData> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F9ADA0> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CMorphRectData> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F9ADD1> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CMorphData> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F9AE33> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CFlexDesc> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F9AE64> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CFlexController> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F9AE95> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CFlexRule> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F9AEC6> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CFootTrajectory> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F9AEF7> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CFootStride> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F9AF28> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CFingerSource> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F9AF59> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CFingerBone> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F9AF8A> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CWristBone> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F9AFBB> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CFingerChain> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F9AFF6> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CBaseConstraint> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F9B724> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<InfoForResourceTypeCPhysAggregateData> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F9B77C> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<InfoForResourceTypeCAnimationGroup> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F9B7D4> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<InfoForResourceTypeCSequenceGroupData> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <054C289E> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CAnimKeyData> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <054C28CF> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CAnimRetargetData> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <054C2B9A> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CAnimBone> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <054C2BCB> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CAnimUser> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <054C2BFC> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CAnimDataChannelDesc> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <054C2C2D> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CAnimRetargetElementData> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <054C2C5E> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CAnimRetargetChainData> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <054C4DC3> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<InfoForResourceTypeCAnimData> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0660A9A7> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<RnSphere_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0660A9D8> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<RnCapsule_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0660AA09> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<RnHull_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0660AA3A> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<RnMesh_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0660AE6F> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<RnPlane_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0660AEA0> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<RnHalfEdge_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0660AED1> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<RnFace_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0660AF02> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<RnNode_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0660AF33> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<RnTriangle_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <06E46BAC> ../../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<vmix_filter_desc_t> {
	/* ../../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0028CD18> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CAnimEncodeDifference> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0028CD49> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CAnimDesc_Flag> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0028CD7A> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CAnimEncodedFrames> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0028CEA0> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CAnimSequenceParams> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0028D17F> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CSeqAutoLayerFlag> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0028D212> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CSeqMultiFetchFlag> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0028D274> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CSeqSeqDescFlag> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0028D2A5> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CSeqMultiFetch> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0028D338> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CSeqTransition> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0028D70C> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<IKBoneNameAndIndex_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0028D73D> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<AnimParamID> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0028D8D1> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CCameraSettings> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0028DBDE> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CAnimInputDamping> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0028DC0F> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<AnimNodeID> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0028DC40> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<AnimOutputID> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0028DCA2> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CNodeConnection> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0028DEEB> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<IKTargetSettings_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0028DFAF> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CBlendCurve> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0028E011> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<AnimTagID> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0028E199> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<AnimStateID> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0028E1FB> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CAnimMotorList> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0028E22C> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CAnimMovementSettings> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0028F296> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CAnimBoneDifference> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0028F2F8> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CAnimUserDifference> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0028F35A> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CAnimMovement> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0028F38B> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CAnimAnimEvent> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0028F3BC> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CAnimActivity> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0028F41E> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CAnimDesc> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0028F44F> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CAnimDecoder> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0028F480> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CAnimFrameSegment> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0028F6AC> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CSeqAutoLayer> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0028F6DD> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CSeqIKLock> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0028F70E> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CFootMotion> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0028F73F> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CSeqCmdLayer> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0028F770> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CSeqPoseSetting> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0028F7A1> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CSeqS1SeqDesc> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0028F803> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CSeqCmdSeqDesc> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0028F834> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CSeqBoneMaskList> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0028F865> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CSeqPoseParamDesc> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0028FA4F> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CAnimNodeManager> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0028FA80> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CAnimParameterList> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0028FAB1> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CAnimTagManager> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0028FAE2> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CAnimMovementManager> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0028FB13> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CAnimGraphSettingsManager> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0028FB44> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CActivityValueList> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0028FB75> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CBoneMergeModel> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <00291398> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CBlendNodeChild> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <002929BC> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CChoiceNodeChild> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <002929ED> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CSolveIKChainAnimNodeChainData> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <00292A1E> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CBlend2DItem> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <00292A4F> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CFootLockItem> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <00292B3B> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CFootStepTriggerItem> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <00292B6C> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CConnectionProxyItem> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <00292CB1> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CAnimationGraph> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <00292E3B> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CAnimParameterBase> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <00292E6C> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CAnimNodeBase> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <00292E9D> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CAnimTagBase> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <00292ECE> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CAnimMotorBase> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <00292F30> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CActivityValues> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <00292F61> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CAnimGraphSettingsGroup> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <00292F92> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CClipProperties> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <00292FC3> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CAnimStateConditionBase> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <00292FF4> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CAnimStateTransition> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <00293025> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CAnimState> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <00293056> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CAnimTagSpan> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <00293087> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CAnimReplayFrame> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <002930B8> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CMotionClip> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <002930E9> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CMotionClipGroup> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <00BFF559> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CAnimData> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <00BFF58B> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CSequenceGroupData> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <00BFF5BD> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CAnimationGroup> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <00BFF5EF> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CAnimationSubGraph> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <00BFF653> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CAnimGraphDebugReplay> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <00F2FEB4> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CAnimNodeList> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0124019C> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CAnimStateList> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <00DDDB63> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<SequenceFloatParam_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <00DDDB94> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<SheetFrameImage_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <00DDDBC5> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<SheetSequence_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <00DDDBF6> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<VsInputSignatureElement_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <00158EB5> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<PermModelData_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0033EE15> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CBoneConstraintBase> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <00439D41> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<CMorphSetData> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <00341247> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<MaterialResourceData_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <00670653> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<MaterialParamInt_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <00670684> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<MaterialParamFloat_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <006706B5> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<MaterialParamVector_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <006706E6> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<MaterialParamTexture_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <00670717> ../public/schemasystem/minschema.h:175
// member function: 1
// class size: 1
class CSchemaTypeOf<MaterialParamString_t> {
	/* ../public/schemasystem/minschema.h:184 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <06E490AC> ../../public/schemasystem/minschema.h:184
inline void Get(ISchemaSystemTypeScope* pTypeScope)
{
} /* size: 0 */

// <04133905> ../public/schemasystem/minschema.h:592
// member functions: 20
// member variable: 1
// vtable entries: 6
// class size: 8
class ISchemaCollectionManipulator {
	void ~ISchemaCollectionManipulator(ISchemaCollectionManipulator* );
	void ISchemaCollectionManipulator(ISchemaCollectionManipulator* , ISchemaCollectionManipulator& );
	void ISchemaCollectionManipulator(ISchemaCollectionManipulator* , const ISchemaCollectionManipulator& );
	void ISchemaCollectionManipulator(ISchemaCollectionManipulator* );
	int ()(void) * * _vptr.ISchemaCollectionManipulator; /* 0 8 */
	/* ../public/schemasystem/minschema.h:595 */
	virtual int Count(ISchemaCollectionManipulator* , void* );
	/* ../public/schemasystem/minschema.h:596 */
	virtual void* Element(ISchemaCollectionManipulator* , void* , int);
	/* ../public/schemasystem/minschema.h:597 */
	virtual void SwapItems(ISchemaCollectionManipulator* , void* , int, int);
	/* ../public/schemasystem/minschema.h:598 */
	virtual void InsertMultipleBefore(ISchemaCollectionManipulator* , void* , int, int);
	/* ../public/schemasystem/minschema.h:599 */
	virtual void RemoveMultiple(ISchemaCollectionManipulator* , void* , int, int);
	/* ../public/schemasystem/minschema.h:600 */
	virtual void SetCount(ISchemaCollectionManipulator* , void* , int);
	void ~ISchemaCollectionManipulator(class ISchemaCollectionManipulator *); /* linkage=_ZN28ISchemaCollectionManipulatorD4Ev */
	void ISchemaCollectionManipulator(class ISchemaCollectionManipulator *, class ISchemaCollectionManipulator &); /* linkage=_ZN28ISchemaCollectionManipulatorC4EOS_ */
	void ISchemaCollectionManipulator(class ISchemaCollectionManipulator *, const class ISchemaCollectionManipulator  &); /* linkage=_ZN28ISchemaCollectionManipulatorC4ERKS_ */
	void ISchemaCollectionManipulator(class ISchemaCollectionManipulator *); /* linkage=_ZN28ISchemaCollectionManipulatorC4Ev */
	virtual int Count(class ISchemaCollectionManipulator *, void *); /* linkage=_ZN28ISchemaCollectionManipulator5CountEPv */
	virtual void * Element(class ISchemaCollectionManipulator *, void *, int); /* linkage=_ZN28ISchemaCollectionManipulator7ElementEPvi */
	virtual void SwapItems(class ISchemaCollectionManipulator *, void *, int, int); /* linkage=_ZN28ISchemaCollectionManipulator9SwapItemsEPvii */
	virtual void InsertMultipleBefore(class ISchemaCollectionManipulator *, void *, int, int); /* linkage=_ZN28ISchemaCollectionManipulator20InsertMultipleBeforeEPvii */
	virtual void RemoveMultiple(class ISchemaCollectionManipulator *, void *, int, int); /* linkage=_ZN28ISchemaCollectionManipulator14RemoveMultipleEPvii */
	virtual void SetCount(class ISchemaCollectionManipulator *, void *, int); /* linkage=_ZN28ISchemaCollectionManipulator8SetCountEPvi */
};

// <06616CEB> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<RnPlane_t> >(void)
{
} /* size: 0 */

// <06616CB5> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<RnHalfEdge_t> >(void)
{
} /* size: 0 */

// <06616C7F> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<RnFace_t> >(void)
{
} /* size: 0 */

// <06616C2A> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<RnNode_t> >(void)
{
} /* size: 0 */

// <06616BF4> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<RnTriangle_t> >(void)
{
} /* size: 0 */

// <054D8B6F> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CBufferString> >(void)
{
} /* size: 0 */

// <054D81D3> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CAnimBone> >(void)
{
} /* size: 0 */

// <054D81B4> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CAnimUser> >(void)
{
} /* size: 0 */

// <054D8195> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CAnimDataChannelDesc> >(void)
{
} /* size: 0 */

// <054D6E13> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CAnimRetargetElementData> >(void)
{
} /* size: 0 */

// <054D6DF4> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CAnimRetargetChainData> >(void)
{
} /* size: 0 */

// <054D613D> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CStrongHandle<InfoForResourceTypeCAnimData> > >(void)
{
} /* size: 0 */

// <05014881> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<RnSphereDesc_t> >(void)
{
} /* size: 0 */

// <0501484B> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<RnCapsuleDesc_t> >(void)
{
} /* size: 0 */

// <05014815> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<RnHullDesc_t> >(void)
{
} /* size: 0 */

// <050147DF> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<RnMeshDesc_t> >(void)
{
} /* size: 0 */

// <0501474C> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<RnSoftbodyParticle_t> >(void)
{
} /* size: 0 */

// <05014716> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<RnSoftbodySpring_t> >(void)
{
} /* size: 0 */

// <050146E0> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<RnSoftbodyCapsule_t> >(void)
{
} /* size: 0 */

// <050146C1> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CTransform> >(void)
{
} /* size: 0 */

// <0501466C> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<VPhysXBodyPart_t> >(void)
{
} /* size: 0 */

// <05014636> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<VPhysXConstraint2_t> >(void)
{
} /* size: 0 */

// <05014600> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<VPhysXJoint_t> >(void)
{
} /* size: 0 */

// <050145CA> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<VPhysXCollisionAttributes_t> >(void)
{
} /* size: 0 */

// <050145AB> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CStrongHandle<InfoForResourceTypeIMaterial2> > >(void)
{
} /* size: 0 */

// <0501458C> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<short int> >(void)
{
} /* size: 0 */

// <0501454E> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<Vector> >(void)
{
} /* size: 0 */

// <0501452F> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<Quaternion> >(void)
{
} /* size: 0 */

// <050144E2> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<ModelBoneFlexDriverControl_t> >(void)
{
} /* size: 0 */

// <050144AC> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<PermModelExtPart_t> >(void)
{
} /* size: 0 */

// <05014476> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CStrongHandle<InfoForResourceTypeCRenderMesh> > >(void)
{
} /* size: 0 */

// <05014457> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<long long unsigned int> >(void)
{
} /* size: 0 */

// <05014402> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CStrongHandle<InfoForResourceTypeCPhysAggregateData> > >(void)
{
} /* size: 0 */

// <050143CC> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup> > >(void)
{
} /* size: 0 */

// <05014396> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CStrongHandle<InfoForResourceTypeCSequenceGroupData> > >(void)
{
} /* size: 0 */

// <05014360> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<MaterialGroup_t> >(void)
{
} /* size: 0 */

// <0501432A> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<ModelBoneFlexDriver_t> >(void)
{
} /* size: 0 */

// <050142F4> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<RenderSkeletonBone_t> >(void)
{
} /* size: 0 */

// <05014288> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CMaterialDrawDescriptor> >(void)
{
} /* size: 0 */

// <05014252> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CDrawCullingData> >(void)
{
} /* size: 0 */

// <0501421C> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CHitBox> >(void)
{
} /* size: 0 */

// <050141E6> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CHitBoxSet> >(void)
{
} /* size: 0 */

// <050141B0> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVectorFixedGrowable<CSceneObjectData, 1> >(void)
{
} /* size: 0 */

// <0501417A> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CBaseConstraint*> >(void)
{
} /* size: 0 */

// <05014144> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CConstraintSlave> >(void)
{
} /* size: 0 */

// <0501410E> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CConstraintTarget> >(void)
{
} /* size: 0 */

// <050140D8> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CBoneConstraintPoseSpaceMorph::Input_t> >(void)
{
} /* size: 0 */

// <050140A2> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CBoneConstraintPoseSpaceBone::Input_t> >(void)
{
} /* size: 0 */

// <05014036> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CMorphBundleData> >(void)
{
} /* size: 0 */

// <05014000> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CMorphRectData> >(void)
{
} /* size: 0 */

// <05013FE1> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<MorphBundleType_t> >(void)
{
} /* size: 0 */

// <05013FAB> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CMorphData> >(void)
{
} /* size: 0 */

// <05013F5E> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CFlexDesc> >(void)
{
} /* size: 0 */

// <05013F28> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CFlexController> >(void)
{
} /* size: 0 */

// <05013EF2> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CFlexRule> >(void)
{
} /* size: 0 */

// <05013EBC> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CFootTrajectory> >(void)
{
} /* size: 0 */

// <05013E86> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CFootStride> >(void)
{
} /* size: 0 */

// <05013E50> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CFingerSource> >(void)
{
} /* size: 0 */

// <05013E1A> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CFingerBone> >(void)
{
} /* size: 0 */

// <05013DE4> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CWristBone> >(void)
{
} /* size: 0 */

// <05013DAE> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CFingerChain> >(void)
{
} /* size: 0 */

// <043821C9> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<AnimationDecodeDebugDumpElement_t> >(void)
{
} /* size: 0 */

// <042E19D8> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<NodeData_t> >(void)
{
} /* size: 0 */

// <0423AB48> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> > >(void)
{
} /* size: 0 */

// <0423A39B> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<AggregateMeshInfo_t> >(void)
{
} /* size: 0 */

// <04239BEC> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<SceneObject_t> >(void)
{
} /* size: 0 */

// <04239BCD> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<InfoOverlayData_t> >(void)
{
} /* size: 0 */

// <04239B97> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<AABB_t> >(void)
{
} /* size: 0 */

// <04239B78> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<AggregateSceneObject_t> >(void)
{
} /* size: 0 */

// <04239B59> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<ExtraVertexStreamOverride_t> >(void)
{
} /* size: 0 */

// <04239B3A> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<MaterialOverride_t> >(void)
{
} /* size: 0 */

// <04239B1B> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<WorldNodeOnDiskBufferData_t> >(void)
{
} /* size: 0 */

// <041B0B80> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<EntityIOConnectionData_t> >(void)
{
} /* size: 0 */

// <041B0594> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCEntityLump> > >(void)
{
} /* size: 0 */

// <041B0574> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<EntityKeyValueData_t> >(void)
{
} /* size: 0 */

// <04141C3A> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CStrongHandle<InfoForResourceTypeCTextureBase> > >(void)
{
} /* size: 0 */

// <04141C1B> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<unsigned char> >(void)
{
} /* size: 0 */

// <04141BFC> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<short unsigned int> >(void)
{
} /* size: 0 */

// <04141BDD> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > >(void)
{
} /* size: 0 */

// <04141BBE> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<int> >(void)
{
} /* size: 0 */

// <04141B9F> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<unsigned int> >(void)
{
} /* size: 0 */

// <04141B80> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<matrix3x4a_t> >(void)
{
} /* size: 0 */

// <04141B61> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<float> >(void)
{
} /* size: 0 */

// <003315AB> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CAnimBoneDifference> >(void)
{
} /* size: 0 */

// <00331575> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CAnimMorphDifference> >(void)
{
} /* size: 0 */

// <0033153F> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CAnimUserDifference> >(void)
{
} /* size: 0 */

// <003314CB> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CAnimFrameBlockAnim> >(void)
{
} /* size: 0 */

// <00331495> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CAnimMovement> >(void)
{
} /* size: 0 */

// <0033145F> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CAnimAnimEvent> >(void)
{
} /* size: 0 */

// <00331429> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CAnimActivity> >(void)
{
} /* size: 0 */

// <0033139E> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CAnimDesc> >(void)
{
} /* size: 0 */

// <00331368> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CAnimDecoder> >(void)
{
} /* size: 0 */

// <00331332> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CAnimFrameSegment> >(void)
{
} /* size: 0 */

// <0033112D> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<std::pair<CBufferString, float> > >(void)
{
} /* size: 0 */

// <003310F7> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CSeqAutoLayer> >(void)
{
} /* size: 0 */

// <003310C1> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CSeqIKLock> >(void)
{
} /* size: 0 */

// <0033108B> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CFootMotion> >(void)
{
} /* size: 0 */

// <00331055> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CSeqCmdLayer> >(void)
{
} /* size: 0 */

// <0033101F> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CSeqPoseSetting> >(void)
{
} /* size: 0 */

// <00330FE9> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CSeqS1SeqDesc> >(void)
{
} /* size: 0 */

// <00330F7D> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CSeqCmdSeqDesc> >(void)
{
} /* size: 0 */

// <00330F47> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CSeqBoneMaskList> >(void)
{
} /* size: 0 */

// <00330F11> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CSeqPoseParamDesc> >(void)
{
} /* size: 0 */

// <00330EDB> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<char*, CUtlMemory<char*, int> > >(void)
{
} /* size: 0 */

// <00330EBC> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<fieldtype_t> >(void)
{
} /* size: 0 */

// <00330E86> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CUtlVector<char const*, CUtlMemory<char const*, int> > > >(void)
{
} /* size: 0 */

// <00330E67> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CUtlVector<int> > >(void)
{
} /* size: 0 */

// <00330E31> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CCompressor<Vector>*> >(void)
{
} /* size: 0 */

// <00330DFB> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CCompressor<Quaternion>*> >(void)
{
} /* size: 0 */

// <00330DC5> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CCompressor<int>*> >(void)
{
} /* size: 0 */

// <00330D8F> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CCompressor<bool>*> >(void)
{
} /* size: 0 */

// <00330D59> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CCompressor<Color>*> >(void)
{
} /* size: 0 */

// <00330D23> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CCompressor<Vector2D>*> >(void)
{
} /* size: 0 */

// <00330CED> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CCompressor<Vector4D>*> >(void)
{
} /* size: 0 */

// <00330C2D> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CBoneMergeModel> >(void)
{
} /* size: 0 */

// <00330BF6> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CSmartPtr<CAnimParameterBase> > >(void)
{
} /* size: 0 */

// <00330BBF> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CSmartPtr<CParameterValue> > >(void)
{
} /* size: 0 */

// <00330B88> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CSmartPtr<CActivityValues> > >(void)
{
} /* size: 0 */

// <00330B52> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CAnimNodeBase*> >(void)
{
} /* size: 0 */

// <00330B1C> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CAnimState*> >(void)
{
} /* size: 0 */

// <00330AE5> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CSmartPtr<CAnimGraphSettingsGroup> > >(void)
{
} /* size: 0 */

// <00330AAE> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CSmartPtr<CClipProperties> > >(void)
{
} /* size: 0 */

// <00330A77> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CSmartPtr<CAnimMotorBase> > >(void)
{
} /* size: 0 */

// <00330A40> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CSmartPtr<CAnimTagSpan> > >(void)
{
} /* size: 0 */

// <00330A0A> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CBlendNodeChild> >(void)
{
} /* size: 0 */

// <003309D3> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CSmartPtr<CAnimState> > >(void)
{
} /* size: 0 */

// <0033099D> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CChoiceNodeChild> >(void)
{
} /* size: 0 */

// <00330967> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CSolveIKChainAnimNodeChainData> >(void)
{
} /* size: 0 */

// <00330948> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CNodeConnection> >(void)
{
} /* size: 0 */

// <00330929> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<AnimTagID> >(void)
{
} /* size: 0 */

// <003308F3> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CBlend2DItem> >(void)
{
} /* size: 0 */

// <003308BD> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CFootLockItem> >(void)
{
} /* size: 0 */

// <00330886> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CSmartPtr<CMotionClipGroup> > >(void)
{
} /* size: 0 */

// <0033084F> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CSmartPtr<CMotionMetricBase> > >(void)
{
} /* size: 0 */

// <003307E3> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CFootStepTriggerItem> >(void)
{
} /* size: 0 */

// <003307AD> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CConnectionProxyItem> >(void)
{
} /* size: 0 */

// <00330776> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CSmartPtr<CAnimStateTransition> > >(void)
{
} /* size: 0 */

// <0033073F> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CSmartPtr<CAnimStateConditionBase> > >(void)
{
} /* size: 0 */

// <00330708> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CSmartPtr<CAnimTagBase> > >(void)
{
} /* size: 0 */

// <003306D1> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CSmartPtr<CMotionClip> > >(void)
{
} /* size: 0 */

// <00330683> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<CSmartPtr<CAnimReplayFrame> > >(void)
{
} /* size: 0 */

// <0032CA1B> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<char const*, CUtlMemory<char const*, int> > >(void)
{
} /* size: 0 */

// <00DE2EC0> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<VsInputSignatureElement_t> >(void)
{
} /* size: 0 */

// <006806E6> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<MaterialParamInt_t> >(void)
{
} /* size: 0 */

// <006806B0> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<MaterialParamFloat_t> >(void)
{
} /* size: 0 */

// <0068067A> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<MaterialParamVector_t> >(void)
{
} /* size: 0 */

// <00680644> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<MaterialParamTexture_t> >(void)
{
} /* size: 0 */

// <0068060E> ../public/schemasystem/minschema.h:610
ISchemaCollectionManipulator* SchemaTypeCollectionManipulatorFor<CUtlVector<MaterialParamString_t> >(void)
{
} /* size: 0 */

