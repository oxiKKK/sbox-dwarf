
//
// public/worldrenderer/entitylumpschema.h
//
//	referenced by: libengine2.so
//
//	functions: 23
//	class: 1
//	structs: 10
//

// <041C09C2> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:24
inline void Get(ISchemaSystemTypeScope* pTypeScope)
{
} /* size: 0 */

// <0419EF5C> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:24
// member functions: 2
// class size: 1
class CSchemaTypeOf<EntityLumpFlags_t> {
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:24 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:24 */
	const char* GetEnumName(void);
};

// <041C0916> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:27
inline void EntityIOConnectionData_t::operator=(const EntityIOConnectionData_t &)
{
} /* size: 0 */

// <041C08FF> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:27
void EntityIOConnectionData_t::EntityIOConnectionData_t()
{
} /* size: 0 */

// <041C08E3> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:27
inline void EntityIOConnectionData_t::EntityIOConnectionData_t()
{
} /* size: 0 */

// <041C08CC> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:27
void EntityIOConnectionData_t::~EntityIOConnectionData_t()
{
} /* size: 0 */

// <041C08B0> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:27
inline void EntityIOConnectionData_t::~EntityIOConnectionData_t()
{
} /* size: 0 */

// <00E1742E> ../public/worldrenderer/entitylumpschema.h:27
// member functions: 14
// member variables: 7
// static member variable: 1
// struct size: 48
struct EntityIOConnectionData_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/worldrenderer/entitylumpschema.h:29 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/worldrenderer/entitylumpschema.h:29 */
	EntityIOConnectionData_t* Schema_MarkHelperFn(void);
	/* ../public/worldrenderer/entitylumpschema.h:29 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/worldrenderer/entitylumpschema.h:29 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/worldrenderer/entitylumpschema.h:29 */
	void Schema_CompileTimeVerificationFunction(EntityIOConnectionData_t* );
	/* ../public/worldrenderer/entitylumpschema.h:29 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/worldrenderer/entitylumpschema.h:29 */
	const char* Schema_StaticClassname(void);
	/* ../public/worldrenderer/entitylumpschema.h:29 */
	const CSchemaClassInfo* Schema_DynamicBinding(const EntityIOConnectionData_t* );
	/* ../public/worldrenderer/entitylumpschema.h:30 */
	EntityIOConnectionData_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/worldrenderer/entitylumpschema.h:30 */
	void KV3TransferSave(const EntityIOConnectionData_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/entitylumpschema.h:30 */
	void KV3TransferLoad(EntityIOConnectionData_t* , CKV3TransferLoadContext* );
	/* ../public/worldrenderer/entitylumpschema.h:30 */
	void KV3TransferSave_EntityIOConnectionData_t(const EntityIOConnectionData_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/entitylumpschema.h:30 */
	void KV3TransferLoad_EntityIOConnectionData_t(EntityIOConnectionData_t* , CKV3TransferLoadContext* );
	CUtlString m_outputName; /* 0 8 */
	uint32 m_targetType; /* 8 4 */
	CUtlString m_targetName; /* 16 8 */
	CUtlString m_inputName; /* 24 8 */
	CUtlString m_overrideParam; /* 32 8 */
	float32 m_flDelay; /* 40 4 */
	int32 m_nTimesToFire; /* 44 4 */
	void ~EntityIOConnectionData_t(EntityIOConnectionData_t* );
};

// <00EDAB7F> ../public/worldrenderer/entitylumpschema.h:27
// member functions: 13
// member variables: 7
// static member variable: 1
// struct size: 48
struct EntityIOConnectionData_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/worldrenderer/entitylumpschema.h:29 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/worldrenderer/entitylumpschema.h:29 */
	EntityIOConnectionData_t* Schema_MarkHelperFn(void);
	/* ../public/worldrenderer/entitylumpschema.h:29 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/worldrenderer/entitylumpschema.h:29 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/worldrenderer/entitylumpschema.h:29 */
	void Schema_CompileTimeVerificationFunction(EntityIOConnectionData_t* );
	/* ../public/worldrenderer/entitylumpschema.h:29 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/worldrenderer/entitylumpschema.h:29 */
	const char* Schema_StaticClassname(void);
	/* ../public/worldrenderer/entitylumpschema.h:29 */
	const CSchemaClassInfo* Schema_DynamicBinding(const EntityIOConnectionData_t* );
	/* ../public/worldrenderer/entitylumpschema.h:30 */
	EntityIOConnectionData_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/worldrenderer/entitylumpschema.h:30 */
	void KV3TransferSave(const EntityIOConnectionData_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/entitylumpschema.h:30 */
	void KV3TransferLoad(EntityIOConnectionData_t* , CKV3TransferLoadContext* );
	/* ../public/worldrenderer/entitylumpschema.h:30 */
	void KV3TransferSave_EntityIOConnectionData_t(const EntityIOConnectionData_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/entitylumpschema.h:30 */
	void KV3TransferLoad_EntityIOConnectionData_t(EntityIOConnectionData_t* , CKV3TransferLoadContext* );
	CUtlString m_outputName; /* 0 8 */
	uint32 m_targetType; /* 8 4 */
	CUtlString m_targetName; /* 16 8 */
	CUtlString m_inputName; /* 24 8 */
	CUtlString m_overrideParam; /* 32 8 */
	float32 m_flDelay; /* 40 4 */
	int32 m_nTimesToFire; /* 44 4 */
};

// <0419EF9F> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:27
// member functions: 16
// member variables: 7
// static member variable: 1
// struct size: 48
struct EntityIOConnectionData_t {
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:30 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:29 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:29 */
	EntityIOConnectionData_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:29 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:29 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:29 */
	void Schema_CompileTimeVerificationFunction(EntityIOConnectionData_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:29 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:29 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:29 */
	const CSchemaClassInfo* Schema_DynamicBinding(const EntityIOConnectionData_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:30 */
	EntityIOConnectionData_t* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:30 */
	void KV3TransferSave(const EntityIOConnectionData_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:30 */
	void KV3TransferLoad(EntityIOConnectionData_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:30 */
	void KV3TransferSave_EntityIOConnectionData_t(const EntityIOConnectionData_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:30 */
	void KV3TransferLoad_EntityIOConnectionData_t(EntityIOConnectionData_t* , CKV3TransferLoadContext* );
	CUtlString m_outputName; /* 0 8 */
	uint32 m_targetType; /* 8 4 */
	CUtlString m_targetName; /* 16 8 */
	CUtlString m_inputName; /* 24 8 */
	CUtlString m_overrideParam; /* 32 8 */
	float32 m_flDelay; /* 40 4 */
	int32 m_nTimesToFire; /* 44 4 */
	void ~EntityIOConnectionData_t(EntityIOConnectionData_t* );
	void EntityIOConnectionData_t(EntityIOConnectionData_t* );
	EntityIOConnectionData_t& operator=(EntityIOConnectionData_t* , const EntityIOConnectionData_t& );
};

// <041C09BC> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:29
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <041C09B6> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:29
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <041C099D> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:29
inline void EntityIOConnectionData_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <041BC1B1> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:44
inline void EntityKeyValueData_t::operator=(const EntityKeyValueData_t &)
{
} /* size: 0 */

// <041BC132> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:44
void EntityKeyValueData_t::EntityKeyValueData_t()
{
} /* size: 0 */

// <041BC116> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:44
inline void EntityKeyValueData_t::EntityKeyValueData_t()
{
} /* size: 0 */

// <041BC0FF> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:44
void EntityKeyValueData_t::~EntityKeyValueData_t()
{
} /* size: 0 */

// <041BC0E3> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:44
inline void EntityKeyValueData_t::~EntityKeyValueData_t()
{
} /* size: 0 */

// <00E17641> ../public/worldrenderer/entitylumpschema.h:44
// member functions: 14
// member variables: 2
// static member variable: 1
// struct size: 56
struct EntityKeyValueData_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/worldrenderer/entitylumpschema.h:46 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/worldrenderer/entitylumpschema.h:46 */
	EntityKeyValueData_t* Schema_MarkHelperFn(void);
	/* ../public/worldrenderer/entitylumpschema.h:46 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/worldrenderer/entitylumpschema.h:46 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/worldrenderer/entitylumpschema.h:46 */
	void Schema_CompileTimeVerificationFunction(EntityKeyValueData_t* );
	/* ../public/worldrenderer/entitylumpschema.h:46 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/worldrenderer/entitylumpschema.h:46 */
	const char* Schema_StaticClassname(void);
	/* ../public/worldrenderer/entitylumpschema.h:46 */
	const CSchemaClassInfo* Schema_DynamicBinding(const EntityKeyValueData_t* );
	/* ../public/worldrenderer/entitylumpschema.h:47 */
	EntityKeyValueData_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/worldrenderer/entitylumpschema.h:47 */
	void KV3TransferSave(const EntityKeyValueData_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/entitylumpschema.h:47 */
	void KV3TransferLoad(EntityKeyValueData_t* , CKV3TransferLoadContext* );
	/* ../public/worldrenderer/entitylumpschema.h:47 */
	void KV3TransferSave_EntityKeyValueData_t(const EntityKeyValueData_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/entitylumpschema.h:47 */
	void KV3TransferLoad_EntityKeyValueData_t(EntityKeyValueData_t* , CKV3TransferLoadContext* );
	CUtlBinaryBlock m_keyValuesData; /* 0 24 */
	CUtlVector<EntityIOConnectionData_t, CUtlMemory<EntityIOConnectionData_t, int> > m_connections; /* 24 32 */
	void ~EntityKeyValueData_t(EntityKeyValueData_t* );
};

// <00EDAD75> ../public/worldrenderer/entitylumpschema.h:44
// member functions: 13
// member variables: 2
// static member variable: 1
// struct size: 56
struct EntityKeyValueData_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/worldrenderer/entitylumpschema.h:46 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/worldrenderer/entitylumpschema.h:46 */
	EntityKeyValueData_t* Schema_MarkHelperFn(void);
	/* ../public/worldrenderer/entitylumpschema.h:46 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/worldrenderer/entitylumpschema.h:46 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/worldrenderer/entitylumpschema.h:46 */
	void Schema_CompileTimeVerificationFunction(EntityKeyValueData_t* );
	/* ../public/worldrenderer/entitylumpschema.h:46 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/worldrenderer/entitylumpschema.h:46 */
	const char* Schema_StaticClassname(void);
	/* ../public/worldrenderer/entitylumpschema.h:46 */
	const CSchemaClassInfo* Schema_DynamicBinding(const EntityKeyValueData_t* );
	/* ../public/worldrenderer/entitylumpschema.h:47 */
	EntityKeyValueData_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/worldrenderer/entitylumpschema.h:47 */
	void KV3TransferSave(const EntityKeyValueData_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/entitylumpschema.h:47 */
	void KV3TransferLoad(EntityKeyValueData_t* , CKV3TransferLoadContext* );
	/* ../public/worldrenderer/entitylumpschema.h:47 */
	void KV3TransferSave_EntityKeyValueData_t(const EntityKeyValueData_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/entitylumpschema.h:47 */
	void KV3TransferLoad_EntityKeyValueData_t(EntityKeyValueData_t* , CKV3TransferLoadContext* );
	CUtlBinaryBlock m_keyValuesData; /* 0 24 */
	CUtlVector<EntityIOConnectionData_t, CUtlMemory<EntityIOConnectionData_t, int> > m_connections; /* 24 32 */
};

// <0419F20D> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:44
// member functions: 16
// member variables: 2
// static member variable: 1
// struct size: 56
struct EntityKeyValueData_t {
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:47 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:46 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:46 */
	EntityKeyValueData_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:46 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:46 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:46 */
	void Schema_CompileTimeVerificationFunction(EntityKeyValueData_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:46 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:46 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:46 */
	const CSchemaClassInfo* Schema_DynamicBinding(const EntityKeyValueData_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:47 */
	EntityKeyValueData_t* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:47 */
	void KV3TransferSave(const EntityKeyValueData_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:47 */
	void KV3TransferLoad(EntityKeyValueData_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:47 */
	void KV3TransferSave_EntityKeyValueData_t(const EntityKeyValueData_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:47 */
	void KV3TransferLoad_EntityKeyValueData_t(EntityKeyValueData_t* , CKV3TransferLoadContext* );
	CUtlBinaryBlock m_keyValuesData; /* 0 24 */
	CUtlVector<EntityIOConnectionData_t, CUtlMemory<EntityIOConnectionData_t, int> > m_connections; /* 24 32 */
	void ~EntityKeyValueData_t(EntityKeyValueData_t* );
	void EntityKeyValueData_t(EntityKeyValueData_t* );
	EntityKeyValueData_t& operator=(EntityKeyValueData_t* , const EntityKeyValueData_t& );
};

// <041C0978> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:46
inline void EntityKeyValueData_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <041B8CC1> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:57
inline void PermEntityLumpData_t::operator=(const PermEntityLumpData_t &)
{
} /* size: 0 */

// <041B8C34> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:57
void PermEntityLumpData_t::PermEntityLumpData_t()
{
} /* size: 0 */

// <041B8C18> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:57
inline void PermEntityLumpData_t::PermEntityLumpData_t()
{
} /* size: 0 */

// <041B80BD> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:57
// variables: 3
// function calls: 56
void PermEntityLumpData_t::~PermEntityLumpData_t()
{
	{
		int i; // 1721
		CUtlMemory<EntityKeyValueData_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<EntityKeyValueData_t, CUtlMemory<EntityKeyValueData_t, int> >::Element(
			int i);  // 1723
		{
			int i; // 1721
			CUtlMemory<EntityIOConnectionData_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<EntityIOConnectionData_t, CUtlMemory<EntityIOConnectionData_t, int> >::Element(
				int i);  // 1723
			CUtlString::~CUtlString(); // 27
			CUtlString::~CUtlString(); // 27
			CUtlString::~CUtlString(); // 27
			CUtlString::~CUtlString(); // 27
			EntityIOConnectionData_t::~EntityIOConnectionData_t(); // 1526
			Destruct<EntityIOConnectionData_t>(EntityIOConnectionData_t* pMemory); // 1723
		}
		CUtlVectorBase<EntityIOConnectionData_t, CUtlMemory<EntityIOConnectionData_t, int> >::RemoveAll(); // 1798
		CUtlMemory<EntityIOConnectionData_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<EntityIOConnectionData_t, int>::Purge(); // 903
		CUtlMemory<EntityIOConnectionData_t, int>::Purge(); // 1799
		CUtlVectorBase<EntityIOConnectionData_t, CUtlMemory<EntityIOConnectionData_t, int> >::Purge(); // 560
		ValidateAlignment<EntityIOConnectionData_t>(void); // 508
		CUtlMemory<EntityIOConnectionData_t, int>::Purge(); // 510
		CUtlMemory<EntityIOConnectionData_t, int>::~CUtlMemory(); // 562
		CUtlVectorBase<EntityIOConnectionData_t, CUtlMemory<EntityIOConnectionData_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<EntityIOConnectionData_t, CUtlMemory<EntityIOConnectionData_t, int> >::~CUtlVector(); // 44
		ValidateAlignment<unsigned char>(void); // 508
		CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned char, int>::Purge(); // 903
		CUtlMemory<unsigned char, int>::Purge(); // 510
		CUtlMemory<unsigned char, int>::~CUtlMemory(); // 19
		CUtlBinaryBlock::~CUtlBinaryBlock(); // 44
		EntityKeyValueData_t::~EntityKeyValueData_t(); // 1526
		Destruct<EntityKeyValueData_t>(EntityKeyValueData_t* pMemory); // 1723
	}
	CUtlVectorBase<EntityKeyValueData_t, CUtlMemory<EntityKeyValueData_t, int> >::RemoveAll(); // 1798
	CUtlMemory<EntityKeyValueData_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<EntityKeyValueData_t, int>::Purge(); // 903
	CUtlMemory<EntityKeyValueData_t, int>::Purge(); // 1799
	CUtlVectorBase<EntityKeyValueData_t, CUtlMemory<EntityKeyValueData_t, int> >::Purge(); // 560
	ValidateAlignment<EntityKeyValueData_t>(void); // 508
	CUtlMemory<EntityKeyValueData_t, int>::Purge(); // 510
	CUtlMemory<EntityKeyValueData_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<EntityKeyValueData_t, CUtlMemory<EntityKeyValueData_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<EntityKeyValueData_t, CUtlMemory<EntityKeyValueData_t, int> >::~CUtlVector(); // 57
	{
		int i; // 1721
		CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCEntityLump>::~CStrongHandle(); // 211
		CStrongHandleCopyable<InfoForResourceTypeCEntityLump>::~CStrongHandleCopyable(); // 1526
		Destruct<CStrongHandleCopyable<InfoForResourceTypeCEntityLump> >(CStrongHandleCopyable<InfoForResourceTypeCEntityLump>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this); // 1798
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::Purge(); // 903
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this); // 560
	ValidateAlignment<CStrongHandleCopyable<InfoForResourceTypeCEntityLump> >(void); // 508
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::Purge(); // 510
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this); // 410
	~CUtlVector(const CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResourceT this); // 57
	CUtlString::~CUtlString(); // 57
	CUtlString::~CUtlString(); // 57
	CUtlString::~CUtlString(); // 57
} /* size: 510, inline expansions: 23 (1678 bytes) */

// <041B80A1> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:57
inline void PermEntityLumpData_t::~PermEntityLumpData_t()
{
} /* size: 0 */

// <00E74C0E> ../public/worldrenderer/entitylumpschema.h:57
void PermEntityLumpData_t::~PermEntityLumpData_t()
{
} /* size: 0 */

// <00E18F1C> ../public/worldrenderer/entitylumpschema.h:57
// member functions: 18
// member variables: 6
// static member variable: 1
// struct size: 96
struct PermEntityLumpData_t {
	/* ../public/worldrenderer/entitylumpschema.h:60 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/worldrenderer/entitylumpschema.h:59 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/worldrenderer/entitylumpschema.h:59 */
	PermEntityLumpData_t* Schema_MarkHelperFn(void);
	/* ../public/worldrenderer/entitylumpschema.h:59 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/worldrenderer/entitylumpschema.h:59 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/worldrenderer/entitylumpschema.h:59 */
	void Schema_CompileTimeVerificationFunction(PermEntityLumpData_t* );
	/* ../public/worldrenderer/entitylumpschema.h:59 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/worldrenderer/entitylumpschema.h:59 */
	const char* Schema_StaticClassname(void);
	/* ../public/worldrenderer/entitylumpschema.h:59 */
	const CSchemaClassInfo* Schema_DynamicBinding(const PermEntityLumpData_t* );
	/* ../public/worldrenderer/entitylumpschema.h:60 */
	PermEntityLumpData_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/worldrenderer/entitylumpschema.h:60 */
	void KV3TransferSave(const PermEntityLumpData_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/entitylumpschema.h:60 */
	void KV3TransferLoad(PermEntityLumpData_t* , CKV3TransferLoadContext* );
	/* ../public/worldrenderer/entitylumpschema.h:60 */
	void KV3TransferSave_PermEntityLumpData_t(const PermEntityLumpData_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/entitylumpschema.h:60 */
	void KV3TransferLoad_PermEntityLumpData_t(PermEntityLumpData_t* , CKV3TransferLoadContext* );
	CUtlString m_name; /* 0 8 */
	CUtlString m_hammerUniqueId; /* 8 8 */
	EntityLumpFlags_t m_flags; /* 16 4 */
	CUtlString m_manifestName; /* 24 8 */
	CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int> > m_childLumps; /* 32 32 */
	CUtlVector<EntityKeyValueData_t, CUtlMemory<EntityKeyValueData_t, int> > m_entityKeyValues; /* 64 32 */
	/* ../public/worldrenderer/entitylumpschema.h:69 */
	const char* GetName(const PermEntityLumpData_t* );
	/* ../public/worldrenderer/entitylumpschema.h:74 */
	EntityLumpFlags_t GetFlags(const PermEntityLumpData_t* );
	/* ../public/worldrenderer/entitylumpschema.h:79 */
	const char* GetManifestName(const PermEntityLumpData_t* );
	/* ../public/worldrenderer/entitylumpschema.h:84 */
	CUtlVector<EntityKeyValueData_t, CUtlMemory<EntityKeyValueData_t, int> >& GetEntities(PermEntityLumpData_t* );
	void ~PermEntityLumpData_t(PermEntityLumpData_t* );
};

// <00EDC5C6> ../public/worldrenderer/entitylumpschema.h:57
// member functions: 17
// member variables: 6
// static member variable: 1
// struct size: 96
struct PermEntityLumpData_t {
	/* ../public/worldrenderer/entitylumpschema.h:60 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/worldrenderer/entitylumpschema.h:59 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/worldrenderer/entitylumpschema.h:59 */
	PermEntityLumpData_t* Schema_MarkHelperFn(void);
	/* ../public/worldrenderer/entitylumpschema.h:59 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/worldrenderer/entitylumpschema.h:59 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/worldrenderer/entitylumpschema.h:59 */
	void Schema_CompileTimeVerificationFunction(PermEntityLumpData_t* );
	/* ../public/worldrenderer/entitylumpschema.h:59 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/worldrenderer/entitylumpschema.h:59 */
	const char* Schema_StaticClassname(void);
	/* ../public/worldrenderer/entitylumpschema.h:59 */
	const CSchemaClassInfo* Schema_DynamicBinding(const PermEntityLumpData_t* );
	/* ../public/worldrenderer/entitylumpschema.h:60 */
	PermEntityLumpData_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/worldrenderer/entitylumpschema.h:60 */
	void KV3TransferSave(const PermEntityLumpData_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/entitylumpschema.h:60 */
	void KV3TransferLoad(PermEntityLumpData_t* , CKV3TransferLoadContext* );
	/* ../public/worldrenderer/entitylumpschema.h:60 */
	void KV3TransferSave_PermEntityLumpData_t(const PermEntityLumpData_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/entitylumpschema.h:60 */
	void KV3TransferLoad_PermEntityLumpData_t(PermEntityLumpData_t* , CKV3TransferLoadContext* );
	CUtlString m_name; /* 0 8 */
	CUtlString m_hammerUniqueId; /* 8 8 */
	EntityLumpFlags_t m_flags; /* 16 4 */
	CUtlString m_manifestName; /* 24 8 */
	CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int> > m_childLumps; /* 32 32 */
	CUtlVector<EntityKeyValueData_t, CUtlMemory<EntityKeyValueData_t, int> > m_entityKeyValues; /* 64 32 */
	/* ../public/worldrenderer/entitylumpschema.h:69 */
	const char* GetName(const PermEntityLumpData_t* );
	/* ../public/worldrenderer/entitylumpschema.h:74 */
	EntityLumpFlags_t GetFlags(const PermEntityLumpData_t* );
	/* ../public/worldrenderer/entitylumpschema.h:79 */
	const char* GetManifestName(const PermEntityLumpData_t* );
	/* ../public/worldrenderer/entitylumpschema.h:84 */
	CUtlVector<EntityKeyValueData_t, CUtlMemory<EntityKeyValueData_t, int> >& GetEntities(PermEntityLumpData_t* );
};

// <00FCDF12> ../public/worldrenderer/entitylumpschema.h:57
// member functions: 17
// member variables: 6
// static member variable: 1
// struct size: 96
struct PermEntityLumpData_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/worldrenderer/entitylumpschema.h:59 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/worldrenderer/entitylumpschema.h:59 */
	PermEntityLumpData_t* Schema_MarkHelperFn(void);
	/* ../public/worldrenderer/entitylumpschema.h:59 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/worldrenderer/entitylumpschema.h:59 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/worldrenderer/entitylumpschema.h:59 */
	void Schema_CompileTimeVerificationFunction(PermEntityLumpData_t* );
	/* ../public/worldrenderer/entitylumpschema.h:59 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/worldrenderer/entitylumpschema.h:59 */
	const char* Schema_StaticClassname(void);
	/* ../public/worldrenderer/entitylumpschema.h:59 */
	const CSchemaClassInfo* Schema_DynamicBinding(const PermEntityLumpData_t* );
	/* ../public/worldrenderer/entitylumpschema.h:60 */
	PermEntityLumpData_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/worldrenderer/entitylumpschema.h:60 */
	void KV3TransferSave(const PermEntityLumpData_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/entitylumpschema.h:60 */
	void KV3TransferLoad(PermEntityLumpData_t* , CKV3TransferLoadContext* );
	/* ../public/worldrenderer/entitylumpschema.h:60 */
	void KV3TransferSave_PermEntityLumpData_t(const PermEntityLumpData_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/entitylumpschema.h:60 */
	void KV3TransferLoad_PermEntityLumpData_t(PermEntityLumpData_t* , CKV3TransferLoadContext* );
	CUtlString m_name; /* 0 8 */
	CUtlString m_hammerUniqueId; /* 8 8 */
	EntityLumpFlags_t m_flags; /* 16 4 */
	CUtlString m_manifestName; /* 24 8 */
	CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int> > m_childLumps; /* 32 32 */
	CUtlVector<EntityKeyValueData_t, CUtlMemory<EntityKeyValueData_t, int> > m_entityKeyValues; /* 64 32 */
	/* ../public/worldrenderer/entitylumpschema.h:69 */
	const char* GetName(const PermEntityLumpData_t* );
	/* ../public/worldrenderer/entitylumpschema.h:74 */
	EntityLumpFlags_t GetFlags(const PermEntityLumpData_t* );
	/* ../public/worldrenderer/entitylumpschema.h:79 */
	const char* GetManifestName(const PermEntityLumpData_t* );
	/* ../public/worldrenderer/entitylumpschema.h:84 */
	CUtlVector<EntityKeyValueData_t, CUtlMemory<EntityKeyValueData_t, int> >& GetEntities(PermEntityLumpData_t* );
};

// <041A0B48> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:57
// member functions: 20
// member variables: 6
// static member variable: 1
// struct size: 96
struct PermEntityLumpData_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:59 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:59 */
	PermEntityLumpData_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:59 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:59 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:59 */
	void Schema_CompileTimeVerificationFunction(PermEntityLumpData_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:59 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:59 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:59 */
	const CSchemaClassInfo* Schema_DynamicBinding(const PermEntityLumpData_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:60 */
	PermEntityLumpData_t* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:60 */
	void KV3TransferSave(const PermEntityLumpData_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:60 */
	void KV3TransferLoad(PermEntityLumpData_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:60 */
	void KV3TransferSave_PermEntityLumpData_t(const PermEntityLumpData_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:60 */
	void KV3TransferLoad_PermEntityLumpData_t(PermEntityLumpData_t* , CKV3TransferLoadContext* );
	CUtlString m_name; /* 0 8 */
	CUtlString m_hammerUniqueId; /* 8 8 */
	EntityLumpFlags_t m_flags; /* 16 4 */
	CUtlString m_manifestName; /* 24 8 */
	CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int> > m_childLumps; /* 32 32 */
	CUtlVector<EntityKeyValueData_t, CUtlMemory<EntityKeyValueData_t, int> > m_entityKeyValues; /* 64 32 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:69 */
	const char* GetName(const PermEntityLumpData_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:74 */
	EntityLumpFlags_t GetFlags(const PermEntityLumpData_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:79 */
	const char* GetManifestName(const PermEntityLumpData_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:84 */
	CUtlVector<EntityKeyValueData_t, CUtlMemory<EntityKeyValueData_t, int> >& GetEntities(PermEntityLumpData_t* );
	void ~PermEntityLumpData_t(PermEntityLumpData_t* );
	void PermEntityLumpData_t(PermEntityLumpData_t* );
	PermEntityLumpData_t& operator=(PermEntityLumpData_t* , const PermEntityLumpData_t& );
};

// <041C0953> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/entitylumpschema.h:59
inline void PermEntityLumpData_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <00F3F563> ../public/worldrenderer/entitylumpschema.h:60
inline void KV3TransferAllocateClassInstance(const char* pDerivedClassName)
{
} /* size: 0 */

