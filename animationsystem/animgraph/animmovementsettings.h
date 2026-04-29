
//
// animationsystem/animgraph/animmovementsettings.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 11
//	class: 1
//

// <007472FE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementsettings.h:9
// member functions: 42
// member variables: 2
// static member variable: 1
// vtable entries: 5
// class size: 16
class CAnimMovementSettings : public IAnimMovementSettings {
public:
	/* class IAnimMovementSettings <ancestor>; */ /* 0 8 */
	void ~CAnimMovementSettings(CAnimMovementSettings* );
	void CAnimMovementSettings(CAnimMovementSettings* , const CAnimMovementSettings& );
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementsettings.h:11 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementsettings.h:11 */
	CAnimMovementSettings* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animmovementsettings_h_schema.gen_cpp:61 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animmovementsettings_h_schema.gen_cpp:90 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animmovementsettings_h_schema.gen_cpp:36 */
	void Schema_CompileTimeVerificationFunction(CAnimMovementSettings* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementsettings.h:11 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementsettings.h:11 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementsettings.h:11 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CAnimMovementSettings* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementsettings.h:12 */
	void KV3TransferPolymorphicClassname(const CAnimMovementSettings* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementsettings.h:12 */
	CAnimMovementSettings* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animmovementsettings_h_schema.gen_cpp:98 */
	virtual void KV3TransferSave(const CAnimMovementSettings* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animmovementsettings_h_schema.gen_cpp:108 */
	virtual void KV3TransferLoad(CAnimMovementSettings* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animmovementsettings_h_schema.gen_cpp:103 */
	void KV3TransferSave_CAnimMovementSettings(const CAnimMovementSettings* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animmovementsettings_h_schema.gen_cpp:113 */
	void KV3TransferLoad_CAnimMovementSettings(CAnimMovementSettings* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementsettings.h:16 */
	void CAnimMovementSettings(CAnimMovementSettings* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementsettings.h:18 */
	virtual void SetShouldCalculateSlope(CAnimMovementSettings* , bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementsettings.h:19 */
	virtual bool ShouldCalculateSlope(const CAnimMovementSettings* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementsettings.h:22 */
	CAnimMovementSettings& operator=(CAnimMovementSettings* , const CAnimMovementSettings& );
	bool m_bShouldCalculateSlope; /* 8 1 */
	/* <75d9cd> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animmovementsettings_h_schema.gen_cpp:90 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN21CAnimMovementSettings32Schema_VerifyBindingIsRegisteredEv */
	void KV3TransferPolymorphicClassname(const class CAnimMovementSettings  *, char &); /* linkage=_ZN21CAnimMovementSettings31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN21CAnimMovementSettings20Schema_StaticBindingEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN21CAnimMovementSettings17GetPrimaryBindingEv */
	void KV3TransferLoad(void); /* linkage=_ZN21CAnimMovementSettings15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave(void); /* linkage=_ZNK21CAnimMovementSettings15KV3TransferSaveEP23CKV3TransferSaveContext */
	void ~CAnimMovementSettings(class CAnimMovementSettings *); /* linkage=_ZN21CAnimMovementSettingsD4Ev */
	void CAnimMovementSettings(class CAnimMovementSettings *, const class CAnimMovementSettings  &); /* linkage=_ZN21CAnimMovementSettingsC4ERKS_ */
	class CAnimMovementSettings * Schema_MarkHelperFn(void); /* linkage=_ZN21CAnimMovementSettings19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN21CAnimMovementSettings15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	void Schema_CompileTimeVerificationFunction(class CAnimMovementSettings *); /* linkage=_ZN21CAnimMovementSettings38Schema_CompileTimeVerificationFunctionEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN21CAnimMovementSettings22Schema_StaticClassnameEv */
	/* <75d636> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementsettings.h:11 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CAnimMovementSettings  *); /* linkage=_ZNK21CAnimMovementSettings21Schema_DynamicBindingEv */
	class CAnimMovementSettings * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN21CAnimMovementSettings32KV3TransferAllocateClassInstanceEPKc */
	virtual void KV3TransferSave(const class CAnimMovementSettings  *, class CKV3TransferSaveContext *); /* linkage=_ZNK21CAnimMovementSettings15KV3TransferSaveEP23CKV3TransferSaveContext */
	virtual void KV3TransferLoad(class CAnimMovementSettings *, class CKV3TransferLoadContext *); /* linkage=_ZN21CAnimMovementSettings15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CAnimMovementSettings(const class CAnimMovementSettings  *, class CKV3TransferSaveContext *); /* linkage=_ZNK21CAnimMovementSettings37KV3TransferSave_CAnimMovementSettingsEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CAnimMovementSettings(class CAnimMovementSettings *, class CKV3TransferLoadContext *); /* linkage=_ZN21CAnimMovementSettings37KV3TransferLoad_CAnimMovementSettingsEP23CKV3TransferLoadContext */
	void CAnimMovementSettings(class CAnimMovementSettings *); /* linkage=_ZN21CAnimMovementSettingsC4Ev */
	virtual void SetShouldCalculateSlope(class CAnimMovementSettings *, bool); /* linkage=_ZN21CAnimMovementSettings23SetShouldCalculateSlopeEb */
	virtual bool ShouldCalculateSlope(const class CAnimMovementSettings  *); /* linkage=_ZNK21CAnimMovementSettings20ShouldCalculateSlopeEv */
	class CAnimMovementSettings & operator=(class CAnimMovementSettings *, const class CAnimMovementSettings  &); /* linkage=_ZN21CAnimMovementSettingsaSERKS_ */
};

// <0075D636> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementsettings.h:11
// function calls: 3
void CAnimMovementSettings::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 90
	Schema_VerifyBindingIsRegistered(void); // 11
	GetPrimaryBinding(void); // 11
} /* size: 75, inline expansions: 3 (78 bytes) */

// <0075954F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementsettings.h:11
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <00759549> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementsettings.h:11
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <00759530> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementsettings.h:11
inline void CAnimMovementSettings::Schema_DynamicBinding()
{
} /* size: 0 */

// <006804EA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementsettings.h:11
inline void Schema_StaticBinding(void)
{
} /* size: 0 */

// <006804C7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementsettings.h:12
inline void KV3TransferPolymorphicClassname(const CAnimMovementSettings* pObject, char& pOutPolymorphicClassName)
{
} /* size: 0 */

// <007594E6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementsettings.h:16
void CAnimMovementSettings::CAnimMovementSettings()
{
} /* size: 0 */

// <007594CD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementsettings.h:16
inline void CAnimMovementSettings::CAnimMovementSettings()
{
} /* size: 0 */

// <0075948F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementsettings.h:18
void CAnimMovementSettings::SetShouldCalculateSlope(bool bValue)
{
} /* size: 9 */

// <00759460> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementsettings.h:19
void CAnimMovementSettings::ShouldCalculateSlope()
{
} /* size: 9 */

// <0075943B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementsettings.h:22
inline void CAnimMovementSettings::operator=(const CAnimMovementSettings& rhs)
{
} /* size: 0 */

